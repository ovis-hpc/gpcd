/******************************************************************************
 * COPYRIGHT CRAY INC. ar_dla_detailed_mmrs_h.h
 * FILE: ar_dla_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/
/**
 * @file ar_dla_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:04 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_dla_mmr_values.h and ar_dla_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_dla_mmr_values.h"

#ifndef _AR_DLA_DETAILED_MMRS_H_H_
#define _AR_DLA_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_dla_mmrs[];	/* DLA Array */

/*
 *  AR DLA MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_dla_desc_status_detail[] = {
    { ._name = "MARKER_OVERFLOW",
      ._bpos = AR_NIC_DLA_DESC_STATUS_MARKER_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_MARKER_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW2 & AR_NIC_DLA_DESC_STATUS_MARKER_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_MARKER_OVERFLOW_QW,
      ._desc = "DLA marker overflow flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MARKER_CQH",
      ._bpos = AR_NIC_DLA_DESC_STATUS_MARKER_CQH_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_MARKER_CQH_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW2 & AR_NIC_DLA_DESC_STATUS_MARKER_CQH_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_MARKER_CQH_QW,
      ._desc = "DLA marker completion queue handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MARKER_ID",
      ._bpos = AR_NIC_DLA_DESC_STATUS_MARKER_ID_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_MARKER_ID_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW2 & AR_NIC_DLA_DESC_STATUS_MARKER_ID_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_MARKER_ID_QW,
      ._desc = "DLA marker ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ALLOC_CQH",
      ._bpos = AR_NIC_DLA_DESC_STATUS_ALLOC_CQH_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_ALLOC_CQH_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW1 & AR_NIC_DLA_DESC_STATUS_ALLOC_CQH_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_ALLOC_CQH_QW,
      ._desc = "Completion queue handle for reporting allocation status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "BLOCK_ID",
      ._bpos = AR_NIC_DLA_DESC_STATUS_BLOCK_ID_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_BLOCK_ID_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW1 & AR_NIC_DLA_DESC_STATUS_BLOCK_ID_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_BLOCK_ID_QW,
      ._desc = "Block ID for reporting allocation status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "DISCARD",
      ._bpos = AR_NIC_DLA_DESC_STATUS_DISCARD_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_DISCARD_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0 & AR_NIC_DLA_DESC_STATUS_DISCARD_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_DISCARD_QW,
      ._desc = "Discard flag, indicating an allocation has failed",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "ALLOC_OVERFLOW",
      ._bpos = AR_NIC_DLA_DESC_STATUS_ALLOC_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_ALLOC_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0 & AR_NIC_DLA_DESC_STATUS_ALLOC_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_ALLOC_OVERFLOW_QW,
      ._desc = "Overflow error flag for current allocation",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "TRANS_OVERFLOW",
      ._bpos = AR_NIC_DLA_DESC_STATUS_TRANS_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_TRANS_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0 & AR_NIC_DLA_DESC_STATUS_TRANS_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_TRANS_OVERFLOW_QW,
      ._desc = "Overflow error flag for current transaction",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "CD_ACTIVE",
      ._bpos = AR_NIC_DLA_DESC_STATUS_CD_ACTIVE_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_CD_ACTIVE_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0 & AR_NIC_DLA_DESC_STATUS_CD_ACTIVE_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_CD_ACTIVE_QW,
      ._desc = "Controlled discard reservation active",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "PR_ACTIVE",
      ._bpos = AR_NIC_DLA_DESC_STATUS_PR_ACTIVE_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_PR_ACTIVE_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0 & AR_NIC_DLA_DESC_STATUS_PR_ACTIVE_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_PR_ACTIVE_QW,
      ._desc = "Persistent reservation active",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "HP_ACTIVE",
      ._bpos = AR_NIC_DLA_DESC_STATUS_HP_ACTIVE_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_HP_ACTIVE_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0 & AR_NIC_DLA_DESC_STATUS_HP_ACTIVE_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_HP_ACTIVE_QW,
      ._desc = "High priority, valid only if controlled discard reservation is active",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "PR_RELEASE_PENDING",
      ._bpos = AR_NIC_DLA_DESC_STATUS_PR_RELEASE_PENDING_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_PR_RELEASE_PENDING_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0 & AR_NIC_DLA_DESC_STATUS_PR_RELEASE_PENDING_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_PR_RELEASE_PENDING_QW,
      ._desc = "Persistent reservation release active",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "RESVD_CREDITS",
      ._bpos = AR_NIC_DLA_DESC_STATUS_RESVD_CREDITS_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_RESVD_CREDITS_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0 & AR_NIC_DLA_DESC_STATUS_RESVD_CREDITS_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_RESVD_CREDITS_QW,
      ._desc = "Reserved credit count",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "CONSUMED_PR_CREDITS",
      ._bpos = AR_NIC_DLA_DESC_STATUS_CONSUMED_PR_CREDITS_BP,
      ._mask = AR_NIC_DLA_DESC_STATUS_CONSUMED_PR_CREDITS_MASK,
      ._rval = AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0 & AR_NIC_DLA_DESC_STATUS_CONSUMED_PR_CREDITS_MASK,
      ._index = AR_NIC_DLA_DESC_STATUS_CONSUMED_PR_CREDITS_QW,
      ._desc = "Consumed persistent reservation credit count",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_mmr_ring_0_hi_dla_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_DLA_MMR_RING_0_HI_DLA_UNUSED_145_35_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_HI_DLA_UNUSED_145_35_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_HI_DLA_RSTDATA_QW2 & AR_NIC_DLA_MMR_RING_0_HI_DLA_UNUSED_145_35_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_HI_DLA_UNUSED_145_35_QW,
      ._desc = "Forced 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_mmr_ring_0_mid_dla_detail[] = {
    { ._name = "UNUSED_127_98",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_UNUSED_127_98_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_UNUSED_127_98_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_UNUSED_127_98_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_UNUSED_127_98_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RESERVED15",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_RESERVED15_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_RESERVED15_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_RESERVED15_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_RESERVED15_QW,
      ._desc = "Reserved",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TARB_STALLED",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_TARB_STALLED_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_TARB_STALLED_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_TARB_STALLED_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_TARB_STALLED_QW,
      ._desc = "DLA to TARB stalls",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_FMA_PKT_ERR",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FMA_PKT_ERR_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FMA_PKT_ERR_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FMA_PKT_ERR_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FMA_PKT_ERR_QW,
      ._desc = "AllocSSID, SyncComplete, or DLAMARKER request packet received from FMA with an with an lstatus of  A_STATUS_FMA_UNCORRECTABLE or A_STATUS_DATA_ERR",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PR_ENQ",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ENQ_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ENQ_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ENQ_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ENQ_QW,
      ._desc = "FIFO enqueued persistent reservation packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_HI_CD_ENQ",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ENQ_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ENQ_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ENQ_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ENQ_QW,
      ._desc = "FIFO enqueued high priority controlled discard packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_LO_CD_ENQ",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ENQ_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ENQ_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ENQ_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ENQ_QW,
      ._desc = "FIFO enqueued low priority controlled discard packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_FIFO_ENQ_PKT",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FIFO_ENQ_PKT_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FIFO_ENQ_PKT_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FIFO_ENQ_PKT_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FIFO_ENQ_PKT_QW,
      ._desc = "Packet intended for FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_FIFO_HDR_MBE",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FIFO_HDR_MBE_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FIFO_HDR_MBE_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FIFO_HDR_MBE_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_FIFO_HDR_MBE_QW,
      ._desc = "MBE on packet header removed from FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DATA_MBE",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_DATA_MBE_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_DATA_MBE_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_DATA_MBE_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_DATA_MBE_QW,
      ._desc = "Data flit MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_HDR_PERR",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HDR_PERR_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HDR_PERR_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HDR_PERR_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HDR_PERR_QW,
      ._desc = "Header flit parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PR_ALLOC_FAIL",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ALLOC_FAIL_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ALLOC_FAIL_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ALLOC_FAIL_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ALLOC_FAIL_QW,
      ._desc = "Unsuccessful high priority CD allocations",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PR_ALLOC_PASS",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ALLOC_PASS_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ALLOC_PASS_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ALLOC_PASS_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_PR_ALLOC_PASS_QW,
      ._desc = "Successful high priority CD allocations",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_HI_CD_ALLOC_FAIL",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ALLOC_FAIL_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ALLOC_FAIL_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ALLOC_FAIL_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ALLOC_FAIL_QW,
      ._desc = "Unsuccessful high priority CD allocations",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_HI_CD_ALLOC_PASS",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ALLOC_PASS_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ALLOC_PASS_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ALLOC_PASS_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_HI_CD_ALLOC_PASS_QW,
      ._desc = "Successful high priority CD allocations",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_LO_CD_ALLOC_FAIL",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ALLOC_FAIL_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ALLOC_FAIL_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ALLOC_FAIL_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ALLOC_FAIL_QW,
      ._desc = "Unsuccessful low priority CD allocations",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_LO_CD_ALLOC_PASS",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ALLOC_PASS_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ALLOC_PASS_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ALLOC_PASS_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_CNTR_LO_CD_ALLOC_PASS_QW,
      ._desc = "Successful low priority CD allocations",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_64",
      ._bpos = AR_NIC_DLA_MMR_RING_0_MID_DLA_UNUSED_81_64_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_MID_DLA_UNUSED_81_64_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_MMR_RING_0_MID_DLA_UNUSED_81_64_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_MID_DLA_UNUSED_81_64_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_mmr_ring_0_lo_dla_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_DLA_MMR_RING_0_LO_DLA_UNUSED_145_35_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_LO_DLA_UNUSED_145_35_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_LO_DLA_RSTDATA & AR_NIC_DLA_MMR_RING_0_LO_DLA_UNUSED_145_35_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_LO_DLA_UNUSED_145_35_QW,
      ._desc = "Forced 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_DLA_PI_OS_IRQ",
      ._bpos = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_PI_OS_IRQ_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_LO_DLA_RSTDATA & AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_PI_OS_IRQ_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_PI_OS_IRQ_QW,
      ._desc = "OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_DLA_LB_HSS_IRQ",
      ._bpos = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_LO_DLA_RSTDATA & AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_LB_HSS_IRQ_QW,
      ._desc = "HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_DLA_REQMON_RING_WRACK",
      ._bpos = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_REQMON_RING_WRACK_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_REQMON_RING_WRACK_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_LO_DLA_RSTDATA & AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_REQMON_RING_WRACK_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_REQMON_RING_WRACK_QW,
      ._desc = "MMR Write Acknowledgement",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_DLA_REQMON_RING_15_0",
      ._bpos = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_REQMON_RING_15_0_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_REQMON_RING_15_0_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_LO_DLA_RSTDATA & AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_REQMON_RING_15_0_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_LO_DLA_R_Q_DLA_REQMON_RING_15_0_QW,
      ._desc = "MMR Response Output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQMON_DLA_RING_15_0",
      ._bpos = AR_NIC_DLA_MMR_RING_0_LO_DLA_I_REQMON_DLA_RING_15_0_BP,
      ._mask = AR_NIC_DLA_MMR_RING_0_LO_DLA_I_REQMON_DLA_RING_15_0_MASK,
      ._rval = AR_NIC_DLA_MMR_RING_0_LO_DLA_RSTDATA & AR_NIC_DLA_MMR_RING_0_LO_DLA_I_REQMON_DLA_RING_15_0_MASK,
      ._index = AR_NIC_DLA_MMR_RING_0_LO_DLA_I_REQMON_DLA_RING_15_0_QW,
      ._desc = "MMR Request Input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_flg_1_hi_dla_detail[] = {
    { ._name = "UNUSED_145_83",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_HI_DLA_UNUSED_145_83_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_HI_DLA_UNUSED_145_83_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSTDATA_QW2 & AR_NIC_DLA_ERR_FLG_1_HI_DLA_UNUSED_145_83_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_HI_DLA_UNUSED_145_83_QW,
      ._desc = "Forced 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_flg_1_mid_dla_detail[] = {
    { ._name = "UNUSED_127_83",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_UNUSED_127_83_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_UNUSED_127_83_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_UNUSED_127_83_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_UNUSED_127_83_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FIFO_DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA1_MBE_QW,
      ._desc = "DLA FIFO data flit upper MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FIFO_DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA1_SBE_QW,
      ._desc = "DLA FIFO data flit upper SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FIFO_DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA0_MBE_QW,
      ._desc = "DLA FIFO data flit lower MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FIFO_DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_DATA0_SBE_QW,
      ._desc = "DLA FIFO data flit lower SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ALLOC_BOTH_ERR",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_BOTH_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_BOTH_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_BOTH_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_BOTH_ERR_QW,
      ._desc = "An AllocSSID packet with both CD and PR allocation bits set",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FMA_PKT_ERR",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FMA_PKT_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FMA_PKT_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_FMA_PKT_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FMA_PKT_ERR_QW,
      ._desc = "Set when an AllocSSID, SyncComplete, or DLAMARKER packet is received from FMA with an lstatus of  A_STATUS_FMA_UNCORRECTABLE or A_STATUS_DATA_ERR or with a packet data error of DATA0_MBE or DATA1_MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MARKER_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_MARKER_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_MARKER_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_MARKER_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_MARKER_RAM_MBE_QW,
      ._desc = "Descriptor status offset 0x10 multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MARKER_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_MARKER_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_MARKER_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_MARKER_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_MARKER_RAM_SBE_QW,
      ._desc = "Descriptor status offset 0x10 single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ALLOC_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_RAM_MBE_QW,
      ._desc = "Descriptor status offset 0x08 multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ALLOC_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_ALLOC_RAM_SBE_QW,
      ._desc = "Descriptor status offset 0x08 single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FIFO_OVERFLOW",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_OVERFLOW_QW,
      ._desc = "DLA FIFO overflow by hardware due to a hardware error or misconfigured credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "HDR_PERR",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_HDR_PERR_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_HDR_PERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_HDR_PERR_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_HDR_PERR_QW,
      ._desc = "Header with parity error received from FMA",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA1_MBE_QW,
      ._desc = "Upper data word from FMA multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA1_SBE_QW,
      ._desc = "Upper data word from FMA single bit error Info MMR A_NIC_DLA_ERR_INFO_PKT holds an additional information",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA0_MBE_QW,
      ._desc = "Lower data word from FMA multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_DATA0_SBE_QW,
      ._desc = "Lower data word from FMA single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FIFO_HDR_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_HDR_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_HDR_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_HDR_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_HDR_MBE_QW,
      ._desc = "Outgoing header ECC multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FIFO_HDR_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_HDR_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_HDR_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_HDR_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_FIFO_HDR_SBE_QW,
      ._desc = "Outgoing header ECC single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_64",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_MID_DLA_UNUSED_64_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_MID_DLA_UNUSED_64_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_ERR_FLG_1_MID_DLA_UNUSED_64_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_MID_DLA_UNUSED_64_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_flg_1_lo_dla_detail[] = {
    { ._name = "UNUSED_63_19",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_UNUSED_63_19_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_UNUSED_63_19_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_UNUSED_63_19_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_UNUSED_63_19_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FIFO_DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA1_MBE_QW,
      ._desc = "DLA FIFO data flit upper MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FIFO_DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA1_SBE_QW,
      ._desc = "DLA FIFO data flit upper SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FIFO_DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA0_MBE_QW,
      ._desc = "DLA FIFO data flit lower MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FIFO_DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_DATA0_SBE_QW,
      ._desc = "DLA FIFO data flit lower SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ALLOC_BOTH_ERR",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_BOTH_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_BOTH_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_BOTH_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_BOTH_ERR_QW,
      ._desc = "An AllocSSID packet with both CD and PR allocation bits set",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FMA_PKT_ERR",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FMA_PKT_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FMA_PKT_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FMA_PKT_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FMA_PKT_ERR_QW,
      ._desc = "Set when an AllocSSID, SyncComplete, or DLAMARKER packet is received from FMA with an lstatus of  A_STATUS_FMA_UNCORRECTABLE or A_STATUS_DATA_ERR or with a packet data error of DATA0_MBE or DATA1_MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MARKER_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_MARKER_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_MARKER_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_MARKER_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_MARKER_RAM_MBE_QW,
      ._desc = "Descriptor status offset 0x10 multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MARKER_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_MARKER_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_MARKER_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_MARKER_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_MARKER_RAM_SBE_QW,
      ._desc = "Descriptor status offset 0x10 single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ALLOC_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_RAM_MBE_QW,
      ._desc = "Descriptor status offset 0x08 multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ALLOC_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_ALLOC_RAM_SBE_QW,
      ._desc = "Descriptor status offset 0x08 single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FIFO_OVERFLOW",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_OVERFLOW_QW,
      ._desc = "DLA FIFO overflow by hardware due to a hardware error or misconfigured credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_HDR_PERR",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_HDR_PERR_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_HDR_PERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_HDR_PERR_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_HDR_PERR_QW,
      ._desc = "Header with parity error received from FMA",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA1_MBE_QW,
      ._desc = "Upper data word from FMA multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA1_SBE_QW,
      ._desc = "Upper data word from FMA single bit error Info MMR A_NIC_DLA_ERR_INFO_PKT holds an additional information",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA0_MBE_QW,
      ._desc = "Lower data word from FMA multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_DATA0_SBE_QW,
      ._desc = "Lower data word from FMA single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FIFO_HDR_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_HDR_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_HDR_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_HDR_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_HDR_MBE_QW,
      ._desc = "Outgoing header ECC multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FIFO_HDR_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_HDR_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_HDR_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_HDR_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_I_FIFO_HDR_SBE_QW,
      ._desc = "Outgoing header ECC single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_DLA_ERR_FLG_1_LO_DLA_UNUSED_0_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_1_LO_DLA_UNUSED_0_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA & AR_NIC_DLA_ERR_FLG_1_LO_DLA_UNUSED_0_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_1_LO_DLA_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_detail[] = {
    { ._name = "R_Q_FMA_DLA_REQ_SB_SG4",
      ._bpos = AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_R_Q_FMA_DLA_REQ_SB_SG4_BP,
      ._mask = AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_R_Q_FMA_DLA_REQ_SB_SG4_MASK,
      ._rval = AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSTDATA_QW2 & AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_R_Q_FMA_DLA_REQ_SB_SG4_MASK,
      ._index = AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_R_Q_FMA_DLA_REQ_SB_SG4_QW,
      ._desc = "FMA to DLA channel sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_FMA_DLA_REQ_FLIT_SG4",
      ._bpos = AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_BP,
      ._mask = AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_MASK,
      ._rval = AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSTDATA_QW2 & AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_MASK,
      ._index = AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_QW,
      ._desc = "FMA to DLA channel flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_detail[] = {
    { ._name = "R_Q_FMA_DLA_REQ_FLIT_SG4",
      ._bpos = AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_BP,
      ._mask = AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_MASK,
      ._rval = AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_MASK,
      ._index = AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_QW,
      ._desc = "FMA to DLA channel flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_fma_flit_sg_5_2_lo_dla_detail[] = {
    { ._name = "R_Q_FMA_DLA_REQ_FLIT_SG4",
      ._bpos = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_BP,
      ._mask = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_MASK,
      ._rval = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_RSTDATA & AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_MASK,
      ._index = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_R_Q_FMA_DLA_REQ_FLIT_SG4_QW,
      ._desc = "FMA to DLA channel flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_detail[] = {
    { ._name = "UNUSED_145_38",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_UNUSED_145_38_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_UNUSED_145_38_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSTDATA_QW2 & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_UNUSED_145_38_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_UNUSED_145_38_QW,
      ._desc = "Forced 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_detail[] = {
    { ._name = "UNUSED_145_38",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_UNUSED_145_38_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_UNUSED_145_38_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_UNUSED_145_38_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_UNUSED_145_38_QW,
      ._desc = "Forced 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_dla_op_and_result_sg_5_3_lo_dla_detail[] = {
    { ._name = "UNUSED_145_38",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_UNUSED_145_38_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_UNUSED_145_38_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_UNUSED_145_38_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_UNUSED_145_38_QW,
      ._desc = "Forced 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DESC_ALLOC_OVERFLOW_SG4",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_ALLOC_OVERFLOW_SG4_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_ALLOC_OVERFLOW_SG4_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_ALLOC_OVERFLOW_SG4_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_ALLOC_OVERFLOW_SG4_QW,
      ._desc = "Enqueue overflow for current allocation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_FMA_DLA_REQ_SB_SG4",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_FMA_DLA_REQ_SB_SG4_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_FMA_DLA_REQ_SB_SG4_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_FMA_DLA_REQ_SB_SG4_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_FMA_DLA_REQ_SB_SG4_QW,
      ._desc = "Request sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "N1B0_34",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_N1B0_34_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_N1B0_34_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_N1B0_34_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_N1B0_34_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DESC_CD_ACTIVE_SG4",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_CD_ACTIVE_SG4_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_CD_ACTIVE_SG4_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_CD_ACTIVE_SG4_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_CD_ACTIVE_SG4_QW,
      ._desc = "Controlled discard reservation active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DESC_PR_ACTIVE_SG4",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_PR_ACTIVE_SG4_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_PR_ACTIVE_SG4_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_PR_ACTIVE_SG4_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_PR_ACTIVE_SG4_QW,
      ._desc = "Persistent reservation active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DESC_HP_ACTIVE_SG4",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_HP_ACTIVE_SG4_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_HP_ACTIVE_SG4_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_HP_ACTIVE_SG4_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_HP_ACTIVE_SG4_QW,
      ._desc = "High priority CD reservation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DESC_TRANS_OVERFLOW_SG4",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_TRANS_OVERFLOW_SG4_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_TRANS_OVERFLOW_SG4_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_TRANS_OVERFLOW_SG4_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_TRANS_OVERFLOW_SG4_QW,
      ._desc = "Enqueue overflow for current transaction",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_TRANS_START_SG4_16",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_TRANS_START_SG4_16_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_TRANS_START_SG4_16_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_TRANS_START_SG4_16_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_TRANS_START_SG4_16_QW,
      ._desc = "Transaction start",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NO_ENQUEUE_SG4_16",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_NO_ENQUEUE_SG4_16_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_NO_ENQUEUE_SG4_16_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_NO_ENQUEUE_SG4_16_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_NO_ENQUEUE_SG4_16_QW,
      ._desc = "DLA operation only packet (not including marker)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DESC_DISCARD_SG4",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_DISCARD_SG4_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_DISCARD_SG4_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_DISCARD_SG4_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_DISCARD_SG4_QW,
      ._desc = "Discard flag set",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DLA_MARKER_SG4_16",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DLA_MARKER_SG4_16_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DLA_MARKER_SG4_16_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DLA_MARKER_SG4_16_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DLA_MARKER_SG4_16_QW,
      ._desc = "DLA marker packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_TRANS_END_SG4_16",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_TRANS_END_SG4_16_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_TRANS_END_SG4_16_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_TRANS_END_SG4_16_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_TRANS_END_SG4_16_QW,
      ._desc = "Transaction end",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DEALLOCATE_SG4_16",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DEALLOCATE_SG4_16_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DEALLOCATE_SG4_16_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DEALLOCATE_SG4_16_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DEALLOCATE_SG4_16_QW,
      ._desc = "Deallocate",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ALLOC_STAT_RESET_SG4_16",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_ALLOC_STAT_RESET_SG4_16_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_ALLOC_STAT_RESET_SG4_16_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_ALLOC_STAT_RESET_SG4_16_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_ALLOC_STAT_RESET_SG4_16_QW,
      ._desc = "Allocation status reset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DISCARD_RESET_SG4_16",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DISCARD_RESET_SG4_16_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DISCARD_RESET_SG4_16_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DISCARD_RESET_SG4_16_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DISCARD_RESET_SG4_16_QW,
      ._desc = "Discard reset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DESC_SG5",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_SG5_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_SG5_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_SG5_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_DESC_SG5_QW,
      ._desc = "Descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ENQ_REQUEST_SG5_0",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_ENQ_REQUEST_SG5_0_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_ENQ_REQUEST_SG5_0_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_ENQ_REQUEST_SG5_0_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_ENQ_REQUEST_SG5_0_QW,
      ._desc = "Packet goes to FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_FMA_DLA_REQ_COUNT_SG5",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_FMA_DLA_REQ_COUNT_SG5_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_FMA_DLA_REQ_COUNT_SG5_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_FMA_DLA_REQ_COUNT_SG5_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_Q_FMA_DLA_REQ_COUNT_SG5_QW,
      ._desc = "Packet half-flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NO_ENQUEUE_SG5",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_NO_ENQUEUE_SG5_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_NO_ENQUEUE_SG5_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_NO_ENQUEUE_SG5_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_NO_ENQUEUE_SG5_QW,
      ._desc = "DLA only packet (except marker)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_LO_CD_ENQ_SG5_0",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ENQ_SG5_0_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ENQ_SG5_0_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ENQ_SG5_0_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ENQ_SG5_0_QW,
      ._desc = "Low priority controlled discard packet enqueue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_HI_CD_ENQ_SG5_0",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ENQ_SG5_0_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ENQ_SG5_0_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ENQ_SG5_0_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ENQ_SG5_0_QW,
      ._desc = "High priority controlled discard packet enqueue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PR_ENQ_SG5_0",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ENQ_SG5_0_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ENQ_SG5_0_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ENQ_SG5_0_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ENQ_SG5_0_QW,
      ._desc = "Persistent reservation packet enqueue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_LO_CD_ALLOC_PASS",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ALLOC_PASS_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ALLOC_PASS_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ALLOC_PASS_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ALLOC_PASS_QW,
      ._desc = "Low priority controlled discard allocation successful",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_HI_CD_ALLOC_PASS",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ALLOC_PASS_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ALLOC_PASS_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ALLOC_PASS_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ALLOC_PASS_QW,
      ._desc = "High priority controlled discard allocation successful",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PR_ALLOC_PASS",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ALLOC_PASS_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ALLOC_PASS_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ALLOC_PASS_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ALLOC_PASS_QW,
      ._desc = "Persistent reservation allocation successful",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_LO_CD_ALLOC_FAIL",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ALLOC_FAIL_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ALLOC_FAIL_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ALLOC_FAIL_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_LO_CD_ALLOC_FAIL_QW,
      ._desc = "Low priority controlled discard allocation failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_HI_CD_ALLOC_FAIL",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ALLOC_FAIL_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ALLOC_FAIL_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ALLOC_FAIL_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_HI_CD_ALLOC_FAIL_QW,
      ._desc = "High priority controlled discard allocation failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PR_ALLOC_FAIL",
      ._bpos = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ALLOC_FAIL_BP,
      ._mask = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ALLOC_FAIL_MASK,
      ._rval = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ALLOC_FAIL_MASK,
      ._index = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_R_Q_PR_ALLOC_FAIL_QW,
      ._desc = "Persistent reservation allocation failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_detail[] = {
    { ._name = "R_Q_DLA_LM_REQ_SB",
      ._bpos = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_R_Q_DLA_LM_REQ_SB_BP,
      ._mask = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_R_Q_DLA_LM_REQ_SB_MASK,
      ._rval = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSTDATA_QW2 & AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_R_Q_DLA_LM_REQ_SB_MASK,
      ._index = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_R_Q_DLA_LM_REQ_SB_QW,
      ._desc = "FMA to DLA channel sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_DLA_LM_REQ_FLIT",
      ._bpos = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_R_Q_DLA_LM_REQ_FLIT_BP,
      ._mask = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_R_Q_DLA_LM_REQ_FLIT_MASK,
      ._rval = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSTDATA_QW2 & AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_R_Q_DLA_LM_REQ_FLIT_MASK,
      ._index = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_R_Q_DLA_LM_REQ_FLIT_QW,
      ._desc = "FMA to DLA channel flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_detail[] = {
    { ._name = "R_Q_DLA_LM_REQ_FLIT",
      ._bpos = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_R_Q_DLA_LM_REQ_FLIT_BP,
      ._mask = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_R_Q_DLA_LM_REQ_FLIT_MASK,
      ._rval = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_RSTDATA_QW1 & AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_R_Q_DLA_LM_REQ_FLIT_MASK,
      ._index = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_R_Q_DLA_LM_REQ_FLIT_QW,
      ._desc = "FMA to DLA channel flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_dla_packet_to_tarb_4_lo_dla_detail[] = {
    { ._name = "R_Q_DLA_LM_REQ_FLIT",
      ._bpos = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_R_Q_DLA_LM_REQ_FLIT_BP,
      ._mask = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_R_Q_DLA_LM_REQ_FLIT_MASK,
      ._rval = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_RSTDATA & AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_R_Q_DLA_LM_REQ_FLIT_MASK,
      ._index = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_R_Q_DLA_LM_REQ_FLIT_QW,
      ._desc = "FMA to DLA channel flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_max_detail[] = {
    { ._name = "MAX_CREDITS",
      ._bpos = AR_NIC_DLA_CFG_MAX_MAX_CREDITS_BP,
      ._mask = AR_NIC_DLA_CFG_MAX_MAX_CREDITS_MASK,
      ._rval = AR_NIC_DLA_CFG_MAX_RSTDATA & AR_NIC_DLA_CFG_MAX_MAX_CREDITS_MASK,
      ._index = AR_NIC_DLA_CFG_MAX_MAX_CREDITS_QW,
      ._desc = "Maximum credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_max_lo_cd_detail[] = {
    { ._name = "MAX_LO_CD_CREDITS",
      ._bpos = AR_NIC_DLA_CFG_MAX_LO_CD_MAX_LO_CD_CREDITS_BP,
      ._mask = AR_NIC_DLA_CFG_MAX_LO_CD_MAX_LO_CD_CREDITS_MASK,
      ._rval = AR_NIC_DLA_CFG_MAX_LO_CD_RSTDATA & AR_NIC_DLA_CFG_MAX_LO_CD_MAX_LO_CD_CREDITS_MASK,
      ._index = AR_NIC_DLA_CFG_MAX_LO_CD_MAX_LO_CD_CREDITS_QW,
      ._desc = "Maximum low priority controlled discard allowed credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_max_hi_cd_detail[] = {
    { ._name = "MAX_HI_CD_CREDITS",
      ._bpos = AR_NIC_DLA_CFG_MAX_HI_CD_MAX_HI_CD_CREDITS_BP,
      ._mask = AR_NIC_DLA_CFG_MAX_HI_CD_MAX_HI_CD_CREDITS_MASK,
      ._rval = AR_NIC_DLA_CFG_MAX_HI_CD_RSTDATA & AR_NIC_DLA_CFG_MAX_HI_CD_MAX_HI_CD_CREDITS_MASK,
      ._index = AR_NIC_DLA_CFG_MAX_HI_CD_MAX_HI_CD_CREDITS_QW,
      ._desc = "Maximum high priority controlled discard allowed credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_max_pr_detail[] = {
    { ._name = "MAX_PR_CREDITS",
      ._bpos = AR_NIC_DLA_CFG_MAX_PR_MAX_PR_CREDITS_BP,
      ._mask = AR_NIC_DLA_CFG_MAX_PR_MAX_PR_CREDITS_MASK,
      ._rval = AR_NIC_DLA_CFG_MAX_PR_RSTDATA & AR_NIC_DLA_CFG_MAX_PR_MAX_PR_CREDITS_MASK,
      ._index = AR_NIC_DLA_CFG_MAX_PR_MAX_PR_CREDITS_QW,
      ._desc = "Maximum persistent reservation credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_max_lo_cd_pr_detail[] = {
    { ._name = "MAX_LO_CD_PR_CREDITS",
      ._bpos = AR_NIC_DLA_CFG_MAX_LO_CD_PR_MAX_LO_CD_PR_CREDITS_BP,
      ._mask = AR_NIC_DLA_CFG_MAX_LO_CD_PR_MAX_LO_CD_PR_CREDITS_MASK,
      ._rval = AR_NIC_DLA_CFG_MAX_LO_CD_PR_RSTDATA & AR_NIC_DLA_CFG_MAX_LO_CD_PR_MAX_LO_CD_PR_CREDITS_MASK,
      ._index = AR_NIC_DLA_CFG_MAX_LO_CD_PR_MAX_LO_CD_PR_CREDITS_QW,
      ._desc = "Maximum low priority controlled discard and persistent reservation credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_max_lo_hi_cd_detail[] = {
    { ._name = "MAX_LO_HI_CD_CREDITS",
      ._bpos = AR_NIC_DLA_CFG_MAX_LO_HI_CD_MAX_LO_HI_CD_CREDITS_BP,
      ._mask = AR_NIC_DLA_CFG_MAX_LO_HI_CD_MAX_LO_HI_CD_CREDITS_MASK,
      ._rval = AR_NIC_DLA_CFG_MAX_LO_HI_CD_RSTDATA & AR_NIC_DLA_CFG_MAX_LO_HI_CD_MAX_LO_HI_CD_CREDITS_MASK,
      ._index = AR_NIC_DLA_CFG_MAX_LO_HI_CD_MAX_LO_HI_CD_CREDITS_QW,
      ._desc = "Maximum low and high priority controlled discard credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_max_hi_cd_pr_detail[] = {
    { ._name = "MAX_HI_CD_PR_CREDITS",
      ._bpos = AR_NIC_DLA_CFG_MAX_HI_CD_PR_MAX_HI_CD_PR_CREDITS_BP,
      ._mask = AR_NIC_DLA_CFG_MAX_HI_CD_PR_MAX_HI_CD_PR_CREDITS_MASK,
      ._rval = AR_NIC_DLA_CFG_MAX_HI_CD_PR_RSTDATA & AR_NIC_DLA_CFG_MAX_HI_CD_PR_MAX_HI_CD_PR_CREDITS_MASK,
      ._index = AR_NIC_DLA_CFG_MAX_HI_CD_PR_MAX_HI_CD_PR_CREDITS_QW,
      ._desc = "Maximum high priority controlled discard and persistent reservation credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_max_cd_alloc_detail[] = {
    { ._name = "MAX_CD_ALLOC_CREDITS",
      ._bpos = AR_NIC_DLA_CFG_MAX_CD_ALLOC_MAX_CD_ALLOC_CREDITS_BP,
      ._mask = AR_NIC_DLA_CFG_MAX_CD_ALLOC_MAX_CD_ALLOC_CREDITS_MASK,
      ._rval = AR_NIC_DLA_CFG_MAX_CD_ALLOC_RSTDATA & AR_NIC_DLA_CFG_MAX_CD_ALLOC_MAX_CD_ALLOC_CREDITS_MASK,
      ._index = AR_NIC_DLA_CFG_MAX_CD_ALLOC_MAX_CD_ALLOC_CREDITS_QW,
      ._desc = "Maximum controlled discard allocation credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_max_pr_alloc_detail[] = {
    { ._name = "MAX_PR_ALLOC_CREDITS",
      ._bpos = AR_NIC_DLA_CFG_MAX_PR_ALLOC_MAX_PR_ALLOC_CREDITS_BP,
      ._mask = AR_NIC_DLA_CFG_MAX_PR_ALLOC_MAX_PR_ALLOC_CREDITS_MASK,
      ._rval = AR_NIC_DLA_CFG_MAX_PR_ALLOC_RSTDATA & AR_NIC_DLA_CFG_MAX_PR_ALLOC_MAX_PR_ALLOC_CREDITS_MASK,
      ._index = AR_NIC_DLA_CFG_MAX_PR_ALLOC_MAX_PR_ALLOC_CREDITS_QW,
      ._desc = "Maximum persistent reservation allocation credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_sts_consumed_detail[] = {
    { ._name = "CONSUMED",
      ._bpos = AR_NIC_DLA_STS_CONSUMED_CONSUMED_BP,
      ._mask = AR_NIC_DLA_STS_CONSUMED_CONSUMED_MASK,
      ._rval = AR_NIC_DLA_STS_CONSUMED_RSTDATA & AR_NIC_DLA_STS_CONSUMED_CONSUMED_MASK,
      ._index = AR_NIC_DLA_STS_CONSUMED_CONSUMED_QW,
      ._desc = "Total FIFO credits currently in use",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_sts_consumed_lo_cd_detail[] = {
    { ._name = "LO_CD_CONSUMED",
      ._bpos = AR_NIC_DLA_STS_CONSUMED_LO_CD_LO_CD_CONSUMED_BP,
      ._mask = AR_NIC_DLA_STS_CONSUMED_LO_CD_LO_CD_CONSUMED_MASK,
      ._rval = AR_NIC_DLA_STS_CONSUMED_LO_CD_RSTDATA & AR_NIC_DLA_STS_CONSUMED_LO_CD_LO_CD_CONSUMED_MASK,
      ._index = AR_NIC_DLA_STS_CONSUMED_LO_CD_LO_CD_CONSUMED_QW,
      ._desc = "Count of FIFO credits currently used by low priority controlled discard reservations",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_sts_consumed_hi_cd_detail[] = {
    { ._name = "HI_CD_CONSUMED",
      ._bpos = AR_NIC_DLA_STS_CONSUMED_HI_CD_HI_CD_CONSUMED_BP,
      ._mask = AR_NIC_DLA_STS_CONSUMED_HI_CD_HI_CD_CONSUMED_MASK,
      ._rval = AR_NIC_DLA_STS_CONSUMED_HI_CD_RSTDATA & AR_NIC_DLA_STS_CONSUMED_HI_CD_HI_CD_CONSUMED_MASK,
      ._index = AR_NIC_DLA_STS_CONSUMED_HI_CD_HI_CD_CONSUMED_QW,
      ._desc = "Count of FIFO credits currently used for high priority controlled discard reservations",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_sts_consumed_pr_detail[] = {
    { ._name = "PR_CONSUMED",
      ._bpos = AR_NIC_DLA_STS_CONSUMED_PR_PR_CONSUMED_BP,
      ._mask = AR_NIC_DLA_STS_CONSUMED_PR_PR_CONSUMED_MASK,
      ._rval = AR_NIC_DLA_STS_CONSUMED_PR_RSTDATA & AR_NIC_DLA_STS_CONSUMED_PR_PR_CONSUMED_MASK,
      ._index = AR_NIC_DLA_STS_CONSUMED_PR_PR_CONSUMED_QW,
      ._desc = "Count of FIFO credits currently used for persistent reservations",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_sts_resvd_lo_cd_detail[] = {
    { ._name = "LO_CD_RESVD",
      ._bpos = AR_NIC_DLA_STS_RESVD_LO_CD_LO_CD_RESVD_BP,
      ._mask = AR_NIC_DLA_STS_RESVD_LO_CD_LO_CD_RESVD_MASK,
      ._rval = AR_NIC_DLA_STS_RESVD_LO_CD_RSTDATA & AR_NIC_DLA_STS_RESVD_LO_CD_LO_CD_RESVD_MASK,
      ._index = AR_NIC_DLA_STS_RESVD_LO_CD_LO_CD_RESVD_QW,
      ._desc = "Count of FIFO credits currently reserved for low priority controlled discard requests",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_sts_resvd_hi_cd_detail[] = {
    { ._name = "HI_CD_RESVD",
      ._bpos = AR_NIC_DLA_STS_RESVD_HI_CD_HI_CD_RESVD_BP,
      ._mask = AR_NIC_DLA_STS_RESVD_HI_CD_HI_CD_RESVD_MASK,
      ._rval = AR_NIC_DLA_STS_RESVD_HI_CD_RSTDATA & AR_NIC_DLA_STS_RESVD_HI_CD_HI_CD_RESVD_MASK,
      ._index = AR_NIC_DLA_STS_RESVD_HI_CD_HI_CD_RESVD_QW,
      ._desc = "Count of FIFO credits currently reserved for high priority controlled discard",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_sts_resvd_pr_detail[] = {
    { ._name = "PR_RESVD",
      ._bpos = AR_NIC_DLA_STS_RESVD_PR_PR_RESVD_BP,
      ._mask = AR_NIC_DLA_STS_RESVD_PR_PR_RESVD_MASK,
      ._rval = AR_NIC_DLA_STS_RESVD_PR_RSTDATA & AR_NIC_DLA_STS_RESVD_PR_PR_RESVD_MASK,
      ._index = AR_NIC_DLA_STS_RESVD_PR_PR_RESVD_QW,
      ._desc = "Count of FIFO credits currently reserved for persistent reservations",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_flg_detail[] = {
    { ._name = "FIFO_DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_FIFO_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_FIFO_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_FIFO_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_FIFO_DATA1_MBE_QW,
      ._desc = "DLA FIFO data flit upper MBE",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "FIFO_DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_FIFO_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_FIFO_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_FIFO_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_FIFO_DATA1_SBE_QW,
      ._desc = "DLA FIFO data flit upper SBE",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "FIFO_DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_FIFO_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_FIFO_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_FIFO_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_FIFO_DATA0_MBE_QW,
      ._desc = "DLA FIFO data flit lower MBE",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "FIFO_DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_FIFO_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_FIFO_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_FIFO_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_FIFO_DATA0_SBE_QW,
      ._desc = "DLA FIFO data flit lower SBE",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "ALLOC_BOTH_ERR",
      ._bpos = AR_NIC_DLA_ERR_FLG_ALLOC_BOTH_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_ALLOC_BOTH_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_ALLOC_BOTH_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_ALLOC_BOTH_ERR_QW,
      ._desc = "An AllocSSID packet with both CD and PR allocation bits set",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "FMA_PKT_ERR",
      ._bpos = AR_NIC_DLA_ERR_FLG_FMA_PKT_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_FMA_PKT_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_FMA_PKT_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_FMA_PKT_ERR_QW,
      ._desc = "Set when an AllocSSID, SyncComplete, or DLAMARKER packet is received from FMA with an lstatus of  A_STATUS_FMA_UNCORRECTABLE or A_STATUS_DATA_ERR or with a packet data error of DATA0_MBE or DATA1_MBE",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "MARKER_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_MARKER_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_MARKER_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_MARKER_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_MARKER_RAM_MBE_QW,
      ._desc = "Descriptor status offset 0x10 multiple bit error",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "MARKER_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_MARKER_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_MARKER_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_MARKER_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_MARKER_RAM_SBE_QW,
      ._desc = "Descriptor status offset 0x10 single bit error",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "ALLOC_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_ALLOC_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_ALLOC_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_ALLOC_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_ALLOC_RAM_MBE_QW,
      ._desc = "Descriptor status offset 0x08 multiple bit error",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "ALLOC_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_ALLOC_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_ALLOC_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_ALLOC_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_ALLOC_RAM_SBE_QW,
      ._desc = "Descriptor status offset 0x08 single bit error",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "FIFO_OVERFLOW",
      ._bpos = AR_NIC_DLA_ERR_FLG_FIFO_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_FIFO_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_FIFO_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_FIFO_OVERFLOW_QW,
      ._desc = "DLA FIFO overflow by hardware due to a hardware error or misconfigured credit count",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "HDR_PERR",
      ._bpos = AR_NIC_DLA_ERR_FLG_HDR_PERR_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_HDR_PERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_HDR_PERR_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_HDR_PERR_QW,
      ._desc = "Header with parity error received from FMA",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_DATA1_MBE_QW,
      ._desc = "Upper data word from FMA multiple bit error",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_DATA1_SBE_QW,
      ._desc = "Upper data word from FMA single bit error Info MMR A_NIC_DLA_ERR_INFO_PKT holds an additional information",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_DATA0_MBE_QW,
      ._desc = "Lower data word from FMA multiple bit error",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_DATA0_SBE_QW,
      ._desc = "Lower data word from FMA single bit error",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "FIFO_HDR_MBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_FIFO_HDR_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_FIFO_HDR_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_FIFO_HDR_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_FIFO_HDR_MBE_QW,
      ._desc = "Outgoing header ECC multiple bit error",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "FIFO_HDR_SBE",
      ._bpos = AR_NIC_DLA_ERR_FLG_FIFO_HDR_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_FIFO_HDR_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_FIFO_HDR_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_FIFO_HDR_SBE_QW,
      ._desc = "Outgoing header ECC single bit error",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_DLA_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_DLA_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_DLA_ERR_FLG_RSTDATA & AR_NIC_DLA_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_DLA_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Not written by hardware",
      ._type_bitmsk = 0x0000000000100001ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_clr_detail[] = {
    { ._name = "FIFO_DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_FIFO_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_FIFO_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_FIFO_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_FIFO_DATA1_MBE_QW,
      ._desc = "DLA FIFO data flit upper MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FIFO_DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_FIFO_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_FIFO_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_FIFO_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_FIFO_DATA1_SBE_QW,
      ._desc = "DLA FIFO data flit upper SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FIFO_DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_FIFO_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_FIFO_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_FIFO_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_FIFO_DATA0_MBE_QW,
      ._desc = "DLA FIFO data flit lower MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FIFO_DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_FIFO_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_FIFO_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_FIFO_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_FIFO_DATA0_SBE_QW,
      ._desc = "DLA FIFO data flit lower SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ALLOC_BOTH_ERR",
      ._bpos = AR_NIC_DLA_ERR_CLR_ALLOC_BOTH_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_ALLOC_BOTH_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_ALLOC_BOTH_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_ALLOC_BOTH_ERR_QW,
      ._desc = "An AllocSSID packet with both CD and PR allocation bits set",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FMA_PKT_ERR",
      ._bpos = AR_NIC_DLA_ERR_CLR_FMA_PKT_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_FMA_PKT_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_FMA_PKT_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_FMA_PKT_ERR_QW,
      ._desc = "Set when an AllocSSID, SyncComplete, or DLAMARKER packet is received from FMA with an lstatus of  A_STATUS_FMA_UNCORRECTABLE or A_STATUS_DATA_ERR or with a packet data error of DATA0_MBE or DATA1_MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MARKER_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_MARKER_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_MARKER_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_MARKER_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_MARKER_RAM_MBE_QW,
      ._desc = "Descriptor status offset 0x10 multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MARKER_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_MARKER_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_MARKER_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_MARKER_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_MARKER_RAM_SBE_QW,
      ._desc = "Descriptor status offset 0x10 single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ALLOC_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_ALLOC_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_ALLOC_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_ALLOC_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_ALLOC_RAM_MBE_QW,
      ._desc = "Descriptor status offset 0x08 multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ALLOC_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_ALLOC_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_ALLOC_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_ALLOC_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_ALLOC_RAM_SBE_QW,
      ._desc = "Descriptor status offset 0x08 single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FIFO_OVERFLOW",
      ._bpos = AR_NIC_DLA_ERR_CLR_FIFO_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_FIFO_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_FIFO_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_FIFO_OVERFLOW_QW,
      ._desc = "DLA FIFO overflow by hardware due to a hardware error or misconfigured credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "HDR_PERR",
      ._bpos = AR_NIC_DLA_ERR_CLR_HDR_PERR_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_HDR_PERR_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_HDR_PERR_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_HDR_PERR_QW,
      ._desc = "Header with parity error received from FMA",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_DATA1_MBE_QW,
      ._desc = "Upper data word from FMA multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_DATA1_SBE_QW,
      ._desc = "Upper data word from FMA single bit error Info MMR A_NIC_DLA_ERR_INFO_PKT holds an additional information",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_DATA0_MBE_QW,
      ._desc = "Lower data word from FMA multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_DATA0_SBE_QW,
      ._desc = "Lower data word from FMA single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FIFO_HDR_MBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_FIFO_HDR_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_FIFO_HDR_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_FIFO_HDR_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_FIFO_HDR_MBE_QW,
      ._desc = "Outgoing header ECC multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FIFO_HDR_SBE",
      ._bpos = AR_NIC_DLA_ERR_CLR_FIFO_HDR_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_FIFO_HDR_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_FIFO_HDR_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_FIFO_HDR_SBE_QW,
      ._desc = "Outgoing header ECC single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_DLA_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_DLA_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_DLA_ERR_CLR_RSTDATA & AR_NIC_DLA_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_DLA_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Not written by hardware",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_hss_msk_detail[] = {
    { ._name = "FIFO_DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA1_MBE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA1_SBE_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA0_MBE_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_FIFO_DATA0_SBE_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ALLOC_BOTH_ERR",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_ALLOC_BOTH_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_ALLOC_BOTH_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_ALLOC_BOTH_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_ALLOC_BOTH_ERR_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FMA_PKT_ERR",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_FMA_PKT_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_FMA_PKT_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_FMA_PKT_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_FMA_PKT_ERR_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MARKER_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_MARKER_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_MARKER_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_MARKER_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_MARKER_RAM_MBE_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MARKER_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_MARKER_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_MARKER_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_MARKER_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_MARKER_RAM_SBE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ALLOC_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_ALLOC_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_ALLOC_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_ALLOC_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_ALLOC_RAM_MBE_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ALLOC_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_ALLOC_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_ALLOC_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_ALLOC_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_ALLOC_RAM_SBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_OVERFLOW",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_FIFO_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_FIFO_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_FIFO_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_FIFO_OVERFLOW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "HDR_PERR",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_HDR_PERR_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_HDR_PERR_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_HDR_PERR_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_HDR_PERR_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_DATA1_MBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_DATA1_SBE_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_DATA0_MBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_DATA0_SBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_HDR_MBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_FIFO_HDR_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_FIFO_HDR_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_FIFO_HDR_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_FIFO_HDR_MBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_HDR_SBE",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_FIFO_HDR_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_FIFO_HDR_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_FIFO_HDR_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_FIFO_HDR_SBE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_DLA_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_DLA_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA & AR_NIC_DLA_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_DLA_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_os_msk_detail[] = {
    { ._name = "FIFO_DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA1_MBE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA1_SBE_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA0_MBE_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_FIFO_DATA0_SBE_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ALLOC_BOTH_ERR",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_ALLOC_BOTH_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_ALLOC_BOTH_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_ALLOC_BOTH_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_ALLOC_BOTH_ERR_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FMA_PKT_ERR",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_FMA_PKT_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_FMA_PKT_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_FMA_PKT_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_FMA_PKT_ERR_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MARKER_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_MARKER_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_MARKER_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_MARKER_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_MARKER_RAM_MBE_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MARKER_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_MARKER_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_MARKER_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_MARKER_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_MARKER_RAM_SBE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ALLOC_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_ALLOC_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_ALLOC_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_ALLOC_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_ALLOC_RAM_MBE_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ALLOC_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_ALLOC_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_ALLOC_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_ALLOC_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_ALLOC_RAM_SBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_OVERFLOW",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_FIFO_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_FIFO_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_FIFO_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_FIFO_OVERFLOW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "HDR_PERR",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_HDR_PERR_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_HDR_PERR_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_HDR_PERR_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_HDR_PERR_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_DATA1_MBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_DATA1_SBE_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_DATA0_MBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_DATA0_SBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_HDR_MBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_FIFO_HDR_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_FIFO_HDR_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_FIFO_HDR_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_FIFO_HDR_MBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_HDR_SBE",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_FIFO_HDR_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_FIFO_HDR_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_FIFO_HDR_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_FIFO_HDR_SBE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_DLA_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_DLA_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_DLA_ERR_OS_MSK_RSTDATA & AR_NIC_DLA_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_DLA_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_first_flg_detail[] = {
    { ._name = "FIFO_DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA1_MBE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA1_SBE_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA0_MBE_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_DATA0_SBE_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ALLOC_BOTH_ERR",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_BOTH_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_BOTH_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_BOTH_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_BOTH_ERR_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FMA_PKT_ERR",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_FMA_PKT_ERR_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_FMA_PKT_ERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_FMA_PKT_ERR_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_FMA_PKT_ERR_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MARKER_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_MARKER_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_MARKER_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_MARKER_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_MARKER_RAM_MBE_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MARKER_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_MARKER_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_MARKER_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_MARKER_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_MARKER_RAM_SBE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ALLOC_RAM_MBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_RAM_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_RAM_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_RAM_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_RAM_MBE_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ALLOC_RAM_SBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_RAM_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_RAM_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_RAM_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_ALLOC_RAM_SBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_OVERFLOW",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_OVERFLOW_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_OVERFLOW_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_FIFO_OVERFLOW_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_OVERFLOW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "HDR_PERR",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_HDR_PERR_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_HDR_PERR_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_HDR_PERR_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_HDR_PERR_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA1_MBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_DATA1_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_DATA1_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_DATA1_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_DATA1_MBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA1_SBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_DATA1_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_DATA1_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_DATA1_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_DATA1_SBE_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA0_MBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_DATA0_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_DATA0_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_DATA0_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_DATA0_MBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DATA0_SBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_DATA0_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_DATA0_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_DATA0_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_DATA0_SBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_HDR_MBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_HDR_MBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_HDR_MBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_FIFO_HDR_MBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_HDR_MBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FIFO_HDR_SBE",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_HDR_SBE_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_HDR_SBE_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_FIFO_HDR_SBE_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_FIFO_HDR_SBE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_DLA_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_DLA_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA & AR_NIC_DLA_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_DLA_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_info_pkt_detail[] = {
    { ._name = "PERR",
      ._bpos = AR_NIC_DLA_ERR_INFO_PKT_PERR_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_PKT_PERR_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_PKT_RSTDATA & AR_NIC_DLA_ERR_INFO_PKT_PERR_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_PKT_PERR_QW,
      ._desc = "Packet from FMA header parity error information",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DATA1_MBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_PKT_DATA1_MBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_PKT_DATA1_MBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_PKT_RSTDATA & AR_NIC_DLA_ERR_INFO_PKT_DATA1_MBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_PKT_DATA1_MBE_SYND_QW,
      ._desc = "Packet from FMA payload MBE syndrome, upper data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DATA1_SBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_PKT_DATA1_SBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_PKT_DATA1_SBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_PKT_RSTDATA & AR_NIC_DLA_ERR_INFO_PKT_DATA1_SBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_PKT_DATA1_SBE_SYND_QW,
      ._desc = "Packet from FMA payload SBE syndrome, upper data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DATA0_MBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_PKT_DATA0_MBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_PKT_DATA0_MBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_PKT_RSTDATA & AR_NIC_DLA_ERR_INFO_PKT_DATA0_MBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_PKT_DATA0_MBE_SYND_QW,
      ._desc = "Packet from FMA payload MBE syndrome, lower data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DATA0_SBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_PKT_DATA0_SBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_PKT_DATA0_SBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_PKT_RSTDATA & AR_NIC_DLA_ERR_INFO_PKT_DATA0_SBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_PKT_DATA0_SBE_SYND_QW,
      ._desc = "Packet from FMA payload SBE syndrome, lower data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_info_ram_detail[] = {
    { ._name = "MARKER_RAM_MBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM_MARKER_RAM_MBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM_MARKER_RAM_MBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM_MARKER_RAM_MBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM_MARKER_RAM_MBE_SYND_QW,
      ._desc = "Multiple bit error syndrome for marker RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MARKER_RAM_SBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM_MARKER_RAM_SBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM_MARKER_RAM_SBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM_MARKER_RAM_SBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM_MARKER_RAM_SBE_SYND_QW,
      ._desc = "Single bit error syndrome for marker RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ALLOC_RAM_MBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM_ALLOC_RAM_MBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM_ALLOC_RAM_MBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM_ALLOC_RAM_MBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM_ALLOC_RAM_MBE_SYND_QW,
      ._desc = "Multiple bit error syndrome for alloc status RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ALLOC_RAM_SBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM_ALLOC_RAM_SBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM_ALLOC_RAM_SBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM_ALLOC_RAM_SBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM_ALLOC_RAM_SBE_SYND_QW,
      ._desc = "Single bit error syndrome for alloc status RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "FIFO_MBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM_FIFO_MBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM_FIFO_MBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM_FIFO_MBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM_FIFO_MBE_SYND_QW,
      ._desc = "DLA FIFO packet header MBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "FIFO_SBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM_FIFO_SBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM_FIFO_SBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM_FIFO_SBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM_FIFO_SBE_SYND_QW,
      ._desc = "DLA FIFO packet header SBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_dbg_errinj_ram_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_ADDRESS_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_ADDRESS_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_ADDRESS_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_ADDRESS_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS_UP",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_CHECKBITS_UP_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_CHECKBITS_UP_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_CHECKBITS_UP_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_CHECKBITS_UP_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS_LO",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_CHECKBITS_LO_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_CHECKBITS_LO_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_CHECKBITS_LO_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_CHECKBITS_LO_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FIFO_DATA",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_FIFO_DATA_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_FIFO_DATA_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_FIFO_DATA_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_FIFO_DATA_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MARKER_RAM",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_MARKER_RAM_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_MARKER_RAM_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_MARKER_RAM_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_MARKER_RAM_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ALLOC_RAM",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_ALLOC_RAM_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_ALLOC_RAM_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_ALLOC_RAM_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_ALLOC_RAM_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FIFO_HDR",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_FIFO_HDR_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_FIFO_HDR_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_FIFO_HDR_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_FIFO_HDR_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_TRIGGERED_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_TRIGGERED_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_TRIGGERED_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_TRIGGERED_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_MODE_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_MODE_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_MODE_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_RAM_ENABLE_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_RAM_ENABLE_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_RAM_ENABLE_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_RAM_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_dbg_errinj_pkt_detail[] = {
    { ._name = "CHECKBITS_UP",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_PKT_CHECKBITS_UP_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_PKT_CHECKBITS_UP_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_PKT_CHECKBITS_UP_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_PKT_CHECKBITS_UP_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS_LO",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_PKT_CHECKBITS_LO_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_PKT_CHECKBITS_LO_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_PKT_CHECKBITS_LO_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_PKT_CHECKBITS_LO_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_PKT_PARITY_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_PKT_PARITY_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_PKT_PARITY_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_PKT_PARITY_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_PKT_TAIL_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_PKT_TAIL_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_PKT_TAIL_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_PKT_TAIL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_PKT_COUNT_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_PKT_COUNT_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_PKT_COUNT_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_PKT_COUNT_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_PKT_TRIGGERED_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_PKT_TRIGGERED_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_PKT_TRIGGERED_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_PKT_TRIGGERED_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_PKT_MODE_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_PKT_MODE_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_PKT_MODE_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_PKT_MODE_QW,
      ._desc = "Mode 0: Inject error in Nth flit of one packet Mode 1: Inject error in Nth flit of all packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_DLA_DBG_ERRINJ_PKT_ENABLE_BP,
      ._mask = AR_NIC_DLA_DBG_ERRINJ_PKT_ENABLE_MASK,
      ._rval = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTDATA & AR_NIC_DLA_DBG_ERRINJ_PKT_ENABLE_MASK,
      ._index = AR_NIC_DLA_DBG_ERRINJ_PKT_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_detail[] = {
    { ._name = "MRKR_BYPASS",
      ._bpos = AR_NIC_DLA_CFG_MRKR_BYPASS_BP,
      ._mask = AR_NIC_DLA_CFG_MRKR_BYPASS_MASK,
      ._rval = AR_NIC_DLA_CFG_RSTDATA & AR_NIC_DLA_CFG_MRKR_BYPASS_MASK,
      ._index = AR_NIC_DLA_CFG_MRKR_BYPASS_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BYPASS",
      ._bpos = AR_NIC_DLA_CFG_BYPASS_BP,
      ._mask = AR_NIC_DLA_CFG_BYPASS_MASK,
      ._rval = AR_NIC_DLA_CFG_RSTDATA & AR_NIC_DLA_CFG_BYPASS_MASK,
      ._index = AR_NIC_DLA_CFG_BYPASS_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARB_COUNT",
      ._bpos = AR_NIC_DLA_CFG_PARB_COUNT_BP,
      ._mask = AR_NIC_DLA_CFG_PARB_COUNT_MASK,
      ._rval = AR_NIC_DLA_CFG_RSTDATA & AR_NIC_DLA_CFG_PARB_COUNT_MASK,
      ._index = AR_NIC_DLA_CFG_PARB_COUNT_QW,
      ._desc = "PARB input buffer maximum credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CQ_COUNT",
      ._bpos = AR_NIC_DLA_CFG_CQ_COUNT_BP,
      ._mask = AR_NIC_DLA_CFG_CQ_COUNT_MASK,
      ._rval = AR_NIC_DLA_CFG_RSTDATA & AR_NIC_DLA_CFG_CQ_COUNT_MASK,
      ._index = AR_NIC_DLA_CFG_CQ_COUNT_QW,
      ._desc = "Completion queue maximum credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TARB_COUNT",
      ._bpos = AR_NIC_DLA_CFG_TARB_COUNT_BP,
      ._mask = AR_NIC_DLA_CFG_TARB_COUNT_MASK,
      ._rval = AR_NIC_DLA_CFG_RSTDATA & AR_NIC_DLA_CFG_TARB_COUNT_MASK,
      ._index = AR_NIC_DLA_CFG_TARB_COUNT_QW,
      ._desc = "TARB input buffer maximum credit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_alloc_status_adr_detail[] = {
    { ._name = "TPH",
      ._bpos = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_TPH_BP,
      ._mask = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_TPH_MASK,
      ._rval = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_RSTDATA & AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_TPH_MASK,
      ._index = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_TPH_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_TC_BP,
      ._mask = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_TC_MASK,
      ._rval = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_RSTDATA & AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_TC_MASK,
      ._index = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_TC_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "STAT_ADDR",
      ._bpos = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_STAT_ADDR_BP,
      ._mask = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_STAT_ADDR_MASK,
      ._rval = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_RSTDATA & AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_STAT_ADDR_MASK,
      ._index = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_STAT_ADDR_QW,
      ._desc = "Address for allocation status write",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_cfg_alloc_status_trig_detail[] = {
    { ._name = "COUNT",
      ._bpos = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_COUNT_BP,
      ._mask = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_COUNT_MASK,
      ._rval = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_RSTDATA & AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_COUNT_MASK,
      ._index = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_COUNT_QW,
      ._desc = "Count in clocks of when to trigger an allocation status write",
      ._type_bitmsk = 0x0000000000001001ull,
      ._access = "RW,HRO"
    },
    { ._name = "THRESHOLD",
      ._bpos = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_THRESHOLD_BP,
      ._mask = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_THRESHOLD_MASK,
      ._rval = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_RSTDATA & AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_THRESHOLD_MASK,
      ._index = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_THRESHOLD_QW,
      ._desc = "Consumed or reserved change count to trigger an allocation status write",
      ._type_bitmsk = 0x0000000000001001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_sts_alloc_cnt_detail[] = {
    { ._name = "ALLOC_COUNT",
      ._bpos = AR_NIC_DLA_STS_ALLOC_CNT_ALLOC_COUNT_BP,
      ._mask = AR_NIC_DLA_STS_ALLOC_CNT_ALLOC_COUNT_MASK,
      ._rval = AR_NIC_DLA_STS_ALLOC_CNT_RSTDATA & AR_NIC_DLA_STS_ALLOC_CNT_ALLOC_COUNT_MASK,
      ._index = AR_NIC_DLA_STS_ALLOC_CNT_ALLOC_COUNT_QW,
      ._desc = "Current active allocation count",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_sts_cqe_merge_cnt_detail[] = {
    { ._name = "MARKER",
      ._bpos = AR_NIC_DLA_STS_CQE_MERGE_CNT_MARKER_BP,
      ._mask = AR_NIC_DLA_STS_CQE_MERGE_CNT_MARKER_MASK,
      ._rval = AR_NIC_DLA_STS_CQE_MERGE_CNT_RSTDATA & AR_NIC_DLA_STS_CQE_MERGE_CNT_MARKER_MASK,
      ._index = AR_NIC_DLA_STS_CQE_MERGE_CNT_MARKER_QW,
      ._desc = "Count of merged marker completion queue events",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "ALLOC",
      ._bpos = AR_NIC_DLA_STS_CQE_MERGE_CNT_ALLOC_BP,
      ._mask = AR_NIC_DLA_STS_CQE_MERGE_CNT_ALLOC_MASK,
      ._rval = AR_NIC_DLA_STS_CQE_MERGE_CNT_RSTDATA & AR_NIC_DLA_STS_CQE_MERGE_CNT_ALLOC_MASK,
      ._index = AR_NIC_DLA_STS_CQE_MERGE_CNT_ALLOC_QW,
      ._desc = "Count of merged allocation status completion queue events",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_info_fma_pkt_detail[] = {
    { ._name = "SSID_CMD",
      ._bpos = AR_NIC_DLA_ERR_INFO_FMA_PKT_SSID_CMD_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_FMA_PKT_SSID_CMD_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_FMA_PKT_RSTDATA & AR_NIC_DLA_ERR_INFO_FMA_PKT_SSID_CMD_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_FMA_PKT_SSID_CMD_QW,
      ._desc = "SSID_CMD from dropped FMA packet with error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_DLA_ERR_INFO_FMA_PKT_PTAG_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_FMA_PKT_PTAG_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_FMA_PKT_RSTDATA & AR_NIC_DLA_ERR_INFO_FMA_PKT_PTAG_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_FMA_PKT_PTAG_QW,
      ._desc = "PTAG from dropped FMA packet with error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SSID_CH",
      ._bpos = AR_NIC_DLA_ERR_INFO_FMA_PKT_SSID_CH_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_FMA_PKT_SSID_CH_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_FMA_PKT_RSTDATA & AR_NIC_DLA_ERR_INFO_FMA_PKT_SSID_CH_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_FMA_PKT_SSID_CH_QW,
      ._desc = "SSID_CH from dropped FMA packet with error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_DLA_ERR_INFO_FMA_PKT_LSTATUS_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_FMA_PKT_LSTATUS_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_FMA_PKT_RSTDATA & AR_NIC_DLA_ERR_INFO_FMA_PKT_LSTATUS_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_FMA_PKT_LSTATUS_QW,
      ._desc = "LSTATUS from dropped FMA packet with error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_clear_detail[] = {
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_dla_err_info_ram1_detail[] = {
    { ._name = "DATA1_MBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM1_DATA1_MBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM1_DATA1_MBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM1_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM1_DATA1_MBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM1_DATA1_MBE_SYND_QW,
      ._desc = "DLA FIFO MBE syndrome, upper data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DATA1_SBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM1_DATA1_SBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM1_DATA1_SBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM1_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM1_DATA1_SBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM1_DATA1_SBE_SYND_QW,
      ._desc = "DLA FIFO SBE syndrome, upper data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DATA0_MBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM1_DATA0_MBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM1_DATA0_MBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM1_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM1_DATA0_MBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM1_DATA0_MBE_SYND_QW,
      ._desc = "DLA FIFO MBE syndrome, lower data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DATA0_SBE_SYND",
      ._bpos = AR_NIC_DLA_ERR_INFO_RAM1_DATA0_SBE_SYND_BP,
      ._mask = AR_NIC_DLA_ERR_INFO_RAM1_DATA0_SBE_SYND_MASK,
      ._rval = AR_NIC_DLA_ERR_INFO_RAM1_RSTDATA & AR_NIC_DLA_ERR_INFO_RAM1_DATA0_SBE_SYND_MASK,
      ._index = AR_NIC_DLA_ERR_INFO_RAM1_DATA0_SBE_SYND_QW,
      ._desc = "DLA FIFO SBE syndrome, lower data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR DLA DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_dla_desc_status_rval[3] = {
	AR_NIC_DLA_DESC_STATUS_RSTDATA_QW0,
	AR_NIC_DLA_DESC_STATUS_RSTDATA_QW1,
	AR_NIC_DLA_DESC_STATUS_RSTDATA_QW2
};
static const uint64_t __ar_nic_dla_desc_status_rmsk[3] = {
	AR_NIC_DLA_DESC_STATUS_RSTMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_RSTMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_RSTMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_wrmsk[3] = {
	AR_NIC_DLA_DESC_STATUS_WRTMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_WRTMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_WRTMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_rdmsk[3] = {
	AR_NIC_DLA_DESC_STATUS_RDMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_RDMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_RDMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_xsmsk[3] = {
	AR_NIC_DLA_DESC_STATUS_XSMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_XSMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_XSMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_wsemsk[3] = {
	AR_NIC_DLA_DESC_STATUS_WSEMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_WSEMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_WSEMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_rsemsk[3] = {
	AR_NIC_DLA_DESC_STATUS_RSEMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_RSEMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_RSEMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_w1smsk[3] = {
	AR_NIC_DLA_DESC_STATUS_W1SMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_W1SMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_W1SMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_w1cmsk[3] = {
	AR_NIC_DLA_DESC_STATUS_W1CMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_W1CMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_W1CMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_wrstmsk[3] = {
	AR_NIC_DLA_DESC_STATUS_WRSTMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_WRSTMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_WRSTMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_hwwmsk[3] = {
	AR_NIC_DLA_DESC_STATUS_HWWMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_HWWMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_HWWMASK_QW2
};
static const uint64_t __ar_nic_dla_desc_status_hwrmsk[3] = {
	AR_NIC_DLA_DESC_STATUS_HWRMASK_QW0,
	AR_NIC_DLA_DESC_STATUS_HWRMASK_QW1,
	AR_NIC_DLA_DESC_STATUS_HWRMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_rval[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RSTDATA_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RSTDATA_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RSTDATA_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_rmsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RSTMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RSTMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RSTMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_wrmsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_WRTMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_WRTMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_WRTMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_rdmsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RDMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RDMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RDMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_xsmsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_XSMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_XSMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_XSMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_wsemsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_WSEMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_WSEMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_WSEMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_rsemsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RSEMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RSEMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_RSEMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_w1smsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_W1SMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_W1SMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_W1SMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_w1cmsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_W1CMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_W1CMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_W1CMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_wrstmsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_WRSTMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_WRSTMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_hwwmsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_HWWMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_HWWMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_HWWMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_hi_dla_hwrmsk[3] = {
	AR_NIC_DLA_MMR_RING_0_HI_DLA_HWRMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_HWRMASK_QW1,
	AR_NIC_DLA_MMR_RING_0_HI_DLA_HWRMASK_QW2
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_rval[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTDATA_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_rmsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_RSTMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_wrmsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_WRTMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_WRTMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_rdmsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_RDMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_RDMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_xsmsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_XSMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_XSMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_wsemsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_WSEMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_WSEMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_rsemsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_RSEMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_RSEMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_w1smsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_W1SMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_W1SMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_w1cmsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_W1CMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_W1CMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_wrstmsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_WRSTMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_hwwmsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_HWWMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_HWWMASK_QW1
};
static const uint64_t __ar_nic_dla_mmr_ring_0_mid_dla_hwrmsk[2] = {
	AR_NIC_DLA_MMR_RING_0_MID_DLA_HWRMASK_QW0,
	AR_NIC_DLA_MMR_RING_0_MID_DLA_HWRMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_rval[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSTDATA_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSTDATA_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSTDATA_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_rmsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSTMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSTMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSTMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_wrmsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_WRTMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_WRTMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_WRTMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_rdmsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RDMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RDMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RDMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_xsmsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_XSMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_XSMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_XSMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_wsemsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_WSEMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_WSEMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_WSEMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_rsemsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSEMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSEMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_RSEMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_w1smsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_W1SMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_W1SMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_W1SMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_w1cmsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_W1CMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_W1CMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_W1CMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_wrstmsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_WRSTMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_WRSTMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_hwwmsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_HWWMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_HWWMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_HWWMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_hi_dla_hwrmsk[3] = {
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_HWRMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_HWRMASK_QW1,
	AR_NIC_DLA_ERR_FLG_1_HI_DLA_HWRMASK_QW2
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_rval[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTDATA_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_rmsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSTMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_wrmsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_WRTMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_WRTMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_rdmsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_RDMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_RDMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_xsmsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_XSMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_XSMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_wsemsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_WSEMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_WSEMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_rsemsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSEMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_RSEMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_w1smsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_W1SMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_W1SMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_w1cmsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_W1CMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_W1CMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_wrstmsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_WRSTMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_hwwmsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_HWWMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_HWWMASK_QW1
};
static const uint64_t __ar_nic_dla_err_flg_1_mid_dla_hwrmsk[2] = {
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_HWRMASK_QW0,
	AR_NIC_DLA_ERR_FLG_1_MID_DLA_HWRMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_rval[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSTDATA_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSTDATA_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSTDATA_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_rmsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSTMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSTMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSTMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_wrmsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_WRTMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_WRTMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_WRTMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_rdmsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RDMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RDMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RDMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_xsmsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_XSMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_XSMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_XSMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_wsemsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_WSEMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_WSEMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_WSEMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_rsemsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSEMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSEMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_RSEMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_w1smsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_W1SMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_W1SMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_W1SMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_w1cmsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_W1CMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_W1CMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_W1CMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_wrstmsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_WRSTMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_WRSTMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_hwwmsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_HWWMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_HWWMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_HWWMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla_hwrmsk[3] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_HWRMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_HWRMASK_QW1,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA_HWRMASK_QW2
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_rval[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_RSTDATA_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_RSTDATA_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_rmsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_RSTMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_RSTMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_wrmsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_WRTMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_WRTMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_rdmsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_RDMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_RDMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_xsmsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_XSMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_XSMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_wsemsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_WSEMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_WSEMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_rsemsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_RSEMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_RSEMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_w1smsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_W1SMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_W1SMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_w1cmsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_W1CMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_W1CMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_wrstmsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_WRSTMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_hwwmsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_HWWMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_HWWMASK_QW1
};
static const uint64_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla_hwrmsk[2] = {
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_HWRMASK_QW0,
	AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA_HWRMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_rval[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSTDATA_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSTDATA_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSTDATA_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_rmsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSTMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSTMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSTMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_wrmsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_WRTMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_WRTMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_WRTMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_rdmsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RDMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RDMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RDMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_xsmsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_XSMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_XSMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_XSMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_wsemsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_WSEMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_WSEMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_WSEMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_rsemsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSEMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSEMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_RSEMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_w1smsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_W1SMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_W1SMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_W1SMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_w1cmsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_W1CMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_W1CMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_W1CMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_wrstmsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_WRSTMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_WRSTMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_hwwmsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_HWWMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_HWWMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_HWWMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_hwrmsk[3] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_HWRMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_HWRMASK_QW1,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA_HWRMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_rval[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_RSTDATA_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_RSTDATA_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_rmsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_RSTMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_RSTMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_wrmsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_WRTMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_WRTMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_rdmsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_RDMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_RDMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_xsmsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_XSMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_XSMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_wsemsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_WSEMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_WSEMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_rsemsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_RSEMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_RSEMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_w1smsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_W1SMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_W1SMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_w1cmsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_W1CMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_W1CMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_wrstmsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_WRSTMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_hwwmsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_HWWMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_HWWMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_hwrmsk[2] = {
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_HWRMASK_QW0,
	AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA_HWRMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_rval[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSTDATA_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSTDATA_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSTDATA_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_rmsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSTMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSTMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSTMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_wrmsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_WRTMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_WRTMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_WRTMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_rdmsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RDMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RDMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RDMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_xsmsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_XSMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_XSMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_XSMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_wsemsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_WSEMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_WSEMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_WSEMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_rsemsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSEMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSEMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_RSEMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_w1smsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_W1SMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_W1SMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_W1SMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_w1cmsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_W1CMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_W1CMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_W1CMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_wrstmsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_WRSTMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_WRSTMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_hwwmsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_HWWMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_HWWMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_HWWMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_hwrmsk[3] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_HWRMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_HWRMASK_QW1,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA_HWRMASK_QW2
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_rval[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_RSTDATA_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_RSTDATA_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_rmsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_RSTMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_RSTMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_wrmsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_WRTMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_WRTMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_rdmsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_RDMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_RDMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_xsmsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_XSMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_XSMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_wsemsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_WSEMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_WSEMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_rsemsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_RSEMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_RSEMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_w1smsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_W1SMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_W1SMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_w1cmsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_W1CMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_W1CMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_wrstmsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_WRSTMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_WRSTMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_hwwmsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_HWWMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_HWWMASK_QW1
};
static const uint64_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_hwrmsk[2] = {
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_HWRMASK_QW0,
	AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA_HWRMASK_QW1
};

/*
 *  AR DLA MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_dla_desc_status = {
    ._name = "AR_NIC_DLA_DESC_STATUS",
    ._addr = AR_NIC_DLA_DESC_STATUS,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_desc_status_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_desc_status_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 32,
    ._depth = 128,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_dla_desc_status_detail
};
static const cmmr_br_t __ar_nic_dla_mmr_ring_0_hi_dla = {
    ._name = "AR_NIC_DLA_MMR_RING_0_HI_DLA",
    ._addr = AR_NIC_DLA_MMR_RING_0_HI_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_hi_dla_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_mmr_ring_0_hi_dla_detail
};
static const cmmr_br_t __ar_nic_dla_mmr_ring_0_mid_dla = {
    ._name = "AR_NIC_DLA_MMR_RING_0_MID_DLA",
    ._addr = AR_NIC_DLA_MMR_RING_0_MID_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_mmr_ring_0_mid_dla_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_mmr_ring_0_mid_dla_detail
};
static const cmmr_br_t __ar_nic_dla_mmr_ring_0_lo_dla = {
    ._name = "AR_NIC_DLA_MMR_RING_0_LO_DLA",
    ._addr = AR_NIC_DLA_MMR_RING_0_LO_DLA,
    ._rval.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_MMR_RING_0_LO_DLA_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_mmr_ring_0_lo_dla_detail
};
static const cmmr_br_t __ar_nic_dla_err_flg_1_hi_dla = {
    ._name = "AR_NIC_DLA_ERR_FLG_1_HI_DLA",
    ._addr = AR_NIC_DLA_ERR_FLG_1_HI_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_hi_dla_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_err_flg_1_hi_dla_detail
};
static const cmmr_br_t __ar_nic_dla_err_flg_1_mid_dla = {
    ._name = "AR_NIC_DLA_ERR_FLG_1_MID_DLA",
    ._addr = AR_NIC_DLA_ERR_FLG_1_MID_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_err_flg_1_mid_dla_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_err_flg_1_mid_dla_detail
};
static const cmmr_br_t __ar_nic_dla_err_flg_1_lo_dla = {
    ._name = "AR_NIC_DLA_ERR_FLG_1_LO_DLA",
    ._addr = AR_NIC_DLA_ERR_FLG_1_LO_DLA,
    ._rval.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_FLG_1_LO_DLA_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_err_flg_1_lo_dla_detail
};
static const cmmr_br_t __ar_nic_dla_fma_flit_sg_5_2_hi_dla = {
    ._name = "AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA",
    ._addr = AR_NIC_DLA_FMA_FLIT_SG_5_2_HI_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_hi_dla_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_fma_flit_sg_5_2_hi_dla_detail
};
static const cmmr_br_t __ar_nic_dla_fma_flit_sg_5_2_mid_dla = {
    ._name = "AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA",
    ._addr = AR_NIC_DLA_FMA_FLIT_SG_5_2_MID_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_fma_flit_sg_5_2_mid_dla_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_fma_flit_sg_5_2_mid_dla_detail
};
static const cmmr_br_t __ar_nic_dla_fma_flit_sg_5_2_lo_dla = {
    ._name = "AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA",
    ._addr = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA,
    ._rval.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_FMA_FLIT_SG_5_2_LO_DLA_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_fma_flit_sg_5_2_lo_dla_detail
};
static const cmmr_br_t __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla = {
    ._name = "AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA",
    ._addr = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_HI_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla_detail
};
static const cmmr_br_t __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla = {
    ._name = "AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA",
    ._addr = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_MID_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla_detail
};
static const cmmr_br_t __ar_nic_dla_dla_op_and_result_sg_5_3_lo_dla = {
    ._name = "AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA",
    ._addr = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA,
    ._rval.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_DLA_OP_AND_RESULT_SG_5_3_LO_DLA_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_dla_op_and_result_sg_5_3_lo_dla_detail
};
static const cmmr_br_t __ar_nic_dla_dla_packet_to_tarb_4_hi_dla = {
    ._name = "AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA",
    ._addr = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_HI_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_hi_dla_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_dla_packet_to_tarb_4_hi_dla_detail
};
static const cmmr_br_t __ar_nic_dla_dla_packet_to_tarb_4_mid_dla = {
    ._name = "AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA",
    ._addr = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_MID_DLA,
    ._rval.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_dla_dla_packet_to_tarb_4_mid_dla_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_dla_packet_to_tarb_4_mid_dla_detail
};
static const cmmr_br_t __ar_nic_dla_dla_packet_to_tarb_4_lo_dla = {
    ._name = "AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA",
    ._addr = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA,
    ._rval.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_DLA_PACKET_TO_TARB_4_LO_DLA_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_dla_packet_to_tarb_4_lo_dla_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_max = {
    ._name = "AR_NIC_DLA_CFG_MAX",
    ._addr = AR_NIC_DLA_CFG_MAX,
    ._rval.val = AR_NIC_DLA_CFG_MAX_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_MAX_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_MAX_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_MAX_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_MAX_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_MAX_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_MAX_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_MAX_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_MAX_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_MAX_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_MAX_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_MAX_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_max_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_max_lo_cd = {
    ._name = "AR_NIC_DLA_CFG_MAX_LO_CD",
    ._addr = AR_NIC_DLA_CFG_MAX_LO_CD,
    ._rval.val = AR_NIC_DLA_CFG_MAX_LO_CD_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_max_lo_cd_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_max_hi_cd = {
    ._name = "AR_NIC_DLA_CFG_MAX_HI_CD",
    ._addr = AR_NIC_DLA_CFG_MAX_HI_CD,
    ._rval.val = AR_NIC_DLA_CFG_MAX_HI_CD_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_max_hi_cd_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_max_pr = {
    ._name = "AR_NIC_DLA_CFG_MAX_PR",
    ._addr = AR_NIC_DLA_CFG_MAX_PR,
    ._rval.val = AR_NIC_DLA_CFG_MAX_PR_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_MAX_PR_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_MAX_PR_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_MAX_PR_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_MAX_PR_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_MAX_PR_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_MAX_PR_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_MAX_PR_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_MAX_PR_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_MAX_PR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_MAX_PR_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_MAX_PR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_max_pr_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_max_lo_cd_pr = {
    ._name = "AR_NIC_DLA_CFG_MAX_LO_CD_PR",
    ._addr = AR_NIC_DLA_CFG_MAX_LO_CD_PR,
    ._rval.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_MAX_LO_CD_PR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_max_lo_cd_pr_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_max_lo_hi_cd = {
    ._name = "AR_NIC_DLA_CFG_MAX_LO_HI_CD",
    ._addr = AR_NIC_DLA_CFG_MAX_LO_HI_CD,
    ._rval.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_MAX_LO_HI_CD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_max_lo_hi_cd_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_max_hi_cd_pr = {
    ._name = "AR_NIC_DLA_CFG_MAX_HI_CD_PR",
    ._addr = AR_NIC_DLA_CFG_MAX_HI_CD_PR,
    ._rval.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_MAX_HI_CD_PR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_max_hi_cd_pr_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_max_cd_alloc = {
    ._name = "AR_NIC_DLA_CFG_MAX_CD_ALLOC",
    ._addr = AR_NIC_DLA_CFG_MAX_CD_ALLOC,
    ._rval.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_MAX_CD_ALLOC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_max_cd_alloc_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_max_pr_alloc = {
    ._name = "AR_NIC_DLA_CFG_MAX_PR_ALLOC",
    ._addr = AR_NIC_DLA_CFG_MAX_PR_ALLOC,
    ._rval.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_MAX_PR_ALLOC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_max_pr_alloc_detail
};
static const cmmr_br_t __ar_nic_dla_sts_consumed = {
    ._name = "AR_NIC_DLA_STS_CONSUMED",
    ._addr = AR_NIC_DLA_STS_CONSUMED,
    ._rval.val = AR_NIC_DLA_STS_CONSUMED_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_STS_CONSUMED_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_STS_CONSUMED_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_STS_CONSUMED_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_STS_CONSUMED_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_STS_CONSUMED_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_STS_CONSUMED_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_STS_CONSUMED_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_STS_CONSUMED_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_STS_CONSUMED_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_STS_CONSUMED_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_STS_CONSUMED_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_sts_consumed_detail
};
static const cmmr_br_t __ar_nic_dla_sts_consumed_lo_cd = {
    ._name = "AR_NIC_DLA_STS_CONSUMED_LO_CD",
    ._addr = AR_NIC_DLA_STS_CONSUMED_LO_CD,
    ._rval.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_STS_CONSUMED_LO_CD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_sts_consumed_lo_cd_detail
};
static const cmmr_br_t __ar_nic_dla_sts_consumed_hi_cd = {
    ._name = "AR_NIC_DLA_STS_CONSUMED_HI_CD",
    ._addr = AR_NIC_DLA_STS_CONSUMED_HI_CD,
    ._rval.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_STS_CONSUMED_HI_CD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_sts_consumed_hi_cd_detail
};
static const cmmr_br_t __ar_nic_dla_sts_consumed_pr = {
    ._name = "AR_NIC_DLA_STS_CONSUMED_PR",
    ._addr = AR_NIC_DLA_STS_CONSUMED_PR,
    ._rval.val = AR_NIC_DLA_STS_CONSUMED_PR_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_STS_CONSUMED_PR_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_STS_CONSUMED_PR_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_STS_CONSUMED_PR_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_STS_CONSUMED_PR_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_STS_CONSUMED_PR_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_STS_CONSUMED_PR_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_STS_CONSUMED_PR_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_STS_CONSUMED_PR_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_STS_CONSUMED_PR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_STS_CONSUMED_PR_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_STS_CONSUMED_PR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_sts_consumed_pr_detail
};
static const cmmr_br_t __ar_nic_dla_sts_resvd_lo_cd = {
    ._name = "AR_NIC_DLA_STS_RESVD_LO_CD",
    ._addr = AR_NIC_DLA_STS_RESVD_LO_CD,
    ._rval.val = AR_NIC_DLA_STS_RESVD_LO_CD_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_STS_RESVD_LO_CD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_sts_resvd_lo_cd_detail
};
static const cmmr_br_t __ar_nic_dla_sts_resvd_hi_cd = {
    ._name = "AR_NIC_DLA_STS_RESVD_HI_CD",
    ._addr = AR_NIC_DLA_STS_RESVD_HI_CD,
    ._rval.val = AR_NIC_DLA_STS_RESVD_HI_CD_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_STS_RESVD_HI_CD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_sts_resvd_hi_cd_detail
};
static const cmmr_br_t __ar_nic_dla_sts_resvd_pr = {
    ._name = "AR_NIC_DLA_STS_RESVD_PR",
    ._addr = AR_NIC_DLA_STS_RESVD_PR,
    ._rval.val = AR_NIC_DLA_STS_RESVD_PR_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_STS_RESVD_PR_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_STS_RESVD_PR_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_STS_RESVD_PR_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_STS_RESVD_PR_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_STS_RESVD_PR_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_STS_RESVD_PR_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_STS_RESVD_PR_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_STS_RESVD_PR_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_STS_RESVD_PR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_STS_RESVD_PR_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_STS_RESVD_PR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_sts_resvd_pr_detail
};
static const cmmr_br_t __ar_nic_dla_err_flg = {
    ._name = "AR_NIC_DLA_ERR_FLG",
    ._addr = AR_NIC_DLA_ERR_FLG,
    ._rval.val = AR_NIC_DLA_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x000000000034c011ull,
    ._info = __ar_nic_dla_err_flg_detail
};
static const cmmr_br_t __ar_nic_dla_err_clr = {
    ._name = "AR_NIC_DLA_ERR_CLR",
    ._addr = AR_NIC_DLA_ERR_CLR,
    ._rval.val = AR_NIC_DLA_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000021ull,
    ._info = __ar_nic_dla_err_clr_detail
};
static const cmmr_br_t __ar_nic_dla_err_hss_msk = {
    ._name = "AR_NIC_DLA_ERR_HSS_MSK",
    ._addr = AR_NIC_DLA_ERR_HSS_MSK,
    ._rval.val = AR_NIC_DLA_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000041ull,
    ._info = __ar_nic_dla_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_dla_err_os_msk = {
    ._name = "AR_NIC_DLA_ERR_OS_MSK",
    ._addr = AR_NIC_DLA_ERR_OS_MSK,
    ._rval.val = AR_NIC_DLA_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000081ull,
    ._info = __ar_nic_dla_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_dla_err_first_flg = {
    ._name = "AR_NIC_DLA_ERR_FIRST_FLG",
    ._addr = AR_NIC_DLA_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_DLA_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000401ull,
    ._info = __ar_nic_dla_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_dla_err_info_pkt = {
    ._name = "AR_NIC_DLA_ERR_INFO_PKT",
    ._addr = AR_NIC_DLA_ERR_INFO_PKT,
    ._rval.val = AR_NIC_DLA_ERR_INFO_PKT_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_INFO_PKT_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_INFO_PKT_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_INFO_PKT_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_INFO_PKT_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_INFO_PKT_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_INFO_PKT_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_INFO_PKT_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_INFO_PKT_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_INFO_PKT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_INFO_PKT_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_INFO_PKT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_err_info_pkt_detail
};
static const cmmr_br_t __ar_nic_dla_err_info_ram = {
    ._name = "AR_NIC_DLA_ERR_INFO_RAM",
    ._addr = AR_NIC_DLA_ERR_INFO_RAM,
    ._rval.val = AR_NIC_DLA_ERR_INFO_RAM_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_INFO_RAM_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_INFO_RAM_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_INFO_RAM_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_INFO_RAM_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_INFO_RAM_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_INFO_RAM_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_INFO_RAM_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_INFO_RAM_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_INFO_RAM_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_INFO_RAM_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_INFO_RAM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_err_info_ram_detail
};
static const cmmr_br_t __ar_nic_dla_dbg_errinj_ram = {
    ._name = "AR_NIC_DLA_DBG_ERRINJ_RAM",
    ._addr = AR_NIC_DLA_DBG_ERRINJ_RAM,
    ._rval.val = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_DBG_ERRINJ_RAM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_dla_dbg_errinj_ram_detail
};
static const cmmr_br_t __ar_nic_dla_dbg_errinj_pkt = {
    ._name = "AR_NIC_DLA_DBG_ERRINJ_PKT",
    ._addr = AR_NIC_DLA_DBG_ERRINJ_PKT,
    ._rval.val = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_DBG_ERRINJ_PKT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_dla_dbg_errinj_pkt_detail
};
static const cmmr_br_t __ar_nic_dla_cfg = {
    ._name = "AR_NIC_DLA_CFG",
    ._addr = AR_NIC_DLA_CFG,
    ._rval.val = AR_NIC_DLA_CFG_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_dla_cfg_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_alloc_status_adr = {
    ._name = "AR_NIC_DLA_CFG_ALLOC_STATUS_ADR",
    ._addr = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR,
    ._rval.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_ADR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_cfg_alloc_status_adr_detail
};
static const cmmr_br_t __ar_nic_dla_cfg_alloc_status_trig = {
    ._name = "AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG",
    ._addr = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG,
    ._rval.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CFG_ALLOC_STATUS_TRIG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_dla_cfg_alloc_status_trig_detail
};
static const cmmr_br_t __ar_nic_dla_sts_alloc_cnt = {
    ._name = "AR_NIC_DLA_STS_ALLOC_CNT",
    ._addr = AR_NIC_DLA_STS_ALLOC_CNT,
    ._rval.val = AR_NIC_DLA_STS_ALLOC_CNT_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_STS_ALLOC_CNT_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_STS_ALLOC_CNT_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_STS_ALLOC_CNT_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_STS_ALLOC_CNT_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_STS_ALLOC_CNT_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_STS_ALLOC_CNT_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_STS_ALLOC_CNT_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_STS_ALLOC_CNT_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_STS_ALLOC_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_STS_ALLOC_CNT_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_STS_ALLOC_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_sts_alloc_cnt_detail
};
static const cmmr_br_t __ar_nic_dla_sts_cqe_merge_cnt = {
    ._name = "AR_NIC_DLA_STS_CQE_MERGE_CNT",
    ._addr = AR_NIC_DLA_STS_CQE_MERGE_CNT,
    ._rval.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_STS_CQE_MERGE_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_sts_cqe_merge_cnt_detail
};
static const cmmr_br_t __ar_nic_dla_err_info_fma_pkt = {
    ._name = "AR_NIC_DLA_ERR_INFO_FMA_PKT",
    ._addr = AR_NIC_DLA_ERR_INFO_FMA_PKT,
    ._rval.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_INFO_FMA_PKT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_err_info_fma_pkt_detail
};
static const cmmr_br_t __ar_nic_dla_clear = {
    ._name = "AR_NIC_DLA_CLEAR",
    ._addr = AR_NIC_DLA_CLEAR,
    ._rval.val = AR_NIC_DLA_CLEAR_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_CLEAR_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_CLEAR_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_CLEAR_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_CLEAR_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_CLEAR_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_CLEAR_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_CLEAR_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_CLEAR_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_CLEAR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_CLEAR_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_CLEAR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_dla_clear_detail
};
static const cmmr_br_t __ar_nic_dla_err_info_ram1 = {
    ._name = "AR_NIC_DLA_ERR_INFO_RAM1",
    ._addr = AR_NIC_DLA_ERR_INFO_RAM1,
    ._rval.val = AR_NIC_DLA_ERR_INFO_RAM1_RSTDATA,
    ._rmsk.val = AR_NIC_DLA_ERR_INFO_RAM1_RSTMASK,
    ._wrmsk.val = AR_NIC_DLA_ERR_INFO_RAM1_WRTMASK,
    ._rdmsk.val = AR_NIC_DLA_ERR_INFO_RAM1_RDMASK,
    ._xsmsk.val = AR_NIC_DLA_ERR_INFO_RAM1_XSMASK,
    ._wsemsk.val = AR_NIC_DLA_ERR_INFO_RAM1_WSEMASK,
    ._rsemsk.val = AR_NIC_DLA_ERR_INFO_RAM1_RSEMASK,
    ._w1smsk.val = AR_NIC_DLA_ERR_INFO_RAM1_W1SMASK,
    ._w1cmsk.val = AR_NIC_DLA_ERR_INFO_RAM1_W1CMASK,
    ._wrstmsk.val = AR_NIC_DLA_ERR_INFO_RAM1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_DLA_ERR_INFO_RAM1_HWWMASK,
    ._hwrmsk.val = AR_NIC_DLA_ERR_INFO_RAM1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_dla_err_info_ram1_detail
};

/*
 *  INSTALL AR DLA MMRS
 */
static const cmmr_br_t* __ar_dla_mmrs[] = {
    &__ar_nic_dla_desc_status,
    &__ar_nic_dla_cfg_max,
    &__ar_nic_dla_cfg_max_lo_cd,
    &__ar_nic_dla_cfg_max_hi_cd,
    &__ar_nic_dla_cfg_max_pr,
    &__ar_nic_dla_cfg_max_lo_cd_pr,
    &__ar_nic_dla_cfg_max_lo_hi_cd,
    &__ar_nic_dla_cfg_max_hi_cd_pr,
    &__ar_nic_dla_cfg_max_cd_alloc,
    &__ar_nic_dla_cfg_max_pr_alloc,
    &__ar_nic_dla_sts_consumed,
    &__ar_nic_dla_sts_consumed_lo_cd,
    &__ar_nic_dla_sts_consumed_hi_cd,
    &__ar_nic_dla_sts_consumed_pr,
    &__ar_nic_dla_sts_resvd_lo_cd,
    &__ar_nic_dla_sts_resvd_hi_cd,
    &__ar_nic_dla_sts_resvd_pr,
    &__ar_nic_dla_err_flg,
    &__ar_nic_dla_err_clr,
    &__ar_nic_dla_err_hss_msk,
    &__ar_nic_dla_err_os_msk,
    &__ar_nic_dla_err_first_flg,
    &__ar_nic_dla_err_info_pkt,
    &__ar_nic_dla_err_info_ram,
    &__ar_nic_dla_dbg_errinj_ram,
    &__ar_nic_dla_dbg_errinj_pkt,
    &__ar_nic_dla_cfg,
    &__ar_nic_dla_cfg_alloc_status_adr,
    &__ar_nic_dla_cfg_alloc_status_trig,
    &__ar_nic_dla_sts_alloc_cnt,
    &__ar_nic_dla_sts_cqe_merge_cnt,
    &__ar_nic_dla_err_info_fma_pkt,
    &__ar_nic_dla_clear,
    &__ar_nic_dla_err_info_ram1,
    NULL
};

/*
 *  INSTALL AR DLA LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_dla_enc_mmrs[] = {
    &__ar_nic_dla_mmr_ring_0_hi_dla,
    &__ar_nic_dla_mmr_ring_0_mid_dla,
    &__ar_nic_dla_mmr_ring_0_lo_dla,
    &__ar_nic_dla_err_flg_1_hi_dla,
    &__ar_nic_dla_err_flg_1_mid_dla,
    &__ar_nic_dla_err_flg_1_lo_dla,
    &__ar_nic_dla_fma_flit_sg_5_2_hi_dla,
    &__ar_nic_dla_fma_flit_sg_5_2_mid_dla,
    &__ar_nic_dla_fma_flit_sg_5_2_lo_dla,
    &__ar_nic_dla_dla_op_and_result_sg_5_3_hi_dla,
    &__ar_nic_dla_dla_op_and_result_sg_5_3_mid_dla,
    &__ar_nic_dla_dla_op_and_result_sg_5_3_lo_dla,
    &__ar_nic_dla_dla_packet_to_tarb_4_hi_dla,
    &__ar_nic_dla_dla_packet_to_tarb_4_mid_dla,
    &__ar_nic_dla_dla_packet_to_tarb_4_lo_dla,
    NULL
};

#endif
