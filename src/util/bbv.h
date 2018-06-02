#ifndef BBV_COUNT_H
#define BBV_COUNT_H

#define __STDC_LIMIT_MACROS
#include <stdint.h>
#include <vector>
#include <string>

namespace riscv {

class Bbv
{
   private:
      uint64_t m_instrs;
      std::vector<uint64_t> m_bbv_counts;

   public:
      // Number of dimensions to project BBVs to
      // Make sure this remains a multiple of four, or update the unrolled loop in BbvCount::count
      static const int NUM_BBV = 16;

      Bbv();
      void count(uint64_t address, uint64_t count);
      void clear();
      void clear_all();
      void save(std::string filename = "");

      uint64_t getDimension(int dim) const { return m_bbv_counts.at(dim); }
      uint64_t getInstructionCount(void) const { return m_instrs; }
};

class BbvCount
{

   private:
      Bbv m_bbv;
      unsigned long m_bbv_base = 0;
      uint64_t m_bbv_count = 0;
      unsigned long m_bbv_last = 0;
      bool m_bbv_end = false;

      int m_save_periodic;

   public:
      BbvCount(int save_periodic = 1000000) : m_save_periodic(save_periodic) {}
      void count(unsigned long addr, uint32_t size, bool is_branch);
      void clear() { m_bbv.clear(); }
      void save() { m_bbv.save(); }
};

}

#endif // BBV_COUNT_H
