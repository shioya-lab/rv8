//
//  jit.cc
//
//  DANGER - This is machine generated code
//

#include <cstdint>
#include <cstdlib>
#include <cassert>
#include <map>
#include <vector>
#include <memory>
#include <string>

#include "types.h"
#include "host-endian.h"
#include "bits.h"
#include "meta.h"
#include "codec.h"
#include "assembler.h"
#include "jit.h"

using namespace riscv;

inst_t riscv::emit_lui(ireg5 rd, simm32 imm20)
{
	decode dec;
	if (!(rd.valid() && imm20.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lui;
	dec.rd = rd;
	dec.imm = imm20;
	return encode_inst(dec);
}

inst_t riscv::emit_auipc(ireg5 rd, offset32 oimm20)
{
	decode dec;
	if (!(rd.valid() && oimm20.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_auipc;
	dec.rd = rd;
	dec.imm = oimm20;
	return encode_inst(dec);
}

inst_t riscv::emit_jal(ireg5 rd, offset21 jimm20)
{
	decode dec;
	if (!(rd.valid() && jimm20.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_jal;
	dec.rd = rd;
	dec.imm = jimm20;
	return encode_inst(dec);
}

inst_t riscv::emit_jalr(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_jalr;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_beq(ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_beq;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_bne(ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_bne;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_blt(ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_blt;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_bge(ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_bge;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_bltu(ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_bltu;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_bgeu(ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_bgeu;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_lb(ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lb;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_lh(ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lh;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_lw(ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_lbu(ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lbu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_lhu(ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lhu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_sb(ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sb;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	return encode_inst(dec);
}

inst_t riscv::emit_sh(ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sh;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	return encode_inst(dec);
}

inst_t riscv::emit_sw(ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sw;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	return encode_inst(dec);
}

inst_t riscv::emit_addi(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_addi;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_slti(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_slti;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_sltiu(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sltiu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_xori(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_xori;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_ori(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_ori;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_andi(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_andi;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_slli(ireg5 rd, ireg5 rs1, uimm7 shamt7)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt7.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_slli;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt7;
	return encode_inst(dec);
}

inst_t riscv::emit_srli(ireg5 rd, ireg5 rs1, uimm7 shamt7)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt7.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_srli;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt7;
	return encode_inst(dec);
}

inst_t riscv::emit_srai(ireg5 rd, ireg5 rs1, uimm7 shamt7)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt7.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_srai;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt7;
	return encode_inst(dec);
}

inst_t riscv::emit_add(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_add;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_sub(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sub;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_sll(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sll;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_slt(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_slt;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_sltu(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sltu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_xor(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_xor;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_srl(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_srl;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_sra(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sra;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_or(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_or;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_and(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_and;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fence(arg4 pred, arg4 succ)
{
	decode dec;
	if (!(pred.valid() && succ.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fence;
	dec.pred = pred;
	dec.succ = succ;
	return encode_inst(dec);
}

inst_t riscv::emit_fence_i()
{
	decode dec;
	dec.op = rv_op_fence_i;
	return encode_inst(dec);
}

inst_t riscv::emit_lwu(ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lwu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_ld(ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_ld;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_sd(ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	return encode_inst(dec);
}

inst_t riscv::emit_addiw(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_addiw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_slliw(ireg5 rd, ireg5 rs1, uimm5 shamt5)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_slliw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt5;
	return encode_inst(dec);
}

inst_t riscv::emit_srliw(ireg5 rd, ireg5 rs1, uimm5 shamt5)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_srliw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt5;
	return encode_inst(dec);
}

inst_t riscv::emit_sraiw(ireg5 rd, ireg5 rs1, uimm5 shamt5)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sraiw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt5;
	return encode_inst(dec);
}

inst_t riscv::emit_addw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_addw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_subw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_subw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_sllw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sllw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_srlw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_srlw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_sraw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sraw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_ldu(ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_ldu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_lq(ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lq;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_sq(ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sq;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	return encode_inst(dec);
}

inst_t riscv::emit_addid(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_addid;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_sllid(ireg5 rd, ireg5 rs1, uimm6 shamt6)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt6.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sllid;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt6;
	return encode_inst(dec);
}

inst_t riscv::emit_srlid(ireg5 rd, ireg5 rs1, uimm6 shamt6)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt6.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_srlid;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt6;
	return encode_inst(dec);
}

inst_t riscv::emit_sraid(ireg5 rd, ireg5 rs1, uimm6 shamt6)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt6.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sraid;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt6;
	return encode_inst(dec);
}

inst_t riscv::emit_addd(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_addd;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_subd(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_subd;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_slld(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_slld;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_srld(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_srld;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_srad(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_srad;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_mul(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_mul;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_mulh(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_mulh;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_mulhsu(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_mulhsu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_mulhu(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_mulhu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_div(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_div;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_divu(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_divu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_rem(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_rem;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_remu(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_remu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_mulw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_mulw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_divw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_divw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_divuw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_divuw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_remw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_remw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_remuw(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_remuw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_muld(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_muld;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_divd(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_divd;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_divud(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_divud;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_remd(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_remd;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_remud(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_remud;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_lr_w(ireg5 rd, ireg5 rs1, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lr_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_sc_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sc_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoswap_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoswap_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoadd_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoadd_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoxor_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoxor_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoor_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoor_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoand_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoand_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amomin_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amomin_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amomax_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amomax_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amominu_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amominu_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amomaxu_w(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amomaxu_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_lr_d(ireg5 rd, ireg5 rs1, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lr_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_sc_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sc_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoswap_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoswap_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoadd_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoadd_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoxor_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoxor_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoor_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoor_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoand_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoand_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amomin_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amomin_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amomax_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amomax_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amominu_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amominu_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amomaxu_d(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amomaxu_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_lr_q(ireg5 rd, ireg5 rs1, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_lr_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_sc_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sc_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoswap_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoswap_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoadd_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoadd_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoxor_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoxor_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoor_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoor_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amoand_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amoand_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amomin_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amomin_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amomax_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amomax_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amominu_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amominu_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_amomaxu_q(ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_amomaxu_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	return encode_inst(dec);
}

inst_t riscv::emit_ecall()
{
	decode dec;
	dec.op = rv_op_ecall;
	return encode_inst(dec);
}

inst_t riscv::emit_ebreak()
{
	decode dec;
	dec.op = rv_op_ebreak;
	return encode_inst(dec);
}

inst_t riscv::emit_uret()
{
	decode dec;
	dec.op = rv_op_uret;
	return encode_inst(dec);
}

inst_t riscv::emit_sret()
{
	decode dec;
	dec.op = rv_op_sret;
	return encode_inst(dec);
}

inst_t riscv::emit_hret()
{
	decode dec;
	dec.op = rv_op_hret;
	return encode_inst(dec);
}

inst_t riscv::emit_mret()
{
	decode dec;
	dec.op = rv_op_mret;
	return encode_inst(dec);
}

inst_t riscv::emit_dret()
{
	decode dec;
	dec.op = rv_op_dret;
	return encode_inst(dec);
}

inst_t riscv::emit_sfence_vm(ireg5 rs1)
{
	decode dec;
	if (!(rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sfence_vm;
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_sfence_vma(ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_sfence_vma;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_wfi()
{
	decode dec;
	dec.op = rv_op_wfi;
	return encode_inst(dec);
}

inst_t riscv::emit_csrrw(ireg5 rd, ireg5 rs1, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && csr12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_csrrw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = csr12;
	return encode_inst(dec);
}

inst_t riscv::emit_csrrs(ireg5 rd, ireg5 rs1, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && csr12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_csrrs;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = csr12;
	return encode_inst(dec);
}

inst_t riscv::emit_csrrc(ireg5 rd, ireg5 rs1, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && csr12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_csrrc;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = csr12;
	return encode_inst(dec);
}

inst_t riscv::emit_csrrwi(ireg5 rd, uimm5 zimm, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && zimm.valid() && csr12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_csrrwi;
	dec.rd = rd;
	dec.imm = zimm;
	dec.imm = csr12;
	return encode_inst(dec);
}

inst_t riscv::emit_csrrsi(ireg5 rd, uimm5 zimm, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && zimm.valid() && csr12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_csrrsi;
	dec.rd = rd;
	dec.imm = zimm;
	dec.imm = csr12;
	return encode_inst(dec);
}

inst_t riscv::emit_csrrci(ireg5 rd, uimm5 zimm, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && zimm.valid() && csr12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_csrrci;
	dec.rd = rd;
	dec.imm = zimm;
	dec.imm = csr12;
	return encode_inst(dec);
}

inst_t riscv::emit_flw(freg5 frd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_flw;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_fsw(ireg5 rs1, freg5 frs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && frs2.valid() && simm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsw;
	dec.rs1 = rs1;
	dec.rs2 = frs2;
	dec.imm = simm12;
	return encode_inst(dec);
}

inst_t riscv::emit_fmadd_s(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmadd_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmsub_s(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmsub_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fnmsub_s(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fnmsub_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fnmadd_s(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fnmadd_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fadd_s(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fadd_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fsub_s(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsub_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmul_s(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmul_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fdiv_s(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fdiv_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fsgnj_s(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsgnj_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fsgnjn_s(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsgnjn_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fsgnjx_s(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsgnjx_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fmin_s(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmin_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fmax_s(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmax_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fsqrt_s(freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsqrt_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fle_s(ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fle_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_flt_s(ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_flt_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_feq_s(ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_feq_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_w_s(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_w_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_wu_s(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_wu_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_s_w(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_s_w;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_s_wu(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_s_wu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmv_x_s(ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmv_x_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	return encode_inst(dec);
}

inst_t riscv::emit_fclass_s(ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fclass_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	return encode_inst(dec);
}

inst_t riscv::emit_fmv_s_x(freg5 frd, ireg5 rs1)
{
	decode dec;
	if (!(frd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmv_s_x;
	dec.rd = frd;
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_l_s(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_l_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_lu_s(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_lu_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_s_l(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_s_l;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_s_lu(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_s_lu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fld(freg5 frd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fld;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_fsd(ireg5 rs1, freg5 frs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && frs2.valid() && simm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsd;
	dec.rs1 = rs1;
	dec.rs2 = frs2;
	dec.imm = simm12;
	return encode_inst(dec);
}

inst_t riscv::emit_fmadd_d(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmadd_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmsub_d(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmsub_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fnmsub_d(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fnmsub_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fnmadd_d(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fnmadd_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fadd_d(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fadd_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fsub_d(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsub_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmul_d(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmul_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fdiv_d(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fdiv_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fsgnj_d(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsgnj_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fsgnjn_d(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsgnjn_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fsgnjx_d(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsgnjx_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fmin_d(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmin_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fmax_d(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmax_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_s_d(freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_s_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_d_s(freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_d_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fsqrt_d(freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsqrt_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fle_d(ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fle_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_flt_d(ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_flt_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_feq_d(ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_feq_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_w_d(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_w_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_wu_d(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_wu_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_d_w(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_d_w;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_d_wu(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_d_wu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fclass_d(ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fclass_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_l_d(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_l_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_lu_d(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_lu_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmv_x_d(ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmv_x_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_d_l(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_d_l;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_d_lu(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_d_lu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmv_d_x(freg5 frd, ireg5 rs1)
{
	decode dec;
	if (!(frd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmv_d_x;
	dec.rd = frd;
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_flq(freg5 frd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_flq;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_fsq(ireg5 rs1, freg5 frs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && frs2.valid() && simm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsq;
	dec.rs1 = rs1;
	dec.rs2 = frs2;
	dec.imm = simm12;
	return encode_inst(dec);
}

inst_t riscv::emit_fmadd_q(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmadd_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmsub_q(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmsub_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fnmsub_q(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fnmsub_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fnmadd_q(freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fnmadd_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fadd_q(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fadd_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fsub_q(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsub_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmul_q(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmul_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fdiv_q(freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fdiv_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fsgnj_q(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsgnj_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fsgnjn_q(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsgnjn_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fsgnjx_q(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsgnjx_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fmin_q(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmin_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fmax_q(freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmax_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_s_q(freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_s_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_q_s(freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_q_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_d_q(freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_d_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_q_d(freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_q_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fsqrt_q(freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fsqrt_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fle_q(ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fle_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_flt_q(ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_flt_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_feq_q(ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_feq_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_w_q(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_w_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_wu_q(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_wu_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_q_w(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_q_w;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_q_wu(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_q_wu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fclass_q(ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fclass_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_l_q(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_l_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_lu_q(ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_lu_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_q_l(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_q_l;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fcvt_q_lu(freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fcvt_q_lu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	return encode_inst(dec);
}

inst_t riscv::emit_fmv_x_q(ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmv_x_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	return encode_inst(dec);
}

inst_t riscv::emit_fmv_q_x(freg5 frd, ireg5 rs1)
{
	decode dec;
	if (!(frd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_fmv_q_x;
	dec.rd = frd;
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vsetvli(ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsetvli;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	return encode_inst(dec);
}

inst_t riscv::emit_vsetivli(ireg5 rd, simm12 imm12, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && imm12.valid() && oimm12.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsetivli;
	dec.rd = rd;
	dec.imm = imm12;
	dec.imm = oimm12;
	return encode_inst(dec);
}

inst_t riscv::emit_vsetvl(ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsetvl;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_vle8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vle8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vse8_v(vreg5 vs3, ireg5 rs1)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vse8_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vle16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vle16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vse16_v(vreg5 vs3, ireg5 rs1)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vse16_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vle32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vle32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vse32_v(vreg5 vs3, ireg5 rs1)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vse32_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vle64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vle64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vse64_v(vreg5 vs3, ireg5 rs1)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vse64_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vleff8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vleff8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vleff16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vleff16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vleff32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vleff32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vleff64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vleff64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl1re8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl1re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl1re16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl1re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl1re32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl1re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl1re64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl1re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl2re8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl2re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl2re16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl2re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl2re32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl2re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl2re64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl2re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl4re8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl4re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl4re16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl4re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl4re32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl4re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl4re64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl4re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl8re8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl8re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl8re16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl8re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl8re32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl8re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vl8re64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vl8re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs1re8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs1re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs1re16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs1re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs1re32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs1re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs1re64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs1re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs2re8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs2re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs2re16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs2re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs2re32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs2re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs2re64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs2re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs4re8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs4re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs4re16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs4re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs4re32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs4re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs4re64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs4re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs8re8_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs8re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs8re16_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs8re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs8re32_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs8re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vs8re64_v(vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vs8re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vlse8_v(vreg5 vd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vlse8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_vsse8_v(vreg5 vs3, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsse8_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_vlse16_v(vreg5 vd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vlse16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_vsse16_v(vreg5 vs3, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsse16_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_vlse32_v(vreg5 vd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vlse32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_vsse32_v(vreg5 vs3, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsse32_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_vlse64_v(vreg5 vd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vd.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vlse64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_vsse64_v(vreg5 vs3, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid() && rs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsse64_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	return encode_inst(dec);
}

inst_t riscv::emit_vadd_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsub_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vminu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vminu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmin_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmin_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmaxu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmaxu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmax_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmax_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vand_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vand_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vor_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vxor_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vxor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vrgather_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vrgather_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vadc_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vadc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmadc_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmadc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsbc_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsbc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmsbc_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsbc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmerge_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmerge_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmseq_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmseq_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmsne_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsne_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmsltu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsltu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmslt_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmslt_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmsleu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsleu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmsle_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsle_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsaddu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsaddu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsadd_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vssubu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssubu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vssub_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsll_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsll_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsmul_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsmul_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsrl_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsrl_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsra_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsra_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vssrl_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssrl_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vssra_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssra_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vnsrl_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnsrl_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vnsra_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnsra_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vnclipu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnclipu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vnclip_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnclip_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwredsumu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwredsumu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwredsum_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwredsum_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vdotu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vdotu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vdot_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vdot_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vqmaccu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vqmaccu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vqmacc_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vqmacc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vqmaccus_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vqmaccus_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vqmaccsu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vqmaccsu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vadd_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vsub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vrsub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vrsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vminu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vminu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmin_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmin_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmaxu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmaxu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmax_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmax_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vand_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vand_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vor_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vor_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vxor_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vxor_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vrgather_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vrgather_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vslideup_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vslideup_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vslidedown_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vslidedown_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vadc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vadc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmadc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmadc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vsbc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsbc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsbc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsbc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmerge_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmerge_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmseq_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmseq_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsne_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsne_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsltu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsltu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmslt_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmslt_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsleu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsleu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsle_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsle_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsgtu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsgtu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsgt_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsgt_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vsaddu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsaddu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vsadd_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vssubu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssubu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vssub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vsll_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsll_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vsmul_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vsrl_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsrl_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vsra_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsra_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vssrl_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssrl_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vssra_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssra_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vnsrl_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnsrl_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vnsra_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnsra_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vnclipu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnclipu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vnclip_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnclip_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwredsumu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwredsumu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwredsum_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwredsum_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vdotu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vdotu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vdot_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vdot_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vqmaccu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vqmaccu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vqmacc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vqmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vqmaccus_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vqmaccus_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vqmaccsu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vqmaccsu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vadd_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vadd_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vrsub_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vrsub_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vand_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vand_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vor_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vor_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vxor_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vxor_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vrgather_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vrgather_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vslideup_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vslideup_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vslidedown_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vslidedown_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vadc_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vadc_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vmadc_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmadc_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vmv_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmv_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vmseq_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmseq_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsne_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsne_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsleu_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsleu_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsle_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsle_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsgtu_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsgtu_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vmsgt_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsgt_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vmv1r(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmv1r;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmv2r(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmv2r;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmv4r(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmv4r;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmv8r(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmv8r;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsaddu_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsaddu_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vsadd_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsadd_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vsll_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsll_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vsrl_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsrl_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vsra_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsra_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vssrl_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssrl_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vssra_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vssra_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vnsrl_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnsrl_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vnsra_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnsra_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vnclipu_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnclipu_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vnclip_vi(vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnclip_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	return encode_inst(dec);
}

inst_t riscv::emit_vredsum_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vredsum_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vredand_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vredand_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vredor_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vredor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vredxor_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vredxor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vredminu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vredminu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vredmin_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vredmin_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vredmaxu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vredmaxu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vredmax_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vredmax_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vaaddu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vaaddu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vaadd_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vaadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vasubu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vasubu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vasub_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vasub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmv_x_s(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmv_x_s;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vpopc_m(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vpopc_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfirst_m(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfirst_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmv_s_x(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmv_s_x;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vzext_vf8(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vzext_vf8;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsext_vf8(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsext_vf8;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vzext_vf4(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vzext_vf4;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsext_vf4(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsext_vf4;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vzext_vf2(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vzext_vf2;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vsext_vf2(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vsext_vf2;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmsbf_m(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsbf_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmsof_m(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsof_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmsif_m(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmsif_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_viota_m(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_viota_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vid_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vid_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vcompress_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vcompress_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmandnot_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmandnot_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmand_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmand_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmor_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmxor_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmxor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmornot_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmornot_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmnand_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmnand_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmnor_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmnor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmxnor_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmxnor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vdivu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vdivu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vdiv_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vdiv_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vremu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vremu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vrem_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vrem_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmulhu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmulhu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmul_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmul_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmulhsu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmulhsu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmulh_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmulh_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmadd_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vnmsub_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnmsub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmacc_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmacc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vnmsac_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnmsac_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwaddu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwaddu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwadd_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwsubu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwsubu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwsub_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwsub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwaddu_w_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwaddu_w_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwadd_w_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwadd_w_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwsubu_w_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwsubu_w_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwsub_w_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwsub_w_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwmulu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmulu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwmulsu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmulsu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwmul_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmul_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwmaccu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmaccu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwmacc_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmacc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwmaccus_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmaccus_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vwmaccsu_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmaccsu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vaaddu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vaaddu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vaadd_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vaadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vasubu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vasubu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vasub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vasub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vslide1up_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vslide1up_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vslide1down_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vslide1down_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vdivu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vdivu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vdiv_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vdiv_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vremu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vremu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vrem_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vrem_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmulhu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmulhu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmul_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmulhsu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmulhsu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmulh_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmulh_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmadd_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vnmsub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnmsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmacc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vnmsac_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vnmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwaddu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwaddu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwadd_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwsubu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwsubu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwsub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwaddu_w_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwaddu_w_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwadd_w_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwadd_w_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwsubu_w_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwsubu_w_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwsub_w_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwsub_w_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwmulu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmulu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwmulsu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmulsu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwmul_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwmaccu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmaccu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwmacc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwmaccus_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmaccus_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vwmaccsu_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vwmaccsu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfadd_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfredsum_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfredsum_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfsub_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfsub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfredosum_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfredosum_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfmin_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmin_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfredmin_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfredmin_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfmax_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmax_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfredmax_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfredmax_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfsgnj_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfsgnj_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfsgnjn_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfsgnjn_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfsgnjx_vv(vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfsgnjx_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vmfeq_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmfeq_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmfle_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmfle_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmflt_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmflt_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmfne_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmfne_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfdiv_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfdiv_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfcvt_xu_f_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfcvt_xu_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfcvt_x_f_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfcvt_x_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfcvt_f_xu_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfcvt_f_xu_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfcvt_f_x_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfcvt_f_x_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfcvt_rtz_xu_f_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfcvt_rtz_xu_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfcvt_rtz_x_f_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfcvt_rtz_x_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfwcvt_xu_f_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwcvt_xu_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfwcvt_x_f_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwcvt_x_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfwcvt_f_xu_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwcvt_f_xu_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfwcvt_f_x_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwcvt_f_x_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfwcvt_f_f_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwcvt_f_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfwcvt_rtz_xu_f_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwcvt_rtz_xu_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfwcvt_rtz_x_f_v(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwcvt_rtz_x_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfncvt_xu_f_w(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfncvt_xu_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfncvt_x_f_w(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfncvt_x_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfncvt_f_xu_w(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfncvt_f_xu_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfncvt_f_x_w(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfncvt_f_x_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfncvt_f_f_w(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfncvt_f_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfncvt_rod_f_f_w(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfncvt_rod_f_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfncvt_rtz_xu_f_w(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfncvt_rtz_xu_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfncvt_rtz_x_f_w(vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfncvt_rtz_x_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	return encode_inst(dec);
}

inst_t riscv::emit_vfmul_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfrsub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfrsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmadd_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfnmadd_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfnmadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmsub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfnmsub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfnmsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmacc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfnmacc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfnmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmsac_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfnmsac_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfnmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwadd_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwredsum_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwredsum_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwsub_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwredosum_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwredosum_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwadd_wv(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwadd_wv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwsub_wv(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwsub_wv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwmul_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfdot_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfdot_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwmacc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwnmacc_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwnmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwmsac_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwnmsac_vx(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwnmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfadd_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfadd_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfredsum_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfredsum_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfsub_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfredosum_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfredosum_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmin_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmin_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfredmin_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfredmin_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmax_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmax_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfredmax_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfredmax_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfsgnj_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfsgnj_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfsgnjn_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfsgnjn_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfsgnjx_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfsgnjx_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmv_s_f(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmv_s_f;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmv_f_s(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmv_f_s;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmv_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmv_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmfeq_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmfeq_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmfle_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmfle_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmflt_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmflt_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmfne_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmfne_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmfgt_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmfgt_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vmfge_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vmfge_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfdiv_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfdiv_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfrdiv_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfrdiv_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmul_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmul_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfrsub_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfrsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmadd_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmadd_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfnmadd_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfnmadd_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmsub_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfnmsub_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfnmsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmacc_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmacc_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfnmacc_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfnmacc_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfmsac_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfmsac_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfnmsac_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfnmsac_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwadd_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwadd_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwredsum_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwredsum_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwsub_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwredosum_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwredosum_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwadd_wf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwadd_wf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwsub_wf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwsub_wf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwmul_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwmul_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfdot_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfdot_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwmacc_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwmacc_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwnmacc_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwnmacc_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwmsac_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwmsac_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}

inst_t riscv::emit_vfwnmsac_vf(vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return 0; /* illegal instruction */
	dec.op = rv_op_vfwnmsac_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	return encode_inst(dec);
}


bool riscv::asm_lui(assembler &as, ireg5 rd, simm32 imm20)
{
	decode dec;
	if (!(rd.valid() && imm20.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lui;
	dec.rd = rd;
	dec.imm = imm20;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_auipc(assembler &as, ireg5 rd, offset32 oimm20)
{
	decode dec;
	if (!(rd.valid() && oimm20.valid())) return false; /* illegal instruction */
	dec.op = rv_op_auipc;
	dec.rd = rd;
	dec.imm = oimm20;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_jal(assembler &as, ireg5 rd, offset21 jimm20)
{
	decode dec;
	if (!(rd.valid() && jimm20.valid())) return false; /* illegal instruction */
	dec.op = rv_op_jal;
	dec.rd = rd;
	dec.imm = jimm20;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_jalr(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_jalr;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_beq(assembler &as, ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_beq;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_bne(assembler &as, ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_bne;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_blt(assembler &as, ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_blt;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_bge(assembler &as, ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_bge;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_bltu(assembler &as, ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_bltu;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_bgeu(assembler &as, ireg5 rs1, ireg5 rs2, offset13 sbimm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && sbimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_bgeu;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = sbimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lb(assembler &as, ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lb;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lh(assembler &as, ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lh;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lw(assembler &as, ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lbu(assembler &as, ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lbu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lhu(assembler &as, ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lhu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sb(assembler &as, ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sb;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sh(assembler &as, ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sh;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sw(assembler &as, ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sw;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_addi(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_addi;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_slti(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_slti;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sltiu(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sltiu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_xori(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_xori;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_ori(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_ori;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_andi(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_andi;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_slli(assembler &as, ireg5 rd, ireg5 rs1, uimm7 shamt7)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt7.valid())) return false; /* illegal instruction */
	dec.op = rv_op_slli;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt7;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_srli(assembler &as, ireg5 rd, ireg5 rs1, uimm7 shamt7)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt7.valid())) return false; /* illegal instruction */
	dec.op = rv_op_srli;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt7;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_srai(assembler &as, ireg5 rd, ireg5 rs1, uimm7 shamt7)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt7.valid())) return false; /* illegal instruction */
	dec.op = rv_op_srai;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt7;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_add(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_add;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sub(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sub;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sll(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sll;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_slt(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_slt;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sltu(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sltu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_xor(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_xor;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_srl(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_srl;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sra(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sra;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_or(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_or;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_and(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_and;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fence(assembler &as, arg4 pred, arg4 succ)
{
	decode dec;
	if (!(pred.valid() && succ.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fence;
	dec.pred = pred;
	dec.succ = succ;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fence_i(assembler &as)
{
	decode dec;
	dec.op = rv_op_fence_i;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lwu(assembler &as, ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lwu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_ld(assembler &as, ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_ld;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sd(assembler &as, ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_addiw(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_addiw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_slliw(assembler &as, ireg5 rd, ireg5 rs1, uimm5 shamt5)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_slliw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_srliw(assembler &as, ireg5 rd, ireg5 rs1, uimm5 shamt5)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_srliw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sraiw(assembler &as, ireg5 rd, ireg5 rs1, uimm5 shamt5)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sraiw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_addw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_addw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_subw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_subw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sllw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sllw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_srlw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_srlw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sraw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sraw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_ldu(assembler &as, ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_ldu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lq(assembler &as, ireg5 rd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lq;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sq(assembler &as, ireg5 rs1, ireg5 rs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid() && simm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sq;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.imm = simm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_addid(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_addid;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sllid(assembler &as, ireg5 rd, ireg5 rs1, uimm6 shamt6)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt6.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sllid;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt6;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_srlid(assembler &as, ireg5 rd, ireg5 rs1, uimm6 shamt6)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt6.valid())) return false; /* illegal instruction */
	dec.op = rv_op_srlid;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt6;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sraid(assembler &as, ireg5 rd, ireg5 rs1, uimm6 shamt6)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && shamt6.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sraid;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = shamt6;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_addd(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_addd;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_subd(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_subd;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_slld(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_slld;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_srld(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_srld;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_srad(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_srad;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_mul(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_mul;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_mulh(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_mulh;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_mulhsu(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_mulhsu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_mulhu(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_mulhu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_div(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_div;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_divu(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_divu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_rem(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_rem;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_remu(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_remu;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_mulw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_mulw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_divw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_divw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_divuw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_divuw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_remw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_remw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_remuw(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_remuw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_muld(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_muld;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_divd(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_divd;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_divud(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_divud;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_remd(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_remd;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_remud(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_remud;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lr_w(assembler &as, ireg5 rd, ireg5 rs1, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lr_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sc_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sc_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoswap_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoswap_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoadd_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoadd_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoxor_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoxor_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoor_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoor_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoand_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoand_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amomin_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amomin_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amomax_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amomax_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amominu_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amominu_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amomaxu_w(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amomaxu_w;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lr_d(assembler &as, ireg5 rd, ireg5 rs1, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lr_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sc_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sc_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoswap_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoswap_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoadd_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoadd_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoxor_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoxor_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoor_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoor_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoand_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoand_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amomin_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amomin_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amomax_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amomax_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amominu_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amominu_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amomaxu_d(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amomaxu_d;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_lr_q(assembler &as, ireg5 rd, ireg5 rs1, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_lr_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sc_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sc_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoswap_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoswap_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoadd_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoadd_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoxor_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoxor_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoor_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoor_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amoand_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amoand_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amomin_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amomin_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amomax_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amomax_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amominu_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amominu_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_amomaxu_q(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2, arg1 aq, arg1 rl)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid() && aq.valid() && rl.valid())) return false; /* illegal instruction */
	dec.op = rv_op_amomaxu_q;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	dec.aq = aq;
	dec.rl = rl;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_ecall(assembler &as)
{
	decode dec;
	dec.op = rv_op_ecall;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_ebreak(assembler &as)
{
	decode dec;
	dec.op = rv_op_ebreak;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_uret(assembler &as)
{
	decode dec;
	dec.op = rv_op_uret;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sret(assembler &as)
{
	decode dec;
	dec.op = rv_op_sret;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_hret(assembler &as)
{
	decode dec;
	dec.op = rv_op_hret;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_mret(assembler &as)
{
	decode dec;
	dec.op = rv_op_mret;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_dret(assembler &as)
{
	decode dec;
	dec.op = rv_op_dret;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sfence_vm(assembler &as, ireg5 rs1)
{
	decode dec;
	if (!(rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sfence_vm;
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_sfence_vma(assembler &as, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_sfence_vma;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_wfi(assembler &as)
{
	decode dec;
	dec.op = rv_op_wfi;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_csrrw(assembler &as, ireg5 rd, ireg5 rs1, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && csr12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_csrrw;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = csr12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_csrrs(assembler &as, ireg5 rd, ireg5 rs1, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && csr12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_csrrs;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = csr12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_csrrc(assembler &as, ireg5 rd, ireg5 rs1, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && csr12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_csrrc;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = csr12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_csrrwi(assembler &as, ireg5 rd, uimm5 zimm, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && zimm.valid() && csr12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_csrrwi;
	dec.rd = rd;
	dec.imm = zimm;
	dec.imm = csr12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_csrrsi(assembler &as, ireg5 rd, uimm5 zimm, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && zimm.valid() && csr12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_csrrsi;
	dec.rd = rd;
	dec.imm = zimm;
	dec.imm = csr12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_csrrci(assembler &as, ireg5 rd, uimm5 zimm, uimm12 csr12)
{
	decode dec;
	if (!(rd.valid() && zimm.valid() && csr12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_csrrci;
	dec.rd = rd;
	dec.imm = zimm;
	dec.imm = csr12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_flw(assembler &as, freg5 frd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_flw;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsw(assembler &as, ireg5 rs1, freg5 frs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && frs2.valid() && simm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsw;
	dec.rs1 = rs1;
	dec.rs2 = frs2;
	dec.imm = simm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmadd_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmadd_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmsub_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmsub_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fnmsub_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fnmsub_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fnmadd_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fnmadd_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fadd_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fadd_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsub_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsub_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmul_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmul_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fdiv_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fdiv_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsgnj_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsgnj_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsgnjn_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsgnjn_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsgnjx_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsgnjx_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmin_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmin_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmax_s(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmax_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsqrt_s(assembler &as, freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsqrt_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fle_s(assembler &as, ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fle_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_flt_s(assembler &as, ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_flt_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_feq_s(assembler &as, ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_feq_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_w_s(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_w_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_wu_s(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_wu_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_s_w(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_s_w;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_s_wu(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_s_wu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmv_x_s(assembler &as, ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmv_x_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fclass_s(assembler &as, ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fclass_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmv_s_x(assembler &as, freg5 frd, ireg5 rs1)
{
	decode dec;
	if (!(frd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmv_s_x;
	dec.rd = frd;
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_l_s(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_l_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_lu_s(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_lu_s;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_s_l(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_s_l;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_s_lu(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_s_lu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fld(assembler &as, freg5 frd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fld;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsd(assembler &as, ireg5 rs1, freg5 frs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && frs2.valid() && simm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsd;
	dec.rs1 = rs1;
	dec.rs2 = frs2;
	dec.imm = simm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmadd_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmadd_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmsub_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmsub_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fnmsub_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fnmsub_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fnmadd_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fnmadd_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fadd_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fadd_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsub_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsub_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmul_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmul_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fdiv_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fdiv_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsgnj_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsgnj_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsgnjn_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsgnjn_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsgnjx_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsgnjx_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmin_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmin_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmax_d(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmax_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_s_d(assembler &as, freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_s_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_d_s(assembler &as, freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_d_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsqrt_d(assembler &as, freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsqrt_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fle_d(assembler &as, ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fle_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_flt_d(assembler &as, ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_flt_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_feq_d(assembler &as, ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_feq_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_w_d(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_w_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_wu_d(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_wu_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_d_w(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_d_w;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_d_wu(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_d_wu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fclass_d(assembler &as, ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fclass_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_l_d(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_l_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_lu_d(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_lu_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmv_x_d(assembler &as, ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmv_x_d;
	dec.rd = rd;
	dec.rs1 = frs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_d_l(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_d_l;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_d_lu(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_d_lu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmv_d_x(assembler &as, freg5 frd, ireg5 rs1)
{
	decode dec;
	if (!(frd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmv_d_x;
	dec.rd = frd;
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_flq(assembler &as, freg5 frd, ireg5 rs1, offset12 oimm12)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_flq;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsq(assembler &as, ireg5 rs1, freg5 frs2, offset12 simm12)
{
	decode dec;
	if (!(rs1.valid() && frs2.valid() && simm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsq;
	dec.rs1 = rs1;
	dec.rs2 = frs2;
	dec.imm = simm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmadd_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmadd_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmsub_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmsub_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fnmsub_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fnmsub_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fnmadd_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, freg5 frs3, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && frs3.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fnmadd_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rs3 = frs3;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fadd_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fadd_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsub_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsub_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmul_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmul_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fdiv_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fdiv_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsgnj_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsgnj_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsgnjn_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsgnjn_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsgnjx_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsgnjx_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmin_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmin_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmax_q(assembler &as, freg5 frd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmax_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_s_q(assembler &as, freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_s_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_q_s(assembler &as, freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_q_s;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_d_q(assembler &as, freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_d_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_q_d(assembler &as, freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_q_d;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fsqrt_q(assembler &as, freg5 frd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fsqrt_q;
	dec.rd = frd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fle_q(assembler &as, ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fle_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_flt_q(assembler &as, ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_flt_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_feq_q(assembler &as, ireg5 rd, freg5 frs1, freg5 frs2)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && frs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_feq_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rs2 = frs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_w_q(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_w_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_wu_q(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_wu_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_q_w(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_q_w;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_q_wu(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_q_wu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fclass_q(assembler &as, ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fclass_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_l_q(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_l_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_lu_q(assembler &as, ireg5 rd, freg5 frs1, arg3 rm)
{
	decode dec;
	if (!(rd.valid() && frs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_lu_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_q_l(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_q_l;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fcvt_q_lu(assembler &as, freg5 frd, ireg5 rs1, arg3 rm)
{
	decode dec;
	if (!(frd.valid() && rs1.valid() && rm.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fcvt_q_lu;
	dec.rd = frd;
	dec.rs1 = rs1;
	dec.rm = rm;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmv_x_q(assembler &as, ireg5 rd, freg5 frs1)
{
	decode dec;
	if (!(rd.valid() && frs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmv_x_q;
	dec.rd = rd;
	dec.rs1 = frs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_fmv_q_x(assembler &as, freg5 frd, ireg5 rs1)
{
	decode dec;
	if (!(frd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_fmv_q_x;
	dec.rd = frd;
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsetvli(assembler &as, ireg5 rd, ireg5 rs1, simm12 imm12)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && imm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsetvli;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.imm = imm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsetivli(assembler &as, ireg5 rd, simm12 imm12, offset12 oimm12)
{
	decode dec;
	if (!(rd.valid() && imm12.valid() && oimm12.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsetivli;
	dec.rd = rd;
	dec.imm = imm12;
	dec.imm = oimm12;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsetvl(assembler &as, ireg5 rd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(rd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsetvl;
	dec.rd = rd;
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vle8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vle8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vse8_v(assembler &as, vreg5 vs3, ireg5 rs1)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vse8_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vle16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vle16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vse16_v(assembler &as, vreg5 vs3, ireg5 rs1)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vse16_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vle32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vle32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vse32_v(assembler &as, vreg5 vs3, ireg5 rs1)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vse32_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vle64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vle64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vse64_v(assembler &as, vreg5 vs3, ireg5 rs1)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vse64_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vleff8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vleff8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vleff16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vleff16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vleff32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vleff32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vleff64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vleff64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl1re8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl1re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl1re16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl1re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl1re32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl1re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl1re64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl1re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl2re8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl2re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl2re16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl2re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl2re32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl2re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl2re64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl2re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl4re8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl4re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl4re16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl4re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl4re32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl4re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl4re64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl4re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl8re8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl8re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl8re16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl8re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl8re32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl8re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vl8re64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vl8re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs1re8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs1re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs1re16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs1re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs1re32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs1re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs1re64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs1re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs2re8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs2re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs2re16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs2re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs2re32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs2re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs2re64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs2re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs4re8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs4re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs4re16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs4re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs4re32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs4re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs4re64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs4re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs8re8_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs8re8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs8re16_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs8re16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs8re32_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs8re32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vs8re64_v(assembler &as, vreg5 vd, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vs8re64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vlse8_v(assembler &as, vreg5 vd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vlse8_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsse8_v(assembler &as, vreg5 vs3, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsse8_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vlse16_v(assembler &as, vreg5 vd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vlse16_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsse16_v(assembler &as, vreg5 vs3, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsse16_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vlse32_v(assembler &as, vreg5 vd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vlse32_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsse32_v(assembler &as, vreg5 vs3, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsse32_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vlse64_v(assembler &as, vreg5 vd, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vd.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vlse64_v;
/* dec.? = vd unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsse64_v(assembler &as, vreg5 vs3, ireg5 rs1, ireg5 rs2)
{
	decode dec;
	if (!(vs3.valid() && rs1.valid() && rs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsse64_v;
/* dec.? = vs3 unhandled */
	dec.rs1 = rs1;
	dec.rs2 = rs2;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vadd_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsub_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vminu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vminu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmin_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmin_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmaxu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmaxu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmax_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmax_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vand_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vand_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vor_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vxor_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vxor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vrgather_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vrgather_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vadc_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vadc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmadc_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmadc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsbc_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsbc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsbc_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsbc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmerge_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmerge_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmseq_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmseq_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsne_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsne_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsltu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsltu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmslt_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmslt_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsleu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsleu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsle_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsle_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsaddu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsaddu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsadd_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssubu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssubu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssub_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsll_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsll_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsmul_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsmul_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsrl_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsrl_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsra_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsra_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssrl_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssrl_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssra_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssra_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnsrl_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnsrl_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnsra_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnsra_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnclipu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnclipu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnclip_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnclip_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwredsumu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwredsumu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwredsum_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwredsum_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vdotu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vdotu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vdot_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vdot_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vqmaccu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vqmaccu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vqmacc_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vqmacc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vqmaccus_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vqmaccus_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vqmaccsu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vqmaccsu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vadd_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vrsub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vrsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vminu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vminu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmin_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmin_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmaxu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmaxu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmax_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmax_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vand_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vand_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vor_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vor_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vxor_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vxor_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vrgather_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vrgather_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vslideup_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vslideup_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vslidedown_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vslidedown_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vadc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vadc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmadc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmadc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsbc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsbc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsbc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsbc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmerge_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmerge_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmseq_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmseq_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsne_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsne_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsltu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsltu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmslt_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmslt_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsleu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsleu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsle_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsle_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsgtu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsgtu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsgt_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsgt_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsaddu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsaddu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsadd_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssubu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssubu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsll_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsll_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsmul_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsrl_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsrl_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsra_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsra_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssrl_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssrl_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssra_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssra_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnsrl_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnsrl_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnsra_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnsra_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnclipu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnclipu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnclip_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnclip_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwredsumu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwredsumu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwredsum_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwredsum_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vdotu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vdotu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vdot_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vdot_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vqmaccu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vqmaccu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vqmacc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vqmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vqmaccus_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vqmaccus_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vqmaccsu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vqmaccsu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vadd_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vadd_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vrsub_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vrsub_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vand_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vand_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vor_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vor_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vxor_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vxor_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vrgather_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vrgather_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vslideup_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vslideup_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vslidedown_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vslidedown_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vadc_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vadc_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmadc_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmadc_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmv_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmv_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmseq_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmseq_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsne_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsne_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsleu_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsleu_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsle_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsle_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsgtu_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsgtu_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsgt_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsgt_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmv1r(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmv1r;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmv2r(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmv2r;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmv4r(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmv4r;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmv8r(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmv8r;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsaddu_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsaddu_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsadd_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsadd_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsll_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsll_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsrl_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsrl_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsra_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsra_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssrl_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssrl_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vssra_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vssra_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnsrl_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnsrl_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnsra_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnsra_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnclipu_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnclipu_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnclip_vi(assembler &as, vreg5 vd, vreg5 vs2, simm1 simm5)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && simm5.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnclip_vi;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.imm = simm5;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vredsum_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vredsum_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vredand_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vredand_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vredor_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vredor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vredxor_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vredxor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vredminu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vredminu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vredmin_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vredmin_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vredmaxu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vredmaxu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vredmax_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vredmax_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vaaddu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vaaddu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vaadd_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vaadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vasubu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vasubu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vasub_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vasub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmv_x_s(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmv_x_s;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vpopc_m(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vpopc_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfirst_m(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfirst_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmv_s_x(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmv_s_x;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vzext_vf8(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vzext_vf8;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsext_vf8(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsext_vf8;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vzext_vf4(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vzext_vf4;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsext_vf4(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsext_vf4;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vzext_vf2(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vzext_vf2;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vsext_vf2(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vsext_vf2;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsbf_m(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsbf_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsof_m(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsof_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmsif_m(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmsif_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_viota_m(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_viota_m;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vid_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vid_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vcompress_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vcompress_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmandnot_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmandnot_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmand_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmand_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmor_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmxor_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmxor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmornot_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmornot_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmnand_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmnand_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmnor_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmnor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmxnor_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmxnor_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vdivu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vdivu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vdiv_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vdiv_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vremu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vremu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vrem_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vrem_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmulhu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmulhu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmul_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmul_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmulhsu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmulhsu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmulh_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmulh_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmadd_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnmsub_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnmsub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmacc_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmacc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnmsac_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnmsac_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwaddu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwaddu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwadd_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwsubu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwsubu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwsub_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwsub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwaddu_w_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwaddu_w_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwadd_w_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwadd_w_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwsubu_w_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwsubu_w_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwsub_w_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwsub_w_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmulu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmulu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmulsu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmulsu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmul_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmul_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmaccu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmaccu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmacc_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmacc_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmaccus_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmaccus_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmaccsu_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmaccsu_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vaaddu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vaaddu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vaadd_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vaadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vasubu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vasubu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vasub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vasub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vslide1up_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vslide1up_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vslide1down_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vslide1down_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vdivu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vdivu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vdiv_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vdiv_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vremu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vremu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vrem_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vrem_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmulhu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmulhu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmul_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmulhsu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmulhsu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmulh_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmulh_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmadd_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnmsub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnmsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmacc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vnmsac_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vnmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwaddu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwaddu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwadd_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwsubu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwsubu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwsub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwaddu_w_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwaddu_w_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwadd_w_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwadd_w_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwsubu_w_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwsubu_w_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwsub_w_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwsub_w_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmulu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmulu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmulsu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmulsu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmul_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmaccu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmaccu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmacc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmaccus_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmaccus_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vwmaccsu_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vwmaccsu_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfadd_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfadd_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfredsum_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfredsum_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfsub_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfsub_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfredosum_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfredosum_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmin_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmin_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfredmin_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfredmin_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmax_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmax_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfredmax_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfredmax_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfsgnj_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfsgnj_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfsgnjn_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfsgnjn_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfsgnjx_vv(assembler &as, vreg5 vd, vreg5 vs2, vreg5 vs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && vs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfsgnjx_vv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
/* dec.? = vs1 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmfeq_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmfeq_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmfle_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmfle_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmflt_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmflt_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmfne_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmfne_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfdiv_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfdiv_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfcvt_xu_f_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfcvt_xu_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfcvt_x_f_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfcvt_x_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfcvt_f_xu_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfcvt_f_xu_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfcvt_f_x_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfcvt_f_x_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfcvt_rtz_xu_f_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfcvt_rtz_xu_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfcvt_rtz_x_f_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfcvt_rtz_x_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwcvt_xu_f_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwcvt_xu_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwcvt_x_f_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwcvt_x_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwcvt_f_xu_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwcvt_f_xu_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwcvt_f_x_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwcvt_f_x_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwcvt_f_f_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwcvt_f_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwcvt_rtz_xu_f_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwcvt_rtz_xu_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwcvt_rtz_x_f_v(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwcvt_rtz_x_f_v;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfncvt_xu_f_w(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfncvt_xu_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfncvt_x_f_w(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfncvt_x_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfncvt_f_xu_w(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfncvt_f_xu_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfncvt_f_x_w(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfncvt_f_x_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfncvt_f_f_w(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfncvt_f_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfncvt_rod_f_f_w(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfncvt_rod_f_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfncvt_rtz_xu_f_w(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfncvt_rtz_xu_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfncvt_rtz_x_f_w(assembler &as, vreg5 vd, vreg5 vs2)
{
	decode dec;
	if (!(vd.valid() && vs2.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfncvt_rtz_x_f_w;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmul_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfrsub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfrsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmadd_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfnmadd_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfnmadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmsub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfnmsub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfnmsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmacc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfnmacc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfnmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmsac_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfnmsac_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfnmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwadd_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwadd_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwredsum_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwredsum_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwsub_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwsub_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwredosum_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwredosum_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwadd_wv(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwadd_wv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwsub_wv(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwsub_wv;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwmul_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwmul_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfdot_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfdot_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwmacc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwnmacc_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwnmacc_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwmsac_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwnmsac_vx(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwnmsac_vx;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfadd_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfadd_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfredsum_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfredsum_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfsub_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfredosum_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfredosum_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmin_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmin_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfredmin_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfredmin_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmax_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmax_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfredmax_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfredmax_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfsgnj_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfsgnj_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfsgnjn_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfsgnjn_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfsgnjx_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfsgnjx_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmv_s_f(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmv_s_f;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmv_f_s(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmv_f_s;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmv_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmv_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmfeq_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmfeq_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmfle_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmfle_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmflt_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmflt_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmfne_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmfne_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmfgt_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmfgt_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vmfge_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vmfge_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfdiv_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfdiv_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfrdiv_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfrdiv_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmul_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmul_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfrsub_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfrsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmadd_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmadd_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfnmadd_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfnmadd_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmsub_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfnmsub_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfnmsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmacc_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmacc_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfnmacc_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfnmacc_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfmsac_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfmsac_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfnmsac_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfnmsac_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwadd_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwadd_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwredsum_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwredsum_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwsub_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwsub_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwredosum_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwredosum_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwadd_wf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwadd_wf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwsub_wf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwsub_wf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwmul_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwmul_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfdot_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfdot_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwmacc_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwmacc_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwnmacc_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwnmacc_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwmsac_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwmsac_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}

bool riscv::asm_vfwnmsac_vf(assembler &as, vreg5 vd, vreg5 vs2, ireg5 rs1)
{
	decode dec;
	if (!(vd.valid() && vs2.valid() && rs1.valid())) return false; /* illegal instruction */
	dec.op = rv_op_vfwnmsac_vf;
/* dec.? = vd unhandled */
/* dec.? = vs2 unhandled */
	dec.rs1 = rs1;
	as.add_inst(encode_inst(dec));
	return true;
}


