/******************************************************************************
 * COPYRIGHT CRAY INC. ar_iommu_detailed_mmrs_h.h
 * FILE: ar_iommu_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/
/**
 * @file ar_iommu_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:38:58 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_iommu_mmr_values.h and ar_iommu_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_iommu_mmr_values.h"

#ifndef _AR_IOMMU_DETAILED_MMRS_H_H_
#define _AR_IOMMU_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_iommu_mmrs[];	/* IOMMU Array */

/*
 *  AR IOMMU MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_iommu_cfg_tbl_cq_detail[] = {
    { ._name = "STORE_DATA",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_STORE_DATA_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_STORE_DATA_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW1 & AR_NIC_IOMMU_CFG_TBL_CQ_STORE_DATA_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_STORE_DATA_QW,
      ._desc = "Completion Wait Store Data",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RW"
    },
    { ._name = "CMD",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_CMD_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_CMD_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_CMD_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_CMD_QW,
      ._desc = "Command Type(all cmd entries)",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "COMP_WAIT_TC_SD",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_TC_SD_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_TC_SD_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_TC_SD_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_TC_SD_QW,
      ._desc = "TCR to be used for RAT Put/IRQ Requests(Completion_Wait)",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "COMP_WAIT_TC_FLUSH",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_TC_FLUSH_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_TC_FLUSH_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_TC_FLUSH_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_TC_FLUSH_QW,
      ._desc = "TCR to be used for RAT Flush Requests(Completion Wait)",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "COMP_WAIT_STALL",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_STALL_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_STALL_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_STALL_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_STALL_QW,
      ._desc = "Completion Wait stall command queue execution until this Completion Wait command completes",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "COMP_WAIT_INT_EN",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_INT_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_INT_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_INT_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_INT_EN_QW,
      ._desc = "Completion Wait Interrupt Enable",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "COMP_WAIT_RSP_EN",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_RSP_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_RSP_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_RSP_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_RSP_EN_QW,
      ._desc = "Completion Wait Response Enable",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "COMP_WAIT_RSP_ADDR",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_RSP_ADDR_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_RSP_ADDR_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_RSP_ADDR_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_COMP_WAIT_RSP_ADDR_QW,
      ._desc = "Completion Wait Response Address(HPA)",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "INVAL_IOMMU_TC",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_TC_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_TC_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_TC_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_TC_QW,
      ._desc = "Invalidate IOMMU Pages Translation Context Register ID",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "INVAL_IOMMU_PDE",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_PDE_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_PDE_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_PDE_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_PDE_QW,
      ._desc = "Invalidate IOMMU Pages Directory Entry Flag",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "INVAL_IOMMU_ELS",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_ELS_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_ELS_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_ELS_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_ELS_QW,
      ._desc = "Invalidate IOMMU Pages Entry Level Select",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "INVAL_IOMMU_PG_ADDR",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_PG_ADDR_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_PG_ADDR_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_PG_ADDR_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_IOMMU_PG_ADDR_QW,
      ._desc = "Invalidate IOMMU Pages address[47:00]",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = "INVAL_MDD",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_MDD_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_MDD_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0 & AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_MDD_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_CQ_INVAL_MDD_QW,
      ._desc = "Invalidate MDD ID",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_82",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_UNUSED_145_82_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_UNUSED_145_82_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_UNUSED_145_82_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_UNUSED_145_82_QW,
      ._desc = "MBZ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_detail[] = {
    { ._name = "UNUSED_127_98",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_UNUSED_127_98_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_UNUSED_127_98_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_UNUSED_127_98_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_UNUSED_127_98_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_EVENTS",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_EVENTS_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_EVENTS_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_EVENTS_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_EVENTS_QW,
      ._desc = "Number of Events logged",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTE_INV",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTE_INV_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTE_INV_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTE_INV_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTE_INV_QW,
      ._desc = "Number of Page Table Entry Cache entry invalidations",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTE_RF",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTE_RF_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTE_RF_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTE_RF_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTE_RF_QW,
      ._desc = "Number of Page Table Entry Re-fetches for PTE Not Present",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_OFB_CA",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_OFB_CA_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_OFB_CA_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_OFB_CA_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_OFB_CA_QW,
      ._desc = "Number of stalls for Page Table Entry Cache Outstanding Fetch Buffer allocation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_STALL_PTEC_CA",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_STALL_PTEC_CA_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_STALL_PTEC_CA_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_STALL_PTEC_CA_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_STALL_PTEC_CA_QW,
      ._desc = "Number of stalls for Page Table Entry Cache Can't allocate an entry(All ways pending)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTEC_INVAL",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_INVAL_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_INVAL_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_INVAL_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_INVAL_QW,
      ._desc = "Page Table Entry Cache Invalidations",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTEC_EVICT",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_EVICT_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_EVICT_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_EVICT_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_EVICT_QW,
      ._desc = "Page Table Entry Cache Evictions",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTEC_MISS",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_MISS_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_MISS_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_MISS_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_MISS_QW,
      ._desc = "Page Table Entry Cache Misses",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTEC_HIT",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_HIT_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_HIT_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_HIT_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_PTEC_HIT_QW,
      ._desc = "Page Table Entry Cache Hits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOPF_ACCESS",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_ACCESS_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_ACCESS_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_ACCESS_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_ACCESS_QW,
      ._desc = "IO Page Fault Incorrect Access Permissions",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOPF_TC",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_TC_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_TC_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_TC_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_TC_QW,
      ._desc = "IO Page Fault Invalid Translation Context",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOPF_PTE",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_PTE_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_PTE_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_PTE_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IOPF_PTE_QW,
      ._desc = "IO Page Fault Invalid Page Table Entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TR_2LVL_RSP",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_2LVL_RSP_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_2LVL_RSP_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_2LVL_RSP_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_2LVL_RSP_QW,
      ._desc = "Two Level Translation Requests completed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TR_1LVL_RSP",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_1LVL_RSP_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_1LVL_RSP_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_1LVL_RSP_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_1LVL_RSP_QW,
      ._desc = "One Level Translation Requests completed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_TR_RCVD",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_RCVD_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_RCVD_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_RCVD_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_TR_RCVD_QW,
      ._desc = "Translation Requests Received",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IDLE",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IDLE_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IDLE_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IDLE_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_CNTR_IDLE_QW,
      ._desc = "IOMMU Idle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_35",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_UNUSED_81_35_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_UNUSED_81_35_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_UNUSED_81_35_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_UNUSED_81_35_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_rspmon_ring_irq_0_lo_iommu_detail[] = {
    { ._name = "UNUSED_81_35",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_UNUSED_81_35_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_UNUSED_81_35_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_UNUSED_81_35_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_UNUSED_81_35_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMU_PI_OS_IRQ",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_MMU_PI_OS_IRQ_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_MMU_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_MMU_PI_OS_IRQ_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_MMU_PI_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMU_LB_HSS_IRQ",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_MMU_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_MMU_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_MMU_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_MMU_LB_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_IOMMU_RSPMON_RING_WRACK",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_R_Q_IOMMU_RSPMON_RING_WRACK_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_R_Q_IOMMU_RSPMON_RING_WRACK_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_R_Q_IOMMU_RSPMON_RING_WRACK_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_R_Q_IOMMU_RSPMON_RING_WRACK_QW,
      ._desc = "Rspmon MMR ring write ack",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_IOMMU_RSPMON_RING",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_R_Q_IOMMU_RSPMON_RING_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_R_Q_IOMMU_RSPMON_RING_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_R_Q_IOMMU_RSPMON_RING_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_R_Q_IOMMU_RSPMON_RING_QW,
      ._desc = "Rspmon MMR ring out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSPMON_IOMMU_RING",
      ._bpos = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_Q_RSPMON_IOMMU_RING_BP,
      ._mask = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_Q_RSPMON_IOMMU_RING_MASK,
      ._rval = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_Q_RSPMON_IOMMU_RING_MASK,
      ._index = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_Q_RSPMON_IOMMU_RING_QW,
      ._desc = "Rspmon MMR ring in",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_flg_1_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_UNUSED_145_128_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_UNUSED_145_128_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_UNUSED_145_128_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_UNUSED_145_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_flg_1_mid_iommu_detail[] = {
    { ._name = "UNUSED_127_92",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_UNUSED_127_92_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_UNUSED_127_92_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_UNUSED_127_92_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_UNUSED_127_92_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EVENT_ILL_CMD_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_ILL_CMD_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_ILL_CMD_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_ILL_CMD_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_ILL_CMD_OF_QW,
      ._desc = "When read as 1, an event log Illegal Command event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EVENT_HW_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_HW_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_HW_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_HW_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_HW_OF_QW,
      ._desc = "When read as 1, an event log Hardware Error event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EVENT_IOPG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_IOPG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_IOPG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_IOPG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_IOPG_OF_QW,
      ._desc = "When read as 1, an event log IO Page Fault event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EVENT_TC_INVAL_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_TC_INVAL_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_TC_INVAL_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_TC_INVAL_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_TC_INVAL_OF_QW,
      ._desc = "When read as 1, an event log TC Invalid event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTE_RSP_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTE_RSP_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTE_RSP_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTE_RSP_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTE_RSP_ERR_QW,
      ._desc = "A PTE Get response was received that did not match a PTE OFB(possibly a stale response after an OFB timeout)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTE_PKT_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTE_PKT_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTE_PKT_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTE_PKT_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTE_PKT_ERR_QW,
      ._desc = "A PTE Get response was received without payload flits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PI_CHN_TO",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PI_CHN_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PI_CHN_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PI_CHN_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PI_CHN_TO_QW,
      ._desc = "A Processor Interface Request or Response channel has stalled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ILLEGAL_CMD",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_ILLEGAL_CMD_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_ILLEGAL_CMD_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_ILLEGAL_CMD_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_ILLEGAL_CMD_QW,
      ._desc = "An illegal command was encountered in the Command Queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_IP_HW_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CQ_IP_HW_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CQ_IP_HW_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CQ_IP_HW_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CQ_IP_HW_ERR_QW,
      ._desc = "The execution of an Invalidate PTE command resulted in a Multiple Bit Error in either the Translation Context Register read, or the PTE Cache read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_CMD_TO",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CQ_CMD_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CQ_CMD_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CQ_CMD_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CQ_CMD_TO_QW,
      ._desc = "A Command Queue Command has not completed before the CQCmd Timer expired",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EVENT_LOG_UF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_LOG_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_LOG_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_LOG_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_LOG_UF_QW,
      ._desc = "The Event Log FIFO underflowed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EVENT_LOG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_LOG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_LOG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_LOG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_EVENT_LOG_OF_QW,
      ._desc = "The Event Log FIFO overflowed(",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_FIFO_UF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSP_FIFO_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSP_FIFO_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSP_FIFO_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSP_FIFO_UF_QW,
      ._desc = "The NPT interface response FIFO underflowed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_FIFO_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSP_FIFO_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSP_FIFO_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSP_FIFO_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSP_FIFO_OF_QW,
      ._desc = "The NPT interface response FIFO overflowed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TR_QUEUE_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_QUEUE_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_QUEUE_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_QUEUE_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_QUEUE_ERR_QW,
      ._desc = "One of the three Translation Request Queues was overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TR_BUF_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUF_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUF_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUF_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUF_OF_QW,
      ._desc = "IOMMU received a new translation request with maximum(32) valid translation requests in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TR_BUF_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUF_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUF_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUF_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUF_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TR_BUFF_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUFF_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUFF_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUFF_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TR_BUFF_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC_REG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TC_REG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TC_REG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TC_REG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TC_REG_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TC_REG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TC_REG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TC_REG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TC_REG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_TC_REG_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CMD_QUEUE_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CMD_QUEUE_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CMD_QUEUE_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CMD_QUEUE_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CMD_QUEUE_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CMD_QUEUE_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CMD_QUEUE_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CMD_QUEUE_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CMD_QUEUE_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_CMD_QUEUE_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_DATA_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_DATA_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_DATA_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_DATA_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_DATA_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_DATA_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_DATA_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_DATA_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_DATA_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_DATA_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_TAG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_TAG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_TAG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_TAG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_TAG_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_TAG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_TAG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_TAG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_TAG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_PTEC_TAG_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IOMMU_PE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_IOMMU_PE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_IOMMU_PE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_IOMMU_PE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_IOMMU_PE_QW,
      ._desc = "An IOMMU PTE Get Response Header Parity Error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_DIAG_ONLY_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_DIAG_ONLY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_DIAG_ONLY_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_flg_1_lo_iommu_detail[] = {
    { ._name = "UNUSED_63_28",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_UNUSED_63_28_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_UNUSED_63_28_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_UNUSED_63_28_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_UNUSED_63_28_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_EVENT_ILL_CMD_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_ILL_CMD_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_ILL_CMD_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_ILL_CMD_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_ILL_CMD_OF_QW,
      ._desc = "When read as 1, an event log Illegal Command event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_EVENT_HW_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_HW_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_HW_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_HW_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_HW_OF_QW,
      ._desc = "When read as 1, an event log Hardware Error event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_EVENT_IOPG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_IOPG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_IOPG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_IOPG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_IOPG_OF_QW,
      ._desc = "When read as 1, an event log IO Page Fault event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_EVENT_TC_INVAL_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_TC_INVAL_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_TC_INVAL_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_TC_INVAL_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_TC_INVAL_OF_QW,
      ._desc = "When read as 1, an event log TC Invalid event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PTE_RSP_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTE_RSP_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTE_RSP_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTE_RSP_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTE_RSP_ERR_QW,
      ._desc = "A PTE Get response was received that did not match a PTE OFB(possibly a stale response after an OFB timeout)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PTE_PKT_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTE_PKT_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTE_PKT_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTE_PKT_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTE_PKT_ERR_QW,
      ._desc = "A PTE Get response was received without payload flits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PI_CHN_TO",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PI_CHN_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PI_CHN_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PI_CHN_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PI_CHN_TO_QW,
      ._desc = "A Processor Interface Request or Response channel has stalled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ILLEGAL_CMD",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_ILLEGAL_CMD_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_ILLEGAL_CMD_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_ILLEGAL_CMD_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_ILLEGAL_CMD_QW,
      ._desc = "An illegal command was encountered in the Command Queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_IP_HW_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CQ_IP_HW_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CQ_IP_HW_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CQ_IP_HW_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CQ_IP_HW_ERR_QW,
      ._desc = "The execution of an Invalidate PTE command resulted in a Multiple Bit Error in either the Translation Context Register read, or the PTE Cache read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CQ_CMD_TO",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CQ_CMD_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CQ_CMD_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CQ_CMD_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CQ_CMD_TO_QW,
      ._desc = "A Command Queue Command has not completed before the CQCmd Timer expired",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_EVENT_LOG_UF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_LOG_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_LOG_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_LOG_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_LOG_UF_QW,
      ._desc = "The Event Log FIFO underflowed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_EVENT_LOG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_LOG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_LOG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_LOG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_EVENT_LOG_OF_QW,
      ._desc = "The Event Log FIFO overflowed(",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_FIFO_UF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_RSP_FIFO_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_RSP_FIFO_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_RSP_FIFO_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_RSP_FIFO_UF_QW,
      ._desc = "The NPT interface response FIFO underflowed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_FIFO_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_RSP_FIFO_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_RSP_FIFO_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_RSP_FIFO_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_RSP_FIFO_OF_QW,
      ._desc = "The NPT interface response FIFO overflowed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TR_QUEUE_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_QUEUE_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_QUEUE_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_QUEUE_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_QUEUE_ERR_QW,
      ._desc = "One of the three Translation Request Queues was overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TR_BUF_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUF_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUF_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUF_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUF_OF_QW,
      ._desc = "IOMMU received a new translation request with maximum(32) valid translation requests in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TR_BUF_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUF_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUF_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUF_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUF_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TR_BUFF_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUFF_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUFF_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUFF_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TR_BUFF_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TC_REG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TC_REG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TC_REG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TC_REG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TC_REG_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TC_REG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TC_REG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TC_REG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TC_REG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_TC_REG_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CMD_QUEUE_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CMD_QUEUE_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CMD_QUEUE_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CMD_QUEUE_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CMD_QUEUE_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CMD_QUEUE_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CMD_QUEUE_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CMD_QUEUE_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CMD_QUEUE_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_CMD_QUEUE_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PTEC_DATA_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_DATA_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_DATA_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_DATA_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_DATA_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PTEC_DATA_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_DATA_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_DATA_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_DATA_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_DATA_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PTEC_TAG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_TAG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_TAG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_TAG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_TAG_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PTEC_TAG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_TAG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_TAG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_TAG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_PTEC_TAG_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_IOMMU_PE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_IOMMU_PE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_IOMMU_PE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_IOMMU_PE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_I_IOMMU_PE_QW,
      ._desc = "An IOMMU PTE Get Response Header Parity Error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_UNUSED_0_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_UNUSED_0_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_UNUSED_0_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_io_2_hi_iommu_detail[] = {
    { ._name = "TR_COMP_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_TR_COMP_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_TR_COMP_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_TR_COMP_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_TR_COMP_VAL_QW,
      ._desc = "a_nic_mmu_te - Completed Translation Request valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TR_COMP",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_TR_COMP_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_TR_COMP_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_TR_COMP_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_TR_COMP_QW,
      ._desc = "a_nic_mmu_te - Completed Translation Request transaction id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_BUSY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_PTEC_BUSY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_PTEC_BUSY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_PTEC_BUSY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_PTEC_BUSY_QW,
      ._desc = "a_nic_mmu_te - ptec busy(hold)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_RF",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_RF_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_RF_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_RF_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_RF_QW,
      ._desc = "a_nic_mmu_ptec - Re-fetch request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_TR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_TR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_TR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_TR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_TR_QW,
      ._desc = "a_nic_mmu_te - output translation request transaction id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_TCR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_TCR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_TCR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_TCR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_TCR_QW,
      ._desc = "a_nic_mmu_te - output translation request Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_ERR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_ERR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_ERR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_ERR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_REQ_ERR_QW,
      ._desc = "a_nic_mmu_te - output translation request error flags",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_io_2_mid_iommu_detail[] = {
    { ._name = "REQ_ERR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_REQ_ERR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_REQ_ERR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_REQ_ERR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_REQ_ERR_QW,
      ._desc = "a_nic_mmu_te - output translation request error flags",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_VALID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_REQ_VALID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_REQ_VALID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_REQ_VALID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_REQ_VALID_QW,
      ._desc = "a_nic_mmu_te - output translation request valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_CON_63",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_CON_63_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_CON_63_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_CON_63_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_CON_63_QW,
      ._desc = "a_nic_mmu_te - input translation request Translation Context valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_CON_52_12",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_CON_52_12_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_CON_52_12_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_CON_52_12_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_CON_52_12_QW,
      ._desc = "a_nic_mmu_te - input translation request Translation Context",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_REQ",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_REQ_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_REQ_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_REQ_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_TE_TR_REQ_QW,
      ._desc = "a_nic_mmu_te - input translation request transaction id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_io_2_lo_iommu_detail[] = {
    { ._name = "TE_TR_REQ",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_REQ_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_REQ_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_REQ_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_REQ_QW,
      ._desc = "a_nic_mmu_te - input translation request transaction id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_TRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TRID_QW,
      ._desc = "a_nic_mmu_te - input translation request transaction id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_TCRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TCRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TCRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TCRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TCRID_QW,
      ._desc = "a_nic_mmu_te - input translation request Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_PD_ERR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_PD_ERR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_PD_ERR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_PD_ERR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_PD_ERR_QW,
      ._desc = "a_nic_mmu_te - input translation request error flags",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_TYPE",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TYPE_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TYPE_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TYPE_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_TYPE_QW,
      ._desc = "a_nic_mmu_te - input translation request source queue id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_TE_TR_VAL_QW,
      ._desc = "a_nic_mmu_te - input translation request valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_132",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_UNUSED_145_132_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_UNUSED_145_132_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_UNUSED_145_132_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_UNUSED_145_132_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TRB_OF",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TRB_OF_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TRB_OF_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TRB_OF_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TRB_OF_QW,
      ._desc = "a_nic_mmu - TRB overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TRB_FULL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TRB_FULL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TRB_FULL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TRB_FULL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TRB_FULL_QW,
      ._desc = "a_nic_mmu - TRB full",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TCR_ERR_ADDR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TCR_ERR_ADDR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TCR_ERR_ADDR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TCR_ERR_ADDR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_TCR_ERR_ADDR_QW,
      ._desc = "a_nic_mmu_tr_reg - output translation context register error address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_detail[] = {
    { ._name = "TCR_ERR_ADDR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_ERR_ADDR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_ERR_ADDR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_ERR_ADDR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_ERR_ADDR_QW,
      ._desc = "a_nic_mmu_tr_reg - output translation context register error address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TCR_MBE",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_MBE_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_MBE_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_MBE_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_MBE_QW,
      ._desc = "a_nic_mmu_tr_reg - output translation context register MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TCR_SBE",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_SBE_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_SBE_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_SBE_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_SBE_QW,
      ._desc = "a_nic_mmu_tr_reg - output translation context register SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TRB_ERR_ADDR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_ERR_ADDR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_ERR_ADDR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_ERR_ADDR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_ERR_ADDR_QW,
      ._desc = "a_nic_mmu_tr_reg - output translation request buffer error address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TRB_MBE",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_MBE_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_MBE_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_MBE_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_MBE_QW,
      ._desc = "a_nic_mmu_tr_reg - output translation request buffer MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TRB_SBE",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_SBE_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_SBE_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_SBE_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TRB_SBE_QW,
      ._desc = "a_nic_mmu_tr_reg - output translation request buffer SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TR_REG_2LVL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_REG_2LVL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_REG_2LVL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_REG_2LVL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_REG_2LVL_QW,
      ._desc = "a_nic_mmu_tr_reg - output Two Level translation request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_BUSY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_BUSY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_BUSY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_BUSY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_BUSY_QW,
      ._desc = "a_nic_mmu_tr_reg - output TCR Read Busy to Invalidate PTE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TCR_BUSY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_BUSY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_BUSY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_BUSY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TCR_BUSY_QW,
      ._desc = "a_nic_mmu_tr_reg - output TCR Read Busy to TE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_TCR_RD_DATA_63",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_63_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_63_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_63_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_63_QW,
      ._desc = "a_nic_mmu_tr_reg - output TCR data(Context enable)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_TCR_RD_DATA_62_55",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_62_55_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_62_55_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_62_55_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_62_55_QW,
      ._desc = "a_nic_mmu_tr_reg - output TCR data(PI read modes)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MMR_TCR_RD_DATA_52_48",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_52_48_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_52_48_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_52_48_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_MMR_TCR_RD_DATA_52_48_QW,
      ._desc = "a_nic_mmu_tr_reg - output TCR data(Page Mode and Page Size)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_CON_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_CON_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_CON_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_CON_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_CON_VAL_QW,
      ._desc = "a_nic_mmu_tr_reg - output Invalidate PTE TCR data valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_TCRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_TCRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_TCRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_TCRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_TCRID_QW,
      ._desc = "a_nic_mmu_tr_reg - input Invalidate PTE TCR id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_TCR_RD_VALCFG_CQR_IP_RESET",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_TCR_RD_VALCFG_CQR_IP_RESET_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_TCR_RD_VALCFG_CQR_IP_RESET_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_TCR_RD_VALCFG_CQR_IP_RESET_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_PTEC_TCR_RD_VALCFG_CQR_IP_RESET_QW,
      ._desc = "a_nic_mmu_tr_reg - input Invalidate PTE TCR request valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TR_TCRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_TCRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_TCRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_TCRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_TCRID_QW,
      ._desc = "a_nic_mmu_tr_reg - input translation request TCR id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_REQ_69",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TE_TR_REQ_69_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TE_TR_REQ_69_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TE_TR_REQ_69_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TE_TR_REQ_69_QW,
      ._desc = "a_nic_mmu_tr_reg - output translation request valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TE_TR_REQ_68_61",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TE_TR_REQ_68_61_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TE_TR_REQ_68_61_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TE_TR_REQ_68_61_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TE_TR_REQ_68_61_QW,
      ._desc = "a_nic_mmu_tr_reg - output translation request TID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TR_TRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_TRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_TRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_TRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_TRID_QW,
      ._desc = "a_nic_mmu_tr_reg - input translation request transaction id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TR_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_TR_VAL_QW,
      ._desc = "a_nic_mmu_tr_reg - input translation request valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NEXT_TREQ_4_0",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_NEXT_TREQ_4_0_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_NEXT_TREQ_4_0_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_NEXT_TREQ_4_0_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_NEXT_TREQ_4_0_QW,
      ._desc = "a_nic_mmu_tr_reg - input translation request buffer entry address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NEW_TR_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_Q_NEW_TR_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_Q_NEW_TR_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_Q_NEW_TR_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_Q_NEW_TR_VAL_QW,
      ._desc = "a_nic_mmu_tr_reg - input translation request buffer entry valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NEW_TR_ENTRY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_NEW_TR_ENTRY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_NEW_TR_ENTRY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_NEW_TR_ENTRY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_NEW_TR_ENTRY_QW,
      ._desc = "a_nic_mmu_tr_reg - input translation request buffer entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_tr_reg_3_lo_iommu_detail[] = {
    { ._name = "NEW_TR_ENTRY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_NEW_TR_ENTRY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_NEW_TR_ENTRY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_NEW_TR_ENTRY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_NEW_TR_ENTRY_QW,
      ._desc = "a_nic_mmu_tr_reg - input translation request buffer entry",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_te_4_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_75",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_UNUSED_145_75_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_UNUSED_145_75_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_UNUSED_145_75_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_UNUSED_145_75_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_te_4_mid_iommu_detail[] = {
    { ._name = "UNUSED_145_75",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_UNUSED_145_75_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_UNUSED_145_75_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_UNUSED_145_75_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_UNUSED_145_75_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NAT_VALID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_VALID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_VALID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_VALID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_VALID_QW,
      ._desc = "a_nic_mmu - translation response valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NAT_TID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_TID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_TID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_TID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_TID_QW,
      ._desc = "a_nic_mmu - translation response TID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NAT_ADDR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_ADDR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_ADDR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_ADDR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_Q_LM_NAT_ADDR_QW,
      ._desc = "a_nic_mmu - translation response translated address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_te_4_lo_iommu_detail[] = {
    { ._name = "Q_LM_NAT_ADDR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_ADDR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_ADDR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_ADDR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_ADDR_QW,
      ._desc = "a_nic_mmu - translation response translated address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NAT_TC",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_TC_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_TC_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_TC_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_TC_QW,
      ._desc = "a_nic_mmu - translation response TC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NAT_ERRORS",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_ERRORS_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_ERRORS_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_ERRORS_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_ERRORS_QW,
      ._desc = "a_nic_mmu - translation response error code",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NAT_PI_CFG",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_PI_CFG_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_PI_CFG_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_PI_CFG_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_PI_CFG_QW,
      ._desc = "a_nic_mmu - translation response PI_CFG",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NAT_CQH",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_CQH_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_CQH_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_CQH_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_Q_LM_NAT_CQH_QW,
      ._desc = "a_nic_mmu - translation response CQH",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_62",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_UNUSED_145_62_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_UNUSED_145_62_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_UNUSED_145_62_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_UNUSED_145_62_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_detail[] = {
    { ._name = "UNUSED_145_62",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_UNUSED_145_62_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_UNUSED_145_62_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_UNUSED_145_62_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_UNUSED_145_62_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_arb_5_lo_iommu_detail[] = {
    { ._name = "UNUSED_145_62",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_UNUSED_145_62_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_UNUSED_145_62_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_UNUSED_145_62_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_UNUSED_145_62_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TRARB_Q_EMPTY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_Q_EMPTY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_Q_EMPTY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_Q_EMPTY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_Q_EMPTY_QW,
      ._desc = "a_nic_mmu_trarb - TR Queue empty flags",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TRARB_ERR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_ERR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_ERR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_ERR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_ERR_QW,
      ._desc = "a_nic_mmu_trarb - TR Queue error flags",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TCR_BUSY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TCR_BUSY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TCR_BUSY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TCR_BUSY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TCR_BUSY_QW,
      ._desc = "a_nic_mmu_trarb - TC Read path busy",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTEC_BUSY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PTEC_BUSY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PTEC_BUSY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PTEC_BUSY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PTEC_BUSY_QW,
      ._desc = "a_nic_mmu_trarb - TR pipeline hold",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TRARB_NQ_HOLD",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_NQ_HOLD_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_NQ_HOLD_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_NQ_HOLD_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_TRARB_NQ_HOLD_QW,
      ._desc = "a_nic_mmu_trarb - New Queue hold",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REPLAY_CPL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_CPL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_CPL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_CPL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_CPL_QW,
      ._desc = "a_nic_mmu_trarb - Replay Queue TR completion ptr adv",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REPLAY_TR_TRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_TRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_TRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_TRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_TRID_QW,
      ._desc = "a_nic_mmu_trarb - Replay Queue TR id input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REPLAY_TR_TCR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_TCR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_TCR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_TCR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_TCR_QW,
      ._desc = "a_nic_mmu_trarb - Replay Queue TC id input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REPLAY_TR_RF",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_RF_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_RF_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_RF_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_RF_QW,
      ._desc = "a_nic_mmu_trarb - Replay Queue re-fetch flag input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REPLAY_TR_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_REPLAY_TR_VAL_QW,
      ._desc = "a_nic_mmu_trarb - Replay Queue input valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND2_CPL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_CPL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_CPL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_CPL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_CPL_QW,
      ._desc = "a_nic_mmu_trarb - Pend2 Queue TR completion ptr adv",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND2_TR_TRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_TRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_TRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_TRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_TRID_QW,
      ._desc = "a_nic_mmu_trarb - Pend2 Queue TR id input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND2_TR_TCR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_TCR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_TCR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_TCR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_TCR_QW,
      ._desc = "a_nic_mmu_trarb - Pend2 Queue TC id input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND2_TR_RF",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_RF_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_RF_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_RF_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_RF_QW,
      ._desc = "a_nic_mmu_trarb - Pend2 Queue re-fetch flag input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND2_TR_ERR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_ERR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_ERR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_ERR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_ERR_QW,
      ._desc = "a_nic_mmu_trarb - Pend2 Queue error flags input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND2_TR_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND2_TR_VAL_QW,
      ._desc = "a_nic_mmu_trarb - Pend2 Queue input valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND1_CPL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_CPL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_CPL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_CPL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_CPL_QW,
      ._desc = "a_nic_mmu_trarb - Pend1 Queue TR completion ptr adv",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND1_TR_TRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_TRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_TRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_TRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_TRID_QW,
      ._desc = "a_nic_mmu_trarb - Pend1 Queue TR id input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND1_TR_TCR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_TCR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_TCR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_TCR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_TCR_QW,
      ._desc = "a_nic_mmu_trarb - Pend1 Queue TC id input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND1_TR_RF",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_RF_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_RF_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_RF_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_RF_QW,
      ._desc = "a_nic_mmu_trarb - Pend1 Queue re-fetch flag input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND1_TR_ERR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_ERR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_ERR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_ERR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_ERR_QW,
      ._desc = "a_nic_mmu_trarb - Pend1 Queue error flags input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PEND1_TR_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_PEND1_TR_VAL_QW,
      ._desc = "a_nic_mmu_trarb - Pend1 Queue input valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NEW_CPL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEW_CPL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEW_CPL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEW_CPL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEW_CPL_QW,
      ._desc = "a_nic_mmu_trarb - New Queue TR completion ptr adv",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NEXT_TREQ",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEXT_TREQ_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEXT_TREQ_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEXT_TREQ_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEXT_TREQ_QW,
      ._desc = "a_nic_mmu_trarb - translation request out TRB index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NEW_TR_TC",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_Q_NEW_TR_TC_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_Q_NEW_TR_TC_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_Q_NEW_TR_TC_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_Q_NEW_TR_TC_QW,
      ._desc = "a_nic_mmu_trarbb - translation request out TC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NEW_TR_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEW_TR_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEW_TR_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEW_TR_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_NEW_TR_VAL_QW,
      ._desc = "a_nic_mmu_trb - translation request out valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_97",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_UNUSED_145_97_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_UNUSED_145_97_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_UNUSED_145_97_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_UNUSED_145_97_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_detail[] = {
    { ._name = "UNUSED_145_97",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_UNUSED_145_97_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_UNUSED_145_97_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_UNUSED_145_97_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_UNUSED_145_97_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EL_LM_48_19",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_EL_LM_48_19_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_EL_LM_48_19_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_EL_LM_48_19_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_EL_LM_48_19_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EL_LM_18_15",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_EL_LM_18_15_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_EL_LM_18_15_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_EL_LM_18_15_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_EL_LM_18_15_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_event_log_cmd_q_6_lo_iommu_detail[] = {
    { ._name = "EL_LM_18_15",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_18_15_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_18_15_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_18_15_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_18_15_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EL_LM_14_11",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_14_11_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_14_11_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_14_11_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_14_11_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EL_LM_10",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_10_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_10_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_10_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_10_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EL_LM_9",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_9_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_9_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_9_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_9_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EL_LM_8_7",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_8_7_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_8_7_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_8_7_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_8_7_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EL_LM_6",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_6_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_6_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_6_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_6_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EL_LM_5_1",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_5_1_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_5_1_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_5_1_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_5_1_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "EL_LM_0",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_0_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_0_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_0_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_EL_LM_0_QW,
      ._desc = "a_nic_mmu_elog",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NAT_INV_MDH",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NAT_INV_MDH_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NAT_INV_MDH_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NAT_INV_MDH_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NAT_INV_MDH_QW,
      ._desc = "a_nic_mmu - NAT Invalidate MDH Index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NAT_INV_REQ",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NAT_INV_REQ_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NAT_INV_REQ_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NAT_INV_REQ_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NAT_INV_REQ_QW,
      ._desc = "a_nic_mmu - NAT Invalidate MDH Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_NPT_COMP_WAIT_REQ",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NPT_COMP_WAIT_REQ_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NPT_COMP_WAIT_REQ_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NPT_COMP_WAIT_REQ_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_NPT_COMP_WAIT_REQ_QW,
      ._desc = "a_nic_mmu - NPT Completion Wait Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_RAT_COMP_WAIT_REQ",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_RAT_COMP_WAIT_REQ_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_RAT_COMP_WAIT_REQ_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_RAT_COMP_WAIT_REQ_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_RAT_COMP_WAIT_REQ_QW,
      ._desc = "a_nic_mmu - RAT Completion Wait Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_BTE_COMP_WAIT_REQ",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_BTE_COMP_WAIT_REQ_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_BTE_COMP_WAIT_REQ_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_BTE_COMP_WAIT_REQ_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_BTE_COMP_WAIT_REQ_QW,
      ._desc = "a_nic_mmu - BTE Completion Wait Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_CQ_COMP_WAIT_REQ",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_CQ_COMP_WAIT_REQ_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_CQ_COMP_WAIT_REQ_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_CQ_COMP_WAIT_REQ_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_CQ_COMP_WAIT_REQ_QW,
      ._desc = "a_nic_mmu - CQ Completion Wait Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_WC_COMP_WAIT_REQ",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_WC_COMP_WAIT_REQ_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_WC_COMP_WAIT_REQ_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_WC_COMP_WAIT_REQ_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_LM_WC_COMP_WAIT_REQ_QW,
      ._desc = "a_nic_mmu - WC Completion Wait Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NAT_INV_ACK",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_NAT_INV_ACK_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_NAT_INV_ACK_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_NAT_INV_ACK_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_NAT_INV_ACK_QW,
      ._desc = "a_nic_mmu - NAT Invalidate MDH Acknowledgement",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NPT_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_NPT_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_NPT_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_NPT_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_NPT_COMP_WAIT_ACK_QW,
      ._desc = "a_nic_mmu - NPT Completion Wait Acknowledgement",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RAT_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_RAT_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_RAT_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_RAT_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_RAT_COMP_WAIT_ACK_QW,
      ._desc = "a_nic_mmu - RAT Completion Wait Acknowledgement",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_BTE_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_BTE_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_BTE_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_BTE_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_BTE_COMP_WAIT_ACK_QW,
      ._desc = "a_nic_mmu - BTE Completion Wait Acknowledgement",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_CQ_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_CQ_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_CQ_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_CQ_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_CQ_COMP_WAIT_ACK_QW,
      ._desc = "a_nic_mmu - CQ Completion Wait Acknowledgement",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_WC_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_WC_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_WC_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_WC_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_Q_WC_COMP_WAIT_ACK_QW,
      ._desc = "a_nic_mmu - WC Completion Wait Acknowledgement",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_23_22",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_23_22_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_23_22_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_23_22_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_23_22_QW,
      ._desc = "a_nic_mmu_cq - Reserved",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_21_20",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_21_20_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_21_20_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_21_20_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_21_20_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_19",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_19_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_19_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_19_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_19_QW,
      ._desc = "a_nic_mmu_cq - Reserved",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_18_17",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_18_17_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_18_17_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_18_17_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_18_17_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_16_13",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_16_13_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_16_13_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_16_13_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_16_13_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_12",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_12_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_12_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_12_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_12_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_11",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_11_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_11_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_11_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_11_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_10",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_10_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_10_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_10_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_10_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_9",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_9_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_9_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_9_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_9_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_8",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_8_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_8_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_8_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_8_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_7",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_7_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_7_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_7_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_7_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_6",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_6_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_6_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_6_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_6_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_5",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_5_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_5_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_5_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_5_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_4",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_4_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_4_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_4_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_4_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_3",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_3_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_3_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_3_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_3_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_2",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_2_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_2_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_2_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_2_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_1",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_1_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_1_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_1_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_1_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CQ_LM_0",
      ._bpos = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_0_BP,
      ._mask = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_0_MASK,
      ._rval = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_0_MASK,
      ._index = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_CQ_LM_0_QW,
      ._desc = "a_nic_mmu_cq",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_parb_req_if_7_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_132",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_UNUSED_145_132_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_UNUSED_145_132_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_UNUSED_145_132_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_UNUSED_145_132_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PARB_IOMMU_REQ_ACK",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_Q_PARB_IOMMU_REQ_ACK_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_Q_PARB_IOMMU_REQ_ACK_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_Q_PARB_IOMMU_REQ_ACK_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_Q_PARB_IOMMU_REQ_ACK_QW,
      ._desc = "PARB Interface acknowledge(credit returned)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RAT_REQ_OUT_ACK",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_Q_RAT_REQ_OUT_ACK_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_Q_RAT_REQ_OUT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_Q_RAT_REQ_OUT_ACK_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_Q_RAT_REQ_OUT_ACK_QW,
      ._desc = "RAT interface acknowledge(credit returned)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_129_122",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_LM_PKTIO_129_122_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_LM_PKTIO_129_122_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_LM_PKTIO_129_122_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_LM_PKTIO_129_122_QW,
      ._desc = "a_nic_mmu_pkt_io - Reserved",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_parb_req_if_7_mid_iommu_detail[] = {
    { ._name = "LM_PKTIO_129_122",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_129_122_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_129_122_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_129_122_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_129_122_QW,
      ._desc = "a_nic_mmu_pkt_io - Reserved",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_121",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_121_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_121_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_121_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_121_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_120",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_120_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_120_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_120_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_120_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_119",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_119_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_119_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_119_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_119_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_118",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_118_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_118_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_118_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_118_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_117",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_117_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_117_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_117_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_117_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_116_112",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_116_112_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_116_112_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_116_112_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_116_112_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_111",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_111_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_111_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_111_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_111_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_110_74",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_110_74_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_110_74_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_110_74_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_110_74_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_73",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_73_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_73_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_73_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_73_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_72",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_72_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_72_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_72_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_72_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_71",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_71_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_71_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_71_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_71_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_70",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_70_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_70_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_70_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_70_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_69",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_69_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_69_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_69_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_69_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_68_63",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_68_63_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_68_63_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_68_63_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_LM_PKTIO_68_63_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_parb_req_if_7_lo_iommu_detail[] = {
    { ._name = "LM_PKTIO_68_63",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_68_63_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_68_63_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_68_63_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_68_63_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_62",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_62_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_62_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_62_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_62_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_61",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_61_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_61_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_61_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_61_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO60_25",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO60_25_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO60_25_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO60_25_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO60_25_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_24",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_24_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_24_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_24_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_24_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_23",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_23_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_23_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_23_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_23_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_22",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_22_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_22_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_22_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_22_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_21_16",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_21_16_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_21_16_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_21_16_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_21_16_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_15_8",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_15_8_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_15_8_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_15_8_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_15_8_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LM_PKTIO_7_0",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_7_0_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_7_0_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_7_0_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_LM_PKTIO_7_0_QW,
      ._desc = "a_nic_mmu_pkt_io",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_parb_req_8_hi_iommu_detail[] = {
    { ._name = "Q_IOMMU_PARB_REQ_SB",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_Q_IOMMU_PARB_REQ_SB_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_Q_IOMMU_PARB_REQ_SB_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_Q_IOMMU_PARB_REQ_SB_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_Q_IOMMU_PARB_REQ_SB_QW,
      ._desc = "PARB Request interface Sideband Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_IOMMU_PARB_REQ_FLIT",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_Q_IOMMU_PARB_REQ_FLIT_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_Q_IOMMU_PARB_REQ_FLIT_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_Q_IOMMU_PARB_REQ_FLIT_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_Q_IOMMU_PARB_REQ_FLIT_QW,
      ._desc = "PARB Request interface FLIT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_parb_req_8_mid_iommu_detail[] = {
    { ._name = "Q_IOMMU_PARB_REQ_FLIT",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_Q_IOMMU_PARB_REQ_FLIT_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_Q_IOMMU_PARB_REQ_FLIT_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_Q_IOMMU_PARB_REQ_FLIT_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_Q_IOMMU_PARB_REQ_FLIT_QW,
      ._desc = "PARB Request interface FLIT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_parb_req_8_lo_iommu_detail[] = {
    { ._name = "Q_IOMMU_PARB_REQ_FLIT",
      ._bpos = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_Q_IOMMU_PARB_REQ_FLIT_BP,
      ._mask = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_Q_IOMMU_PARB_REQ_FLIT_MASK,
      ._rval = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_Q_IOMMU_PARB_REQ_FLIT_MASK,
      ._index = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_Q_IOMMU_PARB_REQ_FLIT_QW,
      ._desc = "PARB Request interface FLIT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_77",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_UNUSED_145_77_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_UNUSED_145_77_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_UNUSED_145_77_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_UNUSED_145_77_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_detail[] = {
    { ._name = "UNUSED_145_77",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_UNUSED_145_77_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_UNUSED_145_77_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_UNUSED_145_77_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_UNUSED_145_77_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_ID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_Q_ORB_TO_ID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_Q_ORB_TO_ID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_Q_ORB_TO_ID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_Q_ORB_TO_ID_QW,
      ._desc = "The lowest numbered OFB in Time out state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORB_TO",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_TO_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_TO_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_TO_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_TO_QW,
      ._desc = "One or more OFBs have time out waiting for Get Responses",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORB_FULL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_FULL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_FULL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_FULL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_FULL_QW,
      ._desc = "All OFBs allocated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORB_ENTRY_FULL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_ENTRY_FULL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_ENTRY_FULL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_ENTRY_FULL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_ORB_ENTRY_FULL_QW,
      ._desc = "Translation Request Tag/OFB Tag match with full entry list",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ALLOC_ORB",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_Q_ALLOC_ORB_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_Q_ALLOC_ORB_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_Q_ALLOC_ORB_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_Q_ALLOC_ORB_QW,
      ._desc = "One hot mask of OFB to allocate",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_trans_req_alloc_9_lo_iommu_detail[] = {
    { ._name = "Q_ALLOC_ORB",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_ALLOC_ORB_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_ALLOC_ORB_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_ALLOC_ORB_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_ALLOC_ORB_QW,
      ._desc = "One hot mask of OFB to allocate",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORB_RSP_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_RSP_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_RSP_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_RSP_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_RSP_VAL_QW,
      ._desc = "Valid PTEC/Request Queue update from OFB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RSP_IP",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_ORB_RSP_IP_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_ORB_RSP_IP_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_ORB_RSP_IP_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_ORB_RSP_IP_QW,
      ._desc = "Get Response/OFB Timeout initiated PTEC/Request Queue updates",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORB_ID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ID_QW,
      ._desc = "Get Response Outstanding Get Request Buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INVALID_PTE_RSP_SG0",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INVALID_PTE_RSP_SG0_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INVALID_PTE_RSP_SG0_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INVALID_PTE_RSP_SG0_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INVALID_PTE_RSP_SG0_QW,
      ._desc = "PTEC invalid or error Get response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_PTE_REQ_BUSY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_R_PTE_REQ_BUSY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_R_PTE_REQ_BUSY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_R_PTE_REQ_BUSY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_R_PTE_REQ_BUSY_QW,
      ._desc = "PTEC Busy(One of the last two stages of the translation pipeline has a PTEC miss)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PTE_RSP_IP",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_PTE_RSP_IP_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_PTE_RSP_IP_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_PTE_RSP_IP_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_PTE_RSP_IP_QW,
      ._desc = "PTEC Get response/Cache update in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INV_PTE_ACT",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_PTE_ACT_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_PTE_ACT_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_PTE_ACT_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_PTE_ACT_QW,
      ._desc = "PTEC Invalidate PTEs TCR accessed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INV_PTE_IP",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_PTE_IP_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_PTE_IP_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_PTE_IP_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_PTE_IP_QW,
      ._desc = "PTEC Invalidate PTEs Cache Access in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_TAG_INIT",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_TAG_INIT_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_TAG_INIT_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_TAG_INIT_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_TAG_INIT_QW,
      ._desc = "PTEC Tag initialization in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORB_ENT_ALLOC_ERR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ENT_ALLOC_ERR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ENT_ALLOC_ERR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ENT_ALLOC_ERR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ENT_ALLOC_ERR_QW,
      ._desc = "Translation Request OFB Entry allocation failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORB_ALLOC_ERR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ALLOC_ERR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ALLOC_ERR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ALLOC_ERR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_ORB_ALLOC_ERR_QW,
      ._desc = "Translation Request OFB allocation failed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RESET_HOLD",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RESET_HOLD_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RESET_HOLD_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RESET_HOLD_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RESET_HOLD_QW,
      ._desc = "Translation Request Pipeline end stall",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SET_HOLD",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_SET_HOLD_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_SET_HOLD_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_SET_HOLD_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_SET_HOLD_QW,
      ._desc = "Translation Request Pipeline start stall",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_HOLD",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_HOLD_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_HOLD_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_HOLD_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_HOLD_QW,
      ._desc = "Translation Request Pipeline stalled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_ACCESS_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_VAL_QW,
      ._desc = "Two Level Translation Request 2m page access valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_ACCESS_TRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_TRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_TRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_TRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_TRID_QW,
      ._desc = "Two Level Translation Request 2m page access Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_ACCESS_WAY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_WAY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_WAY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_WAY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_WAY_QW,
      ._desc = "Two Level Translation Request 2m page access Way ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_ACCESS_SET",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_SET_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_SET_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_SET_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_ACCESS_SET_QW,
      ._desc = "Two Level Translation Request 2m page access Set ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_RSP_WAY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_RSP_WAY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_RSP_WAY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_RSP_WAY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_RSP_WAY_QW,
      ._desc = "Allocated Way ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_RSP_ERR",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_RSP_ERR_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_RSP_ERR_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_RSP_ERR_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_RSP_ERR_QW,
      ._desc = "Allocation Error Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_INV_WAY_MASK",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_WAY_MASK_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_WAY_MASK_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_WAY_MASK_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_Q_INV_WAY_MASK_QW,
      ._desc = "Invalidation Way Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_CMD_VAL",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_CMD_VAL_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_CMD_VAL_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_CMD_VAL_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_CMD_VAL_QW,
      ._desc = "Access/Allocating/Invalidation Command valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_SET",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_SET_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_SET_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_SET_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_SET_QW,
      ._desc = "Access/Allocating Set ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_WAY",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_WAY_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_WAY_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_WAY_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_WAY_QW,
      ._desc = "Access Way ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_CMD",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_CMD_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_CMD_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_CMD_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_CMD_QW,
      ._desc = "Access/Allocating/Invalidation Command code",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_TYPE",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_TYPE_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_TYPE_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_TYPE_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_TYPE_QW,
      ._desc = "Access/Allocating Translation Request Source Queue ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LRU_TRID",
      ._bpos = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_TRID_BP,
      ._mask = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_TRID_MASK,
      ._rval = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_TRID_MASK,
      ._index = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_LRU_TRID_QW,
      ._desc = "Access/Allocating Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_UNUSED_145_135_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_UNUSED_145_135_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_UNUSED_145_135_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_Q_ORB_TAG_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_Q_ORB_TAG_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_Q_ORB_TAG_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_Q_ORB_TAG_1_QW,
      ._desc = "OFB 1 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_detail[] = {
    { ._name = "Q_ORB_TAG_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TAG_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TAG_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TAG_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TAG_1_QW,
      ._desc = "OFB 1 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TCR_ENTRY_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TCR_ENTRY_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TCR_ENTRY_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TCR_ENTRY_1_QW,
      ._desc = "OFB 1 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_INSTANCE_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_INSTANCE_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_INSTANCE_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_INSTANCE_1_QW,
      ._desc = "OFB 1 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TYPE_ENTRY_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TYPE_ENTRY_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TYPE_ENTRY_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TYPE_ENTRY_1_QW,
      ._desc = "OFB 1 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_RF_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_RF_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_RF_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_RF_1_QW,
      ._desc = "OFB 1 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TO_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TO_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TO_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TO_1_QW,
      ._desc = "OFB 1 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_ADDR_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_ADDR_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_ADDR_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_ADDR_1_QW,
      ._desc = "OFB 1 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TR_ENTRY_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TR_ENTRY_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TR_ENTRY_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_TR_ENTRY_1_QW,
      ._desc = "OFB 1 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_1",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_ENT_VAL_1_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_ENT_VAL_1_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_ENT_VAL_1_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_Q_ORB_ENT_VAL_1_QW,
      ._desc = "OFB 1 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_1_0_a_lo_iommu_detail[] = {
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_0",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TAG_0_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TAG_0_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TAG_0_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TAG_0_QW,
      ._desc = "OFB 0 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_0",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TCR_ENTRY_0_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TCR_ENTRY_0_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TCR_ENTRY_0_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TCR_ENTRY_0_QW,
      ._desc = "OFB 0 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_0",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_INSTANCE_0_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_INSTANCE_0_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_INSTANCE_0_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_INSTANCE_0_QW,
      ._desc = "OFB 0 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_0",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TYPE_ENTRY_0_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TYPE_ENTRY_0_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TYPE_ENTRY_0_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TYPE_ENTRY_0_QW,
      ._desc = "OFB 0 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_0",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_RF_0_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_RF_0_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_RF_0_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_RF_0_QW,
      ._desc = "OFB 0 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_0",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TO_0_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TO_0_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TO_0_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TO_0_QW,
      ._desc = "OFB 0 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_0",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_ADDR_0_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_ADDR_0_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_ADDR_0_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_ADDR_0_QW,
      ._desc = "OFB 0 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_0",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TR_ENTRY_0_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TR_ENTRY_0_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TR_ENTRY_0_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_TR_ENTRY_0_QW,
      ._desc = "OFB 0 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_0",
      ._bpos = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_ENT_VAL_0_BP,
      ._mask = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_ENT_VAL_0_MASK,
      ._rval = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_ENT_VAL_0_MASK,
      ._index = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_Q_ORB_ENT_VAL_0_QW,
      ._desc = "OFB 0 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_UNUSED_145_135_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_UNUSED_145_135_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_UNUSED_145_135_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_Q_ORB_TAG_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_Q_ORB_TAG_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_Q_ORB_TAG_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_Q_ORB_TAG_3_QW,
      ._desc = "OFB 3 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_detail[] = {
    { ._name = "Q_ORB_TAG_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TAG_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TAG_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TAG_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TAG_3_QW,
      ._desc = "OFB 3 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TCR_ENTRY_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TCR_ENTRY_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TCR_ENTRY_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TCR_ENTRY_3_QW,
      ._desc = "OFB 3 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_INSTANCE_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_INSTANCE_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_INSTANCE_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_INSTANCE_3_QW,
      ._desc = "OFB 3 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TYPE_ENTRY_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TYPE_ENTRY_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TYPE_ENTRY_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TYPE_ENTRY_3_QW,
      ._desc = "OFB 3 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_RF_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_RF_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_RF_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_RF_3_QW,
      ._desc = "OFB 3 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TO_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TO_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TO_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TO_3_QW,
      ._desc = "OFB 3 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_ADDR_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_ADDR_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_ADDR_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_ADDR_3_QW,
      ._desc = "OFB 3 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TR_ENTRY_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TR_ENTRY_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TR_ENTRY_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_TR_ENTRY_3_QW,
      ._desc = "OFB 3 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_3",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_ENT_VAL_3_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_ENT_VAL_3_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_ENT_VAL_3_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_Q_ORB_ENT_VAL_3_QW,
      ._desc = "OFB 3 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_3_2_b_lo_iommu_detail[] = {
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_2",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TAG_2_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TAG_2_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TAG_2_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TAG_2_QW,
      ._desc = "OFB 2 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_2",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TCR_ENTRY_2_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TCR_ENTRY_2_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TCR_ENTRY_2_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TCR_ENTRY_2_QW,
      ._desc = "OFB 2 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_2",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_INSTANCE_2_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_INSTANCE_2_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_INSTANCE_2_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_INSTANCE_2_QW,
      ._desc = "OFB 2 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_2",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TYPE_ENTRY_2_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TYPE_ENTRY_2_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TYPE_ENTRY_2_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TYPE_ENTRY_2_QW,
      ._desc = "OFB 2 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_2",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_RF_2_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_RF_2_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_RF_2_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_RF_2_QW,
      ._desc = "OFB 2 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_2",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TO_2_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TO_2_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TO_2_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TO_2_QW,
      ._desc = "OFB 2 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_2",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_ADDR_2_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_ADDR_2_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_ADDR_2_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_ADDR_2_QW,
      ._desc = "OFB 2 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_2",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TR_ENTRY_2_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TR_ENTRY_2_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TR_ENTRY_2_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_TR_ENTRY_2_QW,
      ._desc = "OFB 2 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_2",
      ._bpos = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_ENT_VAL_2_BP,
      ._mask = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_ENT_VAL_2_MASK,
      ._rval = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_ENT_VAL_2_MASK,
      ._index = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_Q_ORB_ENT_VAL_2_QW,
      ._desc = "OFB 2 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_UNUSED_145_135_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_UNUSED_145_135_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_UNUSED_145_135_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_Q_ORB_TAG_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_Q_ORB_TAG_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_Q_ORB_TAG_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_Q_ORB_TAG_5_QW,
      ._desc = "OFB 5 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_detail[] = {
    { ._name = "Q_ORB_TAG_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TAG_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TAG_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TAG_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TAG_5_QW,
      ._desc = "OFB 5 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TCR_ENTRY_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TCR_ENTRY_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TCR_ENTRY_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TCR_ENTRY_5_QW,
      ._desc = "OFB 5 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_INSTANCE_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_INSTANCE_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_INSTANCE_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_INSTANCE_5_QW,
      ._desc = "OFB 5 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TYPE_ENTRY_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TYPE_ENTRY_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TYPE_ENTRY_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TYPE_ENTRY_5_QW,
      ._desc = "OFB 5 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_RF_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_RF_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_RF_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_RF_5_QW,
      ._desc = "OFB 5 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TO_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TO_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TO_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TO_5_QW,
      ._desc = "OFB 5 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_ADDR_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_ADDR_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_ADDR_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_ADDR_5_QW,
      ._desc = "OFB 5 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TR_ENTRY_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TR_ENTRY_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TR_ENTRY_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_TR_ENTRY_5_QW,
      ._desc = "OFB 5 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_5",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_ENT_VAL_5_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_ENT_VAL_5_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_ENT_VAL_5_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_Q_ORB_ENT_VAL_5_QW,
      ._desc = "OFB 5 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_5_4_c_lo_iommu_detail[] = {
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_4",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TAG_4_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TAG_4_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TAG_4_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TAG_4_QW,
      ._desc = "OFB 4 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_4",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TCR_ENTRY_4_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TCR_ENTRY_4_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TCR_ENTRY_4_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TCR_ENTRY_4_QW,
      ._desc = "OFB 4 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_4",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_INSTANCE_4_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_INSTANCE_4_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_INSTANCE_4_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_INSTANCE_4_QW,
      ._desc = "OFB 4 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_4",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TYPE_ENTRY_4_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TYPE_ENTRY_4_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TYPE_ENTRY_4_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TYPE_ENTRY_4_QW,
      ._desc = "OFB 4 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_4",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_RF_4_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_RF_4_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_RF_4_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_RF_4_QW,
      ._desc = "OFB 4 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_4",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TO_4_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TO_4_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TO_4_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TO_4_QW,
      ._desc = "OFB 4 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_4",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_ADDR_4_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_ADDR_4_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_ADDR_4_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_ADDR_4_QW,
      ._desc = "OFB 4 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_4",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TR_ENTRY_4_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TR_ENTRY_4_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TR_ENTRY_4_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_TR_ENTRY_4_QW,
      ._desc = "OFB 4 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_4",
      ._bpos = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_ENT_VAL_4_BP,
      ._mask = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_ENT_VAL_4_MASK,
      ._rval = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_ENT_VAL_4_MASK,
      ._index = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_Q_ORB_ENT_VAL_4_QW,
      ._desc = "OFB 4 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_UNUSED_145_135_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_UNUSED_145_135_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_UNUSED_145_135_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_Q_ORB_TAG_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_Q_ORB_TAG_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_Q_ORB_TAG_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_Q_ORB_TAG_7_QW,
      ._desc = "OFB 7 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_detail[] = {
    { ._name = "Q_ORB_TAG_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TAG_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TAG_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TAG_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TAG_7_QW,
      ._desc = "OFB 7 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TCR_ENTRY_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TCR_ENTRY_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TCR_ENTRY_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TCR_ENTRY_7_QW,
      ._desc = "OFB 7 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_INSTANCE_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_INSTANCE_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_INSTANCE_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_INSTANCE_7_QW,
      ._desc = "OFB 7 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TYPE_ENTRY_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TYPE_ENTRY_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TYPE_ENTRY_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TYPE_ENTRY_7_QW,
      ._desc = "OFB 7 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_RF_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_RF_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_RF_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_RF_7_QW,
      ._desc = "OFB 7 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TO_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TO_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TO_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TO_7_QW,
      ._desc = "OFB 7 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_ADDR_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_ADDR_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_ADDR_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_ADDR_7_QW,
      ._desc = "OFB 7 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TR_ENTRY_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TR_ENTRY_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TR_ENTRY_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_TR_ENTRY_7_QW,
      ._desc = "OFB 7 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_7",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_ENT_VAL_7_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_ENT_VAL_7_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_ENT_VAL_7_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_Q_ORB_ENT_VAL_7_QW,
      ._desc = "OFB 7 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_7_6_d_lo_iommu_detail[] = {
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_6",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TAG_6_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TAG_6_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TAG_6_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TAG_6_QW,
      ._desc = "OFB 6 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_6",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TCR_ENTRY_6_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TCR_ENTRY_6_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TCR_ENTRY_6_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TCR_ENTRY_6_QW,
      ._desc = "OFB 6 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_6",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_INSTANCE_6_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_INSTANCE_6_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_INSTANCE_6_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_INSTANCE_6_QW,
      ._desc = "OFB 6 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_6",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TYPE_ENTRY_6_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TYPE_ENTRY_6_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TYPE_ENTRY_6_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TYPE_ENTRY_6_QW,
      ._desc = "OFB 6 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_6",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_RF_6_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_RF_6_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_RF_6_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_RF_6_QW,
      ._desc = "OFB 6 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_6",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TO_6_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TO_6_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TO_6_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TO_6_QW,
      ._desc = "OFB 6 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_6",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_ADDR_6_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_ADDR_6_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_ADDR_6_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_ADDR_6_QW,
      ._desc = "OFB 6 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_6",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TR_ENTRY_6_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TR_ENTRY_6_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TR_ENTRY_6_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_TR_ENTRY_6_QW,
      ._desc = "OFB 6 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_6",
      ._bpos = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_ENT_VAL_6_BP,
      ._mask = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_ENT_VAL_6_MASK,
      ._rval = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_ENT_VAL_6_MASK,
      ._index = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_Q_ORB_ENT_VAL_6_QW,
      ._desc = "OFB 6 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_UNUSED_145_135_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_UNUSED_145_135_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_UNUSED_145_135_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_Q_ORB_TAG_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_Q_ORB_TAG_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_Q_ORB_TAG_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_Q_ORB_TAG_9_QW,
      ._desc = "OFB 9 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_detail[] = {
    { ._name = "Q_ORB_TAG_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TAG_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TAG_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TAG_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TAG_9_QW,
      ._desc = "OFB 9 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TCR_ENTRY_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TCR_ENTRY_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TCR_ENTRY_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TCR_ENTRY_9_QW,
      ._desc = "OFB 9 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_INSTANCE_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_INSTANCE_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_INSTANCE_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_INSTANCE_9_QW,
      ._desc = "OFB 9 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TYPE_ENTRY_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TYPE_ENTRY_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TYPE_ENTRY_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TYPE_ENTRY_9_QW,
      ._desc = "OFB 9 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_RF_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_RF_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_RF_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_RF_9_QW,
      ._desc = "OFB 9 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TO_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TO_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TO_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TO_9_QW,
      ._desc = "OFB 9 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_ADDR_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_ADDR_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_ADDR_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_ADDR_9_QW,
      ._desc = "OFB 9 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TR_ENTRY_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TR_ENTRY_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TR_ENTRY_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_TR_ENTRY_9_QW,
      ._desc = "OFB 9 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_9",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_ENT_VAL_9_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_ENT_VAL_9_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_ENT_VAL_9_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_Q_ORB_ENT_VAL_9_QW,
      ._desc = "OFB 9 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_9_8_e_lo_iommu_detail[] = {
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_8",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TAG_8_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TAG_8_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TAG_8_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TAG_8_QW,
      ._desc = "OFB 8 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_8",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TCR_ENTRY_8_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TCR_ENTRY_8_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TCR_ENTRY_8_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TCR_ENTRY_8_QW,
      ._desc = "OFB 8 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_8",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_INSTANCE_8_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_INSTANCE_8_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_INSTANCE_8_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_INSTANCE_8_QW,
      ._desc = "OFB 8 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_8",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TYPE_ENTRY_8_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TYPE_ENTRY_8_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TYPE_ENTRY_8_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TYPE_ENTRY_8_QW,
      ._desc = "OFB 8 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_8",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_RF_8_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_RF_8_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_RF_8_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_RF_8_QW,
      ._desc = "OFB 8 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_8",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TO_8_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TO_8_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TO_8_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TO_8_QW,
      ._desc = "OFB 8 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_8",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_ADDR_8_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_ADDR_8_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_ADDR_8_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_ADDR_8_QW,
      ._desc = "OFB 8 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_8",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TR_ENTRY_8_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TR_ENTRY_8_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TR_ENTRY_8_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_TR_ENTRY_8_QW,
      ._desc = "OFB 8 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_8",
      ._bpos = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_ENT_VAL_8_BP,
      ._mask = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_ENT_VAL_8_MASK,
      ._rval = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_ENT_VAL_8_MASK,
      ._index = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_Q_ORB_ENT_VAL_8_QW,
      ._desc = "OFB 8 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_UNUSED_145_135_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_UNUSED_145_135_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_UNUSED_145_135_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_Q_ORB_TAG_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_Q_ORB_TAG_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_Q_ORB_TAG_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_Q_ORB_TAG_11_QW,
      ._desc = "OFB 11 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_detail[] = {
    { ._name = "Q_ORB_TAG_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TAG_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TAG_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TAG_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TAG_11_QW,
      ._desc = "OFB 11 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TCR_ENTRY_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TCR_ENTRY_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TCR_ENTRY_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TCR_ENTRY_11_QW,
      ._desc = "OFB 11 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_INSTANCE_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_INSTANCE_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_INSTANCE_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_INSTANCE_11_QW,
      ._desc = "OFB 11 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TYPE_ENTRY_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TYPE_ENTRY_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TYPE_ENTRY_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TYPE_ENTRY_11_QW,
      ._desc = "OFB 11 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_RF_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_RF_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_RF_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_RF_11_QW,
      ._desc = "OFB 11 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TO_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TO_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TO_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TO_11_QW,
      ._desc = "OFB 11 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_ADDR_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_ADDR_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_ADDR_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_ADDR_11_QW,
      ._desc = "OFB 11 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TR_ENTRY_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TR_ENTRY_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TR_ENTRY_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_TR_ENTRY_11_QW,
      ._desc = "OFB 11 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_11",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_ENT_VAL_11_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_ENT_VAL_11_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_ENT_VAL_11_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_Q_ORB_ENT_VAL_11_QW,
      ._desc = "OFB 11 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_11_10_f_lo_iommu_detail[] = {
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_10",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TAG_10_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TAG_10_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TAG_10_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TAG_10_QW,
      ._desc = "OFB 10 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_10",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TCR_ENTRY_10_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TCR_ENTRY_10_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TCR_ENTRY_10_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TCR_ENTRY_10_QW,
      ._desc = "OFB 10 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_10",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_INSTANCE_10_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_INSTANCE_10_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_INSTANCE_10_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_INSTANCE_10_QW,
      ._desc = "OFB 10 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_10",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TYPE_ENTRY_10_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TYPE_ENTRY_10_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TYPE_ENTRY_10_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TYPE_ENTRY_10_QW,
      ._desc = "OFB 10 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_10",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_RF_10_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_RF_10_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_RF_10_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_RF_10_QW,
      ._desc = "OFB 10 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_10",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TO_10_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TO_10_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TO_10_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TO_10_QW,
      ._desc = "OFB 10 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_10",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_ADDR_10_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_ADDR_10_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_ADDR_10_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_ADDR_10_QW,
      ._desc = "OFB 10 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_10",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TR_ENTRY_10_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TR_ENTRY_10_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TR_ENTRY_10_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_TR_ENTRY_10_QW,
      ._desc = "OFB 10 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_10",
      ._bpos = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_ENT_VAL_10_BP,
      ._mask = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_ENT_VAL_10_MASK,
      ._rval = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_ENT_VAL_10_MASK,
      ._index = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_Q_ORB_ENT_VAL_10_QW,
      ._desc = "OFB 10 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_UNUSED_145_135_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_UNUSED_145_135_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_UNUSED_145_135_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_Q_ORB_TAG_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_Q_ORB_TAG_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_Q_ORB_TAG_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_Q_ORB_TAG_13_QW,
      ._desc = "OFB 13 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_detail[] = {
    { ._name = "Q_ORB_TAG_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TAG_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TAG_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TAG_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TAG_13_QW,
      ._desc = "OFB 13 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TCR_ENTRY_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TCR_ENTRY_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TCR_ENTRY_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TCR_ENTRY_13_QW,
      ._desc = "OFB 13 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_INSTANCE_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_INSTANCE_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_INSTANCE_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_INSTANCE_13_QW,
      ._desc = "OFB 13 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TYPE_ENTRY_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TYPE_ENTRY_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TYPE_ENTRY_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TYPE_ENTRY_13_QW,
      ._desc = "OFB 13 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_RF_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_RF_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_RF_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_RF_13_QW,
      ._desc = "OFB 13 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TO_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TO_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TO_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TO_13_QW,
      ._desc = "OFB 13 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_ADDR_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_ADDR_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_ADDR_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_ADDR_13_QW,
      ._desc = "OFB 13 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TR_ENTRY_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TR_ENTRY_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TR_ENTRY_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_TR_ENTRY_13_QW,
      ._desc = "OFB 13 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_13",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_ENT_VAL_13_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_ENT_VAL_13_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_ENT_VAL_13_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_Q_ORB_ENT_VAL_13_QW,
      ._desc = "OFB 13 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_13_12_10_lo_iommu_detail[] = {
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_12",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TAG_12_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TAG_12_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TAG_12_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TAG_12_QW,
      ._desc = "OFB 12 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_12",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TCR_ENTRY_12_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TCR_ENTRY_12_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TCR_ENTRY_12_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TCR_ENTRY_12_QW,
      ._desc = "OFB 12 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_12",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_INSTANCE_12_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_INSTANCE_12_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_INSTANCE_12_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_INSTANCE_12_QW,
      ._desc = "OFB 12 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_12",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TYPE_ENTRY_12_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TYPE_ENTRY_12_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TYPE_ENTRY_12_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TYPE_ENTRY_12_QW,
      ._desc = "OFB 12 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_12",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_RF_12_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_RF_12_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_RF_12_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_RF_12_QW,
      ._desc = "OFB 12 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_12",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TO_12_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TO_12_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TO_12_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TO_12_QW,
      ._desc = "OFB 12 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_12",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_ADDR_12_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_ADDR_12_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_ADDR_12_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_ADDR_12_QW,
      ._desc = "OFB 12 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_12",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TR_ENTRY_12_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TR_ENTRY_12_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TR_ENTRY_12_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_TR_ENTRY_12_QW,
      ._desc = "OFB 12 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_12",
      ._bpos = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_ENT_VAL_12_BP,
      ._mask = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_ENT_VAL_12_MASK,
      ._rval = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_ENT_VAL_12_MASK,
      ._index = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_Q_ORB_ENT_VAL_12_QW,
      ._desc = "OFB 12 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_detail[] = {
    { ._name = "UNUSED_145_135",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_UNUSED_145_135_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_UNUSED_145_135_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_UNUSED_145_135_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_UNUSED_145_135_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_Q_ORB_TAG_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_Q_ORB_TAG_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_Q_ORB_TAG_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_Q_ORB_TAG_15_QW,
      ._desc = "OFB 15 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_detail[] = {
    { ._name = "Q_ORB_TAG_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TAG_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TAG_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TAG_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TAG_15_QW,
      ._desc = "OFB 15 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TCR_ENTRY_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TCR_ENTRY_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TCR_ENTRY_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TCR_ENTRY_15_QW,
      ._desc = "OFB 15 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_INSTANCE_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_INSTANCE_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_INSTANCE_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_INSTANCE_15_QW,
      ._desc = "OFB 15 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TYPE_ENTRY_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TYPE_ENTRY_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TYPE_ENTRY_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TYPE_ENTRY_15_QW,
      ._desc = "OFB 15 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_RF_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_RF_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_RF_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_RF_15_QW,
      ._desc = "OFB 15 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TO_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TO_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TO_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TO_15_QW,
      ._desc = "OFB 15 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_ADDR_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_ADDR_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_ADDR_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_ADDR_15_QW,
      ._desc = "OFB 15 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TR_ENTRY_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TR_ENTRY_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TR_ENTRY_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_TR_ENTRY_15_QW,
      ._desc = "OFB 15 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_15",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_ENT_VAL_15_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_ENT_VAL_15_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_ENT_VAL_15_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_Q_ORB_ENT_VAL_15_QW,
      ._desc = "OFB 15 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_ofb_15_14_11_lo_iommu_detail[] = {
    { ._name = "UNUSED_72_62",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_UNUSED_72_62_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_UNUSED_72_62_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_UNUSED_72_62_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_UNUSED_72_62_QW,
      ._desc = "Not Used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TAG_14",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TAG_14_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TAG_14_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TAG_14_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TAG_14_QW,
      ._desc = "OFB 14 - Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TCR_ENTRY_14",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TCR_ENTRY_14_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TCR_ENTRY_14_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TCR_ENTRY_14_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TCR_ENTRY_14_QW,
      ._desc = "OFB 14 - Translation Context id",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_INSTANCE_14",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_INSTANCE_14_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_INSTANCE_14_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_INSTANCE_14_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_INSTANCE_14_QW,
      ._desc = "OFB 14 - Current Instance ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TYPE_ENTRY_14",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TYPE_ENTRY_14_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TYPE_ENTRY_14_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TYPE_ENTRY_14_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TYPE_ENTRY_14_QW,
      ._desc = "OFB 14 - Destination Pend Queue Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RF_14",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_RF_14_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_RF_14_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_RF_14_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_RF_14_QW,
      ._desc = "OFB 14 - Re-Fetch flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TO_14",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TO_14_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TO_14_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TO_14_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TO_14_QW,
      ._desc = "OFB 14 - Timeout flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ADDR_14",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_ADDR_14_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_ADDR_14_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_ADDR_14_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_ADDR_14_QW,
      ._desc = "OFB 14 - PTEC Set and Way for update",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_TR_ENTRY_14",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TR_ENTRY_14_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TR_ENTRY_14_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TR_ENTRY_14_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_TR_ENTRY_14_QW,
      ._desc = "OFB 14 - Entry Transaction ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_ENT_VAL_14",
      ._bpos = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_ENT_VAL_14_BP,
      ._mask = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_ENT_VAL_14_MASK,
      ._rval = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_ENT_VAL_14_MASK,
      ._index = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_Q_ORB_ENT_VAL_14_QW,
      ._desc = "OFB 14 - Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_npt_rsp_12_hi_iommu_detail[] = {
    { ._name = "Q_NPT_IOMMU_RSP_SB",
      ._bpos = AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_Q_NPT_IOMMU_RSP_SB_BP,
      ._mask = AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_Q_NPT_IOMMU_RSP_SB_MASK,
      ._rval = AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_Q_NPT_IOMMU_RSP_SB_MASK,
      ._index = AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_Q_NPT_IOMMU_RSP_SB_QW,
      ._desc = "NPT Response interface Sideband Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NPT_IOMMU_RSP_FLIT",
      ._bpos = AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_Q_NPT_IOMMU_RSP_FLIT_BP,
      ._mask = AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_Q_NPT_IOMMU_RSP_FLIT_MASK,
      ._rval = AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_Q_NPT_IOMMU_RSP_FLIT_MASK,
      ._index = AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_Q_NPT_IOMMU_RSP_FLIT_QW,
      ._desc = "NPT Response interface FLIT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_npt_rsp_12_mid_iommu_detail[] = {
    { ._name = "Q_NPT_IOMMU_RSP_FLIT",
      ._bpos = AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_Q_NPT_IOMMU_RSP_FLIT_BP,
      ._mask = AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_Q_NPT_IOMMU_RSP_FLIT_MASK,
      ._rval = AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_Q_NPT_IOMMU_RSP_FLIT_MASK,
      ._index = AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_Q_NPT_IOMMU_RSP_FLIT_QW,
      ._desc = "NPT Response interface FLIT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_npt_rsp_12_lo_iommu_detail[] = {
    { ._name = "Q_NPT_IOMMU_RSP_FLIT",
      ._bpos = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_Q_NPT_IOMMU_RSP_FLIT_BP,
      ._mask = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_Q_NPT_IOMMU_RSP_FLIT_MASK,
      ._rval = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_Q_NPT_IOMMU_RSP_FLIT_MASK,
      ._index = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_Q_NPT_IOMMU_RSP_FLIT_QW,
      ._desc = "NPT Response interface FLIT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_mux_sel_13_hi_iommu_detail[] = {
    { ._name = "Q_LM_RAT_REQ_SB",
      ._bpos = AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_Q_LM_RAT_REQ_SB_BP,
      ._mask = AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_Q_LM_RAT_REQ_SB_MASK,
      ._rval = AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_Q_LM_RAT_REQ_SB_MASK,
      ._index = AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_Q_LM_RAT_REQ_SB_QW,
      ._desc = "RAT Request interface Sideband Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LM_RAT_REQ_FLIT",
      ._bpos = AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_Q_LM_RAT_REQ_FLIT_BP,
      ._mask = AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_Q_LM_RAT_REQ_FLIT_MASK,
      ._rval = AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSTDATA_QW2 & AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_Q_LM_RAT_REQ_FLIT_MASK,
      ._index = AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_Q_LM_RAT_REQ_FLIT_QW,
      ._desc = "RAT Request interface FLIT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_mux_sel_13_mid_iommu_detail[] = {
    { ._name = "Q_LM_RAT_REQ_FLIT",
      ._bpos = AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_Q_LM_RAT_REQ_FLIT_BP,
      ._mask = AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_Q_LM_RAT_REQ_FLIT_MASK,
      ._rval = AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_RSTDATA_QW1 & AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_Q_LM_RAT_REQ_FLIT_MASK,
      ._index = AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_Q_LM_RAT_REQ_FLIT_QW,
      ._desc = "RAT Request interface FLIT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_mux_sel_13_lo_iommu_detail[] = {
    { ._name = "Q_LM_RAT_REQ_FLIT",
      ._bpos = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_Q_LM_RAT_REQ_FLIT_BP,
      ._mask = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_Q_LM_RAT_REQ_FLIT_MASK,
      ._rval = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_RSTDATA & AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_Q_LM_RAT_REQ_FLIT_MASK,
      ._index = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_Q_LM_RAT_REQ_FLIT_QW,
      ._desc = "RAT Request interface FLIT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_tbl_tcr_detail[] = {
    { ._name = "CONTEXT_EN",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_CONTEXT_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_CONTEXT_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_CONTEXT_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_CONTEXT_EN_QW,
      ._desc = "Setting to 1 enables this translation context",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "PTE_RD_PI_RO",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_RO_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_RO_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_RO_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_RO_QW,
      ._desc = "Page Table Entry Get Request Relaxed Ordering Hints",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "PTE_RD_PI_TPH",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_TPH_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_TPH_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_TPH_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_TPH_QW,
      ._desc = "Page Table Entry Get Request Transaction Processing Hints",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "PTE_RD_PI_TC",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_TC_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_TC_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_TC_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_PTE_RD_PI_TC_QW,
      ._desc = "Page Table Entry Get Request Transaction Translation Context",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "SA",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_SA_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_SA_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_SA_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_SA_QW,
      ._desc = "Suppress all page fault errors",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "SE",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_SE_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_SE_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_SE_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_SE_QW,
      ._desc = "Suppress page fault errors",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "PG_SIZE",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_PG_SIZE_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_PG_SIZE_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_PG_SIZE_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_PG_SIZE_QW,
      ._desc = "Page Size to be used in 1-Level Page Table",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "PG_MODE",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_PG_MODE_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_PG_MODE_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_PG_MODE_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_PG_MODE_QW,
      ._desc = "Specify depth of page tables for this translation context:0b = 2 Level Page Table  1b = 1 Level Page Table (default page size 2MB)",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "PT_ROOT_PTR_47_12",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_PT_ROOT_PTR_47_12_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_PT_ROOT_PTR_47_12_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_PT_ROOT_PTR_47_12_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_PT_ROOT_PTR_47_12_QW,
      ._desc = "Page Table root pointer",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "IGNORED_11_0",
      ._bpos = AR_NIC_IOMMU_CFG_TBL_TCR_IGNORED_11_0_BP,
      ._mask = AR_NIC_IOMMU_CFG_TBL_TCR_IGNORED_11_0_MASK,
      ._rval = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA & AR_NIC_IOMMU_CFG_TBL_TCR_IGNORED_11_0_MASK,
      ._index = AR_NIC_IOMMU_CFG_TBL_TCR_IGNORED_11_0_QW,
      ._desc = "This field is available to software",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_params_detail[] = {
    { ._name = "IOMMU_CHN_TIMEOUT",
      ._bpos = AR_NIC_IOMMU_CFG_PARAMS_IOMMU_CHN_TIMEOUT_BP,
      ._mask = AR_NIC_IOMMU_CFG_PARAMS_IOMMU_CHN_TIMEOUT_MASK,
      ._rval = AR_NIC_IOMMU_CFG_PARAMS_RSTDATA & AR_NIC_IOMMU_CFG_PARAMS_IOMMU_CHN_TIMEOUT_MASK,
      ._index = AR_NIC_IOMMU_CFG_PARAMS_IOMMU_CHN_TIMEOUT_QW,
      ._desc = "Initial timeout interval for IOMMU channel interfaces",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "IOMMU_CHN_TO_EN",
      ._bpos = AR_NIC_IOMMU_CFG_PARAMS_IOMMU_CHN_TO_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_PARAMS_IOMMU_CHN_TO_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_PARAMS_RSTDATA & AR_NIC_IOMMU_CFG_PARAMS_IOMMU_CHN_TO_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_PARAMS_IOMMU_CHN_TO_EN_QW,
      ._desc = "IOMMU Channel Time Out Enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PTE_RE_FETCH_MODE",
      ._bpos = AR_NIC_IOMMU_CFG_PARAMS_PTE_RE_FETCH_MODE_BP,
      ._mask = AR_NIC_IOMMU_CFG_PARAMS_PTE_RE_FETCH_MODE_MASK,
      ._rval = AR_NIC_IOMMU_CFG_PARAMS_RSTDATA & AR_NIC_IOMMU_CFG_PARAMS_PTE_RE_FETCH_MODE_MASK,
      ._index = AR_NIC_IOMMU_CFG_PARAMS_PTE_RE_FETCH_MODE_QW,
      ._desc = "If this bit is set, a PTE Cacheline re-fetch will occur if a translation request encounters a cached page table entry with a Not Present state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "INV_PTE_SAFE_MODE",
      ._bpos = AR_NIC_IOMMU_CFG_PARAMS_INV_PTE_SAFE_MODE_BP,
      ._mask = AR_NIC_IOMMU_CFG_PARAMS_INV_PTE_SAFE_MODE_MASK,
      ._rval = AR_NIC_IOMMU_CFG_PARAMS_RSTDATA & AR_NIC_IOMMU_CFG_PARAMS_INV_PTE_SAFE_MODE_MASK,
      ._index = AR_NIC_IOMMU_CFG_PARAMS_INV_PTE_SAFE_MODE_QW,
      ._desc = "Blocks all new translation requests when INVALIDATE_IOMMU_PAGES command is active in the Command Queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COHERENCY",
      ._bpos = AR_NIC_IOMMU_CFG_PARAMS_COHERENCY_BP,
      ._mask = AR_NIC_IOMMU_CFG_PARAMS_COHERENCY_MASK,
      ._rval = AR_NIC_IOMMU_CFG_PARAMS_RSTDATA & AR_NIC_IOMMU_CFG_PARAMS_COHERENCY_MASK,
      ._index = AR_NIC_IOMMU_CFG_PARAMS_COHERENCY_QW,
      ._desc = "This field indicates if IOMMU access to the page table structures are coherent (snooped) or not",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "EVENT_LOG_EN",
      ._bpos = AR_NIC_IOMMU_CFG_PARAMS_EVENT_LOG_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_PARAMS_EVENT_LOG_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_PARAMS_RSTDATA & AR_NIC_IOMMU_CFG_PARAMS_EVENT_LOG_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_PARAMS_EVENT_LOG_EN_QW,
      ._desc = "Event log enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PTE_FORMAT",
      ._bpos = AR_NIC_IOMMU_CFG_PARAMS_PTE_FORMAT_BP,
      ._mask = AR_NIC_IOMMU_CFG_PARAMS_PTE_FORMAT_MASK,
      ._rval = AR_NIC_IOMMU_CFG_PARAMS_RSTDATA & AR_NIC_IOMMU_CFG_PARAMS_PTE_FORMAT_MASK,
      ._index = AR_NIC_IOMMU_CFG_PARAMS_PTE_FORMAT_QW,
      ._desc = "0= Version 1 PTE Format 1= Version 2 PTE Format",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "IOMMU_EN",
      ._bpos = AR_NIC_IOMMU_CFG_PARAMS_IOMMU_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_PARAMS_IOMMU_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_PARAMS_RSTDATA & AR_NIC_IOMMU_CFG_PARAMS_IOMMU_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_PARAMS_IOMMU_EN_QW,
      ._desc = "When set to 1, IOMMU is enabled",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_crdts_detail[] = {
    { ._name = "PARB_CRDTS",
      ._bpos = AR_NIC_IOMMU_CFG_CRDTS_PARB_CRDTS_BP,
      ._mask = AR_NIC_IOMMU_CFG_CRDTS_PARB_CRDTS_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CRDTS_RSTDATA & AR_NIC_IOMMU_CFG_CRDTS_PARB_CRDTS_MASK,
      ._index = AR_NIC_IOMMU_CFG_CRDTS_PARB_CRDTS_QW,
      ._desc = "Maximum outstanding Request FLITS to PARB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RAT_CRDTS",
      ._bpos = AR_NIC_IOMMU_CFG_CRDTS_RAT_CRDTS_BP,
      ._mask = AR_NIC_IOMMU_CFG_CRDTS_RAT_CRDTS_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CRDTS_RSTDATA & AR_NIC_IOMMU_CFG_CRDTS_RAT_CRDTS_MASK,
      ._index = AR_NIC_IOMMU_CFG_CRDTS_RAT_CRDTS_QW,
      ._desc = "Maximum outstanding Request FLITS to RAT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_cq_detail[] = {
    { ._name = "CQCMD_TIMEOUT",
      ._bpos = AR_NIC_IOMMU_CFG_CQ_CQCMD_TIMEOUT_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQ_CQCMD_TIMEOUT_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQ_RSTDATA & AR_NIC_IOMMU_CFG_CQ_CQCMD_TIMEOUT_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQ_CQCMD_TIMEOUT_QW,
      ._desc = "Initial time out interval, for Command Queue Command Execution",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CQC_TIMER_PRESCALE",
      ._bpos = AR_NIC_IOMMU_CFG_CQ_CQC_TIMER_PRESCALE_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQ_CQC_TIMER_PRESCALE_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQ_RSTDATA & AR_NIC_IOMMU_CFG_CQ_CQC_TIMER_PRESCALE_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQ_CQC_TIMER_PRESCALE_QW,
      ._desc = "Command Queue Command Timer Prescale 0000b = Decrement every clock period 0001b = Decrement every 2 clock periods 0010b = Decrement every 4 clock periods ",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CW_SINGLE_STEP",
      ._bpos = AR_NIC_IOMMU_CFG_CQ_CW_SINGLE_STEP_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQ_CW_SINGLE_STEP_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQ_RSTDATA & AR_NIC_IOMMU_CFG_CQ_CW_SINGLE_STEP_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQ_CW_SINGLE_STEP_QW,
      ._desc = "Completion Wait Command Single Step Issue",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CW_IRQ_IDX",
      ._bpos = AR_NIC_IOMMU_CFG_CQ_CW_IRQ_IDX_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQ_CW_IRQ_IDX_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQ_RSTDATA & AR_NIC_IOMMU_CFG_CQ_CW_IRQ_IDX_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQ_CW_IRQ_IDX_QW,
      ._desc = "Completion Wait Command In-Band Interrupt Index",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CW_IRQ_EN",
      ._bpos = AR_NIC_IOMMU_CFG_CQ_CW_IRQ_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQ_CW_IRQ_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQ_RSTDATA & AR_NIC_IOMMU_CFG_CQ_CW_IRQ_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQ_CW_IRQ_EN_QW,
      ._desc = "Completion Wait Command In-Band Interrupt Enable",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "CW_TIMEOUT_EN",
      ._bpos = AR_NIC_IOMMU_CFG_CQ_CW_TIMEOUT_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQ_CW_TIMEOUT_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQ_RSTDATA & AR_NIC_IOMMU_CFG_CQ_CW_TIMEOUT_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQ_CW_TIMEOUT_EN_QW,
      ._desc = "Completion Wait Command Timeout Enable",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "IM_TIMEOUT_EN",
      ._bpos = AR_NIC_IOMMU_CFG_CQ_IM_TIMEOUT_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQ_IM_TIMEOUT_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQ_RSTDATA & AR_NIC_IOMMU_CFG_CQ_IM_TIMEOUT_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQ_IM_TIMEOUT_EN_QW,
      ._desc = "Invalidate Memory Domain Handle Command Timeout Enable",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = "IP_TIMEOUT_EN",
      ._bpos = AR_NIC_IOMMU_CFG_CQ_IP_TIMEOUT_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQ_IP_TIMEOUT_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQ_RSTDATA & AR_NIC_IOMMU_CFG_CQ_IP_TIMEOUT_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQ_IP_TIMEOUT_EN_QW,
      ._desc = "Invalidate Page Table Entry Command Timeout Enable",
      ._type_bitmsk = 0x0000000000000801ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_cqrp_detail[] = {
    { ._name = "CMD_RD_PTR",
      ._bpos = AR_NIC_IOMMU_CFG_CQRP_CMD_RD_PTR_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQRP_CMD_RD_PTR_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQRP_RSTDATA & AR_NIC_IOMMU_CFG_CQRP_CMD_RD_PTR_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQRP_CMD_RD_PTR_QW,
      ._desc = "Command queue read pointer",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_cqwp_detail[] = {
    { ._name = "CMD_WR_PTR",
      ._bpos = AR_NIC_IOMMU_CFG_CQWP_CMD_WR_PTR_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQWP_CMD_WR_PTR_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQWP_RSTDATA & AR_NIC_IOMMU_CFG_CQWP_CMD_WR_PTR_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQWP_CMD_WR_PTR_QW,
      ._desc = "Command queue write pointer",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_cqr_detail[] = {
    { ._name = "CW_RESET",
      ._bpos = AR_NIC_IOMMU_CFG_CQR_CW_RESET_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQR_CW_RESET_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQR_RSTDATA & AR_NIC_IOMMU_CFG_CQR_CW_RESET_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQR_CW_RESET_QW,
      ._desc = "Reset Completion Wait Command Manager, and Flush Command",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "W1C"
    },
    { ._name = "IM_RESET",
      ._bpos = AR_NIC_IOMMU_CFG_CQR_IM_RESET_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQR_IM_RESET_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQR_RSTDATA & AR_NIC_IOMMU_CFG_CQR_IM_RESET_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQR_IM_RESET_QW,
      ._desc = "Invalidate MDH Command Timed out reset",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "W1C"
    },
    { ._name = "IP_RESET",
      ._bpos = AR_NIC_IOMMU_CFG_CQR_IP_RESET_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQR_IP_RESET_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQR_RSTDATA & AR_NIC_IOMMU_CFG_CQR_IP_RESET_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQR_IP_RESET_QW,
      ._desc = "Invalidate PTE Cache Command Timed out reset",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "W1C"
    },
    { ._name = "CMD_QUEUE_RESET",
      ._bpos = AR_NIC_IOMMU_CFG_CQR_CMD_QUEUE_RESET_BP,
      ._mask = AR_NIC_IOMMU_CFG_CQR_CMD_QUEUE_RESET_MASK,
      ._rval = AR_NIC_IOMMU_CFG_CQR_RSTDATA & AR_NIC_IOMMU_CFG_CQR_CMD_QUEUE_RESET_MASK,
      ._index = AR_NIC_IOMMU_CFG_CQR_CMD_QUEUE_RESET_QW,
      ._desc = "Storing 1 to this bit forces the IOMMU to reset the command queue hardware read and write pointers to zero",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "W1C"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_elog_detail[] = {
    { ._name = "IRQ_IDX",
      ._bpos = AR_NIC_IOMMU_CFG_ELOG_IRQ_IDX_BP,
      ._mask = AR_NIC_IOMMU_CFG_ELOG_IRQ_IDX_MASK,
      ._rval = AR_NIC_IOMMU_CFG_ELOG_RSTDATA & AR_NIC_IOMMU_CFG_ELOG_IRQ_IDX_MASK,
      ._index = AR_NIC_IOMMU_CFG_ELOG_IRQ_IDX_QW,
      ._desc = "Event Log In-band Interrupt Index",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "IRQ_EN",
      ._bpos = AR_NIC_IOMMU_CFG_ELOG_IRQ_EN_BP,
      ._mask = AR_NIC_IOMMU_CFG_ELOG_IRQ_EN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_ELOG_RSTDATA & AR_NIC_IOMMU_CFG_ELOG_IRQ_EN_MASK,
      ._index = AR_NIC_IOMMU_CFG_ELOG_IRQ_EN_QW,
      ._desc = "Event Log In-band Interrupt enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "EVENT_RO",
      ._bpos = AR_NIC_IOMMU_CFG_ELOG_EVENT_RO_BP,
      ._mask = AR_NIC_IOMMU_CFG_ELOG_EVENT_RO_MASK,
      ._rval = AR_NIC_IOMMU_CFG_ELOG_RSTDATA & AR_NIC_IOMMU_CFG_ELOG_EVENT_RO_MASK,
      ._index = AR_NIC_IOMMU_CFG_ELOG_EVENT_RO_QW,
      ._desc = "Event Log entry Put requests Relaxed Ordering mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "EVENT_LEN",
      ._bpos = AR_NIC_IOMMU_CFG_ELOG_EVENT_LEN_BP,
      ._mask = AR_NIC_IOMMU_CFG_ELOG_EVENT_LEN_MASK,
      ._rval = AR_NIC_IOMMU_CFG_ELOG_RSTDATA & AR_NIC_IOMMU_CFG_ELOG_EVENT_LEN_MASK,
      ._index = AR_NIC_IOMMU_CFG_ELOG_EVENT_LEN_QW,
      ._desc = "Specifies the length of the event log in power of 2 increments: 0001b = 2 entries ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "EVENT_BASE",
      ._bpos = AR_NIC_IOMMU_CFG_ELOG_EVENT_BASE_BP,
      ._mask = AR_NIC_IOMMU_CFG_ELOG_EVENT_BASE_MASK,
      ._rval = AR_NIC_IOMMU_CFG_ELOG_RSTDATA & AR_NIC_IOMMU_CFG_ELOG_EVENT_BASE_MASK,
      ._index = AR_NIC_IOMMU_CFG_ELOG_EVENT_BASE_QW,
      ._desc = "Event log base address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "EVENT_TC",
      ._bpos = AR_NIC_IOMMU_CFG_ELOG_EVENT_TC_BP,
      ._mask = AR_NIC_IOMMU_CFG_ELOG_EVENT_TC_MASK,
      ._rval = AR_NIC_IOMMU_CFG_ELOG_RSTDATA & AR_NIC_IOMMU_CFG_ELOG_EVENT_TC_MASK,
      ._index = AR_NIC_IOMMU_CFG_ELOG_EVENT_TC_QW,
      ._desc = "Event log entry Translation Context",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_elog_rp_detail[] = {
    { ._name = "EVENT_RD_PTR",
      ._bpos = AR_NIC_IOMMU_CFG_ELOG_RP_EVENT_RD_PTR_BP,
      ._mask = AR_NIC_IOMMU_CFG_ELOG_RP_EVENT_RD_PTR_MASK,
      ._rval = AR_NIC_IOMMU_CFG_ELOG_RP_RSTDATA & AR_NIC_IOMMU_CFG_ELOG_RP_EVENT_RD_PTR_MASK,
      ._index = AR_NIC_IOMMU_CFG_ELOG_RP_EVENT_RD_PTR_QW,
      ._desc = "Specifies the 128 bit aligned offset from the event log base address register that is read next by software",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_cfg_elog_wp_detail[] = {
    { ._name = "EVENT_WR_PTR",
      ._bpos = AR_NIC_IOMMU_CFG_ELOG_WP_EVENT_WR_PTR_BP,
      ._mask = AR_NIC_IOMMU_CFG_ELOG_WP_EVENT_WR_PTR_MASK,
      ._rval = AR_NIC_IOMMU_CFG_ELOG_WP_RSTDATA & AR_NIC_IOMMU_CFG_ELOG_WP_EVENT_WR_PTR_MASK,
      ._index = AR_NIC_IOMMU_CFG_ELOG_WP_EVENT_WR_PTR_QW,
      ._desc = "Specifies the 128 bit aligned offset from the event log base address register that is written next by the IOMMU when an event is generated",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_sts_detail[] = {
    { ._name = "RAT_CHN_CRDTS",
      ._bpos = AR_NIC_IOMMU_STS_RAT_CHN_CRDTS_BP,
      ._mask = AR_NIC_IOMMU_STS_RAT_CHN_CRDTS_MASK,
      ._rval = AR_NIC_IOMMU_STS_RSTDATA & AR_NIC_IOMMU_STS_RAT_CHN_CRDTS_MASK,
      ._index = AR_NIC_IOMMU_STS_RAT_CHN_CRDTS_QW,
      ._desc = "Current RAT Request Channel Credit Count",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "PARB_CHN_CRDTS",
      ._bpos = AR_NIC_IOMMU_STS_PARB_CHN_CRDTS_BP,
      ._mask = AR_NIC_IOMMU_STS_PARB_CHN_CRDTS_MASK,
      ._rval = AR_NIC_IOMMU_STS_RSTDATA & AR_NIC_IOMMU_STS_PARB_CHN_CRDTS_MASK,
      ._index = AR_NIC_IOMMU_STS_PARB_CHN_CRDTS_QW,
      ._desc = "Current PARB Request Channel Credit Count",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "RESERVED_7_3",
      ._bpos = AR_NIC_IOMMU_STS_RESERVED_7_3_BP,
      ._mask = AR_NIC_IOMMU_STS_RESERVED_7_3_MASK,
      ._rval = AR_NIC_IOMMU_STS_RSTDATA & AR_NIC_IOMMU_STS_RESERVED_7_3_MASK,
      ._index = AR_NIC_IOMMU_STS_RESERVED_7_3_QW,
      ._desc = "Reserved",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "TRP_HOLD",
      ._bpos = AR_NIC_IOMMU_STS_TRP_HOLD_BP,
      ._mask = AR_NIC_IOMMU_STS_TRP_HOLD_MASK,
      ._rval = AR_NIC_IOMMU_STS_RSTDATA & AR_NIC_IOMMU_STS_TRP_HOLD_MASK,
      ._index = AR_NIC_IOMMU_STS_TRP_HOLD_QW,
      ._desc = "The Translation Request pipeline is stalled for outstanding PTE Get requests or a busy PTE cache",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "TRP_EMPTY",
      ._bpos = AR_NIC_IOMMU_STS_TRP_EMPTY_BP,
      ._mask = AR_NIC_IOMMU_STS_TRP_EMPTY_MASK,
      ._rval = AR_NIC_IOMMU_STS_RSTDATA & AR_NIC_IOMMU_STS_TRP_EMPTY_MASK,
      ._index = AR_NIC_IOMMU_STS_TRP_EMPTY_QW,
      ._desc = "The Translation Request pipeline has no valid requests",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "TRP_ACTIVE",
      ._bpos = AR_NIC_IOMMU_STS_TRP_ACTIVE_BP,
      ._mask = AR_NIC_IOMMU_STS_TRP_ACTIVE_MASK,
      ._rval = AR_NIC_IOMMU_STS_RSTDATA & AR_NIC_IOMMU_STS_TRP_ACTIVE_MASK,
      ._index = AR_NIC_IOMMU_STS_TRP_ACTIVE_QW,
      ._desc = "The Translation Request pipeline has valid requests in progress",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_sts_cq_detail[] = {
    { ._name = "CQ_CMD_VAL",
      ._bpos = AR_NIC_IOMMU_STS_CQ_CQ_CMD_VAL_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_CQ_CMD_VAL_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_CQ_CMD_VAL_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_CQ_CMD_VAL_QW,
      ._desc = "Command Queue Valid Commands",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "RAT_FLUSH_SENT",
      ._bpos = AR_NIC_IOMMU_STS_CQ_RAT_FLUSH_SENT_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_RAT_FLUSH_SENT_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_RAT_FLUSH_SENT_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_RAT_FLUSH_SENT_QW,
      ._desc = "RAT Flush Packet Sent",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "WC_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_STS_CQ_WC_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_WC_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_WC_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_WC_COMP_WAIT_ACK_QW,
      ._desc = "Write Combining Completion Wait Command Response Received",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "WC_COMP_WAIT_SENT",
      ._bpos = AR_NIC_IOMMU_STS_CQ_WC_COMP_WAIT_SENT_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_WC_COMP_WAIT_SENT_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_WC_COMP_WAIT_SENT_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_WC_COMP_WAIT_SENT_QW,
      ._desc = "Write Combining Completion Wait Command Request Sent",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "CQ_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_STS_CQ_CQ_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_CQ_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_CQ_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_CQ_COMP_WAIT_ACK_QW,
      ._desc = "Completion Queue Completion Wait Command Response Received",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "CQ_COMP_WAIT_SENT",
      ._bpos = AR_NIC_IOMMU_STS_CQ_CQ_COMP_WAIT_SENT_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_CQ_COMP_WAIT_SENT_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_CQ_COMP_WAIT_SENT_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_CQ_COMP_WAIT_SENT_QW,
      ._desc = "Completion Queue Completion Wait Command Request Sent",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "BTE_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_STS_CQ_BTE_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_BTE_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_BTE_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_BTE_COMP_WAIT_ACK_QW,
      ._desc = "Block Transfer Engine Completion Wait Command Response Received",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "BTE_COMP_WAIT_SENT",
      ._bpos = AR_NIC_IOMMU_STS_CQ_BTE_COMP_WAIT_SENT_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_BTE_COMP_WAIT_SENT_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_BTE_COMP_WAIT_SENT_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_BTE_COMP_WAIT_SENT_QW,
      ._desc = "Block Transfer Engine Completion Wait Command Request Sent",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "RAT_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_STS_CQ_RAT_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_RAT_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_RAT_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_RAT_COMP_WAIT_ACK_QW,
      ._desc = "Remote Address Translation Completion Wait Command Response Received",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "RAT_COMP_WAIT_SENT",
      ._bpos = AR_NIC_IOMMU_STS_CQ_RAT_COMP_WAIT_SENT_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_RAT_COMP_WAIT_SENT_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_RAT_COMP_WAIT_SENT_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_RAT_COMP_WAIT_SENT_QW,
      ._desc = "Remote Address Translation Completion Wait Command Request Sent",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "NPT_COMP_WAIT_ACK",
      ._bpos = AR_NIC_IOMMU_STS_CQ_NPT_COMP_WAIT_ACK_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_NPT_COMP_WAIT_ACK_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_NPT_COMP_WAIT_ACK_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_NPT_COMP_WAIT_ACK_QW,
      ._desc = "Non-Posted Table Completion Wait Command Response Received",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "NPT_COMP_WAIT_SENT",
      ._bpos = AR_NIC_IOMMU_STS_CQ_NPT_COMP_WAIT_SENT_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_NPT_COMP_WAIT_SENT_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_NPT_COMP_WAIT_SENT_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_NPT_COMP_WAIT_SENT_QW,
      ._desc = "Non-Posted Table Completion Wait Command Request Sent",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "COMP_WAIT_DONE",
      ._bpos = AR_NIC_IOMMU_STS_CQ_COMP_WAIT_DONE_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_COMP_WAIT_DONE_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_COMP_WAIT_DONE_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_COMP_WAIT_DONE_QW,
      ._desc = "A COMPLETION_WAIT command has completed",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "COMP_WAIT_TO",
      ._bpos = AR_NIC_IOMMU_STS_CQ_COMP_WAIT_TO_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_COMP_WAIT_TO_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_COMP_WAIT_TO_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_COMP_WAIT_TO_QW,
      ._desc = "Completion Wait Command Timed out",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "INVAL_PTE_HW_ERR",
      ._bpos = AR_NIC_IOMMU_STS_CQ_INVAL_PTE_HW_ERR_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_INVAL_PTE_HW_ERR_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_INVAL_PTE_HW_ERR_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_INVAL_PTE_HW_ERR_QW,
      ._desc = "Invalidate PTE Cache Command Hardware Error",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "INVAL_PTE_TO",
      ._bpos = AR_NIC_IOMMU_STS_CQ_INVAL_PTE_TO_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_INVAL_PTE_TO_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_INVAL_PTE_TO_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_INVAL_PTE_TO_QW,
      ._desc = "Invalidate PTE Cache Command Timed out",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "INVAL_MDH_TO",
      ._bpos = AR_NIC_IOMMU_STS_CQ_INVAL_MDH_TO_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_INVAL_MDH_TO_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_INVAL_MDH_TO_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_INVAL_MDH_TO_QW,
      ._desc = "Invalidate MDH Command Timed out",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "RESERVED_3",
      ._bpos = AR_NIC_IOMMU_STS_CQ_RESERVED_3_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_RESERVED_3_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_RESERVED_3_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_RESERVED_3_QW,
      ._desc = "Reserved",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "COMP_WAIT_ACT",
      ._bpos = AR_NIC_IOMMU_STS_CQ_COMP_WAIT_ACT_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_COMP_WAIT_ACT_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_COMP_WAIT_ACT_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_COMP_WAIT_ACT_QW,
      ._desc = "Completion Wait Command in progress",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "INVAL_MDH_ACT",
      ._bpos = AR_NIC_IOMMU_STS_CQ_INVAL_MDH_ACT_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_INVAL_MDH_ACT_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_INVAL_MDH_ACT_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_INVAL_MDH_ACT_QW,
      ._desc = "Invalidate MDH Command In Progress",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = "INVAL_PTE_ACT",
      ._bpos = AR_NIC_IOMMU_STS_CQ_INVAL_PTE_ACT_BP,
      ._mask = AR_NIC_IOMMU_STS_CQ_INVAL_PTE_ACT_MASK,
      ._rval = AR_NIC_IOMMU_STS_CQ_RSTDATA & AR_NIC_IOMMU_STS_CQ_INVAL_PTE_ACT_MASK,
      ._index = AR_NIC_IOMMU_STS_CQ_INVAL_PTE_ACT_QW,
      ._desc = "Invalidate PTE Cache Command In Progress",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_flg_detail[] = {
    { ._name = "EVENT_ILL_CMD_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_EVENT_ILL_CMD_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_EVENT_ILL_CMD_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_EVENT_ILL_CMD_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_EVENT_ILL_CMD_OF_QW,
      ._desc = "When read as 1, an event log Illegal Command event overflow has occurred",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "EVENT_HW_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_EVENT_HW_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_EVENT_HW_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_EVENT_HW_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_EVENT_HW_OF_QW,
      ._desc = "When read as 1, an event log Hardware Error event overflow has occurred",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "EVENT_IOPG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_EVENT_IOPG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_EVENT_IOPG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_EVENT_IOPG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_EVENT_IOPG_OF_QW,
      ._desc = "When read as 1, an event log IO Page Fault event overflow has occurred",
      ._type_bitmsk = 0x0000000000020011ull,
      ._access = "RW1"
    },
    { ._name = "EVENT_TC_INVAL_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_EVENT_TC_INVAL_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_EVENT_TC_INVAL_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_EVENT_TC_INVAL_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_EVENT_TC_INVAL_OF_QW,
      ._desc = "When read as 1, an event log TC Invalid event overflow has occurred",
      ._type_bitmsk = 0x0000000000020011ull,
      ._access = "RW1"
    },
    { ._name = "PTE_RSP_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_PTE_RSP_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_PTE_RSP_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_PTE_RSP_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_PTE_RSP_ERR_QW,
      ._desc = "A PTE Get response was received that did not match a PTE OFB(possibly a stale response after an OFB timeout)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "PTE_PKT_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_PTE_PKT_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_PTE_PKT_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_PTE_PKT_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_PTE_PKT_ERR_QW,
      ._desc = "A PTE Get response was received without payload flits",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "PI_CHN_TO",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_PI_CHN_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_PI_CHN_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_PI_CHN_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_PI_CHN_TO_QW,
      ._desc = "A Processor Interface Request or Response channel has stalled",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "ILLEGAL_CMD",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_ILLEGAL_CMD_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_ILLEGAL_CMD_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_ILLEGAL_CMD_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_ILLEGAL_CMD_QW,
      ._desc = "An illegal command was encountered in the Command Queue",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CQ_IP_HW_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_CQ_IP_HW_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_CQ_IP_HW_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_CQ_IP_HW_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_CQ_IP_HW_ERR_QW,
      ._desc = "The execution of an Invalidate PTE command resulted in a Multiple Bit Error in either the Translation Context Register read, or the PTE Cache read",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CQ_CMD_TO",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_CQ_CMD_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_CQ_CMD_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_CQ_CMD_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_CQ_CMD_TO_QW,
      ._desc = "A Command Queue Command has not completed before the CQCmd Timer expired",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "EVENT_LOG_UF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_EVENT_LOG_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_EVENT_LOG_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_EVENT_LOG_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_EVENT_LOG_UF_QW,
      ._desc = "The Event Log FIFO underflowed",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "EVENT_LOG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_EVENT_LOG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_EVENT_LOG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_EVENT_LOG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_EVENT_LOG_OF_QW,
      ._desc = "The Event Log FIFO overflowed(",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RSP_FIFO_UF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_RSP_FIFO_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_RSP_FIFO_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_RSP_FIFO_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_RSP_FIFO_UF_QW,
      ._desc = "The NPT interface response FIFO underflowed",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "RSP_FIFO_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_RSP_FIFO_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_RSP_FIFO_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_RSP_FIFO_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_RSP_FIFO_OF_QW,
      ._desc = "The NPT interface response FIFO overflowed",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "TR_QUEUE_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_TR_QUEUE_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_TR_QUEUE_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_TR_QUEUE_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_TR_QUEUE_ERR_QW,
      ._desc = "One of the three Translation Request Queues was overrun",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "TR_BUF_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_TR_BUF_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_TR_BUF_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_TR_BUF_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_TR_BUF_OF_QW,
      ._desc = "IOMMU received a new translation request with maximum(32) valid translation requests in progress",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "TR_BUF_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_TR_BUF_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_TR_BUF_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_TR_BUF_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_TR_BUF_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "TR_BUFF_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_TR_BUFF_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_TR_BUFF_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_TR_BUFF_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_TR_BUFF_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "TC_REG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_TC_REG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_TC_REG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_TC_REG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_TC_REG_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "TC_REG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_TC_REG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_TC_REG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_TC_REG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_TC_REG_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "CMD_QUEUE_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_CMD_QUEUE_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_CMD_QUEUE_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_CMD_QUEUE_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_CMD_QUEUE_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "CMD_QUEUE_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_CMD_QUEUE_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_CMD_QUEUE_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_CMD_QUEUE_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_CMD_QUEUE_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "PTEC_DATA_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_PTEC_DATA_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_PTEC_DATA_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_PTEC_DATA_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_PTEC_DATA_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "PTEC_DATA_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_PTEC_DATA_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_PTEC_DATA_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_PTEC_DATA_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_PTEC_DATA_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "PTEC_TAG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_PTEC_TAG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_PTEC_TAG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_PTEC_TAG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_PTEC_TAG_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "PTEC_TAG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_PTEC_TAG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_PTEC_TAG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_PTEC_TAG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_PTEC_TAG_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "IOMMU_PE",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_IOMMU_PE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_IOMMU_PE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_IOMMU_PE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_IOMMU_PE_QW,
      ._desc = "An IOMMU PTE Get Response Header Parity Error has been detected",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_IOMMU_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_IOMMU_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_IOMMU_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000100011ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_clr_detail[] = {
    { ._name = "EVENT_ILL_CMD_OF",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_EVENT_ILL_CMD_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_EVENT_ILL_CMD_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_EVENT_ILL_CMD_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_EVENT_ILL_CMD_OF_QW,
      ._desc = "When read as 1, an event log Illegal Command event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "EVENT_HW_OF",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_EVENT_HW_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_EVENT_HW_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_EVENT_HW_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_EVENT_HW_OF_QW,
      ._desc = "When read as 1, an event log Hardware Error event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "EVENT_IOPG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_EVENT_IOPG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_EVENT_IOPG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_EVENT_IOPG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_EVENT_IOPG_OF_QW,
      ._desc = "When read as 1, an event log IO Page Fault event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "EVENT_TC_INVAL_OF",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_EVENT_TC_INVAL_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_EVENT_TC_INVAL_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_EVENT_TC_INVAL_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_EVENT_TC_INVAL_OF_QW,
      ._desc = "When read as 1, an event log TC Invalid event overflow has occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PTE_RSP_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_PTE_RSP_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_PTE_RSP_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_PTE_RSP_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_PTE_RSP_ERR_QW,
      ._desc = "A PTE Get response was received that did not match a PTE OFB(possibly a stale response after an OFB timeout)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PTE_PKT_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_PTE_PKT_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_PTE_PKT_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_PTE_PKT_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_PTE_PKT_ERR_QW,
      ._desc = "A PTE Get response was received without payload flits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PI_CHN_TO",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_PI_CHN_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_PI_CHN_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_PI_CHN_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_PI_CHN_TO_QW,
      ._desc = "A Processor Interface Request or Response channel has stalled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ILLEGAL_CMD",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_ILLEGAL_CMD_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_ILLEGAL_CMD_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_ILLEGAL_CMD_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_ILLEGAL_CMD_QW,
      ._desc = "An illegal command was encountered in the Command Queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CQ_IP_HW_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_CQ_IP_HW_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_CQ_IP_HW_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_CQ_IP_HW_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_CQ_IP_HW_ERR_QW,
      ._desc = "The execution of an Invalidate PTE command resulted in a Multiple Bit Error in either the Translation Context Register read, or the PTE Cache read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CQ_CMD_TO",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_CQ_CMD_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_CQ_CMD_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_CQ_CMD_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_CQ_CMD_TO_QW,
      ._desc = "A Command Queue Command has not completed before the CQCmd Timer expired",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "EVENT_LOG_UF",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_EVENT_LOG_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_EVENT_LOG_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_EVENT_LOG_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_EVENT_LOG_UF_QW,
      ._desc = "The Event Log FIFO underflowed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "EVENT_LOG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_EVENT_LOG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_EVENT_LOG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_EVENT_LOG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_EVENT_LOG_OF_QW,
      ._desc = "The Event Log FIFO overflowed(",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_FIFO_UF",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_RSP_FIFO_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_RSP_FIFO_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_RSP_FIFO_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_RSP_FIFO_UF_QW,
      ._desc = "The NPT interface response FIFO underflowed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_FIFO_OF",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_RSP_FIFO_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_RSP_FIFO_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_RSP_FIFO_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_RSP_FIFO_OF_QW,
      ._desc = "The NPT interface response FIFO overflowed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TR_QUEUE_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_TR_QUEUE_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_TR_QUEUE_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_TR_QUEUE_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_TR_QUEUE_ERR_QW,
      ._desc = "One of the three Translation Request Queues was overrun",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TR_BUF_OF",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_TR_BUF_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_TR_BUF_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_TR_BUF_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_TR_BUF_OF_QW,
      ._desc = "IOMMU received a new translation request with maximum(32) valid translation requests in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TR_BUF_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_TR_BUF_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_TR_BUF_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_TR_BUF_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_TR_BUF_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TR_BUFF_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_TR_BUFF_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_TR_BUFF_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_TR_BUFF_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_TR_BUFF_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TC_REG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_TC_REG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_TC_REG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_TC_REG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_TC_REG_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TC_REG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_TC_REG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_TC_REG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_TC_REG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_TC_REG_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CMD_QUEUE_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_CMD_QUEUE_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_CMD_QUEUE_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_CMD_QUEUE_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_CMD_QUEUE_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CMD_QUEUE_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_CMD_QUEUE_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_CMD_QUEUE_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_CMD_QUEUE_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_CMD_QUEUE_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PTEC_DATA_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_PTEC_DATA_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_PTEC_DATA_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_PTEC_DATA_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_PTEC_DATA_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PTEC_DATA_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_PTEC_DATA_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_PTEC_DATA_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_PTEC_DATA_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_PTEC_DATA_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PTEC_TAG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_PTEC_TAG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_PTEC_TAG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_PTEC_TAG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_PTEC_TAG_MBE_QW,
      ._desc = "An IOMMU register read port detected an Uncorrectable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PTEC_TAG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_PTEC_TAG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_PTEC_TAG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_PTEC_TAG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_PTEC_TAG_SBE_QW,
      ._desc = "An IOMMU register read port detected a Correctable Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "IOMMU_PE",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_IOMMU_PE_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_IOMMU_PE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_IOMMU_PE_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_IOMMU_PE_QW,
      ._desc = "An IOMMU PTE Get Response Header Parity Error has been detected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_IOMMU_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_IOMMU_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CLR_RSTDATA & AR_NIC_IOMMU_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_IOMMU_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_hss_msk_detail[] = {
    { ._name = "EVENT_ILL_CMD_OF",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_ILL_CMD_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_ILL_CMD_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_ILL_CMD_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_ILL_CMD_OF_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_HW_OF",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_HW_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_HW_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_HW_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_HW_OF_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_IOPG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_IOPG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_IOPG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_IOPG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_IOPG_OF_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_TC_INVAL_OF",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_TC_INVAL_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_TC_INVAL_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_TC_INVAL_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_TC_INVAL_OF_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTE_RSP_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_PTE_RSP_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_PTE_RSP_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_PTE_RSP_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_PTE_RSP_ERR_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTE_PKT_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_PTE_PKT_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_PTE_PKT_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_PTE_PKT_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_PTE_PKT_ERR_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PI_CHN_TO",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_PI_CHN_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_PI_CHN_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_PI_CHN_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_PI_CHN_TO_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ILLEGAL_CMD",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_ILLEGAL_CMD_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_ILLEGAL_CMD_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_ILLEGAL_CMD_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_ILLEGAL_CMD_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_IP_HW_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_CQ_IP_HW_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_CQ_IP_HW_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_CQ_IP_HW_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_CQ_IP_HW_ERR_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_CMD_TO",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_CQ_CMD_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_CQ_CMD_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_CQ_CMD_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_CQ_CMD_TO_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_LOG_UF",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_LOG_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_LOG_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_LOG_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_LOG_UF_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_LOG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_LOG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_LOG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_LOG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_EVENT_LOG_OF_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FIFO_UF",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_RSP_FIFO_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_RSP_FIFO_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_RSP_FIFO_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_RSP_FIFO_UF_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FIFO_OF",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_RSP_FIFO_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_RSP_FIFO_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_RSP_FIFO_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_RSP_FIFO_OF_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_QUEUE_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_TR_QUEUE_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_TR_QUEUE_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_TR_QUEUE_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_TR_QUEUE_ERR_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_BUF_OF",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUF_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUF_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUF_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUF_OF_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_BUF_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUF_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUF_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUF_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUF_MBE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_BUFF_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUFF_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUFF_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUFF_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_TR_BUFF_SBE_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TC_REG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_TC_REG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_TC_REG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_TC_REG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_TC_REG_MBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TC_REG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_TC_REG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_TC_REG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_TC_REG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_TC_REG_SBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_QUEUE_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_CMD_QUEUE_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_CMD_QUEUE_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_CMD_QUEUE_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_CMD_QUEUE_MBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_QUEUE_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_CMD_QUEUE_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_CMD_QUEUE_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_CMD_QUEUE_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_CMD_QUEUE_SBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_DATA_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_DATA_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_DATA_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_DATA_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_DATA_MBE_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_DATA_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_DATA_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_DATA_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_DATA_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_DATA_SBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_TAG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_TAG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_TAG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_TAG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_TAG_MBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_TAG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_TAG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_TAG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_TAG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_PTEC_TAG_SBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_PE",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_IOMMU_PE_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_IOMMU_PE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_IOMMU_PE_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_IOMMU_PE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_IOMMU_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_IOMMU_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_IOMMU_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_os_msk_detail[] = {
    { ._name = "EVENT_ILL_CMD_OF",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_ILL_CMD_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_ILL_CMD_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_EVENT_ILL_CMD_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_ILL_CMD_OF_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_HW_OF",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_HW_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_HW_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_EVENT_HW_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_HW_OF_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_IOPG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_IOPG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_IOPG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_EVENT_IOPG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_IOPG_OF_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_TC_INVAL_OF",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_TC_INVAL_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_TC_INVAL_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_EVENT_TC_INVAL_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_TC_INVAL_OF_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTE_RSP_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_PTE_RSP_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_PTE_RSP_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_PTE_RSP_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_PTE_RSP_ERR_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTE_PKT_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_PTE_PKT_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_PTE_PKT_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_PTE_PKT_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_PTE_PKT_ERR_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PI_CHN_TO",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_PI_CHN_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_PI_CHN_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_PI_CHN_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_PI_CHN_TO_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ILLEGAL_CMD",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_ILLEGAL_CMD_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_ILLEGAL_CMD_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_ILLEGAL_CMD_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_ILLEGAL_CMD_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_IP_HW_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_CQ_IP_HW_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_CQ_IP_HW_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_CQ_IP_HW_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_CQ_IP_HW_ERR_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_CMD_TO",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_CQ_CMD_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_CQ_CMD_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_CQ_CMD_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_CQ_CMD_TO_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_LOG_UF",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_LOG_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_LOG_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_EVENT_LOG_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_LOG_UF_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_LOG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_LOG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_LOG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_EVENT_LOG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_EVENT_LOG_OF_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FIFO_UF",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_RSP_FIFO_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_RSP_FIFO_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_RSP_FIFO_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_RSP_FIFO_UF_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FIFO_OF",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_RSP_FIFO_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_RSP_FIFO_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_RSP_FIFO_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_RSP_FIFO_OF_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_QUEUE_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_TR_QUEUE_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_TR_QUEUE_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_TR_QUEUE_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_TR_QUEUE_ERR_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_BUF_OF",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_TR_BUF_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_TR_BUF_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_TR_BUF_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_TR_BUF_OF_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_BUF_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_TR_BUF_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_TR_BUF_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_TR_BUF_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_TR_BUF_MBE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_BUFF_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_TR_BUFF_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_TR_BUFF_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_TR_BUFF_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_TR_BUFF_SBE_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TC_REG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_TC_REG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_TC_REG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_TC_REG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_TC_REG_MBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TC_REG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_TC_REG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_TC_REG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_TC_REG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_TC_REG_SBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_QUEUE_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_CMD_QUEUE_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_CMD_QUEUE_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_CMD_QUEUE_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_CMD_QUEUE_MBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_QUEUE_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_CMD_QUEUE_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_CMD_QUEUE_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_CMD_QUEUE_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_CMD_QUEUE_SBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_DATA_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_DATA_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_DATA_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_PTEC_DATA_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_DATA_MBE_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_DATA_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_DATA_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_DATA_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_PTEC_DATA_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_DATA_SBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_TAG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_TAG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_TAG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_PTEC_TAG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_TAG_MBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_TAG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_TAG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_TAG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_PTEC_TAG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_PTEC_TAG_SBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_PE",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_IOMMU_PE_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_IOMMU_PE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_IOMMU_PE_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_IOMMU_PE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_IOMMU_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_IOMMU_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA & AR_NIC_IOMMU_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_IOMMU_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_first_flg_detail[] = {
    { ._name = "EVENT_ILL_CMD_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_ILL_CMD_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_ILL_CMD_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_ILL_CMD_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_ILL_CMD_OF_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_HW_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_HW_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_HW_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_HW_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_HW_OF_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_IOPG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_IOPG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_IOPG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_IOPG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_IOPG_OF_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_TC_INVAL_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_TC_INVAL_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_TC_INVAL_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_TC_INVAL_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_TC_INVAL_OF_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTE_RSP_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_PTE_RSP_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_PTE_RSP_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_PTE_RSP_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_PTE_RSP_ERR_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTE_PKT_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_PTE_PKT_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_PTE_PKT_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_PTE_PKT_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_PTE_PKT_ERR_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PI_CHN_TO",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_PI_CHN_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_PI_CHN_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_PI_CHN_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_PI_CHN_TO_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ILLEGAL_CMD",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_ILLEGAL_CMD_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_ILLEGAL_CMD_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_ILLEGAL_CMD_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_ILLEGAL_CMD_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_IP_HW_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_CQ_IP_HW_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_CQ_IP_HW_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_CQ_IP_HW_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_CQ_IP_HW_ERR_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CQ_CMD_TO",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_CQ_CMD_TO_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_CQ_CMD_TO_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_CQ_CMD_TO_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_CQ_CMD_TO_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_LOG_UF",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_LOG_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_LOG_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_LOG_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_LOG_UF_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "EVENT_LOG_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_LOG_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_LOG_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_LOG_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_EVENT_LOG_OF_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FIFO_UF",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_RSP_FIFO_UF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_RSP_FIFO_UF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_RSP_FIFO_UF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_RSP_FIFO_UF_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FIFO_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_RSP_FIFO_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_RSP_FIFO_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_RSP_FIFO_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_RSP_FIFO_OF_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_QUEUE_ERR",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_QUEUE_ERR_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_QUEUE_ERR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_TR_QUEUE_ERR_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_QUEUE_ERR_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_BUF_OF",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUF_OF_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUF_OF_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUF_OF_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUF_OF_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_BUF_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUF_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUF_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUF_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUF_MBE_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TR_BUFF_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUFF_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUFF_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUFF_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_TR_BUFF_SBE_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TC_REG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_TC_REG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_TC_REG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_TC_REG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_TC_REG_MBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TC_REG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_TC_REG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_TC_REG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_TC_REG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_TC_REG_SBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_QUEUE_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_CMD_QUEUE_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_CMD_QUEUE_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_CMD_QUEUE_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_CMD_QUEUE_MBE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_QUEUE_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_CMD_QUEUE_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_CMD_QUEUE_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_CMD_QUEUE_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_CMD_QUEUE_SBE_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_DATA_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_DATA_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_DATA_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_DATA_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_DATA_MBE_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_DATA_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_DATA_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_DATA_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_DATA_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_DATA_SBE_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_TAG_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_TAG_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_TAG_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_TAG_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_TAG_MBE_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PTEC_TAG_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_TAG_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_TAG_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_TAG_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_PTEC_TAG_SBE_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_PE",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_IOMMU_PE_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_IOMMU_PE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_IOMMU_PE_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_IOMMU_PE_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_IOMMU_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_IOMMU_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA & AR_NIC_IOMMU_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_IOMMU_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_tcr_detail[] = {
    { ._name = "MBE_TC",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TCR_MBE_TC_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TCR_MBE_TC_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TCR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TCR_MBE_TC_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TCR_MBE_TC_QW,
      ._desc = "Translation Context MBE Register",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TCR_SYNDROME_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TCR_SYNDROME_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TCR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TCR_SYNDROME_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TCR_SYNDROME_MBE_QW,
      ._desc = "Translation Context MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_TC",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TCR_SBE_TC_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TCR_SBE_TC_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TCR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TCR_SBE_TC_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TCR_SBE_TC_QW,
      ._desc = "Translation Context SBE Register",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TCR_SYNDROME_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TCR_SYNDROME_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TCR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TCR_SYNDROME_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TCR_SYNDROME_SBE_QW,
      ._desc = "Translation Context SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TCR_MMR_DETECTED_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TCR_MMR_DETECTED_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TCR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TCR_MMR_DETECTED_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TCR_MMR_DETECTED_MBE_QW,
      ._desc = "Command Queue MMR Multiple Bit Error occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TCR_MMR_DETECTED_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TCR_MMR_DETECTED_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TCR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TCR_MMR_DETECTED_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TCR_MMR_DETECTED_SBE_QW,
      ._desc = "Command Queue MMR Single Bit Error occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_trb_detail[] = {
    { ._name = "MBE_ADDR",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TRB_MBE_ADDR_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TRB_MBE_ADDR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TRB_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TRB_MBE_ADDR_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TRB_MBE_ADDR_QW,
      ._desc = "Translation Request Buffer MBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TRB_MBE_SYNDROME_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TRB_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TRB_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TRB_MBE_SYNDROME_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TRB_MBE_SYNDROME_QW,
      ._desc = "Translation Request Buffer MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDR",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TRB_SBE_ADDR_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TRB_SBE_ADDR_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TRB_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TRB_SBE_ADDR_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TRB_SBE_ADDR_QW,
      ._desc = "Translation Request Buffer SBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_TRB_SBE_SYNDROME_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_TRB_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_TRB_RSTDATA & AR_NIC_IOMMU_ERR_INFO_TRB_SBE_SYNDROME_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_TRB_SBE_SYNDROME_QW,
      ._desc = "Translation Request Buffer SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_ptc_tag_detail[] = {
    { ._name = "MBE_WAY",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_WAY_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_WAY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_WAY_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_WAY_QW,
      ._desc = "PTEC Tag MBE Way",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_ADDRESS_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_ADDRESS_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_ADDRESS_QW,
      ._desc = "PTEC Tag MBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_SYNDROME_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_SYNDROME_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_MBE_SYNDROME_QW,
      ._desc = "PTEC Tag Way MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_WAY",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_WAY_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_WAY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_WAY_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_WAY_QW,
      ._desc = "PTEC Tag SBE Way",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_ADDRESS_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_ADDRESS_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_ADDRESS_QW,
      ._desc = "PTEC Tag Way SBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_SYNDROME_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_SYNDROME_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_SBE_SYNDROME_QW,
      ._desc = "PTEC Tag Way SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_ptc_data_detail[] = {
    { ._name = "MBE_WAY",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_WAY_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_WAY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_WAY_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_WAY_QW,
      ._desc = "PTEC Data MBE Way",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SEG",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_SEG_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_SEG_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_SEG_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_SEG_QW,
      ._desc = "PTEC Data SBE Segment(0=lower 72 bit segment, 1=upper 72 bit segment)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_ADDRESS_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_ADDRESS_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_ADDRESS_QW,
      ._desc = "PTEC Data MBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_SYNDROME_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_SYNDROME_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_MBE_SYNDROME_QW,
      ._desc = "PTEC Data MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_WAY",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_WAY_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_WAY_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_WAY_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_WAY_QW,
      ._desc = "PTEC Data SBE Way",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SEG",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_SEG_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_SEG_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_SEG_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_SEG_QW,
      ._desc = "PTEC Data SBE Segment(0=lower 72 bit segment, 1=upper 72 bit segment)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_ADDRESS_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_ADDRESS_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_ADDRESS_QW,
      ._desc = "PTEC Data SBE Address",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_SYNDROME_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTDATA & AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_SYNDROME_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_SBE_SYNDROME_QW,
      ._desc = "PTEC Data SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cqr_detail[] = {
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CQR_MBE_ADDRESS_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CQR_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CQR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CQR_MBE_ADDRESS_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CQR_MBE_ADDRESS_QW,
      ._desc = "Command Queue Register MBE Address NOTE: Address LSB is select of upper or lower 64 bits of Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CQR_MBE_SYNDROME_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CQR_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CQR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CQR_MBE_SYNDROME_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CQR_MBE_SYNDROME_QW,
      ._desc = "Command Queue Register MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CQR_SBE_ADDRESS_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CQR_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CQR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CQR_SBE_ADDRESS_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CQR_SBE_ADDRESS_QW,
      ._desc = "Command Queue Register SBE Address NOTE: Address LSB is select of upper or lower 64 bits of Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CQR_SBE_SYNDROME_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CQR_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CQR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CQR_SBE_SYNDROME_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CQR_SBE_SYNDROME_QW,
      ._desc = "Command Queue Register SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_MBE",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CQR_MMR_DETECTED_MBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CQR_MMR_DETECTED_MBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CQR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CQR_MMR_DETECTED_MBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CQR_MMR_DETECTED_MBE_QW,
      ._desc = "Command Queue Register Multiple Bit Error occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_SBE",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CQR_MMR_DETECTED_SBE_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CQR_MMR_DETECTED_SBE_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CQR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CQR_MMR_DETECTED_SBE_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CQR_MMR_DETECTED_SBE_QW,
      ._desc = "Command Queue Register Single Bit Error occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_mbe_tcr_detail[] = {
    { ._name = "MBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_MBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_MBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_MBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_MBE_COUNT_QW,
      ._desc = "Number of Register Multiple Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_sbe_tcr_detail[] = {
    { ._name = "SBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_SBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_SBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_SBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_SBE_COUNT_QW,
      ._desc = "Number of Register Single Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_mbe_trb_detail[] = {
    { ._name = "MBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_MBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_MBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_MBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_MBE_COUNT_QW,
      ._desc = "Number of Register Multiple Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_sbe_trb_detail[] = {
    { ._name = "SBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_SBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_SBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_SBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_SBE_COUNT_QW,
      ._desc = "Number of Register Single Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_mbe_pt_detail[] = {
    { ._name = "MBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_MBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_MBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_MBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_MBE_COUNT_QW,
      ._desc = "Number of Register Multiple Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_sbe_pt_detail[] = {
    { ._name = "SBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_SBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_SBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_SBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_SBE_COUNT_QW,
      ._desc = "Number of Register Single Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_mbe_pd_detail[] = {
    { ._name = "MBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_MBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_MBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_MBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_MBE_COUNT_QW,
      ._desc = "Number of Register Multiple Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_sbe_pd_detail[] = {
    { ._name = "SBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_SBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_SBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_SBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_SBE_COUNT_QW,
      ._desc = "Number of Register Single Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_mbe_cqr_detail[] = {
    { ._name = "MBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_MBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_MBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_MBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_MBE_COUNT_QW,
      ._desc = "Number of Register Multiple Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_info_cnt_sbe_cqr_detail[] = {
    { ._name = "SBE_COUNT",
      ._bpos = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_SBE_COUNT_BP,
      ._mask = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_SBE_COUNT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_RSTDATA & AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_SBE_COUNT_MASK,
      ._index = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_SBE_COUNT_QW,
      ._desc = "Number of Register Single Bit Errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_pf_detail[] = {
    { ._name = "IO_PG_FAULT",
      ._bpos = AR_NIC_IOMMU_ERR_PF_IO_PG_FAULT_BP,
      ._mask = AR_NIC_IOMMU_ERR_PF_IO_PG_FAULT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_PF_RSTDATA & AR_NIC_IOMMU_ERR_PF_IO_PG_FAULT_MASK,
      ._index = AR_NIC_IOMMU_ERR_PF_IO_PG_FAULT_QW,
      ._desc = "Bit field for IO page fault condition for translation contexts",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_err_cpf_detail[] = {
    { ._name = "CLR_PG_FAULT",
      ._bpos = AR_NIC_IOMMU_ERR_CPF_CLR_PG_FAULT_BP,
      ._mask = AR_NIC_IOMMU_ERR_CPF_CLR_PG_FAULT_MASK,
      ._rval = AR_NIC_IOMMU_ERR_CPF_RSTDATA & AR_NIC_IOMMU_ERR_CPF_CLR_PG_FAULT_MASK,
      ._index = AR_NIC_IOMMU_ERR_CPF_CLR_PG_FAULT_QW,
      ._desc = "Bit field for clearing page fault condition for translation contexts for which the SE bit is set",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "W1C"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_dbg_errinj_misc_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_MISC_ADDRESS_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_MISC_ADDRESS_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_MISC_ADDRESS_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_MISC_ADDRESS_QW,
      ._desc = "This field indicates the address within selected RAM for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTE",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_MISC_CHECKBYTE_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_MISC_CHECKBYTE_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_MISC_CHECKBYTE_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_MISC_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the RAM address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RAMSELECT",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RAMSELECT_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RAMSELECT_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_MISC_RAMSELECT_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RAMSELECT_QW,
      ._desc = "This field identifies the RAM in which errors will be injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_MISC_TRIGGERED_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_MISC_TRIGGERED_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_MISC_TRIGGERED_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_MISC_TRIGGERED_QW,
      ._desc = "This status bit is cleared when the MMR is written and set when an error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_MISC_MODE_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_MISC_MODE_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_MISC_MODE_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_MISC_MODE_QW,
      ._desc = "Mode 0: Inject error once on next read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_MISC_ENABLE_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_MISC_ENABLE_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_MISC_ENABLE_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_MISC_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_iommu_dbg_errinj_ptec_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_ADDRESS_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_ADDRESS_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_PTEC_ADDRESS_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_ADDRESS_QW,
      ._desc = "This field indicates the address within the TX descriptor table for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTE_U",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_CHECKBYTE_U_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_CHECKBYTE_U_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_PTEC_CHECKBYTE_U_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_CHECKBYTE_U_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the RAM address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBYTE",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_CHECKBYTE_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_CHECKBYTE_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_PTEC_CHECKBYTE_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_CHECKBYTE_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the RAM address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RAMSELECT",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RAMSELECT_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RAMSELECT_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RAMSELECT_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RAMSELECT_QW,
      ._desc = "This field identifies the RAM in which errors will be injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_TRIGGERED_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_TRIGGERED_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_PTEC_TRIGGERED_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_TRIGGERED_QW,
      ._desc = "This status bit is cleared when the MMR is written and set when an error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_MODE_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_MODE_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_PTEC_MODE_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_MODE_QW,
      ._desc = "Mode 0: Inject error once on next read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_ENABLE_BP,
      ._mask = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_ENABLE_MASK,
      ._rval = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSTDATA & AR_NIC_IOMMU_DBG_ERRINJ_PTEC_ENABLE_MASK,
      ._index = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR IOMMU DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_rval[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_rmsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_RSTMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_wrmsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_WRTMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_rdmsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_RDMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_xsmsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_XSMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_wsemsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_WSEMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_rsemsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_RSEMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_w1smsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_W1SMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_w1cmsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_W1CMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_wrstmsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_WRSTMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_hwwmsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_HWWMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_cfg_tbl_cq_hwrmsk[2] = {
	AR_NIC_IOMMU_CFG_TBL_CQ_HWRMASK_QW0,
	AR_NIC_IOMMU_CFG_TBL_CQ_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_err_flg_1_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_io_2_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_te_4_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_arb_5_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_if_7_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_parb_req_8_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_1_0_a_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_3_2_b_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_5_4_c_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_7_6_d_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_9_8_e_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_11_10_f_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_13_12_10_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_ofb_15_14_11_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_npt_rsp_12_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU_HWRMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_rval[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSTDATA_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSTDATA_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_rmsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSTMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_wrmsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_WRTMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_WRTMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_rdmsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RDMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RDMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_xsmsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_XSMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_XSMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_wsemsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_WSEMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_WSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_rsemsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSEMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_RSEMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_w1smsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_W1SMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_W1SMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_w1cmsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_W1CMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_W1CMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_wrstmsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_WRSTMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_WRSTMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_hwwmsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_HWWMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_HWWMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_hi_iommu_hwrmsk[3] = {
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_HWRMASK_QW1,
	AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU_HWRMASK_QW2
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_rval[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_RSTDATA_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_RSTDATA_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_rmsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_RSTMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_RSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_wrmsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_WRTMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_WRTMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_rdmsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_RDMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_RDMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_xsmsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_XSMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_XSMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_wsemsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_WSEMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_WSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_rsemsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_RSEMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_RSEMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_w1smsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_W1SMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_W1SMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_w1cmsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_W1CMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_W1CMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_wrstmsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_WRSTMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_WRSTMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_hwwmsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_HWWMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_HWWMASK_QW1
};
static const uint64_t __ar_nic_iommu_mux_sel_13_mid_iommu_hwrmsk[2] = {
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_HWRMASK_QW0,
	AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU_HWRMASK_QW1
};

/*
 *  AR IOMMU MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_iommu_cfg_tbl_cq = {
    ._name = "AR_NIC_IOMMU_CFG_TBL_CQ",
    ._addr = AR_NIC_IOMMU_CFG_TBL_CQ,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_cfg_tbl_cq_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 16,
    ._depth = 32,
      ._type_bitmsk = 0x000000000000000aull,
    ._info = __ar_nic_iommu_cfg_tbl_cq_detail
};
static const cmmr_br_t __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu = {
    ._name = "AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_rspmon_ring_irq_0_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu = {
    ._name = "AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_rspmon_ring_irq_0_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_rspmon_ring_irq_0_lo_iommu = {
    ._name = "AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_RSPMON_RING_IRQ_0_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_rspmon_ring_irq_0_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_err_flg_1_hi_iommu = {
    ._name = "AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_ERR_FLG_1_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_flg_1_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_err_flg_1_mid_iommu = {
    ._name = "AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_ERR_FLG_1_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_err_flg_1_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_flg_1_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_err_flg_1_lo_iommu = {
    ._name = "AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_FLG_1_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_flg_1_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_io_2_hi_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_IO_2_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_io_2_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_io_2_mid_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_IO_2_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_io_2_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_io_2_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_io_2_lo_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_TRANS_REQ_IO_2_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_io_2_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_tr_reg_3_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_tr_reg_3_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_tr_reg_3_lo_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_TRANS_REQ_TR_REG_3_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_tr_reg_3_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_te_4_hi_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_TE_4_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_te_4_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_te_4_mid_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_TE_4_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_te_4_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_te_4_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_te_4_lo_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_TRANS_REQ_TE_4_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_te_4_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_arb_5_hi_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_ARB_5_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_arb_5_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_arb_5_mid_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_ARB_5_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_arb_5_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_arb_5_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_arb_5_lo_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_TRANS_REQ_ARB_5_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_arb_5_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_event_log_cmd_q_6_hi_iommu = {
    ._name = "AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_event_log_cmd_q_6_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_event_log_cmd_q_6_mid_iommu = {
    ._name = "AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_event_log_cmd_q_6_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_event_log_cmd_q_6_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_event_log_cmd_q_6_lo_iommu = {
    ._name = "AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_EVENT_LOG_CMD_Q_6_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_event_log_cmd_q_6_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_parb_req_if_7_hi_iommu = {
    ._name = "AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_PARB_REQ_IF_7_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_parb_req_if_7_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_parb_req_if_7_mid_iommu = {
    ._name = "AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_PARB_REQ_IF_7_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_if_7_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_parb_req_if_7_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_parb_req_if_7_lo_iommu = {
    ._name = "AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_PARB_REQ_IF_7_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_parb_req_if_7_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_parb_req_8_hi_iommu = {
    ._name = "AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_PARB_REQ_8_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_parb_req_8_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_parb_req_8_mid_iommu = {
    ._name = "AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_PARB_REQ_8_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_parb_req_8_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_parb_req_8_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_parb_req_8_lo_iommu = {
    ._name = "AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_PARB_REQ_8_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_parb_req_8_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_alloc_9_hi_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_alloc_9_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_alloc_9_mid_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_trans_req_alloc_9_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_alloc_9_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_trans_req_alloc_9_lo_iommu = {
    ._name = "AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_TRANS_REQ_ALLOC_9_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_trans_req_alloc_9_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_1_0_a_hi_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_1_0_A_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_1_0_a_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_1_0_a_mid_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_1_0_A_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_1_0_a_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_1_0_a_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_1_0_a_lo_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_OFB_1_0_A_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_1_0_a_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_3_2_b_hi_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_3_2_B_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_3_2_b_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_3_2_b_mid_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_3_2_B_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_3_2_b_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_3_2_b_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_3_2_b_lo_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_OFB_3_2_B_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_3_2_b_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_5_4_c_hi_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_5_4_C_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_5_4_c_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_5_4_c_mid_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_5_4_C_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_5_4_c_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_5_4_c_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_5_4_c_lo_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_OFB_5_4_C_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_5_4_c_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_7_6_d_hi_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_7_6_D_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_7_6_d_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_7_6_d_mid_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_7_6_D_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_7_6_d_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_7_6_d_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_7_6_d_lo_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_OFB_7_6_D_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_7_6_d_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_9_8_e_hi_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_9_8_E_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_9_8_e_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_9_8_e_mid_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_9_8_E_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_9_8_e_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_9_8_e_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_9_8_e_lo_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_OFB_9_8_E_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_9_8_e_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_11_10_f_hi_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_11_10_F_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_11_10_f_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_11_10_f_mid_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_11_10_F_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_11_10_f_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_11_10_f_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_11_10_f_lo_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_OFB_11_10_F_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_11_10_f_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_13_12_10_hi_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_13_12_10_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_13_12_10_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_13_12_10_mid_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_13_12_10_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_13_12_10_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_13_12_10_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_13_12_10_lo_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_OFB_13_12_10_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_13_12_10_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_15_14_11_hi_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_15_14_11_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_15_14_11_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_15_14_11_mid_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_15_14_11_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_ofb_15_14_11_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_15_14_11_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_ofb_15_14_11_lo_iommu = {
    ._name = "AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_OFB_15_14_11_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_ofb_15_14_11_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_npt_rsp_12_hi_iommu = {
    ._name = "AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_NPT_RSP_12_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_npt_rsp_12_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_npt_rsp_12_mid_iommu = {
    ._name = "AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_NPT_RSP_12_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_npt_rsp_12_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_npt_rsp_12_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_npt_rsp_12_lo_iommu = {
    ._name = "AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_NPT_RSP_12_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_npt_rsp_12_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_mux_sel_13_hi_iommu = {
    ._name = "AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU",
    ._addr = AR_NIC_IOMMU_MUX_SEL_13_HI_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_hi_iommu_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_mux_sel_13_hi_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_mux_sel_13_mid_iommu = {
    ._name = "AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU",
    ._addr = AR_NIC_IOMMU_MUX_SEL_13_MID_IOMMU,
    ._rval.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_iommu_mux_sel_13_mid_iommu_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_mux_sel_13_mid_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_mux_sel_13_lo_iommu = {
    ._name = "AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU",
    ._addr = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU,
    ._rval.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_MUX_SEL_13_LO_IOMMU_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_mux_sel_13_lo_iommu_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_tbl_tcr = {
    ._name = "AR_NIC_IOMMU_CFG_TBL_TCR",
    ._addr = AR_NIC_IOMMU_CFG_TBL_TCR,
    ._rval.val = AR_NIC_IOMMU_CFG_TBL_TCR_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_TBL_TCR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 16,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_iommu_cfg_tbl_tcr_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_params = {
    ._name = "AR_NIC_IOMMU_CFG_PARAMS",
    ._addr = AR_NIC_IOMMU_CFG_PARAMS,
    ._rval.val = AR_NIC_IOMMU_CFG_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_cfg_params_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_crdts = {
    ._name = "AR_NIC_IOMMU_CFG_CRDTS",
    ._addr = AR_NIC_IOMMU_CFG_CRDTS,
    ._rval.val = AR_NIC_IOMMU_CFG_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_cfg_crdts_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_cq = {
    ._name = "AR_NIC_IOMMU_CFG_CQ",
    ._addr = AR_NIC_IOMMU_CFG_CQ,
    ._rval.val = AR_NIC_IOMMU_CFG_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000801ull,
    ._info = __ar_nic_iommu_cfg_cq_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_cqrp = {
    ._name = "AR_NIC_IOMMU_CFG_CQRP",
    ._addr = AR_NIC_IOMMU_CFG_CQRP,
    ._rval.val = AR_NIC_IOMMU_CFG_CQRP_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_CQRP_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_CQRP_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_CQRP_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_CQRP_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_CQRP_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_CQRP_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_CQRP_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_CQRP_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_CQRP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_CQRP_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_CQRP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_iommu_cfg_cqrp_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_cqwp = {
    ._name = "AR_NIC_IOMMU_CFG_CQWP",
    ._addr = AR_NIC_IOMMU_CFG_CQWP,
    ._rval.val = AR_NIC_IOMMU_CFG_CQWP_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_CQWP_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_CQWP_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_CQWP_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_CQWP_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_CQWP_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_CQWP_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_CQWP_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_CQWP_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_CQWP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_CQWP_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_CQWP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_iommu_cfg_cqwp_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_cqr = {
    ._name = "AR_NIC_IOMMU_CFG_CQR",
    ._addr = AR_NIC_IOMMU_CFG_CQR,
    ._rval.val = AR_NIC_IOMMU_CFG_CQR_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_CQR_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_CQR_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_CQR_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_CQR_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_CQR_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_CQR_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_CQR_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_CQR_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_CQR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_CQR_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_CQR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_iommu_cfg_cqr_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_elog = {
    ._name = "AR_NIC_IOMMU_CFG_ELOG",
    ._addr = AR_NIC_IOMMU_CFG_ELOG,
    ._rval.val = AR_NIC_IOMMU_CFG_ELOG_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_ELOG_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_ELOG_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_ELOG_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_ELOG_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_ELOG_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_ELOG_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_ELOG_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_ELOG_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_ELOG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_ELOG_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_ELOG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_cfg_elog_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_elog_rp = {
    ._name = "AR_NIC_IOMMU_CFG_ELOG_RP",
    ._addr = AR_NIC_IOMMU_CFG_ELOG_RP,
    ._rval.val = AR_NIC_IOMMU_CFG_ELOG_RP_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_ELOG_RP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_cfg_elog_rp_detail
};
static const cmmr_br_t __ar_nic_iommu_cfg_elog_wp = {
    ._name = "AR_NIC_IOMMU_CFG_ELOG_WP",
    ._addr = AR_NIC_IOMMU_CFG_ELOG_WP,
    ._rval.val = AR_NIC_IOMMU_CFG_ELOG_WP_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_CFG_ELOG_WP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_iommu_cfg_elog_wp_detail
};
static const cmmr_br_t __ar_nic_iommu_sts = {
    ._name = "AR_NIC_IOMMU_STS",
    ._addr = AR_NIC_IOMMU_STS,
    ._rval.val = AR_NIC_IOMMU_STS_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_STS_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_STS_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_STS_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_STS_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_STS_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_STS_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_STS_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_STS_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_STS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_STS_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_STS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_iommu_sts_detail
};
static const cmmr_br_t __ar_nic_iommu_sts_cq = {
    ._name = "AR_NIC_IOMMU_STS_CQ",
    ._addr = AR_NIC_IOMMU_STS_CQ,
    ._rval.val = AR_NIC_IOMMU_STS_CQ_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_STS_CQ_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_STS_CQ_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_STS_CQ_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_STS_CQ_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_STS_CQ_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_STS_CQ_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_STS_CQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_STS_CQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_STS_CQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_STS_CQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_STS_CQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_iommu_sts_cq_detail
};
static const cmmr_br_t __ar_nic_iommu_err_flg = {
    ._name = "AR_NIC_IOMMU_ERR_FLG",
    ._addr = AR_NIC_IOMMU_ERR_FLG,
    ._rval.val = AR_NIC_IOMMU_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x000000000037c811ull,
    ._info = __ar_nic_iommu_err_flg_detail
};
static const cmmr_br_t __ar_nic_iommu_err_clr = {
    ._name = "AR_NIC_IOMMU_ERR_CLR",
    ._addr = AR_NIC_IOMMU_ERR_CLR,
    ._rval.val = AR_NIC_IOMMU_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_iommu_err_clr_detail
};
static const cmmr_br_t __ar_nic_iommu_err_hss_msk = {
    ._name = "AR_NIC_IOMMU_ERR_HSS_MSK",
    ._addr = AR_NIC_IOMMU_ERR_HSS_MSK,
    ._rval.val = AR_NIC_IOMMU_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_iommu_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_iommu_err_os_msk = {
    ._name = "AR_NIC_IOMMU_ERR_OS_MSK",
    ._addr = AR_NIC_IOMMU_ERR_OS_MSK,
    ._rval.val = AR_NIC_IOMMU_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_iommu_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_iommu_err_first_flg = {
    ._name = "AR_NIC_IOMMU_ERR_FIRST_FLG",
    ._addr = AR_NIC_IOMMU_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_iommu_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_tcr = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_TCR",
    ._addr = AR_NIC_IOMMU_ERR_INFO_TCR,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_TCR_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_TCR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_tcr_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_trb = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_TRB",
    ._addr = AR_NIC_IOMMU_ERR_INFO_TRB,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_TRB_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_TRB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_trb_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_ptc_tag = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_PTC_TAG",
    ._addr = AR_NIC_IOMMU_ERR_INFO_PTC_TAG,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_TAG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_ptc_tag_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_ptc_data = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_PTC_DATA",
    ._addr = AR_NIC_IOMMU_ERR_INFO_PTC_DATA,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_PTC_DATA_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_ptc_data_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cqr = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CQR",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CQR,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CQR_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CQR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cqr_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_mbe_tcr = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TCR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_mbe_tcr_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_sbe_tcr = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TCR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_sbe_tcr_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_mbe_trb = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_TRB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_mbe_trb_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_sbe_trb = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_TRB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_sbe_trb_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_mbe_pt = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_mbe_pt_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_sbe_pt = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_sbe_pt_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_mbe_pd = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_PD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_mbe_pd_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_sbe_pd = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_PD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_sbe_pd_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_mbe_cqr = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_MBE_CQR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_mbe_cqr_detail
};
static const cmmr_br_t __ar_nic_iommu_err_info_cnt_sbe_cqr = {
    ._name = "AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR",
    ._addr = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR,
    ._rval.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_INFO_CNT_SBE_CQR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_err_info_cnt_sbe_cqr_detail
};
static const cmmr_br_t __ar_nic_iommu_err_pf = {
    ._name = "AR_NIC_IOMMU_ERR_PF",
    ._addr = AR_NIC_IOMMU_ERR_PF,
    ._rval.val = AR_NIC_IOMMU_ERR_PF_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_PF_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_PF_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_PF_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_PF_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_PF_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_PF_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_PF_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_PF_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_PF_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_PF_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_PF_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_iommu_err_pf_detail
};
static const cmmr_br_t __ar_nic_iommu_err_cpf = {
    ._name = "AR_NIC_IOMMU_ERR_CPF",
    ._addr = AR_NIC_IOMMU_ERR_CPF,
    ._rval.val = AR_NIC_IOMMU_ERR_CPF_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_ERR_CPF_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_ERR_CPF_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_ERR_CPF_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_ERR_CPF_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_ERR_CPF_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_ERR_CPF_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_ERR_CPF_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_ERR_CPF_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_ERR_CPF_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_ERR_CPF_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_ERR_CPF_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_iommu_err_cpf_detail
};
static const cmmr_br_t __ar_nic_iommu_dbg_errinj_misc = {
    ._name = "AR_NIC_IOMMU_DBG_ERRINJ_MISC",
    ._addr = AR_NIC_IOMMU_DBG_ERRINJ_MISC,
    ._rval.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_MISC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_dbg_errinj_misc_detail
};
static const cmmr_br_t __ar_nic_iommu_dbg_errinj_ptec = {
    ._name = "AR_NIC_IOMMU_DBG_ERRINJ_PTEC",
    ._addr = AR_NIC_IOMMU_DBG_ERRINJ_PTEC,
    ._rval.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSTDATA,
    ._rmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSTMASK,
    ._wrmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_WRTMASK,
    ._rdmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RDMASK,
    ._xsmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_XSMASK,
    ._wsemsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_WSEMASK,
    ._rsemsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_RSEMASK,
    ._w1smsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_W1SMASK,
    ._w1cmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_W1CMASK,
    ._wrstmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_WRSTMASK,
    ._hwwmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_HWWMASK,
    ._hwrmsk.val = AR_NIC_IOMMU_DBG_ERRINJ_PTEC_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_iommu_dbg_errinj_ptec_detail
};

/*
 *  INSTALL AR IOMMU MMRS
 */
static const cmmr_br_t* __ar_iommu_mmrs[] = {
    &__ar_nic_iommu_cfg_tbl_cq,
    &__ar_nic_iommu_cfg_tbl_tcr,
    &__ar_nic_iommu_cfg_params,
    &__ar_nic_iommu_cfg_crdts,
    &__ar_nic_iommu_cfg_cq,
    &__ar_nic_iommu_cfg_cqrp,
    &__ar_nic_iommu_cfg_cqwp,
    &__ar_nic_iommu_cfg_cqr,
    &__ar_nic_iommu_cfg_elog,
    &__ar_nic_iommu_cfg_elog_rp,
    &__ar_nic_iommu_cfg_elog_wp,
    &__ar_nic_iommu_sts,
    &__ar_nic_iommu_sts_cq,
    &__ar_nic_iommu_err_flg,
    &__ar_nic_iommu_err_clr,
    &__ar_nic_iommu_err_hss_msk,
    &__ar_nic_iommu_err_os_msk,
    &__ar_nic_iommu_err_first_flg,
    &__ar_nic_iommu_err_info_tcr,
    &__ar_nic_iommu_err_info_trb,
    &__ar_nic_iommu_err_info_ptc_tag,
    &__ar_nic_iommu_err_info_ptc_data,
    &__ar_nic_iommu_err_info_cqr,
    &__ar_nic_iommu_err_info_cnt_mbe_tcr,
    &__ar_nic_iommu_err_info_cnt_sbe_tcr,
    &__ar_nic_iommu_err_info_cnt_mbe_trb,
    &__ar_nic_iommu_err_info_cnt_sbe_trb,
    &__ar_nic_iommu_err_info_cnt_mbe_pt,
    &__ar_nic_iommu_err_info_cnt_sbe_pt,
    &__ar_nic_iommu_err_info_cnt_mbe_pd,
    &__ar_nic_iommu_err_info_cnt_sbe_pd,
    &__ar_nic_iommu_err_info_cnt_mbe_cqr,
    &__ar_nic_iommu_err_info_cnt_sbe_cqr,
    &__ar_nic_iommu_err_pf,
    &__ar_nic_iommu_err_cpf,
    &__ar_nic_iommu_dbg_errinj_misc,
    &__ar_nic_iommu_dbg_errinj_ptec,
    NULL
};

/*
 *  INSTALL AR IOMMU LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_iommu_enc_mmrs[] = {
    &__ar_nic_iommu_rspmon_ring_irq_0_hi_iommu,
    &__ar_nic_iommu_rspmon_ring_irq_0_mid_iommu,
    &__ar_nic_iommu_rspmon_ring_irq_0_lo_iommu,
    &__ar_nic_iommu_err_flg_1_hi_iommu,
    &__ar_nic_iommu_err_flg_1_mid_iommu,
    &__ar_nic_iommu_err_flg_1_lo_iommu,
    &__ar_nic_iommu_trans_req_io_2_hi_iommu,
    &__ar_nic_iommu_trans_req_io_2_mid_iommu,
    &__ar_nic_iommu_trans_req_io_2_lo_iommu,
    &__ar_nic_iommu_trans_req_tr_reg_3_hi_iommu,
    &__ar_nic_iommu_trans_req_tr_reg_3_mid_iommu,
    &__ar_nic_iommu_trans_req_tr_reg_3_lo_iommu,
    &__ar_nic_iommu_trans_req_te_4_hi_iommu,
    &__ar_nic_iommu_trans_req_te_4_mid_iommu,
    &__ar_nic_iommu_trans_req_te_4_lo_iommu,
    &__ar_nic_iommu_trans_req_arb_5_hi_iommu,
    &__ar_nic_iommu_trans_req_arb_5_mid_iommu,
    &__ar_nic_iommu_trans_req_arb_5_lo_iommu,
    &__ar_nic_iommu_event_log_cmd_q_6_hi_iommu,
    &__ar_nic_iommu_event_log_cmd_q_6_mid_iommu,
    &__ar_nic_iommu_event_log_cmd_q_6_lo_iommu,
    &__ar_nic_iommu_parb_req_if_7_hi_iommu,
    &__ar_nic_iommu_parb_req_if_7_mid_iommu,
    &__ar_nic_iommu_parb_req_if_7_lo_iommu,
    &__ar_nic_iommu_parb_req_8_hi_iommu,
    &__ar_nic_iommu_parb_req_8_mid_iommu,
    &__ar_nic_iommu_parb_req_8_lo_iommu,
    &__ar_nic_iommu_trans_req_alloc_9_hi_iommu,
    &__ar_nic_iommu_trans_req_alloc_9_mid_iommu,
    &__ar_nic_iommu_trans_req_alloc_9_lo_iommu,
    &__ar_nic_iommu_ofb_1_0_a_hi_iommu,
    &__ar_nic_iommu_ofb_1_0_a_mid_iommu,
    &__ar_nic_iommu_ofb_1_0_a_lo_iommu,
    &__ar_nic_iommu_ofb_3_2_b_hi_iommu,
    &__ar_nic_iommu_ofb_3_2_b_mid_iommu,
    &__ar_nic_iommu_ofb_3_2_b_lo_iommu,
    &__ar_nic_iommu_ofb_5_4_c_hi_iommu,
    &__ar_nic_iommu_ofb_5_4_c_mid_iommu,
    &__ar_nic_iommu_ofb_5_4_c_lo_iommu,
    &__ar_nic_iommu_ofb_7_6_d_hi_iommu,
    &__ar_nic_iommu_ofb_7_6_d_mid_iommu,
    &__ar_nic_iommu_ofb_7_6_d_lo_iommu,
    &__ar_nic_iommu_ofb_9_8_e_hi_iommu,
    &__ar_nic_iommu_ofb_9_8_e_mid_iommu,
    &__ar_nic_iommu_ofb_9_8_e_lo_iommu,
    &__ar_nic_iommu_ofb_11_10_f_hi_iommu,
    &__ar_nic_iommu_ofb_11_10_f_mid_iommu,
    &__ar_nic_iommu_ofb_11_10_f_lo_iommu,
    &__ar_nic_iommu_ofb_13_12_10_hi_iommu,
    &__ar_nic_iommu_ofb_13_12_10_mid_iommu,
    &__ar_nic_iommu_ofb_13_12_10_lo_iommu,
    &__ar_nic_iommu_ofb_15_14_11_hi_iommu,
    &__ar_nic_iommu_ofb_15_14_11_mid_iommu,
    &__ar_nic_iommu_ofb_15_14_11_lo_iommu,
    &__ar_nic_iommu_npt_rsp_12_hi_iommu,
    &__ar_nic_iommu_npt_rsp_12_mid_iommu,
    &__ar_nic_iommu_npt_rsp_12_lo_iommu,
    &__ar_nic_iommu_mux_sel_13_hi_iommu,
    &__ar_nic_iommu_mux_sel_13_mid_iommu,
    &__ar_nic_iommu_mux_sel_13_lo_iommu,
    NULL
};

#endif
