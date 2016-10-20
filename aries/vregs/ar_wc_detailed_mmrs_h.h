/******************************************************************************
 * COPYRIGHT CRAY INC. ar_wc_detailed_mmrs_h.h
 * FILE: ar_wc_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/
/**
 * @file ar_wc_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:04 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_wc_mmr_values.h and ar_wc_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_wc_mmr_values.h"

#ifndef _AR_WC_DETAILED_MMRS_H_H_
#define _AR_WC_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_wc_mmrs[];	/* WC Array */

/*
 *  AR WC MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_wc_cfg_params_detail[] = {
    { ._name = "BUF_SCRUB_RATE",
      ._bpos = AR_NIC_WC_CFG_PARAMS_BUF_SCRUB_RATE_BP,
      ._mask = AR_NIC_WC_CFG_PARAMS_BUF_SCRUB_RATE_MASK,
      ._rval = AR_NIC_WC_CFG_PARAMS_RSTDATA & AR_NIC_WC_CFG_PARAMS_BUF_SCRUB_RATE_MASK,
      ._index = AR_NIC_WC_CFG_PARAMS_BUF_SCRUB_RATE_QW,
      ._desc = "Buffer scrub rate",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REQ_WAIT_CNT",
      ._bpos = AR_NIC_WC_CFG_PARAMS_REQ_WAIT_CNT_BP,
      ._mask = AR_NIC_WC_CFG_PARAMS_REQ_WAIT_CNT_MASK,
      ._rval = AR_NIC_WC_CFG_PARAMS_RSTDATA & AR_NIC_WC_CFG_PARAMS_REQ_WAIT_CNT_MASK,
      ._index = AR_NIC_WC_CFG_PARAMS_REQ_WAIT_CNT_QW,
      ._desc = "Request wait count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_WC_CFG_PARAMS_ENABLE_BP,
      ._mask = AR_NIC_WC_CFG_PARAMS_ENABLE_MASK,
      ._rval = AR_NIC_WC_CFG_PARAMS_RSTDATA & AR_NIC_WC_CFG_PARAMS_ENABLE_MASK,
      ._index = AR_NIC_WC_CFG_PARAMS_ENABLE_QW,
      ._desc = "Enable write combining",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_HI_WC_UNUSED_145_35_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_HI_WC_UNUSED_145_35_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_MMR_RING_0_HI_WC_UNUSED_145_35_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_HI_WC_UNUSED_145_35_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_detail[] = {
    { ._name = "UNUSED_127_98",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_UNUSED_127_98_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_UNUSED_127_98_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_UNUSED_127_98_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_UNUSED_127_98_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUFFER_TIMEOUT_QW,
      ._desc = "Buffer timeouts",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSPIN1_HDR_PBE",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RSPIN1_HDR_PBE_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RSPIN1_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RSPIN1_HDR_PBE_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RSPIN1_HDR_PBE_QW,
      ._desc = "Buffer block 1 rspin FIFO header PBEs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSPIN0_HDR_PBE",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RSPIN0_HDR_PBE_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RSPIN0_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RSPIN0_HDR_PBE_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RSPIN0_HDR_PBE_QW,
      ._desc = "Buffer block 0 rspin FIFO header PBEs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NTWK_RSP_HDR_PBE",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_NTWK_RSP_HDR_PBE_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_NTWK_RSP_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_NTWK_RSP_HDR_PBE_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_NTWK_RSP_HDR_PBE_QW,
      ._desc = "Network response header PBEs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TAG_PBE",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_TAG_PBE_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_TAG_PBE_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_TAG_PBE_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_TAG_PBE_QW,
      ._desc = "TAG PBEs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RESERVED10",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RESERVED10_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RESERVED10_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RESERVED10_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RESERVED10_QW,
      ._desc = "Reserved",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BUF1_EVICTION",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_EVICTION_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_EVICTION_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_EVICTION_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_EVICTION_QW,
      ._desc = "Number of evictions that have been done in write combining buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BUF1_COMBINE",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_COMBINE_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_COMBINE_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_COMBINE_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_COMBINE_QW,
      ._desc = "Number of times a buffer has combined in write combining buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BUF1_ALLOCATION",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_ALLOCATION_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_ALLOCATION_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_ALLOCATION_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF1_ALLOCATION_QW,
      ._desc = "Number of buffer allocations that have been done in write combining buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BUF0_EVICTION",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_EVICTION_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_EVICTION_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_EVICTION_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_EVICTION_QW,
      ._desc = "Number of evictions that have been done in write combining buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BUF0_COMBINE",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_COMBINE_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_COMBINE_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_COMBINE_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_COMBINE_QW,
      ._desc = "Number of times a buffer has combined in write combining buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BUF0_ALLOCATION",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_ALLOCATION_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_ALLOCATION_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_ALLOCATION_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_BUF0_ALLOCATION_QW,
      ._desc = "Number of buffer allocations that have been done in write combining buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_WC_OUT",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_WC_OUT_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_WC_OUT_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_WC_OUT_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_WC_OUT_QW,
      ._desc = "Number of packets exiting the write combining buffers",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_WC_IN",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_WC_IN_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_WC_IN_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_WC_IN_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_WC_IN_QW,
      ._desc = "Number of packets entering the write combining buffers",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PARB_PUT",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_PARB_PUT_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_PARB_PUT_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_PARB_PUT_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_PARB_PUT_QW,
      ._desc = "Number of Put packets sent to PARB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RAT_GETRESP",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RAT_GETRESP_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RAT_GETRESP_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RAT_GETRESP_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_CNTR_RAT_GETRESP_QW,
      ._desc = "Number of GetResp or FetchingAMOResp packets received from RAT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_64",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_MID_WC_UNUSED_81_64_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_MID_WC_UNUSED_81_64_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_MMR_RING_0_MID_WC_UNUSED_81_64_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_MID_WC_UNUSED_81_64_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_mmr_ring_0_lo_wc_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_LO_WC_UNUSED_145_35_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_LO_WC_UNUSED_145_35_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RSTDATA & AR_NIC_WC_WC_MMR_RING_0_LO_WC_UNUSED_145_35_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_LO_WC_UNUSED_145_35_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "WC_PI_OS_IRQ",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_LO_WC_WC_PI_OS_IRQ_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_LO_WC_WC_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RSTDATA & AR_NIC_WC_WC_MMR_RING_0_LO_WC_WC_PI_OS_IRQ_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_LO_WC_WC_PI_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "WC_LB_HSS_IRQ",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_LO_WC_WC_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_LO_WC_WC_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RSTDATA & AR_NIC_WC_WC_MMR_RING_0_LO_WC_WC_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_LO_WC_WC_LB_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_WC_NETMON_RING_WRACK",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_LO_WC_R_Q_WC_NETMON_RING_WRACK_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_LO_WC_R_Q_WC_NETMON_RING_WRACK_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RSTDATA & AR_NIC_WC_WC_MMR_RING_0_LO_WC_R_Q_WC_NETMON_RING_WRACK_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_LO_WC_R_Q_WC_NETMON_RING_WRACK_QW,
      ._desc = "Netmon MMR ring write ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_WC_NETMON_RING",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_LO_WC_R_Q_WC_NETMON_RING_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_LO_WC_R_Q_WC_NETMON_RING_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RSTDATA & AR_NIC_WC_WC_MMR_RING_0_LO_WC_R_Q_WC_NETMON_RING_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_LO_WC_R_Q_WC_NETMON_RING_QW,
      ._desc = "Netmon MMR ring out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NETMON_WC_RING",
      ._bpos = AR_NIC_WC_WC_MMR_RING_0_LO_WC_Q_NETMON_WC_RING_BP,
      ._mask = AR_NIC_WC_WC_MMR_RING_0_LO_WC_Q_NETMON_WC_RING_MASK,
      ._rval = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RSTDATA & AR_NIC_WC_WC_MMR_RING_0_LO_WC_Q_NETMON_WC_RING_MASK,
      ._index = AR_NIC_WC_WC_MMR_RING_0_LO_WC_Q_NETMON_WC_RING_QW,
      ._desc = "Netmon MMR ring in",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_flg_1_hi_wc_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_WC_ERR_FLG_1_HI_WC_UNUSED_145_128_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_HI_WC_UNUSED_145_128_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_HI_WC_RSTDATA_QW2 & AR_NIC_WC_ERR_FLG_1_HI_WC_UNUSED_145_128_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_HI_WC_UNUSED_145_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_flg_1_mid_wc_detail[] = {
    { ._name = "UNUSED_127_92",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_UNUSED_127_92_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_UNUSED_127_92_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_UNUSED_127_92_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_UNUSED_127_92_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_BUFFER_TIMEOUT_QW,
      ._desc = "A write combining buffer time-out has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FLUSH_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_RSP_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the flush_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FLUSH_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_RSP_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the flush_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FLUSH_REQ_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_REQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_REQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_REQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_REQ_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the flush_req FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FLUSH_REQ_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_REQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_REQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_REQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_FLUSH_REQ_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the flush_req FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPOUT1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT1_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspout FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPOUT1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT1_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspout FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPOUT0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT0_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspout FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPOUT0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPOUT0_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspout FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NTWK_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NTWK_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TAG_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_TAG_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_TAG_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_TAG_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_TAG_PBE_QW,
      ._desc = "Set when a parity error is detected on a write combining buffer TAG",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN1_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN0_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NTWK_RSP_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_NTWK_RSP_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BUF1_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF1_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF1_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_BUF1_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF1_MBE_QW,
      ._desc = "Set when a MBE is detected on data being read from an entry in buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BUF1_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF1_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF1_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_BUF1_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF1_SBE_QW,
      ._desc = "Set when a SBE is detected on data being read from an entry in buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BUF0_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF0_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF0_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_BUF0_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF0_MBE_QW,
      ._desc = "Set when a MBE is detected on data being read from an entry in buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BUF0_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF0_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF0_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_BUF0_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_BUF0_SBE_QW,
      ._desc = "Set when a SBE is detected on data being read from an entry in buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN1_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_DAT_MBE_QW,
      ._desc = "Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN1_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN1_DAT_SBE_QW,
      ._desc = "Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN0_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_DAT_MBE_QW,
      ._desc = "Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN0_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_RSPIN0_DAT_SBE_QW,
      ._desc = "Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_WC_ERR_FLG_1_MID_WC_DIAG_ONLY_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_MID_WC_DIAG_ONLY_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1 & AR_NIC_WC_ERR_FLG_1_MID_WC_DIAG_ONLY_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_MID_WC_DIAG_ONLY_QW,
      ._desc = "Reserved for Diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_flg_1_lo_wc_detail[] = {
    { ._name = "UNUSED_63_28",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_UNUSED_63_28_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_UNUSED_63_28_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_UNUSED_63_28_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_UNUSED_63_28_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUFFER_TIMEOUT_QW,
      ._desc = "A write combining buffer time-out has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FLUSH_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_RSP_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the flush_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FLUSH_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_RSP_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the flush_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FLUSH_REQ_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_REQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_REQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_REQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_REQ_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the flush_req FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FLUSH_REQ_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_REQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_REQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_REQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_FLUSH_REQ_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the flush_req FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPOUT1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT1_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspout FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPOUT1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT1_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspout FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPOUT0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT0_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspout FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPOUT0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPOUT0_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspout FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NTWK_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NTWK_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TAG_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_TAG_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_TAG_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_TAG_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_TAG_PBE_QW,
      ._desc = "Set when a parity error is detected on a write combining buffer TAG",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN1_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN0_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NTWK_RSP_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_NTWK_RSP_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BUF1_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF1_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF1_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF1_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF1_MBE_QW,
      ._desc = "Set when a MBE is detected on data being read from an entry in buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BUF1_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF1_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF1_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF1_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF1_SBE_QW,
      ._desc = "Set when a SBE is detected on data being read from an entry in buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BUF0_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF0_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF0_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF0_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF0_MBE_QW,
      ._desc = "Set when a MBE is detected on data being read from an entry in buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BUF0_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF0_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF0_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF0_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_BUF0_SBE_QW,
      ._desc = "Set when a SBE is detected on data being read from an entry in buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN1_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_DAT_MBE_QW,
      ._desc = "Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN1_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN1_DAT_SBE_QW,
      ._desc = "Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN0_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_DAT_MBE_QW,
      ._desc = "Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPIN0_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_I_RSPIN0_DAT_SBE_QW,
      ._desc = "Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_WC_ERR_FLG_1_LO_WC_UNUSED_0_BP,
      ._mask = AR_NIC_WC_ERR_FLG_1_LO_WC_UNUSED_0_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA & AR_NIC_WC_ERR_FLG_1_LO_WC_UNUSED_0_MASK,
      ._index = AR_NIC_WC_ERR_FLG_1_LO_WC_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_parb_flit_2_hi_wc_detail[] = {
    { ._name = "Q_LM_PARB_SB",
      ._bpos = AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_Q_LM_PARB_SB_BP,
      ._mask = AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_Q_LM_PARB_SB_MASK,
      ._rval = AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_Q_LM_PARB_SB_MASK,
      ._index = AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_Q_LM_PARB_SB_QW,
      ._desc = "PARB request sideband (same as r_q_wc_parb_req_sb)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_PARB_FLIT",
      ._bpos = AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_Q_LM_PARB_FLIT_BP,
      ._mask = AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_Q_LM_PARB_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_Q_LM_PARB_FLIT_MASK,
      ._index = AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_Q_LM_PARB_FLIT_QW,
      ._desc = "PARB request flit (same as r_q_wc_parb_req_flit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_parb_flit_2_mid_wc_detail[] = {
    { ._name = "Q_LM_PARB_FLIT",
      ._bpos = AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_Q_LM_PARB_FLIT_BP,
      ._mask = AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_Q_LM_PARB_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_Q_LM_PARB_FLIT_MASK,
      ._index = AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_Q_LM_PARB_FLIT_QW,
      ._desc = "PARB request flit (same as r_q_wc_parb_req_flit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_parb_flit_2_lo_wc_detail[] = {
    { ._name = "Q_LM_PARB_FLIT",
      ._bpos = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_Q_LM_PARB_FLIT_BP,
      ._mask = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_Q_LM_PARB_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_RSTDATA & AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_Q_LM_PARB_FLIT_MASK,
      ._index = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_Q_LM_PARB_FLIT_QW,
      ._desc = "PARB request flit (same as r_q_wc_parb_req_flit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_detail[] = {
    { ._name = "Q_LM_NTWK_RSP_SB",
      ._bpos = AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_Q_LM_NTWK_RSP_SB_BP,
      ._mask = AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_Q_LM_NTWK_RSP_SB_MASK,
      ._rval = AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_Q_LM_NTWK_RSP_SB_MASK,
      ._index = AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_Q_LM_NTWK_RSP_SB_QW,
      ._desc = "SSID response sidband (same as r_q_wc_ssid_rsp_sb)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NTWK_RSP_FLIT",
      ._bpos = AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_Q_LM_NTWK_RSP_FLIT_BP,
      ._mask = AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_Q_LM_NTWK_RSP_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_Q_LM_NTWK_RSP_FLIT_MASK,
      ._index = AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_Q_LM_NTWK_RSP_FLIT_QW,
      ._desc = "SSID response flit (same as r_q_wc_ssid_rsp_flit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_detail[] = {
    { ._name = "Q_LM_NTWK_RSP_FLIT",
      ._bpos = AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_Q_LM_NTWK_RSP_FLIT_BP,
      ._mask = AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_Q_LM_NTWK_RSP_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_Q_LM_NTWK_RSP_FLIT_MASK,
      ._index = AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_Q_LM_NTWK_RSP_FLIT_QW,
      ._desc = "SSID response flit (same as r_q_wc_ssid_rsp_flit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_ssid_rsp_flit_3_lo_wc_detail[] = {
    { ._name = "Q_LM_NTWK_RSP_FLIT",
      ._bpos = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_Q_LM_NTWK_RSP_FLIT_BP,
      ._mask = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_Q_LM_NTWK_RSP_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_RSTDATA & AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_Q_LM_NTWK_RSP_FLIT_MASK,
      ._index = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_Q_LM_NTWK_RSP_FLIT_QW,
      ._desc = "SSID response flit (same as r_q_wc_ssid_rsp_flit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_top_misc_4_hi_wc_detail[] = {
    { ._name = "UNUSED_145_120",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_HI_WC_UNUSED_145_120_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_HI_WC_UNUSED_145_120_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_TOP_MISC_4_HI_WC_UNUSED_145_120_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_HI_WC_UNUSED_145_120_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_top_misc_4_mid_wc_detail[] = {
    { ._name = "UNUSED_145_120",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_UNUSED_145_120_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_UNUSED_145_120_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_UNUSED_145_120_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_UNUSED_145_120_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ARB_TAG_ERR",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_TAG_ERR_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_TAG_ERR_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_TAG_ERR_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_TAG_ERR_QW,
      ._desc = "Buffer response had a tag parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ARB_REQ",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_REQ_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_REQ_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_REQ_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_REQ_QW,
      ._desc = "Output (PARB) arb requests",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ARB_GNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_GNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_GNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_GNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_GNT_QW,
      ._desc = "Output (PARB) arb grants (held)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_112_110",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_UNUSED_112_110_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_UNUSED_112_110_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_UNUSED_112_110_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_UNUSED_112_110_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ARB_ERR",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_ERR_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_ERR_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_ERR_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_ARB_ERR_QW,
      ._desc = "Output (PARB) arb error flag (held)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTWK_RSP_HEAD",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_HEAD_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_HEAD_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_HEAD_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_HEAD_QW,
      ._desc = "Network response FIFO output head",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTWK_RSP_GO_DATA",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GO_DATA_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GO_DATA_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GO_DATA_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GO_DATA_QW,
      ._desc = "Network response FIFO go data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTWK_RSP_GO",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GO_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GO_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GO_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GO_QW,
      ._desc = "Network response FIFO go (same as r_q_wc_rat_rsp_ack)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTWK_RSP_BUF0",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF0_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF0_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF0_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF0_QW,
      ._desc = "Network response FIFO buf0 is destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTWK_RSP_BUF1",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF1_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF1_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF1_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF1_QW,
      ._desc = "Network response FIFO buf1 is destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTWK_RSP_GETRESP",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GETRESP_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GETRESP_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GETRESP_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_GETRESP_QW,
      ._desc = "Network response FIFO pkt is a valid getresp",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTWK_RSP_BUF",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_Q_NTWK_RSP_BUF_QW,
      ._desc = "Network response FIFO go packet to WC buffers",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPOUT1_COUNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSPOUT1_COUNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSPOUT1_COUNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSPOUT1_COUNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSPOUT1_COUNT_QW,
      ._desc = "WC buffer 1 rspout FIFO credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPOUT0_COUNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSPOUT0_COUNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSPOUT0_COUNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSPOUT0_COUNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSPOUT0_COUNT_QW,
      ._desc = "WC buffer 0 rspout FIFO credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARB_REQ_COUNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_PARB_REQ_COUNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_PARB_REQ_COUNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_PARB_REQ_COUNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_PARB_REQ_COUNT_QW,
      ._desc = "PARB request credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_RSP_COUNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_SSID_RSP_COUNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_SSID_RSP_COUNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_SSID_RSP_COUNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_SSID_RSP_COUNT_QW,
      ._desc = "SSID response credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_FL_RSP_COUNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_SSID_FL_RSP_COUNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_SSID_FL_RSP_COUNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_SSID_FL_RSP_COUNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_SSID_FL_RSP_COUNT_QW,
      ._desc = "SSID flush response credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BUF1_REQ_COUNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_BUF1_REQ_COUNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_BUF1_REQ_COUNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_TOP_MISC_4_MID_WC_BUF1_REQ_COUNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_MID_WC_BUF1_REQ_COUNT_QW,
      ._desc = "WC buffer 1 rspin FIFO credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_top_misc_4_lo_wc_detail[] = {
    { ._name = "BUF1_REQ_COUNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_BUF1_REQ_COUNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_BUF1_REQ_COUNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_BUF1_REQ_COUNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_BUF1_REQ_COUNT_QW,
      ._desc = "WC buffer 1 rspin FIFO credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BUF0_REQ_COUNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_BUF0_REQ_COUNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_BUF0_REQ_COUNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_BUF0_REQ_COUNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_BUF0_REQ_COUNT_QW,
      ._desc = "WC buffer 0 rspin FIFO credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FLUSH_RSP_COUNT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_FLUSH_RSP_COUNT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_FLUSH_RSP_COUNT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_FLUSH_RSP_COUNT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_FLUSH_RSP_COUNT_QW,
      ._desc = "Flush response FIFO credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_COMP_WAIT_SG1_DONE",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_COMP_WAIT_SG1_DONE_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_COMP_WAIT_SG1_DONE_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_COMP_WAIT_SG1_DONE_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_COMP_WAIT_SG1_DONE_QW,
      ._desc = "Completion-wait stage 1 done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_COMP_WAIT_SG1",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG1_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG1_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG1_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG1_QW,
      ._desc = "Completion-wait stage 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_COMP_WAIT_SG0_DONE",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG0_DONE_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG0_DONE_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG0_DONE_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG0_DONE_QW,
      ._desc = "Completion-wait stage 0 done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_COMP_WAIT_SG0",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG0_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG0_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG0_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_COMP_WAIT_SG0_QW,
      ._desc = "Completion-wait stage 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_IOMMU_WC_COMP_WAIT_REQ",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_IOMMU_WC_COMP_WAIT_REQ_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_IOMMU_WC_COMP_WAIT_REQ_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_IOMMU_WC_COMP_WAIT_REQ_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_IOMMU_WC_COMP_WAIT_REQ_QW,
      ._desc = "Completion-wait request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NXT_FLUSH_RSP_OUT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_NXT_FLUSH_RSP_OUT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_NXT_FLUSH_RSP_OUT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_NXT_FLUSH_RSP_OUT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_NXT_FLUSH_RSP_OUT_QW,
      ._desc = "Get next flush response FIFO output value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FLUSH_RSP_FIFO_RDATA",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_FLUSH_RSP_FIFO_RDATA_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_FLUSH_RSP_FIFO_RDATA_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_FLUSH_RSP_FIFO_RDATA_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_FLUSH_RSP_FIFO_RDATA_QW,
      ._desc = "Flush response FIFO output value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_FLUSH_RSP_CMPLT_PEND",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_FLUSH_RSP_CMPLT_PEND_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_FLUSH_RSP_CMPLT_PEND_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_FLUSH_RSP_CMPLT_PEND_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_FLUSH_RSP_CMPLT_PEND_QW,
      ._desc = "Flush response FIFO completion pending",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "GO_FLUSH_RSP_OUT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_GO_FLUSH_RSP_OUT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_GO_FLUSH_RSP_OUT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_GO_FLUSH_RSP_OUT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_GO_FLUSH_RSP_OUT_QW,
      ._desc = "Go flush response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_FLUSH_RSP_OUT_VLD",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_VLD_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_VLD_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_VLD_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_VLD_QW,
      ._desc = "SSID flush response output valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_FLUSH_RSP_OUT_CMPLT",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_CMPLT_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_CMPLT_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_CMPLT_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_CMPLT_QW,
      ._desc = "SSID flush response output flush complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_FLUSH_RSP_OUT_SSID",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_SSID_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_SSID_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_SSID_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_SSID_QW,
      ._desc = "SSID flush response output SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_FLUSH_RSP_OUT_STATUS",
      ._bpos = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_STATUS_BP,
      ._mask = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_STATUS_MASK,
      ._rval = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA & AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_STATUS_MASK,
      ._index = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_Q_LM_FLUSH_RSP_OUT_STATUS_QW,
      ._desc = "SSID flush response output status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_flush_misc_5_hi_wc_detail[] = {
    { ._name = "UNUSED_145_122",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_UNUSED_145_122_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_UNUSED_145_122_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_UNUSED_145_122_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_UNUSED_145_122_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_flush_misc_5_mid_wc_detail[] = {
    { ._name = "UNUSED_145_122",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_UNUSED_145_122_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_UNUSED_145_122_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_UNUSED_145_122_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_UNUSED_145_122_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_OVFLOW",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_Q_OVFLOW_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_Q_OVFLOW_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_Q_OVFLOW_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_Q_OVFLOW_QW,
      ._desc = "Flush request FIFO overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_UNFLOW",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_Q_UNFLOW_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_Q_UNFLOW_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_Q_UNFLOW_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_Q_UNFLOW_QW,
      ._desc = "Flush request FIFO underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_WADDR",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_WADDR_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_WADDR_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_WADDR_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_WADDR_QW,
      ._desc = "Flush request FIFO write address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_FLUSH_REQ_VLD",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_FLUSH_REQ_VLD_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_FLUSH_REQ_VLD_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_FLUSH_REQ_VLD_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_FLUSH_REQ_VLD_QW,
      ._desc = "Flush request valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_FLUSH_REQ_SSID",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_FLUSH_REQ_SSID_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_FLUSH_REQ_SSID_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_FLUSH_REQ_SSID_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_FLUSH_REQ_SSID_QW,
      ._desc = "Flush request SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_RSP_VLD",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_RSP_VLD_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_RSP_VLD_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_RSP_VLD_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_RSP_VLD_QW,
      ._desc = "Flush response valid (to flush response FIFO)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_RSP_SSID",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_RSP_SSID_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_RSP_SSID_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_RSP_SSID_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_RSP_SSID_QW,
      ._desc = "Flush response SSID (to flush response FIFO)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FLUSH_DONE",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_FLUSH_DONE_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_FLUSH_DONE_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_FLUSH_DONE_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_FLUSH_DONE_QW,
      ._desc = "Flush SSID x done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_VLD",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_VLD_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_VLD_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_VLD_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_Q_VLD_QW,
      ._desc = "Flush SSID x valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_SSID7",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_SSID7_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_SSID7_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_SSID7_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_R_FLUSH_SSID7_QW,
      ._desc = "Flush SSID 7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_flush_misc_5_lo_wc_detail[] = {
    { ._name = "R_FLUSH_SSID7",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID7_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID7_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTDATA & AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID7_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID7_QW,
      ._desc = "Flush SSID 7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_SSID6",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID6_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID6_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTDATA & AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID6_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID6_QW,
      ._desc = "Flush SSID 6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_SSID5",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID5_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID5_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTDATA & AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID5_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID5_QW,
      ._desc = "Flush SSID 5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_SSID4",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID4_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID4_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTDATA & AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID4_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID4_QW,
      ._desc = "Flush SSID 4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_SSID3",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID3_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID3_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTDATA & AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID3_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID3_QW,
      ._desc = "Flush SSID 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_SSID2",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID2_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID2_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTDATA & AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID2_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID2_QW,
      ._desc = "Flush SSID 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_SSID1",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID1_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID1_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTDATA & AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID1_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID1_QW,
      ._desc = "Flush SSID 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_FLUSH_SSID0",
      ._bpos = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID0_BP,
      ._mask = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID0_MASK,
      ._rval = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTDATA & AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID0_MASK,
      ._index = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_R_FLUSH_SSID0_QW,
      ._desc = "Flush SSID 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_detail[] = {
    { ._name = "RSPIN_TAIL",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_TAIL_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_TAIL_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_TAIL_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_TAIL_QW,
      ._desc = "Rspin FIFO output tail",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN_VLD",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_VLD_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_VLD_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_VLD_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_VLD_QW,
      ._desc = "Rspin FIFO output valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSPIN_FLIT_QW,
      ._desc = "Rspin FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_detail[] = {
    { ._name = "RSPIN_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSPIN_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSPIN_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSPIN_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSPIN_FLIT_QW,
      ._desc = "Rspin FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_rspin_flit_6_lo_wc_detail[] = {
    { ._name = "RSPIN_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_RSPIN_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_RSPIN_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_RSPIN_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_RSPIN_FLIT_QW,
      ._desc = "Rspin FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_UNUSED_145_135_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_UNUSED_145_135_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_UNUSED_145_135_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NO_MATCH_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_NO_MATCH_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_NO_MATCH_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_NO_MATCH_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_NO_MATCH_SG0_QW,
      ._desc = "No match with what is in buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_GO_DATA_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_GO_DATA_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_GO_DATA_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_GO_DATA_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_GO_DATA_SG0_QW,
      ._desc = "Rspin FIFO output go data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_GO_VLD_HD_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_GO_VLD_HD_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_GO_VLD_HD_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_GO_VLD_HD_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_GO_VLD_HD_SG0_QW,
      ._desc = "Rspin FIFO output go valid head",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_COLOR_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_COLOR_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_COLOR_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_COLOR_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_COLOR_SG0_QW,
      ._desc = "Rspin FIFO output color",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_SSID_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_SSID_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_SSID_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_SSID_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_Q_RSPIN_SSID_SG0_QW,
      ._desc = "Rspin FIFO output SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_detail[] = {
    { ._name = "Q_RSPIN_SSID_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_SSID_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_SSID_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_SSID_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_SSID_SG0_QW,
      ._desc = "Rspin FIFO output SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_MASK_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_MASK_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_MASK_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_MASK_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_MASK_SG0_QW,
      ._desc = "Rspin FIFO output calculated mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_ADDR_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_ADDR_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_ADDR_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_ADDR_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_Q_RSPIN_ADDR_SG0_QW,
      ._desc = "Rspin FIFO output address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_lm_data1_7_lo_wc_detail[] = {
    { ._name = "COMBINE_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_COMBINE_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_COMBINE_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_COMBINE_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_COMBINE_SG0_QW,
      ._desc = "Combine with buffer x",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ALLOCATE_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_ALLOCATE_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_ALLOCATE_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_ALLOCATE_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_ALLOCATE_SG0_QW,
      ._desc = "Allocate buffer x",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_detail[] = {
    { ._name = "UNUSED_145_143",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_UNUSED_145_143_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_UNUSED_145_143_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_UNUSED_145_143_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_UNUSED_145_143_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_GO_ARB_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_GO_ARB_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_GO_ARB_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_GO_ARB_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_GO_ARB_SG0_QW,
      ._desc = "Go packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PKT_BSY_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_BSY_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_BSY_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_BSY_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_BSY_SG0_QW,
      ._desc = "Packet busy",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PKT_ADDR_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_ADDR_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_ADDR_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_ADDR_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_ADDR_SG0_QW,
      ._desc = "Packet data buffer address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PKT_LENGTH_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_LENGTH_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_LENGTH_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_LENGTH_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_Q_PKT_LENGTH_SG0_QW,
      ._desc = "Packet length",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_detail[] = {
    { ._name = "ARB_FLUSH_REQ_PEND_X_1",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_ARB_FLUSH_REQ_PEND_X_1_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_ARB_FLUSH_REQ_PEND_X_1_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_ARB_FLUSH_REQ_PEND_X_1_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_ARB_FLUSH_REQ_PEND_X_1_QW,
      ._desc = "Buffer x flush request pending to arb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_FLUSH_REQ_X_1",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_ARB_FLUSH_REQ_X_1_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_ARB_FLUSH_REQ_X_1_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_ARB_FLUSH_REQ_X_1_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_ARB_FLUSH_REQ_X_1_QW,
      ._desc = "Buffer x flush request to arb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_lm_data2_8_lo_wc_detail[] = {
    { ._name = "ARB_REQ",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_ARB_REQ_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_ARB_REQ_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_ARB_REQ_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_ARB_REQ_QW,
      ._desc = "Buffer x non-flush request to arb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_REQ_PEND",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_ARB_REQ_PEND_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_ARB_REQ_PEND_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_ARB_REQ_PEND_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_ARB_REQ_PEND_QW,
      ._desc = "Buffer x non-flush request pending to arb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_detail[] = {
    { ._name = "UNUSED_145_130",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_UNUSED_145_130_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_UNUSED_145_130_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_UNUSED_145_130_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_UNUSED_145_130_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_R_Q_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_R_Q_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_R_Q_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_R_Q_BUFFER_TIMEOUT_QW,
      ._desc = "Buffer timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_GO_EVICT_SG0",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_Q_GO_EVICT_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_Q_GO_EVICT_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_Q_GO_EVICT_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_Q_GO_EVICT_SG0_QW,
      ._desc = "Go eviction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_detail[] = {
    { ._name = "BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_BUFFER_TIMEOUT_QW,
      ._desc = "Buffer x timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EVICT",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_EVICT_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_EVICT_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_EVICT_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_EVICT_QW,
      ._desc = "Buffer x evict",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_lm_data3_9_lo_wc_detail[] = {
    { ._name = "BUFFER_AVAIL",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_BUFFER_AVAIL_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_BUFFER_AVAIL_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_BUFFER_AVAIL_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_BUFFER_AVAIL_QW,
      ._desc = "Buffer x available",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BUFFER_VALID",
      ._bpos = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_BUFFER_VALID_BP,
      ._mask = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_BUFFER_VALID_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_BUFFER_VALID_MASK,
      ._index = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_BUFFER_VALID_QW,
      ._desc = "Buffer x valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_detail[] = {
    { ._name = "I_RSPOUT_RD",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_I_RSPOUT_RD_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_I_RSPOUT_RD_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_I_RSPOUT_RD_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_I_RSPOUT_RD_QW,
      ._desc = "Rspout FIFO read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_RSPOUT_ERR",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_R_RSPOUT_ERR_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_R_RSPOUT_ERR_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_R_RSPOUT_ERR_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_R_RSPOUT_ERR_QW,
      ._desc = "Rspout FIFO output error flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_RSPOUT_TAIL",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_R_RSPOUT_TAIL_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_R_RSPOUT_TAIL_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_R_RSPOUT_TAIL_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_R_RSPOUT_TAIL_QW,
      ._desc = "Rspout FIFO output tail",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPOUT_FIFO_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSPOUT_FIFO_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSPOUT_FIFO_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSPOUT_FIFO_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSPOUT_FIFO_FLIT_QW,
      ._desc = "Rspout FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_detail[] = {
    { ._name = "RSPOUT_FIFO_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSPOUT_FIFO_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSPOUT_FIFO_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSPOUT_FIFO_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSPOUT_FIFO_FLIT_QW,
      ._desc = "Rspout FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf0_rspout_flit_a_lo_wc_detail[] = {
    { ._name = "RSPOUT_FIFO_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_RSPOUT_FIFO_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_RSPOUT_FIFO_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_RSPOUT_FIFO_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_RSPOUT_FIFO_FLIT_QW,
      ._desc = "Rspout FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_detail[] = {
    { ._name = "RSPIN_TAIL",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_TAIL_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_TAIL_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_TAIL_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_TAIL_QW,
      ._desc = "Rspin FIFO output tail",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN_VLD",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_VLD_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_VLD_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_VLD_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_VLD_QW,
      ._desc = "Rspin FIFO output valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPIN_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSPIN_FLIT_QW,
      ._desc = "Rspin FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_detail[] = {
    { ._name = "RSPIN_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSPIN_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSPIN_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSPIN_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSPIN_FLIT_QW,
      ._desc = "Rspin FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_rspin_flit_b_lo_wc_detail[] = {
    { ._name = "RSPIN_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_RSPIN_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_RSPIN_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_RSPIN_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_RSPIN_FLIT_QW,
      ._desc = "Rspin FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_UNUSED_145_135_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_UNUSED_145_135_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_UNUSED_145_135_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NO_MATCH_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_NO_MATCH_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_NO_MATCH_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_NO_MATCH_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_NO_MATCH_SG0_QW,
      ._desc = "No match with what is in buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_GO_DATA_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_GO_DATA_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_GO_DATA_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_GO_DATA_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_GO_DATA_SG0_QW,
      ._desc = "Rspin FIFO output go data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_GO_VLD_HD_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_GO_VLD_HD_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_GO_VLD_HD_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_GO_VLD_HD_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_GO_VLD_HD_SG0_QW,
      ._desc = "Rspin FIFO output go valid head",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_COLOR_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_COLOR_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_COLOR_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_COLOR_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_COLOR_SG0_QW,
      ._desc = "Rspin FIFO output color",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_SSID_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_SSID_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_SSID_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_SSID_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_Q_RSPIN_SSID_SG0_QW,
      ._desc = "Rspin FIFO output SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_detail[] = {
    { ._name = "Q_RSPIN_SSID_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_SSID_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_SSID_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_SSID_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_SSID_SG0_QW,
      ._desc = "Rspin FIFO output SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_MASK_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_MASK_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_MASK_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_MASK_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_MASK_SG0_QW,
      ._desc = "Rspin FIFO output calculated mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPIN_ADDR_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_ADDR_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_ADDR_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_ADDR_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_Q_RSPIN_ADDR_SG0_QW,
      ._desc = "Rspin FIFO output address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_lm_data1_c_lo_wc_detail[] = {
    { ._name = "COMBINE_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_COMBINE_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_COMBINE_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_COMBINE_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_COMBINE_SG0_QW,
      ._desc = "Combine with buffer x",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ALLOCATE_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_ALLOCATE_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_ALLOCATE_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_ALLOCATE_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_ALLOCATE_SG0_QW,
      ._desc = "Allocate buffer x",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_detail[] = {
    { ._name = "UNUSED_145_143",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_UNUSED_145_143_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_UNUSED_145_143_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_UNUSED_145_143_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_UNUSED_145_143_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_GO_ARB_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_GO_ARB_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_GO_ARB_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_GO_ARB_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_GO_ARB_SG0_QW,
      ._desc = "Go packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PKT_BSY_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_BSY_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_BSY_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_BSY_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_BSY_SG0_QW,
      ._desc = "Packet busy",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PKT_ADDR_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_ADDR_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_ADDR_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_ADDR_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_ADDR_SG0_QW,
      ._desc = "Packet data buffer address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PKT_LENGTH_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_LENGTH_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_LENGTH_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_LENGTH_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_Q_PKT_LENGTH_SG0_QW,
      ._desc = "Packet length",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_detail[] = {
    { ._name = "ARB_FLUSH_REQ_PEND_X_1",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_ARB_FLUSH_REQ_PEND_X_1_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_ARB_FLUSH_REQ_PEND_X_1_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_ARB_FLUSH_REQ_PEND_X_1_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_ARB_FLUSH_REQ_PEND_X_1_QW,
      ._desc = "Buffer x flush request pending to arb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_FLUSH_REQ_X_1",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_ARB_FLUSH_REQ_X_1_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_ARB_FLUSH_REQ_X_1_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_ARB_FLUSH_REQ_X_1_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_ARB_FLUSH_REQ_X_1_QW,
      ._desc = "Buffer x flush request to arb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_lm_data2_d_lo_wc_detail[] = {
    { ._name = "ARB_REQ",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_ARB_REQ_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_ARB_REQ_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_ARB_REQ_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_ARB_REQ_QW,
      ._desc = "Buffer x non-flush request to arb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_REQ_PEND",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_ARB_REQ_PEND_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_ARB_REQ_PEND_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_ARB_REQ_PEND_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_ARB_REQ_PEND_QW,
      ._desc = "Buffer x non-flush request pending to arb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_detail[] = {
    { ._name = "UNUSED_145_130",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_UNUSED_145_130_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_UNUSED_145_130_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_UNUSED_145_130_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_UNUSED_145_130_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_R_Q_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_R_Q_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_R_Q_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_R_Q_BUFFER_TIMEOUT_QW,
      ._desc = "Buffer timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_GO_EVICT_SG0",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_Q_GO_EVICT_SG0_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_Q_GO_EVICT_SG0_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_Q_GO_EVICT_SG0_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_Q_GO_EVICT_SG0_QW,
      ._desc = "Go eviction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_detail[] = {
    { ._name = "BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_BUFFER_TIMEOUT_QW,
      ._desc = "Buffer x timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EVICT",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_EVICT_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_EVICT_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_EVICT_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_EVICT_QW,
      ._desc = "Buffer x evict",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_lm_data3_e_lo_wc_detail[] = {
    { ._name = "BUFFER_AVAIL",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_BUFFER_AVAIL_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_BUFFER_AVAIL_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_BUFFER_AVAIL_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_BUFFER_AVAIL_QW,
      ._desc = "Buffer x available",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BUFFER_VALID",
      ._bpos = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_BUFFER_VALID_BP,
      ._mask = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_BUFFER_VALID_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_BUFFER_VALID_MASK,
      ._index = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_BUFFER_VALID_QW,
      ._desc = "Buffer x valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_detail[] = {
    { ._name = "I_RSPOUT_RD",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_I_RSPOUT_RD_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_I_RSPOUT_RD_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_I_RSPOUT_RD_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_I_RSPOUT_RD_QW,
      ._desc = "Rspout FIFO read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_RSPOUT_ERR",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_R_RSPOUT_ERR_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_R_RSPOUT_ERR_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_R_RSPOUT_ERR_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_R_RSPOUT_ERR_QW,
      ._desc = "Rspout FIFO output error flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_RSPOUT_TAIL",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_R_RSPOUT_TAIL_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_R_RSPOUT_TAIL_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_R_RSPOUT_TAIL_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_R_RSPOUT_TAIL_QW,
      ._desc = "Rspout FIFO output tail",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSPOUT_FIFO_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSPOUT_FIFO_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSPOUT_FIFO_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTDATA_QW2 & AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSPOUT_FIFO_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSPOUT_FIFO_FLIT_QW,
      ._desc = "Rspout FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_detail[] = {
    { ._name = "RSPOUT_FIFO_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSPOUT_FIFO_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSPOUT_FIFO_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSTDATA_QW1 & AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSPOUT_FIFO_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSPOUT_FIFO_FLIT_QW,
      ._desc = "Rspout FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_wc_buf1_rspout_flit_f_lo_wc_detail[] = {
    { ._name = "RSPOUT_FIFO_FLIT",
      ._bpos = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_RSPOUT_FIFO_FLIT_BP,
      ._mask = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_RSPOUT_FIFO_FLIT_MASK,
      ._rval = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_RSTDATA & AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_RSPOUT_FIFO_FLIT_MASK,
      ._index = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_RSPOUT_FIFO_FLIT_QW,
      ._desc = "Rspout FIFO output flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_mux_sel_ff_hi_wc_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_WC_MUX_SEL_FF_HI_WC_POWER_DOWN_BP,
      ._mask = AR_NIC_WC_MUX_SEL_FF_HI_WC_POWER_DOWN_MASK,
      ._rval = AR_NIC_WC_MUX_SEL_FF_HI_WC_RSTDATA_QW2 & AR_NIC_WC_MUX_SEL_FF_HI_WC_POWER_DOWN_MASK,
      ._index = AR_NIC_WC_MUX_SEL_FF_HI_WC_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_mux_sel_ff_mid_wc_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_WC_MUX_SEL_FF_MID_WC_POWER_DOWN_BP,
      ._mask = AR_NIC_WC_MUX_SEL_FF_MID_WC_POWER_DOWN_MASK,
      ._rval = AR_NIC_WC_MUX_SEL_FF_MID_WC_RSTDATA_QW1 & AR_NIC_WC_MUX_SEL_FF_MID_WC_POWER_DOWN_MASK,
      ._index = AR_NIC_WC_MUX_SEL_FF_MID_WC_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_mux_sel_ff_lo_wc_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_WC_MUX_SEL_FF_LO_WC_POWER_DOWN_BP,
      ._mask = AR_NIC_WC_MUX_SEL_FF_LO_WC_POWER_DOWN_MASK,
      ._rval = AR_NIC_WC_MUX_SEL_FF_LO_WC_RSTDATA & AR_NIC_WC_MUX_SEL_FF_LO_WC_POWER_DOWN_MASK,
      ._index = AR_NIC_WC_MUX_SEL_FF_LO_WC_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_cfg_crdts_detail[] = {
    { ._name = "FLRSP_FIFO_MAX_CRDT",
      ._bpos = AR_NIC_WC_CFG_CRDTS_FLRSP_FIFO_MAX_CRDT_BP,
      ._mask = AR_NIC_WC_CFG_CRDTS_FLRSP_FIFO_MAX_CRDT_MASK,
      ._rval = AR_NIC_WC_CFG_CRDTS_RSTDATA & AR_NIC_WC_CFG_CRDTS_FLRSP_FIFO_MAX_CRDT_MASK,
      ._index = AR_NIC_WC_CFG_CRDTS_FLRSP_FIFO_MAX_CRDT_QW,
      ._desc = "Max credits for flrsp_fifo internal to WC block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RSPOUT_FIFO_MAX_CRDT",
      ._bpos = AR_NIC_WC_CFG_CRDTS_RSPOUT_FIFO_MAX_CRDT_BP,
      ._mask = AR_NIC_WC_CFG_CRDTS_RSPOUT_FIFO_MAX_CRDT_MASK,
      ._rval = AR_NIC_WC_CFG_CRDTS_RSTDATA & AR_NIC_WC_CFG_CRDTS_RSPOUT_FIFO_MAX_CRDT_MASK,
      ._index = AR_NIC_WC_CFG_CRDTS_RSPOUT_FIFO_MAX_CRDT_QW,
      ._desc = "Max credits for respout_fifo internal to WC block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RSPIN_FIFO_MAX_CRDT",
      ._bpos = AR_NIC_WC_CFG_CRDTS_RSPIN_FIFO_MAX_CRDT_BP,
      ._mask = AR_NIC_WC_CFG_CRDTS_RSPIN_FIFO_MAX_CRDT_MASK,
      ._rval = AR_NIC_WC_CFG_CRDTS_RSTDATA & AR_NIC_WC_CFG_CRDTS_RSPIN_FIFO_MAX_CRDT_MASK,
      ._index = AR_NIC_WC_CFG_CRDTS_RSPIN_FIFO_MAX_CRDT_QW,
      ._desc = "Max credits for respin_fifo internal to WC block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SSID_FL_RSP_MAX_CRDT",
      ._bpos = AR_NIC_WC_CFG_CRDTS_SSID_FL_RSP_MAX_CRDT_BP,
      ._mask = AR_NIC_WC_CFG_CRDTS_SSID_FL_RSP_MAX_CRDT_MASK,
      ._rval = AR_NIC_WC_CFG_CRDTS_RSTDATA & AR_NIC_WC_CFG_CRDTS_SSID_FL_RSP_MAX_CRDT_MASK,
      ._index = AR_NIC_WC_CFG_CRDTS_SSID_FL_RSP_MAX_CRDT_QW,
      ._desc = "Max credits for flush response channel to SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SSID_RSP_MAX_CRDT",
      ._bpos = AR_NIC_WC_CFG_CRDTS_SSID_RSP_MAX_CRDT_BP,
      ._mask = AR_NIC_WC_CFG_CRDTS_SSID_RSP_MAX_CRDT_MASK,
      ._rval = AR_NIC_WC_CFG_CRDTS_RSTDATA & AR_NIC_WC_CFG_CRDTS_SSID_RSP_MAX_CRDT_MASK,
      ._index = AR_NIC_WC_CFG_CRDTS_SSID_RSP_MAX_CRDT_QW,
      ._desc = "Max credits for response channel to SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARB_MAX_CRDT",
      ._bpos = AR_NIC_WC_CFG_CRDTS_PARB_MAX_CRDT_BP,
      ._mask = AR_NIC_WC_CFG_CRDTS_PARB_MAX_CRDT_MASK,
      ._rval = AR_NIC_WC_CFG_CRDTS_RSTDATA & AR_NIC_WC_CFG_CRDTS_PARB_MAX_CRDT_MASK,
      ._index = AR_NIC_WC_CFG_CRDTS_PARB_MAX_CRDT_QW,
      ._desc = "Max credits for request channel to PARB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_dbg_errinj_mem_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_MEM_ADDRESS_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_MEM_ADDRESS_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_MEM_RSTDATA & AR_NIC_WC_DBG_ERRINJ_MEM_ADDRESS_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_MEM_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_MEM_PARITY_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_MEM_PARITY_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_MEM_RSTDATA & AR_NIC_WC_DBG_ERRINJ_MEM_PARITY_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_MEM_PARITY_QW,
      ._desc = "When a TAG error is injected, if this bit is set, the parity bit for the TAG that is read is inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "POISON",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_MEM_POISON_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_MEM_POISON_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_MEM_RSTDATA & AR_NIC_WC_DBG_ERRINJ_MEM_POISON_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_MEM_POISON_QW,
      ._desc = "When a Data RAM error is injected, if this bit is set, the poison bit for the memory address read is inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_MEM_CHECKBITS_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_MEM_CHECKBITS_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_MEM_RSTDATA & AR_NIC_WC_DBG_ERRINJ_MEM_CHECKBITS_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_MEM_CHECKBITS_QW,
      ._desc = "When a Data RAM error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RAMSELECT",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_MEM_RAMSELECT_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_MEM_RAMSELECT_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_MEM_RSTDATA & AR_NIC_WC_DBG_ERRINJ_MEM_RAMSELECT_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_MEM_RAMSELECT_QW,
      ._desc = "This field identifies the memory in which errors will be injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_MEM_TRIGGERED_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_MEM_TRIGGERED_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_MEM_RSTDATA & AR_NIC_WC_DBG_ERRINJ_MEM_TRIGGERED_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_MEM_TRIGGERED_QW,
      ._desc = "This status bit should be clear when the MMR is written by software",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_MEM_MODE_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_MEM_MODE_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_MEM_RSTDATA & AR_NIC_WC_DBG_ERRINJ_MEM_MODE_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_MEM_MODE_QW,
      ._desc = "Mode 0: Inject error onceMode 1: Inject error alwaysMode 2: Inject error once if address matchesMode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_MEM_ENABLE_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_MEM_ENABLE_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_MEM_RSTDATA & AR_NIC_WC_DBG_ERRINJ_MEM_ENABLE_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_MEM_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_dbg_errinj_bus_detail[] = {
    { ._name = "RSPIN_FIFO_1",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_RSPIN_FIFO_1_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_RSPIN_FIFO_1_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_RSPIN_FIFO_1_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_RSPIN_FIFO_1_QW,
      ._desc = "Select rspin_fifo of buffer block 1 read for error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RSPIN_FIFO_0",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_RSPIN_FIFO_0_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_RSPIN_FIFO_0_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_RSPIN_FIFO_0_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_RSPIN_FIFO_0_QW,
      ._desc = "Select rspin_fifo of buffer block 0 read for error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTWK_RSP_FIFO",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_NTWK_RSP_FIFO_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_NTWK_RSP_FIFO_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_NTWK_RSP_FIFO_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_NTWK_RSP_FIFO_QW,
      ._desc = "Select ntwk_rsp_fifo read for error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS_UP",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_CHECKBITS_UP_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_CHECKBITS_UP_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_CHECKBITS_UP_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_CHECKBITS_UP_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 135:72 to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS_LO",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_CHECKBITS_LO_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_CHECKBITS_LO_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_CHECKBITS_LO_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_CHECKBITS_LO_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 63:0 to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_PARITY_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_PARITY_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_PARITY_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_PARITY_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_COUNT_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_COUNT_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_COUNT_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_COUNT_QW,
      ._desc = "Flit in which to inject the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_TRIGGERED_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_TRIGGERED_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_TRIGGERED_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_TRIGGERED_QW,
      ._desc = "This status bit should be clear when the MMR is written by software",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_MODE_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_MODE_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_MODE_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_MODE_QW,
      ._desc = "Mode 0: Inject error in flit specified by COUNT of one packetMode 1: Inject error in flit specified by COUNT of all packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_WC_DBG_ERRINJ_BUS_ENABLE_BP,
      ._mask = AR_NIC_WC_DBG_ERRINJ_BUS_ENABLE_MASK,
      ._rval = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_WC_DBG_ERRINJ_BUS_ENABLE_MASK,
      ._index = AR_NIC_WC_DBG_ERRINJ_BUS_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_dbg_buf_inval_detail[] = {
    { ._name = "FLUSH",
      ._bpos = AR_NIC_WC_DBG_BUF_INVAL_FLUSH_BP,
      ._mask = AR_NIC_WC_DBG_BUF_INVAL_FLUSH_MASK,
      ._rval = AR_NIC_WC_DBG_BUF_INVAL_RSTDATA & AR_NIC_WC_DBG_BUF_INVAL_FLUSH_MASK,
      ._index = AR_NIC_WC_DBG_BUF_INVAL_FLUSH_QW,
      ._desc = "When set, entries are flushed to memory as they are invalidated",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "WO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_sts_buf_avail_detail[] = {
    { ._name = "BUF1",
      ._bpos = AR_NIC_WC_STS_BUF_AVAIL_BUF1_BP,
      ._mask = AR_NIC_WC_STS_BUF_AVAIL_BUF1_MASK,
      ._rval = AR_NIC_WC_STS_BUF_AVAIL_RSTDATA & AR_NIC_WC_STS_BUF_AVAIL_BUF1_MASK,
      ._index = AR_NIC_WC_STS_BUF_AVAIL_BUF1_QW,
      ._desc = "Flag is set if corresponding write combining buffer in buffer 1 is available to be allocated",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "BUF0",
      ._bpos = AR_NIC_WC_STS_BUF_AVAIL_BUF0_BP,
      ._mask = AR_NIC_WC_STS_BUF_AVAIL_BUF0_MASK,
      ._rval = AR_NIC_WC_STS_BUF_AVAIL_RSTDATA & AR_NIC_WC_STS_BUF_AVAIL_BUF0_MASK,
      ._index = AR_NIC_WC_STS_BUF_AVAIL_BUF0_QW,
      ._desc = "Flag is set if corresponding write combining buffer in buffer 0 is available to be allocated",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_sts_buf_vld_detail[] = {
    { ._name = "BUF1",
      ._bpos = AR_NIC_WC_STS_BUF_VLD_BUF1_BP,
      ._mask = AR_NIC_WC_STS_BUF_VLD_BUF1_MASK,
      ._rval = AR_NIC_WC_STS_BUF_VLD_RSTDATA & AR_NIC_WC_STS_BUF_VLD_BUF1_MASK,
      ._index = AR_NIC_WC_STS_BUF_VLD_BUF1_QW,
      ._desc = "Flag is set if corresponding write combining buffer in buffer 1 is valid",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "BUF0",
      ._bpos = AR_NIC_WC_STS_BUF_VLD_BUF0_BP,
      ._mask = AR_NIC_WC_STS_BUF_VLD_BUF0_MASK,
      ._rval = AR_NIC_WC_STS_BUF_VLD_RSTDATA & AR_NIC_WC_STS_BUF_VLD_BUF0_MASK,
      ._index = AR_NIC_WC_STS_BUF_VLD_BUF0_QW,
      ._desc = "Flag is set if corresponding write combining buffer in buffer 0 is valid",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_flg_detail[] = {
    { ._name = "BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_ERR_FLG_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_ERR_FLG_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_ERR_FLG_BUFFER_TIMEOUT_QW,
      ._desc = "A write combining buffer time-out has occurred",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "FLUSH_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_FLUSH_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_FLUSH_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_FLUSH_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_FLUSH_RSP_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the flush_rsp FIFO",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "FLUSH_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_FLUSH_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_FLUSH_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_FLUSH_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_FLUSH_RSP_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the flush_rsp FIFO",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "FLUSH_REQ_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_FLUSH_REQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_FLUSH_REQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_FLUSH_REQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_FLUSH_REQ_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the flush_req FIFO",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "FLUSH_REQ_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_FLUSH_REQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_FLUSH_REQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_FLUSH_REQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_FLUSH_REQ_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the flush_req FIFO",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RSPOUT1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPOUT1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPOUT1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPOUT1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPOUT1_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspout FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RSPOUT1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPOUT1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPOUT1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPOUT1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPOUT1_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspout FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RSPOUT0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPOUT0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPOUT0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPOUT0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPOUT0_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspout FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RSPOUT0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPOUT0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPOUT0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPOUT0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPOUT0_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspout FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN1_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN1_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN0_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN0_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "NTWK_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_NTWK_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_NTWK_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_NTWK_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_NTWK_RSP_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "NTWK_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FLG_NTWK_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FLG_NTWK_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_NTWK_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FLG_NTWK_RSP_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "TAG_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_TAG_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_TAG_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_TAG_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_TAG_PBE_QW,
      ._desc = "Set when a parity error is detected on a write combining buffer TAG",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN1_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN1_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN1_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN1_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN1_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN0_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN0_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN0_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN0_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN0_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "NTWK_RSP_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FLG_NTWK_RSP_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_NTWK_RSP_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_NTWK_RSP_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_NTWK_RSP_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "BUF1_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_BUF1_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_BUF1_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_BUF1_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_BUF1_MBE_QW,
      ._desc = "Set when a MBE is detected on data being read from an entry in buffer block 1",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "BUF1_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_BUF1_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_BUF1_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_BUF1_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_BUF1_SBE_QW,
      ._desc = "Set when a SBE is detected on data being read from an entry in buffer block 1",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "BUF0_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_BUF0_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_BUF0_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_BUF0_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_BUF0_MBE_QW,
      ._desc = "Set when a MBE is detected on data being read from an entry in buffer block 0",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "BUF0_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_BUF0_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_BUF0_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_BUF0_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_BUF0_SBE_QW,
      ._desc = "Set when a SBE is detected on data being read from an entry in buffer block 0",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN1_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN1_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN1_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN1_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN1_DAT_MBE_QW,
      ._desc = "Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN1_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN1_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN1_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN1_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN1_DAT_SBE_QW,
      ._desc = "Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN0_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN0_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN0_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN0_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN0_DAT_MBE_QW,
      ._desc = "Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "RSPIN0_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_FLG_RSPIN0_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FLG_RSPIN0_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_RSPIN0_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FLG_RSPIN0_DAT_SBE_QW,
      ._desc = "Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_WC_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_WC_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_WC_ERR_FLG_RSTDATA & AR_NIC_WC_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_WC_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Reserved for Diagnostics",
      ._type_bitmsk = 0x0000000000100001ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_clr_detail[] = {
    { ._name = "BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_ERR_CLR_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_ERR_CLR_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_ERR_CLR_BUFFER_TIMEOUT_QW,
      ._desc = "A write combining buffer time-out has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FLUSH_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_FLUSH_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_FLUSH_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_FLUSH_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_FLUSH_RSP_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the flush_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FLUSH_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_FLUSH_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_FLUSH_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_FLUSH_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_FLUSH_RSP_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the flush_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FLUSH_REQ_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_FLUSH_REQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_FLUSH_REQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_FLUSH_REQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_FLUSH_REQ_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the flush_req FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FLUSH_REQ_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_FLUSH_REQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_FLUSH_REQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_FLUSH_REQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_FLUSH_REQ_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the flush_req FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPOUT1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPOUT1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPOUT1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPOUT1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPOUT1_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspout FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPOUT1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPOUT1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPOUT1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPOUT1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPOUT1_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspout FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPOUT0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPOUT0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPOUT0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPOUT0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPOUT0_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspout FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPOUT0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPOUT0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPOUT0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPOUT0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPOUT0_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspout FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN1_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN1_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN0_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN0_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NTWK_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_NTWK_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_NTWK_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_NTWK_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_NTWK_RSP_FIFO_UFLW_QW,
      ._desc = "Set when an underflow is detected on the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NTWK_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_CLR_NTWK_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_CLR_NTWK_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_NTWK_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_CLR_NTWK_RSP_FIFO_OFLW_QW,
      ._desc = "Set when an overflow is detected on the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TAG_PBE",
      ._bpos = AR_NIC_WC_ERR_CLR_TAG_PBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_TAG_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_TAG_PBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_TAG_PBE_QW,
      ._desc = "Set when a parity error is detected on a write combining buffer TAG",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN1_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN1_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN1_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN1_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN1_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN0_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN0_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN0_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN0_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN0_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NTWK_RSP_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_CLR_NTWK_RSP_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_NTWK_RSP_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_NTWK_RSP_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_NTWK_RSP_HDR_PBE_QW,
      ._desc = "Set when a header parity error is detected at the output of the ntwk_rsp FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BUF1_MBE",
      ._bpos = AR_NIC_WC_ERR_CLR_BUF1_MBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_BUF1_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_BUF1_MBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_BUF1_MBE_QW,
      ._desc = "Set when a MBE is detected on data being read from an entry in buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BUF1_SBE",
      ._bpos = AR_NIC_WC_ERR_CLR_BUF1_SBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_BUF1_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_BUF1_SBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_BUF1_SBE_QW,
      ._desc = "Set when a SBE is detected on data being read from an entry in buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BUF0_MBE",
      ._bpos = AR_NIC_WC_ERR_CLR_BUF0_MBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_BUF0_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_BUF0_MBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_BUF0_MBE_QW,
      ._desc = "Set when a MBE is detected on data being read from an entry in buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BUF0_SBE",
      ._bpos = AR_NIC_WC_ERR_CLR_BUF0_SBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_BUF0_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_BUF0_SBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_BUF0_SBE_QW,
      ._desc = "Set when a SBE is detected on data being read from an entry in buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN1_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN1_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN1_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN1_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN1_DAT_MBE_QW,
      ._desc = "Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN1_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN1_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN1_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN1_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN1_DAT_SBE_QW,
      ._desc = "Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN0_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN0_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN0_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN0_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN0_DAT_MBE_QW,
      ._desc = "Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSPIN0_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_CLR_RSPIN0_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_CLR_RSPIN0_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_RSPIN0_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_CLR_RSPIN0_DAT_SBE_QW,
      ._desc = "Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_WC_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_WC_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_WC_ERR_CLR_RSTDATA & AR_NIC_WC_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_WC_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Reserved for Diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_hss_msk_detail[] = {
    { ._name = "BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_BUFFER_TIMEOUT_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_FLUSH_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_FLUSH_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_FLUSH_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_FLUSH_RSP_FIFO_UFLW_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_FLUSH_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_FLUSH_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_FLUSH_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_FLUSH_RSP_FIFO_OFLW_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_REQ_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_FLUSH_REQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_FLUSH_REQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_FLUSH_REQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_FLUSH_REQ_FIFO_UFLW_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_REQ_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_FLUSH_REQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_FLUSH_REQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_FLUSH_REQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_FLUSH_REQ_FIFO_OFLW_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPOUT1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPOUT1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPOUT1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPOUT1_FIFO_UFLW_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPOUT1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPOUT1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPOUT1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPOUT1_FIFO_OFLW_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPOUT0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPOUT0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPOUT0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPOUT0_FIFO_UFLW_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPOUT0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPOUT0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPOUT0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPOUT0_FIFO_OFLW_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_FIFO_UFLW_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_FIFO_OFLW_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_FIFO_UFLW_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_FIFO_OFLW_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NTWK_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_FIFO_UFLW_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NTWK_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_FIFO_OFLW_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TAG_PBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_TAG_PBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_TAG_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_TAG_PBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_TAG_PBE_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN1_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_HDR_PBE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN0_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_HDR_PBE_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NTWK_RSP_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_NTWK_RSP_HDR_PBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF1_MBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_BUF1_MBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_BUF1_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_BUF1_MBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_BUF1_MBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF1_SBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_BUF1_SBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_BUF1_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_BUF1_SBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_BUF1_SBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF0_MBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_BUF0_MBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_BUF0_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_BUF0_MBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_BUF0_MBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF0_SBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_BUF0_SBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_BUF0_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_BUF0_SBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_BUF0_SBE_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN1_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_DAT_MBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN1_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN1_DAT_SBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN0_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_DAT_MBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_RSPIN0_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_RSPIN0_DAT_SBE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_WC_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_WC_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_WC_ERR_HSS_MSK_RSTDATA & AR_NIC_WC_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_WC_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_os_msk_detail[] = {
    { ._name = "BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_BUFFER_TIMEOUT_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_FLUSH_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_FLUSH_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_FLUSH_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_FLUSH_RSP_FIFO_UFLW_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_FLUSH_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_FLUSH_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_FLUSH_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_FLUSH_RSP_FIFO_OFLW_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_REQ_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_FLUSH_REQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_FLUSH_REQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_FLUSH_REQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_FLUSH_REQ_FIFO_UFLW_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_REQ_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_FLUSH_REQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_FLUSH_REQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_FLUSH_REQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_FLUSH_REQ_FIFO_OFLW_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPOUT1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPOUT1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPOUT1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPOUT1_FIFO_UFLW_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPOUT1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPOUT1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPOUT1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPOUT1_FIFO_OFLW_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPOUT0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPOUT0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPOUT0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPOUT0_FIFO_UFLW_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPOUT0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPOUT0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPOUT0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPOUT0_FIFO_OFLW_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN1_FIFO_UFLW_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN1_FIFO_OFLW_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN0_FIFO_UFLW_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN0_FIFO_OFLW_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NTWK_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_FIFO_UFLW_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NTWK_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_FIFO_OFLW_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TAG_PBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_TAG_PBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_TAG_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_TAG_PBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_TAG_PBE_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN1_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN1_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN1_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN1_HDR_PBE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN0_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN0_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN0_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN0_HDR_PBE_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NTWK_RSP_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_NTWK_RSP_HDR_PBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF1_MBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_BUF1_MBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_BUF1_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_BUF1_MBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_BUF1_MBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF1_SBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_BUF1_SBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_BUF1_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_BUF1_SBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_BUF1_SBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF0_MBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_BUF0_MBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_BUF0_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_BUF0_MBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_BUF0_MBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF0_SBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_BUF0_SBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_BUF0_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_BUF0_SBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_BUF0_SBE_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN1_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN1_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN1_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN1_DAT_MBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN1_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN1_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN1_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN1_DAT_SBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN0_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN0_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN0_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN0_DAT_MBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_RSPIN0_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_RSPIN0_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_RSPIN0_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_RSPIN0_DAT_SBE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_WC_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_WC_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_WC_ERR_OS_MSK_RSTDATA & AR_NIC_WC_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_WC_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_first_flg_detail[] = {
    { ._name = "BUFFER_TIMEOUT",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_BUFFER_TIMEOUT_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_BUFFER_TIMEOUT_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_BUFFER_TIMEOUT_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_BUFFER_TIMEOUT_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_FLUSH_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_RSP_FIFO_UFLW_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_FLUSH_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_RSP_FIFO_OFLW_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_REQ_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_REQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_REQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_FLUSH_REQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_REQ_FIFO_UFLW_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FLUSH_REQ_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_REQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_REQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_FLUSH_REQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_FLUSH_REQ_FIFO_OFLW_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPOUT1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT1_FIFO_UFLW_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPOUT1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT1_FIFO_OFLW_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPOUT0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT0_FIFO_UFLW_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPOUT0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPOUT0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPOUT0_FIFO_OFLW_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_FIFO_UFLW_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_FIFO_OFLW_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_FIFO_UFLW_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_FIFO_OFLW_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NTWK_RSP_FIFO_UFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_FIFO_UFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_FIFO_UFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_FIFO_UFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_FIFO_UFLW_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NTWK_RSP_FIFO_OFLW",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_FIFO_OFLW_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_FIFO_OFLW_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_FIFO_OFLW_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_FIFO_OFLW_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TAG_PBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_TAG_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_TAG_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_TAG_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_TAG_PBE_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_HDR_PBE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_HDR_PBE_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NTWK_RSP_HDR_PBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_HDR_PBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_HDR_PBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_HDR_PBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_NTWK_RSP_HDR_PBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF1_MBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_BUF1_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_BUF1_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_BUF1_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_BUF1_MBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF1_SBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_BUF1_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_BUF1_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_BUF1_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_BUF1_SBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF0_MBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_BUF0_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_BUF0_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_BUF0_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_BUF0_MBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BUF0_SBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_BUF0_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_BUF0_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_BUF0_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_BUF0_SBE_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_DAT_MBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN1_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN1_DAT_SBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_DAT_MBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_DAT_MBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_DAT_MBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_DAT_MBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_DAT_MBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPIN0_DAT_SBE",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_DAT_SBE_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_DAT_SBE_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_DAT_SBE_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_RSPIN0_DAT_SBE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_WC_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_WC_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA & AR_NIC_WC_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_WC_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_buf0_detail[] = {
    { ._name = "MBE_SSID",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF0_MBE_SSID_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF0_MBE_SSID_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF0_RSTDATA & AR_NIC_WC_ERR_INFO_BUF0_MBE_SSID_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF0_MBE_SSID_QW,
      ._desc = "SSID of buffer which caused the MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF0_MBE_ADDRESS_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF0_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF0_RSTDATA & AR_NIC_WC_ERR_INFO_BUF0_MBE_ADDRESS_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF0_MBE_ADDRESS_QW,
      ._desc = "MBE Address (addr = {buffer[4:0],word[3:2]})",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_PART",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF0_MBE_PART_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF0_MBE_PART_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF0_RSTDATA & AR_NIC_WC_ERR_INFO_BUF0_MBE_PART_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF0_MBE_PART_QW,
      ._desc = "MBE Part",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF0_MBE_SYNDROME_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF0_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF0_RSTDATA & AR_NIC_WC_ERR_INFO_BUF0_MBE_SYNDROME_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF0_MBE_SYNDROME_QW,
      ._desc = "MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF0_SBE_ADDRESS_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF0_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF0_RSTDATA & AR_NIC_WC_ERR_INFO_BUF0_SBE_ADDRESS_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF0_SBE_ADDRESS_QW,
      ._desc = "SBE Address (addr = {buffer[4:0],word[3:2]})",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_PART",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF0_SBE_PART_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF0_SBE_PART_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF0_RSTDATA & AR_NIC_WC_ERR_INFO_BUF0_SBE_PART_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF0_SBE_PART_QW,
      ._desc = "SBE Part",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF0_SBE_SYNDROME_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF0_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF0_RSTDATA & AR_NIC_WC_ERR_INFO_BUF0_SBE_SYNDROME_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF0_SBE_SYNDROME_QW,
      ._desc = "SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_buf1_detail[] = {
    { ._name = "MBE_SSID",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF1_MBE_SSID_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF1_MBE_SSID_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF1_RSTDATA & AR_NIC_WC_ERR_INFO_BUF1_MBE_SSID_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF1_MBE_SSID_QW,
      ._desc = "SSID of buffer which caused the MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF1_MBE_ADDRESS_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF1_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF1_RSTDATA & AR_NIC_WC_ERR_INFO_BUF1_MBE_ADDRESS_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF1_MBE_ADDRESS_QW,
      ._desc = "MBE Address (addr = {buffer[4:0],word[3:2]})",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_PART",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF1_MBE_PART_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF1_MBE_PART_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF1_RSTDATA & AR_NIC_WC_ERR_INFO_BUF1_MBE_PART_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF1_MBE_PART_QW,
      ._desc = "MBE Part",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF1_MBE_SYNDROME_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF1_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF1_RSTDATA & AR_NIC_WC_ERR_INFO_BUF1_MBE_SYNDROME_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF1_MBE_SYNDROME_QW,
      ._desc = "MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF1_SBE_ADDRESS_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF1_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF1_RSTDATA & AR_NIC_WC_ERR_INFO_BUF1_SBE_ADDRESS_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF1_SBE_ADDRESS_QW,
      ._desc = "SBE Address (addr = {buffer[4:0],word[3:2]})",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_PART",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF1_SBE_PART_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF1_SBE_PART_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF1_RSTDATA & AR_NIC_WC_ERR_INFO_BUF1_SBE_PART_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF1_SBE_PART_QW,
      ._desc = "SBE Part",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_WC_ERR_INFO_BUF1_SBE_SYNDROME_BP,
      ._mask = AR_NIC_WC_ERR_INFO_BUF1_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_BUF1_RSTDATA & AR_NIC_WC_ERR_INFO_BUF1_SBE_SYNDROME_MASK,
      ._index = AR_NIC_WC_ERR_INFO_BUF1_SBE_SYNDROME_QW,
      ._desc = "SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_rspin0_detail[] = {
    { ._name = "MBE_UPPER",
      ._bpos = AR_NIC_WC_ERR_INFO_RSPIN0_MBE_UPPER_BP,
      ._mask = AR_NIC_WC_ERR_INFO_RSPIN0_MBE_UPPER_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_RSPIN0_RSTDATA & AR_NIC_WC_ERR_INFO_RSPIN0_MBE_UPPER_MASK,
      ._index = AR_NIC_WC_ERR_INFO_RSPIN0_MBE_UPPER_QW,
      ._desc = "MBE is from upper 72 bits of data flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_WC_ERR_INFO_RSPIN0_MBE_SYNDROME_BP,
      ._mask = AR_NIC_WC_ERR_INFO_RSPIN0_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_RSPIN0_RSTDATA & AR_NIC_WC_ERR_INFO_RSPIN0_MBE_SYNDROME_MASK,
      ._index = AR_NIC_WC_ERR_INFO_RSPIN0_MBE_SYNDROME_QW,
      ._desc = "MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_UPPER",
      ._bpos = AR_NIC_WC_ERR_INFO_RSPIN0_SBE_UPPER_BP,
      ._mask = AR_NIC_WC_ERR_INFO_RSPIN0_SBE_UPPER_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_RSPIN0_RSTDATA & AR_NIC_WC_ERR_INFO_RSPIN0_SBE_UPPER_MASK,
      ._index = AR_NIC_WC_ERR_INFO_RSPIN0_SBE_UPPER_QW,
      ._desc = "SBE is from upper 72 bits of data flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_WC_ERR_INFO_RSPIN0_SBE_SYNDROME_BP,
      ._mask = AR_NIC_WC_ERR_INFO_RSPIN0_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_RSPIN0_RSTDATA & AR_NIC_WC_ERR_INFO_RSPIN0_SBE_SYNDROME_MASK,
      ._index = AR_NIC_WC_ERR_INFO_RSPIN0_SBE_SYNDROME_QW,
      ._desc = "SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_rspin1_detail[] = {
    { ._name = "MBE_UPPER",
      ._bpos = AR_NIC_WC_ERR_INFO_RSPIN1_MBE_UPPER_BP,
      ._mask = AR_NIC_WC_ERR_INFO_RSPIN1_MBE_UPPER_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_RSPIN1_RSTDATA & AR_NIC_WC_ERR_INFO_RSPIN1_MBE_UPPER_MASK,
      ._index = AR_NIC_WC_ERR_INFO_RSPIN1_MBE_UPPER_QW,
      ._desc = "MBE is from upper 72 bits of data flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_WC_ERR_INFO_RSPIN1_MBE_SYNDROME_BP,
      ._mask = AR_NIC_WC_ERR_INFO_RSPIN1_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_RSPIN1_RSTDATA & AR_NIC_WC_ERR_INFO_RSPIN1_MBE_SYNDROME_MASK,
      ._index = AR_NIC_WC_ERR_INFO_RSPIN1_MBE_SYNDROME_QW,
      ._desc = "MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_UPPER",
      ._bpos = AR_NIC_WC_ERR_INFO_RSPIN1_SBE_UPPER_BP,
      ._mask = AR_NIC_WC_ERR_INFO_RSPIN1_SBE_UPPER_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_RSPIN1_RSTDATA & AR_NIC_WC_ERR_INFO_RSPIN1_SBE_UPPER_MASK,
      ._index = AR_NIC_WC_ERR_INFO_RSPIN1_SBE_UPPER_QW,
      ._desc = "SBE is from upper 72 bits of data flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_WC_ERR_INFO_RSPIN1_SBE_SYNDROME_BP,
      ._mask = AR_NIC_WC_ERR_INFO_RSPIN1_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_RSPIN1_RSTDATA & AR_NIC_WC_ERR_INFO_RSPIN1_SBE_SYNDROME_MASK,
      ._index = AR_NIC_WC_ERR_INFO_RSPIN1_SBE_SYNDROME_QW,
      ._desc = "SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_cnt_sbe_buf0_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_CNT_BP,
      ._mask = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_CNT_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_RSTDATA & AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_CNT_MASK,
      ._index = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_CNT_QW,
      ._desc = "SBE error count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_cnt_mbe_buf0_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_CNT_BP,
      ._mask = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_CNT_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_RSTDATA & AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_CNT_MASK,
      ._index = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_CNT_QW,
      ._desc = "MBE error count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_cnt_sbe_buf1_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_CNT_BP,
      ._mask = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_CNT_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_RSTDATA & AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_CNT_MASK,
      ._index = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_CNT_QW,
      ._desc = "SBE error count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_cnt_mbe_buf1_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_CNT_BP,
      ._mask = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_CNT_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_RSTDATA & AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_CNT_MASK,
      ._index = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_CNT_QW,
      ._desc = "MBE error count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_cnt_sbe_rspin0_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_CNT_BP,
      ._mask = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_CNT_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_RSTDATA & AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_CNT_MASK,
      ._index = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_CNT_QW,
      ._desc = "SBE error count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_cnt_mbe_rspin0_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_CNT_BP,
      ._mask = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_CNT_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_RSTDATA & AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_CNT_MASK,
      ._index = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_CNT_QW,
      ._desc = "MBE error count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_cnt_sbe_rspin1_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_CNT_BP,
      ._mask = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_CNT_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_RSTDATA & AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_CNT_MASK,
      ._index = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_CNT_QW,
      ._desc = "SBE error count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_err_info_cnt_mbe_rspin1_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_CNT_BP,
      ._mask = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_CNT_MASK,
      ._rval = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_RSTDATA & AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_CNT_MASK,
      ._index = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_CNT_QW,
      ._desc = "MBE error count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_prf_rsp_bytes_rcvd_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_PRF_RSP_BYTES_RCVD_CNT_BP,
      ._mask = AR_NIC_WC_PRF_RSP_BYTES_RCVD_CNT_MASK,
      ._rval = AR_NIC_WC_PRF_RSP_BYTES_RCVD_RSTDATA & AR_NIC_WC_PRF_RSP_BYTES_RCVD_CNT_MASK,
      ._index = AR_NIC_WC_PRF_RSP_BYTES_RCVD_CNT_QW,
      ._desc = "Byte Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_wc_prf_bufs_vld_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_WC_PRF_BUFS_VLD_CNT_BP,
      ._mask = AR_NIC_WC_PRF_BUFS_VLD_CNT_MASK,
      ._rval = AR_NIC_WC_PRF_BUFS_VLD_RSTDATA & AR_NIC_WC_PRF_BUFS_VLD_CNT_MASK,
      ._index = AR_NIC_WC_PRF_BUFS_VLD_CNT_QW,
      ._desc = "Valid Buffers Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR WC DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_rval[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_MMR_RING_0_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_rval[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_mmr_ring_0_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_MMR_RING_0_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_rval[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_rmsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_wrmsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_rdmsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_RDMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_RDMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_xsmsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_XSMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_XSMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_wsemsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_rsemsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_w1smsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_ERR_FLG_1_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_ERR_FLG_1_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_rval[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_rmsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_wrmsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_rdmsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_RDMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_xsmsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_XSMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_wsemsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_rsemsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_w1smsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_err_flg_1_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_ERR_FLG_1_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_ERR_FLG_1_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_rval[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_PARB_FLIT_2_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_rval[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_parb_flit_2_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_PARB_FLIT_2_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_rval[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_rval[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_rval[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_TOP_MISC_4_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_rval[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_top_misc_4_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_TOP_MISC_4_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_rval[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_rval[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_flush_misc_5_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_rval[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_rmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_wrmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_rdmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RDMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_xsmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_XSMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_wsemsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_rsemsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_w1smsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_rval[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_rmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_wrmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_rdmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RDMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_xsmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_XSMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_wsemsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_rsemsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_w1smsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC_HWRMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_rval[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RSTDATA_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RSTDATA_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RSTDATA_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_rmsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RSTMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RSTMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RSTMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_wrmsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_WRTMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_WRTMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_WRTMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_rdmsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RDMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RDMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RDMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_xsmsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_XSMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_XSMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_XSMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_wsemsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_WSEMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_WSEMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_WSEMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_rsemsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RSEMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RSEMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_RSEMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_w1smsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_W1SMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_W1SMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_W1SMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_w1cmsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_W1CMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_W1CMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_W1CMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_wrstmsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_WRSTMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_WRSTMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_WRSTMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_hwwmsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_HWWMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_HWWMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_HWWMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_hi_wc_hwrmsk[3] = {
	AR_NIC_WC_MUX_SEL_FF_HI_WC_HWRMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_HWRMASK_QW1,
	AR_NIC_WC_MUX_SEL_FF_HI_WC_HWRMASK_QW2
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_rval[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_RSTDATA_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_RSTDATA_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_rmsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_RSTMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_RSTMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_wrmsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_WRTMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_WRTMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_rdmsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_RDMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_RDMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_xsmsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_XSMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_XSMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_wsemsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_WSEMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_WSEMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_rsemsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_RSEMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_RSEMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_w1smsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_W1SMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_W1SMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_w1cmsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_W1CMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_W1CMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_wrstmsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_WRSTMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_WRSTMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_hwwmsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_HWWMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_HWWMASK_QW1
};
static const uint64_t __ar_nic_wc_mux_sel_ff_mid_wc_hwrmsk[2] = {
	AR_NIC_WC_MUX_SEL_FF_MID_WC_HWRMASK_QW0,
	AR_NIC_WC_MUX_SEL_FF_MID_WC_HWRMASK_QW1
};

/*
 *  AR WC MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_wc_cfg_params = {
    ._name = "AR_NIC_WC_CFG_PARAMS",
    ._addr = AR_NIC_WC_CFG_PARAMS,
    ._rval.val = AR_NIC_WC_CFG_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_WC_CFG_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_CFG_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_CFG_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_WC_CFG_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_WC_CFG_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_CFG_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_CFG_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_CFG_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_CFG_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_CFG_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_CFG_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000801ull,
    ._info = __ar_nic_wc_cfg_params_detail
};
static const cmmr_br_t __ar_nic_wc_wc_mmr_ring_0_hi_wc = {
    ._name = "AR_NIC_WC_WC_MMR_RING_0_HI_WC",
    ._addr = AR_NIC_WC_WC_MMR_RING_0_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_mmr_ring_0_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_mmr_ring_0_mid_wc = {
    ._name = "AR_NIC_WC_WC_MMR_RING_0_MID_WC",
    ._addr = AR_NIC_WC_WC_MMR_RING_0_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_mmr_ring_0_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_mmr_ring_0_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_mmr_ring_0_lo_wc = {
    ._name = "AR_NIC_WC_WC_MMR_RING_0_LO_WC",
    ._addr = AR_NIC_WC_WC_MMR_RING_0_LO_WC,
    ._rval.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_MMR_RING_0_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_mmr_ring_0_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_err_flg_1_hi_wc = {
    ._name = "AR_NIC_WC_ERR_FLG_1_HI_WC",
    ._addr = AR_NIC_WC_ERR_FLG_1_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_flg_1_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_err_flg_1_mid_wc = {
    ._name = "AR_NIC_WC_ERR_FLG_1_MID_WC",
    ._addr = AR_NIC_WC_ERR_FLG_1_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_err_flg_1_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_flg_1_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_err_flg_1_lo_wc = {
    ._name = "AR_NIC_WC_ERR_FLG_1_LO_WC",
    ._addr = AR_NIC_WC_ERR_FLG_1_LO_WC,
    ._rval.val = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_FLG_1_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_flg_1_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_parb_flit_2_hi_wc = {
    ._name = "AR_NIC_WC_WC_PARB_FLIT_2_HI_WC",
    ._addr = AR_NIC_WC_WC_PARB_FLIT_2_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_parb_flit_2_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_parb_flit_2_mid_wc = {
    ._name = "AR_NIC_WC_WC_PARB_FLIT_2_MID_WC",
    ._addr = AR_NIC_WC_WC_PARB_FLIT_2_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_parb_flit_2_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_parb_flit_2_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_parb_flit_2_lo_wc = {
    ._name = "AR_NIC_WC_WC_PARB_FLIT_2_LO_WC",
    ._addr = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC,
    ._rval.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_PARB_FLIT_2_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_parb_flit_2_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc = {
    ._name = "AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC",
    ._addr = AR_NIC_WC_WC_SSID_RSP_FLIT_3_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc = {
    ._name = "AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC",
    ._addr = AR_NIC_WC_WC_SSID_RSP_FLIT_3_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_ssid_rsp_flit_3_lo_wc = {
    ._name = "AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC",
    ._addr = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC,
    ._rval.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_SSID_RSP_FLIT_3_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_ssid_rsp_flit_3_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_top_misc_4_hi_wc = {
    ._name = "AR_NIC_WC_WC_TOP_MISC_4_HI_WC",
    ._addr = AR_NIC_WC_WC_TOP_MISC_4_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_top_misc_4_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_top_misc_4_mid_wc = {
    ._name = "AR_NIC_WC_WC_TOP_MISC_4_MID_WC",
    ._addr = AR_NIC_WC_WC_TOP_MISC_4_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_top_misc_4_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_top_misc_4_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_top_misc_4_lo_wc = {
    ._name = "AR_NIC_WC_WC_TOP_MISC_4_LO_WC",
    ._addr = AR_NIC_WC_WC_TOP_MISC_4_LO_WC,
    ._rval.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_TOP_MISC_4_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_top_misc_4_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_flush_misc_5_hi_wc = {
    ._name = "AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC",
    ._addr = AR_NIC_WC_WC_FLUSH_MISC_5_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_flush_misc_5_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_flush_misc_5_mid_wc = {
    ._name = "AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC",
    ._addr = AR_NIC_WC_WC_FLUSH_MISC_5_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_flush_misc_5_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_flush_misc_5_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_flush_misc_5_lo_wc = {
    ._name = "AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC",
    ._addr = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC,
    ._rval.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_FLUSH_MISC_5_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_flush_misc_5_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_rspin_flit_6_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF0_RSPIN_FLIT_6_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_rspin_flit_6_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF0_LM_DATA1_7_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_lm_data1_7_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF0_LM_DATA1_7_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_lm_data1_7_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_lm_data1_7_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA1_7_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_lm_data1_7_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF0_LM_DATA2_8_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_lm_data2_8_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF0_LM_DATA2_8_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_lm_data2_8_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_lm_data2_8_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA2_8_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_lm_data2_8_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF0_LM_DATA3_9_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_lm_data3_9_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF0_LM_DATA3_9_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_lm_data3_9_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_lm_data3_9_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF0_LM_DATA3_9_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_lm_data3_9_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf0_rspout_flit_a_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF0_RSPOUT_FLIT_A_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf0_rspout_flit_a_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_rspin_flit_b_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF1_RSPIN_FLIT_B_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_rspin_flit_b_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF1_LM_DATA1_C_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_lm_data1_c_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF1_LM_DATA1_C_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_lm_data1_c_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_lm_data1_c_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA1_C_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_lm_data1_c_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF1_LM_DATA2_D_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_lm_data2_d_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF1_LM_DATA2_D_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_lm_data2_d_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_lm_data2_d_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA2_D_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_lm_data2_d_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF1_LM_DATA3_E_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_lm_data3_e_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF1_LM_DATA3_E_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_lm_data3_e_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_lm_data3_e_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF1_LM_DATA3_E_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_lm_data3_e_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC",
    ._addr = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC",
    ._addr = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_wc_buf1_rspout_flit_f_lo_wc = {
    ._name = "AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC",
    ._addr = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC,
    ._rval.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_WC_BUF1_RSPOUT_FLIT_F_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_wc_buf1_rspout_flit_f_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_mux_sel_ff_hi_wc = {
    ._name = "AR_NIC_WC_MUX_SEL_FF_HI_WC",
    ._addr = AR_NIC_WC_MUX_SEL_FF_HI_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_hi_wc_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_mux_sel_ff_hi_wc_detail
};
static const cmmr_br_t __ar_nic_wc_mux_sel_ff_mid_wc = {
    ._name = "AR_NIC_WC_MUX_SEL_FF_MID_WC",
    ._addr = AR_NIC_WC_MUX_SEL_FF_MID_WC,
    ._rval.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_wc_mux_sel_ff_mid_wc_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_mux_sel_ff_mid_wc_detail
};
static const cmmr_br_t __ar_nic_wc_mux_sel_ff_lo_wc = {
    ._name = "AR_NIC_WC_MUX_SEL_FF_LO_WC",
    ._addr = AR_NIC_WC_MUX_SEL_FF_LO_WC,
    ._rval.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_RSTDATA,
    ._rmsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_RDMASK,
    ._xsmsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_XSMASK,
    ._wsemsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_MUX_SEL_FF_LO_WC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_mux_sel_ff_lo_wc_detail
};
static const cmmr_br_t __ar_nic_wc_cfg_crdts = {
    ._name = "AR_NIC_WC_CFG_CRDTS",
    ._addr = AR_NIC_WC_CFG_CRDTS,
    ._rval.val = AR_NIC_WC_CFG_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_WC_CFG_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_CFG_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_CFG_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_WC_CFG_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_WC_CFG_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_CFG_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_CFG_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_CFG_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_CFG_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_CFG_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_CFG_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000801ull,
    ._info = __ar_nic_wc_cfg_crdts_detail
};
static const cmmr_br_t __ar_nic_wc_dbg_errinj_mem = {
    ._name = "AR_NIC_WC_DBG_ERRINJ_MEM",
    ._addr = AR_NIC_WC_DBG_ERRINJ_MEM,
    ._rval.val = AR_NIC_WC_DBG_ERRINJ_MEM_RSTDATA,
    ._rmsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_RDMASK,
    ._xsmsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_XSMASK,
    ._wsemsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_DBG_ERRINJ_MEM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_dbg_errinj_mem_detail
};
static const cmmr_br_t __ar_nic_wc_dbg_errinj_bus = {
    ._name = "AR_NIC_WC_DBG_ERRINJ_BUS",
    ._addr = AR_NIC_WC_DBG_ERRINJ_BUS,
    ._rval.val = AR_NIC_WC_DBG_ERRINJ_BUS_RSTDATA,
    ._rmsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_RDMASK,
    ._xsmsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_XSMASK,
    ._wsemsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_DBG_ERRINJ_BUS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_dbg_errinj_bus_detail
};
static const cmmr_br_t __ar_nic_wc_dbg_buf_inval = {
    ._name = "AR_NIC_WC_DBG_BUF_INVAL",
    ._addr = AR_NIC_WC_DBG_BUF_INVAL,
    ._rval.val = AR_NIC_WC_DBG_BUF_INVAL_RSTDATA,
    ._rmsk.val = AR_NIC_WC_DBG_BUF_INVAL_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_DBG_BUF_INVAL_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_DBG_BUF_INVAL_RDMASK,
    ._xsmsk.val = AR_NIC_WC_DBG_BUF_INVAL_XSMASK,
    ._wsemsk.val = AR_NIC_WC_DBG_BUF_INVAL_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_DBG_BUF_INVAL_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_DBG_BUF_INVAL_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_DBG_BUF_INVAL_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_DBG_BUF_INVAL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_DBG_BUF_INVAL_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_DBG_BUF_INVAL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_wc_dbg_buf_inval_detail
};
static const cmmr_br_t __ar_nic_wc_sts_buf_avail = {
    ._name = "AR_NIC_WC_STS_BUF_AVAIL",
    ._addr = AR_NIC_WC_STS_BUF_AVAIL,
    ._rval.val = AR_NIC_WC_STS_BUF_AVAIL_RSTDATA,
    ._rmsk.val = AR_NIC_WC_STS_BUF_AVAIL_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_STS_BUF_AVAIL_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_STS_BUF_AVAIL_RDMASK,
    ._xsmsk.val = AR_NIC_WC_STS_BUF_AVAIL_XSMASK,
    ._wsemsk.val = AR_NIC_WC_STS_BUF_AVAIL_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_STS_BUF_AVAIL_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_STS_BUF_AVAIL_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_STS_BUF_AVAIL_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_STS_BUF_AVAIL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_STS_BUF_AVAIL_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_STS_BUF_AVAIL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_wc_sts_buf_avail_detail
};
static const cmmr_br_t __ar_nic_wc_sts_buf_vld = {
    ._name = "AR_NIC_WC_STS_BUF_VLD",
    ._addr = AR_NIC_WC_STS_BUF_VLD,
    ._rval.val = AR_NIC_WC_STS_BUF_VLD_RSTDATA,
    ._rmsk.val = AR_NIC_WC_STS_BUF_VLD_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_STS_BUF_VLD_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_STS_BUF_VLD_RDMASK,
    ._xsmsk.val = AR_NIC_WC_STS_BUF_VLD_XSMASK,
    ._wsemsk.val = AR_NIC_WC_STS_BUF_VLD_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_STS_BUF_VLD_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_STS_BUF_VLD_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_STS_BUF_VLD_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_STS_BUF_VLD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_STS_BUF_VLD_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_STS_BUF_VLD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_wc_sts_buf_vld_detail
};
static const cmmr_br_t __ar_nic_wc_err_flg = {
    ._name = "AR_NIC_WC_ERR_FLG",
    ._addr = AR_NIC_WC_ERR_FLG,
    ._rval.val = AR_NIC_WC_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x00000000003cc811ull,
    ._info = __ar_nic_wc_err_flg_detail
};
static const cmmr_br_t __ar_nic_wc_err_clr = {
    ._name = "AR_NIC_WC_ERR_CLR",
    ._addr = AR_NIC_WC_ERR_CLR,
    ._rval.val = AR_NIC_WC_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_wc_err_clr_detail
};
static const cmmr_br_t __ar_nic_wc_err_hss_msk = {
    ._name = "AR_NIC_WC_ERR_HSS_MSK",
    ._addr = AR_NIC_WC_ERR_HSS_MSK,
    ._rval.val = AR_NIC_WC_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_wc_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_wc_err_os_msk = {
    ._name = "AR_NIC_WC_ERR_OS_MSK",
    ._addr = AR_NIC_WC_ERR_OS_MSK,
    ._rval.val = AR_NIC_WC_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_wc_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_wc_err_first_flg = {
    ._name = "AR_NIC_WC_ERR_FIRST_FLG",
    ._addr = AR_NIC_WC_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_WC_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_wc_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_buf0 = {
    ._name = "AR_NIC_WC_ERR_INFO_BUF0",
    ._addr = AR_NIC_WC_ERR_INFO_BUF0,
    ._rval.val = AR_NIC_WC_ERR_INFO_BUF0_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_BUF0_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_BUF0_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_BUF0_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_BUF0_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_BUF0_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_BUF0_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_BUF0_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_BUF0_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_BUF0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_BUF0_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_BUF0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_buf0_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_buf1 = {
    ._name = "AR_NIC_WC_ERR_INFO_BUF1",
    ._addr = AR_NIC_WC_ERR_INFO_BUF1,
    ._rval.val = AR_NIC_WC_ERR_INFO_BUF1_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_BUF1_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_BUF1_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_BUF1_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_BUF1_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_BUF1_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_BUF1_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_BUF1_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_BUF1_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_BUF1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_BUF1_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_BUF1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_buf1_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_rspin0 = {
    ._name = "AR_NIC_WC_ERR_INFO_RSPIN0",
    ._addr = AR_NIC_WC_ERR_INFO_RSPIN0,
    ._rval.val = AR_NIC_WC_ERR_INFO_RSPIN0_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_RSPIN0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_rspin0_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_rspin1 = {
    ._name = "AR_NIC_WC_ERR_INFO_RSPIN1",
    ._addr = AR_NIC_WC_ERR_INFO_RSPIN1,
    ._rval.val = AR_NIC_WC_ERR_INFO_RSPIN1_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_RSPIN1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_rspin1_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_cnt_sbe_buf0 = {
    ._name = "AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0",
    ._addr = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0,
    ._rval.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_cnt_sbe_buf0_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_cnt_mbe_buf0 = {
    ._name = "AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0",
    ._addr = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0,
    ._rval.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_cnt_mbe_buf0_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_cnt_sbe_buf1 = {
    ._name = "AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1",
    ._addr = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1,
    ._rval.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_BUF1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_cnt_sbe_buf1_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_cnt_mbe_buf1 = {
    ._name = "AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1",
    ._addr = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1,
    ._rval.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_BUF1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_cnt_mbe_buf1_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_cnt_sbe_rspin0 = {
    ._name = "AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0",
    ._addr = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0,
    ._rval.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_cnt_sbe_rspin0_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_cnt_mbe_rspin0 = {
    ._name = "AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0",
    ._addr = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0,
    ._rval.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_cnt_mbe_rspin0_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_cnt_sbe_rspin1 = {
    ._name = "AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1",
    ._addr = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1,
    ._rval.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_CNT_SBE_RSPIN1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_cnt_sbe_rspin1_detail
};
static const cmmr_br_t __ar_nic_wc_err_info_cnt_mbe_rspin1 = {
    ._name = "AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1",
    ._addr = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1,
    ._rval.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_RSTDATA,
    ._rmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_RDMASK,
    ._xsmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_XSMASK,
    ._wsemsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_ERR_INFO_CNT_MBE_RSPIN1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_err_info_cnt_mbe_rspin1_detail
};
static const cmmr_br_t __ar_nic_wc_prf_rsp_bytes_rcvd = {
    ._name = "AR_NIC_WC_PRF_RSP_BYTES_RCVD",
    ._addr = AR_NIC_WC_PRF_RSP_BYTES_RCVD,
    ._rval.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_RSTDATA,
    ._rmsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_RDMASK,
    ._xsmsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_XSMASK,
    ._wsemsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_PRF_RSP_BYTES_RCVD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_prf_rsp_bytes_rcvd_detail
};
static const cmmr_br_t __ar_nic_wc_prf_bufs_vld = {
    ._name = "AR_NIC_WC_PRF_BUFS_VLD",
    ._addr = AR_NIC_WC_PRF_BUFS_VLD,
    ._rval.val = AR_NIC_WC_PRF_BUFS_VLD_RSTDATA,
    ._rmsk.val = AR_NIC_WC_PRF_BUFS_VLD_RSTMASK,
    ._wrmsk.val = AR_NIC_WC_PRF_BUFS_VLD_WRTMASK,
    ._rdmsk.val = AR_NIC_WC_PRF_BUFS_VLD_RDMASK,
    ._xsmsk.val = AR_NIC_WC_PRF_BUFS_VLD_XSMASK,
    ._wsemsk.val = AR_NIC_WC_PRF_BUFS_VLD_WSEMASK,
    ._rsemsk.val = AR_NIC_WC_PRF_BUFS_VLD_RSEMASK,
    ._w1smsk.val = AR_NIC_WC_PRF_BUFS_VLD_W1SMASK,
    ._w1cmsk.val = AR_NIC_WC_PRF_BUFS_VLD_W1CMASK,
    ._wrstmsk.val = AR_NIC_WC_PRF_BUFS_VLD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_WC_PRF_BUFS_VLD_HWWMASK,
    ._hwrmsk.val = AR_NIC_WC_PRF_BUFS_VLD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_wc_prf_bufs_vld_detail
};

/*
 *  INSTALL AR WC MMRS
 */
static const cmmr_br_t* __ar_wc_mmrs[] = {
    &__ar_nic_wc_cfg_params,
    &__ar_nic_wc_cfg_crdts,
    &__ar_nic_wc_dbg_errinj_mem,
    &__ar_nic_wc_dbg_errinj_bus,
    &__ar_nic_wc_dbg_buf_inval,
    &__ar_nic_wc_sts_buf_avail,
    &__ar_nic_wc_sts_buf_vld,
    &__ar_nic_wc_err_flg,
    &__ar_nic_wc_err_clr,
    &__ar_nic_wc_err_hss_msk,
    &__ar_nic_wc_err_os_msk,
    &__ar_nic_wc_err_first_flg,
    &__ar_nic_wc_err_info_buf0,
    &__ar_nic_wc_err_info_buf1,
    &__ar_nic_wc_err_info_rspin0,
    &__ar_nic_wc_err_info_rspin1,
    &__ar_nic_wc_err_info_cnt_sbe_buf0,
    &__ar_nic_wc_err_info_cnt_mbe_buf0,
    &__ar_nic_wc_err_info_cnt_sbe_buf1,
    &__ar_nic_wc_err_info_cnt_mbe_buf1,
    &__ar_nic_wc_err_info_cnt_sbe_rspin0,
    &__ar_nic_wc_err_info_cnt_mbe_rspin0,
    &__ar_nic_wc_err_info_cnt_sbe_rspin1,
    &__ar_nic_wc_err_info_cnt_mbe_rspin1,
    &__ar_nic_wc_prf_rsp_bytes_rcvd,
    &__ar_nic_wc_prf_bufs_vld,
    NULL
};

/*
 *  INSTALL AR WC LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_wc_enc_mmrs[] = {
    &__ar_nic_wc_wc_mmr_ring_0_hi_wc,
    &__ar_nic_wc_wc_mmr_ring_0_mid_wc,
    &__ar_nic_wc_wc_mmr_ring_0_lo_wc,
    &__ar_nic_wc_err_flg_1_hi_wc,
    &__ar_nic_wc_err_flg_1_mid_wc,
    &__ar_nic_wc_err_flg_1_lo_wc,
    &__ar_nic_wc_wc_parb_flit_2_hi_wc,
    &__ar_nic_wc_wc_parb_flit_2_mid_wc,
    &__ar_nic_wc_wc_parb_flit_2_lo_wc,
    &__ar_nic_wc_wc_ssid_rsp_flit_3_hi_wc,
    &__ar_nic_wc_wc_ssid_rsp_flit_3_mid_wc,
    &__ar_nic_wc_wc_ssid_rsp_flit_3_lo_wc,
    &__ar_nic_wc_wc_top_misc_4_hi_wc,
    &__ar_nic_wc_wc_top_misc_4_mid_wc,
    &__ar_nic_wc_wc_top_misc_4_lo_wc,
    &__ar_nic_wc_wc_flush_misc_5_hi_wc,
    &__ar_nic_wc_wc_flush_misc_5_mid_wc,
    &__ar_nic_wc_wc_flush_misc_5_lo_wc,
    &__ar_nic_wc_wc_buf0_rspin_flit_6_hi_wc,
    &__ar_nic_wc_wc_buf0_rspin_flit_6_mid_wc,
    &__ar_nic_wc_wc_buf0_rspin_flit_6_lo_wc,
    &__ar_nic_wc_wc_buf0_lm_data1_7_hi_wc,
    &__ar_nic_wc_wc_buf0_lm_data1_7_mid_wc,
    &__ar_nic_wc_wc_buf0_lm_data1_7_lo_wc,
    &__ar_nic_wc_wc_buf0_lm_data2_8_hi_wc,
    &__ar_nic_wc_wc_buf0_lm_data2_8_mid_wc,
    &__ar_nic_wc_wc_buf0_lm_data2_8_lo_wc,
    &__ar_nic_wc_wc_buf0_lm_data3_9_hi_wc,
    &__ar_nic_wc_wc_buf0_lm_data3_9_mid_wc,
    &__ar_nic_wc_wc_buf0_lm_data3_9_lo_wc,
    &__ar_nic_wc_wc_buf0_rspout_flit_a_hi_wc,
    &__ar_nic_wc_wc_buf0_rspout_flit_a_mid_wc,
    &__ar_nic_wc_wc_buf0_rspout_flit_a_lo_wc,
    &__ar_nic_wc_wc_buf1_rspin_flit_b_hi_wc,
    &__ar_nic_wc_wc_buf1_rspin_flit_b_mid_wc,
    &__ar_nic_wc_wc_buf1_rspin_flit_b_lo_wc,
    &__ar_nic_wc_wc_buf1_lm_data1_c_hi_wc,
    &__ar_nic_wc_wc_buf1_lm_data1_c_mid_wc,
    &__ar_nic_wc_wc_buf1_lm_data1_c_lo_wc,
    &__ar_nic_wc_wc_buf1_lm_data2_d_hi_wc,
    &__ar_nic_wc_wc_buf1_lm_data2_d_mid_wc,
    &__ar_nic_wc_wc_buf1_lm_data2_d_lo_wc,
    &__ar_nic_wc_wc_buf1_lm_data3_e_hi_wc,
    &__ar_nic_wc_wc_buf1_lm_data3_e_mid_wc,
    &__ar_nic_wc_wc_buf1_lm_data3_e_lo_wc,
    &__ar_nic_wc_wc_buf1_rspout_flit_f_hi_wc,
    &__ar_nic_wc_wc_buf1_rspout_flit_f_mid_wc,
    &__ar_nic_wc_wc_buf1_rspout_flit_f_lo_wc,
    &__ar_nic_wc_mux_sel_ff_hi_wc,
    &__ar_nic_wc_mux_sel_ff_mid_wc,
    &__ar_nic_wc_mux_sel_ff_lo_wc,
    NULL
};

#endif
