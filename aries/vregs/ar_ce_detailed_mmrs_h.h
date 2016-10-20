/******************************************************************************
 * COPYRIGHT CRAY INC. ar_ce_detailed_mmrs_h.h
 * FILE: ar_ce_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/
/**
 * @file ar_ce_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:38:58 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_ce_mmr_values.h and ar_ce_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_ce_mmr_values.h"

#ifndef _AR_CE_DETAILED_MMRS_H_H_
#define _AR_CE_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_ce_mmrs[];	/* CE Array */

/*
 *  AR CE MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_ce_cfg_in_base_detail[] = {
    { ._name = "PKEY",
      ._bpos = AR_NIC_CE_CFG_IN_BASE_PKEY_BP,
      ._mask = AR_NIC_CE_CFG_IN_BASE_PKEY_MASK,
      ._rval = AR_NIC_CE_CFG_IN_BASE_RSTDATA & AR_NIC_CE_CFG_IN_BASE_PKEY_MASK,
      ._index = AR_NIC_CE_CFG_IN_BASE_PKEY_QW,
      ._desc = "The Protection Key is used to validate the request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FP_ROUNDING_MODE",
      ._bpos = AR_NIC_CE_CFG_IN_BASE_FP_ROUNDING_MODE_BP,
      ._mask = AR_NIC_CE_CFG_IN_BASE_FP_ROUNDING_MODE_MASK,
      ._rval = AR_NIC_CE_CFG_IN_BASE_RSTDATA & AR_NIC_CE_CFG_IN_BASE_FP_ROUNDING_MODE_MASK,
      ._index = AR_NIC_CE_CFG_IN_BASE_FP_ROUNDING_MODE_QW,
      ._desc = "floating point rounding modes: 0 = Round to nearest 1 = Round down 2 = Round up 3 = Round to zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NUMBER_OF_CHILDREN",
      ._bpos = AR_NIC_CE_CFG_IN_BASE_NUMBER_OF_CHILDREN_BP,
      ._mask = AR_NIC_CE_CFG_IN_BASE_NUMBER_OF_CHILDREN_MASK,
      ._rval = AR_NIC_CE_CFG_IN_BASE_RSTDATA & AR_NIC_CE_CFG_IN_BASE_NUMBER_OF_CHILDREN_MASK,
      ._index = AR_NIC_CE_CFG_IN_BASE_NUMBER_OF_CHILDREN_QW,
      ._desc = "The total number of inner and/or leaf joins expected to participate in a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "VC_RESET",
      ._bpos = AR_NIC_CE_CFG_IN_BASE_VC_RESET_BP,
      ._mask = AR_NIC_CE_CFG_IN_BASE_VC_RESET_MASK,
      ._rval = AR_NIC_CE_CFG_IN_BASE_RSTDATA & AR_NIC_CE_CFG_IN_BASE_VC_RESET_MASK,
      ._index = AR_NIC_CE_CFG_IN_BASE_VC_RESET_QW,
      ._desc = "If written to a one, resets the logic unique to a virtual channel and sets it to a disabled condition",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_detail[] = {
    { ._name = "N85B0_61",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_N85B0_61_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_N85B0_61_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSTDATA_QW2 & AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_N85B0_61_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_N85B0_61_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_detail[] = {
    { ._name = "UNUSED_127_92",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_UNUSED_127_92_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_UNUSED_127_92_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_UNUSED_127_92_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_UNUSED_127_92_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BAD_REQS",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_BAD_REQS_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_BAD_REQS_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_BAD_REQS_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_BAD_REQS_QW,
      ._desc = "Rejected Request Counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_HEADER_PC",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_HEADER_PC_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_HEADER_PC_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_HEADER_PC_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_HEADER_PC_QW,
      ._desc = "Header Flit Parity Error Counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CONFIG_MBE",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_CONFIG_MBE_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_CONFIG_MBE_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_CONFIG_MBE_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_CONFIG_MBE_QW,
      ._desc = "Config MMR MBE Counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CONFIG_SBE",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_CONFIG_SBE_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_CONFIG_SBE_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_CONFIG_SBE_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_CONFIG_SBE_QW,
      ._desc = "Config MMR SBE Counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DFLIT_MBE",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_DFLIT_MBE_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_DFLIT_MBE_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_DFLIT_MBE_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_DFLIT_MBE_QW,
      ._desc = "MBE Dat Flit Counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DFLIT_SBE",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_DFLIT_SBE_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_DFLIT_SBE_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_DFLIT_SBE_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_DFLIT_SBE_QW,
      ._desc = "SBE Data Flit Counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REDUCT_SCAT3",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT3_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT3_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT3_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT3_QW,
      ._desc = "Channel 3 Reduction/Scatter count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REDUCT_SCAT2",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT2_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT2_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT2_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT2_QW,
      ._desc = "Channel 2 Reduction/Scatter count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REDUCT_SCAT1",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT1_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT1_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT1_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT1_QW,
      ._desc = "Channel 1 Reduction/Scatter count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REDUCT_SCAT0",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT0_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT0_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT0_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_CNTR_REDUCT_SCAT0_QW,
      ._desc = "Channel 0 Reduction/Scatter count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_64",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_UNUSED_81_64_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_UNUSED_81_64_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1 & AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_UNUSED_81_64_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_UNUSED_81_64_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_mmr_ring_cclk_0_lo_ce_detail[] = {
    { ._name = "N85B0_61",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_N85B0_61_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_N85B0_61_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_N85B0_61_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_N85B0_61_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ANOTHER_RAT_ACK",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_ANOTHER_RAT_ACK_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_ANOTHER_RAT_ACK_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_ANOTHER_RAT_ACK_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_ANOTHER_RAT_ACK_QW,
      ._desc = "Acknowledge to RAT per flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NPT_FCNT",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_Q_NPT_FCNT_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_Q_NPT_FCNT_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_Q_NPT_FCNT_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_Q_NPT_FCNT_QW,
      ._desc = "counter maintained to track number of headers processed and npt acknowledgement of receipt of response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "STALL_NPT",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_STALL_NPT_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_STALL_NPT_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_STALL_NPT_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_STALL_NPT_QW,
      ._desc = "indicates a stall condition on the npt interface, further processing of additional joins and or scatters can not be performed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_VC_RESET",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_I_VC_RESET_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_I_VC_RESET_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_I_VC_RESET_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_I_VC_RESET_QW,
      ._desc = "indicates a virtual CE is in a disabled condition",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_FIRST_RED",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_Q_FIRST_RED_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_Q_FIRST_RED_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_Q_FIRST_RED_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_Q_FIRST_RED_QW,
      ._desc = "indicates a virtual CE has started a new reduction with the first join",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_MIN_MAX",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_MIN_MAX_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_MIN_MAX_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_MIN_MAX_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_MIN_MAX_QW,
      ._desc = "indicates a virtual CE is performing a min or max operation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_DBLOP",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_DBLOP_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_DBLOP_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_DBLOP_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_DBLOP_QW,
      ._desc = "indicates a virtual CE is performing an operation with two operands",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC_D2",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_VC_D2_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_VC_D2_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_VC_D2_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_VC_D2_QW,
      ._desc = "indicates a virtual CE is performing an operation with a cnt_bm greater than 3 (two operands or operand/index pair)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMRR_Q_OS_IRQ",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_MMRR_Q_OS_IRQ_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_MMRR_Q_OS_IRQ_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_MMRR_Q_OS_IRQ_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_MMRR_Q_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMRR_Q_HSS_IRQ",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_MMRR_Q_HSS_IRQ_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_MMRR_Q_HSS_IRQ_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_MMRR_Q_HSS_IRQ_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_MMRR_Q_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CE_NETMON_RING_WRACK",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_CE_NETMON_RING_WRACK_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_CE_NETMON_RING_WRACK_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_CE_NETMON_RING_WRACK_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_CE_NETMON_RING_WRACK_QW,
      ._desc = "NETMON (MMR) Write Acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CE_NETMON_RING_15_0",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_CE_NETMON_RING_15_0_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_CE_NETMON_RING_15_0_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_CE_NETMON_RING_15_0_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_R_Q_CE_NETMON_RING_15_0_QW,
      ._desc = "NETMON (MMR) Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NETMON_CE_RING_15_0",
      ._bpos = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_I_NETMON_CE_RING_15_0_BP,
      ._mask = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_I_NETMON_CE_RING_15_0_MASK,
      ._rval = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA & AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_I_NETMON_CE_RING_15_0_MASK,
      ._index = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_I_NETMON_CE_RING_15_0_QW,
      ._desc = "NETMON (MMR) Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_flg_1_hi_ce_detail[] = {
    { ._name = "N1B0_145",
      ._bpos = AR_NIC_CE_ERR_FLG_1_HI_CE_N1B0_145_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_HI_CE_N1B0_145_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_HI_CE_RSTDATA_QW2 & AR_NIC_CE_ERR_FLG_1_HI_CE_N1B0_145_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_HI_CE_N1B0_145_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SCATTER_IP",
      ._bpos = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_SCATTER_IP_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_SCATTER_IP_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_HI_CE_RSTDATA_QW2 & AR_NIC_CE_ERR_FLG_1_HI_CE_Q_SCATTER_IP_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_SCATTER_IP_QW,
      ._desc = "indicates a virtual CE has completed a reduction, received a scatter command, and is performing a scatter operation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_WAIT4RED",
      ._bpos = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_WAIT4RED_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_WAIT4RED_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_HI_CE_RSTDATA_QW2 & AR_NIC_CE_ERR_FLG_1_HI_CE_Q_WAIT4RED_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_WAIT4RED_QW,
      ._desc = "indicates a virtual CE is waiting for the first join of a new reduction, activated with reset or when disabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_WAIT4SCATT",
      ._bpos = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_WAIT4SCATT_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_WAIT4SCATT_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_HI_CE_RSTDATA_QW2 & AR_NIC_CE_ERR_FLG_1_HI_CE_Q_WAIT4SCATT_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_WAIT4SCATT_QW,
      ._desc = "indicates a virtual CE has completed a reduction and is waiting for a scatter command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SCATTER_CMD_SG6",
      ._bpos = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_SCATTER_CMD_SG6_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_SCATTER_CMD_SG6_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_HI_CE_RSTDATA_QW2 & AR_NIC_CE_ERR_FLG_1_HI_CE_Q_SCATTER_CMD_SG6_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_HI_CE_Q_SCATTER_CMD_SG6_QW,
      ._desc = "indicates a scatter command was received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RED_DONE",
      ._bpos = AR_NIC_CE_ERR_FLG_1_HI_CE_I_RED_DONE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_HI_CE_I_RED_DONE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_HI_CE_RSTDATA_QW2 & AR_NIC_CE_ERR_FLG_1_HI_CE_I_RED_DONE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_HI_CE_I_RED_DONE_QW,
      ._desc = "indicates when a virtual CE has completed a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_flg_1_mid_ce_detail[] = {
    { ._name = "UNUSED_127",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_UNUSED_127_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_UNUSED_127_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_UNUSED_127_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_UNUSED_127_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REDENGN_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_REDENGN_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_REDENGN_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_REDENGN_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_REDENGN_OVRFLO_QW,
      ._desc = "One of the 12 reduction engine FIFO's indicated an overfow condition",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RAT_FIFO_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_RAT_FIFO_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_RAT_FIFO_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_RAT_FIFO_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_RAT_FIFO_OVRFLO_QW,
      ._desc = "The RAT sent additional requests even though the input FIFO was full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDRESS_ERR",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_ADDRESS_ERR_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_ADDRESS_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_ADDRESS_ERR_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_ADDRESS_ERR_QW,
      ._desc = "Request address bits [5:2] plus the cnt_bm field do not cross a cache line",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_REG_SBE",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_MMR_REG_SBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_MMR_REG_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_MMR_REG_SBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_MMR_REG_SBE_QW,
      ._desc = "single bit error detected from mmr register space, each position represents the virtual CE associated with the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_REG_MBE",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_MMR_REG_MBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_MMR_REG_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_MMR_REG_MBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_MMR_REG_MBE_QW,
      ._desc = "multi-bit error detected from mmr register space, each position represents the virtual CE associated with the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "OPERATION_DISABLED",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_OPERATION_DISABLED_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_OPERATION_DISABLED_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_OPERATION_DISABLED_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_OPERATION_DISABLED_QW,
      ._desc = "The request virtual CE (ce_id) had it's VC_RESET bit active indicating the virtual channel is disabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "HEADER_PC",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_PC_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_PC_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_PC_QW,
      ._desc = "Parity error was detected on a header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "HEADER_LSTATUS",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_LSTATUS_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_LSTATUS_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_LSTATUS_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_LSTATUS_QW,
      ._desc = "Indicates a header was received with the Local Node Error Status (lstatus) field other than zero, indicating an error was detected in the path to this CE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "HEADER_WITH_TAIL",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_WITH_TAIL_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_WITH_TAIL_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_WITH_TAIL_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_HEADER_WITH_TAIL_QW,
      ._desc = "A header was received with a tail bit active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INV_CE_CMD",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_INV_CE_CMD_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_INV_CE_CMD_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_INV_CE_CMD_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_INV_CE_CMD_QW,
      ._desc = "A header was received with a reqcmd not valid for the CE (9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INV_ALU_OP",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_INV_ALU_OP_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_INV_ALU_OP_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_INV_ALU_OP_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_INV_ALU_OP_QW,
      ._desc = "The reqcmd header field is not a valid CE ALU operation or the ce_op_mod bit in the Collective Control Word is active and op code is not a min or max operation (Table 466 in the AIS and Table 452 in the AIS)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INV_CNT_BM",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_INV_CNT_BM_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_INV_CNT_BM_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_INV_CNT_BM_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_INV_CNT_BM_QW,
      ._desc = "cnt_bm header field specifies a count of the number of 32 bit words of data will follow the header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BAD_OPERANDS",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_BAD_OPERANDS_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_BAD_OPERANDS_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_BAD_OPERANDS_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_BAD_OPERANDS_QW,
      ._desc = "A min or max operation was defined in the reqcmd field of the header, which requires two data flits to follow the header and a cnt_bm value of 5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNEXPECTED_SCATTER",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_UNEXPECTED_SCATTER_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_UNEXPECTED_SCATTER_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_UNEXPECTED_SCATTER_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_UNEXPECTED_SCATTER_QW,
      ._desc = "A scatter command was received before the reduction has completed or receipt of a scatter while executing a scatter (",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DFLIT_SBE",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_DFLIT_SBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_DFLIT_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_DFLIT_SBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_DFLIT_SBE_QW,
      ._desc = "Data flit SECDED detected single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DFLIT_MBE",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_DFLIT_MBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_DFLIT_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_DFLIT_MBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_DFLIT_MBE_QW,
      ._desc = "Multi bit error while performing SECDED of data flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PROTECTION_VIOLATION",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_PROTECTION_VIOLATION_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_PROTECTION_VIOLATION_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_PROTECTION_VIOLATION_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_PROTECTION_VIOLATION_QW,
      ._desc = "A new request was received in which it's pkey did not match the pkey configured for this virtual CE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNEXPECTED_JOIN",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_UNEXPECTED_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_UNEXPECTED_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_UNEXPECTED_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_UNEXPECTED_JOIN_QW,
      ._desc = "The type of join for this child_id is checked against the type defined for this child in the configuration MMRs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DUPLICATE_JOIN",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_DUPLICATE_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_DUPLICATE_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_DUPLICATE_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_DUPLICATE_JOIN_QW,
      ._desc = "Indicates the child_id for a new request has previously joined a reduction on this virtual CE and the results of that reduction have not been sent via a scatter or PUT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FIRST_OP_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_FIRST_OP_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_FIRST_OP_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_FIRST_OP_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_FIRST_OP_NOT_MATCH_QW,
      ._desc = "Received a join, but the operation did not match operation received from the first child that joined the collective for this reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FIRST_CNT_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_FIRST_CNT_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_FIRST_CNT_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_FIRST_CNT_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_FIRST_CNT_NOT_MATCH_QW,
      ._desc = "Received a join, but the cnt_bm field did not match the one received by the first child that entered this reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MISMATCH_ERR",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_MISMATCH_ERR_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_MISMATCH_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_MISMATCH_ERR_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_MISMATCH_ERR_QW,
      ._desc = "Received a join, but the reduction id did not match the one received by the first child that joined this reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "OP_INDX_REG_PC",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_OP_INDX_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_OP_INDX_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_OP_INDX_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_OP_INDX_REG_PC_QW,
      ._desc = "An internal parity error was detected in operand/index register",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "JL_REG_PC",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_JL_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_JL_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_JL_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_JL_REG_PC_QW,
      ._desc = "An internal parity error detected in the joinlist register",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CE_ERR_FLG_1_MID_CE_DIAG_ONLY_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_MID_CE_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1 & AR_NIC_CE_ERR_FLG_1_MID_CE_DIAG_ONLY_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_MID_CE_DIAG_ONLY_QW,
      ._desc = "Not used by CE logic, for diagnostic use only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_flg_1_lo_ce_detail[] = {
    { ._name = "UNUSED_63",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_UNUSED_63_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_UNUSED_63_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_UNUSED_63_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_UNUSED_63_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REDENGN_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_REDENGN_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_REDENGN_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_REDENGN_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_REDENGN_OVRFLO_QW,
      ._desc = "One of the 12 reduction engine FIFO's indicated an overfow condition",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_FIFO_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_RAT_FIFO_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_RAT_FIFO_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_RAT_FIFO_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_RAT_FIFO_OVRFLO_QW,
      ._desc = "The RAT sent additional requests even though the input FIFO was full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ADDRESS_ERR",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_ADDRESS_ERR_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_ADDRESS_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_ADDRESS_ERR_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_ADDRESS_ERR_QW,
      ._desc = "Request address bits [5:2] plus the cnt_bm field do not cross a cache line",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MMR_REG_SBE",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_MMR_REG_SBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_MMR_REG_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_MMR_REG_SBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_MMR_REG_SBE_QW,
      ._desc = "single bit error detected from mmr register space, each position represents the virtual CE associated with the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MMR_REG_MBE",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_MMR_REG_MBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_MMR_REG_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_MMR_REG_MBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_MMR_REG_MBE_QW,
      ._desc = "multi-bit error detected from mmr register space, each position represents the virtual CE associated with the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_OPERATION_DISABLED",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_OPERATION_DISABLED_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_OPERATION_DISABLED_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_OPERATION_DISABLED_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_OPERATION_DISABLED_QW,
      ._desc = "The request virtual CE (ce_id) had it's VC_RESET bit active indicating the virtual channel is disabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_HEADER_PC",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_PC_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_PC_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_PC_QW,
      ._desc = "Parity error was detected on a header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_HEADER_LSTATUS",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_LSTATUS_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_LSTATUS_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_LSTATUS_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_LSTATUS_QW,
      ._desc = "Indicates a header was received with the Local Node Error Status (lstatus) field other than zero, indicating an error was detected in the path to this CE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_HEADER_WITH_TAIL",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_WITH_TAIL_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_WITH_TAIL_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_WITH_TAIL_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_HEADER_WITH_TAIL_QW,
      ._desc = "A header was received with a tail bit active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_INV_CE_CMD",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_CE_CMD_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_CE_CMD_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_CE_CMD_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_CE_CMD_QW,
      ._desc = "A header was received with a reqcmd not valid for the CE (9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_INV_ALU_OP",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_ALU_OP_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_ALU_OP_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_ALU_OP_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_ALU_OP_QW,
      ._desc = "The reqcmd header field is not a valid CE ALU operation or the ce_op_mod bit in the Collective Control Word is active and op code is not a min or max operation (Table 466 in the AIS and Table 452 in the AIS)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_INV_CNT_BM",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_CNT_BM_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_CNT_BM_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_CNT_BM_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_INV_CNT_BM_QW,
      ._desc = "cnt_bm header field specifies a count of the number of 32 bit words of data will follow the header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BAD_OPERANDS",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_BAD_OPERANDS_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_BAD_OPERANDS_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_BAD_OPERANDS_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_BAD_OPERANDS_QW,
      ._desc = "A min or max operation was defined in the reqcmd field of the header, which requires two data flits to follow the header and a cnt_bm value of 5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_UNEXPECTED_SCATTER",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_UNEXPECTED_SCATTER_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_UNEXPECTED_SCATTER_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_UNEXPECTED_SCATTER_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_UNEXPECTED_SCATTER_QW,
      ._desc = "A scatter command was received before the reduction has completed or receipt of a scatter while executing a scatter (",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DFLIT_SBE",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_DFLIT_SBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_DFLIT_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_DFLIT_SBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_DFLIT_SBE_QW,
      ._desc = "Data flit SECDED detected single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DFLIT_MBE",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_DFLIT_MBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_DFLIT_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_DFLIT_MBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_DFLIT_MBE_QW,
      ._desc = "Multi bit error while performing SECDED of data flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PROTECTION_VIOLATION",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_PROTECTION_VIOLATION_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_PROTECTION_VIOLATION_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_PROTECTION_VIOLATION_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_PROTECTION_VIOLATION_QW,
      ._desc = "A new request was received in which it's pkey did not match the pkey configured for this virtual CE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_UNEXPECTED_JOIN",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_UNEXPECTED_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_UNEXPECTED_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_UNEXPECTED_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_UNEXPECTED_JOIN_QW,
      ._desc = "The type of join for this child_id is checked against the type defined for this child in the configuration MMRs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DUPLICATE_JOIN",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_DUPLICATE_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_DUPLICATE_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_DUPLICATE_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_DUPLICATE_JOIN_QW,
      ._desc = "Indicates the child_id for a new request has previously joined a reduction on this virtual CE and the results of that reduction have not been sent via a scatter or PUT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FIRST_OP_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_FIRST_OP_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_FIRST_OP_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_FIRST_OP_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_FIRST_OP_NOT_MATCH_QW,
      ._desc = "Received a join, but the operation did not match operation received from the first child that joined the collective for this reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FIRST_CNT_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_FIRST_CNT_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_FIRST_CNT_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_FIRST_CNT_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_FIRST_CNT_NOT_MATCH_QW,
      ._desc = "Received a join, but the cnt_bm field did not match the one received by the first child that entered this reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MISMATCH_ERR",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_MISMATCH_ERR_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_MISMATCH_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_MISMATCH_ERR_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_MISMATCH_ERR_QW,
      ._desc = "Received a join, but the reduction id did not match the one received by the first child that joined this reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_OP_INDX_REG_PC",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_OP_INDX_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_OP_INDX_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_OP_INDX_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_OP_INDX_REG_PC_QW,
      ._desc = "An internal parity error was detected in operand/index register",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_JL_REG_PC",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_I_JL_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_I_JL_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_I_JL_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_I_JL_REG_PC_QW,
      ._desc = "An internal parity error detected in the joinlist register",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_CE_ERR_FLG_1_LO_CE_UNUSED_0_BP,
      ._mask = AR_NIC_CE_ERR_FLG_1_LO_CE_UNUSED_0_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA & AR_NIC_CE_ERR_FLG_1_LO_CE_UNUSED_0_MASK,
      ._index = AR_NIC_CE_ERR_FLG_1_LO_CE_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_detail[] = {
    { ._name = "Q_ANOTHER_CE_NPT_SB",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_Q_ANOTHER_CE_NPT_SB_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_Q_ANOTHER_CE_NPT_SB_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_Q_ANOTHER_CE_NPT_SB_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_Q_ANOTHER_CE_NPT_SB_QW,
      ._desc = "CE to NPT response sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ANOTHER_CE_NPT",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_Q_ANOTHER_CE_NPT_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_Q_ANOTHER_CE_NPT_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_Q_ANOTHER_CE_NPT_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_Q_ANOTHER_CE_NPT_QW,
      ._desc = "CE to NPT response output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_detail[] = {
    { ._name = "Q_ANOTHER_CE_NPT",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_Q_ANOTHER_CE_NPT_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_Q_ANOTHER_CE_NPT_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_Q_ANOTHER_CE_NPT_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_Q_ANOTHER_CE_NPT_QW,
      ._desc = "CE to NPT response output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data2_cclk_2_lo_ce_detail[] = {
    { ._name = "Q_ANOTHER_CE_NPT",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_Q_ANOTHER_CE_NPT_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_Q_ANOTHER_CE_NPT_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_Q_ANOTHER_CE_NPT_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_Q_ANOTHER_CE_NPT_QW,
      ._desc = "CE to NPT response output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_detail[] = {
    { ._name = "Q_SB_SG2",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_Q_SB_SG2_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_Q_SB_SG2_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_Q_SB_SG2_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_Q_SB_SG2_QW,
      ._desc = "flit sideband to match q_flit1 timing",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_FLIT_SG2",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_Q_FLIT_SG2_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_Q_FLIT_SG2_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_Q_FLIT_SG2_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_Q_FLIT_SG2_QW,
      ._desc = "corrected flit out of RAT FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_detail[] = {
    { ._name = "Q_FLIT_SG2",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_Q_FLIT_SG2_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_Q_FLIT_SG2_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_Q_FLIT_SG2_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_Q_FLIT_SG2_QW,
      ._desc = "corrected flit out of RAT FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data3_cclk_3_lo_ce_detail[] = {
    { ._name = "Q_FLIT_SG2",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_Q_FLIT_SG2_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_Q_FLIT_SG2_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_Q_FLIT_SG2_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_Q_FLIT_SG2_QW,
      ._desc = "corrected flit out of RAT FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_detail[] = {
    { ._name = "N9B0_137",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_N9B0_137_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_N9B0_137_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_N9B0_137_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_N9B0_137_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_FLIT4REDENGN_134_72",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_R_Q_FLIT4REDENGN_134_72_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_R_Q_FLIT4REDENGN_134_72_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_R_Q_FLIT4REDENGN_134_72_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_R_Q_FLIT4REDENGN_134_72_QW,
      ._desc = "flit sent to joinlist, and operand/index fifo's of redengn",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_detail[] = {
    { ._name = "R_Q_FLIT4REDENGN_134_72",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_R_Q_FLIT4REDENGN_134_72_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_R_Q_FLIT4REDENGN_134_72_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_R_Q_FLIT4REDENGN_134_72_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_R_Q_FLIT4REDENGN_134_72_QW,
      ._desc = "flit sent to joinlist, and operand/index fifo's of redengn",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_FLIT4REDENGN_61_0",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_R_Q_FLIT4REDENGN_61_0_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_R_Q_FLIT4REDENGN_61_0_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_R_Q_FLIT4REDENGN_61_0_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_R_Q_FLIT4REDENGN_61_0_QW,
      ._desc = "flit sent to joinlist, and operand/index fifo's of redengn",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data4_cclk_4_lo_ce_detail[] = {
    { ._name = "R_Q_FLIT4REDENGN_61_0",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_FLIT4REDENGN_61_0_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_FLIT4REDENGN_61_0_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_FLIT4REDENGN_61_0_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_FLIT4REDENGN_61_0_QW,
      ._desc = "flit sent to joinlist, and operand/index fifo's of redengn",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_HD_VAL",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_HD_VAL_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_HD_VAL_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_HD_VAL_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_HD_VAL_QW,
      ._desc = "valid indicating to save the operand and index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_HD_CNT",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_HD_CNT_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_HD_CNT_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_HD_CNT_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_HD_CNT_QW,
      ._desc = "valid indicating to save the joinlist data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ADV_SCAT_CNT",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_ADV_SCAT_CNT_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_ADV_SCAT_CNT_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_ADV_SCAT_CNT_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_R_Q_ADV_SCAT_CNT_QW,
      ._desc = "advance the count, although neither val or cnt are active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_detail[] = {
    { ._name = "N18B0_128",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_N18B0_128_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_N18B0_128_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_N18B0_128_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_N18B0_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_detail[] = {
    { ._name = "Q_VC3_WHOS_IN",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_Q_VC3_WHOS_IN_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_Q_VC3_WHOS_IN_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_Q_VC3_WHOS_IN_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_Q_VC3_WHOS_IN_QW,
      ._desc = "each bit position indicates a child that has joined virtual CE 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_WHOS_IN",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_Q_VC2_WHOS_IN_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_Q_VC2_WHOS_IN_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_Q_VC2_WHOS_IN_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_Q_VC2_WHOS_IN_QW,
      ._desc = "each bit position indicates a child that has joined virtual CE 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data5_cclk_5_lo_ce_detail[] = {
    { ._name = "Q_VC1_WHOS_IN",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_Q_VC1_WHOS_IN_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_Q_VC1_WHOS_IN_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_Q_VC1_WHOS_IN_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_Q_VC1_WHOS_IN_QW,
      ._desc = "each bit position indicates a child that has joined virtual CE 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_WHOS_IN",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_Q_VC0_WHOS_IN_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_Q_VC0_WHOS_IN_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_Q_VC0_WHOS_IN_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_Q_VC0_WHOS_IN_QW,
      ._desc = "each bit position indicates a child that has joined virtual CE 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_detail[] = {
    { ._name = "N46B0_100",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_N46B0_100_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_N46B0_100_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_N46B0_100_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_N46B0_100_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_detail[] = {
    { ._name = "N46B0_100",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_N46B0_100_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_N46B0_100_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_N46B0_100_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_N46B0_100_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_FIRST_RED_ID",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_Q_VC0_FIRST_RED_ID_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_Q_VC0_FIRST_RED_ID_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_Q_VC0_FIRST_RED_ID_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_Q_VC0_FIRST_RED_ID_QW,
      ._desc = "The reduction ID captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data6_cclk_6_lo_ce_detail[] = {
    { ._name = "Q_VC0_FIRST_RED_ID",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_Q_VC0_FIRST_RED_ID_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_Q_VC0_FIRST_RED_ID_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_Q_VC0_FIRST_RED_ID_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_Q_VC0_FIRST_RED_ID_QW,
      ._desc = "The reduction ID captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC0_FIRST_OP",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC0_FIRST_OP_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC0_FIRST_OP_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC0_FIRST_OP_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC0_FIRST_OP_QW,
      ._desc = "The operation captured on the first join of a reduction {OP, op_modifier}",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "N1B0_53",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_N1B0_53_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_N1B0_53_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_N1B0_53_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_N1B0_53_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC0_FIRST_CNT",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC0_FIRST_CNT_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC0_FIRST_CNT_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC0_FIRST_CNT_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC0_FIRST_CNT_QW,
      ._desc = "The cnt_bm captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_FIRST_RED_ID",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_Q_VC1_FIRST_RED_ID_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_Q_VC1_FIRST_RED_ID_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_Q_VC1_FIRST_RED_ID_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_Q_VC1_FIRST_RED_ID_QW,
      ._desc = "The reduction ID captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC1_FIRST_OP",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC1_FIRST_OP_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC1_FIRST_OP_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC1_FIRST_OP_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC1_FIRST_OP_QW,
      ._desc = "The operation captured on the first join of a reduction {OP, op_modifier}",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "N1B0_3",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_N1B0_3_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_N1B0_3_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_N1B0_3_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_N1B0_3_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC1_FIRST_CNT",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC1_FIRST_CNT_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC1_FIRST_CNT_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC1_FIRST_CNT_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_R_Q_VC1_FIRST_CNT_QW,
      ._desc = "The cnt_bm captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_detail[] = {
    { ._name = "N46B0_100",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_N46B0_100_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_N46B0_100_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_N46B0_100_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_N46B0_100_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_detail[] = {
    { ._name = "N46B0_100",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_N46B0_100_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_N46B0_100_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_N46B0_100_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_N46B0_100_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_FIRST_RED_ID",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_Q_VC2_FIRST_RED_ID_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_Q_VC2_FIRST_RED_ID_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_Q_VC2_FIRST_RED_ID_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_Q_VC2_FIRST_RED_ID_QW,
      ._desc = "The reduction ID captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_input_data7_cclk_7_lo_ce_detail[] = {
    { ._name = "Q_VC2_FIRST_RED_ID",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_Q_VC2_FIRST_RED_ID_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_Q_VC2_FIRST_RED_ID_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_Q_VC2_FIRST_RED_ID_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_Q_VC2_FIRST_RED_ID_QW,
      ._desc = "The reduction ID captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC2_FIRST_OP",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC2_FIRST_OP_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC2_FIRST_OP_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC2_FIRST_OP_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC2_FIRST_OP_QW,
      ._desc = "The operation captured on the first join of a reduction {OP,_op_modifier}",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "N1B0_53",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_N1B0_53_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_N1B0_53_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_N1B0_53_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_N1B0_53_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC2_FIRST_CNT",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC2_FIRST_CNT_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC2_FIRST_CNT_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC2_FIRST_CNT_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC2_FIRST_CNT_QW,
      ._desc = "The cnt_bm captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_FIRST_RED_ID",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_Q_VC3_FIRST_RED_ID_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_Q_VC3_FIRST_RED_ID_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_Q_VC3_FIRST_RED_ID_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_Q_VC3_FIRST_RED_ID_QW,
      ._desc = "The reduction ID captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC3_FIRST_OP",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC3_FIRST_OP_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC3_FIRST_OP_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC3_FIRST_OP_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC3_FIRST_OP_QW,
      ._desc = "The operation captured on the first join of a reduction {OP,_op_modifier}",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "N1B0_3",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_N1B0_3_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_N1B0_3_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_N1B0_3_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_N1B0_3_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC3_FIRST_CNT",
      ._bpos = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC3_FIRST_CNT_BP,
      ._mask = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC3_FIRST_CNT_MASK,
      ._rval = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTDATA & AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC3_FIRST_CNT_MASK,
      ._index = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_R_Q_VC3_FIRST_CNT_QW,
      ._desc = "The cnt_bm captured on the first join of a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_detail[] = {
    { ._name = "INDEXB1",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_INDEXB1_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_INDEXB1_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_INDEXB1_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_INDEXB1_QW,
      ._desc = "operand1 index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_detail[] = {
    { ._name = "INDEXB1",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_INDEXB1_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_INDEXB1_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_INDEXB1_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_INDEXB1_QW,
      ._desc = "operand1 index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INDEXB2",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_Q_INDEXB2_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_Q_INDEXB2_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_Q_INDEXB2_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_Q_INDEXB2_QW,
      ._desc = "operand 2 index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data7_cclk_8_lo_ce_detail[] = {
    { ._name = "Q_INDEXB2",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_INDEXB2_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_INDEXB2_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_INDEXB2_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_INDEXB2_QW,
      ._desc = "operand 2 index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DBL_SFT_RR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_DBL_SFT_RR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_DBL_SFT_RR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_DBL_SFT_RR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_DBL_SFT_RR_QW,
      ._desc = "used when doing a two operand operation for selection of index versus operand data inputs to ALU",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FP_EXCPT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_R_FP_EXCPT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_R_FP_EXCPT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_R_FP_EXCPT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_R_FP_EXCPT_QW,
      ._desc = "floating point exceptions",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_JRD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_VC2_JRD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_VC2_JRD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_VC2_JRD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_VC2_JRD_ADDR_QW,
      ._desc = "joinlist2 read address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_JRD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_VC3_JRD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_VC3_JRD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_VC3_JRD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_Q_VC3_JRD_ADDR_QW,
      ._desc = "joinlist3 read address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_detail[] = {
    { ._name = "Q_OSFT_RR0",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_OSFT_RR0_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_OSFT_RR0_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_OSFT_RR0_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_OSFT_RR0_QW,
      ._desc = "Valid shift register position 0 for operand data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ISFT_RR0",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_ISFT_RR0_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_ISFT_RR0_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_ISFT_RR0_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_ISFT_RR0_QW,
      ._desc = "Valid shift register position 0 for index data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_OPN_RBN",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_OPN_RBN_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_OPN_RBN_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_OPN_RBN_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_OPN_RBN_QW,
      ._desc = "round robin counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_IDX_RBN",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_IDX_RBN_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_IDX_RBN_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_IDX_RBN_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_IDX_RBN_QW,
      ._desc = "round robin counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_OPND_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_VC0_OPND_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_VC0_OPND_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_VC0_OPND_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_Q_VC0_OPND_CNT_QW,
      ._desc = "Used to determine joins complete when this count == the count configured for virtual CE 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_detail[] = {
    { ._name = "Q_VC0_OPND_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC0_OPND_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC0_OPND_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC0_OPND_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC0_OPND_CNT_QW,
      ._desc = "Used to determine joins complete when this count == the count configured for virtual CE 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_OPND_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC1_OPND_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC1_OPND_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC1_OPND_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC1_OPND_CNT_QW,
      ._desc = "Used to determine joins complete when this count == the count configured for virtual CE 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_OPND_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC2_OPND_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC2_OPND_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC2_OPND_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC2_OPND_CNT_QW,
      ._desc = "Used to determine joins complete when this count == the count configured for virtual CE 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_OPND_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC3_OPND_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC3_OPND_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC3_OPND_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_VC3_OPND_CNT_QW,
      ._desc = "Used to determine joins complete when this count == the count configured for virtual CE 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LOJC",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_LOJC_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_LOJC_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_LOJC_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_LOJC_QW,
      ._desc = "Set up for operand done when joins are complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LIJC",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_LIJC_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_LIJC_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_LIJC_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_Q_LIJC_QW,
      ._desc = "Set up for index done when joins are complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC0_JOIN_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC0_JOIN_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC0_JOIN_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC0_JOIN_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC0_JOIN_CNT_QW,
      ._desc = "Virtual CE 0 join count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC1_JOIN_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC1_JOIN_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC1_JOIN_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC1_JOIN_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC1_JOIN_CNT_QW,
      ._desc = "Virtual CE 1 join count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC2_JOIN_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC2_JOIN_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC2_JOIN_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC2_JOIN_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC2_JOIN_CNT_QW,
      ._desc = "Virtual CE 2 join count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_VC3_JOIN_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC3_JOIN_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC3_JOIN_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC3_JOIN_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_VC3_JOIN_CNT_QW,
      ._desc = "Virtual CE 3 join count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ODONE0",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE0_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE0_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE0_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE0_QW,
      ._desc = "signal operand results ready for virtual CE 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ODONE1",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE1_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE1_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE1_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE1_QW,
      ._desc = "signal operand results ready for virtual CE 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ODONE2",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE2_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE2_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE2_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE2_QW,
      ._desc = "signal operand results ready for virtual CE 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ODONE3",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE3_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE3_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE3_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_ODONE3_QW,
      ._desc = "signal operand results ready for virtual CE 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_IDONE0",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE0_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE0_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE0_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE0_QW,
      ._desc = "signal index results ready for virtual CE 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_IDONE1",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE1_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE1_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE1_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE1_QW,
      ._desc = "signal index results ready for virtual CE 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_IDONE2",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE2_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE2_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE2_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE2_QW,
      ._desc = "signal index results ready for virtual CE 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_IDONE3",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE3_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE3_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE3_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_R_Q_IDONE3_QW,
      ._desc = "signal index results ready for virtual CE 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ALU_RESULT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_ALU_RESULT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_ALU_RESULT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_ALU_RESULT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_ALU_RESULT_QW,
      ._desc = "output of ALU",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data6_cclk_9_lo_ce_detail[] = {
    { ._name = "ALU_RESULT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_ALU_RESULT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_ALU_RESULT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_ALU_RESULT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_ALU_RESULT_QW,
      ._desc = "output of ALU",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEL_INDX1",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_SEL_INDX1_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_SEL_INDX1_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_SEL_INDX1_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_SEL_INDX1_QW,
      ._desc = "ALU output sel_in1 for min or max operation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEL_EQ",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_SEL_EQ_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_SEL_EQ_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_SEL_EQ_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_SEL_EQ_QW,
      ._desc = "ALU output sel_eq, from min or max operation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INDX1GTR2",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_Q_INDX1GTR2_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_Q_INDX1GTR2_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_Q_INDX1GTR2_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_Q_INDX1GTR2_QW,
      ._desc = "min or max and index1 > index2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_detail[] = {
    { ._name = "Q_ALU_OPRND_1",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_Q_ALU_OPRND_1_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_Q_ALU_OPRND_1_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_Q_ALU_OPRND_1_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_Q_ALU_OPRND_1_QW,
      ._desc = "op1 input to ALU",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_detail[] = {
    { ._name = "Q_ALU_OPRND_1",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_Q_ALU_OPRND_1_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_Q_ALU_OPRND_1_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_Q_ALU_OPRND_1_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_Q_ALU_OPRND_1_QW,
      ._desc = "op1 input to ALU",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ALU_OPRND_2",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_Q_ALU_OPRND_2_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_Q_ALU_OPRND_2_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_Q_ALU_OPRND_2_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_Q_ALU_OPRND_2_QW,
      ._desc = "op2 input to ALU",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data5_cclk_a_lo_ce_detail[] = {
    { ._name = "Q_ALU_OPRND_2",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_ALU_OPRND_2_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_ALU_OPRND_2_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_ALU_OPRND_2_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_ALU_OPRND_2_QW,
      ._desc = "op2 input to ALU",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ALU_CMD",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_ALU_CMD_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_ALU_CMD_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_ALU_CMD_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_ALU_CMD_QW,
      ._desc = "ALU operation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_MODE32",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_MODE32_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_MODE32_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_MODE32_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_MODE32_QW,
      ._desc = "32 bit mode operation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RND_MODE",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_RND_MODE_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_RND_MODE_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_RND_MODE_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_RND_MODE_QW,
      ._desc = "rounding mode for floating point operations",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_MM_MOD_0",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_MM_MOD_0_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_MM_MOD_0_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_MM_MOD_0_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_MM_MOD_0_QW,
      ._desc = "min/max modifier (ce_op_mod)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SELO1_RBN",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_SELO1_RBN_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_SELO1_RBN_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_SELO1_RBN_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_SELO1_RBN_QW,
      ._desc = "selects partial operand/index for alu_oprnd_1 input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "N1B0_6",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_N1B0_6_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_N1B0_6_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_N1B0_6_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_N1B0_6_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SELI1_RBN",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_SELI1_RBN_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_SELI1_RBN_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_SELI1_RBN_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_SELI1_RBN_QW,
      ._desc = "selects partial index for index1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RES_IDX_SEL1",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_RES_IDX_SEL1_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_RES_IDX_SEL1_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_RES_IDX_SEL1_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_Q_RES_IDX_SEL1_QW,
      ._desc = "select partial index or operand for sel_op1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_detail[] = {
    { ._name = "Q_OPND_WE",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_OPND_WE_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_OPND_WE_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_OPND_WE_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_OPND_WE_QW,
      ._desc = "write enable for operand dpregs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_HDR_CNT",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_HDR_CNT_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_HDR_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_HDR_CNT_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_HDR_CNT_QW,
      ._desc = "increments the join count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INDX_WE",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_INDX_WE_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_INDX_WE_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_INDX_WE_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_INDX_WE_QW,
      ._desc = "write enable for index dpregs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_JWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_VC0_JWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_VC0_JWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_VC0_JWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_VC0_JWR_ADDR_QW,
      ._desc = "write address to dpreg joinlist0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_JWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_VC1_JWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_VC1_JWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_VC1_JWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_Q_VC1_JWR_ADDR_QW,
      ._desc = "write address to dpreg joinlist1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_detail[] = {
    { ._name = "Q_VC1_JWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_JWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_JWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_JWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_JWR_ADDR_QW,
      ._desc = "write address to dpreg joinlist1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_JWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_JWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_JWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_JWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_JWR_ADDR_QW,
      ._desc = "write address to dpreg joinlist2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_JWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_JWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_JWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_JWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_JWR_ADDR_QW,
      ._desc = "write address to dpreg joinlist3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_OWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC0_OWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC0_OWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC0_OWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC0_OWR_ADDR_QW,
      ._desc = "write address to dpreg opnd0_op0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_OWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_OWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_OWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_OWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_OWR_ADDR_QW,
      ._desc = "write address to dpreg opnd1_op2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_OWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_OWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_OWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_OWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_OWR_ADDR_QW,
      ._desc = "write address to dpreg opnd2_op4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_OWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_OWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_OWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_OWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_OWR_ADDR_QW,
      ._desc = "write address to dpreg opnd3_op6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_IWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC0_IWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC0_IWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC0_IWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC0_IWR_ADDR_QW,
      ._desc = "write address to dpreg idx0_op1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_IWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_IWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_IWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_IWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC1_IWR_ADDR_QW,
      ._desc = "write address to dpreg idx1_op3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_IWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_IWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_IWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_IWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC2_IWR_ADDR_QW,
      ._desc = "write address to dpreg idx2_op5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_IWR_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_IWR_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_IWR_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_IWR_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_VC3_IWR_ADDR_QW,
      ._desc = "write address to dpreg idx3_op7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_OWIAT4JOINC",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_OWIAT4JOINC_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_OWIAT4JOINC_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_OWIAT4JOINC_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_OWIAT4JOINC_QW,
      ._desc = "Not waiting for the first join of operand data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_IWAIT4JOINC",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_IWAIT4JOINC_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_IWAIT4JOINC_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_IWAIT4JOINC_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_IWAIT4JOINC_QW,
      ._desc = "Not waiting for the first join of index data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INIT_OPND",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_INIT_OPND_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_INIT_OPND_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_INIT_OPND_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_Q_INIT_OPND_QW,
      ._desc = "save the first operand in the partial operand result latches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_redengn_data0_cclk_b_lo_ce_detail[] = {
    { ._name = "Q_INIT_OPND",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INIT_OPND_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INIT_OPND_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INIT_OPND_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INIT_OPND_QW,
      ._desc = "save the first operand in the partial operand result latches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_OPND_VAL",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_OPND_VAL_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_OPND_VAL_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_OPND_VAL_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_OPND_VAL_QW,
      ._desc = "operand dpreg has valid data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INIT_INDX",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INIT_INDX_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INIT_INDX_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INIT_INDX_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INIT_INDX_QW,
      ._desc = "save the first index in the partial index result latches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INDX_VAL",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INDX_VAL_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INDX_VAL_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INDX_VAL_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_INDX_VAL_QW,
      ._desc = "index dpreg has valid data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_ORD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_ORD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_ORD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_ORD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_ORD_ADDR_QW,
      ._desc = "read address for dpreg opnd0_op0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_ORD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_ORD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_ORD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_ORD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_ORD_ADDR_QW,
      ._desc = "read address for dpreg opnd1_op2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_ORD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC2_ORD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC2_ORD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC2_ORD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC2_ORD_ADDR_QW,
      ._desc = "read address for dpreg opnd2_op4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_ORD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC3_ORD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC3_ORD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC3_ORD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC3_ORD_ADDR_QW,
      ._desc = "read address for dpreg opnd3_op6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_IRD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_IRD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_IRD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_IRD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_IRD_ADDR_QW,
      ._desc = "read address for dpreg idx0_op1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_IRD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_IRD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_IRD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_IRD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_IRD_ADDR_QW,
      ._desc = "read address for dpreg idx1_op3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_IRD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC2_IRD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC2_IRD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC2_IRD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC2_IRD_ADDR_QW,
      ._desc = "read address for dpreg idx2_op5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_IRD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC3_IRD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC3_IRD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC3_IRD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC3_IRD_ADDR_QW,
      ._desc = "read address for dpreg idx3_op7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_JRD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_JRD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_JRD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_JRD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC0_JRD_ADDR_QW,
      ._desc = "joinlist0 read address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_JRD_ADDR",
      ._bpos = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_JRD_ADDR_BP,
      ._mask = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_JRD_ADDR_MASK,
      ._rval = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA & AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_JRD_ADDR_MASK,
      ._index = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_Q_VC1_JRD_ADDR_QW,
      ._desc = "joinlist1 read address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_detail[] = {
    { ._name = "N36B0_110",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_N36B0_110_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_N36B0_110_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_N36B0_110_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_N36B0_110_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_detail[] = {
    { ._name = "N36B0_110",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_N36B0_110_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_N36B0_110_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_N36B0_110_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_N36B0_110_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_HD_VAL",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_HD_VAL_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_HD_VAL_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_HD_VAL_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_HD_VAL_QW,
      ._desc = "used to save selected information in the CCW",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SCAT_INITD2",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_SCAT_INITD2_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_SCAT_INITD2_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_SCAT_INITD2_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_SCAT_INITD2_QW,
      ._desc = "scatter initialize and a double operand operation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PART_DONE",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_PART_DONE_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_PART_DONE_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_PART_DONE_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_PART_DONE_QW,
      ._desc = "if a double operand or a min/max operation this is used to determine when both are completed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RED_DONE",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_RED_DONE_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_RED_DONE_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_RED_DONE_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_RED_DONE_QW,
      ._desc = "indicates which virtual channel has completed a reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ROOT_INIT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_R_Q_ROOT_INIT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_R_Q_ROOT_INIT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_R_Q_ROOT_INIT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_R_Q_ROOT_INIT_QW,
      ._desc = "set when virtual CE is configured as a root and reduction is done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SD_VAL",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_SD_VAL_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_SD_VAL_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_SD_VAL_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_SD_VAL_QW,
      ._desc = "scat data valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DFLIT_WE_DLY",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_DFLIT_WE_DLY_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_DFLIT_WE_DLY_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_DFLIT_WE_DLY_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_DFLIT_WE_DLY_QW,
      ._desc = "indicates a valid data flit for output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_HFLIT_WE_DLY",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_HFLIT_WE_DLY_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_HFLIT_WE_DLY_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_HFLIT_WE_DLY_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_HFLIT_WE_DLY_QW,
      ._desc = "indicates a valid header flit for output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_FLIT_CNT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_FLIT_CNT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_FLIT_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_FLIT_CNT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_FLIT_CNT_QW,
      ._desc = "count the number of tarb requests made and not acknowledged",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_SCAT_CNT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC0_SCAT_CNT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC0_SCAT_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC0_SCAT_CNT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC0_SCAT_CNT_QW,
      ._desc = "count the number scatter/PUT requests selected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_SCAT_CNT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC1_SCAT_CNT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC1_SCAT_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC1_SCAT_CNT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC1_SCAT_CNT_QW,
      ._desc = "count the number scatter/PUT requests selected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_SCAT_CNT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC2_SCAT_CNT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC2_SCAT_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC2_SCAT_CNT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_Q_VC2_SCAT_CNT_QW,
      ._desc = "count the number scatter/PUT requests selected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data19_cclk_c_lo_ce_detail[] = {
    { ._name = "Q_VC2_SCAT_CNT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_CNT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_CNT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_CNT_QW,
      ._desc = "count the number scatter/PUT requests selected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_SCAT_CNT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_CNT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_CNT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_CNT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_CNT_QW,
      ._desc = "count the number scatter/PUT requests selected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_SCAT_END",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_END_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_END_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_END_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_END_QW,
      ._desc = "signal scatter end when scat cnt == join cnt",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_SCAT_END",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_END_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_END_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_END_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_END_QW,
      ._desc = "signal scatter end when scat cnt == join cnt",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_SCAT_END",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_END_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_END_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_END_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_END_QW,
      ._desc = "signal scatter end when scat cnt == join cnt",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_SCAT_END",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_END_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_END_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_END_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_END_QW,
      ._desc = "signal scatter end when scat cnt == join cnt",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_CMPLT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_CMPLT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_CMPLT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_CMPLT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_CMPLT_QW,
      ._desc = "active when scat_cnt == join_cnt or red_done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_CMPLT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_CMPLT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_CMPLT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_CMPLT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_CMPLT_QW,
      ._desc = "active when scat_cnt == join_cnt or red_done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_CMPLT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_CMPLT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_CMPLT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_CMPLT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_CMPLT_QW,
      ._desc = "active when scat_cnt == join_cnt or red_done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_CMPLT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_CMPLT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_CMPLT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_CMPLT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_CMPLT_QW,
      ._desc = "active when scat_cnt == join_cnt or red_done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_SCAT_IP",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_IP_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_IP_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_IP_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_IP_QW,
      ._desc = "active with scatter init until scat_done indicated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_SCAT_IP",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_IP_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_IP_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_IP_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_IP_QW,
      ._desc = "active with scatter init until scat_done indicated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_SCAT_IP",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_IP_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_IP_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_IP_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_IP_QW,
      ._desc = "active with scatter init until scat_done indicated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_SCAT_IP",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_IP_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_IP_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_IP_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_IP_QW,
      ._desc = "active with scatter init until scat_done indicated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_SCAT_INPROC",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_INPROC_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_INPROC_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_INPROC_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_SCAT_INPROC_QW,
      ._desc = "active with scatter init until scatter done indicated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_SCAT_INPROC",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_INPROC_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_INPROC_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_INPROC_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_SCAT_INPROC_QW,
      ._desc = "active with scatter init until scatter done indicated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_SCAT_INPROC",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_INPROC_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_INPROC_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_INPROC_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_SCAT_INPROC_QW,
      ._desc = "active with scatter init until scatter done indicated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_SCAT_INPROC",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_INPROC_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_INPROC_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_INPROC_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_SCAT_INPROC_QW,
      ._desc = "active with scatter init until scatter done indicated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_SCAT_DONE",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_R_Q_SCAT_DONE_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_R_Q_SCAT_DONE_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_R_Q_SCAT_DONE_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_R_Q_SCAT_DONE_QW,
      ._desc = "scatter completed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC0_FIRST_REQ",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_FIRST_REQ_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_FIRST_REQ_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_FIRST_REQ_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC0_FIRST_REQ_QW,
      ._desc = "active for first request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC1_FIRST_REQ",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_FIRST_REQ_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_FIRST_REQ_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_FIRST_REQ_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC1_FIRST_REQ_QW,
      ._desc = "active for first request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC2_FIRST_REQ",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_FIRST_REQ_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_FIRST_REQ_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_FIRST_REQ_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC2_FIRST_REQ_QW,
      ._desc = "active for first request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VC3_FIRST_REQ",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_FIRST_REQ_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_FIRST_REQ_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_FIRST_REQ_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_VC3_FIRST_REQ_QW,
      ._desc = "active for first request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LPN",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_LPN_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_LPN_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_LPN_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_LPN_QW,
      ._desc = "latched output of priority network selection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RND_RBN",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_RND_RBN_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_RND_RBN_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_RND_RBN_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_RND_RBN_QW,
      ._desc = "rolling counter to control priority network selection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SEL2_1",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL2_1_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL2_1_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL2_1_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL2_1_QW,
      ._desc = "decode of select bits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SEL2_2",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL2_2_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL2_2_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL2_2_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL2_2_QW,
      ._desc = "delay of sel2_1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "D2_SEL",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_D2_SEL_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_D2_SEL_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_D2_SEL_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_D2_SEL_QW,
      ._desc = "delay of sel2_2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_STALL4FLIT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_STALL4FLIT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_STALL4FLIT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_STALL4FLIT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_STALL4FLIT_QW,
      ._desc = "shift register used to stall any new requests from selection until all flits for the current selection have been forwarded",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SEL1_1",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL1_1_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL1_1_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL1_1_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL1_1_QW,
      ._desc = "decode of select bits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SEL1_2",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL1_2_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL1_2_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL1_2_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL1_2_QW,
      ._desc = "delay sel1_2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SEL21",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL21_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL21_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL21_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL21_QW,
      ._desc = "sel1_2 and sel2_2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SEL_SYNCCMPLT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL_SYNCCMPLT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL_SYNCCMPLT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL_SYNCCMPLT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL_SYNCCMPLT_QW,
      ._desc = "developed for inner join or last request of a scatter to select out the sync complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SEL_SYNCCMPLTD",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL_SYNCCMPLTD_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL_SYNCCMPLTD_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL_SYNCCMPLTD_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL_SYNCCMPLTD_QW,
      ._desc = "delayed sel_synccmpltd to control selection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_HFLIT_WE",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_HFLIT_WE_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_HFLIT_WE_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_HFLIT_WE_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_HFLIT_WE_QW,
      ._desc = "control dat4pgen",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DFLIT_WE",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_DFLIT_WE_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_DFLIT_WE_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_DFLIT_WE_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_DFLIT_WE_QW,
      ._desc = "control dat4pgen",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_HDR_SEL",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_HDR_SEL_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_HDR_SEL_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_HDR_SEL_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_HDR_SEL_QW,
      ._desc = "selects header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SEL0",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL0_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL0_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL0_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_SEL0_QW,
      ._desc = "select hdr_sel value or hold for dat_sel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DAT_SEL",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_DAT_SEL_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_DAT_SEL_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_DAT_SEL_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_DAT_SEL_QW,
      ._desc = "controls which data flit is selected for dat4pgen",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_TAILON1",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAILON1_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAILON1_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAILON1_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAILON1_QW,
      ._desc = "set tail if this is single data flit request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_TAILON2",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAILON2_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAILON2_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAILON2_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAILON2_QW,
      ._desc = "set tail if this is a two data flit request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_TAIL",
      ._bpos = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAIL_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAIL_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAIL_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_Q_TAIL_QW,
      ._desc = "tail indicator as input to tarb dpreg",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_detail[] = {
    { ._name = "N6B0_140",
      ._bpos = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_N6B0_140_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_N6B0_140_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_N6B0_140_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_N6B0_140_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DAT4PGEN",
      ._bpos = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_Q_DAT4PGEN_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_Q_DAT4PGEN_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_Q_DAT4PGEN_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_Q_DAT4PGEN_QW,
      ._desc = "header or data flits prior to parity and ECC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_detail[] = {
    { ._name = "Q_DAT4PGEN",
      ._bpos = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_Q_DAT4PGEN_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_Q_DAT4PGEN_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_Q_DAT4PGEN_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_Q_DAT4PGEN_QW,
      ._desc = "header or data flits prior to parity and ECC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data18_cclk_d_lo_ce_detail[] = {
    { ._name = "Q_DAT4PGEN",
      ._bpos = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_Q_DAT4PGEN_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_Q_DAT4PGEN_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_Q_DAT4PGEN_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_Q_DAT4PGEN_QW,
      ._desc = "header or data flits prior to parity and ECC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_detail[] = {
    { ._name = "Q_TARB_SB_RELAY",
      ._bpos = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_Q_TARB_SB_RELAY_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_Q_TARB_SB_RELAY_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_Q_TARB_SB_RELAY_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_Q_TARB_SB_RELAY_QW,
      ._desc = "one clock before exit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_TARB_FLIT_RELAY",
      ._bpos = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_Q_TARB_FLIT_RELAY_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_Q_TARB_FLIT_RELAY_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_Q_TARB_FLIT_RELAY_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_Q_TARB_FLIT_RELAY_QW,
      ._desc = "one clock before exit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_detail[] = {
    { ._name = "Q_TARB_FLIT_RELAY",
      ._bpos = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_Q_TARB_FLIT_RELAY_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_Q_TARB_FLIT_RELAY_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_Q_TARB_FLIT_RELAY_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_Q_TARB_FLIT_RELAY_QW,
      ._desc = "one clock before exit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data17_cclk_e_lo_ce_detail[] = {
    { ._name = "Q_TARB_FLIT_RELAY",
      ._bpos = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_Q_TARB_FLIT_RELAY_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_Q_TARB_FLIT_RELAY_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_Q_TARB_FLIT_RELAY_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_Q_TARB_FLIT_RELAY_QW,
      ._desc = "one clock before exit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_detail[] = {
    { ._name = "N14B0_132",
      ._bpos = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_N14B0_132_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_N14B0_132_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_N14B0_132_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_N14B0_132_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SCAT_INIT",
      ._bpos = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_Q_SCAT_INIT_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_Q_SCAT_INIT_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_Q_SCAT_INIT_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_Q_SCAT_INIT_QW,
      ._desc = "initialize scatter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_detail[] = {
    { ._name = "Q_VC2_CCW",
      ._bpos = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_Q_VC2_CCW_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_Q_VC2_CCW_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_Q_VC2_CCW_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_Q_VC2_CCW_QW,
      ._desc = "vc2 collective control word",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data2_cclk_f_lo_ce_detail[] = {
    { ._name = "Q_VC3_CCW",
      ._bpos = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_Q_VC3_CCW_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_Q_VC3_CCW_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_Q_VC3_CCW_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_Q_VC3_CCW_QW,
      ._desc = "vc3 collective control word",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_detail[] = {
    { ._name = "N18B0_128",
      ._bpos = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_N18B0_128_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_N18B0_128_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSTDATA_QW2 & AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_N18B0_128_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_N18B0_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_detail[] = {
    { ._name = "Q_VC0_CCW",
      ._bpos = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_Q_VC0_CCW_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_Q_VC0_CCW_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_RSTDATA_QW1 & AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_Q_VC0_CCW_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_Q_VC0_CCW_QW,
      ._desc = "vc0 collective control word",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_ce_req_data0_cclk_10_lo_ce_detail[] = {
    { ._name = "Q_VC1_CCW",
      ._bpos = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_Q_VC1_CCW_BP,
      ._mask = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_Q_VC1_CCW_MASK,
      ._rval = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_RSTDATA & AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_Q_VC1_CCW_MASK,
      ._index = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_Q_VC1_CCW_QW,
      ._desc = "vc1 collective control word",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_cfg_out_base_detail[] = {
    { ._name = "IS_ROOT",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_IS_ROOT_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_IS_ROOT_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_IS_ROOT_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_IS_ROOT_QW,
      ._desc = "Defines this virtual CE as the collective root",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_PTAG_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_PTAG_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_PTAG_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_PTAG_QW,
      ._desc = "Destination Memory protection tag(Translated by the PTAG Translation Table (PTT) to a PKEY which is used in remote address translation at the destination endpoint",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_DST_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_DST_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_DST_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_DST_QW,
      ._desc = "Destination endpoint",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_DSTID_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_DSTID_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_DSTID_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_DSTID_QW,
      ._desc = "Identifies a particular NIC on the endpoint",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_NTT_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_NTT_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_NTT_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_NTT_QW,
      ._desc = "Set to enable a Node Translation Table lookup (Reference: 9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_SSID_LCQH_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_SSID_LCQH_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_SSID_LCQH_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_SSID_LCQH_QW,
      ._desc = "Completion queue handle to which the local CQE notification is to be sent (Reference: 9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SSID_NSRC",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_SSID_NSRC_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_SSID_NSRC_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_SSID_NSRC_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_SSID_NSRC_QW,
      ._desc = "Notify Source (Reference: 9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RC_2_0",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_RC_2_0_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_RC_2_0_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_RC_2_0_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_RC_2_0_QW,
      ._desc = "Routing control",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_ID",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_CE_ID_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_CE_ID_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_CE_ID_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_CE_ID_QW,
      ._desc = "Defines the virtual CE to use at its parent location",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHILD_ID",
      ._bpos = AR_NIC_CE_CFG_OUT_BASE_CHILD_ID_BP,
      ._mask = AR_NIC_CE_CFG_OUT_BASE_CHILD_ID_MASK,
      ._rval = AR_NIC_CE_CFG_OUT_BASE_RSTDATA & AR_NIC_CE_CFG_OUT_BASE_CHILD_ID_MASK,
      ._index = AR_NIC_CE_CFG_OUT_BASE_CHILD_ID_QW,
      ._desc = "Identifies this as a specific child for the inner_join",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_flg_detail[] = {
    { ._name = "REDENGN_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_FLG_REDENGN_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_FLG_REDENGN_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_REDENGN_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_FLG_REDENGN_OVRFLO_QW,
      ._desc = "One of the 12 reduction engine FIFO's indicated an overfow condition",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RAT_FIFO_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_FLG_RAT_FIFO_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_FLG_RAT_FIFO_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_RAT_FIFO_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_FLG_RAT_FIFO_OVRFLO_QW,
      ._desc = "The RAT sent additional requests even though the input FIFO was full",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "ADDRESS_ERR",
      ._bpos = AR_NIC_CE_ERR_FLG_ADDRESS_ERR_BP,
      ._mask = AR_NIC_CE_ERR_FLG_ADDRESS_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_ADDRESS_ERR_MASK,
      ._index = AR_NIC_CE_ERR_FLG_ADDRESS_ERR_QW,
      ._desc = "Request address bits [5:2] plus the cnt_bm field do not cross a cache line",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MMR_REG_SBE",
      ._bpos = AR_NIC_CE_ERR_FLG_MMR_REG_SBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_MMR_REG_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_MMR_REG_SBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_MMR_REG_SBE_QW,
      ._desc = "single bit error detected from mmr register space, each position represents the virtual CE associated with the error",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "MMR_REG_MBE",
      ._bpos = AR_NIC_CE_ERR_FLG_MMR_REG_MBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_MMR_REG_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_MMR_REG_MBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_MMR_REG_MBE_QW,
      ._desc = "multi-bit error detected from mmr register space, each position represents the virtual CE associated with the error",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "OPERATION_DISABLED",
      ._bpos = AR_NIC_CE_ERR_FLG_OPERATION_DISABLED_BP,
      ._mask = AR_NIC_CE_ERR_FLG_OPERATION_DISABLED_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_OPERATION_DISABLED_MASK,
      ._index = AR_NIC_CE_ERR_FLG_OPERATION_DISABLED_QW,
      ._desc = "The request virtual CE (ce_id) had it's VC_RESET bit active indicating the virtual channel is disabled",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "HEADER_PC",
      ._bpos = AR_NIC_CE_ERR_FLG_HEADER_PC_BP,
      ._mask = AR_NIC_CE_ERR_FLG_HEADER_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_HEADER_PC_MASK,
      ._index = AR_NIC_CE_ERR_FLG_HEADER_PC_QW,
      ._desc = "Parity error was detected on a header",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "HEADER_LSTATUS",
      ._bpos = AR_NIC_CE_ERR_FLG_HEADER_LSTATUS_BP,
      ._mask = AR_NIC_CE_ERR_FLG_HEADER_LSTATUS_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_HEADER_LSTATUS_MASK,
      ._index = AR_NIC_CE_ERR_FLG_HEADER_LSTATUS_QW,
      ._desc = "Indicates a header was received with the Local Node Error Status (lstatus) field other than zero, indicating an error was detected in the path to this CE",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "HEADER_WITH_TAIL",
      ._bpos = AR_NIC_CE_ERR_FLG_HEADER_WITH_TAIL_BP,
      ._mask = AR_NIC_CE_ERR_FLG_HEADER_WITH_TAIL_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_HEADER_WITH_TAIL_MASK,
      ._index = AR_NIC_CE_ERR_FLG_HEADER_WITH_TAIL_QW,
      ._desc = "A header was received with a tail bit active",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "INV_CE_CMD",
      ._bpos = AR_NIC_CE_ERR_FLG_INV_CE_CMD_BP,
      ._mask = AR_NIC_CE_ERR_FLG_INV_CE_CMD_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_INV_CE_CMD_MASK,
      ._index = AR_NIC_CE_ERR_FLG_INV_CE_CMD_QW,
      ._desc = "A header was received with a reqcmd not valid for the CE (9",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "INV_ALU_OP",
      ._bpos = AR_NIC_CE_ERR_FLG_INV_ALU_OP_BP,
      ._mask = AR_NIC_CE_ERR_FLG_INV_ALU_OP_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_INV_ALU_OP_MASK,
      ._index = AR_NIC_CE_ERR_FLG_INV_ALU_OP_QW,
      ._desc = "The reqcmd header field is not a valid CE ALU operation or the ce_op_mod bit in the Collective Control Word is active and op code is not a min or max operation (Table 466 in the AIS and Table 452 in the AIS)",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "INV_CNT_BM",
      ._bpos = AR_NIC_CE_ERR_FLG_INV_CNT_BM_BP,
      ._mask = AR_NIC_CE_ERR_FLG_INV_CNT_BM_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_INV_CNT_BM_MASK,
      ._index = AR_NIC_CE_ERR_FLG_INV_CNT_BM_QW,
      ._desc = "cnt_bm header field specifies a count of the number of 32 bit words of data will follow the header",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "BAD_OPERANDS",
      ._bpos = AR_NIC_CE_ERR_FLG_BAD_OPERANDS_BP,
      ._mask = AR_NIC_CE_ERR_FLG_BAD_OPERANDS_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_BAD_OPERANDS_MASK,
      ._index = AR_NIC_CE_ERR_FLG_BAD_OPERANDS_QW,
      ._desc = "A min or max operation was defined in the reqcmd field of the header, which requires two data flits to follow the header and a cnt_bm value of 5",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "UNEXPECTED_SCATTER",
      ._bpos = AR_NIC_CE_ERR_FLG_UNEXPECTED_SCATTER_BP,
      ._mask = AR_NIC_CE_ERR_FLG_UNEXPECTED_SCATTER_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_UNEXPECTED_SCATTER_MASK,
      ._index = AR_NIC_CE_ERR_FLG_UNEXPECTED_SCATTER_QW,
      ._desc = "A scatter command was received before the reduction has completed or receipt of a scatter while executing a scatter (",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "DFLIT_SBE",
      ._bpos = AR_NIC_CE_ERR_FLG_DFLIT_SBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_DFLIT_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_DFLIT_SBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_DFLIT_SBE_QW,
      ._desc = "Data flit SECDED detected single bit error",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "DFLIT_MBE",
      ._bpos = AR_NIC_CE_ERR_FLG_DFLIT_MBE_BP,
      ._mask = AR_NIC_CE_ERR_FLG_DFLIT_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_DFLIT_MBE_MASK,
      ._index = AR_NIC_CE_ERR_FLG_DFLIT_MBE_QW,
      ._desc = "Multi bit error while performing SECDED of data flit",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "PROTECTION_VIOLATION",
      ._bpos = AR_NIC_CE_ERR_FLG_PROTECTION_VIOLATION_BP,
      ._mask = AR_NIC_CE_ERR_FLG_PROTECTION_VIOLATION_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_PROTECTION_VIOLATION_MASK,
      ._index = AR_NIC_CE_ERR_FLG_PROTECTION_VIOLATION_QW,
      ._desc = "A new request was received in which it's pkey did not match the pkey configured for this virtual CE",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "UNEXPECTED_JOIN",
      ._bpos = AR_NIC_CE_ERR_FLG_UNEXPECTED_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_FLG_UNEXPECTED_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_UNEXPECTED_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_FLG_UNEXPECTED_JOIN_QW,
      ._desc = "The type of join for this child_id is checked against the type defined for this child in the configuration MMRs",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "DUPLICATE_JOIN",
      ._bpos = AR_NIC_CE_ERR_FLG_DUPLICATE_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_FLG_DUPLICATE_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_DUPLICATE_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_FLG_DUPLICATE_JOIN_QW,
      ._desc = "Indicates the child_id for a new request has previously joined a reduction on this virtual CE and the results of that reduction have not been sent via a scatter or PUT",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "FIRST_OP_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_FLG_FIRST_OP_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_FLG_FIRST_OP_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_FIRST_OP_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_FLG_FIRST_OP_NOT_MATCH_QW,
      ._desc = "Received a join, but the operation did not match operation received from the first child that joined the collective for this reduction",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "FIRST_CNT_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_FLG_FIRST_CNT_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_FLG_FIRST_CNT_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_FIRST_CNT_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_FLG_FIRST_CNT_NOT_MATCH_QW,
      ._desc = "Received a join, but the cnt_bm field did not match the one received by the first child that entered this reduction",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MISMATCH_ERR",
      ._bpos = AR_NIC_CE_ERR_FLG_MISMATCH_ERR_BP,
      ._mask = AR_NIC_CE_ERR_FLG_MISMATCH_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_MISMATCH_ERR_MASK,
      ._index = AR_NIC_CE_ERR_FLG_MISMATCH_ERR_QW,
      ._desc = "Received a join, but the reduction id did not match the one received by the first child that joined this reduction",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "OP_INDX_REG_PC",
      ._bpos = AR_NIC_CE_ERR_FLG_OP_INDX_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_FLG_OP_INDX_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_OP_INDX_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_FLG_OP_INDX_REG_PC_QW,
      ._desc = "An internal parity error was detected in operand/index register",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "JL_REG_PC",
      ._bpos = AR_NIC_CE_ERR_FLG_JL_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_FLG_JL_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_JL_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_FLG_JL_REG_PC_QW,
      ._desc = "An internal parity error detected in the joinlist register",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CE_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_CE_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CE_ERR_FLG_RSTDATA & AR_NIC_CE_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_CE_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Not used by CE logic, for diagnostic use only",
      ._type_bitmsk = 0x0000000000100011ull,
      ._access = "RW1,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_clr_detail[] = {
    { ._name = "REDENGN_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_CLR_REDENGN_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_CLR_REDENGN_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_REDENGN_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_CLR_REDENGN_OVRFLO_QW,
      ._desc = "One of the 12 reduction engine FIFO's indicated an overfow condition",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "RAT_FIFO_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_CLR_RAT_FIFO_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_CLR_RAT_FIFO_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_RAT_FIFO_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_CLR_RAT_FIFO_OVRFLO_QW,
      ._desc = "The RAT sent additional requests even though the input FIFO was full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "ADDRESS_ERR",
      ._bpos = AR_NIC_CE_ERR_CLR_ADDRESS_ERR_BP,
      ._mask = AR_NIC_CE_ERR_CLR_ADDRESS_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_ADDRESS_ERR_MASK,
      ._index = AR_NIC_CE_ERR_CLR_ADDRESS_ERR_QW,
      ._desc = "Request address bits [5:2] plus the cnt_bm field do not cross a cache line",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "MMR_REG_SBE",
      ._bpos = AR_NIC_CE_ERR_CLR_MMR_REG_SBE_BP,
      ._mask = AR_NIC_CE_ERR_CLR_MMR_REG_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_MMR_REG_SBE_MASK,
      ._index = AR_NIC_CE_ERR_CLR_MMR_REG_SBE_QW,
      ._desc = "single bit error detected from mmr register space, each position represents the virtual CE associated with the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "MMR_REG_MBE",
      ._bpos = AR_NIC_CE_ERR_CLR_MMR_REG_MBE_BP,
      ._mask = AR_NIC_CE_ERR_CLR_MMR_REG_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_MMR_REG_MBE_MASK,
      ._index = AR_NIC_CE_ERR_CLR_MMR_REG_MBE_QW,
      ._desc = "multi-bit error detected from mmr register space, each position represents the virtual CE associated with the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "OPERATION_DISABLED",
      ._bpos = AR_NIC_CE_ERR_CLR_OPERATION_DISABLED_BP,
      ._mask = AR_NIC_CE_ERR_CLR_OPERATION_DISABLED_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_OPERATION_DISABLED_MASK,
      ._index = AR_NIC_CE_ERR_CLR_OPERATION_DISABLED_QW,
      ._desc = "The request virtual CE (ce_id) had it's VC_RESET bit active indicating the virtual channel is disabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "HEADER_PC",
      ._bpos = AR_NIC_CE_ERR_CLR_HEADER_PC_BP,
      ._mask = AR_NIC_CE_ERR_CLR_HEADER_PC_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_HEADER_PC_MASK,
      ._index = AR_NIC_CE_ERR_CLR_HEADER_PC_QW,
      ._desc = "Parity error was detected on a header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "HEADER_LSTATUS",
      ._bpos = AR_NIC_CE_ERR_CLR_HEADER_LSTATUS_BP,
      ._mask = AR_NIC_CE_ERR_CLR_HEADER_LSTATUS_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_HEADER_LSTATUS_MASK,
      ._index = AR_NIC_CE_ERR_CLR_HEADER_LSTATUS_QW,
      ._desc = "Indicates a header was received with the Local Node Error Status (lstatus) field other than zero, indicating an error was detected in the path to this CE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "HEADER_WITH_TAIL",
      ._bpos = AR_NIC_CE_ERR_CLR_HEADER_WITH_TAIL_BP,
      ._mask = AR_NIC_CE_ERR_CLR_HEADER_WITH_TAIL_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_HEADER_WITH_TAIL_MASK,
      ._index = AR_NIC_CE_ERR_CLR_HEADER_WITH_TAIL_QW,
      ._desc = "A header was received with a tail bit active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "INV_CE_CMD",
      ._bpos = AR_NIC_CE_ERR_CLR_INV_CE_CMD_BP,
      ._mask = AR_NIC_CE_ERR_CLR_INV_CE_CMD_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_INV_CE_CMD_MASK,
      ._index = AR_NIC_CE_ERR_CLR_INV_CE_CMD_QW,
      ._desc = "A header was received with a reqcmd not valid for the CE (9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "INV_ALU_OP",
      ._bpos = AR_NIC_CE_ERR_CLR_INV_ALU_OP_BP,
      ._mask = AR_NIC_CE_ERR_CLR_INV_ALU_OP_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_INV_ALU_OP_MASK,
      ._index = AR_NIC_CE_ERR_CLR_INV_ALU_OP_QW,
      ._desc = "The reqcmd header field is not a valid CE ALU operation or the ce_op_mod bit in the Collective Control Word is active and op code is not a min or max operation (Table 466 in the AIS and Table 452 in the AIS)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "INV_CNT_BM",
      ._bpos = AR_NIC_CE_ERR_CLR_INV_CNT_BM_BP,
      ._mask = AR_NIC_CE_ERR_CLR_INV_CNT_BM_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_INV_CNT_BM_MASK,
      ._index = AR_NIC_CE_ERR_CLR_INV_CNT_BM_QW,
      ._desc = "cnt_bm header field specifies a count of the number of 32 bit words of data will follow the header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "BAD_OPERANDS",
      ._bpos = AR_NIC_CE_ERR_CLR_BAD_OPERANDS_BP,
      ._mask = AR_NIC_CE_ERR_CLR_BAD_OPERANDS_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_BAD_OPERANDS_MASK,
      ._index = AR_NIC_CE_ERR_CLR_BAD_OPERANDS_QW,
      ._desc = "A min or max operation was defined in the reqcmd field of the header, which requires two data flits to follow the header and a cnt_bm value of 5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "UNEXPECTED_SCATTER",
      ._bpos = AR_NIC_CE_ERR_CLR_UNEXPECTED_SCATTER_BP,
      ._mask = AR_NIC_CE_ERR_CLR_UNEXPECTED_SCATTER_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_UNEXPECTED_SCATTER_MASK,
      ._index = AR_NIC_CE_ERR_CLR_UNEXPECTED_SCATTER_QW,
      ._desc = "A scatter command was received before the reduction has completed or receipt of a scatter while executing a scatter (",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "DFLIT_SBE",
      ._bpos = AR_NIC_CE_ERR_CLR_DFLIT_SBE_BP,
      ._mask = AR_NIC_CE_ERR_CLR_DFLIT_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_DFLIT_SBE_MASK,
      ._index = AR_NIC_CE_ERR_CLR_DFLIT_SBE_QW,
      ._desc = "Data flit SECDED detected single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "DFLIT_MBE",
      ._bpos = AR_NIC_CE_ERR_CLR_DFLIT_MBE_BP,
      ._mask = AR_NIC_CE_ERR_CLR_DFLIT_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_DFLIT_MBE_MASK,
      ._index = AR_NIC_CE_ERR_CLR_DFLIT_MBE_QW,
      ._desc = "Multi bit error while performing SECDED of data flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "PROTECTION_VIOLATION",
      ._bpos = AR_NIC_CE_ERR_CLR_PROTECTION_VIOLATION_BP,
      ._mask = AR_NIC_CE_ERR_CLR_PROTECTION_VIOLATION_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_PROTECTION_VIOLATION_MASK,
      ._index = AR_NIC_CE_ERR_CLR_PROTECTION_VIOLATION_QW,
      ._desc = "A new request was received in which it's pkey did not match the pkey configured for this virtual CE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "UNEXPECTED_JOIN",
      ._bpos = AR_NIC_CE_ERR_CLR_UNEXPECTED_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_CLR_UNEXPECTED_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_UNEXPECTED_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_CLR_UNEXPECTED_JOIN_QW,
      ._desc = "The type of join for this child_id is checked against the type defined for this child in the configuration MMRs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "DUPLICATE_JOIN",
      ._bpos = AR_NIC_CE_ERR_CLR_DUPLICATE_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_CLR_DUPLICATE_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_DUPLICATE_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_CLR_DUPLICATE_JOIN_QW,
      ._desc = "Indicates the child_id for a new request has previously joined a reduction on this virtual CE and the results of that reduction have not been sent via a scatter or PUT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "FIRST_OP_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_CLR_FIRST_OP_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_CLR_FIRST_OP_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_FIRST_OP_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_CLR_FIRST_OP_NOT_MATCH_QW,
      ._desc = "Received a join, but the operation did not match operation received from the first child that joined the collective for this reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "FIRST_CNT_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_CLR_FIRST_CNT_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_CLR_FIRST_CNT_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_FIRST_CNT_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_CLR_FIRST_CNT_NOT_MATCH_QW,
      ._desc = "Received a join, but the cnt_bm field did not match the one received by the first child that entered this reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "MISMATCH_ERR",
      ._bpos = AR_NIC_CE_ERR_CLR_MISMATCH_ERR_BP,
      ._mask = AR_NIC_CE_ERR_CLR_MISMATCH_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_MISMATCH_ERR_MASK,
      ._index = AR_NIC_CE_ERR_CLR_MISMATCH_ERR_QW,
      ._desc = "Received a join, but the reduction id did not match the one received by the first child that joined this reduction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "OP_INDX_REG_PC",
      ._bpos = AR_NIC_CE_ERR_CLR_OP_INDX_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_CLR_OP_INDX_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_OP_INDX_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_CLR_OP_INDX_REG_PC_QW,
      ._desc = "An internal parity error was detected in operand/index register",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "JL_REG_PC",
      ._bpos = AR_NIC_CE_ERR_CLR_JL_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_CLR_JL_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_JL_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_CLR_JL_REG_PC_QW,
      ._desc = "An internal parity error detected in the joinlist register",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CE_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_CE_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CE_ERR_CLR_RSTDATA & AR_NIC_CE_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_CE_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Not used by CE logic, for diagnostic use only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_hss_msk_detail[] = {
    { ._name = "REDENGN_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_REDENGN_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_REDENGN_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_REDENGN_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_REDENGN_OVRFLO_QW,
      ._desc = "62:62",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RAT_FIFO_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_RAT_FIFO_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_RAT_FIFO_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_RAT_FIFO_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_RAT_FIFO_OVRFLO_QW,
      ._desc = "61:61",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ADDRESS_ERR",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_ADDRESS_ERR_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_ADDRESS_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_ADDRESS_ERR_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_ADDRESS_ERR_QW,
      ._desc = "60:60",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MMR_REG_SBE",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_MMR_REG_SBE_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_MMR_REG_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_MMR_REG_SBE_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_MMR_REG_SBE_QW,
      ._desc = "59:56",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MMR_REG_MBE",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_MMR_REG_MBE_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_MMR_REG_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_MMR_REG_MBE_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_MMR_REG_MBE_QW,
      ._desc = "55:52",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "OPERATION_DISABLED",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_OPERATION_DISABLED_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_OPERATION_DISABLED_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_OPERATION_DISABLED_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_OPERATION_DISABLED_QW,
      ._desc = "51:48",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "HEADER_PC",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_HEADER_PC_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_HEADER_PC_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_HEADER_PC_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_HEADER_PC_QW,
      ._desc = "47:47",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "HEADER_LSTATUS",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_HEADER_LSTATUS_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_HEADER_LSTATUS_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_HEADER_LSTATUS_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_HEADER_LSTATUS_QW,
      ._desc = "46:46",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "HEADER_WITH_TAIL",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_HEADER_WITH_TAIL_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_HEADER_WITH_TAIL_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_HEADER_WITH_TAIL_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_HEADER_WITH_TAIL_QW,
      ._desc = "45:45",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "INV_CE_CMD",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_INV_CE_CMD_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_INV_CE_CMD_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_INV_CE_CMD_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_INV_CE_CMD_QW,
      ._desc = "44:44",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "INV_ALU_OP",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_INV_ALU_OP_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_INV_ALU_OP_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_INV_ALU_OP_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_INV_ALU_OP_QW,
      ._desc = "43:43",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "INV_CNT_BM",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_INV_CNT_BM_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_INV_CNT_BM_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_INV_CNT_BM_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_INV_CNT_BM_QW,
      ._desc = "42:42",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BAD_OPERANDS",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_BAD_OPERANDS_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_BAD_OPERANDS_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_BAD_OPERANDS_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_BAD_OPERANDS_QW,
      ._desc = "41:41",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "UNEXPECTED_SCATTER",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_UNEXPECTED_SCATTER_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_UNEXPECTED_SCATTER_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_UNEXPECTED_SCATTER_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_UNEXPECTED_SCATTER_QW,
      ._desc = "40:37",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DFLIT_SBE",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_DFLIT_SBE_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_DFLIT_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_DFLIT_SBE_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_DFLIT_SBE_QW,
      ._desc = "36:35",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DFLIT_MBE",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_DFLIT_MBE_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_DFLIT_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_DFLIT_MBE_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_DFLIT_MBE_QW,
      ._desc = "34:33",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PROTECTION_VIOLATION",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_PROTECTION_VIOLATION_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_PROTECTION_VIOLATION_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_PROTECTION_VIOLATION_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_PROTECTION_VIOLATION_QW,
      ._desc = "32:29",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "UNEXPECTED_JOIN",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_UNEXPECTED_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_UNEXPECTED_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_UNEXPECTED_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_UNEXPECTED_JOIN_QW,
      ._desc = "28:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DUPLICATE_JOIN",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_DUPLICATE_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_DUPLICATE_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_DUPLICATE_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_DUPLICATE_JOIN_QW,
      ._desc = "24:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FIRST_OP_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_FIRST_OP_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_FIRST_OP_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_FIRST_OP_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_FIRST_OP_NOT_MATCH_QW,
      ._desc = "20:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FIRST_CNT_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_FIRST_CNT_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_FIRST_CNT_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_FIRST_CNT_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_FIRST_CNT_NOT_MATCH_QW,
      ._desc = "16:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MISMATCH_ERR",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_MISMATCH_ERR_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_MISMATCH_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_MISMATCH_ERR_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_MISMATCH_ERR_QW,
      ._desc = "12:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "OP_INDX_REG_PC",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_OP_INDX_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_OP_INDX_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_OP_INDX_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_OP_INDX_REG_PC_QW,
      ._desc = "8:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "JL_REG_PC",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_JL_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_JL_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_JL_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_JL_REG_PC_QW,
      ._desc = "4:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CE_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_CE_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CE_ERR_HSS_MSK_RSTDATA & AR_NIC_CE_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_CE_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_os_msk_detail[] = {
    { ._name = "REDENGN_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_REDENGN_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_REDENGN_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_REDENGN_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_REDENGN_OVRFLO_QW,
      ._desc = "62:62",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RAT_FIFO_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_RAT_FIFO_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_RAT_FIFO_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_RAT_FIFO_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_RAT_FIFO_OVRFLO_QW,
      ._desc = "61:61",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ADDRESS_ERR",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_ADDRESS_ERR_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_ADDRESS_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_ADDRESS_ERR_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_ADDRESS_ERR_QW,
      ._desc = "60:60",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MMR_REG_SBE",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_MMR_REG_SBE_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_MMR_REG_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_MMR_REG_SBE_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_MMR_REG_SBE_QW,
      ._desc = "59:56",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MMR_REG_MBE",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_MMR_REG_MBE_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_MMR_REG_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_MMR_REG_MBE_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_MMR_REG_MBE_QW,
      ._desc = "55:52",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "OPERATION_DISABLED",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_OPERATION_DISABLED_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_OPERATION_DISABLED_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_OPERATION_DISABLED_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_OPERATION_DISABLED_QW,
      ._desc = "51:48",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "HEADER_PC",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_HEADER_PC_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_HEADER_PC_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_HEADER_PC_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_HEADER_PC_QW,
      ._desc = "47:47",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "HEADER_LSTATUS",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_HEADER_LSTATUS_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_HEADER_LSTATUS_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_HEADER_LSTATUS_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_HEADER_LSTATUS_QW,
      ._desc = "46:46",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "HEADER_WITH_TAIL",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_HEADER_WITH_TAIL_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_HEADER_WITH_TAIL_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_HEADER_WITH_TAIL_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_HEADER_WITH_TAIL_QW,
      ._desc = "45:45",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "INV_CE_CMD",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_INV_CE_CMD_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_INV_CE_CMD_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_INV_CE_CMD_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_INV_CE_CMD_QW,
      ._desc = "44:44",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "INV_ALU_OP",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_INV_ALU_OP_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_INV_ALU_OP_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_INV_ALU_OP_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_INV_ALU_OP_QW,
      ._desc = "43:43",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "INV_CNT_BM",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_INV_CNT_BM_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_INV_CNT_BM_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_INV_CNT_BM_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_INV_CNT_BM_QW,
      ._desc = "42:42",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BAD_OPERANDS",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_BAD_OPERANDS_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_BAD_OPERANDS_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_BAD_OPERANDS_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_BAD_OPERANDS_QW,
      ._desc = "41:41",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "UNEXPECTED_SCATTER",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_UNEXPECTED_SCATTER_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_UNEXPECTED_SCATTER_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_UNEXPECTED_SCATTER_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_UNEXPECTED_SCATTER_QW,
      ._desc = "40:37",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DFLIT_SBE",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_DFLIT_SBE_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_DFLIT_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_DFLIT_SBE_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_DFLIT_SBE_QW,
      ._desc = "36:35",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DFLIT_MBE",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_DFLIT_MBE_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_DFLIT_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_DFLIT_MBE_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_DFLIT_MBE_QW,
      ._desc = "34:33",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PROTECTION_VIOLATION",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_PROTECTION_VIOLATION_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_PROTECTION_VIOLATION_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_PROTECTION_VIOLATION_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_PROTECTION_VIOLATION_QW,
      ._desc = "32:29",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "UNEXPECTED_JOIN",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_UNEXPECTED_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_UNEXPECTED_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_UNEXPECTED_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_UNEXPECTED_JOIN_QW,
      ._desc = "28:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DUPLICATE_JOIN",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_DUPLICATE_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_DUPLICATE_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_DUPLICATE_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_DUPLICATE_JOIN_QW,
      ._desc = "24:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FIRST_OP_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_FIRST_OP_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_FIRST_OP_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_FIRST_OP_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_FIRST_OP_NOT_MATCH_QW,
      ._desc = "20:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FIRST_CNT_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_FIRST_CNT_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_FIRST_CNT_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_FIRST_CNT_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_FIRST_CNT_NOT_MATCH_QW,
      ._desc = "16:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MISMATCH_ERR",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_MISMATCH_ERR_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_MISMATCH_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_MISMATCH_ERR_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_MISMATCH_ERR_QW,
      ._desc = "12:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "OP_INDX_REG_PC",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_OP_INDX_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_OP_INDX_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_OP_INDX_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_OP_INDX_REG_PC_QW,
      ._desc = "8:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "JL_REG_PC",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_JL_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_JL_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_JL_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_JL_REG_PC_QW,
      ._desc = "4:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CE_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_CE_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CE_ERR_OS_MSK_RSTDATA & AR_NIC_CE_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_CE_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_first_flg_detail[] = {
    { ._name = "REDENGN_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_REDENGN_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_REDENGN_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_REDENGN_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_REDENGN_OVRFLO_QW,
      ._desc = "62:62",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "RAT_FIFO_OVRFLO",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_RAT_FIFO_OVRFLO_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_RAT_FIFO_OVRFLO_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_RAT_FIFO_OVRFLO_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_RAT_FIFO_OVRFLO_QW,
      ._desc = "61:61",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ADDRESS_ERR",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_ADDRESS_ERR_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_ADDRESS_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_ADDRESS_ERR_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_ADDRESS_ERR_QW,
      ._desc = "60:60",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MMR_REG_SBE",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_MMR_REG_SBE_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_MMR_REG_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_MMR_REG_SBE_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_MMR_REG_SBE_QW,
      ._desc = "59:56",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MMR_REG_MBE",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_MMR_REG_MBE_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_MMR_REG_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_MMR_REG_MBE_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_MMR_REG_MBE_QW,
      ._desc = "55:52",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "OPERATION_DISABLED",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_OPERATION_DISABLED_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_OPERATION_DISABLED_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_OPERATION_DISABLED_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_OPERATION_DISABLED_QW,
      ._desc = "51:48",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "HEADER_PC",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_HEADER_PC_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_HEADER_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_HEADER_PC_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_HEADER_PC_QW,
      ._desc = "47:47",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "HEADER_LSTATUS",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_HEADER_LSTATUS_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_HEADER_LSTATUS_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_HEADER_LSTATUS_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_HEADER_LSTATUS_QW,
      ._desc = "46:46",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "HEADER_WITH_TAIL",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_HEADER_WITH_TAIL_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_HEADER_WITH_TAIL_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_HEADER_WITH_TAIL_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_HEADER_WITH_TAIL_QW,
      ._desc = "45:45",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "INV_CE_CMD",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_INV_CE_CMD_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_INV_CE_CMD_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_INV_CE_CMD_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_INV_CE_CMD_QW,
      ._desc = "44:44",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "INV_ALU_OP",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_INV_ALU_OP_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_INV_ALU_OP_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_INV_ALU_OP_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_INV_ALU_OP_QW,
      ._desc = "43:43",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "INV_CNT_BM",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_INV_CNT_BM_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_INV_CNT_BM_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_INV_CNT_BM_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_INV_CNT_BM_QW,
      ._desc = "42:42",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "BAD_OPERANDS",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_BAD_OPERANDS_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_BAD_OPERANDS_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_BAD_OPERANDS_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_BAD_OPERANDS_QW,
      ._desc = "41:41",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "UNEXPECTED_SCATTER",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_UNEXPECTED_SCATTER_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_UNEXPECTED_SCATTER_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_UNEXPECTED_SCATTER_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_UNEXPECTED_SCATTER_QW,
      ._desc = "40:37",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "DFLIT_SBE",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_DFLIT_SBE_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_DFLIT_SBE_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_DFLIT_SBE_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_DFLIT_SBE_QW,
      ._desc = "36:35",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "DFLIT_MBE",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_DFLIT_MBE_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_DFLIT_MBE_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_DFLIT_MBE_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_DFLIT_MBE_QW,
      ._desc = "34:33",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "PROTECTION_VIOLATION",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_PROTECTION_VIOLATION_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_PROTECTION_VIOLATION_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_PROTECTION_VIOLATION_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_PROTECTION_VIOLATION_QW,
      ._desc = "32:29",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "UNEXPECTED_JOIN",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_UNEXPECTED_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_UNEXPECTED_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_UNEXPECTED_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_UNEXPECTED_JOIN_QW,
      ._desc = "28:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "DUPLICATE_JOIN",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_DUPLICATE_JOIN_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_DUPLICATE_JOIN_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_DUPLICATE_JOIN_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_DUPLICATE_JOIN_QW,
      ._desc = "24:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "FIRST_OP_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_FIRST_OP_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_FIRST_OP_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_FIRST_OP_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_FIRST_OP_NOT_MATCH_QW,
      ._desc = "20:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "FIRST_CNT_NOT_MATCH",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_FIRST_CNT_NOT_MATCH_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_FIRST_CNT_NOT_MATCH_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_FIRST_CNT_NOT_MATCH_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_FIRST_CNT_NOT_MATCH_QW,
      ._desc = "16:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MISMATCH_ERR",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_MISMATCH_ERR_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_MISMATCH_ERR_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_MISMATCH_ERR_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_MISMATCH_ERR_QW,
      ._desc = "12:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "OP_INDX_REG_PC",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_OP_INDX_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_OP_INDX_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_OP_INDX_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_OP_INDX_REG_PC_QW,
      ._desc = "8:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "JL_REG_PC",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_JL_REG_PC_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_JL_REG_PC_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_JL_REG_PC_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_JL_REG_PC_QW,
      ._desc = "4:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CE_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_CE_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA & AR_NIC_CE_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_CE_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_req_info_detail[] = {
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_CE_ERR_REQ_INFO_MBE_SYNDROME_BP,
      ._mask = AR_NIC_CE_ERR_REQ_INFO_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_CE_ERR_REQ_INFO_RSTDATA & AR_NIC_CE_ERR_REQ_INFO_MBE_SYNDROME_MASK,
      ._index = AR_NIC_CE_ERR_REQ_INFO_MBE_SYNDROME_QW,
      ._desc = "Syndrome for first detected MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SOURCE",
      ._bpos = AR_NIC_CE_ERR_REQ_INFO_MBE_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_REQ_INFO_MBE_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_REQ_INFO_RSTDATA & AR_NIC_CE_ERR_REQ_INFO_MBE_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_REQ_INFO_MBE_SOURCE_QW,
      ._desc = "srcid and src of first detected MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_CE_ERR_REQ_INFO_SBE_SYNDROME_BP,
      ._mask = AR_NIC_CE_ERR_REQ_INFO_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_CE_ERR_REQ_INFO_RSTDATA & AR_NIC_CE_ERR_REQ_INFO_SBE_SYNDROME_MASK,
      ._index = AR_NIC_CE_ERR_REQ_INFO_SBE_SYNDROME_QW,
      ._desc = "Syndrome for first detected SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SOURCE",
      ._bpos = AR_NIC_CE_ERR_REQ_INFO_SBE_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_REQ_INFO_SBE_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_REQ_INFO_RSTDATA & AR_NIC_CE_ERR_REQ_INFO_SBE_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_REQ_INFO_SBE_SOURCE_QW,
      ._desc = "srcid and src of first detected SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_op_info_detail[] = {
    { ._name = "UNXPCT_SCAT_SOURCE",
      ._bpos = AR_NIC_CE_ERR_OP_INFO_UNXPCT_SCAT_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_OP_INFO_UNXPCT_SCAT_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_OP_INFO_RSTDATA & AR_NIC_CE_ERR_OP_INFO_UNXPCT_SCAT_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_OP_INFO_UNXPCT_SCAT_SOURCE_QW,
      ._desc = "srcid and src on first detected UNEXPECTED_SCATTER",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "BAD_OP_SOURCE",
      ._bpos = AR_NIC_CE_ERR_OP_INFO_BAD_OP_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_OP_INFO_BAD_OP_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_OP_INFO_RSTDATA & AR_NIC_CE_ERR_OP_INFO_BAD_OP_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_OP_INFO_BAD_OP_SOURCE_QW,
      ._desc = "srcid and src on first detected BAD_OPERAND",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "OP_DISABLE_SOURCE",
      ._bpos = AR_NIC_CE_ERR_OP_INFO_OP_DISABLE_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_OP_INFO_OP_DISABLE_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_OP_INFO_RSTDATA & AR_NIC_CE_ERR_OP_INFO_OP_DISABLE_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_OP_INFO_OP_DISABLE_SOURCE_QW,
      ._desc = "srcid and src on first detected OPERATION_DISABLED",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_inv_info_detail[] = {
    { ._name = "INV_CNT_SOURCE",
      ._bpos = AR_NIC_CE_ERR_INV_INFO_INV_CNT_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_INV_INFO_INV_CNT_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_INV_INFO_RSTDATA & AR_NIC_CE_ERR_INV_INFO_INV_CNT_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_INV_INFO_INV_CNT_SOURCE_QW,
      ._desc = "srcid and src on first detected INV_CNT_BM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "INV_ALU_SOURCE",
      ._bpos = AR_NIC_CE_ERR_INV_INFO_INV_ALU_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_INV_INFO_INV_ALU_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_INV_INFO_RSTDATA & AR_NIC_CE_ERR_INV_INFO_INV_ALU_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_INV_INFO_INV_ALU_SOURCE_QW,
      ._desc = "srcid and src on first detected INV_ALU_OP",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "INV_CMD_SOURCE",
      ._bpos = AR_NIC_CE_ERR_INV_INFO_INV_CMD_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_INV_INFO_INV_CMD_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_INV_INFO_RSTDATA & AR_NIC_CE_ERR_INV_INFO_INV_CMD_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_INV_INFO_INV_CMD_SOURCE_QW,
      ._desc = "srcid and src on first detected INV_CE_CMD",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_reject_info_detail[] = {
    { ._name = "BAD_PKEY_SOURCE",
      ._bpos = AR_NIC_CE_ERR_REJECT_INFO_BAD_PKEY_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_REJECT_INFO_BAD_PKEY_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_REJECT_INFO_RSTDATA & AR_NIC_CE_ERR_REJECT_INFO_BAD_PKEY_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_REJECT_INFO_BAD_PKEY_SOURCE_QW,
      ._desc = "srcid and src on first detected PROTECTION_VIOLATION",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "UNEXPCT_JOIN_SOURCE",
      ._bpos = AR_NIC_CE_ERR_REJECT_INFO_UNEXPCT_JOIN_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_REJECT_INFO_UNEXPCT_JOIN_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_REJECT_INFO_RSTDATA & AR_NIC_CE_ERR_REJECT_INFO_UNEXPCT_JOIN_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_REJECT_INFO_UNEXPCT_JOIN_SOURCE_QW,
      ._desc = "srcid and src on first detected UNEXPECTED_JOIN",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DUP_JOIN_SOURCE",
      ._bpos = AR_NIC_CE_ERR_REJECT_INFO_DUP_JOIN_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_REJECT_INFO_DUP_JOIN_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_REJECT_INFO_RSTDATA & AR_NIC_CE_ERR_REJECT_INFO_DUP_JOIN_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_REJECT_INFO_DUP_JOIN_SOURCE_QW,
      ._desc = "srcid and src on first detected DUPLICATE_JOIN",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_match_info_detail[] = {
    { ._name = "CMD_MIS_SOURCE",
      ._bpos = AR_NIC_CE_ERR_MATCH_INFO_CMD_MIS_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_MATCH_INFO_CMD_MIS_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_MATCH_INFO_RSTDATA & AR_NIC_CE_ERR_MATCH_INFO_CMD_MIS_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_MATCH_INFO_CMD_MIS_SOURCE_QW,
      ._desc = "srcid and src on first detected FIRST_OP_NOT_MATCH",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "CNT_MIS_SOURCE",
      ._bpos = AR_NIC_CE_ERR_MATCH_INFO_CNT_MIS_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_MATCH_INFO_CNT_MIS_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_MATCH_INFO_RSTDATA & AR_NIC_CE_ERR_MATCH_INFO_CNT_MIS_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_MATCH_INFO_CNT_MIS_SOURCE_QW,
      ._desc = "srcid and src on first detected FIRST_CNT_NOT_MATCH",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REDID_MIS_SOURCE",
      ._bpos = AR_NIC_CE_ERR_MATCH_INFO_REDID_MIS_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_MATCH_INFO_REDID_MIS_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_MATCH_INFO_RSTDATA & AR_NIC_CE_ERR_MATCH_INFO_REDID_MIS_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_MATCH_INFO_REDID_MIS_SOURCE_QW,
      ._desc = "srcid and src on first detected MISMATCH_ERR",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_chk_info_detail[] = {
    { ._name = "SBE_DISCPTOR_SYNDROME",
      ._bpos = AR_NIC_CE_ERR_CHK_INFO_SBE_DISCPTOR_SYNDROME_BP,
      ._mask = AR_NIC_CE_ERR_CHK_INFO_SBE_DISCPTOR_SYNDROME_MASK,
      ._rval = AR_NIC_CE_ERR_CHK_INFO_RSTDATA & AR_NIC_CE_ERR_CHK_INFO_SBE_DISCPTOR_SYNDROME_MASK,
      ._index = AR_NIC_CE_ERR_CHK_INFO_SBE_DISCPTOR_SYNDROME_QW,
      ._desc = "Syndrome on first detected MMR_REG_SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_DISCPTOR_ADDR",
      ._bpos = AR_NIC_CE_ERR_CHK_INFO_SBE_DISCPTOR_ADDR_BP,
      ._mask = AR_NIC_CE_ERR_CHK_INFO_SBE_DISCPTOR_ADDR_MASK,
      ._rval = AR_NIC_CE_ERR_CHK_INFO_RSTDATA & AR_NIC_CE_ERR_CHK_INFO_SBE_DISCPTOR_ADDR_MASK,
      ._index = AR_NIC_CE_ERR_CHK_INFO_SBE_DISCPTOR_ADDR_QW,
      ._desc = "The first detected MMR_REG_SBE address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_DISCPTOR_SYNDROME",
      ._bpos = AR_NIC_CE_ERR_CHK_INFO_MBE_DISCPTOR_SYNDROME_BP,
      ._mask = AR_NIC_CE_ERR_CHK_INFO_MBE_DISCPTOR_SYNDROME_MASK,
      ._rval = AR_NIC_CE_ERR_CHK_INFO_RSTDATA & AR_NIC_CE_ERR_CHK_INFO_MBE_DISCPTOR_SYNDROME_MASK,
      ._index = AR_NIC_CE_ERR_CHK_INFO_MBE_DISCPTOR_SYNDROME_QW,
      ._desc = "Syndrome on first detected MMR_REG_MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_DISCPTOR_ADDR",
      ._bpos = AR_NIC_CE_ERR_CHK_INFO_MBE_DISCPTOR_ADDR_BP,
      ._mask = AR_NIC_CE_ERR_CHK_INFO_MBE_DISCPTOR_ADDR_MASK,
      ._rval = AR_NIC_CE_ERR_CHK_INFO_RSTDATA & AR_NIC_CE_ERR_CHK_INFO_MBE_DISCPTOR_ADDR_MASK,
      ._index = AR_NIC_CE_ERR_CHK_INFO_MBE_DISCPTOR_ADDR_QW,
      ._desc = "The first detected MMR_REG_MBE address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LSTATUS_SOURCE",
      ._bpos = AR_NIC_CE_ERR_CHK_INFO_LSTATUS_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_CHK_INFO_LSTATUS_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_CHK_INFO_RSTDATA & AR_NIC_CE_ERR_CHK_INFO_LSTATUS_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_CHK_INFO_LSTATUS_SOURCE_QW,
      ._desc = "srcid and src on first detected HEADER_LSTATUS",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "HDR_WTAIL_SOURCE",
      ._bpos = AR_NIC_CE_ERR_CHK_INFO_HDR_WTAIL_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_CHK_INFO_HDR_WTAIL_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_CHK_INFO_RSTDATA & AR_NIC_CE_ERR_CHK_INFO_HDR_WTAIL_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_CHK_INFO_HDR_WTAIL_SOURCE_QW,
      ._desc = "srcid and src on first detected HEADER_WITH_TAIL",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_err_adderr_info_detail[] = {
    { ._name = "REDENGN_OVRFLO_SOURCE",
      ._bpos = AR_NIC_CE_ERR_ADDERR_INFO_REDENGN_OVRFLO_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_ADDERR_INFO_REDENGN_OVRFLO_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_ADDERR_INFO_RSTDATA & AR_NIC_CE_ERR_ADDERR_INFO_REDENGN_OVRFLO_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_ADDERR_INFO_REDENGN_OVRFLO_SOURCE_QW,
      ._desc = "Which of the 12 FIFO's indicated an overflow condition: [29:26] = which virtual channel joinlist fifo [25:22] = which virtual channel operand fifo [21:18] = which virtual channel index fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDRESS_ERR_SOURCE",
      ._bpos = AR_NIC_CE_ERR_ADDERR_INFO_ADDRESS_ERR_SOURCE_BP,
      ._mask = AR_NIC_CE_ERR_ADDERR_INFO_ADDRESS_ERR_SOURCE_MASK,
      ._rval = AR_NIC_CE_ERR_ADDERR_INFO_RSTDATA & AR_NIC_CE_ERR_ADDERR_INFO_ADDRESS_ERR_SOURCE_MASK,
      ._index = AR_NIC_CE_ERR_ADDERR_INFO_ADDRESS_ERR_SOURCE_QW,
      ._desc = "srcid and src on first detected ADDRESS_ERR",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_sts_chnl_0_info_detail[] = {
    { ._name = "WHOS_IN",
      ._bpos = AR_NIC_CE_STS_CHNL_0_INFO_WHOS_IN_BP,
      ._mask = AR_NIC_CE_STS_CHNL_0_INFO_WHOS_IN_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_0_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_0_INFO_WHOS_IN_MASK,
      ._index = AR_NIC_CE_STS_CHNL_0_INFO_WHOS_IN_QW,
      ._desc = "Each bit position indicates the comparable child_number that has entered the reduction",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "JOIN_COUNT",
      ._bpos = AR_NIC_CE_STS_CHNL_0_INFO_JOIN_COUNT_BP,
      ._mask = AR_NIC_CE_STS_CHNL_0_INFO_JOIN_COUNT_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_0_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_0_INFO_JOIN_COUNT_MASK,
      ._index = AR_NIC_CE_STS_CHNL_0_INFO_JOIN_COUNT_QW,
      ._desc = "A count of the number of children joined",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "WAIT4SCATTER",
      ._bpos = AR_NIC_CE_STS_CHNL_0_INFO_WAIT4SCATTER_BP,
      ._mask = AR_NIC_CE_STS_CHNL_0_INFO_WAIT4SCATTER_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_0_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_0_INFO_WAIT4SCATTER_MASK,
      ._index = AR_NIC_CE_STS_CHNL_0_INFO_WAIT4SCATTER_QW,
      ._desc = "Virtual CE waiting for scatter to start",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "WAIT4REDUCTION",
      ._bpos = AR_NIC_CE_STS_CHNL_0_INFO_WAIT4REDUCTION_BP,
      ._mask = AR_NIC_CE_STS_CHNL_0_INFO_WAIT4REDUCTION_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_0_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_0_INFO_WAIT4REDUCTION_MASK,
      ._index = AR_NIC_CE_STS_CHNL_0_INFO_WAIT4REDUCTION_QW,
      ._desc = "Virtual CE waiting for reduction to start",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_sts_chnl_1_info_detail[] = {
    { ._name = "WHOS_IN",
      ._bpos = AR_NIC_CE_STS_CHNL_1_INFO_WHOS_IN_BP,
      ._mask = AR_NIC_CE_STS_CHNL_1_INFO_WHOS_IN_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_1_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_1_INFO_WHOS_IN_MASK,
      ._index = AR_NIC_CE_STS_CHNL_1_INFO_WHOS_IN_QW,
      ._desc = "Each bit position indicates the comparable child_number that has entered the reduction",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "JOIN_COUNT",
      ._bpos = AR_NIC_CE_STS_CHNL_1_INFO_JOIN_COUNT_BP,
      ._mask = AR_NIC_CE_STS_CHNL_1_INFO_JOIN_COUNT_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_1_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_1_INFO_JOIN_COUNT_MASK,
      ._index = AR_NIC_CE_STS_CHNL_1_INFO_JOIN_COUNT_QW,
      ._desc = "A count of the number of children joined",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "WAIT4SCATTER",
      ._bpos = AR_NIC_CE_STS_CHNL_1_INFO_WAIT4SCATTER_BP,
      ._mask = AR_NIC_CE_STS_CHNL_1_INFO_WAIT4SCATTER_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_1_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_1_INFO_WAIT4SCATTER_MASK,
      ._index = AR_NIC_CE_STS_CHNL_1_INFO_WAIT4SCATTER_QW,
      ._desc = "Virtual CE waiting for scatter to start",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "WAIT4REDUCTION",
      ._bpos = AR_NIC_CE_STS_CHNL_1_INFO_WAIT4REDUCTION_BP,
      ._mask = AR_NIC_CE_STS_CHNL_1_INFO_WAIT4REDUCTION_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_1_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_1_INFO_WAIT4REDUCTION_MASK,
      ._index = AR_NIC_CE_STS_CHNL_1_INFO_WAIT4REDUCTION_QW,
      ._desc = "Virtual CE waiting for reduction to start",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_sts_chnl_2_info_detail[] = {
    { ._name = "WHOS_IN",
      ._bpos = AR_NIC_CE_STS_CHNL_2_INFO_WHOS_IN_BP,
      ._mask = AR_NIC_CE_STS_CHNL_2_INFO_WHOS_IN_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_2_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_2_INFO_WHOS_IN_MASK,
      ._index = AR_NIC_CE_STS_CHNL_2_INFO_WHOS_IN_QW,
      ._desc = "Each bit position indicates the comparable child_number that has entered the reduction",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "JOIN_COUNT",
      ._bpos = AR_NIC_CE_STS_CHNL_2_INFO_JOIN_COUNT_BP,
      ._mask = AR_NIC_CE_STS_CHNL_2_INFO_JOIN_COUNT_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_2_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_2_INFO_JOIN_COUNT_MASK,
      ._index = AR_NIC_CE_STS_CHNL_2_INFO_JOIN_COUNT_QW,
      ._desc = "A count of the number of children joined",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "WAIT4SCATTER",
      ._bpos = AR_NIC_CE_STS_CHNL_2_INFO_WAIT4SCATTER_BP,
      ._mask = AR_NIC_CE_STS_CHNL_2_INFO_WAIT4SCATTER_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_2_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_2_INFO_WAIT4SCATTER_MASK,
      ._index = AR_NIC_CE_STS_CHNL_2_INFO_WAIT4SCATTER_QW,
      ._desc = "Virtual CE waiting for scatter to start",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "WAIT4REDUCTION",
      ._bpos = AR_NIC_CE_STS_CHNL_2_INFO_WAIT4REDUCTION_BP,
      ._mask = AR_NIC_CE_STS_CHNL_2_INFO_WAIT4REDUCTION_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_2_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_2_INFO_WAIT4REDUCTION_MASK,
      ._index = AR_NIC_CE_STS_CHNL_2_INFO_WAIT4REDUCTION_QW,
      ._desc = "Virtual CE waiting for reduction to start",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_sts_chnl_3_info_detail[] = {
    { ._name = "WHOS_IN",
      ._bpos = AR_NIC_CE_STS_CHNL_3_INFO_WHOS_IN_BP,
      ._mask = AR_NIC_CE_STS_CHNL_3_INFO_WHOS_IN_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_3_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_3_INFO_WHOS_IN_MASK,
      ._index = AR_NIC_CE_STS_CHNL_3_INFO_WHOS_IN_QW,
      ._desc = "Each bit position indicates the comparable child_number that has entered the reduction",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "JOIN_COUNT",
      ._bpos = AR_NIC_CE_STS_CHNL_3_INFO_JOIN_COUNT_BP,
      ._mask = AR_NIC_CE_STS_CHNL_3_INFO_JOIN_COUNT_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_3_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_3_INFO_JOIN_COUNT_MASK,
      ._index = AR_NIC_CE_STS_CHNL_3_INFO_JOIN_COUNT_QW,
      ._desc = "A count of the number of children joined",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "WAIT4SCATTER",
      ._bpos = AR_NIC_CE_STS_CHNL_3_INFO_WAIT4SCATTER_BP,
      ._mask = AR_NIC_CE_STS_CHNL_3_INFO_WAIT4SCATTER_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_3_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_3_INFO_WAIT4SCATTER_MASK,
      ._index = AR_NIC_CE_STS_CHNL_3_INFO_WAIT4SCATTER_QW,
      ._desc = "Virtual CE waiting for scatter to start",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "WAIT4REDUCTION",
      ._bpos = AR_NIC_CE_STS_CHNL_3_INFO_WAIT4REDUCTION_BP,
      ._mask = AR_NIC_CE_STS_CHNL_3_INFO_WAIT4REDUCTION_MASK,
      ._rval = AR_NIC_CE_STS_CHNL_3_INFO_RSTDATA & AR_NIC_CE_STS_CHNL_3_INFO_WAIT4REDUCTION_MASK,
      ._index = AR_NIC_CE_STS_CHNL_3_INFO_WAIT4REDUCTION_QW,
      ._desc = "Virtual CE waiting for reduction to start",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_dbg_errinj_input_detail[] = {
    { ._name = "CHECKBYTEUP",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_INPUT_CHECKBYTEUP_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_INPUT_CHECKBYTEUP_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTDATA & AR_NIC_CE_DBG_ERRINJ_INPUT_CHECKBYTEUP_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_INPUT_CHECKBYTEUP_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 135:72 to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTELO",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_INPUT_CHECKBYTELO_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_INPUT_CHECKBYTELO_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTDATA & AR_NIC_CE_DBG_ERRINJ_INPUT_CHECKBYTELO_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_INPUT_CHECKBYTELO_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 63:0 to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_INPUT_PARITY_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_INPUT_PARITY_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTDATA & AR_NIC_CE_DBG_ERRINJ_INPUT_PARITY_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_INPUT_PARITY_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_INPUT_TAIL_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_INPUT_TAIL_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTDATA & AR_NIC_CE_DBG_ERRINJ_INPUT_TAIL_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_INPUT_TAIL_QW,
      ._desc = "Flip the tail bit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_INPUT_COUNT_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_INPUT_COUNT_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTDATA & AR_NIC_CE_DBG_ERRINJ_INPUT_COUNT_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_INPUT_COUNT_QW,
      ._desc = "Flit in which to inject the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_INPUT_TRIGGERED_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_INPUT_TRIGGERED_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTDATA & AR_NIC_CE_DBG_ERRINJ_INPUT_TRIGGERED_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_INPUT_TRIGGERED_QW,
      ._desc = "Status indicating if the injection occured, software write to reset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_INPUT_MODE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_INPUT_MODE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTDATA & AR_NIC_CE_DBG_ERRINJ_INPUT_MODE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_INPUT_MODE_QW,
      ._desc = "Mode 0: Inject error in Nth flit of one packet Mode 1: Inject error in Nth flit of all packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_INPUT_ENABLE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_INPUT_ENABLE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTDATA & AR_NIC_CE_DBG_ERRINJ_INPUT_ENABLE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_INPUT_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_dbg_errinj_redengn_detail[] = {
    { ._name = "IX_CHECKBYTE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_REDENGN_IX_CHECKBYTE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_REDENGN_IX_CHECKBYTE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTDATA & AR_NIC_CE_DBG_ERRINJ_REDENGN_IX_CHECKBYTE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_REDENGN_IX_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the index regfile being read, to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "OP_CHECKBYTE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_REDENGN_OP_CHECKBYTE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_REDENGN_OP_CHECKBYTE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTDATA & AR_NIC_CE_DBG_ERRINJ_REDENGN_OP_CHECKBYTE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_REDENGN_OP_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the operand regfile being read, to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "JL_CHECKBYTE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_REDENGN_JL_CHECKBYTE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_REDENGN_JL_CHECKBYTE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTDATA & AR_NIC_CE_DBG_ERRINJ_REDENGN_JL_CHECKBYTE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_REDENGN_JL_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the joinlist regfile being read, to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REGSELECT",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_REDENGN_REGSELECT_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_REDENGN_REGSELECT_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTDATA & AR_NIC_CE_DBG_ERRINJ_REDENGN_REGSELECT_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_REDENGN_REGSELECT_QW,
      ._desc = "Select which of the three register types [8] = joinlist [9] = operand [10] = index/operand2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "VIRTUAL_CE_REG",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_REDENGN_VIRTUAL_CE_REG_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_REDENGN_VIRTUAL_CE_REG_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTDATA & AR_NIC_CE_DBG_ERRINJ_REDENGN_VIRTUAL_CE_REG_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_REDENGN_VIRTUAL_CE_REG_QW,
      ._desc = "Select the virtual CE regfiles: [4] = 0 [5] = 1 [6] = 2 [7[ = 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_REDENGN_TRIGGERED_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_REDENGN_TRIGGERED_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTDATA & AR_NIC_CE_DBG_ERRINJ_REDENGN_TRIGGERED_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_REDENGN_TRIGGERED_QW,
      ._desc = "Status to indicate if injection occured, software write to reset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_REDENGN_MODE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_REDENGN_MODE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTDATA & AR_NIC_CE_DBG_ERRINJ_REDENGN_MODE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_REDENGN_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_REDENGN_ENABLE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_REDENGN_ENABLE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTDATA & AR_NIC_CE_DBG_ERRINJ_REDENGN_ENABLE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_REDENGN_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_dbg_errinj_child_cfg_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_ADDRESS_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_ADDRESS_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RSTDATA & AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_ADDRESS_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_ADDRESS_QW,
      ._desc = "This field indicates the address within the regfile for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_CHECKBYTE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_CHECKBYTE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RSTDATA & AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_CHECKBYTE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the regfile address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REGSELECT",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_REGSELECT_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_REGSELECT_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RSTDATA & AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_REGSELECT_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_REGSELECT_QW,
      ._desc = "This field identifies the joinlit regfile: [4] = config0 [5] = config1 [6] = config2 [7[= config3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_TRIGGERED_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_TRIGGERED_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RSTDATA & AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_TRIGGERED_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_TRIGGERED_QW,
      ._desc = "Status to indicate if injection occured, software write to reset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_MODE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_MODE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RSTDATA & AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_MODE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_ENABLE_BP,
      ._mask = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_ENABLE_MASK,
      ._rval = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RSTDATA & AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_ENABLE_MASK,
      ._index = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_dbg_crdts_detail[] = {
    { ._name = "MAX_TARB_CREDITS",
      ._bpos = AR_NIC_CE_DBG_CRDTS_MAX_TARB_CREDITS_BP,
      ._mask = AR_NIC_CE_DBG_CRDTS_MAX_TARB_CREDITS_MASK,
      ._rval = AR_NIC_CE_DBG_CRDTS_RSTDATA & AR_NIC_CE_DBG_CRDTS_MAX_TARB_CREDITS_MASK,
      ._index = AR_NIC_CE_DBG_CRDTS_MAX_TARB_CREDITS_QW,
      ._desc = "Maximum number of outstanding flits the CE can send to the TARB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MAX_NPT_CRDTS",
      ._bpos = AR_NIC_CE_DBG_CRDTS_MAX_NPT_CRDTS_BP,
      ._mask = AR_NIC_CE_DBG_CRDTS_MAX_NPT_CRDTS_MASK,
      ._rval = AR_NIC_CE_DBG_CRDTS_RSTDATA & AR_NIC_CE_DBG_CRDTS_MAX_NPT_CRDTS_MASK,
      ._index = AR_NIC_CE_DBG_CRDTS_MAX_NPT_CRDTS_QW,
      ._desc = "Maximum number of outstanding flits the CE can send to the NPT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_sts_crdts_detail[] = {
    { ._name = "TARB_FCNT",
      ._bpos = AR_NIC_CE_STS_CRDTS_TARB_FCNT_BP,
      ._mask = AR_NIC_CE_STS_CRDTS_TARB_FCNT_MASK,
      ._rval = AR_NIC_CE_STS_CRDTS_RSTDATA & AR_NIC_CE_STS_CRDTS_TARB_FCNT_MASK,
      ._index = AR_NIC_CE_STS_CRDTS_TARB_FCNT_QW,
      ._desc = "Current number of flits outstanding to the TARB",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = "NPT_FCNT",
      ._bpos = AR_NIC_CE_STS_CRDTS_NPT_FCNT_BP,
      ._mask = AR_NIC_CE_STS_CRDTS_NPT_FCNT_MASK,
      ._rval = AR_NIC_CE_STS_CRDTS_RSTDATA & AR_NIC_CE_STS_CRDTS_NPT_FCNT_MASK,
      ._index = AR_NIC_CE_STS_CRDTS_NPT_FCNT_QW,
      ._desc = "Current number of flits outstanding to the NPT",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_cfg_chnl_0_detail[] = {
    { ._name = "CHILD1_TYPE",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_CHILD1_TYPE_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_CHILD1_TYPE_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_CHILD1_TYPE_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_CHILD1_TYPE_QW,
      ._desc = "0 = child 1 not expected, 1 = child 1 is a leaf,  2 = child 1 is a lower level parent",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_ID_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_CE_ID_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_CE_ID_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_CE_ID_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_CE_ID_1_QW,
      ._desc = "child 1's destination (parent) virtual CE number",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_NTT_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_NTT_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_NTT_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_NTT_1_QW,
      ._desc = "Node translation enable for child 1",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_DSTID_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_DSTID_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_DSTID_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_DSTID_1_QW,
      ._desc = "The endpoint NIC for child 1",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_DST_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_DST_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_DST_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_DST_1_QW,
      ._desc = "Destination endpoint",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHILD0_TYPE",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_CHILD0_TYPE_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_CHILD0_TYPE_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_CHILD0_TYPE_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_CHILD0_TYPE_QW,
      ._desc = "0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_ID_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_CE_ID_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_CE_ID_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_CE_ID_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_CE_ID_0_QW,
      ._desc = "destination virtual CE number for child 0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_NTT_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_NTT_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_NTT_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_NTT_0_QW,
      ._desc = "Node translation enable for child 0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_DSTID_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_DSTID_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_DSTID_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_DSTID_0_QW,
      ._desc = "The endpoint NIC for child 0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_0_DST_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_0_DST_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_0_RSTDATA & AR_NIC_CE_CFG_CHNL_0_DST_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_0_DST_0_QW,
      ._desc = "Destination endpoint",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_cfg_chnl_1_detail[] = {
    { ._name = "CHILD1_TYPE",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_CHILD1_TYPE_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_CHILD1_TYPE_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_CHILD1_TYPE_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_CHILD1_TYPE_QW,
      ._desc = "0 = child 1 not expected, 1 = child 1 is a leaf,  2 = child 1 is a lower level parent",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_ID_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_CE_ID_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_CE_ID_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_CE_ID_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_CE_ID_1_QW,
      ._desc = "child 1's destination virtual CE number",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_NTT_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_NTT_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_NTT_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_NTT_1_QW,
      ._desc = "Node translation enable for child 1",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_DSTID_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_DSTID_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_DSTID_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_DSTID_1_QW,
      ._desc = "The endpoint NIC for child 1",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_DST_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_DST_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_DST_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_DST_1_QW,
      ._desc = "Destination endpoint",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHILD0_TYPE",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_CHILD0_TYPE_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_CHILD0_TYPE_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_CHILD0_TYPE_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_CHILD0_TYPE_QW,
      ._desc = "0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_ID_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_CE_ID_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_CE_ID_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_CE_ID_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_CE_ID_0_QW,
      ._desc = "child 0's destination virtual CE number",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_NTT_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_NTT_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_NTT_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_NTT_0_QW,
      ._desc = "Node translation enable for child 0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_DSTID_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_DSTID_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_DSTID_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_DSTID_0_QW,
      ._desc = "The endpoint NIC for child 0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_1_DST_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_1_DST_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_1_RSTDATA & AR_NIC_CE_CFG_CHNL_1_DST_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_1_DST_0_QW,
      ._desc = "Destination endpoint",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_cfg_chnl_2_detail[] = {
    { ._name = "CHILD1_TYPE",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_CHILD1_TYPE_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_CHILD1_TYPE_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_CHILD1_TYPE_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_CHILD1_TYPE_QW,
      ._desc = "0 = child 1 not expected, 1 = child 1 is a leaf,  2 = child 1 is a lower level parent",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_ID_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_CE_ID_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_CE_ID_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_CE_ID_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_CE_ID_1_QW,
      ._desc = "child 1's destination virtual CE number",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_NTT_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_NTT_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_NTT_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_NTT_1_QW,
      ._desc = "Node translation enable for child 1",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_DSTID_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_DSTID_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_DSTID_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_DSTID_1_QW,
      ._desc = "The endpoint NIC for child 1",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_DST_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_DST_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_DST_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_DST_1_QW,
      ._desc = "Destination endpoint",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHILD0_TYPE",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_CHILD0_TYPE_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_CHILD0_TYPE_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_CHILD0_TYPE_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_CHILD0_TYPE_QW,
      ._desc = "0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_ID_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_CE_ID_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_CE_ID_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_CE_ID_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_CE_ID_0_QW,
      ._desc = "child 0's destination virtual CE number",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_NTT_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_NTT_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_NTT_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_NTT_0_QW,
      ._desc = "Node translation enable for child 0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_DSTID_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_DSTID_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_DSTID_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_DSTID_0_QW,
      ._desc = "The endpoint NIC for child 0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_2_DST_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_2_DST_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_2_RSTDATA & AR_NIC_CE_CFG_CHNL_2_DST_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_2_DST_0_QW,
      ._desc = "Destination endpoint",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_ce_cfg_chnl_3_detail[] = {
    { ._name = "CHILD1_TYPE",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_CHILD1_TYPE_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_CHILD1_TYPE_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_CHILD1_TYPE_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_CHILD1_TYPE_QW,
      ._desc = "0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_ID_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_CE_ID_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_CE_ID_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_CE_ID_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_CE_ID_1_QW,
      ._desc = "child 1's destination virtual CE number",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_NTT_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_NTT_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_NTT_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_NTT_1_QW,
      ._desc = "Node translation enable for child 1",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_DSTID_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_DSTID_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_DSTID_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_DSTID_1_QW,
      ._desc = "The endpoint NIC for child 1",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST_1",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_DST_1_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_DST_1_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_DST_1_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_DST_1_QW,
      ._desc = "Destination endpoint",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHILD0_TYPE",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_CHILD0_TYPE_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_CHILD0_TYPE_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_CHILD0_TYPE_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_CHILD0_TYPE_QW,
      ._desc = "0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_ID_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_CE_ID_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_CE_ID_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_CE_ID_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_CE_ID_0_QW,
      ._desc = "child 0's destination virtual CE number",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_NTT_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_NTT_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_NTT_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_NTT_0_QW,
      ._desc = "Node translation enable for child 0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_DSTID_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_DSTID_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_DSTID_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_DSTID_0_QW,
      ._desc = "The endpoint NIC for child 0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST_0",
      ._bpos = AR_NIC_CE_CFG_CHNL_3_DST_0_BP,
      ._mask = AR_NIC_CE_CFG_CHNL_3_DST_0_MASK,
      ._rval = AR_NIC_CE_CFG_CHNL_3_RSTDATA & AR_NIC_CE_CFG_CHNL_3_DST_0_MASK,
      ._index = AR_NIC_CE_CFG_CHNL_3_DST_0_QW,
      ._desc = "Destination endpoint",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR CE DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_rval[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_rmsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_wrmsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_rdmsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RDMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RDMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_xsmsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_XSMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_XSMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_wsemsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_rsemsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_w1smsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_MMR_RING_CCLK_0_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_rval[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_rmsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_wrmsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_rdmsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RDMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_xsmsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_XSMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_wsemsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_rsemsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_w1smsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_MMR_RING_CCLK_0_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_rval[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_rmsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_wrmsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_rdmsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_RDMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_RDMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_xsmsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_XSMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_XSMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_wsemsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_rsemsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_w1smsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_ERR_FLG_1_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_ERR_FLG_1_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_rval[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_rmsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_wrmsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_rdmsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_RDMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_xsmsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_XSMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_wsemsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_rsemsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_w1smsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_err_flg_1_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_ERR_FLG_1_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_ERR_FLG_1_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_rval[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_rval[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_rval[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_rval[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_rval[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_rval[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_rval[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_rval[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_rval[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_rval[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_rval[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_rval[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_rval[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_rval[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_rval[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_rval[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_rval[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_rval[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_rval[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_rval[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_rval[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_rval[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_rval[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_rval[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_rval[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_rval[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_rval[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_rval[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE_HWRMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_rval[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSTDATA_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSTDATA_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_rmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_wrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_WRTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_WRTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_rdmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RDMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RDMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_xsmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_XSMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_XSMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_wsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_WSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_WSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_rsemsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSEMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_RSEMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_w1smsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_W1SMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_W1SMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_w1cmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_W1CMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_W1CMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_wrstmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_WRSTMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_hwwmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_HWWMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_HWWMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_hwrmsk[3] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_HWRMASK_QW1,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE_HWRMASK_QW2
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_rval[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_RSTDATA_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_RSTDATA_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_rmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_RSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_RSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_wrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_WRTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_WRTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_rdmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_RDMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_RDMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_xsmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_XSMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_XSMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_wsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_WSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_WSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_rsemsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_RSEMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_RSEMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_w1smsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_W1SMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_W1SMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_w1cmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_W1CMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_W1CMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_wrstmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_WRSTMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_hwwmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_HWWMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_HWWMASK_QW1
};
static const uint64_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_hwrmsk[2] = {
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_HWRMASK_QW0,
	AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE_HWRMASK_QW1
};

/*
 *  AR CE MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_ce_cfg_in_base = {
    ._name = "AR_NIC_CE_CFG_IN_BASE",
    ._addr = AR_NIC_CE_CFG_IN_BASE,
    ._rval.val = AR_NIC_CE_CFG_IN_BASE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CFG_IN_BASE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CFG_IN_BASE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CFG_IN_BASE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CFG_IN_BASE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CFG_IN_BASE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CFG_IN_BASE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CFG_IN_BASE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CFG_IN_BASE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CFG_IN_BASE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CFG_IN_BASE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CFG_IN_BASE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_cfg_in_base_detail
};
static const cmmr_br_t __ar_nic_ce_mmr_ring_cclk_0_hi_ce = {
    ._name = "AR_NIC_CE_MMR_RING_CCLK_0_HI_CE",
    ._addr = AR_NIC_CE_MMR_RING_CCLK_0_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_mmr_ring_cclk_0_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_mmr_ring_cclk_0_mid_ce = {
    ._name = "AR_NIC_CE_MMR_RING_CCLK_0_MID_CE",
    ._addr = AR_NIC_CE_MMR_RING_CCLK_0_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_mmr_ring_cclk_0_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_mmr_ring_cclk_0_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_mmr_ring_cclk_0_lo_ce = {
    ._name = "AR_NIC_CE_MMR_RING_CCLK_0_LO_CE",
    ._addr = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE,
    ._rval.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_MMR_RING_CCLK_0_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_mmr_ring_cclk_0_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_err_flg_1_hi_ce = {
    ._name = "AR_NIC_CE_ERR_FLG_1_HI_CE",
    ._addr = AR_NIC_CE_ERR_FLG_1_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_flg_1_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_err_flg_1_mid_ce = {
    ._name = "AR_NIC_CE_ERR_FLG_1_MID_CE",
    ._addr = AR_NIC_CE_ERR_FLG_1_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_err_flg_1_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_flg_1_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_err_flg_1_lo_ce = {
    ._name = "AR_NIC_CE_ERR_FLG_1_LO_CE",
    ._addr = AR_NIC_CE_ERR_FLG_1_LO_CE,
    ._rval.val = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_FLG_1_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_flg_1_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data2_cclk_2_hi_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data2_cclk_2_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data2_cclk_2_mid_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data2_cclk_2_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data2_cclk_2_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data2_cclk_2_lo_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE,
    ._rval.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_INPUT_DATA2_CCLK_2_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data2_cclk_2_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data3_cclk_3_hi_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data3_cclk_3_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data3_cclk_3_mid_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data3_cclk_3_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data3_cclk_3_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data3_cclk_3_lo_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE,
    ._rval.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_INPUT_DATA3_CCLK_3_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data3_cclk_3_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data4_cclk_4_hi_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data4_cclk_4_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data4_cclk_4_mid_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data4_cclk_4_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data4_cclk_4_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data4_cclk_4_lo_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE,
    ._rval.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_INPUT_DATA4_CCLK_4_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data4_cclk_4_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data5_cclk_5_hi_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data5_cclk_5_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data5_cclk_5_mid_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data5_cclk_5_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data5_cclk_5_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data5_cclk_5_lo_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE,
    ._rval.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_INPUT_DATA5_CCLK_5_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data5_cclk_5_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data6_cclk_6_hi_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data6_cclk_6_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data6_cclk_6_mid_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data6_cclk_6_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data6_cclk_6_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data6_cclk_6_lo_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE,
    ._rval.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_INPUT_DATA6_CCLK_6_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data6_cclk_6_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data7_cclk_7_hi_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data7_cclk_7_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data7_cclk_7_mid_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_input_data7_cclk_7_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data7_cclk_7_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_input_data7_cclk_7_lo_ce = {
    ._name = "AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE",
    ._addr = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE,
    ._rval.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_INPUT_DATA7_CCLK_7_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_input_data7_cclk_7_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data7_cclk_8_lo_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE,
    ._rval.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_REDENGN_DATA7_CCLK_8_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data7_cclk_8_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data6_cclk_9_lo_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE,
    ._rval.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_REDENGN_DATA6_CCLK_9_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data6_cclk_9_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data5_cclk_a_lo_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE,
    ._rval.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_REDENGN_DATA5_CCLK_A_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data5_cclk_a_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_redengn_data0_cclk_b_lo_ce = {
    ._name = "AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE",
    ._addr = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE,
    ._rval.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_REDENGN_DATA0_CCLK_B_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_redengn_data0_cclk_b_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data19_cclk_c_hi_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data19_cclk_c_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data19_cclk_c_mid_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data19_cclk_c_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data19_cclk_c_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data19_cclk_c_lo_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE,
    ._rval.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_REQ_DATA19_CCLK_C_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data19_cclk_c_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data18_cclk_d_hi_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data18_cclk_d_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data18_cclk_d_mid_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data18_cclk_d_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data18_cclk_d_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data18_cclk_d_lo_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE,
    ._rval.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_REQ_DATA18_CCLK_D_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data18_cclk_d_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data17_cclk_e_hi_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data17_cclk_e_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data17_cclk_e_mid_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data17_cclk_e_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data17_cclk_e_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data17_cclk_e_lo_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE,
    ._rval.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_REQ_DATA17_CCLK_E_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data17_cclk_e_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data2_cclk_f_hi_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data2_cclk_f_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data2_cclk_f_mid_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data2_cclk_f_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data2_cclk_f_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data2_cclk_f_lo_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE,
    ._rval.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_REQ_DATA2_CCLK_F_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data2_cclk_f_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data0_cclk_10_hi_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_HI_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_hi_ce_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data0_cclk_10_hi_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data0_cclk_10_mid_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_MID_CE,
    ._rval.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_ce_ce_req_data0_cclk_10_mid_ce_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data0_cclk_10_mid_ce_detail
};
static const cmmr_br_t __ar_nic_ce_ce_req_data0_cclk_10_lo_ce = {
    ._name = "AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE",
    ._addr = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE,
    ._rval.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CE_REQ_DATA0_CCLK_10_LO_CE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_ce_req_data0_cclk_10_lo_ce_detail
};
static const cmmr_br_t __ar_nic_ce_cfg_out_base = {
    ._name = "AR_NIC_CE_CFG_OUT_BASE",
    ._addr = AR_NIC_CE_CFG_OUT_BASE,
    ._rval.val = AR_NIC_CE_CFG_OUT_BASE_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CFG_OUT_BASE_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CFG_OUT_BASE_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CFG_OUT_BASE_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CFG_OUT_BASE_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CFG_OUT_BASE_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CFG_OUT_BASE_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CFG_OUT_BASE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CFG_OUT_BASE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CFG_OUT_BASE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CFG_OUT_BASE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CFG_OUT_BASE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_cfg_out_base_detail
};
static const cmmr_br_t __ar_nic_ce_err_flg = {
    ._name = "AR_NIC_CE_ERR_FLG",
    ._addr = AR_NIC_CE_ERR_FLG,
    ._rval.val = AR_NIC_CE_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x00000000001dc011ull,
    ._info = __ar_nic_ce_err_flg_detail
};
static const cmmr_br_t __ar_nic_ce_err_clr = {
    ._name = "AR_NIC_CE_ERR_CLR",
    ._addr = AR_NIC_CE_ERR_CLR,
    ._rval.val = AR_NIC_CE_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000021ull,
    ._info = __ar_nic_ce_err_clr_detail
};
static const cmmr_br_t __ar_nic_ce_err_hss_msk = {
    ._name = "AR_NIC_CE_ERR_HSS_MSK",
    ._addr = AR_NIC_CE_ERR_HSS_MSK,
    ._rval.val = AR_NIC_CE_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000041ull,
    ._info = __ar_nic_ce_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_ce_err_os_msk = {
    ._name = "AR_NIC_CE_ERR_OS_MSK",
    ._addr = AR_NIC_CE_ERR_OS_MSK,
    ._rval.val = AR_NIC_CE_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000081ull,
    ._info = __ar_nic_ce_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_ce_err_first_flg = {
    ._name = "AR_NIC_CE_ERR_FIRST_FLG",
    ._addr = AR_NIC_CE_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_CE_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000401ull,
    ._info = __ar_nic_ce_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_ce_err_req_info = {
    ._name = "AR_NIC_CE_ERR_REQ_INFO",
    ._addr = AR_NIC_CE_ERR_REQ_INFO,
    ._rval.val = AR_NIC_CE_ERR_REQ_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_REQ_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_REQ_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_REQ_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_REQ_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_REQ_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_REQ_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_REQ_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_REQ_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_REQ_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_REQ_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_REQ_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_req_info_detail
};
static const cmmr_br_t __ar_nic_ce_err_op_info = {
    ._name = "AR_NIC_CE_ERR_OP_INFO",
    ._addr = AR_NIC_CE_ERR_OP_INFO,
    ._rval.val = AR_NIC_CE_ERR_OP_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_OP_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_OP_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_OP_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_OP_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_OP_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_OP_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_OP_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_OP_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_OP_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_OP_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_OP_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_op_info_detail
};
static const cmmr_br_t __ar_nic_ce_err_inv_info = {
    ._name = "AR_NIC_CE_ERR_INV_INFO",
    ._addr = AR_NIC_CE_ERR_INV_INFO,
    ._rval.val = AR_NIC_CE_ERR_INV_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_INV_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_INV_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_INV_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_INV_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_INV_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_INV_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_INV_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_INV_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_INV_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_INV_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_INV_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_inv_info_detail
};
static const cmmr_br_t __ar_nic_ce_err_reject_info = {
    ._name = "AR_NIC_CE_ERR_REJECT_INFO",
    ._addr = AR_NIC_CE_ERR_REJECT_INFO,
    ._rval.val = AR_NIC_CE_ERR_REJECT_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_REJECT_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_REJECT_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_REJECT_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_REJECT_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_REJECT_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_REJECT_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_REJECT_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_REJECT_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_REJECT_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_REJECT_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_REJECT_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_reject_info_detail
};
static const cmmr_br_t __ar_nic_ce_err_match_info = {
    ._name = "AR_NIC_CE_ERR_MATCH_INFO",
    ._addr = AR_NIC_CE_ERR_MATCH_INFO,
    ._rval.val = AR_NIC_CE_ERR_MATCH_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_MATCH_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_MATCH_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_MATCH_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_MATCH_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_MATCH_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_MATCH_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_MATCH_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_MATCH_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_MATCH_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_MATCH_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_MATCH_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_match_info_detail
};
static const cmmr_br_t __ar_nic_ce_err_chk_info = {
    ._name = "AR_NIC_CE_ERR_CHK_INFO",
    ._addr = AR_NIC_CE_ERR_CHK_INFO,
    ._rval.val = AR_NIC_CE_ERR_CHK_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_CHK_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_CHK_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_CHK_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_CHK_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_CHK_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_CHK_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_CHK_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_CHK_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_CHK_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_CHK_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_CHK_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_chk_info_detail
};
static const cmmr_br_t __ar_nic_ce_err_adderr_info = {
    ._name = "AR_NIC_CE_ERR_ADDERR_INFO",
    ._addr = AR_NIC_CE_ERR_ADDERR_INFO,
    ._rval.val = AR_NIC_CE_ERR_ADDERR_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_ERR_ADDERR_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_ERR_ADDERR_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_ERR_ADDERR_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_ERR_ADDERR_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_ERR_ADDERR_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_ERR_ADDERR_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_ERR_ADDERR_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_ERR_ADDERR_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_ERR_ADDERR_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_ERR_ADDERR_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_ERR_ADDERR_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_err_adderr_info_detail
};
static const cmmr_br_t __ar_nic_ce_sts_chnl_0_info = {
    ._name = "AR_NIC_CE_STS_CHNL_0_INFO",
    ._addr = AR_NIC_CE_STS_CHNL_0_INFO,
    ._rval.val = AR_NIC_CE_STS_CHNL_0_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_STS_CHNL_0_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_STS_CHNL_0_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_STS_CHNL_0_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_STS_CHNL_0_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_STS_CHNL_0_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_STS_CHNL_0_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_STS_CHNL_0_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_STS_CHNL_0_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_STS_CHNL_0_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_STS_CHNL_0_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_STS_CHNL_0_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_ce_sts_chnl_0_info_detail
};
static const cmmr_br_t __ar_nic_ce_sts_chnl_1_info = {
    ._name = "AR_NIC_CE_STS_CHNL_1_INFO",
    ._addr = AR_NIC_CE_STS_CHNL_1_INFO,
    ._rval.val = AR_NIC_CE_STS_CHNL_1_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_STS_CHNL_1_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_STS_CHNL_1_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_STS_CHNL_1_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_STS_CHNL_1_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_STS_CHNL_1_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_STS_CHNL_1_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_STS_CHNL_1_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_STS_CHNL_1_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_STS_CHNL_1_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_STS_CHNL_1_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_STS_CHNL_1_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_ce_sts_chnl_1_info_detail
};
static const cmmr_br_t __ar_nic_ce_sts_chnl_2_info = {
    ._name = "AR_NIC_CE_STS_CHNL_2_INFO",
    ._addr = AR_NIC_CE_STS_CHNL_2_INFO,
    ._rval.val = AR_NIC_CE_STS_CHNL_2_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_STS_CHNL_2_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_STS_CHNL_2_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_STS_CHNL_2_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_STS_CHNL_2_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_STS_CHNL_2_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_STS_CHNL_2_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_STS_CHNL_2_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_STS_CHNL_2_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_STS_CHNL_2_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_STS_CHNL_2_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_STS_CHNL_2_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_ce_sts_chnl_2_info_detail
};
static const cmmr_br_t __ar_nic_ce_sts_chnl_3_info = {
    ._name = "AR_NIC_CE_STS_CHNL_3_INFO",
    ._addr = AR_NIC_CE_STS_CHNL_3_INFO,
    ._rval.val = AR_NIC_CE_STS_CHNL_3_INFO_RSTDATA,
    ._rmsk.val = AR_NIC_CE_STS_CHNL_3_INFO_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_STS_CHNL_3_INFO_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_STS_CHNL_3_INFO_RDMASK,
    ._xsmsk.val = AR_NIC_CE_STS_CHNL_3_INFO_XSMASK,
    ._wsemsk.val = AR_NIC_CE_STS_CHNL_3_INFO_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_STS_CHNL_3_INFO_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_STS_CHNL_3_INFO_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_STS_CHNL_3_INFO_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_STS_CHNL_3_INFO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_STS_CHNL_3_INFO_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_STS_CHNL_3_INFO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_ce_sts_chnl_3_info_detail
};
static const cmmr_br_t __ar_nic_ce_dbg_errinj_input = {
    ._name = "AR_NIC_CE_DBG_ERRINJ_INPUT",
    ._addr = AR_NIC_CE_DBG_ERRINJ_INPUT,
    ._rval.val = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTDATA,
    ._rmsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_RDMASK,
    ._xsmsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_XSMASK,
    ._wsemsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_DBG_ERRINJ_INPUT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_dbg_errinj_input_detail
};
static const cmmr_br_t __ar_nic_ce_dbg_errinj_redengn = {
    ._name = "AR_NIC_CE_DBG_ERRINJ_REDENGN",
    ._addr = AR_NIC_CE_DBG_ERRINJ_REDENGN,
    ._rval.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTDATA,
    ._rmsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_RDMASK,
    ._xsmsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_XSMASK,
    ._wsemsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_DBG_ERRINJ_REDENGN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_dbg_errinj_redengn_detail
};
static const cmmr_br_t __ar_nic_ce_dbg_errinj_child_cfg = {
    ._name = "AR_NIC_CE_DBG_ERRINJ_CHILD_CFG",
    ._addr = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG,
    ._rval.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RSTDATA,
    ._rmsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RDMASK,
    ._xsmsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_XSMASK,
    ._wsemsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_DBG_ERRINJ_CHILD_CFG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_dbg_errinj_child_cfg_detail
};
static const cmmr_br_t __ar_nic_ce_dbg_crdts = {
    ._name = "AR_NIC_CE_DBG_CRDTS",
    ._addr = AR_NIC_CE_DBG_CRDTS,
    ._rval.val = AR_NIC_CE_DBG_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_CE_DBG_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_DBG_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_DBG_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_CE_DBG_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_CE_DBG_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_DBG_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_DBG_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_DBG_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_DBG_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_DBG_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_DBG_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_ce_dbg_crdts_detail
};
static const cmmr_br_t __ar_nic_ce_sts_crdts = {
    ._name = "AR_NIC_CE_STS_CRDTS",
    ._addr = AR_NIC_CE_STS_CRDTS,
    ._rval.val = AR_NIC_CE_STS_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_CE_STS_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_STS_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_STS_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_CE_STS_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_CE_STS_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_STS_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_STS_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_STS_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_STS_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_STS_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_STS_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_ce_sts_crdts_detail
};
static const cmmr_br_t __ar_nic_ce_cfg_chnl_0 = {
    ._name = "AR_NIC_CE_CFG_CHNL_0",
    ._addr = AR_NIC_CE_CFG_CHNL_0,
    ._rval.val = AR_NIC_CE_CFG_CHNL_0_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CFG_CHNL_0_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CFG_CHNL_0_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CFG_CHNL_0_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CFG_CHNL_0_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CFG_CHNL_0_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CFG_CHNL_0_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CFG_CHNL_0_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CFG_CHNL_0_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CFG_CHNL_0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CFG_CHNL_0_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CFG_CHNL_0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 16,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_ce_cfg_chnl_0_detail
};
static const cmmr_br_t __ar_nic_ce_cfg_chnl_1 = {
    ._name = "AR_NIC_CE_CFG_CHNL_1",
    ._addr = AR_NIC_CE_CFG_CHNL_1,
    ._rval.val = AR_NIC_CE_CFG_CHNL_1_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CFG_CHNL_1_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CFG_CHNL_1_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CFG_CHNL_1_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CFG_CHNL_1_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CFG_CHNL_1_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CFG_CHNL_1_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CFG_CHNL_1_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CFG_CHNL_1_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CFG_CHNL_1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CFG_CHNL_1_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CFG_CHNL_1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 16,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_ce_cfg_chnl_1_detail
};
static const cmmr_br_t __ar_nic_ce_cfg_chnl_2 = {
    ._name = "AR_NIC_CE_CFG_CHNL_2",
    ._addr = AR_NIC_CE_CFG_CHNL_2,
    ._rval.val = AR_NIC_CE_CFG_CHNL_2_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CFG_CHNL_2_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CFG_CHNL_2_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CFG_CHNL_2_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CFG_CHNL_2_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CFG_CHNL_2_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CFG_CHNL_2_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CFG_CHNL_2_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CFG_CHNL_2_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CFG_CHNL_2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CFG_CHNL_2_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CFG_CHNL_2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 16,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_ce_cfg_chnl_2_detail
};
static const cmmr_br_t __ar_nic_ce_cfg_chnl_3 = {
    ._name = "AR_NIC_CE_CFG_CHNL_3",
    ._addr = AR_NIC_CE_CFG_CHNL_3,
    ._rval.val = AR_NIC_CE_CFG_CHNL_3_RSTDATA,
    ._rmsk.val = AR_NIC_CE_CFG_CHNL_3_RSTMASK,
    ._wrmsk.val = AR_NIC_CE_CFG_CHNL_3_WRTMASK,
    ._rdmsk.val = AR_NIC_CE_CFG_CHNL_3_RDMASK,
    ._xsmsk.val = AR_NIC_CE_CFG_CHNL_3_XSMASK,
    ._wsemsk.val = AR_NIC_CE_CFG_CHNL_3_WSEMASK,
    ._rsemsk.val = AR_NIC_CE_CFG_CHNL_3_RSEMASK,
    ._w1smsk.val = AR_NIC_CE_CFG_CHNL_3_W1SMASK,
    ._w1cmsk.val = AR_NIC_CE_CFG_CHNL_3_W1CMASK,
    ._wrstmsk.val = AR_NIC_CE_CFG_CHNL_3_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CE_CFG_CHNL_3_HWWMASK,
    ._hwrmsk.val = AR_NIC_CE_CFG_CHNL_3_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 16,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_ce_cfg_chnl_3_detail
};

/*
 *  INSTALL AR CE MMRS
 */
static const cmmr_br_t* __ar_ce_mmrs[] = {
    &__ar_nic_ce_cfg_in_base,
    &__ar_nic_ce_cfg_out_base,
    &__ar_nic_ce_err_flg,
    &__ar_nic_ce_err_clr,
    &__ar_nic_ce_err_hss_msk,
    &__ar_nic_ce_err_os_msk,
    &__ar_nic_ce_err_first_flg,
    &__ar_nic_ce_err_req_info,
    &__ar_nic_ce_err_op_info,
    &__ar_nic_ce_err_inv_info,
    &__ar_nic_ce_err_reject_info,
    &__ar_nic_ce_err_match_info,
    &__ar_nic_ce_err_chk_info,
    &__ar_nic_ce_err_adderr_info,
    &__ar_nic_ce_sts_chnl_0_info,
    &__ar_nic_ce_sts_chnl_1_info,
    &__ar_nic_ce_sts_chnl_2_info,
    &__ar_nic_ce_sts_chnl_3_info,
    &__ar_nic_ce_dbg_errinj_input,
    &__ar_nic_ce_dbg_errinj_redengn,
    &__ar_nic_ce_dbg_errinj_child_cfg,
    &__ar_nic_ce_dbg_crdts,
    &__ar_nic_ce_sts_crdts,
    &__ar_nic_ce_cfg_chnl_0,
    &__ar_nic_ce_cfg_chnl_1,
    &__ar_nic_ce_cfg_chnl_2,
    &__ar_nic_ce_cfg_chnl_3,
    NULL
};

/*
 *  INSTALL AR CE LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_ce_enc_mmrs[] = {
    &__ar_nic_ce_mmr_ring_cclk_0_hi_ce,
    &__ar_nic_ce_mmr_ring_cclk_0_mid_ce,
    &__ar_nic_ce_mmr_ring_cclk_0_lo_ce,
    &__ar_nic_ce_err_flg_1_hi_ce,
    &__ar_nic_ce_err_flg_1_mid_ce,
    &__ar_nic_ce_err_flg_1_lo_ce,
    &__ar_nic_ce_ce_input_data2_cclk_2_hi_ce,
    &__ar_nic_ce_ce_input_data2_cclk_2_mid_ce,
    &__ar_nic_ce_ce_input_data2_cclk_2_lo_ce,
    &__ar_nic_ce_ce_input_data3_cclk_3_hi_ce,
    &__ar_nic_ce_ce_input_data3_cclk_3_mid_ce,
    &__ar_nic_ce_ce_input_data3_cclk_3_lo_ce,
    &__ar_nic_ce_ce_input_data4_cclk_4_hi_ce,
    &__ar_nic_ce_ce_input_data4_cclk_4_mid_ce,
    &__ar_nic_ce_ce_input_data4_cclk_4_lo_ce,
    &__ar_nic_ce_ce_input_data5_cclk_5_hi_ce,
    &__ar_nic_ce_ce_input_data5_cclk_5_mid_ce,
    &__ar_nic_ce_ce_input_data5_cclk_5_lo_ce,
    &__ar_nic_ce_ce_input_data6_cclk_6_hi_ce,
    &__ar_nic_ce_ce_input_data6_cclk_6_mid_ce,
    &__ar_nic_ce_ce_input_data6_cclk_6_lo_ce,
    &__ar_nic_ce_ce_input_data7_cclk_7_hi_ce,
    &__ar_nic_ce_ce_input_data7_cclk_7_mid_ce,
    &__ar_nic_ce_ce_input_data7_cclk_7_lo_ce,
    &__ar_nic_ce_ce_redengn_data7_cclk_8_hi_ce,
    &__ar_nic_ce_ce_redengn_data7_cclk_8_mid_ce,
    &__ar_nic_ce_ce_redengn_data7_cclk_8_lo_ce,
    &__ar_nic_ce_ce_redengn_data6_cclk_9_hi_ce,
    &__ar_nic_ce_ce_redengn_data6_cclk_9_mid_ce,
    &__ar_nic_ce_ce_redengn_data6_cclk_9_lo_ce,
    &__ar_nic_ce_ce_redengn_data5_cclk_a_hi_ce,
    &__ar_nic_ce_ce_redengn_data5_cclk_a_mid_ce,
    &__ar_nic_ce_ce_redengn_data5_cclk_a_lo_ce,
    &__ar_nic_ce_ce_redengn_data0_cclk_b_hi_ce,
    &__ar_nic_ce_ce_redengn_data0_cclk_b_mid_ce,
    &__ar_nic_ce_ce_redengn_data0_cclk_b_lo_ce,
    &__ar_nic_ce_ce_req_data19_cclk_c_hi_ce,
    &__ar_nic_ce_ce_req_data19_cclk_c_mid_ce,
    &__ar_nic_ce_ce_req_data19_cclk_c_lo_ce,
    &__ar_nic_ce_ce_req_data18_cclk_d_hi_ce,
    &__ar_nic_ce_ce_req_data18_cclk_d_mid_ce,
    &__ar_nic_ce_ce_req_data18_cclk_d_lo_ce,
    &__ar_nic_ce_ce_req_data17_cclk_e_hi_ce,
    &__ar_nic_ce_ce_req_data17_cclk_e_mid_ce,
    &__ar_nic_ce_ce_req_data17_cclk_e_lo_ce,
    &__ar_nic_ce_ce_req_data2_cclk_f_hi_ce,
    &__ar_nic_ce_ce_req_data2_cclk_f_mid_ce,
    &__ar_nic_ce_ce_req_data2_cclk_f_lo_ce,
    &__ar_nic_ce_ce_req_data0_cclk_10_hi_ce,
    &__ar_nic_ce_ce_req_data0_cclk_10_mid_ce,
    &__ar_nic_ce_ce_req_data0_cclk_10_lo_ce,
    NULL
};

#endif
