/******************************************************************************
 * COPYRIGHT CRAY INC. ar_parb_detailed_mmrs_h.h
 * FILE: ar_parb_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:02 2014
 ******************************************************************************/
/**
 * @file ar_parb_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:02 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_parb_mmr_values.h and ar_parb_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_parb_mmr_values.h"

#ifndef _AR_PARB_DETAILED_MMRS_H_H_
#define _AR_PARB_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_parb_mmrs[];	/* PARB Array */

/*
 *  AR PARB MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_parb_cfg_params_detail[] = {
    { ._name = "MAX_PKT_SIZE",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_MAX_PKT_SIZE_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_MAX_PKT_SIZE_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_MAX_PKT_SIZE_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_MAX_PKT_SIZE_QW,
      ._desc = "Max packet size used to ensure one virtual channel cannot tie up the physical channel indefinately",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_BTE_RD",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_SF_BTE_RD_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_SF_BTE_RD_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_SF_BTE_RD_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_SF_BTE_RD_QW,
      ._desc = "Enable store-and-forward on BTE_RD queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_BTE_WR",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_SF_BTE_WR_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_SF_BTE_WR_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_SF_BTE_WR_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_SF_BTE_WR_QW,
      ._desc = "Enable store-and-forward on BTE_WR queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_AMO",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_SF_AMO_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_SF_AMO_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_SF_AMO_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_SF_AMO_QW,
      ._desc = "Enable store-and-forward on AMO queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_WC",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_SF_WC_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_SF_WC_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_SF_WC_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_SF_WC_QW,
      ._desc = "Enable store-and-forward on WC queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_IOMMU",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_SF_IOMMU_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_SF_IOMMU_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_SF_IOMMU_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_SF_IOMMU_QW,
      ._desc = "Enable store-and-forward on IOMMU queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_DLA",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_SF_DLA_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_SF_DLA_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_SF_DLA_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_SF_DLA_QW,
      ._desc = "Enable store-and-forward on DLA queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BTE_RD_VC",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_BTE_RD_VC_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_BTE_RD_VC_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_BTE_RD_VC_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_BTE_RD_VC_QW,
      ._desc = "Virtual channel for BTE_RD queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BTE_WR_VC",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_BTE_WR_VC_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_BTE_WR_VC_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_BTE_WR_VC_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_BTE_WR_VC_QW,
      ._desc = "Virtual channel for BTE_WR queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "AMO_VC",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_AMO_VC_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_AMO_VC_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_AMO_VC_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_AMO_VC_QW,
      ._desc = "Virtual channel for AMO queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "WC_VC",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_WC_VC_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_WC_VC_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_WC_VC_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_WC_VC_QW,
      ._desc = "Virtual channel for WC queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "IOMMU_VC",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_IOMMU_VC_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_IOMMU_VC_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_IOMMU_VC_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_IOMMU_VC_QW,
      ._desc = "Virtual channel for IOMMU queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DLA_VC",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_DLA_VC_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_DLA_VC_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_DLA_VC_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_DLA_VC_QW,
      ._desc = "Virtual channel for DLA queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "USE_SHARED_CRDTS",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_USE_SHARED_CRDTS_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_USE_SHARED_CRDTS_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_USE_SHARED_CRDTS_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_USE_SHARED_CRDTS_QW,
      ._desc = "When set to 1, available credits are taken from and returned to a pool of credits shared by all three virtual channels",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PI_POOL_CRDTS",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_PI_POOL_CRDTS_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_PI_POOL_CRDTS_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_PI_POOL_CRDTS_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_PI_POOL_CRDTS_QW,
      ._desc = "Processor Interface Credits to be shared among all VC's (applies only when USE_SHARED_CRDTS=1)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PI_VC2_CRDTS",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_PI_VC2_CRDTS_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_PI_VC2_CRDTS_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_PI_VC2_CRDTS_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_PI_VC2_CRDTS_QW,
      ._desc = "Processor Interface Credits for VC2 (applies only when USE_SHARED_CRDTS=0)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PI_VC1_CRDTS",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_PI_VC1_CRDTS_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_PI_VC1_CRDTS_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_PI_VC1_CRDTS_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_PI_VC1_CRDTS_QW,
      ._desc = "Processor Interface Credits for VC1 (applies only when USE_SHARED_CRDTS=0)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PI_VC0_CRDTS",
      ._bpos = AR_NIC_PARB_CFG_PARAMS_PI_VC0_CRDTS_BP,
      ._mask = AR_NIC_PARB_CFG_PARAMS_PI_VC0_CRDTS_MASK,
      ._rval = AR_NIC_PARB_CFG_PARAMS_RSTDATA & AR_NIC_PARB_CFG_PARAMS_PI_VC0_CRDTS_MASK,
      ._index = AR_NIC_PARB_CFG_PARAMS_PI_VC0_CRDTS_QW,
      ._desc = "Processor Interface Credits for VC0 (applies only when USE_SHARED_CRDTS=0)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_detail[] = {
    { ._name = "UNUSED_145_56",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_UNUSED_145_56_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_UNUSED_145_56_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSTDATA_QW2 & AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_UNUSED_145_56_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_UNUSED_145_56_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_detail[] = {
    { ._name = "UNUSED_127_106",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_UNUSED_127_106_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_UNUSED_127_106_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_UNUSED_127_106_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_UNUSED_127_106_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PI_STALLED",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_STALLED_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_STALLED_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_STALLED_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_STALLED_QW,
      ._desc = "PI stalled count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PI_FLITS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_FLITS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_FLITS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_FLITS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_FLITS_QW,
      ._desc = "PI flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PI_PKTS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_PKTS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_PKTS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_PKTS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_PI_PKTS_QW,
      ._desc = "PI packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_MAINT_BLOCKED",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_BLOCKED_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_BLOCKED_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_BLOCKED_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_BLOCKED_QW,
      ._desc = "MAINT blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_MAINT_FLITS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_FLITS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_FLITS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_FLITS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_FLITS_QW,
      ._desc = "MAINT flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_MAINT_PKTS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_PKTS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_PKTS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_PKTS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_MAINT_PKTS_QW,
      ._desc = "MAINT packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_BLOCKED",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_BLOCKED_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_BLOCKED_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_BLOCKED_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_BLOCKED_QW,
      ._desc = "DLA blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_FLITS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_FLITS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_FLITS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_FLITS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_FLITS_QW,
      ._desc = "DLA flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_PKTS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_PKTS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_PKTS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_PKTS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_DLA_PKTS_QW,
      ._desc = "DLA packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOMMU_BLOCKED",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_BLOCKED_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_BLOCKED_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_BLOCKED_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_BLOCKED_QW,
      ._desc = "IOMMU blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOMMU_FLITS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_FLITS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_FLITS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_FLITS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_FLITS_QW,
      ._desc = "IOMMU flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOMMU_PKTS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_PKTS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_PKTS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_PKTS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_IOMMU_PKTS_QW,
      ._desc = "IOMMU packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_WC_BLOCKED",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_BLOCKED_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_BLOCKED_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_BLOCKED_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_BLOCKED_QW,
      ._desc = "WC blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_WC_FLITS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_FLITS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_FLITS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_FLITS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_FLITS_QW,
      ._desc = "WC flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_WC_PKTS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_PKTS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_PKTS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_PKTS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_WC_PKTS_QW,
      ._desc = "WC packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_AMO_BLOCKED",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_BLOCKED_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_BLOCKED_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_BLOCKED_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_BLOCKED_QW,
      ._desc = "AMO blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_AMO_FLITS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_FLITS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_FLITS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_FLITS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_FLITS_QW,
      ._desc = "AMO flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_AMO_PKTS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_PKTS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_PKTS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_PKTS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_AMO_PKTS_QW,
      ._desc = "AMO packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_WR_BLOCKED",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_BLOCKED_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_BLOCKED_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_BLOCKED_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_BLOCKED_QW,
      ._desc = "BTE write blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_WR_FLITS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_FLITS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_FLITS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_FLITS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_FLITS_QW,
      ._desc = "BTE write flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_WR_PKTS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_PKTS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_PKTS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_PKTS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_WR_PKTS_QW,
      ._desc = "BTE write packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_RD_BLOCKED",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_BLOCKED_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_BLOCKED_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_BLOCKED_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_BLOCKED_QW,
      ._desc = "BTE read blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_RD_FLITS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_FLITS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_FLITS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_FLITS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_FLITS_QW,
      ._desc = "BTE read flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_RD_PKTS",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_PKTS_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_PKTS_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_PKTS_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_CNTR_BTE_RD_PKTS_QW,
      ._desc = "BTE read packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_64",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_UNUSED_81_64_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_UNUSED_81_64_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_UNUSED_81_64_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_UNUSED_81_64_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_parb_mmr_ring_0_lo_parb_detail[] = {
    { ._name = "UNUSED_145_56",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_UNUSED_145_56_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_UNUSED_145_56_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_UNUSED_145_56_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_UNUSED_145_56_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_REQ",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_REQ_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_REQ_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_REQ_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_REQ_QW,
      ._desc = "Arbiter request signal",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_GNT",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_GNT_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_GNT_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_GNT_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_GNT_QW,
      ._desc = "Arbiter grant signal",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_ACK",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_ACK_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_ACK_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_ACK_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_ARB_ACK_QW,
      ._desc = "Arbiter ack signal (when a tail packet is granted)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PARB_PI_OS_IRQ",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_PI_OS_IRQ_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_PI_OS_IRQ_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_PI_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PARB_LB_HSS_IRQ",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_LB_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PARB_RSPMON_RING_WRACK",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_RSPMON_RING_WRACK_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_RSPMON_RING_WRACK_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_RSPMON_RING_WRACK_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_RSPMON_RING_WRACK_QW,
      ._desc = "RSPMON Write Acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_PARB_RSPMON_RING_15_0",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_RSPMON_RING_15_0_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_RSPMON_RING_15_0_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_RSPMON_RING_15_0_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_R_Q_PARB_RSPMON_RING_15_0_QW,
      ._desc = "RSPMON Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSPMON_PARB_RING_15_0",
      ._bpos = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_I_RSPMON_PARB_RING_15_0_BP,
      ._mask = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_I_RSPMON_PARB_RING_15_0_MASK,
      ._rval = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_I_RSPMON_PARB_RING_15_0_MASK,
      ._index = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_I_RSPMON_PARB_RING_15_0_QW,
      ._desc = "RSPMON Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_err_flg_1_hi_parb_detail[] = {
    { ._name = "UNUSED_145_130",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_HI_PARB_UNUSED_145_130_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_HI_PARB_UNUSED_145_130_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSTDATA_QW2 & AR_NIC_PARB_ERR_FLG_1_HI_PARB_UNUSED_145_130_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_HI_PARB_UNUSED_145_130_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_AMO_WC_RDY",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_HI_PARB_DBG_AMO_WC_RDY_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_HI_PARB_DBG_AMO_WC_RDY_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSTDATA_QW2 & AR_NIC_PARB_ERR_FLG_1_HI_PARB_DBG_AMO_WC_RDY_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_HI_PARB_DBG_AMO_WC_RDY_QW,
      ._desc = "Ready signals from ordering logic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_err_flg_1_mid_parb_detail[] = {
    { ._name = "UNUSED_127_88",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_UNUSED_127_88_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_UNUSED_127_88_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_UNUSED_127_88_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_UNUSED_127_88_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_BAD_PAYLD_CNT",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_BAD_PAYLD_CNT_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_BAD_PAYLD_CNT_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_BAD_PAYLD_CNT_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_BAD_PAYLD_CNT_QW,
      ._desc = "The REQ_HDR_LO_PAYLD_CNT field in a header flit written to the maintenance queue was not in the range 0 to 4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_RSP_DROP",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_DROP_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_DROP_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_DROP_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_DROP_QW,
      ._desc = "A response packet with the correct block ID was dropped because the maintenance queue was not expecting any (more) responses due to the state of the maintenance queue (not in INJECT or CAPTURE state)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_ILLEGAL_RD",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_ILLEGAL_RD_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_ILLEGAL_RD_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_ILLEGAL_RD_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_ILLEGAL_RD_QW,
      ._desc = "An MMR read was not expected by the maintenance queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_ILLEGAL_WR",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_ILLEGAL_WR_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_ILLEGAL_WR_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_ILLEGAL_WR_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_ILLEGAL_WR_QW,
      ._desc = "An MMR write was not expected by the maintenance queue and was dropped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_LFIFO_MBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_MBE_QW,
      ._desc = "MBE in read of large maintenance FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_LFIFO_SBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_SBE_QW,
      ._desc = "SBE in read of large maintenance FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_RSP_MBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_MBE_QW,
      ._desc = "MBE in response payload flit entering maintenance FIFO (only flagged if block_id matches)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_RSP_SBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_SBE_QW,
      ._desc = "SBE in response payload flit entering maintenance FIFO (only flagged if block_id matches)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_RSP_PE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_PE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_PE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_PE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_RSP_PE_QW,
      ._desc = "Parity Error in response header flit entering maintenance FIFO (since block_id is not trusted, this is flagged for all header parity errors)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_SFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_SFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_SFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_SFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_SFIFO_OVFLW_QW,
      ._desc = "Small maintenance FIFO overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MAINT_LFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_MAINT_LFIFO_OVFLW_QW,
      ._desc = "Large maintenance FIFO overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_RD_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_RD_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_RD_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_RD_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_RD_UFLW_QW,
      ._desc = "BTE Read Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_WR_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_WR_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_WR_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_WR_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_WR_UFLW_QW,
      ._desc = "BTE Write Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_AMO_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_AMO_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_AMO_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_AMO_UFLW_QW,
      ._desc = "AMO Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "WC_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_WC_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_WC_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_WC_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_WC_UFLW_QW,
      ._desc = "WC Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IOMMU_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_IOMMU_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_IOMMU_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_IOMMU_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_IOMMU_UFLW_QW,
      ._desc = "IOMMU Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DLA_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_DLA_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_DLA_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_DLA_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_DLA_UFLW_QW,
      ._desc = "DLA Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_RD_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_RD_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_RD_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_RD_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_RD_OFLW_QW,
      ._desc = "BTE Read Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_WR_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_WR_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_WR_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_WR_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_BTE_WR_OFLW_QW,
      ._desc = "BTE Write Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "AMO_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_AMO_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_AMO_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_AMO_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_AMO_OFLW_QW,
      ._desc = "AMO Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "WC_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_WC_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_WC_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_WC_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_WC_OFLW_QW,
      ._desc = "WC Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IOMMU_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_IOMMU_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_IOMMU_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_IOMMU_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_IOMMU_OFLW_QW,
      ._desc = "IOMMU Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DLA_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_DLA_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_DLA_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_DLA_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_DLA_OFLW_QW,
      ._desc = "DLA Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_MID_PARB_DIAG_ONLY_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_MID_PARB_DIAG_ONLY_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_ERR_FLG_1_MID_PARB_DIAG_ONLY_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_MID_PARB_DIAG_ONLY_QW,
      ._desc = "Diagnostic Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_err_flg_1_lo_parb_detail[] = {
    { ._name = "UNUSED_63_24",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_UNUSED_63_24_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_UNUSED_63_24_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_UNUSED_63_24_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_UNUSED_63_24_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_BAD_PAYLD_CNT",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_BAD_PAYLD_CNT_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_BAD_PAYLD_CNT_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_BAD_PAYLD_CNT_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_BAD_PAYLD_CNT_QW,
      ._desc = "The REQ_HDR_LO_PAYLD_CNT field in a header flit written to the maintenance queue was not in the range 0 to 4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_RSP_DROP",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_DROP_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_DROP_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_DROP_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_DROP_QW,
      ._desc = "A response packet with the correct block ID was dropped because the maintenance queue was not expecting any (more) responses due to the state of the maintenance queue (not in INJECT or CAPTURE state)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_ILLEGAL_RD",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_ILLEGAL_RD_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_ILLEGAL_RD_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_ILLEGAL_RD_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_ILLEGAL_RD_QW,
      ._desc = "An MMR read was not expected by the maintenance queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_ILLEGAL_WR",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_ILLEGAL_WR_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_ILLEGAL_WR_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_ILLEGAL_WR_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_ILLEGAL_WR_QW,
      ._desc = "An MMR write was not expected by the maintenance queue and was dropped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_LFIFO_MBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_MBE_QW,
      ._desc = "MBE in read of large maintenance FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_LFIFO_SBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_SBE_QW,
      ._desc = "SBE in read of large maintenance FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_RSP_MBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_MBE_QW,
      ._desc = "MBE in response payload flit entering maintenance FIFO (only flagged if block_id matches)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_RSP_SBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_SBE_QW,
      ._desc = "SBE in response payload flit entering maintenance FIFO (only flagged if block_id matches)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_RSP_PE",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_PE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_PE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_PE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_RSP_PE_QW,
      ._desc = "Parity Error in response header flit entering maintenance FIFO (since block_id is not trusted, this is flagged for all header parity errors)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_SFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_SFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_SFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_SFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_SFIFO_OVFLW_QW,
      ._desc = "Small maintenance FIFO overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MAINT_LFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_MAINT_LFIFO_OVFLW_QW,
      ._desc = "Large maintenance FIFO overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_RD_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_RD_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_RD_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_RD_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_RD_UFLW_QW,
      ._desc = "BTE Read Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_WR_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_WR_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_WR_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_WR_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_WR_UFLW_QW,
      ._desc = "BTE Write Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_AMO_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_AMO_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_AMO_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_AMO_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_AMO_UFLW_QW,
      ._desc = "AMO Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_WC_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_WC_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_WC_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_WC_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_WC_UFLW_QW,
      ._desc = "WC Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_IOMMU_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_IOMMU_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_IOMMU_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_IOMMU_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_IOMMU_UFLW_QW,
      ._desc = "IOMMU Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DLA_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_DLA_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_DLA_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_DLA_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_DLA_UFLW_QW,
      ._desc = "DLA Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_RD_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_RD_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_RD_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_RD_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_RD_OFLW_QW,
      ._desc = "BTE Read Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_WR_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_WR_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_WR_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_WR_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_BTE_WR_OFLW_QW,
      ._desc = "BTE Write Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_AMO_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_AMO_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_AMO_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_AMO_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_AMO_OFLW_QW,
      ._desc = "AMO Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_WC_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_WC_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_WC_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_WC_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_WC_OFLW_QW,
      ._desc = "WC Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_IOMMU_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_IOMMU_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_IOMMU_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_IOMMU_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_IOMMU_OFLW_QW,
      ._desc = "IOMMU Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DLA_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_DLA_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_DLA_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_DLA_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_I_DLA_OFLW_QW,
      ._desc = "DLA Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_PARB_ERR_FLG_1_LO_PARB_UNUSED_0_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_1_LO_PARB_UNUSED_0_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA & AR_NIC_PARB_ERR_FLG_1_LO_PARB_UNUSED_0_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_1_LO_PARB_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_detail[] = {
    { ._name = "R_Q_NIC_PI_REQ_SB",
      ._bpos = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_R_Q_NIC_PI_REQ_SB_BP,
      ._mask = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_R_Q_NIC_PI_REQ_SB_MASK,
      ._rval = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSTDATA_QW2 & AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_R_Q_NIC_PI_REQ_SB_MASK,
      ._index = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_R_Q_NIC_PI_REQ_SB_QW,
      ._desc = "PI Request Flit Sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NIC_PI_REQ_FLIT",
      ._bpos = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_R_Q_NIC_PI_REQ_FLIT_BP,
      ._mask = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_R_Q_NIC_PI_REQ_FLIT_MASK,
      ._rval = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSTDATA_QW2 & AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_R_Q_NIC_PI_REQ_FLIT_MASK,
      ._index = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_R_Q_NIC_PI_REQ_FLIT_QW,
      ._desc = "PI Request Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_detail[] = {
    { ._name = "R_Q_NIC_PI_REQ_FLIT",
      ._bpos = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_R_Q_NIC_PI_REQ_FLIT_BP,
      ._mask = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_R_Q_NIC_PI_REQ_FLIT_MASK,
      ._rval = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_R_Q_NIC_PI_REQ_FLIT_MASK,
      ._index = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_R_Q_NIC_PI_REQ_FLIT_QW,
      ._desc = "PI Request Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_nic_pi_req_flit_2_lo_parb_detail[] = {
    { ._name = "R_Q_NIC_PI_REQ_FLIT",
      ._bpos = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_R_Q_NIC_PI_REQ_FLIT_BP,
      ._mask = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_R_Q_NIC_PI_REQ_FLIT_MASK,
      ._rval = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_RSTDATA & AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_R_Q_NIC_PI_REQ_FLIT_MASK,
      ._index = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_R_Q_NIC_PI_REQ_FLIT_QW,
      ._desc = "PI Request Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_parb_power_down_ff_hi_parb_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_POWER_DOWN_BP,
      ._mask = AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_POWER_DOWN_MASK,
      ._rval = AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSTDATA_QW2 & AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_POWER_DOWN_MASK,
      ._index = AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_parb_power_down_ff_mid_parb_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_POWER_DOWN_BP,
      ._mask = AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_POWER_DOWN_MASK,
      ._rval = AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_RSTDATA_QW1 & AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_POWER_DOWN_MASK,
      ._index = AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_parb_power_down_ff_lo_parb_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_POWER_DOWN_BP,
      ._mask = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_POWER_DOWN_MASK,
      ._rval = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_RSTDATA & AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_POWER_DOWN_MASK,
      ._index = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_err_flg_detail[] = {
    { ._name = "MAINT_BAD_PAYLD_CNT",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_BAD_PAYLD_CNT_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_BAD_PAYLD_CNT_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_BAD_PAYLD_CNT_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_BAD_PAYLD_CNT_QW,
      ._desc = "The REQ_HDR_LO_PAYLD_CNT field in a header flit written to the maintenance queue was not in the range 0 to 4",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_RSP_DROP",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_RSP_DROP_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_RSP_DROP_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_RSP_DROP_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_RSP_DROP_QW,
      ._desc = "A response packet with the correct block ID was dropped because the maintenance queue was not expecting any (more) responses due to the state of the maintenance queue (not in INJECT or CAPTURE state)",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_ILLEGAL_RD",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_ILLEGAL_RD_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_ILLEGAL_RD_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_ILLEGAL_RD_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_ILLEGAL_RD_QW,
      ._desc = "An MMR read was not expected by the maintenance queue",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_ILLEGAL_WR",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_ILLEGAL_WR_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_ILLEGAL_WR_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_ILLEGAL_WR_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_ILLEGAL_WR_QW,
      ._desc = "An MMR write was not expected by the maintenance queue and was dropped",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_LFIFO_MBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_MBE_QW,
      ._desc = "MBE in read of large maintenance FIFO",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_LFIFO_SBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_SBE_QW,
      ._desc = "SBE in read of large maintenance FIFO",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_RSP_MBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_RSP_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_RSP_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_RSP_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_RSP_MBE_QW,
      ._desc = "MBE in response payload flit entering maintenance FIFO (only flagged if block_id matches)",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_RSP_SBE",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_RSP_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_RSP_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_RSP_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_RSP_SBE_QW,
      ._desc = "SBE in response payload flit entering maintenance FIFO (only flagged if block_id matches)",
      ._type_bitmsk = 0x0000000000004011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_RSP_PE",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_RSP_PE_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_RSP_PE_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_RSP_PE_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_RSP_PE_QW,
      ._desc = "Parity Error in response header flit entering maintenance FIFO (since block_id is not trusted, this is flagged for all header parity errors)",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_SFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_SFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_SFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_SFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_SFIFO_OVFLW_QW,
      ._desc = "Small maintenance FIFO overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "MAINT_LFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_MAINT_LFIFO_OVFLW_QW,
      ._desc = "Large maintenance FIFO overflow",
      ._type_bitmsk = 0x0000000000010011ull,
      ._access = "RW1"
    },
    { ._name = "BTE_RD_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_BTE_RD_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_BTE_RD_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_BTE_RD_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_BTE_RD_UFLW_QW,
      ._desc = "BTE Read Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "BTE_WR_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_BTE_WR_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_BTE_WR_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_BTE_WR_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_BTE_WR_UFLW_QW,
      ._desc = "BTE Write Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "AMO_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_AMO_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_AMO_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_AMO_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_AMO_UFLW_QW,
      ._desc = "AMO Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "WC_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_WC_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_WC_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_WC_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_WC_UFLW_QW,
      ._desc = "WC Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "IOMMU_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_IOMMU_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_IOMMU_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_IOMMU_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_IOMMU_UFLW_QW,
      ._desc = "IOMMU Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "DLA_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_DLA_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_DLA_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_DLA_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_DLA_UFLW_QW,
      ._desc = "DLA Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "BTE_RD_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_BTE_RD_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_BTE_RD_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_BTE_RD_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_BTE_RD_OFLW_QW,
      ._desc = "BTE Read Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "BTE_WR_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_BTE_WR_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_BTE_WR_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_BTE_WR_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_BTE_WR_OFLW_QW,
      ._desc = "BTE Write Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "AMO_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_AMO_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_AMO_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_AMO_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_AMO_OFLW_QW,
      ._desc = "AMO Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "WC_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_WC_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_WC_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_WC_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_WC_OFLW_QW,
      ._desc = "WC Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "IOMMU_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_IOMMU_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_IOMMU_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_IOMMU_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_IOMMU_OFLW_QW,
      ._desc = "IOMMU Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "DLA_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FLG_DLA_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_DLA_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_DLA_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_DLA_OFLW_QW,
      ._desc = "DLA Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_PARB_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_PARB_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_PARB_ERR_FLG_RSTDATA & AR_NIC_PARB_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_PARB_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Diagnostic Flag",
      ._type_bitmsk = 0x0000000000100011ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_err_clr_detail[] = {
    { ._name = "MAINT_BAD_PAYLD_CNT",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_BAD_PAYLD_CNT_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_BAD_PAYLD_CNT_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_BAD_PAYLD_CNT_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_BAD_PAYLD_CNT_QW,
      ._desc = "The REQ_HDR_LO_PAYLD_CNT field in a header flit written to the maintenance queue was not in the range 0 to 4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_RSP_DROP",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_RSP_DROP_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_RSP_DROP_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_RSP_DROP_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_RSP_DROP_QW,
      ._desc = "A response packet with the correct block ID was dropped because the maintenance queue was not expecting any (more) responses due to the state of the maintenance queue (not in INJECT or CAPTURE state)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_ILLEGAL_RD",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_ILLEGAL_RD_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_ILLEGAL_RD_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_ILLEGAL_RD_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_ILLEGAL_RD_QW,
      ._desc = "An MMR read was not expected by the maintenance queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_ILLEGAL_WR",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_ILLEGAL_WR_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_ILLEGAL_WR_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_ILLEGAL_WR_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_ILLEGAL_WR_QW,
      ._desc = "An MMR write was not expected by the maintenance queue and was dropped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_LFIFO_MBE",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_MBE_QW,
      ._desc = "MBE in read of large maintenance FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_LFIFO_SBE",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_SBE_QW,
      ._desc = "SBE in read of large maintenance FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_RSP_MBE",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_RSP_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_RSP_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_RSP_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_RSP_MBE_QW,
      ._desc = "MBE in response payload flit entering maintenance FIFO (only flagged if block_id matches)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_RSP_SBE",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_RSP_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_RSP_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_RSP_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_RSP_SBE_QW,
      ._desc = "SBE in response payload flit entering maintenance FIFO (only flagged if block_id matches)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_RSP_PE",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_RSP_PE_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_RSP_PE_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_RSP_PE_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_RSP_PE_QW,
      ._desc = "Parity Error in response header flit entering maintenance FIFO (since block_id is not trusted, this is flagged for all header parity errors)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_SFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_SFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_SFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_SFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_SFIFO_OVFLW_QW,
      ._desc = "Small maintenance FIFO overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MAINT_LFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_MAINT_LFIFO_OVFLW_QW,
      ._desc = "Large maintenance FIFO overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTE_RD_UFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_BTE_RD_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_BTE_RD_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_BTE_RD_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_BTE_RD_UFLW_QW,
      ._desc = "BTE Read Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTE_WR_UFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_BTE_WR_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_BTE_WR_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_BTE_WR_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_BTE_WR_UFLW_QW,
      ._desc = "BTE Write Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "AMO_UFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_AMO_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_AMO_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_AMO_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_AMO_UFLW_QW,
      ._desc = "AMO Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "WC_UFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_WC_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_WC_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_WC_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_WC_UFLW_QW,
      ._desc = "WC Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "IOMMU_UFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_IOMMU_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_IOMMU_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_IOMMU_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_IOMMU_UFLW_QW,
      ._desc = "IOMMU Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DLA_UFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_DLA_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_DLA_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_DLA_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_DLA_UFLW_QW,
      ._desc = "DLA Queue Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTE_RD_OFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_BTE_RD_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_BTE_RD_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_BTE_RD_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_BTE_RD_OFLW_QW,
      ._desc = "BTE Read Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "BTE_WR_OFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_BTE_WR_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_BTE_WR_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_BTE_WR_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_BTE_WR_OFLW_QW,
      ._desc = "BTE Write Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "AMO_OFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_AMO_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_AMO_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_AMO_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_AMO_OFLW_QW,
      ._desc = "AMO Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "WC_OFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_WC_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_WC_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_WC_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_WC_OFLW_QW,
      ._desc = "WC Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "IOMMU_OFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_IOMMU_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_IOMMU_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_IOMMU_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_IOMMU_OFLW_QW,
      ._desc = "IOMMU Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DLA_OFLW",
      ._bpos = AR_NIC_PARB_ERR_CLR_DLA_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_DLA_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_DLA_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_DLA_OFLW_QW,
      ._desc = "DLA Queue Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_PARB_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_PARB_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_PARB_ERR_CLR_RSTDATA & AR_NIC_PARB_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_PARB_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Diagnostic Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_err_hss_msk_detail[] = {
    { ._name = "MAINT_BAD_PAYLD_CNT",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_BAD_PAYLD_CNT_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_BAD_PAYLD_CNT_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_BAD_PAYLD_CNT_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_BAD_PAYLD_CNT_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_DROP",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_DROP_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_DROP_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_DROP_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_DROP_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_ILLEGAL_RD",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_ILLEGAL_RD_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_ILLEGAL_RD_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_ILLEGAL_RD_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_ILLEGAL_RD_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_ILLEGAL_WR",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_ILLEGAL_WR_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_ILLEGAL_WR_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_ILLEGAL_WR_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_ILLEGAL_WR_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_LFIFO_MBE",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_MBE_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_LFIFO_SBE",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_SBE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_MBE",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_MBE_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_SBE",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_SBE_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_PE",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_PE_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_PE_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_PE_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_RSP_PE_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_SFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_SFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_SFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_SFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_SFIFO_OVFLW_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_LFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_MAINT_LFIFO_OVFLW_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_RD_UFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_BTE_RD_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_BTE_RD_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_BTE_RD_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_BTE_RD_UFLW_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_WR_UFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_BTE_WR_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_BTE_WR_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_BTE_WR_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_BTE_WR_UFLW_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "AMO_UFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_AMO_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_AMO_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_AMO_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_AMO_UFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "WC_UFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_WC_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_WC_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_WC_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_WC_UFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_UFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_IOMMU_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_IOMMU_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_IOMMU_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_IOMMU_UFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_UFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_DLA_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_DLA_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_DLA_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_DLA_UFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_RD_OFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_BTE_RD_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_BTE_RD_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_BTE_RD_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_BTE_RD_OFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_WR_OFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_BTE_WR_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_BTE_WR_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_BTE_WR_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_BTE_WR_OFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "AMO_OFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_AMO_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_AMO_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_AMO_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_AMO_OFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "WC_OFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_WC_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_WC_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_WC_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_WC_OFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_OFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_IOMMU_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_IOMMU_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_IOMMU_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_IOMMU_OFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_OFLW",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_DLA_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_DLA_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_DLA_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_DLA_OFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_PARB_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_PARB_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA & AR_NIC_PARB_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_PARB_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_err_os_msk_detail[] = {
    { ._name = "MAINT_BAD_PAYLD_CNT",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_BAD_PAYLD_CNT_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_BAD_PAYLD_CNT_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_BAD_PAYLD_CNT_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_BAD_PAYLD_CNT_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_DROP",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_DROP_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_DROP_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_DROP_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_DROP_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_ILLEGAL_RD",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_ILLEGAL_RD_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_ILLEGAL_RD_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_ILLEGAL_RD_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_ILLEGAL_RD_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_ILLEGAL_WR",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_ILLEGAL_WR_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_ILLEGAL_WR_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_ILLEGAL_WR_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_ILLEGAL_WR_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_LFIFO_MBE",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_MBE_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_LFIFO_SBE",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_SBE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_MBE",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_MBE_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_SBE",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_SBE_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_PE",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_PE_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_PE_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_PE_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_RSP_PE_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_SFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_SFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_SFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_SFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_SFIFO_OVFLW_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_LFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_MAINT_LFIFO_OVFLW_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_RD_UFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_BTE_RD_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_BTE_RD_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_BTE_RD_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_BTE_RD_UFLW_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_WR_UFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_BTE_WR_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_BTE_WR_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_BTE_WR_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_BTE_WR_UFLW_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "AMO_UFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_AMO_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_AMO_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_AMO_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_AMO_UFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "WC_UFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_WC_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_WC_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_WC_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_WC_UFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_UFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_IOMMU_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_IOMMU_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_IOMMU_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_IOMMU_UFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_UFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_DLA_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_DLA_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_DLA_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_DLA_UFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_RD_OFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_BTE_RD_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_BTE_RD_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_BTE_RD_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_BTE_RD_OFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_WR_OFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_BTE_WR_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_BTE_WR_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_BTE_WR_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_BTE_WR_OFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "AMO_OFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_AMO_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_AMO_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_AMO_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_AMO_OFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "WC_OFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_WC_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_WC_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_WC_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_WC_OFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_OFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_IOMMU_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_IOMMU_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_IOMMU_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_IOMMU_OFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_OFLW",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_DLA_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_DLA_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_DLA_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_DLA_OFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_PARB_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_PARB_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_PARB_ERR_OS_MSK_RSTDATA & AR_NIC_PARB_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_PARB_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_err_first_flg_detail[] = {
    { ._name = "MAINT_BAD_PAYLD_CNT",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_BAD_PAYLD_CNT_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_BAD_PAYLD_CNT_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_BAD_PAYLD_CNT_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_BAD_PAYLD_CNT_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_DROP",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_DROP_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_DROP_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_DROP_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_DROP_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_ILLEGAL_RD",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_ILLEGAL_RD_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_ILLEGAL_RD_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_ILLEGAL_RD_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_ILLEGAL_RD_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_ILLEGAL_WR",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_ILLEGAL_WR_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_ILLEGAL_WR_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_ILLEGAL_WR_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_ILLEGAL_WR_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_LFIFO_MBE",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_MBE_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_LFIFO_SBE",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_SBE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_MBE",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_MBE_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_MBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_MBE_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_MBE_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_SBE",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_SBE_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_SBE_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_SBE_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_SBE_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_RSP_PE",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_PE_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_PE_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_PE_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_RSP_PE_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_SFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_SFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_SFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_SFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_SFIFO_OVFLW_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MAINT_LFIFO_OVFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_OVFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_OVFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_OVFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_MAINT_LFIFO_OVFLW_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_RD_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_BTE_RD_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_BTE_RD_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_BTE_RD_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_BTE_RD_UFLW_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_WR_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_BTE_WR_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_BTE_WR_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_BTE_WR_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_BTE_WR_UFLW_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "AMO_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_AMO_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_AMO_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_AMO_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_AMO_UFLW_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "WC_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_WC_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_WC_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_WC_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_WC_UFLW_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_IOMMU_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_IOMMU_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_IOMMU_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_IOMMU_UFLW_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_UFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_DLA_UFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_DLA_UFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_DLA_UFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_DLA_UFLW_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_RD_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_BTE_RD_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_BTE_RD_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_BTE_RD_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_BTE_RD_OFLW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_WR_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_BTE_WR_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_BTE_WR_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_BTE_WR_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_BTE_WR_OFLW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "AMO_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_AMO_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_AMO_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_AMO_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_AMO_OFLW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "WC_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_WC_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_WC_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_WC_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_WC_OFLW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_IOMMU_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_IOMMU_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_IOMMU_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_IOMMU_OFLW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_OFLW",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_DLA_OFLW_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_DLA_OFLW_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_DLA_OFLW_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_DLA_OFLW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_PARB_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_PARB_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_PARB_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_PARB_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_dbg_state_detail[] = {
    { ._name = "AMO_RDY",
      ._bpos = AR_NIC_PARB_DBG_STATE_AMO_RDY_BP,
      ._mask = AR_NIC_PARB_DBG_STATE_AMO_RDY_MASK,
      ._rval = AR_NIC_PARB_DBG_STATE_RSTDATA & AR_NIC_PARB_DBG_STATE_AMO_RDY_MASK,
      ._index = AR_NIC_PARB_DBG_STATE_AMO_RDY_QW,
      ._desc = "Queue is ready according to ordering rules",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "WC_RDY",
      ._bpos = AR_NIC_PARB_DBG_STATE_WC_RDY_BP,
      ._mask = AR_NIC_PARB_DBG_STATE_WC_RDY_MASK,
      ._rval = AR_NIC_PARB_DBG_STATE_RSTDATA & AR_NIC_PARB_DBG_STATE_WC_RDY_MASK,
      ._index = AR_NIC_PARB_DBG_STATE_WC_RDY_QW,
      ._desc = "Queue is ready according to ordering rules",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "POOL_CRDTS",
      ._bpos = AR_NIC_PARB_DBG_STATE_POOL_CRDTS_BP,
      ._mask = AR_NIC_PARB_DBG_STATE_POOL_CRDTS_MASK,
      ._rval = AR_NIC_PARB_DBG_STATE_RSTDATA & AR_NIC_PARB_DBG_STATE_POOL_CRDTS_MASK,
      ._index = AR_NIC_PARB_DBG_STATE_POOL_CRDTS_QW,
      ._desc = "Used pool credits",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "VC2_CRDTS",
      ._bpos = AR_NIC_PARB_DBG_STATE_VC2_CRDTS_BP,
      ._mask = AR_NIC_PARB_DBG_STATE_VC2_CRDTS_MASK,
      ._rval = AR_NIC_PARB_DBG_STATE_RSTDATA & AR_NIC_PARB_DBG_STATE_VC2_CRDTS_MASK,
      ._index = AR_NIC_PARB_DBG_STATE_VC2_CRDTS_QW,
      ._desc = "Used VC2 credits",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "VC1_CRDTS",
      ._bpos = AR_NIC_PARB_DBG_STATE_VC1_CRDTS_BP,
      ._mask = AR_NIC_PARB_DBG_STATE_VC1_CRDTS_MASK,
      ._rval = AR_NIC_PARB_DBG_STATE_RSTDATA & AR_NIC_PARB_DBG_STATE_VC1_CRDTS_MASK,
      ._index = AR_NIC_PARB_DBG_STATE_VC1_CRDTS_QW,
      ._desc = "Used VC1 credits",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "VC0_CRDTS",
      ._bpos = AR_NIC_PARB_DBG_STATE_VC0_CRDTS_BP,
      ._mask = AR_NIC_PARB_DBG_STATE_VC0_CRDTS_MASK,
      ._rval = AR_NIC_PARB_DBG_STATE_RSTDATA & AR_NIC_PARB_DBG_STATE_VC0_CRDTS_MASK,
      ._index = AR_NIC_PARB_DBG_STATE_VC0_CRDTS_QW,
      ._desc = "Used VC0 credits",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_prf_en_detail[] = {
    { ._name = "PRF_VC2_EN",
      ._bpos = AR_NIC_PARB_PRF_EN_PRF_VC2_EN_BP,
      ._mask = AR_NIC_PARB_PRF_EN_PRF_VC2_EN_MASK,
      ._rval = AR_NIC_PARB_PRF_EN_RSTDATA & AR_NIC_PARB_PRF_EN_PRF_VC2_EN_MASK,
      ._index = AR_NIC_PARB_PRF_EN_PRF_VC2_EN_QW,
      ._desc = "Enable register  PARB Performance Register VC2 Stall Duration",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PRF_VC1_EN",
      ._bpos = AR_NIC_PARB_PRF_EN_PRF_VC1_EN_BP,
      ._mask = AR_NIC_PARB_PRF_EN_PRF_VC1_EN_MASK,
      ._rval = AR_NIC_PARB_PRF_EN_RSTDATA & AR_NIC_PARB_PRF_EN_PRF_VC1_EN_MASK,
      ._index = AR_NIC_PARB_PRF_EN_PRF_VC1_EN_QW,
      ._desc = "Enable register  PARB Performance Register VC1 Stall Duration",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PRF_VC0_EN",
      ._bpos = AR_NIC_PARB_PRF_EN_PRF_VC0_EN_BP,
      ._mask = AR_NIC_PARB_PRF_EN_PRF_VC0_EN_MASK,
      ._rval = AR_NIC_PARB_PRF_EN_RSTDATA & AR_NIC_PARB_PRF_EN_PRF_VC0_EN_MASK,
      ._index = AR_NIC_PARB_PRF_EN_PRF_VC0_EN_QW,
      ._desc = "Enable register  PARB Performance Register VC0 Stall Duration",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_prf_stall_duration_vc0_detail[] = {
    { ._name = "MAX",
      ._bpos = AR_NIC_PARB_PRF_STALL_DURATION_VC0_MAX_BP,
      ._mask = AR_NIC_PARB_PRF_STALL_DURATION_VC0_MAX_MASK,
      ._rval = AR_NIC_PARB_PRF_STALL_DURATION_VC0_RSTDATA & AR_NIC_PARB_PRF_STALL_DURATION_VC0_MAX_MASK,
      ._index = AR_NIC_PARB_PRF_STALL_DURATION_VC0_MAX_QW,
      ._desc = "Maximum duration of a stall",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_prf_stall_duration_vc1_detail[] = {
    { ._name = "MAX",
      ._bpos = AR_NIC_PARB_PRF_STALL_DURATION_VC1_MAX_BP,
      ._mask = AR_NIC_PARB_PRF_STALL_DURATION_VC1_MAX_MASK,
      ._rval = AR_NIC_PARB_PRF_STALL_DURATION_VC1_RSTDATA & AR_NIC_PARB_PRF_STALL_DURATION_VC1_MAX_MASK,
      ._index = AR_NIC_PARB_PRF_STALL_DURATION_VC1_MAX_QW,
      ._desc = "Maximum duration of a stall",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_prf_stall_duration_vc2_detail[] = {
    { ._name = "MAX",
      ._bpos = AR_NIC_PARB_PRF_STALL_DURATION_VC2_MAX_BP,
      ._mask = AR_NIC_PARB_PRF_STALL_DURATION_VC2_MAX_MASK,
      ._rval = AR_NIC_PARB_PRF_STALL_DURATION_VC2_RSTDATA & AR_NIC_PARB_PRF_STALL_DURATION_VC2_MAX_MASK,
      ._index = AR_NIC_PARB_PRF_STALL_DURATION_VC2_MAX_QW,
      ._desc = "Maximum duration of a stall",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_cfg_maint_queue_params_detail[] = {
    { ._name = "MAX_FLITS",
      ._bpos = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_MAX_FLITS_BP,
      ._mask = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_MAX_FLITS_MASK,
      ._rval = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_RSTDATA & AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_MAX_FLITS_MASK,
      ._index = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_MAX_FLITS_QW,
      ._desc = "This field indicates the number of entries in the queue available for software to use",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SFIFO_CRDTS",
      ._bpos = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_SFIFO_CRDTS_BP,
      ._mask = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_SFIFO_CRDTS_MASK,
      ._rval = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_RSTDATA & AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_SFIFO_CRDTS_MASK,
      ._index = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_SFIFO_CRDTS_QW,
      ._desc = "Number of credits in the small FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MAINT_VC",
      ._bpos = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_MAINT_VC_BP,
      ._mask = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_MAINT_VC_MASK,
      ._rval = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_RSTDATA & AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_MAINT_VC_MASK,
      ._index = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_MAINT_VC_QW,
      ._desc = "Virtual channel for MAINT queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BLOCK_ID",
      ._bpos = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_BLOCK_ID_BP,
      ._mask = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_BLOCK_ID_MASK,
      ._rval = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_RSTDATA & AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_BLOCK_ID_MASK,
      ._index = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_BLOCK_ID_QW,
      ._desc = "Block ID of responses to capture",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_cfg_maint_queue_go_detail[] = {
    { ._name = "GO",
      ._bpos = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_GO_BP,
      ._mask = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_GO_MASK,
      ._rval = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_RSTDATA & AR_NIC_PARB_CFG_MAINT_QUEUE_GO_GO_MASK,
      ._index = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_GO_QW,
      ._desc = "Manual mechanism to transition from the LOAD state to the INJECT state",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_cfg_maint_queue_reset_detail[] = {
    { ._name = "RESET",
      ._bpos = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_RESET_BP,
      ._mask = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_RESET_MASK,
      ._rval = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_RSTDATA & AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_RESET_MASK,
      ._index = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_RESET_QW,
      ._desc = "Manual Reset",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_sts_maint_queue_detail[] = {
    { ._name = "QUEUE_STATE",
      ._bpos = AR_NIC_PARB_STS_MAINT_QUEUE_QUEUE_STATE_BP,
      ._mask = AR_NIC_PARB_STS_MAINT_QUEUE_QUEUE_STATE_MASK,
      ._rval = AR_NIC_PARB_STS_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_STS_MAINT_QUEUE_QUEUE_STATE_MASK,
      ._index = AR_NIC_PARB_STS_MAINT_QUEUE_QUEUE_STATE_QW,
      ._desc = "0001:LOAD 0010:INJECT 0100:CAPTURE 1000:FULL",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "LFIFO_CNTR",
      ._bpos = AR_NIC_PARB_STS_MAINT_QUEUE_LFIFO_CNTR_BP,
      ._mask = AR_NIC_PARB_STS_MAINT_QUEUE_LFIFO_CNTR_MASK,
      ._rval = AR_NIC_PARB_STS_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_STS_MAINT_QUEUE_LFIFO_CNTR_MASK,
      ._index = AR_NIC_PARB_STS_MAINT_QUEUE_LFIFO_CNTR_QW,
      ._desc = "Number of entries used in the large fifo",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "SFIFO_CNTR",
      ._bpos = AR_NIC_PARB_STS_MAINT_QUEUE_SFIFO_CNTR_BP,
      ._mask = AR_NIC_PARB_STS_MAINT_QUEUE_SFIFO_CNTR_MASK,
      ._rval = AR_NIC_PARB_STS_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_STS_MAINT_QUEUE_SFIFO_CNTR_MASK,
      ._index = AR_NIC_PARB_STS_MAINT_QUEUE_SFIFO_CNTR_QW,
      ._desc = "Number of entries used in the small fifo",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "RSP_FLIT_CNTR",
      ._bpos = AR_NIC_PARB_STS_MAINT_QUEUE_RSP_FLIT_CNTR_BP,
      ._mask = AR_NIC_PARB_STS_MAINT_QUEUE_RSP_FLIT_CNTR_MASK,
      ._rval = AR_NIC_PARB_STS_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_STS_MAINT_QUEUE_RSP_FLIT_CNTR_MASK,
      ._index = AR_NIC_PARB_STS_MAINT_QUEUE_RSP_FLIT_CNTR_QW,
      ._desc = "Number of response flits in the maintenance queue logic",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "REQ_FLIT_CNTR",
      ._bpos = AR_NIC_PARB_STS_MAINT_QUEUE_REQ_FLIT_CNTR_BP,
      ._mask = AR_NIC_PARB_STS_MAINT_QUEUE_REQ_FLIT_CNTR_MASK,
      ._rval = AR_NIC_PARB_STS_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_STS_MAINT_QUEUE_REQ_FLIT_CNTR_MASK,
      ._index = AR_NIC_PARB_STS_MAINT_QUEUE_REQ_FLIT_CNTR_QW,
      ._desc = "Number of request flits in the maintenance queue logic",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_parb_dbg_maint_queue_detail[] = {
    { ._name = "GENERIC",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_GENERIC_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_GENERIC_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_GENERIC_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_GENERIC_QW,
      ._desc = "Generic Properties of MMR",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RW"
    },
    { ._name = "REQ_HDR_LO_GO",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_GO_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_GO_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_GO_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_GO_QW,
      ._desc = "Set this bit on the last packet to enable the queue when this packet has finished being written",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_LO_ADDR_47_40",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_ADDR_47_40_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_ADDR_47_40_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_ADDR_47_40_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_ADDR_47_40_QW,
      ._desc = "ADDR[47:40] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_LO_IRQINDEX",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_IRQINDEX_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_IRQINDEX_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_IRQINDEX_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_IRQINDEX_QW,
      ._desc = "IRQINDEX[4:0] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_LO_REQCMD",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_REQCMD_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_REQCMD_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_REQCMD_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_REQCMD_QW,
      ._desc = "REQCMD[8:0] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_LO_ADDR_39_6",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_ADDR_39_6_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_ADDR_39_6_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_ADDR_39_6_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_ADDR_39_6_QW,
      ._desc = "ADDR[39:6] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_LO_TC",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_TC_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_TC_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_TC_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_TC_QW,
      ._desc = "TC[3:0] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_LO_PAYLD_CNT",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_PAYLD_CNT_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_PAYLD_CNT_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_PAYLD_CNT_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_LO_PAYLD_CNT_QW,
      ._desc = "Three bit field to indicate how many data flits will follow the header flit (0 to 4)",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_HI_LSTATUS",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_LSTATUS_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_LSTATUS_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_LSTATUS_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_LSTATUS_QW,
      ._desc = "LSTATUS[5:0] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_HI_PI_HINTS",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_PI_HINTS_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_PI_HINTS_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_PI_HINTS_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_PI_HINTS_QW,
      ._desc = "PI_HINTS[5:0] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_HI_ADDR_5_2",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_ADDR_5_2_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_ADDR_5_2_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_ADDR_5_2_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_ADDR_5_2_QW,
      ._desc = "ADDR[5:2] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_HI_CNT_BM",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_CNT_BM_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_CNT_BM_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_CNT_BM_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_CNT_BM_QW,
      ._desc = "CNT_BM[3:0] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_HDR_HI_PI_ID",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_PI_ID_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_PI_ID_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_PI_ID_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_HDR_HI_PI_ID_QW,
      ._desc = "PI_ID[9:0] field of request header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_PAYLD_LO_DATA",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_PAYLD_LO_DATA_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_PAYLD_LO_DATA_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_PAYLD_LO_DATA_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_PAYLD_LO_DATA_QW,
      ._desc = "Lower 64-bits of request payload flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "REQ_PAYLD_HI_DATA",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_PAYLD_HI_DATA_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_PAYLD_HI_DATA_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_PAYLD_HI_DATA_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_REQ_PAYLD_HI_DATA_QW,
      ._desc = "Upper 64-bits of request payload flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "W"
    },
    { ._name = "RSP_HDR_LO_TAIL",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_TAIL_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_TAIL_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_TAIL_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_TAIL_QW,
      ._desc = "Set if this header is followed by no data, otherwise the payload size will correspond to the data requested by the request with the matching PI_ID",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "R"
    },
    { ._name = "RSP_HDR_LO_PI_ID",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_PI_ID_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_PI_ID_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_PI_ID_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_PI_ID_QW,
      ._desc = "PI_ID[9:0] field of response header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "R"
    },
    { ._name = "RSP_HDR_LO_RSTATUS",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_RSTATUS_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_RSTATUS_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_RSTATUS_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_RSTATUS_QW,
      ._desc = "RSTATUS[5:0] field of response header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "R"
    },
    { ._name = "RSP_HDR_LO_RSPCMD",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_RSPCMD_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_RSPCMD_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_RSPCMD_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_RSPCMD_QW,
      ._desc = "RSPCMD[2:0] field of response header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "R"
    },
    { ._name = "RSP_HDR_LO_UV",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_UV_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_UV_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_UV_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_HDR_LO_UV_QW,
      ._desc = "UV field of response header flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "R"
    },
    { ._name = "RSP_PAYLD_LO_DATA",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_PAYLD_LO_DATA_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_PAYLD_LO_DATA_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_PAYLD_LO_DATA_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_PAYLD_LO_DATA_QW,
      ._desc = "Lower 64-bits of response payload flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "R"
    },
    { ._name = "RSP_PAYLD_HI_DATA",
      ._bpos = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_PAYLD_HI_DATA_BP,
      ._mask = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_PAYLD_HI_DATA_MASK,
      ._rval = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA & AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_PAYLD_HI_DATA_MASK,
      ._index = AR_NIC_PARB_DBG_MAINT_QUEUE_RSP_PAYLD_HI_DATA_QW,
      ._desc = "Upper 64-bits of response payload flit",
      ._type_bitmsk = 0x000000000000000aull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR PARB DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_rval[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSTDATA_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSTDATA_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSTDATA_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_rmsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSTMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSTMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSTMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_wrmsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_WRTMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_WRTMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_WRTMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_rdmsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RDMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RDMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RDMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_xsmsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_XSMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_XSMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_XSMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_wsemsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_WSEMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_WSEMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_WSEMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_rsemsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSEMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSEMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_RSEMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_w1smsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_W1SMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_W1SMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_W1SMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_w1cmsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_W1CMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_W1CMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_W1CMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_wrstmsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_WRSTMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_WRSTMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_hwwmsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_HWWMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_HWWMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_HWWMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_hi_parb_hwrmsk[3] = {
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_HWRMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_HWRMASK_QW1,
	AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB_HWRMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_rval[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTDATA_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_rmsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSTMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_wrmsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_WRTMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_WRTMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_rdmsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RDMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RDMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_xsmsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_XSMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_XSMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_wsemsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_WSEMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_WSEMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_rsemsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSEMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_RSEMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_w1smsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_W1SMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_W1SMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_w1cmsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_W1CMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_W1CMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_wrstmsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_WRSTMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_hwwmsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_HWWMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_HWWMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_mmr_ring_0_mid_parb_hwrmsk[2] = {
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_HWRMASK_QW0,
	AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB_HWRMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_rval[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSTDATA_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSTDATA_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSTDATA_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_rmsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSTMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSTMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSTMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_wrmsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_WRTMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_WRTMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_WRTMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_rdmsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RDMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RDMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RDMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_xsmsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_XSMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_XSMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_XSMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_wsemsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_WSEMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_WSEMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_WSEMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_rsemsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSEMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSEMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_RSEMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_w1smsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_W1SMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_W1SMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_W1SMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_w1cmsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_W1CMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_W1CMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_W1CMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_wrstmsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_WRSTMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_WRSTMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_hwwmsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_HWWMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_HWWMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_HWWMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_hi_parb_hwrmsk[3] = {
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_HWRMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_HWRMASK_QW1,
	AR_NIC_PARB_ERR_FLG_1_HI_PARB_HWRMASK_QW2
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_rval[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTDATA_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_rmsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSTMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_wrmsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_WRTMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_WRTMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_rdmsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_RDMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_RDMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_xsmsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_XSMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_XSMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_wsemsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_WSEMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_WSEMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_rsemsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSEMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_RSEMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_w1smsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_W1SMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_W1SMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_w1cmsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_W1CMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_W1CMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_wrstmsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_WRSTMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_hwwmsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_HWWMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_HWWMASK_QW1
};
static const uint64_t __ar_nic_parb_err_flg_1_mid_parb_hwrmsk[2] = {
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_HWRMASK_QW0,
	AR_NIC_PARB_ERR_FLG_1_MID_PARB_HWRMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_rval[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSTDATA_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSTDATA_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSTDATA_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_rmsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSTMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSTMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSTMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_wrmsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_WRTMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_WRTMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_WRTMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_rdmsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RDMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RDMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RDMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_xsmsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_XSMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_XSMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_XSMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_wsemsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_WSEMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_WSEMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_WSEMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_rsemsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSEMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSEMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_RSEMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_w1smsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_W1SMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_W1SMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_W1SMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_w1cmsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_W1CMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_W1CMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_W1CMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_wrstmsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_WRSTMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_WRSTMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_hwwmsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_HWWMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_HWWMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_HWWMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb_hwrmsk[3] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_HWRMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_HWRMASK_QW1,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB_HWRMASK_QW2
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_rval[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_RSTDATA_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_RSTDATA_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_rmsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_RSTMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_RSTMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_wrmsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_WRTMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_WRTMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_rdmsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_RDMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_RDMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_xsmsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_XSMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_XSMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_wsemsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_WSEMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_WSEMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_rsemsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_RSEMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_RSEMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_w1smsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_W1SMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_W1SMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_w1cmsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_W1CMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_W1CMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_wrstmsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_WRSTMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_hwwmsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_HWWMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_HWWMASK_QW1
};
static const uint64_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb_hwrmsk[2] = {
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_HWRMASK_QW0,
	AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB_HWRMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_rval[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSTDATA_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSTDATA_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSTDATA_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_rmsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSTMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSTMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSTMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_wrmsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_WRTMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_WRTMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_WRTMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_rdmsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RDMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RDMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RDMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_xsmsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_XSMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_XSMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_XSMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_wsemsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_WSEMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_WSEMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_WSEMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_rsemsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSEMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSEMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_RSEMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_w1smsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_W1SMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_W1SMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_W1SMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_w1cmsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_W1CMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_W1CMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_W1CMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_wrstmsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_WRSTMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_WRSTMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_hwwmsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_HWWMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_HWWMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_HWWMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_hi_parb_hwrmsk[3] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_HWRMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_HWRMASK_QW1,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB_HWRMASK_QW2
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_rval[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_RSTDATA_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_RSTDATA_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_rmsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_RSTMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_RSTMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_wrmsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_WRTMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_WRTMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_rdmsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_RDMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_RDMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_xsmsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_XSMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_XSMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_wsemsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_WSEMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_WSEMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_rsemsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_RSEMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_RSEMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_w1smsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_W1SMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_W1SMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_w1cmsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_W1CMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_W1CMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_wrstmsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_WRSTMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_hwwmsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_HWWMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_HWWMASK_QW1
};
static const uint64_t __ar_nic_parb_parb_power_down_ff_mid_parb_hwrmsk[2] = {
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_HWRMASK_QW0,
	AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB_HWRMASK_QW1
};

/*
 *  AR PARB MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_parb_cfg_params = {
    ._name = "AR_NIC_PARB_CFG_PARAMS",
    ._addr = AR_NIC_PARB_CFG_PARAMS,
    ._rval.val = AR_NIC_PARB_CFG_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_CFG_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_CFG_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_CFG_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_CFG_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_CFG_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_CFG_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_CFG_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_CFG_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_CFG_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_CFG_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_CFG_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_cfg_params_detail
};
static const cmmr_br_t __ar_nic_parb_parb_mmr_ring_0_hi_parb = {
    ._name = "AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB",
    ._addr = AR_NIC_PARB_PARB_MMR_RING_0_HI_PARB,
    ._rval.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_hi_parb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_parb_mmr_ring_0_hi_parb_detail
};
static const cmmr_br_t __ar_nic_parb_parb_mmr_ring_0_mid_parb = {
    ._name = "AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB",
    ._addr = AR_NIC_PARB_PARB_MMR_RING_0_MID_PARB,
    ._rval.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_parb_parb_mmr_ring_0_mid_parb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_parb_mmr_ring_0_mid_parb_detail
};
static const cmmr_br_t __ar_nic_parb_parb_mmr_ring_0_lo_parb = {
    ._name = "AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB",
    ._addr = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB,
    ._rval.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_PARB_MMR_RING_0_LO_PARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_parb_mmr_ring_0_lo_parb_detail
};
static const cmmr_br_t __ar_nic_parb_err_flg_1_hi_parb = {
    ._name = "AR_NIC_PARB_ERR_FLG_1_HI_PARB",
    ._addr = AR_NIC_PARB_ERR_FLG_1_HI_PARB,
    ._rval.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_hi_parb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_err_flg_1_hi_parb_detail
};
static const cmmr_br_t __ar_nic_parb_err_flg_1_mid_parb = {
    ._name = "AR_NIC_PARB_ERR_FLG_1_MID_PARB",
    ._addr = AR_NIC_PARB_ERR_FLG_1_MID_PARB,
    ._rval.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_parb_err_flg_1_mid_parb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_err_flg_1_mid_parb_detail
};
static const cmmr_br_t __ar_nic_parb_err_flg_1_lo_parb = {
    ._name = "AR_NIC_PARB_ERR_FLG_1_LO_PARB",
    ._addr = AR_NIC_PARB_ERR_FLG_1_LO_PARB,
    ._rval.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_ERR_FLG_1_LO_PARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_err_flg_1_lo_parb_detail
};
static const cmmr_br_t __ar_nic_parb_nic_pi_req_flit_2_hi_parb = {
    ._name = "AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB",
    ._addr = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_HI_PARB,
    ._rval.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_hi_parb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_nic_pi_req_flit_2_hi_parb_detail
};
static const cmmr_br_t __ar_nic_parb_nic_pi_req_flit_2_mid_parb = {
    ._name = "AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB",
    ._addr = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_MID_PARB,
    ._rval.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_parb_nic_pi_req_flit_2_mid_parb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_nic_pi_req_flit_2_mid_parb_detail
};
static const cmmr_br_t __ar_nic_parb_nic_pi_req_flit_2_lo_parb = {
    ._name = "AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB",
    ._addr = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB,
    ._rval.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_NIC_PI_REQ_FLIT_2_LO_PARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_nic_pi_req_flit_2_lo_parb_detail
};
static const cmmr_br_t __ar_nic_parb_parb_power_down_ff_hi_parb = {
    ._name = "AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB",
    ._addr = AR_NIC_PARB_PARB_POWER_DOWN_FF_HI_PARB,
    ._rval.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_hi_parb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_parb_power_down_ff_hi_parb_detail
};
static const cmmr_br_t __ar_nic_parb_parb_power_down_ff_mid_parb = {
    ._name = "AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB",
    ._addr = AR_NIC_PARB_PARB_POWER_DOWN_FF_MID_PARB,
    ._rval.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_parb_parb_power_down_ff_mid_parb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_parb_power_down_ff_mid_parb_detail
};
static const cmmr_br_t __ar_nic_parb_parb_power_down_ff_lo_parb = {
    ._name = "AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB",
    ._addr = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB,
    ._rval.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_PARB_POWER_DOWN_FF_LO_PARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_parb_power_down_ff_lo_parb_detail
};
static const cmmr_br_t __ar_nic_parb_err_flg = {
    ._name = "AR_NIC_PARB_ERR_FLG",
    ._addr = AR_NIC_PARB_ERR_FLG,
    ._rval.val = AR_NIC_PARB_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x000000000011c811ull,
    ._info = __ar_nic_parb_err_flg_detail
};
static const cmmr_br_t __ar_nic_parb_err_clr = {
    ._name = "AR_NIC_PARB_ERR_CLR",
    ._addr = AR_NIC_PARB_ERR_CLR,
    ._rval.val = AR_NIC_PARB_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_parb_err_clr_detail
};
static const cmmr_br_t __ar_nic_parb_err_hss_msk = {
    ._name = "AR_NIC_PARB_ERR_HSS_MSK",
    ._addr = AR_NIC_PARB_ERR_HSS_MSK,
    ._rval.val = AR_NIC_PARB_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_parb_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_parb_err_os_msk = {
    ._name = "AR_NIC_PARB_ERR_OS_MSK",
    ._addr = AR_NIC_PARB_ERR_OS_MSK,
    ._rval.val = AR_NIC_PARB_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_parb_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_parb_err_first_flg = {
    ._name = "AR_NIC_PARB_ERR_FIRST_FLG",
    ._addr = AR_NIC_PARB_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_PARB_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_parb_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_parb_dbg_state = {
    ._name = "AR_NIC_PARB_DBG_STATE",
    ._addr = AR_NIC_PARB_DBG_STATE,
    ._rval.val = AR_NIC_PARB_DBG_STATE_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_DBG_STATE_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_DBG_STATE_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_DBG_STATE_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_DBG_STATE_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_DBG_STATE_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_DBG_STATE_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_DBG_STATE_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_DBG_STATE_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_DBG_STATE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_DBG_STATE_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_DBG_STATE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_parb_dbg_state_detail
};
static const cmmr_br_t __ar_nic_parb_prf_en = {
    ._name = "AR_NIC_PARB_PRF_EN",
    ._addr = AR_NIC_PARB_PRF_EN,
    ._rval.val = AR_NIC_PARB_PRF_EN_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_PRF_EN_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_PRF_EN_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_PRF_EN_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_PRF_EN_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_PRF_EN_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_PRF_EN_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_PRF_EN_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_PRF_EN_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_PRF_EN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_PRF_EN_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_PRF_EN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_prf_en_detail
};
static const cmmr_br_t __ar_nic_parb_prf_stall_duration_vc0 = {
    ._name = "AR_NIC_PARB_PRF_STALL_DURATION_VC0",
    ._addr = AR_NIC_PARB_PRF_STALL_DURATION_VC0,
    ._rval.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_parb_prf_stall_duration_vc0_detail
};
static const cmmr_br_t __ar_nic_parb_prf_stall_duration_vc1 = {
    ._name = "AR_NIC_PARB_PRF_STALL_DURATION_VC1",
    ._addr = AR_NIC_PARB_PRF_STALL_DURATION_VC1,
    ._rval.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_parb_prf_stall_duration_vc1_detail
};
static const cmmr_br_t __ar_nic_parb_prf_stall_duration_vc2 = {
    ._name = "AR_NIC_PARB_PRF_STALL_DURATION_VC2",
    ._addr = AR_NIC_PARB_PRF_STALL_DURATION_VC2,
    ._rval.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_PRF_STALL_DURATION_VC2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_parb_prf_stall_duration_vc2_detail
};
static const cmmr_br_t __ar_nic_parb_cfg_maint_queue_params = {
    ._name = "AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS",
    ._addr = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS,
    ._rval.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_parb_cfg_maint_queue_params_detail
};
static const cmmr_br_t __ar_nic_parb_cfg_maint_queue_go = {
    ._name = "AR_NIC_PARB_CFG_MAINT_QUEUE_GO",
    ._addr = AR_NIC_PARB_CFG_MAINT_QUEUE_GO,
    ._rval.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_GO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_parb_cfg_maint_queue_go_detail
};
static const cmmr_br_t __ar_nic_parb_cfg_maint_queue_reset = {
    ._name = "AR_NIC_PARB_CFG_MAINT_QUEUE_RESET",
    ._addr = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET,
    ._rval.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_CFG_MAINT_QUEUE_RESET_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_parb_cfg_maint_queue_reset_detail
};
static const cmmr_br_t __ar_nic_parb_sts_maint_queue = {
    ._name = "AR_NIC_PARB_STS_MAINT_QUEUE",
    ._addr = AR_NIC_PARB_STS_MAINT_QUEUE,
    ._rval.val = AR_NIC_PARB_STS_MAINT_QUEUE_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_STS_MAINT_QUEUE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_parb_sts_maint_queue_detail
};
static const cmmr_br_t __ar_nic_parb_dbg_maint_queue = {
    ._name = "AR_NIC_PARB_DBG_MAINT_QUEUE",
    ._addr = AR_NIC_PARB_DBG_MAINT_QUEUE,
    ._rval.val = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTDATA,
    ._rmsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_RSTMASK,
    ._wrmsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_WRTMASK,
    ._rdmsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_RDMASK,
    ._xsmsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_XSMASK,
    ._wsemsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_WSEMASK,
    ._rsemsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_RSEMASK,
    ._w1smsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_W1SMASK,
    ._w1cmsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_W1CMASK,
    ._wrstmsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_HWWMASK,
    ._hwrmsk.val = AR_NIC_PARB_DBG_MAINT_QUEUE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 512,
      ._type_bitmsk = 0x000000000000000aull,
    ._info = __ar_nic_parb_dbg_maint_queue_detail
};

/*
 *  INSTALL AR PARB MMRS
 */
static const cmmr_br_t* __ar_parb_mmrs[] = {
    &__ar_nic_parb_cfg_params,
    &__ar_nic_parb_err_flg,
    &__ar_nic_parb_err_clr,
    &__ar_nic_parb_err_hss_msk,
    &__ar_nic_parb_err_os_msk,
    &__ar_nic_parb_err_first_flg,
    &__ar_nic_parb_dbg_state,
    &__ar_nic_parb_prf_en,
    &__ar_nic_parb_prf_stall_duration_vc0,
    &__ar_nic_parb_prf_stall_duration_vc1,
    &__ar_nic_parb_prf_stall_duration_vc2,
    &__ar_nic_parb_cfg_maint_queue_params,
    &__ar_nic_parb_cfg_maint_queue_go,
    &__ar_nic_parb_cfg_maint_queue_reset,
    &__ar_nic_parb_sts_maint_queue,
    &__ar_nic_parb_dbg_maint_queue,
    NULL
};

/*
 *  INSTALL AR PARB LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_parb_enc_mmrs[] = {
    &__ar_nic_parb_parb_mmr_ring_0_hi_parb,
    &__ar_nic_parb_parb_mmr_ring_0_mid_parb,
    &__ar_nic_parb_parb_mmr_ring_0_lo_parb,
    &__ar_nic_parb_err_flg_1_hi_parb,
    &__ar_nic_parb_err_flg_1_mid_parb,
    &__ar_nic_parb_err_flg_1_lo_parb,
    &__ar_nic_parb_nic_pi_req_flit_2_hi_parb,
    &__ar_nic_parb_nic_pi_req_flit_2_mid_parb,
    &__ar_nic_parb_nic_pi_req_flit_2_lo_parb,
    &__ar_nic_parb_parb_power_down_ff_hi_parb,
    &__ar_nic_parb_parb_power_down_ff_mid_parb,
    &__ar_nic_parb_parb_power_down_ff_lo_parb,
    NULL
};

#endif
