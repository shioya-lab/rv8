#include "bbv.h"

#include <algorithm>
#include <iostream>
#include <fstream>

using namespace riscv;

// RNG parameters, defaults taken from drand48
#define RNG_A __UINT64_C(0x5DEECE66D)
#define RNG_C __UINT64_C(0xB)
#define RNG_M ((__UINT64_C(1) << 48) - 1)

// Same as drand48, but inlined for efficiency
inline uint64_t rng_next(uint64_t &state)
{
   state = (RNG_A * state + RNG_C) & RNG_M;
   return state >> 16;
}
inline uint64_t rng_seed(uint64_t seed)
{
   return (seed << 16) + 0x330E;
}


Bbv::Bbv()
   : m_instrs(0)
   , m_bbv_counts(NUM_BBV, 0)
{
}

void
Bbv::count(uint64_t address, uint64_t count)
{
   m_instrs += count;

   // Perform random projection of basic-block vectors onto NUM_BBV dimensions
   // As there are too many BBVs, we cannot store the projection matrix, rather,
   // we re-generate it on request using an RNG seeded with the BBV address.
   // Since this is a hot loop in FAST_FORWARD mode, use an inlined RNG
   // and four parallel code paths to exploit as much ILP as possible.
   uint64_t s0 = rng_seed(address), s1 = rng_seed(address + 1), s2 = rng_seed(address + 2), s3 = rng_seed(address + 3);
   for(int i = 0; i < NUM_BBV; i += 4)
   {
      uint64_t weight = rng_next(s0);
      m_bbv_counts[i] += (weight & 0xffff) * count;
      weight = rng_next(s1);
      m_bbv_counts[i+1] += (weight & 0xffff) * count;
      weight = rng_next(s2);
      m_bbv_counts[i+2] += (weight & 0xffff) * count;
      weight = rng_next(s3);
      m_bbv_counts[i+3] += (weight & 0xffff) * count;
   }
}

void
Bbv::clear()
{
   for(int i = 0; i < Bbv::NUM_BBV; ++i)
      m_bbv_counts[i] = 0;
}

void
Bbv::clear_all()
{
   clear();
   m_instrs = 0;
}

void
Bbv::save(std::string filename)
{
   if (m_instrs == 0) {
      return;
   }

   std::ofstream bbfile("rv8.bb", std::ios_base::app);

   bbfile << "T";
   for (auto n = 0 ; n < NUM_BBV ; n++) {
       if (n != 0) {
           bbfile << " ";
       }
       bbfile << ":" << (n+1) << ":" << m_bbv_counts[n];
   }
   bbfile << "\n";
   bbfile << "C:"<<m_instrs<<"\n";
}

void
BbvCount::count(unsigned long addr, uint32_t size, bool is_branch)
{
   // Reconstruct basic blocks
   if (m_bbv_end || m_bbv_last != addr)
   {
      // We're the start of a new basic block
      m_bbv.count(m_bbv_base, m_bbv_count);
      m_bbv_base = addr;
      m_bbv_count = 0;
   }
   m_bbv_count++;
   m_bbv_last = addr + size;
   // Force BBV end on non-taken branches
   m_bbv_end = is_branch;

   if (((m_bbv.getInstructionCount()+m_bbv_count) % m_save_periodic) == 0) {
      m_bbv.save();
      m_bbv.clear();
   }
}

