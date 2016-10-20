/******************************************************************************
 * COPYRIGHT CRAY INC. ar_tarb_detailed_mmrs_h.h
 * FILE: ar_tarb_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/
/**
 * @file ar_tarb_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:03 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_tarb_mmr_values.h and ar_tarb_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_tarb_mmr_values.h"

#ifndef _AR_TARB_DETAILED_MMRS_H_H_
#define _AR_TARB_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_tarb_mmrs[];	/* TARB Array */

/*
 *  AR TARB MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_tarb_cfg_params_detail[] = {
    { ._name = "MAX_PKT_SIZE",
      ._bpos = AR_NIC_TARB_CFG_PARAMS_MAX_PKT_SIZE_BP,
      ._mask = AR_NIC_TARB_CFG_PARAMS_MAX_PKT_SIZE_MASK,
      ._rval = AR_NIC_TARB_CFG_PARAMS_RSTDATA & AR_NIC_TARB_CFG_PARAMS_MAX_PKT_SIZE_MASK,
      ._index = AR_NIC_TARB_CFG_PARAMS_MAX_PKT_SIZE_QW,
      ._desc = "Maximum packet size expected to traverse the TARB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_DLA",
      ._bpos = AR_NIC_TARB_CFG_PARAMS_SF_DLA_BP,
      ._mask = AR_NIC_TARB_CFG_PARAMS_SF_DLA_MASK,
      ._rval = AR_NIC_TARB_CFG_PARAMS_RSTDATA & AR_NIC_TARB_CFG_PARAMS_SF_DLA_MASK,
      ._index = AR_NIC_TARB_CFG_PARAMS_SF_DLA_QW,
      ._desc = "Setting this bit to 1'b1 will enable store-and-forward on the DLA input FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_BTE",
      ._bpos = AR_NIC_TARB_CFG_PARAMS_SF_BTE_BP,
      ._mask = AR_NIC_TARB_CFG_PARAMS_SF_BTE_MASK,
      ._rval = AR_NIC_TARB_CFG_PARAMS_RSTDATA & AR_NIC_TARB_CFG_PARAMS_SF_BTE_MASK,
      ._index = AR_NIC_TARB_CFG_PARAMS_SF_BTE_QW,
      ._desc = "Setting this bit to 1'b1 will enable store-and-forward on the BTE input FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_CE",
      ._bpos = AR_NIC_TARB_CFG_PARAMS_SF_CE_BP,
      ._mask = AR_NIC_TARB_CFG_PARAMS_SF_CE_MASK,
      ._rval = AR_NIC_TARB_CFG_PARAMS_RSTDATA & AR_NIC_TARB_CFG_PARAMS_SF_CE_MASK,
      ._index = AR_NIC_TARB_CFG_PARAMS_SF_CE_QW,
      ._desc = "Setting this bit to 1'b1 will enable store-and-forward on the CE input FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SSID_CREDIT_MAX",
      ._bpos = AR_NIC_TARB_CFG_PARAMS_SSID_CREDIT_MAX_BP,
      ._mask = AR_NIC_TARB_CFG_PARAMS_SSID_CREDIT_MAX_MASK,
      ._rval = AR_NIC_TARB_CFG_PARAMS_RSTDATA & AR_NIC_TARB_CFG_PARAMS_SSID_CREDIT_MAX_MASK,
      ._index = AR_NIC_TARB_CFG_PARAMS_SSID_CREDIT_MAX_QW,
      ._desc = "SSID Credit Maximum",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_UNUSED_145_35_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_UNUSED_145_35_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSTDATA_QW2 & AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_UNUSED_145_35_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_UNUSED_145_35_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_detail[] = {
    { ._name = "UNUSED_127_94",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_UNUSED_127_94_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_UNUSED_127_94_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_UNUSED_127_94_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_UNUSED_127_94_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SSID_STALLED",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_STALLED_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_STALLED_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_STALLED_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_STALLED_QW,
      ._desc = "SSID stalled count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SSID_PKTS",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_PKTS_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_PKTS_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_PKTS_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_PKTS_QW,
      ._desc = "SSID packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SSID_FLITS",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_FLITS_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_FLITS_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_FLITS_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_SSID_FLITS_QW,
      ._desc = "SSID flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_BLOCKED",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_BLOCKED_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_BLOCKED_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_BLOCKED_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_BLOCKED_QW,
      ._desc = "DLA blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_PKTS",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_PKTS_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_PKTS_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_PKTS_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_PKTS_QW,
      ._desc = "DLA packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_DLA_FLITS",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_FLITS_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_FLITS_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_FLITS_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_DLA_FLITS_QW,
      ._desc = "DLA flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_BLOCKED",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_BLOCKED_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_BLOCKED_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_BLOCKED_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_BLOCKED_QW,
      ._desc = "BTE blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_PKTS",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_PKTS_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_PKTS_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_PKTS_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_PKTS_QW,
      ._desc = "BTE packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_BTE_FLITS",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_FLITS_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_FLITS_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_FLITS_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_BTE_FLITS_QW,
      ._desc = "BTE flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CE_BLOCKED",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_BLOCKED_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_BLOCKED_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_BLOCKED_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_BLOCKED_QW,
      ._desc = "CE blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CE_PKTS",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_PKTS_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_PKTS_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_PKTS_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_PKTS_QW,
      ._desc = "CE packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CE_FLITS",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_FLITS_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_FLITS_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_FLITS_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_CNTR_CE_FLITS_QW,
      ._desc = "CE flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_64",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_UNUSED_81_64_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_UNUSED_81_64_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_UNUSED_81_64_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_UNUSED_81_64_QW,
      ._desc = "unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_tarb_mmr_ring_0_lo_tarb_detail[] = {
    { ._name = "UNUSED_145_35",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_UNUSED_145_35_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_UNUSED_145_35_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_UNUSED_145_35_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_UNUSED_145_35_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_TARB_PI_OS_IRQ",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_PI_OS_IRQ_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_PI_OS_IRQ_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_PI_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_TARB_LB_HSS_IRQ",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_LB_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_TARB_NETMON_RING_WRACK",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_NETMON_RING_WRACK_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_NETMON_RING_WRACK_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_NETMON_RING_WRACK_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_NETMON_RING_WRACK_QW,
      ._desc = "NETMON Write Acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_TARB_NETMON_RING_15_0",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_NETMON_RING_15_0_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_NETMON_RING_15_0_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_NETMON_RING_15_0_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_R_Q_TARB_NETMON_RING_15_0_QW,
      ._desc = "NETMON Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NETMON_TARB_RING_15_0",
      ._bpos = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_I_NETMON_TARB_RING_15_0_BP,
      ._mask = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_I_NETMON_TARB_RING_15_0_MASK,
      ._rval = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_I_NETMON_TARB_RING_15_0_MASK,
      ._index = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_I_NETMON_TARB_RING_15_0_QW,
      ._desc = "NETMON Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_err_flg_1_hi_tarb_detail[] = {
    { ._name = "UNUSED_145_71",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_HI_TARB_UNUSED_145_71_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_HI_TARB_UNUSED_145_71_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSTDATA_QW2 & AR_NIC_TARB_ERR_FLG_1_HI_TARB_UNUSED_145_71_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_HI_TARB_UNUSED_145_71_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_err_flg_1_mid_tarb_detail[] = {
    { ._name = "UNUSED_127_71",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_MID_TARB_UNUSED_127_71_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_MID_TARB_UNUSED_127_71_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_ERR_FLG_1_MID_TARB_UNUSED_127_71_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_MID_TARB_UNUSED_127_71_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DLA_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_MID_TARB_DLA_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_MID_TARB_DLA_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_ERR_FLG_1_MID_TARB_DLA_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_MID_TARB_DLA_UNDERFLOW_QW,
      ._desc = "DLA Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_MID_TARB_BTE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_MID_TARB_BTE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_ERR_FLG_1_MID_TARB_BTE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_MID_TARB_BTE_UNDERFLOW_QW,
      ._desc = "BTE Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_MID_TARB_CE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_MID_TARB_CE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_ERR_FLG_1_MID_TARB_CE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_MID_TARB_CE_UNDERFLOW_QW,
      ._desc = "CE Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DLA_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_MID_TARB_DLA_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_MID_TARB_DLA_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_ERR_FLG_1_MID_TARB_DLA_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_MID_TARB_DLA_OVERFLOW_QW,
      ._desc = "DLA Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "BTE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_MID_TARB_BTE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_MID_TARB_BTE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_ERR_FLG_1_MID_TARB_BTE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_MID_TARB_BTE_OVERFLOW_QW,
      ._desc = "BTE Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_MID_TARB_CE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_MID_TARB_CE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_ERR_FLG_1_MID_TARB_CE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_MID_TARB_CE_OVERFLOW_QW,
      ._desc = "CE Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_MID_TARB_DIAG_ONLY_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_MID_TARB_DIAG_ONLY_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_ERR_FLG_1_MID_TARB_DIAG_ONLY_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_MID_TARB_DIAG_ONLY_QW,
      ._desc = "Diagnostic Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_err_flg_1_lo_tarb_detail[] = {
    { ._name = "UNUSED_63_7",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_LO_TARB_UNUSED_63_7_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_LO_TARB_UNUSED_63_7_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTDATA & AR_NIC_TARB_ERR_FLG_1_LO_TARB_UNUSED_63_7_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_LO_TARB_UNUSED_63_7_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DLA_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_DLA_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_DLA_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTDATA & AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_DLA_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_DLA_UNDERFLOW_QW,
      ._desc = "DLA Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_BTE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_BTE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTDATA & AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_BTE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_BTE_UNDERFLOW_QW,
      ._desc = "BTE Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_CE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_CE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTDATA & AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_CE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_CE_UNDERFLOW_QW,
      ._desc = "CE Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DLA_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_DLA_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_DLA_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTDATA & AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_DLA_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_DLA_OVERFLOW_QW,
      ._desc = "DLA Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_BTE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_BTE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_BTE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTDATA & AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_BTE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_BTE_OVERFLOW_QW,
      ._desc = "BTE Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_CE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_CE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTDATA & AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_CE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_LO_TARB_I_CE_OVERFLOW_QW,
      ._desc = "CE Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_TARB_ERR_FLG_1_LO_TARB_UNUSED_0_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_1_LO_TARB_UNUSED_0_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTDATA & AR_NIC_TARB_ERR_FLG_1_LO_TARB_UNUSED_0_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_1_LO_TARB_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_detail[] = {
    { ._name = "TARB_SSID_REQ_SB",
      ._bpos = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_TARB_SSID_REQ_SB_BP,
      ._mask = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_TARB_SSID_REQ_SB_MASK,
      ._rval = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSTDATA_QW2 & AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_TARB_SSID_REQ_SB_MASK,
      ._index = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_TARB_SSID_REQ_SB_QW,
      ._desc = "SSID Request Flit Sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TARB_SSID_REQ_FLIT",
      ._bpos = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_TARB_SSID_REQ_FLIT_BP,
      ._mask = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_TARB_SSID_REQ_FLIT_MASK,
      ._rval = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSTDATA_QW2 & AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_TARB_SSID_REQ_FLIT_MASK,
      ._index = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_TARB_SSID_REQ_FLIT_QW,
      ._desc = "SSID Request Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_detail[] = {
    { ._name = "TARB_SSID_REQ_FLIT",
      ._bpos = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_TARB_SSID_REQ_FLIT_BP,
      ._mask = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_TARB_SSID_REQ_FLIT_MASK,
      ._rval = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_TARB_SSID_REQ_FLIT_MASK,
      ._index = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_TARB_SSID_REQ_FLIT_QW,
      ._desc = "SSID Request Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_tarb_ssid_req_flit_2_lo_tarb_detail[] = {
    { ._name = "TARB_SSID_REQ_FLIT",
      ._bpos = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_TARB_SSID_REQ_FLIT_BP,
      ._mask = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_TARB_SSID_REQ_FLIT_MASK,
      ._rval = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_TARB_SSID_REQ_FLIT_MASK,
      ._index = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_TARB_SSID_REQ_FLIT_QW,
      ._desc = "SSID Request Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_detail[] = {
    { ._name = "UNUSED_145_37",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_UNUSED_145_37_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_UNUSED_145_37_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSTDATA_QW2 & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_UNUSED_145_37_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_UNUSED_145_37_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_detail[] = {
    { ._name = "UNUSED_145_37",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_UNUSED_145_37_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_UNUSED_145_37_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_RSTDATA_QW1 & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_UNUSED_145_37_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_UNUSED_145_37_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_lo_tarb_detail[] = {
    { ._name = "UNUSED_145_37",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_UNUSED_145_37_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_UNUSED_145_37_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_UNUSED_145_37_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_UNUSED_145_37_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_SSID_TARB_REQ_ACK",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_I_SSID_TARB_REQ_ACK_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_I_SSID_TARB_REQ_ACK_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_I_SSID_TARB_REQ_ACK_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_I_SSID_TARB_REQ_ACK_QW,
      ._desc = "SSID-toTARB request acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RESERVED_35_33",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_35_33_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_35_33_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_35_33_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_35_33_QW,
      ._desc = "Always reads zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_TARB_DLA_REQ_ACK",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_DLA_REQ_ACK_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_DLA_REQ_ACK_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_DLA_REQ_ACK_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_DLA_REQ_ACK_QW,
      ._desc = "TARB-to-DLA request acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RESERVED_31_29",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_31_29_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_31_29_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_31_29_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_31_29_QW,
      ._desc = "Always reads zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_TARB_BTE_REQ_ACK",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_BTE_REQ_ACK_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_BTE_REQ_ACK_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_BTE_REQ_ACK_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_BTE_REQ_ACK_QW,
      ._desc = "TARB-to-BTE request acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RESERVED_27_25",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_27_25_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_27_25_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_27_25_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_27_25_QW,
      ._desc = "Always reads zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_TARB_CE_REQ_ACK",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_CE_REQ_ACK_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_CE_REQ_ACK_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_CE_REQ_ACK_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_R_Q_TARB_CE_REQ_ACK_QW,
      ._desc = "TARB-to-CE request acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TARB_CRDTS",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_TARB_CRDTS_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_TARB_CRDTS_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_TARB_CRDTS_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_TARB_CRDTS_QW,
      ._desc = "Number of outstanding credits on the TARB-to-SSID interface",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TARB_CRDTS_EMPTY",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_TARB_CRDTS_EMPTY_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_TARB_CRDTS_EMPTY_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_TARB_CRDTS_EMPTY_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_TARB_CRDTS_EMPTY_QW,
      ._desc = "Set if the number of outstanding credits is greater than the maximum number of credits minus the maximum packet size on the TARB-to-SSID interface",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_DLA_TARB_DL_REC",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_I_DLA_TARB_DL_REC_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_I_DLA_TARB_DL_REC_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_I_DLA_TARB_DL_REC_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_I_DLA_TARB_DL_REC_QW,
      ._desc = "Deadlock Recovery",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "QOS_VLD",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_QOS_VLD_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_QOS_VLD_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_QOS_VLD_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_QOS_VLD_QW,
      ._desc = "Set if the QoS policer is not restricting traffic flow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_HOLD",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_HOLD_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_HOLD_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_HOLD_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_HOLD_QW,
      ._desc = "Set if a FIFO is in the middle of sending a packet until a tail flit is seen",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RESERVED_11",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_11_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_11_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_11_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_11_QW,
      ._desc = "Always reads zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_ACK",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_ACK_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_ACK_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_ACK_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_ACK_QW,
      ._desc = "Set to indicate a tail bit for a FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RESERVED_7",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_7_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_7_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_7_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_7_QW,
      ._desc = "Always reads zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_GNT",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_GNT_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_GNT_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_GNT_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_GNT_QW,
      ._desc = "Grant lines to arbiters",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RESERVED_3",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_3_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_3_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_3_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RESERVED_3_QW,
      ._desc = "Always reads zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ARB_REQ",
      ._bpos = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_REQ_BP,
      ._mask = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_REQ_MASK,
      ._rval = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA & AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_REQ_MASK,
      ._index = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_ARB_REQ_QW,
      ._desc = "Request lines from arbiters",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_cfg_qos_rate_detail[] = {
    { ._name = "B2_RATE",
      ._bpos = AR_NIC_TARB_CFG_QOS_RATE_B2_RATE_BP,
      ._mask = AR_NIC_TARB_CFG_QOS_RATE_B2_RATE_MASK,
      ._rval = AR_NIC_TARB_CFG_QOS_RATE_RSTDATA & AR_NIC_TARB_CFG_QOS_RATE_B2_RATE_MASK,
      ._index = AR_NIC_TARB_CFG_QOS_RATE_B2_RATE_QW,
      ._desc = "Bucket 2 Rate, in terms of the number of clock cycles between each increment (a value of 0 will increment every cycle, a value of 1 will increment every other cycle, and so on)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "B1_RATE",
      ._bpos = AR_NIC_TARB_CFG_QOS_RATE_B1_RATE_BP,
      ._mask = AR_NIC_TARB_CFG_QOS_RATE_B1_RATE_MASK,
      ._rval = AR_NIC_TARB_CFG_QOS_RATE_RSTDATA & AR_NIC_TARB_CFG_QOS_RATE_B1_RATE_MASK,
      ._index = AR_NIC_TARB_CFG_QOS_RATE_B1_RATE_QW,
      ._desc = "Bucket 1 Rate, in terms of the number of clock cycles between each increment (a value of 0 will increment every cycle, a value of 1 will increment every other cycle, and so on)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_cfg_qos_size_detail[] = {
    { ._name = "B2_SIZE",
      ._bpos = AR_NIC_TARB_CFG_QOS_SIZE_B2_SIZE_BP,
      ._mask = AR_NIC_TARB_CFG_QOS_SIZE_B2_SIZE_MASK,
      ._rval = AR_NIC_TARB_CFG_QOS_SIZE_RSTDATA & AR_NIC_TARB_CFG_QOS_SIZE_B2_SIZE_MASK,
      ._index = AR_NIC_TARB_CFG_QOS_SIZE_B2_SIZE_QW,
      ._desc = "Bucket 2 Size, in terms of packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "B1_SIZE",
      ._bpos = AR_NIC_TARB_CFG_QOS_SIZE_B1_SIZE_BP,
      ._mask = AR_NIC_TARB_CFG_QOS_SIZE_B1_SIZE_MASK,
      ._rval = AR_NIC_TARB_CFG_QOS_SIZE_RSTDATA & AR_NIC_TARB_CFG_QOS_SIZE_B1_SIZE_MASK,
      ._index = AR_NIC_TARB_CFG_QOS_SIZE_B1_SIZE_QW,
      ._desc = "Bucket 1 Size, in terms of packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_dbg_credit_detail[] = {
    { ._name = "SSID_CREDIT_CNT",
      ._bpos = AR_NIC_TARB_DBG_CREDIT_SSID_CREDIT_CNT_BP,
      ._mask = AR_NIC_TARB_DBG_CREDIT_SSID_CREDIT_CNT_MASK,
      ._rval = AR_NIC_TARB_DBG_CREDIT_RSTDATA & AR_NIC_TARB_DBG_CREDIT_SSID_CREDIT_CNT_MASK,
      ._index = AR_NIC_TARB_DBG_CREDIT_SSID_CREDIT_CNT_QW,
      ._desc = "SSID Credits Outstanding",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_err_flg_detail[] = {
    { ._name = "DLA_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_DLA_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_DLA_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_RSTDATA & AR_NIC_TARB_ERR_FLG_DLA_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_DLA_UNDERFLOW_QW,
      ._desc = "DLA Underflow Flag",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "BTE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_BTE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_BTE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_RSTDATA & AR_NIC_TARB_ERR_FLG_BTE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_BTE_UNDERFLOW_QW,
      ._desc = "BTE Underflow Flag",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "CE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_CE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_CE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_RSTDATA & AR_NIC_TARB_ERR_FLG_CE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_CE_UNDERFLOW_QW,
      ._desc = "CE Underflow Flag",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "DLA_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_DLA_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_DLA_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_RSTDATA & AR_NIC_TARB_ERR_FLG_DLA_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_DLA_OVERFLOW_QW,
      ._desc = "DLA Overflow Flag",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "BTE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_BTE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_BTE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_RSTDATA & AR_NIC_TARB_ERR_FLG_BTE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_BTE_OVERFLOW_QW,
      ._desc = "BTE Overflow Flag",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "CE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FLG_CE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_CE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_RSTDATA & AR_NIC_TARB_ERR_FLG_CE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_CE_OVERFLOW_QW,
      ._desc = "CE Overflow Flag",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_TARB_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_TARB_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_TARB_ERR_FLG_RSTDATA & AR_NIC_TARB_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_TARB_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Diagnostic Flag",
      ._type_bitmsk = 0x0000000000100001ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_err_clr_detail[] = {
    { ._name = "DLA_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_CLR_DLA_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_CLR_DLA_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_CLR_RSTDATA & AR_NIC_TARB_ERR_CLR_DLA_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_CLR_DLA_UNDERFLOW_QW,
      ._desc = "DLA Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HRO"
    },
    { ._name = "BTE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_CLR_BTE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_CLR_BTE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_CLR_RSTDATA & AR_NIC_TARB_ERR_CLR_BTE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_CLR_BTE_UNDERFLOW_QW,
      ._desc = "BTE Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HRO"
    },
    { ._name = "CE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_CLR_CE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_CLR_CE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_CLR_RSTDATA & AR_NIC_TARB_ERR_CLR_CE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_CLR_CE_UNDERFLOW_QW,
      ._desc = "CE Underflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HRO"
    },
    { ._name = "DLA_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_CLR_DLA_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_CLR_DLA_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_CLR_RSTDATA & AR_NIC_TARB_ERR_CLR_DLA_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_CLR_DLA_OVERFLOW_QW,
      ._desc = "DLA Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HRO"
    },
    { ._name = "BTE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_CLR_BTE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_CLR_BTE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_CLR_RSTDATA & AR_NIC_TARB_ERR_CLR_BTE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_CLR_BTE_OVERFLOW_QW,
      ._desc = "BTE Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HRO"
    },
    { ._name = "CE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_CLR_CE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_CLR_CE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_CLR_RSTDATA & AR_NIC_TARB_ERR_CLR_CE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_CLR_CE_OVERFLOW_QW,
      ._desc = "CE Overflow Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HRO"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_TARB_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_TARB_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_TARB_ERR_CLR_RSTDATA & AR_NIC_TARB_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_TARB_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Diagnostic Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_err_hss_msk_detail[] = {
    { ._name = "DLA_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_HSS_MSK_DLA_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_HSS_MSK_DLA_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_HSS_MSK_RSTDATA & AR_NIC_TARB_ERR_HSS_MSK_DLA_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_HSS_MSK_DLA_UNDERFLOW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_HSS_MSK_BTE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_HSS_MSK_BTE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_HSS_MSK_RSTDATA & AR_NIC_TARB_ERR_HSS_MSK_BTE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_HSS_MSK_BTE_UNDERFLOW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_HSS_MSK_CE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_HSS_MSK_CE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_HSS_MSK_RSTDATA & AR_NIC_TARB_ERR_HSS_MSK_CE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_HSS_MSK_CE_UNDERFLOW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_HSS_MSK_DLA_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_HSS_MSK_DLA_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_HSS_MSK_RSTDATA & AR_NIC_TARB_ERR_HSS_MSK_DLA_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_HSS_MSK_DLA_OVERFLOW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_HSS_MSK_BTE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_HSS_MSK_BTE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_HSS_MSK_RSTDATA & AR_NIC_TARB_ERR_HSS_MSK_BTE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_HSS_MSK_BTE_OVERFLOW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_HSS_MSK_CE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_HSS_MSK_CE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_HSS_MSK_RSTDATA & AR_NIC_TARB_ERR_HSS_MSK_CE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_HSS_MSK_CE_OVERFLOW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_TARB_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_TARB_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_TARB_ERR_HSS_MSK_RSTDATA & AR_NIC_TARB_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_TARB_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_err_os_msk_detail[] = {
    { ._name = "DLA_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_OS_MSK_DLA_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_OS_MSK_DLA_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_OS_MSK_RSTDATA & AR_NIC_TARB_ERR_OS_MSK_DLA_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_OS_MSK_DLA_UNDERFLOW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_OS_MSK_BTE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_OS_MSK_BTE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_OS_MSK_RSTDATA & AR_NIC_TARB_ERR_OS_MSK_BTE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_OS_MSK_BTE_UNDERFLOW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_OS_MSK_CE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_OS_MSK_CE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_OS_MSK_RSTDATA & AR_NIC_TARB_ERR_OS_MSK_CE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_OS_MSK_CE_UNDERFLOW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_OS_MSK_DLA_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_OS_MSK_DLA_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_OS_MSK_RSTDATA & AR_NIC_TARB_ERR_OS_MSK_DLA_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_OS_MSK_DLA_OVERFLOW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_OS_MSK_BTE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_OS_MSK_BTE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_OS_MSK_RSTDATA & AR_NIC_TARB_ERR_OS_MSK_BTE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_OS_MSK_BTE_OVERFLOW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_OS_MSK_CE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_OS_MSK_CE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_OS_MSK_RSTDATA & AR_NIC_TARB_ERR_OS_MSK_CE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_OS_MSK_CE_OVERFLOW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_TARB_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_TARB_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_TARB_ERR_OS_MSK_RSTDATA & AR_NIC_TARB_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_TARB_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_tarb_err_first_flg_detail[] = {
    { ._name = "DLA_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FIRST_FLG_DLA_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FIRST_FLG_DLA_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_TARB_ERR_FIRST_FLG_DLA_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FIRST_FLG_DLA_UNDERFLOW_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FIRST_FLG_BTE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FIRST_FLG_BTE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_TARB_ERR_FIRST_FLG_BTE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FIRST_FLG_BTE_UNDERFLOW_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_UNDERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FIRST_FLG_CE_UNDERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FIRST_FLG_CE_UNDERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_TARB_ERR_FIRST_FLG_CE_UNDERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FIRST_FLG_CE_UNDERFLOW_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DLA_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FIRST_FLG_DLA_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FIRST_FLG_DLA_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_TARB_ERR_FIRST_FLG_DLA_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FIRST_FLG_DLA_OVERFLOW_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "BTE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FIRST_FLG_BTE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FIRST_FLG_BTE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_TARB_ERR_FIRST_FLG_BTE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FIRST_FLG_BTE_OVERFLOW_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CE_OVERFLOW",
      ._bpos = AR_NIC_TARB_ERR_FIRST_FLG_CE_OVERFLOW_BP,
      ._mask = AR_NIC_TARB_ERR_FIRST_FLG_CE_OVERFLOW_MASK,
      ._rval = AR_NIC_TARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_TARB_ERR_FIRST_FLG_CE_OVERFLOW_MASK,
      ._index = AR_NIC_TARB_ERR_FIRST_FLG_CE_OVERFLOW_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_TARB_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_TARB_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_TARB_ERR_FIRST_FLG_RSTDATA & AR_NIC_TARB_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_TARB_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR TARB DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_rval[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSTDATA_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSTDATA_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSTDATA_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_rmsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSTMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSTMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSTMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_wrmsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_WRTMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_WRTMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_WRTMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_rdmsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RDMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RDMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RDMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_xsmsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_XSMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_XSMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_XSMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_wsemsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_WSEMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_WSEMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_WSEMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_rsemsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSEMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSEMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_RSEMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_w1smsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_W1SMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_W1SMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_W1SMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_w1cmsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_W1CMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_W1CMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_W1CMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_wrstmsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_WRSTMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_WRSTMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_hwwmsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_HWWMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_HWWMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_HWWMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_hwrmsk[3] = {
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_HWRMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_HWRMASK_QW1,
	AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB_HWRMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_rval[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTDATA_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_rmsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSTMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_wrmsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_WRTMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_WRTMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_rdmsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RDMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RDMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_xsmsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_XSMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_XSMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_wsemsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_WSEMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_WSEMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_rsemsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSEMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_RSEMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_w1smsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_W1SMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_W1SMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_w1cmsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_W1CMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_W1CMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_wrstmsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_WRSTMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_hwwmsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_HWWMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_HWWMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_hwrmsk[2] = {
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_HWRMASK_QW0,
	AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB_HWRMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_rval[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSTDATA_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSTDATA_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSTDATA_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_rmsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSTMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSTMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSTMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_wrmsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_WRTMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_WRTMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_WRTMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_rdmsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RDMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RDMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RDMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_xsmsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_XSMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_XSMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_XSMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_wsemsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_WSEMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_WSEMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_WSEMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_rsemsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSEMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSEMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_RSEMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_w1smsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_W1SMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_W1SMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_W1SMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_w1cmsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_W1CMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_W1CMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_W1CMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_wrstmsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_WRSTMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_WRSTMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_hwwmsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_HWWMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_HWWMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_HWWMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_hi_tarb_hwrmsk[3] = {
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_HWRMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_HWRMASK_QW1,
	AR_NIC_TARB_ERR_FLG_1_HI_TARB_HWRMASK_QW2
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_rval[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTDATA_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_rmsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSTMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_wrmsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_WRTMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_WRTMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_rdmsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_RDMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_RDMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_xsmsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_XSMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_XSMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_wsemsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_WSEMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_WSEMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_rsemsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSEMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_RSEMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_w1smsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_W1SMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_W1SMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_w1cmsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_W1CMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_W1CMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_wrstmsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_WRSTMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_hwwmsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_HWWMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_HWWMASK_QW1
};
static const uint64_t __ar_nic_tarb_err_flg_1_mid_tarb_hwrmsk[2] = {
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_HWRMASK_QW0,
	AR_NIC_TARB_ERR_FLG_1_MID_TARB_HWRMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_rval[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSTDATA_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSTDATA_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSTDATA_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_rmsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSTMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSTMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSTMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_wrmsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_WRTMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_WRTMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_WRTMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_rdmsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RDMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RDMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RDMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_xsmsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_XSMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_XSMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_XSMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_wsemsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_WSEMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_WSEMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_WSEMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_rsemsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSEMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSEMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_RSEMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_w1smsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_W1SMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_W1SMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_W1SMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_w1cmsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_W1CMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_W1CMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_W1CMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_wrstmsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_WRSTMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_WRSTMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_hwwmsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_HWWMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_HWWMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_HWWMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_hwrmsk[3] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_HWRMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_HWRMASK_QW1,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB_HWRMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_rval[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_RSTDATA_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_RSTDATA_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_rmsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_RSTMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_RSTMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_wrmsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_WRTMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_WRTMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_rdmsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_RDMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_RDMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_xsmsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_XSMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_XSMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_wsemsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_WSEMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_WSEMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_rsemsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_RSEMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_RSEMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_w1smsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_W1SMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_W1SMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_w1cmsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_W1CMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_W1CMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_wrstmsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_WRSTMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_hwwmsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_HWWMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_HWWMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_hwrmsk[2] = {
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_HWRMASK_QW0,
	AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB_HWRMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_rval[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSTDATA_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSTDATA_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSTDATA_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_rmsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSTMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSTMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSTMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_wrmsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_WRTMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_WRTMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_WRTMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_rdmsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RDMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RDMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RDMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_xsmsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_XSMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_XSMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_XSMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_wsemsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_WSEMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_WSEMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_WSEMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_rsemsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSEMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSEMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_RSEMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_w1smsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_W1SMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_W1SMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_W1SMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_w1cmsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_W1CMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_W1CMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_W1CMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_wrstmsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_WRSTMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_WRSTMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_hwwmsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_HWWMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_HWWMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_HWWMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_hwrmsk[3] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_HWRMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_HWRMASK_QW1,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB_HWRMASK_QW2
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_rval[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_RSTDATA_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_RSTDATA_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_rmsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_RSTMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_RSTMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_wrmsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_WRTMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_WRTMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_rdmsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_RDMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_RDMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_xsmsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_XSMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_XSMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_wsemsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_WSEMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_WSEMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_rsemsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_RSEMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_RSEMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_w1smsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_W1SMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_W1SMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_w1cmsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_W1CMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_W1CMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_wrstmsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_WRSTMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_hwwmsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_HWWMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_HWWMASK_QW1
};
static const uint64_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_hwrmsk[2] = {
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_HWRMASK_QW0,
	AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB_HWRMASK_QW1
};

/*
 *  AR TARB MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_tarb_cfg_params = {
    ._name = "AR_NIC_TARB_CFG_PARAMS",
    ._addr = AR_NIC_TARB_CFG_PARAMS,
    ._rval.val = AR_NIC_TARB_CFG_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_CFG_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_CFG_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_CFG_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_CFG_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_CFG_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_CFG_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_CFG_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_CFG_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_CFG_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_CFG_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_CFG_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_cfg_params_detail
};
static const cmmr_br_t __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb = {
    ._name = "AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB",
    ._addr = AR_NIC_TARB_TARB_MMR_RING_0_HI_TARB,
    ._rval.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_tarb_mmr_ring_0_hi_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb = {
    ._name = "AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB",
    ._addr = AR_NIC_TARB_TARB_MMR_RING_0_MID_TARB,
    ._rval.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_tarb_mmr_ring_0_mid_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_tarb_mmr_ring_0_lo_tarb = {
    ._name = "AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB",
    ._addr = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB,
    ._rval.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_TARB_MMR_RING_0_LO_TARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_tarb_mmr_ring_0_lo_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_err_flg_1_hi_tarb = {
    ._name = "AR_NIC_TARB_ERR_FLG_1_HI_TARB",
    ._addr = AR_NIC_TARB_ERR_FLG_1_HI_TARB,
    ._rval.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_hi_tarb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_err_flg_1_hi_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_err_flg_1_mid_tarb = {
    ._name = "AR_NIC_TARB_ERR_FLG_1_MID_TARB",
    ._addr = AR_NIC_TARB_ERR_FLG_1_MID_TARB,
    ._rval.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_tarb_err_flg_1_mid_tarb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_err_flg_1_mid_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_err_flg_1_lo_tarb = {
    ._name = "AR_NIC_TARB_ERR_FLG_1_LO_TARB",
    ._addr = AR_NIC_TARB_ERR_FLG_1_LO_TARB,
    ._rval.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_ERR_FLG_1_LO_TARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_err_flg_1_lo_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb = {
    ._name = "AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB",
    ._addr = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_HI_TARB,
    ._rval.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb = {
    ._name = "AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB",
    ._addr = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_MID_TARB,
    ._rval.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_tarb_ssid_req_flit_2_lo_tarb = {
    ._name = "AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB",
    ._addr = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB,
    ._rval.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_TARB_SSID_REQ_FLIT_2_LO_TARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_tarb_ssid_req_flit_2_lo_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb = {
    ._name = "AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB",
    ._addr = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_HI_TARB,
    ._rval.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb = {
    ._name = "AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB",
    ._addr = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_MID_TARB,
    ._rval.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_lo_tarb = {
    ._name = "AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB",
    ._addr = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB,
    ._rval.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_TARB_ARB_CRDT_ACK_FIELDS_3_LO_TARB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_tarb_arb_crdt_ack_fields_3_lo_tarb_detail
};
static const cmmr_br_t __ar_nic_tarb_cfg_qos_rate = {
    ._name = "AR_NIC_TARB_CFG_QOS_RATE",
    ._addr = AR_NIC_TARB_CFG_QOS_RATE,
    ._rval.val = AR_NIC_TARB_CFG_QOS_RATE_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_CFG_QOS_RATE_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_CFG_QOS_RATE_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_CFG_QOS_RATE_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_CFG_QOS_RATE_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_CFG_QOS_RATE_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_CFG_QOS_RATE_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_CFG_QOS_RATE_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_CFG_QOS_RATE_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_CFG_QOS_RATE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_CFG_QOS_RATE_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_CFG_QOS_RATE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_cfg_qos_rate_detail
};
static const cmmr_br_t __ar_nic_tarb_cfg_qos_size = {
    ._name = "AR_NIC_TARB_CFG_QOS_SIZE",
    ._addr = AR_NIC_TARB_CFG_QOS_SIZE,
    ._rval.val = AR_NIC_TARB_CFG_QOS_SIZE_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_CFG_QOS_SIZE_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_CFG_QOS_SIZE_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_CFG_QOS_SIZE_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_CFG_QOS_SIZE_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_CFG_QOS_SIZE_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_CFG_QOS_SIZE_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_CFG_QOS_SIZE_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_CFG_QOS_SIZE_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_CFG_QOS_SIZE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_CFG_QOS_SIZE_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_CFG_QOS_SIZE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_tarb_cfg_qos_size_detail
};
static const cmmr_br_t __ar_nic_tarb_dbg_credit = {
    ._name = "AR_NIC_TARB_DBG_CREDIT",
    ._addr = AR_NIC_TARB_DBG_CREDIT,
    ._rval.val = AR_NIC_TARB_DBG_CREDIT_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_DBG_CREDIT_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_DBG_CREDIT_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_DBG_CREDIT_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_DBG_CREDIT_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_DBG_CREDIT_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_DBG_CREDIT_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_DBG_CREDIT_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_DBG_CREDIT_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_DBG_CREDIT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_DBG_CREDIT_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_DBG_CREDIT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_tarb_dbg_credit_detail
};
static const cmmr_br_t __ar_nic_tarb_err_flg = {
    ._name = "AR_NIC_TARB_ERR_FLG",
    ._addr = AR_NIC_TARB_ERR_FLG,
    ._rval.val = AR_NIC_TARB_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000108811ull,
    ._info = __ar_nic_tarb_err_flg_detail
};
static const cmmr_br_t __ar_nic_tarb_err_clr = {
    ._name = "AR_NIC_TARB_ERR_CLR",
    ._addr = AR_NIC_TARB_ERR_CLR,
    ._rval.val = AR_NIC_TARB_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_tarb_err_clr_detail
};
static const cmmr_br_t __ar_nic_tarb_err_hss_msk = {
    ._name = "AR_NIC_TARB_ERR_HSS_MSK",
    ._addr = AR_NIC_TARB_ERR_HSS_MSK,
    ._rval.val = AR_NIC_TARB_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_tarb_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_tarb_err_os_msk = {
    ._name = "AR_NIC_TARB_ERR_OS_MSK",
    ._addr = AR_NIC_TARB_ERR_OS_MSK,
    ._rval.val = AR_NIC_TARB_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_tarb_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_tarb_err_first_flg = {
    ._name = "AR_NIC_TARB_ERR_FIRST_FLG",
    ._addr = AR_NIC_TARB_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_TARB_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_TARB_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_TARB_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_TARB_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_TARB_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_TARB_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_TARB_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_TARB_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_TARB_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_TARB_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_TARB_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_TARB_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_tarb_err_first_flg_detail
};

/*
 *  INSTALL AR TARB MMRS
 */
static const cmmr_br_t* __ar_tarb_mmrs[] = {
    &__ar_nic_tarb_cfg_params,
    &__ar_nic_tarb_cfg_qos_rate,
    &__ar_nic_tarb_cfg_qos_size,
    &__ar_nic_tarb_dbg_credit,
    &__ar_nic_tarb_err_flg,
    &__ar_nic_tarb_err_clr,
    &__ar_nic_tarb_err_hss_msk,
    &__ar_nic_tarb_err_os_msk,
    &__ar_nic_tarb_err_first_flg,
    NULL
};

/*
 *  INSTALL AR TARB LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_tarb_enc_mmrs[] = {
    &__ar_nic_tarb_tarb_mmr_ring_0_hi_tarb,
    &__ar_nic_tarb_tarb_mmr_ring_0_mid_tarb,
    &__ar_nic_tarb_tarb_mmr_ring_0_lo_tarb,
    &__ar_nic_tarb_err_flg_1_hi_tarb,
    &__ar_nic_tarb_err_flg_1_mid_tarb,
    &__ar_nic_tarb_err_flg_1_lo_tarb,
    &__ar_nic_tarb_tarb_ssid_req_flit_2_hi_tarb,
    &__ar_nic_tarb_tarb_ssid_req_flit_2_mid_tarb,
    &__ar_nic_tarb_tarb_ssid_req_flit_2_lo_tarb,
    &__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_hi_tarb,
    &__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_mid_tarb,
    &__ar_nic_tarb_tarb_arb_crdt_ack_fields_3_lo_tarb,
    NULL
};

#endif
