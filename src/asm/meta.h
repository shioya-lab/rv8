//
//  meta.h
//
//  DANGER - This is machine generated code
//

#ifndef rv_meta_h
#define rv_meta_h

#ifdef __cplusplus
extern "C" {
#endif

enum rv_primitive
{
	rv_primitive_none,
	rv_primitive_sx,                    /* signed long */
	rv_primitive_ux,                    /* unsigned long */
	rv_primitive_s8,                    /* signed char */
	rv_primitive_u8,                    /* unsigned char */
	rv_primitive_s16,                   /* signed short */
	rv_primitive_u16,                   /* unsigned short */
	rv_primitive_s32,                   /* signed int */
	rv_primitive_u32,                   /* unsigned int */
	rv_primitive_s64,                   /* signed long long */
	rv_primitive_u64,                   /* unsigned long long */
	rv_primitive_s128,                  /* signed __int128 */
	rv_primitive_u128,                  /* unsigned __int128 */
	rv_primitive_f32,                   /* float */
	rv_primitive_f64,                   /* double */
	rv_primitive_f128,                  /* __float128 */
};

enum rv_type
{
	rv_type_none = 0,                   /* None */
	rv_type_arg = 1,                    /* Argument */
	rv_type_creg = 2,                   /* Compressed Register */
	rv_type_ireg = 3,                   /* Integer Register */
	rv_type_freg = 4,                   /* Floating Point Register */
	rv_type_offset = 5,                 /* Signed Offset */
	rv_type_simm = 6,                   /* Sign Extended Immediate */
	rv_type_uimm = 7,                   /* Zero Extended Immediate */
	rv_type_vreg = 8,                   /* Vector Register */
};

enum rv_rm
{
	rv_rm_rne = 0,                      /* Round to Nearest, ties to Even */
	rv_rm_rtz = 1,                      /* Round towards Zero */
	rv_rm_rdn = 2,                      /* Round Down (towards -∞) */
	rv_rm_rup = 3,                      /* Round Up (towards +∞) */
	rv_rm_rmm = 4,                      /* Round to Nearest, ties to Max Magnitude */
	rv_rm_dyn = 7,                      /* Dynamic Rounding Mode */
};

enum rv_aqrl
{
	rv_aqrl_relaxed = 0,                /* Atomicity - no explicit ordering */
	rv_aqrl_acquire = 2,                /* Acquire - prior writes from other harts visible */
	rv_aqrl_release = 1,                /* Release - subsequent reads visible to other harts */
	rv_aqrl_acq_rel = 3,                /* Acquire-Release - global order of reads and writes */
};

enum rv_fence
{
	rv_fence_i = 8,                     /* Input */
	rv_fence_o = 4,                     /* Output */
	rv_fence_r = 2,                     /* Read */
	rv_fence_w = 1,                     /* Write */
};

enum rv_fcsr
{
	rv_fcsr_NX = 1,                     /* Inexact */
	rv_fcsr_UF = 2,                     /* Underflow */
	rv_fcsr_OF = 4,                     /* Overflow */
	rv_fcsr_DZ = 8,                     /* Divide by Zero */
	rv_fcsr_NV = 16,                    /* Invalid Operation */
};

enum rv_fclass
{
	rv_fclass_neg_inf = 1,              /* negative infinity */
	rv_fclass_neg_norm = 2,             /* negative normal number */
	rv_fclass_neg_subnorm = 4,          /* negative subnormal number */
	rv_fclass_neg_zero = 8,             /* negative zero */
	rv_fclass_pos_zero = 16,            /* positive zero */
	rv_fclass_pos_subnorm = 32,         /* positive subnormal number */
	rv_fclass_pos_norm = 64,            /* positive normal number */
	rv_fclass_pos_inf = 128,            /* positive infinity */
	rv_fclass_signaling_nan = 256,      /* signaling NaN */
	rv_fclass_quiet_nan = 512,          /* quiet NaN */
};

enum rv_fs
{
	rv_fs_off = 0,                      /* Off */
	rv_fs_initial = 1,                  /* Initial */
	rv_fs_clean = 2,                    /* Clean */
	rv_fs_dirty = 3,                    /* Dirty */
};

enum rv_xs
{
	rv_xs_all = 0,                      /* All off */
	rv_xs_initial = 1,                  /* None dirty or clean, some on */
	rv_xs_clean = 2,                    /* None dirty, some clean */
	rv_xs_dirty = 3,                    /* Some dirty */
};

enum rv_isa
{
	rv_isa_rv32 = 1,                    /* RV32 */
	rv_isa_rv64 = 2,                    /* RV64 */
	rv_isa_rv128 = 3,                   /* RV128 */
};

enum rv_ext
{
	rv_ext_I = 256,                     /* RV32I/64I/128I Base ISA */
	rv_ext_M = 4096,                    /* Integer Multiply/Divide extension */
	rv_ext_A = 1,                       /* Atomic Extension */
	rv_ext_F = 32,                      /* Single-precision foating-point extension */
	rv_ext_D = 8,                       /* Double-precision foating-point extension */
	rv_ext_C = 4,                       /* Compressed extension */
};

enum rv_mode
{
	rv_mode_U = 0,                      /* User mode */
	rv_mode_S = 1,                      /* Supervisor mode */
	rv_mode_H = 2,                      /* Hypervisor mode */
	rv_mode_M = 3,                      /* Machine mode */
};

enum rv_vm
{
	rv_vm_mbare = 0,                    /* No translation or protection */
	rv_vm_mbb = 1,                      /* Single base-and-bound */
	rv_vm_mbid = 2,                     /* Separate instruction and data base-and-bound */
	rv_vm_sv32 = 8,                     /* Page-based 32-bit virtual addressing */
	rv_vm_sv39 = 9,                     /* Page-based 39-bit virtual addressing */
	rv_vm_sv48 = 10,                    /* Page-based 48-bit virtual addressing */
	rv_vm_sv57 = 11,                    /* Reserved for page-based 48-bit virtual addressing */
	rv_vm_sv64 = 12,                    /* Reserved for page-based 48-bit virtual addressing */
};

enum rv_svm
{
	rv_svm_mbare = 0,                   /* No translation or protection */
	rv_svm_sv32 = 1,                    /* Page-based 32-bit virtual addressing */
	rv_svm_sv39 = 8,                    /* Page-based 39-bit virtual addressing */
	rv_svm_sv48 = 9,                    /* Page-based 48-bit virtual addressing */
	rv_svm_sv57 = 10,                   /* Reserved for page-based 48-bit virtual addressing */
	rv_svm_sv64 = 11,                   /* Reserved for page-based 48-bit virtual addressing */
};

enum rv_cause
{
	rv_cause_misaligned_fetch = 0,      /* Instruction address misaligned */
	rv_cause_fault_fetch = 1,           /* Instruction access fault */
	rv_cause_illegal_instruction = 2,   /* Illegal instruction */
	rv_cause_breakpoint = 3,            /* Breakpoint */
	rv_cause_misaligned_load = 4,       /* Load address misaligned */
	rv_cause_fault_load = 5,            /* Load access fault */
	rv_cause_misaligned_store = 6,      /* Store/AMO address misaligned */
	rv_cause_fault_store = 7,           /* Store/AMO access fault */
	rv_cause_user_ecall = 8,            /* Environment call from U-mode */
	rv_cause_supervisor_ecall = 9,      /* Environment call from S-mode */
	rv_cause_hypervisor_ecall = 10,     /* Environment call from H-mode */
	rv_cause_machine_ecall = 11,        /* Environment call from M-mode */
	rv_cause_exec_page_fault = 12,      /* Instruction page fault */
	rv_cause_load_page_fault = 13,      /* Load page fault */
	rv_cause_store_page_fault = 15,     /* Store/AMO page fault */
};

enum rv_intr
{
	rv_intr_u_software = 0,             /* User software interrupt */
	rv_intr_s_software = 1,             /* Supervisor software interrupt */
	rv_intr_h_software = 2,             /* Hypervisor software interrupt */
	rv_intr_m_software = 3,             /* Machine software interrupt */
	rv_intr_u_timer = 4,                /* User timer interrupt */
	rv_intr_s_timer = 5,                /* Supervisor timer interrupt */
	rv_intr_h_timer = 6,                /* Hypervisor timer interrupt */
	rv_intr_m_timer = 7,                /* Machine timer interrupt */
	rv_intr_u_external = 8,             /* User external interrupt */
	rv_intr_s_external = 9,             /* Supervisor external interrupt */
	rv_intr_h_external = 10,            /* Hypervisor external interrupt */
	rv_intr_m_external = 11,            /* Machine external interrupt */
};

enum rvc_constraint
{
	rvc_end,
	rvc_simm_6,                         /* imm >= -32 && imm < 32 */
	rvc_imm_6,                          /* imm <= 0b111111 */
	rvc_imm_7,                          /* imm <= 0b1111111 */
	rvc_imm_8,                          /* imm <= 0b11111111 */
	rvc_imm_9,                          /* imm <= 0b111111111 */
	rvc_imm_10,                         /* imm <= 0b1111111111 */
	rvc_imm_12,                         /* imm <= 0b111111111111 */
	rvc_imm_18,                         /* imm <= 0b111111111111111111 */
	rvc_imm_nz,                         /* imm != 0 */
	rvc_imm_x2,                         /* (imm & 0b1) == 0 */
	rvc_imm_x4,                         /* (imm & 0b11) == 0 */
	rvc_imm_x8,                         /* (imm & 0b111) == 0 */
	rvc_imm_x16,                        /* (imm & 0b1111) == 0 */
	rvc_rd_b3,                          /* rd  >= 8 && rd  <= 15 */
	rvc_rs1_b3,                         /* rs1 >= 8 && rs1 <= 15 */
	rvc_rs2_b3,                         /* rs2 >= 8 && rs2 <= 15 */
	rvc_rd_eq_rs1,                      /* rd == rs1 */
	rvc_rd_eq_ra,                       /* rd == 1 */
	rvc_rd_eq_sp,                       /* rd == 2 */
	rvc_rd_eq_x0,                       /* rd == 0 */
	rvc_rs1_eq_sp,                      /* rs1 == 2 */
	rvc_rs1_eq_x0,                      /* rs1 == 0 */
	rvc_rs2_eq_x0,                      /* rs2 == 0 */
	rvc_rd_ne_x0_x2,                    /* rd != 0 && rd != 2 */
	rvc_rd_ne_x0,                       /* rd != 0 */
	rvc_rs1_ne_x0,                      /* rs1 != 0 */
	rvc_rs2_ne_x0,                      /* rs2 != 0 */
	rvc_rs2_eq_rs1,                     /* rs2 == rs1 */
	rvc_rs1_eq_ra,                      /* rs1 == 1 */
	rvc_imm_eq_zero,                    /* imm == 0 */
	rvc_imm_eq_n1,                      /* imm == -1 */
	rvc_imm_eq_p1,                      /* imm == 1 */
	rvc_csr_eq_0x001,                   /* imm == 0x001 */
	rvc_csr_eq_0x002,                   /* imm == 0x002 */
	rvc_csr_eq_0x003,                   /* imm == 0x003 */
	rvc_csr_eq_0xc00,                   /* imm == 0xc00 */
	rvc_csr_eq_0xc01,                   /* imm == 0xc01 */
	rvc_csr_eq_0xc02,                   /* imm == 0xc02 */
	rvc_csr_eq_0xc80,                   /* imm == 0xc80 */
	rvc_csr_eq_0xc81,                   /* imm == 0xc81 */
	rvc_csr_eq_0xc82,                   /* imm == 0xc82 */
};

enum rv_csr
{
	rv_csr_ustatus = 0x000,             /* User status register */
	rv_csr_uie = 0x004,                 /* User interrupt-enable register */
	rv_csr_utvec = 0x005,               /* User trap handler base address */
	rv_csr_uscratch = 0x040,            /* Scratch handler for user trap handlers */
	rv_csr_uepc = 0x041,                /* User exception program counter */
	rv_csr_ucause = 0x042,              /* User trap cause */
	rv_csr_ubadaddr = 0x043,            /* User bad address */
	rv_csr_utval = 0x043,               /* User bad address or instruction */
	rv_csr_uip = 0x044,                 /* User interrupt pending */
	rv_csr_fflags = 0x001,              /* Floating-Point Accrued Exceptions */
	rv_csr_frm = 0x002,                 /* Floating-Point Dynamic Rounding Mode */
	rv_csr_fcsr = 0x003,                /* Floating-Point Control and Status (frm + fflags) */
	rv_csr_cycle = 0xC00,               /* Cycle counter (for RDCYCLE) */
	rv_csr_time = 0xC01,                /* Wall-clock time (for RDTIME) */
	rv_csr_instret = 0xC02,             /* Instructions-retired counter (for RDINSTRET) */
	rv_csr_cycleh = 0xC80,              /* Upper 32 bits of cycle, RV32I only */
	rv_csr_timeh = 0xC81,               /* Upper 32 bits of time, RV32I only */
	rv_csr_instreth = 0xC82,            /* Upper 32 bits of instret, RV32I only */
	rv_csr_sstatus = 0x100,             /* Supervisor status register */
	rv_csr_sedeleg = 0x102,             /* Supervisor exception delegation register */
	rv_csr_sideleg = 0x103,             /* Supervisor interrupt delegation register */
	rv_csr_sie = 0x104,                 /* Supervisor interrupt-enable register */
	rv_csr_stvec = 0x105,               /* Supervisor trap handler base address */
	rv_csr_sscratch = 0x140,            /* Scratch register for supervisor trap handlers */
	rv_csr_sepc = 0x141,                /* Supervisor exception program counter */
	rv_csr_scause = 0x142,              /* Supervisor trap cause */
	rv_csr_sbadaddr = 0x143,            /* Supervisor bad address */
	rv_csr_stval = 0x143,               /* Supervisor bad address or instruction */
	rv_csr_sip = 0x144,                 /* Supervisor interrupt pending */
	rv_csr_sptbr = 0x180,               /* Page-table base register */
	rv_csr_satp = 0x180,                /* Supervisor address translation and protection */
	rv_csr_scycle = 0xD00,              /* Supervisor cycle counter */
	rv_csr_stime = 0xD01,               /* Supervisor wall-clock time */
	rv_csr_sinstret = 0xD02,            /* Supervisor instructions-retired counter */
	rv_csr_scycleh = 0xD80,             /* Upper 32 bits of scycle, RV32I only */
	rv_csr_stimeh = 0xD81,              /* Upper 32 bits of stime, RV32I only */
	rv_csr_sinstreth = 0xD82,           /* Upper 32 bits of sinstret, RV32I only */
	rv_csr_hstatus = 0x200,             /* Hypervisor status register */
	rv_csr_hedeleg = 0x202,             /* Hypervisor exception delegation register */
	rv_csr_hideleg = 0x203,             /* Hypervisor interrupt delegation register */
	rv_csr_hie = 0x204,                 /* Hypervisor interrupt-enable register */
	rv_csr_htvec = 0x205,               /* Hypervisor trap handler base address */
	rv_csr_hscratch = 0x240,            /* Scratch register for hypervisor trap handlers */
	rv_csr_hepc = 0x241,                /* Hypervisor exception program counter */
	rv_csr_hcause = 0x242,              /* Hypervisor trap cause */
	rv_csr_hbadaddr = 0x243,            /* Hypervisor bad address */
	rv_csr_hip = 0x244,                 /* Hypervisor interrupt pending */
	rv_csr_hcycle = 0xE00,              /* Hypervisor cycle counter */
	rv_csr_htime = 0xE01,               /* Hypervisor wall-clock time */
	rv_csr_hinstret = 0xE02,            /* Hypervisor instructions-retired counter */
	rv_csr_hcycleh = 0xE80,             /* Upper 32 bits of hcycle, RV32I only */
	rv_csr_htimeh = 0xE81,              /* Upper 32 bits of htime, RV32I only */
	rv_csr_hinstreth = 0xE82,           /* Upper 32 bits of hinstret, RV32I only */
	rv_csr_mvendorid = 0xF11,           /* Vendor ID */
	rv_csr_marchid = 0xF12,             /* Architecture ID */
	rv_csr_mimpid = 0xF13,              /* Implementation ID */
	rv_csr_mhartid = 0xF14,             /* Hardware thread ID */
	rv_csr_mstatus = 0x300,             /* Machine status register */
	rv_csr_misa = 0x301,                /* ISA and extensions supported */
	rv_csr_medeleg = 0x302,             /* Machine exception delegation register */
	rv_csr_mideleg = 0x303,             /* Machine interrupt delegation register */
	rv_csr_mie = 0x304,                 /* Machine interrupt-enable register */
	rv_csr_mtvec = 0x305,               /* Machine trap-handler base address */
	rv_csr_mscratch = 0x340,            /* Scratch register for machine trap handlers */
	rv_csr_mepc = 0x341,                /* Machine exception program counter */
	rv_csr_mcause = 0x342,              /* Machine trap cause */
	rv_csr_mbadaddr = 0x343,            /* Machine bad address */
	rv_csr_mtval = 0x343,               /* Machine bad address or instruction */
	rv_csr_mip = 0x344,                 /* Machine interrupt pending */
	rv_csr_pmpcfg0 = 0x3A0,             /* Physical memory protection configuration */
	rv_csr_pmpcfg1 = 0x3A0,             /* Physical memory protection configuration (RV32 only) */
	rv_csr_pmpcfg2 = 0x3A0,             /* Physical memory protection configuration */
	rv_csr_pmpcfg3 = 0x3A0,             /* Physical memory protection configuration (RV32 only) */
	rv_csr_pmpaddr0 = 0x3B0,            /* Physical memory protection address register */
	rv_csr_pmpaddr1 = 0x3B1,            /* Physical memory protection address register */
	rv_csr_pmpaddr2 = 0x3B2,            /* Physical memory protection address register */
	rv_csr_pmpaddr3 = 0x3B3,            /* Physical memory protection address register */
	rv_csr_pmpaddr4 = 0x3B4,            /* Physical memory protection address register */
	rv_csr_pmpaddr5 = 0x3B5,            /* Physical memory protection address register */
	rv_csr_pmpaddr6 = 0x3B6,            /* Physical memory protection address register */
	rv_csr_pmpaddr7 = 0x3B7,            /* Physical memory protection address register */
	rv_csr_pmpaddr8 = 0x3B8,            /* Physical memory protection address register */
	rv_csr_pmpaddr9 = 0x3B9,            /* Physical memory protection address register */
	rv_csr_pmpaddr10 = 0x3BA,           /* Physical memory protection address register */
	rv_csr_pmpaddr11 = 0x3BB,           /* Physical memory protection address register */
	rv_csr_pmpaddr12 = 0x3BC,           /* Physical memory protection address register */
	rv_csr_pmpaddr13 = 0x3BE,           /* Physical memory protection address register */
	rv_csr_pmpaddr14 = 0x3BD,           /* Physical memory protection address register */
	rv_csr_pmpaddr15 = 0x3BF,           /* Physical memory protection address register */
	rv_csr_mbase = 0x380,               /* Base register */
	rv_csr_mbound = 0x381,              /* Bound register */
	rv_csr_mibase = 0x382,              /* Instruction base register */
	rv_csr_mibound = 0x383,             /* Instruction bound register */
	rv_csr_mdbase = 0x384,              /* Data base register */
	rv_csr_mdbound = 0x385,             /* Data bound register */
	rv_csr_mcycle = 0xB00,              /* Machine cycle counter */
	rv_csr_mtime = 0xB01,               /* Machine wall-clock time */
	rv_csr_minstret = 0xB02,            /* Machine instructions-retired counter */
	rv_csr_mhpmcounter3 = 0xB03,        /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter4 = 0xB04,        /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter5 = 0xB05,        /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter6 = 0xB06,        /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter7 = 0xB07,        /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter8 = 0xB08,        /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter9 = 0xB09,        /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter10 = 0xB0A,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter11 = 0xB0B,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter12 = 0xB0C,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter13 = 0xB0D,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter14 = 0xB0E,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter15 = 0xB0F,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter16 = 0xB10,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter17 = 0xB11,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter18 = 0xB12,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter19 = 0xB13,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter20 = 0xB14,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter21 = 0xB15,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter22 = 0xB16,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter23 = 0xB17,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter24 = 0xB18,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter25 = 0xB19,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter26 = 0xB1A,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter27 = 0xB1B,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter28 = 0xB1C,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter29 = 0xB1D,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter30 = 0xB1E,       /* Machine performance-monitoring counter */
	rv_csr_mhpmcounter31 = 0xB1F,       /* Machine performance-monitoring counter */
	rv_csr_mcycleh = 0xB80,             /* Upper 32 bits of mcycle, RV32I only */
	rv_csr_mtimeh = 0xB81,              /* Upper 32 bits of mtime, RV32I only */
	rv_csr_minstreth = 0xB82,           /* Upper 32 bits of minstret, RV32I only */
	rv_csr_mhpmcounter3h = 0xB83,       /* Upper 32 bits of mhpmcounter3, RV32I only */
	rv_csr_mhpmcounter4h = 0xB84,       /* Upper 32 bits of mhpmcounter4, RV32I only */
	rv_csr_mhpmcounter5h = 0xB85,       /* Upper 32 bits of mhpmcounter5, RV32I only */
	rv_csr_mhpmcounter6h = 0xB86,       /* Upper 32 bits of mhpmcounter6, RV32I only */
	rv_csr_mhpmcounter7h = 0xB87,       /* Upper 32 bits of mhpmcounter7, RV32I only */
	rv_csr_mhpmcounter8h = 0xB88,       /* Upper 32 bits of mhpmcounter8, RV32I only */
	rv_csr_mhpmcounter9h = 0xB89,       /* Upper 32 bits of mhpmcounter9, RV32I only */
	rv_csr_mhpmcounter10h = 0xB8A,      /* Upper 32 bits of mhpmcounter10, RV32I only */
	rv_csr_mhpmcounter11h = 0xB8B,      /* Upper 32 bits of mhpmcounter11, RV32I only */
	rv_csr_mhpmcounter12h = 0xB8C,      /* Upper 32 bits of mhpmcounter12, RV32I only */
	rv_csr_mhpmcounter13h = 0xB8D,      /* Upper 32 bits of mhpmcounter13, RV32I only */
	rv_csr_mhpmcounter14h = 0xB8E,      /* Upper 32 bits of mhpmcounter14, RV32I only */
	rv_csr_mhpmcounter15h = 0xB8F,      /* Upper 32 bits of mhpmcounter15, RV32I only */
	rv_csr_mhpmcounter16h = 0xB90,      /* Upper 32 bits of mhpmcounter16, RV32I only */
	rv_csr_mhpmcounter17h = 0xB91,      /* Upper 32 bits of mhpmcounter17, RV32I only */
	rv_csr_mhpmcounter18h = 0xB92,      /* Upper 32 bits of mhpmcounter18, RV32I only */
	rv_csr_mhpmcounter19h = 0xB93,      /* Upper 32 bits of mhpmcounter19, RV32I only */
	rv_csr_mhpmcounter20h = 0xB94,      /* Upper 32 bits of mhpmcounter20, RV32I only */
	rv_csr_mhpmcounter21h = 0xB95,      /* Upper 32 bits of mhpmcounter21, RV32I only */
	rv_csr_mhpmcounter22h = 0xB96,      /* Upper 32 bits of mhpmcounter22, RV32I only */
	rv_csr_mhpmcounter23h = 0xB97,      /* Upper 32 bits of mhpmcounter23, RV32I only */
	rv_csr_mhpmcounter24h = 0xB98,      /* Upper 32 bits of mhpmcounter24, RV32I only */
	rv_csr_mhpmcounter25h = 0xB99,      /* Upper 32 bits of mhpmcounter25, RV32I only */
	rv_csr_mhpmcounter26h = 0xB9A,      /* Upper 32 bits of mhpmcounter26, RV32I only */
	rv_csr_mhpmcounter27h = 0xB9B,      /* Upper 32 bits of mhpmcounter27, RV32I only */
	rv_csr_mhpmcounter28h = 0xB9C,      /* Upper 32 bits of mhpmcounter28, RV32I only */
	rv_csr_mhpmcounter29h = 0xB9D,      /* Upper 32 bits of mhpmcounter29, RV32I only */
	rv_csr_mhpmcounter30h = 0xB9E,      /* Upper 32 bits of mhpmcounter30, RV32I only */
	rv_csr_mhpmcounter31h = 0xB9F,      /* Upper 32 bits of mhpmcounter31, RV32I only */
	rv_csr_mucounteren = 0x320,         /* Machine interrupt-enable register */
	rv_csr_mscounteren = 0x321,         /* Supervisor-mode counter enable */
	rv_csr_mhcounteren = 0x322,         /* Hypervisor-mode counter enable */
	rv_csr_mhpmevent3 = 0x323,          /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent4 = 0x324,          /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent5 = 0x325,          /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent6 = 0x326,          /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent7 = 0x327,          /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent8 = 0x328,          /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent9 = 0x329,          /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent10 = 0x32A,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent11 = 0x32B,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent12 = 0x32C,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent13 = 0x32D,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent14 = 0x32E,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent15 = 0x32F,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent16 = 0x330,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent17 = 0x331,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent18 = 0x332,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent19 = 0x333,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent20 = 0x334,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent21 = 0x335,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent22 = 0x336,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent23 = 0x337,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent24 = 0x338,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent25 = 0x339,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent26 = 0x33A,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent27 = 0x33B,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent28 = 0x33C,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent29 = 0x33D,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent30 = 0x33E,         /* Machine performance-monitoring event selector */
	rv_csr_mhpmevent31 = 0x33F,         /* Machine performance-monitoring event selector */
	rv_csr_tselect = 0x7A0,             /* Debug/Trace trigger register select */
	rv_csr_tdata1 = 0x7A1,              /* First Debug/Trace trigger data register */
	rv_csr_tdata2 = 0x7A2,              /* Second Debug/Trace trigger data register */
	rv_csr_tdata3 = 0x7A3,              /* Third Debug/Trace trigger data register */
	rv_csr_dcsr = 0x7B0,                /* Debug control and status register */
	rv_csr_dpc = 0x7B1,                 /* Debug program counter */
	rv_csr_dscratch = 0x7B2,            /* Debug scratch register */
	rv_csr_mtohost = 0x780,             /* IO to Host */
	rv_csr_mfromhost = 0x781,           /* IO from Host */
	rv_csr_mreset = 0x782,              /* Reset */
	rv_csr_mipi = 0x783,                /* Inter Processor Interrupt */
	rv_csr_miobase = 0x784,             /* IO Base */
};

enum rv_ireg_num
{
	rv_ireg_x0,                         /* Hard-wired zero */
	rv_ireg_x1,                         /* Return address Caller */
	rv_ireg_x2,                         /* Stack pointer Callee */
	rv_ireg_x3,                         /* Global pointer */
	rv_ireg_x4,                         /* Thread pointer Callee */
	rv_ireg_x5,                         /* Temporaries Caller */
	rv_ireg_x6,                         /* Temporaries Caller */
	rv_ireg_x7,                         /* Temporaries Caller */
	rv_ireg_x8,                         /* Saved register/frame pointer Callee */
	rv_ireg_x9,                         /* Saved registers Callee */
	rv_ireg_x10,                        /* Function arguments Caller */
	rv_ireg_x11,                        /* Function arguments Caller */
	rv_ireg_x12,                        /* Function arguments Caller */
	rv_ireg_x13,                        /* Function arguments Caller */
	rv_ireg_x14,                        /* Function arguments Caller */
	rv_ireg_x15,                        /* Function arguments Caller */
	rv_ireg_x16,                        /* Function arguments Caller */
	rv_ireg_x17,                        /* Function arguments Caller */
	rv_ireg_x18,                        /* Saved registers Callee */
	rv_ireg_x19,                        /* Saved registers Callee */
	rv_ireg_x20,                        /* Saved registers Callee */
	rv_ireg_x21,                        /* Saved registers Callee */
	rv_ireg_x22,                        /* Saved registers Callee */
	rv_ireg_x23,                        /* Saved registers Callee */
	rv_ireg_x24,                        /* Saved registers Callee */
	rv_ireg_x25,                        /* Saved registers Callee */
	rv_ireg_x26,                        /* Saved registers Callee */
	rv_ireg_x27,                        /* Saved registers Callee */
	rv_ireg_x28,                        /* Temporaries Caller */
	rv_ireg_x29,                        /* Temporaries Caller */
	rv_ireg_x30,                        /* Temporaries Caller */
	rv_ireg_x31,                        /* Temporaries Caller */
};

enum rv_ireg_name
{
	rv_ireg_zero,                       /* Hard-wired zero */
	rv_ireg_ra,                         /* Return address Caller */
	rv_ireg_sp,                         /* Stack pointer Callee */
	rv_ireg_gp,                         /* Global pointer */
	rv_ireg_tp,                         /* Thread pointer Callee */
	rv_ireg_t0,                         /* Temporaries Caller */
	rv_ireg_t1,                         /* Temporaries Caller */
	rv_ireg_t2,                         /* Temporaries Caller */
	rv_ireg_s0,                         /* Saved register/frame pointer Callee */
	rv_ireg_s1,                         /* Saved registers Callee */
	rv_ireg_a0,                         /* Function arguments Caller */
	rv_ireg_a1,                         /* Function arguments Caller */
	rv_ireg_a2,                         /* Function arguments Caller */
	rv_ireg_a3,                         /* Function arguments Caller */
	rv_ireg_a4,                         /* Function arguments Caller */
	rv_ireg_a5,                         /* Function arguments Caller */
	rv_ireg_a6,                         /* Function arguments Caller */
	rv_ireg_a7,                         /* Function arguments Caller */
	rv_ireg_s2,                         /* Saved registers Callee */
	rv_ireg_s3,                         /* Saved registers Callee */
	rv_ireg_s4,                         /* Saved registers Callee */
	rv_ireg_s5,                         /* Saved registers Callee */
	rv_ireg_s6,                         /* Saved registers Callee */
	rv_ireg_s7,                         /* Saved registers Callee */
	rv_ireg_s8,                         /* Saved registers Callee */
	rv_ireg_s9,                         /* Saved registers Callee */
	rv_ireg_s10,                        /* Saved registers Callee */
	rv_ireg_s11,                        /* Saved registers Callee */
	rv_ireg_t3,                         /* Temporaries Caller */
	rv_ireg_t4,                         /* Temporaries Caller */
	rv_ireg_t5,                         /* Temporaries Caller */
	rv_ireg_t6,                         /* Temporaries Caller */
};

enum rv_freg_num
{
	rv_freg_f0,                         /* FP temporaries Caller */
	rv_freg_f1,                         /* FP temporaries Caller */
	rv_freg_f2,                         /* FP temporaries Caller */
	rv_freg_f3,                         /* FP temporaries Caller */
	rv_freg_f4,                         /* FP temporaries Caller */
	rv_freg_f5,                         /* FP temporaries Caller */
	rv_freg_f6,                         /* FP temporaries Caller */
	rv_freg_f7,                         /* FP temporaries Caller */
	rv_freg_f8,                         /* FP saved registers Callee */
	rv_freg_f9,                         /* FP saved registers Callee */
	rv_freg_f10,                        /* FP arguments Caller */
	rv_freg_f11,                        /* FP arguments Caller */
	rv_freg_f12,                        /* FP arguments Caller */
	rv_freg_f13,                        /* FP arguments Caller */
	rv_freg_f14,                        /* FP arguments Caller */
	rv_freg_f15,                        /* FP arguments Caller */
	rv_freg_f16,                        /* FP arguments Caller */
	rv_freg_f17,                        /* FP arguments Caller */
	rv_freg_f18,                        /* FP saved registers Callee */
	rv_freg_f19,                        /* FP saved registers Callee */
	rv_freg_f20,                        /* FP saved registers Callee */
	rv_freg_f21,                        /* FP saved registers Callee */
	rv_freg_f22,                        /* FP saved registers Callee */
	rv_freg_f23,                        /* FP saved registers Callee */
	rv_freg_f24,                        /* FP saved registers Callee */
	rv_freg_f25,                        /* FP saved registers Callee */
	rv_freg_f26,                        /* FP saved registers Callee */
	rv_freg_f27,                        /* FP saved registers Callee */
	rv_freg_f28,                        /* FP temporaries Caller */
	rv_freg_f29,                        /* FP temporaries Caller */
	rv_freg_f30,                        /* FP temporaries Caller */
	rv_freg_f31,                        /* FP temporaries Caller */
};

enum rv_freg_name
{
	rv_freg_ft0,                        /* FP temporaries Caller */
	rv_freg_ft1,                        /* FP temporaries Caller */
	rv_freg_ft2,                        /* FP temporaries Caller */
	rv_freg_ft3,                        /* FP temporaries Caller */
	rv_freg_ft4,                        /* FP temporaries Caller */
	rv_freg_ft5,                        /* FP temporaries Caller */
	rv_freg_ft6,                        /* FP temporaries Caller */
	rv_freg_ft7,                        /* FP temporaries Caller */
	rv_freg_fs0,                        /* FP saved registers Callee */
	rv_freg_fs1,                        /* FP saved registers Callee */
	rv_freg_fa0,                        /* FP arguments Caller */
	rv_freg_fa1,                        /* FP arguments Caller */
	rv_freg_fa2,                        /* FP arguments Caller */
	rv_freg_fa3,                        /* FP arguments Caller */
	rv_freg_fa4,                        /* FP arguments Caller */
	rv_freg_fa5,                        /* FP arguments Caller */
	rv_freg_fa6,                        /* FP arguments Caller */
	rv_freg_fa7,                        /* FP arguments Caller */
	rv_freg_fs2,                        /* FP saved registers Callee */
	rv_freg_fs3,                        /* FP saved registers Callee */
	rv_freg_fs4,                        /* FP saved registers Callee */
	rv_freg_fs5,                        /* FP saved registers Callee */
	rv_freg_fs6,                        /* FP saved registers Callee */
	rv_freg_fs7,                        /* FP saved registers Callee */
	rv_freg_fs8,                        /* FP saved registers Callee */
	rv_freg_fs9,                        /* FP saved registers Callee */
	rv_freg_fs10,                       /* FP saved registers Callee */
	rv_freg_fs11,                       /* FP saved registers Callee */
	rv_freg_ft8,                        /* FP temporaries Caller */
	rv_freg_ft9,                        /* FP temporaries Caller */
	rv_freg_ft10,                       /* FP temporaries Caller */
	rv_freg_ft11,                       /* FP temporaries Caller */
};

enum rv_codec
{
	rv_codec_illegal,
	rv_codec_none,
	rv_codec_u,
	rv_codec_uj,
	rv_codec_i,
	rv_codec_i_sh5,
	rv_codec_i_sh6,
	rv_codec_i_sh7,
	rv_codec_i_csr,
	rv_codec_s,
	rv_codec_sb,
	rv_codec_r,
	rv_codec_r_m,
	rv_codec_r4_m,
	rv_codec_r_a,
	rv_codec_r_l,
	rv_codec_r_f,
	rv_codec_cb,
	rv_codec_cb_imm,
	rv_codec_cb_sh5,
	rv_codec_cb_sh6,
	rv_codec_ci,
	rv_codec_ci_sh5,
	rv_codec_ci_sh6,
	rv_codec_ci_16sp,
	rv_codec_ci_lwsp,
	rv_codec_ci_ldsp,
	rv_codec_ci_lqsp,
	rv_codec_ci_li,
	rv_codec_ci_lui,
	rv_codec_ci_none,
	rv_codec_ciw_4spn,
	rv_codec_cj,
	rv_codec_cj_jal,
	rv_codec_cl_lw,
	rv_codec_cl_ld,
	rv_codec_cl_lq,
	rv_codec_cr,
	rv_codec_cr_mv,
	rv_codec_cr_jalr,
	rv_codec_cr_jr,
	rv_codec_cs,
	rv_codec_cs_sw,
	rv_codec_cs_sd,
	rv_codec_cs_sq,
	rv_codec_css_swsp,
	rv_codec_css_sdsp,
	rv_codec_css_sqsp,
	rv_codec_i_lv,
	rv_codec_s_v,
	rv_codec_i_vs,
	rv_codec_s_vs,
	rv_codec_i_vsv,
	rv_codec_s_vsv,
	rv_codec_i_vv,
	rv_codec_i_vr,
	rv_codec_i_vf,
	rv_codec_i_vvf,
	rv_codec_i_vi,
	rv_codec_i_v,
};

enum rv_operand_name
{
	rv_operand_name_none,
	rv_operand_name_rd,
	rv_operand_name_rs1,
	rv_operand_name_rs2,
	rv_operand_name_rs3,
	rv_operand_name_frd,
	rv_operand_name_frs1,
	rv_operand_name_frs2,
	rv_operand_name_frs3,
	rv_operand_name_aq,
	rv_operand_name_rl,
	rv_operand_name_pred,
	rv_operand_name_succ,
	rv_operand_name_rm,
	rv_operand_name_imm20,
	rv_operand_name_oimm20,
	rv_operand_name_jimm20,
	rv_operand_name_imm12,
	rv_operand_name_oimm12,
	rv_operand_name_csr12,
	rv_operand_name_simm12,
	rv_operand_name_sbimm12,
	rv_operand_name_zimm,
	rv_operand_name_shamt5,
	rv_operand_name_shamt6,
	rv_operand_name_shamt7,
	rv_operand_name_crd0,
	rv_operand_name_crdq,
	rv_operand_name_crs1q,
	rv_operand_name_crs1rdq,
	rv_operand_name_crs2q,
	rv_operand_name_crd,
	rv_operand_name_crs1,
	rv_operand_name_crs1rd,
	rv_operand_name_crs2,
	rv_operand_name_cfrdq,
	rv_operand_name_cfrs2q,
	rv_operand_name_cfrs2,
	rv_operand_name_cfrd,
	rv_operand_name_cimmsh5,
	rv_operand_name_cimmsh6,
	rv_operand_name_cimmi,
	rv_operand_name_cnzimmi,
	rv_operand_name_cimmui,
	rv_operand_name_cimmlwsp,
	rv_operand_name_cimmldsp,
	rv_operand_name_cimmlqsp,
	rv_operand_name_cimm16sp,
	rv_operand_name_cimmj,
	rv_operand_name_cimmb,
	rv_operand_name_cimmswsp,
	rv_operand_name_cimmsdsp,
	rv_operand_name_cimmsqsp,
	rv_operand_name_cimm4spn,
	rv_operand_name_cimmw,
	rv_operand_name_cimmd,
	rv_operand_name_cimmq,
	rv_operand_name_vd,
	rv_operand_name_vs1,
	rv_operand_name_vs2,
	rv_operand_name_vs3,
	rv_operand_name_simm5,
};

enum rv_operand_type
{
	rv_operand_type_none,
	rv_operand_type_ireg5,
	rv_operand_type_freg5,
	rv_operand_type_arg1,
	rv_operand_type_arg4,
	rv_operand_type_arg3,
	rv_operand_type_simm32,
	rv_operand_type_offset32,
	rv_operand_type_offset21,
	rv_operand_type_simm12,
	rv_operand_type_offset12,
	rv_operand_type_uimm12,
	rv_operand_type_offset13,
	rv_operand_type_uimm5,
	rv_operand_type_uimm6,
	rv_operand_type_uimm7,
	rv_operand_type_creg1,
	rv_operand_type_creg3,
	rv_operand_type_simm6,
	rv_operand_type_simm18,
	rv_operand_type_uimm8,
	rv_operand_type_uimm9,
	rv_operand_type_uimm10,
	rv_operand_type_simm10,
	rv_operand_type_simm9,
	rv_operand_type_vreg5,
	rv_operand_type_simm1,
};

enum rv_op
{
	rv_op_illegal = 0,
	rv_op_lui = 1,                     	/* Load Upper Immediate */
	rv_op_auipc = 2,                   	/* Add Upper Immediate to PC */
	rv_op_jal = 3,                     	/* Jump and Link */
	rv_op_jalr = 4,                    	/* Jump and Link Register */
	rv_op_beq = 5,                     	/* Branch Equal */
	rv_op_bne = 6,                     	/* Branch Not Equal */
	rv_op_blt = 7,                     	/* Branch Less Than */
	rv_op_bge = 8,                     	/* Branch Greater than Equal */
	rv_op_bltu = 9,                    	/* Branch Less Than Unsigned */
	rv_op_bgeu = 10,                   	/* Branch Greater than Equal Unsigned */
	rv_op_lb = 11,                     	/* Load Byte */
	rv_op_lh = 12,                     	/* Load Half */
	rv_op_lw = 13,                     	/* Load Word */
	rv_op_lbu = 14,                    	/* Load Byte Unsigned */
	rv_op_lhu = 15,                    	/* Load Half Unsigned */
	rv_op_sb = 16,                     	/* Store Byte */
	rv_op_sh = 17,                     	/* Store Half */
	rv_op_sw = 18,                     	/* Store Word */
	rv_op_addi = 19,                   	/* Add Immediate */
	rv_op_slti = 20,                   	/* Set Less Than Immediate */
	rv_op_sltiu = 21,                  	/* Set Less Than Immediate Unsigned */
	rv_op_xori = 22,                   	/* Xor Immediate */
	rv_op_ori = 23,                    	/* Or Immediate */
	rv_op_andi = 24,                   	/* And Immediate */
	rv_op_slli = 25,                   	/* Shift Left Logical Immediate */
	rv_op_srli = 26,                   	/* Shift Right Logical Immediate */
	rv_op_srai = 27,                   	/* Shift Right Arithmetic Immediate */
	rv_op_add = 28,                    	/* Add */
	rv_op_sub = 29,                    	/* Subtract */
	rv_op_sll = 30,                    	/* Shift Left Logical */
	rv_op_slt = 31,                    	/* Set Less Than */
	rv_op_sltu = 32,                   	/* Set Less Than Unsigned */
	rv_op_xor = 33,                    	/* Xor */
	rv_op_srl = 34,                    	/* Shift Right Logical */
	rv_op_sra = 35,                    	/* Shift Right Arithmetic */
	rv_op_or = 36,                     	/* Or */
	rv_op_and = 37,                    	/* And */
	rv_op_fence = 38,                  	/* Fence */
	rv_op_fence_i = 39,                	/* Fence Instruction */
	rv_op_lwu = 40,                    	/* Load Word Unsigned */
	rv_op_ld = 41,                     	/* Load Double */
	rv_op_sd = 42,                     	/* Store Double */
	rv_op_addiw = 43,                  	/* Add Immediate Word */
	rv_op_slliw = 44,                  	/* Shift Left Logical Immediate Word */
	rv_op_srliw = 45,                  	/* Shift Right Logical Immediate Word */
	rv_op_sraiw = 46,                  	/* Shift Right Arithmetic Immediate Word */
	rv_op_addw = 47,                   	/* Add Word */
	rv_op_subw = 48,                   	/* Subtract Word */
	rv_op_sllw = 49,                   	/* Shift Left Logical Word */
	rv_op_srlw = 50,                   	/* Shift Right Logical Word */
	rv_op_sraw = 51,                   	/* Shift Right Arithmetic Word */
	rv_op_ldu = 52,                    
	rv_op_lq = 53,                     
	rv_op_sq = 54,                     
	rv_op_addid = 55,                  
	rv_op_sllid = 56,                  
	rv_op_srlid = 57,                  
	rv_op_sraid = 58,                  
	rv_op_addd = 59,                   
	rv_op_subd = 60,                   
	rv_op_slld = 61,                   
	rv_op_srld = 62,                   
	rv_op_srad = 63,                   
	rv_op_mul = 64,                    	/* Multiply */
	rv_op_mulh = 65,                   	/* Multiply High Signed Signed */
	rv_op_mulhsu = 66,                 	/* Multiply High Signed Unsigned */
	rv_op_mulhu = 67,                  	/* Multiply High Unsigned Unsigned */
	rv_op_div = 68,                    	/* Divide Signed */
	rv_op_divu = 69,                   	/* Divide Unsigned */
	rv_op_rem = 70,                    	/* Remainder Signed */
	rv_op_remu = 71,                   	/* Remainder Unsigned */
	rv_op_mulw = 72,                   	/* Multiple Word */
	rv_op_divw = 73,                   	/* Divide Signed Word */
	rv_op_divuw = 74,                  	/* Divide Unsigned Word */
	rv_op_remw = 75,                   	/* Remainder Signed Word */
	rv_op_remuw = 76,                  	/* Remainder Unsigned Word */
	rv_op_muld = 77,                   
	rv_op_divd = 78,                   
	rv_op_divud = 79,                  
	rv_op_remd = 80,                   
	rv_op_remud = 81,                  
	rv_op_lr_w = 82,                   	/* Load Reserved Word */
	rv_op_sc_w = 83,                   	/* Store Conditional Word */
	rv_op_amoswap_w = 84,              	/* Atomic Swap Word */
	rv_op_amoadd_w = 85,               	/* Atomic Add Word */
	rv_op_amoxor_w = 86,               	/* Atomic Xor Word */
	rv_op_amoor_w = 87,                	/* Atomic Or Word */
	rv_op_amoand_w = 88,               	/* Atomic And Word */
	rv_op_amomin_w = 89,               	/* Atomic Minimum Word */
	rv_op_amomax_w = 90,               	/* Atomic Maximum Word */
	rv_op_amominu_w = 91,              	/* Atomic Minimum Unsigned Word */
	rv_op_amomaxu_w = 92,              	/* Atomic Maximum Unsigned Word */
	rv_op_lr_d = 93,                   	/* Load Reserved Double Word */
	rv_op_sc_d = 94,                   	/* Store Conditional Double Word */
	rv_op_amoswap_d = 95,              	/* Atomic Swap Double Word */
	rv_op_amoadd_d = 96,               	/* Atomic Add Double Word */
	rv_op_amoxor_d = 97,               	/* Atomic Xor Double Word */
	rv_op_amoor_d = 98,                	/* Atomic Or Double Word */
	rv_op_amoand_d = 99,               	/* Atomic And Double Word */
	rv_op_amomin_d = 100,              	/* Atomic Minimum Double Word */
	rv_op_amomax_d = 101,              	/* Atomic Maximum Double Word */
	rv_op_amominu_d = 102,             	/* Atomic Minimum Unsigned Double Word */
	rv_op_amomaxu_d = 103,             	/* Atomic Maximum Unsigned Double Word */
	rv_op_lr_q = 104,                  
	rv_op_sc_q = 105,                  
	rv_op_amoswap_q = 106,             
	rv_op_amoadd_q = 107,              
	rv_op_amoxor_q = 108,              
	rv_op_amoor_q = 109,               
	rv_op_amoand_q = 110,              
	rv_op_amomin_q = 111,              
	rv_op_amomax_q = 112,              
	rv_op_amominu_q = 113,             
	rv_op_amomaxu_q = 114,             
	rv_op_ecall = 115,                 	/* Environment Call */
	rv_op_ebreak = 116,                	/* Environment Break to Debugger */
	rv_op_uret = 117,                  	/* User Return */
	rv_op_sret = 118,                  	/* System Return */
	rv_op_hret = 119,                  	/* Hypervisor Return */
	rv_op_mret = 120,                  	/* Machine-Mode Return */
	rv_op_dret = 121,                  	/* Debug-Mode Return */
	rv_op_sfence_vm = 122,             	/* Supervisor Memory Management Fence */
	rv_op_sfence_vma = 123,            	/* Supervisor Memory Management Fence */
	rv_op_wfi = 124,                   	/* Wait For Interrupt */
	rv_op_csrrw = 125,                 	/* CSR Atomic Read Write */
	rv_op_csrrs = 126,                 	/* CSR Atomic Set Bit */
	rv_op_csrrc = 127,                 	/* CSR Atomic Clear Bit */
	rv_op_csrrwi = 128,                	/* CSR Atomic Read Write Immediate */
	rv_op_csrrsi = 129,                	/* CSR Atomic Set Bit Immediate */
	rv_op_csrrci = 130,                	/* CSR Atomic Clear Bit Immediate */
	rv_op_flw = 131,                   	/* FP Load (SP) */
	rv_op_fsw = 132,                   	/* FP Store (SP) */
	rv_op_fmadd_s = 133,               	/* FP Fused Multiply Add (SP) */
	rv_op_fmsub_s = 134,               	/* FP Fused Multiply Subtract (SP) */
	rv_op_fnmsub_s = 135,              	/* FP Negate fused Multiply Subtract (SP) */
	rv_op_fnmadd_s = 136,              	/* FP Negate fused Multiply Add (SP) */
	rv_op_fadd_s = 137,                	/* FP Add (SP) */
	rv_op_fsub_s = 138,                	/* FP Subtract (SP) */
	rv_op_fmul_s = 139,                	/* FP Multiply (SP) */
	rv_op_fdiv_s = 140,                	/* FP Divide (SP) */
	rv_op_fsgnj_s = 141,               	/* FP Sign-injection (SP) */
	rv_op_fsgnjn_s = 142,              	/* FP Sign-injection Negate (SP) */
	rv_op_fsgnjx_s = 143,              	/* FP Sign-injection Xor (SP) */
	rv_op_fmin_s = 144,                	/* FP Minimum (SP) */
	rv_op_fmax_s = 145,                	/* FP Maximum (SP) */
	rv_op_fsqrt_s = 146,               	/* FP Square Root (SP) */
	rv_op_fle_s = 147,                 	/* FP Less Than Equal (SP) */
	rv_op_flt_s = 148,                 	/* FP Less Than (SP) */
	rv_op_feq_s = 149,                 	/* FP Equal (SP) */
	rv_op_fcvt_w_s = 150,              	/* FP Convert Float to Word (SP) */
	rv_op_fcvt_wu_s = 151,             	/* FP Convert Float to Word Unsigned (SP) */
	rv_op_fcvt_s_w = 152,              	/* FP Convert Word to Float (SP) */
	rv_op_fcvt_s_wu = 153,             	/* FP Convert Word Unsigned to Float (SP) */
	rv_op_fmv_x_s = 154,               	/* FP Move to Integer Register (SP) */
	rv_op_fclass_s = 155,              	/* FP Classify (SP) */
	rv_op_fmv_s_x = 156,               	/* FP Move from Integer Register (SP) */
	rv_op_fcvt_l_s = 157,              	/* FP Convert Float to Double Word (SP) */
	rv_op_fcvt_lu_s = 158,             	/* FP Convert Float to Double Word Unsigned (SP) */
	rv_op_fcvt_s_l = 159,              	/* FP Convert Double Word to Float (SP) */
	rv_op_fcvt_s_lu = 160,             	/* FP Convert Double Word Unsigned to Float (SP) */
	rv_op_fld = 161,                   	/* FP Load (DP) */
	rv_op_fsd = 162,                   	/* FP Store (DP) */
	rv_op_fmadd_d = 163,               	/* FP Fused Multiply Add (DP) */
	rv_op_fmsub_d = 164,               	/* FP Fused Multiply Subtract (DP) */
	rv_op_fnmsub_d = 165,              	/* FP Negate fused Multiply Subtract (DP) */
	rv_op_fnmadd_d = 166,              	/* FP Negate fused Multiply Add (DP) */
	rv_op_fadd_d = 167,                	/* FP Add (DP) */
	rv_op_fsub_d = 168,                	/* FP Subtract (DP) */
	rv_op_fmul_d = 169,                	/* FP Multiply (DP) */
	rv_op_fdiv_d = 170,                	/* FP Divide (DP) */
	rv_op_fsgnj_d = 171,               	/* FP to Sign-injection (DP) */
	rv_op_fsgnjn_d = 172,              	/* FP to Sign-injection Negate (DP) */
	rv_op_fsgnjx_d = 173,              	/* FP to Sign-injection Xor (DP) */
	rv_op_fmin_d = 174,                	/* FP Minimum (DP) */
	rv_op_fmax_d = 175,                	/* FP Maximum (DP) */
	rv_op_fcvt_s_d = 176,              	/* FP Convert DP to SP */
	rv_op_fcvt_d_s = 177,              	/* FP Convert SP to DP */
	rv_op_fsqrt_d = 178,               	/* Floating Square Root (DP) */
	rv_op_fle_d = 179,                 	/* FP Less Than Equal (DP) */
	rv_op_flt_d = 180,                 	/* FP Less Than (DP) */
	rv_op_feq_d = 181,                 	/* FP Equal (DP) */
	rv_op_fcvt_w_d = 182,              	/* FP Convert Float to Word (DP) */
	rv_op_fcvt_wu_d = 183,             	/* FP Convert Float to Word Unsigned (DP) */
	rv_op_fcvt_d_w = 184,              	/* FP Convert Word to Float (DP) */
	rv_op_fcvt_d_wu = 185,             	/* FP Convert Word Unsigned to Float (DP) */
	rv_op_fclass_d = 186,              	/* FP Classify (DP) */
	rv_op_fcvt_l_d = 187,              	/* FP Convert Float to Double Word (DP) */
	rv_op_fcvt_lu_d = 188,             	/* FP Convert Float to Double Word Unsigned (DP) */
	rv_op_fmv_x_d = 189,               	/* FP Move to Integer Register (DP) */
	rv_op_fcvt_d_l = 190,              	/* FP Convert Double Word to Float (DP) */
	rv_op_fcvt_d_lu = 191,             	/* FP Convert Double Word Unsigned Float (DP) */
	rv_op_fmv_d_x = 192,               	/* FP Move from Integer Register (DP) */
	rv_op_flq = 193,                   	/* FP Load (QP) */
	rv_op_fsq = 194,                   	/* FP Store (QP) */
	rv_op_fmadd_q = 195,               	/* FP Fused Multiply Add (QP) */
	rv_op_fmsub_q = 196,               	/* FP Fused Multiply Subtract (QP) */
	rv_op_fnmsub_q = 197,              	/* FP Negate fused Multiply Subtract (QP) */
	rv_op_fnmadd_q = 198,              	/* FP Negate fused Multiply Add (QP) */
	rv_op_fadd_q = 199,                	/* FP Add (QP) */
	rv_op_fsub_q = 200,                	/* FP Subtract (QP) */
	rv_op_fmul_q = 201,                	/* FP Multiply (QP) */
	rv_op_fdiv_q = 202,                	/* FP Divide (QP) */
	rv_op_fsgnj_q = 203,               	/* FP to Sign-injection (QP) */
	rv_op_fsgnjn_q = 204,              	/* FP to Sign-injection Negate (QP) */
	rv_op_fsgnjx_q = 205,              	/* FP to Sign-injection Xor (QP) */
	rv_op_fmin_q = 206,                	/* FP Minimum (QP) */
	rv_op_fmax_q = 207,                	/* FP Maximum (QP) */
	rv_op_fcvt_s_q = 208,              	/* FP Convert QP to SP */
	rv_op_fcvt_q_s = 209,              	/* FP Convert SP to QP */
	rv_op_fcvt_d_q = 210,              	/* FP Convert QP to DP */
	rv_op_fcvt_q_d = 211,              	/* FP Convert DP to QP */
	rv_op_fsqrt_q = 212,               	/* Floating Square Root (QP) */
	rv_op_fle_q = 213,                 	/* FP Less Than Equal (QP) */
	rv_op_flt_q = 214,                 	/* FP Less Than (QP) */
	rv_op_feq_q = 215,                 	/* FP Equal (QP) */
	rv_op_fcvt_w_q = 216,              	/* FP Convert Float to Word (QP) */
	rv_op_fcvt_wu_q = 217,             	/* FP Convert Float to Word Unsigned (QP) */
	rv_op_fcvt_q_w = 218,              	/* FP Convert Word to Float (QP) */
	rv_op_fcvt_q_wu = 219,             	/* FP Convert Word Unsigned to Float (QP) */
	rv_op_fclass_q = 220,              	/* FP Classify (QP) */
	rv_op_fcvt_l_q = 221,              	/* FP Convert Float to Double Word (QP) */
	rv_op_fcvt_lu_q = 222,             	/* FP Convert Float to Double Word Unsigned (QP) */
	rv_op_fcvt_q_l = 223,              	/* FP Convert Double Word to Float (QP) */
	rv_op_fcvt_q_lu = 224,             	/* FP Convert Double Word Unsigned Float (QP) */
	rv_op_fmv_x_q = 225,               	/* FP Move to Integer Register (QP) */
	rv_op_fmv_q_x = 226,               	/* FP Move from Integer Register (QP) */
	rv_op_c_addi4spn = 227,            
	rv_op_c_fld = 228,                 
	rv_op_c_lw = 229,                  
	rv_op_c_flw = 230,                 
	rv_op_c_fsd = 231,                 
	rv_op_c_sw = 232,                  
	rv_op_c_fsw = 233,                 
	rv_op_c_nop = 234,                 
	rv_op_c_addi = 235,                
	rv_op_c_jal = 236,                 
	rv_op_c_li = 237,                  
	rv_op_c_addi16sp = 238,            
	rv_op_c_lui = 239,                 
	rv_op_c_srli = 240,                
	rv_op_c_srai = 241,                
	rv_op_c_andi = 242,                
	rv_op_c_sub = 243,                 
	rv_op_c_xor = 244,                 
	rv_op_c_or = 245,                  
	rv_op_c_and = 246,                 
	rv_op_c_subw = 247,                
	rv_op_c_addw = 248,                
	rv_op_c_j = 249,                   
	rv_op_c_beqz = 250,                
	rv_op_c_bnez = 251,                
	rv_op_c_slli = 252,                
	rv_op_c_fldsp = 253,               
	rv_op_c_lwsp = 254,                
	rv_op_c_flwsp = 255,               
	rv_op_c_jr = 256,                  
	rv_op_c_mv = 257,                  
	rv_op_c_ebreak = 258,              
	rv_op_c_jalr = 259,                
	rv_op_c_add = 260,                 
	rv_op_c_fsdsp = 261,               
	rv_op_c_swsp = 262,                
	rv_op_c_fswsp = 263,               
	rv_op_c_ld = 264,                  
	rv_op_c_sd = 265,                  
	rv_op_c_addiw = 266,               
	rv_op_c_ldsp = 267,                
	rv_op_c_sdsp = 268,                
	rv_op_c_lq = 269,                  
	rv_op_c_sq = 270,                  
	rv_op_c_lqsp = 271,                
	rv_op_c_sqsp = 272,                
	rv_op_nop = 273,                   	/* No operation */
	rv_op_mv = 274,                    	/* Copy register */
	rv_op_not = 275,                   	/* One’s complement */
	rv_op_neg = 276,                   	/* Two’s complement */
	rv_op_negw = 277,                  	/* Two’s complement Word */
	rv_op_sext_w = 278,                	/* Sign extend Word */
	rv_op_seqz = 279,                  	/* Set if = zero */
	rv_op_snez = 280,                  	/* Set if ≠ zero */
	rv_op_sltz = 281,                  	/* Set if < zero */
	rv_op_sgtz = 282,                  	/* Set if > zero */
	rv_op_fmv_s = 283,                 	/* Single-precision move */
	rv_op_fabs_s = 284,                	/* Single-precision absolute value */
	rv_op_fneg_s = 285,                	/* Single-precision negate */
	rv_op_fmv_d = 286,                 	/* Double-precision move */
	rv_op_fabs_d = 287,                	/* Double-precision absolute value */
	rv_op_fneg_d = 288,                	/* Double-precision negate */
	rv_op_fmv_q = 289,                 	/* Quadruple-precision move */
	rv_op_fabs_q = 290,                	/* Quadruple-precision absolute value */
	rv_op_fneg_q = 291,                	/* Quadruple-precision negate */
	rv_op_beqz = 292,                  	/* Branch if = zero */
	rv_op_bnez = 293,                  	/* Branch if ≠ zero */
	rv_op_blez = 294,                  	/* Branch if ≤ zero */
	rv_op_bgez = 295,                  	/* Branch if ≥ zero */
	rv_op_bltz = 296,                  	/* Branch if < zero */
	rv_op_bgtz = 297,                  	/* Branch if > zero */
	rv_op_ble = 298,                   
	rv_op_bleu = 299,                  
	rv_op_bgt = 300,                   
	rv_op_bgtu = 301,                  
	rv_op_j = 302,                     	/* Jump */
	rv_op_ret = 303,                   	/* Return from subroutine */
	rv_op_jr = 304,                    	/* Jump register */
	rv_op_rdcycle = 305,               	/* Read Cycle Counter Status Register */
	rv_op_rdtime = 306,                	/* Read Timer Status register */
	rv_op_rdinstret = 307,             	/* Read Instructions Retired Status Register */
	rv_op_rdcycleh = 308,              	/* Read Cycle Counter Status Register (upper 32-bits on RV32) */
	rv_op_rdtimeh = 309,               	/* Read Timer Status register (upper 32-bits on RV32) */
	rv_op_rdinstreth = 310,            	/* Read Instructions Retired Status Register (upper 32-bits on RV32) */
	rv_op_frcsr = 311,                 	/* Read FP Control and Status Register */
	rv_op_frrm = 312,                  	/* Read FP Rounding Mode */
	rv_op_frflags = 313,               	/* Read FP Accrued Exception Flags */
	rv_op_fscsr = 314,                 	/* Set FP Control and Status Register */
	rv_op_fsrm = 315,                  	/* Set FP Rounding Mode */
	rv_op_fsflags = 316,               	/* Set FP Accrued Exception Flags */
	rv_op_fsrmi = 317,                 	/* Set FP Rounding Mode Immediate */
	rv_op_fsflagsi = 318,              	/* Set FP Accrued Exception Flags Immediate */
	rv_op_vsetvli = 319,               
	rv_op_vsetivli = 320,              
	rv_op_vsetvl = 321,                
	rv_op_vle8_v = 322,                
	rv_op_vse8_v = 323,                
	rv_op_vle16_v = 324,               
	rv_op_vse16_v = 325,               
	rv_op_vle32_v = 326,               
	rv_op_vse32_v = 327,               
	rv_op_vle64_v = 328,               
	rv_op_vse64_v = 329,               
	rv_op_vleff8_v = 330,              
	rv_op_vleff16_v = 331,             
	rv_op_vleff32_v = 332,             
	rv_op_vleff64_v = 333,             
	rv_op_vl1re8_v = 334,              
	rv_op_vl1re16_v = 335,             
	rv_op_vl1re32_v = 336,             
	rv_op_vl1re64_v = 337,             
	rv_op_vl2re8_v = 338,              
	rv_op_vl2re16_v = 339,             
	rv_op_vl2re32_v = 340,             
	rv_op_vl2re64_v = 341,             
	rv_op_vl4re8_v = 342,              
	rv_op_vl4re16_v = 343,             
	rv_op_vl4re32_v = 344,             
	rv_op_vl4re64_v = 345,             
	rv_op_vl8re8_v = 346,              
	rv_op_vl8re16_v = 347,             
	rv_op_vl8re32_v = 348,             
	rv_op_vl8re64_v = 349,             
	rv_op_vs1re8_v = 350,              
	rv_op_vs1re16_v = 351,             
	rv_op_vs1re32_v = 352,             
	rv_op_vs1re64_v = 353,             
	rv_op_vs2re8_v = 354,              
	rv_op_vs2re16_v = 355,             
	rv_op_vs2re32_v = 356,             
	rv_op_vs2re64_v = 357,             
	rv_op_vs4re8_v = 358,              
	rv_op_vs4re16_v = 359,             
	rv_op_vs4re32_v = 360,             
	rv_op_vs4re64_v = 361,             
	rv_op_vs8re8_v = 362,              
	rv_op_vs8re16_v = 363,             
	rv_op_vs8re32_v = 364,             
	rv_op_vs8re64_v = 365,             
	rv_op_vlse8_v = 366,               
	rv_op_vsse8_v = 367,               
	rv_op_vlse16_v = 368,              
	rv_op_vsse16_v = 369,              
	rv_op_vlse32_v = 370,              
	rv_op_vsse32_v = 371,              
	rv_op_vlse64_v = 372,              
	rv_op_vsse64_v = 373,              
	rv_op_vluxei8_v = 374,             
	rv_op_vsuxei8_v = 375,             
	rv_op_vluxei16_v = 376,            
	rv_op_vsuxei16_v = 377,            
	rv_op_vluxei32_v = 378,            
	rv_op_vsuxei32_v = 379,            
	rv_op_vluxei64_v = 380,            
	rv_op_vsuxei64_v = 381,            
	rv_op_vloxei8_v = 382,             
	rv_op_vsoxei8_v = 383,             
	rv_op_vloxei16_v = 384,            
	rv_op_vsoxei16_v = 385,            
	rv_op_vloxei32_v = 386,            
	rv_op_vsoxei32_v = 387,            
	rv_op_vloxei64_v = 388,            
	rv_op_vsoxei64_v = 389,            
	rv_op_vlseg2e8_v = 390,            
	rv_op_vsseg2e8_v = 391,            
	rv_op_vlseg2e16_v = 392,           
	rv_op_vsseg2e16_v = 393,           
	rv_op_vlseg2e32_v = 394,           
	rv_op_vsseg2e32_v = 395,           
	rv_op_vlseg2e64_v = 396,           
	rv_op_vsseg2e64_v = 397,           
	rv_op_vlsseg2e8_v = 398,           
	rv_op_vssseg2e8_v = 399,           
	rv_op_vlsseg2e16_v = 400,          
	rv_op_vssseg2e16_v = 401,          
	rv_op_vlsseg2e32_v = 402,          
	rv_op_vssseg2e32_v = 403,          
	rv_op_vlsseg2e64_v = 404,          
	rv_op_vssseg2e64_v = 405,          
	rv_op_vluxseg2ei8_v = 406,         
	rv_op_vsuxseg2ei8_v = 407,         
	rv_op_vluxseg2ei16_v = 408,        
	rv_op_vsuxseg2ei16_v = 409,        
	rv_op_vluxseg2ei32_v = 410,        
	rv_op_vsuxseg2ei32_v = 411,        
	rv_op_vluxseg2ei64_v = 412,        
	rv_op_vsuxseg2ei64_v = 413,        
	rv_op_vloxseg2ei8_v = 414,         
	rv_op_vsoxseg2ei8_v = 415,         
	rv_op_vloxseg2ei16_v = 416,        
	rv_op_vsoxseg2ei16_v = 417,        
	rv_op_vloxseg2ei32_v = 418,        
	rv_op_vsoxseg2ei32_v = 419,        
	rv_op_vloxseg2ei64_v = 420,        
	rv_op_vsoxseg2ei64_v = 421,        
	rv_op_vlseg3e8_v = 422,            
	rv_op_vsseg3e8_v = 423,            
	rv_op_vlseg3e16_v = 424,           
	rv_op_vsseg3e16_v = 425,           
	rv_op_vlseg3e32_v = 426,           
	rv_op_vsseg3e32_v = 427,           
	rv_op_vlseg3e64_v = 428,           
	rv_op_vsseg3e64_v = 429,           
	rv_op_vlsseg3e8_v = 430,           
	rv_op_vssseg3e8_v = 431,           
	rv_op_vlsseg3e16_v = 432,          
	rv_op_vssseg3e16_v = 433,          
	rv_op_vlsseg3e32_v = 434,          
	rv_op_vssseg3e32_v = 435,          
	rv_op_vlsseg3e64_v = 436,          
	rv_op_vssseg3e64_v = 437,          
	rv_op_vluxseg3ei8_v = 438,         
	rv_op_vsuxseg3ei8_v = 439,         
	rv_op_vluxseg3ei16_v = 440,        
	rv_op_vsuxseg3ei16_v = 441,        
	rv_op_vluxseg3ei32_v = 442,        
	rv_op_vsuxseg3ei32_v = 443,        
	rv_op_vluxseg3ei64_v = 444,        
	rv_op_vsuxseg3ei64_v = 445,        
	rv_op_vloxseg3ei8_v = 446,         
	rv_op_vsoxseg3ei8_v = 447,         
	rv_op_vloxseg3ei16_v = 448,        
	rv_op_vsoxseg3ei16_v = 449,        
	rv_op_vloxseg3ei32_v = 450,        
	rv_op_vsoxseg3ei32_v = 451,        
	rv_op_vloxseg3ei64_v = 452,        
	rv_op_vsoxseg3ei64_v = 453,        
	rv_op_vlseg4e8_v = 454,            
	rv_op_vsseg4e8_v = 455,            
	rv_op_vlseg4e16_v = 456,           
	rv_op_vsseg4e16_v = 457,           
	rv_op_vlseg4e32_v = 458,           
	rv_op_vsseg4e32_v = 459,           
	rv_op_vlseg4e64_v = 460,           
	rv_op_vsseg4e64_v = 461,           
	rv_op_vlsseg4e8_v = 462,           
	rv_op_vssseg4e8_v = 463,           
	rv_op_vlsseg4e16_v = 464,          
	rv_op_vssseg4e16_v = 465,          
	rv_op_vlsseg4e32_v = 466,          
	rv_op_vssseg4e32_v = 467,          
	rv_op_vlsseg4e64_v = 468,          
	rv_op_vssseg4e64_v = 469,          
	rv_op_vluxseg4ei8_v = 470,         
	rv_op_vsuxseg4ei8_v = 471,         
	rv_op_vluxseg4ei16_v = 472,        
	rv_op_vsuxseg4ei16_v = 473,        
	rv_op_vluxseg4ei32_v = 474,        
	rv_op_vsuxseg4ei32_v = 475,        
	rv_op_vluxseg4ei64_v = 476,        
	rv_op_vsuxseg4ei64_v = 477,        
	rv_op_vloxseg4ei8_v = 478,         
	rv_op_vsoxseg4ei8_v = 479,         
	rv_op_vloxseg4ei16_v = 480,        
	rv_op_vsoxseg4ei16_v = 481,        
	rv_op_vloxseg4ei32_v = 482,        
	rv_op_vsoxseg4ei32_v = 483,        
	rv_op_vloxseg4ei64_v = 484,        
	rv_op_vsoxseg4ei64_v = 485,        
	rv_op_vlseg5e8_v = 486,            
	rv_op_vsseg5e8_v = 487,            
	rv_op_vlseg5e16_v = 488,           
	rv_op_vsseg5e16_v = 489,           
	rv_op_vlseg5e32_v = 490,           
	rv_op_vsseg5e32_v = 491,           
	rv_op_vlseg5e64_v = 492,           
	rv_op_vsseg5e64_v = 493,           
	rv_op_vlsseg5e8_v = 494,           
	rv_op_vssseg5e8_v = 495,           
	rv_op_vlsseg5e16_v = 496,          
	rv_op_vssseg5e16_v = 497,          
	rv_op_vlsseg5e32_v = 498,          
	rv_op_vssseg5e32_v = 499,          
	rv_op_vlsseg5e64_v = 500,          
	rv_op_vssseg5e64_v = 501,          
	rv_op_vluxseg5ei8_v = 502,         
	rv_op_vsuxseg5ei8_v = 503,         
	rv_op_vluxseg5ei16_v = 504,        
	rv_op_vsuxseg5ei16_v = 505,        
	rv_op_vluxseg5ei32_v = 506,        
	rv_op_vsuxseg5ei32_v = 507,        
	rv_op_vluxseg5ei64_v = 508,        
	rv_op_vsuxseg5ei64_v = 509,        
	rv_op_vloxseg5ei8_v = 510,         
	rv_op_vsoxseg5ei8_v = 511,         
	rv_op_vloxseg5ei16_v = 512,        
	rv_op_vsoxseg5ei16_v = 513,        
	rv_op_vloxseg5ei32_v = 514,        
	rv_op_vsoxseg5ei32_v = 515,        
	rv_op_vloxseg5ei64_v = 516,        
	rv_op_vsoxseg5ei64_v = 517,        
	rv_op_vlseg6e8_v = 518,            
	rv_op_vsseg6e8_v = 519,            
	rv_op_vlseg6e16_v = 520,           
	rv_op_vsseg6e16_v = 521,           
	rv_op_vlseg6e32_v = 522,           
	rv_op_vsseg6e32_v = 523,           
	rv_op_vlseg6e64_v = 524,           
	rv_op_vsseg6e64_v = 525,           
	rv_op_vlsseg6e8_v = 526,           
	rv_op_vssseg6e8_v = 527,           
	rv_op_vlsseg6e16_v = 528,          
	rv_op_vssseg6e16_v = 529,          
	rv_op_vlsseg6e32_v = 530,          
	rv_op_vssseg6e32_v = 531,          
	rv_op_vlsseg6e64_v = 532,          
	rv_op_vssseg6e64_v = 533,          
	rv_op_vluxseg6ei8_v = 534,         
	rv_op_vsuxseg6ei8_v = 535,         
	rv_op_vluxseg6ei16_v = 536,        
	rv_op_vsuxseg6ei16_v = 537,        
	rv_op_vluxseg6ei32_v = 538,        
	rv_op_vsuxseg6ei32_v = 539,        
	rv_op_vluxseg6ei64_v = 540,        
	rv_op_vsuxseg6ei64_v = 541,        
	rv_op_vloxseg6ei8_v = 542,         
	rv_op_vsoxseg6ei8_v = 543,         
	rv_op_vloxseg6ei16_v = 544,        
	rv_op_vsoxseg6ei16_v = 545,        
	rv_op_vloxseg6ei32_v = 546,        
	rv_op_vsoxseg6ei32_v = 547,        
	rv_op_vloxseg6ei64_v = 548,        
	rv_op_vsoxseg6ei64_v = 549,        
	rv_op_vlseg7e8_v = 550,            
	rv_op_vsseg7e8_v = 551,            
	rv_op_vlseg7e16_v = 552,           
	rv_op_vsseg7e16_v = 553,           
	rv_op_vlseg7e32_v = 554,           
	rv_op_vsseg7e32_v = 555,           
	rv_op_vlseg7e64_v = 556,           
	rv_op_vsseg7e64_v = 557,           
	rv_op_vlsseg7e8_v = 558,           
	rv_op_vssseg7e8_v = 559,           
	rv_op_vlsseg7e16_v = 560,          
	rv_op_vssseg7e16_v = 561,          
	rv_op_vlsseg7e32_v = 562,          
	rv_op_vssseg7e32_v = 563,          
	rv_op_vlsseg7e64_v = 564,          
	rv_op_vssseg7e64_v = 565,          
	rv_op_vluxseg7ei8_v = 566,         
	rv_op_vsuxseg7ei8_v = 567,         
	rv_op_vluxseg7ei16_v = 568,        
	rv_op_vsuxseg7ei16_v = 569,        
	rv_op_vluxseg7ei32_v = 570,        
	rv_op_vsuxseg7ei32_v = 571,        
	rv_op_vluxseg7ei64_v = 572,        
	rv_op_vsuxseg7ei64_v = 573,        
	rv_op_vloxseg7ei8_v = 574,         
	rv_op_vsoxseg7ei8_v = 575,         
	rv_op_vloxseg7ei16_v = 576,        
	rv_op_vsoxseg7ei16_v = 577,        
	rv_op_vloxseg7ei32_v = 578,        
	rv_op_vsoxseg7ei32_v = 579,        
	rv_op_vloxseg7ei64_v = 580,        
	rv_op_vsoxseg7ei64_v = 581,        
	rv_op_vlseg8e8_v = 582,            
	rv_op_vsseg8e8_v = 583,            
	rv_op_vlseg8e16_v = 584,           
	rv_op_vsseg8e16_v = 585,           
	rv_op_vlseg8e32_v = 586,           
	rv_op_vsseg8e32_v = 587,           
	rv_op_vlseg8e64_v = 588,           
	rv_op_vsseg8e64_v = 589,           
	rv_op_vlsseg8e8_v = 590,           
	rv_op_vssseg8e8_v = 591,           
	rv_op_vlsseg8e16_v = 592,          
	rv_op_vssseg8e16_v = 593,          
	rv_op_vlsseg8e32_v = 594,          
	rv_op_vssseg8e32_v = 595,          
	rv_op_vlsseg8e64_v = 596,          
	rv_op_vssseg8e64_v = 597,          
	rv_op_vluxseg8ei8_v = 598,         
	rv_op_vsuxseg8ei8_v = 599,         
	rv_op_vluxseg8ei16_v = 600,        
	rv_op_vsuxseg8ei16_v = 601,        
	rv_op_vluxseg8ei32_v = 602,        
	rv_op_vsuxseg8ei32_v = 603,        
	rv_op_vluxseg8ei64_v = 604,        
	rv_op_vsuxseg8ei64_v = 605,        
	rv_op_vloxseg8ei8_v = 606,         
	rv_op_vsoxseg8ei8_v = 607,         
	rv_op_vloxseg8ei16_v = 608,        
	rv_op_vsoxseg8ei16_v = 609,        
	rv_op_vloxseg8ei32_v = 610,        
	rv_op_vsoxseg8ei32_v = 611,        
	rv_op_vloxseg8ei64_v = 612,        
	rv_op_vsoxseg8ei64_v = 613,        
	rv_op_vadd_vv = 614,               
	rv_op_vsub_vv = 615,               
	rv_op_vminu_vv = 616,              
	rv_op_vmin_vv = 617,               
	rv_op_vmaxu_vv = 618,              
	rv_op_vmax_vv = 619,               
	rv_op_vand_vv = 620,               
	rv_op_vor_vv = 621,                
	rv_op_vxor_vv = 622,               
	rv_op_vrgather_vv = 623,           
	rv_op_vadc_vv = 624,               
	rv_op_vmadc_vv = 625,              
	rv_op_vsbc_vv = 626,               
	rv_op_vmsbc_vv = 627,              
	rv_op_vmerge_vv = 628,             
	rv_op_vmseq_vv = 629,              
	rv_op_vmsne_vv = 630,              
	rv_op_vmsltu_vv = 631,             
	rv_op_vmslt_vv = 632,              
	rv_op_vmsleu_vv = 633,             
	rv_op_vmsle_vv = 634,              
	rv_op_vsaddu_vv = 635,             
	rv_op_vsadd_vv = 636,              
	rv_op_vssubu_vv = 637,             
	rv_op_vssub_vv = 638,              
	rv_op_vsll_vv = 639,               
	rv_op_vsmul_vv = 640,              
	rv_op_vsrl_vv = 641,               
	rv_op_vsra_vv = 642,               
	rv_op_vssrl_vv = 643,              
	rv_op_vssra_vv = 644,              
	rv_op_vnsrl_vv = 645,              
	rv_op_vnsra_vv = 646,              
	rv_op_vnclipu_vv = 647,            
	rv_op_vnclip_vv = 648,             
	rv_op_vwredsumu_vv = 649,          
	rv_op_vwredsum_vv = 650,           
	rv_op_vdotu_vv = 651,              
	rv_op_vdot_vv = 652,               
	rv_op_vqmaccu_vv = 653,            
	rv_op_vqmacc_vv = 654,             
	rv_op_vqmaccus_vv = 655,           
	rv_op_vqmaccsu_vv = 656,           
	rv_op_vadd_vx = 657,               
	rv_op_vsub_vx = 658,               
	rv_op_vrsub_vx = 659,              
	rv_op_vminu_vx = 660,              
	rv_op_vmin_vx = 661,               
	rv_op_vmaxu_vx = 662,              
	rv_op_vmax_vx = 663,               
	rv_op_vand_vx = 664,               
	rv_op_vor_vx = 665,                
	rv_op_vxor_vx = 666,               
	rv_op_vrgather_vx = 667,           
	rv_op_vslideup_vx = 668,           
	rv_op_vslidedown_vx = 669,         
	rv_op_vadc_vx = 670,               
	rv_op_vmadc_vx = 671,              
	rv_op_vsbc_vx = 672,               
	rv_op_vmsbc_vx = 673,              
	rv_op_vmerge_vx = 674,             
	rv_op_vmseq_vx = 675,              
	rv_op_vmsne_vx = 676,              
	rv_op_vmsltu_vx = 677,             
	rv_op_vmslt_vx = 678,              
	rv_op_vmsleu_vx = 679,             
	rv_op_vmsle_vx = 680,              
	rv_op_vmsgtu_vx = 681,             
	rv_op_vmsgt_vx = 682,              
	rv_op_vsaddu_vx = 683,             
	rv_op_vsadd_vx = 684,              
	rv_op_vssubu_vx = 685,             
	rv_op_vssub_vx = 686,              
	rv_op_vsll_vx = 687,               
	rv_op_vsmul_vx = 688,              
	rv_op_vsrl_vx = 689,               
	rv_op_vsra_vx = 690,               
	rv_op_vssrl_vx = 691,              
	rv_op_vssra_vx = 692,              
	rv_op_vnsrl_vx = 693,              
	rv_op_vnsra_vx = 694,              
	rv_op_vnclipu_vx = 695,            
	rv_op_vnclip_vx = 696,             
	rv_op_vwredsumu_vx = 697,          
	rv_op_vwredsum_vx = 698,           
	rv_op_vdotu_vx = 699,              
	rv_op_vdot_vx = 700,               
	rv_op_vqmaccu_vx = 701,            
	rv_op_vqmacc_vx = 702,             
	rv_op_vqmaccus_vx = 703,           
	rv_op_vqmaccsu_vx = 704,           
	rv_op_vadd_vi = 705,               
	rv_op_vrsub_vi = 706,              
	rv_op_vand_vi = 707,               
	rv_op_vor_vi = 708,                
	rv_op_vxor_vi = 709,               
	rv_op_vrgather_vi = 710,           
	rv_op_vslideup_vi = 711,           
	rv_op_vslidedown_vi = 712,         
	rv_op_vadc_vi = 713,               
	rv_op_vmadc_vi = 714,              
	rv_op_vmv_vi = 715,                
	rv_op_vmseq_vi = 716,              
	rv_op_vmsne_vi = 717,              
	rv_op_vmsleu_vi = 718,             
	rv_op_vmsle_vi = 719,              
	rv_op_vmsgtu_vi = 720,             
	rv_op_vmsgt_vi = 721,              
	rv_op_vmv1r = 722,                 
	rv_op_vmv2r = 723,                 
	rv_op_vmv4r = 724,                 
	rv_op_vmv8r = 725,                 
	rv_op_vsaddu_vi = 726,             
	rv_op_vsadd_vi = 727,              
	rv_op_vsll_vi = 728,               
	rv_op_vsrl_vi = 729,               
	rv_op_vsra_vi = 730,               
	rv_op_vssrl_vi = 731,              
	rv_op_vssra_vi = 732,              
	rv_op_vnsrl_vi = 733,              
	rv_op_vnsra_vi = 734,              
	rv_op_vnclipu_vi = 735,            
	rv_op_vnclip_vi = 736,             
	rv_op_vredsum_vv = 737,            
	rv_op_vredand_vv = 738,            
	rv_op_vredor_vv = 739,             
	rv_op_vredxor_vv = 740,            
	rv_op_vredminu_vv = 741,           
	rv_op_vredmin_vv = 742,            
	rv_op_vredmaxu_vv = 743,           
	rv_op_vredmax_vv = 744,            
	rv_op_vaaddu_vv = 745,             
	rv_op_vaadd_vv = 746,              
	rv_op_vasubu_vv = 747,             
	rv_op_vasub_vv = 748,              
	rv_op_vmv_x_s = 749,               
	rv_op_vpopc_m = 750,               
	rv_op_vfirst_m = 751,              
	rv_op_vmv_s_x = 752,               
	rv_op_vzext_vf8 = 753,             
	rv_op_vsext_vf8 = 754,             
	rv_op_vzext_vf4 = 755,             
	rv_op_vsext_vf4 = 756,             
	rv_op_vzext_vf2 = 757,             
	rv_op_vsext_vf2 = 758,             
	rv_op_vmsbf_m = 759,               
	rv_op_vmsof_m = 760,               
	rv_op_vmsif_m = 761,               
	rv_op_viota_m = 762,               
	rv_op_vid_v = 763,                 
	rv_op_vcompress_vv = 764,          
	rv_op_vmandnot_vv = 765,           
	rv_op_vmand_vv = 766,              
	rv_op_vmor_vv = 767,               
	rv_op_vmxor_vv = 768,              
	rv_op_vmornot_vv = 769,            
	rv_op_vmnand_vv = 770,             
	rv_op_vmnor_vv = 771,              
	rv_op_vmxnor_vv = 772,             
	rv_op_vdivu_vv = 773,              
	rv_op_vdiv_vv = 774,               
	rv_op_vremu_vv = 775,              
	rv_op_vrem_vv = 776,               
	rv_op_vmulhu_vv = 777,             
	rv_op_vmul_vv = 778,               
	rv_op_vmulhsu_vv = 779,            
	rv_op_vmulh_vv = 780,              
	rv_op_vmadd_vv = 781,              
	rv_op_vnmsub_vv = 782,             
	rv_op_vmacc_vv = 783,              
	rv_op_vnmsac_vv = 784,             
	rv_op_vwaddu_vv = 785,             
	rv_op_vwadd_vv = 786,              
	rv_op_vwsubu_vv = 787,             
	rv_op_vwsub_vv = 788,              
	rv_op_vwaddu_w_vv = 789,           
	rv_op_vwadd_w_vv = 790,            
	rv_op_vwsubu_w_vv = 791,           
	rv_op_vwsub_w_vv = 792,            
	rv_op_vwmulu_vv = 793,             
	rv_op_vwmulsu_vv = 794,            
	rv_op_vwmul_vv = 795,              
	rv_op_vwmaccu_vv = 796,            
	rv_op_vwmacc_vv = 797,             
	rv_op_vwmaccus_vv = 798,           
	rv_op_vwmaccsu_vv = 799,           
	rv_op_vaaddu_vx = 800,             
	rv_op_vaadd_vx = 801,              
	rv_op_vasubu_vx = 802,             
	rv_op_vasub_vx = 803,              
	rv_op_vslide1up_vx = 804,          
	rv_op_vslide1down_vx = 805,        
	rv_op_vdivu_vx = 806,              
	rv_op_vdiv_vx = 807,               
	rv_op_vremu_vx = 808,              
	rv_op_vrem_vx = 809,               
	rv_op_vmulhu_vx = 810,             
	rv_op_vmul_vx = 811,               
	rv_op_vmulhsu_vx = 812,            
	rv_op_vmulh_vx = 813,              
	rv_op_vmadd_vx = 814,              
	rv_op_vnmsub_vx = 815,             
	rv_op_vmacc_vx = 816,              
	rv_op_vnmsac_vx = 817,             
	rv_op_vwaddu_vx = 818,             
	rv_op_vwadd_vx = 819,              
	rv_op_vwsubu_vx = 820,             
	rv_op_vwsub_vx = 821,              
	rv_op_vwaddu_w_vx = 822,           
	rv_op_vwadd_w_vx = 823,            
	rv_op_vwsubu_w_vx = 824,           
	rv_op_vwsub_w_vx = 825,            
	rv_op_vwmulu_vx = 826,             
	rv_op_vwmulsu_vx = 827,            
	rv_op_vwmul_vx = 828,              
	rv_op_vwmaccu_vx = 829,            
	rv_op_vwmacc_vx = 830,             
	rv_op_vwmaccus_vx = 831,           
	rv_op_vwmaccsu_vx = 832,           
	rv_op_vfadd_vv = 833,              
	rv_op_vfredsum_vv = 834,           
	rv_op_vfsub_vv = 835,              
	rv_op_vfredosum_vv = 836,          
	rv_op_vfmin_vv = 837,              
	rv_op_vfredmin_vv = 838,           
	rv_op_vfmax_vv = 839,              
	rv_op_vfredmax_vv = 840,           
	rv_op_vfsgnj_vv = 841,             
	rv_op_vfsgnjn_vv = 842,            
	rv_op_vfsgnjx_vv = 843,            
	rv_op_vmfeq_vx = 844,              
	rv_op_vmfle_vx = 845,              
	rv_op_vmflt_vx = 846,              
	rv_op_vmfne_vx = 847,              
	rv_op_vfdiv_vx = 848,              
	rv_op_vfcvt_xu_f_v = 849,          
	rv_op_vfcvt_x_f_v = 850,           
	rv_op_vfcvt_f_xu_v = 851,          
	rv_op_vfcvt_f_x_v = 852,           
	rv_op_vfcvt_rtz_xu_f_v = 853,      
	rv_op_vfcvt_rtz_x_f_v = 854,       
	rv_op_vfwcvt_xu_f_v = 855,         
	rv_op_vfwcvt_x_f_v = 856,          
	rv_op_vfwcvt_f_xu_v = 857,         
	rv_op_vfwcvt_f_x_v = 858,          
	rv_op_vfwcvt_f_f_v = 859,          
	rv_op_vfwcvt_rtz_xu_f_v = 860,     
	rv_op_vfwcvt_rtz_x_f_v = 861,      
	rv_op_vfncvt_xu_f_w = 862,         
	rv_op_vfncvt_x_f_w = 863,          
	rv_op_vfncvt_f_xu_w = 864,         
	rv_op_vfncvt_f_x_w = 865,          
	rv_op_vfncvt_f_f_w = 866,          
	rv_op_vfncvt_rod_f_f_w = 867,      
	rv_op_vfncvt_rtz_xu_f_w = 868,     
	rv_op_vfncvt_rtz_x_f_w = 869,      
	rv_op_vfmul_vv = 870,              
	rv_op_vfrsub_vv = 871,             
	rv_op_vfmadd_vv = 872,             
	rv_op_vfnmadd_vv = 873,            
	rv_op_vfmsub_vv = 874,             
	rv_op_vfnmsub_vv = 875,            
	rv_op_vfmacc_vv = 876,             
	rv_op_vfnmacc_vv = 877,            
	rv_op_vfmsac_vv = 878,             
	rv_op_vfnmsac_vv = 879,            
	rv_op_vfwadd_vv = 880,             
	rv_op_vfwredsum_vv = 881,          
	rv_op_vfwsub_vv = 882,             
	rv_op_vfwredosum_vv = 883,         
	rv_op_vfwadd_wv = 884,             
	rv_op_vfwsub_wv = 885,             
	rv_op_vfwmul_vv = 886,             
	rv_op_vfdot_vv = 887,              
	rv_op_vfwmacc_vv = 888,            
	rv_op_vfwnmacc_vv = 889,           
	rv_op_vfwmsac_vv = 890,            
	rv_op_vfwnmsac_vv = 891,           
	rv_op_vfadd_vf = 892,              
	rv_op_vfredsum_vf = 893,           
	rv_op_vfsub_vf = 894,              
	rv_op_vfredosum_vf = 895,          
	rv_op_vfmin_vf = 896,              
	rv_op_vfredmin_vf = 897,           
	rv_op_vfmax_vf = 898,              
	rv_op_vfredmax_vf = 899,           
	rv_op_vfsgnj_vf = 900,             
	rv_op_vfsgnjn_vf = 901,            
	rv_op_vfsgnjx_vf = 902,            
	rv_op_vfmv_s_f = 903,              
	rv_op_vfmv_f_s = 904,              
	rv_op_vfmv_vf = 905,               
	rv_op_vmfeq_vf = 906,              
	rv_op_vmfle_vf = 907,              
	rv_op_vmflt_vf = 908,              
	rv_op_vmfne_vf = 909,              
	rv_op_vmfgt_vf = 910,              
	rv_op_vmfge_vf = 911,              
	rv_op_vfdiv_vf = 912,              
	rv_op_vfrdiv_vf = 913,             
	rv_op_vfmul_vf = 914,              
	rv_op_vfrsub_vf = 915,             
	rv_op_vfmadd_vf = 916,             
	rv_op_vfnmadd_vf = 917,            
	rv_op_vfmsub_vf = 918,             
	rv_op_vfnmsub_vf = 919,            
	rv_op_vfmacc_vf = 920,             
	rv_op_vfnmacc_vf = 921,            
	rv_op_vfmsac_vf = 922,             
	rv_op_vfnmsac_vf = 923,            
	rv_op_vfwadd_vf = 924,             
	rv_op_vfwredsum_vf = 925,          
	rv_op_vfwsub_vf = 926,             
	rv_op_vfwredosum_vf = 927,         
	rv_op_vfwadd_wf = 928,             
	rv_op_vfwsub_wf = 929,             
	rv_op_vfwmul_vf = 930,             
	rv_op_vfdot_vf = 931,              
	rv_op_vfwmacc_vf = 932,            
	rv_op_vfwnmacc_vf = 933,           
	rv_op_vfwmsac_vf = 934,            
	rv_op_vfwnmsac_vf = 935,           
};

/* Primitive data structure */

struct rv_primitive_data
{
	const char* name;
	const char* format;
	const char* hex_format;
};

/* Instruction compression data structure */
struct rv_comp_data
{
	const int op;
	const rvc_constraint* constraints;
};

/* Instruction operand structure */
struct rv_operand_data
{
	rv_operand_name operand_name;
	rv_operand_type operand_type;
	rv_primitive primitive;
	rv_type type;
	unsigned int width;
};

/* Opcode metadata tables */
extern const rv_primitive_data rv_type_primitives[];
extern const rv_codec rv_inst_codec[];
extern const char* rv_inst_format[];
extern const rv_operand_data* rv_inst_operand_data[];
extern const riscv::inst_t rv_inst_match[];
extern const riscv::inst_t rv_inst_mask[];
extern const rv_comp_data* rv_inst_pseudo[];
extern const rv_comp_data rv_inst_depseudo[];
extern const rv_comp_data* rv_inst_comp_rv32[];
extern const rv_comp_data* rv_inst_comp_rv64[];
extern const rv_comp_data* rv_inst_comp_rv128[];
extern const int rv_inst_decomp_rv32[];
extern const int rv_inst_decomp_rv64[];
extern const int rv_inst_decomp_rv128[];

#ifdef __cplusplus
}
#endif

#endif
