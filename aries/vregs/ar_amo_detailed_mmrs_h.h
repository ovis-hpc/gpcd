/******************************************************************************
 * COPYRIGHT CRAY INC. ar_amo_detailed_mmrs_h.h
 * FILE: ar_amo_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:57 2014
 ******************************************************************************/
/**
 * @file ar_amo_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:38:57 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_amo_mmr_values.h and ar_amo_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_amo_mmr_values.h"

#ifndef _AR_AMO_DETAILED_MMRS_H_H_
#define _AR_AMO_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_amo_mmrs[];	/* AMO Array */

/*
 *  AR AMO MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_amo_cfg_cache_inv_detail[] = {
    { ._name = "INV",
      ._bpos = AR_NIC_AMO_CFG_CACHE_INV_INV_BP,
      ._mask = AR_NIC_AMO_CFG_CACHE_INV_INV_MASK,
      ._rval = AR_NIC_AMO_CFG_CACHE_INV_RSTDATA & AR_NIC_AMO_CFG_CACHE_INV_INV_MASK,
      ._index = AR_NIC_AMO_CFG_CACHE_INV_INV_QW,
      ._desc = "Set this to invalidate stale entries",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "W"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_detail[] = {
    { ._name = "UNUSED_145_39",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_UNUSED_145_39_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_UNUSED_145_39_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_UNUSED_145_39_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_UNUSED_145_39_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_detail[] = {
    { ._name = "UNUSED_127_114",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_UNUSED_127_114_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_UNUSED_127_114_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_UNUSED_127_114_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_UNUSED_127_114_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TIMEOUT_ARM",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_TIMEOUT_ARM_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_TIMEOUT_ARM_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_TIMEOUT_ARM_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_TIMEOUT_ARM_QW,
      ._desc = "Number of cycles spent in this pre-timeout state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ERR_REQLIST_MBE",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQLIST_MBE_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQLIST_MBE_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQLIST_MBE_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQLIST_MBE_QW,
      ._desc = "MBEs in request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ERR_REQLIST_SBE",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQLIST_SBE_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQLIST_SBE_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQLIST_SBE_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQLIST_SBE_QW,
      ._desc = "SBEs in request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DATASTORE_RD_POISON",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_DATASTORE_RD_POISON_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_DATASTORE_RD_POISON_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_DATASTORE_RD_POISON_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_DATASTORE_RD_POISON_QW,
      ._desc = "Datastore was read with poisoned fill data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DATASTORE_WR_POISON",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_DATASTORE_WR_POISON_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_DATASTORE_WR_POISON_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_DATASTORE_WR_POISON_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_DATASTORE_WR_POISON_QW,
      ._desc = "Datastore was written with poisoned fill data (several possible reasons, see error flag)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ERR_RSP_SBE",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_RSP_SBE_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_RSP_SBE_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_RSP_SBE_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_RSP_SBE_QW,
      ._desc = "SBEs in fill response payload",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ERR_RSP_PARITY",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_RSP_PARITY_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_RSP_PARITY_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_RSP_PARITY_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_RSP_PARITY_QW,
      ._desc = "Parity errors on responses",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ERR_REQ_MBE",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_MBE_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_MBE_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_MBE_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_MBE_QW,
      ._desc = "MBEs in AMO request payload",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ERR_REQ_SBE",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_SBE_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_SBE_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_SBE_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_SBE_QW,
      ._desc = "SBEs in AMO request payload",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ERR_REQ_PARITY",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_PARITY_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_PARITY_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_PARITY_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_ERR_REQ_PARITY_QW,
      ._desc = "Parity errors on requests",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_INVALIDATE",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_INVALIDATE_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_INVALIDATE_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_INVALIDATE_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_INVALIDATE_QW,
      ._desc = "Cache invaldations (capacity)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_FILL_RSP",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_FILL_RSP_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_FILL_RSP_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_FILL_RSP_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_FILL_RSP_QW,
      ._desc = "Fill responses received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_STALL_ORDERED",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_ORDERED_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_ORDERED_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_ORDERED_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_ORDERED_QW,
      ._desc = "Number of stalls waiting for the cache to become clean",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_STALL_FULL",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_FULL_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_FULL_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_FULL_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_FULL_QW,
      ._desc = "Number of stalls due to the cache being full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_STALL_FLUSH",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_FLUSH_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_FLUSH_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_FLUSH_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_FLUSH_QW,
      ._desc = "Number of stalls due to a flushing the cache",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_STALL_MATCH",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_MATCH_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_MATCH_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_MATCH_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_STALL_MATCH_QW,
      ._desc = "Number of stalls due to a match in the cache",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_AMO_MISS",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_MISS_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_MISS_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_MISS_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_MISS_QW,
      ._desc = "Number of misses in AMO cache (AMO requests only, generate fill requests)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_AMO_HIT",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_HIT_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_HIT_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_HIT_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_HIT_QW,
      ._desc = "Number of hits in AMO cache (AMO requests only)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_AMO_DONE",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_DONE_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_DONE_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_DONE_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_AMO_DONE_QW,
      ._desc = "Number of AMO requests processed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP1_BLOCK",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_BLOCK_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_BLOCK_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_BLOCK_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_BLOCK_QW,
      ._desc = "Blocking AMO-generated response queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP1_FLIT",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_FLIT_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_FLIT_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_FLIT_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_FLIT_QW,
      ._desc = "Flit sent from AMO-generated response queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP1_PKT",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_PKT_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_PKT_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_PKT_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP1_PKT_QW,
      ._desc = "Packet sent from AMO-generated response queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP0_BLOCK",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_BLOCK_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_BLOCK_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_BLOCK_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_BLOCK_QW,
      ._desc = "Blocking normal response queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP0_FLIT",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_FLIT_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_FLIT_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_FLIT_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_FLIT_QW,
      ._desc = "Flit sent from normal response queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP0_PKT",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_PKT_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_PKT_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_PKT_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_RSP0_PKT_QW,
      ._desc = "Packet sent from normal resposne queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ1_BLOCK",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_BLOCK_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_BLOCK_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_BLOCK_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_BLOCK_QW,
      ._desc = "Blocking AMO-generated request queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ1_STALL",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_STALL_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_STALL_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_STALL_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_STALL_QW,
      ._desc = "Stalling AMO-generated request queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ1_PKT",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_PKT_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_PKT_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_PKT_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ1_PKT_QW,
      ._desc = "Packet sent from AMO-generated request queue (Each packet is two flits)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ0_BLOCK",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_BLOCK_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_BLOCK_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_BLOCK_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_BLOCK_QW,
      ._desc = "Blocking normal request queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ0_STALL",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_STALL_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_STALL_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_STALL_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_STALL_QW,
      ._desc = "Stalling normal request queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ0_FLIT",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_FLIT_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_FLIT_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_FLIT_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_FLIT_QW,
      ._desc = "Flit sent from normal request queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ0_PKT",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_PKT_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_PKT_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_PKT_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_CNTR_REQ0_PKT_QW,
      ._desc = "Packet sent from normal request queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_64",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_UNUSED_81_64_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_UNUSED_81_64_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_UNUSED_81_64_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_UNUSED_81_64_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_mmr_ring_0_lo_amo_detail[] = {
    { ._name = "UNUSED_145_39",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_UNUSED_145_39_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_UNUSED_145_39_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_UNUSED_145_39_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_UNUSED_145_39_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_REQ_RDY",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_DBG_REQ_RDY_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_DBG_REQ_RDY_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_DBG_REQ_RDY_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_DBG_REQ_RDY_QW,
      ._desc = "Ready signals from request arbiter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_RSP_RDY",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_DBG_RSP_RDY_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_DBG_RSP_RDY_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_DBG_RSP_RDY_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_DBG_RSP_RDY_QW,
      ._desc = "Ready signals from response arbiter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_AMO_PI_OS_IRQ",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_PI_OS_IRQ_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_PI_OS_IRQ_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_PI_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_AMO_LB_HSS_IRQ",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_LB_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_AMO_RSPMON_RING_WRACK",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_RSPMON_RING_WRACK_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_RSPMON_RING_WRACK_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_RSPMON_RING_WRACK_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_RSPMON_RING_WRACK_QW,
      ._desc = "RSPMON Write Acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_AMO_RSPMON_RING_15_0",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_RSPMON_RING_15_0_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_RSPMON_RING_15_0_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_RSPMON_RING_15_0_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_R_Q_AMO_RSPMON_RING_15_0_QW,
      ._desc = "RSPMON Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPMON_AMO_RING_15_0",
      ._bpos = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_I_RSPMON_AMO_RING_15_0_BP,
      ._mask = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_I_RSPMON_AMO_RING_15_0_MASK,
      ._rval = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_I_RSPMON_AMO_RING_15_0_MASK,
      ._index = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_I_RSPMON_AMO_RING_15_0_QW,
      ._desc = "RSPMON Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_flg_1_hi_amo_detail[] = {
    { ._name = "UNUSED_145_143",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_HI_AMO_UNUSED_145_143_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_HI_AMO_UNUSED_145_143_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_ERR_FLG_1_HI_AMO_UNUSED_145_143_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_HI_AMO_UNUSED_145_143_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_REQLIST_CNTR",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_HI_AMO_DBG_REQLIST_CNTR_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_HI_AMO_DBG_REQLIST_CNTR_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_ERR_FLG_1_HI_AMO_DBG_REQLIST_CNTR_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_HI_AMO_DBG_REQLIST_CNTR_QW,
      ._desc = "Request list counter (valid entries)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_LFSR_VAL",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_HI_AMO_DBG_LFSR_VAL_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_HI_AMO_DBG_LFSR_VAL_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_ERR_FLG_1_HI_AMO_DBG_LFSR_VAL_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_HI_AMO_DBG_LFSR_VAL_QW,
      ._desc = "LFSR value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_flg_1_mid_amo_detail[] = {
    { ._name = "UNUSED_127_91",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_UNUSED_127_91_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_UNUSED_127_91_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_UNUSED_127_91_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_UNUSED_127_91_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_TIMEOUT_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_TIMEOUT_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_TIMEOUT_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_TIMEOUT_QW,
      ._desc = "Fill request timed out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FP_UNDERFLOW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_UNDERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_UNDERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_UNDERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_UNDERFLOW_QW,
      ._desc = "Floating Point Exception: Underflow The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FP_OVERFLOW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_OVERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_OVERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_OVERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_OVERFLOW_QW,
      ._desc = "Floating Point Exception: Overflow The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FP_INVALID",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_INVALID_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_INVALID_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_INVALID_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_INVALID_QW,
      ._desc = "Floating Point Exception: Invalid The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FP_INEXACT",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_INEXACT_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_INEXACT_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_INEXACT_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_FP_INEXACT_QW,
      ._desc = "Floating Point Exception: Inexact The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQLIST_MBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQLIST_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQLIST_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQLIST_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQLIST_MBE_QW,
      ._desc = "MBE reading request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQLIST_SBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQLIST_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQLIST_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQLIST_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQLIST_SBE_QW,
      ._desc = "SBE reading request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DATASTORE_WR_POISON",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_DATASTORE_WR_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_DATASTORE_WR_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_DATASTORE_WR_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_DATASTORE_WR_POISON_QW,
      ._desc = "The datastore was intentionally written with poisoned data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DATASTORE_RD_POISON",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_DATASTORE_RD_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_DATASTORE_RD_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_DATASTORE_RD_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_DATASTORE_RD_POISON_QW,
      ._desc = "The datastore read encountered a parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_MBE_QW,
      ._desc = "MBE on fill response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_SBE_QW,
      ._desc = "SBE on fill response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_UNSOLICITED",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_UNSOLICITED_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_UNSOLICITED_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_UNSOLICITED_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_UNSOLICITED_QW,
      ._desc = "Fill response was not expected (tag state not valid and pending)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_PARITY",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP_PARITY_QW,
      ._desc = "Parity error on response packet (packet dropped)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_MBE_QW,
      ._desc = "MBE on AMO request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_SBE_QW,
      ._desc = "SBE on AMO request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_PARITY",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ_PARITY_QW,
      ._desc = "Parity error on request packet (packet dropped)  Classified as UXACT because the dropped packet may have been a CQE or DSMN flag data write",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP1_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on rsp1 fifo (AMO responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP0_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on rsp0 fifo (PI responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ1_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on req1 fifo (AMO writebacks)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ0_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on req0 fifo (PI requests)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INPUT_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_INPUT_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_INPUT_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_INPUT_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_INPUT_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on input fifo (from NPT)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP1_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on rsp1 fifo (AMO responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSP0_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on rsp0 fifo (PI responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ1_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on req1 fifo (AMO writebacks)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_REQ0_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on req0 fifo (PI requests)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INPUT_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_INPUT_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_INPUT_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_INPUT_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_INPUT_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on input fifo (from NPT)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_MID_AMO_DIAG_ONLY_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_MID_AMO_DIAG_ONLY_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_ERR_FLG_1_MID_AMO_DIAG_ONLY_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_MID_AMO_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_flg_1_lo_amo_detail[] = {
    { ._name = "UNUSED_63_27",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_UNUSED_63_27_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_UNUSED_63_27_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_UNUSED_63_27_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_UNUSED_63_27_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TIMEOUT",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_TIMEOUT_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_TIMEOUT_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_TIMEOUT_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_TIMEOUT_QW,
      ._desc = "Fill request timed out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FP_UNDERFLOW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_UNDERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_UNDERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_UNDERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_UNDERFLOW_QW,
      ._desc = "Floating Point Exception: Underflow The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FP_OVERFLOW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_OVERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_OVERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_OVERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_OVERFLOW_QW,
      ._desc = "Floating Point Exception: Overflow The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FP_INVALID",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_INVALID_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_INVALID_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_INVALID_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_INVALID_QW,
      ._desc = "Floating Point Exception: Invalid The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FP_INEXACT",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_INEXACT_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_INEXACT_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_INEXACT_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_FP_INEXACT_QW,
      ._desc = "Floating Point Exception: Inexact The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQLIST_MBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQLIST_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQLIST_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQLIST_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQLIST_MBE_QW,
      ._desc = "MBE reading request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQLIST_SBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQLIST_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQLIST_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQLIST_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQLIST_SBE_QW,
      ._desc = "SBE reading request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DATASTORE_WR_POISON",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_DATASTORE_WR_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_DATASTORE_WR_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_DATASTORE_WR_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_DATASTORE_WR_POISON_QW,
      ._desc = "The datastore was intentionally written with poisoned data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DATASTORE_RD_POISON",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_DATASTORE_RD_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_DATASTORE_RD_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_DATASTORE_RD_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_DATASTORE_RD_POISON_QW,
      ._desc = "The datastore read encountered a parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_MBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_MBE_QW,
      ._desc = "MBE on fill response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_SBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_SBE_QW,
      ._desc = "SBE on fill response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_UNSOLICITED",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_UNSOLICITED_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_UNSOLICITED_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_UNSOLICITED_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_UNSOLICITED_QW,
      ._desc = "Fill response was not expected (tag state not valid and pending)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_PARITY",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP_PARITY_QW,
      ._desc = "Parity error on response packet (packet dropped)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_MBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_MBE_QW,
      ._desc = "MBE on AMO request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_SBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_SBE_QW,
      ._desc = "SBE on AMO request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_PARITY",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ_PARITY_QW,
      ._desc = "Parity error on request packet (packet dropped)  Classified as UXACT because the dropped packet may have been a CQE or DSMN flag data write",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP1_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on rsp1 fifo (AMO responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP0_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on rsp0 fifo (PI responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ1_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on req1 fifo (AMO writebacks)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ0_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on req0 fifo (PI requests)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_INPUT_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_INPUT_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_INPUT_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_INPUT_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_INPUT_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on input fifo (from NPT)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP1_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on rsp1 fifo (AMO responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_RSP0_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on rsp0 fifo (PI responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ1_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on req1 fifo (AMO writebacks)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_REQ0_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on req0 fifo (PI requests)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_INPUT_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_INPUT_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_INPUT_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_INPUT_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_I_INPUT_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on input fifo (from NPT)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_AMO_ERR_FLG_1_LO_AMO_UNUSED_0_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_1_LO_AMO_UNUSED_0_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA & AR_NIC_AMO_ERR_FLG_1_LO_AMO_UNUSED_0_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_1_LO_AMO_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_detail[] = {
    { ._name = "UNUSED_145_144",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_UNUSED_145_144_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_UNUSED_145_144_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_UNUSED_145_144_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_UNUSED_145_144_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_PARB_CRDTS",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_DBG_PARB_CRDTS_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_DBG_PARB_CRDTS_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_DBG_PARB_CRDTS_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_DBG_PARB_CRDTS_QW,
      ._desc = "PARB credit value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_INPUT_CRDTS",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_DBG_INPUT_CRDTS_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_DBG_INPUT_CRDTS_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_DBG_INPUT_CRDTS_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_DBG_INPUT_CRDTS_QW,
      ._desc = "Input credit value (internal between NRP and reqarb)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_detail[] = {
    { ._name = "STS_TAGSTORE_ACTIVE",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_STS_TAGSTORE_ACTIVE_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_STS_TAGSTORE_ACTIVE_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_STS_TAGSTORE_ACTIVE_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_STS_TAGSTORE_ACTIVE_QW,
      ._desc = "Active bits from tag store state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_tagstore_active_2_lo_amo_detail[] = {
    { ._name = "STS_TAGSTORE_VLD",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_STS_TAGSTORE_VLD_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_STS_TAGSTORE_VLD_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_STS_TAGSTORE_VLD_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_STS_TAGSTORE_VLD_QW,
      ._desc = "Valid bits from tag store state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_detail[] = {
    { ._name = "TIMEOUT_VLD",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_TIMEOUT_VLD_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_TIMEOUT_VLD_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_TIMEOUT_VLD_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_TIMEOUT_VLD_QW,
      ._desc = "Trigger timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TIMEOUT_ARM",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_TIMEOUT_ARM_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_TIMEOUT_ARM_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_TIMEOUT_ARM_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_TIMEOUT_ARM_QW,
      ._desc = "Arm timeout (do not allocate any more cache entries)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "OLDEST_REQID",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_OLDEST_REQID_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_OLDEST_REQID_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_OLDEST_REQID_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_OLDEST_REQID_QW,
      ._desc = "The oldest request identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "OLDEST_STALL",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_OLDEST_STALL_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_OLDEST_STALL_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_OLDEST_STALL_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_OLDEST_STALL_QW,
      ._desc = "Whether the oldest request identifier is valid but not ready",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_136_128",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_UNUSED_136_128_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_UNUSED_136_128_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_UNUSED_136_128_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_UNUSED_136_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_detail[] = {
    { ._name = "STS_TAGSTORE_PENDING",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_STS_TAGSTORE_PENDING_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_STS_TAGSTORE_PENDING_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_STS_TAGSTORE_PENDING_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_STS_TAGSTORE_PENDING_QW,
      ._desc = "Pending bits from tag store state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_tagstore_pending_3_lo_amo_detail[] = {
    { ._name = "STS_TAGSTORE_VLD",
      ._bpos = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_STS_TAGSTORE_VLD_BP,
      ._mask = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_STS_TAGSTORE_VLD_MASK,
      ._rval = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_STS_TAGSTORE_VLD_MASK,
      ._index = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_STS_TAGSTORE_VLD_QW,
      ._desc = "Valid bits from tag store state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_detail[] = {
    { ._name = "UNUSED_145_144",
      ._bpos = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_UNUSED_145_144_BP,
      ._mask = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_UNUSED_145_144_MASK,
      ._rval = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_UNUSED_145_144_MASK,
      ._index = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_UNUSED_145_144_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_REQ_CRDTS",
      ._bpos = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_DBG_REQ_CRDTS_BP,
      ._mask = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_DBG_REQ_CRDTS_MASK,
      ._rval = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_DBG_REQ_CRDTS_MASK,
      ._index = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_DBG_REQ_CRDTS_QW,
      ._desc = "Internal request credit value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_RSP_CRDTS",
      ._bpos = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_DBG_RSP_CRDTS_BP,
      ._mask = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_DBG_RSP_CRDTS_MASK,
      ._rval = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_DBG_RSP_CRDTS_MASK,
      ._index = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_DBG_RSP_CRDTS_QW,
      ._desc = "Internal response credit value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_detail[] = {
    { ._name = "STS_REQLIST_VLD",
      ._bpos = AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_STS_REQLIST_VLD_BP,
      ._mask = AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_STS_REQLIST_VLD_MASK,
      ._rval = AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_STS_REQLIST_VLD_MASK,
      ._index = AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_STS_REQLIST_VLD_QW,
      ._desc = "Valid bits from request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_reqlist_rdy_4_lo_amo_detail[] = {
    { ._name = "STS_REQLIST_RDY",
      ._bpos = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_STS_REQLIST_RDY_BP,
      ._mask = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_STS_REQLIST_RDY_MASK,
      ._rval = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_STS_REQLIST_RDY_MASK,
      ._index = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_STS_REQLIST_RDY_QW,
      ._desc = "Ready bits from request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_detail[] = {
    { ._name = "R_Q_AMO_PARB_REQ_SB",
      ._bpos = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_R_Q_AMO_PARB_REQ_SB_BP,
      ._mask = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_R_Q_AMO_PARB_REQ_SB_MASK,
      ._rval = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_R_Q_AMO_PARB_REQ_SB_MASK,
      ._index = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_R_Q_AMO_PARB_REQ_SB_QW,
      ._desc = "Output request sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_AMO_PARB_REQ_FLIT",
      ._bpos = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_R_Q_AMO_PARB_REQ_FLIT_BP,
      ._mask = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_R_Q_AMO_PARB_REQ_FLIT_MASK,
      ._rval = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_R_Q_AMO_PARB_REQ_FLIT_MASK,
      ._index = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_R_Q_AMO_PARB_REQ_FLIT_QW,
      ._desc = "Output request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_detail[] = {
    { ._name = "R_Q_AMO_PARB_REQ_FLIT",
      ._bpos = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_R_Q_AMO_PARB_REQ_FLIT_BP,
      ._mask = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_R_Q_AMO_PARB_REQ_FLIT_MASK,
      ._rval = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_R_Q_AMO_PARB_REQ_FLIT_MASK,
      ._index = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_R_Q_AMO_PARB_REQ_FLIT_QW,
      ._desc = "Output request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_parb_req_flit_5_lo_amo_detail[] = {
    { ._name = "R_Q_AMO_PARB_REQ_FLIT",
      ._bpos = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_R_Q_AMO_PARB_REQ_FLIT_BP,
      ._mask = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_R_Q_AMO_PARB_REQ_FLIT_MASK,
      ._rval = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_R_Q_AMO_PARB_REQ_FLIT_MASK,
      ._index = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_R_Q_AMO_PARB_REQ_FLIT_QW,
      ._desc = "Output request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_detail[] = {
    { ._name = "I_PI_NIC_RSP_SB",
      ._bpos = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_I_PI_NIC_RSP_SB_BP,
      ._mask = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_I_PI_NIC_RSP_SB_MASK,
      ._rval = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_I_PI_NIC_RSP_SB_MASK,
      ._index = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_I_PI_NIC_RSP_SB_QW,
      ._desc = "Input response sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PI_NIC_RSP_FLIT",
      ._bpos = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_I_PI_NIC_RSP_FLIT_BP,
      ._mask = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_I_PI_NIC_RSP_FLIT_MASK,
      ._rval = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_I_PI_NIC_RSP_FLIT_MASK,
      ._index = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_I_PI_NIC_RSP_FLIT_QW,
      ._desc = "Input response flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_detail[] = {
    { ._name = "I_PI_NIC_RSP_FLIT",
      ._bpos = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_I_PI_NIC_RSP_FLIT_BP,
      ._mask = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_I_PI_NIC_RSP_FLIT_MASK,
      ._rval = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_I_PI_NIC_RSP_FLIT_MASK,
      ._index = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_I_PI_NIC_RSP_FLIT_QW,
      ._desc = "Input response flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_pi_nic_rsp_flit_6_lo_amo_detail[] = {
    { ._name = "I_PI_NIC_RSP_FLIT",
      ._bpos = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_I_PI_NIC_RSP_FLIT_BP,
      ._mask = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_I_PI_NIC_RSP_FLIT_MASK,
      ._rval = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_RSTDATA & AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_I_PI_NIC_RSP_FLIT_MASK,
      ._index = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_I_PI_NIC_RSP_FLIT_QW,
      ._desc = "Input response flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_acp_out_7_hi_amo_detail[] = {
    { ._name = "VLD",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_VLD_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_VLD_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_VLD_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_VLD_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DONE_WRITEBACK",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_DONE_WRITEBACK_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_DONE_WRITEBACK_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_DONE_WRITEBACK_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_DONE_WRITEBACK_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "WRITEBACK",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRITEBACK_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRITEBACK_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRITEBACK_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRITEBACK_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RESPONSE",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RESPONSE_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RESPONSE_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RESPONSE_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RESPONSE_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIRTY",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_DIRTY_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_DIRTY_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_DIRTY_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_DIRTY_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FETCHING",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_FETCHING_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_FETCHING_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_FETCHING_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_FETCHING_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "W",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IDX",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_IDX_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_IDX_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_IDX_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_IDX_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQID",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_REQID_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_REQID_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_REQID_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_REQID_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_acp_out_7_mid_amo_detail[] = {
    { ._name = "REQID",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_REQID_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_REQID_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_REQID_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_REQID_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_PI_HINTS_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_PI_HINTS_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_PI_HINTS_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_PI_HINTS_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_PI_ID_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_PI_ID_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_PI_ID_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_PI_ID_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "POISON",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_POISON_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_POISON_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_POISON_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_POISON_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_2",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_ADDR_47_2_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_ADDR_47_2_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_ADDR_47_2_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_ADDR_47_2_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_acp_out_7_lo_amo_detail[] = {
    { ._name = "RESULT",
      ._bpos = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_RESULT_BP,
      ._mask = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_RESULT_MASK,
      ._rval = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_RESULT_MASK,
      ._index = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_RESULT_QW,
      ._desc = "AMO computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_power_down_ff_hi_amo_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_POWER_DOWN_BP,
      ._mask = AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_POWER_DOWN_MASK,
      ._rval = AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSTDATA_QW2 & AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_POWER_DOWN_MASK,
      ._index = AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_power_down_ff_mid_amo_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_POWER_DOWN_BP,
      ._mask = AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_POWER_DOWN_MASK,
      ._rval = AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_RSTDATA_QW1 & AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_POWER_DOWN_MASK,
      ._index = AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_amo_power_down_ff_lo_amo_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_POWER_DOWN_BP,
      ._mask = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_POWER_DOWN_MASK,
      ._rval = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_RSTDATA & AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_POWER_DOWN_MASK,
      ._index = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_cfg_rounding_mode_detail[] = {
    { ._name = "ROUNDING_MODE",
      ._bpos = AR_NIC_AMO_CFG_ROUNDING_MODE_ROUNDING_MODE_BP,
      ._mask = AR_NIC_AMO_CFG_ROUNDING_MODE_ROUNDING_MODE_MASK,
      ._rval = AR_NIC_AMO_CFG_ROUNDING_MODE_RSTDATA & AR_NIC_AMO_CFG_ROUNDING_MODE_ROUNDING_MODE_MASK,
      ._index = AR_NIC_AMO_CFG_ROUNDING_MODE_ROUNDING_MODE_QW,
      ._desc = "Rounding Mode for Floating point computation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_cfg_params_detail[] = {
    { ._name = "TIMEOUT_THRESHOLD",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_TIMEOUT_THRESHOLD_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_TIMEOUT_THRESHOLD_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_TIMEOUT_THRESHOLD_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_TIMEOUT_THRESHOLD_QW,
      ._desc = "Number of clock cycles to periodically take a snapshot of the pending cache fills and scrub the cache (and corresponding entries in the request list) of stale entries",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TIMEOUT_EN",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_TIMEOUT_EN_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_TIMEOUT_EN_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_TIMEOUT_EN_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_TIMEOUT_EN_QW,
      ._desc = "Enable the timeout mechanism",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CLEAR_RO",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_CLEAR_RO_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_CLEAR_RO_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_CLEAR_RO_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_CLEAR_RO_QW,
      ._desc = "This determines how the RO (reorderable) hint is set for requests that the AMO block generates",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "IGNORE_DIRTY",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_IGNORE_DIRTY_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_IGNORE_DIRTY_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_IGNORE_DIRTY_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_IGNORE_DIRTY_QW,
      ._desc = "Set to ignore the dirty-bits in the AMO cache (always assume dirty)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ORDERED_WAIT",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_ORDERED_WAIT_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_ORDERED_WAIT_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_ORDERED_WAIT_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_ORDERED_WAIT_QW,
      ._desc = "An ordered request (RO=0) waits until the cache is clean",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FORCE_CA_VAL",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_FORCE_CA_VAL_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_FORCE_CA_VAL_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_FORCE_CA_VAL_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_FORCE_CA_VAL_QW,
      ._desc = "Value to force",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FORCE_CA_EN",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_FORCE_CA_EN_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_FORCE_CA_EN_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_FORCE_CA_EN_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_FORCE_CA_EN_QW,
      ._desc = "Set this to force the caching flavor of all AMO requests, regardless of the ca bit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REQLIST_MAX",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_REQLIST_MAX_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_REQLIST_MAX_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_REQLIST_MAX_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_REQLIST_MAX_QW,
      ._desc = "The maximum number of AMO requests that can be processed simultaneously (valid in the request list) minus one",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_RSP",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_SF_RSP_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_SF_RSP_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_SF_RSP_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_SF_RSP_QW,
      ._desc = "Set to enable store-and-forward on the response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_REQ",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_SF_REQ_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_SF_REQ_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_SF_REQ_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_SF_REQ_QW,
      ._desc = "Set to enable store-and-forward on the request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_INPUT",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_SF_INPUT_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_SF_INPUT_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_SF_INPUT_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_SF_INPUT_QW,
      ._desc = "Set to enable store-and-forward on the request input FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LFSR_EN",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_LFSR_EN_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_LFSR_EN_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_LFSR_EN_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_LFSR_EN_QW,
      ._desc = "Enable intra-chain memory updates (write backs)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LFSR_SEED",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_LFSR_SEED_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_LFSR_SEED_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_LFSR_SEED_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_LFSR_SEED_QW,
      ._desc = "Initial value of LFSR at negative edge of warm reset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LFSR_THRESHOLD",
      ._bpos = AR_NIC_AMO_CFG_PARAMS_LFSR_THRESHOLD_BP,
      ._mask = AR_NIC_AMO_CFG_PARAMS_LFSR_THRESHOLD_MASK,
      ._rval = AR_NIC_AMO_CFG_PARAMS_RSTDATA & AR_NIC_AMO_CFG_PARAMS_LFSR_THRESHOLD_MASK,
      ._index = AR_NIC_AMO_CFG_PARAMS_LFSR_THRESHOLD_QW,
      ._desc = "Threshold to adjust frequency of updates",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_cfg_crdts_detail[] = {
    { ._name = "RSP_ARBITRATION",
      ._bpos = AR_NIC_AMO_CFG_CRDTS_RSP_ARBITRATION_BP,
      ._mask = AR_NIC_AMO_CFG_CRDTS_RSP_ARBITRATION_MASK,
      ._rval = AR_NIC_AMO_CFG_CRDTS_RSTDATA & AR_NIC_AMO_CFG_CRDTS_RSP_ARBITRATION_MASK,
      ._index = AR_NIC_AMO_CFG_CRDTS_RSP_ARBITRATION_QW,
      ._desc = "Number of failed arbitration cycles to wait before forcing the AMO response priority",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MAX_PKT_SIZE",
      ._bpos = AR_NIC_AMO_CFG_CRDTS_MAX_PKT_SIZE_BP,
      ._mask = AR_NIC_AMO_CFG_CRDTS_MAX_PKT_SIZE_MASK,
      ._rval = AR_NIC_AMO_CFG_CRDTS_RSTDATA & AR_NIC_AMO_CFG_CRDTS_MAX_PKT_SIZE_MASK,
      ._index = AR_NIC_AMO_CFG_CRDTS_MAX_PKT_SIZE_QW,
      ._desc = "Maximum packet size (in flits)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REQ_CRDTS_MAX",
      ._bpos = AR_NIC_AMO_CFG_CRDTS_REQ_CRDTS_MAX_BP,
      ._mask = AR_NIC_AMO_CFG_CRDTS_REQ_CRDTS_MAX_MASK,
      ._rval = AR_NIC_AMO_CFG_CRDTS_RSTDATA & AR_NIC_AMO_CFG_CRDTS_REQ_CRDTS_MAX_MASK,
      ._index = AR_NIC_AMO_CFG_CRDTS_REQ_CRDTS_MAX_QW,
      ._desc = "AMO-generated request credits (req1)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RSP_CRDTS_MAX",
      ._bpos = AR_NIC_AMO_CFG_CRDTS_RSP_CRDTS_MAX_BP,
      ._mask = AR_NIC_AMO_CFG_CRDTS_RSP_CRDTS_MAX_MASK,
      ._rval = AR_NIC_AMO_CFG_CRDTS_RSTDATA & AR_NIC_AMO_CFG_CRDTS_RSP_CRDTS_MAX_MASK,
      ._index = AR_NIC_AMO_CFG_CRDTS_RSP_CRDTS_MAX_QW,
      ._desc = "AMO-generated response credits (rsp1)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARB_CRDTS_MAX",
      ._bpos = AR_NIC_AMO_CFG_CRDTS_PARB_CRDTS_MAX_BP,
      ._mask = AR_NIC_AMO_CFG_CRDTS_PARB_CRDTS_MAX_MASK,
      ._rval = AR_NIC_AMO_CFG_CRDTS_RSTDATA & AR_NIC_AMO_CFG_CRDTS_PARB_CRDTS_MAX_MASK,
      ._index = AR_NIC_AMO_CFG_CRDTS_PARB_CRDTS_MAX_QW,
      ._desc = "AMO to PARB request credits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "INPUT_CRDTS_MAX",
      ._bpos = AR_NIC_AMO_CFG_CRDTS_INPUT_CRDTS_MAX_BP,
      ._mask = AR_NIC_AMO_CFG_CRDTS_INPUT_CRDTS_MAX_MASK,
      ._rval = AR_NIC_AMO_CFG_CRDTS_RSTDATA & AR_NIC_AMO_CFG_CRDTS_INPUT_CRDTS_MAX_MASK,
      ._index = AR_NIC_AMO_CFG_CRDTS_INPUT_CRDTS_MAX_QW,
      ._desc = "Number of credits between the input and output (req0) request queues",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_cfg_offld_detail[] = {
    { ._name = "CACHEABLE",
      ._bpos = AR_NIC_AMO_CFG_OFFLD_CACHEABLE_BP,
      ._mask = AR_NIC_AMO_CFG_OFFLD_CACHEABLE_MASK,
      ._rval = AR_NIC_AMO_CFG_OFFLD_RSTDATA & AR_NIC_AMO_CFG_OFFLD_CACHEABLE_MASK,
      ._index = AR_NIC_AMO_CFG_OFFLD_CACHEABLE_QW,
      ._desc = "Qualifier for the offloading vector",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "UNCACHEABLE",
      ._bpos = AR_NIC_AMO_CFG_OFFLD_UNCACHEABLE_BP,
      ._mask = AR_NIC_AMO_CFG_OFFLD_UNCACHEABLE_MASK,
      ._rval = AR_NIC_AMO_CFG_OFFLD_RSTDATA & AR_NIC_AMO_CFG_OFFLD_UNCACHEABLE_MASK,
      ._index = AR_NIC_AMO_CFG_OFFLD_UNCACHEABLE_QW,
      ._desc = "Qualifier for the offloading vector",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "WORD64",
      ._bpos = AR_NIC_AMO_CFG_OFFLD_WORD64_BP,
      ._mask = AR_NIC_AMO_CFG_OFFLD_WORD64_MASK,
      ._rval = AR_NIC_AMO_CFG_OFFLD_RSTDATA & AR_NIC_AMO_CFG_OFFLD_WORD64_MASK,
      ._index = AR_NIC_AMO_CFG_OFFLD_WORD64_QW,
      ._desc = "Qualifier for the offloading vector",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "WORD32",
      ._bpos = AR_NIC_AMO_CFG_OFFLD_WORD32_BP,
      ._mask = AR_NIC_AMO_CFG_OFFLD_WORD32_MASK,
      ._rval = AR_NIC_AMO_CFG_OFFLD_RSTDATA & AR_NIC_AMO_CFG_OFFLD_WORD32_MASK,
      ._index = AR_NIC_AMO_CFG_OFFLD_WORD32_QW,
      ._desc = "Qualifier for the offloading vector",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FETCH",
      ._bpos = AR_NIC_AMO_CFG_OFFLD_FETCH_BP,
      ._mask = AR_NIC_AMO_CFG_OFFLD_FETCH_MASK,
      ._rval = AR_NIC_AMO_CFG_OFFLD_RSTDATA & AR_NIC_AMO_CFG_OFFLD_FETCH_MASK,
      ._index = AR_NIC_AMO_CFG_OFFLD_FETCH_QW,
      ._desc = "Qualifier for the offloading vector",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NONFETCH",
      ._bpos = AR_NIC_AMO_CFG_OFFLD_NONFETCH_BP,
      ._mask = AR_NIC_AMO_CFG_OFFLD_NONFETCH_MASK,
      ._rval = AR_NIC_AMO_CFG_OFFLD_RSTDATA & AR_NIC_AMO_CFG_OFFLD_NONFETCH_MASK,
      ._index = AR_NIC_AMO_CFG_OFFLD_NONFETCH_QW,
      ._desc = "Qualifier for the offloading vector",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "OP_OFFLOAD",
      ._bpos = AR_NIC_AMO_CFG_OFFLD_OP_OFFLOAD_BP,
      ._mask = AR_NIC_AMO_CFG_OFFLD_OP_OFFLOAD_MASK,
      ._rval = AR_NIC_AMO_CFG_OFFLD_RSTDATA & AR_NIC_AMO_CFG_OFFLD_OP_OFFLOAD_MASK,
      ._index = AR_NIC_AMO_CFG_OFFLD_OP_OFFLOAD_QW,
      ._desc = "16-bit vector indicating which of the 16 OP encodings can be offloaded (if qualifiers allow)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "OP_FLUSH",
      ._bpos = AR_NIC_AMO_CFG_OFFLD_OP_FLUSH_BP,
      ._mask = AR_NIC_AMO_CFG_OFFLD_OP_FLUSH_MASK,
      ._rval = AR_NIC_AMO_CFG_OFFLD_RSTDATA & AR_NIC_AMO_CFG_OFFLD_OP_FLUSH_MASK,
      ._index = AR_NIC_AMO_CFG_OFFLD_OP_FLUSH_QW,
      ._desc = "16-bit vector indicating which of the 16 OP encodings will flush the cache prior to being performed (non-offloaded non-fetching AMOs only)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "OP_DISABLE",
      ._bpos = AR_NIC_AMO_CFG_OFFLD_OP_DISABLE_BP,
      ._mask = AR_NIC_AMO_CFG_OFFLD_OP_DISABLE_MASK,
      ._rval = AR_NIC_AMO_CFG_OFFLD_RSTDATA & AR_NIC_AMO_CFG_OFFLD_OP_DISABLE_MASK,
      ._index = AR_NIC_AMO_CFG_OFFLD_OP_DISABLE_QW,
      ._desc = "16-bit vector indicating which of the 16 OP encodings are illegal",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_flg_detail[] = {
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_AMO_ERR_FLG_TIMEOUT_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_TIMEOUT_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_TIMEOUT_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_TIMEOUT_QW,
      ._desc = "Fill request timed out",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "FP_UNDERFLOW",
      ._bpos = AR_NIC_AMO_ERR_FLG_FP_UNDERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_FP_UNDERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_FP_UNDERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_FP_UNDERFLOW_QW,
      ._desc = "Floating Point Exception: Underflow The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "FP_OVERFLOW",
      ._bpos = AR_NIC_AMO_ERR_FLG_FP_OVERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_FP_OVERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_FP_OVERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_FP_OVERFLOW_QW,
      ._desc = "Floating Point Exception: Overflow The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "FP_INVALID",
      ._bpos = AR_NIC_AMO_ERR_FLG_FP_INVALID_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_FP_INVALID_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_FP_INVALID_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_FP_INVALID_QW,
      ._desc = "Floating Point Exception: Invalid The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "FP_INEXACT",
      ._bpos = AR_NIC_AMO_ERR_FLG_FP_INEXACT_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_FP_INEXACT_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_FP_INEXACT_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_FP_INEXACT_QW,
      ._desc = "Floating Point Exception: Inexact The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "REQLIST_MBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_REQLIST_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_REQLIST_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_REQLIST_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_REQLIST_MBE_QW,
      ._desc = "MBE reading request list",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "REQLIST_SBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_REQLIST_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_REQLIST_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_REQLIST_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_REQLIST_SBE_QW,
      ._desc = "SBE reading request list",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "DATASTORE_WR_POISON",
      ._bpos = AR_NIC_AMO_ERR_FLG_DATASTORE_WR_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_DATASTORE_WR_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_DATASTORE_WR_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_DATASTORE_WR_POISON_QW,
      ._desc = "The datastore was intentionally written with poisoned data",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "DATASTORE_RD_POISON",
      ._bpos = AR_NIC_AMO_ERR_FLG_DATASTORE_RD_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_DATASTORE_RD_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_DATASTORE_RD_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_DATASTORE_RD_POISON_QW,
      ._desc = "The datastore read encountered a parity error",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_RSP_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_RSP_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_RSP_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_RSP_MBE_QW,
      ._desc = "MBE on fill response",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_RSP_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_RSP_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_RSP_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_RSP_SBE_QW,
      ._desc = "SBE on fill response",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "RSP_UNSOLICITED",
      ._bpos = AR_NIC_AMO_ERR_FLG_RSP_UNSOLICITED_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_RSP_UNSOLICITED_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_RSP_UNSOLICITED_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_RSP_UNSOLICITED_QW,
      ._desc = "Fill response was not expected (tag state not valid and pending)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RSP_PARITY",
      ._bpos = AR_NIC_AMO_ERR_FLG_RSP_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_RSP_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_RSP_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_RSP_PARITY_QW,
      ._desc = "Parity error on response packet (packet dropped)",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_REQ_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_REQ_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_REQ_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_REQ_MBE_QW,
      ._desc = "MBE on AMO request",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_AMO_ERR_FLG_REQ_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_REQ_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_REQ_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_REQ_SBE_QW,
      ._desc = "SBE on AMO request",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "REQ_PARITY",
      ._bpos = AR_NIC_AMO_ERR_FLG_REQ_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_REQ_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_REQ_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_REQ_PARITY_QW,
      ._desc = "Parity error on request packet (packet dropped)  Classified as UXACT because the dropped packet may have been a CQE or DSMN flag data write",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "RSP1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_RSP1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_RSP1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_RSP1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_RSP1_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on rsp1 fifo (AMO responses)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RSP0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_RSP0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_RSP0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_RSP0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_RSP0_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on rsp0 fifo (PI responses)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "REQ1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_REQ1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_REQ1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_REQ1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_REQ1_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on req1 fifo (AMO writebacks)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "REQ0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_REQ0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_REQ0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_REQ0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_REQ0_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on req0 fifo (PI requests)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "INPUT_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_INPUT_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_INPUT_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_INPUT_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_INPUT_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on input fifo (from NPT)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RSP1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_RSP1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_RSP1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_RSP1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_RSP1_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on rsp1 fifo (AMO responses)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RSP0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_RSP0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_RSP0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_RSP0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_RSP0_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on rsp0 fifo (PI responses)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "REQ1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_REQ1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_REQ1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_REQ1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_REQ1_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on req1 fifo (AMO writebacks)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "REQ0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_REQ0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_REQ0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_REQ0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_REQ0_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on req0 fifo (PI requests)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "INPUT_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FLG_INPUT_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_INPUT_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_INPUT_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_INPUT_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on input fifo (from NPT)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_AMO_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_AMO_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_AMO_ERR_FLG_RSTDATA & AR_NIC_AMO_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_AMO_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000100011ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_clr_detail[] = {
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_AMO_ERR_CLR_TIMEOUT_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_TIMEOUT_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_TIMEOUT_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_TIMEOUT_QW,
      ._desc = "Fill request timed out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FP_UNDERFLOW",
      ._bpos = AR_NIC_AMO_ERR_CLR_FP_UNDERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_FP_UNDERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_FP_UNDERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_FP_UNDERFLOW_QW,
      ._desc = "Floating Point Exception: Underflow The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FP_OVERFLOW",
      ._bpos = AR_NIC_AMO_ERR_CLR_FP_OVERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_FP_OVERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_FP_OVERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_FP_OVERFLOW_QW,
      ._desc = "Floating Point Exception: Overflow The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FP_INVALID",
      ._bpos = AR_NIC_AMO_ERR_CLR_FP_INVALID_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_FP_INVALID_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_FP_INVALID_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_FP_INVALID_QW,
      ._desc = "Floating Point Exception: Invalid The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FP_INEXACT",
      ._bpos = AR_NIC_AMO_ERR_CLR_FP_INEXACT_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_FP_INEXACT_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_FP_INEXACT_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_FP_INEXACT_QW,
      ._desc = "Floating Point Exception: Inexact The floating point errors are for information purposes only",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQLIST_MBE",
      ._bpos = AR_NIC_AMO_ERR_CLR_REQLIST_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_REQLIST_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_REQLIST_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_REQLIST_MBE_QW,
      ._desc = "MBE reading request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQLIST_SBE",
      ._bpos = AR_NIC_AMO_ERR_CLR_REQLIST_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_REQLIST_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_REQLIST_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_REQLIST_SBE_QW,
      ._desc = "SBE reading request list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DATASTORE_WR_POISON",
      ._bpos = AR_NIC_AMO_ERR_CLR_DATASTORE_WR_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_DATASTORE_WR_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_DATASTORE_WR_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_DATASTORE_WR_POISON_QW,
      ._desc = "The datastore was intentionally written with poisoned data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DATASTORE_RD_POISON",
      ._bpos = AR_NIC_AMO_ERR_CLR_DATASTORE_RD_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_DATASTORE_RD_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_DATASTORE_RD_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_DATASTORE_RD_POISON_QW,
      ._desc = "The datastore read encountered a parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_AMO_ERR_CLR_RSP_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_RSP_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_RSP_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_RSP_MBE_QW,
      ._desc = "MBE on fill response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_AMO_ERR_CLR_RSP_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_RSP_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_RSP_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_RSP_SBE_QW,
      ._desc = "SBE on fill response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_UNSOLICITED",
      ._bpos = AR_NIC_AMO_ERR_CLR_RSP_UNSOLICITED_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_RSP_UNSOLICITED_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_RSP_UNSOLICITED_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_RSP_UNSOLICITED_QW,
      ._desc = "Fill response was not expected (tag state not valid and pending)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_PARITY",
      ._bpos = AR_NIC_AMO_ERR_CLR_RSP_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_RSP_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_RSP_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_RSP_PARITY_QW,
      ._desc = "Parity error on response packet (packet dropped)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_AMO_ERR_CLR_REQ_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_REQ_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_REQ_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_REQ_MBE_QW,
      ._desc = "MBE on AMO request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_AMO_ERR_CLR_REQ_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_REQ_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_REQ_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_REQ_SBE_QW,
      ._desc = "SBE on AMO request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_PARITY",
      ._bpos = AR_NIC_AMO_ERR_CLR_REQ_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_REQ_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_REQ_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_REQ_PARITY_QW,
      ._desc = "Parity error on request packet (packet dropped)  Classified as UXACT because the dropped packet may have been a CQE or DSMN flag data write",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_RSP1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_RSP1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_RSP1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_RSP1_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on rsp1 fifo (AMO responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_RSP0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_RSP0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_RSP0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_RSP0_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on rsp0 fifo (PI responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_REQ1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_REQ1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_REQ1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_REQ1_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on req1 fifo (AMO writebacks)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_REQ0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_REQ0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_REQ0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_REQ0_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on req0 fifo (PI requests)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "INPUT_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_INPUT_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_INPUT_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_INPUT_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_INPUT_FIFO_UNFLW_QW,
      ._desc = "Underflow detected on input fifo (from NPT)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_RSP1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_RSP1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_RSP1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_RSP1_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on rsp1 fifo (AMO responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_RSP0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_RSP0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_RSP0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_RSP0_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on rsp0 fifo (PI responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_REQ1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_REQ1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_REQ1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_REQ1_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on req1 fifo (AMO writebacks)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_REQ0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_REQ0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_REQ0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_REQ0_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on req0 fifo (PI requests)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "INPUT_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_CLR_INPUT_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_INPUT_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_INPUT_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_INPUT_FIFO_OVFLW_QW,
      ._desc = "Overflow detected on input fifo (from NPT)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_AMO_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_AMO_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_AMO_ERR_CLR_RSTDATA & AR_NIC_AMO_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_AMO_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_hss_msk_detail[] = {
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_TIMEOUT_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_TIMEOUT_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_TIMEOUT_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_TIMEOUT_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_UNDERFLOW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_FP_UNDERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_FP_UNDERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_FP_UNDERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_FP_UNDERFLOW_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_OVERFLOW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_FP_OVERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_FP_OVERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_FP_OVERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_FP_OVERFLOW_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_INVALID",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_FP_INVALID_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_FP_INVALID_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_FP_INVALID_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_FP_INVALID_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_INEXACT",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_FP_INEXACT_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_FP_INEXACT_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_FP_INEXACT_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_FP_INEXACT_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQLIST_MBE",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_REQLIST_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_REQLIST_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_REQLIST_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_REQLIST_MBE_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQLIST_SBE",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_REQLIST_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_REQLIST_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_REQLIST_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_REQLIST_SBE_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATASTORE_WR_POISON",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_DATASTORE_WR_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_DATASTORE_WR_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_DATASTORE_WR_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_DATASTORE_WR_POISON_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATASTORE_RD_POISON",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_DATASTORE_RD_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_DATASTORE_RD_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_DATASTORE_RD_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_DATASTORE_RD_POISON_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_RSP_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_RSP_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_RSP_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_RSP_MBE_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_RSP_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_RSP_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_RSP_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_RSP_SBE_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_UNSOLICITED",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_RSP_UNSOLICITED_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_RSP_UNSOLICITED_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_RSP_UNSOLICITED_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_RSP_UNSOLICITED_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_PARITY",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_RSP_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_RSP_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_RSP_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_RSP_PARITY_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_REQ_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_REQ_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_REQ_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_REQ_MBE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_REQ_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_REQ_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_REQ_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_REQ_SBE_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_PARITY",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_REQ_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_REQ_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_REQ_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_REQ_PARITY_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_RSP1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_RSP1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_RSP1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_RSP1_FIFO_UNFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_RSP0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_RSP0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_RSP0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_RSP0_FIFO_UNFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_REQ1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_REQ1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_REQ1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_REQ1_FIFO_UNFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_REQ0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_REQ0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_REQ0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_REQ0_FIFO_UNFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "INPUT_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_INPUT_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_INPUT_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_INPUT_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_INPUT_FIFO_UNFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_RSP1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_RSP1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_RSP1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_RSP1_FIFO_OVFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_RSP0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_RSP0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_RSP0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_RSP0_FIFO_OVFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_REQ1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_REQ1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_REQ1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_REQ1_FIFO_OVFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_REQ0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_REQ0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_REQ0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_REQ0_FIFO_OVFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "INPUT_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_INPUT_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_INPUT_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_INPUT_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_INPUT_FIFO_OVFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_AMO_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_AMO_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA & AR_NIC_AMO_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_AMO_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_os_msk_detail[] = {
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_TIMEOUT_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_TIMEOUT_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_TIMEOUT_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_TIMEOUT_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_UNDERFLOW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_FP_UNDERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_FP_UNDERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_FP_UNDERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_FP_UNDERFLOW_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_OVERFLOW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_FP_OVERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_FP_OVERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_FP_OVERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_FP_OVERFLOW_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_INVALID",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_FP_INVALID_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_FP_INVALID_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_FP_INVALID_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_FP_INVALID_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_INEXACT",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_FP_INEXACT_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_FP_INEXACT_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_FP_INEXACT_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_FP_INEXACT_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQLIST_MBE",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_REQLIST_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_REQLIST_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_REQLIST_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_REQLIST_MBE_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQLIST_SBE",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_REQLIST_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_REQLIST_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_REQLIST_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_REQLIST_SBE_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATASTORE_WR_POISON",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_DATASTORE_WR_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_DATASTORE_WR_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_DATASTORE_WR_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_DATASTORE_WR_POISON_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATASTORE_RD_POISON",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_DATASTORE_RD_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_DATASTORE_RD_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_DATASTORE_RD_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_DATASTORE_RD_POISON_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_RSP_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_RSP_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_RSP_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_RSP_MBE_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_RSP_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_RSP_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_RSP_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_RSP_SBE_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_UNSOLICITED",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_RSP_UNSOLICITED_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_RSP_UNSOLICITED_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_RSP_UNSOLICITED_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_RSP_UNSOLICITED_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_PARITY",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_RSP_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_RSP_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_RSP_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_RSP_PARITY_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_REQ_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_REQ_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_REQ_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_REQ_MBE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_REQ_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_REQ_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_REQ_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_REQ_SBE_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_PARITY",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_REQ_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_REQ_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_REQ_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_REQ_PARITY_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_RSP1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_RSP1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_RSP1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_RSP1_FIFO_UNFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_RSP0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_RSP0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_RSP0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_RSP0_FIFO_UNFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_REQ1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_REQ1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_REQ1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_REQ1_FIFO_UNFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_REQ0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_REQ0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_REQ0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_REQ0_FIFO_UNFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "INPUT_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_INPUT_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_INPUT_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_INPUT_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_INPUT_FIFO_UNFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_RSP1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_RSP1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_RSP1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_RSP1_FIFO_OVFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_RSP0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_RSP0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_RSP0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_RSP0_FIFO_OVFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_REQ1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_REQ1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_REQ1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_REQ1_FIFO_OVFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_REQ0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_REQ0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_REQ0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_REQ0_FIFO_OVFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "INPUT_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_INPUT_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_INPUT_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_INPUT_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_INPUT_FIFO_OVFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_AMO_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_AMO_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_AMO_ERR_OS_MSK_RSTDATA & AR_NIC_AMO_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_AMO_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_first_flg_detail[] = {
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_TIMEOUT_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_TIMEOUT_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_TIMEOUT_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_TIMEOUT_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_UNDERFLOW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_FP_UNDERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_FP_UNDERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_FP_UNDERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_FP_UNDERFLOW_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_OVERFLOW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_FP_OVERFLOW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_FP_OVERFLOW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_FP_OVERFLOW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_FP_OVERFLOW_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_INVALID",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_FP_INVALID_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_FP_INVALID_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_FP_INVALID_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_FP_INVALID_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FP_INEXACT",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_FP_INEXACT_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_FP_INEXACT_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_FP_INEXACT_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_FP_INEXACT_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQLIST_MBE",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_REQLIST_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_REQLIST_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_REQLIST_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_REQLIST_MBE_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQLIST_SBE",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_REQLIST_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_REQLIST_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_REQLIST_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_REQLIST_SBE_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATASTORE_WR_POISON",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_DATASTORE_WR_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_DATASTORE_WR_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_DATASTORE_WR_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_DATASTORE_WR_POISON_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATASTORE_RD_POISON",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_DATASTORE_RD_POISON_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_DATASTORE_RD_POISON_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_DATASTORE_RD_POISON_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_DATASTORE_RD_POISON_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_RSP_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_RSP_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_RSP_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_RSP_MBE_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_RSP_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_RSP_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_RSP_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_RSP_SBE_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_UNSOLICITED",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_RSP_UNSOLICITED_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_RSP_UNSOLICITED_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_RSP_UNSOLICITED_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_RSP_UNSOLICITED_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_PARITY",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_RSP_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_RSP_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_RSP_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_RSP_PARITY_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_REQ_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_REQ_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_REQ_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_REQ_MBE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_REQ_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_REQ_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_REQ_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_REQ_SBE_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_PARITY",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_REQ_PARITY_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_REQ_PARITY_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_REQ_PARITY_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_REQ_PARITY_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_RSP1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_RSP1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_RSP1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_RSP1_FIFO_UNFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_RSP0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_RSP0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_RSP0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_RSP0_FIFO_UNFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ1_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_REQ1_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_REQ1_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_REQ1_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_REQ1_FIFO_UNFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ0_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_REQ0_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_REQ0_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_REQ0_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_REQ0_FIFO_UNFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "INPUT_FIFO_UNFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_INPUT_FIFO_UNFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_INPUT_FIFO_UNFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_INPUT_FIFO_UNFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_INPUT_FIFO_UNFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_RSP1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_RSP1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_RSP1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_RSP1_FIFO_OVFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_RSP0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_RSP0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_RSP0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_RSP0_FIFO_OVFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ1_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_REQ1_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_REQ1_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_REQ1_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_REQ1_FIFO_OVFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ0_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_REQ0_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_REQ0_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_REQ0_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_REQ0_FIFO_OVFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "INPUT_FIFO_OVFLW",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_INPUT_FIFO_OVFLW_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_INPUT_FIFO_OVFLW_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_INPUT_FIFO_OVFLW_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_INPUT_FIFO_OVFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_AMO_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_AMO_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA & AR_NIC_AMO_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_AMO_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_info_reqlist_ram_detail[] = {
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_MBE_ADDRESS_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_RSTDATA & AR_NIC_AMO_ERR_INFO_REQLIST_RAM_MBE_ADDRESS_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_MBE_ADDRESS_QW,
      ._desc = "MBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_MBE_SYNDROME_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_RSTDATA & AR_NIC_AMO_ERR_INFO_REQLIST_RAM_MBE_SYNDROME_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_MBE_SYNDROME_QW,
      ._desc = "MBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_SBE_ADDRESS_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_RSTDATA & AR_NIC_AMO_ERR_INFO_REQLIST_RAM_SBE_ADDRESS_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_SBE_ADDRESS_QW,
      ._desc = "SBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_SBE_SYNDROME_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_RSTDATA & AR_NIC_AMO_ERR_INFO_REQLIST_RAM_SBE_SYNDROME_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_SBE_SYNDROME_QW,
      ._desc = "SBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_info_fp_inexact_detail[] = {
    { ._name = "WORD_SIZE",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_INEXACT_WORD_SIZE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_INEXACT_WORD_SIZE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_INEXACT_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_INEXACT_WORD_SIZE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_INEXACT_WORD_SIZE_QW,
      ._desc = "Word size associated with floating point exception (0=32-bit; 1=64-bit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_INEXACT_TC_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_INEXACT_TC_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_INEXACT_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_INEXACT_TC_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_INEXACT_TC_QW,
      ._desc = "Translation context associated with floating point exception",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_47_2",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_INEXACT_ADDR_47_2_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_INEXACT_ADDR_47_2_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_INEXACT_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_INEXACT_ADDR_47_2_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_INEXACT_ADDR_47_2_QW,
      ._desc = "Address associated with floating point exception",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_info_fp_invalid_detail[] = {
    { ._name = "WORD_SIZE",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_INVALID_WORD_SIZE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_INVALID_WORD_SIZE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_INVALID_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_INVALID_WORD_SIZE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_INVALID_WORD_SIZE_QW,
      ._desc = "Word size associated with floating point exception (0=32-bit; 1=64-bit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_INVALID_TC_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_INVALID_TC_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_INVALID_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_INVALID_TC_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_INVALID_TC_QW,
      ._desc = "Translation context associated with floating point exception",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_47_2",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_INVALID_ADDR_47_2_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_INVALID_ADDR_47_2_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_INVALID_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_INVALID_ADDR_47_2_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_INVALID_ADDR_47_2_QW,
      ._desc = "Address associated with floating point exception",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_info_fp_overflow_detail[] = {
    { ._name = "WORD_SIZE",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_WORD_SIZE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_WORD_SIZE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_WORD_SIZE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_WORD_SIZE_QW,
      ._desc = "Word size associated with floating point exception (0=32-bit; 1=64-bit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_TC_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_TC_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_TC_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_TC_QW,
      ._desc = "Translation context associated with floating point exception",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_47_2",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_ADDR_47_2_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_ADDR_47_2_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_ADDR_47_2_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_ADDR_47_2_QW,
      ._desc = "Address associated with floating point exception",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_info_fp_underflow_detail[] = {
    { ._name = "WORD_SIZE",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_WORD_SIZE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_WORD_SIZE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_WORD_SIZE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_WORD_SIZE_QW,
      ._desc = "Word size associated with floating point exception (0=32-bit; 1=64-bit)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_TC_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_TC_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_TC_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_TC_QW,
      ._desc = "Translation context associated with floating point exception",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_47_2",
      ._bpos = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_ADDR_47_2_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_ADDR_47_2_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_RSTDATA & AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_ADDR_47_2_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_ADDR_47_2_QW,
      ._desc = "Address associated with floating point exception",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_info_req_bus_detail[] = {
    { ._name = "SYNDROME1_MBE",
      ._bpos = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME1_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME1_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_REQ_BUS_RSTDATA & AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME1_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME1_MBE_QW,
      ._desc = "Syndrome from MBE (Upper word)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME0_MBE",
      ._bpos = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME0_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME0_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_REQ_BUS_RSTDATA & AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME0_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME0_MBE_QW,
      ._desc = "Syndrome from MBE (Lower word)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME1_SBE",
      ._bpos = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME1_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME1_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_REQ_BUS_RSTDATA & AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME1_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME1_SBE_QW,
      ._desc = "Syndrome from SBE (Upper word)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME0_SBE",
      ._bpos = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME0_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME0_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_REQ_BUS_RSTDATA & AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME0_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_REQ_BUS_SYNDROME0_SBE_QW,
      ._desc = "Syndrome from SBE (Lower word)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_err_info_rsp_bus_detail[] = {
    { ._name = "SYNDROME_MBE",
      ._bpos = AR_NIC_AMO_ERR_INFO_RSP_BUS_SYNDROME_MBE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_RSP_BUS_SYNDROME_MBE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_RSP_BUS_RSTDATA & AR_NIC_AMO_ERR_INFO_RSP_BUS_SYNDROME_MBE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_RSP_BUS_SYNDROME_MBE_QW,
      ._desc = "Syndrome from MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME_SBE",
      ._bpos = AR_NIC_AMO_ERR_INFO_RSP_BUS_SYNDROME_SBE_BP,
      ._mask = AR_NIC_AMO_ERR_INFO_RSP_BUS_SYNDROME_SBE_MASK,
      ._rval = AR_NIC_AMO_ERR_INFO_RSP_BUS_RSTDATA & AR_NIC_AMO_ERR_INFO_RSP_BUS_SYNDROME_SBE_MASK,
      ._index = AR_NIC_AMO_ERR_INFO_RSP_BUS_SYNDROME_SBE_QW,
      ._desc = "Syndrome from SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_dbg_state_detail[] = {
    { ._name = "CACHE_PEND",
      ._bpos = AR_NIC_AMO_DBG_STATE_CACHE_PEND_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_CACHE_PEND_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_CACHE_PEND_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_CACHE_PEND_QW,
      ._desc = "At least one entry in the cache is pending a fill",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "CACHE_VLD",
      ._bpos = AR_NIC_AMO_DBG_STATE_CACHE_VLD_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_CACHE_VLD_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_CACHE_VLD_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_CACHE_VLD_QW,
      ._desc = "At least one entry in the cache is valid",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "LFSR_VAL",
      ._bpos = AR_NIC_AMO_DBG_STATE_LFSR_VAL_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_LFSR_VAL_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_LFSR_VAL_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_LFSR_VAL_QW,
      ._desc = "Value of write-back lfsr",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "REQLIST_CNTR",
      ._bpos = AR_NIC_AMO_DBG_STATE_REQLIST_CNTR_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_REQLIST_CNTR_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_REQLIST_CNTR_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_REQLIST_CNTR_QW,
      ._desc = "Number of valid entries in the request list",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "RSP1_RDY",
      ._bpos = AR_NIC_AMO_DBG_STATE_RSP1_RDY_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_RSP1_RDY_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_RSP1_RDY_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_RSP1_RDY_QW,
      ._desc = "Ready according to ordering rules",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "RSP0_RDY",
      ._bpos = AR_NIC_AMO_DBG_STATE_RSP0_RDY_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_RSP0_RDY_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_RSP0_RDY_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_RSP0_RDY_QW,
      ._desc = "Ready according to ordering rules",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "REQ1_RDY",
      ._bpos = AR_NIC_AMO_DBG_STATE_REQ1_RDY_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_REQ1_RDY_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_REQ1_RDY_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_REQ1_RDY_QW,
      ._desc = "Ready according to ordering rules",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "REQ0_RDY",
      ._bpos = AR_NIC_AMO_DBG_STATE_REQ0_RDY_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_REQ0_RDY_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_REQ0_RDY_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_REQ0_RDY_QW,
      ._desc = "Ready according to ordering rules",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "REQ_CRDTS",
      ._bpos = AR_NIC_AMO_DBG_STATE_REQ_CRDTS_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_REQ_CRDTS_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_REQ_CRDTS_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_REQ_CRDTS_QW,
      ._desc = "credits used",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "RSP_CRDTS",
      ._bpos = AR_NIC_AMO_DBG_STATE_RSP_CRDTS_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_RSP_CRDTS_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_RSP_CRDTS_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_RSP_CRDTS_QW,
      ._desc = "credits used",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "PARB_CRDTS",
      ._bpos = AR_NIC_AMO_DBG_STATE_PARB_CRDTS_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_PARB_CRDTS_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_PARB_CRDTS_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_PARB_CRDTS_QW,
      ._desc = "credits used",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "INPUT_CRDTS",
      ._bpos = AR_NIC_AMO_DBG_STATE_INPUT_CRDTS_BP,
      ._mask = AR_NIC_AMO_DBG_STATE_INPUT_CRDTS_MASK,
      ._rval = AR_NIC_AMO_DBG_STATE_RSTDATA & AR_NIC_AMO_DBG_STATE_INPUT_CRDTS_MASK,
      ._index = AR_NIC_AMO_DBG_STATE_INPUT_CRDTS_QW,
      ._desc = "credits used",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_dbg_errinj_reqlist_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQLIST_ADDRESS_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQLIST_ADDRESS_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQLIST_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQLIST_ADDRESS_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQLIST_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTE",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQLIST_CHECKBYTE_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQLIST_CHECKBYTE_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQLIST_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQLIST_CHECKBYTE_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQLIST_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQLIST_TRIGGERED_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQLIST_TRIGGERED_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQLIST_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQLIST_TRIGGERED_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQLIST_TRIGGERED_QW,
      ._desc = "Error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQLIST_MODE_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQLIST_MODE_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQLIST_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQLIST_MODE_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQLIST_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQLIST_ENABLE_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQLIST_ENABLE_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQLIST_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQLIST_ENABLE_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQLIST_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_dbg_errinj_datastore_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_ADDRESS_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_ADDRESS_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_DATASTORE_ADDRESS_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_TRIGGERED_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_TRIGGERED_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_DATASTORE_TRIGGERED_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_TRIGGERED_QW,
      ._desc = "Error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_MODE_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_MODE_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_DATASTORE_MODE_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_ENABLE_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_ENABLE_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_DATASTORE_ENABLE_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_dbg_errinj_req_bus_detail[] = {
    { ._name = "PARITY",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_PARITY_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_PARITY_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_PARITY_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_PARITY_QW,
      ._desc = "When an error is injected on a header flit, this field indicates which parity bits should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC1",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_ECC1_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_ECC1_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_ECC1_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_ECC1_QW,
      ._desc = "When an error is injected on a payload flit, this field indicates which bits of ECC1 should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC0",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_ECC0_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_ECC0_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_ECC0_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_ECC0_QW,
      ._desc = "When an error is injected on a payload flit, this field indicates which bits of ECC0 should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_TRIGGERED_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_TRIGGERED_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_TRIGGERED_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_TRIGGERED_QW,
      ._desc = "Error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_TAIL_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_TAIL_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_TAIL_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_TAIL_QW,
      ._desc = "When an error is injected, this field indicates whether the tail bit should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_COUNT_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_COUNT_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_COUNT_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_COUNT_QW,
      ._desc = "Indicates which flit of a packet to inject the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_MODE_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_MODE_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_MODE_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_MODE_QW,
      ._desc = "0: Inject error on one packet 1: Inject error on every packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "EN",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_EN_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_EN_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_EN_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_EN_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_dbg_errinj_rsp_bus_detail[] = {
    { ._name = "PKT_ERR",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_PKT_ERR_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_PKT_ERR_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_PKT_ERR_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_PKT_ERR_QW,
      ._desc = "When an error is injected, this field will cause the rstatus field to be interpreted as non-zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC0",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_ECC0_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_ECC0_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_ECC0_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_ECC0_QW,
      ._desc = "When an error is injected, this field indicates which bits of the ECC0 should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_PARITY_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_PARITY_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_PARITY_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_PARITY_QW,
      ._desc = "When an error is injected, this field will cause the parity to be inverted (if set)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_TRIGGERED_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_TRIGGERED_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_TRIGGERED_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_TRIGGERED_QW,
      ._desc = "Error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_MODE_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_MODE_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_MODE_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_MODE_QW,
      ._desc = "0: Inject error on one packet 1: Inject error on every packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "EN",
      ._bpos = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_EN_BP,
      ._mask = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_EN_MASK,
      ._rval = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RSTDATA & AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_EN_MASK,
      ._index = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_EN_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_prf_en_detail[] = {
    { ._name = "PRF_ORDERED_EN",
      ._bpos = AR_NIC_AMO_PRF_EN_PRF_ORDERED_EN_BP,
      ._mask = AR_NIC_AMO_PRF_EN_PRF_ORDERED_EN_MASK,
      ._rval = AR_NIC_AMO_PRF_EN_RSTDATA & AR_NIC_AMO_PRF_EN_PRF_ORDERED_EN_MASK,
      ._index = AR_NIC_AMO_PRF_EN_PRF_ORDERED_EN_QW,
      ._desc = "Enable A_NIC_AMO_PRF_STALL_DURATION_ORDERED",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PRF_FULL_EN",
      ._bpos = AR_NIC_AMO_PRF_EN_PRF_FULL_EN_BP,
      ._mask = AR_NIC_AMO_PRF_EN_PRF_FULL_EN_MASK,
      ._rval = AR_NIC_AMO_PRF_EN_RSTDATA & AR_NIC_AMO_PRF_EN_PRF_FULL_EN_MASK,
      ._index = AR_NIC_AMO_PRF_EN_PRF_FULL_EN_QW,
      ._desc = "Enable A_NIC_AMO_PRF_STALL_DURATION_FULL",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PRF_FLUSH_EN",
      ._bpos = AR_NIC_AMO_PRF_EN_PRF_FLUSH_EN_BP,
      ._mask = AR_NIC_AMO_PRF_EN_PRF_FLUSH_EN_MASK,
      ._rval = AR_NIC_AMO_PRF_EN_RSTDATA & AR_NIC_AMO_PRF_EN_PRF_FLUSH_EN_MASK,
      ._index = AR_NIC_AMO_PRF_EN_PRF_FLUSH_EN_QW,
      ._desc = "Enable A_NIC_AMO_PRF_STALL_DURATION_FLUSH",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PRF_MATCH_EN",
      ._bpos = AR_NIC_AMO_PRF_EN_PRF_MATCH_EN_BP,
      ._mask = AR_NIC_AMO_PRF_EN_PRF_MATCH_EN_MASK,
      ._rval = AR_NIC_AMO_PRF_EN_RSTDATA & AR_NIC_AMO_PRF_EN_PRF_MATCH_EN_MASK,
      ._index = AR_NIC_AMO_PRF_EN_PRF_MATCH_EN_QW,
      ._desc = "Enable A_NIC_AMO_PRF_STALL_DURATION_MATCH",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_prf_stall_duration_match_detail[] = {
    { ._name = "MAX",
      ._bpos = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_MAX_BP,
      ._mask = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_MAX_MASK,
      ._rval = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_RSTDATA & AR_NIC_AMO_PRF_STALL_DURATION_MATCH_MAX_MASK,
      ._index = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_MAX_QW,
      ._desc = "Maximum duration of stall",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_prf_stall_duration_flush_detail[] = {
    { ._name = "MAX",
      ._bpos = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_MAX_BP,
      ._mask = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_MAX_MASK,
      ._rval = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_RSTDATA & AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_MAX_MASK,
      ._index = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_MAX_QW,
      ._desc = "Maximum duration of stall",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_prf_stall_duration_full_detail[] = {
    { ._name = "MAX",
      ._bpos = AR_NIC_AMO_PRF_STALL_DURATION_FULL_MAX_BP,
      ._mask = AR_NIC_AMO_PRF_STALL_DURATION_FULL_MAX_MASK,
      ._rval = AR_NIC_AMO_PRF_STALL_DURATION_FULL_RSTDATA & AR_NIC_AMO_PRF_STALL_DURATION_FULL_MAX_MASK,
      ._index = AR_NIC_AMO_PRF_STALL_DURATION_FULL_MAX_QW,
      ._desc = "Maximum duration of stall",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_amo_prf_stall_duration_ordered_detail[] = {
    { ._name = "MAX",
      ._bpos = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_MAX_BP,
      ._mask = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_MAX_MASK,
      ._rval = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_RSTDATA & AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_MAX_MASK,
      ._index = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_MAX_QW,
      ._desc = "Maximum duration of stall",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR AMO DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_rval[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSTDATA_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSTDATA_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_rmsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSTMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_wrmsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_WRTMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_WRTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_rdmsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RDMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RDMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_xsmsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_XSMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_XSMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_wsemsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_WSEMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_WSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_rsemsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSEMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_RSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_w1smsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_W1SMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_W1SMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_w1cmsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_W1CMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_W1CMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_wrstmsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_WRSTMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_WRSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_hwwmsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_HWWMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_HWWMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_hi_amo_hwrmsk[3] = {
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_HWRMASK_QW1,
	AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO_HWRMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_rval[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTDATA_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_rmsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_wrmsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_WRTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_rdmsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RDMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_xsmsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_XSMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_wsemsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_WSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_rsemsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_RSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_w1smsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_W1SMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_w1cmsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_W1CMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_wrstmsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_WRSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_hwwmsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_HWWMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_mmr_ring_0_mid_amo_hwrmsk[2] = {
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO_HWRMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_rval[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSTDATA_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSTDATA_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSTDATA_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_rmsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSTMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSTMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSTMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_wrmsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_WRTMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_WRTMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_WRTMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_rdmsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RDMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RDMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RDMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_xsmsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_XSMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_XSMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_XSMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_wsemsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_WSEMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_WSEMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_WSEMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_rsemsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSEMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSEMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_RSEMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_w1smsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_W1SMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_W1SMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_W1SMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_w1cmsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_W1CMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_W1CMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_W1CMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_wrstmsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_WRSTMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_WRSTMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_hwwmsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_HWWMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_HWWMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_HWWMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_hi_amo_hwrmsk[3] = {
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_HWRMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_HWRMASK_QW1,
	AR_NIC_AMO_ERR_FLG_1_HI_AMO_HWRMASK_QW2
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_rval[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTDATA_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_rmsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSTMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_wrmsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_WRTMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_WRTMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_rdmsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_RDMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_RDMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_xsmsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_XSMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_XSMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_wsemsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_WSEMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_WSEMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_rsemsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSEMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_RSEMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_w1smsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_W1SMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_W1SMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_w1cmsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_W1CMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_W1CMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_wrstmsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_WRSTMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_hwwmsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_HWWMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_HWWMASK_QW1
};
static const uint64_t __ar_nic_amo_err_flg_1_mid_amo_hwrmsk[2] = {
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_HWRMASK_QW0,
	AR_NIC_AMO_ERR_FLG_1_MID_AMO_HWRMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_rval[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSTDATA_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSTDATA_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_rmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSTMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_wrmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_WRTMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_WRTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_rdmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RDMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RDMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_xsmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_XSMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_XSMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_wsemsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_WSEMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_WSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_rsemsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSEMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_RSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_w1smsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_W1SMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_W1SMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_w1cmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_W1CMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_W1CMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_wrstmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_WRSTMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_WRSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_hwwmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_HWWMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_HWWMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_hi_amo_hwrmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_HWRMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO_HWRMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_rval[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_RSTDATA_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_rmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_RSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_wrmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_WRTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_rdmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_RDMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_xsmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_XSMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_wsemsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_WSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_rsemsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_RSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_w1smsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_W1SMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_w1cmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_W1CMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_wrstmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_WRSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_hwwmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_HWWMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_active_2_mid_amo_hwrmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO_HWRMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_rval[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTDATA_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTDATA_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_rmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_wrmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_WRTMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_WRTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_rdmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RDMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RDMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_xsmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_XSMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_XSMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_wsemsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_WSEMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_WSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_rsemsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSEMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_RSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_w1smsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_W1SMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_W1SMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_w1cmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_W1CMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_W1CMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_wrstmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_WRSTMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_WRSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_hwwmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_HWWMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_HWWMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo_hwrmsk[3] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_HWRMASK_QW1,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO_HWRMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_rval[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_RSTDATA_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_rmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_RSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_wrmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_WRTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_rdmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_RDMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_xsmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_XSMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_wsemsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_WSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_rsemsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_RSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_w1smsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_W1SMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_w1cmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_W1CMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_wrstmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_WRSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_hwwmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_HWWMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo_hwrmsk[2] = {
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO_HWRMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_rval[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSTDATA_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSTDATA_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_rmsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSTMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_wrmsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_WRTMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_WRTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_rdmsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RDMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RDMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_xsmsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_XSMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_XSMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_wsemsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_WSEMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_WSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_rsemsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSEMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_RSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_w1smsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_W1SMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_W1SMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_w1cmsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_W1CMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_W1CMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_wrstmsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_WRSTMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_WRSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_hwwmsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_HWWMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_HWWMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_hwrmsk[3] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_HWRMASK_QW1,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO_HWRMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_rval[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_RSTDATA_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_rmsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_RSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_wrmsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_WRTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_rdmsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_RDMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_xsmsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_XSMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_wsemsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_WSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_rsemsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_RSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_w1smsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_W1SMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_w1cmsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_W1CMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_wrstmsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_WRSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_hwwmsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_HWWMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_hwrmsk[2] = {
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO_HWRMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_rval[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSTDATA_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSTDATA_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_rmsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSTMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_wrmsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_WRTMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_WRTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_rdmsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RDMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RDMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_xsmsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_XSMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_XSMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_wsemsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_WSEMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_WSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_rsemsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSEMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_RSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_w1smsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_W1SMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_W1SMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_w1cmsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_W1CMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_W1CMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_wrstmsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_WRSTMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_WRSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_hwwmsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_HWWMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_HWWMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo_hwrmsk[3] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_HWRMASK_QW1,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO_HWRMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_rval[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_RSTDATA_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_rmsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_RSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_wrmsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_WRTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_rdmsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_RDMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_xsmsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_XSMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_wsemsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_WSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_rsemsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_RSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_w1smsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_W1SMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_w1cmsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_W1CMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_wrstmsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_WRSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_hwwmsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_HWWMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo_hwrmsk[2] = {
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO_HWRMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_rval[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSTDATA_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSTDATA_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSTDATA_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_rmsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSTMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSTMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSTMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_wrmsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_WRTMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_WRTMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_WRTMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_rdmsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RDMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RDMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RDMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_xsmsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_XSMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_XSMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_XSMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_wsemsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_WSEMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_WSEMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_WSEMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_rsemsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSEMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSEMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_RSEMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_w1smsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_W1SMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_W1SMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_W1SMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_w1cmsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_W1CMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_W1CMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_W1CMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_wrstmsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_WRSTMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_WRSTMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_hwwmsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_HWWMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_HWWMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_HWWMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_hwrmsk[3] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_HWRMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_HWRMASK_QW1,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO_HWRMASK_QW2
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_rval[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_RSTDATA_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_RSTDATA_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_rmsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_RSTMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_RSTMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_wrmsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_WRTMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_WRTMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_rdmsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_RDMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_RDMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_xsmsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_XSMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_XSMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_wsemsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_WSEMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_WSEMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_rsemsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_RSEMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_RSEMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_w1smsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_W1SMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_W1SMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_w1cmsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_W1CMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_W1CMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_wrstmsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_WRSTMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_hwwmsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_HWWMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_HWWMASK_QW1
};
static const uint64_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_hwrmsk[2] = {
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_HWRMASK_QW0,
	AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO_HWRMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_rval[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTDATA_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_rmsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_wrmsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRTMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_rdmsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RDMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RDMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_xsmsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_XSMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_XSMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_wsemsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WSEMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_rsemsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSEMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_RSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_w1smsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W1SMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W1SMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_w1cmsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W1CMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_W1CMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_wrstmsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRSTMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_WRSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_hwwmsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_HWWMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_HWWMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_hi_amo_hwrmsk[3] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_HWRMASK_QW1,
	AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO_HWRMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_rval[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSTDATA_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_rmsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_wrmsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_WRTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_rdmsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RDMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_xsmsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_XSMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_wsemsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_WSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_rsemsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_RSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_w1smsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_W1SMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_w1cmsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_W1CMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_wrstmsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_WRSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_hwwmsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_HWWMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_acp_out_7_mid_amo_hwrmsk[2] = {
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO_HWRMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_rval[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSTDATA_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSTDATA_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_rmsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSTMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_wrmsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_WRTMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_WRTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_rdmsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RDMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RDMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_xsmsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_XSMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_XSMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_wsemsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_WSEMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_WSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_rsemsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSEMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_RSEMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_w1smsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_W1SMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_W1SMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_w1cmsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_W1CMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_W1CMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_wrstmsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_WRSTMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_WRSTMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_hwwmsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_HWWMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_HWWMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_hi_amo_hwrmsk[3] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_HWRMASK_QW1,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO_HWRMASK_QW2
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_rval[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_RSTDATA_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_RSTDATA_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_rmsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_RSTMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_RSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_wrmsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_WRTMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_WRTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_rdmsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_RDMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_RDMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_xsmsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_XSMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_XSMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_wsemsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_WSEMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_WSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_rsemsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_RSEMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_RSEMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_w1smsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_W1SMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_W1SMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_w1cmsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_W1CMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_W1CMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_wrstmsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_WRSTMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_WRSTMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_hwwmsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_HWWMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_HWWMASK_QW1
};
static const uint64_t __ar_nic_amo_amo_power_down_ff_mid_amo_hwrmsk[2] = {
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_HWRMASK_QW0,
	AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO_HWRMASK_QW1
};

/*
 *  AR AMO MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_amo_cfg_cache_inv = {
    ._name = "AR_NIC_AMO_CFG_CACHE_INV",
    ._addr = AR_NIC_AMO_CFG_CACHE_INV,
    ._rval.val = AR_NIC_AMO_CFG_CACHE_INV_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_CFG_CACHE_INV_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_CFG_CACHE_INV_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_CFG_CACHE_INV_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_CFG_CACHE_INV_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_CFG_CACHE_INV_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_CFG_CACHE_INV_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_CFG_CACHE_INV_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_CFG_CACHE_INV_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_CFG_CACHE_INV_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_CFG_CACHE_INV_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_CFG_CACHE_INV_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_amo_cfg_cache_inv_detail
};
static const cmmr_br_t __ar_nic_amo_amo_mmr_ring_0_hi_amo = {
    ._name = "AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO",
    ._addr = AR_NIC_AMO_AMO_MMR_RING_0_HI_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_hi_amo_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_mmr_ring_0_hi_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_mmr_ring_0_mid_amo = {
    ._name = "AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO",
    ._addr = AR_NIC_AMO_AMO_MMR_RING_0_MID_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_mmr_ring_0_mid_amo_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_mmr_ring_0_mid_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_mmr_ring_0_lo_amo = {
    ._name = "AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO",
    ._addr = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO,
    ._rval.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_AMO_MMR_RING_0_LO_AMO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_mmr_ring_0_lo_amo_detail
};
static const cmmr_br_t __ar_nic_amo_err_flg_1_hi_amo = {
    ._name = "AR_NIC_AMO_ERR_FLG_1_HI_AMO",
    ._addr = AR_NIC_AMO_ERR_FLG_1_HI_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_hi_amo_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_flg_1_hi_amo_detail
};
static const cmmr_br_t __ar_nic_amo_err_flg_1_mid_amo = {
    ._name = "AR_NIC_AMO_ERR_FLG_1_MID_AMO",
    ._addr = AR_NIC_AMO_ERR_FLG_1_MID_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_err_flg_1_mid_amo_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_flg_1_mid_amo_detail
};
static const cmmr_br_t __ar_nic_amo_err_flg_1_lo_amo = {
    ._name = "AR_NIC_AMO_ERR_FLG_1_LO_AMO",
    ._addr = AR_NIC_AMO_ERR_FLG_1_LO_AMO,
    ._rval.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_FLG_1_LO_AMO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_flg_1_lo_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_tagstore_active_2_hi_amo = {
    ._name = "AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO",
    ._addr = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_HI_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_hi_amo_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_tagstore_active_2_hi_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_tagstore_active_2_mid_amo = {
    ._name = "AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO",
    ._addr = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_MID_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_active_2_mid_amo_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_tagstore_active_2_mid_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_tagstore_active_2_lo_amo = {
    ._name = "AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO",
    ._addr = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO,
    ._rval.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_AMO_TAGSTORE_ACTIVE_2_LO_AMO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_tagstore_active_2_lo_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_tagstore_pending_3_hi_amo = {
    ._name = "AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO",
    ._addr = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_HI_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_hi_amo_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_tagstore_pending_3_hi_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_tagstore_pending_3_mid_amo = {
    ._name = "AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO",
    ._addr = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_MID_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_tagstore_pending_3_mid_amo_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_tagstore_pending_3_mid_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_tagstore_pending_3_lo_amo = {
    ._name = "AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO",
    ._addr = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO,
    ._rval.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_AMO_TAGSTORE_PENDING_3_LO_AMO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_tagstore_pending_3_lo_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_reqlist_rdy_4_hi_amo = {
    ._name = "AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO",
    ._addr = AR_NIC_AMO_AMO_REQLIST_RDY_4_HI_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_hi_amo_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_reqlist_rdy_4_hi_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_reqlist_rdy_4_mid_amo = {
    ._name = "AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO",
    ._addr = AR_NIC_AMO_AMO_REQLIST_RDY_4_MID_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_reqlist_rdy_4_mid_amo_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_reqlist_rdy_4_mid_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_reqlist_rdy_4_lo_amo = {
    ._name = "AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO",
    ._addr = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO,
    ._rval.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_AMO_REQLIST_RDY_4_LO_AMO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_reqlist_rdy_4_lo_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_parb_req_flit_5_hi_amo = {
    ._name = "AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO",
    ._addr = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_HI_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_hi_amo_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_parb_req_flit_5_hi_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_parb_req_flit_5_mid_amo = {
    ._name = "AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO",
    ._addr = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_MID_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_parb_req_flit_5_mid_amo_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_parb_req_flit_5_mid_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_parb_req_flit_5_lo_amo = {
    ._name = "AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO",
    ._addr = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO,
    ._rval.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_AMO_PARB_REQ_FLIT_5_LO_AMO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_parb_req_flit_5_lo_amo_detail
};
static const cmmr_br_t __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo = {
    ._name = "AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO",
    ._addr = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_HI_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_pi_nic_rsp_flit_6_hi_amo_detail
};
static const cmmr_br_t __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo = {
    ._name = "AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO",
    ._addr = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_MID_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_pi_nic_rsp_flit_6_mid_amo_detail
};
static const cmmr_br_t __ar_nic_amo_pi_nic_rsp_flit_6_lo_amo = {
    ._name = "AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO",
    ._addr = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO,
    ._rval.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_PI_NIC_RSP_FLIT_6_LO_AMO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_pi_nic_rsp_flit_6_lo_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_acp_out_7_hi_amo = {
    ._name = "AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO",
    ._addr = AR_NIC_AMO_AMO_ACP_OUT_7_HI_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_hi_amo_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_acp_out_7_hi_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_acp_out_7_mid_amo = {
    ._name = "AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO",
    ._addr = AR_NIC_AMO_AMO_ACP_OUT_7_MID_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_acp_out_7_mid_amo_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_acp_out_7_mid_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_acp_out_7_lo_amo = {
    ._name = "AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO",
    ._addr = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO,
    ._rval.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_AMO_ACP_OUT_7_LO_AMO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_acp_out_7_lo_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_power_down_ff_hi_amo = {
    ._name = "AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO",
    ._addr = AR_NIC_AMO_AMO_POWER_DOWN_FF_HI_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_hi_amo_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_power_down_ff_hi_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_power_down_ff_mid_amo = {
    ._name = "AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO",
    ._addr = AR_NIC_AMO_AMO_POWER_DOWN_FF_MID_AMO,
    ._rval.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_amo_amo_power_down_ff_mid_amo_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_power_down_ff_mid_amo_detail
};
static const cmmr_br_t __ar_nic_amo_amo_power_down_ff_lo_amo = {
    ._name = "AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO",
    ._addr = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO,
    ._rval.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_AMO_POWER_DOWN_FF_LO_AMO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_amo_power_down_ff_lo_amo_detail
};
static const cmmr_br_t __ar_nic_amo_cfg_rounding_mode = {
    ._name = "AR_NIC_AMO_CFG_ROUNDING_MODE",
    ._addr = AR_NIC_AMO_CFG_ROUNDING_MODE,
    ._rval.val = AR_NIC_AMO_CFG_ROUNDING_MODE_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_CFG_ROUNDING_MODE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_cfg_rounding_mode_detail
};
static const cmmr_br_t __ar_nic_amo_cfg_params = {
    ._name = "AR_NIC_AMO_CFG_PARAMS",
    ._addr = AR_NIC_AMO_CFG_PARAMS,
    ._rval.val = AR_NIC_AMO_CFG_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_CFG_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_CFG_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_CFG_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_CFG_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_CFG_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_CFG_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_CFG_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_CFG_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_CFG_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_CFG_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_CFG_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_cfg_params_detail
};
static const cmmr_br_t __ar_nic_amo_cfg_crdts = {
    ._name = "AR_NIC_AMO_CFG_CRDTS",
    ._addr = AR_NIC_AMO_CFG_CRDTS,
    ._rval.val = AR_NIC_AMO_CFG_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_CFG_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_CFG_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_CFG_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_CFG_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_CFG_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_CFG_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_CFG_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_CFG_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_CFG_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_CFG_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_CFG_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_cfg_crdts_detail
};
static const cmmr_br_t __ar_nic_amo_cfg_offld = {
    ._name = "AR_NIC_AMO_CFG_OFFLD",
    ._addr = AR_NIC_AMO_CFG_OFFLD,
    ._rval.val = AR_NIC_AMO_CFG_OFFLD_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_CFG_OFFLD_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_CFG_OFFLD_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_CFG_OFFLD_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_CFG_OFFLD_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_CFG_OFFLD_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_CFG_OFFLD_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_CFG_OFFLD_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_CFG_OFFLD_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_CFG_OFFLD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_CFG_OFFLD_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_CFG_OFFLD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_cfg_offld_detail
};
static const cmmr_br_t __ar_nic_amo_err_flg = {
    ._name = "AR_NIC_AMO_ERR_FLG",
    ._addr = AR_NIC_AMO_ERR_FLG,
    ._rval.val = AR_NIC_AMO_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x00000000003cc811ull,
    ._info = __ar_nic_amo_err_flg_detail
};
static const cmmr_br_t __ar_nic_amo_err_clr = {
    ._name = "AR_NIC_AMO_ERR_CLR",
    ._addr = AR_NIC_AMO_ERR_CLR,
    ._rval.val = AR_NIC_AMO_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_amo_err_clr_detail
};
static const cmmr_br_t __ar_nic_amo_err_hss_msk = {
    ._name = "AR_NIC_AMO_ERR_HSS_MSK",
    ._addr = AR_NIC_AMO_ERR_HSS_MSK,
    ._rval.val = AR_NIC_AMO_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_amo_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_amo_err_os_msk = {
    ._name = "AR_NIC_AMO_ERR_OS_MSK",
    ._addr = AR_NIC_AMO_ERR_OS_MSK,
    ._rval.val = AR_NIC_AMO_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_amo_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_amo_err_first_flg = {
    ._name = "AR_NIC_AMO_ERR_FIRST_FLG",
    ._addr = AR_NIC_AMO_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_AMO_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_amo_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_amo_err_info_reqlist_ram = {
    ._name = "AR_NIC_AMO_ERR_INFO_REQLIST_RAM",
    ._addr = AR_NIC_AMO_ERR_INFO_REQLIST_RAM,
    ._rval.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_INFO_REQLIST_RAM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_info_reqlist_ram_detail
};
static const cmmr_br_t __ar_nic_amo_err_info_fp_inexact = {
    ._name = "AR_NIC_AMO_ERR_INFO_FP_INEXACT",
    ._addr = AR_NIC_AMO_ERR_INFO_FP_INEXACT,
    ._rval.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_INFO_FP_INEXACT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_info_fp_inexact_detail
};
static const cmmr_br_t __ar_nic_amo_err_info_fp_invalid = {
    ._name = "AR_NIC_AMO_ERR_INFO_FP_INVALID",
    ._addr = AR_NIC_AMO_ERR_INFO_FP_INVALID,
    ._rval.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_INFO_FP_INVALID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_info_fp_invalid_detail
};
static const cmmr_br_t __ar_nic_amo_err_info_fp_overflow = {
    ._name = "AR_NIC_AMO_ERR_INFO_FP_OVERFLOW",
    ._addr = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW,
    ._rval.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_INFO_FP_OVERFLOW_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_info_fp_overflow_detail
};
static const cmmr_br_t __ar_nic_amo_err_info_fp_underflow = {
    ._name = "AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW",
    ._addr = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW,
    ._rval.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_INFO_FP_UNDERFLOW_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_info_fp_underflow_detail
};
static const cmmr_br_t __ar_nic_amo_err_info_req_bus = {
    ._name = "AR_NIC_AMO_ERR_INFO_REQ_BUS",
    ._addr = AR_NIC_AMO_ERR_INFO_REQ_BUS,
    ._rval.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_INFO_REQ_BUS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_info_req_bus_detail
};
static const cmmr_br_t __ar_nic_amo_err_info_rsp_bus = {
    ._name = "AR_NIC_AMO_ERR_INFO_RSP_BUS",
    ._addr = AR_NIC_AMO_ERR_INFO_RSP_BUS,
    ._rval.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_ERR_INFO_RSP_BUS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_err_info_rsp_bus_detail
};
static const cmmr_br_t __ar_nic_amo_dbg_state = {
    ._name = "AR_NIC_AMO_DBG_STATE",
    ._addr = AR_NIC_AMO_DBG_STATE,
    ._rval.val = AR_NIC_AMO_DBG_STATE_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_DBG_STATE_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_DBG_STATE_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_DBG_STATE_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_DBG_STATE_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_DBG_STATE_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_DBG_STATE_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_DBG_STATE_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_DBG_STATE_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_DBG_STATE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_DBG_STATE_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_DBG_STATE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_amo_dbg_state_detail
};
static const cmmr_br_t __ar_nic_amo_dbg_errinj_reqlist = {
    ._name = "AR_NIC_AMO_DBG_ERRINJ_REQLIST",
    ._addr = AR_NIC_AMO_DBG_ERRINJ_REQLIST,
    ._rval.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQLIST_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_dbg_errinj_reqlist_detail
};
static const cmmr_br_t __ar_nic_amo_dbg_errinj_datastore = {
    ._name = "AR_NIC_AMO_DBG_ERRINJ_DATASTORE",
    ._addr = AR_NIC_AMO_DBG_ERRINJ_DATASTORE,
    ._rval.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_DBG_ERRINJ_DATASTORE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_dbg_errinj_datastore_detail
};
static const cmmr_br_t __ar_nic_amo_dbg_errinj_req_bus = {
    ._name = "AR_NIC_AMO_DBG_ERRINJ_REQ_BUS",
    ._addr = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS,
    ._rval.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_DBG_ERRINJ_REQ_BUS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_dbg_errinj_req_bus_detail
};
static const cmmr_br_t __ar_nic_amo_dbg_errinj_rsp_bus = {
    ._name = "AR_NIC_AMO_DBG_ERRINJ_RSP_BUS",
    ._addr = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS,
    ._rval.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_DBG_ERRINJ_RSP_BUS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_dbg_errinj_rsp_bus_detail
};
static const cmmr_br_t __ar_nic_amo_prf_en = {
    ._name = "AR_NIC_AMO_PRF_EN",
    ._addr = AR_NIC_AMO_PRF_EN,
    ._rval.val = AR_NIC_AMO_PRF_EN_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_PRF_EN_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_PRF_EN_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_PRF_EN_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_PRF_EN_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_PRF_EN_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_PRF_EN_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_PRF_EN_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_PRF_EN_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_PRF_EN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_PRF_EN_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_PRF_EN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_amo_prf_en_detail
};
static const cmmr_br_t __ar_nic_amo_prf_stall_duration_match = {
    ._name = "AR_NIC_AMO_PRF_STALL_DURATION_MATCH",
    ._addr = AR_NIC_AMO_PRF_STALL_DURATION_MATCH,
    ._rval.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_MATCH_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_amo_prf_stall_duration_match_detail
};
static const cmmr_br_t __ar_nic_amo_prf_stall_duration_flush = {
    ._name = "AR_NIC_AMO_PRF_STALL_DURATION_FLUSH",
    ._addr = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH,
    ._rval.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FLUSH_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_amo_prf_stall_duration_flush_detail
};
static const cmmr_br_t __ar_nic_amo_prf_stall_duration_full = {
    ._name = "AR_NIC_AMO_PRF_STALL_DURATION_FULL",
    ._addr = AR_NIC_AMO_PRF_STALL_DURATION_FULL,
    ._rval.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_FULL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_amo_prf_stall_duration_full_detail
};
static const cmmr_br_t __ar_nic_amo_prf_stall_duration_ordered = {
    ._name = "AR_NIC_AMO_PRF_STALL_DURATION_ORDERED",
    ._addr = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED,
    ._rval.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_RSTDATA,
    ._rmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_RSTMASK,
    ._wrmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_WRTMASK,
    ._rdmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_RDMASK,
    ._xsmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_XSMASK,
    ._wsemsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_WSEMASK,
    ._rsemsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_RSEMASK,
    ._w1smsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_W1SMASK,
    ._w1cmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_W1CMASK,
    ._wrstmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_WRSTMASK,
    ._hwwmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_HWWMASK,
    ._hwrmsk.val = AR_NIC_AMO_PRF_STALL_DURATION_ORDERED_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_amo_prf_stall_duration_ordered_detail
};

/*
 *  INSTALL AR AMO MMRS
 */
static const cmmr_br_t* __ar_amo_mmrs[] = {
    &__ar_nic_amo_cfg_cache_inv,
    &__ar_nic_amo_cfg_rounding_mode,
    &__ar_nic_amo_cfg_params,
    &__ar_nic_amo_cfg_crdts,
    &__ar_nic_amo_cfg_offld,
    &__ar_nic_amo_err_flg,
    &__ar_nic_amo_err_clr,
    &__ar_nic_amo_err_hss_msk,
    &__ar_nic_amo_err_os_msk,
    &__ar_nic_amo_err_first_flg,
    &__ar_nic_amo_err_info_reqlist_ram,
    &__ar_nic_amo_err_info_fp_inexact,
    &__ar_nic_amo_err_info_fp_invalid,
    &__ar_nic_amo_err_info_fp_overflow,
    &__ar_nic_amo_err_info_fp_underflow,
    &__ar_nic_amo_err_info_req_bus,
    &__ar_nic_amo_err_info_rsp_bus,
    &__ar_nic_amo_dbg_state,
    &__ar_nic_amo_dbg_errinj_reqlist,
    &__ar_nic_amo_dbg_errinj_datastore,
    &__ar_nic_amo_dbg_errinj_req_bus,
    &__ar_nic_amo_dbg_errinj_rsp_bus,
    &__ar_nic_amo_prf_en,
    &__ar_nic_amo_prf_stall_duration_match,
    &__ar_nic_amo_prf_stall_duration_flush,
    &__ar_nic_amo_prf_stall_duration_full,
    &__ar_nic_amo_prf_stall_duration_ordered,
    NULL
};

/*
 *  INSTALL AR AMO LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_amo_enc_mmrs[] = {
    &__ar_nic_amo_amo_mmr_ring_0_hi_amo,
    &__ar_nic_amo_amo_mmr_ring_0_mid_amo,
    &__ar_nic_amo_amo_mmr_ring_0_lo_amo,
    &__ar_nic_amo_err_flg_1_hi_amo,
    &__ar_nic_amo_err_flg_1_mid_amo,
    &__ar_nic_amo_err_flg_1_lo_amo,
    &__ar_nic_amo_amo_tagstore_active_2_hi_amo,
    &__ar_nic_amo_amo_tagstore_active_2_mid_amo,
    &__ar_nic_amo_amo_tagstore_active_2_lo_amo,
    &__ar_nic_amo_amo_tagstore_pending_3_hi_amo,
    &__ar_nic_amo_amo_tagstore_pending_3_mid_amo,
    &__ar_nic_amo_amo_tagstore_pending_3_lo_amo,
    &__ar_nic_amo_amo_reqlist_rdy_4_hi_amo,
    &__ar_nic_amo_amo_reqlist_rdy_4_mid_amo,
    &__ar_nic_amo_amo_reqlist_rdy_4_lo_amo,
    &__ar_nic_amo_amo_parb_req_flit_5_hi_amo,
    &__ar_nic_amo_amo_parb_req_flit_5_mid_amo,
    &__ar_nic_amo_amo_parb_req_flit_5_lo_amo,
    &__ar_nic_amo_pi_nic_rsp_flit_6_hi_amo,
    &__ar_nic_amo_pi_nic_rsp_flit_6_mid_amo,
    &__ar_nic_amo_pi_nic_rsp_flit_6_lo_amo,
    &__ar_nic_amo_amo_acp_out_7_hi_amo,
    &__ar_nic_amo_amo_acp_out_7_mid_amo,
    &__ar_nic_amo_amo_acp_out_7_lo_amo,
    &__ar_nic_amo_amo_power_down_ff_hi_amo,
    &__ar_nic_amo_amo_power_down_ff_mid_amo,
    &__ar_nic_amo_amo_power_down_ff_lo_amo,
    NULL
};

#endif
