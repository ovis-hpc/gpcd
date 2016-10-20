/******************************************************************************
 * COPYRIGHT CRAY INC. ar_npt_detailed_mmrs_h.h
 * FILE: ar_npt_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:01 2014
 ******************************************************************************/
/**
 * @file ar_npt_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:01 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_npt_mmr_values.h and ar_npt_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_npt_mmr_values.h"

#ifndef _AR_NPT_DETAILED_MMRS_H_H_
#define _AR_NPT_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_npt_mmrs[];	/* NPT Array */

/*
 *  AR NPT MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_npt_cfg_params_detail[] = {
    { ._name = "ALL_INTEGRITY_ERRS",
      ._bpos = AR_NIC_NPT_CFG_PARAMS_ALL_INTEGRITY_ERRS_BP,
      ._mask = AR_NIC_NPT_CFG_PARAMS_ALL_INTEGRITY_ERRS_MASK,
      ._rval = AR_NIC_NPT_CFG_PARAMS_RSTDATA & AR_NIC_NPT_CFG_PARAMS_ALL_INTEGRITY_ERRS_MASK,
      ._index = AR_NIC_NPT_CFG_PARAMS_ALL_INTEGRITY_ERRS_QW,
      ._desc = "Set this to have the NPT report all response packet integrity errors, even for responses destined for other blocks",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_CE",
      ._bpos = AR_NIC_NPT_CFG_PARAMS_SF_CE_BP,
      ._mask = AR_NIC_NPT_CFG_PARAMS_SF_CE_MASK,
      ._rval = AR_NIC_NPT_CFG_PARAMS_RSTDATA & AR_NIC_NPT_CFG_PARAMS_SF_CE_MASK,
      ._index = AR_NIC_NPT_CFG_PARAMS_SF_CE_QW,
      ._desc = "Enable store-and-forward for CE response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_P",
      ._bpos = AR_NIC_NPT_CFG_PARAMS_SF_P_BP,
      ._mask = AR_NIC_NPT_CFG_PARAMS_SF_P_MASK,
      ._rval = AR_NIC_NPT_CFG_PARAMS_RSTDATA & AR_NIC_NPT_CFG_PARAMS_SF_P_MASK,
      ._index = AR_NIC_NPT_CFG_PARAMS_SF_P_QW,
      ._desc = "Enable store-and-forward for posted response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_RMT",
      ._bpos = AR_NIC_NPT_CFG_PARAMS_SF_RMT_BP,
      ._mask = AR_NIC_NPT_CFG_PARAMS_SF_RMT_MASK,
      ._rval = AR_NIC_NPT_CFG_PARAMS_RSTDATA & AR_NIC_NPT_CFG_PARAMS_SF_RMT_MASK,
      ._index = AR_NIC_NPT_CFG_PARAMS_SF_RMT_QW,
      ._desc = "Set to enable store-and-forward on request RMT FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_CQ",
      ._bpos = AR_NIC_NPT_CFG_PARAMS_SF_CQ_BP,
      ._mask = AR_NIC_NPT_CFG_PARAMS_SF_CQ_MASK,
      ._rval = AR_NIC_NPT_CFG_PARAMS_RSTDATA & AR_NIC_NPT_CFG_PARAMS_SF_CQ_MASK,
      ._index = AR_NIC_NPT_CFG_PARAMS_SF_CQ_QW,
      ._desc = "Set to enable store-and-forward on CQ request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TIMEOUT_ENABLE",
      ._bpos = AR_NIC_NPT_CFG_PARAMS_TIMEOUT_ENABLE_BP,
      ._mask = AR_NIC_NPT_CFG_PARAMS_TIMEOUT_ENABLE_MASK,
      ._rval = AR_NIC_NPT_CFG_PARAMS_RSTDATA & AR_NIC_NPT_CFG_PARAMS_TIMEOUT_ENABLE_MASK,
      ._index = AR_NIC_NPT_CFG_PARAMS_TIMEOUT_ENABLE_QW,
      ._desc = "Enable timeout mechanism",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENTRY_TIMEOUT_PERIOD",
      ._bpos = AR_NIC_NPT_CFG_PARAMS_ENTRY_TIMEOUT_PERIOD_BP,
      ._mask = AR_NIC_NPT_CFG_PARAMS_ENTRY_TIMEOUT_PERIOD_MASK,
      ._rval = AR_NIC_NPT_CFG_PARAMS_RSTDATA & AR_NIC_NPT_CFG_PARAMS_ENTRY_TIMEOUT_PERIOD_MASK,
      ._index = AR_NIC_NPT_CFG_PARAMS_ENTRY_TIMEOUT_PERIOD_QW,
      ._desc = "Number of clock cycles to periodically take a snapshot of the valid entries and scrub the NPT of stale entries",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_detail[] = {
    { ._name = "UNUSED_145_75",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_UNUSED_145_75_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_UNUSED_145_75_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_UNUSED_145_75_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_UNUSED_145_75_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_detail[] = {
    { ._name = "UNUSED_127_112",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_UNUSED_127_112_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_UNUSED_127_112_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_UNUSED_127_112_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_UNUSED_127_112_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_MBE",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_MBE_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_MBE_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_MBE_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_MBE_QW,
      ._desc = "MBE in response payload",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_SBE",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_SBE_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_SBE_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_SBE_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_SBE_QW,
      ._desc = "SBE in response payload",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_PE",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_PE_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_PE_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_PE_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_PE_QW,
      ._desc = "Parity error in response header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_PE",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_REQ_PE_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_REQ_PE_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_REQ_PE_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_REQ_PE_QW,
      ._desc = "Parity error in request header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ERR_MBE",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_ERR_MBE_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_ERR_MBE_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_ERR_MBE_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_ERR_MBE_QW,
      ._desc = "MBE's on NPT RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ERR_SBE",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_ERR_SBE_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_ERR_SBE_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_ERR_SBE_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_ERR_SBE_QW,
      ._desc = "SBE's on NPT RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PKT_CW",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_CW_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_CW_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_CW_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_CW_QW,
      ._desc = "PI packets (completion wait flush response)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PKT_DROP",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_DROP_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_DROP_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_DROP_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_DROP_QW,
      ._desc = "PI packets intended for the NPT but dropped (either response suppressed or MBE on NPT RAM)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PKT_IGNORE",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_IGNORE_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_IGNORE_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_IGNORE_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_PKT_IGNORE_QW,
      ._desc = "PI packets not intended for the NPT (including unsolicited and parity errors)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_FLIT",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_FLIT_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_FLIT_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_FLIT_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_FLIT_QW,
      ._desc = "PI response flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_PKT",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_PKT_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_PKT_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_PKT_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RSP_PKT_QW,
      ._desc = "PI response packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NL_STALLED",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_STALLED_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_STALLED_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_STALLED_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_STALLED_QW,
      ._desc = "NL response stalled count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NL_FLITS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_FLITS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_FLITS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_FLITS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_FLITS_QW,
      ._desc = "NL response flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NL_PKTS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_PKTS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_PKTS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_PKTS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NL_PKTS_QW,
      ._desc = "NL response packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CE_BLOCKED",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CE_BLOCKED_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CE_BLOCKED_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CE_BLOCKED_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CE_BLOCKED_QW,
      ._desc = "CE response blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CE_PKTS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CE_PKTS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CE_PKTS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CE_PKTS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CE_PKTS_QW,
      ._desc = "CE response packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_P_BLOCKED",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_P_BLOCKED_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_P_BLOCKED_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_P_BLOCKED_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_P_BLOCKED_QW,
      ._desc = "Posted response blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_P_PKTS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_P_PKTS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_P_PKTS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_P_PKTS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_P_PKTS_QW,
      ._desc = "Posted response packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NP_BLOCKED",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_BLOCKED_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_BLOCKED_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_BLOCKED_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_BLOCKED_QW,
      ._desc = "Non-Posted response blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NP_FLITS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_FLITS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_FLITS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_FLITS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_FLITS_QW,
      ._desc = "Non-Posted response flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NP_PKTS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_PKTS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_PKTS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_PKTS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_NP_PKTS_QW,
      ._desc = "Non-Posted response packet count (packets that are not PKT_IGNORE, PKT_DROP, or PKT_CW)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_INPUT_STALLED",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_STALLED_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_STALLED_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_STALLED_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_STALLED_QW,
      ._desc = "INPUT (RMT or CQ) stalled count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_INPUT_FLITS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_FLITS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_FLITS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_FLITS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_FLITS_QW,
      ._desc = "INPUT (RMT or CQ) flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_INPUT_PKTS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_PKTS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_PKTS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_PKTS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_INPUT_PKTS_QW,
      ._desc = "INPUT (RMT or CQ) packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RMT_BLOCKED",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_BLOCKED_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_BLOCKED_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_BLOCKED_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_BLOCKED_QW,
      ._desc = "RMT input blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RMT_FLITS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_FLITS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_FLITS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_FLITS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_FLITS_QW,
      ._desc = "RMT input flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RMT_PKTS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_PKTS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_PKTS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_PKTS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_RMT_PKTS_QW,
      ._desc = "RMT input packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CQ_BLOCKED",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_BLOCKED_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_BLOCKED_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_BLOCKED_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_BLOCKED_QW,
      ._desc = "CQ input blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CQ_FLITS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_FLITS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_FLITS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_FLITS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_FLITS_QW,
      ._desc = "CQ input flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CQ_PKTS",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_PKTS_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_PKTS_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_PKTS_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_CNTR_CQ_PKTS_QW,
      ._desc = "CQ input packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_75",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_UNUSED_81_75_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_UNUSED_81_75_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_UNUSED_81_75_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_UNUSED_81_75_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_CQ_RMT_RDY",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_DBG_CQ_RMT_RDY_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_DBG_CQ_RMT_RDY_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_DBG_CQ_RMT_RDY_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_DBG_CQ_RMT_RDY_QW,
      ._desc = "Ready signals from ordering logic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_REQPKT",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_DBG_REQPKT_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_DBG_REQPKT_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_DBG_REQPKT_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_DBG_REQPKT_QW,
      ._desc = "PI request packet information {src,srcid,pktid,np_req,npt_tag,valid}",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_mmr_ring_0_lo_npt_detail[] = {
    { ._name = "DBG_REQPKT",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_DBG_REQPKT_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_DBG_REQPKT_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RSTDATA & AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_DBG_REQPKT_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_DBG_REQPKT_QW,
      ._desc = "PI request packet information {src,srcid,pktid,np_req,npt_tag,valid}",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NPT_PI_OS_IRQ",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_PI_OS_IRQ_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RSTDATA & AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_PI_OS_IRQ_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_PI_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NPT_LB_HSS_IRQ",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RSTDATA & AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_LB_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NPT_RSPMON_RING_WRACK",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_RSPMON_RING_WRACK_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_RSPMON_RING_WRACK_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RSTDATA & AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_RSPMON_RING_WRACK_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_RSPMON_RING_WRACK_QW,
      ._desc = "RSPMON Write Acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NPT_RSPMON_RING_15_0",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_RSPMON_RING_15_0_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_RSPMON_RING_15_0_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RSTDATA & AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_RSPMON_RING_15_0_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_R_Q_NPT_RSPMON_RING_15_0_QW,
      ._desc = "RSPMON Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPMON_NPT_RING_15_0",
      ._bpos = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_I_RSPMON_NPT_RING_15_0_BP,
      ._mask = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_I_RSPMON_NPT_RING_15_0_MASK,
      ._rval = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RSTDATA & AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_I_RSPMON_NPT_RING_15_0_MASK,
      ._index = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_I_RSPMON_NPT_RING_15_0_QW,
      ._desc = "RSPMON Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_flg_1_hi_npt_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_HI_NPT_UNUSED_145_128_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_HI_NPT_UNUSED_145_128_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_ERR_FLG_1_HI_NPT_UNUSED_145_128_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_HI_NPT_UNUSED_145_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_flg_1_mid_npt_detail[] = {
    { ._name = "UNUSED_127_88",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_UNUSED_127_88_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_UNUSED_127_88_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_UNUSED_127_88_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_UNUSED_127_88_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NL_CRDT_UNFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NL_CRDT_UNFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NL_CRDT_UNFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_NL_CRDT_UNFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NL_CRDT_UNFLW_QW,
      ._desc = "A credit was returned from the NL, but the credit counter was already zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CW_DROP",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CW_DROP_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CW_DROP_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_CW_DROP_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CW_DROP_QW,
      ._desc = "The completion wait flush response was dropped because the rstatus field indicated an error (see related error info)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_FLIT_MBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_MBE_QW,
      ._desc = "An MBE was detected in the response payload flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_FLIT_SBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_SBE_QW,
      ._desc = "An SBE was detected in the response payload flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSP_FLIT_PE_QW,
      ._desc = "A parity error was detected in the response flit header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_REQ_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_REQ_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_REQ_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_REQ_FLIT_PE_QW,
      ._desc = "A parity error was detected in the request flit header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CMD_MISMATCH_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_CMD_MISMATCH_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CMD_MISMATCH_QW,
      ._desc = "The incoming response had an unexpected resposne command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNSOLICITED_RSP",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_UNSOLICITED_RSP_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_UNSOLICITED_RSP_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_UNSOLICITED_RSP_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_UNSOLICITED_RSP_QW,
      ._desc = "The incoming response targeted an invalid NPT entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_TIMEOUT_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_TIMEOUT_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_TIMEOUT_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_TIMEOUT_QW,
      ._desc = "One or more stale entries were timed out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NPT_RAM_SBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NPT_RAM_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NPT_RAM_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_NPT_RAM_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NPT_RAM_SBE_QW,
      ._desc = "An SBE reading the NPT entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NPT_RAM_MBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NPT_RAM_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NPT_RAM_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_NPT_RAM_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NPT_RAM_MBE_QW,
      ._desc = "An MBE reading the NPT entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CE_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CE_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CE_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_CE_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CE_UFLW_QW,
      ._desc = "CE FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_P_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_P_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_P_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_P_UFLW_QW,
      ._desc = "Posted FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NP_PAYLD_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_PAYLD_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_PAYLD_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_PAYLD_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_PAYLD_UFLW_QW,
      ._desc = "Non-Posted Payload FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NP_HDR_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_HDR_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_HDR_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_HDR_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_HDR_UFLW_QW,
      ._desc = "Non-Posted Header FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RMT_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RMT_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RMT_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_RMT_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RMT_UFLW_QW,
      ._desc = "RMT FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CQ_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CQ_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_CQ_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CQ_UFLW_QW,
      ._desc = "CQ FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CE_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CE_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CE_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_CE_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CE_OFLW_QW,
      ._desc = "CE FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_P_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_P_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_P_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_P_OFLW_QW,
      ._desc = "Posted FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NP_PAYLD_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_PAYLD_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_PAYLD_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_PAYLD_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_PAYLD_OFLW_QW,
      ._desc = "Non-Posted Payload FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NP_HDR_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_HDR_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_HDR_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_HDR_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_NP_HDR_OFLW_QW,
      ._desc = "Non-Posted Header FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RMT_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RMT_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RMT_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_RMT_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RMT_OFLW_QW,
      ._desc = "RMT FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CQ_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CQ_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_CQ_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_CQ_OFLW_QW,
      ._desc = "CQ FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_MID_NPT_DIAG_ONLY_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_MID_NPT_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_ERR_FLG_1_MID_NPT_DIAG_ONLY_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_MID_NPT_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_flg_1_lo_npt_detail[] = {
    { ._name = "UNUSED_63_24",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_UNUSED_63_24_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_UNUSED_63_24_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_UNUSED_63_24_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_UNUSED_63_24_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NL_CRDT_UNFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NL_CRDT_UNFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NL_CRDT_UNFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NL_CRDT_UNFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NL_CRDT_UNFLW_QW,
      ._desc = "A credit was returned from the NL, but the credit counter was already zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CW_DROP",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CW_DROP_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CW_DROP_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CW_DROP_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CW_DROP_QW,
      ._desc = "The completion wait flush response was dropped because the rstatus field indicated an error (see related error info)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_FLIT_MBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_MBE_QW,
      ._desc = "An MBE was detected in the response payload flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_FLIT_SBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_SBE_QW,
      ._desc = "An SBE was detected in the response payload flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RSP_FLIT_PE_QW,
      ._desc = "A parity error was detected in the response flit header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_REQ_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_REQ_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_REQ_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_REQ_FLIT_PE_QW,
      ._desc = "A parity error was detected in the request flit header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CMD_MISMATCH",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CMD_MISMATCH_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CMD_MISMATCH_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CMD_MISMATCH_QW,
      ._desc = "The incoming response had an unexpected resposne command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_UNSOLICITED_RSP",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_UNSOLICITED_RSP_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_UNSOLICITED_RSP_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_UNSOLICITED_RSP_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_UNSOLICITED_RSP_QW,
      ._desc = "The incoming response targeted an invalid NPT entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TIMEOUT",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_TIMEOUT_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_TIMEOUT_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_TIMEOUT_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_TIMEOUT_QW,
      ._desc = "One or more stale entries were timed out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NPT_RAM_SBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NPT_RAM_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NPT_RAM_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NPT_RAM_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NPT_RAM_SBE_QW,
      ._desc = "An SBE reading the NPT entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NPT_RAM_MBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NPT_RAM_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NPT_RAM_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NPT_RAM_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NPT_RAM_MBE_QW,
      ._desc = "An MBE reading the NPT entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CE_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CE_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CE_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CE_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CE_UFLW_QW,
      ._desc = "CE FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_P_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_P_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_P_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_P_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_P_UFLW_QW,
      ._desc = "Posted FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NP_PAYLD_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_PAYLD_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_PAYLD_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_PAYLD_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_PAYLD_UFLW_QW,
      ._desc = "Non-Posted Payload FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NP_HDR_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_HDR_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_HDR_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_HDR_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_HDR_UFLW_QW,
      ._desc = "Non-Posted Header FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RMT_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RMT_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RMT_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RMT_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RMT_UFLW_QW,
      ._desc = "RMT FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CQ_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CQ_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CQ_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CQ_UFLW_QW,
      ._desc = "CQ FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CE_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CE_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CE_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CE_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CE_OFLW_QW,
      ._desc = "CE FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_P_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_P_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_P_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_P_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_P_OFLW_QW,
      ._desc = "Posted FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NP_PAYLD_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_PAYLD_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_PAYLD_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_PAYLD_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_PAYLD_OFLW_QW,
      ._desc = "Non-Posted Payload FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NP_HDR_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_HDR_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_HDR_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_HDR_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_NP_HDR_OFLW_QW,
      ._desc = "Non-Posted Header FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RMT_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RMT_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RMT_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RMT_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_RMT_OFLW_QW,
      ._desc = "RMT FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CQ_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CQ_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CQ_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_I_CQ_OFLW_QW,
      ._desc = "CQ FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_NPT_ERR_FLG_1_LO_NPT_UNUSED_0_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_1_LO_NPT_UNUSED_0_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA & AR_NIC_NPT_ERR_FLG_1_LO_NPT_UNUSED_0_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_1_LO_NPT_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_detail[] = {
    { ._name = "I_AMO_NPT_RSP_SB",
      ._bpos = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_I_AMO_NPT_RSP_SB_BP,
      ._mask = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_I_AMO_NPT_RSP_SB_MASK,
      ._rval = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_I_AMO_NPT_RSP_SB_MASK,
      ._index = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_I_AMO_NPT_RSP_SB_QW,
      ._desc = "PI input sideband (via AMO)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_AMO_NPT_RSP_FLIT",
      ._bpos = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_I_AMO_NPT_RSP_FLIT_BP,
      ._mask = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_I_AMO_NPT_RSP_FLIT_MASK,
      ._rval = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_I_AMO_NPT_RSP_FLIT_MASK,
      ._index = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_I_AMO_NPT_RSP_FLIT_QW,
      ._desc = "PI input flit (via AMO)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_detail[] = {
    { ._name = "I_AMO_NPT_RSP_FLIT",
      ._bpos = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_I_AMO_NPT_RSP_FLIT_BP,
      ._mask = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_I_AMO_NPT_RSP_FLIT_MASK,
      ._rval = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_I_AMO_NPT_RSP_FLIT_MASK,
      ._index = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_I_AMO_NPT_RSP_FLIT_QW,
      ._desc = "PI input flit (via AMO)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_amo_npt_rsp_flit_2_lo_npt_detail[] = {
    { ._name = "I_AMO_NPT_RSP_FLIT",
      ._bpos = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_I_AMO_NPT_RSP_FLIT_BP,
      ._mask = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_I_AMO_NPT_RSP_FLIT_MASK,
      ._rval = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_RSTDATA & AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_I_AMO_NPT_RSP_FLIT_MASK,
      ._index = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_I_AMO_NPT_RSP_FLIT_QW,
      ._desc = "PI input flit (via AMO)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_detail[] = {
    { ._name = "R_Q_NIC_NL_RSP_SB",
      ._bpos = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_R_Q_NIC_NL_RSP_SB_BP,
      ._mask = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_R_Q_NIC_NL_RSP_SB_MASK,
      ._rval = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_R_Q_NIC_NL_RSP_SB_MASK,
      ._index = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_R_Q_NIC_NL_RSP_SB_QW,
      ._desc = "NL output sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NIC_NL_RSP_FLIT",
      ._bpos = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_R_Q_NIC_NL_RSP_FLIT_BP,
      ._mask = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_R_Q_NIC_NL_RSP_FLIT_MASK,
      ._rval = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_R_Q_NIC_NL_RSP_FLIT_MASK,
      ._index = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_R_Q_NIC_NL_RSP_FLIT_QW,
      ._desc = "NL output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_detail[] = {
    { ._name = "R_Q_NIC_NL_RSP_FLIT",
      ._bpos = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_R_Q_NIC_NL_RSP_FLIT_BP,
      ._mask = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_R_Q_NIC_NL_RSP_FLIT_MASK,
      ._rval = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_R_Q_NIC_NL_RSP_FLIT_MASK,
      ._index = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_R_Q_NIC_NL_RSP_FLIT_QW,
      ._desc = "NL output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_nic_nl_rsp_flit_3_lo_npt_detail[] = {
    { ._name = "R_Q_NIC_NL_RSP_FLIT",
      ._bpos = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_R_Q_NIC_NL_RSP_FLIT_BP,
      ._mask = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_R_Q_NIC_NL_RSP_FLIT_MASK,
      ._rval = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_RSTDATA & AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_R_Q_NIC_NL_RSP_FLIT_MASK,
      ._index = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_R_Q_NIC_NL_RSP_FLIT_QW,
      ._desc = "NL output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_detail[] = {
    { ._name = "R_Q_NPT_AMO_REQ_SB",
      ._bpos = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_R_Q_NPT_AMO_REQ_SB_BP,
      ._mask = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_R_Q_NPT_AMO_REQ_SB_MASK,
      ._rval = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_R_Q_NPT_AMO_REQ_SB_MASK,
      ._index = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_R_Q_NPT_AMO_REQ_SB_QW,
      ._desc = "AMO output sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NPT_AMO_REQ_FLIT",
      ._bpos = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_R_Q_NPT_AMO_REQ_FLIT_BP,
      ._mask = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_R_Q_NPT_AMO_REQ_FLIT_MASK,
      ._rval = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_R_Q_NPT_AMO_REQ_FLIT_MASK,
      ._index = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_R_Q_NPT_AMO_REQ_FLIT_QW,
      ._desc = "AMO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_detail[] = {
    { ._name = "R_Q_NPT_AMO_REQ_FLIT",
      ._bpos = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_R_Q_NPT_AMO_REQ_FLIT_BP,
      ._mask = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_R_Q_NPT_AMO_REQ_FLIT_MASK,
      ._rval = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_R_Q_NPT_AMO_REQ_FLIT_MASK,
      ._index = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_R_Q_NPT_AMO_REQ_FLIT_QW,
      ._desc = "AMO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_amo_req_flit_4_lo_npt_detail[] = {
    { ._name = "R_Q_NPT_AMO_REQ_FLIT",
      ._bpos = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_R_Q_NPT_AMO_REQ_FLIT_BP,
      ._mask = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_R_Q_NPT_AMO_REQ_FLIT_MASK,
      ._rval = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_RSTDATA & AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_R_Q_NPT_AMO_REQ_FLIT_MASK,
      ._index = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_R_Q_NPT_AMO_REQ_FLIT_QW,
      ._desc = "AMO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_UNUSED_145_128_BP,
      ._mask = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_UNUSED_145_128_MASK,
      ._rval = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_UNUSED_145_128_MASK,
      ._index = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_UNUSED_145_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_detail[] = {
    { ._name = "FREE_VEC",
      ._bpos = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_FREE_VEC_BP,
      ._mask = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_FREE_VEC_MASK,
      ._rval = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_FREE_VEC_MASK,
      ._index = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_FREE_VEC_QW,
      ._desc = "Vector of entries that are free to be allocated again",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_free_vld_vecs_5_lo_npt_detail[] = {
    { ._name = "VLD_VEC",
      ._bpos = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_VLD_VEC_BP,
      ._mask = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_VLD_VEC_MASK,
      ._rval = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_RSTDATA & AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_VLD_VEC_MASK,
      ._index = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_VLD_VEC_QW,
      ._desc = "Vector of entries that are valid (in use)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_power_down_ff_hi_npt_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_POWER_DOWN_BP,
      ._mask = AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_POWER_DOWN_MASK,
      ._rval = AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSTDATA_QW2 & AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_POWER_DOWN_MASK,
      ._index = AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_power_down_ff_mid_npt_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_POWER_DOWN_BP,
      ._mask = AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_POWER_DOWN_MASK,
      ._rval = AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_RSTDATA_QW1 & AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_POWER_DOWN_MASK,
      ._index = AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_npt_power_down_ff_lo_npt_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_POWER_DOWN_BP,
      ._mask = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_POWER_DOWN_MASK,
      ._rval = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_RSTDATA & AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_POWER_DOWN_MASK,
      ._index = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_cfg_crdts_detail[] = {
    { ._name = "MAX_PKT_SIZE",
      ._bpos = AR_NIC_NPT_CFG_CRDTS_MAX_PKT_SIZE_BP,
      ._mask = AR_NIC_NPT_CFG_CRDTS_MAX_PKT_SIZE_MASK,
      ._rval = AR_NIC_NPT_CFG_CRDTS_RSTDATA & AR_NIC_NPT_CFG_CRDTS_MAX_PKT_SIZE_MASK,
      ._index = AR_NIC_NPT_CFG_CRDTS_MAX_PKT_SIZE_QW,
      ._desc = "Max packet size to guarantee a full packet will fit in the NL/AMO before sending it",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "P_CRDTS_MAX",
      ._bpos = AR_NIC_NPT_CFG_CRDTS_P_CRDTS_MAX_BP,
      ._mask = AR_NIC_NPT_CFG_CRDTS_P_CRDTS_MAX_MASK,
      ._rval = AR_NIC_NPT_CFG_CRDTS_RSTDATA & AR_NIC_NPT_CFG_CRDTS_P_CRDTS_MAX_MASK,
      ._index = AR_NIC_NPT_CFG_CRDTS_P_CRDTS_MAX_QW,
      ._desc = "Posted response queue credits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "AMO_CRDTS_MAX",
      ._bpos = AR_NIC_NPT_CFG_CRDTS_AMO_CRDTS_MAX_BP,
      ._mask = AR_NIC_NPT_CFG_CRDTS_AMO_CRDTS_MAX_MASK,
      ._rval = AR_NIC_NPT_CFG_CRDTS_RSTDATA & AR_NIC_NPT_CFG_CRDTS_AMO_CRDTS_MAX_MASK,
      ._index = AR_NIC_NPT_CFG_CRDTS_AMO_CRDTS_MAX_QW,
      ._desc = "AMO request queue credits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NL_CRDTS_MAX",
      ._bpos = AR_NIC_NPT_CFG_CRDTS_NL_CRDTS_MAX_BP,
      ._mask = AR_NIC_NPT_CFG_CRDTS_NL_CRDTS_MAX_MASK,
      ._rval = AR_NIC_NPT_CFG_CRDTS_RSTDATA & AR_NIC_NPT_CFG_CRDTS_NL_CRDTS_MAX_MASK,
      ._index = AR_NIC_NPT_CFG_CRDTS_NL_CRDTS_MAX_QW,
      ._desc = "Netlink response queue credits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_cfg_avail_tags_detail[] = {
    { ._name = "EN",
      ._bpos = AR_NIC_NPT_CFG_AVAIL_TAGS_EN_BP,
      ._mask = AR_NIC_NPT_CFG_AVAIL_TAGS_EN_MASK,
      ._rval = AR_NIC_NPT_CFG_AVAIL_TAGS_RSTDATA & AR_NIC_NPT_CFG_AVAIL_TAGS_EN_MASK,
      ._index = AR_NIC_NPT_CFG_AVAIL_TAGS_EN_QW,
      ._desc = "Enable for each tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_flg_detail[] = {
    { ._name = "NL_CRDT_UNFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_NL_CRDT_UNFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_NL_CRDT_UNFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_NL_CRDT_UNFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_NL_CRDT_UNFLW_QW,
      ._desc = "A credit was returned from the NL, but the credit counter was already zero",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "CW_DROP",
      ._bpos = AR_NIC_NPT_ERR_FLG_CW_DROP_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_CW_DROP_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_CW_DROP_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_CW_DROP_QW,
      ._desc = "The completion wait flush response was dropped because the rstatus field indicated an error (see related error info)",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "RSP_FLIT_MBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_RSP_FLIT_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_RSP_FLIT_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_RSP_FLIT_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_RSP_FLIT_MBE_QW,
      ._desc = "An MBE was detected in the response payload flit",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "RSP_FLIT_SBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_RSP_FLIT_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_RSP_FLIT_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_RSP_FLIT_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_RSP_FLIT_SBE_QW,
      ._desc = "An SBE was detected in the response payload flit",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "RSP_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_FLG_RSP_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_RSP_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_RSP_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_RSP_FLIT_PE_QW,
      ._desc = "A parity error was detected in the response flit header",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "REQ_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_FLG_REQ_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_REQ_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_REQ_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_REQ_FLIT_PE_QW,
      ._desc = "A parity error was detected in the request flit header",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_NPT_ERR_FLG_CMD_MISMATCH_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_CMD_MISMATCH_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_CMD_MISMATCH_QW,
      ._desc = "The incoming response had an unexpected resposne command",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "UNSOLICITED_RSP",
      ._bpos = AR_NIC_NPT_ERR_FLG_UNSOLICITED_RSP_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_UNSOLICITED_RSP_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_UNSOLICITED_RSP_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_UNSOLICITED_RSP_QW,
      ._desc = "The incoming response targeted an invalid NPT entry",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_NPT_ERR_FLG_TIMEOUT_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_TIMEOUT_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_TIMEOUT_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_TIMEOUT_QW,
      ._desc = "One or more stale entries were timed out",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "NPT_RAM_SBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_NPT_RAM_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_NPT_RAM_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_NPT_RAM_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_NPT_RAM_SBE_QW,
      ._desc = "An SBE reading the NPT entry",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "NPT_RAM_MBE",
      ._bpos = AR_NIC_NPT_ERR_FLG_NPT_RAM_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_NPT_RAM_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_NPT_RAM_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_NPT_RAM_MBE_QW,
      ._desc = "An MBE reading the NPT entry",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "CE_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_CE_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_CE_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_CE_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_CE_UFLW_QW,
      ._desc = "CE FIFO Underflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "P_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_P_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_P_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_P_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_P_UFLW_QW,
      ._desc = "Posted FIFO Underflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "NP_PAYLD_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_NP_PAYLD_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_NP_PAYLD_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_NP_PAYLD_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_NP_PAYLD_UFLW_QW,
      ._desc = "Non-Posted Payload FIFO Underflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "NP_HDR_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_NP_HDR_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_NP_HDR_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_NP_HDR_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_NP_HDR_UFLW_QW,
      ._desc = "Non-Posted Header FIFO Underflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RMT_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_RMT_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_RMT_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_RMT_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_RMT_UFLW_QW,
      ._desc = "RMT FIFO Underflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "CQ_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_CQ_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_CQ_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_CQ_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_CQ_UFLW_QW,
      ._desc = "CQ FIFO Underflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "CE_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_CE_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_CE_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_CE_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_CE_OFLW_QW,
      ._desc = "CE FIFO Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "P_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_P_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_P_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_P_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_P_OFLW_QW,
      ._desc = "Posted FIFO Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "NP_PAYLD_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_NP_PAYLD_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_NP_PAYLD_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_NP_PAYLD_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_NP_PAYLD_OFLW_QW,
      ._desc = "Non-Posted Payload FIFO Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "NP_HDR_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_NP_HDR_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_NP_HDR_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_NP_HDR_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_NP_HDR_OFLW_QW,
      ._desc = "Non-Posted Header FIFO Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RMT_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_RMT_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_RMT_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_RMT_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_RMT_OFLW_QW,
      ._desc = "RMT FIFO Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "CQ_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FLG_CQ_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_CQ_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_CQ_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_CQ_OFLW_QW,
      ._desc = "CQ FIFO Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NPT_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_NPT_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NPT_ERR_FLG_RSTDATA & AR_NIC_NPT_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_NPT_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000100011ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_clr_detail[] = {
    { ._name = "NL_CRDT_UNFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_NL_CRDT_UNFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_NL_CRDT_UNFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_NL_CRDT_UNFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_NL_CRDT_UNFLW_QW,
      ._desc = "A credit was returned from the NL, but the credit counter was already zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CW_DROP",
      ._bpos = AR_NIC_NPT_ERR_CLR_CW_DROP_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_CW_DROP_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_CW_DROP_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_CW_DROP_QW,
      ._desc = "The completion wait flush response was dropped because the rstatus field indicated an error (see related error info)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_FLIT_MBE",
      ._bpos = AR_NIC_NPT_ERR_CLR_RSP_FLIT_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_RSP_FLIT_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_RSP_FLIT_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_RSP_FLIT_MBE_QW,
      ._desc = "An MBE was detected in the response payload flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_FLIT_SBE",
      ._bpos = AR_NIC_NPT_ERR_CLR_RSP_FLIT_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_RSP_FLIT_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_RSP_FLIT_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_RSP_FLIT_SBE_QW,
      ._desc = "An SBE was detected in the response payload flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_CLR_RSP_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_RSP_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_RSP_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_RSP_FLIT_PE_QW,
      ._desc = "A parity error was detected in the response flit header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_CLR_REQ_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_REQ_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_REQ_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_REQ_FLIT_PE_QW,
      ._desc = "A parity error was detected in the request flit header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_NPT_ERR_CLR_CMD_MISMATCH_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_CMD_MISMATCH_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_CMD_MISMATCH_QW,
      ._desc = "The incoming response had an unexpected resposne command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "UNSOLICITED_RSP",
      ._bpos = AR_NIC_NPT_ERR_CLR_UNSOLICITED_RSP_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_UNSOLICITED_RSP_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_UNSOLICITED_RSP_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_UNSOLICITED_RSP_QW,
      ._desc = "The incoming response targeted an invalid NPT entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_NPT_ERR_CLR_TIMEOUT_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_TIMEOUT_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_TIMEOUT_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_TIMEOUT_QW,
      ._desc = "One or more stale entries were timed out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NPT_RAM_SBE",
      ._bpos = AR_NIC_NPT_ERR_CLR_NPT_RAM_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_NPT_RAM_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_NPT_RAM_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_NPT_RAM_SBE_QW,
      ._desc = "An SBE reading the NPT entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NPT_RAM_MBE",
      ._bpos = AR_NIC_NPT_ERR_CLR_NPT_RAM_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_NPT_RAM_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_NPT_RAM_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_NPT_RAM_MBE_QW,
      ._desc = "An MBE reading the NPT entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CE_UFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_CE_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_CE_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_CE_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_CE_UFLW_QW,
      ._desc = "CE FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "P_UFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_P_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_P_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_P_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_P_UFLW_QW,
      ._desc = "Posted FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NP_PAYLD_UFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_NP_PAYLD_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_NP_PAYLD_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_NP_PAYLD_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_NP_PAYLD_UFLW_QW,
      ._desc = "Non-Posted Payload FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NP_HDR_UFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_NP_HDR_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_NP_HDR_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_NP_HDR_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_NP_HDR_UFLW_QW,
      ._desc = "Non-Posted Header FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RMT_UFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_RMT_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_RMT_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_RMT_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_RMT_UFLW_QW,
      ._desc = "RMT FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CQ_UFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_CQ_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_CQ_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_CQ_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_CQ_UFLW_QW,
      ._desc = "CQ FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CE_OFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_CE_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_CE_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_CE_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_CE_OFLW_QW,
      ._desc = "CE FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "P_OFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_P_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_P_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_P_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_P_OFLW_QW,
      ._desc = "Posted FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NP_PAYLD_OFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_NP_PAYLD_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_NP_PAYLD_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_NP_PAYLD_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_NP_PAYLD_OFLW_QW,
      ._desc = "Non-Posted Payload FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NP_HDR_OFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_NP_HDR_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_NP_HDR_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_NP_HDR_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_NP_HDR_OFLW_QW,
      ._desc = "Non-Posted Header FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RMT_OFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_RMT_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_RMT_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_RMT_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_RMT_OFLW_QW,
      ._desc = "RMT FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CQ_OFLW",
      ._bpos = AR_NIC_NPT_ERR_CLR_CQ_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_CQ_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_CQ_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_CQ_OFLW_QW,
      ._desc = "CQ FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NPT_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_NPT_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NPT_ERR_CLR_RSTDATA & AR_NIC_NPT_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_NPT_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_hss_msk_detail[] = {
    { ._name = "NL_CRDT_UNFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_NL_CRDT_UNFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_NL_CRDT_UNFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_NL_CRDT_UNFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_NL_CRDT_UNFLW_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CW_DROP",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_CW_DROP_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_CW_DROP_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_CW_DROP_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_CW_DROP_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_MBE",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_MBE_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_SBE",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_SBE_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_RSP_FLIT_PE_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_REQ_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_REQ_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_REQ_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_REQ_FLIT_PE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_CMD_MISMATCH_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_CMD_MISMATCH_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_CMD_MISMATCH_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UNSOLICITED_RSP",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_UNSOLICITED_RSP_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_UNSOLICITED_RSP_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_UNSOLICITED_RSP_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_UNSOLICITED_RSP_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_TIMEOUT_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_TIMEOUT_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_TIMEOUT_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_TIMEOUT_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NPT_RAM_SBE",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_NPT_RAM_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_NPT_RAM_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_NPT_RAM_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_NPT_RAM_SBE_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NPT_RAM_MBE",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_NPT_RAM_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_NPT_RAM_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_NPT_RAM_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_NPT_RAM_MBE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_UFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_CE_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_CE_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_CE_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_CE_UFLW_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "P_UFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_P_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_P_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_P_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_P_UFLW_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_PAYLD_UFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_NP_PAYLD_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_NP_PAYLD_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_NP_PAYLD_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_NP_PAYLD_UFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_HDR_UFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_NP_HDR_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_NP_HDR_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_NP_HDR_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_NP_HDR_UFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RMT_UFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_RMT_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_RMT_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_RMT_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_RMT_UFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_UFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_CQ_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_CQ_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_CQ_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_CQ_UFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_OFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_CE_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_CE_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_CE_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_CE_OFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "P_OFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_P_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_P_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_P_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_P_OFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_PAYLD_OFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_NP_PAYLD_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_NP_PAYLD_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_NP_PAYLD_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_NP_PAYLD_OFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_HDR_OFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_NP_HDR_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_NP_HDR_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_NP_HDR_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_NP_HDR_OFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RMT_OFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_RMT_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_RMT_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_RMT_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_RMT_OFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_OFLW",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_CQ_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_CQ_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_CQ_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_CQ_OFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NPT_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_NPT_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA & AR_NIC_NPT_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_NPT_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_os_msk_detail[] = {
    { ._name = "NL_CRDT_UNFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_NL_CRDT_UNFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_NL_CRDT_UNFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_NL_CRDT_UNFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_NL_CRDT_UNFLW_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CW_DROP",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_CW_DROP_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_CW_DROP_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_CW_DROP_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_CW_DROP_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_MBE",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_MBE_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_SBE",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_SBE_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_RSP_FLIT_PE_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_REQ_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_REQ_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_REQ_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_REQ_FLIT_PE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_CMD_MISMATCH_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_CMD_MISMATCH_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_CMD_MISMATCH_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UNSOLICITED_RSP",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_UNSOLICITED_RSP_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_UNSOLICITED_RSP_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_UNSOLICITED_RSP_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_UNSOLICITED_RSP_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_TIMEOUT_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_TIMEOUT_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_TIMEOUT_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_TIMEOUT_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NPT_RAM_SBE",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_NPT_RAM_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_NPT_RAM_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_NPT_RAM_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_NPT_RAM_SBE_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NPT_RAM_MBE",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_NPT_RAM_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_NPT_RAM_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_NPT_RAM_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_NPT_RAM_MBE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_UFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_CE_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_CE_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_CE_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_CE_UFLW_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "P_UFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_P_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_P_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_P_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_P_UFLW_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_PAYLD_UFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_NP_PAYLD_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_NP_PAYLD_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_NP_PAYLD_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_NP_PAYLD_UFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_HDR_UFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_NP_HDR_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_NP_HDR_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_NP_HDR_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_NP_HDR_UFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RMT_UFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_RMT_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_RMT_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_RMT_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_RMT_UFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_UFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_CQ_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_CQ_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_CQ_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_CQ_UFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_OFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_CE_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_CE_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_CE_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_CE_OFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "P_OFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_P_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_P_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_P_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_P_OFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_PAYLD_OFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_NP_PAYLD_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_NP_PAYLD_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_NP_PAYLD_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_NP_PAYLD_OFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_HDR_OFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_NP_HDR_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_NP_HDR_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_NP_HDR_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_NP_HDR_OFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RMT_OFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_RMT_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_RMT_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_RMT_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_RMT_OFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_OFLW",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_CQ_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_CQ_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_CQ_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_CQ_OFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NPT_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_NPT_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NPT_ERR_OS_MSK_RSTDATA & AR_NIC_NPT_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_NPT_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_first_flg_detail[] = {
    { ._name = "NL_CRDT_UNFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_NL_CRDT_UNFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_NL_CRDT_UNFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_NL_CRDT_UNFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_NL_CRDT_UNFLW_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CW_DROP",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_CW_DROP_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_CW_DROP_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_CW_DROP_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_CW_DROP_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_MBE",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_MBE_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_SBE",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_SBE_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_RSP_FLIT_PE_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_FLIT_PE",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_REQ_FLIT_PE_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_REQ_FLIT_PE_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_REQ_FLIT_PE_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_REQ_FLIT_PE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_CMD_MISMATCH_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_CMD_MISMATCH_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_CMD_MISMATCH_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UNSOLICITED_RSP",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_UNSOLICITED_RSP_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_UNSOLICITED_RSP_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_UNSOLICITED_RSP_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_UNSOLICITED_RSP_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_TIMEOUT_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_TIMEOUT_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_TIMEOUT_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_TIMEOUT_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NPT_RAM_SBE",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_NPT_RAM_SBE_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_NPT_RAM_SBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_NPT_RAM_SBE_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_NPT_RAM_SBE_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NPT_RAM_MBE",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_NPT_RAM_MBE_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_NPT_RAM_MBE_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_NPT_RAM_MBE_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_NPT_RAM_MBE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_CE_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_CE_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_CE_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_CE_UFLW_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "P_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_P_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_P_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_P_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_P_UFLW_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_PAYLD_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_NP_PAYLD_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_NP_PAYLD_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_NP_PAYLD_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_NP_PAYLD_UFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_HDR_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_NP_HDR_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_NP_HDR_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_NP_HDR_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_NP_HDR_UFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RMT_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_RMT_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_RMT_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_RMT_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_RMT_UFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_UFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_CQ_UFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_CQ_UFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_CQ_UFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_CQ_UFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_CE_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_CE_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_CE_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_CE_OFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "P_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_P_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_P_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_P_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_P_OFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_PAYLD_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_NP_PAYLD_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_NP_PAYLD_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_NP_PAYLD_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_NP_PAYLD_OFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NP_HDR_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_NP_HDR_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_NP_HDR_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_NP_HDR_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_NP_HDR_OFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RMT_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_RMT_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_RMT_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_RMT_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_RMT_OFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_OFLW",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_CQ_OFLW_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_CQ_OFLW_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_CQ_OFLW_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_CQ_OFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NPT_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_NPT_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NPT_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_NPT_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_info_ram_detail[] = {
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_NPT_ERR_INFO_RAM_MBE_ADDRESS_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_RAM_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_RAM_RSTDATA & AR_NIC_NPT_ERR_INFO_RAM_MBE_ADDRESS_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_RAM_MBE_ADDRESS_QW,
      ._desc = "MBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_NPT_ERR_INFO_RAM_MBE_SYNDROME_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_RAM_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_RAM_RSTDATA & AR_NIC_NPT_ERR_INFO_RAM_MBE_SYNDROME_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_RAM_MBE_SYNDROME_QW,
      ._desc = "MBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_NPT_ERR_INFO_RAM_SBE_ADDRESS_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_RAM_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_RAM_RSTDATA & AR_NIC_NPT_ERR_INFO_RAM_SBE_ADDRESS_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_RAM_SBE_ADDRESS_QW,
      ._desc = "SBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_NPT_ERR_INFO_RAM_SBE_SYNDROME_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_RAM_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_RAM_RSTDATA & AR_NIC_NPT_ERR_INFO_RAM_SBE_SYNDROME_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_RAM_SBE_SYNDROME_QW,
      ._desc = "SBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_info_timeout_detail[] = {
    { ._name = "ENTRIES",
      ._bpos = AR_NIC_NPT_ERR_INFO_TIMEOUT_ENTRIES_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_TIMEOUT_ENTRIES_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_NPT_ERR_INFO_TIMEOUT_ENTRIES_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_TIMEOUT_ENTRIES_QW,
      ._desc = "A vector indicating which entries timed out (a 1 in a given bit position indicates that entry timed out)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_info_unsolicited_rsp_detail[] = {
    { ._name = "REQUEST_TAG",
      ._bpos = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_REQUEST_TAG_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_REQUEST_TAG_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_RSTDATA & AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_REQUEST_TAG_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_REQUEST_TAG_QW,
      ._desc = "Request tag of the unsolicited response",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_info_cmd_mismatch_detail[] = {
    { ._name = "EXP_NET_CMD",
      ._bpos = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_EXP_NET_CMD_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_EXP_NET_CMD_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RSTDATA & AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_EXP_NET_CMD_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_EXP_NET_CMD_QW,
      ._desc = "Expected response command (if TYPE=NET)",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HWO"
    },
    { ._name = "TYPE",
      ._bpos = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_TYPE_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_TYPE_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RSTDATA & AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_TYPE_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_TYPE_QW,
      ._desc = "0=Network Resposne 1=Completion Wait Flush Response (always expects PutResp)",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HWO"
    },
    { ._name = "RCV_CMD",
      ._bpos = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RCV_CMD_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RCV_CMD_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RSTDATA & AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RCV_CMD_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RCV_CMD_QW,
      ._desc = "Response command of the response",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HWO"
    },
    { ._name = "REQUEST_TAG",
      ._bpos = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_REQUEST_TAG_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_REQUEST_TAG_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RSTDATA & AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_REQUEST_TAG_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_REQUEST_TAG_QW,
      ._desc = "Request tag of the response",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_err_info_cw_drop_detail[] = {
    { ._name = "RSTATUS",
      ._bpos = AR_NIC_NPT_ERR_INFO_CW_DROP_RSTATUS_BP,
      ._mask = AR_NIC_NPT_ERR_INFO_CW_DROP_RSTATUS_MASK,
      ._rval = AR_NIC_NPT_ERR_INFO_CW_DROP_RSTDATA & AR_NIC_NPT_ERR_INFO_CW_DROP_RSTATUS_MASK,
      ._index = AR_NIC_NPT_ERR_INFO_CW_DROP_RSTATUS_QW,
      ._desc = "RSTATUS field of response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_dbg_errinj_ram_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RAM_ADDRESS_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RAM_ADDRESS_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RAM_ADDRESS_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RAM_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTE",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RAM_CHECKBYTE_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RAM_CHECKBYTE_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RAM_CHECKBYTE_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RAM_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RAM_TRIGGERED_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RAM_TRIGGERED_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RAM_TRIGGERED_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RAM_TRIGGERED_QW,
      ._desc = "Error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RAM_MODE_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RAM_MODE_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RAM_MODE_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RAM_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RAM_ENABLE_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RAM_ENABLE_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RAM_ENABLE_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RAM_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_dbg_errinj_rsp_bus_detail[] = {
    { ._name = "TRIGGERED_3",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_3_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_3_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_3_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_3_QW,
      ._desc = "Error has been injected on PARB bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TRIGGERED_2",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_2_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_2_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_2_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_2_QW,
      ._desc = "Error has been injected on IOMMU bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TRIGGERED_1",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_1_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_1_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_1_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_1_QW,
      ._desc = "Error has been injected on BTE bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TRIGGERED_0",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_0_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_0_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_0_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TRIGGERED_0_QW,
      ._desc = "Error has been injected on NPT bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TAIL_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TAIL_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TAIL_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_TAIL_QW,
      ._desc = "When an error is injected, this field indicates whether the tail bit should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_PARITY_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_PARITY_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_PARITY_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_PARITY_QW,
      ._desc = "When an error is injected on a header flit, this field indicates which parity bits should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC1",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_ECC1_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_ECC1_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_ECC1_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_ECC1_QW,
      ._desc = "When an error is injected on a payload flit, this field indicates which bits of upper check bits should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC0",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_ECC0_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_ECC0_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_ECC0_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_ECC0_QW,
      ._desc = "When an error is injected on a payload flit, this field indicates which bits of lower check bits should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_MODE_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_MODE_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_MODE_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_MODE_QW,
      ._desc = "0: Inject error on one packet (on each enabled interface) 1: Inject error on every packet (on each enabled interface)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_COUNT_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_COUNT_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_COUNT_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_COUNT_QW,
      ._desc = "Indicates which flit of a packet to inject the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "EN",
      ._bpos = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_EN_BP,
      ._mask = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_EN_MASK,
      ._rval = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_EN_MASK,
      ._index = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_EN_QW,
      ._desc = "Enable the error injection per interface: [0]: NPT [1]: BTE [2]: IOMMU [3]: PARB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_dbg_crdts_detail[] = {
    { ._name = "NL_CRDTS",
      ._bpos = AR_NIC_NPT_DBG_CRDTS_NL_CRDTS_BP,
      ._mask = AR_NIC_NPT_DBG_CRDTS_NL_CRDTS_MASK,
      ._rval = AR_NIC_NPT_DBG_CRDTS_RSTDATA & AR_NIC_NPT_DBG_CRDTS_NL_CRDTS_MASK,
      ._index = AR_NIC_NPT_DBG_CRDTS_NL_CRDTS_QW,
      ._desc = "The number of credits currently in use on the NL interface",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "AMO_CRDTS",
      ._bpos = AR_NIC_NPT_DBG_CRDTS_AMO_CRDTS_BP,
      ._mask = AR_NIC_NPT_DBG_CRDTS_AMO_CRDTS_MASK,
      ._rval = AR_NIC_NPT_DBG_CRDTS_RSTDATA & AR_NIC_NPT_DBG_CRDTS_AMO_CRDTS_MASK,
      ._index = AR_NIC_NPT_DBG_CRDTS_AMO_CRDTS_QW,
      ._desc = "The number of credits currently in use on the AMO interface",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "P_CRDTS",
      ._bpos = AR_NIC_NPT_DBG_CRDTS_P_CRDTS_BP,
      ._mask = AR_NIC_NPT_DBG_CRDTS_P_CRDTS_MASK,
      ._rval = AR_NIC_NPT_DBG_CRDTS_RSTDATA & AR_NIC_NPT_DBG_CRDTS_P_CRDTS_MASK,
      ._index = AR_NIC_NPT_DBG_CRDTS_P_CRDTS_QW,
      ._desc = "The number of credits currently in use on the Posted interface (internal credit exchange)",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_sts_comp_wait_detail[] = {
    { ._name = "STATE",
      ._bpos = AR_NIC_NPT_STS_COMP_WAIT_STATE_BP,
      ._mask = AR_NIC_NPT_STS_COMP_WAIT_STATE_MASK,
      ._rval = AR_NIC_NPT_STS_COMP_WAIT_RSTDATA & AR_NIC_NPT_STS_COMP_WAIT_STATE_MASK,
      ._index = AR_NIC_NPT_STS_COMP_WAIT_STATE_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "RESET",
      ._bpos = AR_NIC_NPT_STS_COMP_WAIT_RESET_BP,
      ._mask = AR_NIC_NPT_STS_COMP_WAIT_RESET_MASK,
      ._rval = AR_NIC_NPT_STS_COMP_WAIT_RSTDATA & AR_NIC_NPT_STS_COMP_WAIT_RESET_MASK,
      ._index = AR_NIC_NPT_STS_COMP_WAIT_RESET_QW,
      ._desc = "Write a 1 to this bit to reset the state machine to IDLE",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "WS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_prf_en_detail[] = {
    { ._name = "PRF_STALL_EN",
      ._bpos = AR_NIC_NPT_PRF_EN_PRF_STALL_EN_BP,
      ._mask = AR_NIC_NPT_PRF_EN_PRF_STALL_EN_MASK,
      ._rval = AR_NIC_NPT_PRF_EN_RSTDATA & AR_NIC_NPT_PRF_EN_PRF_STALL_EN_MASK,
      ._index = AR_NIC_NPT_PRF_EN_PRF_STALL_EN_QW,
      ._desc = "Enable A_NIC_NPT_PRF_NL_STALL_DURATION",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PRF_FULL_EN",
      ._bpos = AR_NIC_NPT_PRF_EN_PRF_FULL_EN_BP,
      ._mask = AR_NIC_NPT_PRF_EN_PRF_FULL_EN_MASK,
      ._rval = AR_NIC_NPT_PRF_EN_RSTDATA & AR_NIC_NPT_PRF_EN_PRF_FULL_EN_MASK,
      ._index = AR_NIC_NPT_PRF_EN_PRF_FULL_EN_QW,
      ._desc = "Enable A_NIC_NPT_PRF_FULL_DURATION",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_prf_full_duration_detail[] = {
    { ._name = "MAX",
      ._bpos = AR_NIC_NPT_PRF_FULL_DURATION_MAX_BP,
      ._mask = AR_NIC_NPT_PRF_FULL_DURATION_MAX_MASK,
      ._rval = AR_NIC_NPT_PRF_FULL_DURATION_RSTDATA & AR_NIC_NPT_PRF_FULL_DURATION_MAX_MASK,
      ._index = AR_NIC_NPT_PRF_FULL_DURATION_MAX_QW,
      ._desc = "The maximum duration in clock cycles",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_npt_prf_nl_stall_duration_detail[] = {
    { ._name = "MAX",
      ._bpos = AR_NIC_NPT_PRF_NL_STALL_DURATION_MAX_BP,
      ._mask = AR_NIC_NPT_PRF_NL_STALL_DURATION_MAX_MASK,
      ._rval = AR_NIC_NPT_PRF_NL_STALL_DURATION_RSTDATA & AR_NIC_NPT_PRF_NL_STALL_DURATION_MAX_MASK,
      ._index = AR_NIC_NPT_PRF_NL_STALL_DURATION_MAX_QW,
      ._desc = "The maximum duration in clock cycles",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR NPT DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_rval[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSTDATA_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSTDATA_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_rmsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSTMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_wrmsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_WRTMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_WRTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_rdmsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RDMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RDMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RDMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_xsmsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_XSMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_XSMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_XSMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_wsemsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_WSEMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_WSEMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_rsemsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSEMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_RSEMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_w1smsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_W1SMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_W1SMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_w1cmsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_W1CMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_W1CMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_wrstmsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_WRSTMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_hwwmsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_HWWMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_HWWMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_hi_npt_hwrmsk[3] = {
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_HWRMASK_QW1,
	AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT_HWRMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_rval[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTDATA_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_rmsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_wrmsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_WRTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_rdmsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RDMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RDMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_xsmsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_XSMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_XSMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_wsemsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_WSEMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_rsemsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_RSEMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_w1smsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_W1SMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_w1cmsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_W1CMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_wrstmsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_hwwmsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_HWWMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_mmr_ring_0_mid_npt_hwrmsk[2] = {
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT_HWRMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_rval[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSTDATA_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSTDATA_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSTDATA_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_rmsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSTMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSTMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSTMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_wrmsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_WRTMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_WRTMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_WRTMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_rdmsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RDMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RDMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RDMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_xsmsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_XSMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_XSMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_XSMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_wsemsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_WSEMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_WSEMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_WSEMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_rsemsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSEMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSEMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_RSEMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_w1smsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_W1SMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_W1SMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_W1SMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_w1cmsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_W1CMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_W1CMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_W1CMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_wrstmsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_WRSTMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_hwwmsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_HWWMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_HWWMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_HWWMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_hi_npt_hwrmsk[3] = {
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_HWRMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_HWRMASK_QW1,
	AR_NIC_NPT_ERR_FLG_1_HI_NPT_HWRMASK_QW2
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_rval[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTDATA_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_rmsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSTMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_wrmsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_WRTMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_WRTMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_rdmsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_RDMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_RDMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_xsmsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_XSMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_XSMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_wsemsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_WSEMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_WSEMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_rsemsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSEMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_RSEMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_w1smsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_W1SMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_W1SMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_w1cmsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_W1CMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_W1CMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_wrstmsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_hwwmsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_HWWMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_HWWMASK_QW1
};
static const uint64_t __ar_nic_npt_err_flg_1_mid_npt_hwrmsk[2] = {
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_HWRMASK_QW0,
	AR_NIC_NPT_ERR_FLG_1_MID_NPT_HWRMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_rval[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSTDATA_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSTDATA_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSTDATA_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_rmsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSTMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSTMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSTMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_wrmsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_WRTMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_WRTMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_WRTMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_rdmsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RDMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RDMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RDMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_xsmsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_XSMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_XSMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_XSMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_wsemsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_WSEMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_WSEMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_WSEMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_rsemsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSEMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSEMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_RSEMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_w1smsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_W1SMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_W1SMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_W1SMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_w1cmsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_W1CMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_W1CMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_W1CMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_wrstmsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_WRSTMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_hwwmsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_HWWMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_HWWMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_HWWMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_hwrmsk[3] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_HWRMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_HWRMASK_QW1,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT_HWRMASK_QW2
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_rval[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_RSTDATA_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_RSTDATA_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_rmsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_RSTMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_RSTMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_wrmsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_WRTMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_WRTMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_rdmsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_RDMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_RDMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_xsmsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_XSMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_XSMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_wsemsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_WSEMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_WSEMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_rsemsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_RSEMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_RSEMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_w1smsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_W1SMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_W1SMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_w1cmsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_W1CMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_W1CMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_wrstmsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_hwwmsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_HWWMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_HWWMASK_QW1
};
static const uint64_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_hwrmsk[2] = {
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_HWRMASK_QW0,
	AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT_HWRMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_rval[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSTDATA_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSTDATA_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_rmsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSTMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSTMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_wrmsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_WRTMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_WRTMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_rdmsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RDMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RDMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RDMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_xsmsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_XSMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_XSMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_XSMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_wsemsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_WSEMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_WSEMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_rsemsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSEMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_RSEMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_w1smsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_W1SMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_W1SMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_w1cmsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_W1CMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_W1CMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_wrstmsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_WRSTMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_hwwmsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_HWWMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_HWWMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_hwrmsk[3] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_HWRMASK_QW1,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT_HWRMASK_QW2
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_rval[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_RSTDATA_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_rmsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_RSTMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_wrmsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_WRTMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_rdmsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_RDMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_RDMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_xsmsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_XSMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_XSMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_wsemsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_WSEMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_rsemsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_RSEMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_w1smsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_W1SMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_w1cmsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_W1CMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_wrstmsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_hwwmsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_HWWMASK_QW1
};
static const uint64_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_hwrmsk[2] = {
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT_HWRMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_rval[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSTDATA_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSTDATA_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_rmsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSTMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_wrmsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_WRTMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_WRTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_rdmsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RDMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RDMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RDMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_xsmsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_XSMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_XSMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_XSMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_wsemsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_WSEMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_WSEMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_rsemsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSEMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_RSEMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_w1smsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_W1SMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_W1SMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_w1cmsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_W1CMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_W1CMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_wrstmsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_WRSTMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_hwwmsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_HWWMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_HWWMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt_hwrmsk[3] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_HWRMASK_QW1,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT_HWRMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_rval[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_RSTDATA_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_rmsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_RSTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_wrmsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_WRTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_rdmsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_RDMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_RDMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_xsmsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_XSMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_XSMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_wsemsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_WSEMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_rsemsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_RSEMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_w1smsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_W1SMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_w1cmsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_W1CMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_wrstmsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_hwwmsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_HWWMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt_hwrmsk[2] = {
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT_HWRMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_rval[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSTDATA_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSTDATA_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_rmsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSTMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_wrmsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_WRTMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_WRTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_rdmsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RDMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RDMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RDMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_xsmsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_XSMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_XSMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_XSMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_wsemsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_WSEMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_WSEMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_rsemsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSEMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_RSEMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_w1smsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_W1SMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_W1SMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_w1cmsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_W1CMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_W1CMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_wrstmsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_WRSTMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_hwwmsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_HWWMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_HWWMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_hwrmsk[3] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_HWRMASK_QW1,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT_HWRMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_rval[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_RSTDATA_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_rmsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_RSTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_wrmsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_WRTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_rdmsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_RDMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_RDMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_xsmsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_XSMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_XSMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_wsemsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_WSEMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_rsemsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_RSEMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_w1smsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_W1SMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_w1cmsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_W1CMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_wrstmsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_hwwmsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_HWWMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_hwrmsk[2] = {
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT_HWRMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_rval[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSTDATA_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSTDATA_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_rmsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSTMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_wrmsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_WRTMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_WRTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_rdmsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RDMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RDMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RDMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_xsmsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_XSMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_XSMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_XSMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_wsemsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_WSEMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_WSEMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_rsemsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSEMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_RSEMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_w1smsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_W1SMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_W1SMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_w1cmsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_W1CMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_W1CMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_wrstmsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_WRSTMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_hwwmsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_HWWMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_HWWMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_hi_npt_hwrmsk[3] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_HWRMASK_QW1,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT_HWRMASK_QW2
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_rval[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_RSTDATA_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_RSTDATA_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_rmsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_RSTMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_RSTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_wrmsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_WRTMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_WRTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_rdmsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_RDMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_RDMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_xsmsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_XSMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_XSMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_wsemsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_WSEMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_WSEMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_rsemsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_RSEMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_RSEMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_w1smsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_W1SMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_W1SMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_w1cmsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_W1CMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_W1CMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_wrstmsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_WRSTMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_hwwmsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_HWWMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_HWWMASK_QW1
};
static const uint64_t __ar_nic_npt_npt_power_down_ff_mid_npt_hwrmsk[2] = {
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_HWRMASK_QW0,
	AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT_HWRMASK_QW1
};

/*
 *  AR NPT MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_npt_cfg_params = {
    ._name = "AR_NIC_NPT_CFG_PARAMS",
    ._addr = AR_NIC_NPT_CFG_PARAMS,
    ._rval.val = AR_NIC_NPT_CFG_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_CFG_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_CFG_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_CFG_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_CFG_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_CFG_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_CFG_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_CFG_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_CFG_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_CFG_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_CFG_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_CFG_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_cfg_params_detail
};
static const cmmr_br_t __ar_nic_npt_npt_mmr_ring_0_hi_npt = {
    ._name = "AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT",
    ._addr = AR_NIC_NPT_NPT_MMR_RING_0_HI_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_hi_npt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_mmr_ring_0_hi_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_mmr_ring_0_mid_npt = {
    ._name = "AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT",
    ._addr = AR_NIC_NPT_NPT_MMR_RING_0_MID_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_mmr_ring_0_mid_npt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_mmr_ring_0_mid_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_mmr_ring_0_lo_npt = {
    ._name = "AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT",
    ._addr = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT,
    ._rval.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_NPT_MMR_RING_0_LO_NPT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_mmr_ring_0_lo_npt_detail
};
static const cmmr_br_t __ar_nic_npt_err_flg_1_hi_npt = {
    ._name = "AR_NIC_NPT_ERR_FLG_1_HI_NPT",
    ._addr = AR_NIC_NPT_ERR_FLG_1_HI_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_hi_npt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_err_flg_1_hi_npt_detail
};
static const cmmr_br_t __ar_nic_npt_err_flg_1_mid_npt = {
    ._name = "AR_NIC_NPT_ERR_FLG_1_MID_NPT",
    ._addr = AR_NIC_NPT_ERR_FLG_1_MID_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_err_flg_1_mid_npt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_err_flg_1_mid_npt_detail
};
static const cmmr_br_t __ar_nic_npt_err_flg_1_lo_npt = {
    ._name = "AR_NIC_NPT_ERR_FLG_1_LO_NPT",
    ._addr = AR_NIC_NPT_ERR_FLG_1_LO_NPT,
    ._rval.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_FLG_1_LO_NPT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_err_flg_1_lo_npt_detail
};
static const cmmr_br_t __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt = {
    ._name = "AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT",
    ._addr = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_HI_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_amo_npt_rsp_flit_2_hi_npt_detail
};
static const cmmr_br_t __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt = {
    ._name = "AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT",
    ._addr = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_MID_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_amo_npt_rsp_flit_2_mid_npt_detail
};
static const cmmr_br_t __ar_nic_npt_amo_npt_rsp_flit_2_lo_npt = {
    ._name = "AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT",
    ._addr = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT,
    ._rval.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_AMO_NPT_RSP_FLIT_2_LO_NPT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_amo_npt_rsp_flit_2_lo_npt_detail
};
static const cmmr_br_t __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt = {
    ._name = "AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT",
    ._addr = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_HI_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_nic_nl_rsp_flit_3_hi_npt_detail
};
static const cmmr_br_t __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt = {
    ._name = "AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT",
    ._addr = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_MID_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_nic_nl_rsp_flit_3_mid_npt_detail
};
static const cmmr_br_t __ar_nic_npt_nic_nl_rsp_flit_3_lo_npt = {
    ._name = "AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT",
    ._addr = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT,
    ._rval.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_NIC_NL_RSP_FLIT_3_LO_NPT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_nic_nl_rsp_flit_3_lo_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_amo_req_flit_4_hi_npt = {
    ._name = "AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT",
    ._addr = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_HI_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_hi_npt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_amo_req_flit_4_hi_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_amo_req_flit_4_mid_npt = {
    ._name = "AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT",
    ._addr = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_MID_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_amo_req_flit_4_mid_npt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_amo_req_flit_4_mid_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_amo_req_flit_4_lo_npt = {
    ._name = "AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT",
    ._addr = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT,
    ._rval.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_NPT_AMO_REQ_FLIT_4_LO_NPT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_amo_req_flit_4_lo_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_free_vld_vecs_5_hi_npt = {
    ._name = "AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT",
    ._addr = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_HI_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_hi_npt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_free_vld_vecs_5_hi_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_free_vld_vecs_5_mid_npt = {
    ._name = "AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT",
    ._addr = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_MID_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_free_vld_vecs_5_mid_npt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_free_vld_vecs_5_mid_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_free_vld_vecs_5_lo_npt = {
    ._name = "AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT",
    ._addr = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT,
    ._rval.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_NPT_FREE_VLD_VECS_5_LO_NPT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_free_vld_vecs_5_lo_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_power_down_ff_hi_npt = {
    ._name = "AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT",
    ._addr = AR_NIC_NPT_NPT_POWER_DOWN_FF_HI_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_hi_npt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_power_down_ff_hi_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_power_down_ff_mid_npt = {
    ._name = "AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT",
    ._addr = AR_NIC_NPT_NPT_POWER_DOWN_FF_MID_NPT,
    ._rval.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_npt_npt_power_down_ff_mid_npt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_power_down_ff_mid_npt_detail
};
static const cmmr_br_t __ar_nic_npt_npt_power_down_ff_lo_npt = {
    ._name = "AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT",
    ._addr = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT,
    ._rval.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_NPT_POWER_DOWN_FF_LO_NPT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_npt_power_down_ff_lo_npt_detail
};
static const cmmr_br_t __ar_nic_npt_cfg_crdts = {
    ._name = "AR_NIC_NPT_CFG_CRDTS",
    ._addr = AR_NIC_NPT_CFG_CRDTS,
    ._rval.val = AR_NIC_NPT_CFG_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_CFG_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_CFG_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_CFG_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_CFG_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_CFG_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_CFG_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_CFG_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_CFG_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_CFG_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_CFG_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_CFG_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_cfg_crdts_detail
};
static const cmmr_br_t __ar_nic_npt_cfg_avail_tags = {
    ._name = "AR_NIC_NPT_CFG_AVAIL_TAGS",
    ._addr = AR_NIC_NPT_CFG_AVAIL_TAGS,
    ._rval.val = AR_NIC_NPT_CFG_AVAIL_TAGS_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_CFG_AVAIL_TAGS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_cfg_avail_tags_detail
};
static const cmmr_br_t __ar_nic_npt_err_flg = {
    ._name = "AR_NIC_NPT_ERR_FLG",
    ._addr = AR_NIC_NPT_ERR_FLG,
    ._rval.val = AR_NIC_NPT_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x00000000003cc811ull,
    ._info = __ar_nic_npt_err_flg_detail
};
static const cmmr_br_t __ar_nic_npt_err_clr = {
    ._name = "AR_NIC_NPT_ERR_CLR",
    ._addr = AR_NIC_NPT_ERR_CLR,
    ._rval.val = AR_NIC_NPT_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_npt_err_clr_detail
};
static const cmmr_br_t __ar_nic_npt_err_hss_msk = {
    ._name = "AR_NIC_NPT_ERR_HSS_MSK",
    ._addr = AR_NIC_NPT_ERR_HSS_MSK,
    ._rval.val = AR_NIC_NPT_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_npt_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_npt_err_os_msk = {
    ._name = "AR_NIC_NPT_ERR_OS_MSK",
    ._addr = AR_NIC_NPT_ERR_OS_MSK,
    ._rval.val = AR_NIC_NPT_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_npt_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_npt_err_first_flg = {
    ._name = "AR_NIC_NPT_ERR_FIRST_FLG",
    ._addr = AR_NIC_NPT_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_NPT_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_npt_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_npt_err_info_ram = {
    ._name = "AR_NIC_NPT_ERR_INFO_RAM",
    ._addr = AR_NIC_NPT_ERR_INFO_RAM,
    ._rval.val = AR_NIC_NPT_ERR_INFO_RAM_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_INFO_RAM_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_INFO_RAM_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_INFO_RAM_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_INFO_RAM_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_INFO_RAM_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_INFO_RAM_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_INFO_RAM_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_INFO_RAM_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_INFO_RAM_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_INFO_RAM_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_INFO_RAM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_err_info_ram_detail
};
static const cmmr_br_t __ar_nic_npt_err_info_timeout = {
    ._name = "AR_NIC_NPT_ERR_INFO_TIMEOUT",
    ._addr = AR_NIC_NPT_ERR_INFO_TIMEOUT,
    ._rval.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_INFO_TIMEOUT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_err_info_timeout_detail
};
static const cmmr_br_t __ar_nic_npt_err_info_unsolicited_rsp = {
    ._name = "AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP",
    ._addr = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP,
    ._rval.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_INFO_UNSOLICITED_RSP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_npt_err_info_unsolicited_rsp_detail
};
static const cmmr_br_t __ar_nic_npt_err_info_cmd_mismatch = {
    ._name = "AR_NIC_NPT_ERR_INFO_CMD_MISMATCH",
    ._addr = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH,
    ._rval.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_INFO_CMD_MISMATCH_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_npt_err_info_cmd_mismatch_detail
};
static const cmmr_br_t __ar_nic_npt_err_info_cw_drop = {
    ._name = "AR_NIC_NPT_ERR_INFO_CW_DROP",
    ._addr = AR_NIC_NPT_ERR_INFO_CW_DROP,
    ._rval.val = AR_NIC_NPT_ERR_INFO_CW_DROP_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_ERR_INFO_CW_DROP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_err_info_cw_drop_detail
};
static const cmmr_br_t __ar_nic_npt_dbg_errinj_ram = {
    ._name = "AR_NIC_NPT_DBG_ERRINJ_RAM",
    ._addr = AR_NIC_NPT_DBG_ERRINJ_RAM,
    ._rval.val = AR_NIC_NPT_DBG_ERRINJ_RAM_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_DBG_ERRINJ_RAM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_dbg_errinj_ram_detail
};
static const cmmr_br_t __ar_nic_npt_dbg_errinj_rsp_bus = {
    ._name = "AR_NIC_NPT_DBG_ERRINJ_RSP_BUS",
    ._addr = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS,
    ._rval.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_DBG_ERRINJ_RSP_BUS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_dbg_errinj_rsp_bus_detail
};
static const cmmr_br_t __ar_nic_npt_dbg_crdts = {
    ._name = "AR_NIC_NPT_DBG_CRDTS",
    ._addr = AR_NIC_NPT_DBG_CRDTS,
    ._rval.val = AR_NIC_NPT_DBG_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_DBG_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_DBG_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_DBG_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_DBG_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_DBG_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_DBG_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_DBG_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_DBG_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_DBG_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_DBG_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_DBG_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_npt_dbg_crdts_detail
};
static const cmmr_br_t __ar_nic_npt_sts_comp_wait = {
    ._name = "AR_NIC_NPT_STS_COMP_WAIT",
    ._addr = AR_NIC_NPT_STS_COMP_WAIT,
    ._rval.val = AR_NIC_NPT_STS_COMP_WAIT_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_STS_COMP_WAIT_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_STS_COMP_WAIT_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_STS_COMP_WAIT_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_STS_COMP_WAIT_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_STS_COMP_WAIT_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_STS_COMP_WAIT_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_STS_COMP_WAIT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_STS_COMP_WAIT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_STS_COMP_WAIT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_STS_COMP_WAIT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_STS_COMP_WAIT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_npt_sts_comp_wait_detail
};
static const cmmr_br_t __ar_nic_npt_prf_en = {
    ._name = "AR_NIC_NPT_PRF_EN",
    ._addr = AR_NIC_NPT_PRF_EN,
    ._rval.val = AR_NIC_NPT_PRF_EN_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_PRF_EN_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_PRF_EN_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_PRF_EN_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_PRF_EN_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_PRF_EN_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_PRF_EN_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_PRF_EN_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_PRF_EN_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_PRF_EN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_PRF_EN_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_PRF_EN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_npt_prf_en_detail
};
static const cmmr_br_t __ar_nic_npt_prf_full_duration = {
    ._name = "AR_NIC_NPT_PRF_FULL_DURATION",
    ._addr = AR_NIC_NPT_PRF_FULL_DURATION,
    ._rval.val = AR_NIC_NPT_PRF_FULL_DURATION_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_PRF_FULL_DURATION_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_PRF_FULL_DURATION_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_PRF_FULL_DURATION_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_PRF_FULL_DURATION_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_PRF_FULL_DURATION_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_PRF_FULL_DURATION_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_PRF_FULL_DURATION_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_PRF_FULL_DURATION_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_PRF_FULL_DURATION_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_PRF_FULL_DURATION_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_PRF_FULL_DURATION_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_npt_prf_full_duration_detail
};
static const cmmr_br_t __ar_nic_npt_prf_nl_stall_duration = {
    ._name = "AR_NIC_NPT_PRF_NL_STALL_DURATION",
    ._addr = AR_NIC_NPT_PRF_NL_STALL_DURATION,
    ._rval.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_RSTDATA,
    ._rmsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_RSTMASK,
    ._wrmsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_WRTMASK,
    ._rdmsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_RDMASK,
    ._xsmsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_XSMASK,
    ._wsemsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_WSEMASK,
    ._rsemsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_RSEMASK,
    ._w1smsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_W1SMASK,
    ._w1cmsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_W1CMASK,
    ._wrstmsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_HWWMASK,
    ._hwrmsk.val = AR_NIC_NPT_PRF_NL_STALL_DURATION_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_npt_prf_nl_stall_duration_detail
};

/*
 *  INSTALL AR NPT MMRS
 */
static const cmmr_br_t* __ar_npt_mmrs[] = {
    &__ar_nic_npt_cfg_params,
    &__ar_nic_npt_cfg_crdts,
    &__ar_nic_npt_cfg_avail_tags,
    &__ar_nic_npt_err_flg,
    &__ar_nic_npt_err_clr,
    &__ar_nic_npt_err_hss_msk,
    &__ar_nic_npt_err_os_msk,
    &__ar_nic_npt_err_first_flg,
    &__ar_nic_npt_err_info_ram,
    &__ar_nic_npt_err_info_timeout,
    &__ar_nic_npt_err_info_unsolicited_rsp,
    &__ar_nic_npt_err_info_cmd_mismatch,
    &__ar_nic_npt_err_info_cw_drop,
    &__ar_nic_npt_dbg_errinj_ram,
    &__ar_nic_npt_dbg_errinj_rsp_bus,
    &__ar_nic_npt_dbg_crdts,
    &__ar_nic_npt_sts_comp_wait,
    &__ar_nic_npt_prf_en,
    &__ar_nic_npt_prf_full_duration,
    &__ar_nic_npt_prf_nl_stall_duration,
    NULL
};

/*
 *  INSTALL AR NPT LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_npt_enc_mmrs[] = {
    &__ar_nic_npt_npt_mmr_ring_0_hi_npt,
    &__ar_nic_npt_npt_mmr_ring_0_mid_npt,
    &__ar_nic_npt_npt_mmr_ring_0_lo_npt,
    &__ar_nic_npt_err_flg_1_hi_npt,
    &__ar_nic_npt_err_flg_1_mid_npt,
    &__ar_nic_npt_err_flg_1_lo_npt,
    &__ar_nic_npt_amo_npt_rsp_flit_2_hi_npt,
    &__ar_nic_npt_amo_npt_rsp_flit_2_mid_npt,
    &__ar_nic_npt_amo_npt_rsp_flit_2_lo_npt,
    &__ar_nic_npt_nic_nl_rsp_flit_3_hi_npt,
    &__ar_nic_npt_nic_nl_rsp_flit_3_mid_npt,
    &__ar_nic_npt_nic_nl_rsp_flit_3_lo_npt,
    &__ar_nic_npt_npt_amo_req_flit_4_hi_npt,
    &__ar_nic_npt_npt_amo_req_flit_4_mid_npt,
    &__ar_nic_npt_npt_amo_req_flit_4_lo_npt,
    &__ar_nic_npt_npt_free_vld_vecs_5_hi_npt,
    &__ar_nic_npt_npt_free_vld_vecs_5_mid_npt,
    &__ar_nic_npt_npt_free_vld_vecs_5_lo_npt,
    &__ar_nic_npt_npt_power_down_ff_hi_npt,
    &__ar_nic_npt_npt_power_down_ff_mid_npt,
    &__ar_nic_npt_npt_power_down_ff_lo_npt,
    NULL
};

#endif
