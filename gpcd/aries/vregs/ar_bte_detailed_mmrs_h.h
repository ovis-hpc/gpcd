/******************************************************************************
 * COPYRIGHT CRAY INC. ar_bte_detailed_mmrs_h.h
 * FILE: ar_bte_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/
/**
 * @file ar_bte_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:38:58 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_bte_mmr_values.h and ar_bte_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_bte_mmr_values.h"

#ifndef _AR_BTE_DETAILED_MMRS_H_H_
#define _AR_BTE_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_bte_mmrs[];	/* BTE Array */

/*
 *  AR BTE MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_bte_cfg_tbl_desc_detail[] = {
    { ._name = "DEST_USER_DATA",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_DEST_USER_DATA_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_DEST_USER_DATA_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW4 & AR_NIC_BTE_CFG_TBL_DESC_DEST_USER_DATA_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_DEST_USER_DATA_QW,
      ._desc = "Destination User Data",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RESERVED_255",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_RESERVED_255_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_RESERVED_255_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_RESERVED_255_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_RESERVED_255_QW,
      ._desc = "Reserved bit",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "WC",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_WC_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_WC_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_WC_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_WC_QW,
      ._desc = "The WC bit for BTE_GET operations",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_STS",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_TX_STS_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_TX_STS_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_TX_STS_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_TX_STS_QW,
      ._desc = "Transfer Status",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TIMEOUT_ERR",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_TIMEOUT_ERR_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_TIMEOUT_ERR_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_TIMEOUT_ERR_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_TIMEOUT_ERR_QW,
      ._desc = "Transfer Timeout Error Flag",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "BTE_COMPLETE",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_BTE_COMPLETE_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_BTE_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_BTE_COMPLETE_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_BTE_COMPLETE_QW,
      ._desc = "Transfer Complete Flag",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "FMAL",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_FMAL_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_FMAL_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_FMAL_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_FMAL_QW,
      ._desc = "When set, tells the BTE this TX descriptor was launched via FMA",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RC",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_RC_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_RC_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_RC_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_RC_QW,
      ._desc = "Routing Control",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RD_RO",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_RD_RO_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_RD_RO_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_RD_RO_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_RD_RO_QW,
      ._desc = "Relaxed Ordering Allowed",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RD_NO_SNOOP",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_RD_NO_SNOOP_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_RD_NO_SNOOP_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_RD_NO_SNOOP_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_RD_NO_SNOOP_QW,
      ._desc = "Don't force coherence",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "SRC_CQ_DATA",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_SRC_CQ_DATA_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_SRC_CQ_DATA_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_TBL_DESC_SRC_CQ_DATA_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_SRC_CQ_DATA_QW,
      ._desc = "Source Completion Queue Data",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "DELAYED_IRQ_EN",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_DELAYED_IRQ_EN_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_DELAYED_IRQ_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_TBL_DESC_DELAYED_IRQ_EN_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_DELAYED_IRQ_EN_QW,
      ._desc = "Delayed Interrupt Enable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "IRQ_MODE",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_IRQ_MODE_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_IRQ_MODE_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_TBL_DESC_IRQ_MODE_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_IRQ_MODE_QW,
      ._desc = "Interrupt Request Mode",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "BTE_FENCE",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_BTE_FENCE_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_BTE_FENCE_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_TBL_DESC_BTE_FENCE_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_BTE_FENCE_QW,
      ._desc = "Fence Bit",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "BTE_IMMEDIATE",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_BTE_IMMEDIATE_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_BTE_IMMEDIATE_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_TBL_DESC_BTE_IMMEDIATE_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_BTE_IMMEDIATE_QW,
      ._desc = "Use Immediate Data",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_CONCATENATE",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_TX_CONCATENATE_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_TX_CONCATENATE_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_TBL_DESC_TX_CONCATENATE_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_TX_CONCATENATE_QW,
      ._desc = "Concatenate Bit",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "LOC_PTAG",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_LOC_PTAG_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_LOC_PTAG_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_TBL_DESC_LOC_PTAG_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_LOC_PTAG_QW,
      ._desc = "Local Memory Protection Tag",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "REM_PTAG",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_REM_PTAG_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_REM_PTAG_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_TBL_DESC_REM_PTAG_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_REM_PTAG_QW,
      ._desc = "Remote Memory Protection Tag",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "SRC_CQH",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_SRC_CQH_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_SRC_CQH_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_TBL_DESC_SRC_CQH_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_SRC_CQH_QW,
      ._desc = "Source Completion Queue Handle",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "XFER_LEN",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_XFER_LEN_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_XFER_LEN_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_TBL_DESC_XFER_LEN_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_XFER_LEN_QW,
      ._desc = "Transfer Length",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "REM_MDH",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_REM_MDH_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_REM_MDH_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_TBL_DESC_REM_MDH_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_REM_MDH_QW,
      ._desc = "Remote Memory Domain Handle",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "LOC_MDH",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_LOC_MDH_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_LOC_MDH_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_TBL_DESC_LOC_MDH_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_LOC_MDH_QW,
      ._desc = "If BTE_OP == BTE_GET, this field is the local memory domain handle",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "LOC_PHYS_ADDR",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_LOC_PHYS_ADDR_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_LOC_PHYS_ADDR_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_TBL_DESC_LOC_PHYS_ADDR_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_LOC_PHYS_ADDR_QW,
      ._desc = "If BTE_OP == BTE_PUT or BTE_SEND and NAT_EN is cleared, this field is the full physical address of the local memory",
      ._type_bitmsk = 0x0000000000000002ull,
      ._access = "RW"
    },
    { ._name = "LOC_MEM_OFFSET",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_LOC_MEM_OFFSET_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_LOC_MEM_OFFSET_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_TBL_DESC_LOC_MEM_OFFSET_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_LOC_MEM_OFFSET_QW,
      ._desc = "If BTE_OP == BTE_GET, this field is the local memory offset",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "NTT_EN",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_NTT_EN_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_NTT_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_TBL_DESC_NTT_EN_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_NTT_EN_QW,
      ._desc = "NTT Translation Enable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "NAT_EN",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_NAT_EN_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_NAT_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_TBL_DESC_NAT_EN_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_NAT_EN_QW,
      ._desc = "NAT Translation Enable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "SRC_SSID_CQ_EN",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_SRC_SSID_CQ_EN_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_SRC_SSID_CQ_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_TBL_DESC_SRC_SSID_CQ_EN_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_SRC_SSID_CQ_EN_QW,
      ._desc = "Enable SSID completion queue event",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "SRC_BTE_CQ_EN",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_SRC_BTE_CQ_EN_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_SRC_BTE_CQ_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_TBL_DESC_SRC_BTE_CQ_EN_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_SRC_BTE_CQ_EN_QW,
      ._desc = "Enable BTE completion queue event",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "BTE_OP",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_BTE_OP_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_BTE_OP_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_TBL_DESC_BTE_OP_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_BTE_OP_QW,
      ._desc = "BTE Operation",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "DEST_ENDPOINT",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_DEST_ENDPOINT_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_DEST_ENDPOINT_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_TBL_DESC_DEST_ENDPOINT_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_DEST_ENDPOINT_QW,
      ._desc = "Destination node ID",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "REM_MEM_OFFSET",
      ._bpos = AR_NIC_BTE_CFG_TBL_DESC_REM_MEM_OFFSET_BP,
      ._mask = AR_NIC_BTE_CFG_TBL_DESC_REM_MEM_OFFSET_MASK,
      ._rval = AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_TBL_DESC_REM_MEM_OFFSET_MASK,
      ._index = AR_NIC_BTE_CFG_TBL_DESC_REM_MEM_OFFSET_QW,
      ._desc = "Remote Starting Offset Address",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_detail[] = {
    { ._name = "UNUSED_145_82",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_UNUSED_145_82_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_UNUSED_145_82_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_UNUSED_145_82_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_UNUSED_145_82_QW,
      ._desc = "MBZ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_detail[] = {
    { ._name = "CNTR_AGGREGATED_CQE",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_AGGREGATED_CQE_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_AGGREGATED_CQE_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_AGGREGATED_CQE_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_AGGREGATED_CQE_QW,
      ._desc = "Aggregated FMAL CQEs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_INV_CMD3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD3_QW,
      ._desc = "Channel 3 Invalid command errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_INV_CMD2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD2_QW,
      ._desc = "Channel 2 Invalid command errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_INV_CMD1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD1_QW,
      ._desc = "Channel 1 Invalid command errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_INV_CMD0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_INV_CMD0_QW,
      ._desc = "Channel 0 Invalid command errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_UNCORRECTABLE_ERR3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR3_QW,
      ._desc = "Channel 3 Uncorrectable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_UNCORRECTABLE_ERR2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR2_QW,
      ._desc = "Channel 2 Uncorrectable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_UNCORRECTABLE_ERR1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR1_QW,
      ._desc = "Channel 1 Uncorrectable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_UNCORRECTABLE_ERR0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_UNCORRECTABLE_ERR0_QW,
      ._desc = "Channel 0 Uncorrectable errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TIMEOUT_ERR3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR3_QW,
      ._desc = "Channel 3 Timeout errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TIMEOUT_ERR2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR2_QW,
      ._desc = "Channel 2 Timeout errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TIMEOUT_ERR1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR1_QW,
      ._desc = "Channel 1 Timeout errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TIMEOUT_ERR0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TIMEOUT_ERR0_QW,
      ._desc = "Channel 0 Timeout errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NAT_ERR3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR3_QW,
      ._desc = "Channel 3 NAT errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NAT_ERR2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR2_QW,
      ._desc = "Channel 2 NAT errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NAT_ERR1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR1_QW,
      ._desc = "Channel 1 NAT errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NAT_ERR0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NAT_ERR0_QW,
      ._desc = "Channel 0 NAT errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PI_RD_RSP_ERR3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR3_QW,
      ._desc = "Channel 3 PI read response errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PI_RD_RSP_ERR2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR2_QW,
      ._desc = "Channel 2 PI read response errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PI_RD_RSP_ERR1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR1_QW,
      ._desc = "Channel 1 PI read response errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PI_RD_RSP_ERR0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PI_RD_RSP_ERR0_QW,
      ._desc = "Channel 0 PI read response errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RD_RSP3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP3_QW,
      ._desc = "BTE Channel 3 read response packets received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RD_RSP2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP2_QW,
      ._desc = "BTE Channel 2 read response packets received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RD_RSP1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP1_QW,
      ._desc = "BTE Channel 1 read response packets received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RD_RSP0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_RSP0_QW,
      ._desc = "BTE Channel 0 read response packets received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RD_REQ3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ3_QW,
      ._desc = "BTE Channel 3 read request packets sent",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RD_REQ2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ2_QW,
      ._desc = "BTE Channel 2 read request packets sent",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RD_REQ1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ1_QW,
      ._desc = "BTE Channel 1 read request packets sent",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RD_REQ0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_RD_REQ0_QW,
      ._desc = "BTE Channel 0 read request packets sent",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PARB_RD_PKT_BLK",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_RD_PKT_BLK_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_RD_PKT_BLK_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_RD_PKT_BLK_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_RD_PKT_BLK_QW,
      ._desc = "PARB read packets blocked (ready to send, but no packet credits)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PARB_RD_FLT_BLK",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_RD_FLT_BLK_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_RD_FLT_BLK_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_RD_FLT_BLK_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_RD_FLT_BLK_QW,
      ._desc = "PARB read flits blocked (ready to send, but no flit credits)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PARB_WR_FLT_BLK",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_WR_FLT_BLK_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_WR_FLT_BLK_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_WR_FLT_BLK_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PARB_WR_FLT_BLK_QW,
      ._desc = "PARB write flits blocked (ready to send, but no flit credits)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TARB_PKT_BLK",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TARB_PKT_BLK_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TARB_PKT_BLK_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TARB_PKT_BLK_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TARB_PKT_BLK_QW,
      ._desc = "TARB packets blocked (ready to send, but no packet credits)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TARB_FLT_BLK",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TARB_FLT_BLK_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TARB_FLT_BLK_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TARB_FLT_BLK_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_TARB_FLT_BLK_QW,
      ._desc = "TARB flits blocked (ready to send, but no flit credits)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PROC_TIME3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME3_QW,
      ._desc = "BTE Channel 3 descriptor processing time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PROC_TIME2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME2_QW,
      ._desc = "BTE Channel 2 descriptor processing time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PROC_TIME1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME1_QW,
      ._desc = "BTE Channel 1 descriptor processing time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PROC_TIME0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_PROC_TIME0_QW,
      ._desc = "BTE Channel 0 descriptor processing time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC3_QW,
      ._desc = "BTE Channel 3 TX descriptors processed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC2_QW,
      ._desc = "BTE Channel 2 TX descriptors processed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC1_QW,
      ._desc = "BTE Channel 1 TX descriptors processed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DESC0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_DESC0_QW,
      ._desc = "BTE Channel 0 TX descriptors processed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NET_PKT3",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT3_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT3_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT3_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT3_QW,
      ._desc = "BTE Channel 3 network packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NET_PKT2",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT2_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT2_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT2_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT2_QW,
      ._desc = "BTE Channel 2 network packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NET_PKT1",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT1_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT1_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT1_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT1_QW,
      ._desc = "BTE Channel 1 network packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NET_PKT0",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT0_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT0_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT0_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_CNTR_NET_PKT0_QW,
      ._desc = "BTE Channel 0 network packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_35",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_UNUSED_81_35_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_UNUSED_81_35_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_UNUSED_81_35_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_UNUSED_81_35_QW,
      ._desc = "Forced to 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_mmr_ring_0_lo_bte_detail[] = {
    { ._name = "UNUSED_81_35",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_UNUSED_81_35_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_UNUSED_81_35_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_UNUSED_81_35_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_UNUSED_81_35_QW,
      ._desc = "Forced to 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_PI_OS_IRQ",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_BTE_PI_OS_IRQ_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_BTE_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_BTE_PI_OS_IRQ_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_BTE_PI_OS_IRQ_QW,
      ._desc = "OS interrupt request output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_LB_HSS_IRQ",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_BTE_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_BTE_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_BTE_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_BTE_LB_HSS_IRQ_QW,
      ._desc = "HSS interrupt request output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_REQMON_RING_WRACK",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_R_Q_BTE_REQMON_RING_WRACK_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_R_Q_BTE_REQMON_RING_WRACK_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_R_Q_BTE_REQMON_RING_WRACK_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_R_Q_BTE_REQMON_RING_WRACK_QW,
      ._desc = "MMR ring write acknowledge output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_REQMON_RING",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_R_Q_BTE_REQMON_RING_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_R_Q_BTE_REQMON_RING_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_R_Q_BTE_REQMON_RING_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_R_Q_BTE_REQMON_RING_QW,
      ._desc = "MMR ring output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQMON_BTE_RING",
      ._bpos = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_I_REQMON_BTE_RING_BP,
      ._mask = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_I_REQMON_BTE_RING_MASK,
      ._rval = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_I_REQMON_BTE_RING_MASK,
      ._index = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_I_REQMON_BTE_RING_QW,
      ._desc = "MMR ring input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_flg_1_hi_bte_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_HI_BTE_UNUSED_145_128_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_HI_BTE_UNUSED_145_128_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_ERR_FLG_1_HI_BTE_UNUSED_145_128_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_HI_BTE_UNUSED_145_128_QW,
      ._desc = "Forced to 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_flg_1_mid_bte_detail[] = {
    { ._name = "UNUSED_127_111",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_UNUSED_127_111_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_UNUSED_127_111_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_UNUSED_127_111_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_UNUSED_127_111_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DEBUG_QW,
      ._desc = "Channel 3 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DEBUG_QW,
      ._desc = "Channel 2 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DEBUG_QW,
      ._desc = "Channel 1 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DEBUG_QW,
      ._desc = "Channel 0 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FMA_CQE_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_FMA_CQE_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_FMA_CQE_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_FMA_CQE_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_FMA_CQE_PERR_QW,
      ._desc = "A parity error has been detected in the FLBTE CQE buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_NAT_ERR_QW,
      ._desc = "On BTE channel 3, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_NAT_ERR_QW,
      ._desc = "On BTE channel 2, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_NAT_ERR_QW,
      ._desc = "On BTE channel 1, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_NAT_ERR_QW,
      ._desc = "On BTE channel 0, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 3, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 3, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 2, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 2, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 1, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 1, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 0, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 0, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 3 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 2 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 1 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 0 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 3 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 2 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 1 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 0 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 3 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 2 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 1 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 0 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 3 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 2 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 1 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 0 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 3 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 2 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 1 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 0 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN3_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN3_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 3 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN2_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN2_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 2 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN1_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN1_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 1 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CHN0_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_CHN0_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 0 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RD_RSP_PKT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_PKT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_PKT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_PKT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_PKT_ERR_QW,
      ._desc = "A read channel response packet contained an error other than a data SECDED error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RD_RSP_MBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_MBE_QW,
      ._desc = "A read channel response packet contained a multiple bit error in a data field",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RD_RSP_SBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RD_RSP_SBE_QW,
      ._desc = "A read channel response packet contained a single bit error in a data field",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TX_DESC_TBL_MBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_TX_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_TX_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_TX_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_TX_DESC_TBL_MBE_QW,
      ._desc = "A multiple bit error has been detected in the BTE TX descriptor table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TX_DESC_TBL_SBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_TX_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_TX_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_TX_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_TX_DESC_TBL_SBE_QW,
      ._desc = "A single bit error has been detected and corrected in the BTE TX descriptor table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_MID_BTE_DIAG_ONLY_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_MID_BTE_DIAG_ONLY_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_ERR_FLG_1_MID_BTE_DIAG_ONLY_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_MID_BTE_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_flg_1_lo_bte_detail[] = {
    { ._name = "UNUSED_63_47",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_UNUSED_63_47_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_UNUSED_63_47_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_UNUSED_63_47_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_UNUSED_63_47_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DEBUG_QW,
      ._desc = "Channel 3 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DEBUG_QW,
      ._desc = "Channel 2 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DEBUG_QW,
      ._desc = "Channel 1 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DEBUG_QW,
      ._desc = "Channel 0 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FMA_CQE_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_FMA_CQE_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_FMA_CQE_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_FMA_CQE_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_FMA_CQE_PERR_QW,
      ._desc = "A parity error has been detected in the FLBTE CQE buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_NAT_ERR_QW,
      ._desc = "On BTE channel 3, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_NAT_ERR_QW,
      ._desc = "On BTE channel 2, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_NAT_ERR_QW,
      ._desc = "On BTE channel 1, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_NAT_ERR_QW,
      ._desc = "On BTE channel 0, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 3, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 3, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 2, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 2, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 1, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 1, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 0, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 0, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 3 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 2 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 1 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 0 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 3 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 2 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 1 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 0 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 3 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 2 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 1 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 0 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 3 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 2 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 1 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 0 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 3 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 2 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 1 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 0 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN3_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN3_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 3 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN2_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN2_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 2 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN1_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN1_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 1 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CHN0_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_CHN0_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 0 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RD_RSP_PKT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_PKT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_PKT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_PKT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_PKT_ERR_QW,
      ._desc = "A read channel response packet contained an error other than a data SECDED error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RD_RSP_MBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_MBE_QW,
      ._desc = "A read channel response packet contained a multiple bit error in a data field",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RD_RSP_SBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_RD_RSP_SBE_QW,
      ._desc = "A read channel response packet contained a single bit error in a data field",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TX_DESC_TBL_MBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_TX_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_TX_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_TX_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_TX_DESC_TBL_MBE_QW,
      ._desc = "A multiple bit error has been detected in the BTE TX descriptor table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TX_DESC_TBL_SBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_TX_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_TX_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_TX_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_I_TX_DESC_TBL_SBE_QW,
      ._desc = "A single bit error has been detected and corrected in the BTE TX descriptor table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_BTE_ERR_FLG_1_LO_BTE_UNUSED_0_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_1_LO_BTE_UNUSED_0_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA & AR_NIC_BTE_ERR_FLG_1_LO_BTE_UNUSED_0_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_1_LO_BTE_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_TAIL_QW,
      ._desc = "PARB write channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_VALID_QW,
      ._desc = "PARB write channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_P3_QW,
      ._desc = "PARB write channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_LSTATUS_QW,
      ._desc = "PARB write channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB write channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB write channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB write channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_CNT_BM_QW,
      ._desc = "PARB write channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_P2_QW,
      ._desc = "PARB write channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_PI_ID_QW,
      ._desc = "PARB write channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB write channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_TC_QW,
      ._desc = "PARB write channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_REQCMD_QW,
      ._desc = "PARB write channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_P1_QW,
      ._desc = "PARB write channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_parb_wr_pkt_2_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_P0_QW,
      ._desc = "PARB write channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB write channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_TAIL_QW,
      ._desc = "PARB read channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_VALID_QW,
      ._desc = "PARB read channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_P3_QW,
      ._desc = "PARB read channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_LSTATUS_QW,
      ._desc = "PARB read channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB read channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB read channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB read channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_CNT_BM_QW,
      ._desc = "PARB read channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_P2_QW,
      ._desc = "PARB read channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_PI_ID_QW,
      ._desc = "PARB read channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB read channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_TC_QW,
      ._desc = "PARB read channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_REQCMD_QW,
      ._desc = "PARB read channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_P1_QW,
      ._desc = "PARB read channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_parb_rd_pkt_3_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_P0_QW,
      ._desc = "PARB read channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB read channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_TAIL_QW,
      ._desc = "TARB sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_VALID_QW,
      ._desc = "TARB sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_P3_QW,
      ._desc = "TARB flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_1",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RC_1_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RC_1_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RC_1_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RC_1_QW,
      ._desc = "TARB flit routing control bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_LSTATUS_QW,
      ._desc = "TARB flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_detail[] = {
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CH",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_SSID_CH_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_SSID_CH_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_SSID_CH_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_SSID_CH_QW,
      ._desc = "TARB flit SSID channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_ADDR_5_2_QW,
      ._desc = "TARB flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_CNT_BM_QW,
      ._desc = "TARB flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_P2_QW,
      ._desc = "TARB flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_0",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RC_0_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RC_0_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RC_0_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RC_0_QW,
      ._desc = "TARB flit routing control bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_MDH_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_MDH_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_MDH_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_MDH_QW,
      ._desc = "TARB flit memory domain handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_2",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RC_2_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RC_2_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RC_2_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RC_2_QW,
      ._desc = "TARB flit routing control bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_REQCMD_QW,
      ._desc = "TARB flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_P1_QW,
      ._desc = "TARB flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UV",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_UV_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_UV_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_UV_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_UV_QW,
      ._desc = "TARB flit upper valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_tarb_pkt_4_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_P0_QW,
      ._desc = "TARB flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_NTT_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_NTT_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_NTT_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_NTT_QW,
      ._desc = "TARB flit node translation table lookup enable output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CMD",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_SSID_CMD_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_SSID_CMD_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_SSID_CMD_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_SSID_CMD_QW,
      ._desc = "TARB flit SSID command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKT_SRC",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_PKT_SRC_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_PKT_SRC_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_PKT_SRC_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_PKT_SRC_QW,
      ._desc = "TARB flit packet source output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_PTAG_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_PTAG_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_PTAG_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_PTAG_QW,
      ._desc = "TARB flit protection tag output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_DSTID_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_DSTID_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_DSTID_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_DSTID_QW,
      ._desc = "TARB flit destination core identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_DST_BP,
      ._mask = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_DST_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_DST_MASK,
      ._index = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_DST_QW,
      ._desc = "TARB flit destination endpoint output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_TAIL_QW,
      ._desc = "PARB write channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_VALID_QW,
      ._desc = "PARB write channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_P3_QW,
      ._desc = "PARB write channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_LSTATUS_QW,
      ._desc = "PARB write channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB write channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB write channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB write channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_CNT_BM_QW,
      ._desc = "PARB write channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_P2_QW,
      ._desc = "PARB write channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_PI_ID_QW,
      ._desc = "PARB write channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB write channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_TC_QW,
      ._desc = "PARB write channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_REQCMD_QW,
      ._desc = "PARB write channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_P1_QW,
      ._desc = "PARB write channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_P0_QW,
      ._desc = "PARB write channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB write channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_TAIL_QW,
      ._desc = "PARB read channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_VALID_QW,
      ._desc = "PARB read channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_P3_QW,
      ._desc = "PARB read channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_LSTATUS_QW,
      ._desc = "PARB read channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB read channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB read channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB read channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_CNT_BM_QW,
      ._desc = "PARB read channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_P2_QW,
      ._desc = "PARB read channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_PI_ID_QW,
      ._desc = "PARB read channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB read channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_TC_QW,
      ._desc = "PARB read channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_REQCMD_QW,
      ._desc = "PARB read channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_P1_QW,
      ._desc = "PARB read channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_P0_QW,
      ._desc = "PARB read channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB read channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_TAIL_QW,
      ._desc = "TARB sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_VALID_QW,
      ._desc = "TARB sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_P3_QW,
      ._desc = "TARB flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_1",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RC_1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RC_1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RC_1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RC_1_QW,
      ._desc = "TARB flit routing control bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_LSTATUS_QW,
      ._desc = "TARB flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_detail[] = {
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CH",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_SSID_CH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_SSID_CH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_SSID_CH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_SSID_CH_QW,
      ._desc = "TARB flit SSID channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_ADDR_5_2_QW,
      ._desc = "TARB flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_CNT_BM_QW,
      ._desc = "TARB flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_P2_QW,
      ._desc = "TARB flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_0",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RC_0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RC_0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RC_0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RC_0_QW,
      ._desc = "TARB flit routing control bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_MDH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_MDH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_MDH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_MDH_QW,
      ._desc = "TARB flit memory domain handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_2",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RC_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RC_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RC_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RC_2_QW,
      ._desc = "TARB flit routing control bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_REQCMD_QW,
      ._desc = "TARB flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_P1_QW,
      ._desc = "TARB flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UV",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_UV_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_UV_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_UV_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_UV_QW,
      ._desc = "TARB flit upper valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_P0_QW,
      ._desc = "TARB flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_NTT_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_NTT_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_NTT_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_NTT_QW,
      ._desc = "TARB flit node translation table lookup enable output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CMD",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_SSID_CMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_SSID_CMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_SSID_CMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_SSID_CMD_QW,
      ._desc = "TARB flit SSID command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKT_SRC",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_PKT_SRC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_PKT_SRC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_PKT_SRC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_PKT_SRC_QW,
      ._desc = "TARB flit packet source output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_PTAG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_PTAG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_PTAG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_PTAG_QW,
      ._desc = "TARB flit protection tag output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_DSTID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_DSTID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_DSTID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_DSTID_QW,
      ._desc = "TARB flit destination core identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_DST_BP,
      ._mask = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_DST_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_DST_MASK,
      ._index = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_DST_QW,
      ._desc = "TARB flit destination endpoint output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_TAIL_QW,
      ._desc = "PARB write channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_VALID_QW,
      ._desc = "PARB write channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_P3_QW,
      ._desc = "PARB write channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_LSTATUS_QW,
      ._desc = "PARB write channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB write channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB write channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB write channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_CNT_BM_QW,
      ._desc = "PARB write channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_P2_QW,
      ._desc = "PARB write channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_PI_ID_QW,
      ._desc = "PARB write channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB write channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_TC_QW,
      ._desc = "PARB write channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_REQCMD_QW,
      ._desc = "PARB write channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_P1_QW,
      ._desc = "PARB write channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_P0_QW,
      ._desc = "PARB write channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB write channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_TAIL_QW,
      ._desc = "PARB read channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_VALID_QW,
      ._desc = "PARB read channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_P3_QW,
      ._desc = "PARB read channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_LSTATUS_QW,
      ._desc = "PARB read channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB read channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB read channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB read channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_CNT_BM_QW,
      ._desc = "PARB read channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_P2_QW,
      ._desc = "PARB read channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_PI_ID_QW,
      ._desc = "PARB read channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB read channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_TC_QW,
      ._desc = "PARB read channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_REQCMD_QW,
      ._desc = "PARB read channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_P1_QW,
      ._desc = "PARB read channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_P0_QW,
      ._desc = "PARB read channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB read channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_TAIL_QW,
      ._desc = "TARB sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_VALID_QW,
      ._desc = "TARB sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_P3_QW,
      ._desc = "TARB flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_1",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RC_1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RC_1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RC_1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RC_1_QW,
      ._desc = "TARB flit routing control bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_LSTATUS_QW,
      ._desc = "TARB flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_detail[] = {
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CH",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_SSID_CH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_SSID_CH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_SSID_CH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_SSID_CH_QW,
      ._desc = "TARB flit SSID channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_ADDR_5_2_QW,
      ._desc = "TARB flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_CNT_BM_QW,
      ._desc = "TARB flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_P2_QW,
      ._desc = "TARB flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_0",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RC_0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RC_0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RC_0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RC_0_QW,
      ._desc = "TARB flit routing control bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_MDH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_MDH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_MDH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_MDH_QW,
      ._desc = "TARB flit memory domain handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_2",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RC_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RC_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RC_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RC_2_QW,
      ._desc = "TARB flit routing control bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_REQCMD_QW,
      ._desc = "TARB flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_P1_QW,
      ._desc = "TARB flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UV",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_UV_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_UV_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_UV_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_UV_QW,
      ._desc = "TARB flit upper valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_P0_QW,
      ._desc = "TARB flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_NTT_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_NTT_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_NTT_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_NTT_QW,
      ._desc = "TARB flit node translation table lookup enable output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CMD",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_SSID_CMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_SSID_CMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_SSID_CMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_SSID_CMD_QW,
      ._desc = "TARB flit SSID command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKT_SRC",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_PKT_SRC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_PKT_SRC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_PKT_SRC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_PKT_SRC_QW,
      ._desc = "TARB flit packet source output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_PTAG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_PTAG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_PTAG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_PTAG_QW,
      ._desc = "TARB flit protection tag output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_DSTID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_DSTID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_DSTID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_DSTID_QW,
      ._desc = "TARB flit destination core identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_DST_BP,
      ._mask = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_DST_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_DST_MASK,
      ._index = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_DST_QW,
      ._desc = "TARB flit destination endpoint output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_TAIL_QW,
      ._desc = "PARB write channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_VALID_QW,
      ._desc = "PARB write channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_P3_QW,
      ._desc = "PARB write channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_LSTATUS_QW,
      ._desc = "PARB write channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB write channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB write channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB write channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_CNT_BM_QW,
      ._desc = "PARB write channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_P2_QW,
      ._desc = "PARB write channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_PI_ID_QW,
      ._desc = "PARB write channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB write channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_TC_QW,
      ._desc = "PARB write channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_REQCMD_QW,
      ._desc = "PARB write channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_P1_QW,
      ._desc = "PARB write channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_P0_QW,
      ._desc = "PARB write channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB write channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_TAIL_QW,
      ._desc = "PARB read channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_VALID_QW,
      ._desc = "PARB read channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_P3_QW,
      ._desc = "PARB read channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_LSTATUS_QW,
      ._desc = "PARB read channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB read channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB read channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB read channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_CNT_BM_QW,
      ._desc = "PARB read channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_P2_QW,
      ._desc = "PARB read channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_PI_ID_QW,
      ._desc = "PARB read channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB read channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_TC_QW,
      ._desc = "PARB read channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_REQCMD_QW,
      ._desc = "PARB read channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_P1_QW,
      ._desc = "PARB read channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_P0_QW,
      ._desc = "PARB read channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB read channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_TAIL_QW,
      ._desc = "TARB sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_VALID_QW,
      ._desc = "TARB sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_P3_QW,
      ._desc = "TARB flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_1",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RC_1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RC_1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RC_1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RC_1_QW,
      ._desc = "TARB flit routing control bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_LSTATUS_QW,
      ._desc = "TARB flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_detail[] = {
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CH",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_SSID_CH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_SSID_CH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_SSID_CH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_SSID_CH_QW,
      ._desc = "TARB flit SSID channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_ADDR_5_2_QW,
      ._desc = "TARB flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_CNT_BM_QW,
      ._desc = "TARB flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_P2_QW,
      ._desc = "TARB flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_0",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RC_0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RC_0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RC_0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RC_0_QW,
      ._desc = "TARB flit routing control bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_MDH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_MDH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_MDH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_MDH_QW,
      ._desc = "TARB flit memory domain handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_2",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RC_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RC_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RC_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RC_2_QW,
      ._desc = "TARB flit routing control bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_REQCMD_QW,
      ._desc = "TARB flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_P1_QW,
      ._desc = "TARB flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UV",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_UV_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_UV_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_UV_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_UV_QW,
      ._desc = "TARB flit upper valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_P0_QW,
      ._desc = "TARB flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_NTT_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_NTT_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_NTT_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_NTT_QW,
      ._desc = "TARB flit node translation table lookup enable output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CMD",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_SSID_CMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_SSID_CMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_SSID_CMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_SSID_CMD_QW,
      ._desc = "TARB flit SSID command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKT_SRC",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_PKT_SRC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_PKT_SRC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_PKT_SRC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_PKT_SRC_QW,
      ._desc = "TARB flit packet source output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_PTAG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_PTAG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_PTAG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_PTAG_QW,
      ._desc = "TARB flit protection tag output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_DSTID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_DSTID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_DSTID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_DSTID_QW,
      ._desc = "TARB flit destination core identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_DST_BP,
      ._mask = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_DST_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_DST_MASK,
      ._index = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_DST_QW,
      ._desc = "TARB flit destination endpoint output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_TAIL_QW,
      ._desc = "PARB write channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_VALID_QW,
      ._desc = "PARB write channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_P3_QW,
      ._desc = "PARB write channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_LSTATUS_QW,
      ._desc = "PARB write channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB write channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB write channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB write channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB write channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_CNT_BM_QW,
      ._desc = "PARB write channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_P2_QW,
      ._desc = "PARB write channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_PI_ID_QW,
      ._desc = "PARB write channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB write channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_TC_QW,
      ._desc = "PARB write channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_REQCMD_QW,
      ._desc = "PARB write channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_P1_QW,
      ._desc = "PARB write channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB write channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_P0_QW,
      ._desc = "PARB write channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB write channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_TAIL_QW,
      ._desc = "PARB read channel sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_VALID_QW,
      ._desc = "PARB read channel sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_P3_QW,
      ._desc = "PARB read channel flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_LSTATUS_QW,
      ._desc = "PARB read channel flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_detail[] = {
    { ._name = "AMO_DBG",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_AMO_DBG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_AMO_DBG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_AMO_DBG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_AMO_DBG_QW,
      ._desc = "PARB read channel flit AMO debug output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTSRC_DBG_PI",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_PKTSRC_DBG_PI_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_PKTSRC_DBG_PI_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_PKTSRC_DBG_PI_QW,
      ._desc = "PARB read channel flit packet source debug PI output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IRQINDEX",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_IRQINDEX_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_IRQINDEX_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_IRQINDEX_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_IRQINDEX_QW,
      ._desc = "PARB read channel flit IRQ index output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_5_2_QW,
      ._desc = "PARB read channel flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_CNT_BM_QW,
      ._desc = "PARB read channel flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_P2_QW,
      ._desc = "PARB read channel flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_PI_ID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_PI_ID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_PI_ID_QW,
      ._desc = "PARB read channel flit processor interface identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_47_40",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_47_40_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_47_40_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_47_40_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_47_40_QW,
      ._desc = "PARB read channel flit address bits 47:40 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_TC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_TC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_TC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_TC_QW,
      ._desc = "PARB read channel flit translation context output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_REQCMD_QW,
      ._desc = "PARB read channel flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_P1_QW,
      ._desc = "PARB read channel flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_ADDR_39_6_QW,
      ._desc = "PARB read channel flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_P0_QW,
      ._desc = "PARB read channel flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_HINTS",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_PI_HINTS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_PI_HINTS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_PI_HINTS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_PI_HINTS_QW,
      ._desc = "PARB read channel flit processor interface hints output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_detail[] = {
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_TAIL_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_TAIL_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_TAIL_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_TAIL_QW,
      ._desc = "TARB sideband tail output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_VALID_QW,
      ._desc = "TARB sideband valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_P3_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_P3_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_P3_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_P3_QW,
      ._desc = "TARB flit parity bit 3 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_1",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RC_1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RC_1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RC_1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RC_1_QW,
      ._desc = "TARB flit routing control bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_LSTATUS_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_LSTATUS_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_LSTATUS_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_LSTATUS_QW,
      ._desc = "TARB flit local status output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_detail[] = {
    { ._name = "SSID_LCQH",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_SSID_LCQH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_SSID_LCQH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_SSID_LCQH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_SSID_LCQH_QW,
      ._desc = "TARB flit SSID local completion queue handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CH",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_SSID_CH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_SSID_CH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_SSID_CH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_SSID_CH_QW,
      ._desc = "TARB flit SSID channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_ADDR_5_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_ADDR_5_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_ADDR_5_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_ADDR_5_2_QW,
      ._desc = "TARB flit address bits 5:2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_CNT_BM_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_CNT_BM_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_CNT_BM_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_CNT_BM_QW,
      ._desc = "TARB flit count/byte-mask output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_P2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_P2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_P2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_P2_QW,
      ._desc = "TARB flit parity bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_0",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RC_0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RC_0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RC_0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RC_0_QW,
      ._desc = "TARB flit routing control bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_MDH_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_MDH_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_MDH_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_MDH_QW,
      ._desc = "TARB flit memory domain handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_2",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RC_2_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RC_2_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RC_2_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RC_2_QW,
      ._desc = "TARB flit routing control bit 2 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_REQCMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_REQCMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_REQCMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_REQCMD_QW,
      ._desc = "TARB flit request command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_P1_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_P1_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_P1_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_P1_QW,
      ._desc = "TARB flit parity bit 1 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UV",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_UV_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_UV_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_UV_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_UV_QW,
      ._desc = "TARB flit upper valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_lo_bte_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_ADDR_39_6_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_ADDR_39_6_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_ADDR_39_6_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_ADDR_39_6_QW,
      ._desc = "TARB flit address bits 39:6 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_P0_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_P0_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_P0_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_P0_QW,
      ._desc = "TARB flit parity bit 0 output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_NTT_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_NTT_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_NTT_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_NTT_QW,
      ._desc = "TARB flit node translation table lookup enable output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_CMD",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_SSID_CMD_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_SSID_CMD_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_SSID_CMD_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_SSID_CMD_QW,
      ._desc = "TARB flit SSID command output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKT_SRC",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_PKT_SRC_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_PKT_SRC_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_PKT_SRC_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_PKT_SRC_QW,
      ._desc = "TARB flit packet source output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_PTAG_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_PTAG_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_PTAG_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_PTAG_QW,
      ._desc = "TARB flit protection tag output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_DSTID_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_DSTID_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_DSTID_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_DSTID_QW,
      ._desc = "TARB flit destination core identifier output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_DST_BP,
      ._mask = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_DST_MASK,
      ._rval = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_DST_MASK,
      ._index = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_DST_QW,
      ._desc = "TARB flit destination endpoint output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_detail[] = {
    { ._name = "UNUSED_145_125",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_UNUSED_145_125_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_UNUSED_145_125_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_UNUSED_145_125_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_UNUSED_145_125_QW,
      ._desc = "Forced to 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_detail[] = {
    { ._name = "UNUSED_145_125",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_UNUSED_145_125_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_UNUSED_145_125_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_UNUSED_145_125_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_UNUSED_145_125_QW,
      ._desc = "Forced to 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_IOMMU_COMP_WAIT_ACK",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_R_Q_BTE_IOMMU_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_R_Q_BTE_IOMMU_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_R_Q_BTE_IOMMU_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_R_Q_BTE_IOMMU_COMP_WAIT_ACK_QW,
      ._desc = "Completion wait acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_CQ_DATA",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_R_Q_BTE_CQ_DATA_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_R_Q_BTE_CQ_DATA_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_R_Q_BTE_CQ_DATA_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_R_Q_BTE_CQ_DATA_QW,
      ._desc = "CQ data output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_nat_cq_iommu_11_lo_bte_detail[] = {
    { ._name = "R_Q_BTE_CQ_HANDLE",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_CQ_HANDLE_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_CQ_HANDLE_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_CQ_HANDLE_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_CQ_HANDLE_QW,
      ._desc = "CQ handle output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_CQ_VALID",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_CQ_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_CQ_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_CQ_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_CQ_VALID_QW,
      ._desc = "CQ valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_51",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_UNUSED_51_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_UNUSED_51_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_UNUSED_51_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_UNUSED_51_QW,
      ._desc = "Forced to 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_NAT_ADDR",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_ADDR_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_ADDR_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_ADDR_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_ADDR_QW,
      ._desc = "NAT address output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_NAT_PTAG",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_PTAG_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_PTAG_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_PTAG_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_PTAG_QW,
      ._desc = "NAT ptag output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_NAT_MDH",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_MDH_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_MDH_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_MDH_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_MDH_QW,
      ._desc = "NAT mdh output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_NAT_TID",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_TID_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_TID_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_TID_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_TID_QW,
      ._desc = "NAT tid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_NAT_VALID",
      ._bpos = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_VALID_BP,
      ._mask = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_VALID_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_VALID_MASK,
      ._index = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_R_Q_BTE_NAT_VALID_QW,
      ._desc = "NAT valid output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_detail[] = {
    { ._name = "UNUSED_145_46",
      ._bpos = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_UNUSED_145_46_BP,
      ._mask = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_UNUSED_145_46_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSTDATA_QW2 & AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_UNUSED_145_46_MASK,
      ._index = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_UNUSED_145_46_QW,
      ._desc = "Forced to 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_detail[] = {
    { ._name = "UNUSED_145_46",
      ._bpos = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_UNUSED_145_46_BP,
      ._mask = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_UNUSED_145_46_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_RSTDATA_QW1 & AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_UNUSED_145_46_MASK,
      ._index = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_UNUSED_145_46_QW,
      ._desc = "Forced to 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_bte_to_reqmon_incs_12_lo_bte_detail[] = {
    { ._name = "UNUSED_145_46",
      ._bpos = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_UNUSED_145_46_BP,
      ._mask = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_UNUSED_145_46_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_UNUSED_145_46_MASK,
      ._index = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_UNUSED_145_46_QW,
      ._desc = "Forced to 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_BTE_REQMON_CNTR_INC",
      ._bpos = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_R_Q_BTE_REQMON_CNTR_INC_BP,
      ._mask = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_R_Q_BTE_REQMON_CNTR_INC_MASK,
      ._rval = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_RSTDATA & AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_R_Q_BTE_REQMON_CNTR_INC_MASK,
      ._index = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_R_Q_BTE_REQMON_CNTR_INC_QW,
      ._desc = "REQMON counter increment outputs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_chan_desc_detail[] = {
    { ._name = "SSIDS_IN_USE_CLR",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_SSIDS_IN_USE_CLR_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_SSIDS_IN_USE_CLR_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW5 & AR_NIC_BTE_CFG_CHAN_DESC_SSIDS_IN_USE_CLR_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_SSIDS_IN_USE_CLR_QW,
      ._desc = "When written as a one, clears the SSIDS_IN_USE count of the BTE channel",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "WS"
    },
    { ._name = "FMA_ALLOW_NON_PRIV",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_FMA_ALLOW_NON_PRIV_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_FMA_ALLOW_NON_PRIV_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW4 & AR_NIC_BTE_CFG_CHAN_DESC_FMA_ALLOW_NON_PRIV_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_FMA_ALLOW_NON_PRIV_QW,
      ._desc = "Non-privileged FMA launched transactions (transactions with transaction control parameter PRIVILEGED = 0) are not enqueued unless the FMA_ALLOW_NON_PRIV parameter is set",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_WR_IDX",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_TX_WR_IDX_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_TX_WR_IDX_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW3 & AR_NIC_BTE_CFG_CHAN_DESC_TX_WR_IDX_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_TX_WR_IDX_QW,
      ._desc = "Transmit queue write index",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RD_TPH",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_RD_TPH_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_RD_TPH_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_CHAN_DESC_RD_TPH_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_RD_TPH_QW,
      ._desc = "The TPH bits used for local reads for BTE_PUT and BTE_SEND operations when NAT_EN == 0",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "WR_TPH",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_WR_TPH_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_WR_TPH_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_CHAN_DESC_WR_TPH_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_WR_TPH_QW,
      ._desc = "The TPH bits used for TX descriptor write backs (these bits are forced to zero for IRQ packets)",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "RD_TC",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_RD_TC_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_RD_TC_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_CHAN_DESC_RD_TC_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_RD_TC_QW,
      ._desc = "The translation context bits used for local reads for BTE_PUT and BTE_SEND operation when NAT_EN == 0",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "WR_TC",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_WR_TC_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_WR_TC_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_CHAN_DESC_WR_TC_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_WR_TC_QW,
      ._desc = "The translation context bits used for TX descriptor write backs and IRQ packets",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "PI_TAIL_TIMEOUT_VAL",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_PI_TAIL_TIMEOUT_VAL_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_PI_TAIL_TIMEOUT_VAL_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_CHAN_DESC_PI_TAIL_TIMEOUT_VAL_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_PI_TAIL_TIMEOUT_VAL_QW,
      ._desc = "PI tail error timeout value",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "SSIDS_IN_USE_CLR_EN",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_SSIDS_IN_USE_CLR_EN_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_SSIDS_IN_USE_CLR_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_CHAN_DESC_SSIDS_IN_USE_CLR_EN_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_SSIDS_IN_USE_CLR_EN_QW,
      ._desc = "When this bit is set, and when the SSIDS_IN_USE field of the A_NIC_BTE_STS_TX_CTRL[3:0] MMR is at zero, both the GET_REQ_CNT field of the A_NIC_BTE_STS_PARB_RD_CHN[3:0] MMR and the PKT_CNT field for the correct channel of the A_NIC_BTE_STS_TARB_CHN MMR are forced to zero",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_RD_IDX",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_TX_RD_IDX_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_TX_RD_IDX_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW2 & AR_NIC_BTE_CFG_CHAN_DESC_TX_RD_IDX_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_TX_RD_IDX_QW,
      ._desc = "Transmit queue read index",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "MAX_NUM_SSIDS",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_MAX_NUM_SSIDS_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_MAX_NUM_SSIDS_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_CHAN_DESC_MAX_NUM_SSIDS_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_MAX_NUM_SSIDS_QW,
      ._desc = "Maximum number of SSIDs this BTE channel may have in use at any one time",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "FMA_ANP_HW_CLR_EN",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_FMA_ANP_HW_CLR_EN_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_FMA_ANP_HW_CLR_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_CHAN_DESC_FMA_ANP_HW_CLR_EN_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_FMA_ANP_HW_CLR_EN_QW,
      ._desc = "Enable automatic clearing of FMA_ALLOW_NON_PRIV field by hardware",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "FMA_EN",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_FMA_EN_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_FMA_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_CHAN_DESC_FMA_EN_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_FMA_EN_QW,
      ._desc = "When FMA_EN is cleared, FMA launched transactions are disabled",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "FMA_NO_BTE_SEND",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_FMA_NO_BTE_SEND_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_FMA_NO_BTE_SEND_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_CHAN_DESC_FMA_NO_BTE_SEND_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_FMA_NO_BTE_SEND_QW,
      ._desc = "Typically, BTE_SEND transfers are only used by system software and are used with a dedicated BTE channel",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_IRQ_EN",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_TX_IRQ_EN_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_TX_IRQ_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_CHAN_DESC_TX_IRQ_EN_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_TX_IRQ_EN_QW,
      ._desc = "0 = Transmit interrupt disabled 1 = Transmit interrupt enabled",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_EN",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_TX_EN_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_TX_EN_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_CHAN_DESC_TX_EN_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_TX_EN_QW,
      ._desc = "0 = BTE TX channel disabled 1 = BTE TX channel enabled",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_RST",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_TX_RST_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_TX_RST_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_CHAN_DESC_TX_RST_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_TX_RST_QW,
      ._desc = "0 = Normal operation 1 = Reset TX BTE channel",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_DBG",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_TX_DBG_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_TX_DBG_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_CHAN_DESC_TX_DBG_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_TX_DBG_QW,
      ._desc = "Setting this field tells the BTE channel to clear the TX_EN bit when it finishes processing the next TX descriptor which generates an error",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "CPU_TX_BASE_ADDR",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_CPU_TX_BASE_ADDR_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_CPU_TX_BASE_ADDR_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1 & AR_NIC_BTE_CFG_CHAN_DESC_CPU_TX_BASE_ADDR_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_CPU_TX_BASE_ADDR_QW,
      ._desc = "Address of CPU shadow copy of BTE TX descriptor table",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "FMA_MAX_XFER_LEN",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_FMA_MAX_XFER_LEN_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_FMA_MAX_XFER_LEN_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_CHAN_DESC_FMA_MAX_XFER_LEN_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_FMA_MAX_XFER_LEN_QW,
      ._desc = "The maximum transfer size in bytes allowed for an FMA initiated TX descriptor table entry write",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_TIMEOUT_VAL",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_TX_TIMEOUT_VAL_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_TX_TIMEOUT_VAL_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_CHAN_DESC_TX_TIMEOUT_VAL_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_TX_TIMEOUT_VAL_QW,
      ._desc = "TX descriptor timeout value",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "IRQ_IDX",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_IRQ_IDX_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_IRQ_IDX_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_CHAN_DESC_IRQ_IDX_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_IRQ_IDX_QW,
      ._desc = "Interrupt request index",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "TX_IDV",
      ._bpos = AR_NIC_BTE_CFG_CHAN_DESC_TX_IDV_BP,
      ._mask = AR_NIC_BTE_CFG_CHAN_DESC_TX_IDV_MASK,
      ._rval = AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW0 & AR_NIC_BTE_CFG_CHAN_DESC_TX_IDV_MASK,
      ._index = AR_NIC_BTE_CFG_CHAN_DESC_TX_IDV_QW,
      ._desc = "Transmit interrupt delay value",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_desc_base_idx_detail[] = {
    { ._name = "CHN3_BASE",
      ._bpos = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN3_BASE_BP,
      ._mask = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN3_BASE_MASK,
      ._rval = AR_NIC_BTE_CFG_DESC_BASE_IDX_RSTDATA & AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN3_BASE_MASK,
      ._index = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN3_BASE_QW,
      ._desc = "Channel 3 TX descriptor base index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN2_BASE",
      ._bpos = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN2_BASE_BP,
      ._mask = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN2_BASE_MASK,
      ._rval = AR_NIC_BTE_CFG_DESC_BASE_IDX_RSTDATA & AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN2_BASE_MASK,
      ._index = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN2_BASE_QW,
      ._desc = "Channel 2 TX descriptor base index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN1_BASE",
      ._bpos = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN1_BASE_BP,
      ._mask = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN1_BASE_MASK,
      ._rval = AR_NIC_BTE_CFG_DESC_BASE_IDX_RSTDATA & AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN1_BASE_MASK,
      ._index = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN1_BASE_QW,
      ._desc = "Channel 1 TX descriptor base index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN0_BASE",
      ._bpos = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN0_BASE_BP,
      ._mask = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN0_BASE_MASK,
      ._rval = AR_NIC_BTE_CFG_DESC_BASE_IDX_RSTDATA & AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN0_BASE_MASK,
      ._index = AR_NIC_BTE_CFG_DESC_BASE_IDX_CHN0_BASE_QW,
      ._desc = "Channel 0 TX descriptor base index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_desc_cnt_detail[] = {
    { ._name = "CHN3_CNT",
      ._bpos = AR_NIC_BTE_CFG_DESC_CNT_CHN3_CNT_BP,
      ._mask = AR_NIC_BTE_CFG_DESC_CNT_CHN3_CNT_MASK,
      ._rval = AR_NIC_BTE_CFG_DESC_CNT_RSTDATA & AR_NIC_BTE_CFG_DESC_CNT_CHN3_CNT_MASK,
      ._index = AR_NIC_BTE_CFG_DESC_CNT_CHN3_CNT_QW,
      ._desc = "Channel 3 TX descriptor count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN2_CNT",
      ._bpos = AR_NIC_BTE_CFG_DESC_CNT_CHN2_CNT_BP,
      ._mask = AR_NIC_BTE_CFG_DESC_CNT_CHN2_CNT_MASK,
      ._rval = AR_NIC_BTE_CFG_DESC_CNT_RSTDATA & AR_NIC_BTE_CFG_DESC_CNT_CHN2_CNT_MASK,
      ._index = AR_NIC_BTE_CFG_DESC_CNT_CHN2_CNT_QW,
      ._desc = "Channel 2 TX descriptor count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN1_CNT",
      ._bpos = AR_NIC_BTE_CFG_DESC_CNT_CHN1_CNT_BP,
      ._mask = AR_NIC_BTE_CFG_DESC_CNT_CHN1_CNT_MASK,
      ._rval = AR_NIC_BTE_CFG_DESC_CNT_RSTDATA & AR_NIC_BTE_CFG_DESC_CNT_CHN1_CNT_MASK,
      ._index = AR_NIC_BTE_CFG_DESC_CNT_CHN1_CNT_QW,
      ._desc = "Channel 1 TX descriptor count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN0_CNT",
      ._bpos = AR_NIC_BTE_CFG_DESC_CNT_CHN0_CNT_BP,
      ._mask = AR_NIC_BTE_CFG_DESC_CNT_CHN0_CNT_MASK,
      ._rval = AR_NIC_BTE_CFG_DESC_CNT_RSTDATA & AR_NIC_BTE_CFG_DESC_CNT_CHN0_CNT_MASK,
      ._index = AR_NIC_BTE_CFG_DESC_CNT_CHN0_CNT_QW,
      ._desc = "Channel 0 TX descriptor count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_tmr_ctrl_detail[] = {
    { ._name = "MILLISECOND",
      ._bpos = AR_NIC_BTE_CFG_TMR_CTRL_MILLISECOND_BP,
      ._mask = AR_NIC_BTE_CFG_TMR_CTRL_MILLISECOND_MASK,
      ._rval = AR_NIC_BTE_CFG_TMR_CTRL_RSTDATA & AR_NIC_BTE_CFG_TMR_CTRL_MILLISECOND_MASK,
      ._index = AR_NIC_BTE_CFG_TMR_CTRL_MILLISECOND_QW,
      ._desc = "Millisecond interval",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "IDV",
      ._bpos = AR_NIC_BTE_CFG_TMR_CTRL_IDV_BP,
      ._mask = AR_NIC_BTE_CFG_TMR_CTRL_IDV_MASK,
      ._rval = AR_NIC_BTE_CFG_TMR_CTRL_RSTDATA & AR_NIC_BTE_CFG_TMR_CTRL_IDV_MASK,
      ._index = AR_NIC_BTE_CFG_TMR_CTRL_IDV_QW,
      ._desc = "IDV 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_tarb_detail[] = {
    { ._name = "FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_RSTDATA & AR_NIC_BTE_CFG_TARB_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits the BTE is allowed to have outstanding in the TARB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PKT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_PKT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_PKT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_RSTDATA & AR_NIC_BTE_CFG_TARB_PKT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_PKT_CRDTS_QW,
      ._desc = "Maximum number of packets the BTE is allowed to have outstanding in the network",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_tarb_chn_detail[] = {
    { ._name = "CHN3_FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_CHN_CHN3_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_CHN_CHN3_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_CHN_RSTDATA & AR_NIC_BTE_CFG_TARB_CHN_CHN3_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_CHN_CHN3_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits channel 3 may have outstanding to the TARB interface logic",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN3_PKT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_CHN_CHN3_PKT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_CHN_CHN3_PKT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_CHN_RSTDATA & AR_NIC_BTE_CFG_TARB_CHN_CHN3_PKT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_CHN_CHN3_PKT_CRDTS_QW,
      ._desc = "Maximum number of packets channel 3 may have outstanding in the network",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN2_FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_CHN_CHN2_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_CHN_CHN2_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_CHN_RSTDATA & AR_NIC_BTE_CFG_TARB_CHN_CHN2_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_CHN_CHN2_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits channel 2 may have outstanding to the TARB interface logic",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN2_PKT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_CHN_CHN2_PKT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_CHN_CHN2_PKT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_CHN_RSTDATA & AR_NIC_BTE_CFG_TARB_CHN_CHN2_PKT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_CHN_CHN2_PKT_CRDTS_QW,
      ._desc = "Maximum number of packets channel 2 may have outstanding in the network",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN1_FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_CHN_CHN1_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_CHN_CHN1_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_CHN_RSTDATA & AR_NIC_BTE_CFG_TARB_CHN_CHN1_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_CHN_CHN1_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits channel 1 may have outstanding to the TARB interface logic",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN1_PKT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_CHN_CHN1_PKT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_CHN_CHN1_PKT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_CHN_RSTDATA & AR_NIC_BTE_CFG_TARB_CHN_CHN1_PKT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_CHN_CHN1_PKT_CRDTS_QW,
      ._desc = "Maximum number of packets channel 1 may have outstanding in the network",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN0_FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_CHN_CHN0_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_CHN_CHN0_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_CHN_RSTDATA & AR_NIC_BTE_CFG_TARB_CHN_CHN0_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_CHN_CHN0_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits channel 0 may have outstanding to the TARB interface logic",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN0_PKT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_TARB_CHN_CHN0_PKT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_TARB_CHN_CHN0_PKT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_TARB_CHN_RSTDATA & AR_NIC_BTE_CFG_TARB_CHN_CHN0_PKT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_TARB_CHN_CHN0_PKT_CRDTS_QW,
      ._desc = "Maximum number of packets channel 0 may have outstanding in the network",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_parb_wr_detail[] = {
    { ._name = "FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_PARB_WR_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_PARB_WR_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_PARB_WR_RSTDATA & AR_NIC_BTE_CFG_PARB_WR_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_PARB_WR_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits BTE is allowed to have outstanding in the PARB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_parb_wr_chn_detail[] = {
    { ._name = "CHN3_FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN3_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN3_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_PARB_WR_CHN_RSTDATA & AR_NIC_BTE_CFG_PARB_WR_CHN_CHN3_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN3_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits channel 3 may have outstanding to the write channel PARB interface logic",
      ._type_bitmsk = 0x0000000000001001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN2_FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN2_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN2_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_PARB_WR_CHN_RSTDATA & AR_NIC_BTE_CFG_PARB_WR_CHN_CHN2_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN2_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits channel 2 may have outstanding to the write channel PARB interface logic",
      ._type_bitmsk = 0x0000000000001001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN1_FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN1_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN1_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_PARB_WR_CHN_RSTDATA & AR_NIC_BTE_CFG_PARB_WR_CHN_CHN1_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN1_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits channel 1 may have outstanding to the write channel PARB interface logic",
      ._type_bitmsk = 0x0000000000001001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHN0_FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN0_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN0_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_PARB_WR_CHN_RSTDATA & AR_NIC_BTE_CFG_PARB_WR_CHN_CHN0_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_PARB_WR_CHN_CHN0_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits channel 0 may have outstanding to the write channel PARB interface logic",
      ._type_bitmsk = 0x0000000000001001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_parb_rd_detail[] = {
    { ._name = "FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_PARB_RD_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_PARB_RD_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_PARB_RD_RSTDATA & AR_NIC_BTE_CFG_PARB_RD_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_PARB_RD_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits BTE is allowed to have outstanding in the PARB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PKT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_PARB_RD_PKT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_PARB_RD_PKT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_PARB_RD_RSTDATA & AR_NIC_BTE_CFG_PARB_RD_PKT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_PARB_RD_PKT_CRDTS_QW,
      ._desc = "Maximum number of packets the BTE is allowed to have outstanding in the local memory",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_rd_op_ctrl_detail[] = {
    { ._name = "CHN_FLT_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_RD_OP_CTRL_CHN_FLT_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_RD_OP_CTRL_CHN_FLT_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_RD_OP_CTRL_RSTDATA & AR_NIC_BTE_CFG_RD_OP_CTRL_CHN_FLT_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_RD_OP_CTRL_CHN_FLT_CRDTS_QW,
      ._desc = "Maximum number of flits channel may have outstanding to the read channel PARB interface logic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RD_DLY",
      ._bpos = AR_NIC_BTE_CFG_RD_OP_CTRL_RD_DLY_BP,
      ._mask = AR_NIC_BTE_CFG_RD_OP_CTRL_RD_DLY_MASK,
      ._rval = AR_NIC_BTE_CFG_RD_OP_CTRL_RSTDATA & AR_NIC_BTE_CFG_RD_OP_CTRL_RD_DLY_MASK,
      ._index = AR_NIC_BTE_CFG_RD_OP_CTRL_RD_DLY_QW,
      ._desc = "Once PI_RD_QUIESCE_CNT is reached, wait this many BTE core clock cycles prior to issuing the next PI read request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RD_QUIESCE_CNT",
      ._bpos = AR_NIC_BTE_CFG_RD_OP_CTRL_RD_QUIESCE_CNT_BP,
      ._mask = AR_NIC_BTE_CFG_RD_OP_CTRL_RD_QUIESCE_CNT_MASK,
      ._rval = AR_NIC_BTE_CFG_RD_OP_CTRL_RSTDATA & AR_NIC_BTE_CFG_RD_OP_CTRL_RD_QUIESCE_CNT_MASK,
      ._index = AR_NIC_BTE_CFG_RD_OP_CTRL_RD_QUIESCE_CNT_QW,
      ._desc = "Once this channel has this many PI read requests in process, wait PI_RD_DLY cycles prior to issuing the next request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MAX_RD_REQ",
      ._bpos = AR_NIC_BTE_CFG_RD_OP_CTRL_MAX_RD_REQ_BP,
      ._mask = AR_NIC_BTE_CFG_RD_OP_CTRL_MAX_RD_REQ_MASK,
      ._rval = AR_NIC_BTE_CFG_RD_OP_CTRL_RSTDATA & AR_NIC_BTE_CFG_RD_OP_CTRL_MAX_RD_REQ_MASK,
      ._index = AR_NIC_BTE_CFG_RD_OP_CTRL_MAX_RD_REQ_QW,
      ._desc = "Maximum number of PI RD requests this channel may have to the PI at any given time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "GET_DLY",
      ._bpos = AR_NIC_BTE_CFG_RD_OP_CTRL_GET_DLY_BP,
      ._mask = AR_NIC_BTE_CFG_RD_OP_CTRL_GET_DLY_MASK,
      ._rval = AR_NIC_BTE_CFG_RD_OP_CTRL_RSTDATA & AR_NIC_BTE_CFG_RD_OP_CTRL_GET_DLY_MASK,
      ._index = AR_NIC_BTE_CFG_RD_OP_CTRL_GET_DLY_QW,
      ._desc = "Once GET_QUIESCE_CNT is reached, wait this many BTE core clock cycles prior to issuing the next GET request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "GET_QUIESCE_CNT",
      ._bpos = AR_NIC_BTE_CFG_RD_OP_CTRL_GET_QUIESCE_CNT_BP,
      ._mask = AR_NIC_BTE_CFG_RD_OP_CTRL_GET_QUIESCE_CNT_MASK,
      ._rval = AR_NIC_BTE_CFG_RD_OP_CTRL_RSTDATA & AR_NIC_BTE_CFG_RD_OP_CTRL_GET_QUIESCE_CNT_MASK,
      ._index = AR_NIC_BTE_CFG_RD_OP_CTRL_GET_QUIESCE_CNT_QW,
      ._desc = "Once this channel has this many GET requests is process, wait GET_DLY cycles prior to issuing the next request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MAX_GET_REQ",
      ._bpos = AR_NIC_BTE_CFG_RD_OP_CTRL_MAX_GET_REQ_BP,
      ._mask = AR_NIC_BTE_CFG_RD_OP_CTRL_MAX_GET_REQ_MASK,
      ._rval = AR_NIC_BTE_CFG_RD_OP_CTRL_RSTDATA & AR_NIC_BTE_CFG_RD_OP_CTRL_MAX_GET_REQ_MASK,
      ._index = AR_NIC_BTE_CFG_RD_OP_CTRL_MAX_GET_REQ_QW,
      ._desc = "Maximum number of GET requests this channel may have outstanding to the network at any given time",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_cfg_carb_detail[] = {
    { ._name = "CQ_CRDTS",
      ._bpos = AR_NIC_BTE_CFG_CARB_CQ_CRDTS_BP,
      ._mask = AR_NIC_BTE_CFG_CARB_CQ_CRDTS_MASK,
      ._rval = AR_NIC_BTE_CFG_CARB_RSTDATA & AR_NIC_BTE_CFG_CARB_CQ_CRDTS_MASK,
      ._index = AR_NIC_BTE_CFG_CARB_CQ_CRDTS_QW,
      ._desc = "Queue depth on BTE to CQ interface",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_prf_bytes_detail[] = {
    { ._name = "BYTES_CNT",
      ._bpos = AR_NIC_BTE_PRF_BYTES_BYTES_CNT_BP,
      ._mask = AR_NIC_BTE_PRF_BYTES_BYTES_CNT_MASK,
      ._rval = AR_NIC_BTE_PRF_BYTES_RSTDATA & AR_NIC_BTE_PRF_BYTES_BYTES_CNT_MASK,
      ._index = AR_NIC_BTE_PRF_BYTES_BYTES_CNT_QW,
      ._desc = "Current count of total number of bytes transmitted by this BTE channel",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_flg_detail[] = {
    { ._name = "CHN3_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_DEBUG_QW,
      ._desc = "Channel 3 debugging IRQ",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_DEBUG_QW,
      ._desc = "Channel 2 debugging IRQ",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_DEBUG_QW,
      ._desc = "Channel 1 debugging IRQ",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_DEBUG_QW,
      ._desc = "Channel 0 debugging IRQ",
      ._type_bitmsk = 0x0000000000080011ull,
      ._access = "RW1"
    },
    { ._name = "FMA_CQE_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_FMA_CQE_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_FMA_CQE_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_FMA_CQE_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_FMA_CQE_PERR_QW,
      ._desc = "A parity error has been detected in the FLBTE CQE buffer",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN3_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_NAT_ERR_QW,
      ._desc = "On BTE channel 3, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000020011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_NAT_ERR_QW,
      ._desc = "On BTE channel 2, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000020011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_NAT_ERR_QW,
      ._desc = "On BTE channel 1, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000020011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_NAT_ERR_QW,
      ._desc = "On BTE channel 0, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000020011ull,
      ._access = "RW1"
    },
    { ._name = "CHN3_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 3, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "CHN3_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 3, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 2, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 2, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 1, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 1, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 0, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 0, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "CHN3_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 3 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 2 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 1 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 0 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN3_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 3 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 2 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 1 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 0 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN3_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 3 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 2 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 1 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 0 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN3_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 3 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 2 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 1 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 0 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CHN3_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 3 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 2 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 1 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 0 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "CHN3_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN3_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN3_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 3 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "CHN2_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN2_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN2_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 2 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "CHN1_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN1_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN1_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 1 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "CHN0_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FLG_CHN0_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_CHN0_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 0 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "RD_RSP_PKT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FLG_RD_RSP_PKT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_RD_RSP_PKT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_RD_RSP_PKT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_RD_RSP_PKT_ERR_QW,
      ._desc = "A read channel response packet contained an error other than a data SECDED error",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "RD_RSP_MBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_RD_RSP_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_RD_RSP_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_RD_RSP_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_RD_RSP_MBE_QW,
      ._desc = "A read channel response packet contained a multiple bit error in a data field",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "RD_RSP_SBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_RD_RSP_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_RD_RSP_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_RD_RSP_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_RD_RSP_SBE_QW,
      ._desc = "A read channel response packet contained a single bit error in a data field",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "TX_DESC_TBL_MBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_TX_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_TX_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_TX_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_TX_DESC_TBL_MBE_QW,
      ._desc = "A multiple bit error has been detected in the BTE TX descriptor table",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "TX_DESC_TBL_SBE",
      ._bpos = AR_NIC_BTE_ERR_FLG_TX_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_TX_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_TX_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_TX_DESC_TBL_SBE_QW,
      ._desc = "A single bit error has been detected and corrected in the BTE TX descriptor table",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_BTE_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_BTE_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_BTE_ERR_FLG_RSTDATA & AR_NIC_BTE_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_BTE_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000100011ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_clr_detail[] = {
    { ._name = "CHN3_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_DEBUG_QW,
      ._desc = "Channel 3 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_DEBUG_QW,
      ._desc = "Channel 2 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_DEBUG_QW,
      ._desc = "Channel 1 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_DEBUG_QW,
      ._desc = "Channel 0 debugging IRQ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "FMA_CQE_PERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_FMA_CQE_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_FMA_CQE_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_FMA_CQE_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_FMA_CQE_PERR_QW,
      ._desc = "A parity error has been detected in the FLBTE CQE buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN3_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_NAT_ERR_QW,
      ._desc = "On BTE channel 3, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_NAT_ERR_QW,
      ._desc = "On BTE channel 2, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_NAT_ERR_QW,
      ._desc = "On BTE channel 1, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_NAT_ERR_QW,
      ._desc = "On BTE channel 0, a NAT translation error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN3_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 3, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN3_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 3, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 2, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 2, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 1, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 1, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_ALGN_BUF1_PERR_QW,
      ._desc = "On BTE channel 0, alignment buffer 1, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_ALGN_BUF0_PERR_QW,
      ._desc = "On BTE channel 0, alignment buffer 0, a parity error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN3_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 3 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 2 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 1 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_SSID_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 0 was unable to send a requested message complete",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN3_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 3 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 2 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 1 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_BTE_DROPPED_COMPLETE_QW,
      ._desc = "BTE channel 0 was unable to send a requested CQE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN3_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 3 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 2 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 1 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_DESC_DBL_TIMEOUT_QW,
      ._desc = "BTE channel 0 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN3_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 3 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 2 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 1 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_DESC_TIMEOUT_QW,
      ._desc = "TX descriptor processing by BTE channel 0 was aborted due to a timeout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN3_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 3 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 2 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 1 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_TX_DESC_INV_OP_QW,
      ._desc = "A BTE TX descriptor for channel 0 contained an invalid operation type",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN3_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN3_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN3_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 3 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN2_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN2_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN2_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 2 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN1_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN1_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN1_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 1 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "CHN0_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_CLR_CHN0_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_CHN0_TX_DESC_UNALGN_GET_QW,
      ._desc = "A BTE TX descriptor for channel 0 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "RD_RSP_PKT_ERR",
      ._bpos = AR_NIC_BTE_ERR_CLR_RD_RSP_PKT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_RD_RSP_PKT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_RD_RSP_PKT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_RD_RSP_PKT_ERR_QW,
      ._desc = "A read channel response packet contained an error other than a data SECDED error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "RD_RSP_MBE",
      ._bpos = AR_NIC_BTE_ERR_CLR_RD_RSP_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_RD_RSP_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_RD_RSP_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_RD_RSP_MBE_QW,
      ._desc = "A read channel response packet contained a multiple bit error in a data field",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "RD_RSP_SBE",
      ._bpos = AR_NIC_BTE_ERR_CLR_RD_RSP_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_RD_RSP_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_RD_RSP_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_RD_RSP_SBE_QW,
      ._desc = "A read channel response packet contained a single bit error in a data field",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "TX_DESC_TBL_MBE",
      ._bpos = AR_NIC_BTE_ERR_CLR_TX_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_TX_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_TX_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_TX_DESC_TBL_MBE_QW,
      ._desc = "A multiple bit error has been detected in the BTE TX descriptor table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "TX_DESC_TBL_SBE",
      ._bpos = AR_NIC_BTE_ERR_CLR_TX_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_TX_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_TX_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_TX_DESC_TBL_SBE_QW,
      ._desc = "A single bit error has been detected and corrected in the BTE TX descriptor table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_BTE_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_BTE_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_BTE_ERR_CLR_RSTDATA & AR_NIC_BTE_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_BTE_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_hss_msk_detail[] = {
    { ._name = "CHN3_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_DEBUG_QW,
      ._desc = "46:46",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_DEBUG_QW,
      ._desc = "45:45",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_DEBUG_QW,
      ._desc = "44:44",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_DEBUG_QW,
      ._desc = "43:43",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FMA_CQE_PERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_FMA_CQE_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_FMA_CQE_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_FMA_CQE_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_FMA_CQE_PERR_QW,
      ._desc = "42:42",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_NAT_ERR_QW,
      ._desc = "41:41",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_NAT_ERR_QW,
      ._desc = "40:40",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_NAT_ERR_QW,
      ._desc = "39:39",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_NAT_ERR_QW,
      ._desc = "38:38",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_ALGN_BUF1_PERR_QW,
      ._desc = "37:37",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_ALGN_BUF0_PERR_QW,
      ._desc = "36:36",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_ALGN_BUF1_PERR_QW,
      ._desc = "35:35",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_ALGN_BUF0_PERR_QW,
      ._desc = "34:34",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_ALGN_BUF1_PERR_QW,
      ._desc = "33:33",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_ALGN_BUF0_PERR_QW,
      ._desc = "32:32",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_ALGN_BUF1_PERR_QW,
      ._desc = "31:31",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_ALGN_BUF0_PERR_QW,
      ._desc = "30:30",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_SSID_DROPPED_COMPLETE_QW,
      ._desc = "29:29",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_SSID_DROPPED_COMPLETE_QW,
      ._desc = "28:28",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_SSID_DROPPED_COMPLETE_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_SSID_DROPPED_COMPLETE_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_BTE_DROPPED_COMPLETE_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_BTE_DROPPED_COMPLETE_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_BTE_DROPPED_COMPLETE_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_BTE_DROPPED_COMPLETE_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_DESC_DBL_TIMEOUT_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_DESC_DBL_TIMEOUT_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_DESC_DBL_TIMEOUT_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_DESC_DBL_TIMEOUT_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_DESC_TIMEOUT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_DESC_TIMEOUT_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_DESC_TIMEOUT_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_DESC_TIMEOUT_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_TX_DESC_INV_OP_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_TX_DESC_INV_OP_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_TX_DESC_INV_OP_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_TX_DESC_INV_OP_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN3_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN3_TX_DESC_UNALGN_GET_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN2_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN2_TX_DESC_UNALGN_GET_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN1_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN1_TX_DESC_UNALGN_GET_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_CHN0_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_CHN0_TX_DESC_UNALGN_GET_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RD_RSP_PKT_ERR",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_PKT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_PKT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_PKT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_PKT_ERR_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RD_RSP_MBE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_MBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RD_RSP_SBE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_RD_RSP_SBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TX_DESC_TBL_MBE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_TX_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_TX_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_TX_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_TX_DESC_TBL_MBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TX_DESC_TBL_SBE",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_TX_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_TX_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_TX_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_TX_DESC_TBL_SBE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_BTE_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_BTE_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA & AR_NIC_BTE_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_BTE_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_os_msk_detail[] = {
    { ._name = "CHN3_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_DEBUG_QW,
      ._desc = "46:46",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_DEBUG_QW,
      ._desc = "45:45",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_DEBUG_QW,
      ._desc = "44:44",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_DEBUG_QW,
      ._desc = "43:43",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FMA_CQE_PERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_FMA_CQE_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_FMA_CQE_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_FMA_CQE_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_FMA_CQE_PERR_QW,
      ._desc = "42:42",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_NAT_ERR_QW,
      ._desc = "41:41",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_NAT_ERR_QW,
      ._desc = "40:40",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_NAT_ERR_QW,
      ._desc = "39:39",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_NAT_ERR_QW,
      ._desc = "38:38",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_ALGN_BUF1_PERR_QW,
      ._desc = "37:37",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_ALGN_BUF0_PERR_QW,
      ._desc = "36:36",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_ALGN_BUF1_PERR_QW,
      ._desc = "35:35",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_ALGN_BUF0_PERR_QW,
      ._desc = "34:34",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_ALGN_BUF1_PERR_QW,
      ._desc = "33:33",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_ALGN_BUF0_PERR_QW,
      ._desc = "32:32",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_ALGN_BUF1_PERR_QW,
      ._desc = "31:31",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_ALGN_BUF0_PERR_QW,
      ._desc = "30:30",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_SSID_DROPPED_COMPLETE_QW,
      ._desc = "29:29",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_SSID_DROPPED_COMPLETE_QW,
      ._desc = "28:28",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_SSID_DROPPED_COMPLETE_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_SSID_DROPPED_COMPLETE_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_BTE_DROPPED_COMPLETE_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_BTE_DROPPED_COMPLETE_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_BTE_DROPPED_COMPLETE_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_BTE_DROPPED_COMPLETE_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_DESC_DBL_TIMEOUT_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_DESC_DBL_TIMEOUT_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_DESC_DBL_TIMEOUT_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_DESC_DBL_TIMEOUT_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_DESC_TIMEOUT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_DESC_TIMEOUT_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_DESC_TIMEOUT_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_DESC_TIMEOUT_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_TX_DESC_INV_OP_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_TX_DESC_INV_OP_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_TX_DESC_INV_OP_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_TX_DESC_INV_OP_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN3_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN3_TX_DESC_UNALGN_GET_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN2_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN2_TX_DESC_UNALGN_GET_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN1_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN1_TX_DESC_UNALGN_GET_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_CHN0_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_CHN0_TX_DESC_UNALGN_GET_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RD_RSP_PKT_ERR",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_RD_RSP_PKT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_RD_RSP_PKT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_RD_RSP_PKT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_RD_RSP_PKT_ERR_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RD_RSP_MBE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_RD_RSP_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_RD_RSP_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_RD_RSP_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_RD_RSP_MBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RD_RSP_SBE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_RD_RSP_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_RD_RSP_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_RD_RSP_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_RD_RSP_SBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TX_DESC_TBL_MBE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_TX_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_TX_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_TX_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_TX_DESC_TBL_MBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TX_DESC_TBL_SBE",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_TX_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_TX_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_TX_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_TX_DESC_TBL_SBE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_BTE_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_BTE_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_BTE_ERR_OS_MSK_RSTDATA & AR_NIC_BTE_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_BTE_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_first_flg_detail[] = {
    { ._name = "CHN3_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DEBUG_QW,
      ._desc = "46:46",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DEBUG_QW,
      ._desc = "45:45",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DEBUG_QW,
      ._desc = "44:44",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_DEBUG",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DEBUG_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DEBUG_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DEBUG_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DEBUG_QW,
      ._desc = "43:43",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FMA_CQE_PERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_FMA_CQE_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_FMA_CQE_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_FMA_CQE_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_FMA_CQE_PERR_QW,
      ._desc = "42:42",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_NAT_ERR_QW,
      ._desc = "41:41",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_NAT_ERR_QW,
      ._desc = "40:40",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_NAT_ERR_QW,
      ._desc = "39:39",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_NAT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_NAT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_NAT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_NAT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_NAT_ERR_QW,
      ._desc = "38:38",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_ALGN_BUF1_PERR_QW,
      ._desc = "37:37",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_ALGN_BUF0_PERR_QW,
      ._desc = "36:36",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_ALGN_BUF1_PERR_QW,
      ._desc = "35:35",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_ALGN_BUF0_PERR_QW,
      ._desc = "34:34",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_ALGN_BUF1_PERR_QW,
      ._desc = "33:33",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_ALGN_BUF0_PERR_QW,
      ._desc = "32:32",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_ALGN_BUF1_PERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_ALGN_BUF1_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_ALGN_BUF1_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_ALGN_BUF1_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_ALGN_BUF1_PERR_QW,
      ._desc = "31:31",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_ALGN_BUF0_PERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_ALGN_BUF0_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_ALGN_BUF0_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_ALGN_BUF0_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_ALGN_BUF0_PERR_QW,
      ._desc = "30:30",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_SSID_DROPPED_COMPLETE_QW,
      ._desc = "29:29",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_SSID_DROPPED_COMPLETE_QW,
      ._desc = "28:28",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_SSID_DROPPED_COMPLETE_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_SSID_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_SSID_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_SSID_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_SSID_DROPPED_COMPLETE_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_BTE_DROPPED_COMPLETE_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_BTE_DROPPED_COMPLETE_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_BTE_DROPPED_COMPLETE_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_BTE_DROPPED_COMPLETE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_BTE_DROPPED_COMPLETE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_BTE_DROPPED_COMPLETE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_BTE_DROPPED_COMPLETE_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DESC_DBL_TIMEOUT_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DESC_DBL_TIMEOUT_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DESC_DBL_TIMEOUT_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_DESC_DBL_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DESC_DBL_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DESC_DBL_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DESC_DBL_TIMEOUT_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_DESC_TIMEOUT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_DESC_TIMEOUT_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_DESC_TIMEOUT_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_DESC_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DESC_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DESC_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DESC_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_DESC_TIMEOUT_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_TX_DESC_INV_OP_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_TX_DESC_INV_OP_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_TX_DESC_INV_OP_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_TX_DESC_INV_OP",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_TX_DESC_INV_OP_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_TX_DESC_INV_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_TX_DESC_INV_OP_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_TX_DESC_INV_OP_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN3_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN3_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN3_TX_DESC_UNALGN_GET_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN2_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN2_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN2_TX_DESC_UNALGN_GET_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN1_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN1_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN1_TX_DESC_UNALGN_GET_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CHN0_TX_DESC_UNALGN_GET",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_TX_DESC_UNALGN_GET_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_CHN0_TX_DESC_UNALGN_GET_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_CHN0_TX_DESC_UNALGN_GET_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RD_RSP_PKT_ERR",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_PKT_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_PKT_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_PKT_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_PKT_ERR_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RD_RSP_MBE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_MBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RD_RSP_SBE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_RD_RSP_SBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TX_DESC_TBL_MBE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_TX_DESC_TBL_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_TX_DESC_TBL_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_TX_DESC_TBL_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_TX_DESC_TBL_MBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TX_DESC_TBL_SBE",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_TX_DESC_TBL_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_TX_DESC_TBL_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_TX_DESC_TBL_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_TX_DESC_TBL_SBE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_BTE_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_BTE_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA & AR_NIC_BTE_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_BTE_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_dst_detail[] = {
    { ._name = "MBE_PART",
      ._bpos = AR_NIC_BTE_ERR_INFO_DST_MBE_PART_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DST_MBE_PART_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_DST_MBE_PART_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DST_MBE_PART_QW,
      ._desc = "The 64-bit word, or words, of the multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_BTE_ERR_INFO_DST_MBE_ADDRESS_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DST_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_DST_MBE_ADDRESS_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DST_MBE_ADDRESS_QW,
      ._desc = "The TX descriptor index of the multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_BTE_ERR_INFO_DST_MBE_SYNDROME_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DST_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_DST_MBE_SYNDROME_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DST_MBE_SYNDROME_QW,
      ._desc = "The multiple bit error syndrome for specified word part",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_CREATED_MBE",
      ._bpos = AR_NIC_BTE_ERR_INFO_DST_MMR_CREATED_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DST_MMR_CREATED_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_DST_MMR_CREATED_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DST_MMR_CREATED_MBE_QW,
      ._desc = "MMR read created the MBE error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_PART",
      ._bpos = AR_NIC_BTE_ERR_INFO_DST_SBE_PART_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DST_SBE_PART_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_DST_SBE_PART_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DST_SBE_PART_QW,
      ._desc = "The 64-bit word, or words, of the single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_BTE_ERR_INFO_DST_SBE_ADDRESS_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DST_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_DST_SBE_ADDRESS_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DST_SBE_ADDRESS_QW,
      ._desc = "The TX descriptor address of the single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_BTE_ERR_INFO_DST_SBE_SYNDROME_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DST_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_DST_SBE_SYNDROME_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DST_SBE_SYNDROME_QW,
      ._desc = "The single bit error syndrome for specified word part",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_CREATED_SBE",
      ._bpos = AR_NIC_BTE_ERR_INFO_DST_MMR_CREATED_SBE_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DST_MMR_CREATED_SBE_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_DST_MMR_CREATED_SBE_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DST_MMR_CREATED_SBE_QW,
      ._desc = "MMR read created the SBE error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_cnt_sbe_dst_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_CNT_QW,
      ._desc = "Running count of single bit errors in the TX descriptor table",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_cnt_mbe_dst_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_RSTDATA & AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_CNT_QW,
      ._desc = "Running count of multiple bit errors in the TX descriptor table",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_ab0_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_BTE_ERR_INFO_AB0_ADDRESS_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_AB0_ADDRESS_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_AB0_RSTDATA & AR_NIC_BTE_ERR_INFO_AB0_ADDRESS_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_AB0_ADDRESS_QW,
      ._desc = "Address of RAM0 byte parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PARITY_MASK",
      ._bpos = AR_NIC_BTE_ERR_INFO_AB0_PARITY_MASK_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_AB0_PARITY_MASK_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_AB0_RSTDATA & AR_NIC_BTE_ERR_INFO_AB0_PARITY_MASK_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_AB0_PARITY_MASK_QW,
      ._desc = "The parity error mask for RAM0, one bit for each of the 16 possibly failing bytes",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_ab1_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_BTE_ERR_INFO_AB1_ADDRESS_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_AB1_ADDRESS_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_AB1_RSTDATA & AR_NIC_BTE_ERR_INFO_AB1_ADDRESS_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_AB1_ADDRESS_QW,
      ._desc = "Address of RAM1 byte parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PARITY_MASK",
      ._bpos = AR_NIC_BTE_ERR_INFO_AB1_PARITY_MASK_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_AB1_PARITY_MASK_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_AB1_RSTDATA & AR_NIC_BTE_ERR_INFO_AB1_PARITY_MASK_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_AB1_PARITY_MASK_QW,
      ._desc = "The parity error mask for RAM1, one bit for each of the 16 possibly failing bytes",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_cnt_ab0_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_CNT_AB0_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_CNT_AB0_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_CNT_AB0_RSTDATA & AR_NIC_BTE_ERR_INFO_CNT_AB0_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_CNT_AB0_CNT_QW,
      ._desc = "Running count of byte parity errors",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_cnt_ab1_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_CNT_AB1_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_CNT_AB1_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_CNT_AB1_RSTDATA & AR_NIC_BTE_ERR_INFO_CNT_AB1_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_CNT_AB1_CNT_QW,
      ._desc = "Running count of byte parity errors",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_fma_cqe0_detail[] = {
    { ._name = "PARITY",
      ._bpos = AR_NIC_BTE_ERR_INFO_FMA_CQE0_PARITY_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_FMA_CQE0_PARITY_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_FMA_CQE0_RSTDATA & AR_NIC_BTE_ERR_INFO_FMA_CQE0_PARITY_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_FMA_CQE0_PARITY_QW,
      ._desc = "Parity bit for failing parity check",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DATA",
      ._bpos = AR_NIC_BTE_ERR_INFO_FMA_CQE0_DATA_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_FMA_CQE0_DATA_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_FMA_CQE0_RSTDATA & AR_NIC_BTE_ERR_INFO_FMA_CQE0_DATA_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_FMA_CQE0_DATA_QW,
      ._desc = "Data for failing parity check",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_fma_cqe1_detail[] = {
    { ._name = "OVERRUN",
      ._bpos = AR_NIC_BTE_ERR_INFO_FMA_CQE1_OVERRUN_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_FMA_CQE1_OVERRUN_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_FMA_CQE1_RSTDATA & AR_NIC_BTE_ERR_INFO_FMA_CQE1_OVERRUN_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_FMA_CQE1_OVERRUN_QW,
      ._desc = "Indicates a parity error occurred while the FMA_CQE_PERR was set, indicating a parity error occurred and we were unable to capture the FMA descriptor number",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_BTE_ERR_INFO_FMA_CQE1_ADDRESS_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_FMA_CQE1_ADDRESS_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_FMA_CQE1_RSTDATA & AR_NIC_BTE_ERR_INFO_FMA_CQE1_ADDRESS_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_FMA_CQE1_ADDRESS_QW,
      ._desc = "Address of RAM parity error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_rd_rsp_sbe_detail[] = {
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_PI_ID_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_PI_ID_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_PI_ID_QW,
      ._desc = "The pi_id field of the header flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PART",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_PART_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_PART_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_PART_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_PART_QW,
      ._desc = "The 64-bit word, or words, of the single bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_SYNDROME_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_SYNDROME_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_SYNDROME_QW,
      ._desc = "The single bit error syndrome for specified word part",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_rd_rsp_mbe_detail[] = {
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_PI_ID_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_PI_ID_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_PI_ID_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_PI_ID_QW,
      ._desc = "The pi_id field of the header flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PART",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_PART_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_PART_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_PART_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_PART_QW,
      ._desc = "The 64-bit word, or words, of the multiple bit error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_SYNDROME_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_SYNDROME_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_SYNDROME_QW,
      ._desc = "The multiple bit error syndrome for specified word part",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_cnt_sbe_rd_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_RSTDATA & AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_CNT_QW,
      ._desc = "Running count of single bit errors",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_cnt_mbe_rd_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_RSTDATA & AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_CNT_QW,
      ._desc = "Running count of multiple bit errors",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_rd_rsp_detail[] = {
    { ._name = "FLIT_NUM",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_FLIT_NUM_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_FLIT_NUM_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_FLIT_NUM_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_FLIT_NUM_QW,
      ._desc = "The failing flit in the packet, only useful for tail errors",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSTATUS",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTATUS_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTATUS_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_RSTATUS_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTATUS_QW,
      ._desc = "The rstatus field of the header flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PI_ID",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_PI_ID_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_PI_ID_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_PI_ID_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_PI_ID_QW,
      ._desc = "The pi_id field of the header flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_RSPCMD_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_RSPCMD_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_RSPCMD_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_RSPCMD_QW,
      ._desc = "The rspcmd field of the header flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "UV",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_UV_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_UV_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_UV_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_UV_QW,
      ._desc = "Upper valid bit of the header flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_TAIL_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_TAIL_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_TAIL_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_TAIL_QW,
      ._desc = "Tail bit of the failing flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_PARITY_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_PARITY_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_PARITY_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_PARITY_QW,
      ._desc = "The four parity bits of the header flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSTATUS_ERR",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTATUS_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTATUS_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_RSTATUS_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTATUS_ERR_QW,
      ._desc = "Error indicated in the rstatus field",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD_ERR",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_RSPCMD_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_RSPCMD_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_RSPCMD_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_RSPCMD_ERR_QW,
      ._desc = "Response command error indication",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TAIL_ERR",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_TAIL_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_TAIL_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_TAIL_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_TAIL_ERR_QW,
      ._desc = "Tail error indication",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PARITY_ERR",
      ._bpos = AR_NIC_BTE_ERR_INFO_RD_RSP_PARITY_ERR_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_RD_RSP_PARITY_ERR_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA & AR_NIC_BTE_ERR_INFO_RD_RSP_PARITY_ERR_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_RD_RSP_PARITY_ERR_QW,
      ._desc = "Parity error indication",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_cnt_pkt_rd_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_RSTDATA & AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_CNT_QW,
      ._desc = "Running count of read response packet errors",
      ._type_bitmsk = 0x0000000000001801ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_timeout_detail[] = {
    { ._name = "NAT_TRANS",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_NAT_TRANS_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_NAT_TRANS_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_NAT_TRANS_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_NAT_TRANS_QW,
      ._desc = "Indicates the BTE was waiting for a NAT translation response when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "BTE_OP",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_BTE_OP_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_BTE_OP_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_BTE_OP_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_BTE_OP_QW,
      ._desc = "The BTE operation when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "CQ_REQ_CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_CQ_REQ_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_CQ_REQ_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_CQ_REQ_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_CQ_REQ_CNT_QW,
      ._desc = "The number of outstanding CQ events when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "GET_REQ_CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_GET_REQ_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_GET_REQ_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_GET_REQ_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_GET_REQ_CNT_QW,
      ._desc = "The number of outstanding GET requests when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RD_PARB_FLT_CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_RD_PARB_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_RD_PARB_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_RD_PARB_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_RD_PARB_FLT_CNT_QW,
      ._desc = "The number of outstanding flits for the PARB read channel when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RD_PARB_PKT_CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_RD_PARB_PKT_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_RD_PARB_PKT_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_RD_PARB_PKT_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_RD_PARB_PKT_CNT_QW,
      ._desc = "The number of outstanding packets for the PARB read channel when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "WR_PARB_FLT_CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_WR_PARB_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_WR_PARB_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_WR_PARB_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_WR_PARB_FLT_CNT_QW,
      ._desc = "The number of outstanding flits for the PARB write channel when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TARB_FLT_CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_TARB_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_TARB_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_TARB_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_TARB_FLT_CNT_QW,
      ._desc = "The number of outstanding TARB flits when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TARB_PKT_CNT",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_TARB_PKT_CNT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_TARB_PKT_CNT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_TARB_PKT_CNT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_TARB_PKT_CNT_QW,
      ._desc = "The number of outstanding network packets when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TX_STATE",
      ._bpos = AR_NIC_BTE_ERR_INFO_TIMEOUT_TX_STATE_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_TIMEOUT_TX_STATE_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA & AR_NIC_BTE_ERR_INFO_TIMEOUT_TX_STATE_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_TIMEOUT_TX_STATE_QW,
      ._desc = "The state the TX controller state machine was in when the timeout occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_err_info_dbg_detail[] = {
    { ._name = "TX_WR_IDX",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_TX_WR_IDX_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_TX_WR_IDX_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_TX_WR_IDX_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_TX_WR_IDX_QW,
      ._desc = "Write index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SSIDS_IN_USE",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_SSIDS_IN_USE_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_SSIDS_IN_USE_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_SSIDS_IN_USE_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_SSIDS_IN_USE_QW,
      ._desc = "The number of SSIDS in use at the time of the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TX_STATUS",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_TX_STATUS_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_TX_STATUS_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_TX_STATUS_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_TX_STATUS_QW,
      ._desc = "Error status which caused this debug MMR to stop capture",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TX_DLY_IRQ",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_TX_DLY_IRQ_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_TX_DLY_IRQ_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_TX_DLY_IRQ_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_TX_DLY_IRQ_QW,
      ._desc = "Delayed IRQ pending?",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TX_RD_IDX",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_TX_RD_IDX_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_TX_RD_IDX_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_TX_RD_IDX_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_TX_RD_IDX_QW,
      ._desc = "Read index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PI_RSP_ERROR",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_PI_RSP_ERROR_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_PI_RSP_ERROR_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_PI_RSP_ERROR_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_PI_RSP_ERROR_QW,
      ._desc = "An error occurred on the PI response channel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "NAT_ERROR",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_NAT_ERROR_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_NAT_ERROR_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_NAT_ERROR_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_NAT_ERROR_QW,
      ._desc = "A not translation error occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ALIGN_BUF_PERR",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_ALIGN_BUF_PERR_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_ALIGN_BUF_PERR_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_ALIGN_BUF_PERR_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_ALIGN_BUF_PERR_QW,
      ._desc = "An alignment buffer parity error has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ALIGN_DONE",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_ALIGN_DONE_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_ALIGN_DONE_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_ALIGN_DONE_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_ALIGN_DONE_QW,
      ._desc = "Alignment buffer operation completed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TX_TIMEOUT",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_TX_TIMEOUT_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_TX_TIMEOUT_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_TX_TIMEOUT_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_TX_TIMEOUT_QW,
      ._desc = "A timeout for this TX descriptor has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "UNALIGNED",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_UNALIGNED_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_UNALIGNED_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_UNALIGNED_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_UNALIGNED_QW,
      ._desc = "Set when an unaligned GET is indicated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TX_CONCATENATE",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_TX_CONCATENATE_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_TX_CONCATENATE_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_TX_CONCATENATE_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_TX_CONCATENATE_QW,
      ._desc = "The concatenate bit was set in the failing descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TX_DESC_MBE",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_TX_DESC_MBE_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_TX_DESC_MBE_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_TX_DESC_MBE_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_TX_DESC_MBE_QW,
      ._desc = "An uncorrectable error in the TX descriptor has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TX_STATE",
      ._bpos = AR_NIC_BTE_ERR_INFO_DBG_TX_STATE_BP,
      ._mask = AR_NIC_BTE_ERR_INFO_DBG_TX_STATE_MASK,
      ._rval = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA & AR_NIC_BTE_ERR_INFO_DBG_TX_STATE_MASK,
      ._index = AR_NIC_BTE_ERR_INFO_DBG_TX_STATE_QW,
      ._desc = "State the channels TX controller state machine was in when the error occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_sts_tarb_detail[] = {
    { ._name = "BAD_RSP_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_BAD_RSP_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_BAD_RSP_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_RSTDATA & AR_NIC_BTE_STS_TARB_BAD_RSP_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_BAD_RSP_CNT_QW,
      ._desc = "Current number of SSID_RSP_AMOs received",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_RSTDATA & AR_NIC_BTE_STS_TARB_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_FLT_CNT_QW,
      ._desc = "Current number of flits outstanding to the TARB",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "PKT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_PKT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_PKT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_RSTDATA & AR_NIC_BTE_STS_TARB_PKT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_PKT_CNT_QW,
      ._desc = "Current number of packets outstanding on the network",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_sts_tarb_chn_detail[] = {
    { ._name = "CHN3_FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_CHN_CHN3_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_CHN_CHN3_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_CHN_RSTDATA & AR_NIC_BTE_STS_TARB_CHN_CHN3_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_CHN_CHN3_FLT_CNT_QW,
      ._desc = "Current number of flits channel 3 has outstanding to the TARB interface logic",
      ._type_bitmsk = 0x0000000000000800ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN3_PKT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_CHN_CHN3_PKT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_CHN_CHN3_PKT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_CHN_RSTDATA & AR_NIC_BTE_STS_TARB_CHN_CHN3_PKT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_CHN_CHN3_PKT_CNT_QW,
      ._desc = "Current number of packets channel 3 has outstanding in the network",
      ._type_bitmsk = 0x0000000000000800ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN2_FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_CHN_CHN2_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_CHN_CHN2_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_CHN_RSTDATA & AR_NIC_BTE_STS_TARB_CHN_CHN2_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_CHN_CHN2_FLT_CNT_QW,
      ._desc = "Current number of flits channel 2 has outstanding to the TARB interface logic",
      ._type_bitmsk = 0x0000000000000800ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN2_PKT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_CHN_CHN2_PKT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_CHN_CHN2_PKT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_CHN_RSTDATA & AR_NIC_BTE_STS_TARB_CHN_CHN2_PKT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_CHN_CHN2_PKT_CNT_QW,
      ._desc = "Current number of packets channel 2 has outstanding in the network",
      ._type_bitmsk = 0x0000000000000800ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN1_FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_CHN_CHN1_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_CHN_CHN1_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_CHN_RSTDATA & AR_NIC_BTE_STS_TARB_CHN_CHN1_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_CHN_CHN1_FLT_CNT_QW,
      ._desc = "Current number of flits channel 1 has outstanding to the TARB interface logic",
      ._type_bitmsk = 0x0000000000000800ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN1_PKT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_CHN_CHN1_PKT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_CHN_CHN1_PKT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_CHN_RSTDATA & AR_NIC_BTE_STS_TARB_CHN_CHN1_PKT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_CHN_CHN1_PKT_CNT_QW,
      ._desc = "Current number of packets channel 1 has outstanding in the network",
      ._type_bitmsk = 0x0000000000000800ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN0_FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_CHN_CHN0_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_CHN_CHN0_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_CHN_RSTDATA & AR_NIC_BTE_STS_TARB_CHN_CHN0_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_CHN_CHN0_FLT_CNT_QW,
      ._desc = "Current number of flits channel 0 has outstanding to the TARB interface logic",
      ._type_bitmsk = 0x0000000000000800ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN0_PKT_CNT",
      ._bpos = AR_NIC_BTE_STS_TARB_CHN_CHN0_PKT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_TARB_CHN_CHN0_PKT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_TARB_CHN_RSTDATA & AR_NIC_BTE_STS_TARB_CHN_CHN0_PKT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_TARB_CHN_CHN0_PKT_CNT_QW,
      ._desc = "Current number of packets channel 0 has outstanding in the network",
      ._type_bitmsk = 0x0000000000000800ull,
      ._access = "RO,HRW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_sts_parb_wr_detail[] = {
    { ._name = "FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_WR_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_WR_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_WR_RSTDATA & AR_NIC_BTE_STS_PARB_WR_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_WR_FLT_CNT_QW,
      ._desc = "Current number of flits the write channel has outstanding to the PARB logic",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_sts_parb_wr_chn_detail[] = {
    { ._name = "CHN3_FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_WR_CHN_CHN3_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_WR_CHN_CHN3_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_WR_CHN_RSTDATA & AR_NIC_BTE_STS_PARB_WR_CHN_CHN3_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_WR_CHN_CHN3_FLT_CNT_QW,
      ._desc = "Current number of flits channel 3 has outstanding to the write channel PARB interface logic",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN2_FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_WR_CHN_CHN2_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_WR_CHN_CHN2_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_WR_CHN_RSTDATA & AR_NIC_BTE_STS_PARB_WR_CHN_CHN2_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_WR_CHN_CHN2_FLT_CNT_QW,
      ._desc = "Current number of flits channel 2 has outstanding to the write channel PARB interface logic",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN1_FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_WR_CHN_CHN1_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_WR_CHN_CHN1_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_WR_CHN_RSTDATA & AR_NIC_BTE_STS_PARB_WR_CHN_CHN1_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_WR_CHN_CHN1_FLT_CNT_QW,
      ._desc = "Current number of flits channel 1 has outstanding to the write channel PARB interface logic",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRW"
    },
    { ._name = "CHN0_FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_WR_CHN_CHN0_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_WR_CHN_CHN0_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_WR_CHN_RSTDATA & AR_NIC_BTE_STS_PARB_WR_CHN_CHN0_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_WR_CHN_CHN0_FLT_CNT_QW,
      ._desc = "Current number of flits channel 0 has outstanding to the write channel PARB interface logic",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_sts_parb_rd_detail[] = {
    { ._name = "FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_RD_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_RD_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_RD_RSTDATA & AR_NIC_BTE_STS_PARB_RD_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_RD_FLT_CNT_QW,
      ._desc = "Current number of flits outstanding to the read channel PARB logic",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "PKT_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_RD_PKT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_RD_PKT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_RD_RSTDATA & AR_NIC_BTE_STS_PARB_RD_PKT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_RD_PKT_CNT_QW,
      ._desc = "Current number of packets outstanding to the read channel local memory",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_sts_parb_rd_chn_detail[] = {
    { ._name = "GET_REQ_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_RD_CHN_GET_REQ_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_RD_CHN_GET_REQ_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_RD_CHN_RSTDATA & AR_NIC_BTE_STS_PARB_RD_CHN_GET_REQ_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_RD_CHN_GET_REQ_CNT_QW,
      ._desc = "Current number of GET requests channel has outstanding on the network",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRW"
    },
    { ._name = "NAT_REQ_IP",
      ._bpos = AR_NIC_BTE_STS_PARB_RD_CHN_NAT_REQ_IP_BP,
      ._mask = AR_NIC_BTE_STS_PARB_RD_CHN_NAT_REQ_IP_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_RD_CHN_RSTDATA & AR_NIC_BTE_STS_PARB_RD_CHN_NAT_REQ_IP_MASK,
      ._index = AR_NIC_BTE_STS_PARB_RD_CHN_NAT_REQ_IP_QW,
      ._desc = "A NAT request is currently outstanding",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HWO"
    },
    { ._name = "RD_FLT_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_RD_CHN_RD_FLT_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_RD_CHN_RD_FLT_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_RD_CHN_RSTDATA & AR_NIC_BTE_STS_PARB_RD_CHN_RD_FLT_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_RD_CHN_RD_FLT_CNT_QW,
      ._desc = "Current number of flits channel has outstanding to the read channel PARB interface logic",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRW"
    },
    { ._name = "RD_REQ_CNT",
      ._bpos = AR_NIC_BTE_STS_PARB_RD_CHN_RD_REQ_CNT_BP,
      ._mask = AR_NIC_BTE_STS_PARB_RD_CHN_RD_REQ_CNT_MASK,
      ._rval = AR_NIC_BTE_STS_PARB_RD_CHN_RSTDATA & AR_NIC_BTE_STS_PARB_RD_CHN_RD_REQ_CNT_MASK,
      ._index = AR_NIC_BTE_STS_PARB_RD_CHN_RD_REQ_CNT_QW,
      ._desc = "Current number of packets channel has outstanding in local memory",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_sts_tx_ctrl_detail[] = {
    { ._name = "CQE_IP",
      ._bpos = AR_NIC_BTE_STS_TX_CTRL_CQE_IP_BP,
      ._mask = AR_NIC_BTE_STS_TX_CTRL_CQE_IP_MASK,
      ._rval = AR_NIC_BTE_STS_TX_CTRL_RSTDATA & AR_NIC_BTE_STS_TX_CTRL_CQE_IP_MASK,
      ._index = AR_NIC_BTE_STS_TX_CTRL_CQE_IP_QW,
      ._desc = "The channel currently has a completion queue event in progress",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HWO"
    },
    { ._name = "TX_STATE",
      ._bpos = AR_NIC_BTE_STS_TX_CTRL_TX_STATE_BP,
      ._mask = AR_NIC_BTE_STS_TX_CTRL_TX_STATE_MASK,
      ._rval = AR_NIC_BTE_STS_TX_CTRL_RSTDATA & AR_NIC_BTE_STS_TX_CTRL_TX_STATE_MASK,
      ._index = AR_NIC_BTE_STS_TX_CTRL_TX_STATE_QW,
      ._desc = "The BTE TX control state",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRW"
    },
    { ._name = "SSIDS_IN_USE",
      ._bpos = AR_NIC_BTE_STS_TX_CTRL_SSIDS_IN_USE_BP,
      ._mask = AR_NIC_BTE_STS_TX_CTRL_SSIDS_IN_USE_MASK,
      ._rval = AR_NIC_BTE_STS_TX_CTRL_RSTDATA & AR_NIC_BTE_STS_TX_CTRL_SSIDS_IN_USE_MASK,
      ._index = AR_NIC_BTE_STS_TX_CTRL_SSIDS_IN_USE_QW,
      ._desc = "Number of SSIDs in use associated with this BTE channel",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_sts_algn_buf_detail[] = {
    { ._name = "BLOCK_VLD",
      ._bpos = AR_NIC_BTE_STS_ALGN_BUF_BLOCK_VLD_BP,
      ._mask = AR_NIC_BTE_STS_ALGN_BUF_BLOCK_VLD_MASK,
      ._rval = AR_NIC_BTE_STS_ALGN_BUF_RSTDATA & AR_NIC_BTE_STS_ALGN_BUF_BLOCK_VLD_MASK,
      ._index = AR_NIC_BTE_STS_ALGN_BUF_BLOCK_VLD_QW,
      ._desc = "Source tag request mask for outstanding PI RD requests",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_dbg_errinj_desc_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_DESC_ADDRESS_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_DESC_ADDRESS_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_DESC_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_DESC_ADDRESS_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_DESC_ADDRESS_QW,
      ._desc = "This field indicates the address within the TX descriptor table for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTE",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_DESC_CHECKBYTE_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_DESC_CHECKBYTE_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_DESC_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_DESC_CHECKBYTE_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_DESC_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the RAM address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RAMSELECT",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_DESC_RAMSELECT_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_DESC_RAMSELECT_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_DESC_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_DESC_RAMSELECT_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_DESC_RAMSELECT_QW,
      ._desc = "This field identifies the RAM in which errors will be injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_DESC_TRIGGERED_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_DESC_TRIGGERED_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_DESC_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_DESC_TRIGGERED_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_DESC_TRIGGERED_QW,
      ._desc = "This status bit is cleared when the MMR is written and set when an error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_DESC_MODE_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_DESC_MODE_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_DESC_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_DESC_MODE_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_DESC_MODE_QW,
      ._desc = "Mode 0: Inject error once on next read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_DESC_ENABLE_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_DESC_ENABLE_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_DESC_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_DESC_ENABLE_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_DESC_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_dbg_errinj_algn_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_ALGN_ADDRESS_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_ALGN_ADDRESS_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_ALGN_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_ALGN_ADDRESS_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_ALGN_ADDRESS_QW,
      ._desc = "This field indicates the address within the alignment buffer for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_ALGN_PARITY_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_ALGN_PARITY_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_ALGN_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_ALGN_PARITY_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_ALGN_PARITY_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding byte parity bit to be flipped for the address read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RAMSELECT",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_ALGN_RAMSELECT_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_ALGN_RAMSELECT_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_ALGN_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_ALGN_RAMSELECT_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_ALGN_RAMSELECT_QW,
      ._desc = "This field identifies the RAM in which errors will be injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_ALGN_TRIGGERED_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_ALGN_TRIGGERED_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_ALGN_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_ALGN_TRIGGERED_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_ALGN_TRIGGERED_QW,
      ._desc = "This status bit is cleared when the MMR is written and set when an error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_ALGN_MODE_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_ALGN_MODE_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_ALGN_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_ALGN_MODE_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_ALGN_MODE_QW,
      ._desc = "Mode 0: Inject error once on next read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_ALGN_ENABLE_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_ALGN_ENABLE_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_ALGN_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_ALGN_ENABLE_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_ALGN_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_dbg_errinj_fma_cqe_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_ADDRESS_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_ADDRESS_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_ADDRESS_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_ADDRESS_QW,
      ._desc = "This field indicates the address within the FLBTE CQE buffer for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_TRIGGERED_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_TRIGGERED_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_TRIGGERED_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_TRIGGERED_QW,
      ._desc = "This status bit is cleared when the MMR is written and set when an error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_MODE_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_MODE_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_MODE_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_MODE_QW,
      ._desc = "Mode 0: Inject error once on next read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_ENABLE_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_ENABLE_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_ENABLE_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_bte_dbg_errinj_rd_rsp_detail[] = {
    { ._name = "CMD",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CMD_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CMD_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CMD_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CMD_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the response command field of the BTE read response packet to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RSTATUS",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTATUS_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTATUS_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTATUS_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTATUS_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the rstatus field of the BTE read response packet to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTEUP",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CHECKBYTEUP_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CHECKBYTEUP_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CHECKBYTEUP_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CHECKBYTEUP_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the upper 64 bit data word to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTELO",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CHECKBYTELO_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CHECKBYTELO_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CHECKBYTELO_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_CHECKBYTELO_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the lower 64 bit data word to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_PARITY_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_PARITY_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_PARITY_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_PARITY_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_TAIL_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_TAIL_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_TAIL_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_TAIL_QW,
      ._desc = "When an error is injected, invert the tail bit of the flit of the packet corresponding to the COUNT field",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_COUNT_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_COUNT_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_COUNT_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_COUNT_QW,
      ._desc = "Flit in which to inject the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_TRIGGERED_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_TRIGGERED_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_TRIGGERED_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_TRIGGERED_QW,
      ._desc = "This status bit is cleared when the MMR is written and set when an error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_MODE_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_MODE_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_MODE_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_MODE_QW,
      ._desc = "Mode 0: Inject error in COUNT flit of one packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_ENABLE_BP,
      ._mask = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_ENABLE_MASK,
      ._rval = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA & AR_NIC_BTE_DBG_ERRINJ_RD_RSP_ENABLE_MASK,
      ._index = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR BTE DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_bte_cfg_tbl_desc_rval[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_RSTDATA_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_rmsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_RSTMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_RSTMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_RSTMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_RSTMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_RSTMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_wrmsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_WRTMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_WRTMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_WRTMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_WRTMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_WRTMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_rdmsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_RDMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_RDMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_RDMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_RDMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_RDMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_xsmsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_XSMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_XSMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_XSMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_XSMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_XSMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_wsemsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_WSEMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_WSEMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_WSEMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_WSEMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_WSEMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_rsemsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_RSEMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_RSEMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_RSEMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_RSEMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_RSEMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_w1smsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_W1SMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_W1SMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_W1SMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_W1SMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_W1SMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_w1cmsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_W1CMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_W1CMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_W1CMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_W1CMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_W1CMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_wrstmsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_WRSTMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_WRSTMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_WRSTMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_WRSTMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_WRSTMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_hwwmsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_HWWMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_HWWMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_HWWMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_HWWMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_HWWMASK_QW4
};
static const uint64_t __ar_nic_bte_cfg_tbl_desc_hwrmsk[5] = {
	AR_NIC_BTE_CFG_TBL_DESC_HWRMASK_QW0,
	AR_NIC_BTE_CFG_TBL_DESC_HWRMASK_QW1,
	AR_NIC_BTE_CFG_TBL_DESC_HWRMASK_QW2,
	AR_NIC_BTE_CFG_TBL_DESC_HWRMASK_QW3,
	AR_NIC_BTE_CFG_TBL_DESC_HWRMASK_QW4
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_mmr_ring_0_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_rval[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_rmsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_ERR_FLG_1_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_rval[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_rmsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_err_flg_1_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_ERR_FLG_1_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_rval[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSTDATA_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSTDATA_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_rmsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_wrmsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_WRTMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_WRTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_rdmsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RDMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RDMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_xsmsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_XSMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_XSMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_wsemsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_WSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_WSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_rsemsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSEMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_RSEMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_w1smsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_W1SMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_W1SMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_w1cmsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_W1CMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_W1CMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_wrstmsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_WRSTMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_WRSTMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_hwwmsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_HWWMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_HWWMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_hwrmsk[3] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_HWRMASK_QW1,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE_HWRMASK_QW2
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_rval[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_RSTDATA_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_RSTDATA_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_rmsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_RSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_RSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_wrmsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_WRTMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_WRTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_rdmsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_RDMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_RDMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_xsmsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_XSMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_XSMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_wsemsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_WSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_WSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_rsemsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_RSEMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_RSEMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_w1smsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_W1SMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_W1SMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_w1cmsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_W1CMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_W1CMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_wrstmsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_WRSTMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_WRSTMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_hwwmsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_HWWMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_HWWMASK_QW1
};
static const uint64_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_hwrmsk[2] = {
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_HWRMASK_QW0,
	AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE_HWRMASK_QW1
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_rval[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTDATA_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_rmsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_RSTMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_RSTMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_wrmsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_WRTMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_WRTMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_WRTMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_WRTMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_WRTMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_WRTMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_rdmsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_RDMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_RDMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_RDMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_RDMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_RDMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_RDMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_xsmsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_XSMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_XSMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_XSMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_XSMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_XSMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_XSMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_wsemsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_WSEMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_WSEMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_WSEMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_WSEMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_WSEMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_WSEMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_rsemsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_RSEMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_RSEMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_RSEMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_RSEMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_RSEMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_RSEMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_w1smsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_W1SMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_W1SMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_W1SMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_W1SMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_W1SMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_W1SMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_w1cmsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_W1CMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_W1CMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_W1CMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_W1CMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_W1CMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_W1CMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_wrstmsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_WRSTMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_WRSTMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_WRSTMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_WRSTMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_WRSTMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_WRSTMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_hwwmsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_HWWMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_HWWMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_HWWMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_HWWMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_HWWMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_HWWMASK_QW5
};
static const uint64_t __ar_nic_bte_cfg_chan_desc_hwrmsk[6] = {
	AR_NIC_BTE_CFG_CHAN_DESC_HWRMASK_QW0,
	AR_NIC_BTE_CFG_CHAN_DESC_HWRMASK_QW1,
	AR_NIC_BTE_CFG_CHAN_DESC_HWRMASK_QW2,
	AR_NIC_BTE_CFG_CHAN_DESC_HWRMASK_QW3,
	AR_NIC_BTE_CFG_CHAN_DESC_HWRMASK_QW4,
	AR_NIC_BTE_CFG_CHAN_DESC_HWRMASK_QW5
};

/*
 *  AR BTE MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_bte_cfg_tbl_desc = {
    ._name = "AR_NIC_BTE_CFG_TBL_DESC",
    ._addr = AR_NIC_BTE_CFG_TBL_DESC,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_tbl_desc_hwrmsk,
    ._nqw = 5,
    ._size = 40,
    ._incr = 64,
    ._depth = 2048,
      ._type_bitmsk = 0x000000000000200aull,
    ._info = __ar_nic_bte_cfg_tbl_desc_detail
};
static const cmmr_br_t __ar_nic_bte_bte_mmr_ring_0_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_MMR_RING_0_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_mmr_ring_0_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_mmr_ring_0_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_MMR_RING_0_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_mmr_ring_0_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_mmr_ring_0_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_mmr_ring_0_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_MMR_RING_0_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_mmr_ring_0_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_err_flg_1_hi_bte = {
    ._name = "AR_NIC_BTE_ERR_FLG_1_HI_BTE",
    ._addr = AR_NIC_BTE_ERR_FLG_1_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_flg_1_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_err_flg_1_mid_bte = {
    ._name = "AR_NIC_BTE_ERR_FLG_1_MID_BTE",
    ._addr = AR_NIC_BTE_ERR_FLG_1_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_err_flg_1_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_flg_1_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_err_flg_1_lo_bte = {
    ._name = "AR_NIC_BTE_ERR_FLG_1_LO_BTE",
    ._addr = AR_NIC_BTE_ERR_FLG_1_LO_BTE,
    ._rval.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_FLG_1_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_flg_1_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_parb_wr_pkt_2_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_TO_PARB_WR_PKT_2_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_parb_wr_pkt_2_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_parb_rd_pkt_3_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_TO_PARB_RD_PKT_3_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_parb_rd_pkt_3_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_TARB_PKT_4_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_tarb_pkt_4_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_TARB_PKT_4_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_tarb_pkt_4_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_tarb_pkt_4_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_TO_TARB_PKT_4_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_tarb_pkt_4_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_WR_PKT_5_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN0_TO_PARB_RD_PKT_6_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn0_to_tarb_pkt_7_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN0_TO_TARB_PKT_7_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn0_to_tarb_pkt_7_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_WR_PKT_8_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN1_TO_PARB_RD_PKT_9_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn1_to_tarb_pkt_a_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN1_TO_TARB_PKT_A_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn1_to_tarb_pkt_a_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_WR_PKT_B_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN2_TO_PARB_RD_PKT_C_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn2_to_tarb_pkt_d_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN2_TO_TARB_PKT_D_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn2_to_tarb_pkt_d_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_WR_PKT_E_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN3_TO_PARB_RD_PKT_F_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_chn3_to_tarb_pkt_10_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_CHN3_TO_TARB_PKT_10_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_chn3_to_tarb_pkt_10_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_nat_cq_iommu_11_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_TO_NAT_CQ_IOMMU_11_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_nat_cq_iommu_11_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_HI_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_reqmon_incs_12_hi_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_MID_BTE,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_reqmon_incs_12_mid_bte_detail
};
static const cmmr_br_t __ar_nic_bte_bte_to_reqmon_incs_12_lo_bte = {
    ._name = "AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE",
    ._addr = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE,
    ._rval.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_BTE_TO_REQMON_INCS_12_LO_BTE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_bte_to_reqmon_incs_12_lo_bte_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_chan_desc = {
    ._name = "AR_NIC_BTE_CFG_CHAN_DESC",
    ._addr = AR_NIC_BTE_CFG_CHAN_DESC,
    ._rval.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_bte_cfg_chan_desc_hwrmsk,
    ._nqw = 6,
    ._size = 48,
    ._incr = 64,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_bte_cfg_chan_desc_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_desc_base_idx = {
    ._name = "AR_NIC_BTE_CFG_DESC_BASE_IDX",
    ._addr = AR_NIC_BTE_CFG_DESC_BASE_IDX,
    ._rval.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_DESC_BASE_IDX_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_cfg_desc_base_idx_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_desc_cnt = {
    ._name = "AR_NIC_BTE_CFG_DESC_CNT",
    ._addr = AR_NIC_BTE_CFG_DESC_CNT,
    ._rval.val = AR_NIC_BTE_CFG_DESC_CNT_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_DESC_CNT_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_DESC_CNT_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_DESC_CNT_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_DESC_CNT_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_DESC_CNT_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_DESC_CNT_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_DESC_CNT_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_DESC_CNT_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_DESC_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_DESC_CNT_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_DESC_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_cfg_desc_cnt_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_tmr_ctrl = {
    ._name = "AR_NIC_BTE_CFG_TMR_CTRL",
    ._addr = AR_NIC_BTE_CFG_TMR_CTRL,
    ._rval.val = AR_NIC_BTE_CFG_TMR_CTRL_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_TMR_CTRL_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_TMR_CTRL_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_TMR_CTRL_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_TMR_CTRL_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_TMR_CTRL_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_TMR_CTRL_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_TMR_CTRL_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_TMR_CTRL_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_TMR_CTRL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_TMR_CTRL_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_TMR_CTRL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_cfg_tmr_ctrl_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_tarb = {
    ._name = "AR_NIC_BTE_CFG_TARB",
    ._addr = AR_NIC_BTE_CFG_TARB,
    ._rval.val = AR_NIC_BTE_CFG_TARB_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_TARB_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_TARB_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_TARB_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_TARB_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_TARB_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_TARB_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_TARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_TARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_TARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_TARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_TARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_cfg_tarb_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_tarb_chn = {
    ._name = "AR_NIC_BTE_CFG_TARB_CHN",
    ._addr = AR_NIC_BTE_CFG_TARB_CHN,
    ._rval.val = AR_NIC_BTE_CFG_TARB_CHN_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_TARB_CHN_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_TARB_CHN_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_TARB_CHN_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_TARB_CHN_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_TARB_CHN_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_TARB_CHN_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_TARB_CHN_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_TARB_CHN_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_TARB_CHN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_TARB_CHN_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_TARB_CHN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_bte_cfg_tarb_chn_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_parb_wr = {
    ._name = "AR_NIC_BTE_CFG_PARB_WR",
    ._addr = AR_NIC_BTE_CFG_PARB_WR,
    ._rval.val = AR_NIC_BTE_CFG_PARB_WR_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_PARB_WR_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_PARB_WR_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_PARB_WR_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_PARB_WR_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_PARB_WR_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_PARB_WR_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_PARB_WR_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_PARB_WR_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_PARB_WR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_PARB_WR_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_PARB_WR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_cfg_parb_wr_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_parb_wr_chn = {
    ._name = "AR_NIC_BTE_CFG_PARB_WR_CHN",
    ._addr = AR_NIC_BTE_CFG_PARB_WR_CHN,
    ._rval.val = AR_NIC_BTE_CFG_PARB_WR_CHN_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_PARB_WR_CHN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_cfg_parb_wr_chn_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_parb_rd = {
    ._name = "AR_NIC_BTE_CFG_PARB_RD",
    ._addr = AR_NIC_BTE_CFG_PARB_RD,
    ._rval.val = AR_NIC_BTE_CFG_PARB_RD_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_PARB_RD_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_PARB_RD_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_PARB_RD_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_PARB_RD_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_PARB_RD_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_PARB_RD_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_PARB_RD_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_PARB_RD_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_PARB_RD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_PARB_RD_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_PARB_RD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_cfg_parb_rd_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_rd_op_ctrl = {
    ._name = "AR_NIC_BTE_CFG_RD_OP_CTRL",
    ._addr = AR_NIC_BTE_CFG_RD_OP_CTRL,
    ._rval.val = AR_NIC_BTE_CFG_RD_OP_CTRL_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_RD_OP_CTRL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_cfg_rd_op_ctrl_detail
};
static const cmmr_br_t __ar_nic_bte_cfg_carb = {
    ._name = "AR_NIC_BTE_CFG_CARB",
    ._addr = AR_NIC_BTE_CFG_CARB,
    ._rval.val = AR_NIC_BTE_CFG_CARB_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_CFG_CARB_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_CFG_CARB_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_CFG_CARB_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_CFG_CARB_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_CFG_CARB_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_CFG_CARB_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_CFG_CARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_CFG_CARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_CFG_CARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_CFG_CARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_CFG_CARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_cfg_carb_detail
};
static const cmmr_br_t __ar_nic_bte_prf_bytes = {
    ._name = "AR_NIC_BTE_PRF_BYTES",
    ._addr = AR_NIC_BTE_PRF_BYTES,
    ._rval.val = AR_NIC_BTE_PRF_BYTES_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_PRF_BYTES_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_PRF_BYTES_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_PRF_BYTES_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_PRF_BYTES_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_PRF_BYTES_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_PRF_BYTES_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_PRF_BYTES_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_PRF_BYTES_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_PRF_BYTES_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_PRF_BYTES_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_PRF_BYTES_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_bte_prf_bytes_detail
};
static const cmmr_br_t __ar_nic_bte_err_flg = {
    ._name = "AR_NIC_BTE_ERR_FLG",
    ._addr = AR_NIC_BTE_ERR_FLG,
    ._rval.val = AR_NIC_BTE_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x00000000003f4811ull,
    ._info = __ar_nic_bte_err_flg_detail
};
static const cmmr_br_t __ar_nic_bte_err_clr = {
    ._name = "AR_NIC_BTE_ERR_CLR",
    ._addr = AR_NIC_BTE_ERR_CLR,
    ._rval.val = AR_NIC_BTE_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_bte_err_clr_detail
};
static const cmmr_br_t __ar_nic_bte_err_hss_msk = {
    ._name = "AR_NIC_BTE_ERR_HSS_MSK",
    ._addr = AR_NIC_BTE_ERR_HSS_MSK,
    ._rval.val = AR_NIC_BTE_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_bte_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_bte_err_os_msk = {
    ._name = "AR_NIC_BTE_ERR_OS_MSK",
    ._addr = AR_NIC_BTE_ERR_OS_MSK,
    ._rval.val = AR_NIC_BTE_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_bte_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_bte_err_first_flg = {
    ._name = "AR_NIC_BTE_ERR_FIRST_FLG",
    ._addr = AR_NIC_BTE_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_BTE_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_bte_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_dst = {
    ._name = "AR_NIC_BTE_ERR_INFO_DST",
    ._addr = AR_NIC_BTE_ERR_INFO_DST,
    ._rval.val = AR_NIC_BTE_ERR_INFO_DST_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_DST_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_DST_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_DST_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_DST_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_DST_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_DST_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_DST_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_DST_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_DST_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_DST_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_DST_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_info_dst_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_cnt_sbe_dst = {
    ._name = "AR_NIC_BTE_ERR_INFO_CNT_SBE_DST",
    ._addr = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST,
    ._rval.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_DST_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_bte_err_info_cnt_sbe_dst_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_cnt_mbe_dst = {
    ._name = "AR_NIC_BTE_ERR_INFO_CNT_MBE_DST",
    ._addr = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST,
    ._rval.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_DST_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_bte_err_info_cnt_mbe_dst_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_ab0 = {
    ._name = "AR_NIC_BTE_ERR_INFO_AB0",
    ._addr = AR_NIC_BTE_ERR_INFO_AB0,
    ._rval.val = AR_NIC_BTE_ERR_INFO_AB0_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_AB0_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_AB0_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_AB0_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_AB0_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_AB0_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_AB0_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_AB0_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_AB0_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_AB0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_AB0_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_AB0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_info_ab0_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_ab1 = {
    ._name = "AR_NIC_BTE_ERR_INFO_AB1",
    ._addr = AR_NIC_BTE_ERR_INFO_AB1,
    ._rval.val = AR_NIC_BTE_ERR_INFO_AB1_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_AB1_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_AB1_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_AB1_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_AB1_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_AB1_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_AB1_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_AB1_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_AB1_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_AB1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_AB1_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_AB1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_info_ab1_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_cnt_ab0 = {
    ._name = "AR_NIC_BTE_ERR_INFO_CNT_AB0",
    ._addr = AR_NIC_BTE_ERR_INFO_CNT_AB0,
    ._rval.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_bte_err_info_cnt_ab0_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_cnt_ab1 = {
    ._name = "AR_NIC_BTE_ERR_INFO_CNT_AB1",
    ._addr = AR_NIC_BTE_ERR_INFO_CNT_AB1,
    ._rval.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_AB1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_bte_err_info_cnt_ab1_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_fma_cqe0 = {
    ._name = "AR_NIC_BTE_ERR_INFO_FMA_CQE0",
    ._addr = AR_NIC_BTE_ERR_INFO_FMA_CQE0,
    ._rval.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_info_fma_cqe0_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_fma_cqe1 = {
    ._name = "AR_NIC_BTE_ERR_INFO_FMA_CQE1",
    ._addr = AR_NIC_BTE_ERR_INFO_FMA_CQE1,
    ._rval.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_FMA_CQE1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_info_fma_cqe1_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_rd_rsp_sbe = {
    ._name = "AR_NIC_BTE_ERR_INFO_RD_RSP_SBE",
    ._addr = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE,
    ._rval.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_SBE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_info_rd_rsp_sbe_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_rd_rsp_mbe = {
    ._name = "AR_NIC_BTE_ERR_INFO_RD_RSP_MBE",
    ._addr = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE,
    ._rval.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_MBE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_bte_err_info_rd_rsp_mbe_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_cnt_sbe_rd = {
    ._name = "AR_NIC_BTE_ERR_INFO_CNT_SBE_RD",
    ._addr = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD,
    ._rval.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_SBE_RD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_bte_err_info_cnt_sbe_rd_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_cnt_mbe_rd = {
    ._name = "AR_NIC_BTE_ERR_INFO_CNT_MBE_RD",
    ._addr = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD,
    ._rval.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_MBE_RD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_bte_err_info_cnt_mbe_rd_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_rd_rsp = {
    ._name = "AR_NIC_BTE_ERR_INFO_RD_RSP",
    ._addr = AR_NIC_BTE_ERR_INFO_RD_RSP,
    ._rval.val = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_RD_RSP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_err_info_rd_rsp_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_cnt_pkt_rd = {
    ._name = "AR_NIC_BTE_ERR_INFO_CNT_PKT_RD",
    ._addr = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD,
    ._rval.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_CNT_PKT_RD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001801ull,
    ._info = __ar_nic_bte_err_info_cnt_pkt_rd_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_timeout = {
    ._name = "AR_NIC_BTE_ERR_INFO_TIMEOUT",
    ._addr = AR_NIC_BTE_ERR_INFO_TIMEOUT,
    ._rval.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_TIMEOUT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_err_info_timeout_detail
};
static const cmmr_br_t __ar_nic_bte_err_info_dbg = {
    ._name = "AR_NIC_BTE_ERR_INFO_DBG",
    ._addr = AR_NIC_BTE_ERR_INFO_DBG,
    ._rval.val = AR_NIC_BTE_ERR_INFO_DBG_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_ERR_INFO_DBG_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_ERR_INFO_DBG_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_ERR_INFO_DBG_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_ERR_INFO_DBG_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_ERR_INFO_DBG_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_ERR_INFO_DBG_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_ERR_INFO_DBG_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_ERR_INFO_DBG_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_ERR_INFO_DBG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_ERR_INFO_DBG_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_ERR_INFO_DBG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_err_info_dbg_detail
};
static const cmmr_br_t __ar_nic_bte_sts_tarb = {
    ._name = "AR_NIC_BTE_STS_TARB",
    ._addr = AR_NIC_BTE_STS_TARB,
    ._rval.val = AR_NIC_BTE_STS_TARB_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_STS_TARB_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_STS_TARB_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_STS_TARB_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_STS_TARB_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_STS_TARB_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_STS_TARB_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_STS_TARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_STS_TARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_STS_TARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_STS_TARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_STS_TARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_bte_sts_tarb_detail
};
static const cmmr_br_t __ar_nic_bte_sts_tarb_chn = {
    ._name = "AR_NIC_BTE_STS_TARB_CHN",
    ._addr = AR_NIC_BTE_STS_TARB_CHN,
    ._rval.val = AR_NIC_BTE_STS_TARB_CHN_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_STS_TARB_CHN_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_STS_TARB_CHN_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_STS_TARB_CHN_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_STS_TARB_CHN_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_STS_TARB_CHN_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_STS_TARB_CHN_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_STS_TARB_CHN_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_STS_TARB_CHN_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_STS_TARB_CHN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_STS_TARB_CHN_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_STS_TARB_CHN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000800ull,
    ._info = __ar_nic_bte_sts_tarb_chn_detail
};
static const cmmr_br_t __ar_nic_bte_sts_parb_wr = {
    ._name = "AR_NIC_BTE_STS_PARB_WR",
    ._addr = AR_NIC_BTE_STS_PARB_WR,
    ._rval.val = AR_NIC_BTE_STS_PARB_WR_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_STS_PARB_WR_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_STS_PARB_WR_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_STS_PARB_WR_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_STS_PARB_WR_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_STS_PARB_WR_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_STS_PARB_WR_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_STS_PARB_WR_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_STS_PARB_WR_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_STS_PARB_WR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_STS_PARB_WR_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_STS_PARB_WR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_bte_sts_parb_wr_detail
};
static const cmmr_br_t __ar_nic_bte_sts_parb_wr_chn = {
    ._name = "AR_NIC_BTE_STS_PARB_WR_CHN",
    ._addr = AR_NIC_BTE_STS_PARB_WR_CHN,
    ._rval.val = AR_NIC_BTE_STS_PARB_WR_CHN_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_STS_PARB_WR_CHN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_bte_sts_parb_wr_chn_detail
};
static const cmmr_br_t __ar_nic_bte_sts_parb_rd = {
    ._name = "AR_NIC_BTE_STS_PARB_RD",
    ._addr = AR_NIC_BTE_STS_PARB_RD,
    ._rval.val = AR_NIC_BTE_STS_PARB_RD_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_STS_PARB_RD_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_STS_PARB_RD_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_STS_PARB_RD_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_STS_PARB_RD_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_STS_PARB_RD_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_STS_PARB_RD_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_STS_PARB_RD_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_STS_PARB_RD_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_STS_PARB_RD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_STS_PARB_RD_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_STS_PARB_RD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_bte_sts_parb_rd_detail
};
static const cmmr_br_t __ar_nic_bte_sts_parb_rd_chn = {
    ._name = "AR_NIC_BTE_STS_PARB_RD_CHN",
    ._addr = AR_NIC_BTE_STS_PARB_RD_CHN,
    ._rval.val = AR_NIC_BTE_STS_PARB_RD_CHN_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_STS_PARB_RD_CHN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_bte_sts_parb_rd_chn_detail
};
static const cmmr_br_t __ar_nic_bte_sts_tx_ctrl = {
    ._name = "AR_NIC_BTE_STS_TX_CTRL",
    ._addr = AR_NIC_BTE_STS_TX_CTRL,
    ._rval.val = AR_NIC_BTE_STS_TX_CTRL_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_STS_TX_CTRL_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_STS_TX_CTRL_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_STS_TX_CTRL_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_STS_TX_CTRL_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_STS_TX_CTRL_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_STS_TX_CTRL_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_STS_TX_CTRL_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_STS_TX_CTRL_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_STS_TX_CTRL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_STS_TX_CTRL_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_STS_TX_CTRL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_bte_sts_tx_ctrl_detail
};
static const cmmr_br_t __ar_nic_bte_sts_algn_buf = {
    ._name = "AR_NIC_BTE_STS_ALGN_BUF",
    ._addr = AR_NIC_BTE_STS_ALGN_BUF,
    ._rval.val = AR_NIC_BTE_STS_ALGN_BUF_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_STS_ALGN_BUF_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_STS_ALGN_BUF_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_STS_ALGN_BUF_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_STS_ALGN_BUF_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_STS_ALGN_BUF_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_STS_ALGN_BUF_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_STS_ALGN_BUF_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_STS_ALGN_BUF_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_STS_ALGN_BUF_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_STS_ALGN_BUF_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_STS_ALGN_BUF_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_bte_sts_algn_buf_detail
};
static const cmmr_br_t __ar_nic_bte_dbg_errinj_desc = {
    ._name = "AR_NIC_BTE_DBG_ERRINJ_DESC",
    ._addr = AR_NIC_BTE_DBG_ERRINJ_DESC,
    ._rval.val = AR_NIC_BTE_DBG_ERRINJ_DESC_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_DBG_ERRINJ_DESC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_dbg_errinj_desc_detail
};
static const cmmr_br_t __ar_nic_bte_dbg_errinj_algn = {
    ._name = "AR_NIC_BTE_DBG_ERRINJ_ALGN",
    ._addr = AR_NIC_BTE_DBG_ERRINJ_ALGN,
    ._rval.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_DBG_ERRINJ_ALGN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_dbg_errinj_algn_detail
};
static const cmmr_br_t __ar_nic_bte_dbg_errinj_fma_cqe = {
    ._name = "AR_NIC_BTE_DBG_ERRINJ_FMA_CQE",
    ._addr = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE,
    ._rval.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_DBG_ERRINJ_FMA_CQE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_dbg_errinj_fma_cqe_detail
};
static const cmmr_br_t __ar_nic_bte_dbg_errinj_rd_rsp = {
    ._name = "AR_NIC_BTE_DBG_ERRINJ_RD_RSP",
    ._addr = AR_NIC_BTE_DBG_ERRINJ_RD_RSP,
    ._rval.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTDATA,
    ._rmsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSTMASK,
    ._wrmsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_WRTMASK,
    ._rdmsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RDMASK,
    ._xsmsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_XSMASK,
    ._wsemsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_WSEMASK,
    ._rsemsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_RSEMASK,
    ._w1smsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_W1SMASK,
    ._w1cmsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_W1CMASK,
    ._wrstmsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_HWWMASK,
    ._hwrmsk.val = AR_NIC_BTE_DBG_ERRINJ_RD_RSP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nic_bte_dbg_errinj_rd_rsp_detail
};

/*
 *  INSTALL AR BTE MMRS
 */
static const cmmr_br_t* __ar_bte_mmrs[] = {
    &__ar_nic_bte_cfg_tbl_desc,
    &__ar_nic_bte_cfg_chan_desc,
    &__ar_nic_bte_cfg_desc_base_idx,
    &__ar_nic_bte_cfg_desc_cnt,
    &__ar_nic_bte_cfg_tmr_ctrl,
    &__ar_nic_bte_cfg_tarb,
    &__ar_nic_bte_cfg_tarb_chn,
    &__ar_nic_bte_cfg_parb_wr,
    &__ar_nic_bte_cfg_parb_wr_chn,
    &__ar_nic_bte_cfg_parb_rd,
    &__ar_nic_bte_cfg_rd_op_ctrl,
    &__ar_nic_bte_cfg_carb,
    &__ar_nic_bte_prf_bytes,
    &__ar_nic_bte_err_flg,
    &__ar_nic_bte_err_clr,
    &__ar_nic_bte_err_hss_msk,
    &__ar_nic_bte_err_os_msk,
    &__ar_nic_bte_err_first_flg,
    &__ar_nic_bte_err_info_dst,
    &__ar_nic_bte_err_info_cnt_sbe_dst,
    &__ar_nic_bte_err_info_cnt_mbe_dst,
    &__ar_nic_bte_err_info_ab0,
    &__ar_nic_bte_err_info_ab1,
    &__ar_nic_bte_err_info_cnt_ab0,
    &__ar_nic_bte_err_info_cnt_ab1,
    &__ar_nic_bte_err_info_fma_cqe0,
    &__ar_nic_bte_err_info_fma_cqe1,
    &__ar_nic_bte_err_info_rd_rsp_sbe,
    &__ar_nic_bte_err_info_rd_rsp_mbe,
    &__ar_nic_bte_err_info_cnt_sbe_rd,
    &__ar_nic_bte_err_info_cnt_mbe_rd,
    &__ar_nic_bte_err_info_rd_rsp,
    &__ar_nic_bte_err_info_cnt_pkt_rd,
    &__ar_nic_bte_err_info_timeout,
    &__ar_nic_bte_err_info_dbg,
    &__ar_nic_bte_sts_tarb,
    &__ar_nic_bte_sts_tarb_chn,
    &__ar_nic_bte_sts_parb_wr,
    &__ar_nic_bte_sts_parb_wr_chn,
    &__ar_nic_bte_sts_parb_rd,
    &__ar_nic_bte_sts_parb_rd_chn,
    &__ar_nic_bte_sts_tx_ctrl,
    &__ar_nic_bte_sts_algn_buf,
    &__ar_nic_bte_dbg_errinj_desc,
    &__ar_nic_bte_dbg_errinj_algn,
    &__ar_nic_bte_dbg_errinj_fma_cqe,
    &__ar_nic_bte_dbg_errinj_rd_rsp,
    NULL
};

/*
 *  INSTALL AR BTE LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_bte_enc_mmrs[] = {
    &__ar_nic_bte_bte_mmr_ring_0_hi_bte,
    &__ar_nic_bte_bte_mmr_ring_0_mid_bte,
    &__ar_nic_bte_bte_mmr_ring_0_lo_bte,
    &__ar_nic_bte_err_flg_1_hi_bte,
    &__ar_nic_bte_err_flg_1_mid_bte,
    &__ar_nic_bte_err_flg_1_lo_bte,
    &__ar_nic_bte_bte_to_parb_wr_pkt_2_hi_bte,
    &__ar_nic_bte_bte_to_parb_wr_pkt_2_mid_bte,
    &__ar_nic_bte_bte_to_parb_wr_pkt_2_lo_bte,
    &__ar_nic_bte_bte_to_parb_rd_pkt_3_hi_bte,
    &__ar_nic_bte_bte_to_parb_rd_pkt_3_mid_bte,
    &__ar_nic_bte_bte_to_parb_rd_pkt_3_lo_bte,
    &__ar_nic_bte_bte_to_tarb_pkt_4_hi_bte,
    &__ar_nic_bte_bte_to_tarb_pkt_4_mid_bte,
    &__ar_nic_bte_bte_to_tarb_pkt_4_lo_bte,
    &__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_hi_bte,
    &__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_mid_bte,
    &__ar_nic_bte_bte_chn0_to_parb_wr_pkt_5_lo_bte,
    &__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_hi_bte,
    &__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_mid_bte,
    &__ar_nic_bte_bte_chn0_to_parb_rd_pkt_6_lo_bte,
    &__ar_nic_bte_bte_chn0_to_tarb_pkt_7_hi_bte,
    &__ar_nic_bte_bte_chn0_to_tarb_pkt_7_mid_bte,
    &__ar_nic_bte_bte_chn0_to_tarb_pkt_7_lo_bte,
    &__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_hi_bte,
    &__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_mid_bte,
    &__ar_nic_bte_bte_chn1_to_parb_wr_pkt_8_lo_bte,
    &__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_hi_bte,
    &__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_mid_bte,
    &__ar_nic_bte_bte_chn1_to_parb_rd_pkt_9_lo_bte,
    &__ar_nic_bte_bte_chn1_to_tarb_pkt_a_hi_bte,
    &__ar_nic_bte_bte_chn1_to_tarb_pkt_a_mid_bte,
    &__ar_nic_bte_bte_chn1_to_tarb_pkt_a_lo_bte,
    &__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_hi_bte,
    &__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_mid_bte,
    &__ar_nic_bte_bte_chn2_to_parb_wr_pkt_b_lo_bte,
    &__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_hi_bte,
    &__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_mid_bte,
    &__ar_nic_bte_bte_chn2_to_parb_rd_pkt_c_lo_bte,
    &__ar_nic_bte_bte_chn2_to_tarb_pkt_d_hi_bte,
    &__ar_nic_bte_bte_chn2_to_tarb_pkt_d_mid_bte,
    &__ar_nic_bte_bte_chn2_to_tarb_pkt_d_lo_bte,
    &__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_hi_bte,
    &__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_mid_bte,
    &__ar_nic_bte_bte_chn3_to_parb_wr_pkt_e_lo_bte,
    &__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_hi_bte,
    &__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_mid_bte,
    &__ar_nic_bte_bte_chn3_to_parb_rd_pkt_f_lo_bte,
    &__ar_nic_bte_bte_chn3_to_tarb_pkt_10_hi_bte,
    &__ar_nic_bte_bte_chn3_to_tarb_pkt_10_mid_bte,
    &__ar_nic_bte_bte_chn3_to_tarb_pkt_10_lo_bte,
    &__ar_nic_bte_bte_to_nat_cq_iommu_11_hi_bte,
    &__ar_nic_bte_bte_to_nat_cq_iommu_11_mid_bte,
    &__ar_nic_bte_bte_to_nat_cq_iommu_11_lo_bte,
    &__ar_nic_bte_bte_to_reqmon_incs_12_hi_bte,
    &__ar_nic_bte_bte_to_reqmon_incs_12_mid_bte,
    &__ar_nic_bte_bte_to_reqmon_incs_12_lo_bte,
    NULL
};

#endif
