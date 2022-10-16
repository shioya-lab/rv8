//
//  switch.h
//
//  DANGER - This is machine generated code
//

#ifndef rv_switch_h
#define rv_switch_h

/* Decode Instruction Opcode */

template <bool rv32, bool rv64, bool rv128, bool rvi, bool rvm, bool rva, bool rvs, bool rvf, bool rvd, bool rvq, bool rvc, bool rvv>
inline opcode_t decode_inst_op(riscv::inst_t inst)
{
	opcode_t op = rv_op_illegal;
	switch (((inst >> 0) & 0b11) /* inst[1:0] */) {
		case 0:
			// c.addi4spn c.fld c.lw c.flw c.fsd c.sw c.fsw c.ld c.sd c.lq c.sq
			switch (((inst >> 13) & 0b111) /* inst[15:13] */) {
				case 0: if (rvc) op = rv_op_c_addi4spn; break;
				case 1: if (rvc) op = rv_op_c_fld; break; // c.fld c.lq
				case 2: if (rvc) op = rv_op_c_lw; break;
				case 3: 
					if (rvc && rv32) op = rv_op_c_flw;
					else if (rvc && rv64) op = rv_op_c_ld;
					break;
				case 5: if (rvc) op = rv_op_c_fsd; break; // c.fsd c.sq
				case 6: if (rvc) op = rv_op_c_sw; break;
				case 7: 
					if (rvc && rv32) op = rv_op_c_fsw;
					else if (rvc && rv64) op = rv_op_c_sd;
					break;
			}
			break;
		case 1:
			// c.nop c.addi c.jal c.li c.addi16sp c.lui c.srli c.srai c.andi c.sub c.xor c.or ...
			switch (((inst >> 13) & 0b111) /* inst[15:13] */) {
				case 0:
					// c.nop c.addi
					switch (((inst >> 2) & 0b11111111111) /* inst[12:2] */) {
						case 0: if (rvc) op = rv_op_c_nop; break;
						default: if (rvc) op = rv_op_c_addi; break;
					}
					break;
				case 1: 
					if (rvc && rv32) op = rv_op_c_jal;
					else if (rvc && rv64) op = rv_op_c_addiw;
					break;
				case 2: if (rvc) op = rv_op_c_li; break;
				case 3:
					// c.addi16sp c.lui
					switch (((inst >> 7) & 0b11111) /* inst[11:7] */) {
						case 2: if (rvc) op = rv_op_c_addi16sp; break;
						default: if (rvc) op = rv_op_c_lui; break;
					}
					break;
				case 4:
					// c.srli c.srai c.andi c.sub c.xor c.or c.and c.subw c.addw c.srli c.srai
					switch (((inst >> 10) & 0b11) /* inst[11:10] */) {
						case 0: 
							if (rvc && rv32) op = rv_op_c_srli;
							else if (rvc && rv64) op = rv_op_c_srli;
							break;
						case 1: 
							if (rvc && rv32) op = rv_op_c_srai;
							else if (rvc && rv64) op = rv_op_c_srai;
							break;
						case 2: if (rvc) op = rv_op_c_andi; break;
						case 3:
							// c.sub c.xor c.or c.and c.subw c.addw
							switch (((inst >> 10) & 0b100) | ((inst >> 5) & 0b011) /* inst[12|6:5] */) {
								case 0: if (rvc) op = rv_op_c_sub; break;
								case 1: if (rvc) op = rv_op_c_xor; break;
								case 2: if (rvc) op = rv_op_c_or; break;
								case 3: if (rvc) op = rv_op_c_and; break;
								case 4: if (rvc) op = rv_op_c_subw; break;
								case 5: if (rvc) op = rv_op_c_addw; break;
							}
							break;
					}
					break;
				case 5: if (rvc) op = rv_op_c_j; break;
				case 6: if (rvc) op = rv_op_c_beqz; break;
				case 7: if (rvc) op = rv_op_c_bnez; break;
			}
			break;
		case 2:
			// c.slli c.fldsp c.lwsp c.flwsp c.jr c.mv c.ebreak c.jalr c.add c.fsdsp c.swsp c.fswsp ...
			switch (((inst >> 13) & 0b111) /* inst[15:13] */) {
				case 0: 
					if (rvc && rv32) op = rv_op_c_slli;
					else if (rvc && rv64) op = rv_op_c_slli;
					break;
				case 1: if (rvc) op = rv_op_c_fldsp; break; // c.fldsp c.lqsp
				case 2: if (rvc) op = rv_op_c_lwsp; break;
				case 3: 
					if (rvc && rv32) op = rv_op_c_flwsp;
					else if (rvc && rv64) op = rv_op_c_ldsp;
					break;
				case 4:
					// c.jr c.mv c.ebreak c.jalr c.add
					switch (((inst >> 12) & 0b1) /* inst[12] */) {
						case 0:
							// c.jr c.mv
							switch (((inst >> 2) & 0b11111) /* inst[6:2] */) {
								case 0: if (rvc) op = rv_op_c_jr; break;
								default: if (rvc) op = rv_op_c_mv; break;
							}
							break;
						case 1:
							// c.ebreak c.jalr c.add
							switch (((inst >> 2) & 0b11111) /* inst[6:2] */) {
								case 0:
									// c.ebreak c.jalr
									switch (((inst >> 7) & 0b11111) /* inst[11:7] */) {
										case 0: if (rvc) op = rv_op_c_ebreak; break;
										default: if (rvc) op = rv_op_c_jalr; break;
									}
									break;
								default: if (rvc) op = rv_op_c_add; break;
							}
							break;
					}
					break;
				case 5: if (rvc) op = rv_op_c_fsdsp; break; // c.fsdsp c.sqsp
				case 6: if (rvc) op = rv_op_c_swsp; break;
				case 7: 
					if (rvc && rv32) op = rv_op_c_fswsp;
					else if (rvc && rv64) op = rv_op_c_sdsp;
					break;
			}
			break;
		case 3:
			// lui auipc jal jalr beq bne blt bge bltu bgeu lb lh ...
			switch (((inst >> 2) & 0b11111) /* inst[6:2] */) {
				case 0:
					// lb lh lw lbu lhu lwu ld ldu
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0: if (rvi) op = rv_op_lb; break;
						case 1: if (rvi) op = rv_op_lh; break;
						case 2: if (rvi) op = rv_op_lw; break;
						case 3: if (rvi) op = rv_op_ld; break;
						case 4: if (rvi) op = rv_op_lbu; break;
						case 5: if (rvi) op = rv_op_lhu; break;
						case 6: if (rvi) op = rv_op_lwu; break;
						case 7: if (rvi && rv128) op = rv_op_ldu; break;
					}
					break;
				case 1:
					// flw fld flq vle8.v vle16.v vle32.v vle64.v vleff8.v vleff16.v vleff32.v vleff64.v vl1re8.v ...
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0:
							// vle8.v vleff8.v vl1re8.v vl2re8.v vl4re8.v vl8re8.v vlse8.v
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0:
									// vle8.v vleff8.v vl1re8.v vlse8.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vle8_v; break;
										case 8: if (rvv && rv64) op = rv_op_vl1re8_v; break;
										case 16: if (rvv && rv64) op = rv_op_vleff8_v; break;
										default: if (rvv && rv64) op = rv_op_vlse8_v; break;
									}
									break;
								case 8:
									// vl2re8.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl2re8_v; break;
									}
									break;
								case 24:
									// vl4re8.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl4re8_v; break;
									}
									break;
								case 56:
									// vl8re8.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl8re8_v; break;
									}
									break;
							}
							break;
						case 2: if (rvf) op = rv_op_flw; break;
						case 3: if (rvd) op = rv_op_fld; break;
						case 4: if (rvq) op = rv_op_flq; break;
						case 5:
							// vle16.v vleff16.v vl1re16.v vl2re16.v vl4re16.v vl8re16.v vlse16.v
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0:
									// vle16.v vleff16.v vl1re16.v vlse16.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vle16_v; break;
										case 8: if (rvv && rv64) op = rv_op_vl1re16_v; break;
										case 16: if (rvv && rv64) op = rv_op_vleff16_v; break;
										default: if (rvv && rv64) op = rv_op_vlse16_v; break;
									}
									break;
								case 8:
									// vl2re16.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl2re16_v; break;
									}
									break;
								case 24:
									// vl4re16.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl4re16_v; break;
									}
									break;
								case 56:
									// vl8re16.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl8re16_v; break;
									}
									break;
							}
							break;
						case 6:
							// vle32.v vleff32.v vl1re32.v vl2re32.v vl4re32.v vl8re32.v vlse32.v
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0:
									// vle32.v vleff32.v vl1re32.v vlse32.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vle32_v; break;
										case 8: if (rvv && rv64) op = rv_op_vl1re32_v; break;
										case 16: if (rvv && rv64) op = rv_op_vleff32_v; break;
										default: if (rvv && rv64) op = rv_op_vlse32_v; break;
									}
									break;
								case 8:
									// vl2re32.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl2re32_v; break;
									}
									break;
								case 24:
									// vl4re32.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl4re32_v; break;
									}
									break;
								case 56:
									// vl8re32.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl8re32_v; break;
									}
									break;
							}
							break;
						case 7:
							// vle64.v vleff64.v vl1re64.v vl2re64.v vl4re64.v vl8re64.v vlse64.v
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0:
									// vle64.v vleff64.v vl1re64.v vlse64.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vle64_v; break;
										case 8: if (rvv && rv64) op = rv_op_vl1re64_v; break;
										case 16: if (rvv && rv64) op = rv_op_vleff64_v; break;
										default: if (rvv && rv64) op = rv_op_vlse64_v; break;
									}
									break;
								case 8:
									// vl2re64.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl2re64_v; break;
									}
									break;
								case 24:
									// vl4re64.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl4re64_v; break;
									}
									break;
								case 56:
									// vl8re64.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vl8re64_v; break;
									}
									break;
							}
							break;
					}
					break;
				case 3:
					// fence fence.i lq
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0: if (rvi) op = rv_op_fence; break;
						case 1: if (rvi) op = rv_op_fence_i; break;
						case 2: if (rvi && rv128) op = rv_op_lq; break;
					}
					break;
				case 4:
					// addi slti sltiu xori ori andi slli srli srai slli srli srai ...
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0: if (rvi) op = rv_op_addi; break;
						case 1:
							// slli slli slli
							switch (((inst >> 27) & 0b11111) /* inst[31:27] */) {
								case 0: 
									if (rvi && rv32) op = rv_op_slli;
									else if (rvi && rv64) op = rv_op_slli;
									else if (rvi && rv128) op = rv_op_slli;
									break;
							}
							break;
						case 2: if (rvi) op = rv_op_slti; break;
						case 3: if (rvi) op = rv_op_sltiu; break;
						case 4: if (rvi) op = rv_op_xori; break;
						case 5:
							// srli srai srli srai srli srai
							switch (((inst >> 27) & 0b11111) /* inst[31:27] */) {
								case 0: 
									if (rvi && rv32) op = rv_op_srli;
									else if (rvi && rv64) op = rv_op_srli;
									else if (rvi && rv128) op = rv_op_srli;
									break;
								case 8: 
									if (rvi && rv32) op = rv_op_srai;
									else if (rvi && rv64) op = rv_op_srai;
									else if (rvi && rv128) op = rv_op_srai;
									break;
							}
							break;
						case 6: if (rvi) op = rv_op_ori; break;
						case 7: if (rvi) op = rv_op_andi; break;
					}
					break;
				case 5: if (rvi) op = rv_op_auipc; break;
				case 6:
					// addiw slliw srliw sraiw
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0: if (rvi) op = rv_op_addiw; break;
						case 1:
							// slliw
							switch (((inst >> 25) & 0b1111111) /* inst[31:25] */) {
								case 0: if (rvi) op = rv_op_slliw; break;
							}
							break;
						case 5:
							// srliw sraiw
							switch (((inst >> 25) & 0b1111111) /* inst[31:25] */) {
								case 0: if (rvi) op = rv_op_srliw; break;
								case 32: if (rvi) op = rv_op_sraiw; break;
							}
							break;
					}
					break;
				case 8:
					// sb sh sw sd sq
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0: if (rvi) op = rv_op_sb; break;
						case 1: if (rvi) op = rv_op_sh; break;
						case 2: if (rvi) op = rv_op_sw; break;
						case 3: if (rvi) op = rv_op_sd; break;
						case 4: if (rvi && rv128) op = rv_op_sq; break;
					}
					break;
				case 9:
					// fsw fsd fsq vse8.v vse16.v vse32.v vse64.v vs1re8.v vs1re16.v vs1re32.v vs1re64.v vs2re8.v ...
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0:
							// vse8.v vs1re8.v vs2re8.v vs4re8.v vs8re8.v vsse8.v
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0:
									// vse8.v vs1re8.v vsse8.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vse8_v; break;
										case 8: if (rvv && rv64) op = rv_op_vs1re8_v; break;
										default: if (rvv && rv64) op = rv_op_vsse8_v; break;
									}
									break;
								case 8:
									// vs2re8.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs2re8_v; break;
									}
									break;
								case 24:
									// vs4re8.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs4re8_v; break;
									}
									break;
								case 56:
									// vs8re8.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs8re8_v; break;
									}
									break;
							}
							break;
						case 2: if (rvf) op = rv_op_fsw; break;
						case 3: if (rvd) op = rv_op_fsd; break;
						case 4: if (rvq) op = rv_op_fsq; break;
						case 5:
							// vse16.v vs1re16.v vs2re16.v vs4re16.v vs8re16.v vsse16.v
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0:
									// vse16.v vs1re16.v vsse16.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vse16_v; break;
										case 8: if (rvv && rv64) op = rv_op_vs1re16_v; break;
										default: if (rvv && rv64) op = rv_op_vsse16_v; break;
									}
									break;
								case 8:
									// vs2re16.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs2re16_v; break;
									}
									break;
								case 24:
									// vs4re16.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs4re16_v; break;
									}
									break;
								case 56:
									// vs8re16.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs8re16_v; break;
									}
									break;
							}
							break;
						case 6:
							// vse32.v vs1re32.v vs2re32.v vs4re32.v vs8re32.v vsse32.v
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0:
									// vse32.v vs1re32.v vsse32.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vse32_v; break;
										case 8: if (rvv && rv64) op = rv_op_vs1re32_v; break;
										default: if (rvv && rv64) op = rv_op_vsse32_v; break;
									}
									break;
								case 8:
									// vs2re32.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs2re32_v; break;
									}
									break;
								case 24:
									// vs4re32.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs4re32_v; break;
									}
									break;
								case 56:
									// vs8re32.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs8re32_v; break;
									}
									break;
							}
							break;
						case 7:
							// vse64.v vs1re64.v vs2re64.v vs4re64.v vs8re64.v vsse64.v
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0:
									// vse64.v vs1re64.v vsse64.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vse64_v; break;
										case 8: if (rvv && rv64) op = rv_op_vs1re64_v; break;
										default: if (rvv && rv64) op = rv_op_vsse64_v; break;
									}
									break;
								case 8:
									// vs2re64.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs2re64_v; break;
									}
									break;
								case 24:
									// vs4re64.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs4re64_v; break;
									}
									break;
								case 56:
									// vs8re64.v
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 8: if (rvv && rv64) op = rv_op_vs8re64_v; break;
									}
									break;
							}
							break;
					}
					break;
				case 11:
					// lr.w sc.w amoswap.w amoadd.w amoxor.w amoor.w amoand.w amomin.w amomax.w amominu.w amomaxu.w lr.d ...
					switch (((inst >> 24) & 0b11111000) | ((inst >> 12) & 0b00000111) /* inst[31:27|14:12] */) {
						case 2: if (rva) op = rv_op_amoadd_w; break;
						case 3: if (rva) op = rv_op_amoadd_d; break;
						case 4: if (rva && rv128) op = rv_op_amoadd_q; break;
						case 10: if (rva) op = rv_op_amoswap_w; break;
						case 11: if (rva) op = rv_op_amoswap_d; break;
						case 12: if (rva && rv128) op = rv_op_amoswap_q; break;
						case 18:
							// lr.w
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rva) op = rv_op_lr_w; break;
							}
							break;
						case 19:
							// lr.d
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rva) op = rv_op_lr_d; break;
							}
							break;
						case 20:
							// lr.q
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rva && rv128) op = rv_op_lr_q; break;
							}
							break;
						case 26: if (rva) op = rv_op_sc_w; break;
						case 27: if (rva) op = rv_op_sc_d; break;
						case 28: if (rva && rv128) op = rv_op_sc_q; break;
						case 34: if (rva) op = rv_op_amoxor_w; break;
						case 35: if (rva) op = rv_op_amoxor_d; break;
						case 36: if (rva && rv128) op = rv_op_amoxor_q; break;
						case 66: if (rva) op = rv_op_amoor_w; break;
						case 67: if (rva) op = rv_op_amoor_d; break;
						case 68: if (rva && rv128) op = rv_op_amoor_q; break;
						case 98: if (rva) op = rv_op_amoand_w; break;
						case 99: if (rva) op = rv_op_amoand_d; break;
						case 100: if (rva && rv128) op = rv_op_amoand_q; break;
						case 130: if (rva) op = rv_op_amomin_w; break;
						case 131: if (rva) op = rv_op_amomin_d; break;
						case 132: if (rva && rv128) op = rv_op_amomin_q; break;
						case 162: if (rva) op = rv_op_amomax_w; break;
						case 163: if (rva) op = rv_op_amomax_d; break;
						case 164: if (rva && rv128) op = rv_op_amomax_q; break;
						case 194: if (rva) op = rv_op_amominu_w; break;
						case 195: if (rva) op = rv_op_amominu_d; break;
						case 196: if (rva && rv128) op = rv_op_amominu_q; break;
						case 226: if (rva) op = rv_op_amomaxu_w; break;
						case 227: if (rva) op = rv_op_amomaxu_d; break;
						case 228: if (rva && rv128) op = rv_op_amomaxu_q; break;
					}
					break;
				case 12:
					// add sub sll slt sltu xor srl sra or and mul mulh ...
					switch (((inst >> 22) & 0b1111111000) | ((inst >> 12) & 0b0000000111) /* inst[31:25|14:12] */) {
						case 0: if (rvi) op = rv_op_add; break;
						case 1: if (rvi) op = rv_op_sll; break;
						case 2: if (rvi) op = rv_op_slt; break;
						case 3: if (rvi) op = rv_op_sltu; break;
						case 4: if (rvi) op = rv_op_xor; break;
						case 5: if (rvi) op = rv_op_srl; break;
						case 6: if (rvi) op = rv_op_or; break;
						case 7: if (rvi) op = rv_op_and; break;
						case 8: if (rvm) op = rv_op_mul; break;
						case 9: if (rvm) op = rv_op_mulh; break;
						case 10: if (rvm) op = rv_op_mulhsu; break;
						case 11: if (rvm) op = rv_op_mulhu; break;
						case 12: if (rvm) op = rv_op_div; break;
						case 13: if (rvm) op = rv_op_divu; break;
						case 14: if (rvm) op = rv_op_rem; break;
						case 15: if (rvm) op = rv_op_remu; break;
						case 256: if (rvi) op = rv_op_sub; break;
						case 261: if (rvi) op = rv_op_sra; break;
					}
					break;
				case 13: if (rvi) op = rv_op_lui; break;
				case 14:
					// addw subw sllw srlw sraw mulw divw divuw remw remuw
					switch (((inst >> 22) & 0b1111111000) | ((inst >> 12) & 0b0000000111) /* inst[31:25|14:12] */) {
						case 0: if (rvi) op = rv_op_addw; break;
						case 1: if (rvi) op = rv_op_sllw; break;
						case 5: if (rvi) op = rv_op_srlw; break;
						case 8: if (rvm) op = rv_op_mulw; break;
						case 12: if (rvm) op = rv_op_divw; break;
						case 13: if (rvm) op = rv_op_divuw; break;
						case 14: if (rvm) op = rv_op_remw; break;
						case 15: if (rvm) op = rv_op_remuw; break;
						case 256: if (rvi) op = rv_op_subw; break;
						case 261: if (rvi) op = rv_op_sraw; break;
					}
					break;
				case 16:
					// fmadd.s fmadd.d fmadd.q
					switch (((inst >> 25) & 0b11) /* inst[26:25] */) {
						case 0: if (rvf) op = rv_op_fmadd_s; break;
						case 1: if (rvd) op = rv_op_fmadd_d; break;
						case 3: if (rvq) op = rv_op_fmadd_q; break;
					}
					break;
				case 17:
					// fmsub.s fmsub.d fmsub.q
					switch (((inst >> 25) & 0b11) /* inst[26:25] */) {
						case 0: if (rvf) op = rv_op_fmsub_s; break;
						case 1: if (rvd) op = rv_op_fmsub_d; break;
						case 3: if (rvq) op = rv_op_fmsub_q; break;
					}
					break;
				case 18:
					// fnmsub.s fnmsub.d fnmsub.q
					switch (((inst >> 25) & 0b11) /* inst[26:25] */) {
						case 0: if (rvf) op = rv_op_fnmsub_s; break;
						case 1: if (rvd) op = rv_op_fnmsub_d; break;
						case 3: if (rvq) op = rv_op_fnmsub_q; break;
					}
					break;
				case 19:
					// fnmadd.s fnmadd.d fnmadd.q
					switch (((inst >> 25) & 0b11) /* inst[26:25] */) {
						case 0: if (rvf) op = rv_op_fnmadd_s; break;
						case 1: if (rvd) op = rv_op_fnmadd_d; break;
						case 3: if (rvq) op = rv_op_fnmadd_q; break;
					}
					break;
				case 20:
					// fadd.s fsub.s fmul.s fdiv.s fsgnj.s fsgnjn.s fsgnjx.s fmin.s fmax.s fsqrt.s fle.s flt.s ...
					switch (((inst >> 25) & 0b1111111) /* inst[31:25] */) {
						case 0: if (rvf) op = rv_op_fadd_s; break;
						case 1: if (rvd) op = rv_op_fadd_d; break;
						case 3: if (rvq) op = rv_op_fadd_q; break;
						case 4: if (rvf) op = rv_op_fsub_s; break;
						case 5: if (rvd) op = rv_op_fsub_d; break;
						case 7: if (rvq) op = rv_op_fsub_q; break;
						case 8: if (rvf) op = rv_op_fmul_s; break;
						case 9: if (rvd) op = rv_op_fmul_d; break;
						case 11: if (rvq) op = rv_op_fmul_q; break;
						case 12: if (rvf) op = rv_op_fdiv_s; break;
						case 13: if (rvd) op = rv_op_fdiv_d; break;
						case 15: if (rvq) op = rv_op_fdiv_q; break;
						case 16:
							// fsgnj.s fsgnjn.s fsgnjx.s
							switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
								case 0: if (rvf) op = rv_op_fsgnj_s; break;
								case 1: if (rvf) op = rv_op_fsgnjn_s; break;
								case 2: if (rvf) op = rv_op_fsgnjx_s; break;
							}
							break;
						case 17:
							// fsgnj.d fsgnjn.d fsgnjx.d
							switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
								case 0: if (rvd) op = rv_op_fsgnj_d; break;
								case 1: if (rvd) op = rv_op_fsgnjn_d; break;
								case 2: if (rvd) op = rv_op_fsgnjx_d; break;
							}
							break;
						case 19:
							// fsgnj.q fsgnjn.q fsgnjx.q
							switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
								case 0: if (rvq) op = rv_op_fsgnj_q; break;
								case 1: if (rvq) op = rv_op_fsgnjn_q; break;
								case 2: if (rvq) op = rv_op_fsgnjx_q; break;
							}
							break;
						case 20:
							// fmin.s fmax.s
							switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
								case 0: if (rvf) op = rv_op_fmin_s; break;
								case 1: if (rvf) op = rv_op_fmax_s; break;
							}
							break;
						case 21:
							// fmin.d fmax.d
							switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
								case 0: if (rvd) op = rv_op_fmin_d; break;
								case 1: if (rvd) op = rv_op_fmax_d; break;
							}
							break;
						case 23:
							// fmin.q fmax.q
							switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
								case 0: if (rvq) op = rv_op_fmin_q; break;
								case 1: if (rvq) op = rv_op_fmax_q; break;
							}
							break;
						case 32:
							// fcvt.s.d fcvt.s.q
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 1: if (rvd) op = rv_op_fcvt_s_d; break;
								case 3: if (rvq) op = rv_op_fcvt_s_q; break;
							}
							break;
						case 33:
							// fcvt.d.s fcvt.d.q
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvd) op = rv_op_fcvt_d_s; break;
								case 3: if (rvq) op = rv_op_fcvt_d_q; break;
							}
							break;
						case 35:
							// fcvt.q.s fcvt.q.d
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvq) op = rv_op_fcvt_q_s; break;
								case 1: if (rvq) op = rv_op_fcvt_q_d; break;
							}
							break;
						case 44:
							// fsqrt.s
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvf) op = rv_op_fsqrt_s; break;
							}
							break;
						case 45:
							// fsqrt.d
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvd) op = rv_op_fsqrt_d; break;
							}
							break;
						case 47:
							// fsqrt.q
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvq) op = rv_op_fsqrt_q; break;
							}
							break;
						case 80:
							// fle.s flt.s feq.s
							switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
								case 0: if (rvf) op = rv_op_fle_s; break;
								case 1: if (rvf) op = rv_op_flt_s; break;
								case 2: if (rvf) op = rv_op_feq_s; break;
							}
							break;
						case 81:
							// fle.d flt.d feq.d
							switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
								case 0: if (rvd) op = rv_op_fle_d; break;
								case 1: if (rvd) op = rv_op_flt_d; break;
								case 2: if (rvd) op = rv_op_feq_d; break;
							}
							break;
						case 83:
							// fle.q flt.q feq.q
							switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
								case 0: if (rvq) op = rv_op_fle_q; break;
								case 1: if (rvq) op = rv_op_flt_q; break;
								case 2: if (rvq) op = rv_op_feq_q; break;
							}
							break;
						case 96:
							// fcvt.w.s fcvt.wu.s fcvt.l.s fcvt.lu.s
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvf) op = rv_op_fcvt_w_s; break;
								case 1: if (rvf) op = rv_op_fcvt_wu_s; break;
								case 2: if (rvf) op = rv_op_fcvt_l_s; break;
								case 3: if (rvf) op = rv_op_fcvt_lu_s; break;
							}
							break;
						case 97:
							// fcvt.w.d fcvt.wu.d fcvt.l.d fcvt.lu.d
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvd) op = rv_op_fcvt_w_d; break;
								case 1: if (rvd) op = rv_op_fcvt_wu_d; break;
								case 2: if (rvd) op = rv_op_fcvt_l_d; break;
								case 3: if (rvd) op = rv_op_fcvt_lu_d; break;
							}
							break;
						case 99:
							// fcvt.w.q fcvt.wu.q fcvt.l.q fcvt.lu.q
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvq) op = rv_op_fcvt_w_q; break;
								case 1: if (rvq) op = rv_op_fcvt_wu_q; break;
								case 2: if (rvq) op = rv_op_fcvt_l_q; break;
								case 3: if (rvq) op = rv_op_fcvt_lu_q; break;
							}
							break;
						case 104:
							// fcvt.s.w fcvt.s.wu fcvt.s.l fcvt.s.lu
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvf) op = rv_op_fcvt_s_w; break;
								case 1: if (rvf) op = rv_op_fcvt_s_wu; break;
								case 2: if (rvf) op = rv_op_fcvt_s_l; break;
								case 3: if (rvf) op = rv_op_fcvt_s_lu; break;
							}
							break;
						case 105:
							// fcvt.d.w fcvt.d.wu fcvt.d.l fcvt.d.lu
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvd) op = rv_op_fcvt_d_w; break;
								case 1: if (rvd) op = rv_op_fcvt_d_wu; break;
								case 2: if (rvd) op = rv_op_fcvt_d_l; break;
								case 3: if (rvd) op = rv_op_fcvt_d_lu; break;
							}
							break;
						case 107:
							// fcvt.q.w fcvt.q.wu fcvt.q.l fcvt.q.lu
							switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
								case 0: if (rvq) op = rv_op_fcvt_q_w; break;
								case 1: if (rvq) op = rv_op_fcvt_q_wu; break;
								case 2: if (rvq) op = rv_op_fcvt_q_l; break;
								case 3: if (rvq) op = rv_op_fcvt_q_lu; break;
							}
							break;
						case 112:
							// fmv.x.s fclass.s
							switch (((inst >> 17) & 0b11111000) | ((inst >> 12) & 0b00000111) /* inst[24:20|14:12] */) {
								case 0: if (rvf) op = rv_op_fmv_x_s; break;
								case 1: if (rvf) op = rv_op_fclass_s; break;
							}
							break;
						case 113:
							// fclass.d fmv.x.d
							switch (((inst >> 17) & 0b11111000) | ((inst >> 12) & 0b00000111) /* inst[24:20|14:12] */) {
								case 0: if (rvd) op = rv_op_fmv_x_d; break;
								case 1: if (rvd) op = rv_op_fclass_d; break;
							}
							break;
						case 115:
							// fclass.q fmv.x.q
							switch (((inst >> 17) & 0b11111000) | ((inst >> 12) & 0b00000111) /* inst[24:20|14:12] */) {
								case 0: if (rvq) op = rv_op_fmv_x_q; break;
								case 1: if (rvq) op = rv_op_fclass_q; break;
							}
							break;
						case 120:
							// fmv.s.x
							switch (((inst >> 17) & 0b11111000) | ((inst >> 12) & 0b00000111) /* inst[24:20|14:12] */) {
								case 0: if (rvf) op = rv_op_fmv_s_x; break;
							}
							break;
						case 121:
							// fmv.d.x
							switch (((inst >> 17) & 0b11111000) | ((inst >> 12) & 0b00000111) /* inst[24:20|14:12] */) {
								case 0: if (rvd) op = rv_op_fmv_d_x; break;
							}
							break;
						case 123:
							// fmv.q.x
							switch (((inst >> 17) & 0b11111000) | ((inst >> 12) & 0b00000111) /* inst[24:20|14:12] */) {
								case 0: if (rvq) op = rv_op_fmv_q_x; break;
							}
							break;
					}
					break;
				case 21:
					// vsetvli vsetivli vsetvl vadd.vv vsub.vv vminu.vv vmin.vv vmaxu.vv vmax.vv vand.vv vor.vv vxor.vv ...
					switch (((inst >> 28) & 0b1000) | ((inst >> 12) & 0b0111) /* inst[31|14:12] */) {
						case 0:
							// vadd.vv vsub.vv vminu.vv vmin.vv vmaxu.vv vmax.vv vand.vv vor.vv vxor.vv vrgather.vv vadc.vv vmadc.vv ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vadd_vv; break;
								case 2: if (rvv && rv64) op = rv_op_vsub_vv; break;
								case 4: if (rvv && rv64) op = rv_op_vminu_vv; break;
								case 5: if (rvv && rv64) op = rv_op_vmin_vv; break;
								case 6: if (rvv && rv64) op = rv_op_vmaxu_vv; break;
								case 7: if (rvv && rv64) op = rv_op_vmax_vv; break;
								case 9: if (rvv && rv64) op = rv_op_vand_vv; break;
								case 10: if (rvv && rv64) op = rv_op_vor_vv; break;
								case 11: if (rvv && rv64) op = rv_op_vxor_vv; break;
								case 12: if (rvv && rv64) op = rv_op_vrgather_vv; break;
								case 16: if (rvv && rv64) op = rv_op_vadc_vv; break;
								case 17: if (rvv && rv64) op = rv_op_vmadc_vv; break;
								case 18: if (rvv && rv64) op = rv_op_vsbc_vv; break;
								case 19: if (rvv && rv64) op = rv_op_vmsbc_vv; break;
								case 23: if (rvv && rv64) op = rv_op_vmerge_vv; break;
								case 24: if (rvv && rv64) op = rv_op_vmseq_vv; break;
								case 25: if (rvv && rv64) op = rv_op_vmsne_vv; break;
								case 26: if (rvv && rv64) op = rv_op_vmsltu_vv; break;
								case 27: if (rvv && rv64) op = rv_op_vmslt_vv; break;
								case 28: if (rvv && rv64) op = rv_op_vmsleu_vv; break;
								case 29: if (rvv && rv64) op = rv_op_vmsle_vv; break;
							}
							break;
						case 1:
							// vfadd.vv vfredsum.vv vfsub.vv vfredosum.vv vfmin.vv vfredmin.vv vfmax.vv vfredmax.vv vfsgnj.vv vfsgnjn.vv vfsgnjx.vv vmfeq.vx ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vfadd_vv; break;
								case 1: if (rvv && rv64) op = rv_op_vfredsum_vv; break;
								case 2: if (rvv && rv64) op = rv_op_vfsub_vv; break;
								case 3: if (rvv && rv64) op = rv_op_vfredosum_vv; break;
								case 4: if (rvv && rv64) op = rv_op_vfmin_vv; break;
								case 5: if (rvv && rv64) op = rv_op_vfredmin_vv; break;
								case 6: if (rvv && rv64) op = rv_op_vfmax_vv; break;
								case 7: if (rvv && rv64) op = rv_op_vfredmax_vv; break;
								case 8: if (rvv && rv64) op = rv_op_vfsgnj_vv; break;
								case 9: if (rvv && rv64) op = rv_op_vfsgnjn_vv; break;
								case 10: if (rvv && rv64) op = rv_op_vfsgnjx_vv; break;
								case 16:
									// vfmv.f.s
									switch (((inst >> 15) & 0b11111) /* inst[19:15] */) {
										case 0: if (rvv && rv64) op = rv_op_vfmv_f_s; break;
									}
									break;
								case 18:
									// vfcvt.xu.f.v vfcvt.x.f.v vfcvt.f.xu.v vfcvt.f.x.v vfcvt.rtz.xu.f.v vfcvt.rtz.x.f.v vfwcvt.xu.f.v vfwcvt.x.f.v vfwcvt.f.xu.v vfwcvt.f.x.v vfwcvt.f.f.v vfwcvt.rtz.xu.f.v ...
									switch (((inst >> 15) & 0b11111) /* inst[19:15] */) {
										case 0: if (rvv && rv64) op = rv_op_vfcvt_xu_f_v; break;
										case 1: if (rvv && rv64) op = rv_op_vfcvt_x_f_v; break;
										case 2: if (rvv && rv64) op = rv_op_vfcvt_f_xu_v; break;
										case 3: if (rvv && rv64) op = rv_op_vfcvt_f_x_v; break;
										case 6: if (rvv && rv64) op = rv_op_vfcvt_rtz_xu_f_v; break;
										case 7: if (rvv && rv64) op = rv_op_vfcvt_rtz_x_f_v; break;
										case 8: if (rvv && rv64) op = rv_op_vfwcvt_xu_f_v; break;
										case 9: if (rvv && rv64) op = rv_op_vfwcvt_x_f_v; break;
										case 10: if (rvv && rv64) op = rv_op_vfwcvt_f_xu_v; break;
										case 11: if (rvv && rv64) op = rv_op_vfwcvt_f_x_v; break;
										case 12: if (rvv && rv64) op = rv_op_vfwcvt_f_f_v; break;
										case 14: if (rvv && rv64) op = rv_op_vfwcvt_rtz_xu_f_v; break;
										case 15: if (rvv && rv64) op = rv_op_vfwcvt_rtz_x_f_v; break;
										case 16: if (rvv && rv64) op = rv_op_vfncvt_xu_f_w; break;
										case 17: if (rvv && rv64) op = rv_op_vfncvt_x_f_w; break;
										case 18: if (rvv && rv64) op = rv_op_vfncvt_f_xu_w; break;
										case 19: if (rvv && rv64) op = rv_op_vfncvt_f_x_w; break;
										case 20: if (rvv && rv64) op = rv_op_vfncvt_f_f_w; break;
										case 21: if (rvv && rv64) op = rv_op_vfncvt_rod_f_f_w; break;
										case 22: if (rvv && rv64) op = rv_op_vfncvt_rtz_xu_f_w; break;
										case 23: if (rvv && rv64) op = rv_op_vfncvt_rtz_x_f_w; break;
									}
									break;
								case 24: if (rvv && rv64) op = rv_op_vmfeq_vx; break;
								case 25: if (rvv && rv64) op = rv_op_vmfle_vx; break;
								case 27: if (rvv && rv64) op = rv_op_vmflt_vx; break;
								case 28: if (rvv && rv64) op = rv_op_vmfne_vx; break;
							}
							break;
						case 2:
							// vredsum.vv vredand.vv vredor.vv vredxor.vv vredminu.vv vredmin.vv vredmaxu.vv vredmax.vv vaaddu.vv vaadd.vv vasubu.vv vasub.vv ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vredsum_vv; break;
								case 1: if (rvv && rv64) op = rv_op_vredand_vv; break;
								case 2: if (rvv && rv64) op = rv_op_vredor_vv; break;
								case 3: if (rvv && rv64) op = rv_op_vredxor_vv; break;
								case 4: if (rvv && rv64) op = rv_op_vredminu_vv; break;
								case 5: if (rvv && rv64) op = rv_op_vredmin_vv; break;
								case 6: if (rvv && rv64) op = rv_op_vredmaxu_vv; break;
								case 7: if (rvv && rv64) op = rv_op_vredmax_vv; break;
								case 8: if (rvv && rv64) op = rv_op_vaaddu_vv; break;
								case 9: if (rvv && rv64) op = rv_op_vaadd_vv; break;
								case 10: if (rvv && rv64) op = rv_op_vasubu_vv; break;
								case 11: if (rvv && rv64) op = rv_op_vasub_vv; break;
								case 16:
									// vmv.x.s vpopc.m vfirst.m
									switch (((inst >> 15) & 0b11111) /* inst[19:15] */) {
										case 0: if (rvv && rv64) op = rv_op_vmv_x_s; break;
										case 16: if (rvv && rv64) op = rv_op_vpopc_m; break;
										case 17: if (rvv && rv64) op = rv_op_vfirst_m; break;
									}
									break;
								case 18:
									// vzext.vf8 vsext.vf8 vzext.vf4 vsext.vf4 vzext.vf2 vsext.vf2
									switch (((inst >> 15) & 0b11111) /* inst[19:15] */) {
										case 2: if (rvv && rv64) op = rv_op_vzext_vf8; break;
										case 3: if (rvv && rv64) op = rv_op_vsext_vf8; break;
										case 4: if (rvv && rv64) op = rv_op_vzext_vf4; break;
										case 5: if (rvv && rv64) op = rv_op_vsext_vf4; break;
										case 6: if (rvv && rv64) op = rv_op_vzext_vf2; break;
										case 7: if (rvv && rv64) op = rv_op_vsext_vf2; break;
									}
									break;
								case 20:
									// vmsbf.m vmsof.m vmsif.m viota.m vid.v
									switch (((inst >> 15) & 0b11111) /* inst[19:15] */) {
										case 1: if (rvv && rv64) op = rv_op_vmsbf_m; break;
										case 2: if (rvv && rv64) op = rv_op_vmsof_m; break;
										case 3: if (rvv && rv64) op = rv_op_vmsif_m; break;
										case 16: if (rvv && rv64) op = rv_op_viota_m; break;
										case 17: if (rvv && rv64) op = rv_op_vid_v; break;
									}
									break;
								case 23: if (rvv && rv64) op = rv_op_vcompress_vv; break;
								case 24: if (rvv && rv64) op = rv_op_vmandnot_vv; break;
								case 25: if (rvv && rv64) op = rv_op_vmand_vv; break;
								case 26: if (rvv && rv64) op = rv_op_vmor_vv; break;
								case 27: if (rvv && rv64) op = rv_op_vmxor_vv; break;
								case 28: if (rvv && rv64) op = rv_op_vmornot_vv; break;
								case 29: if (rvv && rv64) op = rv_op_vmnand_vv; break;
								case 30: if (rvv && rv64) op = rv_op_vmnor_vv; break;
								case 31: if (rvv && rv64) op = rv_op_vmxnor_vv; break;
							}
							break;
						case 3:
							// vadd.vi vrsub.vi vand.vi vor.vi vxor.vi vrgather.vi vslideup.vi vslidedown.vi vadc.vi vmadc.vi vmv.vi vmseq.vi ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vadd_vi; break;
								case 3: if (rvv && rv64) op = rv_op_vrsub_vi; break;
								case 9: if (rvv && rv64) op = rv_op_vand_vi; break;
								case 10: if (rvv && rv64) op = rv_op_vor_vi; break;
								case 11: if (rvv && rv64) op = rv_op_vxor_vi; break;
								case 12: if (rvv && rv64) op = rv_op_vrgather_vi; break;
								case 14: if (rvv && rv64) op = rv_op_vslideup_vi; break;
								case 15: if (rvv && rv64) op = rv_op_vslidedown_vi; break;
								case 16: if (rvv && rv64) op = rv_op_vadc_vi; break;
								case 17: if (rvv && rv64) op = rv_op_vmadc_vi; break;
								case 23: if (rvv && rv64) op = rv_op_vmv_vi; break;
								case 24: if (rvv && rv64) op = rv_op_vmseq_vi; break;
								case 25: if (rvv && rv64) op = rv_op_vmsne_vi; break;
								case 28: if (rvv && rv64) op = rv_op_vmsleu_vi; break;
								case 29: if (rvv && rv64) op = rv_op_vmsle_vi; break;
								case 30: if (rvv && rv64) op = rv_op_vmsgtu_vi; break;
								case 31: if (rvv && rv64) op = rv_op_vmsgt_vi; break;
							}
							break;
						case 4:
							// vadd.vx vsub.vx vrsub.vx vminu.vx vmin.vx vmaxu.vx vmax.vx vand.vx vor.vx vxor.vx vrgather.vx vslideup.vx ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vadd_vx; break;
								case 2: if (rvv && rv64) op = rv_op_vsub_vx; break;
								case 3: if (rvv && rv64) op = rv_op_vrsub_vx; break;
								case 4: if (rvv && rv64) op = rv_op_vminu_vx; break;
								case 5: if (rvv && rv64) op = rv_op_vmin_vx; break;
								case 6: if (rvv && rv64) op = rv_op_vmaxu_vx; break;
								case 7: if (rvv && rv64) op = rv_op_vmax_vx; break;
								case 9: if (rvv && rv64) op = rv_op_vand_vx; break;
								case 10: if (rvv && rv64) op = rv_op_vor_vx; break;
								case 11: if (rvv && rv64) op = rv_op_vxor_vx; break;
								case 12: if (rvv && rv64) op = rv_op_vrgather_vx; break;
								case 14: if (rvv && rv64) op = rv_op_vslideup_vx; break;
								case 15: if (rvv && rv64) op = rv_op_vslidedown_vx; break;
								case 16: if (rvv && rv64) op = rv_op_vadc_vx; break;
								case 17: if (rvv && rv64) op = rv_op_vmadc_vx; break;
								case 18: if (rvv && rv64) op = rv_op_vsbc_vx; break;
								case 19: if (rvv && rv64) op = rv_op_vmsbc_vx; break;
								case 23: if (rvv && rv64) op = rv_op_vmerge_vx; break;
								case 24: if (rvv && rv64) op = rv_op_vmseq_vx; break;
								case 25: if (rvv && rv64) op = rv_op_vmsne_vx; break;
								case 26: if (rvv && rv64) op = rv_op_vmsltu_vx; break;
								case 27: if (rvv && rv64) op = rv_op_vmslt_vx; break;
								case 28: if (rvv && rv64) op = rv_op_vmsleu_vx; break;
								case 29: if (rvv && rv64) op = rv_op_vmsle_vx; break;
								case 30: if (rvv && rv64) op = rv_op_vmsgtu_vx; break;
								case 31: if (rvv && rv64) op = rv_op_vmsgt_vx; break;
							}
							break;
						case 5:
							// vfadd.vf vfredsum.vf vfsub.vf vfredosum.vf vfmin.vf vfredmin.vf vfmax.vf vfredmax.vf vfsgnj.vf vfsgnjn.vf vfsgnjx.vf vfmv.s.f ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vfadd_vf; break;
								case 1: if (rvv && rv64) op = rv_op_vfredsum_vf; break;
								case 2: if (rvv && rv64) op = rv_op_vfsub_vf; break;
								case 3: if (rvv && rv64) op = rv_op_vfredosum_vf; break;
								case 4: if (rvv && rv64) op = rv_op_vfmin_vf; break;
								case 5: if (rvv && rv64) op = rv_op_vfredmin_vf; break;
								case 6: if (rvv && rv64) op = rv_op_vfmax_vf; break;
								case 7: if (rvv && rv64) op = rv_op_vfredmax_vf; break;
								case 8: if (rvv && rv64) op = rv_op_vfsgnj_vf; break;
								case 9: if (rvv && rv64) op = rv_op_vfsgnjn_vf; break;
								case 10: if (rvv && rv64) op = rv_op_vfsgnjx_vf; break;
								case 16:
									// vfmv.s.f
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vfmv_s_f; break;
									}
									break;
								case 23: if (rvv && rv64) op = rv_op_vfmv_vf; break;
								case 24: if (rvv && rv64) op = rv_op_vmfeq_vf; break;
								case 25: if (rvv && rv64) op = rv_op_vmfle_vf; break;
								case 27: if (rvv && rv64) op = rv_op_vmflt_vf; break;
								case 28: if (rvv && rv64) op = rv_op_vmfne_vf; break;
								case 29: if (rvv && rv64) op = rv_op_vmfgt_vf; break;
								case 31: if (rvv && rv64) op = rv_op_vmfge_vf; break;
							}
							break;
						case 6:
							// vmv.s.x vaaddu.vx vaadd.vx vasubu.vx vasub.vx vslide1up.vx vslide1down.vx
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 8: if (rvv && rv64) op = rv_op_vaaddu_vx; break;
								case 9: if (rvv && rv64) op = rv_op_vaadd_vx; break;
								case 10: if (rvv && rv64) op = rv_op_vasubu_vx; break;
								case 11: if (rvv && rv64) op = rv_op_vasub_vx; break;
								case 14: if (rvv && rv64) op = rv_op_vslide1up_vx; break;
								case 15: if (rvv && rv64) op = rv_op_vslide1down_vx; break;
								case 16:
									// vmv.s.x
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 0: if (rvv && rv64) op = rv_op_vmv_s_x; break;
									}
									break;
							}
							break;
						case 7: if (rvv && rv64) op = rv_op_vsetvli; break;
						case 8:
							// vsaddu.vv vsadd.vv vssubu.vv vssub.vv vsll.vv vsmul.vv vsrl.vv vsra.vv vssrl.vv vssra.vv vnsrl.vv vnsra.vv ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vsaddu_vv; break;
								case 1: if (rvv && rv64) op = rv_op_vsadd_vv; break;
								case 2: if (rvv && rv64) op = rv_op_vssubu_vv; break;
								case 3: if (rvv && rv64) op = rv_op_vssub_vv; break;
								case 5: if (rvv && rv64) op = rv_op_vsll_vv; break;
								case 7: if (rvv && rv64) op = rv_op_vsmul_vv; break;
								case 8: if (rvv && rv64) op = rv_op_vsrl_vv; break;
								case 9: if (rvv && rv64) op = rv_op_vsra_vv; break;
								case 10: if (rvv && rv64) op = rv_op_vssrl_vv; break;
								case 11: if (rvv && rv64) op = rv_op_vssra_vv; break;
								case 12: if (rvv && rv64) op = rv_op_vnsrl_vv; break;
								case 13: if (rvv && rv64) op = rv_op_vnsra_vv; break;
								case 14: if (rvv && rv64) op = rv_op_vnclipu_vv; break;
								case 15: if (rvv && rv64) op = rv_op_vnclip_vv; break;
								case 16: if (rvv && rv64) op = rv_op_vwredsumu_vv; break;
								case 17: if (rvv && rv64) op = rv_op_vwredsum_vv; break;
								case 20: if (rvv && rv64) op = rv_op_vdotu_vv; break;
								case 25: if (rvv && rv64) op = rv_op_vdot_vv; break;
								case 28: if (rvv && rv64) op = rv_op_vqmaccu_vv; break;
								case 29: if (rvv && rv64) op = rv_op_vqmacc_vv; break;
								case 30: if (rvv && rv64) op = rv_op_vqmaccus_vv; break;
								case 31: if (rvv && rv64) op = rv_op_vqmaccsu_vv; break;
							}
							break;
						case 9:
							// vfdiv.vx vfmul.vx vfrsub.vx vfmadd.vx vfnmadd.vx vfmsub.vx vfnmsub.vx vfmacc.vx vfnmacc.vx vfmsac.vx vfnmsac.vx vfwadd.vx ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vfdiv_vx; break;
								case 4: if (rvv && rv64) op = rv_op_vfmul_vx; break;
								case 7: if (rvv && rv64) op = rv_op_vfrsub_vx; break;
								case 8: if (rvv && rv64) op = rv_op_vfmadd_vx; break;
								case 9: if (rvv && rv64) op = rv_op_vfnmadd_vx; break;
								case 10: if (rvv && rv64) op = rv_op_vfmsub_vx; break;
								case 11: if (rvv && rv64) op = rv_op_vfnmsub_vx; break;
								case 12: if (rvv && rv64) op = rv_op_vfmacc_vx; break;
								case 13: if (rvv && rv64) op = rv_op_vfnmacc_vx; break;
								case 14: if (rvv && rv64) op = rv_op_vfmsac_vx; break;
								case 15: if (rvv && rv64) op = rv_op_vfnmsac_vx; break;
								case 16: if (rvv && rv64) op = rv_op_vfwadd_vx; break;
								case 17: if (rvv && rv64) op = rv_op_vfwredsum_vx; break;
								case 18: if (rvv && rv64) op = rv_op_vfwsub_vx; break;
								case 19: if (rvv && rv64) op = rv_op_vfwredosum_vx; break;
								case 20: if (rvv && rv64) op = rv_op_vfwadd_wv; break;
								case 22: if (rvv && rv64) op = rv_op_vfwsub_wv; break;
								case 24: if (rvv && rv64) op = rv_op_vfwmul_vx; break;
								case 25: if (rvv && rv64) op = rv_op_vfdot_vx; break;
								case 28: if (rvv && rv64) op = rv_op_vfwmacc_vx; break;
								case 29: if (rvv && rv64) op = rv_op_vfwnmacc_vx; break;
								case 30: if (rvv && rv64) op = rv_op_vfwmsac_vx; break;
								case 31: if (rvv && rv64) op = rv_op_vfwnmsac_vx; break;
							}
							break;
						case 10:
							// vdivu.vv vdiv.vv vremu.vv vrem.vv vmulhu.vv vmul.vv vmulhsu.vv vmulh.vv vmadd.vv vnmsub.vv vmacc.vv vnmsac.vv ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vdivu_vv; break;
								case 1: if (rvv && rv64) op = rv_op_vdiv_vv; break;
								case 4: if (rvv && rv64) op = rv_op_vremu_vv; break;
								case 5: if (rvv && rv64) op = rv_op_vrem_vv; break;
								case 8: if (rvv && rv64) op = rv_op_vmulhu_vv; break;
								case 9: if (rvv && rv64) op = rv_op_vmul_vv; break;
								case 10: if (rvv && rv64) op = rv_op_vmulhsu_vv; break;
								case 11: if (rvv && rv64) op = rv_op_vmulh_vv; break;
								case 12: if (rvv && rv64) op = rv_op_vmadd_vv; break;
								case 13: if (rvv && rv64) op = rv_op_vnmsub_vv; break;
								case 14: if (rvv && rv64) op = rv_op_vmacc_vv; break;
								case 15: if (rvv && rv64) op = rv_op_vnmsac_vv; break;
								case 16: if (rvv && rv64) op = rv_op_vwaddu_vv; break;
								case 17: if (rvv && rv64) op = rv_op_vwadd_vv; break;
								case 18: if (rvv && rv64) op = rv_op_vwsubu_vv; break;
								case 19: if (rvv && rv64) op = rv_op_vwsub_vv; break;
								case 20: if (rvv && rv64) op = rv_op_vwaddu_w_vv; break;
								case 21: if (rvv && rv64) op = rv_op_vwadd_w_vv; break;
								case 22: if (rvv && rv64) op = rv_op_vwsubu_w_vv; break;
								case 23: if (rvv && rv64) op = rv_op_vwsub_w_vv; break;
								case 24: if (rvv && rv64) op = rv_op_vwmulu_vv; break;
								case 26: if (rvv && rv64) op = rv_op_vwmulsu_vv; break;
								case 27: if (rvv && rv64) op = rv_op_vwmul_vv; break;
								case 28: if (rvv && rv64) op = rv_op_vwmaccu_vv; break;
								case 29: if (rvv && rv64) op = rv_op_vwmacc_vv; break;
								case 30: if (rvv && rv64) op = rv_op_vwmaccus_vv; break;
								case 31: if (rvv && rv64) op = rv_op_vwmaccsu_vv; break;
							}
							break;
						case 11:
							// vmv1r vmv2r vmv4r vmv8r vsaddu.vi vsadd.vi vsll.vi vsrl.vi vsra.vi vssrl.vi vssra.vi vnsrl.vi ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vsaddu_vi; break;
								case 1: if (rvv && rv64) op = rv_op_vsadd_vi; break;
								case 5: if (rvv && rv64) op = rv_op_vsll_vi; break;
								case 7:
									// vmv1r vmv2r vmv4r vmv8r
									switch (((inst >> 15) & 0b11111) /* inst[19:15] */) {
										case 0: if (rvv && rv64) op = rv_op_vmv1r; break;
										case 1: if (rvv && rv64) op = rv_op_vmv2r; break;
										case 3: if (rvv && rv64) op = rv_op_vmv4r; break;
										case 7: if (rvv && rv64) op = rv_op_vmv8r; break;
									}
									break;
								case 8: if (rvv && rv64) op = rv_op_vsrl_vi; break;
								case 9: if (rvv && rv64) op = rv_op_vsra_vi; break;
								case 10: if (rvv && rv64) op = rv_op_vssrl_vi; break;
								case 11: if (rvv && rv64) op = rv_op_vssra_vi; break;
								case 12: if (rvv && rv64) op = rv_op_vnsrl_vi; break;
								case 13: if (rvv && rv64) op = rv_op_vnsra_vi; break;
								case 14: if (rvv && rv64) op = rv_op_vnclipu_vi; break;
								case 15: if (rvv && rv64) op = rv_op_vnclip_vi; break;
							}
							break;
						case 12:
							// vsaddu.vx vsadd.vx vssubu.vx vssub.vx vsll.vx vsmul.vx vsrl.vx vsra.vx vssrl.vx vssra.vx vnsrl.vx vnsra.vx ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vsaddu_vx; break;
								case 1: if (rvv && rv64) op = rv_op_vsadd_vx; break;
								case 2: if (rvv && rv64) op = rv_op_vssubu_vx; break;
								case 3: if (rvv && rv64) op = rv_op_vssub_vx; break;
								case 5: if (rvv && rv64) op = rv_op_vsll_vx; break;
								case 7: if (rvv && rv64) op = rv_op_vsmul_vx; break;
								case 8: if (rvv && rv64) op = rv_op_vsrl_vx; break;
								case 9: if (rvv && rv64) op = rv_op_vsra_vx; break;
								case 10: if (rvv && rv64) op = rv_op_vssrl_vx; break;
								case 11: if (rvv && rv64) op = rv_op_vssra_vx; break;
								case 12: if (rvv && rv64) op = rv_op_vnsrl_vx; break;
								case 13: if (rvv && rv64) op = rv_op_vnsra_vx; break;
								case 14: if (rvv && rv64) op = rv_op_vnclipu_vx; break;
								case 15: if (rvv && rv64) op = rv_op_vnclip_vx; break;
								case 16: if (rvv && rv64) op = rv_op_vwredsumu_vx; break;
								case 17: if (rvv && rv64) op = rv_op_vwredsum_vx; break;
								case 24: if (rvv && rv64) op = rv_op_vdotu_vx; break;
								case 25: if (rvv && rv64) op = rv_op_vdot_vx; break;
								case 28: if (rvv && rv64) op = rv_op_vqmaccu_vx; break;
								case 29: if (rvv && rv64) op = rv_op_vqmacc_vx; break;
								case 30: if (rvv && rv64) op = rv_op_vqmaccus_vx; break;
								case 31: if (rvv && rv64) op = rv_op_vqmaccsu_vx; break;
							}
							break;
						case 13:
							// vfdiv.vf vfrdiv.vf vfmul.vf vfrsub.vf vfmadd.vf vfnmadd.vf vfmsub.vf vfnmsub.vf vfmacc.vf vfnmacc.vf vfmsac.vf vfnmsac.vf ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vfdiv_vf; break;
								case 1: if (rvv && rv64) op = rv_op_vfrdiv_vf; break;
								case 4: if (rvv && rv64) op = rv_op_vfmul_vf; break;
								case 5: if (rvv && rv64) op = rv_op_vfrsub_vf; break;
								case 8: if (rvv && rv64) op = rv_op_vfmadd_vf; break;
								case 9: if (rvv && rv64) op = rv_op_vfnmadd_vf; break;
								case 10: if (rvv && rv64) op = rv_op_vfmsub_vf; break;
								case 11: if (rvv && rv64) op = rv_op_vfnmsub_vf; break;
								case 12: if (rvv && rv64) op = rv_op_vfmacc_vf; break;
								case 13: if (rvv && rv64) op = rv_op_vfnmacc_vf; break;
								case 14: if (rvv && rv64) op = rv_op_vfmsac_vf; break;
								case 15: if (rvv && rv64) op = rv_op_vfnmsac_vf; break;
								case 16: if (rvv && rv64) op = rv_op_vfwadd_vf; break;
								case 17: if (rvv && rv64) op = rv_op_vfwredsum_vf; break;
								case 18: if (rvv && rv64) op = rv_op_vfwsub_vf; break;
								case 19: if (rvv && rv64) op = rv_op_vfwredosum_vf; break;
								case 20: if (rvv && rv64) op = rv_op_vfwadd_wf; break;
								case 22: if (rvv && rv64) op = rv_op_vfwsub_wf; break;
								case 24: if (rvv && rv64) op = rv_op_vfwmul_vf; break;
								case 25: if (rvv && rv64) op = rv_op_vfdot_vf; break;
								case 28: if (rvv && rv64) op = rv_op_vfwmacc_vf; break;
								case 29: if (rvv && rv64) op = rv_op_vfwnmacc_vf; break;
								case 30: if (rvv && rv64) op = rv_op_vfwmsac_vf; break;
								case 31: if (rvv && rv64) op = rv_op_vfwnmsac_vf; break;
							}
							break;
						case 14:
							// vdivu.vx vdiv.vx vremu.vx vrem.vx vmulhu.vx vmul.vx vmulhsu.vx vmulh.vx vmadd.vx vnmsub.vx vmacc.vx vnmsac.vx ...
							switch (((inst >> 26) & 0b11111) /* inst[30:26] */) {
								case 0: if (rvv && rv64) op = rv_op_vdivu_vx; break;
								case 1: if (rvv && rv64) op = rv_op_vdiv_vx; break;
								case 4: if (rvv && rv64) op = rv_op_vremu_vx; break;
								case 5: if (rvv && rv64) op = rv_op_vrem_vx; break;
								case 8: if (rvv && rv64) op = rv_op_vmulhu_vx; break;
								case 9: if (rvv && rv64) op = rv_op_vmul_vx; break;
								case 10: if (rvv && rv64) op = rv_op_vmulhsu_vx; break;
								case 11: if (rvv && rv64) op = rv_op_vmulh_vx; break;
								case 12: if (rvv && rv64) op = rv_op_vmadd_vx; break;
								case 13: if (rvv && rv64) op = rv_op_vnmsub_vx; break;
								case 14: if (rvv && rv64) op = rv_op_vmacc_vx; break;
								case 15: if (rvv && rv64) op = rv_op_vnmsac_vx; break;
								case 16: if (rvv && rv64) op = rv_op_vwaddu_vx; break;
								case 17: if (rvv && rv64) op = rv_op_vwadd_vx; break;
								case 18: if (rvv && rv64) op = rv_op_vwsubu_vx; break;
								case 19: if (rvv && rv64) op = rv_op_vwsub_vx; break;
								case 20: if (rvv && rv64) op = rv_op_vwaddu_w_vx; break;
								case 21: if (rvv && rv64) op = rv_op_vwadd_w_vx; break;
								case 22: if (rvv && rv64) op = rv_op_vwsubu_w_vx; break;
								case 23: if (rvv && rv64) op = rv_op_vwsub_w_vx; break;
								case 24: if (rvv && rv64) op = rv_op_vwmulu_vx; break;
								case 26: if (rvv && rv64) op = rv_op_vwmulsu_vx; break;
								case 27: if (rvv && rv64) op = rv_op_vwmul_vx; break;
								case 28: if (rvv && rv64) op = rv_op_vwmaccu_vx; break;
								case 29: if (rvv && rv64) op = rv_op_vwmacc_vx; break;
								case 30: if (rvv && rv64) op = rv_op_vwmaccus_vx; break;
								case 31: if (rvv && rv64) op = rv_op_vwmaccsu_vx; break;
							}
							break;
						case 15:
							// vsetivli vsetvl
							switch (((inst >> 30) & 0b1) /* inst[30] */) {
								case 0:
									// vsetvl
									switch (((inst >> 25) & 0b11111) /* inst[29:25] */) {
										case 0: if (rvv && rv64) op = rv_op_vsetvl; break;
									}
									break;
								case 1: if (rvv && rv64) op = rv_op_vsetivli; break;
							}
							break;
					}
					break;
				case 22:
					// addid sllid srlid sraid
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0: if (rvi && rv128) op = rv_op_addid; break;
						case 1:
							// sllid
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0: if (rvi && rv128) op = rv_op_sllid; break;
							}
							break;
						case 5:
							// srlid sraid
							switch (((inst >> 26) & 0b111111) /* inst[31:26] */) {
								case 0: if (rvi && rv128) op = rv_op_srlid; break;
								case 16: if (rvi && rv128) op = rv_op_sraid; break;
							}
							break;
					}
					break;
				case 24:
					// beq bne blt bge bltu bgeu
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0: if (rvi) op = rv_op_beq; break;
						case 1: if (rvi) op = rv_op_bne; break;
						case 4: if (rvi) op = rv_op_blt; break;
						case 5: if (rvi) op = rv_op_bge; break;
						case 6: if (rvi) op = rv_op_bltu; break;
						case 7: if (rvi) op = rv_op_bgeu; break;
					}
					break;
				case 25:
					// jalr
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0: if (rvi) op = rv_op_jalr; break;
					}
					break;
				case 27: if (rvi) op = rv_op_jal; break;
				case 28:
					// ecall ebreak uret sret hret mret dret sfence.vm sfence.vma wfi csrrw csrrs ...
					switch (((inst >> 12) & 0b111) /* inst[14:12] */) {
						case 0:
							// ecall ebreak uret sret hret mret dret sfence.vm sfence.vma wfi
							switch (((inst >> 20) & 0b111111100000) | ((inst >> 7) & 0b000000011111) /* inst[31:25|11:7] */) {
								case 0:
									// ecall ebreak uret
									switch (((inst >> 15) & 0b1111111111) /* inst[24:15] */) {
										case 0: if (rvs) op = rv_op_ecall; break;
										case 32: if (rvs) op = rv_op_ebreak; break;
										case 64: if (rvs) op = rv_op_uret; break;
									}
									break;
								case 256:
									// sret sfence.vm wfi
									switch (((inst >> 20) & 0b11111) /* inst[24:20] */) {
										case 2:
											// sret
											switch (((inst >> 15) & 0b11111) /* inst[19:15] */) {
												case 0: if (rvs) op = rv_op_sret; break;
											}
											break;
										case 4: if (rvs) op = rv_op_sfence_vm; break;
										case 5:
											// wfi
											switch (((inst >> 15) & 0b11111) /* inst[19:15] */) {
												case 0: if (rvs) op = rv_op_wfi; break;
											}
											break;
									}
									break;
								case 288: if (rvs) op = rv_op_sfence_vma; break;
								case 512:
									// hret
									switch (((inst >> 15) & 0b1111111111) /* inst[24:15] */) {
										case 64: if (rvs) op = rv_op_hret; break;
									}
									break;
								case 768:
									// mret
									switch (((inst >> 15) & 0b1111111111) /* inst[24:15] */) {
										case 64: if (rvs) op = rv_op_mret; break;
									}
									break;
								case 1952:
									// dret
									switch (((inst >> 15) & 0b1111111111) /* inst[24:15] */) {
										case 576: if (rvs) op = rv_op_dret; break;
									}
									break;
							}
							break;
						case 1: if (rvs) op = rv_op_csrrw; break;
						case 2: if (rvs) op = rv_op_csrrs; break;
						case 3: if (rvs) op = rv_op_csrrc; break;
						case 5: if (rvs) op = rv_op_csrrwi; break;
						case 6: if (rvs) op = rv_op_csrrsi; break;
						case 7: if (rvs) op = rv_op_csrrci; break;
					}
					break;
				case 30:
					// addd subd slld srld srad muld divd divud remd remud
					switch (((inst >> 22) & 0b1111111000) | ((inst >> 12) & 0b0000000111) /* inst[31:25|14:12] */) {
						case 0: if (rvi && rv128) op = rv_op_addd; break;
						case 1: if (rvi && rv128) op = rv_op_slld; break;
						case 5: if (rvi && rv128) op = rv_op_srld; break;
						case 8: if (rvm && rv128) op = rv_op_muld; break;
						case 12: if (rvm && rv128) op = rv_op_divd; break;
						case 13: if (rvm && rv128) op = rv_op_divud; break;
						case 14: if (rvm && rv128) op = rv_op_remd; break;
						case 15: if (rvm && rv128) op = rv_op_remud; break;
						case 256: if (rvi && rv128) op = rv_op_subd; break;
						case 261: if (rvi && rv128) op = rv_op_srad; break;
					}
					break;
			}
			break;
	}
	return op;
}

/* Decode Instruction Type */

template <typename T>
inline void decode_inst_type(T &dec, riscv::inst_t inst)
{
	dec.codec = rv_inst_codec[dec.op];
	switch (dec.codec) {
		case rv_codec_none:             riscv::decode_none(dec, inst);                     break;
		case rv_codec_u:                riscv::decode_u(dec, inst);                        break;
		case rv_codec_uj:               riscv::decode_uj(dec, inst);                       break;
		case rv_codec_i:                riscv::decode_i(dec, inst);                        break;
		case rv_codec_i_sh5:            riscv::decode_i_sh5(dec, inst);                    break;
		case rv_codec_i_sh6:            riscv::decode_i_sh6(dec, inst);                    break;
		case rv_codec_i_sh7:            riscv::decode_i_sh7(dec, inst);                    break;
		case rv_codec_i_csr:            riscv::decode_i_csr(dec, inst);                    break;
		case rv_codec_s:                riscv::decode_s(dec, inst);                        break;
		case rv_codec_sb:               riscv::decode_sb(dec, inst);                       break;
		case rv_codec_r:                riscv::decode_r(dec, inst);                        break;
		case rv_codec_r_m:              riscv::decode_r_m(dec, inst);                      break;
		case rv_codec_r4_m:             riscv::decode_r4_m(dec, inst);                     break;
		case rv_codec_r_a:              riscv::decode_r_a(dec, inst);                      break;
		case rv_codec_r_l:              riscv::decode_r_l(dec, inst);                      break;
		case rv_codec_r_f:              riscv::decode_r_f(dec, inst);                      break;
		case rv_codec_cb:               riscv::decode_cb(dec, inst);                       break;
		case rv_codec_cb_imm:           riscv::decode_cb_imm(dec, inst);                   break;
		case rv_codec_cb_sh5:           riscv::decode_cb_sh5(dec, inst);                   break;
		case rv_codec_cb_sh6:           riscv::decode_cb_sh6(dec, inst);                   break;
		case rv_codec_ci:               riscv::decode_ci(dec, inst);                       break;
		case rv_codec_ci_sh5:           riscv::decode_ci_sh5(dec, inst);                   break;
		case rv_codec_ci_sh6:           riscv::decode_ci_sh6(dec, inst);                   break;
		case rv_codec_ci_16sp:          riscv::decode_ci_16sp(dec, inst);                  break;
		case rv_codec_ci_lwsp:          riscv::decode_ci_lwsp(dec, inst);                  break;
		case rv_codec_ci_ldsp:          riscv::decode_ci_ldsp(dec, inst);                  break;
		case rv_codec_ci_lqsp:          riscv::decode_ci_lqsp(dec, inst);                  break;
		case rv_codec_ci_li:            riscv::decode_ci_li(dec, inst);                    break;
		case rv_codec_ci_lui:           riscv::decode_ci_lui(dec, inst);                   break;
		case rv_codec_ci_none:          riscv::decode_ci_none(dec, inst);                  break;
		case rv_codec_ciw_4spn:         riscv::decode_ciw_4spn(dec, inst);                 break;
		case rv_codec_cj:               riscv::decode_cj(dec, inst);                       break;
		case rv_codec_cj_jal:           riscv::decode_cj_jal(dec, inst);                   break;
		case rv_codec_cl_lw:            riscv::decode_cl_lw(dec, inst);                    break;
		case rv_codec_cl_ld:            riscv::decode_cl_ld(dec, inst);                    break;
		case rv_codec_cl_lq:            riscv::decode_cl_lq(dec, inst);                    break;
		case rv_codec_cr:               riscv::decode_cr(dec, inst);                       break;
		case rv_codec_cr_mv:            riscv::decode_cr_mv(dec, inst);                    break;
		case rv_codec_cr_jalr:          riscv::decode_cr_jalr(dec, inst);                  break;
		case rv_codec_cr_jr:            riscv::decode_cr_jr(dec, inst);                    break;
		case rv_codec_cs:               riscv::decode_cs(dec, inst);                       break;
		case rv_codec_cs_sw:            riscv::decode_cs_sw(dec, inst);                    break;
		case rv_codec_cs_sd:            riscv::decode_cs_sd(dec, inst);                    break;
		case rv_codec_cs_sq:            riscv::decode_cs_sq(dec, inst);                    break;
		case rv_codec_css_swsp:         riscv::decode_css_swsp(dec, inst);                 break;
		case rv_codec_css_sdsp:         riscv::decode_css_sdsp(dec, inst);                 break;
		case rv_codec_css_sqsp:         riscv::decode_css_sqsp(dec, inst);                 break;
	};
}

/* Encode Instruction */

template <typename T>
inline riscv::inst_t encode_inst(T &dec)
{
	dec.codec = rv_inst_codec[dec.op];
	riscv::inst_t inst = rv_inst_match[dec.op];
	switch (dec.codec) {
		case rv_codec_none:             return inst |= riscv::encode_none(dec);            break;
		case rv_codec_u:                return inst |= riscv::encode_u(dec);               break;
		case rv_codec_uj:               return inst |= riscv::encode_uj(dec);              break;
		case rv_codec_i:                return inst |= riscv::encode_i(dec);               break;
		case rv_codec_i_sh5:            return inst |= riscv::encode_i_sh5(dec);           break;
		case rv_codec_i_sh6:            return inst |= riscv::encode_i_sh6(dec);           break;
		case rv_codec_i_sh7:            return inst |= riscv::encode_i_sh7(dec);           break;
		case rv_codec_i_csr:            return inst |= riscv::encode_i_csr(dec);           break;
		case rv_codec_s:                return inst |= riscv::encode_s(dec);               break;
		case rv_codec_sb:               return inst |= riscv::encode_sb(dec);              break;
		case rv_codec_r:                return inst |= riscv::encode_r(dec);               break;
		case rv_codec_r_m:              return inst |= riscv::encode_r_m(dec);             break;
		case rv_codec_r4_m:             return inst |= riscv::encode_r4_m(dec);            break;
		case rv_codec_r_a:              return inst |= riscv::encode_r_a(dec);             break;
		case rv_codec_r_l:              return inst |= riscv::encode_r_l(dec);             break;
		case rv_codec_r_f:              return inst |= riscv::encode_r_f(dec);             break;
		case rv_codec_cb:               return inst |= riscv::encode_cb(dec);              break;
		case rv_codec_cb_imm:           return inst |= riscv::encode_cb_imm(dec);          break;
		case rv_codec_cb_sh5:           return inst |= riscv::encode_cb_sh5(dec);          break;
		case rv_codec_cb_sh6:           return inst |= riscv::encode_cb_sh6(dec);          break;
		case rv_codec_ci:               return inst |= riscv::encode_ci(dec);              break;
		case rv_codec_ci_sh5:           return inst |= riscv::encode_ci_sh5(dec);          break;
		case rv_codec_ci_sh6:           return inst |= riscv::encode_ci_sh6(dec);          break;
		case rv_codec_ci_16sp:          return inst |= riscv::encode_ci_16sp(dec);         break;
		case rv_codec_ci_lwsp:          return inst |= riscv::encode_ci_lwsp(dec);         break;
		case rv_codec_ci_ldsp:          return inst |= riscv::encode_ci_ldsp(dec);         break;
		case rv_codec_ci_lqsp:          return inst |= riscv::encode_ci_lqsp(dec);         break;
		case rv_codec_ci_li:            return inst |= riscv::encode_ci_li(dec);           break;
		case rv_codec_ci_lui:           return inst |= riscv::encode_ci_lui(dec);          break;
		case rv_codec_ci_none:          return inst |= riscv::encode_ci_none(dec);         break;
		case rv_codec_ciw_4spn:         return inst |= riscv::encode_ciw_4spn(dec);        break;
		case rv_codec_cj:               return inst |= riscv::encode_cj(dec);              break;
		case rv_codec_cj_jal:           return inst |= riscv::encode_cj_jal(dec);          break;
		case rv_codec_cl_lw:            return inst |= riscv::encode_cl_lw(dec);           break;
		case rv_codec_cl_ld:            return inst |= riscv::encode_cl_ld(dec);           break;
		case rv_codec_cl_lq:            return inst |= riscv::encode_cl_lq(dec);           break;
		case rv_codec_cr:               return inst |= riscv::encode_cr(dec);              break;
		case rv_codec_cr_mv:            return inst |= riscv::encode_cr_mv(dec);           break;
		case rv_codec_cr_jalr:          return inst |= riscv::encode_cr_jalr(dec);         break;
		case rv_codec_cr_jr:            return inst |= riscv::encode_cr_jr(dec);           break;
		case rv_codec_cs:               return inst |= riscv::encode_cs(dec);              break;
		case rv_codec_cs_sw:            return inst |= riscv::encode_cs_sw(dec);           break;
		case rv_codec_cs_sd:            return inst |= riscv::encode_cs_sd(dec);           break;
		case rv_codec_cs_sq:            return inst |= riscv::encode_cs_sq(dec);           break;
		case rv_codec_css_swsp:         return inst |= riscv::encode_css_swsp(dec);        break;
		case rv_codec_css_sdsp:         return inst |= riscv::encode_css_sdsp(dec);        break;
		case rv_codec_css_sqsp:         return inst |= riscv::encode_css_sqsp(dec);        break;
	};
	return inst;
}

#endif
