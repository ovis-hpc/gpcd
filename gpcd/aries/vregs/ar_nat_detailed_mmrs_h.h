/******************************************************************************
 * COPYRIGHT CRAY INC. ar_nat_detailed_mmrs_h.h
 * FILE: ar_nat_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:59 2014
 ******************************************************************************/
/**
 * @file ar_nat_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:38:59 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_nat_mmr_values.h and ar_nat_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_nat_mmr_values.h"

#ifndef _AR_NAT_DETAILED_MMRS_H_H_
#define _AR_NAT_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_nat_mmrs[];	/* NAT Array */

/*
 *  AR NAT MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_nat_cfg_tbl_mdd_detail[] = {
    { ._name = "PTAG",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_PTAG_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_PTAG_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_PTAG_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_PTAG_QW,
      ._desc = "Index into the Protection Key table to be used for Protection Key validation for requests/responses targeting the memory domain",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "MEM_MAX",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_MEM_MAX_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_MEM_MAX_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_MEM_MAX_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_MEM_MAX_QW,
      ._desc = "Bits [47:12] of the maximum valid address of the memory domain within a translation context",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "WILDCARD",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_WILDCARD_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_WILDCARD_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_WILDCARD_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_WILDCARD_QW,
      ._desc = "Disable PTAG/PKEY validation on this entry",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "TPH",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_TPH_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_TPH_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_TPH_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_TPH_QW,
      ._desc = "Value of Transaction Processing Hints to send towards the Processor Interface",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "FLUSH_COMPLETE",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_FLUSH_COMPLETE_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_FLUSH_COMPLETE_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_FLUSH_COMPLETE_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_FLUSH_COMPLETE_QW,
      ._desc = "Requires PI to ensure that requests targeting this memory domain be globally visibleat the local node prior to sending the final network response of a DSMN transaction targeting this memory domain and prior to sending the network response of a CQWrite request targeting this memory domain",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "RESP_GV",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_RESP_GV_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_RESP_GV_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_RESP_GV_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_RESP_GV_QW,
      ._desc = "When set, indicates that PI should respond when actions of request are globally visible",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "RESP_RO",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_RESP_RO_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_RESP_RO_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_RESP_RO_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_RESP_RO_QW,
      ._desc = "When set, a hint that PI may used relaxed ordering rules for writing the data contained in responses returned from the network",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "RD_RO",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_RD_RO_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_RD_RO_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_RD_RO_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_RD_RO_QW,
      ._desc = "When set, a hint that PI may used relaxed ordering rules for read requests targeting the memory domain",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "WR_RO",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_WR_RO_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_WR_RO_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_WR_RO_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_WR_RO_QW,
      ._desc = "When set, a hint that PI may use relaxed ordering rules for write requests targeting the memory domain",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "USE_RC",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_USE_RC_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_USE_RC_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_USE_RC_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_USE_RC_QW,
      ._desc = "When set, indicates that the relaxed ordering PI hint for received network requests and responses is based on the value of the RC (Routing Control) bits in the corresponding incoming request or response",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "NO_SNOOP",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_NO_SNOOP_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_NO_SNOOP_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1 & AR_NIC_NAT_CFG_TBL_MDD_NO_SNOOP_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_NO_SNOOP_QW,
      ._desc = "When cleared, PI must insure that requests targeting the memory domain are kept coherent with respect to caching entities in the local host",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "MMU_TC",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_MMU_TC_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_MMU_TC_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW0 & AR_NIC_NAT_CFG_TBL_MDD_MMU_TC_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_MMU_TC_QW,
      ._desc = "Translation context to be used by the IO MMU or PI MMU to handle requests/responses targeting the memory domain",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "MMU_EN",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_MMU_EN_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_MMU_EN_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW0 & AR_NIC_NAT_CFG_TBL_MDD_MMU_EN_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_MMU_EN_QW,
      ._desc = "Setting to 1 indicates that the IO MMU is used to translate requests/responses targeting the memory domain",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "MMU_PREFETCH",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_MMU_PREFETCH_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_MMU_PREFETCH_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW0 & AR_NIC_NAT_CFG_TBL_MDD_MMU_PREFETCH_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_MMU_PREFETCH_QW,
      ._desc = "Setting to 1 indicates that prefetching of I/O page table entries for this memory domain may improve performance",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "WRITABLE",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_WRITABLE_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_WRITABLE_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW0 & AR_NIC_NAT_CFG_TBL_MDD_WRITABLE_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_WRITABLE_QW,
      ._desc = "Set to 1 to enable writes to this memory domain",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "VALID",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_VALID_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_VALID_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW0 & AR_NIC_NAT_CFG_TBL_MDD_VALID_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_VALID_QW,
      ._desc = "Set to 1 to indicate this entry is valid",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "MEM_BASE",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_MEM_BASE_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_MEM_BASE_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW0 & AR_NIC_NAT_CFG_TBL_MDD_MEM_BASE_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_MEM_BASE_QW,
      ._desc = "Bits [47:12] of the memory domain base address within a translation context",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "CQH",
      ._bpos = AR_NIC_NAT_CFG_TBL_MDD_CQH_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_MDD_CQH_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW0 & AR_NIC_NAT_CFG_TBL_MDD_CQH_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_MDD_CQH_QW,
      ._desc = "Completion Queue Handle",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_UNUSED_145_35_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_UNUSED_145_35_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSTDATA_QW2 & AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_UNUSED_145_35_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_UNUSED_145_35_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_detail[] = {
    { ._name = "UNUSED_127_98",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_UNUSED_127_98_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_UNUSED_127_98_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_UNUSED_127_98_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_UNUSED_127_98_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTT_MBE",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PTT_MBE_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PTT_MBE_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PTT_MBE_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PTT_MBE_QW,
      ._desc = "MBE's in PTT RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTT_SBE",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PTT_SBE_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PTT_SBE_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PTT_SBE_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PTT_SBE_QW,
      ._desc = "SBE's in PTT RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_MDDT1_MBE",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT1_MBE_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT1_MBE_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT1_MBE_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT1_MBE_QW,
      ._desc = "MBE's in MDDT RAM 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_MDDT1_SBE",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT1_SBE_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT1_SBE_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT1_SBE_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT1_SBE_QW,
      ._desc = "SBE's in MDDT RAM 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_MDDT0_MBE",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT0_MBE_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT0_MBE_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT0_MBE_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT0_MBE_QW,
      ._desc = "MBE's in MDDT RAM 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_MDDT0_SBE",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT0_SBE_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT0_SBE_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT0_SBE_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_MDDT0_SBE_QW,
      ._desc = "SBE's in MDDT RAM 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PIPELINE_STALLED",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PIPELINE_STALLED_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PIPELINE_STALLED_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PIPELINE_STALLED_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_PIPELINE_STALLED_QW,
      ._desc = "Translation pipeline stalls",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_BLOCKED",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_BLOCKED_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_BLOCKED_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_BLOCKED_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_BLOCKED_QW,
      ._desc = "BTE blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_STALLED",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_STALLED_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_STALLED_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_STALLED_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_STALLED_QW,
      ._desc = "BTE stalled count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_TRANSLATIONS",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_TRANSLATIONS_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_TRANSLATIONS_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_TRANSLATIONS_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_BTE_TRANSLATIONS_QW,
      ._desc = "BTE translation count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CQ_BLOCKED",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_BLOCKED_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_BLOCKED_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_BLOCKED_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_BLOCKED_QW,
      ._desc = "CQ blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CQ_STALLED",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_STALLED_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_STALLED_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_STALLED_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_STALLED_QW,
      ._desc = "CQ stalled count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CQ_TRANSLATIONS",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_TRANSLATIONS_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_TRANSLATIONS_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_TRANSLATIONS_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_CQ_TRANSLATIONS_QW,
      ._desc = "CQ translation count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RAT_BLOCKED",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_BLOCKED_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_BLOCKED_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_BLOCKED_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_BLOCKED_QW,
      ._desc = "RAT blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RAT_STALLED",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_STALLED_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_STALLED_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_STALLED_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_STALLED_QW,
      ._desc = "RAT stalled count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RAT_TRANSLATIONS",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_TRANSLATIONS_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_TRANSLATIONS_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_TRANSLATIONS_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_CNTR_RAT_TRANSLATIONS_QW,
      ._desc = "RAT translation count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_64",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_UNUSED_81_64_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_UNUSED_81_64_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_UNUSED_81_64_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_UNUSED_81_64_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_mmr_ring_0_lo_nat_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_UNUSED_145_35_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_UNUSED_145_35_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_UNUSED_145_35_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_UNUSED_145_35_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_PI_OS_IRQ",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_PI_OS_IRQ_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_PI_OS_IRQ_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_PI_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_LB_HSS_IRQ",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_LB_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_NETMON_RING_WRACK",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_NETMON_RING_WRACK_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_NETMON_RING_WRACK_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_NETMON_RING_WRACK_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_NETMON_RING_WRACK_QW,
      ._desc = "NETMON Write Acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_NETMON_RING_15_0",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_NETMON_RING_15_0_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_NETMON_RING_15_0_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_NETMON_RING_15_0_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_R_Q_NAT_NETMON_RING_15_0_QW,
      ._desc = "NETMON Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NETMON_NAT_RING_15_0",
      ._bpos = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_I_NETMON_NAT_RING_15_0_BP,
      ._mask = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_I_NETMON_NAT_RING_15_0_MASK,
      ._rval = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_I_NETMON_NAT_RING_15_0_MASK,
      ._index = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_I_NETMON_NAT_RING_15_0_QW,
      ._desc = "NETMON Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_flg_1_hi_nat_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_HI_NAT_UNUSED_145_128_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_HI_NAT_UNUSED_145_128_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSTDATA_QW2 & AR_NIC_NAT_ERR_FLG_1_HI_NAT_UNUSED_145_128_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_HI_NAT_UNUSED_145_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_flg_1_mid_nat_detail[] = {
    { ._name = "UNUSED_127_83",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_UNUSED_127_83_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_UNUSED_127_83_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_UNUSED_127_83_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_UNUSED_127_83_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTT_SBE",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_PTT_SBE_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_PTT_SBE_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_PTT_SBE_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_PTT_SBE_QW,
      ._desc = "SBE on PTT table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDDT_SBE1",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_SBE1_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_SBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_SBE1_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_SBE1_QW,
      ._desc = "SBE on MDD table 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDDT_SBE0",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_SBE0_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_SBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_SBE0_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_SBE0_QW,
      ._desc = "SBE on MDD table 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTT_MBE",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_PTT_MBE_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_PTT_MBE_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_PTT_MBE_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_PTT_MBE_QW,
      ._desc = "MBE on PTT table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDDT_MBE1",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_MBE1_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_MBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_MBE1_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_MBE1_QW,
      ._desc = "MBE on MDD table 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDDT_MBE0",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_MBE0_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_MBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_MBE0_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MDDT_MBE0_QW,
      ._desc = "MBE on MDD table 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MALFORMED_MDD",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MALFORMED_MDD_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MALFORMED_MDD_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_MALFORMED_MDD_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_MALFORMED_MDD_QW,
      ._desc = "MDD configuration error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "VMDHCAM_MULTIHIT",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_VMDHCAM_MULTIHIT_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_VMDHCAM_MULTIHIT_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_VMDHCAM_MULTIHIT_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_VMDHCAM_MULTIHIT_QW,
      ._desc = "VMDH CAM configuration error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IOMMU_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_IOMMU_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_IOMMU_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_IOMMU_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_IOMMU_FIFO_UFLW_QW,
      ._desc = "Underflow detected on IOMMU fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BYPASS_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BYPASS_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BYPASS_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_BYPASS_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BYPASS_FIFO_UFLW_QW,
      ._desc = "Underflow detected on BYPASS fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BTE_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BTE_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_BTE_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BTE_FIFO_UFLW_QW,
      ._desc = "Underflow detected on BTE fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_CQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_CQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_CQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_CQ_FIFO_UFLW_QW,
      ._desc = "Underflow detected on CQ fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RAT_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RAT_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RAT_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_RAT_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RAT_FIFO_UFLW_QW,
      ._desc = "Underflow detected on RAT fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IOMMU_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_IOMMU_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_IOMMU_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_IOMMU_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_IOMMU_FIFO_OFLW_QW,
      ._desc = "Overflow detected on IOMMU fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BYPASS_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BYPASS_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BYPASS_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_BYPASS_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BYPASS_FIFO_OFLW_QW,
      ._desc = "Overflow detected on BYPASS fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BTE_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BTE_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_BTE_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_BTE_FIFO_OFLW_QW,
      ._desc = "Overflow detected on BTE fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_CQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_CQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_CQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_CQ_FIFO_OFLW_QW,
      ._desc = "Overflow detected on CQ fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RAT_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RAT_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RAT_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_RAT_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RAT_FIFO_OFLW_QW,
      ._desc = "Overflow detected on RAT fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_MID_NAT_DIAG_ONLY_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_MID_NAT_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_ERR_FLG_1_MID_NAT_DIAG_ONLY_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_MID_NAT_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_flg_1_lo_nat_detail[] = {
    { ._name = "UNUSED_63_19",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_UNUSED_63_19_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_UNUSED_63_19_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_UNUSED_63_19_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_UNUSED_63_19_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PTT_SBE",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_PTT_SBE_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_PTT_SBE_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_PTT_SBE_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_PTT_SBE_QW,
      ._desc = "SBE on PTT table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MDDT_SBE1",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_SBE1_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_SBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_SBE1_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_SBE1_QW,
      ._desc = "SBE on MDD table 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MDDT_SBE0",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_SBE0_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_SBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_SBE0_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_SBE0_QW,
      ._desc = "SBE on MDD table 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PTT_MBE",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_PTT_MBE_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_PTT_MBE_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_PTT_MBE_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_PTT_MBE_QW,
      ._desc = "MBE on PTT table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MDDT_MBE1",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_MBE1_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_MBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_MBE1_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_MBE1_QW,
      ._desc = "MBE on MDD table 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MDDT_MBE0",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_MBE0_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_MBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_MBE0_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MDDT_MBE0_QW,
      ._desc = "MBE on MDD table 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MALFORMED_MDD",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MALFORMED_MDD_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MALFORMED_MDD_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MALFORMED_MDD_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_MALFORMED_MDD_QW,
      ._desc = "MDD configuration error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_VMDHCAM_MULTIHIT",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_VMDHCAM_MULTIHIT_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_VMDHCAM_MULTIHIT_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_VMDHCAM_MULTIHIT_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_VMDHCAM_MULTIHIT_QW,
      ._desc = "VMDH CAM configuration error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_IOMMU_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_IOMMU_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_IOMMU_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_IOMMU_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_IOMMU_FIFO_UFLW_QW,
      ._desc = "Underflow detected on IOMMU fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BYPASS_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BYPASS_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BYPASS_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BYPASS_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BYPASS_FIFO_UFLW_QW,
      ._desc = "Underflow detected on BYPASS fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BTE_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BTE_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BTE_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BTE_FIFO_UFLW_QW,
      ._desc = "Underflow detected on BTE fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_CQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_CQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_CQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_CQ_FIFO_UFLW_QW,
      ._desc = "Underflow detected on CQ fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_RAT_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_RAT_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_RAT_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_RAT_FIFO_UFLW_QW,
      ._desc = "Underflow detected on RAT fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_IOMMU_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_IOMMU_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_IOMMU_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_IOMMU_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_IOMMU_FIFO_OFLW_QW,
      ._desc = "Overflow detected on IOMMU fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BYPASS_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BYPASS_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BYPASS_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BYPASS_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BYPASS_FIFO_OFLW_QW,
      ._desc = "Overflow detected on BYPASS fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BTE_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BTE_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BTE_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_BTE_FIFO_OFLW_QW,
      ._desc = "Overflow detected on BTE fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_CQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_CQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_CQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_CQ_FIFO_OFLW_QW,
      ._desc = "Overflow detected on CQ fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_RAT_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_RAT_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_RAT_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_I_RAT_FIFO_OFLW_QW,
      ._desc = "Overflow detected on RAT fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_NAT_ERR_FLG_1_LO_NAT_UNUSED_0_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_1_LO_NAT_UNUSED_0_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA & AR_NIC_NAT_ERR_FLG_1_LO_NAT_UNUSED_0_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_1_LO_NAT_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_detail[] = {
    { ._name = "UNUSED_145_141",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_UNUSED_145_141_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_UNUSED_145_141_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSTDATA_QW2 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_UNUSED_145_141_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_UNUSED_145_141_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_RAT_TID",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_R_Q_NAT_RAT_TID_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_R_Q_NAT_RAT_TID_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSTDATA_QW2 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_R_Q_NAT_RAT_TID_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_R_Q_NAT_RAT_TID_QW,
      ._desc = "RAT output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_RAT_CQH",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_R_Q_NAT_RAT_CQH_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_R_Q_NAT_RAT_CQH_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSTDATA_QW2 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_R_Q_NAT_RAT_CQH_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_R_Q_NAT_RAT_CQH_QW,
      ._desc = "RAT output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_detail[] = {
    { ._name = "R_Q_NAT_RAT_CQH",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_CQH_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_CQH_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_CQH_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_CQH_QW,
      ._desc = "RAT output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_RAT_PI_CFG",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_PI_CFG_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_PI_CFG_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_PI_CFG_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_PI_CFG_QW,
      ._desc = "RAT output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_RAT_TC",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_TC_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_TC_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_TC_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_TC_QW,
      ._desc = "RAT output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_RAT_ADDR",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_ADDR_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_ADDR_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_ADDR_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_ADDR_QW,
      ._desc = "RAT output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_RAT_ERRORS",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_ERRORS_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_ERRORS_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_ERRORS_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_ERRORS_QW,
      ._desc = "RAT output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_RAT_VALID",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_VALID_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_VALID_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_VALID_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_R_Q_NAT_RAT_VALID_QW,
      ._desc = "RAT output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_NAT_TID",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_I_RAT_NAT_TID_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_I_RAT_NAT_TID_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_I_RAT_NAT_TID_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_I_RAT_NAT_TID_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_rat_req_rsp_2_lo_nat_detail[] = {
    { ._name = "I_RAT_NAT_TID",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_TID_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_TID_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_TID_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_TID_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_NAT_MDH",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_MDH_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_MDH_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_MDH_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_MDH_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_NAT_PROT",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_PROT_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_PROT_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_PROT_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_PROT_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_NAT_PROT_TYPE",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_PROT_TYPE_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_PROT_TYPE_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_PROT_TYPE_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_PROT_TYPE_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_NAT_ADDR",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_ADDR_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_ADDR_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_ADDR_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_ADDR_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_NAT_READ_CMD",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_READ_CMD_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_READ_CMD_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_READ_CMD_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_READ_CMD_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_NAT_WRITE_CMD",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_WRITE_CMD_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_WRITE_CMD_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_WRITE_CMD_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_WRITE_CMD_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_NAT_BYPASS_IOMMU",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_BYPASS_IOMMU_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_BYPASS_IOMMU_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_BYPASS_IOMMU_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_BYPASS_IOMMU_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_NAT_VALID",
      ._bpos = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_VALID_BP,
      ._mask = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_VALID_MASK,
      ._rval = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_VALID_MASK,
      ._index = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_I_RAT_NAT_VALID_QW,
      ._desc = "RAT input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_detail[] = {
    { ._name = "UNUSED_145_112",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_UNUSED_145_112_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_UNUSED_145_112_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSTDATA_QW2 & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_UNUSED_145_112_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_UNUSED_145_112_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_detail[] = {
    { ._name = "UNUSED_145_112",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_UNUSED_145_112_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_UNUSED_145_112_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_UNUSED_145_112_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_UNUSED_145_112_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_CQ_TID",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TID_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TID_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TID_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TID_QW,
      ._desc = "CQ output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_CQ_TPH",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TPH_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TPH_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TPH_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TPH_QW,
      ._desc = "CQ output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_CQ_TC",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TC_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TC_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TC_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_TC_QW,
      ._desc = "CQ output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_CQ_ADDR",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_ADDR_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_ADDR_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_ADDR_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_R_Q_NAT_CQ_ADDR_QW,
      ._desc = "CQ output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_cq_req_rsp_3_lo_nat_detail[] = {
    { ._name = "R_Q_NAT_CQ_ADDR",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_ADDR_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_ADDR_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_ADDR_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_ADDR_QW,
      ._desc = "CQ output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_CQ_ERRORS",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_ERRORS_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_ERRORS_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_ERRORS_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_ERRORS_QW,
      ._desc = "CQ output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_CQ_VALID",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_VALID_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_VALID_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_VALID_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_R_Q_NAT_CQ_VALID_QW,
      ._desc = "CQ output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_56",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_UNUSED_56_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_UNUSED_56_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_UNUSED_56_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_UNUSED_56_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_NAT_TID",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_TID_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_TID_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_TID_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_TID_QW,
      ._desc = "CQ input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_NAT_MDD_EN",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_MDD_EN_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_MDD_EN_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_MDD_EN_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_MDD_EN_QW,
      ._desc = "CQ input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_NAT_TFIELDS",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_TFIELDS_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_TFIELDS_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_TFIELDS_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_TFIELDS_QW,
      ._desc = "CQ input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_NAT_VALID",
      ._bpos = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_VALID_BP,
      ._mask = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_VALID_MASK,
      ._rval = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_VALID_MASK,
      ._index = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_I_CQ_NAT_VALID_QW,
      ._desc = "CQ input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_detail[] = {
    { ._name = "UNUSED_145_110",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_UNUSED_145_110_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_UNUSED_145_110_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSTDATA_QW2 & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_UNUSED_145_110_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_UNUSED_145_110_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_detail[] = {
    { ._name = "UNUSED_145_110",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_UNUSED_145_110_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_UNUSED_145_110_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_UNUSED_145_110_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_UNUSED_145_110_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_BTE_TID",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_TID_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_TID_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_TID_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_TID_QW,
      ._desc = "BTE output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_BTE_PI_CFG",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_PI_CFG_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_PI_CFG_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_PI_CFG_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_PI_CFG_QW,
      ._desc = "BTE output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_BTE_TC",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_TC_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_TC_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_TC_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_TC_QW,
      ._desc = "BTE output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_BTE_ADDR",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_ADDR_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_ADDR_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_ADDR_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_R_Q_NAT_BTE_ADDR_QW,
      ._desc = "BTE output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_bte_req_rsp_4_lo_nat_detail[] = {
    { ._name = "R_Q_NAT_BTE_ADDR",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_ADDR_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_ADDR_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_ADDR_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_ADDR_QW,
      ._desc = "BTE output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_BTE_ERRORS",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_ERRORS_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_ERRORS_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_ERRORS_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_ERRORS_QW,
      ._desc = "BTE output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NAT_BTE_VALID",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_VALID_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_VALID_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_VALID_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_R_Q_NAT_BTE_VALID_QW,
      ._desc = "BTE output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_NAT_TID",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_TID_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_TID_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_TID_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_TID_QW,
      ._desc = "BTE input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_NAT_MDH",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_MDH_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_MDH_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_MDH_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_MDH_QW,
      ._desc = "BTE input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_NAT_PTAG",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_PTAG_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_PTAG_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_PTAG_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_PTAG_QW,
      ._desc = "BTE input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_NAT_ADDR",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_ADDR_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_ADDR_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_ADDR_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_ADDR_QW,
      ._desc = "BTE input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_NAT_VALID",
      ._bpos = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_VALID_BP,
      ._mask = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_VALID_MASK,
      ._rval = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_VALID_MASK,
      ._index = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_I_BTE_NAT_VALID_QW,
      ._desc = "BTE input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_power_down_ff_hi_nat_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_POWER_DOWN_BP,
      ._mask = AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_POWER_DOWN_MASK,
      ._rval = AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSTDATA_QW2 & AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_POWER_DOWN_MASK,
      ._index = AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_power_down_ff_mid_nat_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_POWER_DOWN_BP,
      ._mask = AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_POWER_DOWN_MASK,
      ._rval = AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_RSTDATA_QW1 & AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_POWER_DOWN_MASK,
      ._index = AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_nat_power_down_ff_lo_nat_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_POWER_DOWN_BP,
      ._mask = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_POWER_DOWN_MASK,
      ._rval = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_RSTDATA & AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_POWER_DOWN_MASK,
      ._index = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_cfg_tbl_ptt_detail[] = {
    { ._name = "PKEY_3",
      ._bpos = AR_NIC_NAT_CFG_TBL_PTT_PKEY_3_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_PTT_PKEY_3_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_PTT_RSTDATA & AR_NIC_NAT_CFG_TBL_PTT_PKEY_3_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_PTT_PKEY_3_QW,
      ._desc = "PKey N+3",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "PKEY_2",
      ._bpos = AR_NIC_NAT_CFG_TBL_PTT_PKEY_2_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_PTT_PKEY_2_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_PTT_RSTDATA & AR_NIC_NAT_CFG_TBL_PTT_PKEY_2_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_PTT_PKEY_2_QW,
      ._desc = "PKey N+2",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "PKEY_1",
      ._bpos = AR_NIC_NAT_CFG_TBL_PTT_PKEY_1_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_PTT_PKEY_1_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_PTT_RSTDATA & AR_NIC_NAT_CFG_TBL_PTT_PKEY_1_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_PTT_PKEY_1_QW,
      ._desc = "PKey N+1",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "PKEY_0",
      ._bpos = AR_NIC_NAT_CFG_TBL_PTT_PKEY_0_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_PTT_PKEY_0_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_PTT_RSTDATA & AR_NIC_NAT_CFG_TBL_PTT_PKEY_0_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_PTT_PKEY_0_QW,
      ._desc = "PKey N+0",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_cfg_tbl_vmdhcam_detail[] = {
    { ._name = "PTAG",
      ._bpos = AR_NIC_NAT_CFG_TBL_VMDHCAM_PTAG_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_VMDHCAM_PTAG_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_VMDHCAM_RSTDATA & AR_NIC_NAT_CFG_TBL_VMDHCAM_PTAG_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_VMDHCAM_PTAG_QW,
      ._desc = "Ptag for this entry",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "PKEY",
      ._bpos = AR_NIC_NAT_CFG_TBL_VMDHCAM_PKEY_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_VMDHCAM_PKEY_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_VMDHCAM_RSTDATA & AR_NIC_NAT_CFG_TBL_VMDHCAM_PKEY_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_VMDHCAM_PKEY_QW,
      ._desc = "PKey for this entry",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "EN",
      ._bpos = AR_NIC_NAT_CFG_TBL_VMDHCAM_EN_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_VMDHCAM_EN_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_VMDHCAM_RSTDATA & AR_NIC_NAT_CFG_TBL_VMDHCAM_EN_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_VMDHCAM_EN_QW,
      ._desc = "Setting this bit to 1 enables use of this vMDH entry",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = "MDH_BASE",
      ._bpos = AR_NIC_NAT_CFG_TBL_VMDHCAM_MDH_BASE_BP,
      ._mask = AR_NIC_NAT_CFG_TBL_VMDHCAM_MDH_BASE_MASK,
      ._rval = AR_NIC_NAT_CFG_TBL_VMDHCAM_RSTDATA & AR_NIC_NAT_CFG_TBL_VMDHCAM_MDH_BASE_MASK,
      ._index = AR_NIC_NAT_CFG_TBL_VMDHCAM_MDH_BASE_QW,
      ._desc = "MDH Base entry",
      ._type_bitmsk = 0x0000000000002009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_cfg_params_detail[] = {
    { ._name = "BYPASS_CRDTS_MAX",
      ._bpos = AR_NIC_NAT_CFG_PARAMS_BYPASS_CRDTS_MAX_BP,
      ._mask = AR_NIC_NAT_CFG_PARAMS_BYPASS_CRDTS_MAX_MASK,
      ._rval = AR_NIC_NAT_CFG_PARAMS_RSTDATA & AR_NIC_NAT_CFG_PARAMS_BYPASS_CRDTS_MAX_MASK,
      ._index = AR_NIC_NAT_CFG_PARAMS_BYPASS_CRDTS_MAX_QW,
      ._desc = "Credits to flow control translation requests that bypass the IOMMU",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "IOMMU_CRDTS_MAX",
      ._bpos = AR_NIC_NAT_CFG_PARAMS_IOMMU_CRDTS_MAX_BP,
      ._mask = AR_NIC_NAT_CFG_PARAMS_IOMMU_CRDTS_MAX_MASK,
      ._rval = AR_NIC_NAT_CFG_PARAMS_RSTDATA & AR_NIC_NAT_CFG_PARAMS_IOMMU_CRDTS_MAX_MASK,
      ._index = AR_NIC_NAT_CFG_PARAMS_IOMMU_CRDTS_MAX_QW,
      ._desc = "Credits to flow control translation requests to the IOMMU",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_flg_detail[] = {
    { ._name = "PTT_SBE",
      ._bpos = AR_NIC_NAT_ERR_FLG_PTT_SBE_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_PTT_SBE_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_PTT_SBE_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_PTT_SBE_QW,
      ._desc = "SBE on PTT table",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "MDDT_SBE1",
      ._bpos = AR_NIC_NAT_ERR_FLG_MDDT_SBE1_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_MDDT_SBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_MDDT_SBE1_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_MDDT_SBE1_QW,
      ._desc = "SBE on MDD table 1",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "MDDT_SBE0",
      ._bpos = AR_NIC_NAT_ERR_FLG_MDDT_SBE0_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_MDDT_SBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_MDDT_SBE0_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_MDDT_SBE0_QW,
      ._desc = "SBE on MDD table 0",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "PTT_MBE",
      ._bpos = AR_NIC_NAT_ERR_FLG_PTT_MBE_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_PTT_MBE_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_PTT_MBE_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_PTT_MBE_QW,
      ._desc = "MBE on PTT table",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MDDT_MBE1",
      ._bpos = AR_NIC_NAT_ERR_FLG_MDDT_MBE1_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_MDDT_MBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_MDDT_MBE1_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_MDDT_MBE1_QW,
      ._desc = "MBE on MDD table 1",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MDDT_MBE0",
      ._bpos = AR_NIC_NAT_ERR_FLG_MDDT_MBE0_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_MDDT_MBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_MDDT_MBE0_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_MDDT_MBE0_QW,
      ._desc = "MBE on MDD table 0",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MALFORMED_MDD",
      ._bpos = AR_NIC_NAT_ERR_FLG_MALFORMED_MDD_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_MALFORMED_MDD_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_MALFORMED_MDD_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_MALFORMED_MDD_QW,
      ._desc = "MDD configuration error",
      ._type_bitmsk = 0x0000000000020011ull,
      ._access = "RW1"
    },
    { ._name = "VMDHCAM_MULTIHIT",
      ._bpos = AR_NIC_NAT_ERR_FLG_VMDHCAM_MULTIHIT_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_VMDHCAM_MULTIHIT_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_VMDHCAM_MULTIHIT_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_VMDHCAM_MULTIHIT_QW,
      ._desc = "VMDH CAM configuration error",
      ._type_bitmsk = 0x0000000000020011ull,
      ._access = "RW1"
    },
    { ._name = "IOMMU_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_IOMMU_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_IOMMU_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_IOMMU_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_IOMMU_FIFO_UFLW_QW,
      ._desc = "Underflow detected on IOMMU fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "BYPASS_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_BYPASS_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_BYPASS_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_BYPASS_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_BYPASS_FIFO_UFLW_QW,
      ._desc = "Underflow detected on BYPASS fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "BTE_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_BTE_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_BTE_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_BTE_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_BTE_FIFO_UFLW_QW,
      ._desc = "Underflow detected on BTE fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "CQ_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_CQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_CQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_CQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_CQ_FIFO_UFLW_QW,
      ._desc = "Underflow detected on CQ fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RAT_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_RAT_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_RAT_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_RAT_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_RAT_FIFO_UFLW_QW,
      ._desc = "Underflow detected on RAT fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "IOMMU_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_IOMMU_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_IOMMU_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_IOMMU_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_IOMMU_FIFO_OFLW_QW,
      ._desc = "Overflow detected on IOMMU fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "BYPASS_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_BYPASS_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_BYPASS_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_BYPASS_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_BYPASS_FIFO_OFLW_QW,
      ._desc = "Overflow detected on BYPASS fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "BTE_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_BTE_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_BTE_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_BTE_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_BTE_FIFO_OFLW_QW,
      ._desc = "Overflow detected on BTE fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "CQ_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_CQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_CQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_CQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_CQ_FIFO_OFLW_QW,
      ._desc = "Overflow detected on CQ fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RAT_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FLG_RAT_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_RAT_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_RAT_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_RAT_FIFO_OFLW_QW,
      ._desc = "Overflow detected on RAT fifo",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NAT_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_NAT_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NAT_ERR_FLG_RSTDATA & AR_NIC_NAT_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_NAT_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000100011ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_clr_detail[] = {
    { ._name = "PTT_SBE",
      ._bpos = AR_NIC_NAT_ERR_CLR_PTT_SBE_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_PTT_SBE_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_PTT_SBE_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_PTT_SBE_QW,
      ._desc = "SBE on PTT table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MDDT_SBE1",
      ._bpos = AR_NIC_NAT_ERR_CLR_MDDT_SBE1_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_MDDT_SBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_MDDT_SBE1_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_MDDT_SBE1_QW,
      ._desc = "SBE on MDD table 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MDDT_SBE0",
      ._bpos = AR_NIC_NAT_ERR_CLR_MDDT_SBE0_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_MDDT_SBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_MDDT_SBE0_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_MDDT_SBE0_QW,
      ._desc = "SBE on MDD table 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PTT_MBE",
      ._bpos = AR_NIC_NAT_ERR_CLR_PTT_MBE_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_PTT_MBE_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_PTT_MBE_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_PTT_MBE_QW,
      ._desc = "MBE on PTT table",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MDDT_MBE1",
      ._bpos = AR_NIC_NAT_ERR_CLR_MDDT_MBE1_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_MDDT_MBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_MDDT_MBE1_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_MDDT_MBE1_QW,
      ._desc = "MBE on MDD table 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MDDT_MBE0",
      ._bpos = AR_NIC_NAT_ERR_CLR_MDDT_MBE0_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_MDDT_MBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_MDDT_MBE0_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_MDDT_MBE0_QW,
      ._desc = "MBE on MDD table 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MALFORMED_MDD",
      ._bpos = AR_NIC_NAT_ERR_CLR_MALFORMED_MDD_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_MALFORMED_MDD_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_MALFORMED_MDD_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_MALFORMED_MDD_QW,
      ._desc = "MDD configuration error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "VMDHCAM_MULTIHIT",
      ._bpos = AR_NIC_NAT_ERR_CLR_VMDHCAM_MULTIHIT_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_VMDHCAM_MULTIHIT_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_VMDHCAM_MULTIHIT_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_VMDHCAM_MULTIHIT_QW,
      ._desc = "VMDH CAM configuration error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "IOMMU_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_IOMMU_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_IOMMU_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_IOMMU_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_IOMMU_FIFO_UFLW_QW,
      ._desc = "Underflow detected on IOMMU fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BYPASS_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_BYPASS_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_BYPASS_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_BYPASS_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_BYPASS_FIFO_UFLW_QW,
      ._desc = "Underflow detected on BYPASS fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTE_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_BTE_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_BTE_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_BTE_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_BTE_FIFO_UFLW_QW,
      ._desc = "Underflow detected on BTE fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CQ_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_CQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_CQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_CQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_CQ_FIFO_UFLW_QW,
      ._desc = "Underflow detected on CQ fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RAT_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_RAT_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_RAT_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_RAT_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_RAT_FIFO_UFLW_QW,
      ._desc = "Underflow detected on RAT fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "IOMMU_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_IOMMU_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_IOMMU_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_IOMMU_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_IOMMU_FIFO_OFLW_QW,
      ._desc = "Overflow detected on IOMMU fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BYPASS_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_BYPASS_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_BYPASS_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_BYPASS_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_BYPASS_FIFO_OFLW_QW,
      ._desc = "Overflow detected on BYPASS fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTE_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_BTE_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_BTE_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_BTE_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_BTE_FIFO_OFLW_QW,
      ._desc = "Overflow detected on BTE fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CQ_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_CQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_CQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_CQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_CQ_FIFO_OFLW_QW,
      ._desc = "Overflow detected on CQ fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RAT_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_CLR_RAT_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_RAT_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_RAT_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_RAT_FIFO_OFLW_QW,
      ._desc = "Overflow detected on RAT fifo",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NAT_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_NAT_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NAT_ERR_CLR_RSTDATA & AR_NIC_NAT_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_NAT_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_hss_msk_detail[] = {
    { ._name = "PTT_SBE",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_PTT_SBE_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_PTT_SBE_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_PTT_SBE_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_PTT_SBE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_SBE1",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_MDDT_SBE1_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_MDDT_SBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_MDDT_SBE1_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_MDDT_SBE1_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_SBE0",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_MDDT_SBE0_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_MDDT_SBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_MDDT_SBE0_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_MDDT_SBE0_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTT_MBE",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_PTT_MBE_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_PTT_MBE_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_PTT_MBE_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_PTT_MBE_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_MBE1",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_MDDT_MBE1_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_MDDT_MBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_MDDT_MBE1_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_MDDT_MBE1_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_MBE0",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_MDDT_MBE0_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_MDDT_MBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_MDDT_MBE0_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_MDDT_MBE0_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MALFORMED_MDD",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_MALFORMED_MDD_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_MALFORMED_MDD_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_MALFORMED_MDD_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_MALFORMED_MDD_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "VMDHCAM_MULTIHIT",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_VMDHCAM_MULTIHIT_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_VMDHCAM_MULTIHIT_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_VMDHCAM_MULTIHIT_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_VMDHCAM_MULTIHIT_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_IOMMU_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_IOMMU_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_IOMMU_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_IOMMU_FIFO_UFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BYPASS_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_BYPASS_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_BYPASS_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_BYPASS_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_BYPASS_FIFO_UFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_BTE_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_BTE_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_BTE_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_BTE_FIFO_UFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_CQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_CQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_CQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_CQ_FIFO_UFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RAT_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_RAT_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_RAT_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_RAT_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_RAT_FIFO_UFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_IOMMU_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_IOMMU_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_IOMMU_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_IOMMU_FIFO_OFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BYPASS_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_BYPASS_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_BYPASS_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_BYPASS_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_BYPASS_FIFO_OFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_BTE_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_BTE_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_BTE_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_BTE_FIFO_OFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_CQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_CQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_CQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_CQ_FIFO_OFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RAT_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_RAT_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_RAT_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_RAT_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_RAT_FIFO_OFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NAT_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_NAT_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA & AR_NIC_NAT_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_NAT_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_os_msk_detail[] = {
    { ._name = "PTT_SBE",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_PTT_SBE_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_PTT_SBE_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_PTT_SBE_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_PTT_SBE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_SBE1",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_MDDT_SBE1_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_MDDT_SBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_MDDT_SBE1_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_MDDT_SBE1_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_SBE0",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_MDDT_SBE0_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_MDDT_SBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_MDDT_SBE0_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_MDDT_SBE0_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTT_MBE",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_PTT_MBE_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_PTT_MBE_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_PTT_MBE_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_PTT_MBE_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_MBE1",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_MDDT_MBE1_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_MDDT_MBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_MDDT_MBE1_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_MDDT_MBE1_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_MBE0",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_MDDT_MBE0_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_MDDT_MBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_MDDT_MBE0_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_MDDT_MBE0_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MALFORMED_MDD",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_MALFORMED_MDD_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_MALFORMED_MDD_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_MALFORMED_MDD_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_MALFORMED_MDD_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "VMDHCAM_MULTIHIT",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_VMDHCAM_MULTIHIT_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_VMDHCAM_MULTIHIT_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_VMDHCAM_MULTIHIT_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_VMDHCAM_MULTIHIT_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_IOMMU_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_IOMMU_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_IOMMU_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_IOMMU_FIFO_UFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BYPASS_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_BYPASS_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_BYPASS_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_BYPASS_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_BYPASS_FIFO_UFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_BTE_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_BTE_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_BTE_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_BTE_FIFO_UFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_CQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_CQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_CQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_CQ_FIFO_UFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RAT_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_RAT_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_RAT_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_RAT_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_RAT_FIFO_UFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_IOMMU_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_IOMMU_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_IOMMU_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_IOMMU_FIFO_OFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BYPASS_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_BYPASS_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_BYPASS_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_BYPASS_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_BYPASS_FIFO_OFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_BTE_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_BTE_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_BTE_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_BTE_FIFO_OFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_CQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_CQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_CQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_CQ_FIFO_OFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RAT_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_RAT_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_RAT_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_RAT_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_RAT_FIFO_OFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NAT_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_NAT_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NAT_ERR_OS_MSK_RSTDATA & AR_NIC_NAT_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_NAT_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_first_flg_detail[] = {
    { ._name = "PTT_SBE",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_PTT_SBE_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_PTT_SBE_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_PTT_SBE_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_PTT_SBE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_SBE1",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_SBE1_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_SBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_MDDT_SBE1_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_SBE1_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_SBE0",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_SBE0_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_SBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_MDDT_SBE0_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_SBE0_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTT_MBE",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_PTT_MBE_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_PTT_MBE_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_PTT_MBE_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_PTT_MBE_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_MBE1",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_MBE1_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_MBE1_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_MDDT_MBE1_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_MBE1_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MDDT_MBE0",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_MBE0_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_MBE0_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_MDDT_MBE0_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_MDDT_MBE0_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MALFORMED_MDD",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_MALFORMED_MDD_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_MALFORMED_MDD_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_MALFORMED_MDD_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_MALFORMED_MDD_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "VMDHCAM_MULTIHIT",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_VMDHCAM_MULTIHIT_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_VMDHCAM_MULTIHIT_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_VMDHCAM_MULTIHIT_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_VMDHCAM_MULTIHIT_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_IOMMU_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_IOMMU_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_IOMMU_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_IOMMU_FIFO_UFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BYPASS_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_BYPASS_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_BYPASS_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_BYPASS_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_BYPASS_FIFO_UFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_BTE_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_BTE_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_BTE_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_BTE_FIFO_UFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_CQ_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_CQ_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_CQ_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_CQ_FIFO_UFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RAT_FIFO_UFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_RAT_FIFO_UFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_RAT_FIFO_UFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_RAT_FIFO_UFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_RAT_FIFO_UFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_IOMMU_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_IOMMU_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_IOMMU_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_IOMMU_FIFO_OFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BYPASS_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_BYPASS_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_BYPASS_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_BYPASS_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_BYPASS_FIFO_OFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_BTE_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_BTE_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_BTE_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_BTE_FIFO_OFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_CQ_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_CQ_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_CQ_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_CQ_FIFO_OFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RAT_FIFO_OFLW",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_RAT_FIFO_OFLW_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_RAT_FIFO_OFLW_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_RAT_FIFO_OFLW_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_RAT_FIFO_OFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NAT_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_NAT_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_NAT_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_NAT_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_info_mddt0_detail[] = {
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT0_MBE_ADDRESS_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT0_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT0_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT0_MBE_ADDRESS_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT0_MBE_ADDRESS_QW,
      ._desc = "MBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT0_MBE_SYNDROME_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT0_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT0_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT0_MBE_SYNDROME_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT0_MBE_SYNDROME_QW,
      ._desc = "MBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT0_SBE_ADDRESS_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT0_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT0_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT0_SBE_ADDRESS_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT0_SBE_ADDRESS_QW,
      ._desc = "SBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT0_SBE_SYNDROME_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT0_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT0_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT0_SBE_SYNDROME_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT0_SBE_SYNDROME_QW,
      ._desc = "SBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_CREATED_ERROR",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT0_MMR_CREATED_ERROR_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT0_MMR_CREATED_ERROR_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT0_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT0_MMR_CREATED_ERROR_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT0_MMR_CREATED_ERROR_QW,
      ._desc = "MMR read created the MBE Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_info_mddt1_detail[] = {
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT1_MBE_ADDRESS_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT1_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT1_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT1_MBE_ADDRESS_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT1_MBE_ADDRESS_QW,
      ._desc = "MBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT1_MBE_SYNDROME_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT1_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT1_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT1_MBE_SYNDROME_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT1_MBE_SYNDROME_QW,
      ._desc = "MBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT1_SBE_ADDRESS_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT1_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT1_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT1_SBE_ADDRESS_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT1_SBE_ADDRESS_QW,
      ._desc = "SBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT1_SBE_SYNDROME_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT1_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT1_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT1_SBE_SYNDROME_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT1_SBE_SYNDROME_QW,
      ._desc = "SBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_CREATED_ERROR",
      ._bpos = AR_NIC_NAT_ERR_INFO_MDDT1_MMR_CREATED_ERROR_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MDDT1_MMR_CREATED_ERROR_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MDDT1_RSTDATA & AR_NIC_NAT_ERR_INFO_MDDT1_MMR_CREATED_ERROR_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MDDT1_MMR_CREATED_ERROR_QW,
      ._desc = "MMR read created the MBE Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_info_ptt_detail[] = {
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_NAT_ERR_INFO_PTT_MBE_ADDRESS_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_PTT_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_PTT_RSTDATA & AR_NIC_NAT_ERR_INFO_PTT_MBE_ADDRESS_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_PTT_MBE_ADDRESS_QW,
      ._desc = "MBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_NAT_ERR_INFO_PTT_MBE_SYNDROME_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_PTT_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_PTT_RSTDATA & AR_NIC_NAT_ERR_INFO_PTT_MBE_SYNDROME_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_PTT_MBE_SYNDROME_QW,
      ._desc = "MBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_NAT_ERR_INFO_PTT_SBE_ADDRESS_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_PTT_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_PTT_RSTDATA & AR_NIC_NAT_ERR_INFO_PTT_SBE_ADDRESS_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_PTT_SBE_ADDRESS_QW,
      ._desc = "SBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_NAT_ERR_INFO_PTT_SBE_SYNDROME_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_PTT_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_PTT_RSTDATA & AR_NIC_NAT_ERR_INFO_PTT_SBE_SYNDROME_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_PTT_SBE_SYNDROME_QW,
      ._desc = "SBE syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_CREATED_ERROR",
      ._bpos = AR_NIC_NAT_ERR_INFO_PTT_MMR_CREATED_ERROR_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_PTT_MMR_CREATED_ERROR_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_PTT_RSTDATA & AR_NIC_NAT_ERR_INFO_PTT_MMR_CREATED_ERROR_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_PTT_MMR_CREATED_ERROR_QW,
      ._desc = "MMR read created the MBE Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_err_info_malformed_mdd_detail[] = {
    { ._name = "MDH",
      ._bpos = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_MDH_BP,
      ._mask = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_MDH_MASK,
      ._rval = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_RSTDATA & AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_MDH_MASK,
      ._index = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_MDH_QW,
      ._desc = "Memory Domain Handle of offending descriptor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_dbg_errinj_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_NAT_DBG_ERRINJ_ADDRESS_BP,
      ._mask = AR_NIC_NAT_DBG_ERRINJ_ADDRESS_MASK,
      ._rval = AR_NIC_NAT_DBG_ERRINJ_RSTDATA & AR_NIC_NAT_DBG_ERRINJ_ADDRESS_MASK,
      ._index = AR_NIC_NAT_DBG_ERRINJ_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTE",
      ._bpos = AR_NIC_NAT_DBG_ERRINJ_CHECKBYTE_BP,
      ._mask = AR_NIC_NAT_DBG_ERRINJ_CHECKBYTE_MASK,
      ._rval = AR_NIC_NAT_DBG_ERRINJ_RSTDATA & AR_NIC_NAT_DBG_ERRINJ_CHECKBYTE_MASK,
      ._index = AR_NIC_NAT_DBG_ERRINJ_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RAMSELECT",
      ._bpos = AR_NIC_NAT_DBG_ERRINJ_RAMSELECT_BP,
      ._mask = AR_NIC_NAT_DBG_ERRINJ_RAMSELECT_MASK,
      ._rval = AR_NIC_NAT_DBG_ERRINJ_RSTDATA & AR_NIC_NAT_DBG_ERRINJ_RAMSELECT_MASK,
      ._index = AR_NIC_NAT_DBG_ERRINJ_RAMSELECT_QW,
      ._desc = "This field identifies the memory in which errors will be injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_NAT_DBG_ERRINJ_TRIGGERED_BP,
      ._mask = AR_NIC_NAT_DBG_ERRINJ_TRIGGERED_MASK,
      ._rval = AR_NIC_NAT_DBG_ERRINJ_RSTDATA & AR_NIC_NAT_DBG_ERRINJ_TRIGGERED_MASK,
      ._index = AR_NIC_NAT_DBG_ERRINJ_TRIGGERED_QW,
      ._desc = "Error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_NAT_DBG_ERRINJ_MODE_BP,
      ._mask = AR_NIC_NAT_DBG_ERRINJ_MODE_MASK,
      ._rval = AR_NIC_NAT_DBG_ERRINJ_RSTDATA & AR_NIC_NAT_DBG_ERRINJ_MODE_MASK,
      ._index = AR_NIC_NAT_DBG_ERRINJ_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_NAT_DBG_ERRINJ_ENABLE_BP,
      ._mask = AR_NIC_NAT_DBG_ERRINJ_ENABLE_MASK,
      ._rval = AR_NIC_NAT_DBG_ERRINJ_RSTDATA & AR_NIC_NAT_DBG_ERRINJ_ENABLE_MASK,
      ._index = AR_NIC_NAT_DBG_ERRINJ_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_dbg_crdts_detail[] = {
    { ._name = "IOMMU_CRDTS",
      ._bpos = AR_NIC_NAT_DBG_CRDTS_IOMMU_CRDTS_BP,
      ._mask = AR_NIC_NAT_DBG_CRDTS_IOMMU_CRDTS_MASK,
      ._rval = AR_NIC_NAT_DBG_CRDTS_RSTDATA & AR_NIC_NAT_DBG_CRDTS_IOMMU_CRDTS_MASK,
      ._index = AR_NIC_NAT_DBG_CRDTS_IOMMU_CRDTS_QW,
      ._desc = "Number of credits in use on the IOMMU path",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "BYPASS_CRDTS",
      ._bpos = AR_NIC_NAT_DBG_CRDTS_BYPASS_CRDTS_BP,
      ._mask = AR_NIC_NAT_DBG_CRDTS_BYPASS_CRDTS_MASK,
      ._rval = AR_NIC_NAT_DBG_CRDTS_RSTDATA & AR_NIC_NAT_DBG_CRDTS_BYPASS_CRDTS_MASK,
      ._index = AR_NIC_NAT_DBG_CRDTS_BYPASS_CRDTS_QW,
      ._desc = "Number of credits in use on the BYPASS path",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_nat_dbg_trans_errs_detail[] = {
    { ._name = "ERR15",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR15_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR15_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR15_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR15_QW,
      ._desc = "The least recent NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR14",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR14_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR14_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR14_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR14_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR13",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR13_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR13_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR13_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR13_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR12",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR12_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR12_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR12_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR12_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR11",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR11_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR11_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR11_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR11_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR10",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR10_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR10_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR10_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR10_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR9",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR9_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR9_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR9_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR9_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR8",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR8_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR8_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR8_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR8_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR7",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR7_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR7_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR7_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR7_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR6",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR6_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR6_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR6_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR6_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR5",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR5_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR5_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR5_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR5_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR4",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR4_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR4_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR4_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR4_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR3",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR3_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR3_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR3_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR3_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR2",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR2_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR2_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR2_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR2_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR1",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR1_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR1_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR1_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR1_QW,
      ._desc = "NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "ERR0",
      ._bpos = AR_NIC_NAT_DBG_TRANS_ERRS_ERR0_BP,
      ._mask = AR_NIC_NAT_DBG_TRANS_ERRS_ERR0_MASK,
      ._rval = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA & AR_NIC_NAT_DBG_TRANS_ERRS_ERR0_MASK,
      ._index = AR_NIC_NAT_DBG_TRANS_ERRS_ERR0_QW,
      ._desc = "The most recent NAT translation error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR NAT DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_rval[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_RSTDATA_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_rmsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_RSTMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_RSTMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_wrmsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_WRTMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_WRTMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_rdmsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_RDMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_RDMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_xsmsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_XSMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_XSMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_wsemsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_WSEMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_WSEMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_rsemsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_RSEMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_RSEMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_w1smsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_W1SMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_W1SMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_w1cmsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_W1CMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_W1CMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_wrstmsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_WRSTMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_WRSTMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_hwwmsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_HWWMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_HWWMASK_QW1
};
static const uint64_t __ar_nic_nat_cfg_tbl_mdd_hwrmsk[2] = {
	AR_NIC_NAT_CFG_TBL_MDD_HWRMASK_QW0,
	AR_NIC_NAT_CFG_TBL_MDD_HWRMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_rval[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSTDATA_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_rmsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSTMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_wrmsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_WRTMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_rdmsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RDMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RDMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_xsmsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_XSMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_XSMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_wsemsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_WSEMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_rsemsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSEMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_w1smsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_W1SMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_w1cmsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_W1CMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_wrstmsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_WRSTMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_hwwmsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_HWWMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_hi_nat_hwrmsk[3] = {
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_HWRMASK_QW1,
	AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_rval[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_rmsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_wrmsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_rdmsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RDMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_xsmsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_XSMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_wsemsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_rsemsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_w1smsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_w1cmsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_wrstmsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_hwwmsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_mmr_ring_0_mid_nat_hwrmsk[2] = {
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_rval[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSTDATA_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSTDATA_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_rmsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSTMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSTMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_wrmsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_WRTMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_WRTMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_rdmsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RDMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RDMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RDMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_xsmsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_XSMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_XSMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_XSMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_wsemsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_WSEMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_WSEMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_rsemsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSEMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSEMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_w1smsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_W1SMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_W1SMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_w1cmsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_W1CMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_W1CMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_wrstmsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_WRSTMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_hwwmsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_HWWMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_HWWMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_hi_nat_hwrmsk[3] = {
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_HWRMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_HWRMASK_QW1,
	AR_NIC_NAT_ERR_FLG_1_HI_NAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_rval[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_rmsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_wrmsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_WRTMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_rdmsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_RDMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_RDMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_xsmsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_XSMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_XSMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_wsemsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_WSEMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_rsemsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSEMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_w1smsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_W1SMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_w1cmsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_W1CMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_wrstmsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_hwwmsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_HWWMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_nat_err_flg_1_mid_nat_hwrmsk[2] = {
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_HWRMASK_QW0,
	AR_NIC_NAT_ERR_FLG_1_MID_NAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_rval[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSTDATA_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_rmsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSTMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_wrmsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_WRTMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_rdmsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RDMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RDMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_xsmsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_XSMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_XSMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_wsemsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_WSEMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_rsemsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSEMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_w1smsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_W1SMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_w1cmsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_W1CMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_wrstmsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_WRSTMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_hwwmsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_HWWMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_hwrmsk[3] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_HWRMASK_QW1,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_rval[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_rmsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_wrmsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_rdmsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RDMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_xsmsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_XSMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_wsemsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_rsemsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_w1smsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_w1cmsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_wrstmsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_hwwmsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_hwrmsk[2] = {
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_rval[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSTDATA_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_rmsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSTMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_wrmsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_WRTMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_rdmsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RDMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RDMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_xsmsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_XSMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_XSMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_wsemsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_WSEMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_rsemsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSEMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_w1smsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_W1SMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_w1cmsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_W1CMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_wrstmsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_WRSTMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_hwwmsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_HWWMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_hwrmsk[3] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_HWRMASK_QW1,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_rval[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_rmsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_wrmsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_rdmsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RDMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_xsmsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_XSMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_wsemsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_rsemsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_w1smsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_w1cmsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_wrstmsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_hwwmsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_hwrmsk[2] = {
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_rval[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSTDATA_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_rmsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSTMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_wrmsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_WRTMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_rdmsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RDMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RDMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_xsmsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_XSMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_XSMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_wsemsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_WSEMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_rsemsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSEMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_w1smsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_W1SMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_w1cmsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_W1CMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_wrstmsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_WRSTMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_hwwmsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_HWWMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_hwrmsk[3] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_HWRMASK_QW1,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_rval[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_rmsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_wrmsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_rdmsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RDMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_xsmsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_XSMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_wsemsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_rsemsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_w1smsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_w1cmsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_wrstmsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_hwwmsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_hwrmsk[2] = {
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_rval[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSTDATA_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_rmsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSTMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_wrmsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_WRTMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_rdmsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RDMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RDMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_xsmsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_XSMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_XSMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_wsemsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_WSEMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_rsemsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSEMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_w1smsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_W1SMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_w1cmsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_W1CMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_wrstmsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_WRSTMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_hwwmsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_HWWMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_hi_nat_hwrmsk[3] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_HWRMASK_QW1,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_rval[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_RSTDATA_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_rmsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_RSTMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_wrmsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_WRTMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_rdmsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_RDMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_RDMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_xsmsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_XSMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_XSMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_wsemsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_WSEMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_rsemsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_RSEMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_w1smsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_W1SMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_w1cmsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_W1CMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_wrstmsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_WRSTMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_hwwmsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_HWWMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_nat_nat_power_down_ff_mid_nat_hwrmsk[2] = {
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_HWRMASK_QW0,
	AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT_HWRMASK_QW1
};

/*
 *  AR NAT MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_nat_cfg_tbl_mdd = {
    ._name = "AR_NIC_NAT_CFG_TBL_MDD",
    ._addr = AR_NIC_NAT_CFG_TBL_MDD,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_cfg_tbl_mdd_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 16,
    ._depth = 4096,
      ._type_bitmsk = 0x0000000000002009ull,
    ._info = __ar_nic_nat_cfg_tbl_mdd_detail
};
static const cmmr_br_t __ar_nic_nat_nat_mmr_ring_0_hi_nat = {
    ._name = "AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT",
    ._addr = AR_NIC_NAT_NAT_MMR_RING_0_HI_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_hi_nat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_mmr_ring_0_hi_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_mmr_ring_0_mid_nat = {
    ._name = "AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT",
    ._addr = AR_NIC_NAT_NAT_MMR_RING_0_MID_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_mmr_ring_0_mid_nat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_mmr_ring_0_mid_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_mmr_ring_0_lo_nat = {
    ._name = "AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT",
    ._addr = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT,
    ._rval.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_NAT_MMR_RING_0_LO_NAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_mmr_ring_0_lo_nat_detail
};
static const cmmr_br_t __ar_nic_nat_err_flg_1_hi_nat = {
    ._name = "AR_NIC_NAT_ERR_FLG_1_HI_NAT",
    ._addr = AR_NIC_NAT_ERR_FLG_1_HI_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_hi_nat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_err_flg_1_hi_nat_detail
};
static const cmmr_br_t __ar_nic_nat_err_flg_1_mid_nat = {
    ._name = "AR_NIC_NAT_ERR_FLG_1_MID_NAT",
    ._addr = AR_NIC_NAT_ERR_FLG_1_MID_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_err_flg_1_mid_nat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_err_flg_1_mid_nat_detail
};
static const cmmr_br_t __ar_nic_nat_err_flg_1_lo_nat = {
    ._name = "AR_NIC_NAT_ERR_FLG_1_LO_NAT",
    ._addr = AR_NIC_NAT_ERR_FLG_1_LO_NAT,
    ._rval.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_FLG_1_LO_NAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_err_flg_1_lo_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_rat_req_rsp_2_hi_nat = {
    ._name = "AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT",
    ._addr = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_HI_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_hi_nat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_rat_req_rsp_2_hi_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_rat_req_rsp_2_mid_nat = {
    ._name = "AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT",
    ._addr = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_MID_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_rat_req_rsp_2_mid_nat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_rat_req_rsp_2_mid_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_rat_req_rsp_2_lo_nat = {
    ._name = "AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT",
    ._addr = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT,
    ._rval.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_NAT_RAT_REQ_RSP_2_LO_NAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_rat_req_rsp_2_lo_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_cq_req_rsp_3_hi_nat = {
    ._name = "AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT",
    ._addr = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_HI_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_hi_nat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_cq_req_rsp_3_hi_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_cq_req_rsp_3_mid_nat = {
    ._name = "AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT",
    ._addr = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_MID_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_cq_req_rsp_3_mid_nat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_cq_req_rsp_3_mid_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_cq_req_rsp_3_lo_nat = {
    ._name = "AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT",
    ._addr = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT,
    ._rval.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_NAT_CQ_REQ_RSP_3_LO_NAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_cq_req_rsp_3_lo_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_bte_req_rsp_4_hi_nat = {
    ._name = "AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT",
    ._addr = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_HI_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_hi_nat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_bte_req_rsp_4_hi_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_bte_req_rsp_4_mid_nat = {
    ._name = "AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT",
    ._addr = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_MID_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_bte_req_rsp_4_mid_nat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_bte_req_rsp_4_mid_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_bte_req_rsp_4_lo_nat = {
    ._name = "AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT",
    ._addr = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT,
    ._rval.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_NAT_BTE_REQ_RSP_4_LO_NAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_bte_req_rsp_4_lo_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_power_down_ff_hi_nat = {
    ._name = "AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT",
    ._addr = AR_NIC_NAT_NAT_POWER_DOWN_FF_HI_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_hi_nat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_power_down_ff_hi_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_power_down_ff_mid_nat = {
    ._name = "AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT",
    ._addr = AR_NIC_NAT_NAT_POWER_DOWN_FF_MID_NAT,
    ._rval.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_nat_nat_power_down_ff_mid_nat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_power_down_ff_mid_nat_detail
};
static const cmmr_br_t __ar_nic_nat_nat_power_down_ff_lo_nat = {
    ._name = "AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT",
    ._addr = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT,
    ._rval.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_NAT_POWER_DOWN_FF_LO_NAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_nat_power_down_ff_lo_nat_detail
};
static const cmmr_br_t __ar_nic_nat_cfg_tbl_ptt = {
    ._name = "AR_NIC_NAT_CFG_TBL_PTT",
    ._addr = AR_NIC_NAT_CFG_TBL_PTT,
    ._rval.val = AR_NIC_NAT_CFG_TBL_PTT_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_CFG_TBL_PTT_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_CFG_TBL_PTT_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_CFG_TBL_PTT_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_CFG_TBL_PTT_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_CFG_TBL_PTT_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_CFG_TBL_PTT_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_CFG_TBL_PTT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_CFG_TBL_PTT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_CFG_TBL_PTT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_CFG_TBL_PTT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_CFG_TBL_PTT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 64,
      ._type_bitmsk = 0x0000000000002009ull,
    ._info = __ar_nic_nat_cfg_tbl_ptt_detail
};
static const cmmr_br_t __ar_nic_nat_cfg_tbl_vmdhcam = {
    ._name = "AR_NIC_NAT_CFG_TBL_VMDHCAM",
    ._addr = AR_NIC_NAT_CFG_TBL_VMDHCAM,
    ._rval.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_CFG_TBL_VMDHCAM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4,
      ._type_bitmsk = 0x0000000000002009ull,
    ._info = __ar_nic_nat_cfg_tbl_vmdhcam_detail
};
static const cmmr_br_t __ar_nic_nat_cfg_params = {
    ._name = "AR_NIC_NAT_CFG_PARAMS",
    ._addr = AR_NIC_NAT_CFG_PARAMS,
    ._rval.val = AR_NIC_NAT_CFG_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_CFG_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_CFG_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_CFG_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_CFG_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_CFG_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_CFG_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_CFG_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_CFG_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_CFG_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_CFG_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_CFG_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_cfg_params_detail
};
static const cmmr_br_t __ar_nic_nat_err_flg = {
    ._name = "AR_NIC_NAT_ERR_FLG",
    ._addr = AR_NIC_NAT_ERR_FLG,
    ._rval.val = AR_NIC_NAT_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x000000000013c811ull,
    ._info = __ar_nic_nat_err_flg_detail
};
static const cmmr_br_t __ar_nic_nat_err_clr = {
    ._name = "AR_NIC_NAT_ERR_CLR",
    ._addr = AR_NIC_NAT_ERR_CLR,
    ._rval.val = AR_NIC_NAT_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_nat_err_clr_detail
};
static const cmmr_br_t __ar_nic_nat_err_hss_msk = {
    ._name = "AR_NIC_NAT_ERR_HSS_MSK",
    ._addr = AR_NIC_NAT_ERR_HSS_MSK,
    ._rval.val = AR_NIC_NAT_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_nat_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_nat_err_os_msk = {
    ._name = "AR_NIC_NAT_ERR_OS_MSK",
    ._addr = AR_NIC_NAT_ERR_OS_MSK,
    ._rval.val = AR_NIC_NAT_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_nat_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_nat_err_first_flg = {
    ._name = "AR_NIC_NAT_ERR_FIRST_FLG",
    ._addr = AR_NIC_NAT_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_NAT_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_nat_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_nat_err_info_mddt0 = {
    ._name = "AR_NIC_NAT_ERR_INFO_MDDT0",
    ._addr = AR_NIC_NAT_ERR_INFO_MDDT0,
    ._rval.val = AR_NIC_NAT_ERR_INFO_MDDT0_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_INFO_MDDT0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_err_info_mddt0_detail
};
static const cmmr_br_t __ar_nic_nat_err_info_mddt1 = {
    ._name = "AR_NIC_NAT_ERR_INFO_MDDT1",
    ._addr = AR_NIC_NAT_ERR_INFO_MDDT1,
    ._rval.val = AR_NIC_NAT_ERR_INFO_MDDT1_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_INFO_MDDT1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_err_info_mddt1_detail
};
static const cmmr_br_t __ar_nic_nat_err_info_ptt = {
    ._name = "AR_NIC_NAT_ERR_INFO_PTT",
    ._addr = AR_NIC_NAT_ERR_INFO_PTT,
    ._rval.val = AR_NIC_NAT_ERR_INFO_PTT_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_INFO_PTT_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_INFO_PTT_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_INFO_PTT_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_INFO_PTT_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_INFO_PTT_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_INFO_PTT_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_INFO_PTT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_INFO_PTT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_INFO_PTT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_INFO_PTT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_INFO_PTT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_err_info_ptt_detail
};
static const cmmr_br_t __ar_nic_nat_err_info_malformed_mdd = {
    ._name = "AR_NIC_NAT_ERR_INFO_MALFORMED_MDD",
    ._addr = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD,
    ._rval.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_ERR_INFO_MALFORMED_MDD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_err_info_malformed_mdd_detail
};
static const cmmr_br_t __ar_nic_nat_dbg_errinj = {
    ._name = "AR_NIC_NAT_DBG_ERRINJ",
    ._addr = AR_NIC_NAT_DBG_ERRINJ,
    ._rval.val = AR_NIC_NAT_DBG_ERRINJ_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_DBG_ERRINJ_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_DBG_ERRINJ_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_DBG_ERRINJ_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_DBG_ERRINJ_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_DBG_ERRINJ_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_DBG_ERRINJ_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_DBG_ERRINJ_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_DBG_ERRINJ_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_DBG_ERRINJ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_DBG_ERRINJ_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_DBG_ERRINJ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_dbg_errinj_detail
};
static const cmmr_br_t __ar_nic_nat_dbg_crdts = {
    ._name = "AR_NIC_NAT_DBG_CRDTS",
    ._addr = AR_NIC_NAT_DBG_CRDTS,
    ._rval.val = AR_NIC_NAT_DBG_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_DBG_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_DBG_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_DBG_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_DBG_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_DBG_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_DBG_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_DBG_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_DBG_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_DBG_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_DBG_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_DBG_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_nat_dbg_crdts_detail
};
static const cmmr_br_t __ar_nic_nat_dbg_trans_errs = {
    ._name = "AR_NIC_NAT_DBG_TRANS_ERRS",
    ._addr = AR_NIC_NAT_DBG_TRANS_ERRS,
    ._rval.val = AR_NIC_NAT_DBG_TRANS_ERRS_RSTDATA,
    ._rmsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_RSTMASK,
    ._wrmsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_WRTMASK,
    ._rdmsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_RDMASK,
    ._xsmsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_XSMASK,
    ._wsemsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_WSEMASK,
    ._rsemsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_RSEMASK,
    ._w1smsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NAT_DBG_TRANS_ERRS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_nat_dbg_trans_errs_detail
};

/*
 *  INSTALL AR NAT MMRS
 */
static const cmmr_br_t* __ar_nat_mmrs[] = {
    &__ar_nic_nat_cfg_tbl_mdd,
    &__ar_nic_nat_cfg_tbl_ptt,
    &__ar_nic_nat_cfg_tbl_vmdhcam,
    &__ar_nic_nat_cfg_params,
    &__ar_nic_nat_err_flg,
    &__ar_nic_nat_err_clr,
    &__ar_nic_nat_err_hss_msk,
    &__ar_nic_nat_err_os_msk,
    &__ar_nic_nat_err_first_flg,
    &__ar_nic_nat_err_info_mddt0,
    &__ar_nic_nat_err_info_mddt1,
    &__ar_nic_nat_err_info_ptt,
    &__ar_nic_nat_err_info_malformed_mdd,
    &__ar_nic_nat_dbg_errinj,
    &__ar_nic_nat_dbg_crdts,
    &__ar_nic_nat_dbg_trans_errs,
    NULL
};

/*
 *  INSTALL AR NAT LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_nat_enc_mmrs[] = {
    &__ar_nic_nat_nat_mmr_ring_0_hi_nat,
    &__ar_nic_nat_nat_mmr_ring_0_mid_nat,
    &__ar_nic_nat_nat_mmr_ring_0_lo_nat,
    &__ar_nic_nat_err_flg_1_hi_nat,
    &__ar_nic_nat_err_flg_1_mid_nat,
    &__ar_nic_nat_err_flg_1_lo_nat,
    &__ar_nic_nat_nat_rat_req_rsp_2_hi_nat,
    &__ar_nic_nat_nat_rat_req_rsp_2_mid_nat,
    &__ar_nic_nat_nat_rat_req_rsp_2_lo_nat,
    &__ar_nic_nat_nat_cq_req_rsp_3_hi_nat,
    &__ar_nic_nat_nat_cq_req_rsp_3_mid_nat,
    &__ar_nic_nat_nat_cq_req_rsp_3_lo_nat,
    &__ar_nic_nat_nat_bte_req_rsp_4_hi_nat,
    &__ar_nic_nat_nat_bte_req_rsp_4_mid_nat,
    &__ar_nic_nat_nat_bte_req_rsp_4_lo_nat,
    &__ar_nic_nat_nat_power_down_ff_hi_nat,
    &__ar_nic_nat_nat_power_down_ff_mid_nat,
    &__ar_nic_nat_nat_power_down_ff_lo_nat,
    NULL
};

#endif
