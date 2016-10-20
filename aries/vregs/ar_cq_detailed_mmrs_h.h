/******************************************************************************
 * COPYRIGHT CRAY INC. ar_cq_detailed_mmrs_h.h
 * FILE: ar_cq_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/
/**
 * @file ar_cq_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:38:58 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_cq_mmr_values.h and ar_cq_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_cq_mmr_values.h"

#ifndef _AR_CQ_DETAILED_MMRS_H_H_
#define _AR_CQ_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_cq_mmrs[];	/* CQ Array */

/*
 *  AR CQ MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_cq_cfg_desc_tbl_detail[] = {
    { ._name = "MDD0_MMU_TC",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_TC_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_TC_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW2 & AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_TC_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_TC_QW,
      ._desc = "When MDD_EN==0, MMU Translation Context",
      ._type_bitmsk = 0x000000000000000bull,
      ._access = "RW"
    },
    { ._name = "MDD0_MMU_EN",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_EN_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_EN_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW2 & AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_EN_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_EN_QW,
      ._desc = "When MDD_EN==0, MMU Enable",
      ._type_bitmsk = 0x000000000000000bull,
      ._access = "RW"
    },
    { ._name = "MDD1_PTAG",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MDD1_PTAG_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MDD1_PTAG_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW2 & AR_NIC_CQ_CFG_DESC_TBL_MDD1_PTAG_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MDD1_PTAG_QW,
      ._desc = "When MDD_EN==1, Protection Tag",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "MDD0_TPH",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MDD0_TPH_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MDD0_TPH_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW2 & AR_NIC_CQ_CFG_DESC_TBL_MDD0_TPH_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MDD0_TPH_QW,
      ._desc = "When MDD_EN==0, TPH",
      ._type_bitmsk = 0x000000000000000bull,
      ._access = "RW"
    },
    { ._name = "MDD0_MMU_PREFETCH",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_PREFETCH_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_PREFETCH_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW2 & AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_PREFETCH_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_PREFETCH_QW,
      ._desc = "When MDD_EN==0, MMU Pre-fetch Enable",
      ._type_bitmsk = 0x000000000000000bull,
      ._access = "RW"
    },
    { ._name = "MDD1_MDH",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MDD1_MDH_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MDD1_MDH_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW2 & AR_NIC_CQ_CFG_DESC_TBL_MDD1_MDH_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MDD1_MDH_QW,
      ._desc = "When MDD_EN==1, Memory Domain Handle",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "MDD1_BASE_OFFSET_39_12",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MDD1_BASE_OFFSET_39_12_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MDD1_BASE_OFFSET_39_12_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW2 & AR_NIC_CQ_CFG_DESC_TBL_MDD1_BASE_OFFSET_39_12_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MDD1_BASE_OFFSET_39_12_QW,
      ._desc = "When MDD_EN==1, Memory Domain Base Offset 39:12",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "MDD0_BASE_ADDR_47_12",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MDD0_BASE_ADDR_47_12_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MDD0_BASE_ADDR_47_12_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW2 & AR_NIC_CQ_CFG_DESC_TBL_MDD0_BASE_ADDR_47_12_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MDD0_BASE_ADDR_47_12_QW,
      ._desc = "When MDD_EN==0, Completion Queue Base Address 47:12 (byte address)",
      ._type_bitmsk = 0x000000000000000bull,
      ._access = "RW"
    },
    { ._name = "MDD_EN",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MDD_EN_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MDD_EN_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW1 & AR_NIC_CQ_CFG_DESC_TBL_MDD_EN_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MDD_EN_QW,
      ._desc = "MDD Enable",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "EN",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_EN_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_EN_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW1 & AR_NIC_CQ_CFG_DESC_TBL_EN_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_EN_QW,
      ._desc = "Enable CQ",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "IRQ_IDX",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_IRQ_IDX_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_IRQ_IDX_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW1 & AR_NIC_CQ_CFG_DESC_TBL_IRQ_IDX_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_IRQ_IDX_QW,
      ._desc = "Interrupt Request Index",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "IRQ_REQ",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_IRQ_REQ_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_IRQ_REQ_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW1 & AR_NIC_CQ_CFG_DESC_TBL_IRQ_REQ_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_IRQ_REQ_QW,
      ._desc = "Interrupt Request",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "IRQ_THRESH_IDX",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_IRQ_THRESH_IDX_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_IRQ_THRESH_IDX_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW1 & AR_NIC_CQ_CFG_DESC_TBL_IRQ_THRESH_IDX_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_IRQ_THRESH_IDX_QW,
      ._desc = "Threshold Index for interrupt signal",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "MAX_IDX",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_MAX_IDX_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_MAX_IDX_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW1 & AR_NIC_CQ_CFG_DESC_TBL_MAX_IDX_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_MAX_IDX_QW,
      ._desc = "Completion Queue Maximum Index",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "IRQ_MASK",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_IRQ_MASK_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_IRQ_MASK_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW0 & AR_NIC_CQ_CFG_DESC_TBL_IRQ_MASK_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_IRQ_MASK_QW,
      ._desc = "User Mode Interrupt Mask",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "WR_IDX",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_WR_IDX_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_WR_IDX_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW0 & AR_NIC_CQ_CFG_DESC_TBL_WR_IDX_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_WR_IDX_QW,
      ._desc = "Completion Queue Write Index",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "RD_IDX",
      ._bpos = AR_NIC_CQ_CFG_DESC_TBL_RD_IDX_BP,
      ._mask = AR_NIC_CQ_CFG_DESC_TBL_RD_IDX_MASK,
      ._rval = AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW0 & AR_NIC_CQ_CFG_DESC_TBL_RD_IDX_MASK,
      ._index = AR_NIC_CQ_CFG_DESC_TBL_RD_IDX_QW,
      ._desc = "Completion Queue Read Index",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_mmr_ring_0_hi_cq_detail[] = {
    { ._name = "UNUSED_145_116",
      ._bpos = AR_NIC_CQ_MMR_RING_0_HI_CQ_UNUSED_145_116_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_HI_CQ_UNUSED_145_116_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_HI_CQ_RSTDATA_QW2 & AR_NIC_CQ_MMR_RING_0_HI_CQ_UNUSED_145_116_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_HI_CQ_UNUSED_145_116_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_mmr_ring_0_mid_cq_detail[] = {
    { ._name = "UNUSED_127_116",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_UNUSED_127_116_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_UNUSED_127_116_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_UNUSED_127_116_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_UNUSED_127_116_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TRANS_CMP_Q_PARITY_ERR",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_TRANS_CMP_Q_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_TRANS_CMP_Q_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_TRANS_CMP_Q_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_TRANS_CMP_Q_PARITY_ERR_QW,
      ._desc = "Translation Complete Q parity err Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SSID_INPUT_EVENT_DATA_PARITY_ERR",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_INPUT_EVENT_DATA_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_INPUT_EVENT_DATA_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_INPUT_EVENT_DATA_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_INPUT_EVENT_DATA_PARITY_ERR_QW,
      ._desc = "SSID input event data buffer parity err Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_INPUT_EVENT_DATA_PARITY_ERR",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_INPUT_EVENT_DATA_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_INPUT_EVENT_DATA_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_INPUT_EVENT_DATA_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_INPUT_EVENT_DATA_PARITY_ERR_QW,
      ._desc = "BTE input event data buffer parity err Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_INPUT_EVENT_DATA_PARITY_ERR",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_INPUT_EVENT_DATA_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_INPUT_EVENT_DATA_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_INPUT_EVENT_DATA_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_INPUT_EVENT_DATA_PARITY_ERR_QW,
      ._desc = "DLA input event data buffer parity err Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RMT_INPUT_EVENT_DATA_PARITY_ERR",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_INPUT_EVENT_DATA_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_INPUT_EVENT_DATA_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_INPUT_EVENT_DATA_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_INPUT_EVENT_DATA_PARITY_ERR_QW,
      ._desc = "RMT input event data buffer parity err Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RMT_INPUT_RMT_DATA_PARITY_ERR",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_INPUT_RMT_DATA_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_INPUT_RMT_DATA_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_INPUT_RMT_DATA_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_INPUT_RMT_DATA_PARITY_ERR_QW,
      ._desc = "RMT input rmt data buffer parity err Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_MBE3",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE3_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE3_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE3_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE3_QW,
      ._desc = "Count of CQ Descriptor Table RAM3 uncorrectable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_MBE2",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE2_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE2_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE2_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE2_QW,
      ._desc = "Count of CQ Descriptor Table RAM2 uncorrectable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_MBE1",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE1_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE1_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE1_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE1_QW,
      ._desc = "Count of CQ Descriptor Table RAM1 uncorrectable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_MBE0",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE0_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE0_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE0_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_MBE0_QW,
      ._desc = "Count of CQ Descriptor Table RAM0 uncorrectable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_SBE3",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE3_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE3_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE3_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE3_QW,
      ._desc = "Count of CQ Descriptor Table RAM3 correctable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_SBE2",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE2_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE2_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE2_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE2_QW,
      ._desc = "Count of CQ Descriptor Table RAM2 correctable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_SBE1",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE1_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE1_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE1_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE1_QW,
      ._desc = "Count of CQ Descriptor Table RAM1 correctable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC_TBL_SBE0",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE0_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE0_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE0_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DESC_TBL_SBE0_QW,
      ._desc = "Count of CQ Descriptor Table RAM0 correctable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NPT_STALLED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_STALLED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_STALLED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_STALLED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_STALLED_QW,
      ._desc = "Count of clocks when NPT packet is stalled due to not enough credits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NPT_FLIT",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_FLIT_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_FLIT_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_FLIT_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_FLIT_QW,
      ._desc = "Count of CQ NPT flits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NPT_PKT",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_PKT_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_PKT_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_PKT_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_NPT_PKT_QW,
      ._desc = "Count of CQ NPT packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RMT_DROPPED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_DROPPED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_DROPPED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_DROPPED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_DROPPED_QW,
      ._desc = "Count of dropped RMT Completion Queue Events",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_DROPPED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_DROPPED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_DROPPED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_DROPPED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_DROPPED_QW,
      ._desc = "Count of dropped DLA Completion Queue Events",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_DROPPED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_DROPPED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_DROPPED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_DROPPED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_DROPPED_QW,
      ._desc = "Count of dropped BTE Completion Queue Events",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SSID_DROPPED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_DROPPED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_DROPPED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_DROPPED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_DROPPED_QW,
      ._desc = "Count of dropped SSID Completion Queue Events",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RMT_BLOCKED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_BLOCKED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_BLOCKED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_BLOCKED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_BLOCKED_QW,
      ._desc = "Count of clocks when RMTevent is blocked from leaving the RMT input buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_BLOCKED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_BLOCKED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_BLOCKED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_BLOCKED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_BLOCKED_QW,
      ._desc = "Count of clocks when DLA event is blocked from leaving the DLA input buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_BLOCKED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_BLOCKED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_BLOCKED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_BLOCKED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_BLOCKED_QW,
      ._desc = "Count of clocks when BTE event is blocked from leaving the BTE input buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SSID_BLOCKED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_BLOCKED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_BLOCKED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_BLOCKED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_BLOCKED_QW,
      ._desc = "Count of clocks when SSID event is blocked from leaving the SSID input buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RMT_STALLED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_STALLED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_STALLED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_STALLED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_STALLED_QW,
      ._desc = "Count of clocks when RMT event is stalled due to not enough cam entries",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_STALLED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_STALLED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_STALLED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_STALLED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_STALLED_QW,
      ._desc = "Count of clocks when DLA event is stalled due to not enough cam entries",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_STALLED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_STALLED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_STALLED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_STALLED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_STALLED_QW,
      ._desc = "Count of clocks when BTE event is stalled due to not enough cam entries",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SSID_STALLED",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_STALLED_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_STALLED_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_STALLED_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_STALLED_QW,
      ._desc = "Count of clocks when SSID event is stalled due to not enough cam entries",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_FMA",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_FMA_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_FMA_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_FMA_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_FMA_QW,
      ._desc = "Count of FMA Read Index update requests to CQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RMT",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_RMT_QW,
      ._desc = "Count of RMT requests to CQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_DLA_QW,
      ._desc = "Count of DLA requests to CQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_BTE_QW,
      ._desc = "Count of BTE requests to CQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SSID",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_CNTR_SSID_QW,
      ._desc = "Count of SSID requests to CQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_35",
      ._bpos = AR_NIC_CQ_MMR_RING_0_MID_CQ_UNUSED_81_35_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_MID_CQ_UNUSED_81_35_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_MMR_RING_0_MID_CQ_UNUSED_81_35_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_MID_CQ_UNUSED_81_35_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_mmr_ring_0_lo_cq_detail[] = {
    { ._name = "UNUSED_81_35",
      ._bpos = AR_NIC_CQ_MMR_RING_0_LO_CQ_UNUSED_81_35_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_LO_CQ_UNUSED_81_35_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_LO_CQ_RSTDATA & AR_NIC_CQ_MMR_RING_0_LO_CQ_UNUSED_81_35_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_LO_CQ_UNUSED_81_35_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_LB_OS_IRQ",
      ._bpos = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_OS_IRQ_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_OS_IRQ_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_LO_CQ_RSTDATA & AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_OS_IRQ_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_OS_IRQ_QW,
      ._desc = "r_q_cq_lb_os_irq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_LB_HSS_IRQ",
      ._bpos = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_LO_CQ_RSTDATA & AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_HSS_IRQ_QW,
      ._desc = "r_q_cq_lb_hss_irq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_LB_WR_ACK",
      ._bpos = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_WR_ACK_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_WR_ACK_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_LO_CQ_RSTDATA & AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_WR_ACK_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_WR_ACK_QW,
      ._desc = "r_q_cq_lb_wr_ack from gbl_mmr_loop_control",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_LB_RSP_15_0",
      ._bpos = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_RSP_15_0_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_RSP_15_0_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_LO_CQ_RSTDATA & AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_RSP_15_0_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_LO_CQ_R_Q_CQ_LB_RSP_15_0_QW,
      ._desc = "r_q_cq_lb_rsp[15:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_LB_CQ_REQ_15_0",
      ._bpos = AR_NIC_CQ_MMR_RING_0_LO_CQ_I_LB_CQ_REQ_15_0_BP,
      ._mask = AR_NIC_CQ_MMR_RING_0_LO_CQ_I_LB_CQ_REQ_15_0_MASK,
      ._rval = AR_NIC_CQ_MMR_RING_0_LO_CQ_RSTDATA & AR_NIC_CQ_MMR_RING_0_LO_CQ_I_LB_CQ_REQ_15_0_MASK,
      ._index = AR_NIC_CQ_MMR_RING_0_LO_CQ_I_LB_CQ_REQ_15_0_QW,
      ._desc = "i_lb_cq_req[15:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_flg_1_hi_cq_detail[] = {
    { ._name = "UNUSED_145_86",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_HI_CQ_UNUSED_145_86_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_HI_CQ_UNUSED_145_86_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSTDATA_QW2 & AR_NIC_CQ_ERR_FLG_1_HI_CQ_UNUSED_145_86_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_HI_CQ_UNUSED_145_86_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_flg_1_mid_cq_detail[] = {
    { ._name = "UNUSED_127_86",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_UNUSED_127_86_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_UNUSED_127_86_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_UNUSED_127_86_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_UNUSED_127_86_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "CQ had BTE/DLA/SSID NAT Response Timeout which is a combination of no NPT credits or long NAT response time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LCL_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_PARITY_ERR_QW,
      ._desc = "CQ had BTE/DLA/SSID parity error, either input event data parity error or Translation Complete Queue parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LCL_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_DROPPED_EVENT_QW,
      ._desc = "CQ Dropped a BTE/DLA/SSID CQ event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LCL_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_IDX_BOUNDS_QW,
      ._desc = "BTE/DLA/SSID RD_IDX or WR_IDX out of bounds (greater than MAX_IDX)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LCL_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_NAT_ERR_QW,
      ._desc = "NAT Error translating BTE/DLA/SSID CQ address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LCL_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_OVERRUN_EVENT_QW,
      ._desc = "A BTE/DLA/SSID event occurred when its completion queue was full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LCL_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_LCL_DISABLED_CQ_QW,
      ._desc = "An event referred to a disabled BTE/DLA/SSID CQ descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "CQ had RMT NAT Response Timeout which is a combination of no NPT credits or long NAT response time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_RMT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_PARITY_ERR_QW,
      ._desc = "CQ had RMT parity error, either input event data parity error, input extra RMT data parity error or Translation Complete Queue parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_RMT_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_DROPPED_EVENT_QW,
      ._desc = "CQ Dropped a RMT CQ event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_RMT_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_IDX_BOUNDS_QW,
      ._desc = "RMT RD_IDX or WR_IDX out of bounds (greater than MAX_IDX)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_RMT_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_NAT_ERR_QW,
      ._desc = "NAT Error translating RMT CQ address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_RMT_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_OVERRUN_EVENT_QW,
      ._desc = "An RMT event occurred when its completion queue was full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_RMT_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_RMT_DISABLED_CQ_QW,
      ._desc = "An event referred to a disabled RMT CQ descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_DESC_TBL_SBE",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_DESC_TBL_SBE_QW,
      ._desc = "CQ Descriptor Table SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_DESC_TBL_MBE",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_CQ_DESC_TBL_MBE_QW,
      ._desc = "CQ Descriptor Table MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FMA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_FMA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_FMA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "FMA input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_SSID_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_SSID_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "SSID input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RMT_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RMT_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RMT_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "RMT input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DLA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_DLA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_DLA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "DLA input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_BTE_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_BTE_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "BTE input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_MID_CQ_DIAG_ONLY_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_MID_CQ_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_ERR_FLG_1_MID_CQ_DIAG_ONLY_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_MID_CQ_DIAG_ONLY_QW,
      ._desc = "Test bit for generating interrupt",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_flg_1_lo_cq_detail[] = {
    { ._name = "UNUSED_63_22",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_UNUSED_63_22_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_UNUSED_63_22_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_UNUSED_63_22_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_UNUSED_63_22_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "CQ had BTE/DLA/SSID NAT Response Timeout which is a combination of no NPT credits or long NAT response time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_LCL_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_PARITY_ERR_QW,
      ._desc = "CQ had BTE/DLA/SSID parity error, either input event data parity error or Translation Complete Queue parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_LCL_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_DROPPED_EVENT_QW,
      ._desc = "CQ Dropped a BTE/DLA/SSID CQ event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_LCL_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_IDX_BOUNDS_QW,
      ._desc = "BTE/DLA/SSID RD_IDX or WR_IDX out of bounds (greater than MAX_IDX)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_LCL_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_NAT_ERR_QW,
      ._desc = "NAT Error translating BTE/DLA/SSID CQ address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_LCL_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_OVERRUN_EVENT_QW,
      ._desc = "A BTE/DLA/SSID event occurred when its completion queue was full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_LCL_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_LCL_DISABLED_CQ_QW,
      ._desc = "An event referred to a disabled BTE/DLA/SSID CQ descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "CQ had RMT NAT Response Timeout which is a combination of no NPT credits or long NAT response time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_RMT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_PARITY_ERR_QW,
      ._desc = "CQ had RMT parity error, either input event data parity error, input extra RMT data parity error or Translation Complete Queue parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_RMT_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_DROPPED_EVENT_QW,
      ._desc = "CQ Dropped a RMT CQ event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_RMT_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_IDX_BOUNDS_QW,
      ._desc = "RMT RD_IDX or WR_IDX out of bounds (greater than MAX_IDX)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_RMT_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_NAT_ERR_QW,
      ._desc = "NAT Error translating RMT CQ address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_RMT_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_OVERRUN_EVENT_QW,
      ._desc = "An RMT event occurred when its completion queue was full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_RMT_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_RMT_DISABLED_CQ_QW,
      ._desc = "An event referred to a disabled RMT CQ descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_DESC_TBL_SBE",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_DESC_TBL_SBE_QW,
      ._desc = "CQ Descriptor Table SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_DESC_TBL_MBE",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_CQ_DESC_TBL_MBE_QW,
      ._desc = "CQ Descriptor Table MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FMA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_FMA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_FMA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "FMA input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_SSID_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_SSID_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_SSID_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "SSID input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RMT_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_RMT_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_RMT_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "RMT input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DLA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_DLA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_DLA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "DLA input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_BTE_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_I_BTE_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "BTE input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_CQ_ERR_FLG_1_LO_CQ_UNUSED_0_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_1_LO_CQ_UNUSED_0_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA & AR_NIC_CQ_ERR_FLG_1_LO_CQ_UNUSED_0_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_1_LO_CQ_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_npt_flit_2_hi_cq_detail[] = {
    { ._name = "R_Q_CQ_NPT_REQ_SB",
      ._bpos = AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_R_Q_CQ_NPT_REQ_SB_BP,
      ._mask = AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_R_Q_CQ_NPT_REQ_SB_MASK,
      ._rval = AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSTDATA_QW2 & AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_R_Q_CQ_NPT_REQ_SB_MASK,
      ._index = AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_R_Q_CQ_NPT_REQ_SB_QW,
      ._desc = "r_q_cq_npt_req_sb",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_NPT_REQ_FLIT",
      ._bpos = AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_R_Q_CQ_NPT_REQ_FLIT_BP,
      ._mask = AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_R_Q_CQ_NPT_REQ_FLIT_MASK,
      ._rval = AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSTDATA_QW2 & AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_R_Q_CQ_NPT_REQ_FLIT_MASK,
      ._index = AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_R_Q_CQ_NPT_REQ_FLIT_QW,
      ._desc = "r_q_cq_npt_req_flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_npt_flit_2_mid_cq_detail[] = {
    { ._name = "R_Q_CQ_NPT_REQ_FLIT",
      ._bpos = AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_R_Q_CQ_NPT_REQ_FLIT_BP,
      ._mask = AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_R_Q_CQ_NPT_REQ_FLIT_MASK,
      ._rval = AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_R_Q_CQ_NPT_REQ_FLIT_MASK,
      ._index = AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_R_Q_CQ_NPT_REQ_FLIT_QW,
      ._desc = "r_q_cq_npt_req_flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_npt_flit_2_lo_cq_detail[] = {
    { ._name = "R_Q_CQ_NPT_REQ_FLIT",
      ._bpos = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_R_Q_CQ_NPT_REQ_FLIT_BP,
      ._mask = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_R_Q_CQ_NPT_REQ_FLIT_MASK,
      ._rval = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_R_Q_CQ_NPT_REQ_FLIT_MASK,
      ._index = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_R_Q_CQ_NPT_REQ_FLIT_QW,
      ._desc = "r_q_cq_npt_req_flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_nat_request_3_hi_cq_detail[] = {
    { ._name = "UNUSED_145_56",
      ._bpos = AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_UNUSED_145_56_BP,
      ._mask = AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_UNUSED_145_56_MASK,
      ._rval = AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSTDATA_QW2 & AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_UNUSED_145_56_MASK,
      ._index = AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_UNUSED_145_56_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_nat_request_3_mid_cq_detail[] = {
    { ._name = "UNUSED_145_56",
      ._bpos = AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_UNUSED_145_56_BP,
      ._mask = AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_UNUSED_145_56_MASK,
      ._rval = AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_UNUSED_145_56_MASK,
      ._index = AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_UNUSED_145_56_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_nat_request_3_lo_cq_detail[] = {
    { ._name = "UNUSED_145_56",
      ._bpos = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_UNUSED_145_56_BP,
      ._mask = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_UNUSED_145_56_MASK,
      ._rval = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_UNUSED_145_56_MASK,
      ._index = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_UNUSED_145_56_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_NAT_VALID",
      ._bpos = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_VALID_BP,
      ._mask = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_VALID_MASK,
      ._rval = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_VALID_MASK,
      ._index = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_VALID_QW,
      ._desc = "r_q_cq_nat_valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_NAT_TFIELDS_47_0",
      ._bpos = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_TFIELDS_47_0_BP,
      ._mask = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_TFIELDS_47_0_MASK,
      ._rval = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_TFIELDS_47_0_MASK,
      ._index = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_TFIELDS_47_0_QW,
      ._desc = "r_q_cq_nat_tfields[47:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_NAT_TID_5_0",
      ._bpos = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_TID_5_0_BP,
      ._mask = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_TID_5_0_MASK,
      ._rval = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_TID_5_0_MASK,
      ._index = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_TID_5_0_QW,
      ._desc = "r_q_cq_nat_tid[5:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_NAT_MDD_EN",
      ._bpos = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_MDD_EN_BP,
      ._mask = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_MDD_EN_MASK,
      ._rval = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_MDD_EN_MASK,
      ._index = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_R_Q_CQ_NAT_MDD_EN_QW,
      ._desc = "r_q_cq_nat_mdd_en",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_acks_4_hi_cq_detail[] = {
    { ._name = "UNUSED_145_6",
      ._bpos = AR_NIC_CQ_CQ_ACKS_4_HI_CQ_UNUSED_145_6_BP,
      ._mask = AR_NIC_CQ_CQ_ACKS_4_HI_CQ_UNUSED_145_6_MASK,
      ._rval = AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSTDATA_QW2 & AR_NIC_CQ_CQ_ACKS_4_HI_CQ_UNUSED_145_6_MASK,
      ._index = AR_NIC_CQ_CQ_ACKS_4_HI_CQ_UNUSED_145_6_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_acks_4_mid_cq_detail[] = {
    { ._name = "UNUSED_145_6",
      ._bpos = AR_NIC_CQ_CQ_ACKS_4_MID_CQ_UNUSED_145_6_BP,
      ._mask = AR_NIC_CQ_CQ_ACKS_4_MID_CQ_UNUSED_145_6_MASK,
      ._rval = AR_NIC_CQ_CQ_ACKS_4_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_CQ_ACKS_4_MID_CQ_UNUSED_145_6_MASK,
      ._index = AR_NIC_CQ_CQ_ACKS_4_MID_CQ_UNUSED_145_6_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_acks_4_lo_cq_detail[] = {
    { ._name = "UNUSED_145_6",
      ._bpos = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_UNUSED_145_6_BP,
      ._mask = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_UNUSED_145_6_MASK,
      ._rval = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_ACKS_4_LO_CQ_UNUSED_145_6_MASK,
      ._index = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_UNUSED_145_6_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_FMA_ACK",
      ._bpos = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_FMA_ACK_BP,
      ._mask = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_FMA_ACK_MASK,
      ._rval = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_FMA_ACK_MASK,
      ._index = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_FMA_ACK_QW,
      ._desc = "r_q_cq_fma_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_DLA_ACK",
      ._bpos = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_DLA_ACK_BP,
      ._mask = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_DLA_ACK_MASK,
      ._rval = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_DLA_ACK_MASK,
      ._index = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_DLA_ACK_QW,
      ._desc = "r_q_cq_dla_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_RMT_ACK",
      ._bpos = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_RMT_ACK_BP,
      ._mask = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_RMT_ACK_MASK,
      ._rval = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_RMT_ACK_MASK,
      ._index = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_RMT_ACK_QW,
      ._desc = "r_q_cq_rmt_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_SSID_ACK",
      ._bpos = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_SSID_ACK_BP,
      ._mask = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_SSID_ACK_MASK,
      ._rval = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_SSID_ACK_MASK,
      ._index = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_SSID_ACK_QW,
      ._desc = "r_q_cq_ssid_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_BTE_ACK",
      ._bpos = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_BTE_ACK_BP,
      ._mask = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_BTE_ACK_MASK,
      ._rval = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_BTE_ACK_MASK,
      ._index = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_BTE_ACK_QW,
      ._desc = "r_q_cq_bte_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_CQ_IOMMU_COMP_WAIT_ACK",
      ._bpos = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_IOMMU_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_IOMMU_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_IOMMU_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_R_Q_CQ_IOMMU_COMP_WAIT_ACK_QW,
      ._desc = "r_q_cq_iommu_comp_wait_ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_debug_5_hi_cq_detail[] = {
    { ._name = "UNUSED_145_64",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_UNUSED_145_64_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_UNUSED_145_64_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSTDATA_QW2 & AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_UNUSED_145_64_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_UNUSED_145_64_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_debug_5_mid_cq_detail[] = {
    { ._name = "UNUSED_145_64",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_UNUSED_145_64_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_UNUSED_145_64_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_RSTDATA_QW1 & AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_UNUSED_145_64_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_UNUSED_145_64_QW,
      ._desc = "0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cq_debug_5_lo_cq_detail[] = {
    { ._name = "CQ_IOMMU_COMP_WAIT_ACK_PENDING",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_COMP_WAIT_ACK_PENDING_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_COMP_WAIT_ACK_PENDING_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_COMP_WAIT_ACK_PENDING_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_COMP_WAIT_ACK_PENDING_QW,
      ._desc = "CQ_IOMMU_COMP_WAIT_ACK_PENDING",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_IOMMU_EPOCH",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_QW,
      ._desc = "CQ_IOMMU_EPOCH",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_IOMMU_EPOCH_CNT_1",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_CNT_1_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_CNT_1_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_CNT_1_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_CNT_1_QW,
      ._desc = "CQ_IOMMU_EPOCH_CNT_1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_IOMMU_EPOCH_CNT_0",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_CNT_0_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_CNT_0_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_CNT_0_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_IOMMU_EPOCH_CNT_0_QW,
      ._desc = "CQ_IOMMU_EPOCH_CNT_0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_NPT_STATE",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_NPT_STATE_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_NPT_STATE_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_NPT_STATE_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_NPT_STATE_QW,
      ._desc = "CQ_NPT_STATE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_DESC_FIFO_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_DESC_FIFO_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_DESC_FIFO_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_DESC_FIFO_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_CQ_DESC_FIFO_CNT_QW,
      ._desc = "CQ_DESC_FIFO_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FMA_CQ_Q_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_FMA_CQ_Q_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_FMA_CQ_Q_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_FMA_CQ_Q_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_FMA_CQ_Q_CNT_QW,
      ._desc = "FMA_CQ_Q_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DLA_CQ_TRQ_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_DLA_CQ_TRQ_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_DLA_CQ_TRQ_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_DLA_CQ_TRQ_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_DLA_CQ_TRQ_CNT_QW,
      ._desc = "DLA_CQ_TRQ_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DLA_CQ_TRDR_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_DLA_CQ_TRDR_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_DLA_CQ_TRDR_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_DLA_CQ_TRDR_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_DLA_CQ_TRDR_CNT_QW,
      ._desc = "DLA_CQ_TRDR_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RMT_CQ_TRQ_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RMT_CQ_TRQ_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RMT_CQ_TRQ_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RMT_CQ_TRQ_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RMT_CQ_TRQ_CNT_QW,
      ._desc = "RMT_CQ_TRQ_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RMT_CQ_TRDR_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RMT_CQ_TRDR_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RMT_CQ_TRDR_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RMT_CQ_TRDR_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RMT_CQ_TRDR_CNT_QW,
      ._desc = "RMT_CQ_TRDR_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CQ_TRQ_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_SSID_CQ_TRQ_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_SSID_CQ_TRQ_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_SSID_CQ_TRQ_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_SSID_CQ_TRQ_CNT_QW,
      ._desc = "SSID_CQ_TRQ_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CQ_TRDR_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_SSID_CQ_TRDR_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_SSID_CQ_TRDR_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_SSID_CQ_TRDR_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_SSID_CQ_TRDR_CNT_QW,
      ._desc = "SSID_CQ_TRDR_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_CQ_TRQ_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_BTE_CQ_TRQ_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_BTE_CQ_TRQ_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_BTE_CQ_TRQ_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_BTE_CQ_TRQ_CNT_QW,
      ._desc = "BTE_CQ_TRQ_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_CQ_TRDR_CNT",
      ._bpos = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_BTE_CQ_TRDR_CNT_BP,
      ._mask = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_BTE_CQ_TRDR_CNT_MASK,
      ._rval = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA & AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_BTE_CQ_TRDR_CNT_MASK,
      ._index = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_BTE_CQ_TRDR_CNT_QW,
      ._desc = "BTE_CQ_TRDR_CNT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cfg_npt_credits_detail[] = {
    { ._name = "NPT_CRDTS_USED",
      ._bpos = AR_NIC_CQ_CFG_NPT_CREDITS_NPT_CRDTS_USED_BP,
      ._mask = AR_NIC_CQ_CFG_NPT_CREDITS_NPT_CRDTS_USED_MASK,
      ._rval = AR_NIC_CQ_CFG_NPT_CREDITS_RSTDATA & AR_NIC_CQ_CFG_NPT_CREDITS_NPT_CRDTS_USED_MASK,
      ._index = AR_NIC_CQ_CFG_NPT_CREDITS_NPT_CRDTS_USED_QW,
      ._desc = "Flit credits used for CQ NPT Flits",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "NPT_CRDTS_USED_MAX",
      ._bpos = AR_NIC_CQ_CFG_NPT_CREDITS_NPT_CRDTS_USED_MAX_BP,
      ._mask = AR_NIC_CQ_CFG_NPT_CREDITS_NPT_CRDTS_USED_MAX_MASK,
      ._rval = AR_NIC_CQ_CFG_NPT_CREDITS_RSTDATA & AR_NIC_CQ_CFG_NPT_CREDITS_NPT_CRDTS_USED_MAX_MASK,
      ._index = AR_NIC_CQ_CFG_NPT_CREDITS_NPT_CRDTS_USED_MAX_QW,
      ._desc = "Max value for NPT_CRDTS_USED",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cfg_cam_credits_detail[] = {
    { ._name = "CAM_CRDTS_USED",
      ._bpos = AR_NIC_CQ_CFG_CAM_CREDITS_CAM_CRDTS_USED_BP,
      ._mask = AR_NIC_CQ_CFG_CAM_CREDITS_CAM_CRDTS_USED_MASK,
      ._rval = AR_NIC_CQ_CFG_CAM_CREDITS_RSTDATA & AR_NIC_CQ_CFG_CAM_CREDITS_CAM_CRDTS_USED_MASK,
      ._index = AR_NIC_CQ_CFG_CAM_CREDITS_CAM_CRDTS_USED_QW,
      ._desc = "Credits used for CQ CAM entries",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "CAM_CRDTS_USED_MAX",
      ._bpos = AR_NIC_CQ_CFG_CAM_CREDITS_CAM_CRDTS_USED_MAX_BP,
      ._mask = AR_NIC_CQ_CFG_CAM_CREDITS_CAM_CRDTS_USED_MAX_MASK,
      ._rval = AR_NIC_CQ_CFG_CAM_CREDITS_RSTDATA & AR_NIC_CQ_CFG_CAM_CREDITS_CAM_CRDTS_USED_MAX_MASK,
      ._index = AR_NIC_CQ_CFG_CAM_CREDITS_CAM_CRDTS_USED_MAX_QW,
      ._desc = "Max value for CAM_CRDTS_USED",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cfg_cache_revisit_rate_detail[] = {
    { ._name = "CACHE_REVISIT_RATE",
      ._bpos = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_CACHE_REVISIT_RATE_BP,
      ._mask = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_CACHE_REVISIT_RATE_MASK,
      ._rval = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_RSTDATA & AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_CACHE_REVISIT_RATE_MASK,
      ._index = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_CACHE_REVISIT_RATE_QW,
      ._desc = "0 Revisit Cache Line every 1 event 1 Revisit Cache Line every 64 events 2 Revisit Cache Line every 128 events (base address must be 8KB aligned) 3 Revisit Cache Line every 256 events (base address must be 16KB aligned)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_cfg_nat_response_timeout_detail[] = {
    { ._name = "NAT_TIMEOUT_EN",
      ._bpos = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_NAT_TIMEOUT_EN_BP,
      ._mask = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_NAT_TIMEOUT_EN_MASK,
      ._rval = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_RSTDATA & AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_NAT_TIMEOUT_EN_MASK,
      ._index = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_NAT_TIMEOUT_EN_QW,
      ._desc = "Enable NAT Response Timeout Error Reporting",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "NAT_TIMEOUT_CNT",
      ._bpos = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_NAT_TIMEOUT_CNT_BP,
      ._mask = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_NAT_TIMEOUT_CNT_MASK,
      ._rval = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_RSTDATA & AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_NAT_TIMEOUT_CNT_MASK,
      ._index = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_NAT_TIMEOUT_CNT_QW,
      ._desc = "NAT Timeout Counter rollover rate in units of 163",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_flg_detail[] = {
    { ._name = "CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "CQ had BTE/DLA/SSID NAT Response Timeout which is a combination of no NPT credits or long NAT response time",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_LCL_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_LCL_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_LCL_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_LCL_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_LCL_PARITY_ERR_QW,
      ._desc = "CQ had BTE/DLA/SSID parity error, either input event data parity error or Translation Complete Queue parity error",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_LCL_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_LCL_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_LCL_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_LCL_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_LCL_DROPPED_EVENT_QW,
      ._desc = "CQ Dropped a BTE/DLA/SSID CQ event",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_LCL_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_LCL_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_LCL_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_LCL_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_LCL_IDX_BOUNDS_QW,
      ._desc = "BTE/DLA/SSID RD_IDX or WR_IDX out of bounds (greater than MAX_IDX)",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_LCL_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_LCL_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_LCL_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_LCL_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_LCL_NAT_ERR_QW,
      ._desc = "NAT Error translating BTE/DLA/SSID CQ address",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_LCL_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_LCL_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_LCL_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_LCL_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_LCL_OVERRUN_EVENT_QW,
      ._desc = "A BTE/DLA/SSID event occurred when its completion queue was full",
      ._type_bitmsk = 0x0000000000200001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_LCL_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_LCL_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_LCL_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_LCL_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_LCL_DISABLED_CQ_QW,
      ._desc = "An event referred to a disabled BTE/DLA/SSID CQ descriptor",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "CQ had RMT NAT Response Timeout which is a combination of no NPT credits or long NAT response time",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_RMT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_RMT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_RMT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_RMT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_RMT_PARITY_ERR_QW,
      ._desc = "CQ had RMT parity error, either input event data parity error, input extra RMT data parity error or Translation Complete Queue parity error",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_RMT_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_RMT_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_RMT_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_RMT_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_RMT_DROPPED_EVENT_QW,
      ._desc = "CQ Dropped a RMT CQ event",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_RMT_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_RMT_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_RMT_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_RMT_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_RMT_IDX_BOUNDS_QW,
      ._desc = "RMT RD_IDX or WR_IDX out of bounds (greater than MAX_IDX)",
      ._type_bitmsk = 0x0000000000010001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_RMT_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_RMT_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_RMT_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_RMT_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_RMT_NAT_ERR_QW,
      ._desc = "NAT Error translating RMT CQ address",
      ._type_bitmsk = 0x0000000000020001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_RMT_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_RMT_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_RMT_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_RMT_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_RMT_OVERRUN_EVENT_QW,
      ._desc = "An RMT event occurred when its completion queue was full",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_RMT_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_RMT_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_RMT_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_RMT_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_RMT_DISABLED_CQ_QW,
      ._desc = "An event referred to a disabled RMT CQ descriptor",
      ._type_bitmsk = 0x0000000000010001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_DESC_TBL_SBE",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_DESC_TBL_SBE_QW,
      ._desc = "CQ Descriptor Table SBE",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "CQ_DESC_TBL_MBE",
      ._bpos = AR_NIC_CQ_ERR_FLG_CQ_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_CQ_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_CQ_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_CQ_DESC_TBL_MBE_QW,
      ._desc = "CQ Descriptor Table MBE",
      ._type_bitmsk = 0x0000000000010001ull,
      ._access = "RW1"
    },
    { ._name = "FMA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_FMA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_FMA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "FMA input queue overrun",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "SSID_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_SSID_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_SSID_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "SSID input queue overrun",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RMT_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_RMT_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_RMT_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "RMT input queue overrun",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "DLA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_DLA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_DLA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "DLA input queue overrun",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "BTE_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FLG_BTE_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_BTE_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "BTE input queue overrun",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CQ_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_CQ_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CQ_ERR_FLG_RSTDATA & AR_NIC_CQ_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_CQ_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Test bit for generating interrupt",
      ._type_bitmsk = 0x0000000000100001ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_clr_detail[] = {
    { ._name = "CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "CQ had BTE/DLA/SSID NAT Response Timeout which is a combination of no NPT credits or long NAT response time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_LCL_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_LCL_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_LCL_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_LCL_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_LCL_PARITY_ERR_QW,
      ._desc = "CQ had BTE/DLA/SSID parity error, either input event data parity error or Translation Complete Queue parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_LCL_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_LCL_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_LCL_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_LCL_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_LCL_DROPPED_EVENT_QW,
      ._desc = "CQ Dropped a BTE/DLA/SSID CQ event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_LCL_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_LCL_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_LCL_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_LCL_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_LCL_IDX_BOUNDS_QW,
      ._desc = "BTE/DLA/SSID RD_IDX or WR_IDX out of bounds (greater than MAX_IDX)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_LCL_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_LCL_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_LCL_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_LCL_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_LCL_NAT_ERR_QW,
      ._desc = "NAT Error translating BTE/DLA/SSID CQ address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_LCL_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_LCL_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_LCL_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_LCL_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_LCL_OVERRUN_EVENT_QW,
      ._desc = "A BTE/DLA/SSID event occurred when its completion queue was full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_LCL_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_LCL_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_LCL_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_LCL_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_LCL_DISABLED_CQ_QW,
      ._desc = "An event referred to a disabled BTE/DLA/SSID CQ descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "CQ had RMT NAT Response Timeout which is a combination of no NPT credits or long NAT response time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_RMT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_RMT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_RMT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_RMT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_RMT_PARITY_ERR_QW,
      ._desc = "CQ had RMT parity error, either input event data parity error, input extra RMT data parity error or Translation Complete Queue parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_RMT_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_RMT_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_RMT_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_RMT_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_RMT_DROPPED_EVENT_QW,
      ._desc = "CQ Dropped a RMT CQ event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_RMT_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_RMT_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_RMT_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_RMT_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_RMT_IDX_BOUNDS_QW,
      ._desc = "RMT RD_IDX or WR_IDX out of bounds (greater than MAX_IDX)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_RMT_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_RMT_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_RMT_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_RMT_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_RMT_NAT_ERR_QW,
      ._desc = "NAT Error translating RMT CQ address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_RMT_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_RMT_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_RMT_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_RMT_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_RMT_OVERRUN_EVENT_QW,
      ._desc = "An RMT event occurred when its completion queue was full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_RMT_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_RMT_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_RMT_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_RMT_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_RMT_DISABLED_CQ_QW,
      ._desc = "An event referred to a disabled RMT CQ descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_DESC_TBL_SBE",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_DESC_TBL_SBE_QW,
      ._desc = "CQ Descriptor Table SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CQ_DESC_TBL_MBE",
      ._bpos = AR_NIC_CQ_ERR_CLR_CQ_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_CQ_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_CQ_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_CQ_DESC_TBL_MBE_QW,
      ._desc = "CQ Descriptor Table MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "FMA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_CLR_FMA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_FMA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "FMA input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "SSID_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_CLR_SSID_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_SSID_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "SSID input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "RMT_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_CLR_RMT_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_RMT_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "RMT input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "DLA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_CLR_DLA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_DLA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "DLA input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "BTE_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_CLR_BTE_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_BTE_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "BTE input queue overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CQ_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_CQ_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CQ_ERR_CLR_RSTDATA & AR_NIC_CQ_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_CQ_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Test bit for generating interrupt",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_hss_msk_detail[] = {
    { ._name = "CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_PARITY_ERR_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_DROPPED_EVENT_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_IDX_BOUNDS_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_NAT_ERR_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_OVERRUN_EVENT_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_LCL_DISABLED_CQ_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_PARITY_ERR_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_DROPPED_EVENT_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_IDX_BOUNDS_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_NAT_ERR_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_OVERRUN_EVENT_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_RMT_DISABLED_CQ_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_DESC_TBL_SBE",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_DESC_TBL_SBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_DESC_TBL_MBE",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_CQ_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_CQ_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_CQ_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_CQ_DESC_TBL_MBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FMA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_FMA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_FMA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "SSID_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_SSID_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_SSID_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RMT_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_RMT_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_RMT_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_DLA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_DLA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_BTE_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_BTE_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CQ_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_CQ_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA & AR_NIC_CQ_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_CQ_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_os_msk_detail[] = {
    { ._name = "CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_PARITY_ERR_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_DROPPED_EVENT_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_IDX_BOUNDS_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_NAT_ERR_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_OVERRUN_EVENT_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_LCL_DISABLED_CQ_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_PARITY_ERR_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_DROPPED_EVENT_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_IDX_BOUNDS_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_NAT_ERR_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_OVERRUN_EVENT_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_RMT_DISABLED_CQ_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_DESC_TBL_SBE",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_DESC_TBL_SBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_DESC_TBL_MBE",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_CQ_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_CQ_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_CQ_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_CQ_DESC_TBL_MBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FMA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_FMA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_FMA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "SSID_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_SSID_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_SSID_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RMT_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_RMT_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_RMT_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_DLA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_DLA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_BTE_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_BTE_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CQ_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_CQ_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CQ_ERR_OS_MSK_RSTDATA & AR_NIC_CQ_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_CQ_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_first_flg_detail[] = {
    { ._name = "CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_PARITY_ERR_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_DROPPED_EVENT_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_IDX_BOUNDS_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_NAT_ERR_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_OVERRUN_EVENT_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_LCL_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_LCL_DISABLED_CQ_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_NAT_RESPONSE_TIMEOUT_ERR_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_PARITY_ERR_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_DROPPED_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_DROPPED_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_DROPPED_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_DROPPED_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_DROPPED_EVENT_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_IDX_BOUNDS",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_IDX_BOUNDS_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_IDX_BOUNDS_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_IDX_BOUNDS_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_IDX_BOUNDS_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_NAT_ERR_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_OVERRUN_EVENT",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_OVERRUN_EVENT_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_OVERRUN_EVENT_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_OVERRUN_EVENT_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_OVERRUN_EVENT_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_RMT_DISABLED_CQ",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_DISABLED_CQ_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_DISABLED_CQ_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_DISABLED_CQ_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_RMT_DISABLED_CQ_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_DESC_TBL_SBE",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_DESC_TBL_SBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_DESC_TBL_MBE",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_CQ_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_CQ_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_CQ_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_CQ_DESC_TBL_MBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FMA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_FMA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_FMA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_FMA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "SSID_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_SSID_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_SSID_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_SSID_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RMT_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_RMT_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_RMT_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_RMT_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_DLA_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_DLA_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_DLA_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_CQ_INPUT_Q_OVERRUN",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_BTE_CQ_INPUT_Q_OVERRUN_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_BTE_CQ_INPUT_Q_OVERRUN_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_BTE_CQ_INPUT_Q_OVERRUN_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_CQ_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_CQ_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA & AR_NIC_CQ_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_CQ_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_desc_tbl_sbe_mbe_detail[] = {
    { ._name = "SBE_SRC",
      ._bpos = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_SRC_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_SRC_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTDATA & AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_SRC_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_SRC_QW,
      ._desc = "Source of SBE: 0 BTE event 1 SSID event 2 RMT event 3 DLA event 4 LB read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SBE_REGION",
      ._bpos = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_REGION_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_REGION_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTDATA & AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_REGION_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_REGION_QW,
      ._desc = "First CQ Descriptor Table ECC region with SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_SYNDROME_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTDATA & AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_SYNDROME_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_SYNDROME_QW,
      ._desc = "First CQ Descriptor Table Syndrome of ECC region with SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SBE_ADDR",
      ._bpos = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_ADDR_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_ADDR_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTDATA & AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_ADDR_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_SBE_ADDR_QW,
      ._desc = "First CQ Descriptor Table read address with SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MBE_SRC",
      ._bpos = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_SRC_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_SRC_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTDATA & AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_SRC_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_SRC_QW,
      ._desc = "Source of MBE: 0 BTE event 1 SSID event 2 RMT event 3 DLA event 4 LB read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MBE_REGION",
      ._bpos = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_REGION_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_REGION_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTDATA & AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_REGION_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_REGION_QW,
      ._desc = "First CQ Descriptor Table ECC region with MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_SYNDROME_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTDATA & AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_SYNDROME_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_SYNDROME_QW,
      ._desc = "First CQ Descriptor Table Syndrome of ECC region with MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MBE_ADDR",
      ._bpos = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_ADDR_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_ADDR_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTDATA & AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_ADDR_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_MBE_ADDR_QW,
      ._desc = "First CQ Descriptor Table read address with MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_rmt_disabled_cq_detail[] = {
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_SOURCE_QW,
      ._desc = "Source of event with descriptor disabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_CQH_QW,
      ._desc = "CQ Handle of event with descriptor disabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_rmt_nat_err_detail[] = {
    { ._name = "NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_NAT_ERR_QW,
      ._desc = "NAT Error Code",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_SOURCE_QW,
      ._desc = "Source of event with translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_CQH_QW,
      ._desc = "CQ Handle of event with translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_rmt_idx_bounds_detail[] = {
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_SOURCE_QW,
      ._desc = "Source of event with index bounds error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_CQH_QW,
      ._desc = "CQ Handle of event with index bounds error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_rmt_dropped_event_detail[] = {
    { ._name = "INPUT_RMT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_INPUT_RMT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_INPUT_RMT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_INPUT_RMT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_INPUT_RMT_PARITY_ERR_QW,
      ._desc = "Input Buffer RMT Data Parity Err  (only applicable if SOURCE is RMT)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "INPUT_EVENT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_INPUT_EVENT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_INPUT_EVENT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_INPUT_EVENT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_INPUT_EVENT_PARITY_ERR_QW,
      ._desc = "Input Buffer Event Data Parity Err",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "TCQ_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_TCQ_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_TCQ_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_TCQ_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_TCQ_PARITY_ERR_QW,
      ._desc = "Translation Complete Q Parity Err",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "TCQ_STATUS",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_TCQ_STATUS_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_TCQ_STATUS_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_TCQ_STATUS_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_TCQ_STATUS_QW,
      ._desc = "Translation Complete Q Status:  00 No Error 01 Descriptor MBE 10 NAT Error 11 Dropped (EN = 0 OR rd_idx or wr_idx > max_idx OR CQ is full with no event error)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_SOURCE_QW,
      ._desc = "Source of dropped event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_CQH_QW,
      ._desc = "CQ handle of dropped event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_rmt_nat_response_timeout_detail[] = {
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_SOURCE_QW,
      ._desc = "Source of NAT response timed out event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_RSTDATA & AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_CQH_QW,
      ._desc = "CQ handle of NAT response timed out event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_lcl_disabled_cq_detail[] = {
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_SOURCE_QW,
      ._desc = "Source of event with descriptor disabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_CQH_QW,
      ._desc = "CQ Handle of event with descriptor disabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_lcl_nat_err_detail[] = {
    { ._name = "NAT_ERR",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_NAT_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_NAT_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_NAT_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_NAT_ERR_QW,
      ._desc = "NAT Error Code",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_SOURCE_QW,
      ._desc = "Source of event with translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_CQH_QW,
      ._desc = "CQ Handle of event with translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_lcl_idx_bounds_detail[] = {
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_SOURCE_QW,
      ._desc = "Source of event with index bounds error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_CQH_QW,
      ._desc = "CQ Handle of event with index bounds error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_lcl_dropped_event_detail[] = {
    { ._name = "INPUT_EVENT_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_INPUT_EVENT_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_INPUT_EVENT_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_INPUT_EVENT_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_INPUT_EVENT_PARITY_ERR_QW,
      ._desc = "Input Buffer Event Data Parity Err",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "TCQ_PARITY_ERR",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_TCQ_PARITY_ERR_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_TCQ_PARITY_ERR_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_TCQ_PARITY_ERR_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_TCQ_PARITY_ERR_QW,
      ._desc = "Translation Complete Q Parity Err",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "TCQ_STATUS",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_TCQ_STATUS_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_TCQ_STATUS_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_TCQ_STATUS_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_TCQ_STATUS_QW,
      ._desc = "Translation Complete Q Status:  00 No Error 01 Descriptor MBE 10 NAT Error 11 Dropped (EN = 0 OR rd_idx or wr_idx > max_idx OR CQ is full with no event error)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_SOURCE_QW,
      ._desc = "Source of dropped event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_CQH_QW,
      ._desc = "CQ handle of dropped event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_err_info_lcl_nat_response_timeout_detail[] = {
    { ._name = "SOURCE",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_SOURCE_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_SOURCE_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_SOURCE_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_SOURCE_QW,
      ._desc = "Source of NAT response timed out event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_CQH_BP,
      ._mask = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_CQH_MASK,
      ._rval = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_RSTDATA & AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_CQH_MASK,
      ._index = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_CQH_QW,
      ._desc = "CQ handle of NAT response timed out event",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_dbg_errinj_desc_tbl_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_ADDRESS_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_ADDRESS_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_ADDRESS_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_ADDRESS_QW,
      ._desc = "Descriptor Table Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_CHECKBITS_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_CHECKBITS_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_CHECKBITS_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_CHECKBITS_QW,
      ._desc = "Mask of checkbits to invert",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SELECT",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_SELECT_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_SELECT_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_SELECT_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_SELECT_QW,
      ._desc = "Mask of ECC regions to affect",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_TRIGGERED_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_TRIGGERED_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_TRIGGERED_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_TRIGGERED_QW,
      ._desc = "Hardware logic sets this bit when error injection triggers",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_MODE_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_MODE_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_MODE_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_MODE_QW,
      ._desc = "Error Injection Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_ENABLE_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_ENABLE_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_ENABLE_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_dbg_errinj_parity_detail[] = {
    { ._name = "TRANS_COMPL_Q",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_PARITY_TRANS_COMPL_Q_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_PARITY_TRANS_COMPL_Q_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_PARITY_TRANS_COMPL_Q_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_PARITY_TRANS_COMPL_Q_QW,
      ._desc = "Induce parity error on Translation Complete Queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RMT_INPUT_RMT_DATA",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_PARITY_RMT_INPUT_RMT_DATA_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_PARITY_RMT_INPUT_RMT_DATA_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_PARITY_RMT_INPUT_RMT_DATA_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_PARITY_RMT_INPUT_RMT_DATA_QW,
      ._desc = "Induce parity error on RMT input control",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RMT_INPUT_EVENT_DATA",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_PARITY_RMT_INPUT_EVENT_DATA_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_PARITY_RMT_INPUT_EVENT_DATA_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_PARITY_RMT_INPUT_EVENT_DATA_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_PARITY_RMT_INPUT_EVENT_DATA_QW,
      ._desc = "Induce parity error on RMT input data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SSID_INPUT_EVENT_DATA",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_PARITY_SSID_INPUT_EVENT_DATA_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_PARITY_SSID_INPUT_EVENT_DATA_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_PARITY_SSID_INPUT_EVENT_DATA_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_PARITY_SSID_INPUT_EVENT_DATA_QW,
      ._desc = "Induce parity error on SSID input data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DLA_INPUT_EVENT_DATA",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_PARITY_DLA_INPUT_EVENT_DATA_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_PARITY_DLA_INPUT_EVENT_DATA_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_PARITY_DLA_INPUT_EVENT_DATA_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_PARITY_DLA_INPUT_EVENT_DATA_QW,
      ._desc = "Induce parity error on DLA input data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BTE_INPUT_EVENT_DATA",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_PARITY_BTE_INPUT_EVENT_DATA_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_PARITY_BTE_INPUT_EVENT_DATA_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_PARITY_BTE_INPUT_EVENT_DATA_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_PARITY_BTE_INPUT_EVENT_DATA_QW,
      ._desc = "Induce parity error on BTE input data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_PARITY_TRIGGERED_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_PARITY_TRIGGERED_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_PARITY_TRIGGERED_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_PARITY_TRIGGERED_QW,
      ._desc = "Hardware logic sets this bit when error injection triggers",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE0",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_PARITY_MODE0_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_PARITY_MODE0_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_PARITY_MODE0_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_PARITY_MODE0_QW,
      ._desc = "Error Injection Mode[0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_CQ_DBG_ERRINJ_PARITY_ENABLE_BP,
      ._mask = AR_NIC_CQ_DBG_ERRINJ_PARITY_ENABLE_MASK,
      ._rval = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA & AR_NIC_CQ_DBG_ERRINJ_PARITY_ENABLE_MASK,
      ._index = AR_NIC_CQ_DBG_ERRINJ_PARITY_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_dbg_iommu_status_detail[] = {
    { ._name = "CQ_IOMMU_EPOCH",
      ._bpos = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_BP,
      ._mask = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_MASK,
      ._rval = AR_NIC_CQ_DBG_IOMMU_STATUS_RSTDATA & AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_MASK,
      ._index = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_QW,
      ._desc = "Current IOMMU epoch",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "CQ_IOMMU_EPOCH_CNT_1",
      ._bpos = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_CNT_1_BP,
      ._mask = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_CNT_1_MASK,
      ._rval = AR_NIC_CQ_DBG_IOMMU_STATUS_RSTDATA & AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_CNT_1_MASK,
      ._index = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_CNT_1_QW,
      ._desc = "IOMMU epoch count for epoch 1",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "CQ_IOMMU_EPOCH_CNT_0",
      ._bpos = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_CNT_0_BP,
      ._mask = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_CNT_0_MASK,
      ._rval = AR_NIC_CQ_DBG_IOMMU_STATUS_RSTDATA & AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_CNT_0_MASK,
      ._index = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_EPOCH_CNT_0_QW,
      ._desc = "IOMMU epoch count for epoch 0",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "CQ_IOMMU_COMP_WAIT_ACK_PENDING",
      ._bpos = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_COMP_WAIT_ACK_PENDING_BP,
      ._mask = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_COMP_WAIT_ACK_PENDING_MASK,
      ._rval = AR_NIC_CQ_DBG_IOMMU_STATUS_RSTDATA & AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_COMP_WAIT_ACK_PENDING_MASK,
      ._index = AR_NIC_CQ_DBG_IOMMU_STATUS_CQ_IOMMU_COMP_WAIT_ACK_PENDING_QW,
      ._desc = "1 indicates CQ logic is waiting for CQ_IOMMU_EPOCH_CNT[~CQ_IOMMU_EPOCH] to go to 0 so it can send r_q_cq_iommu_comp_wait_ack",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_cq_dbg_state_detail[] = {
    { ._name = "CQ_NPT_STATE",
      ._bpos = AR_NIC_CQ_DBG_STATE_CQ_NPT_STATE_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_CQ_NPT_STATE_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_CQ_NPT_STATE_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_CQ_NPT_STATE_QW,
      ._desc = "One-hot NPT output state machine: 1 = idle or sending event packet header flit or sending nop packet 2 = event packet data flit 4 = send nop packet 8 = send irq packet 16= send flush packet",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "CQ_DESC_FIFO_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_CQ_DESC_FIFO_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_CQ_DESC_FIFO_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_CQ_DESC_FIFO_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_CQ_DESC_FIFO_CNT_QW,
      ._desc = "Descriptor fifo count",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "FMA_CQ_Q_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_FMA_CQ_Q_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_FMA_CQ_Q_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_FMA_CQ_Q_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_FMA_CQ_Q_CNT_QW,
      ._desc = "Number of entries currently in FMA input Q",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "DLA_CQ_TRQ_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_DLA_CQ_TRQ_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_DLA_CQ_TRQ_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_DLA_CQ_TRQ_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_DLA_CQ_TRQ_CNT_QW,
      ._desc = "Number of entries currently in DLA TRQ",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "DLA_CQ_TRDR_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_DLA_CQ_TRDR_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_DLA_CQ_TRDR_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_DLA_CQ_TRDR_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_DLA_CQ_TRDR_CNT_QW,
      ._desc = "Number of entries currently in DLATRDR",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "RMT_CQ_TRQ_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_RMT_CQ_TRQ_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_RMT_CQ_TRQ_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_RMT_CQ_TRQ_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_RMT_CQ_TRQ_CNT_QW,
      ._desc = "Number of entries currently in RMT TRQ",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "RMT_CQ_TRDR_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_RMT_CQ_TRDR_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_RMT_CQ_TRDR_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_RMT_CQ_TRDR_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_RMT_CQ_TRDR_CNT_QW,
      ._desc = "Number of entries currently in RMT TRDR",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "SSID_CQ_TRQ_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_SSID_CQ_TRQ_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_SSID_CQ_TRQ_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_SSID_CQ_TRQ_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_SSID_CQ_TRQ_CNT_QW,
      ._desc = "Number of entries currently in SSID TRQ",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "SSID_CQ_TRDR_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_SSID_CQ_TRDR_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_SSID_CQ_TRDR_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_SSID_CQ_TRDR_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_SSID_CQ_TRDR_CNT_QW,
      ._desc = "Number of entries currently in SSID TRDR",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "BTE_CQ_TRQ_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_BTE_CQ_TRQ_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_BTE_CQ_TRQ_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_BTE_CQ_TRQ_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_BTE_CQ_TRQ_CNT_QW,
      ._desc = "Number of entries currently in BTE TRQ",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "BTE_CQ_TRDR_CNT",
      ._bpos = AR_NIC_CQ_DBG_STATE_BTE_CQ_TRDR_CNT_BP,
      ._mask = AR_NIC_CQ_DBG_STATE_BTE_CQ_TRDR_CNT_MASK,
      ._rval = AR_NIC_CQ_DBG_STATE_RSTDATA & AR_NIC_CQ_DBG_STATE_BTE_CQ_TRDR_CNT_MASK,
      ._index = AR_NIC_CQ_DBG_STATE_BTE_CQ_TRDR_CNT_QW,
      ._desc = "Number of entries currently in BTE TRDR",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR CQ DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_cq_cfg_desc_tbl_rval[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_RSTDATA_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_rmsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_RSTMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_RSTMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_RSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_wrmsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_WRTMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_WRTMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_WRTMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_rdmsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_RDMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_RDMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_RDMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_xsmsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_XSMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_XSMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_XSMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_wsemsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_WSEMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_WSEMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_WSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_rsemsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_RSEMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_RSEMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_RSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_w1smsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_W1SMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_W1SMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_W1SMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_w1cmsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_W1CMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_W1CMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_W1CMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_wrstmsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_WRSTMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_WRSTMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_WRSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_hwwmsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_HWWMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_HWWMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_HWWMASK_QW2
};
static const uint64_t __ar_nic_cq_cfg_desc_tbl_hwrmsk[3] = {
	AR_NIC_CQ_CFG_DESC_TBL_HWRMASK_QW0,
	AR_NIC_CQ_CFG_DESC_TBL_HWRMASK_QW1,
	AR_NIC_CQ_CFG_DESC_TBL_HWRMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_rval[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RSTDATA_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RSTDATA_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RSTDATA_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_rmsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RSTMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RSTMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RSTMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_wrmsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_WRTMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_WRTMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_WRTMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_rdmsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RDMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RDMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RDMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_xsmsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_XSMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_XSMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_XSMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_wsemsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_WSEMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_WSEMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_WSEMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_rsemsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RSEMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RSEMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_RSEMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_w1smsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_W1SMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_W1SMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_W1SMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_w1cmsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_W1CMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_W1CMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_W1CMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_wrstmsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_WRSTMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_WRSTMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_hwwmsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_HWWMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_HWWMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_HWWMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_hi_cq_hwrmsk[3] = {
	AR_NIC_CQ_MMR_RING_0_HI_CQ_HWRMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_HWRMASK_QW1,
	AR_NIC_CQ_MMR_RING_0_HI_CQ_HWRMASK_QW2
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_rval[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTDATA_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_rmsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_RSTMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_wrmsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_WRTMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_WRTMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_rdmsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_RDMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_RDMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_xsmsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_XSMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_XSMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_wsemsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_WSEMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_WSEMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_rsemsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_RSEMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_RSEMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_w1smsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_W1SMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_W1SMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_w1cmsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_W1CMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_W1CMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_wrstmsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_WRSTMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_hwwmsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_HWWMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_HWWMASK_QW1
};
static const uint64_t __ar_nic_cq_mmr_ring_0_mid_cq_hwrmsk[2] = {
	AR_NIC_CQ_MMR_RING_0_MID_CQ_HWRMASK_QW0,
	AR_NIC_CQ_MMR_RING_0_MID_CQ_HWRMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_rval[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSTDATA_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSTDATA_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSTDATA_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_rmsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSTMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSTMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSTMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_wrmsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_WRTMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_WRTMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_WRTMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_rdmsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RDMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RDMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RDMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_xsmsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_XSMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_XSMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_XSMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_wsemsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_WSEMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_WSEMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_WSEMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_rsemsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSEMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSEMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_RSEMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_w1smsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_W1SMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_W1SMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_W1SMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_w1cmsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_W1CMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_W1CMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_W1CMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_wrstmsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_WRSTMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_WRSTMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_hwwmsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_HWWMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_HWWMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_HWWMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_hi_cq_hwrmsk[3] = {
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_HWRMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_HWRMASK_QW1,
	AR_NIC_CQ_ERR_FLG_1_HI_CQ_HWRMASK_QW2
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_rval[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTDATA_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_rmsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSTMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_wrmsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_WRTMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_WRTMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_rdmsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_RDMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_RDMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_xsmsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_XSMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_XSMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_wsemsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_WSEMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_WSEMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_rsemsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSEMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_RSEMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_w1smsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_W1SMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_W1SMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_w1cmsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_W1CMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_W1CMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_wrstmsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_WRSTMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_hwwmsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_HWWMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_HWWMASK_QW1
};
static const uint64_t __ar_nic_cq_err_flg_1_mid_cq_hwrmsk[2] = {
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_HWRMASK_QW0,
	AR_NIC_CQ_ERR_FLG_1_MID_CQ_HWRMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_rval[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSTDATA_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSTDATA_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSTDATA_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_rmsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSTMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSTMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_wrmsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_WRTMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_WRTMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_WRTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_rdmsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RDMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RDMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RDMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_xsmsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_XSMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_XSMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_XSMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_wsemsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_WSEMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_WSEMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_WSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_rsemsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSEMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSEMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_RSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_w1smsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_W1SMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_W1SMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_W1SMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_w1cmsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_W1CMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_W1CMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_W1CMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_wrstmsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_WRSTMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_WRSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_hwwmsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_HWWMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_HWWMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_HWWMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_hi_cq_hwrmsk[3] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_HWRMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_HWRMASK_QW1,
	AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ_HWRMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_rval[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_RSTDATA_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_RSTDATA_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_rmsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_RSTMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_RSTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_wrmsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_WRTMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_WRTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_rdmsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_RDMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_RDMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_xsmsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_XSMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_XSMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_wsemsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_WSEMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_WSEMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_rsemsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_RSEMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_RSEMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_w1smsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_W1SMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_W1SMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_w1cmsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_W1CMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_W1CMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_wrstmsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_WRSTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_hwwmsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_HWWMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_HWWMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_npt_flit_2_mid_cq_hwrmsk[2] = {
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_HWRMASK_QW0,
	AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ_HWRMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_rval[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSTDATA_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSTDATA_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSTDATA_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_rmsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSTMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSTMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_wrmsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_WRTMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_WRTMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_WRTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_rdmsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RDMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RDMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RDMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_xsmsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_XSMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_XSMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_XSMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_wsemsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_WSEMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_WSEMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_WSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_rsemsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSEMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSEMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_RSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_w1smsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_W1SMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_W1SMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_W1SMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_w1cmsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_W1CMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_W1CMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_W1CMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_wrstmsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_WRSTMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_WRSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_hwwmsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_HWWMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_HWWMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_HWWMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_hi_cq_hwrmsk[3] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_HWRMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_HWRMASK_QW1,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ_HWRMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_rval[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_RSTDATA_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_RSTDATA_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_rmsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_RSTMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_RSTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_wrmsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_WRTMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_WRTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_rdmsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_RDMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_RDMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_xsmsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_XSMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_XSMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_wsemsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_WSEMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_WSEMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_rsemsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_RSEMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_RSEMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_w1smsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_W1SMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_W1SMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_w1cmsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_W1CMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_W1CMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_wrstmsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_WRSTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_hwwmsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_HWWMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_HWWMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_nat_request_3_mid_cq_hwrmsk[2] = {
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_HWRMASK_QW0,
	AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ_HWRMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_rval[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSTDATA_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSTDATA_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSTDATA_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_rmsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSTMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSTMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_wrmsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_WRTMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_WRTMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_WRTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_rdmsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RDMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RDMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RDMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_xsmsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_XSMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_XSMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_XSMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_wsemsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_WSEMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_WSEMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_WSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_rsemsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSEMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSEMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_RSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_w1smsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_W1SMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_W1SMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_W1SMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_w1cmsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_W1CMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_W1CMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_W1CMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_wrstmsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_WRSTMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_WRSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_hwwmsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_HWWMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_HWWMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_HWWMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_hi_cq_hwrmsk[3] = {
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_HWRMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_HWRMASK_QW1,
	AR_NIC_CQ_CQ_ACKS_4_HI_CQ_HWRMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_rval[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_RSTDATA_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_RSTDATA_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_rmsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_RSTMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_RSTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_wrmsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_WRTMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_WRTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_rdmsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_RDMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_RDMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_xsmsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_XSMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_XSMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_wsemsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_WSEMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_WSEMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_rsemsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_RSEMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_RSEMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_w1smsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_W1SMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_W1SMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_w1cmsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_W1CMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_W1CMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_wrstmsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_WRSTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_hwwmsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_HWWMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_HWWMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_acks_4_mid_cq_hwrmsk[2] = {
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_HWRMASK_QW0,
	AR_NIC_CQ_CQ_ACKS_4_MID_CQ_HWRMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_rval[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSTDATA_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSTDATA_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSTDATA_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_rmsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSTMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSTMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_wrmsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_WRTMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_WRTMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_WRTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_rdmsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RDMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RDMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RDMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_xsmsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_XSMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_XSMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_XSMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_wsemsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_WSEMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_WSEMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_WSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_rsemsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSEMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSEMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_RSEMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_w1smsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_W1SMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_W1SMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_W1SMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_w1cmsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_W1CMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_W1CMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_W1CMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_wrstmsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_WRSTMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_WRSTMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_hwwmsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_HWWMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_HWWMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_HWWMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_hi_cq_hwrmsk[3] = {
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_HWRMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_HWRMASK_QW1,
	AR_NIC_CQ_CQ_DEBUG_5_HI_CQ_HWRMASK_QW2
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_rval[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_RSTDATA_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_RSTDATA_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_rmsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_RSTMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_RSTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_wrmsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_WRTMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_WRTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_rdmsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_RDMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_RDMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_xsmsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_XSMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_XSMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_wsemsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_WSEMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_WSEMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_rsemsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_RSEMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_RSEMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_w1smsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_W1SMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_W1SMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_w1cmsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_W1CMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_W1CMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_wrstmsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_WRSTMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_WRSTMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_hwwmsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_HWWMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_HWWMASK_QW1
};
static const uint64_t __ar_nic_cq_cq_debug_5_mid_cq_hwrmsk[2] = {
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_HWRMASK_QW0,
	AR_NIC_CQ_CQ_DEBUG_5_MID_CQ_HWRMASK_QW1
};

/*
 *  AR CQ MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_cq_cfg_desc_tbl = {
    ._name = "AR_NIC_CQ_CFG_DESC_TBL",
    ._addr = AR_NIC_CQ_CFG_DESC_TBL,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_cfg_desc_tbl_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 32,
    ._depth = 2048,
      ._type_bitmsk = 0x000000000000000bull,
    ._info = __ar_nic_cq_cfg_desc_tbl_detail
};
static const cmmr_br_t __ar_nic_cq_mmr_ring_0_hi_cq = {
    ._name = "AR_NIC_CQ_MMR_RING_0_HI_CQ",
    ._addr = AR_NIC_CQ_MMR_RING_0_HI_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_hi_cq_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_mmr_ring_0_hi_cq_detail
};
static const cmmr_br_t __ar_nic_cq_mmr_ring_0_mid_cq = {
    ._name = "AR_NIC_CQ_MMR_RING_0_MID_CQ",
    ._addr = AR_NIC_CQ_MMR_RING_0_MID_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_mmr_ring_0_mid_cq_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_mmr_ring_0_mid_cq_detail
};
static const cmmr_br_t __ar_nic_cq_mmr_ring_0_lo_cq = {
    ._name = "AR_NIC_CQ_MMR_RING_0_LO_CQ",
    ._addr = AR_NIC_CQ_MMR_RING_0_LO_CQ,
    ._rval.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_MMR_RING_0_LO_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_mmr_ring_0_lo_cq_detail
};
static const cmmr_br_t __ar_nic_cq_err_flg_1_hi_cq = {
    ._name = "AR_NIC_CQ_ERR_FLG_1_HI_CQ",
    ._addr = AR_NIC_CQ_ERR_FLG_1_HI_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_hi_cq_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_err_flg_1_hi_cq_detail
};
static const cmmr_br_t __ar_nic_cq_err_flg_1_mid_cq = {
    ._name = "AR_NIC_CQ_ERR_FLG_1_MID_CQ",
    ._addr = AR_NIC_CQ_ERR_FLG_1_MID_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_err_flg_1_mid_cq_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_err_flg_1_mid_cq_detail
};
static const cmmr_br_t __ar_nic_cq_err_flg_1_lo_cq = {
    ._name = "AR_NIC_CQ_ERR_FLG_1_LO_CQ",
    ._addr = AR_NIC_CQ_ERR_FLG_1_LO_CQ,
    ._rval.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_FLG_1_LO_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_err_flg_1_lo_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_npt_flit_2_hi_cq = {
    ._name = "AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ",
    ._addr = AR_NIC_CQ_CQ_NPT_FLIT_2_HI_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_hi_cq_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_npt_flit_2_hi_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_npt_flit_2_mid_cq = {
    ._name = "AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ",
    ._addr = AR_NIC_CQ_CQ_NPT_FLIT_2_MID_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_npt_flit_2_mid_cq_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_npt_flit_2_mid_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_npt_flit_2_lo_cq = {
    ._name = "AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ",
    ._addr = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ,
    ._rval.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_CQ_NPT_FLIT_2_LO_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_npt_flit_2_lo_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_nat_request_3_hi_cq = {
    ._name = "AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ",
    ._addr = AR_NIC_CQ_CQ_NAT_REQUEST_3_HI_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_hi_cq_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_nat_request_3_hi_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_nat_request_3_mid_cq = {
    ._name = "AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ",
    ._addr = AR_NIC_CQ_CQ_NAT_REQUEST_3_MID_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_nat_request_3_mid_cq_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_nat_request_3_mid_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_nat_request_3_lo_cq = {
    ._name = "AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ",
    ._addr = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ,
    ._rval.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_CQ_NAT_REQUEST_3_LO_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_nat_request_3_lo_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_acks_4_hi_cq = {
    ._name = "AR_NIC_CQ_CQ_ACKS_4_HI_CQ",
    ._addr = AR_NIC_CQ_CQ_ACKS_4_HI_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_hi_cq_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_acks_4_hi_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_acks_4_mid_cq = {
    ._name = "AR_NIC_CQ_CQ_ACKS_4_MID_CQ",
    ._addr = AR_NIC_CQ_CQ_ACKS_4_MID_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_acks_4_mid_cq_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_acks_4_mid_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_acks_4_lo_cq = {
    ._name = "AR_NIC_CQ_CQ_ACKS_4_LO_CQ",
    ._addr = AR_NIC_CQ_CQ_ACKS_4_LO_CQ,
    ._rval.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_CQ_ACKS_4_LO_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_acks_4_lo_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_debug_5_hi_cq = {
    ._name = "AR_NIC_CQ_CQ_DEBUG_5_HI_CQ",
    ._addr = AR_NIC_CQ_CQ_DEBUG_5_HI_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_hi_cq_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_debug_5_hi_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_debug_5_mid_cq = {
    ._name = "AR_NIC_CQ_CQ_DEBUG_5_MID_CQ",
    ._addr = AR_NIC_CQ_CQ_DEBUG_5_MID_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_cq_cq_debug_5_mid_cq_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_debug_5_mid_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cq_debug_5_lo_cq = {
    ._name = "AR_NIC_CQ_CQ_DEBUG_5_LO_CQ",
    ._addr = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ,
    ._rval.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_CQ_DEBUG_5_LO_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_cq_cq_debug_5_lo_cq_detail
};
static const cmmr_br_t __ar_nic_cq_cfg_npt_credits = {
    ._name = "AR_NIC_CQ_CFG_NPT_CREDITS",
    ._addr = AR_NIC_CQ_CFG_NPT_CREDITS,
    ._rval.val = AR_NIC_CQ_CFG_NPT_CREDITS_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_CFG_NPT_CREDITS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_cfg_npt_credits_detail
};
static const cmmr_br_t __ar_nic_cq_cfg_cam_credits = {
    ._name = "AR_NIC_CQ_CFG_CAM_CREDITS",
    ._addr = AR_NIC_CQ_CFG_CAM_CREDITS,
    ._rval.val = AR_NIC_CQ_CFG_CAM_CREDITS_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_CFG_CAM_CREDITS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_cfg_cam_credits_detail
};
static const cmmr_br_t __ar_nic_cq_cfg_cache_revisit_rate = {
    ._name = "AR_NIC_CQ_CFG_CACHE_REVISIT_RATE",
    ._addr = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE,
    ._rval.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_CFG_CACHE_REVISIT_RATE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_cfg_cache_revisit_rate_detail
};
static const cmmr_br_t __ar_nic_cq_cfg_nat_response_timeout = {
    ._name = "AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT",
    ._addr = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT,
    ._rval.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_CFG_NAT_RESPONSE_TIMEOUT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_cfg_nat_response_timeout_detail
};
static const cmmr_br_t __ar_nic_cq_err_flg = {
    ._name = "AR_NIC_CQ_ERR_FLG",
    ._addr = AR_NIC_CQ_ERR_FLG,
    ._rval.val = AR_NIC_CQ_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x00000000003fc811ull,
    ._info = __ar_nic_cq_err_flg_detail
};
static const cmmr_br_t __ar_nic_cq_err_clr = {
    ._name = "AR_NIC_CQ_ERR_CLR",
    ._addr = AR_NIC_CQ_ERR_CLR,
    ._rval.val = AR_NIC_CQ_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_cq_err_clr_detail
};
static const cmmr_br_t __ar_nic_cq_err_hss_msk = {
    ._name = "AR_NIC_CQ_ERR_HSS_MSK",
    ._addr = AR_NIC_CQ_ERR_HSS_MSK,
    ._rval.val = AR_NIC_CQ_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_cq_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_cq_err_os_msk = {
    ._name = "AR_NIC_CQ_ERR_OS_MSK",
    ._addr = AR_NIC_CQ_ERR_OS_MSK,
    ._rval.val = AR_NIC_CQ_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_cq_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_cq_err_first_flg = {
    ._name = "AR_NIC_CQ_ERR_FIRST_FLG",
    ._addr = AR_NIC_CQ_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_CQ_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_cq_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_desc_tbl_sbe_mbe = {
    ._name = "AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE",
    ._addr = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE,
    ._rval.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_DESC_TBL_SBE_MBE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_desc_tbl_sbe_mbe_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_rmt_disabled_cq = {
    ._name = "AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ",
    ._addr = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ,
    ._rval.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DISABLED_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_rmt_disabled_cq_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_rmt_nat_err = {
    ._name = "AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR",
    ._addr = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR,
    ._rval.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_ERR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_rmt_nat_err_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_rmt_idx_bounds = {
    ._name = "AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS",
    ._addr = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS,
    ._rval.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_IDX_BOUNDS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_rmt_idx_bounds_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_rmt_dropped_event = {
    ._name = "AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT",
    ._addr = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT,
    ._rval.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_DROPPED_EVENT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_rmt_dropped_event_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_rmt_nat_response_timeout = {
    ._name = "AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT",
    ._addr = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT,
    ._rval.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_RMT_NAT_RESPONSE_TIMEOUT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_rmt_nat_response_timeout_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_lcl_disabled_cq = {
    ._name = "AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ",
    ._addr = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ,
    ._rval.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DISABLED_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_lcl_disabled_cq_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_lcl_nat_err = {
    ._name = "AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR",
    ._addr = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR,
    ._rval.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_ERR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_lcl_nat_err_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_lcl_idx_bounds = {
    ._name = "AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS",
    ._addr = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS,
    ._rval.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_IDX_BOUNDS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_lcl_idx_bounds_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_lcl_dropped_event = {
    ._name = "AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT",
    ._addr = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT,
    ._rval.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_DROPPED_EVENT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_lcl_dropped_event_detail
};
static const cmmr_br_t __ar_nic_cq_err_info_lcl_nat_response_timeout = {
    ._name = "AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT",
    ._addr = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT,
    ._rval.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_ERR_INFO_LCL_NAT_RESPONSE_TIMEOUT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_err_info_lcl_nat_response_timeout_detail
};
static const cmmr_br_t __ar_nic_cq_dbg_errinj_desc_tbl = {
    ._name = "AR_NIC_CQ_DBG_ERRINJ_DESC_TBL",
    ._addr = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL,
    ._rval.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_DBG_ERRINJ_DESC_TBL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_dbg_errinj_desc_tbl_detail
};
static const cmmr_br_t __ar_nic_cq_dbg_errinj_parity = {
    ._name = "AR_NIC_CQ_DBG_ERRINJ_PARITY",
    ._addr = AR_NIC_CQ_DBG_ERRINJ_PARITY,
    ._rval.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_DBG_ERRINJ_PARITY_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_cq_dbg_errinj_parity_detail
};
static const cmmr_br_t __ar_nic_cq_dbg_iommu_status = {
    ._name = "AR_NIC_CQ_DBG_IOMMU_STATUS",
    ._addr = AR_NIC_CQ_DBG_IOMMU_STATUS,
    ._rval.val = AR_NIC_CQ_DBG_IOMMU_STATUS_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_DBG_IOMMU_STATUS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_cq_dbg_iommu_status_detail
};
static const cmmr_br_t __ar_nic_cq_dbg_state = {
    ._name = "AR_NIC_CQ_DBG_STATE",
    ._addr = AR_NIC_CQ_DBG_STATE,
    ._rval.val = AR_NIC_CQ_DBG_STATE_RSTDATA,
    ._rmsk.val = AR_NIC_CQ_DBG_STATE_RSTMASK,
    ._wrmsk.val = AR_NIC_CQ_DBG_STATE_WRTMASK,
    ._rdmsk.val = AR_NIC_CQ_DBG_STATE_RDMASK,
    ._xsmsk.val = AR_NIC_CQ_DBG_STATE_XSMASK,
    ._wsemsk.val = AR_NIC_CQ_DBG_STATE_WSEMASK,
    ._rsemsk.val = AR_NIC_CQ_DBG_STATE_RSEMASK,
    ._w1smsk.val = AR_NIC_CQ_DBG_STATE_W1SMASK,
    ._w1cmsk.val = AR_NIC_CQ_DBG_STATE_W1CMASK,
    ._wrstmsk.val = AR_NIC_CQ_DBG_STATE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_CQ_DBG_STATE_HWWMASK,
    ._hwrmsk.val = AR_NIC_CQ_DBG_STATE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_cq_dbg_state_detail
};

/*
 *  INSTALL AR CQ MMRS
 */
static const cmmr_br_t* __ar_cq_mmrs[] = {
    &__ar_nic_cq_cfg_desc_tbl,
    &__ar_nic_cq_cfg_npt_credits,
    &__ar_nic_cq_cfg_cam_credits,
    &__ar_nic_cq_cfg_cache_revisit_rate,
    &__ar_nic_cq_cfg_nat_response_timeout,
    &__ar_nic_cq_err_flg,
    &__ar_nic_cq_err_clr,
    &__ar_nic_cq_err_hss_msk,
    &__ar_nic_cq_err_os_msk,
    &__ar_nic_cq_err_first_flg,
    &__ar_nic_cq_err_info_desc_tbl_sbe_mbe,
    &__ar_nic_cq_err_info_rmt_disabled_cq,
    &__ar_nic_cq_err_info_rmt_nat_err,
    &__ar_nic_cq_err_info_rmt_idx_bounds,
    &__ar_nic_cq_err_info_rmt_dropped_event,
    &__ar_nic_cq_err_info_rmt_nat_response_timeout,
    &__ar_nic_cq_err_info_lcl_disabled_cq,
    &__ar_nic_cq_err_info_lcl_nat_err,
    &__ar_nic_cq_err_info_lcl_idx_bounds,
    &__ar_nic_cq_err_info_lcl_dropped_event,
    &__ar_nic_cq_err_info_lcl_nat_response_timeout,
    &__ar_nic_cq_dbg_errinj_desc_tbl,
    &__ar_nic_cq_dbg_errinj_parity,
    &__ar_nic_cq_dbg_iommu_status,
    &__ar_nic_cq_dbg_state,
    NULL
};

/*
 *  INSTALL AR CQ LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_cq_enc_mmrs[] = {
    &__ar_nic_cq_mmr_ring_0_hi_cq,
    &__ar_nic_cq_mmr_ring_0_mid_cq,
    &__ar_nic_cq_mmr_ring_0_lo_cq,
    &__ar_nic_cq_err_flg_1_hi_cq,
    &__ar_nic_cq_err_flg_1_mid_cq,
    &__ar_nic_cq_err_flg_1_lo_cq,
    &__ar_nic_cq_cq_npt_flit_2_hi_cq,
    &__ar_nic_cq_cq_npt_flit_2_mid_cq,
    &__ar_nic_cq_cq_npt_flit_2_lo_cq,
    &__ar_nic_cq_cq_nat_request_3_hi_cq,
    &__ar_nic_cq_cq_nat_request_3_mid_cq,
    &__ar_nic_cq_cq_nat_request_3_lo_cq,
    &__ar_nic_cq_cq_acks_4_hi_cq,
    &__ar_nic_cq_cq_acks_4_mid_cq,
    &__ar_nic_cq_cq_acks_4_lo_cq,
    &__ar_nic_cq_cq_debug_5_hi_cq,
    &__ar_nic_cq_cq_debug_5_mid_cq,
    &__ar_nic_cq_cq_debug_5_lo_cq,
    NULL
};

#endif
