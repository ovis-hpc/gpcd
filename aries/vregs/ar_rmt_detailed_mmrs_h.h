/******************************************************************************
 * COPYRIGHT CRAY INC. ar_rmt_detailed_mmrs_h.h
 * FILE: ar_rmt_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/
/**
 * @file ar_rmt_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:03 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_rmt_mmr_values.h and ar_rmt_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_rmt_mmr_values.h"

#ifndef _AR_RMT_DETAILED_MMRS_H_H_
#define _AR_RMT_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_rmt_mmrs[];	/* RMT Array */

/*
 *  AR RMT MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_rmt_cfg_bte_rx_desc_detail[] = {
    { ._name = "IRQ_EN",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_DESC_IRQ_EN_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_DESC_IRQ_EN_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_DESC_RSTDATA & AR_NIC_RMT_CFG_BTE_RX_DESC_IRQ_EN_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_DESC_IRQ_EN_QW,
      ._desc = "Receive BTE Interrupt Request Enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "DELAYED_IRQ_EN",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_DESC_DELAYED_IRQ_EN_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_DESC_DELAYED_IRQ_EN_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_DESC_RSTDATA & AR_NIC_RMT_CFG_BTE_RX_DESC_DELAYED_IRQ_EN_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_DESC_DELAYED_IRQ_EN_QW,
      ._desc = "Delayed Interrupt Enable When IRQ_EN = 1, this bit controls whether the interrupt can be aggregated and delayed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_DESC_PI_HINTS_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_DESC_PI_HINTS_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_DESC_RSTDATA & AR_NIC_RMT_CFG_BTE_RX_DESC_PI_HINTS_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_DESC_PI_HINTS_QW,
      ._desc = "Processor Interface hints",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "BASE_ADDR",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_DESC_BASE_ADDR_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_DESC_BASE_ADDR_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_DESC_RSTDATA & AR_NIC_RMT_CFG_BTE_RX_DESC_BASE_ADDR_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_DESC_BASE_ADDR_QW,
      ._desc = "Bits 47:6 of the base address of the BTE_Send message receive buffer associated with this RX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_UNUSED_145_35_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_UNUSED_145_35_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_UNUSED_145_35_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_UNUSED_145_35_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_detail[] = {
    { ._name = "UNUSED_127_104",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_UNUSED_127_104_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_UNUSED_127_104_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_UNUSED_127_104_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_UNUSED_127_104_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ABORTS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_ABORTS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_ABORTS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_ABORTS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_ABORTS_QW,
      ._desc = "Abort count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SEND_TIMEOUTS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_TIMEOUTS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_TIMEOUTS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_TIMEOUTS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_TIMEOUTS_QW,
      ._desc = "BTE_Send Sequence CAM MBE Timeout count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SEND_MBE_EVICTS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_MBE_EVICTS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_MBE_EVICTS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_MBE_EVICTS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_MBE_EVICTS_QW,
      ._desc = "BTE_Send Sequence CAM MBE Evict count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SEND_CAM_HITS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_HITS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_HITS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_HITS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_HITS_QW,
      ._desc = "BTE_Send/BTE_SendComplete CAM Hit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SEND_CAM_EVICTS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_EVICTS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_EVICTS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_EVICTS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_EVICTS_QW,
      ._desc = "BTE_Send Sequence CAM Evict count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SEND_CAM_MISSES",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_MISSES_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_MISSES_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_MISSES_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_MISSES_QW,
      ._desc = "BTE_Send/BTE_SendComplete CAM Miss count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SEND_CAM_FILLS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_FILLS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_FILLS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_FILLS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEND_CAM_FILLS_QW,
      ._desc = "BTE_Send/BTE_SendComplete CAM Fill count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RCV_COMPLETES",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_RCV_COMPLETES_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_RCV_COMPLETES_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_RCV_COMPLETES_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_RCV_COMPLETES_QW,
      ._desc = "MsgRcvComplete count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PUT_TIMEOUTS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_TIMEOUTS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_TIMEOUTS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_TIMEOUTS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_TIMEOUTS_QW,
      ._desc = "DSMN Sequence CAM MBE Timeout count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PUT_MBE_EVICTS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_MBE_EVICTS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_MBE_EVICTS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_MBE_EVICTS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_MBE_EVICTS_QW,
      ._desc = "DSMN Sequence CAM MBE Evict count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PUT_CAM_HITS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_HITS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_HITS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_HITS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_HITS_QW,
      ._desc = "PUT/MsgSendComplete CAM Hit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PUT_CAM_EVICTS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_EVICTS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_EVICTS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_EVICTS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_EVICTS_QW,
      ._desc = "DSMN Sequence CAM Evict count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PUT_CAM_MISSES",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_MISSES_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_MISSES_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_MISSES_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_MISSES_QW,
      ._desc = "PUT/MsgSendComplete CAM Miss count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PUT_CAM_FILLS",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_FILLS_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_FILLS_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_FILLS_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PUT_CAM_FILLS_QW,
      ._desc = "PUT/MsgSendComplete CAM Fill count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_UNDELIVERABLE_CQE",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_UNDELIVERABLE_CQE_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_UNDELIVERABLE_CQE_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_UNDELIVERABLE_CQE_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_UNDELIVERABLE_CQE_QW,
      ._desc = "Undeliverable CQE (due to errored or malformed CQWrite or MsgRcvComplete) count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_MBE",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_DESC_TBL_MBE_QW,
      ._desc = "Rx Descriptor Table MBE count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_SBE",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_DESC_TBL_SBE_QW,
      ._desc = "Rx Descriptor Table SBE count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SEQ_TBL_MBE",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEQ_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEQ_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEQ_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEQ_TBL_MBE_QW,
      ._desc = "Sequence Table MBE count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SEQ_TBL_SBE",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEQ_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEQ_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEQ_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_SEQ_TBL_SBE_QW,
      ._desc = "Sequence Table SBE count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PAYLOAD_MBE",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PAYLOAD_MBE_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PAYLOAD_MBE_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PAYLOAD_MBE_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PAYLOAD_MBE_QW,
      ._desc = "Payload flit MBE count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PAYLOAD_SBE",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PAYLOAD_SBE_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PAYLOAD_SBE_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PAYLOAD_SBE_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_PAYLOAD_SBE_QW,
      ._desc = "Payload flit SBE count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_INQ_PARITY",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_INQ_PARITY_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_INQ_PARITY_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_INQ_PARITY_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_CNTR_INQ_PARITY_QW,
      ._desc = "Input Queue header flit parity error count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_64",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_UNUSED_81_64_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_UNUSED_81_64_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_UNUSED_81_64_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_UNUSED_81_64_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_mmr_ring_0_lo_rmt_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_UNUSED_145_35_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_UNUSED_145_35_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_UNUSED_145_35_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_UNUSED_145_35_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "OS_IRQ",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_OS_IRQ_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_OS_IRQ_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_OS_IRQ_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_OS_IRQ_QW,
      ._desc = "OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "HSS_IRQ",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_HSS_IRQ_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_HSS_IRQ_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_HSS_IRQ_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_HSS_IRQ_QW,
      ._desc = "HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_LB_WR_ACK",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_R_Q_LB_WR_ACK_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_R_Q_LB_WR_ACK_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_R_Q_LB_WR_ACK_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_R_Q_LB_WR_ACK_QW,
      ._desc = "MMR Write Acknowledgement",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_LB_RSP",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_R_Q_LB_RSP_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_R_Q_LB_RSP_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_R_Q_LB_RSP_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_R_Q_LB_RSP_QW,
      ._desc = "MMR Response Output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_LB_REQ",
      ._bpos = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_I_LB_REQ_BP,
      ._mask = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_I_LB_REQ_MASK,
      ._rval = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_I_LB_REQ_MASK,
      ._index = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_I_LB_REQ_QW,
      ._desc = "MMR Request Input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_flg_1_hi_rmt_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_HI_RMT_UNUSED_145_128_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_HI_RMT_UNUSED_145_128_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_ERR_FLG_1_HI_RMT_UNUSED_145_128_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_HI_RMT_UNUSED_145_128_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_flg_1_mid_rmt_detail[] = {
    { ._name = "UNUSED_127_93",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_UNUSED_127_93_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_UNUSED_127_93_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_UNUSED_127_93_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_UNUSED_127_93_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "STALL_DROPPED",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_STALL_DROPPED_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_STALL_DROPPED_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_STALL_DROPPED_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_STALL_DROPPED_QW,
      ._desc = "A stall operation (an internally generated operation used to perform completion events) was dropped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH3_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH3_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH3_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH3_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH3_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 3 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH3_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH3_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH3_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH3_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH3_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 3 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH2_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH2_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH2_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH2_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH2_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 2 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH2_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH2_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH2_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH2_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH2_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 2 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH1_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH1_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH1_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH1_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH1_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 1 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH1_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH1_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH1_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH1_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH1_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 1 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH0_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH0_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH0_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH0_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH0_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 0 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH0_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH0_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH0_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH0_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_BTECH0_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 0 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSMN_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DSMN_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DSMN_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_DSMN_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DSMN_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a DSMN sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEND_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEND_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEND_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEND_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEND_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a BTE_Send sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSMN_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DSMN_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DSMN_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_DSMN_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DSMN_TIMEOUT_QW,
      ._desc = "A DSMN sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEND_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEND_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEND_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEND_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEND_TIMEOUT_QW,
      ._desc = "A BTE_Send sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RX_OVERRUN",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_OVERRUN_QW,
      ._desc = "RMT received a BTE_Send packet request that exceeded that BTE Channel's RxBufSize",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RX_SEND_CAM_MISS",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_SEND_CAM_MISS_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_SEND_CAM_MISS_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_SEND_CAM_MISS_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_SEND_CAM_MISS_QW,
      ._desc = "RMT received a BTE_Send packet request for a new sequence, but could not store it in the CAM due to it being full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RX_BTECH_UNAVAILABLE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_BTECH_UNAVAILABLE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_BTECH_UNAVAILABLE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_BTECH_UNAVAILABLE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_BTECH_UNAVAILABLE_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that does not possess an RX Descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RX_DESC_BTECH_INV",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_DESC_BTECH_INV_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_DESC_BTECH_INV_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_DESC_BTECH_INV_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RX_DESC_BTECH_INV_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that is not enabled or that is in reset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNDELIVERABLE_CQE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_UNDELIVERABLE_CQE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_UNDELIVERABLE_CQE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_UNDELIVERABLE_CQE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_UNDELIVERABLE_CQE_QW,
      ._desc = "A CQE Event could not be delivered",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MALFORMED_PKT",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_MALFORMED_PKT_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_MALFORMED_PKT_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_MALFORMED_PKT_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_MALFORMED_PKT_QW,
      ._desc = "RMT encountered a malformed packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DESC_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DESC_TBL_MBE_QW,
      ._desc = "An uncorrectable error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DESC_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DESC_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEQ_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEQ_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEQ_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEQ_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEQ_TBL_MBE_QW,
      ._desc = "An uncorrectable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEQ_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEQ_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEQ_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEQ_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_SEQ_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PROTOCOL_ERR",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PROTOCOL_ERR_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PROTOCOL_ERR_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_PROTOCOL_ERR_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PROTOCOL_ERR_QW,
      ._desc = "A DSMN packet hit a BTE_Send sequence in the CAM, or a BTE_Send or BTE_SendComplete packet hit a DSMN sequence in the CAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PAYLOAD_MBE_DROP",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_MBE_DROP_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_MBE_DROP_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_MBE_DROP_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_MBE_DROP_QW,
      ._desc = "Reported uncorrectable payload flit ECC error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PAYLOAD_MBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_MBE_QW,
      ._desc = "An uncorrectable payload flit ECC error was detected in the input queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PAYLOAD_SBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_PAYLOAD_SBE_QW,
      ._desc = "A correctable payload flit ECC error was detected and corrected in the input queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INQ_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_INQ_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_INQ_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_INQ_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_INQ_PARITY_QW,
      ._desc = "A header flit parity error was detected in the input queue, causing the packet to be dropped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DIAG_ONLY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_ERR_FLG_1_MID_RMT_DIAG_ONLY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_MID_RMT_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_flg_1_lo_rmt_detail[] = {
    { ._name = "UNUSED_63_29",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_UNUSED_63_29_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_UNUSED_63_29_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_UNUSED_63_29_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_UNUSED_63_29_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_STALL_DROPPED",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_STALL_DROPPED_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_STALL_DROPPED_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_STALL_DROPPED_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_STALL_DROPPED_QW,
      ._desc = "A stall operation (an internally generated operation used to perform completion events) was dropped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTECH3_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH3_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH3_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH3_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH3_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 3 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTECH3_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH3_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH3_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH3_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH3_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 3 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTECH2_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH2_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH2_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH2_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH2_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 2 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTECH2_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH2_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH2_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH2_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH2_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 2 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTECH1_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH1_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH1_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH1_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH1_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 1 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTECH1_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH1_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH1_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH1_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH1_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 1 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTECH0_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH0_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH0_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH0_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH0_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 0 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTECH0_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH0_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH0_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH0_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_BTECH0_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 0 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DSMN_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DSMN_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DSMN_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DSMN_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DSMN_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a DSMN sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_SEND_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEND_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEND_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEND_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEND_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a BTE_Send sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DSMN_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DSMN_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DSMN_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DSMN_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DSMN_TIMEOUT_QW,
      ._desc = "A DSMN sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_SEND_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEND_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEND_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEND_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEND_TIMEOUT_QW,
      ._desc = "A BTE_Send sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RX_OVERRUN",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_OVERRUN_QW,
      ._desc = "RMT received a BTE_Send packet request that exceeded that BTE Channel's RxBufSize",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RX_SEND_CAM_MISS",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_SEND_CAM_MISS_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_SEND_CAM_MISS_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_SEND_CAM_MISS_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_SEND_CAM_MISS_QW,
      ._desc = "RMT received a BTE_Send packet request for a new sequence, but could not store it in the CAM due to it being full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RX_BTECH_UNAVAILABLE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_BTECH_UNAVAILABLE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_BTECH_UNAVAILABLE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_BTECH_UNAVAILABLE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_BTECH_UNAVAILABLE_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that does not possess an RX Descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RX_DESC_BTECH_INV",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_DESC_BTECH_INV_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_DESC_BTECH_INV_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_DESC_BTECH_INV_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_RX_DESC_BTECH_INV_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that is not enabled or that is in reset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_UNDELIVERABLE_CQE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_UNDELIVERABLE_CQE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_UNDELIVERABLE_CQE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_UNDELIVERABLE_CQE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_UNDELIVERABLE_CQE_QW,
      ._desc = "A CQE Event could not be delivered",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MALFORMED_PKT",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_MALFORMED_PKT_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_MALFORMED_PKT_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_MALFORMED_PKT_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_MALFORMED_PKT_QW,
      ._desc = "RMT encountered a malformed packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DESC_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DESC_TBL_MBE_QW,
      ._desc = "An uncorrectable error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DESC_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_DESC_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_SEQ_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEQ_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEQ_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEQ_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEQ_TBL_MBE_QW,
      ._desc = "An uncorrectable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_SEQ_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEQ_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEQ_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEQ_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_SEQ_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PROTOCOL_ERR",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PROTOCOL_ERR_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PROTOCOL_ERR_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PROTOCOL_ERR_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PROTOCOL_ERR_QW,
      ._desc = "A DSMN packet hit a BTE_Send sequence in the CAM, or a BTE_Send or BTE_SendComplete packet hit a DSMN sequence in the CAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PAYLOAD_MBE_DROP",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_MBE_DROP_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_MBE_DROP_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_MBE_DROP_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_MBE_DROP_QW,
      ._desc = "Reported uncorrectable payload flit ECC error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PAYLOAD_MBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_MBE_QW,
      ._desc = "An uncorrectable payload flit ECC error was detected in the input queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PAYLOAD_SBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_PAYLOAD_SBE_QW,
      ._desc = "A correctable payload flit ECC error was detected and corrected in the input queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_INQ_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_INQ_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_INQ_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_INQ_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_I_INQ_PARITY_QW,
      ._desc = "A header flit parity error was detected in the input queue, causing the packet to be dropped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_RMT_ERR_FLG_1_LO_RMT_UNUSED_0_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_1_LO_RMT_UNUSED_0_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA & AR_NIC_RMT_ERR_FLG_1_LO_RMT_UNUSED_0_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_1_LO_RMT_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_cam_2_hi_rmt_detail[] = {
    { ._name = "I_RAT_ACK",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_HI_RMT_I_RAT_ACK_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_HI_RMT_I_RAT_ACK_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_CAM_2_HI_RMT_I_RAT_ACK_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_HI_RMT_I_RAT_ACK_QW,
      ._desc = "primary output r_q_rmt_rat_req_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TAGS_26_0",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_HI_RMT_I_TAGS_26_0_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_HI_RMT_I_TAGS_26_0_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_CAM_2_HI_RMT_I_TAGS_26_0_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_HI_RMT_I_TAGS_26_0_QW,
      ._desc = "no parity",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_cam_2_mid_rmt_detail[] = {
    { ._name = "I_TAGS_26_0",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_TAGS_26_0_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_TAGS_26_0_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_TAGS_26_0_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_TAGS_26_0_QW,
      ._desc = "no parity",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_LSTATUS",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_LSTATUS_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_LSTATUS_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_LSTATUS_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_LSTATUS_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_INPUT_Q_COUNT_UNDERFLOW",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_INPUT_Q_COUNT_UNDERFLOW_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_INPUT_Q_COUNT_UNDERFLOW_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_INPUT_Q_COUNT_UNDERFLOW_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_INPUT_Q_COUNT_UNDERFLOW_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_INPUT_Q_COUNT_OVERFLOW",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_INPUT_Q_COUNT_OVERFLOW_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_INPUT_Q_COUNT_OVERFLOW_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_INPUT_Q_COUNT_OVERFLOW_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_INPUT_Q_COUNT_OVERFLOW_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FLIT_CREDITS_USED_UNDERFLOW",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_FLIT_CREDITS_USED_UNDERFLOW_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_FLIT_CREDITS_USED_UNDERFLOW_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_FLIT_CREDITS_USED_UNDERFLOW_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_FLIT_CREDITS_USED_UNDERFLOW_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FLIT_CREDITS_USED_OVERFLOW",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_FLIT_CREDITS_USED_OVERFLOW_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_FLIT_CREDITS_USED_OVERFLOW_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_FLIT_CREDITS_USED_OVERFLOW_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_FLIT_CREDITS_USED_OVERFLOW_QW,
      ._desc = "This bit may be incorrectly set during a short window after mmr A_NIC_RMT_CFG_CAM_PARAMS0, field NPT_CREDITS has its value lowered",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_EVICT_INDEX",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_EVICT_INDEX_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_EVICT_INDEX_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_EVICT_INDEX_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_EVICT_INDEX_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_EVICT_EN",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_EVICT_EN_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_EVICT_EN_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_EVICT_EN_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_I_EVICT_EN_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PUT_C",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_PUT_C_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_PUT_C_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_PUT_C_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_PUT_C_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEND_C",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_SEND_C_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_SEND_C_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_SEND_C_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_SEND_C_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MSG_SENDCMP",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_SENDCMP_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_SENDCMP_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_SENDCMP_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_SENDCMP_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MSG_RCVCMP",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_RCVCMP_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_RCVCMP_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_RCVCMP_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_RCVCMP_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MSG_ABORT",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_ABORT_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_ABORT_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_ABORT_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_MSG_ABORT_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_SENDCMP",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_BTE_SENDCMP_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_BTE_SENDCMP_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_BTE_SENDCMP_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_BTE_SENDCMP_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHECK_VALID_HIT",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CHECK_VALID_HIT_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CHECK_VALID_HIT_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_CHECK_VALID_HIT_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CHECK_VALID_HIT_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "USE_RMT",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_USE_RMT_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_USE_RMT_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_USE_RMT_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_USE_RMT_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHECK_INDEX",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CHECK_INDEX_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CHECK_INDEX_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_CHECK_INDEX_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CHECK_INDEX_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CAM_EN_C",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_EN_C_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_EN_C_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_EN_C_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_EN_C_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "HEADER_C",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_HEADER_C_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_HEADER_C_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_HEADER_C_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_HEADER_C_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FULL_C",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_FULL_C_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_FULL_C_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_FULL_C_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_FULL_C_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "STALL_Q_EN_C",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_STALL_Q_EN_C_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_STALL_Q_EN_C_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_STALL_Q_EN_C_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_STALL_Q_EN_C_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "STALL_OR_SCRUB_INDEX",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_STALL_OR_SCRUB_INDEX_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_STALL_OR_SCRUB_INDEX_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_STALL_OR_SCRUB_INDEX_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_STALL_OR_SCRUB_INDEX_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CAM_READ_EN_C",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_READ_EN_C_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_READ_EN_C_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_READ_EN_C_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_READ_EN_C_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CAM_FILL_EN_C",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_FILL_EN_C_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_FILL_EN_C_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_FILL_EN_C_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_CAM_FILL_EN_C_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_FILL",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_R_Q_FILL_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_R_Q_FILL_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_R_Q_FILL_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_R_Q_FILL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_MISS",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_MID_RMT_R_Q_MISS_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_MID_RMT_R_Q_MISS_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CAM_2_MID_RMT_R_Q_MISS_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_MID_RMT_R_Q_MISS_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_cam_2_lo_rmt_detail[] = {
    { ._name = "R_Q_FIRST",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_FIRST_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_FIRST_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_FIRST_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_FIRST_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_UPDATE_EN",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_UPDATE_EN_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_UPDATE_EN_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_UPDATE_EN_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_UPDATE_EN_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_DESC_EN",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_DESC_EN_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_DESC_EN_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_DESC_EN_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_DESC_EN_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_COUNT",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_Q_COUNT_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_Q_COUNT_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_Q_COUNT_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_Q_COUNT_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_EPOCH_INCR",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_EPOCH_INCR_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_EPOCH_INCR_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_EPOCH_INCR_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_EPOCH_INCR_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEND_RESERVE_REACHED_C",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_RESERVE_REACHED_C_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_RESERVE_REACHED_C_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_RESERVE_REACHED_C_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_RESERVE_REACHED_C_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEND_COUNT_UNDERFLOW",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_UNDERFLOW_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_UNDERFLOW_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_UNDERFLOW_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_UNDERFLOW_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEND_COUNT_OVERFLOW",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_OVERFLOW_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_OVERFLOW_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_OVERFLOW_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_OVERFLOW_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CAM_COUNT_UNDERFLOW",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_CAM_COUNT_UNDERFLOW_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_CAM_COUNT_UNDERFLOW_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_CAM_COUNT_UNDERFLOW_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_CAM_COUNT_UNDERFLOW_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CAM_COUNT_OVERFLOW",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_CAM_COUNT_OVERFLOW_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_CAM_COUNT_OVERFLOW_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_CAM_COUNT_OVERFLOW_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_CAM_COUNT_OVERFLOW_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEND_COUNT",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_SEND_COUNT_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LAST_NEW_EVICT",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_LAST_NEW_EVICT_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_LAST_NEW_EVICT_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_LAST_NEW_EVICT_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_LAST_NEW_EVICT_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LAST_UPD_EVICT",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_LAST_UPD_EVICT_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_LAST_UPD_EVICT_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_LAST_UPD_EVICT_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_LAST_UPD_EVICT_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_MMR_READ_ACK",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_MMR_READ_ACK_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_MMR_READ_ACK_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_MMR_READ_ACK_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_R_Q_MMR_READ_ACK_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_STATE",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_STATE_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_STATE_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_STATE_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_STATE_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_RW",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_RW_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_RW_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_RW_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_RW_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_INDEX",
      ._bpos = AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_INDEX_BP,
      ._mask = AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_INDEX_MASK,
      ._rval = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_INDEX_MASK,
      ._index = AR_NIC_RMT_RMT_CAM_2_LO_RMT_MMR_INDEX_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_detail[] = {
    { ._name = "UNUSED_145_140",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_UNUSED_145_140_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_UNUSED_145_140_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_UNUSED_145_140_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_UNUSED_145_140_QW,
      ._desc = "unused_145_140",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_SEQTBL_READ_ACK",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_ACK_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_ACK_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_ACK_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_ACK_QW,
      ._desc = "r_q_seqtbl_read_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_SEQTBL_READ_SBE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_SBE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_SBE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_SBE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_SBE_QW,
      ._desc = "r_q_seqtbl_read_sbe",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_SEQTBL_READ_MBE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_MBE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_MBE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_MBE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SEQTBL_READ_MBE_QW,
      ._desc = "r_q_seqtbl_read_mbe",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERRINJ_SEQ_TBL_ENABLE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_ERRINJ_SEQ_TBL_ENABLE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_ERRINJ_SEQ_TBL_ENABLE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_ERRINJ_SEQ_TBL_ENABLE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_ERRINJ_SEQ_TBL_ENABLE_QW,
      ._desc = "errinj_seq_tbl_enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ERRINJ_SEQ_TBL_ARMED",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_ERRINJ_SEQ_TBL_ARMED_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_ERRINJ_SEQ_TBL_ARMED_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_ERRINJ_SEQ_TBL_ARMED_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_ERRINJ_SEQ_TBL_ARMED_QW,
      ._desc = "errinj_seq_tbl_armed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_SBE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SBE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SBE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SBE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_SBE_QW,
      ._desc = "r_q_sbe",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_MBE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_MBE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_MBE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_MBE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_MBE_QW,
      ._desc = "r_q_mbe",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_SEND",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_BTE_SEND_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_BTE_SEND_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_BTE_SEND_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_R_Q_BTE_SEND_QW,
      ._desc = "r_q_bte_send",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_detail[] = {
    { ._name = "R_Q_EPOCH_EN",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_EPOCH_EN_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_EPOCH_EN_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_EPOCH_EN_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_EPOCH_EN_QW,
      ._desc = "r_q_epoch_en",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_EPOCH_TIME_7_0",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_EPOCH_TIME_7_0_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_EPOCH_TIME_7_0_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_EPOCH_TIME_7_0_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_EPOCH_TIME_7_0_QW,
      ._desc = "r_q_epoch_time_7_0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_MSGCMP_RX",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_MSGCMP_RX_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_MSGCMP_RX_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_MSGCMP_RX_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_MSGCMP_RX_QW,
      ._desc = "r_q_msgcmp_rx",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_FLAG_OP",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_FLAG_OP_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_FLAG_OP_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_FLAG_OP_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_FLAG_OP_QW,
      ._desc = "r_q_flag_op",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RX_STATUS",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_STATUS_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_STATUS_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_STATUS_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_STATUS_QW,
      ._desc = "r_q_rx_status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_ERRLOC",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_CQ_ERRLOC_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_CQ_ERRLOC_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_CQ_ERRLOC_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_CQ_ERRLOC_QW,
      ._desc = "r_q_cq_errloc",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_106_101",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_UNUSED_106_101_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_UNUSED_106_101_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_UNUSED_106_101_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_UNUSED_106_101_QW,
      ._desc = "unused_106_101",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RX_OVERRUN",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_OVERRUN_QW,
      ._desc = "r_q_rx_overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RX_IMM_EN",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_IMM_EN_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_IMM_EN_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_IMM_EN_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_IMM_EN_QW,
      ._desc = "r_q_rx_imm_en",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RX_BTECH",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_BTECH_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_BTECH_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_BTECH_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_BTECH_QW,
      ._desc = "r_q_rx_btech",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PI_HINTS",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_PI_HINTS_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_PI_HINTS_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_PI_HINTS_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_PI_HINTS_QW,
      ._desc = "r_q_pi_hints",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RX_IRQ_MODE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_IRQ_MODE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_IRQ_MODE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_IRQ_MODE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_IRQ_MODE_QW,
      ._desc = "r_q_rx_irq_mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RX_DELAY_IRQ_EN",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_DELAY_IRQ_EN_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_DELAY_IRQ_EN_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_DELAY_IRQ_EN_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_DELAY_IRQ_EN_QW,
      ._desc = "r_q_rx_delay_irq_en",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_91_90",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_UNUSED_91_90_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_UNUSED_91_90_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_UNUSED_91_90_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_UNUSED_91_90_QW,
      ._desc = "unused_91_90",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "WEN_7",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WEN_7_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WEN_7_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WEN_7_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WEN_7_QW,
      ._desc = "wen_7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "WEN_6",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WEN_6_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WEN_6_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WEN_6_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WEN_6_QW,
      ._desc = "wen_6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_WE_1",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_I_WE_1_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_I_WE_1_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_I_WE_1_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_I_WE_1_QW,
      ._desc = "i_we_1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_STATE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_MMR_STATE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_MMR_STATE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_MMR_STATE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_MMR_STATE_QW,
      ._desc = "mmr_state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RADDR_2_9",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_2_9_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_2_9_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_2_9_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_2_9_QW,
      ._desc = "raddr_2_9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RADDR_1_9",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_1_9_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_1_9_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_1_9_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_1_9_QW,
      ._desc = "raddr_1_9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RADDR_0",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_0_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_0_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_0_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RADDR_0_QW,
      ._desc = "raddr_0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RX_COMPLETE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_COMPLETE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_COMPLETE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_COMPLETE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_COMPLETE_QW,
      ._desc = "r_q_rx_complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RX_EVICTED",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_EVICTED_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_EVICTED_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_EVICTED_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_RX_EVICTED_QW,
      ._desc = "r_q_rx_evicted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PKT_COUNT",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_PKT_COUNT_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_PKT_COUNT_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_PKT_COUNT_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_R_Q_PKT_COUNT_QW,
      ._desc = "r_q_pkt_count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_seq_table_3_lo_rmt_detail[] = {
    { ._name = "R_Q_PKT_COUNT",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_COUNT_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_COUNT_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_COUNT_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_COUNT_QW,
      ._desc = "r_q_pkt_count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PKT_PID",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_PID_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_PID_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_PID_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_PID_QW,
      ._desc = "r_q_pkt_pid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PKT_FLUSH",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_FLUSH_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_FLUSH_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_FLUSH_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_PKT_FLUSH_QW,
      ._desc = "r_q_pkt_flush",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_STALL_OR_SCRUB_SRCID",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_STALL_OR_SCRUB_SRCID_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_STALL_OR_SCRUB_SRCID_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_STALL_OR_SCRUB_SRCID_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_STALL_OR_SCRUB_SRCID_QW,
      ._desc = "r_q_stall_or_scrub_srcid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_STALL_OR_SCRUB_SOURCE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_STALL_OR_SCRUB_SOURCE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_STALL_OR_SCRUB_SOURCE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_STALL_OR_SCRUB_SOURCE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_STALL_OR_SCRUB_SOURCE_QW,
      ._desc = "r_q_stall_or_scrub_source",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_GOT_FIRST",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_GOT_FIRST_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_GOT_FIRST_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_GOT_FIRST_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_R_Q_GOT_FIRST_QW,
      ._desc = "r_q_got_first",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INIT_SEQ_TABLE_WREN_P6",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_INIT_SEQ_TABLE_WREN_P6_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_INIT_SEQ_TABLE_WREN_P6_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_INIT_SEQ_TABLE_WREN_P6_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_INIT_SEQ_TABLE_WREN_P6_QW,
      ._desc = "init_seq_table_wren_p6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "INIT_SEQ_TABLE_COMPLETE",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_INIT_SEQ_TABLE_COMPLETE_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_INIT_SEQ_TABLE_COMPLETE_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_INIT_SEQ_TABLE_COMPLETE_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_INIT_SEQ_TABLE_COMPLETE_QW,
      ._desc = "init_seq_table_complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_ADDR_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_ADDR_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_ADDR_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_ADDR_QW,
      ._desc = "addr",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "WADDR_6",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_WADDR_6_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_WADDR_6_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_WADDR_6_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_WADDR_6_QW,
      ._desc = "waddr_6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_WRITE_ENABLE_P6",
      ._bpos = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_MMR_WRITE_ENABLE_P6_BP,
      ._mask = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_MMR_WRITE_ENABLE_P6_MASK,
      ._rval = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_MMR_WRITE_ENABLE_P6_MASK,
      ._index = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_MMR_WRITE_ENABLE_P6_QW,
      ._desc = "mmr_write_enable_p6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_detail[] = {
    { ._name = "UNUSED_145_143",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_UNUSED_145_143_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_UNUSED_145_143_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_UNUSED_145_143_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_UNUSED_145_143_QW,
      ._desc = "unused_145_143",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PKT_UPD_FLIT_ACK",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PKT_UPD_FLIT_ACK_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PKT_UPD_FLIT_ACK_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PKT_UPD_FLIT_ACK_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PKT_UPD_FLIT_ACK_QW,
      ._desc = "r_q_pkt_upd_flit_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PKT_UPD_CQ_ACK",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PKT_UPD_CQ_ACK_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PKT_UPD_CQ_ACK_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PKT_UPD_CQ_ACK_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PKT_UPD_CQ_ACK_QW,
      ._desc = "r_q_pkt_upd_cq_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_STALL_Q_REQ",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_STALL_Q_REQ_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_STALL_Q_REQ_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_STALL_Q_REQ_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_STALL_Q_REQ_QW,
      ._desc = "r_q_stall_q_req",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_STALL_Q_INDEX",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_STALL_Q_INDEX_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_STALL_Q_INDEX_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_STALL_Q_INDEX_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_STALL_Q_INDEX_QW,
      ._desc = "r_q_stall_q_index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PI_HINTS",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PI_HINTS_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PI_HINTS_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PI_HINTS_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_R_Q_PI_HINTS_QW,
      ._desc = "r_q_pi_hints",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_detail[] = {
    { ._name = "R_Q_PI_HINTS",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_PI_HINTS_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_PI_HINTS_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_PI_HINTS_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_PI_HINTS_QW,
      ._desc = "r_q_pi_hints",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_WADDR",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_WADDR_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_WADDR_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_WADDR_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_WADDR_QW,
      ._desc = "r_q_waddr",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_EVICT_INDEX",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_INDEX_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_INDEX_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_INDEX_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_INDEX_QW,
      ._desc = "r_q_evict_index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_WE_0",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_WE_0_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_WE_0_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_WE_0_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_WE_0_QW,
      ._desc = "r_q_we_0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_EVICT_EN",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_EN_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_EN_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_EN_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_EN_QW,
      ._desc = "r_q_evict_en",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_EVICT_SEND",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_SEND_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_SEND_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_SEND_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_EVICT_SEND_QW,
      ._desc = "r_q_evict_send",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_VALID",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_VALID_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_VALID_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_VALID_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_VALID_QW,
      ._desc = "r_q_cq_valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_HIT",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_HIT_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_HIT_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_HIT_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_HIT_QW,
      ._desc = "r_q_cq_hit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_NS",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_NS_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_NS_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_NS_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_NS_QW,
      ._desc = "r_q_cq_ns",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_SRC_ID",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_SRC_ID_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_SRC_ID_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_SRC_ID_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_SRC_ID_QW,
      ._desc = "r_q_cq_src_id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_FLUSH",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_FLUSH_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_FLUSH_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_FLUSH_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_FLUSH_QW,
      ._desc = "r_q_cq_flush",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_HANDLE",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_HANDLE_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_HANDLE_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_HANDLE_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_HANDLE_QW,
      ._desc = "r_q_cq_handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_SOURCE",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_SOURCE_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_SOURCE_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_SOURCE_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_SOURCE_QW,
      ._desc = "r_q_cq_source",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_PKT_ID",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_PKT_ID_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_PKT_ID_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_PKT_ID_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_R_Q_CQ_PKT_ID_QW,
      ._desc = "r_q_cq_pkt_id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_pkt_update_4_lo_rmt_detail[] = {
    { ._name = "R_Q_CQ_PKT_ID",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_R_Q_CQ_PKT_ID_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_R_Q_CQ_PKT_ID_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_R_Q_CQ_PKT_ID_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_R_Q_CQ_PKT_ID_QW,
      ._desc = "r_q_cq_pkt_id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_IRQ_BUBBLE_REQ",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_R_Q_IRQ_BUBBLE_REQ_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_R_Q_IRQ_BUBBLE_REQ_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_R_Q_IRQ_BUBBLE_REQ_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_R_Q_IRQ_BUBBLE_REQ_QW,
      ._desc = "r_q_irq_bubble_req",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "STALL_DROPPED",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_STALL_DROPPED_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_STALL_DROPPED_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_STALL_DROPPED_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_STALL_DROPPED_QW,
      ._desc = "A stall operation (an internally generated operation used to perform completion events) was dropped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH3_NO_DESC",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH3_NO_DESC_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH3_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH3_NO_DESC_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH3_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 3 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH3_LAST_DESC",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH3_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH3_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH3_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH3_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 3 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH2_NO_DESC",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH2_NO_DESC_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH2_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH2_NO_DESC_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH2_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 2 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH2_LAST_DESC",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH2_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH2_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH2_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH2_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 2 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH1_NO_DESC",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH1_NO_DESC_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH1_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH1_NO_DESC_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH1_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 1 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH1_LAST_DESC",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH1_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH1_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH1_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH1_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 1 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH0_NO_DESC",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH0_NO_DESC_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH0_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH0_NO_DESC_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH0_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 0 failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTECH0_LAST_DESC",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH0_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH0_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH0_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_BTECH0_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 0 has been consumed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSMN_CAM_PARITY",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DSMN_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DSMN_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DSMN_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DSMN_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a DSMN sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEND_CAM_PARITY",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEND_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEND_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEND_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEND_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a BTE_Send sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSMN_TIMEOUT",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DSMN_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DSMN_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DSMN_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DSMN_TIMEOUT_QW,
      ._desc = "A DSMN sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEND_TIMEOUT",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEND_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEND_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEND_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEND_TIMEOUT_QW,
      ._desc = "A BTE_Send sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RX_OVERRUN",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_OVERRUN_QW,
      ._desc = "RMT received a BTE_Send packet request that exceeded that BTE Channel's RxBufSize",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RX_SEND_CAM_MISS",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_SEND_CAM_MISS_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_SEND_CAM_MISS_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_SEND_CAM_MISS_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_SEND_CAM_MISS_QW,
      ._desc = "RMT received a BTE_Send packet request for a new sequence, but could not store it in the CAM due to it being full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RX_BTECH_UNAVAILABLE",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_BTECH_UNAVAILABLE_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_BTECH_UNAVAILABLE_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_BTECH_UNAVAILABLE_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_BTECH_UNAVAILABLE_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that does not possess an RX Descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RX_DESC_BTECH_INV",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_DESC_BTECH_INV_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_DESC_BTECH_INV_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_DESC_BTECH_INV_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RX_DESC_BTECH_INV_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that is not enabled or that is in reset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNDELIVERABLE_CQE",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_UNDELIVERABLE_CQE_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_UNDELIVERABLE_CQE_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_UNDELIVERABLE_CQE_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_UNDELIVERABLE_CQE_QW,
      ._desc = "A CQE Event could not be delivered",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MALFORMED_PKT",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MALFORMED_PKT_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MALFORMED_PKT_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MALFORMED_PKT_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MALFORMED_PKT_QW,
      ._desc = "RMT encountered a malformed packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DESC_TBL_MBE",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DESC_TBL_MBE_QW,
      ._desc = "An uncorrectable error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DESC_TBL_SBE",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_DESC_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEQ_TBL_MBE",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEQ_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEQ_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEQ_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEQ_TBL_MBE_QW,
      ._desc = "An uncorrectable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SEQ_TBL_SBE",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEQ_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEQ_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEQ_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_SEQ_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PROTOCOL_ERR",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_PROTOCOL_ERR_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_PROTOCOL_ERR_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_PROTOCOL_ERR_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_PROTOCOL_ERR_QW,
      ._desc = "A DSMN packet hit a BTE_Send sequence in the CAM, or a BTE_Send or BTE_SendComplete packet hit a DSMN sequence in the CAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PAYLOAD_MBE_DROP",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_PAYLOAD_MBE_DROP_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_PAYLOAD_MBE_DROP_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_PAYLOAD_MBE_DROP_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_PAYLOAD_MBE_DROP_QW,
      ._desc = "Reported uncorrectable payload flit ECC error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_30_29",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_UNUSED_30_29_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_UNUSED_30_29_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_UNUSED_30_29_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_UNUSED_30_29_QW,
      ._desc = "unused_30_29",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RXRESET",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RXRESET_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RXRESET_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RXRESET_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RXRESET_QW,
      ._desc = "rxreset",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IDV_TIMER",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IDV_TIMER_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IDV_TIMER_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IDV_TIMER_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IDV_TIMER_QW,
      ._desc = "idv_timer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IDV_TERM",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IDV_TERM_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IDV_TERM_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IDV_TERM_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IDV_TERM_QW,
      ._desc = "idv_term",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IS_HEAD",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IS_HEAD_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IS_HEAD_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IS_HEAD_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_IS_HEAD_QW,
      ._desc = "is_head",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MSGCMP_FLIT_COUNT",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLIT_COUNT_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLIT_COUNT_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLIT_COUNT_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLIT_COUNT_QW,
      ._desc = "msgcmp_flit_count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MSGCMP_FLAG_EN",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLAG_EN_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLAG_EN_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLAG_EN_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLAG_EN_QW,
      ._desc = "msgcmp_flag_en",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MSGCMP_FLAG_ERR",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLAG_ERR_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLAG_ERR_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLAG_ERR_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_MSGCMP_FLAG_ERR_QW,
      ._desc = "msgcmp_flag_err",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EOM_CACHE_COUNT",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_EOM_CACHE_COUNT_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_EOM_CACHE_COUNT_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_EOM_CACHE_COUNT_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_EOM_CACHE_COUNT_QW,
      ._desc = "eom_cache_count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "STALL_Q_COUNT",
      ._bpos = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_STALL_Q_COUNT_BP,
      ._mask = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_STALL_Q_COUNT_MASK,
      ._rval = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_STALL_Q_COUNT_MASK,
      ._index = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_STALL_Q_COUNT_QW,
      ._desc = "stall_q_count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_cq_5_hi_rmt_detail[] = {
    { ._name = "UNUSED_145_105",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_HI_RMT_UNUSED_145_105_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_HI_RMT_UNUSED_145_105_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_CQ_5_HI_RMT_UNUSED_145_105_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_HI_RMT_UNUSED_145_105_QW,
      ._desc = "unused_145_105",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_cq_5_mid_rmt_detail[] = {
    { ._name = "UNUSED_145_105",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_MID_RMT_UNUSED_145_105_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_MID_RMT_UNUSED_145_105_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CQ_5_MID_RMT_UNUSED_145_105_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_MID_RMT_UNUSED_145_105_QW,
      ._desc = "unused_145_105",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_CQ_VALID",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_VALID_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_VALID_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_VALID_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_VALID_QW,
      ._desc = "r_q_rmt_cq_valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_CQ_HIT",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_HIT_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_HIT_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_HIT_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_HIT_QW,
      ._desc = "r_q_rmt_cq_hit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_CQ_NS",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_NS_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_NS_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_NS_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_NS_QW,
      ._desc = "r_q_rmt_cq_ns",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_CQ_SRC_ID",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_SRC_ID_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_SRC_ID_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_SRC_ID_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_SRC_ID_QW,
      ._desc = "r_q_rmt_cq_src_id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_CQ_FLUSH",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_FLUSH_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_FLUSH_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_FLUSH_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_FLUSH_QW,
      ._desc = "r_q_rmt_cq_flush",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_CQ_HANDLE",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_HANDLE_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_HANDLE_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_HANDLE_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_HANDLE_QW,
      ._desc = "r_q_rmt_cq_handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_CQ_SOURCE",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_SOURCE_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_SOURCE_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_SOURCE_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_SOURCE_QW,
      ._desc = "r_q_rmt_cq_source",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_CQ_PKT_ID",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_PKT_ID_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_PKT_ID_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_PKT_ID_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_MID_RMT_R_Q_RMT_CQ_PKT_ID_QW,
      ._desc = "r_q_rmt_cq_pkt_id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_cq_5_lo_rmt_detail[] = {
    { ._name = "R_Q_RMT_CQ_PKT_ID",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_LO_RMT_R_Q_RMT_CQ_PKT_ID_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_LO_RMT_R_Q_RMT_CQ_PKT_ID_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CQ_5_LO_RMT_R_Q_RMT_CQ_PKT_ID_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_LO_RMT_R_Q_RMT_CQ_PKT_ID_QW,
      ._desc = "r_q_rmt_cq_pkt_id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_CQ_DATA",
      ._bpos = AR_NIC_RMT_RMT_CQ_5_LO_RMT_R_Q_RMT_CQ_DATA_BP,
      ._mask = AR_NIC_RMT_RMT_CQ_5_LO_RMT_R_Q_RMT_CQ_DATA_MASK,
      ._rval = AR_NIC_RMT_RMT_CQ_5_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_CQ_5_LO_RMT_R_Q_RMT_CQ_DATA_MASK,
      ._index = AR_NIC_RMT_RMT_CQ_5_LO_RMT_R_Q_RMT_CQ_DATA_QW,
      ._desc = "r_q_rmt_cq_data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_detail[] = {
    { ._name = "PKT_SB",
      ._bpos = AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_PKT_SB_BP,
      ._mask = AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_PKT_SB_MASK,
      ._rval = AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_PKT_SB_MASK,
      ._index = AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_PKT_SB_QW,
      ._desc = "pkt_sb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKT_FLIT",
      ._bpos = AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_PKT_FLIT_BP,
      ._mask = AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_PKT_FLIT_MASK,
      ._rval = AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_PKT_FLIT_MASK,
      ._index = AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_PKT_FLIT_QW,
      ._desc = "pkt_flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_detail[] = {
    { ._name = "PKT_FLIT",
      ._bpos = AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_PKT_FLIT_BP,
      ._mask = AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_PKT_FLIT_MASK,
      ._rval = AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_PKT_FLIT_MASK,
      ._index = AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_PKT_FLIT_QW,
      ._desc = "pkt_flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rat_rmt_flit_6_lo_rmt_detail[] = {
    { ._name = "PKT_FLIT",
      ._bpos = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_PKT_FLIT_BP,
      ._mask = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_PKT_FLIT_MASK,
      ._rval = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_RSTDATA & AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_PKT_FLIT_MASK,
      ._index = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_PKT_FLIT_QW,
      ._desc = "pkt_flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_detail[] = {
    { ._name = "R_Q_RMT_NPT_REQ_SB",
      ._bpos = AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_R_Q_RMT_NPT_REQ_SB_BP,
      ._mask = AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_R_Q_RMT_NPT_REQ_SB_MASK,
      ._rval = AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_R_Q_RMT_NPT_REQ_SB_MASK,
      ._index = AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_R_Q_RMT_NPT_REQ_SB_QW,
      ._desc = "r_q_rmt_npt_req_sb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RMT_NPT_REQ_FLIT",
      ._bpos = AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_R_Q_RMT_NPT_REQ_FLIT_BP,
      ._mask = AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_R_Q_RMT_NPT_REQ_FLIT_MASK,
      ._rval = AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSTDATA_QW2 & AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_R_Q_RMT_NPT_REQ_FLIT_MASK,
      ._index = AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_R_Q_RMT_NPT_REQ_FLIT_QW,
      ._desc = "r_q_rmt_npt_req_flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_detail[] = {
    { ._name = "R_Q_RMT_NPT_REQ_FLIT",
      ._bpos = AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_R_Q_RMT_NPT_REQ_FLIT_BP,
      ._mask = AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_R_Q_RMT_NPT_REQ_FLIT_MASK,
      ._rval = AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_RSTDATA_QW1 & AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_R_Q_RMT_NPT_REQ_FLIT_MASK,
      ._index = AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_R_Q_RMT_NPT_REQ_FLIT_QW,
      ._desc = "r_q_rmt_npt_req_flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_rmt_npt_flit_7_lo_rmt_detail[] = {
    { ._name = "R_Q_RMT_NPT_REQ_FLIT",
      ._bpos = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_R_Q_RMT_NPT_REQ_FLIT_BP,
      ._mask = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_R_Q_RMT_NPT_REQ_FLIT_MASK,
      ._rval = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_RSTDATA & AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_R_Q_RMT_NPT_REQ_FLIT_MASK,
      ._index = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_R_Q_RMT_NPT_REQ_FLIT_QW,
      ._desc = "r_q_rmt_npt_req_flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_cfg_bte_rx_chan_desc_detail[] = {
    { ._name = "RX_WR_IDX",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_WR_IDX_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_WR_IDX_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW3 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_WR_IDX_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_WR_IDX_QW,
      ._desc = "Receive queue write index",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "ACTIVE_RMT_ENTRIES",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_ACTIVE_RMT_ENTRIES_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_ACTIVE_RMT_ENTRIES_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW2 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_ACTIVE_RMT_ENTRIES_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_ACTIVE_RMT_ENTRIES_QW,
      ._desc = "Number of active RMT entries associated with this BTE RX channel",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RX_RD_IDX",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RD_IDX_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RD_IDX_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW2 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RD_IDX_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RD_IDX_QW,
      ._desc = "Receive queue read index",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "CPU_RX_BASE_ADDR",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_CPU_RX_BASE_ADDR_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_CPU_RX_BASE_ADDR_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW1 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_CPU_RX_BASE_ADDR_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_CPU_RX_BASE_ADDR_QW,
      ._desc = "Base address of the CPU shadow copy of the BTE RX descriptors",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RX_INTR_EN",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_INTR_EN_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_INTR_EN_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_INTR_EN_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_INTR_EN_QW,
      ._desc = "0 = Receive Interrupt Disabled 1 = Receive Interrupt Enabled",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RX_EN",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_EN_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_EN_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_EN_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_EN_QW,
      ._desc = "0 = BTE RX Channel Disabled 1 = BTE RX Channel Enabled When disabled, new sequences are not allowed to allocate in the RX CAM",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RX_RST",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RST_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RST_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RST_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RST_QW,
      ._desc = "0 = Normal Operation 1 = Reset BTE RX Channel When reset, new BTE_Send sequences are not allowed to allocate in the RX CAM",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RWS"
    },
    { ._name = "IRQ_IDX",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_IRQ_IDX_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_IRQ_IDX_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_IRQ_IDX_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_IRQ_IDX_QW,
      ._desc = "Interrupt Request Index",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TPH_WB",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_WB_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_WB_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_WB_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_WB_QW,
      ._desc = "Translation Processing Hints for Rx Descriptor Writebacks",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TPH",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_QW,
      ._desc = "Translation Processing Hints for BTE_Send packets",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TC_WB",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_WB_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_WB_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_WB_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_WB_QW,
      ._desc = "Translation Context for Rx Descriptor Writebacks",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_QW,
      ._desc = "Translation Context for BTE_Send packets",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RX_IDV",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_IDV_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_IDV_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_IDV_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_IDV_QW,
      ._desc = "Receive Interrupt Delay Value This field represents the time that a receive interrupt can be delayed in IDV_INTERVAL increments",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RX_LIMIT",
      ._bpos = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_LIMIT_BP,
      ._mask = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_LIMIT_MASK,
      ._rval = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0 & AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_LIMIT_MASK,
      ._index = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_LIMIT_QW,
      ._desc = "Receive Buffer limit used for overrun protection",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_cfg_timer_control_detail[] = {
    { ._name = "SCRUB_INTERVAL",
      ._bpos = AR_NIC_RMT_CFG_TIMER_CONTROL_SCRUB_INTERVAL_BP,
      ._mask = AR_NIC_RMT_CFG_TIMER_CONTROL_SCRUB_INTERVAL_MASK,
      ._rval = AR_NIC_RMT_CFG_TIMER_CONTROL_RSTDATA & AR_NIC_RMT_CFG_TIMER_CONTROL_SCRUB_INTERVAL_MASK,
      ._index = AR_NIC_RMT_CFG_TIMER_CONTROL_SCRUB_INTERVAL_QW,
      ._desc = "RMT CAM Scrub Interval Default value is number of RMT core clock cycles in one millisecond divided by the number RMT CAM entries (512)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "IDV_INTERVAL",
      ._bpos = AR_NIC_RMT_CFG_TIMER_CONTROL_IDV_INTERVAL_BP,
      ._mask = AR_NIC_RMT_CFG_TIMER_CONTROL_IDV_INTERVAL_MASK,
      ._rval = AR_NIC_RMT_CFG_TIMER_CONTROL_RSTDATA & AR_NIC_RMT_CFG_TIMER_CONTROL_IDV_INTERVAL_MASK,
      ._index = AR_NIC_RMT_CFG_TIMER_CONTROL_IDV_INTERVAL_QW,
      ._desc = "IDV interval",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_cfg_cam_params0_detail[] = {
    { ._name = "RMT_EN",
      ._bpos = AR_NIC_RMT_CFG_CAM_PARAMS0_RMT_EN_BP,
      ._mask = AR_NIC_RMT_CFG_CAM_PARAMS0_RMT_EN_MASK,
      ._rval = AR_NIC_RMT_CFG_CAM_PARAMS0_RSTDATA & AR_NIC_RMT_CFG_CAM_PARAMS0_RMT_EN_MASK,
      ._index = AR_NIC_RMT_CFG_CAM_PARAMS0_RMT_EN_QW,
      ._desc = "RMT Enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CQ_CREDITS",
      ._bpos = AR_NIC_RMT_CFG_CAM_PARAMS0_CQ_CREDITS_BP,
      ._mask = AR_NIC_RMT_CFG_CAM_PARAMS0_CQ_CREDITS_MASK,
      ._rval = AR_NIC_RMT_CFG_CAM_PARAMS0_RSTDATA & AR_NIC_RMT_CFG_CAM_PARAMS0_CQ_CREDITS_MASK,
      ._index = AR_NIC_RMT_CFG_CAM_PARAMS0_CQ_CREDITS_QW,
      ._desc = "The MAX number of outstanding CQEs from the RMT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NPT_CREDITS",
      ._bpos = AR_NIC_RMT_CFG_CAM_PARAMS0_NPT_CREDITS_BP,
      ._mask = AR_NIC_RMT_CFG_CAM_PARAMS0_NPT_CREDITS_MASK,
      ._rval = AR_NIC_RMT_CFG_CAM_PARAMS0_RSTDATA & AR_NIC_RMT_CFG_CAM_PARAMS0_NPT_CREDITS_MASK,
      ._index = AR_NIC_RMT_CFG_CAM_PARAMS0_NPT_CREDITS_QW,
      ._desc = "NPT credits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_cfg_cam_params1_detail[] = {
    { ._name = "DSMN_TIMEOUT_MODE",
      ._bpos = AR_NIC_RMT_CFG_CAM_PARAMS1_DSMN_TIMEOUT_MODE_BP,
      ._mask = AR_NIC_RMT_CFG_CAM_PARAMS1_DSMN_TIMEOUT_MODE_MASK,
      ._rval = AR_NIC_RMT_CFG_CAM_PARAMS1_RSTDATA & AR_NIC_RMT_CFG_CAM_PARAMS1_DSMN_TIMEOUT_MODE_MASK,
      ._index = AR_NIC_RMT_CFG_CAM_PARAMS1_DSMN_TIMEOUT_MODE_QW,
      ._desc = "Timeout mode for DSMN sequences",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SEND_TIMEOUT_MODE",
      ._bpos = AR_NIC_RMT_CFG_CAM_PARAMS1_SEND_TIMEOUT_MODE_BP,
      ._mask = AR_NIC_RMT_CFG_CAM_PARAMS1_SEND_TIMEOUT_MODE_MASK,
      ._rval = AR_NIC_RMT_CFG_CAM_PARAMS1_RSTDATA & AR_NIC_RMT_CFG_CAM_PARAMS1_SEND_TIMEOUT_MODE_MASK,
      ._index = AR_NIC_RMT_CFG_CAM_PARAMS1_SEND_TIMEOUT_MODE_QW,
      ._desc = "Timeout mode for BTE_Send sequences",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSMN_TIMEOUT_VALUE",
      ._bpos = AR_NIC_RMT_CFG_CAM_PARAMS1_DSMN_TIMEOUT_VALUE_BP,
      ._mask = AR_NIC_RMT_CFG_CAM_PARAMS1_DSMN_TIMEOUT_VALUE_MASK,
      ._rval = AR_NIC_RMT_CFG_CAM_PARAMS1_RSTDATA & AR_NIC_RMT_CFG_CAM_PARAMS1_DSMN_TIMEOUT_VALUE_MASK,
      ._index = AR_NIC_RMT_CFG_CAM_PARAMS1_DSMN_TIMEOUT_VALUE_QW,
      ._desc = "Timeout value for DSMN sequences",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SEND_TIMEOUT_VALUE",
      ._bpos = AR_NIC_RMT_CFG_CAM_PARAMS1_SEND_TIMEOUT_VALUE_BP,
      ._mask = AR_NIC_RMT_CFG_CAM_PARAMS1_SEND_TIMEOUT_VALUE_MASK,
      ._rval = AR_NIC_RMT_CFG_CAM_PARAMS1_RSTDATA & AR_NIC_RMT_CFG_CAM_PARAMS1_SEND_TIMEOUT_VALUE_MASK,
      ._index = AR_NIC_RMT_CFG_CAM_PARAMS1_SEND_TIMEOUT_VALUE_QW,
      ._desc = "Timeout value for BTE_Send sequences",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MAX_CAM_ENTRIES",
      ._bpos = AR_NIC_RMT_CFG_CAM_PARAMS1_MAX_CAM_ENTRIES_BP,
      ._mask = AR_NIC_RMT_CFG_CAM_PARAMS1_MAX_CAM_ENTRIES_MASK,
      ._rval = AR_NIC_RMT_CFG_CAM_PARAMS1_RSTDATA & AR_NIC_RMT_CFG_CAM_PARAMS1_MAX_CAM_ENTRIES_MASK,
      ._index = AR_NIC_RMT_CFG_CAM_PARAMS1_MAX_CAM_ENTRIES_QW,
      ._desc = "Maximum number of active CAM entries RMT may have at any given time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "EVICT_THRESHOLD",
      ._bpos = AR_NIC_RMT_CFG_CAM_PARAMS1_EVICT_THRESHOLD_BP,
      ._mask = AR_NIC_RMT_CFG_CAM_PARAMS1_EVICT_THRESHOLD_MASK,
      ._rval = AR_NIC_RMT_CFG_CAM_PARAMS1_RSTDATA & AR_NIC_RMT_CFG_CAM_PARAMS1_EVICT_THRESHOLD_MASK,
      ._index = AR_NIC_RMT_CFG_CAM_PARAMS1_EVICT_THRESHOLD_QW,
      ._desc = "Send Eviction Threshold",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_cfg_rx_desc_btech_base_idx_detail[] = {
    { ._name = "BTECH3",
      ._bpos = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH3_BP,
      ._mask = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH3_MASK,
      ._rval = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_RSTDATA & AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH3_MASK,
      ._index = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH3_QW,
      ._desc = "BTE RX Descriptor Channel 3 Base Index",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "BTECH2",
      ._bpos = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH2_BP,
      ._mask = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH2_MASK,
      ._rval = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_RSTDATA & AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH2_MASK,
      ._index = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH2_QW,
      ._desc = "BTE RX Descriptor Channel 2 Base Index",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "BTECH1",
      ._bpos = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH1_BP,
      ._mask = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH1_MASK,
      ._rval = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_RSTDATA & AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH1_MASK,
      ._index = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH1_QW,
      ._desc = "BTE RX Descriptor Channel 1 Base Index",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "BTECH0",
      ._bpos = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH0_BP,
      ._mask = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH0_MASK,
      ._rval = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_RSTDATA & AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH0_MASK,
      ._index = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_BTECH0_QW,
      ._desc = "BTE RX Descriptor Channel 0 Base Index",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_cfg_rx_desc_btech_cnt_detail[] = {
    { ._name = "BTECH3",
      ._bpos = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH3_BP,
      ._mask = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH3_MASK,
      ._rval = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_RSTDATA & AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH3_MASK,
      ._index = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH3_QW,
      ._desc = "BTE RX Descriptor Channel 3 Count",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "BTECH2",
      ._bpos = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH2_BP,
      ._mask = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH2_MASK,
      ._rval = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_RSTDATA & AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH2_MASK,
      ._index = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH2_QW,
      ._desc = "BTE RX Descriptor Channel 2 Count",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "BTECH1",
      ._bpos = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH1_BP,
      ._mask = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH1_MASK,
      ._rval = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_RSTDATA & AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH1_MASK,
      ._index = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH1_QW,
      ._desc = "BTE RX Descriptor Channel 1 Count",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "BTECH0",
      ._bpos = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH0_BP,
      ._mask = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH0_MASK,
      ._rval = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_RSTDATA & AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH0_MASK,
      ._index = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_BTECH0_QW,
      ._desc = "BTE RX Descriptor Channel 0 Count",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_flg_detail[] = {
    { ._name = "STALL_DROPPED",
      ._bpos = AR_NIC_RMT_ERR_FLG_STALL_DROPPED_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_STALL_DROPPED_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_STALL_DROPPED_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_STALL_DROPPED_QW,
      ._desc = "A stall operation (an internally generated operation used to perform completion events) was dropped",
      ._type_bitmsk = 0x0000000000040801ull,
      ._access = "RW1"
    },
    { ._name = "BTECH3_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_BTECH3_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_BTECH3_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_BTECH3_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_BTECH3_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 3 failed",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "BTECH3_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_BTECH3_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_BTECH3_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_BTECH3_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_BTECH3_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 3 has been consumed",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "BTECH2_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_BTECH2_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_BTECH2_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_BTECH2_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_BTECH2_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 2 failed",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "BTECH2_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_BTECH2_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_BTECH2_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_BTECH2_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_BTECH2_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 2 has been consumed",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "BTECH1_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_BTECH1_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_BTECH1_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_BTECH1_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_BTECH1_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 1 failed",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "BTECH1_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_BTECH1_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_BTECH1_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_BTECH1_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_BTECH1_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 1 has been consumed",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "BTECH0_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_BTECH0_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_BTECH0_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_BTECH0_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_BTECH0_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 0 failed",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "BTECH0_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FLG_BTECH0_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_BTECH0_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_BTECH0_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_BTECH0_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 0 has been consumed",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "DSMN_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FLG_DSMN_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_DSMN_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_DSMN_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_DSMN_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a DSMN sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000040801ull,
      ._access = "RW1"
    },
    { ._name = "SEND_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FLG_SEND_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_SEND_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_SEND_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_SEND_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a BTE_Send sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000040801ull,
      ._access = "RW1"
    },
    { ._name = "DSMN_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_FLG_DSMN_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_DSMN_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_DSMN_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_DSMN_TIMEOUT_QW,
      ._desc = "A DSMN sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000040801ull,
      ._access = "RW1"
    },
    { ._name = "SEND_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_FLG_SEND_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_SEND_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_SEND_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_SEND_TIMEOUT_QW,
      ._desc = "A BTE_Send sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000040801ull,
      ._access = "RW1"
    },
    { ._name = "RX_OVERRUN",
      ._bpos = AR_NIC_RMT_ERR_FLG_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_RX_OVERRUN_QW,
      ._desc = "RMT received a BTE_Send packet request that exceeded that BTE Channel's RxBufSize",
      ._type_bitmsk = 0x0000000000010801ull,
      ._access = "RW1"
    },
    { ._name = "RX_SEND_CAM_MISS",
      ._bpos = AR_NIC_RMT_ERR_FLG_RX_SEND_CAM_MISS_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_RX_SEND_CAM_MISS_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_RX_SEND_CAM_MISS_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_RX_SEND_CAM_MISS_QW,
      ._desc = "RMT received a BTE_Send packet request for a new sequence, but could not store it in the CAM due to it being full",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "RX_BTECH_UNAVAILABLE",
      ._bpos = AR_NIC_RMT_ERR_FLG_RX_BTECH_UNAVAILABLE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_RX_BTECH_UNAVAILABLE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_RX_BTECH_UNAVAILABLE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_RX_BTECH_UNAVAILABLE_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that does not possess an RX Descriptor",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "RX_DESC_BTECH_INV",
      ._bpos = AR_NIC_RMT_ERR_FLG_RX_DESC_BTECH_INV_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_RX_DESC_BTECH_INV_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_RX_DESC_BTECH_INV_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_RX_DESC_BTECH_INV_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that is not enabled or that is in reset",
      ._type_bitmsk = 0x0000000000010801ull,
      ._access = "RW1"
    },
    { ._name = "UNDELIVERABLE_CQE",
      ._bpos = AR_NIC_RMT_ERR_FLG_UNDELIVERABLE_CQE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_UNDELIVERABLE_CQE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_UNDELIVERABLE_CQE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_UNDELIVERABLE_CQE_QW,
      ._desc = "A CQE Event could not be delivered",
      ._type_bitmsk = 0x0000000000040801ull,
      ._access = "RW1"
    },
    { ._name = "MALFORMED_PKT",
      ._bpos = AR_NIC_RMT_ERR_FLG_MALFORMED_PKT_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_MALFORMED_PKT_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_MALFORMED_PKT_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_MALFORMED_PKT_QW,
      ._desc = "RMT encountered a malformed packet",
      ._type_bitmsk = 0x0000000000040801ull,
      ._access = "RW1"
    },
    { ._name = "DESC_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_DESC_TBL_MBE_QW,
      ._desc = "An uncorrectable error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000200801ull,
      ._access = "RW1"
    },
    { ._name = "DESC_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_DESC_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000004801ull,
      ._access = "RW1"
    },
    { ._name = "SEQ_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_SEQ_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_SEQ_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_SEQ_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_SEQ_TBL_MBE_QW,
      ._desc = "An uncorrectable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000200801ull,
      ._access = "RW1"
    },
    { ._name = "SEQ_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_SEQ_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_SEQ_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_SEQ_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_SEQ_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000004801ull,
      ._access = "RW1"
    },
    { ._name = "PROTOCOL_ERR",
      ._bpos = AR_NIC_RMT_ERR_FLG_PROTOCOL_ERR_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_PROTOCOL_ERR_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_PROTOCOL_ERR_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_PROTOCOL_ERR_QW,
      ._desc = "A DSMN packet hit a BTE_Send sequence in the CAM, or a BTE_Send or BTE_SendComplete packet hit a DSMN sequence in the CAM",
      ._type_bitmsk = 0x0000000000010801ull,
      ._access = "RW1"
    },
    { ._name = "PAYLOAD_MBE_DROP",
      ._bpos = AR_NIC_RMT_ERR_FLG_PAYLOAD_MBE_DROP_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_PAYLOAD_MBE_DROP_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_PAYLOAD_MBE_DROP_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_PAYLOAD_MBE_DROP_QW,
      ._desc = "Reported uncorrectable payload flit ECC error",
      ._type_bitmsk = 0x0000000000080801ull,
      ._access = "RW1"
    },
    { ._name = "PAYLOAD_MBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_PAYLOAD_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_PAYLOAD_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_PAYLOAD_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_PAYLOAD_MBE_QW,
      ._desc = "An uncorrectable payload flit ECC error was detected in the input queue",
      ._type_bitmsk = 0x0000000000040801ull,
      ._access = "RW1"
    },
    { ._name = "PAYLOAD_SBE",
      ._bpos = AR_NIC_RMT_ERR_FLG_PAYLOAD_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_PAYLOAD_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_PAYLOAD_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_PAYLOAD_SBE_QW,
      ._desc = "A correctable payload flit ECC error was detected and corrected in the input queue",
      ._type_bitmsk = 0x0000000000004801ull,
      ._access = "RW1"
    },
    { ._name = "INQ_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FLG_INQ_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_INQ_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_INQ_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_INQ_PARITY_QW,
      ._desc = "A header flit parity error was detected in the input queue, causing the packet to be dropped",
      ._type_bitmsk = 0x0000000000040801ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RMT_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_RMT_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RMT_ERR_FLG_RSTDATA & AR_NIC_RMT_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_RMT_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000100801ull,
      ._access = "RW1,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_clr_detail[] = {
    { ._name = "STALL_DROPPED",
      ._bpos = AR_NIC_RMT_ERR_CLR_STALL_DROPPED_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_STALL_DROPPED_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_STALL_DROPPED_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_STALL_DROPPED_QW,
      ._desc = "A stall operation (an internally generated operation used to perform completion events) was dropped",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTECH3_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_CLR_BTECH3_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_BTECH3_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_BTECH3_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_BTECH3_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 3 failed",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTECH3_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_CLR_BTECH3_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_BTECH3_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_BTECH3_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_BTECH3_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 3 has been consumed",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTECH2_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_CLR_BTECH2_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_BTECH2_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_BTECH2_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_BTECH2_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 2 failed",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTECH2_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_CLR_BTECH2_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_BTECH2_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_BTECH2_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_BTECH2_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 2 has been consumed",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTECH1_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_CLR_BTECH1_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_BTECH1_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_BTECH1_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_BTECH1_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 1 failed",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTECH1_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_CLR_BTECH1_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_BTECH1_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_BTECH1_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_BTECH1_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 1 has been consumed",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTECH0_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_CLR_BTECH0_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_BTECH0_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_BTECH0_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_BTECH0_NO_DESC_QW,
      ._desc = "A request for an RX Descriptor for BTE Channel 0 failed",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTECH0_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_CLR_BTECH0_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_BTECH0_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_BTECH0_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_BTECH0_LAST_DESC_QW,
      ._desc = "The last RX Descriptor for BTE Channel 0 has been consumed",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "DSMN_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_CLR_DSMN_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_DSMN_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_DSMN_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_DSMN_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a DSMN sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "SEND_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_CLR_SEND_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_SEND_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_SEND_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_SEND_CAM_PARITY_QW,
      ._desc = "The scrubber evicted a BTE_Send sequence from the CAM because of a parity error in its CAM tag",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "DSMN_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_CLR_DSMN_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_DSMN_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_DSMN_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_DSMN_TIMEOUT_QW,
      ._desc = "A DSMN sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "SEND_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_CLR_SEND_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_SEND_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_SEND_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_SEND_TIMEOUT_QW,
      ._desc = "A BTE_Send sequence exceeded its time allowed in the CAM",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "RX_OVERRUN",
      ._bpos = AR_NIC_RMT_ERR_CLR_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_RX_OVERRUN_QW,
      ._desc = "RMT received a BTE_Send packet request that exceeded that BTE Channel's RxBufSize",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "RX_SEND_CAM_MISS",
      ._bpos = AR_NIC_RMT_ERR_CLR_RX_SEND_CAM_MISS_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_RX_SEND_CAM_MISS_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_RX_SEND_CAM_MISS_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_RX_SEND_CAM_MISS_QW,
      ._desc = "RMT received a BTE_Send packet request for a new sequence, but could not store it in the CAM due to it being full",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "RX_BTECH_UNAVAILABLE",
      ._bpos = AR_NIC_RMT_ERR_CLR_RX_BTECH_UNAVAILABLE_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_RX_BTECH_UNAVAILABLE_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_RX_BTECH_UNAVAILABLE_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_RX_BTECH_UNAVAILABLE_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that does not possess an RX Descriptor",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "RX_DESC_BTECH_INV",
      ._bpos = AR_NIC_RMT_ERR_CLR_RX_DESC_BTECH_INV_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_RX_DESC_BTECH_INV_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_RX_DESC_BTECH_INV_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_RX_DESC_BTECH_INV_QW,
      ._desc = "RMT received a BTE_Send packet request for a BTE Channel that is not enabled or that is in reset",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "UNDELIVERABLE_CQE",
      ._bpos = AR_NIC_RMT_ERR_CLR_UNDELIVERABLE_CQE_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_UNDELIVERABLE_CQE_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_UNDELIVERABLE_CQE_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_UNDELIVERABLE_CQE_QW,
      ._desc = "A CQE Event could not be delivered",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "MALFORMED_PKT",
      ._bpos = AR_NIC_RMT_ERR_CLR_MALFORMED_PKT_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_MALFORMED_PKT_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_MALFORMED_PKT_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_MALFORMED_PKT_QW,
      ._desc = "RMT encountered a malformed packet",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "DESC_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_CLR_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_DESC_TBL_MBE_QW,
      ._desc = "An uncorrectable error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "DESC_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_CLR_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_DESC_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the RX Descriptor Table",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "SEQ_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_CLR_SEQ_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_SEQ_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_SEQ_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_SEQ_TBL_MBE_QW,
      ._desc = "An uncorrectable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "SEQ_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_CLR_SEQ_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_SEQ_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_SEQ_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_SEQ_TBL_SBE_QW,
      ._desc = "A correctable ECC error occurred while reading the Sequence Table",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "PROTOCOL_ERR",
      ._bpos = AR_NIC_RMT_ERR_CLR_PROTOCOL_ERR_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_PROTOCOL_ERR_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_PROTOCOL_ERR_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_PROTOCOL_ERR_QW,
      ._desc = "A DSMN packet hit a BTE_Send sequence in the CAM, or a BTE_Send or BTE_SendComplete packet hit a DSMN sequence in the CAM",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "PAYLOAD_MBE_DROP",
      ._bpos = AR_NIC_RMT_ERR_CLR_PAYLOAD_MBE_DROP_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_PAYLOAD_MBE_DROP_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_PAYLOAD_MBE_DROP_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_PAYLOAD_MBE_DROP_QW,
      ._desc = "Reported uncorrectable payload flit ECC error",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "PAYLOAD_MBE",
      ._bpos = AR_NIC_RMT_ERR_CLR_PAYLOAD_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_PAYLOAD_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_PAYLOAD_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_PAYLOAD_MBE_QW,
      ._desc = "An uncorrectable payload flit ECC error was detected in the input queue",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "PAYLOAD_SBE",
      ._bpos = AR_NIC_RMT_ERR_CLR_PAYLOAD_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_PAYLOAD_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_PAYLOAD_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_PAYLOAD_SBE_QW,
      ._desc = "A correctable payload flit ECC error was detected and corrected in the input queue",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "INQ_PARITY",
      ._bpos = AR_NIC_RMT_ERR_CLR_INQ_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_INQ_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_INQ_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_INQ_PARITY_QW,
      ._desc = "A header flit parity error was detected in the input queue, causing the packet to be dropped",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RMT_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_RMT_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RMT_ERR_CLR_RSTDATA & AR_NIC_RMT_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_RMT_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_hss_msk_detail[] = {
    { ._name = "STALL_DROPPED",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_STALL_DROPPED_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_STALL_DROPPED_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_STALL_DROPPED_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_STALL_DROPPED_QW,
      ._desc = "28:28",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH3_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_BTECH3_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_BTECH3_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_BTECH3_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_BTECH3_NO_DESC_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH3_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_BTECH3_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_BTECH3_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_BTECH3_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_BTECH3_LAST_DESC_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH2_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_BTECH2_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_BTECH2_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_BTECH2_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_BTECH2_NO_DESC_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH2_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_BTECH2_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_BTECH2_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_BTECH2_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_BTECH2_LAST_DESC_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH1_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_BTECH1_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_BTECH1_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_BTECH1_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_BTECH1_NO_DESC_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH1_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_BTECH1_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_BTECH1_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_BTECH1_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_BTECH1_LAST_DESC_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH0_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_BTECH0_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_BTECH0_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_BTECH0_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_BTECH0_NO_DESC_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH0_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_BTECH0_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_BTECH0_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_BTECH0_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_BTECH0_LAST_DESC_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DSMN_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_DSMN_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_DSMN_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_DSMN_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_DSMN_CAM_PARITY_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEND_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_SEND_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_SEND_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_SEND_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_SEND_CAM_PARITY_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DSMN_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_DSMN_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_DSMN_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_DSMN_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_DSMN_TIMEOUT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEND_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_SEND_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_SEND_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_SEND_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_SEND_TIMEOUT_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_OVERRUN",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_RX_OVERRUN_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_SEND_CAM_MISS",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_RX_SEND_CAM_MISS_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_RX_SEND_CAM_MISS_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_RX_SEND_CAM_MISS_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_RX_SEND_CAM_MISS_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_BTECH_UNAVAILABLE",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_RX_BTECH_UNAVAILABLE_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_RX_BTECH_UNAVAILABLE_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_RX_BTECH_UNAVAILABLE_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_RX_BTECH_UNAVAILABLE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_DESC_BTECH_INV",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_RX_DESC_BTECH_INV_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_RX_DESC_BTECH_INV_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_RX_DESC_BTECH_INV_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_RX_DESC_BTECH_INV_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "UNDELIVERABLE_CQE",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_UNDELIVERABLE_CQE_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_UNDELIVERABLE_CQE_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_UNDELIVERABLE_CQE_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_UNDELIVERABLE_CQE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "MALFORMED_PKT",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_MALFORMED_PKT_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_MALFORMED_PKT_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_MALFORMED_PKT_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_MALFORMED_PKT_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DESC_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_DESC_TBL_MBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DESC_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_DESC_TBL_SBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEQ_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_SEQ_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_SEQ_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_SEQ_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_SEQ_TBL_MBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEQ_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_SEQ_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_SEQ_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_SEQ_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_SEQ_TBL_SBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PROTOCOL_ERR",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_PROTOCOL_ERR_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_PROTOCOL_ERR_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_PROTOCOL_ERR_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_PROTOCOL_ERR_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PAYLOAD_MBE_DROP",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_MBE_DROP_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_MBE_DROP_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_MBE_DROP_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_MBE_DROP_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PAYLOAD_MBE",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_MBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PAYLOAD_SBE",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_PAYLOAD_SBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "INQ_PARITY",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_INQ_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_INQ_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_INQ_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_INQ_PARITY_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RMT_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_RMT_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_RMT_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_os_msk_detail[] = {
    { ._name = "STALL_DROPPED",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_STALL_DROPPED_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_STALL_DROPPED_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_STALL_DROPPED_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_STALL_DROPPED_QW,
      ._desc = "28:28",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH3_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_BTECH3_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_BTECH3_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_BTECH3_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_BTECH3_NO_DESC_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH3_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_BTECH3_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_BTECH3_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_BTECH3_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_BTECH3_LAST_DESC_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH2_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_BTECH2_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_BTECH2_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_BTECH2_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_BTECH2_NO_DESC_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH2_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_BTECH2_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_BTECH2_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_BTECH2_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_BTECH2_LAST_DESC_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH1_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_BTECH1_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_BTECH1_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_BTECH1_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_BTECH1_NO_DESC_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH1_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_BTECH1_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_BTECH1_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_BTECH1_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_BTECH1_LAST_DESC_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH0_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_BTECH0_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_BTECH0_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_BTECH0_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_BTECH0_NO_DESC_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH0_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_BTECH0_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_BTECH0_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_BTECH0_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_BTECH0_LAST_DESC_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DSMN_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_DSMN_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_DSMN_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_DSMN_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_DSMN_CAM_PARITY_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEND_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_SEND_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_SEND_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_SEND_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_SEND_CAM_PARITY_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DSMN_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_DSMN_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_DSMN_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_DSMN_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_DSMN_TIMEOUT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEND_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_SEND_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_SEND_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_SEND_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_SEND_TIMEOUT_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_OVERRUN",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_RX_OVERRUN_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_SEND_CAM_MISS",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_RX_SEND_CAM_MISS_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_RX_SEND_CAM_MISS_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_RX_SEND_CAM_MISS_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_RX_SEND_CAM_MISS_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_BTECH_UNAVAILABLE",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_RX_BTECH_UNAVAILABLE_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_RX_BTECH_UNAVAILABLE_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_RX_BTECH_UNAVAILABLE_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_RX_BTECH_UNAVAILABLE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_DESC_BTECH_INV",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_RX_DESC_BTECH_INV_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_RX_DESC_BTECH_INV_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_RX_DESC_BTECH_INV_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_RX_DESC_BTECH_INV_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "UNDELIVERABLE_CQE",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_UNDELIVERABLE_CQE_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_UNDELIVERABLE_CQE_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_UNDELIVERABLE_CQE_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_UNDELIVERABLE_CQE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "MALFORMED_PKT",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_MALFORMED_PKT_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_MALFORMED_PKT_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_MALFORMED_PKT_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_MALFORMED_PKT_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DESC_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_DESC_TBL_MBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DESC_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_DESC_TBL_SBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEQ_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_SEQ_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_SEQ_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_SEQ_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_SEQ_TBL_MBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEQ_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_SEQ_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_SEQ_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_SEQ_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_SEQ_TBL_SBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PROTOCOL_ERR",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_PROTOCOL_ERR_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_PROTOCOL_ERR_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_PROTOCOL_ERR_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_PROTOCOL_ERR_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PAYLOAD_MBE_DROP",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_MBE_DROP_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_MBE_DROP_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_MBE_DROP_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_MBE_DROP_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PAYLOAD_MBE",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_MBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PAYLOAD_SBE",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_PAYLOAD_SBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "INQ_PARITY",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_INQ_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_INQ_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_INQ_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_INQ_PARITY_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RMT_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_RMT_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RMT_ERR_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_RMT_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_first_flg_detail[] = {
    { ._name = "STALL_DROPPED",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_STALL_DROPPED_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_STALL_DROPPED_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_STALL_DROPPED_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_STALL_DROPPED_QW,
      ._desc = "28:28",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH3_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_BTECH3_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_BTECH3_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_BTECH3_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_BTECH3_NO_DESC_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH3_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_BTECH3_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_BTECH3_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_BTECH3_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_BTECH3_LAST_DESC_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH2_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_BTECH2_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_BTECH2_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_BTECH2_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_BTECH2_NO_DESC_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH2_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_BTECH2_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_BTECH2_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_BTECH2_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_BTECH2_LAST_DESC_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH1_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_BTECH1_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_BTECH1_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_BTECH1_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_BTECH1_NO_DESC_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH1_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_BTECH1_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_BTECH1_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_BTECH1_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_BTECH1_LAST_DESC_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH0_NO_DESC",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_BTECH0_NO_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_BTECH0_NO_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_BTECH0_NO_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_BTECH0_NO_DESC_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTECH0_LAST_DESC",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_BTECH0_LAST_DESC_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_BTECH0_LAST_DESC_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_BTECH0_LAST_DESC_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_BTECH0_LAST_DESC_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DSMN_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_DSMN_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_DSMN_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_DSMN_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_DSMN_CAM_PARITY_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEND_CAM_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_SEND_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_SEND_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_SEND_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_SEND_CAM_PARITY_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DSMN_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_DSMN_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_DSMN_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_DSMN_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_DSMN_TIMEOUT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEND_TIMEOUT",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_SEND_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_SEND_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_SEND_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_SEND_TIMEOUT_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_OVERRUN",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_RX_OVERRUN_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_SEND_CAM_MISS",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_RX_SEND_CAM_MISS_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_RX_SEND_CAM_MISS_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_RX_SEND_CAM_MISS_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_RX_SEND_CAM_MISS_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_BTECH_UNAVAILABLE",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_RX_BTECH_UNAVAILABLE_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_RX_BTECH_UNAVAILABLE_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_RX_BTECH_UNAVAILABLE_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_RX_BTECH_UNAVAILABLE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "RX_DESC_BTECH_INV",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_RX_DESC_BTECH_INV_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_RX_DESC_BTECH_INV_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_RX_DESC_BTECH_INV_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_RX_DESC_BTECH_INV_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "UNDELIVERABLE_CQE",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_UNDELIVERABLE_CQE_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_UNDELIVERABLE_CQE_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_UNDELIVERABLE_CQE_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_UNDELIVERABLE_CQE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "MALFORMED_PKT",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_MALFORMED_PKT_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_MALFORMED_PKT_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_MALFORMED_PKT_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_MALFORMED_PKT_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DESC_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_DESC_TBL_MBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DESC_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_DESC_TBL_SBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEQ_TBL_MBE",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_SEQ_TBL_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_SEQ_TBL_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_SEQ_TBL_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_SEQ_TBL_MBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "SEQ_TBL_SBE",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_SEQ_TBL_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_SEQ_TBL_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_SEQ_TBL_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_SEQ_TBL_SBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PROTOCOL_ERR",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_PROTOCOL_ERR_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_PROTOCOL_ERR_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_PROTOCOL_ERR_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_PROTOCOL_ERR_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PAYLOAD_MBE_DROP",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_MBE_DROP_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_MBE_DROP_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_MBE_DROP_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_MBE_DROP_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PAYLOAD_MBE",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_MBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "PAYLOAD_SBE",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_PAYLOAD_SBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "INQ_PARITY",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_INQ_PARITY_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_INQ_PARITY_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_INQ_PARITY_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_INQ_PARITY_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RMT_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_RMT_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RMT_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_RMT_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_info_hss_msk_detail[] = {
    { ._name = "MSK",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_MSK_MSK_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_MSK_MSK_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_MSK_MSK_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_MSK_MSK_QW,
      ._desc = "Masks updates to RMT_ERR_INFO_HSS_PKT (see Section 6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_MSK_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_info_os_msk_detail[] = {
    { ._name = "MSK",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_MSK_MSK_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_MSK_MSK_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_MSK_MSK_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_MSK_MSK_QW,
      ._desc = "Masks updates to RMT_ERR_INFO_OS_PKT (see Section 6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_MSK_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_MSK_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_info_desc_tbl_ecc_detail[] = {
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MBE_ADDRESS_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MBE_ADDRESS_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MBE_ADDRESS_QW,
      ._desc = "Address of MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MBE_SYNDROME_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MBE_SYNDROME_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MBE_SYNDROME_QW,
      ._desc = "MBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_SBE_ADDRESS_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_SBE_ADDRESS_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_SBE_ADDRESS_QW,
      ._desc = "Address of SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_SBE_SYNDROME_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_SBE_SYNDROME_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_SBE_SYNDROME_QW,
      ._desc = "SBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_MBE",
      ._bpos = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MMR_DETECTED_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MMR_DETECTED_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MMR_DETECTED_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MMR_DETECTED_MBE_QW,
      ._desc = "The MBE was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_SBE",
      ._bpos = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MMR_DETECTED_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MMR_DETECTED_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MMR_DETECTED_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_MMR_DETECTED_SBE_QW,
      ._desc = "The SBE was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_info_seq_tbl_ecc_detail[] = {
    { ._name = "MBE_RAM_MSK",
      ._bpos = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_RAM_MSK_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_RAM_MSK_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_RAM_MSK_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_RAM_MSK_QW,
      ._desc = "The mask of the first rams to record uncorrectable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_ADDRESS_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_ADDRESS_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_ADDRESS_QW,
      ._desc = "Address of MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_SYNDROME_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_SYNDROME_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MBE_SYNDROME_QW,
      ._desc = "MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_RAM_MSK",
      ._bpos = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_RAM_MSK_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_RAM_MSK_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_RAM_MSK_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_RAM_MSK_QW,
      ._desc = "The mask of the first rams to record correctable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_ADDRESS_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_ADDRESS_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_ADDRESS_QW,
      ._desc = "Address of SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_SYNDROME_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_SYNDROME_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_SBE_SYNDROME_QW,
      ._desc = "SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_MBE",
      ._bpos = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MMR_DETECTED_MBE_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MMR_DETECTED_MBE_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MMR_DETECTED_MBE_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MMR_DETECTED_MBE_QW,
      ._desc = "The MBE was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_SBE",
      ._bpos = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MMR_DETECTED_SBE_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MMR_DETECTED_SBE_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MMR_DETECTED_SBE_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_MMR_DETECTED_SBE_QW,
      ._desc = "The SBE was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_info_inq_parity_detail[] = {
    { ._name = "MSK",
      ._bpos = AR_NIC_RMT_ERR_INFO_INQ_PARITY_MSK_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_INQ_PARITY_MSK_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_INQ_PARITY_RSTDATA & AR_NIC_RMT_ERR_INFO_INQ_PARITY_MSK_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_INQ_PARITY_MSK_QW,
      ._desc = "The mask of parity regions in error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_info_payload_ecc_detail[] = {
    { ._name = "MBE_MSK",
      ._bpos = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_MBE_MSK_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_MBE_MSK_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_MBE_MSK_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_MBE_MSK_QW,
      ._desc = "The mask of ECC regions that experienced an MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_MBE_SYNDROME_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_MBE_SYNDROME_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_MBE_SYNDROME_QW,
      ._desc = "The MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_MSK",
      ._bpos = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_SBE_MSK_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_SBE_MSK_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_SBE_MSK_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_SBE_MSK_QW,
      ._desc = "The mask of ECC regions that experienced an SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_SBE_SYNDROME_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_RSTDATA & AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_SBE_SYNDROME_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_SBE_SYNDROME_QW,
      ._desc = "The SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_info_hss_pkt_detail[] = {
    { ._name = "ERR_FLG_NUM",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_PKT_ERR_FLG_NUM_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_PKT_ERR_FLG_NUM_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_PKT_ERR_FLG_NUM_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_PKT_ERR_FLG_NUM_QW,
      ._desc = "The encoded error flag number of the error recorded here",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "CAM_HIT",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_HIT_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_HIT_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_HIT_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_HIT_QW,
      ._desc = "Set if the packet hit in the CAM",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "CAM_FILL",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_FILL_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_FILL_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_FILL_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_FILL_QW,
      ._desc = "Set if the packet filled in the CAM",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "CAM_IDX",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_IDX_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_IDX_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_IDX_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_PKT_CAM_IDX_QW,
      ._desc = "CAM index",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_PKT_PKTID_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_PKT_PKTID_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_PKT_PKTID_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_PKT_PKTID_QW,
      ._desc = "pktID from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_PKT_REQCMD_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_PKT_REQCMD_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_PKT_REQCMD_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_PKT_REQCMD_QW,
      ._desc = "Command from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "SOURCE",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_PKT_SOURCE_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_PKT_SOURCE_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_PKT_SOURCE_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_PKT_SOURCE_QW,
      ._desc = "Source from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "SRCID",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_PKT_SRCID_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_PKT_SRCID_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_PKT_SRCID_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_PKT_SRCID_QW,
      ._desc = "srcid from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_RMT_ERR_INFO_HSS_PKT_SSID_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_HSS_PKT_SSID_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_HSS_PKT_SSID_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_HSS_PKT_SSID_QW,
      ._desc = "SSID from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_err_info_os_pkt_detail[] = {
    { ._name = "ERR_FLG_NUM",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_PKT_ERR_FLG_NUM_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_PKT_ERR_FLG_NUM_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_PKT_ERR_FLG_NUM_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_PKT_ERR_FLG_NUM_QW,
      ._desc = "The encoded error flag number of the error recorded here",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "CAM_HIT",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_HIT_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_HIT_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_HIT_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_HIT_QW,
      ._desc = "Set if the packet hit in the CAM",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "CAM_FILL",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_FILL_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_FILL_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_FILL_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_FILL_QW,
      ._desc = "Set if the packet filled in the CAM",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "CAM_IDX",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_IDX_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_IDX_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_IDX_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_PKT_CAM_IDX_QW,
      ._desc = "CAM index",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_PKT_PKTID_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_PKT_PKTID_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_PKT_PKTID_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_PKT_PKTID_QW,
      ._desc = "PktId from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_PKT_REQCMD_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_PKT_REQCMD_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_PKT_REQCMD_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_PKT_REQCMD_QW,
      ._desc = "Command from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "SOURCE",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_PKT_SOURCE_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_PKT_SOURCE_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_PKT_SOURCE_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_PKT_SOURCE_QW,
      ._desc = "Source from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "SRCID",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_PKT_SRCID_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_PKT_SRCID_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_PKT_SRCID_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_PKT_SRCID_QW,
      ._desc = "SrcID from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_RMT_ERR_INFO_OS_PKT_SSID_BP,
      ._mask = AR_NIC_RMT_ERR_INFO_OS_PKT_SSID_MASK,
      ._rval = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA & AR_NIC_RMT_ERR_INFO_OS_PKT_SSID_MASK,
      ._index = AR_NIC_RMT_ERR_INFO_OS_PKT_SSID_QW,
      ._desc = "SSID from packet header",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_dbg_errinj_desc_tbl_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_ADDRESS_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_ADDRESS_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_ADDRESS_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_ADDRESS_QW,
      ._desc = "Descriptor Table Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_CHECKBITS_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_CHECKBITS_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_CHECKBITS_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_CHECKBITS_QW,
      ._desc = "Mask of checkbits to invert",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_TRIGGERED_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_TRIGGERED_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_TRIGGERED_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_TRIGGERED_QW,
      ._desc = "This bit is set when an error is injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_MODE_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_MODE_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_MODE_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_MODE_QW,
      ._desc = "Error Injection Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_ENABLE_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_ENABLE_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_ENABLE_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_dbg_errinj_seq_tbl_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_ADDRESS_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_ADDRESS_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_ADDRESS_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_ADDRESS_QW,
      ._desc = "Descriptor Table Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_CHECKBITS_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_CHECKBITS_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_CHECKBITS_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_CHECKBITS_QW,
      ._desc = "Mask of checkbits to invert",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MSK",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_MSK_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_MSK_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_MSK_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_MSK_QW,
      ._desc = "Mask of RAMs to affect",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_TRIGGERED_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_TRIGGERED_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_TRIGGERED_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_TRIGGERED_QW,
      ._desc = "This bit is set when an error is injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_MODE_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_MODE_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_MODE_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_MODE_QW,
      ._desc = "Error Injection Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_ENABLE_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_ENABLE_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_ENABLE_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_dbg_errinj_inq_detail[] = {
    { ._name = "CHECKBITSUP",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_INQ_CHECKBITSUP_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_INQ_CHECKBITSUP_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_INQ_CHECKBITSUP_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_INQ_CHECKBITSUP_QW,
      ._desc = "Mask of checkbits to invert in upper ECC region",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITSLO",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_INQ_CHECKBITSLO_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_INQ_CHECKBITSLO_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_INQ_CHECKBITSLO_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_INQ_CHECKBITSLO_QW,
      ._desc = "Mask of checkbits to invert in lower ECC region",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_INQ_PARITY_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_INQ_PARITY_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_INQ_PARITY_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_INQ_PARITY_QW,
      ._desc = "Mask of parity bits to invert",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_INQ_TAIL_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_INQ_TAIL_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_INQ_TAIL_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_INQ_TAIL_QW,
      ._desc = "Set to invert the tail bit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_INQ_COUNT_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_INQ_COUNT_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_INQ_COUNT_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_INQ_COUNT_QW,
      ._desc = "Flit in which to inject the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_INQ_TRIGGERED_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_INQ_TRIGGERED_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_INQ_TRIGGERED_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_INQ_TRIGGERED_QW,
      ._desc = "This bit is set when an error is injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_INQ_MODE_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_INQ_MODE_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_INQ_MODE_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_INQ_MODE_QW,
      ._desc = "Error Injection Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_INQ_ENABLE_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_INQ_ENABLE_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_INQ_ENABLE_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_INQ_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_dbg_errinj_cam_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_CAM_ADDRESS_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_CAM_ADDRESS_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_CAM_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_CAM_ADDRESS_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_CAM_ADDRESS_QW,
      ._desc = "CAM Index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_CAM_TRIGGERED_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_CAM_TRIGGERED_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_CAM_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_CAM_TRIGGERED_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_CAM_TRIGGERED_QW,
      ._desc = "This bit is set when an error is injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_CAM_MODE_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_CAM_MODE_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_CAM_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_CAM_MODE_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_CAM_MODE_QW,
      ._desc = "Error Injection Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_RMT_DBG_ERRINJ_CAM_ENABLE_BP,
      ._mask = AR_NIC_RMT_DBG_ERRINJ_CAM_ENABLE_MASK,
      ._rval = AR_NIC_RMT_DBG_ERRINJ_CAM_RSTDATA & AR_NIC_RMT_DBG_ERRINJ_CAM_ENABLE_MASK,
      ._index = AR_NIC_RMT_DBG_ERRINJ_CAM_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_prf_put_bytes_rx_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_RMT_PRF_PUT_BYTES_RX_CNT_BP,
      ._mask = AR_NIC_RMT_PRF_PUT_BYTES_RX_CNT_MASK,
      ._rval = AR_NIC_RMT_PRF_PUT_BYTES_RX_RSTDATA & AR_NIC_RMT_PRF_PUT_BYTES_RX_CNT_MASK,
      ._index = AR_NIC_RMT_PRF_PUT_BYTES_RX_CNT_QW,
      ._desc = "Count of PUT bytes received",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_prf_send_bytes_rx_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_RMT_PRF_SEND_BYTES_RX_CNT_BP,
      ._mask = AR_NIC_RMT_PRF_SEND_BYTES_RX_CNT_MASK,
      ._rval = AR_NIC_RMT_PRF_SEND_BYTES_RX_RSTDATA & AR_NIC_RMT_PRF_SEND_BYTES_RX_CNT_MASK,
      ._index = AR_NIC_RMT_PRF_SEND_BYTES_RX_CNT_QW,
      ._desc = "Count of BTE_Send bytes received",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_dbg_rx_cam_detail[] = {
    { ._name = "CAM_STATE",
      ._bpos = AR_NIC_RMT_DBG_RX_CAM_CAM_STATE_BP,
      ._mask = AR_NIC_RMT_DBG_RX_CAM_CAM_STATE_MASK,
      ._rval = AR_NIC_RMT_DBG_RX_CAM_RSTDATA & AR_NIC_RMT_DBG_RX_CAM_CAM_STATE_MASK,
      ._index = AR_NIC_RMT_DBG_RX_CAM_CAM_STATE_QW,
      ._desc = "CAM State",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "CAM_PARITY",
      ._bpos = AR_NIC_RMT_DBG_RX_CAM_CAM_PARITY_BP,
      ._mask = AR_NIC_RMT_DBG_RX_CAM_CAM_PARITY_MASK,
      ._rval = AR_NIC_RMT_DBG_RX_CAM_RSTDATA & AR_NIC_RMT_DBG_RX_CAM_CAM_PARITY_MASK,
      ._index = AR_NIC_RMT_DBG_RX_CAM_CAM_PARITY_QW,
      ._desc = "CAM Tag Parity",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CAM_SOURCE",
      ._bpos = AR_NIC_RMT_DBG_RX_CAM_CAM_SOURCE_BP,
      ._mask = AR_NIC_RMT_DBG_RX_CAM_CAM_SOURCE_MASK,
      ._rval = AR_NIC_RMT_DBG_RX_CAM_RSTDATA & AR_NIC_RMT_DBG_RX_CAM_CAM_SOURCE_MASK,
      ._index = AR_NIC_RMT_DBG_RX_CAM_CAM_SOURCE_QW,
      ._desc = "CAM Source from packet header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CAM_SRCID",
      ._bpos = AR_NIC_RMT_DBG_RX_CAM_CAM_SRCID_BP,
      ._mask = AR_NIC_RMT_DBG_RX_CAM_CAM_SRCID_MASK,
      ._rval = AR_NIC_RMT_DBG_RX_CAM_RSTDATA & AR_NIC_RMT_DBG_RX_CAM_CAM_SRCID_MASK,
      ._index = AR_NIC_RMT_DBG_RX_CAM_CAM_SRCID_QW,
      ._desc = "CAM SrcID from packet header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CAM_SSID",
      ._bpos = AR_NIC_RMT_DBG_RX_CAM_CAM_SSID_BP,
      ._mask = AR_NIC_RMT_DBG_RX_CAM_CAM_SSID_MASK,
      ._rval = AR_NIC_RMT_DBG_RX_CAM_RSTDATA & AR_NIC_RMT_DBG_RX_CAM_CAM_SSID_MASK,
      ._index = AR_NIC_RMT_DBG_RX_CAM_CAM_SSID_QW,
      ._desc = "CAM SSID from packet header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rmt_dbg_seq_tbl_detail[] = {
    { ._name = "RX_IMM_DATA",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_IMM_DATA_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_IMM_DATA_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW4 & AR_NIC_RMT_DBG_SEQ_TBL_RX_IMM_DATA_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_IMM_DATA_QW,
      ._desc = "When BTE_SEND = 1, Rx Descriptor Immediate data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "FLAG_DATA",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_FLAG_DATA_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_FLAG_DATA_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW4 & AR_NIC_RMT_DBG_SEQ_TBL_FLAG_DATA_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_FLAG_DATA_QW,
      ._desc = "When BTE_SEND = 0, Flag data",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_PI_HINTS_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_PI_HINTS_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW3 & AR_NIC_RMT_DBG_SEQ_TBL_PI_HINTS_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_PI_HINTS_QW,
      ._desc = "When BTE_SEND = 1, it is set to pi_hints[2:0] from RX Descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR_LOC",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_ERR_LOC_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_ERR_LOC_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW3 & AR_NIC_RMT_DBG_SEQ_TBL_ERR_LOC_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_ERR_LOC_QW,
      ._desc = "Error Location",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "RX_STATUS",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_STATUS_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_STATUS_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW3 & AR_NIC_RMT_DBG_SEQ_TBL_RX_STATUS_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_STATUS_QW,
      ._desc = "Status of packets received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "RX_DESC_ADDR",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_DESC_ADDR_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_DESC_ADDR_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW3 & AR_NIC_RMT_DBG_SEQ_TBL_RX_DESC_ADDR_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_DESC_ADDR_QW,
      ._desc = "When BTE_SEND = 1, BTE CPU RX Descriptor write address",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "FLAG_DATA_ADDR",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_FLAG_DATA_ADDR_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_FLAG_DATA_ADDR_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW3 & AR_NIC_RMT_DBG_SEQ_TBL_FLAG_DATA_ADDR_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_FLAG_DATA_ADDR_QW,
      ._desc = "When BTE_SEND = 0, Flag data write address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "BTECH",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_BTECH_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_BTECH_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW3 & AR_NIC_RMT_DBG_SEQ_TBL_BTECH_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_BTECH_QW,
      ._desc = "When BTE_SEND = 1, BTE channel",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "FIRST_RX",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_FIRST_RX_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_FIRST_RX_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW3 & AR_NIC_RMT_DBG_SEQ_TBL_FIRST_RX_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_FIRST_RX_QW,
      ._desc = "First packet in sequence has been received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "RX_COMPLETE",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_COMPLETE_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_COMPLETE_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW2 & AR_NIC_RMT_DBG_SEQ_TBL_RX_COMPLETE_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_COMPLETE_QW,
      ._desc = "Sequence processing has been finalized",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "EVICTED",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_EVICTED_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_EVICTED_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW2 & AR_NIC_RMT_DBG_SEQ_TBL_EVICTED_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_EVICTED_QW,
      ._desc = "Sequence has been evicted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MSGCMP_TC",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_MSGCMP_TC_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_MSGCMP_TC_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW2 & AR_NIC_RMT_DBG_SEQ_TBL_MSGCMP_TC_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_MSGCMP_TC_QW,
      ._desc = "When BTE_SEND = 0, MsgComplete Translation Context",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "RX_LENGTH_19_0",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_LENGTH_19_0_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_LENGTH_19_0_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW2 & AR_NIC_RMT_DBG_SEQ_TBL_RX_LENGTH_19_0_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_LENGTH_19_0_QW,
      ._desc = "When BTE_SEND = 1, bits 19:0 of Rx Length for BTE_SEND sequences",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "RX_BASE_ADDR",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_BASE_ADDR_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_BASE_ADDR_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW2 & AR_NIC_RMT_DBG_SEQ_TBL_RX_BASE_ADDR_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_BASE_ADDR_QW,
      ._desc = "When BTE_SEND = 1, Rx base address bits 47:6 to apply offset for BTE_SEND sequence packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQ_DATA",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_CQ_DATA_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_CQ_DATA_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW2 & AR_NIC_RMT_DBG_SEQ_TBL_CQ_DATA_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_CQ_DATA_QW,
      ._desc = "When BTE_SEND = 0, data of CQE on completion",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "CQ_HANDLE",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_CQ_HANDLE_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_CQ_HANDLE_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW1 & AR_NIC_RMT_DBG_SEQ_TBL_CQ_HANDLE_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_CQ_HANDLE_QW,
      ._desc = "When BTE_SEND = 0, this is the CQ handle for this sequence",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "RX_LENGTH_31_20",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_LENGTH_31_20_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_LENGTH_31_20_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW1 & AR_NIC_RMT_DBG_SEQ_TBL_RX_LENGTH_31_20_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_LENGTH_31_20_QW,
      ._desc = "When BTE_SEND = 1, bits 31:20 of Rx Length for BTE_SEND sequence",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "RX_DELAY_IRQ_EN",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_DELAY_IRQ_EN_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_DELAY_IRQ_EN_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW1 & AR_NIC_RMT_DBG_SEQ_TBL_RX_DELAY_IRQ_EN_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_DELAY_IRQ_EN_QW,
      ._desc = "When BTE_SEND = 1 and RX_IRQ_EN = 1, an IRQ is queued on completion of this sequence until the IDV timer expires",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "RX_IRQ_EN",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_IRQ_EN_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_IRQ_EN_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW1 & AR_NIC_RMT_DBG_SEQ_TBL_RX_IRQ_EN_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_IRQ_EN_QW,
      ._desc = "When BTE_SEND = 1, issue IRQ on completion of this sequence",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "RX_OVERRUN",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_OVERRUN_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_OVERRUN_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW1 & AR_NIC_RMT_DBG_SEQ_TBL_RX_OVERRUN_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_OVERRUN_QW,
      ._desc = "When BTE_SEND = 1, indicates a buffer overrun has occurred during receipt of this sequence",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "FLAG_OP",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_FLAG_OP_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_FLAG_OP_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW1 & AR_NIC_RMT_DBG_SEQ_TBL_FLAG_OP_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_FLAG_OP_QW,
      ._desc = "When BTE_SEND = 0, Flag data operation to be performed on completion",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "RX_IMM_EN",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_RX_IMM_EN_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_RX_IMM_EN_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW1 & AR_NIC_RMT_DBG_SEQ_TBL_RX_IMM_EN_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_RX_IMM_EN_QW,
      ._desc = "When BTE_SEND = 1, indicates RX_IMM_DATA is valid",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "TIMEOUT",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_TIMEOUT_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_TIMEOUT_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW1 & AR_NIC_RMT_DBG_SEQ_TBL_TIMEOUT_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_TIMEOUT_QW,
      ._desc = "This sequence has timed out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "PKT_CNT",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_PKT_CNT_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_PKT_CNT_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW0 & AR_NIC_RMT_DBG_SEQ_TBL_PKT_CNT_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_PKT_CNT_QW,
      ._desc = "Sequence packet count, modulo 216",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_PKTID_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_PKTID_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW0 & AR_NIC_RMT_DBG_SEQ_TBL_PKTID_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_PKTID_QW,
      ._desc = "Packet identifier from header of last packet received in this sequence",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "EPOCH_TIME",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_TIME_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_TIME_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW0 & AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_TIME_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_TIME_QW,
      ._desc = "Time to live of this sequence entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "EPOCH_MODE",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_MODE_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_MODE_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW0 & AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_MODE_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_MODE_QW,
      ._desc = "If 1, EPOCH_TIME time to live is updated for on the arrival of each packet in this sequence",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "EPOCH_EN",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_EN_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_EN_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW0 & AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_EN_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_EPOCH_EN_QW,
      ._desc = "If 1, EPOCH_TIME time to live is valid and this sequence can timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "PKT_FLUSH",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_PKT_FLUSH_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_PKT_FLUSH_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW0 & AR_NIC_RMT_DBG_SEQ_TBL_PKT_FLUSH_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_PKT_FLUSH_QW,
      ._desc = "Packet flush (fc) field from header of the MsgComplete packet received in this sequence",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MSG_COMPLETE_RX",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_MSG_COMPLETE_RX_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_MSG_COMPLETE_RX_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW0 & AR_NIC_RMT_DBG_SEQ_TBL_MSG_COMPLETE_RX_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_MSG_COMPLETE_RX_QW,
      ._desc = "If 1, a MsgSendComplete or BTE_SendComplete for this sequence has been received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "BTE_SEND",
      ._bpos = AR_NIC_RMT_DBG_SEQ_TBL_BTE_SEND_BP,
      ._mask = AR_NIC_RMT_DBG_SEQ_TBL_BTE_SEND_MASK,
      ._rval = AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW0 & AR_NIC_RMT_DBG_SEQ_TBL_BTE_SEND_MASK,
      ._index = AR_NIC_RMT_DBG_SEQ_TBL_BTE_SEND_QW,
      ._desc = "If 1, BTE_Send sequence field of Sequence Table are valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR RMT DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_rval[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSTDATA_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_rmsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSTMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_wrmsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_WRTMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_rdmsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RDMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RDMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_xsmsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_XSMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_XSMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_wsemsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_WSEMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_rsemsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSEMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_w1smsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_W1SMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_w1cmsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_W1CMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_wrstmsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_WRSTMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_hwwmsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_HWWMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_hwrmsk[3] = {
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_HWRMASK_QW1,
	AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_rval[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_rmsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_wrmsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_rdmsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RDMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_xsmsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_XSMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_wsemsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_rsemsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_w1smsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_w1cmsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_wrstmsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_hwwmsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_hwrmsk[2] = {
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_rval[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSTDATA_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSTDATA_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_rmsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSTMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSTMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_wrmsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_WRTMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_WRTMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_rdmsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RDMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RDMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RDMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_xsmsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_XSMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_XSMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_XSMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_wsemsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_WSEMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_WSEMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_rsemsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSEMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSEMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_w1smsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_W1SMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_W1SMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_w1cmsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_W1CMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_W1CMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_wrstmsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_WRSTMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_hwwmsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_HWWMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_HWWMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_hi_rmt_hwrmsk[3] = {
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_HWRMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_HWRMASK_QW1,
	AR_NIC_RMT_ERR_FLG_1_HI_RMT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_rval[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_rmsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_wrmsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_WRTMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_rdmsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_RDMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_RDMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_xsmsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_XSMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_XSMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_wsemsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_WSEMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_rsemsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSEMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_w1smsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_W1SMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_w1cmsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_W1CMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_wrstmsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_hwwmsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_HWWMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rmt_err_flg_1_mid_rmt_hwrmsk[2] = {
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_HWRMASK_QW0,
	AR_NIC_RMT_ERR_FLG_1_MID_RMT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_rval[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSTDATA_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_rmsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSTMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_wrmsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_WRTMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_rdmsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RDMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RDMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_xsmsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_XSMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_XSMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_wsemsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_WSEMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_rsemsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSEMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_w1smsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_W1SMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_w1cmsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_W1CMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_wrstmsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_WRSTMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_hwwmsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_HWWMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_hi_rmt_hwrmsk[3] = {
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_HWRMASK_QW1,
	AR_NIC_RMT_RMT_CAM_2_HI_RMT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_rval[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_rmsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_wrmsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_rdmsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_RDMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_xsmsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_XSMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_wsemsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_rsemsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_w1smsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_w1cmsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_wrstmsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_hwwmsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cam_2_mid_rmt_hwrmsk[2] = {
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_CAM_2_MID_RMT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_rval[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_rmsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_wrmsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_WRTMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_rdmsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RDMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RDMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_xsmsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_XSMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_XSMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_wsemsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_WSEMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_rsemsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSEMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_w1smsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_W1SMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_w1cmsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_W1CMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_wrstmsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_WRSTMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_hwwmsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_HWWMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt_hwrmsk[3] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_HWRMASK_QW1,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_rval[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_rmsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_wrmsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_rdmsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RDMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_xsmsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_XSMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_wsemsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_rsemsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_w1smsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_w1cmsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_wrstmsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_hwwmsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt_hwrmsk[2] = {
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_rval[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTDATA_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_rmsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_wrmsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_WRTMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_rdmsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RDMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RDMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_xsmsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_XSMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_XSMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_wsemsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_WSEMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_rsemsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSEMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_w1smsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_W1SMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_w1cmsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_W1CMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_wrstmsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_WRSTMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_hwwmsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_HWWMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_hwrmsk[3] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_HWRMASK_QW1,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_rval[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_rmsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_wrmsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_rdmsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RDMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_xsmsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_XSMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_wsemsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_rsemsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_w1smsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_w1cmsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_wrstmsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_hwwmsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_hwrmsk[2] = {
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_rval[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSTDATA_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_rmsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSTMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_wrmsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_WRTMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_rdmsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RDMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RDMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_xsmsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_XSMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_XSMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_wsemsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_WSEMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_rsemsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSEMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_w1smsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_W1SMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_w1cmsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_W1CMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_wrstmsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_WRSTMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_hwwmsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_HWWMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_hi_rmt_hwrmsk[3] = {
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_HWRMASK_QW1,
	AR_NIC_RMT_RMT_CQ_5_HI_RMT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_rval[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_rmsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_wrmsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_rdmsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_RDMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_xsmsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_XSMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_wsemsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_rsemsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_w1smsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_w1cmsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_wrstmsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_hwwmsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_cq_5_mid_rmt_hwrmsk[2] = {
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_CQ_5_MID_RMT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_rval[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSTDATA_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_rmsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSTMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_wrmsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_WRTMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_rdmsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RDMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RDMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RDMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_xsmsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_XSMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_XSMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_XSMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_wsemsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_WSEMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_rsemsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSEMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_w1smsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_W1SMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_w1cmsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_W1CMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_wrstmsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_WRSTMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_hwwmsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_HWWMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_hwrmsk[3] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_HWRMASK_QW1,
	AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_rval[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_rmsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_wrmsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_rdmsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_RDMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_RDMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_xsmsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_XSMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_XSMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_wsemsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_rsemsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_w1smsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_w1cmsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_wrstmsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_hwwmsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_hwrmsk[2] = {
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_rval[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSTDATA_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_rmsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSTMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_wrmsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_WRTMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_rdmsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RDMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RDMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_xsmsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_XSMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_XSMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_wsemsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_WSEMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_rsemsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSEMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_w1smsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_W1SMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_w1cmsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_W1CMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_wrstmsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_WRSTMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_hwwmsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_HWWMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_hwrmsk[3] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_HWRMASK_QW1,
	AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_rval[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_RSTDATA_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_rmsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_RSTMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_wrmsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_WRTMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_rdmsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_RDMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_RDMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_xsmsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_XSMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_XSMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_wsemsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_WSEMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_rsemsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_RSEMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_w1smsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_W1SMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_w1cmsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_W1CMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_wrstmsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_WRSTMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_hwwmsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_HWWMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_hwrmsk[2] = {
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_HWRMASK_QW0,
	AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_rval[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTDATA_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_rmsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSTMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_wrmsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WRTMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WRTMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WRTMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WRTMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_rdmsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RDMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RDMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RDMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RDMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_xsmsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_XSMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_XSMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_XSMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_XSMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_wsemsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WSEMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WSEMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WSEMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WSEMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_rsemsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSEMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSEMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSEMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RSEMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_w1smsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_W1SMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_W1SMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_W1SMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_W1SMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_w1cmsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_W1CMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_W1CMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_W1CMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_W1CMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_wrstmsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WRSTMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WRSTMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WRSTMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_WRSTMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_hwwmsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_HWWMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_HWWMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_HWWMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_HWWMASK_QW3
};
static const uint64_t __ar_nic_rmt_cfg_bte_rx_chan_desc_hwrmsk[4] = {
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_HWRMASK_QW0,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_HWRMASK_QW1,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_HWRMASK_QW2,
	AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_HWRMASK_QW3
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_rval[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_RSTDATA_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_rmsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_RSTMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_RSTMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_RSTMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_RSTMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_RSTMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_wrmsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_WRTMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_WRTMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_WRTMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_WRTMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_WRTMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_rdmsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_RDMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_RDMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_RDMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_RDMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_RDMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_xsmsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_XSMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_XSMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_XSMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_XSMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_XSMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_wsemsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_WSEMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_WSEMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_WSEMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_WSEMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_WSEMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_rsemsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_RSEMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_RSEMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_RSEMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_RSEMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_RSEMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_w1smsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_W1SMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_W1SMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_W1SMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_W1SMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_W1SMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_w1cmsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_W1CMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_W1CMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_W1CMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_W1CMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_W1CMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_wrstmsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_WRSTMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_WRSTMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_WRSTMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_WRSTMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_WRSTMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_hwwmsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_HWWMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_HWWMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_HWWMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_HWWMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_HWWMASK_QW4
};
static const uint64_t __ar_nic_rmt_dbg_seq_tbl_hwrmsk[5] = {
	AR_NIC_RMT_DBG_SEQ_TBL_HWRMASK_QW0,
	AR_NIC_RMT_DBG_SEQ_TBL_HWRMASK_QW1,
	AR_NIC_RMT_DBG_SEQ_TBL_HWRMASK_QW2,
	AR_NIC_RMT_DBG_SEQ_TBL_HWRMASK_QW3,
	AR_NIC_RMT_DBG_SEQ_TBL_HWRMASK_QW4
};

/*
 *  AR RMT MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_rmt_cfg_bte_rx_desc = {
    ._name = "AR_NIC_RMT_CFG_BTE_RX_DESC",
    ._addr = AR_NIC_RMT_CFG_BTE_RX_DESC,
    ._rval.val = AR_NIC_RMT_CFG_BTE_RX_DESC_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_CFG_BTE_RX_DESC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 1024,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rmt_cfg_bte_rx_desc_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt = {
    ._name = "AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT",
    ._addr = AR_NIC_RMT_RMT_MMR_RING_0_HI_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_mmr_ring_0_hi_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt = {
    ._name = "AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT",
    ._addr = AR_NIC_RMT_RMT_MMR_RING_0_MID_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_mmr_ring_0_mid_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_mmr_ring_0_lo_rmt = {
    ._name = "AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT",
    ._addr = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT,
    ._rval.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_RMT_MMR_RING_0_LO_RMT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_mmr_ring_0_lo_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_err_flg_1_hi_rmt = {
    ._name = "AR_NIC_RMT_ERR_FLG_1_HI_RMT",
    ._addr = AR_NIC_RMT_ERR_FLG_1_HI_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_hi_rmt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_err_flg_1_hi_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_err_flg_1_mid_rmt = {
    ._name = "AR_NIC_RMT_ERR_FLG_1_MID_RMT",
    ._addr = AR_NIC_RMT_ERR_FLG_1_MID_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_err_flg_1_mid_rmt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_err_flg_1_mid_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_err_flg_1_lo_rmt = {
    ._name = "AR_NIC_RMT_ERR_FLG_1_LO_RMT",
    ._addr = AR_NIC_RMT_ERR_FLG_1_LO_RMT,
    ._rval.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_FLG_1_LO_RMT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_err_flg_1_lo_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_cam_2_hi_rmt = {
    ._name = "AR_NIC_RMT_RMT_CAM_2_HI_RMT",
    ._addr = AR_NIC_RMT_RMT_CAM_2_HI_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_hi_rmt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_cam_2_hi_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_cam_2_mid_rmt = {
    ._name = "AR_NIC_RMT_RMT_CAM_2_MID_RMT",
    ._addr = AR_NIC_RMT_RMT_CAM_2_MID_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cam_2_mid_rmt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_cam_2_mid_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_cam_2_lo_rmt = {
    ._name = "AR_NIC_RMT_RMT_CAM_2_LO_RMT",
    ._addr = AR_NIC_RMT_RMT_CAM_2_LO_RMT,
    ._rval.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_RMT_CAM_2_LO_RMT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_cam_2_lo_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_seq_table_3_hi_rmt = {
    ._name = "AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT",
    ._addr = AR_NIC_RMT_RMT_SEQ_TABLE_3_HI_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_hi_rmt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_seq_table_3_hi_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_seq_table_3_mid_rmt = {
    ._name = "AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT",
    ._addr = AR_NIC_RMT_RMT_SEQ_TABLE_3_MID_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_seq_table_3_mid_rmt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_seq_table_3_mid_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_seq_table_3_lo_rmt = {
    ._name = "AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT",
    ._addr = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT,
    ._rval.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_RMT_SEQ_TABLE_3_LO_RMT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_seq_table_3_lo_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_pkt_update_4_hi_rmt = {
    ._name = "AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT",
    ._addr = AR_NIC_RMT_RMT_PKT_UPDATE_4_HI_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_hi_rmt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_pkt_update_4_hi_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_pkt_update_4_mid_rmt = {
    ._name = "AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT",
    ._addr = AR_NIC_RMT_RMT_PKT_UPDATE_4_MID_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_pkt_update_4_mid_rmt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_pkt_update_4_mid_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_pkt_update_4_lo_rmt = {
    ._name = "AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT",
    ._addr = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT,
    ._rval.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_RMT_PKT_UPDATE_4_LO_RMT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_pkt_update_4_lo_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_cq_5_hi_rmt = {
    ._name = "AR_NIC_RMT_RMT_CQ_5_HI_RMT",
    ._addr = AR_NIC_RMT_RMT_CQ_5_HI_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_hi_rmt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_cq_5_hi_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_cq_5_mid_rmt = {
    ._name = "AR_NIC_RMT_RMT_CQ_5_MID_RMT",
    ._addr = AR_NIC_RMT_RMT_CQ_5_MID_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_cq_5_mid_rmt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_cq_5_mid_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_cq_5_lo_rmt = {
    ._name = "AR_NIC_RMT_RMT_CQ_5_LO_RMT",
    ._addr = AR_NIC_RMT_RMT_CQ_5_LO_RMT,
    ._rval.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_RMT_CQ_5_LO_RMT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_cq_5_lo_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rat_rmt_flit_6_hi_rmt = {
    ._name = "AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT",
    ._addr = AR_NIC_RMT_RAT_RMT_FLIT_6_HI_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_hi_rmt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rat_rmt_flit_6_hi_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rat_rmt_flit_6_mid_rmt = {
    ._name = "AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT",
    ._addr = AR_NIC_RMT_RAT_RMT_FLIT_6_MID_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rat_rmt_flit_6_mid_rmt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rat_rmt_flit_6_mid_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rat_rmt_flit_6_lo_rmt = {
    ._name = "AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT",
    ._addr = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT,
    ._rval.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_RAT_RMT_FLIT_6_LO_RMT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rat_rmt_flit_6_lo_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_npt_flit_7_hi_rmt = {
    ._name = "AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT",
    ._addr = AR_NIC_RMT_RMT_NPT_FLIT_7_HI_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_hi_rmt_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_npt_flit_7_hi_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_npt_flit_7_mid_rmt = {
    ._name = "AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT",
    ._addr = AR_NIC_RMT_RMT_NPT_FLIT_7_MID_RMT,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_rmt_npt_flit_7_mid_rmt_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_npt_flit_7_mid_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_rmt_npt_flit_7_lo_rmt = {
    ._name = "AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT",
    ._addr = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT,
    ._rval.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_RMT_NPT_FLIT_7_LO_RMT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_rmt_npt_flit_7_lo_rmt_detail
};
static const cmmr_br_t __ar_nic_rmt_cfg_bte_rx_chan_desc = {
    ._name = "AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC",
    ._addr = AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_cfg_bte_rx_chan_desc_hwrmsk,
    ._nqw = 4,
    ._size = 32,
    ._incr = 32,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_rmt_cfg_bte_rx_chan_desc_detail
};
static const cmmr_br_t __ar_nic_rmt_cfg_timer_control = {
    ._name = "AR_NIC_RMT_CFG_TIMER_CONTROL",
    ._addr = AR_NIC_RMT_CFG_TIMER_CONTROL,
    ._rval.val = AR_NIC_RMT_CFG_TIMER_CONTROL_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_CFG_TIMER_CONTROL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_cfg_timer_control_detail
};
static const cmmr_br_t __ar_nic_rmt_cfg_cam_params0 = {
    ._name = "AR_NIC_RMT_CFG_CAM_PARAMS0",
    ._addr = AR_NIC_RMT_CFG_CAM_PARAMS0,
    ._rval.val = AR_NIC_RMT_CFG_CAM_PARAMS0_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_cfg_cam_params0_detail
};
static const cmmr_br_t __ar_nic_rmt_cfg_cam_params1 = {
    ._name = "AR_NIC_RMT_CFG_CAM_PARAMS1",
    ._addr = AR_NIC_RMT_CFG_CAM_PARAMS1,
    ._rval.val = AR_NIC_RMT_CFG_CAM_PARAMS1_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_CFG_CAM_PARAMS1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_cfg_cam_params1_detail
};
static const cmmr_br_t __ar_nic_rmt_cfg_rx_desc_btech_base_idx = {
    ._name = "AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX",
    ._addr = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX,
    ._rval.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_BASE_IDX_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000801ull,
    ._info = __ar_nic_rmt_cfg_rx_desc_btech_base_idx_detail
};
static const cmmr_br_t __ar_nic_rmt_cfg_rx_desc_btech_cnt = {
    ._name = "AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT",
    ._addr = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT,
    ._rval.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_CFG_RX_DESC_BTECH_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000801ull,
    ._info = __ar_nic_rmt_cfg_rx_desc_btech_cnt_detail
};
static const cmmr_br_t __ar_nic_rmt_err_flg = {
    ._name = "AR_NIC_RMT_ERR_FLG",
    ._addr = AR_NIC_RMT_ERR_FLG,
    ._rval.val = AR_NIC_RMT_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x00000000003d4811ull,
    ._info = __ar_nic_rmt_err_flg_detail
};
static const cmmr_br_t __ar_nic_rmt_err_clr = {
    ._name = "AR_NIC_RMT_ERR_CLR",
    ._addr = AR_NIC_RMT_ERR_CLR,
    ._rval.val = AR_NIC_RMT_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_rmt_err_clr_detail
};
static const cmmr_br_t __ar_nic_rmt_err_hss_msk = {
    ._name = "AR_NIC_RMT_ERR_HSS_MSK",
    ._addr = AR_NIC_RMT_ERR_HSS_MSK,
    ._rval.val = AR_NIC_RMT_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_rmt_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_rmt_err_os_msk = {
    ._name = "AR_NIC_RMT_ERR_OS_MSK",
    ._addr = AR_NIC_RMT_ERR_OS_MSK,
    ._rval.val = AR_NIC_RMT_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_rmt_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_rmt_err_first_flg = {
    ._name = "AR_NIC_RMT_ERR_FIRST_FLG",
    ._addr = AR_NIC_RMT_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_RMT_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_rmt_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_rmt_err_info_hss_msk = {
    ._name = "AR_NIC_RMT_ERR_INFO_HSS_MSK",
    ._addr = AR_NIC_RMT_ERR_INFO_HSS_MSK,
    ._rval.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_INFO_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_err_info_hss_msk_detail
};
static const cmmr_br_t __ar_nic_rmt_err_info_os_msk = {
    ._name = "AR_NIC_RMT_ERR_INFO_OS_MSK",
    ._addr = AR_NIC_RMT_ERR_INFO_OS_MSK,
    ._rval.val = AR_NIC_RMT_ERR_INFO_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_INFO_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_err_info_os_msk_detail
};
static const cmmr_br_t __ar_nic_rmt_err_info_desc_tbl_ecc = {
    ._name = "AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC",
    ._addr = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC,
    ._rval.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_INFO_DESC_TBL_ECC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_err_info_desc_tbl_ecc_detail
};
static const cmmr_br_t __ar_nic_rmt_err_info_seq_tbl_ecc = {
    ._name = "AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC",
    ._addr = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC,
    ._rval.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_INFO_SEQ_TBL_ECC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_err_info_seq_tbl_ecc_detail
};
static const cmmr_br_t __ar_nic_rmt_err_info_inq_parity = {
    ._name = "AR_NIC_RMT_ERR_INFO_INQ_PARITY",
    ._addr = AR_NIC_RMT_ERR_INFO_INQ_PARITY,
    ._rval.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_INFO_INQ_PARITY_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_err_info_inq_parity_detail
};
static const cmmr_br_t __ar_nic_rmt_err_info_payload_ecc = {
    ._name = "AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC",
    ._addr = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC,
    ._rval.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_INFO_PAYLOAD_ECC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rmt_err_info_payload_ecc_detail
};
static const cmmr_br_t __ar_nic_rmt_err_info_hss_pkt = {
    ._name = "AR_NIC_RMT_ERR_INFO_HSS_PKT",
    ._addr = AR_NIC_RMT_ERR_INFO_HSS_PKT,
    ._rval.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_INFO_HSS_PKT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_rmt_err_info_hss_pkt_detail
};
static const cmmr_br_t __ar_nic_rmt_err_info_os_pkt = {
    ._name = "AR_NIC_RMT_ERR_INFO_OS_PKT",
    ._addr = AR_NIC_RMT_ERR_INFO_OS_PKT,
    ._rval.val = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_ERR_INFO_OS_PKT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_rmt_err_info_os_pkt_detail
};
static const cmmr_br_t __ar_nic_rmt_dbg_errinj_desc_tbl = {
    ._name = "AR_NIC_RMT_DBG_ERRINJ_DESC_TBL",
    ._addr = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL,
    ._rval.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_DBG_ERRINJ_DESC_TBL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000801ull,
    ._info = __ar_nic_rmt_dbg_errinj_desc_tbl_detail
};
static const cmmr_br_t __ar_nic_rmt_dbg_errinj_seq_tbl = {
    ._name = "AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL",
    ._addr = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL,
    ._rval.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_DBG_ERRINJ_SEQ_TBL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000801ull,
    ._info = __ar_nic_rmt_dbg_errinj_seq_tbl_detail
};
static const cmmr_br_t __ar_nic_rmt_dbg_errinj_inq = {
    ._name = "AR_NIC_RMT_DBG_ERRINJ_INQ",
    ._addr = AR_NIC_RMT_DBG_ERRINJ_INQ,
    ._rval.val = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_DBG_ERRINJ_INQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000801ull,
    ._info = __ar_nic_rmt_dbg_errinj_inq_detail
};
static const cmmr_br_t __ar_nic_rmt_dbg_errinj_cam = {
    ._name = "AR_NIC_RMT_DBG_ERRINJ_CAM",
    ._addr = AR_NIC_RMT_DBG_ERRINJ_CAM,
    ._rval.val = AR_NIC_RMT_DBG_ERRINJ_CAM_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_DBG_ERRINJ_CAM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000801ull,
    ._info = __ar_nic_rmt_dbg_errinj_cam_detail
};
static const cmmr_br_t __ar_nic_rmt_prf_put_bytes_rx = {
    ._name = "AR_NIC_RMT_PRF_PUT_BYTES_RX",
    ._addr = AR_NIC_RMT_PRF_PUT_BYTES_RX,
    ._rval.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_PRF_PUT_BYTES_RX_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rmt_prf_put_bytes_rx_detail
};
static const cmmr_br_t __ar_nic_rmt_prf_send_bytes_rx = {
    ._name = "AR_NIC_RMT_PRF_SEND_BYTES_RX",
    ._addr = AR_NIC_RMT_PRF_SEND_BYTES_RX,
    ._rval.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_PRF_SEND_BYTES_RX_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rmt_prf_send_bytes_rx_detail
};
static const cmmr_br_t __ar_nic_rmt_dbg_rx_cam = {
    ._name = "AR_NIC_RMT_DBG_RX_CAM",
    ._addr = AR_NIC_RMT_DBG_RX_CAM,
    ._rval.val = AR_NIC_RMT_DBG_RX_CAM_RSTDATA,
    ._rmsk.val = AR_NIC_RMT_DBG_RX_CAM_RSTMASK,
    ._wrmsk.val = AR_NIC_RMT_DBG_RX_CAM_WRTMASK,
    ._rdmsk.val = AR_NIC_RMT_DBG_RX_CAM_RDMASK,
    ._xsmsk.val = AR_NIC_RMT_DBG_RX_CAM_XSMASK,
    ._wsemsk.val = AR_NIC_RMT_DBG_RX_CAM_WSEMASK,
    ._rsemsk.val = AR_NIC_RMT_DBG_RX_CAM_RSEMASK,
    ._w1smsk.val = AR_NIC_RMT_DBG_RX_CAM_W1SMASK,
    ._w1cmsk.val = AR_NIC_RMT_DBG_RX_CAM_W1CMASK,
    ._wrstmsk.val = AR_NIC_RMT_DBG_RX_CAM_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RMT_DBG_RX_CAM_HWWMASK,
    ._hwrmsk.val = AR_NIC_RMT_DBG_RX_CAM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 512,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rmt_dbg_rx_cam_detail
};
static const cmmr_br_t __ar_nic_rmt_dbg_seq_tbl = {
    ._name = "AR_NIC_RMT_DBG_SEQ_TBL",
    ._addr = AR_NIC_RMT_DBG_SEQ_TBL,
    ._rval.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rmt_dbg_seq_tbl_hwrmsk,
    ._nqw = 5,
    ._size = 40,
    ._incr = 64,
    ._depth = 512,
      ._type_bitmsk = 0x000000000000000bull,
    ._info = __ar_nic_rmt_dbg_seq_tbl_detail
};

/*
 *  INSTALL AR RMT MMRS
 */
static const cmmr_br_t* __ar_rmt_mmrs[] = {
    &__ar_nic_rmt_cfg_bte_rx_desc,
    &__ar_nic_rmt_cfg_bte_rx_chan_desc,
    &__ar_nic_rmt_cfg_timer_control,
    &__ar_nic_rmt_cfg_cam_params0,
    &__ar_nic_rmt_cfg_cam_params1,
    &__ar_nic_rmt_cfg_rx_desc_btech_base_idx,
    &__ar_nic_rmt_cfg_rx_desc_btech_cnt,
    &__ar_nic_rmt_err_flg,
    &__ar_nic_rmt_err_clr,
    &__ar_nic_rmt_err_hss_msk,
    &__ar_nic_rmt_err_os_msk,
    &__ar_nic_rmt_err_first_flg,
    &__ar_nic_rmt_err_info_hss_msk,
    &__ar_nic_rmt_err_info_os_msk,
    &__ar_nic_rmt_err_info_desc_tbl_ecc,
    &__ar_nic_rmt_err_info_seq_tbl_ecc,
    &__ar_nic_rmt_err_info_inq_parity,
    &__ar_nic_rmt_err_info_payload_ecc,
    &__ar_nic_rmt_err_info_hss_pkt,
    &__ar_nic_rmt_err_info_os_pkt,
    &__ar_nic_rmt_dbg_errinj_desc_tbl,
    &__ar_nic_rmt_dbg_errinj_seq_tbl,
    &__ar_nic_rmt_dbg_errinj_inq,
    &__ar_nic_rmt_dbg_errinj_cam,
    &__ar_nic_rmt_prf_put_bytes_rx,
    &__ar_nic_rmt_prf_send_bytes_rx,
    &__ar_nic_rmt_dbg_rx_cam,
    &__ar_nic_rmt_dbg_seq_tbl,
    NULL
};

/*
 *  INSTALL AR RMT LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_rmt_enc_mmrs[] = {
    &__ar_nic_rmt_rmt_mmr_ring_0_hi_rmt,
    &__ar_nic_rmt_rmt_mmr_ring_0_mid_rmt,
    &__ar_nic_rmt_rmt_mmr_ring_0_lo_rmt,
    &__ar_nic_rmt_err_flg_1_hi_rmt,
    &__ar_nic_rmt_err_flg_1_mid_rmt,
    &__ar_nic_rmt_err_flg_1_lo_rmt,
    &__ar_nic_rmt_rmt_cam_2_hi_rmt,
    &__ar_nic_rmt_rmt_cam_2_mid_rmt,
    &__ar_nic_rmt_rmt_cam_2_lo_rmt,
    &__ar_nic_rmt_rmt_seq_table_3_hi_rmt,
    &__ar_nic_rmt_rmt_seq_table_3_mid_rmt,
    &__ar_nic_rmt_rmt_seq_table_3_lo_rmt,
    &__ar_nic_rmt_rmt_pkt_update_4_hi_rmt,
    &__ar_nic_rmt_rmt_pkt_update_4_mid_rmt,
    &__ar_nic_rmt_rmt_pkt_update_4_lo_rmt,
    &__ar_nic_rmt_rmt_cq_5_hi_rmt,
    &__ar_nic_rmt_rmt_cq_5_mid_rmt,
    &__ar_nic_rmt_rmt_cq_5_lo_rmt,
    &__ar_nic_rmt_rat_rmt_flit_6_hi_rmt,
    &__ar_nic_rmt_rat_rmt_flit_6_mid_rmt,
    &__ar_nic_rmt_rat_rmt_flit_6_lo_rmt,
    &__ar_nic_rmt_rmt_npt_flit_7_hi_rmt,
    &__ar_nic_rmt_rmt_npt_flit_7_mid_rmt,
    &__ar_nic_rmt_rmt_npt_flit_7_lo_rmt,
    NULL
};

#endif
