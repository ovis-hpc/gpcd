/******************************************************************************
 * COPYRIGHT CRAY INC. ar_rspmon_detailed_mmrs_h.h
 * FILE: ar_rspmon_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:02 2014
 ******************************************************************************/
/**
 * @file ar_rspmon_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:02 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_rspmon_mmr_values.h and ar_rspmon_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_rspmon_mmr_values.h"

#ifndef _AR_RSPMON_DETAILED_MMRS_H_H_
#define _AR_RSPMON_DETAILED_MMRS_H_H_

#ifndef _CMMR_FR_T_
#define _CMMR_FR_T_
/**
 * @struct cmmr_fr_s
 * Gemini Detailed MMR Field Descriptor
 * @see cmmr_br_s
 *
 * The Detailed MMR Field Descriptor contains information about individual
 * fields of a MMR in an ASIC. Used by the Cray MMR Access Library.
 *
 */
typedef struct cmmr_fr_s{
	char* _name;		/**< Field name */
	uint32_t _bpos;		/**< Field bit postion relative to QW */
	uint64_t _mask;		/**< Field bit mask relative to QW */
	uint64_t _rval;		/**< Reset data relative to QW */
	uint64_t _type_bitmsk;	/**< Field Type Bit Mask */
	int _index;		/**< QW Index */
	char* _desc;		/**< Field Description */
	char* _access;		/**< Field Access */
} cmmr_fr_t; /**< cmmr_fr_s */
#endif

#ifndef _CMMR_BR_T_
#define _CMMR_BR_T_
/**
 * @struct cmmr_br_s
 * Gemini Detailed MMR Descriptor
 * @see cmmr_fr_s
 *
 * The Detailed MMR contains information about a individual MMR in an ASIC.
 * Used by the Cray MMR Access Library.
 *
 */
typedef struct cmmr_br_s{
	char* _name;			/**< MMR name */
	uint64_t _addr;			/**< MMR address */
	uint64_t _type_bitmsk;		/**< MMR Type Bit Mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _rval;	/**< Reset data */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _rmsk;	/**< Reset mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _wrmsk;	/**< Write mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _rdmsk;	/**< Read mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _xsmsk;	/**< XState mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _wsemsk;	/**< Write only with side effects */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _rsemsk;	/**< Read only with side effects */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _w1smsk;	/**< Write okay but only 1's stick */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _w1cmsk;	/**< Write of 1 clears bit */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _wrstmsk;	/**< Warm Reset Mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _hwwmsk;	/**< Hardware Write Mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _hwrmsk;	/**< Hardware Read Mask */
	int _nqw;			/**< Number of QW */
	int _size;			/**< Size in bytes of MMR */
	int _incr;			/**< Increment between table entries */
	int _depth;			/**< Number of MMR instances */
	const cmmr_fr_t *_info;	/**< MMR detail */
} cmmr_br_t; /**< cmmr_br_s */
#endif

static const cmmr_br_t* __ar_rspmon_mmrs[];	/* RSPMON Array */

/*
 *  AR RSPMON MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t0_cmp_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_RSTDATA & AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_DATA_QW,
      ._desc = "Trigger 0 Compare Values 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_detail[] = {
    { ._name = "UNUSED_145_84",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_UNUSED_145_84_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_UNUSED_145_84_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSTDATA_QW2 & AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_UNUSED_145_84_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_UNUSED_145_84_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_detail[] = {
    { ._name = "UNUSED_145_84",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_145_84_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_145_84_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_145_84_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_145_84_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INC_TRIGGER1",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER1_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER1_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER1_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER1_QW,
      ._desc = "performance counter increment for trigger1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INC_TRIGGER0",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER0_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER0_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER0_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER0_QW,
      ._desc = "performance counter increment for trigger0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_36",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_81_36_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_81_36_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_81_36_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_81_36_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_mmr_ring_0_lo_rspmon_detail[] = {
    { ._name = "UNUSED_81_36",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_UNUSED_81_36_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_UNUSED_81_36_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_UNUSED_81_36_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_UNUSED_81_36_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RSPMON_NICLM_OS_IRQ",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_OS_IRQ_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_OS_IRQ_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_OS_IRQ_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_OS_IRQ_QW,
      ._desc = "r_q_rspmon_niclm_os_irq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RSPMON_NICLM_HSS_IRQ",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_HSS_IRQ_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_HSS_IRQ_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_HSS_IRQ_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_HSS_IRQ_QW,
      ._desc = "r_q_rspmon_niclm_hss_irq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RSPMON_NICLM_RING_WRACK",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_WRACK_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_WRACK_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_WRACK_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_WRACK_QW,
      ._desc = "r_q_rspmon_niclm_ring_wrack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RSPMON_NICLM_RING_15_0",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_15_0_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_15_0_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_15_0_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_15_0_QW,
      ._desc = "r_q_rspmon_niclm_ring[15:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NICLM_RSPMON_RING_15_0",
      ._bpos = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_I_NICLM_RSPMON_RING_15_0_BP,
      ._mask = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_I_NICLM_RSPMON_RING_15_0_MASK,
      ._rval = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_I_NICLM_RSPMON_RING_15_0_MASK,
      ._index = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_I_NICLM_RSPMON_RING_15_0_QW,
      ._desc = "i_niclm_rspmon_ring[15:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_detail[] = {
    { ._name = "UNUSED_145_69",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_UNUSED_145_69_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_UNUSED_145_69_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSTDATA_QW2 & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_UNUSED_145_69_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_UNUSED_145_69_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_detail[] = {
    { ._name = "UNUSED_145_69",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_UNUSED_145_69_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_UNUSED_145_69_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_UNUSED_145_69_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_UNUSED_145_69_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERR_REG_TRIGGER1",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER1_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER1_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER1_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER1_QW,
      ._desc = "error flag register TRIGGER1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERR_REG_TRIGGER0",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER0_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER0_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER0_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER0_QW,
      ._desc = "error flag register TRIGGER0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERR_REG_PERR",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_PERR_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_PERR_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_PERR_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_PERR_QW,
      ._desc = "error flag register PERR",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERR_REG_CNTR_ROLLOVER",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_CNTR_ROLLOVER_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_CNTR_ROLLOVER_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_CNTR_ROLLOVER_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_CNTR_ROLLOVER_QW,
      ._desc = "error flag register CNTR_ROLLOVER",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERR_REG_DIAG_ONLY",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_DIAG_ONLY_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTDATA_QW1 & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_DIAG_ONLY_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_DIAG_ONLY_QW,
      ._desc = "error flag register DIAG_ONLY",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_mmr_err_flags_1_lo_rspmon_detail[] = {
    { ._name = "UNUSED_63_5",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_63_5_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_63_5_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_63_5_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_63_5_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERR_IN_TRIGGER1",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER1_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER1_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER1_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER1_QW,
      ._desc = "error flag input TRIGGER1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERR_IN_TRIGGER0",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER0_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER0_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER0_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER0_QW,
      ._desc = "error flag input TRIGGER0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERR_IN_PERR",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_PERR_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_PERR_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_PERR_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_PERR_QW,
      ._desc = "error flag input PERR",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERR_IN_CNTR_ROLLOVER",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_CNTR_ROLLOVER_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_CNTR_ROLLOVER_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_CNTR_ROLLOVER_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_CNTR_ROLLOVER_QW,
      ._desc = "error flag input CNTR_ROLLOVER",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_0_BP,
      ._mask = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_0_MASK,
      ._rval = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RSTDATA & AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_0_MASK,
      ._index = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_0_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t0_cmp_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_RSTDATA & AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_DATA_QW,
      ._desc = "Trigger 0 Compare Values 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t0_cmp_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_RSTDATA & AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_DATA_QW,
      ._desc = "Trigger 0 Compare Values 149:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t0_mode_detail[] = {
    { ._name = "MODE",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T0_MODE_MODE_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T0_MODE_MODE_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T0_MODE_RSTDATA & AR_NIC_RSPMON_DBG_LM_T0_MODE_MODE_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T0_MODE_MODE_QW,
      ._desc = "Trigger 0 Mode 0 all unmasked bits match 1 any unmasked bit matches 2 at least one unmasked bit doesnt match 3 do not trigger",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t0_mask_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_RSTDATA & AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_DATA_QW,
      ._desc = "Trigger 0 Ignore Mask Values 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t0_mask_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_RSTDATA & AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_DATA_QW,
      ._desc = "Trigger 0 Ignore Mask Values 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t0_mask_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_RSTDATA & AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_DATA_QW,
      ._desc = "Trigger 0 Ignore Mask Values 149:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t1_cmp_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_RSTDATA & AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_DATA_QW,
      ._desc = "Trigger 1 Compare Values 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t1_cmp_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_RSTDATA & AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_DATA_QW,
      ._desc = "Trigger 1 Compare Values 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t1_cmp_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_RSTDATA & AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_DATA_QW,
      ._desc = "Trigger 1 Compare Values 149:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t1_mode_detail[] = {
    { ._name = "MODE",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T1_MODE_MODE_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T1_MODE_MODE_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T1_MODE_RSTDATA & AR_NIC_RSPMON_DBG_LM_T1_MODE_MODE_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T1_MODE_MODE_QW,
      ._desc = "Trigger 1 Mode 0 all unmasked bits match 1 any unmasked bit matches 2 at least one unmasked bit doesnt match 3 do not trigger",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t1_mask_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_RSTDATA & AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_DATA_QW,
      ._desc = "Trigger 1 Ignore Mask Values 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t1_mask_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_RSTDATA & AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_DATA_QW,
      ._desc = "Trigger 1 Ignore Mask Values 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_t1_mask_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_DATA_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_DATA_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_RSTDATA & AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_DATA_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_DATA_QW,
      ._desc = "Trigger 1 Ignore Mask Values 149:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_mux_sel_detail[] = {
    { ._name = "LM_CAP1_SEL",
      ._bpos = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP1_SEL_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP1_SEL_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_MUX_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP1_SEL_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP1_SEL_QW,
      ._desc = "MUX Select for Capture 1 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CAP0_SEL",
      ._bpos = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP0_SEL_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP0_SEL_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_MUX_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP0_SEL_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP0_SEL_QW,
      ._desc = "MUX Select for Capture 0 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_TRIG1_SEL",
      ._bpos = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG1_SEL_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG1_SEL_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_MUX_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG1_SEL_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG1_SEL_QW,
      ._desc = "MUX Select for Trigger 1 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_TRIG0_SEL",
      ._bpos = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG0_SEL_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG0_SEL_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_MUX_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG0_SEL_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG0_SEL_QW,
      ._desc = "MUX Select for Trigger 0 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_lm_blk_sel_detail[] = {
    { ._name = "LM_CAP1_BUS",
      ._bpos = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BUS_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BUS_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BUS_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BUS_QW,
      ._desc = "The bus from LM_CAP1_BLK used to supply the Capture 1 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CAP1_BLK",
      ._bpos = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BLK_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BLK_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BLK_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BLK_QW,
      ._desc = "The block to supply Capture 1 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CAP0_BUS",
      ._bpos = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BUS_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BUS_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BUS_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BUS_QW,
      ._desc = "The bus from LM_CAP0_BLK used to supply the Capture 0 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CAP0_BLK",
      ._bpos = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BLK_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BLK_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BLK_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BLK_QW,
      ._desc = "The block to supply Capture 0 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_TRIG1_BUS",
      ._bpos = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BUS_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BUS_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BUS_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BUS_QW,
      ._desc = "The bus from LM_TRIG1_BLK used to supply Trigger 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_TRIG1_BLK",
      ._bpos = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BLK_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BLK_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BLK_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BLK_QW,
      ._desc = "The block to supply Trigger 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_TRIG0_BUS",
      ._bpos = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BUS_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BUS_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BUS_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BUS_QW,
      ._desc = "The bus from LM_TRIG0_BLK used to supply Trigger 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_TRIG0_BLK",
      ._bpos = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BLK_BP,
      ._mask = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BLK_MASK,
      ._rval = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTDATA & AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BLK_MASK,
      ._index = AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BLK_QW,
      ._desc = "The block to supply Trigger 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_err_flg_detail[] = {
    { ._name = "TRIGGER1",
      ._bpos = AR_NIC_RSPMON_ERR_FLG_TRIGGER1_BP,
      ._mask = AR_NIC_RSPMON_ERR_FLG_TRIGGER1_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FLG_TRIGGER1_MASK,
      ._index = AR_NIC_RSPMON_ERR_FLG_TRIGGER1_QW,
      ._desc = "The logic monitor trigger1 event occurred",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "TRIGGER0",
      ._bpos = AR_NIC_RSPMON_ERR_FLG_TRIGGER0_BP,
      ._mask = AR_NIC_RSPMON_ERR_FLG_TRIGGER0_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FLG_TRIGGER0_MASK,
      ._index = AR_NIC_RSPMON_ERR_FLG_TRIGGER0_QW,
      ._desc = "The logic monitor trigger0 event occurred",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "CNTR_PERR",
      ._bpos = AR_NIC_RSPMON_ERR_FLG_CNTR_PERR_BP,
      ._mask = AR_NIC_RSPMON_ERR_FLG_CNTR_PERR_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FLG_CNTR_PERR_MASK,
      ._index = AR_NIC_RSPMON_ERR_FLG_CNTR_PERR_QW,
      ._desc = "A parity error occurred reading the Event Counter RAM",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "CNTR_ROLLOVER",
      ._bpos = AR_NIC_RSPMON_ERR_FLG_CNTR_ROLLOVER_BP,
      ._mask = AR_NIC_RSPMON_ERR_FLG_CNTR_ROLLOVER_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FLG_CNTR_ROLLOVER_MASK,
      ._index = AR_NIC_RSPMON_ERR_FLG_CNTR_ROLLOVER_QW,
      ._desc = "An event counter rolled over",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RSPMON_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_RSPMON_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_RSPMON_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000100001ull,
      ._access = "RW1,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_err_clr_detail[] = {
    { ._name = "TRIGGER1",
      ._bpos = AR_NIC_RSPMON_ERR_CLR_TRIGGER1_BP,
      ._mask = AR_NIC_RSPMON_ERR_CLR_TRIGGER1_MASK,
      ._rval = AR_NIC_RSPMON_ERR_CLR_RSTDATA & AR_NIC_RSPMON_ERR_CLR_TRIGGER1_MASK,
      ._index = AR_NIC_RSPMON_ERR_CLR_TRIGGER1_QW,
      ._desc = "The logic monitor trigger1 event occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TRIGGER0",
      ._bpos = AR_NIC_RSPMON_ERR_CLR_TRIGGER0_BP,
      ._mask = AR_NIC_RSPMON_ERR_CLR_TRIGGER0_MASK,
      ._rval = AR_NIC_RSPMON_ERR_CLR_RSTDATA & AR_NIC_RSPMON_ERR_CLR_TRIGGER0_MASK,
      ._index = AR_NIC_RSPMON_ERR_CLR_TRIGGER0_QW,
      ._desc = "The logic monitor trigger0 event occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CNTR_PERR",
      ._bpos = AR_NIC_RSPMON_ERR_CLR_CNTR_PERR_BP,
      ._mask = AR_NIC_RSPMON_ERR_CLR_CNTR_PERR_MASK,
      ._rval = AR_NIC_RSPMON_ERR_CLR_RSTDATA & AR_NIC_RSPMON_ERR_CLR_CNTR_PERR_MASK,
      ._index = AR_NIC_RSPMON_ERR_CLR_CNTR_PERR_QW,
      ._desc = "A parity error occurred reading the Event Counter RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CNTR_ROLLOVER",
      ._bpos = AR_NIC_RSPMON_ERR_CLR_CNTR_ROLLOVER_BP,
      ._mask = AR_NIC_RSPMON_ERR_CLR_CNTR_ROLLOVER_MASK,
      ._rval = AR_NIC_RSPMON_ERR_CLR_RSTDATA & AR_NIC_RSPMON_ERR_CLR_CNTR_ROLLOVER_MASK,
      ._index = AR_NIC_RSPMON_ERR_CLR_CNTR_ROLLOVER_QW,
      ._desc = "An event counter rolled over",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RSPMON_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_RSPMON_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RSPMON_ERR_CLR_RSTDATA & AR_NIC_RSPMON_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_RSPMON_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_err_hss_msk_detail[] = {
    { ._name = "TRIGGER1",
      ._bpos = AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER1_BP,
      ._mask = AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER1_MASK,
      ._rval = AR_NIC_RSPMON_ERR_HSS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER1_MASK,
      ._index = AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER1_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TRIGGER0",
      ._bpos = AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER0_BP,
      ._mask = AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER0_MASK,
      ._rval = AR_NIC_RSPMON_ERR_HSS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER0_MASK,
      ._index = AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER0_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CNTR_PERR",
      ._bpos = AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_PERR_BP,
      ._mask = AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_PERR_MASK,
      ._rval = AR_NIC_RSPMON_ERR_HSS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_PERR_MASK,
      ._index = AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_PERR_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CNTR_ROLLOVER",
      ._bpos = AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_ROLLOVER_BP,
      ._mask = AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_ROLLOVER_MASK,
      ._rval = AR_NIC_RSPMON_ERR_HSS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_ROLLOVER_MASK,
      ._index = AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_ROLLOVER_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RSPMON_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_RSPMON_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RSPMON_ERR_HSS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_RSPMON_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_err_os_msk_detail[] = {
    { ._name = "TRIGGER1",
      ._bpos = AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER1_BP,
      ._mask = AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER1_MASK,
      ._rval = AR_NIC_RSPMON_ERR_OS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER1_MASK,
      ._index = AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER1_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TRIGGER0",
      ._bpos = AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER0_BP,
      ._mask = AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER0_MASK,
      ._rval = AR_NIC_RSPMON_ERR_OS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER0_MASK,
      ._index = AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER0_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CNTR_PERR",
      ._bpos = AR_NIC_RSPMON_ERR_OS_MSK_CNTR_PERR_BP,
      ._mask = AR_NIC_RSPMON_ERR_OS_MSK_CNTR_PERR_MASK,
      ._rval = AR_NIC_RSPMON_ERR_OS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_OS_MSK_CNTR_PERR_MASK,
      ._index = AR_NIC_RSPMON_ERR_OS_MSK_CNTR_PERR_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CNTR_ROLLOVER",
      ._bpos = AR_NIC_RSPMON_ERR_OS_MSK_CNTR_ROLLOVER_BP,
      ._mask = AR_NIC_RSPMON_ERR_OS_MSK_CNTR_ROLLOVER_MASK,
      ._rval = AR_NIC_RSPMON_ERR_OS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_OS_MSK_CNTR_ROLLOVER_MASK,
      ._index = AR_NIC_RSPMON_ERR_OS_MSK_CNTR_ROLLOVER_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RSPMON_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_RSPMON_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RSPMON_ERR_OS_MSK_RSTDATA & AR_NIC_RSPMON_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_RSPMON_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_err_first_flg_detail[] = {
    { ._name = "TRIGGER1",
      ._bpos = AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER1_BP,
      ._mask = AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER1_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FIRST_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER1_MASK,
      ._index = AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER1_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TRIGGER0",
      ._bpos = AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER0_BP,
      ._mask = AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER0_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FIRST_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER0_MASK,
      ._index = AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER0_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CNTR_PERR",
      ._bpos = AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_PERR_BP,
      ._mask = AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_PERR_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FIRST_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_PERR_MASK,
      ._index = AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_PERR_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CNTR_ROLLOVER",
      ._bpos = AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_ROLLOVER_BP,
      ._mask = AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_ROLLOVER_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FIRST_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_ROLLOVER_MASK,
      ._index = AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_ROLLOVER_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RSPMON_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_RSPMON_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RSPMON_ERR_FIRST_FLG_RSTDATA & AR_NIC_RSPMON_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_RSPMON_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_dbg_errinj_cntr_perr_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ADDRESS_BP,
      ._mask = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ADDRESS_MASK,
      ._rval = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_RSTDATA & AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ADDRESS_MASK,
      ._index = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_CHECKBITS_BP,
      ._mask = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_CHECKBITS_MASK,
      ._rval = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_RSTDATA & AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_CHECKBITS_MASK,
      ._index = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_CHECKBITS_QW,
      ._desc = "When an error in injected, each bit that is set to one is this field causes the corresponding parity bit to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_TRIGGERED_BP,
      ._mask = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_TRIGGERED_MASK,
      ._rval = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_RSTDATA & AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_TRIGGERED_MASK,
      ._index = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_TRIGGERED_QW,
      ._desc = "This status bit is set when an error is injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_MODE_BP,
      ._mask = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_MODE_MASK,
      ._rval = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_RSTDATA & AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_MODE_MASK,
      ._index = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ENABLE_BP,
      ._mask = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ENABLE_MASK,
      ._rval = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_RSTDATA & AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ENABLE_MASK,
      ._index = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_err_info_cntr_perr_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_ADDRESS_BP,
      ._mask = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_ADDRESS_MASK,
      ._rval = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_RSTDATA & AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_ADDRESS_MASK,
      ._index = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_ADDRESS_QW,
      ._desc = "Parity Error Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_PERR",
      ._bpos = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_BP,
      ._mask = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_MASK,
      ._rval = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_RSTDATA & AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_MASK,
      ._index = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_QW,
      ._desc = "The parity error was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_err_info_cntr_perr_cnt_detail[] = {
    { ._name = "PERR_COUNT",
      ._bpos = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_BP,
      ._mask = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_MASK,
      ._rval = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_RSTDATA & AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_MASK,
      ._index = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_QW,
      ._desc = "Number of parity errors that have occurred",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_prf_event_cntr_ctrl_detail[] = {
    { ._name = "DISABLE_AUTO_UPDATE",
      ._bpos = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_BP,
      ._mask = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_MASK,
      ._rval = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_RSTDATA & AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_MASK,
      ._index = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_QW,
      ._desc = "Writing a 1'b1 disables the auto-updating of the performance counter rams, turns off widget",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_ENABLE_BP,
      ._mask = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_ENABLE_MASK,
      ._rval = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_RSTDATA & AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_ENABLE_MASK,
      ._index = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_ENABLE_QW,
      ._desc = "Writing a 1 enables performance counters, writing a 0 disables counting and allows all performance counters to be used as scratch",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CLEAR",
      ._bpos = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_CLEAR_BP,
      ._mask = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_CLEAR_MASK,
      ._rval = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_RSTDATA & AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_CLEAR_MASK,
      ._index = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_CLEAR_QW,
      ._desc = "Writing a 1 initiates the clear sequence which clears all performance counters except scratch counters, read returns zero",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "WS,HRO"
    },
    { ._name = "COUNTERS_CLEAR",
      ._bpos = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_BP,
      ._mask = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_MASK,
      ._rval = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_RSTDATA & AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_MASK,
      ._index = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_QW,
      ._desc = "This bit is clear during the clear sequence and becomes set upon the completion of the clear sequence",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rspmon_prf_event_cntr_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_RSPMON_PRF_EVENT_CNTR_CNT_BP,
      ._mask = AR_NIC_RSPMON_PRF_EVENT_CNTR_CNT_MASK,
      ._rval = AR_NIC_RSPMON_PRF_EVENT_CNTR_RSTDATA & AR_NIC_RSPMON_PRF_EVENT_CNTR_CNT_MASK,
      ._index = AR_NIC_RSPMON_PRF_EVENT_CNTR_CNT_QW,
      ._desc = "Event counters",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR RSPMON DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_rval[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSTDATA_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSTDATA_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSTDATA_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_rmsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSTMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSTMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSTMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_wrmsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_WRTMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_WRTMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_WRTMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_rdmsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RDMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RDMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RDMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_xsmsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_XSMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_XSMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_XSMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_wsemsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_WSEMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_WSEMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_WSEMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_rsemsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSEMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSEMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_RSEMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_w1smsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_W1SMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_W1SMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_W1SMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_w1cmsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_W1CMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_W1CMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_W1CMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_wrstmsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_WRSTMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_WRSTMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_hwwmsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_HWWMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_HWWMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_HWWMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon_hwrmsk[3] = {
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_HWRMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_HWRMASK_QW1,
	AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_HWRMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_rval[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSTDATA_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSTDATA_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_rmsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSTMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSTMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_wrmsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_WRTMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_WRTMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_rdmsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RDMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RDMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_xsmsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_XSMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_XSMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_wsemsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_WSEMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_WSEMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_rsemsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSEMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_RSEMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_w1smsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_W1SMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_W1SMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_w1cmsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_W1CMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_W1CMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_wrstmsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_WRSTMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_hwwmsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_HWWMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_HWWMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon_hwrmsk[2] = {
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_HWRMASK_QW0,
	AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_HWRMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_rval[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSTDATA_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSTDATA_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSTDATA_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_rmsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSTMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSTMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSTMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_wrmsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_WRTMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_WRTMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_WRTMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_rdmsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RDMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RDMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RDMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_xsmsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_XSMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_XSMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_XSMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_wsemsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_WSEMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_WSEMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_WSEMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_rsemsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSEMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSEMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_RSEMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_w1smsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_W1SMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_W1SMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_W1SMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_w1cmsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_W1CMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_W1CMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_W1CMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_wrstmsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_WRSTMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_WRSTMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_hwwmsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_HWWMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_HWWMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_HWWMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_hwrmsk[3] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_HWRMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_HWRMASK_QW1,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_HWRMASK_QW2
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_rval[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTDATA_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTDATA_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_rmsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSTMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_wrmsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_WRTMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_WRTMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_rdmsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RDMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RDMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_xsmsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_XSMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_XSMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_wsemsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_WSEMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_WSEMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_rsemsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSEMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_RSEMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_w1smsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_W1SMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_W1SMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_w1cmsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_W1CMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_W1CMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_wrstmsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_WRSTMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_hwwmsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_HWWMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_HWWMASK_QW1
};
static const uint64_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_hwrmsk[2] = {
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_HWRMASK_QW0,
	AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_HWRMASK_QW1
};

/*
 *  AR RSPMON MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t0_cmp_lo = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T0_CMP_LO",
    ._addr = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t0_cmp_lo_detail
};
static const cmmr_br_t __ar_nic_rspmon_mmr_ring_0_hi_rspmon = {
    ._name = "AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON",
    ._addr = AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON,
    ._rval.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_hi_rspmon_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_mmr_ring_0_hi_rspmon_detail
};
static const cmmr_br_t __ar_nic_rspmon_mmr_ring_0_mid_rspmon = {
    ._name = "AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON",
    ._addr = AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON,
    ._rval.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_ring_0_mid_rspmon_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_mmr_ring_0_mid_rspmon_detail
};
static const cmmr_br_t __ar_nic_rspmon_mmr_ring_0_lo_rspmon = {
    ._name = "AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON",
    ._addr = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON,
    ._rval.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_mmr_ring_0_lo_rspmon_detail
};
static const cmmr_br_t __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon = {
    ._name = "AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON",
    ._addr = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON,
    ._rval.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_detail
};
static const cmmr_br_t __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon = {
    ._name = "AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON",
    ._addr = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON,
    ._rval.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_detail
};
static const cmmr_br_t __ar_nic_rspmon_mmr_err_flags_1_lo_rspmon = {
    ._name = "AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON",
    ._addr = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON,
    ._rval.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_mmr_err_flags_1_lo_rspmon_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t0_cmp_mid = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T0_CMP_MID",
    ._addr = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t0_cmp_mid_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t0_cmp_hi = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T0_CMP_HI",
    ._addr = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t0_cmp_hi_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t0_mode = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T0_MODE",
    ._addr = AR_NIC_RSPMON_DBG_LM_T0_MODE,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MODE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t0_mode_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t0_mask_lo = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T0_MASK_LO",
    ._addr = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t0_mask_lo_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t0_mask_mid = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T0_MASK_MID",
    ._addr = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t0_mask_mid_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t0_mask_hi = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T0_MASK_HI",
    ._addr = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t0_mask_hi_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t1_cmp_lo = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T1_CMP_LO",
    ._addr = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t1_cmp_lo_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t1_cmp_mid = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T1_CMP_MID",
    ._addr = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t1_cmp_mid_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t1_cmp_hi = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T1_CMP_HI",
    ._addr = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t1_cmp_hi_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t1_mode = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T1_MODE",
    ._addr = AR_NIC_RSPMON_DBG_LM_T1_MODE,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MODE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t1_mode_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t1_mask_lo = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T1_MASK_LO",
    ._addr = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t1_mask_lo_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t1_mask_mid = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T1_MASK_MID",
    ._addr = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t1_mask_mid_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_t1_mask_hi = {
    ._name = "AR_NIC_RSPMON_DBG_LM_T1_MASK_HI",
    ._addr = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_t1_mask_hi_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_mux_sel = {
    ._name = "AR_NIC_RSPMON_DBG_LM_MUX_SEL",
    ._addr = AR_NIC_RSPMON_DBG_LM_MUX_SEL,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_MUX_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_mux_sel_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_lm_blk_sel = {
    ._name = "AR_NIC_RSPMON_DBG_LM_BLK_SEL",
    ._addr = AR_NIC_RSPMON_DBG_LM_BLK_SEL,
    ._rval.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_LM_BLK_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_lm_blk_sel_detail
};
static const cmmr_br_t __ar_nic_rspmon_err_flg = {
    ._name = "AR_NIC_RSPMON_ERR_FLG",
    ._addr = AR_NIC_RSPMON_ERR_FLG,
    ._rval.val = AR_NIC_RSPMON_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000180811ull,
    ._info = __ar_nic_rspmon_err_flg_detail
};
static const cmmr_br_t __ar_nic_rspmon_err_clr = {
    ._name = "AR_NIC_RSPMON_ERR_CLR",
    ._addr = AR_NIC_RSPMON_ERR_CLR,
    ._rval.val = AR_NIC_RSPMON_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_rspmon_err_clr_detail
};
static const cmmr_br_t __ar_nic_rspmon_err_hss_msk = {
    ._name = "AR_NIC_RSPMON_ERR_HSS_MSK",
    ._addr = AR_NIC_RSPMON_ERR_HSS_MSK,
    ._rval.val = AR_NIC_RSPMON_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_rspmon_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_rspmon_err_os_msk = {
    ._name = "AR_NIC_RSPMON_ERR_OS_MSK",
    ._addr = AR_NIC_RSPMON_ERR_OS_MSK,
    ._rval.val = AR_NIC_RSPMON_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_rspmon_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_rspmon_err_first_flg = {
    ._name = "AR_NIC_RSPMON_ERR_FIRST_FLG",
    ._addr = AR_NIC_RSPMON_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_RSPMON_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_rspmon_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_rspmon_dbg_errinj_cntr_perr = {
    ._name = "AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR",
    ._addr = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR,
    ._rval.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_dbg_errinj_cntr_perr_detail
};
static const cmmr_br_t __ar_nic_rspmon_err_info_cntr_perr = {
    ._name = "AR_NIC_RSPMON_ERR_INFO_CNTR_PERR",
    ._addr = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR,
    ._rval.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rspmon_err_info_cntr_perr_detail
};
static const cmmr_br_t __ar_nic_rspmon_err_info_cntr_perr_cnt = {
    ._name = "AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT",
    ._addr = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT,
    ._rval.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rspmon_err_info_cntr_perr_cnt_detail
};
static const cmmr_br_t __ar_nic_rspmon_prf_event_cntr_ctrl = {
    ._name = "AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL",
    ._addr = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL,
    ._rval.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rspmon_prf_event_cntr_ctrl_detail
};
static const cmmr_br_t __ar_nic_rspmon_prf_event_cntr = {
    ._name = "AR_NIC_RSPMON_PRF_EVENT_CNTR",
    ._addr = AR_NIC_RSPMON_PRF_EVENT_CNTR,
    ._rval.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_RSTDATA,
    ._rmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_RSTMASK,
    ._wrmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_WRTMASK,
    ._rdmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_RDMASK,
    ._xsmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_XSMASK,
    ._wsemsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_WSEMASK,
    ._rsemsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_RSEMASK,
    ._w1smsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_W1SMASK,
    ._w1cmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_W1CMASK,
    ._wrstmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_HWWMASK,
    ._hwrmsk.val = AR_NIC_RSPMON_PRF_EVENT_CNTR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 128,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rspmon_prf_event_cntr_detail
};

/*
 *  INSTALL AR RSPMON MMRS
 */
static const cmmr_br_t* __ar_rspmon_mmrs[] = {
    &__ar_nic_rspmon_dbg_lm_t0_cmp_lo,
    &__ar_nic_rspmon_dbg_lm_t0_cmp_mid,
    &__ar_nic_rspmon_dbg_lm_t0_cmp_hi,
    &__ar_nic_rspmon_dbg_lm_t0_mode,
    &__ar_nic_rspmon_dbg_lm_t0_mask_lo,
    &__ar_nic_rspmon_dbg_lm_t0_mask_mid,
    &__ar_nic_rspmon_dbg_lm_t0_mask_hi,
    &__ar_nic_rspmon_dbg_lm_t1_cmp_lo,
    &__ar_nic_rspmon_dbg_lm_t1_cmp_mid,
    &__ar_nic_rspmon_dbg_lm_t1_cmp_hi,
    &__ar_nic_rspmon_dbg_lm_t1_mode,
    &__ar_nic_rspmon_dbg_lm_t1_mask_lo,
    &__ar_nic_rspmon_dbg_lm_t1_mask_mid,
    &__ar_nic_rspmon_dbg_lm_t1_mask_hi,
    &__ar_nic_rspmon_dbg_lm_mux_sel,
    &__ar_nic_rspmon_dbg_lm_blk_sel,
    &__ar_nic_rspmon_err_flg,
    &__ar_nic_rspmon_err_clr,
    &__ar_nic_rspmon_err_hss_msk,
    &__ar_nic_rspmon_err_os_msk,
    &__ar_nic_rspmon_err_first_flg,
    &__ar_nic_rspmon_dbg_errinj_cntr_perr,
    &__ar_nic_rspmon_err_info_cntr_perr,
    &__ar_nic_rspmon_err_info_cntr_perr_cnt,
    &__ar_nic_rspmon_prf_event_cntr_ctrl,
    &__ar_nic_rspmon_prf_event_cntr,
    NULL
};

/*
 *  INSTALL AR RSPMON LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_rspmon_enc_mmrs[] = {
    &__ar_nic_rspmon_mmr_ring_0_hi_rspmon,
    &__ar_nic_rspmon_mmr_ring_0_mid_rspmon,
    &__ar_nic_rspmon_mmr_ring_0_lo_rspmon,
    &__ar_nic_rspmon_mmr_err_flags_1_hi_rspmon,
    &__ar_nic_rspmon_mmr_err_flags_1_mid_rspmon,
    &__ar_nic_rspmon_mmr_err_flags_1_lo_rspmon,
    NULL
};

#endif
