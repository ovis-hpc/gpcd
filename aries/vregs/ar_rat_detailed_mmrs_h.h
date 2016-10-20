/******************************************************************************
 * COPYRIGHT CRAY INC. ar_rat_detailed_mmrs_h.h
 * FILE: ar_rat_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/
/**
 * @file ar_rat_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:03 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_rat_mmr_values.h and ar_rat_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_rat_mmr_values.h"

#ifndef _AR_RAT_DETAILED_MMRS_H_H_
#define _AR_RAT_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_rat_mmrs[];	/* RAT Array */

/*
 *  AR RAT MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_rat_cfg_link_active_detail[] = {
    { ._name = "SIGNAL",
      ._bpos = AR_NIC_RAT_CFG_LINK_ACTIVE_SIGNAL_BP,
      ._mask = AR_NIC_RAT_CFG_LINK_ACTIVE_SIGNAL_MASK,
      ._rval = AR_NIC_RAT_CFG_LINK_ACTIVE_RSTDATA & AR_NIC_RAT_CFG_LINK_ACTIVE_SIGNAL_MASK,
      ._index = AR_NIC_RAT_CFG_LINK_ACTIVE_SIGNAL_QW,
      ._desc = "Signal to NL that link is active",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_detail[] = {
    { ._name = "UNUSED_145_109",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_UNUSED_145_109_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_UNUSED_145_109_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_UNUSED_145_109_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_UNUSED_145_109_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_detail[] = {
    { ._name = "UNUSED_127_109",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_UNUSED_127_109_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_UNUSED_127_109_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_UNUSED_127_109_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_UNUSED_127_109_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_FLIT",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_FLIT_QW,
      ._desc = "Configurable performance counter, response channel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_FLIT",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_FLIT_QW,
      ._desc = "Configurable performance counter, request channel (includes IOMMU)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_INV_CMD",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_INV_CMD_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_INV_CMD_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_INV_CMD_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_INV_CMD_QW,
      ._desc = "Invalid command in response (detected in input processing)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_MALFORMED",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_MALFORMED_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_MALFORMED_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_MALFORMED_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_MALFORMED_QW,
      ._desc = "Malformed response packet (detected in input processing)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_INV_CMD",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_INV_CMD_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_INV_CMD_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_INV_CMD_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_INV_CMD_QW,
      ._desc = "Invalid command in request (detected in input processing)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_MALFORMED",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_MALFORMED_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_MALFORMED_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_MALFORMED_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_MALFORMED_QW,
      ._desc = "Malformed request packet (detected in input processing)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOMMU_PAYLD_ERR",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PAYLD_ERR_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PAYLD_ERR_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PAYLD_ERR_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PAYLD_ERR_QW,
      ._desc = "Payload error in IOMMU request (detected in output processing)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOMMU_DROP_INPUT",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_DROP_INPUT_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_DROP_INPUT_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_DROP_INPUT_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_DROP_INPUT_QW,
      ._desc = "IOMMU request was dropped during input processing (eg",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOMMU_PARITY_INPUT",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PARITY_INPUT_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PARITY_INPUT_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PARITY_INPUT_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PARITY_INPUT_QW,
      ._desc = "Parity error in IOMMU request packet input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_PAYLD_ERR",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PAYLD_ERR_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PAYLD_ERR_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PAYLD_ERR_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PAYLD_ERR_QW,
      ._desc = "Payload error in response (detected in output processing)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_XLAT_ERR",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_XLAT_ERR_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_XLAT_ERR_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_XLAT_ERR_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_XLAT_ERR_QW,
      ._desc = "Translation error in response (detected in output processing)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_PAYLD_ERR",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PAYLD_ERR_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PAYLD_ERR_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PAYLD_ERR_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PAYLD_ERR_QW,
      ._desc = "Payload error in request (detected in output processing)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_XLAT_ERR",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_XLAT_ERR_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_XLAT_ERR_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_XLAT_ERR_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_XLAT_ERR_QW,
      ._desc = "Translation error in request (detected in output processing)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_PARITY_OUTPUT",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PARITY_OUTPUT_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PARITY_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PARITY_OUTPUT_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PARITY_OUTPUT_QW,
      ._desc = "Parity error in response packet output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_PARITY_OUTPUT",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PARITY_OUTPUT_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PARITY_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PARITY_OUTPUT_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PARITY_OUTPUT_QW,
      ._desc = "Parity error in request packet output (includes IOMMU)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_PARITY_INPUT",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PARITY_INPUT_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PARITY_INPUT_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PARITY_INPUT_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_PARITY_INPUT_QW,
      ._desc = "Parity error in response packet input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_PARITY_INPUT",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PARITY_INPUT_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PARITY_INPUT_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PARITY_INPUT_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_PARITY_INPUT_QW,
      ._desc = "Parity error in request packet input (excludes IOMMU)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_STALLED",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_STALLED_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_STALLED_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_STALLED_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_RSP_STALLED_QW,
      ._desc = "Responsechanel (ORB) stalled count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ORB_FLITS",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_ORB_FLITS_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_ORB_FLITS_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_ORB_FLITS_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_ORB_FLITS_QW,
      ._desc = "ORB flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ORB_PKTS",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_ORB_PKTS_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_ORB_PKTS_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_ORB_PKTS_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_ORB_PKTS_QW,
      ._desc = "ORB packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_STALLED",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_STALLED_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_STALLED_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_STALLED_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_REQ_STALLED_QW,
      ._desc = "Request channel (NL or IOMMU) stalled count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOMMU_BLOCKED",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_BLOCKED_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_BLOCKED_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_BLOCKED_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_BLOCKED_QW,
      ._desc = "IOMMU blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOMMU_FLITS",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_FLITS_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_FLITS_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_FLITS_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_FLITS_QW,
      ._desc = "IOMMU flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_IOMMU_PKTS",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PKTS_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PKTS_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PKTS_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_IOMMU_PKTS_QW,
      ._desc = "IOMMU packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NL_BLOCKED",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_BLOCKED_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_BLOCKED_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_BLOCKED_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_BLOCKED_QW,
      ._desc = "NL blocked count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NL_FLITS",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_FLITS_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_FLITS_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_FLITS_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_FLITS_QW,
      ._desc = "NL flit count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NL_PKTS",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_PKTS_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_PKTS_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_PKTS_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_CNTR_NL_PKTS_QW,
      ._desc = "NL packet count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_49",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_UNUSED_81_49_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_UNUSED_81_49_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_UNUSED_81_49_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_UNUSED_81_49_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_mmr_ring_0_lo_rat_detail[] = {
    { ._name = "UNUSED_81_49",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_UNUSED_81_49_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_UNUSED_81_49_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_UNUSED_81_49_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_UNUSED_81_49_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_RSP_OLDEST_ADDR",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_RSP_OLDEST_ADDR_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_RSP_OLDEST_ADDR_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_RSP_OLDEST_ADDR_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_RSP_OLDEST_ADDR_QW,
      ._desc = "Address of oldest response in buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_RSP_OLDEST_STALL",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_RSP_OLDEST_STALL_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_RSP_OLDEST_STALL_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_RSP_OLDEST_STALL_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_RSP_OLDEST_STALL_QW,
      ._desc = "Oldest response is blocking forward progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_REQ_OLDEST_ADDR",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_REQ_OLDEST_ADDR_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_REQ_OLDEST_ADDR_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_REQ_OLDEST_ADDR_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_REQ_OLDEST_ADDR_QW,
      ._desc = "Address of oldes request in buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DBG_REQ_OLDEST_STALL",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_REQ_OLDEST_STALL_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_REQ_OLDEST_STALL_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_REQ_OLDEST_STALL_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_DBG_REQ_OLDEST_STALL_QW,
      ._desc = "Oldest request is blocking forward progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RAT_PI_OS_IRQ",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_PI_OS_IRQ_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_PI_OS_IRQ_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_PI_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RAT_LB_HSS_IRQ",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_LB_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RAT_NETMON_RING_WRACK",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_NETMON_RING_WRACK_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_NETMON_RING_WRACK_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_NETMON_RING_WRACK_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_NETMON_RING_WRACK_QW,
      ._desc = "NETMON Write Acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RAT_NETMON_RING_15_0",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_NETMON_RING_15_0_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_NETMON_RING_15_0_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_NETMON_RING_15_0_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_R_Q_RAT_NETMON_RING_15_0_QW,
      ._desc = "NETMON Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NETMON_RAT_RING_15_0",
      ._bpos = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_I_NETMON_RAT_RING_15_0_BP,
      ._mask = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_I_NETMON_RAT_RING_15_0_MASK,
      ._rval = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_I_NETMON_RAT_RING_15_0_MASK,
      ._index = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_I_NETMON_RAT_RING_15_0_QW,
      ._desc = "NETMON Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_err_flg_1_hi_rat_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_HI_RAT_UNUSED_145_128_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_HI_RAT_UNUSED_145_128_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_ERR_FLG_1_HI_RAT_UNUSED_145_128_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_HI_RAT_UNUSED_145_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_err_flg_1_mid_rat_detail[] = {
    { ._name = "UNUSED_127_83",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UNUSED_127_83_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UNUSED_127_83_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_UNUSED_127_83_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UNUSED_127_83_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSP_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSP_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSP_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSP_TIMEOUT_QW,
      ._desc = "The response virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_REQ_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_REQ_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_REQ_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_REQ_TIMEOUT_QW,
      ._desc = "The request virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IOMMU_PAYLD",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_IOMMU_PAYLD_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_IOMMU_PAYLD_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_IOMMU_PAYLD_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_IOMMU_PAYLD_QW,
      ._desc = "Payload size error on IOMMU packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "IOMMU_DROP",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_IOMMU_DROP_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_IOMMU_DROP_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_IOMMU_DROP_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_IOMMU_DROP_QW,
      ._desc = "Decode error on IOMMU packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_IOMMU_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_IOMMU_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_IOMMU_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_IOMMU_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_IOMMU_INPUT_QW,
      ._desc = "Header parity error on IOMMU channel input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_RSP_TRANS",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_TRANS_QW,
      ._desc = "Translation parity error on response channel buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_REQ_TRANS",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_TRANS_QW,
      ._desc = "Translation parity error on request channel buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_RSP_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_OUTPUT_QW,
      ._desc = "Header parity error on response channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_REQ_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_OUTPUT_QW,
      ._desc = "Header parity error on request channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_RSP_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_RSP_INPUT_QW,
      ._desc = "Header parity error on response channel input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_REQ_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_PARITY_REQ_INPUT_QW,
      ._desc = "Header parity error on request (NL) channel input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_RSP_QW,
      ._desc = "Response Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_IOMMU_QW,
      ._desc = "IOMMU Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_UFLW_REQ_QW,
      ._desc = "Request Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "OFLW_XARB",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_XARB_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_XARB_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_XARB_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_XARB_QW,
      ._desc = "Translation Request Arbiter Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "OFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_RSP_QW,
      ._desc = "Response Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "OFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_IOMMU_QW,
      ._desc = "IOMMU Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "OFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_OFLW_REQ_QW,
      ._desc = "Request Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_MID_RAT_DIAG_ONLY_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_MID_RAT_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_ERR_FLG_1_MID_RAT_DIAG_ONLY_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_MID_RAT_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_err_flg_1_lo_rat_detail[] = {
    { ._name = "UNUSED_63_19",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_UNUSED_63_19_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_UNUSED_63_19_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_UNUSED_63_19_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_UNUSED_63_19_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_RSP_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_RSP_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_RSP_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_RSP_TIMEOUT_QW,
      ._desc = "The response virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_REQ_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_REQ_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_REQ_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_REQ_TIMEOUT_QW,
      ._desc = "The request virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_IOMMU_PAYLD",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_IOMMU_PAYLD_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_IOMMU_PAYLD_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_IOMMU_PAYLD_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_IOMMU_PAYLD_QW,
      ._desc = "Payload size error on IOMMU packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_IOMMU_DROP",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_IOMMU_DROP_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_IOMMU_DROP_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_IOMMU_DROP_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_IOMMU_DROP_QW,
      ._desc = "Decode error on IOMMU packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PARITY_IOMMU_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_IOMMU_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_IOMMU_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_IOMMU_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_IOMMU_INPUT_QW,
      ._desc = "Header parity error on IOMMU channel input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PARITY_RSP_TRANS",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_TRANS_QW,
      ._desc = "Translation parity error on response channel buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PARITY_REQ_TRANS",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_TRANS_QW,
      ._desc = "Translation parity error on request channel buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PARITY_RSP_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_OUTPUT_QW,
      ._desc = "Header parity error on response channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PARITY_REQ_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_OUTPUT_QW,
      ._desc = "Header parity error on request channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PARITY_RSP_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_RSP_INPUT_QW,
      ._desc = "Header parity error on response channel input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_PARITY_REQ_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_PARITY_REQ_INPUT_QW,
      ._desc = "Header parity error on request (NL) channel input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_UFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_RSP_QW,
      ._desc = "Response Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_UFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_IOMMU_QW,
      ._desc = "IOMMU Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_UFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_UFLW_REQ_QW,
      ._desc = "Request Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_OFLW_XARB",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_XARB_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_XARB_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_XARB_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_XARB_QW,
      ._desc = "Translation Request Arbiter Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_OFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_RSP_QW,
      ._desc = "Response Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_OFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_IOMMU_QW,
      ._desc = "IOMMU Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_OFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_I_OFLW_REQ_QW,
      ._desc = "Request Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_RAT_ERR_FLG_1_LO_RAT_UNUSED_0_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_1_LO_RAT_UNUSED_0_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA & AR_NIC_RAT_ERR_FLG_1_LO_RAT_UNUSED_0_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_1_LO_RAT_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_detail[] = {
    { ._name = "R_Q_RAT_WC_RSP_SB",
      ._bpos = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_R_Q_RAT_WC_RSP_SB_BP,
      ._mask = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_R_Q_RAT_WC_RSP_SB_MASK,
      ._rval = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_R_Q_RAT_WC_RSP_SB_MASK,
      ._index = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_R_Q_RAT_WC_RSP_SB_QW,
      ._desc = "WC response sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RAT_WC_RSP_FLIT",
      ._bpos = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_R_Q_RAT_WC_RSP_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_R_Q_RAT_WC_RSP_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_R_Q_RAT_WC_RSP_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_R_Q_RAT_WC_RSP_FLIT_QW,
      ._desc = "WC response flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_detail[] = {
    { ._name = "R_Q_RAT_WC_RSP_FLIT",
      ._bpos = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_R_Q_RAT_WC_RSP_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_R_Q_RAT_WC_RSP_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_R_Q_RAT_WC_RSP_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_R_Q_RAT_WC_RSP_FLIT_QW,
      ._desc = "WC response flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_wc_rsp_flit_2_lo_rat_detail[] = {
    { ._name = "R_Q_RAT_WC_RSP_FLIT",
      ._bpos = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_R_Q_RAT_WC_RSP_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_R_Q_RAT_WC_RSP_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_R_Q_RAT_WC_RSP_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_R_Q_RAT_WC_RSP_FLIT_QW,
      ._desc = "WC response flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_detail[] = {
    { ._name = "R_Q_RAT_RMT_REQ_SB",
      ._bpos = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_R_Q_RAT_RMT_REQ_SB_BP,
      ._mask = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_R_Q_RAT_RMT_REQ_SB_MASK,
      ._rval = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_R_Q_RAT_RMT_REQ_SB_MASK,
      ._index = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_R_Q_RAT_RMT_REQ_SB_QW,
      ._desc = "RMT request sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RAT_RMT_REQ_FLIT",
      ._bpos = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_R_Q_RAT_RMT_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_R_Q_RAT_RMT_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_R_Q_RAT_RMT_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_R_Q_RAT_RMT_REQ_FLIT_QW,
      ._desc = "RMT request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_detail[] = {
    { ._name = "R_Q_RAT_RMT_REQ_FLIT",
      ._bpos = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_R_Q_RAT_RMT_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_R_Q_RAT_RMT_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_R_Q_RAT_RMT_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_R_Q_RAT_RMT_REQ_FLIT_QW,
      ._desc = "RMT request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_rmt_req_flit_3_lo_rat_detail[] = {
    { ._name = "R_Q_RAT_RMT_REQ_FLIT",
      ._bpos = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_R_Q_RAT_RMT_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_R_Q_RAT_RMT_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_R_Q_RAT_RMT_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_R_Q_RAT_RMT_REQ_FLIT_QW,
      ._desc = "RMT request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_detail[] = {
    { ._name = "R_Q_RAT_CE_REQ_SB",
      ._bpos = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_R_Q_RAT_CE_REQ_SB_BP,
      ._mask = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_R_Q_RAT_CE_REQ_SB_MASK,
      ._rval = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_R_Q_RAT_CE_REQ_SB_MASK,
      ._index = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_R_Q_RAT_CE_REQ_SB_QW,
      ._desc = "CE request sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_RAT_CE_REQ_FLIT",
      ._bpos = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_R_Q_RAT_CE_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_R_Q_RAT_CE_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_R_Q_RAT_CE_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_R_Q_RAT_CE_REQ_FLIT_QW,
      ._desc = "CE request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_detail[] = {
    { ._name = "R_Q_RAT_CE_REQ_FLIT",
      ._bpos = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_R_Q_RAT_CE_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_R_Q_RAT_CE_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_R_Q_RAT_CE_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_R_Q_RAT_CE_REQ_FLIT_QW,
      ._desc = "CE request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_ce_req_flit_4_lo_rat_detail[] = {
    { ._name = "R_Q_RAT_CE_REQ_FLIT",
      ._bpos = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_R_Q_RAT_CE_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_R_Q_RAT_CE_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_R_Q_RAT_CE_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_R_Q_RAT_CE_REQ_FLIT_QW,
      ._desc = "CE request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_detail[] = {
    { ._name = "Q_NL_NIC_REQ_SB",
      ._bpos = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_Q_NL_NIC_REQ_SB_BP,
      ._mask = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_Q_NL_NIC_REQ_SB_MASK,
      ._rval = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_Q_NL_NIC_REQ_SB_MASK,
      ._index = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_Q_NL_NIC_REQ_SB_QW,
      ._desc = "NL request sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NL_NIC_REQ_FLIT",
      ._bpos = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_Q_NL_NIC_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_Q_NL_NIC_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_Q_NL_NIC_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_Q_NL_NIC_REQ_FLIT_QW,
      ._desc = "NL request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_detail[] = {
    { ._name = "Q_NL_NIC_REQ_FLIT",
      ._bpos = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_Q_NL_NIC_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_Q_NL_NIC_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_Q_NL_NIC_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_Q_NL_NIC_REQ_FLIT_QW,
      ._desc = "NL request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_nl_nic_req_flit_5_lo_rat_detail[] = {
    { ._name = "Q_NL_NIC_REQ_FLIT",
      ._bpos = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_Q_NL_NIC_REQ_FLIT_BP,
      ._mask = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_Q_NL_NIC_REQ_FLIT_MASK,
      ._rval = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_RSTDATA & AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_Q_NL_NIC_REQ_FLIT_MASK,
      ._index = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_Q_NL_NIC_REQ_FLIT_QW,
      ._desc = "NL request flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_UNUSED_145_128_BP,
      ._mask = AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_UNUSED_145_128_MASK,
      ._rval = AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_UNUSED_145_128_MASK,
      ._index = AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_UNUSED_145_128_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_detail[] = {
    { ._name = "RDY_PKT_VEC",
      ._bpos = AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RDY_PKT_VEC_BP,
      ._mask = AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RDY_PKT_VEC_MASK,
      ._rval = AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RDY_PKT_VEC_MASK,
      ._index = AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RDY_PKT_VEC_QW,
      ._desc = "Buffer slot is ready (packet has been written to buffer)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_rdy_vecs_6_lo_rat_detail[] = {
    { ._name = "RDY_NAT_VEC",
      ._bpos = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_RDY_NAT_VEC_BP,
      ._mask = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_RDY_NAT_VEC_MASK,
      ._rval = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_RDY_NAT_VEC_MASK,
      ._index = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_RDY_NAT_VEC_QW,
      ._desc = "Buffer slot is ready (NAT translation returned or no NAT translation required)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_UNUSED_145_128_BP,
      ._mask = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_UNUSED_145_128_MASK,
      ._rval = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_UNUSED_145_128_MASK,
      ._index = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_UNUSED_145_128_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_detail[] = {
    { ._name = "VLD_VEC",
      ._bpos = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_VLD_VEC_BP,
      ._mask = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_VLD_VEC_MASK,
      ._rval = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_VLD_VEC_MASK,
      ._index = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_VLD_VEC_QW,
      ._desc = "Buffer slot is allocated (or reserved)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_free_vld_vecs_7_lo_rat_detail[] = {
    { ._name = "FREE_VEC",
      ._bpos = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_FREE_VEC_BP,
      ._mask = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_FREE_VEC_MASK,
      ._rval = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_FREE_VEC_MASK,
      ._index = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_FREE_VEC_QW,
      ._desc = "Buffer slot is free",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_UNUSED_145_128_BP,
      ._mask = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_UNUSED_145_128_MASK,
      ._rval = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_UNUSED_145_128_MASK,
      ._index = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_UNUSED_145_128_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_detail[] = {
    { ._name = "CLASS_VEC",
      ._bpos = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_CLASS_VEC_BP,
      ._mask = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_CLASS_VEC_MASK,
      ._rval = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_CLASS_VEC_MASK,
      ._index = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_CLASS_VEC_QW,
      ._desc = "Which class (request or response) each buffer slot belongs to",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_vbuf_class_vecs_8_lo_rat_detail[] = {
    { ._name = "VBUF_VEC",
      ._bpos = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_VBUF_VEC_BP,
      ._mask = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_VBUF_VEC_MASK,
      ._rval = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_VBUF_VEC_MASK,
      ._index = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_VBUF_VEC_QW,
      ._desc = "Which virtual range each buffer slot belongs to",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_buffer_state_9_hi_rat_detail[] = {
    { ._name = "UNUSED_145_98",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_UNUSED_145_98_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_UNUSED_145_98_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_UNUSED_145_98_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_UNUSED_145_98_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_buffer_state_9_mid_rat_detail[] = {
    { ._name = "UNUSED_145_98",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_UNUSED_145_98_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_UNUSED_145_98_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_UNUSED_145_98_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_UNUSED_145_98_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_RD_STALL",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_STALL_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_STALL_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_STALL_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_STALL_QW,
      ._desc = "Request read stall",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_RD_VLD",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_VLD_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_VLD_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_VLD_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_VLD_QW,
      ._desc = "Request read vld",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_RD_ADDR",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_ADDR_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_ADDR_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_ADDR_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_RD_ADDR_QW,
      ._desc = "Request read addr",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_RD_STALL",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_STALL_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_STALL_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_STALL_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_STALL_QW,
      ._desc = "Response read stall",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_RD_VLD",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_VLD_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_VLD_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_VLD_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_VLD_QW,
      ._desc = "Response read vld",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_RD_ADDR",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_ADDR_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_ADDR_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_ADDR_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_RD_ADDR_QW,
      ._desc = "Response read addr",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_WR_STALL",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_STALL_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_STALL_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_STALL_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_STALL_QW,
      ._desc = "Request write stall",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_WR_VLD",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_VLD_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_VLD_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_VLD_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_VLD_QW,
      ._desc = "Request write vld",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_WR_VBUF",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_VBUF_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_VBUF_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_VBUF_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_VBUF_QW,
      ._desc = "Request write vbuf",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_WR_ADDR",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_ADDR_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_ADDR_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_ADDR_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_REQ_WR_ADDR_QW,
      ._desc = "Request write addr",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_WR_STALL",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_STALL_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_STALL_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_STALL_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_STALL_QW,
      ._desc = "Response write stall",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_WR_VLD",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_VLD_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_VLD_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_VLD_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_VLD_QW,
      ._desc = "Response write vld",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_WR_VBUF",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_VBUF_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_VBUF_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_VBUF_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_VBUF_QW,
      ._desc = "Response write vbuf",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_WR_ADDR",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_ADDR_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_ADDR_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_ADDR_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSP_WR_ADDR_QW,
      ._desc = "Response write addr",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_buffer_state_9_lo_rat_detail[] = {
    { ._name = "ORD_VEC",
      ._bpos = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_ORD_VEC_BP,
      ._mask = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_ORD_VEC_MASK,
      ._rval = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_ORD_VEC_MASK,
      ._index = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_ORD_VEC_QW,
      ._desc = "Whether the buffer slot needs to be ordered",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_power_down_ff_hi_rat_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_POWER_DOWN_BP,
      ._mask = AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_POWER_DOWN_MASK,
      ._rval = AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSTDATA_QW2 & AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_POWER_DOWN_MASK,
      ._index = AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_power_down_ff_mid_rat_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_POWER_DOWN_BP,
      ._mask = AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_POWER_DOWN_MASK,
      ._rval = AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_RSTDATA_QW1 & AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_POWER_DOWN_MASK,
      ._index = AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_rat_power_down_ff_lo_rat_detail[] = {
    { ._name = "POWER_DOWN",
      ._bpos = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_POWER_DOWN_BP,
      ._mask = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_POWER_DOWN_MASK,
      ._rval = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_RSTDATA & AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_POWER_DOWN_MASK,
      ._index = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_POWER_DOWN_QW,
      ._desc = "Logic Monitor mux enters low power state",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_cfg_params_detail[] = {
    { ._name = "FORCE_AMO_RR",
      ._bpos = AR_NIC_RAT_CFG_PARAMS_FORCE_AMO_RR_BP,
      ._mask = AR_NIC_RAT_CFG_PARAMS_FORCE_AMO_RR_MASK,
      ._rval = AR_NIC_RAT_CFG_PARAMS_RSTDATA & AR_NIC_RAT_CFG_PARAMS_FORCE_AMO_RR_MASK,
      ._index = AR_NIC_RAT_CFG_PARAMS_FORCE_AMO_RR_QW,
      ._desc = "Force AMO block (or PI, for offloaded AMOs) to be responsible for all AMO responses (otherwise they are only responsible for fetching AMO responses and the NPT is responsible for non-fetching AMO responses)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_IOMMU",
      ._bpos = AR_NIC_RAT_CFG_PARAMS_SF_IOMMU_BP,
      ._mask = AR_NIC_RAT_CFG_PARAMS_SF_IOMMU_MASK,
      ._rval = AR_NIC_RAT_CFG_PARAMS_RSTDATA & AR_NIC_RAT_CFG_PARAMS_SF_IOMMU_MASK,
      ._index = AR_NIC_RAT_CFG_PARAMS_SF_IOMMU_QW,
      ._desc = "Store-and-forward in IOMMU request queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_ORB",
      ._bpos = AR_NIC_RAT_CFG_PARAMS_SF_ORB_BP,
      ._mask = AR_NIC_RAT_CFG_PARAMS_SF_ORB_MASK,
      ._rval = AR_NIC_RAT_CFG_PARAMS_RSTDATA & AR_NIC_RAT_CFG_PARAMS_SF_ORB_MASK,
      ._index = AR_NIC_RAT_CFG_PARAMS_SF_ORB_QW,
      ._desc = "Store-and-forward in ORB response queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_NL",
      ._bpos = AR_NIC_RAT_CFG_PARAMS_SF_NL_BP,
      ._mask = AR_NIC_RAT_CFG_PARAMS_SF_NL_MASK,
      ._rval = AR_NIC_RAT_CFG_PARAMS_RSTDATA & AR_NIC_RAT_CFG_PARAMS_SF_NL_MASK,
      ._index = AR_NIC_RAT_CFG_PARAMS_SF_NL_QW,
      ._desc = "Store-and-forward in NL request queue",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RO_HASHED",
      ._bpos = AR_NIC_RAT_CFG_PARAMS_RO_HASHED_BP,
      ._mask = AR_NIC_RAT_CFG_PARAMS_RO_HASHED_MASK,
      ._rval = AR_NIC_RAT_CFG_PARAMS_RSTDATA & AR_NIC_RAT_CFG_PARAMS_RO_HASHED_MASK,
      ._index = AR_NIC_RAT_CFG_PARAMS_RO_HASHED_QW,
      ._desc = "If the USE_RC bit of the MDD is set and the routing control field indicates hashed, then this bit determines the setting of the RO bit in the pi_hints field",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RSP_MAX",
      ._bpos = AR_NIC_RAT_CFG_PARAMS_RSP_MAX_BP,
      ._mask = AR_NIC_RAT_CFG_PARAMS_RSP_MAX_MASK,
      ._rval = AR_NIC_RAT_CFG_PARAMS_RSTDATA & AR_NIC_RAT_CFG_PARAMS_RSP_MAX_MASK,
      ._index = AR_NIC_RAT_CFG_PARAMS_RSP_MAX_QW,
      ._desc = "Maximum number of translation buffer slots that may be occupied by responses",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REQ_MAX",
      ._bpos = AR_NIC_RAT_CFG_PARAMS_REQ_MAX_BP,
      ._mask = AR_NIC_RAT_CFG_PARAMS_REQ_MAX_MASK,
      ._rval = AR_NIC_RAT_CFG_PARAMS_RSTDATA & AR_NIC_RAT_CFG_PARAMS_REQ_MAX_MASK,
      ._index = AR_NIC_RAT_CFG_PARAMS_REQ_MAX_QW,
      ._desc = "Maximum number of translation buffer slots that may be occupied by requests",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_cfg_crdts_detail[] = {
    { ._name = "MAX_PKT_SIZE",
      ._bpos = AR_NIC_RAT_CFG_CRDTS_MAX_PKT_SIZE_BP,
      ._mask = AR_NIC_RAT_CFG_CRDTS_MAX_PKT_SIZE_MASK,
      ._rval = AR_NIC_RAT_CFG_CRDTS_RSTDATA & AR_NIC_RAT_CFG_CRDTS_MAX_PKT_SIZE_MASK,
      ._index = AR_NIC_RAT_CFG_CRDTS_MAX_PKT_SIZE_QW,
      ._desc = "Max packet size",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "WC_CRDTS",
      ._bpos = AR_NIC_RAT_CFG_CRDTS_WC_CRDTS_BP,
      ._mask = AR_NIC_RAT_CFG_CRDTS_WC_CRDTS_MASK,
      ._rval = AR_NIC_RAT_CFG_CRDTS_RSTDATA & AR_NIC_RAT_CFG_CRDTS_WC_CRDTS_MASK,
      ._index = AR_NIC_RAT_CFG_CRDTS_WC_CRDTS_QW,
      ._desc = "Outgoing WC flits, response channel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CE_CRDTS",
      ._bpos = AR_NIC_RAT_CFG_CRDTS_CE_CRDTS_BP,
      ._mask = AR_NIC_RAT_CFG_CRDTS_CE_CRDTS_MASK,
      ._rval = AR_NIC_RAT_CFG_CRDTS_RSTDATA & AR_NIC_RAT_CFG_CRDTS_CE_CRDTS_MASK,
      ._index = AR_NIC_RAT_CFG_CRDTS_CE_CRDTS_QW,
      ._desc = "Outgoing CE flits, request channel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RMT_CRDTS",
      ._bpos = AR_NIC_RAT_CFG_CRDTS_RMT_CRDTS_BP,
      ._mask = AR_NIC_RAT_CFG_CRDTS_RMT_CRDTS_MASK,
      ._rval = AR_NIC_RAT_CFG_CRDTS_RSTDATA & AR_NIC_RAT_CFG_CRDTS_RMT_CRDTS_MASK,
      ._index = AR_NIC_RAT_CFG_CRDTS_RMT_CRDTS_QW,
      ._desc = "Outgoing RMT flits, request channel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_cfg_timeout_req_detail[] = {
    { ._name = "MAX_DURATION",
      ._bpos = AR_NIC_RAT_CFG_TIMEOUT_REQ_MAX_DURATION_BP,
      ._mask = AR_NIC_RAT_CFG_TIMEOUT_REQ_MAX_DURATION_MASK,
      ._rval = AR_NIC_RAT_CFG_TIMEOUT_REQ_RSTDATA & AR_NIC_RAT_CFG_TIMEOUT_REQ_MAX_DURATION_MASK,
      ._index = AR_NIC_RAT_CFG_TIMEOUT_REQ_MAX_DURATION_QW,
      ._desc = "Flag an error once the counter in A_NIC_RAT_PRF_REQ_STALL_DURATION exceeds this value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_cfg_timeout_rsp_detail[] = {
    { ._name = "MAX_DURATION",
      ._bpos = AR_NIC_RAT_CFG_TIMEOUT_RSP_MAX_DURATION_BP,
      ._mask = AR_NIC_RAT_CFG_TIMEOUT_RSP_MAX_DURATION_MASK,
      ._rval = AR_NIC_RAT_CFG_TIMEOUT_RSP_RSTDATA & AR_NIC_RAT_CFG_TIMEOUT_RSP_MAX_DURATION_MASK,
      ._index = AR_NIC_RAT_CFG_TIMEOUT_RSP_MAX_DURATION_QW,
      ._desc = "Flag an error once the counter in A_NIC_RAT_PRF_RSP_STALL_DURATION exceeds this value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_err_flg_detail[] = {
    { ._name = "RSP_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_RSP_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_RSP_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_RSP_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_RSP_TIMEOUT_QW,
      ._desc = "The response virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "REQ_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_REQ_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_REQ_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_REQ_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_REQ_TIMEOUT_QW,
      ._desc = "The request virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ)",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "IOMMU_PAYLD",
      ._bpos = AR_NIC_RAT_ERR_FLG_IOMMU_PAYLD_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_IOMMU_PAYLD_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_IOMMU_PAYLD_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_IOMMU_PAYLD_QW,
      ._desc = "Payload size error on IOMMU packet",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "IOMMU_DROP",
      ._bpos = AR_NIC_RAT_ERR_FLG_IOMMU_DROP_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_IOMMU_DROP_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_IOMMU_DROP_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_IOMMU_DROP_QW,
      ._desc = "Decode error on IOMMU packet",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "PARITY_IOMMU_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_PARITY_IOMMU_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_PARITY_IOMMU_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_PARITY_IOMMU_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_PARITY_IOMMU_INPUT_QW,
      ._desc = "Header parity error on IOMMU channel input",
      ._type_bitmsk = 0x0000000000200011ull,
      ._access = "RW1"
    },
    { ._name = "PARITY_RSP_TRANS",
      ._bpos = AR_NIC_RAT_ERR_FLG_PARITY_RSP_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_PARITY_RSP_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_PARITY_RSP_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_PARITY_RSP_TRANS_QW,
      ._desc = "Translation parity error on response channel buffer",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "PARITY_REQ_TRANS",
      ._bpos = AR_NIC_RAT_ERR_FLG_PARITY_REQ_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_PARITY_REQ_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_PARITY_REQ_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_PARITY_REQ_TRANS_QW,
      ._desc = "Translation parity error on request channel buffer",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "PARITY_RSP_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_PARITY_RSP_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_PARITY_RSP_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_PARITY_RSP_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_PARITY_RSP_OUTPUT_QW,
      ._desc = "Header parity error on response channel output",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "PARITY_REQ_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_PARITY_REQ_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_PARITY_REQ_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_PARITY_REQ_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_PARITY_REQ_OUTPUT_QW,
      ._desc = "Header parity error on request channel output",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "PARITY_RSP_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_PARITY_RSP_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_PARITY_RSP_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_PARITY_RSP_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_PARITY_RSP_INPUT_QW,
      ._desc = "Header parity error on response channel input",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "PARITY_REQ_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FLG_PARITY_REQ_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_PARITY_REQ_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_PARITY_REQ_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_PARITY_REQ_INPUT_QW,
      ._desc = "Header parity error on request (NL) channel input",
      ._type_bitmsk = 0x0000000000040011ull,
      ._access = "RW1"
    },
    { ._name = "UFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_FLG_UFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_UFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_UFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_UFLW_RSP_QW,
      ._desc = "Response Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "UFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_FLG_UFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_UFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_UFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_UFLW_IOMMU_QW,
      ._desc = "IOMMU Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "UFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_FLG_UFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_UFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_UFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_UFLW_REQ_QW,
      ._desc = "Request Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "OFLW_XARB",
      ._bpos = AR_NIC_RAT_ERR_FLG_OFLW_XARB_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_OFLW_XARB_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_OFLW_XARB_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_OFLW_XARB_QW,
      ._desc = "Translation Request Arbiter Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "OFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_FLG_OFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_OFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_OFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_OFLW_RSP_QW,
      ._desc = "Response Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "OFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_FLG_OFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_OFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_OFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_OFLW_IOMMU_QW,
      ._desc = "IOMMU Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "OFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_FLG_OFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_OFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_OFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_OFLW_REQ_QW,
      ._desc = "Request Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000008011ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RAT_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_RAT_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RAT_ERR_FLG_RSTDATA & AR_NIC_RAT_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_RAT_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000100011ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_err_clr_detail[] = {
    { ._name = "RSP_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_CLR_RSP_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_RSP_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_RSP_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_RSP_TIMEOUT_QW,
      ._desc = "The response virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_CLR_REQ_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_REQ_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_REQ_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_REQ_TIMEOUT_QW,
      ._desc = "The request virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "IOMMU_PAYLD",
      ._bpos = AR_NIC_RAT_ERR_CLR_IOMMU_PAYLD_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_IOMMU_PAYLD_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_IOMMU_PAYLD_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_IOMMU_PAYLD_QW,
      ._desc = "Payload size error on IOMMU packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "IOMMU_DROP",
      ._bpos = AR_NIC_RAT_ERR_CLR_IOMMU_DROP_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_IOMMU_DROP_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_IOMMU_DROP_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_IOMMU_DROP_QW,
      ._desc = "Decode error on IOMMU packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PARITY_IOMMU_INPUT",
      ._bpos = AR_NIC_RAT_ERR_CLR_PARITY_IOMMU_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_PARITY_IOMMU_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_PARITY_IOMMU_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_PARITY_IOMMU_INPUT_QW,
      ._desc = "Header parity error on IOMMU channel input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PARITY_RSP_TRANS",
      ._bpos = AR_NIC_RAT_ERR_CLR_PARITY_RSP_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_PARITY_RSP_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_PARITY_RSP_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_PARITY_RSP_TRANS_QW,
      ._desc = "Translation parity error on response channel buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PARITY_REQ_TRANS",
      ._bpos = AR_NIC_RAT_ERR_CLR_PARITY_REQ_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_PARITY_REQ_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_PARITY_REQ_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_PARITY_REQ_TRANS_QW,
      ._desc = "Translation parity error on request channel buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PARITY_RSP_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_CLR_PARITY_RSP_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_PARITY_RSP_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_PARITY_RSP_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_PARITY_RSP_OUTPUT_QW,
      ._desc = "Header parity error on response channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PARITY_REQ_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_CLR_PARITY_REQ_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_PARITY_REQ_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_PARITY_REQ_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_PARITY_REQ_OUTPUT_QW,
      ._desc = "Header parity error on request channel output",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PARITY_RSP_INPUT",
      ._bpos = AR_NIC_RAT_ERR_CLR_PARITY_RSP_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_PARITY_RSP_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_PARITY_RSP_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_PARITY_RSP_INPUT_QW,
      ._desc = "Header parity error on response channel input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "PARITY_REQ_INPUT",
      ._bpos = AR_NIC_RAT_ERR_CLR_PARITY_REQ_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_PARITY_REQ_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_PARITY_REQ_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_PARITY_REQ_INPUT_QW,
      ._desc = "Header parity error on request (NL) channel input",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "UFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_CLR_UFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_UFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_UFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_UFLW_RSP_QW,
      ._desc = "Response Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "UFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_CLR_UFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_UFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_UFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_UFLW_IOMMU_QW,
      ._desc = "IOMMU Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "UFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_CLR_UFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_UFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_UFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_UFLW_REQ_QW,
      ._desc = "Request Input FIFO Underflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "OFLW_XARB",
      ._bpos = AR_NIC_RAT_ERR_CLR_OFLW_XARB_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_OFLW_XARB_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_OFLW_XARB_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_OFLW_XARB_QW,
      ._desc = "Translation Request Arbiter Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "OFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_CLR_OFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_OFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_OFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_OFLW_RSP_QW,
      ._desc = "Response Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "OFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_CLR_OFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_OFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_OFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_OFLW_IOMMU_QW,
      ._desc = "IOMMU Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "OFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_CLR_OFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_OFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_OFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_OFLW_REQ_QW,
      ._desc = "Request Input FIFO Overflow",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RAT_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_RAT_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RAT_ERR_CLR_RSTDATA & AR_NIC_RAT_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_RAT_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Diagnostic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_err_hss_msk_detail[] = {
    { ._name = "RSP_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_RSP_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_RSP_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_RSP_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_RSP_TIMEOUT_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_REQ_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_REQ_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_REQ_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_REQ_TIMEOUT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_PAYLD",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_IOMMU_PAYLD_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_IOMMU_PAYLD_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_IOMMU_PAYLD_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_IOMMU_PAYLD_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_DROP",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_IOMMU_DROP_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_IOMMU_DROP_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_IOMMU_DROP_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_IOMMU_DROP_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_IOMMU_INPUT",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_PARITY_IOMMU_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_PARITY_IOMMU_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_PARITY_IOMMU_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_PARITY_IOMMU_INPUT_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_RSP_TRANS",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_TRANS_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_REQ_TRANS",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_TRANS_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_RSP_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_OUTPUT_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_REQ_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_OUTPUT_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_RSP_INPUT",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_PARITY_RSP_INPUT_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_REQ_INPUT",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_PARITY_REQ_INPUT_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_UFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_UFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_UFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_UFLW_RSP_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_UFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_UFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_UFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_UFLW_IOMMU_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_UFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_UFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_UFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_UFLW_REQ_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_XARB",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_OFLW_XARB_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_OFLW_XARB_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_OFLW_XARB_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_OFLW_XARB_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_OFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_OFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_OFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_OFLW_RSP_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_OFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_OFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_OFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_OFLW_IOMMU_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_OFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_OFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_OFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_OFLW_REQ_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RAT_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_RAT_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA & AR_NIC_RAT_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_RAT_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_err_os_msk_detail[] = {
    { ._name = "RSP_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_RSP_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_RSP_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_RSP_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_RSP_TIMEOUT_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_REQ_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_REQ_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_REQ_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_REQ_TIMEOUT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_PAYLD",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_IOMMU_PAYLD_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_IOMMU_PAYLD_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_IOMMU_PAYLD_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_IOMMU_PAYLD_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_DROP",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_IOMMU_DROP_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_IOMMU_DROP_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_IOMMU_DROP_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_IOMMU_DROP_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_IOMMU_INPUT",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_PARITY_IOMMU_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_PARITY_IOMMU_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_PARITY_IOMMU_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_PARITY_IOMMU_INPUT_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_RSP_TRANS",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_TRANS_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_REQ_TRANS",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_TRANS_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_RSP_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_OUTPUT_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_REQ_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_OUTPUT_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_RSP_INPUT",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_PARITY_RSP_INPUT_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_REQ_INPUT",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_PARITY_REQ_INPUT_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_UFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_UFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_UFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_UFLW_RSP_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_UFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_UFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_UFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_UFLW_IOMMU_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_UFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_UFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_UFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_UFLW_REQ_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_XARB",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_OFLW_XARB_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_OFLW_XARB_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_OFLW_XARB_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_OFLW_XARB_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_OFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_OFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_OFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_OFLW_RSP_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_OFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_OFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_OFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_OFLW_IOMMU_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_OFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_OFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_OFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_OFLW_REQ_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RAT_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_RAT_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RAT_ERR_OS_MSK_RSTDATA & AR_NIC_RAT_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_RAT_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_err_first_flg_detail[] = {
    { ._name = "RSP_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_RSP_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_RSP_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_RSP_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_RSP_TIMEOUT_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_TIMEOUT",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_REQ_TIMEOUT_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_REQ_TIMEOUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_REQ_TIMEOUT_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_REQ_TIMEOUT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_PAYLD",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_IOMMU_PAYLD_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_IOMMU_PAYLD_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_IOMMU_PAYLD_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_IOMMU_PAYLD_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "IOMMU_DROP",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_IOMMU_DROP_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_IOMMU_DROP_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_IOMMU_DROP_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_IOMMU_DROP_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_IOMMU_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_IOMMU_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_IOMMU_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_PARITY_IOMMU_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_IOMMU_INPUT_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_RSP_TRANS",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_TRANS_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_REQ_TRANS",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_TRANS_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_TRANS_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_TRANS_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_TRANS_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_RSP_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_OUTPUT_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_REQ_OUTPUT",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_OUTPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_OUTPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_OUTPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_OUTPUT_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_RSP_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_RSP_INPUT_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PARITY_REQ_INPUT",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_INPUT_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_INPUT_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_INPUT_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_PARITY_REQ_INPUT_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_UFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_UFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_UFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_UFLW_RSP_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_UFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_UFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_UFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_UFLW_IOMMU_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "UFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_UFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_UFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_UFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_UFLW_REQ_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_XARB",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_XARB_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_XARB_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_OFLW_XARB_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_XARB_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_RSP",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_RSP_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_RSP_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_OFLW_RSP_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_RSP_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_IOMMU",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_IOMMU_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_IOMMU_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_OFLW_IOMMU_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_IOMMU_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "OFLW_REQ",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_REQ_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_REQ_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_OFLW_REQ_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_OFLW_REQ_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_RAT_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_RAT_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA & AR_NIC_RAT_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_RAT_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_dbg_crdts_detail[] = {
    { ._name = "WC_CRDTS",
      ._bpos = AR_NIC_RAT_DBG_CRDTS_WC_CRDTS_BP,
      ._mask = AR_NIC_RAT_DBG_CRDTS_WC_CRDTS_MASK,
      ._rval = AR_NIC_RAT_DBG_CRDTS_RSTDATA & AR_NIC_RAT_DBG_CRDTS_WC_CRDTS_MASK,
      ._index = AR_NIC_RAT_DBG_CRDTS_WC_CRDTS_QW,
      ._desc = "Number of credits used on the WC interface",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "CE_CRDTS",
      ._bpos = AR_NIC_RAT_DBG_CRDTS_CE_CRDTS_BP,
      ._mask = AR_NIC_RAT_DBG_CRDTS_CE_CRDTS_MASK,
      ._rval = AR_NIC_RAT_DBG_CRDTS_RSTDATA & AR_NIC_RAT_DBG_CRDTS_CE_CRDTS_MASK,
      ._index = AR_NIC_RAT_DBG_CRDTS_CE_CRDTS_QW,
      ._desc = "Number of credits used on the CE interface",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "RMT_CRDTS",
      ._bpos = AR_NIC_RAT_DBG_CRDTS_RMT_CRDTS_BP,
      ._mask = AR_NIC_RAT_DBG_CRDTS_RMT_CRDTS_MASK,
      ._rval = AR_NIC_RAT_DBG_CRDTS_RSTDATA & AR_NIC_RAT_DBG_CRDTS_RMT_CRDTS_MASK,
      ._index = AR_NIC_RAT_DBG_CRDTS_RMT_CRDTS_QW,
      ._desc = "Number of credits used on the RMT itnerface",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_dbg_buf_state_detail[] = {
    { ._name = "REQ_CNTR",
      ._bpos = AR_NIC_RAT_DBG_BUF_STATE_REQ_CNTR_BP,
      ._mask = AR_NIC_RAT_DBG_BUF_STATE_REQ_CNTR_MASK,
      ._rval = AR_NIC_RAT_DBG_BUF_STATE_RSTDATA & AR_NIC_RAT_DBG_BUF_STATE_REQ_CNTR_MASK,
      ._index = AR_NIC_RAT_DBG_BUF_STATE_REQ_CNTR_QW,
      ._desc = "Number of buffer slots allocated to request channel",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "RSP_CNTR",
      ._bpos = AR_NIC_RAT_DBG_BUF_STATE_RSP_CNTR_BP,
      ._mask = AR_NIC_RAT_DBG_BUF_STATE_RSP_CNTR_MASK,
      ._rval = AR_NIC_RAT_DBG_BUF_STATE_RSTDATA & AR_NIC_RAT_DBG_BUF_STATE_RSP_CNTR_MASK,
      ._index = AR_NIC_RAT_DBG_BUF_STATE_RSP_CNTR_QW,
      ._desc = "Number of buffer slots allocated to response channel",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "BUF_CNTR",
      ._bpos = AR_NIC_RAT_DBG_BUF_STATE_BUF_CNTR_BP,
      ._mask = AR_NIC_RAT_DBG_BUF_STATE_BUF_CNTR_MASK,
      ._rval = AR_NIC_RAT_DBG_BUF_STATE_RSTDATA & AR_NIC_RAT_DBG_BUF_STATE_BUF_CNTR_MASK,
      ._index = AR_NIC_RAT_DBG_BUF_STATE_BUF_CNTR_QW,
      ._desc = "Number of buffer slots in use",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_dbg_errinj_bus_detail[] = {
    { ._name = "TRIGGERED_RSP",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_RSP_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_RSP_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_RSP_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_RSP_QW,
      ._desc = "Error has been injected on response packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TRIGGERED_IOMMU",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_IOMMU_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_IOMMU_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_IOMMU_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_IOMMU_QW,
      ._desc = "Error has been injected on IOMMU packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TRIGGERED_REQ",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_REQ_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_REQ_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_REQ_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_TRIGGERED_REQ_QW,
      ._desc = "Error has been injected on request packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_PARITY_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_PARITY_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_PARITY_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_PARITY_QW,
      ._desc = "When an error is injected on a header flit, this field indicates which parity bits should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC1",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_ECC1_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_ECC1_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_ECC1_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_ECC1_QW,
      ._desc = "When an error is injected on a payload flit, this field indicates which bits of ECC1 should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC0",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_ECC0_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_ECC0_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_ECC0_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_ECC0_QW,
      ._desc = "When an error is injected on a payload flit, this field indicates which bits of ECC0 should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_TAIL_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_TAIL_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_TAIL_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_TAIL_QW,
      ._desc = "When an error is injected, this field indicates whether the tail bit should be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_COUNT_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_COUNT_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_COUNT_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_COUNT_QW,
      ._desc = "Indicates which flit of a packet to inject the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_MODE_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_MODE_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_MODE_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_MODE_QW,
      ._desc = "0: Inject error on one packet (on each enabled interface) 1: Inject error on every packet (on each enabled interface)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RSP_EN",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_RSP_EN_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_RSP_EN_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_RSP_EN_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_RSP_EN_QW,
      ._desc = "Enable error injection on response packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "IOMMU_EN",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_IOMMU_EN_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_IOMMU_EN_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_IOMMU_EN_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_IOMMU_EN_QW,
      ._desc = "Enable error injection on IOMMU packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REQ_EN",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUS_REQ_EN_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUS_REQ_EN_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUS_REQ_EN_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUS_REQ_EN_QW,
      ._desc = "Enable error injection on request packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_dbg_errinj_buf_detail[] = {
    { ._name = "RSP_TRIGGERED",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUF_RSP_TRIGGERED_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUF_RSP_TRIGGERED_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUF_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUF_RSP_TRIGGERED_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUF_RSP_TRIGGERED_QW,
      ._desc = "Error has been injected on response channel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REQ_TRIGGERED",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUF_REQ_TRIGGERED_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUF_REQ_TRIGGERED_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUF_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUF_REQ_TRIGGERED_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUF_REQ_TRIGGERED_QW,
      ._desc = "Error has been injected on request channel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "HEADER_PARITY",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUF_HEADER_PARITY_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUF_HEADER_PARITY_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUF_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUF_HEADER_PARITY_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUF_HEADER_PARITY_QW,
      ._desc = "Inject a parity error in the header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRANSLATION_PARITY",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUF_TRANSLATION_PARITY_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUF_TRANSLATION_PARITY_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUF_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUF_TRANSLATION_PARITY_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUF_TRANSLATION_PARITY_QW,
      ._desc = "Inject a parity error in the translation data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUF_MODE_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUF_MODE_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUF_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUF_MODE_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUF_MODE_QW,
      ._desc = "0: Inject error on one packet (on each enabled interface) 1: Inject error on every packet (on each enabled interface)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RSP_EN",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUF_RSP_EN_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUF_RSP_EN_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUF_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUF_RSP_EN_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUF_RSP_EN_QW,
      ._desc = "Enable error injection on response channel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REQ_EN",
      ._bpos = AR_NIC_RAT_DBG_ERRINJ_BUF_REQ_EN_BP,
      ._mask = AR_NIC_RAT_DBG_ERRINJ_BUF_REQ_EN_MASK,
      ._rval = AR_NIC_RAT_DBG_ERRINJ_BUF_RSTDATA & AR_NIC_RAT_DBG_ERRINJ_BUF_REQ_EN_MASK,
      ._index = AR_NIC_RAT_DBG_ERRINJ_BUF_REQ_EN_QW,
      ._desc = "Enable error injection on request channel",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_req_val0_detail[] = {
    { ._name = "FLIT_63_0",
      ._bpos = AR_NIC_RAT_PRF_REQ_VAL0_FLIT_63_0_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_VAL0_FLIT_63_0_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_VAL0_RSTDATA & AR_NIC_RAT_PRF_REQ_VAL0_FLIT_63_0_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_VAL0_FLIT_63_0_QW,
      ._desc = "Bits [63:0] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_req_val1_detail[] = {
    { ._name = "FLIT_127_64",
      ._bpos = AR_NIC_RAT_PRF_REQ_VAL1_FLIT_127_64_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_VAL1_FLIT_127_64_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_VAL1_RSTDATA & AR_NIC_RAT_PRF_REQ_VAL1_FLIT_127_64_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_VAL1_FLIT_127_64_QW,
      ._desc = "Bits [127:64] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_req_val2_detail[] = {
    { ._name = "IOMMU_EN",
      ._bpos = AR_NIC_RAT_PRF_REQ_VAL2_IOMMU_EN_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_VAL2_IOMMU_EN_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_VAL2_RSTDATA & AR_NIC_RAT_PRF_REQ_VAL2_IOMMU_EN_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_VAL2_IOMMU_EN_QW,
      ._desc = "Enable this performance counter to look at incomming IOMMU requests",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NL_EN",
      ._bpos = AR_NIC_RAT_PRF_REQ_VAL2_NL_EN_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_VAL2_NL_EN_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_VAL2_RSTDATA & AR_NIC_RAT_PRF_REQ_VAL2_NL_EN_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_VAL2_NL_EN_QW,
      ._desc = "Enable this performance counter to look at incomming NL requests",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "HDR",
      ._bpos = AR_NIC_RAT_PRF_REQ_VAL2_HDR_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_VAL2_HDR_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_VAL2_RSTDATA & AR_NIC_RAT_PRF_REQ_VAL2_HDR_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_VAL2_HDR_QW,
      ._desc = "1 = Flit type is header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_RAT_PRF_REQ_VAL2_TAIL_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_VAL2_TAIL_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_VAL2_RSTDATA & AR_NIC_RAT_PRF_REQ_VAL2_TAIL_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_VAL2_TAIL_QW,
      ._desc = "1 = Flit is a tail flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FLIT_143_128",
      ._bpos = AR_NIC_RAT_PRF_REQ_VAL2_FLIT_143_128_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_VAL2_FLIT_143_128_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_VAL2_RSTDATA & AR_NIC_RAT_PRF_REQ_VAL2_FLIT_143_128_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_VAL2_FLIT_143_128_QW,
      ._desc = "Bits [143:128] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_req_mask0_detail[] = {
    { ._name = "FLIT_63_0",
      ._bpos = AR_NIC_RAT_PRF_REQ_MASK0_FLIT_63_0_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_MASK0_FLIT_63_0_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_MASK0_RSTDATA & AR_NIC_RAT_PRF_REQ_MASK0_FLIT_63_0_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_MASK0_FLIT_63_0_QW,
      ._desc = "Bits [63:0] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_req_mask1_detail[] = {
    { ._name = "FLIT_127_64",
      ._bpos = AR_NIC_RAT_PRF_REQ_MASK1_FLIT_127_64_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_MASK1_FLIT_127_64_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_MASK1_RSTDATA & AR_NIC_RAT_PRF_REQ_MASK1_FLIT_127_64_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_MASK1_FLIT_127_64_QW,
      ._desc = "Bits [127:64] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_req_mask2_detail[] = {
    { ._name = "HDR",
      ._bpos = AR_NIC_RAT_PRF_REQ_MASK2_HDR_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_MASK2_HDR_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_MASK2_RSTDATA & AR_NIC_RAT_PRF_REQ_MASK2_HDR_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_MASK2_HDR_QW,
      ._desc = "Flit type (header/payload) To ensure atomicity, disable the counter (IOMMU_EN and NL_EN) before modifying the configuration",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_RAT_PRF_REQ_MASK2_TAIL_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_MASK2_TAIL_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_MASK2_RSTDATA & AR_NIC_RAT_PRF_REQ_MASK2_TAIL_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_MASK2_TAIL_QW,
      ._desc = "Flit is a tail flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FLIT_143_128",
      ._bpos = AR_NIC_RAT_PRF_REQ_MASK2_FLIT_143_128_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_MASK2_FLIT_143_128_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_MASK2_RSTDATA & AR_NIC_RAT_PRF_REQ_MASK2_FLIT_143_128_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_MASK2_FLIT_143_128_QW,
      ._desc = "Bits [143:128] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_rsp_val0_detail[] = {
    { ._name = "FLIT_63_0",
      ._bpos = AR_NIC_RAT_PRF_RSP_VAL0_FLIT_63_0_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_VAL0_FLIT_63_0_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_VAL0_RSTDATA & AR_NIC_RAT_PRF_RSP_VAL0_FLIT_63_0_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_VAL0_FLIT_63_0_QW,
      ._desc = "Bits [63:0] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_rsp_val1_detail[] = {
    { ._name = "FLIT_127_64",
      ._bpos = AR_NIC_RAT_PRF_RSP_VAL1_FLIT_127_64_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_VAL1_FLIT_127_64_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_VAL1_RSTDATA & AR_NIC_RAT_PRF_RSP_VAL1_FLIT_127_64_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_VAL1_FLIT_127_64_QW,
      ._desc = "Bits [127:64] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_rsp_val2_detail[] = {
    { ._name = "EN",
      ._bpos = AR_NIC_RAT_PRF_RSP_VAL2_EN_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_VAL2_EN_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_VAL2_RSTDATA & AR_NIC_RAT_PRF_RSP_VAL2_EN_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_VAL2_EN_QW,
      ._desc = "Enable this performance counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "HDR",
      ._bpos = AR_NIC_RAT_PRF_RSP_VAL2_HDR_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_VAL2_HDR_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_VAL2_RSTDATA & AR_NIC_RAT_PRF_RSP_VAL2_HDR_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_VAL2_HDR_QW,
      ._desc = "1 = Flit type is header",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_RAT_PRF_RSP_VAL2_TAIL_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_VAL2_TAIL_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_VAL2_RSTDATA & AR_NIC_RAT_PRF_RSP_VAL2_TAIL_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_VAL2_TAIL_QW,
      ._desc = "1 = Flit is a tail flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FLIT_143_128",
      ._bpos = AR_NIC_RAT_PRF_RSP_VAL2_FLIT_143_128_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_VAL2_FLIT_143_128_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_VAL2_RSTDATA & AR_NIC_RAT_PRF_RSP_VAL2_FLIT_143_128_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_VAL2_FLIT_143_128_QW,
      ._desc = "Bits [143:128] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_rsp_mask0_detail[] = {
    { ._name = "FLIT_63_0",
      ._bpos = AR_NIC_RAT_PRF_RSP_MASK0_FLIT_63_0_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_MASK0_FLIT_63_0_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_MASK0_RSTDATA & AR_NIC_RAT_PRF_RSP_MASK0_FLIT_63_0_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_MASK0_FLIT_63_0_QW,
      ._desc = "Bits [63:0] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_rsp_mask1_detail[] = {
    { ._name = "FLIT_127_64",
      ._bpos = AR_NIC_RAT_PRF_RSP_MASK1_FLIT_127_64_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_MASK1_FLIT_127_64_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_MASK1_RSTDATA & AR_NIC_RAT_PRF_RSP_MASK1_FLIT_127_64_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_MASK1_FLIT_127_64_QW,
      ._desc = "Bits [127:64] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_rsp_mask2_detail[] = {
    { ._name = "HDR",
      ._bpos = AR_NIC_RAT_PRF_RSP_MASK2_HDR_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_MASK2_HDR_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_MASK2_RSTDATA & AR_NIC_RAT_PRF_RSP_MASK2_HDR_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_MASK2_HDR_QW,
      ._desc = "Flit type (header/payload) To ensure atomicity, disable the counter (EN) before modifying the configuration",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TAIL",
      ._bpos = AR_NIC_RAT_PRF_RSP_MASK2_TAIL_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_MASK2_TAIL_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_MASK2_RSTDATA & AR_NIC_RAT_PRF_RSP_MASK2_TAIL_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_MASK2_TAIL_QW,
      ._desc = "Flit is a tail flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FLIT_143_128",
      ._bpos = AR_NIC_RAT_PRF_RSP_MASK2_FLIT_143_128_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_MASK2_FLIT_143_128_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_MASK2_RSTDATA & AR_NIC_RAT_PRF_RSP_MASK2_FLIT_143_128_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_MASK2_FLIT_143_128_QW,
      ._desc = "Bits [143:128] of the flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_en_detail[] = {
    { ._name = "PRF_RSP_DURATION_EN",
      ._bpos = AR_NIC_RAT_PRF_EN_PRF_RSP_DURATION_EN_BP,
      ._mask = AR_NIC_RAT_PRF_EN_PRF_RSP_DURATION_EN_MASK,
      ._rval = AR_NIC_RAT_PRF_EN_RSTDATA & AR_NIC_RAT_PRF_EN_PRF_RSP_DURATION_EN_MASK,
      ._index = AR_NIC_RAT_PRF_EN_PRF_RSP_DURATION_EN_QW,
      ._desc = "Enable register A_NIC_RAT_PRF_RSP_STALL_DURATION",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PRF_REQ_DURATION_EN",
      ._bpos = AR_NIC_RAT_PRF_EN_PRF_REQ_DURATION_EN_BP,
      ._mask = AR_NIC_RAT_PRF_EN_PRF_REQ_DURATION_EN_MASK,
      ._rval = AR_NIC_RAT_PRF_EN_RSTDATA & AR_NIC_RAT_PRF_EN_PRF_REQ_DURATION_EN_MASK,
      ._index = AR_NIC_RAT_PRF_EN_PRF_REQ_DURATION_EN_QW,
      ._desc = "Enable register A_NIC_RAT_PRF_REQ_STALL_DURATION",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_req_stall_duration_detail[] = {
    { ._name = "VALUE",
      ._bpos = AR_NIC_RAT_PRF_REQ_STALL_DURATION_VALUE_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_STALL_DURATION_VALUE_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_STALL_DURATION_RSTDATA & AR_NIC_RAT_PRF_REQ_STALL_DURATION_VALUE_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_STALL_DURATION_VALUE_QW,
      ._desc = "The maximum duration in clock cycles",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_rsp_stall_duration_detail[] = {
    { ._name = "VALUE",
      ._bpos = AR_NIC_RAT_PRF_RSP_STALL_DURATION_VALUE_BP,
      ._mask = AR_NIC_RAT_PRF_RSP_STALL_DURATION_VALUE_MASK,
      ._rval = AR_NIC_RAT_PRF_RSP_STALL_DURATION_RSTDATA & AR_NIC_RAT_PRF_RSP_STALL_DURATION_VALUE_MASK,
      ._index = AR_NIC_RAT_PRF_RSP_STALL_DURATION_VALUE_QW,
      ._desc = "The maximum duration in clock cycles",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_rat_prf_req_bytes_rcvd_detail[] = {
    { ._name = "BYTES",
      ._bpos = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_BYTES_BP,
      ._mask = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_BYTES_MASK,
      ._rval = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_RSTDATA & AR_NIC_RAT_PRF_REQ_BYTES_RCVD_BYTES_MASK,
      ._index = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_BYTES_QW,
      ._desc = "The number of payload bytes received on the request channel",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR RAT DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_rval[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_rmsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_rval[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_rmsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_mmr_ring_0_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_rval[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_rmsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_ERR_FLG_1_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_rval[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_rmsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_err_flg_1_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_ERR_FLG_1_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_rval[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_rmsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_rval[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_rmsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_rval[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_rmsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_rval[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_rmsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_rval[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_rmsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_rval[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_rmsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_rval[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_rmsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_rval[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_rmsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_rval[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_rmsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_rval[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_rmsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_rval[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_rmsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_rval[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_rmsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_rval[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_rmsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_rval[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_rmsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_rval[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_rmsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_rval[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_rmsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_buffer_state_9_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT_HWRMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_rval[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSTDATA_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSTDATA_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_rmsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSTMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_wrmsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_WRTMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_WRTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_rdmsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RDMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RDMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_xsmsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_XSMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_XSMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_wsemsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_WSEMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_WSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_rsemsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSEMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_RSEMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_w1smsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_W1SMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_W1SMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_w1cmsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_W1CMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_W1CMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_wrstmsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_WRSTMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_WRSTMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_hwwmsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_HWWMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_HWWMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_hi_rat_hwrmsk[3] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_HWRMASK_QW1,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT_HWRMASK_QW2
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_rval[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_RSTDATA_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_RSTDATA_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_rmsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_RSTMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_RSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_wrmsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_WRTMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_WRTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_rdmsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_RDMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_RDMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_xsmsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_XSMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_XSMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_wsemsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_WSEMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_WSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_rsemsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_RSEMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_RSEMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_w1smsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_W1SMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_W1SMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_w1cmsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_W1CMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_W1CMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_wrstmsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_WRSTMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_WRSTMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_hwwmsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_HWWMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_HWWMASK_QW1
};
static const uint64_t __ar_nic_rat_rat_power_down_ff_mid_rat_hwrmsk[2] = {
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_HWRMASK_QW0,
	AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT_HWRMASK_QW1
};

/*
 *  AR RAT MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_rat_cfg_link_active = {
    ._name = "AR_NIC_RAT_CFG_LINK_ACTIVE",
    ._addr = AR_NIC_RAT_CFG_LINK_ACTIVE,
    ._rval.val = AR_NIC_RAT_CFG_LINK_ACTIVE_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_CFG_LINK_ACTIVE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_rat_cfg_link_active_detail
};
static const cmmr_br_t __ar_nic_rat_rat_mmr_ring_0_hi_rat = {
    ._name = "AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT",
    ._addr = AR_NIC_RAT_RAT_MMR_RING_0_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_mmr_ring_0_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_mmr_ring_0_mid_rat = {
    ._name = "AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT",
    ._addr = AR_NIC_RAT_RAT_MMR_RING_0_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_mmr_ring_0_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_mmr_ring_0_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_mmr_ring_0_lo_rat = {
    ._name = "AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT",
    ._addr = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT,
    ._rval.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_RAT_MMR_RING_0_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_mmr_ring_0_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_err_flg_1_hi_rat = {
    ._name = "AR_NIC_RAT_ERR_FLG_1_HI_RAT",
    ._addr = AR_NIC_RAT_ERR_FLG_1_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_err_flg_1_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_err_flg_1_mid_rat = {
    ._name = "AR_NIC_RAT_ERR_FLG_1_MID_RAT",
    ._addr = AR_NIC_RAT_ERR_FLG_1_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_err_flg_1_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_err_flg_1_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_err_flg_1_lo_rat = {
    ._name = "AR_NIC_RAT_ERR_FLG_1_LO_RAT",
    ._addr = AR_NIC_RAT_ERR_FLG_1_LO_RAT,
    ._rval.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_ERR_FLG_1_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_err_flg_1_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat = {
    ._name = "AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT",
    ._addr = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_wc_rsp_flit_2_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat = {
    ._name = "AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT",
    ._addr = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_wc_rsp_flit_2_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_wc_rsp_flit_2_lo_rat = {
    ._name = "AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT",
    ._addr = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT,
    ._rval.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_RAT_WC_RSP_FLIT_2_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_wc_rsp_flit_2_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_rmt_req_flit_3_hi_rat = {
    ._name = "AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT",
    ._addr = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_rmt_req_flit_3_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_rmt_req_flit_3_mid_rat = {
    ._name = "AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT",
    ._addr = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rmt_req_flit_3_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_rmt_req_flit_3_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_rmt_req_flit_3_lo_rat = {
    ._name = "AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT",
    ._addr = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT,
    ._rval.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_RAT_RMT_REQ_FLIT_3_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_rmt_req_flit_3_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_ce_req_flit_4_hi_rat = {
    ._name = "AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT",
    ._addr = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_ce_req_flit_4_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_ce_req_flit_4_mid_rat = {
    ._name = "AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT",
    ._addr = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_ce_req_flit_4_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_ce_req_flit_4_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_ce_req_flit_4_lo_rat = {
    ._name = "AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT",
    ._addr = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT,
    ._rval.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_RAT_CE_REQ_FLIT_4_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_ce_req_flit_4_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_nl_nic_req_flit_5_hi_rat = {
    ._name = "AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT",
    ._addr = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_nl_nic_req_flit_5_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_nl_nic_req_flit_5_mid_rat = {
    ._name = "AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT",
    ._addr = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_nl_nic_req_flit_5_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_nl_nic_req_flit_5_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_nl_nic_req_flit_5_lo_rat = {
    ._name = "AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT",
    ._addr = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT,
    ._rval.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_NL_NIC_REQ_FLIT_5_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_nl_nic_req_flit_5_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_rdy_vecs_6_hi_rat = {
    ._name = "AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT",
    ._addr = AR_NIC_RAT_RAT_RDY_VECS_6_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_rdy_vecs_6_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_rdy_vecs_6_mid_rat = {
    ._name = "AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT",
    ._addr = AR_NIC_RAT_RAT_RDY_VECS_6_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_rdy_vecs_6_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_rdy_vecs_6_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_rdy_vecs_6_lo_rat = {
    ._name = "AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT",
    ._addr = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT,
    ._rval.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_RAT_RDY_VECS_6_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_rdy_vecs_6_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_free_vld_vecs_7_hi_rat = {
    ._name = "AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT",
    ._addr = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_free_vld_vecs_7_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_free_vld_vecs_7_mid_rat = {
    ._name = "AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT",
    ._addr = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_free_vld_vecs_7_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_free_vld_vecs_7_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_free_vld_vecs_7_lo_rat = {
    ._name = "AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT",
    ._addr = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT,
    ._rval.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_RAT_FREE_VLD_VECS_7_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_free_vld_vecs_7_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat = {
    ._name = "AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT",
    ._addr = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat = {
    ._name = "AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT",
    ._addr = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_vbuf_class_vecs_8_lo_rat = {
    ._name = "AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT",
    ._addr = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT,
    ._rval.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_RAT_VBUF_CLASS_VECS_8_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_vbuf_class_vecs_8_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_buffer_state_9_hi_rat = {
    ._name = "AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT",
    ._addr = AR_NIC_RAT_RAT_BUFFER_STATE_9_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_buffer_state_9_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_buffer_state_9_mid_rat = {
    ._name = "AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT",
    ._addr = AR_NIC_RAT_RAT_BUFFER_STATE_9_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_buffer_state_9_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_buffer_state_9_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_buffer_state_9_lo_rat = {
    ._name = "AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT",
    ._addr = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT,
    ._rval.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_RAT_BUFFER_STATE_9_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_buffer_state_9_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_power_down_ff_hi_rat = {
    ._name = "AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT",
    ._addr = AR_NIC_RAT_RAT_POWER_DOWN_FF_HI_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_hi_rat_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_power_down_ff_hi_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_power_down_ff_mid_rat = {
    ._name = "AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT",
    ._addr = AR_NIC_RAT_RAT_POWER_DOWN_FF_MID_RAT,
    ._rval.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_rat_rat_power_down_ff_mid_rat_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_power_down_ff_mid_rat_detail
};
static const cmmr_br_t __ar_nic_rat_rat_power_down_ff_lo_rat = {
    ._name = "AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT",
    ._addr = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT,
    ._rval.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_RAT_POWER_DOWN_FF_LO_RAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_rat_power_down_ff_lo_rat_detail
};
static const cmmr_br_t __ar_nic_rat_cfg_params = {
    ._name = "AR_NIC_RAT_CFG_PARAMS",
    ._addr = AR_NIC_RAT_CFG_PARAMS,
    ._rval.val = AR_NIC_RAT_CFG_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_CFG_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_CFG_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_CFG_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_CFG_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_CFG_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_CFG_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_CFG_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_CFG_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_CFG_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_CFG_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_CFG_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_cfg_params_detail
};
static const cmmr_br_t __ar_nic_rat_cfg_crdts = {
    ._name = "AR_NIC_RAT_CFG_CRDTS",
    ._addr = AR_NIC_RAT_CFG_CRDTS,
    ._rval.val = AR_NIC_RAT_CFG_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_CFG_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_CFG_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_CFG_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_CFG_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_CFG_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_CFG_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_CFG_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_CFG_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_CFG_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_CFG_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_CFG_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_cfg_crdts_detail
};
static const cmmr_br_t __ar_nic_rat_cfg_timeout_req = {
    ._name = "AR_NIC_RAT_CFG_TIMEOUT_REQ",
    ._addr = AR_NIC_RAT_CFG_TIMEOUT_REQ,
    ._rval.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_CFG_TIMEOUT_REQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_cfg_timeout_req_detail
};
static const cmmr_br_t __ar_nic_rat_cfg_timeout_rsp = {
    ._name = "AR_NIC_RAT_CFG_TIMEOUT_RSP",
    ._addr = AR_NIC_RAT_CFG_TIMEOUT_RSP,
    ._rval.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_CFG_TIMEOUT_RSP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_cfg_timeout_rsp_detail
};
static const cmmr_br_t __ar_nic_rat_err_flg = {
    ._name = "AR_NIC_RAT_ERR_FLG",
    ._addr = AR_NIC_RAT_ERR_FLG,
    ._rval.val = AR_NIC_RAT_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000348811ull,
    ._info = __ar_nic_rat_err_flg_detail
};
static const cmmr_br_t __ar_nic_rat_err_clr = {
    ._name = "AR_NIC_RAT_ERR_CLR",
    ._addr = AR_NIC_RAT_ERR_CLR,
    ._rval.val = AR_NIC_RAT_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000821ull,
    ._info = __ar_nic_rat_err_clr_detail
};
static const cmmr_br_t __ar_nic_rat_err_hss_msk = {
    ._name = "AR_NIC_RAT_ERR_HSS_MSK",
    ._addr = AR_NIC_RAT_ERR_HSS_MSK,
    ._rval.val = AR_NIC_RAT_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000841ull,
    ._info = __ar_nic_rat_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_rat_err_os_msk = {
    ._name = "AR_NIC_RAT_ERR_OS_MSK",
    ._addr = AR_NIC_RAT_ERR_OS_MSK,
    ._rval.val = AR_NIC_RAT_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000881ull,
    ._info = __ar_nic_rat_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_rat_err_first_flg = {
    ._name = "AR_NIC_RAT_ERR_FIRST_FLG",
    ._addr = AR_NIC_RAT_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_RAT_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000c01ull,
    ._info = __ar_nic_rat_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_rat_dbg_crdts = {
    ._name = "AR_NIC_RAT_DBG_CRDTS",
    ._addr = AR_NIC_RAT_DBG_CRDTS,
    ._rval.val = AR_NIC_RAT_DBG_CRDTS_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_DBG_CRDTS_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_DBG_CRDTS_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_DBG_CRDTS_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_DBG_CRDTS_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_DBG_CRDTS_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_DBG_CRDTS_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_DBG_CRDTS_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_DBG_CRDTS_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_DBG_CRDTS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_DBG_CRDTS_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_DBG_CRDTS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_rat_dbg_crdts_detail
};
static const cmmr_br_t __ar_nic_rat_dbg_buf_state = {
    ._name = "AR_NIC_RAT_DBG_BUF_STATE",
    ._addr = AR_NIC_RAT_DBG_BUF_STATE,
    ._rval.val = AR_NIC_RAT_DBG_BUF_STATE_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_DBG_BUF_STATE_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_DBG_BUF_STATE_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_DBG_BUF_STATE_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_DBG_BUF_STATE_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_DBG_BUF_STATE_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_DBG_BUF_STATE_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_DBG_BUF_STATE_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_DBG_BUF_STATE_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_DBG_BUF_STATE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_DBG_BUF_STATE_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_DBG_BUF_STATE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_rat_dbg_buf_state_detail
};
static const cmmr_br_t __ar_nic_rat_dbg_errinj_bus = {
    ._name = "AR_NIC_RAT_DBG_ERRINJ_BUS",
    ._addr = AR_NIC_RAT_DBG_ERRINJ_BUS,
    ._rval.val = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_dbg_errinj_bus_detail
};
static const cmmr_br_t __ar_nic_rat_dbg_errinj_buf = {
    ._name = "AR_NIC_RAT_DBG_ERRINJ_BUF",
    ._addr = AR_NIC_RAT_DBG_ERRINJ_BUF,
    ._rval.val = AR_NIC_RAT_DBG_ERRINJ_BUF_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_DBG_ERRINJ_BUF_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_dbg_errinj_buf_detail
};
static const cmmr_br_t __ar_nic_rat_prf_req_val0 = {
    ._name = "AR_NIC_RAT_PRF_REQ_VAL0",
    ._addr = AR_NIC_RAT_PRF_REQ_VAL0,
    ._rval.val = AR_NIC_RAT_PRF_REQ_VAL0_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_REQ_VAL0_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_REQ_VAL0_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_REQ_VAL0_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_REQ_VAL0_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_REQ_VAL0_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_REQ_VAL0_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_REQ_VAL0_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_REQ_VAL0_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_REQ_VAL0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_REQ_VAL0_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_REQ_VAL0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_req_val0_detail
};
static const cmmr_br_t __ar_nic_rat_prf_req_val1 = {
    ._name = "AR_NIC_RAT_PRF_REQ_VAL1",
    ._addr = AR_NIC_RAT_PRF_REQ_VAL1,
    ._rval.val = AR_NIC_RAT_PRF_REQ_VAL1_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_REQ_VAL1_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_REQ_VAL1_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_REQ_VAL1_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_REQ_VAL1_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_REQ_VAL1_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_REQ_VAL1_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_REQ_VAL1_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_REQ_VAL1_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_REQ_VAL1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_REQ_VAL1_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_REQ_VAL1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_req_val1_detail
};
static const cmmr_br_t __ar_nic_rat_prf_req_val2 = {
    ._name = "AR_NIC_RAT_PRF_REQ_VAL2",
    ._addr = AR_NIC_RAT_PRF_REQ_VAL2,
    ._rval.val = AR_NIC_RAT_PRF_REQ_VAL2_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_REQ_VAL2_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_REQ_VAL2_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_REQ_VAL2_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_REQ_VAL2_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_REQ_VAL2_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_REQ_VAL2_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_REQ_VAL2_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_REQ_VAL2_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_REQ_VAL2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_REQ_VAL2_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_REQ_VAL2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_req_val2_detail
};
static const cmmr_br_t __ar_nic_rat_prf_req_mask0 = {
    ._name = "AR_NIC_RAT_PRF_REQ_MASK0",
    ._addr = AR_NIC_RAT_PRF_REQ_MASK0,
    ._rval.val = AR_NIC_RAT_PRF_REQ_MASK0_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_REQ_MASK0_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_REQ_MASK0_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_REQ_MASK0_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_REQ_MASK0_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_REQ_MASK0_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_REQ_MASK0_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_REQ_MASK0_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_REQ_MASK0_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_REQ_MASK0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_REQ_MASK0_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_REQ_MASK0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_req_mask0_detail
};
static const cmmr_br_t __ar_nic_rat_prf_req_mask1 = {
    ._name = "AR_NIC_RAT_PRF_REQ_MASK1",
    ._addr = AR_NIC_RAT_PRF_REQ_MASK1,
    ._rval.val = AR_NIC_RAT_PRF_REQ_MASK1_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_REQ_MASK1_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_REQ_MASK1_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_REQ_MASK1_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_REQ_MASK1_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_REQ_MASK1_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_REQ_MASK1_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_REQ_MASK1_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_REQ_MASK1_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_REQ_MASK1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_REQ_MASK1_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_REQ_MASK1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_req_mask1_detail
};
static const cmmr_br_t __ar_nic_rat_prf_req_mask2 = {
    ._name = "AR_NIC_RAT_PRF_REQ_MASK2",
    ._addr = AR_NIC_RAT_PRF_REQ_MASK2,
    ._rval.val = AR_NIC_RAT_PRF_REQ_MASK2_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_REQ_MASK2_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_REQ_MASK2_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_REQ_MASK2_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_REQ_MASK2_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_REQ_MASK2_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_REQ_MASK2_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_REQ_MASK2_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_REQ_MASK2_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_REQ_MASK2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_REQ_MASK2_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_REQ_MASK2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_req_mask2_detail
};
static const cmmr_br_t __ar_nic_rat_prf_rsp_val0 = {
    ._name = "AR_NIC_RAT_PRF_RSP_VAL0",
    ._addr = AR_NIC_RAT_PRF_RSP_VAL0,
    ._rval.val = AR_NIC_RAT_PRF_RSP_VAL0_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_RSP_VAL0_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_RSP_VAL0_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_RSP_VAL0_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_RSP_VAL0_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_RSP_VAL0_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_RSP_VAL0_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_RSP_VAL0_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_RSP_VAL0_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_RSP_VAL0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_RSP_VAL0_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_RSP_VAL0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_rsp_val0_detail
};
static const cmmr_br_t __ar_nic_rat_prf_rsp_val1 = {
    ._name = "AR_NIC_RAT_PRF_RSP_VAL1",
    ._addr = AR_NIC_RAT_PRF_RSP_VAL1,
    ._rval.val = AR_NIC_RAT_PRF_RSP_VAL1_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_RSP_VAL1_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_RSP_VAL1_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_RSP_VAL1_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_RSP_VAL1_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_RSP_VAL1_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_RSP_VAL1_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_RSP_VAL1_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_RSP_VAL1_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_RSP_VAL1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_RSP_VAL1_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_RSP_VAL1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_rsp_val1_detail
};
static const cmmr_br_t __ar_nic_rat_prf_rsp_val2 = {
    ._name = "AR_NIC_RAT_PRF_RSP_VAL2",
    ._addr = AR_NIC_RAT_PRF_RSP_VAL2,
    ._rval.val = AR_NIC_RAT_PRF_RSP_VAL2_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_RSP_VAL2_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_RSP_VAL2_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_RSP_VAL2_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_RSP_VAL2_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_RSP_VAL2_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_RSP_VAL2_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_RSP_VAL2_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_RSP_VAL2_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_RSP_VAL2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_RSP_VAL2_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_RSP_VAL2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_rsp_val2_detail
};
static const cmmr_br_t __ar_nic_rat_prf_rsp_mask0 = {
    ._name = "AR_NIC_RAT_PRF_RSP_MASK0",
    ._addr = AR_NIC_RAT_PRF_RSP_MASK0,
    ._rval.val = AR_NIC_RAT_PRF_RSP_MASK0_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_RSP_MASK0_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_RSP_MASK0_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_RSP_MASK0_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_RSP_MASK0_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_RSP_MASK0_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_RSP_MASK0_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_RSP_MASK0_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_RSP_MASK0_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_RSP_MASK0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_RSP_MASK0_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_RSP_MASK0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_rsp_mask0_detail
};
static const cmmr_br_t __ar_nic_rat_prf_rsp_mask1 = {
    ._name = "AR_NIC_RAT_PRF_RSP_MASK1",
    ._addr = AR_NIC_RAT_PRF_RSP_MASK1,
    ._rval.val = AR_NIC_RAT_PRF_RSP_MASK1_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_RSP_MASK1_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_RSP_MASK1_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_RSP_MASK1_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_RSP_MASK1_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_RSP_MASK1_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_RSP_MASK1_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_RSP_MASK1_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_RSP_MASK1_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_RSP_MASK1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_RSP_MASK1_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_RSP_MASK1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_rsp_mask1_detail
};
static const cmmr_br_t __ar_nic_rat_prf_rsp_mask2 = {
    ._name = "AR_NIC_RAT_PRF_RSP_MASK2",
    ._addr = AR_NIC_RAT_PRF_RSP_MASK2,
    ._rval.val = AR_NIC_RAT_PRF_RSP_MASK2_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_RSP_MASK2_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_RSP_MASK2_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_RSP_MASK2_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_RSP_MASK2_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_RSP_MASK2_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_RSP_MASK2_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_RSP_MASK2_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_RSP_MASK2_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_RSP_MASK2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_RSP_MASK2_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_RSP_MASK2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_rsp_mask2_detail
};
static const cmmr_br_t __ar_nic_rat_prf_en = {
    ._name = "AR_NIC_RAT_PRF_EN",
    ._addr = AR_NIC_RAT_PRF_EN,
    ._rval.val = AR_NIC_RAT_PRF_EN_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_EN_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_EN_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_EN_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_EN_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_EN_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_EN_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_EN_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_EN_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_EN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_EN_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_EN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_rat_prf_en_detail
};
static const cmmr_br_t __ar_nic_rat_prf_req_stall_duration = {
    ._name = "AR_NIC_RAT_PRF_REQ_STALL_DURATION",
    ._addr = AR_NIC_RAT_PRF_REQ_STALL_DURATION,
    ._rval.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_REQ_STALL_DURATION_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rat_prf_req_stall_duration_detail
};
static const cmmr_br_t __ar_nic_rat_prf_rsp_stall_duration = {
    ._name = "AR_NIC_RAT_PRF_RSP_STALL_DURATION",
    ._addr = AR_NIC_RAT_PRF_RSP_STALL_DURATION,
    ._rval.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_RSP_STALL_DURATION_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rat_prf_rsp_stall_duration_detail
};
static const cmmr_br_t __ar_nic_rat_prf_req_bytes_rcvd = {
    ._name = "AR_NIC_RAT_PRF_REQ_BYTES_RCVD",
    ._addr = AR_NIC_RAT_PRF_REQ_BYTES_RCVD,
    ._rval.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_RSTDATA,
    ._rmsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_RSTMASK,
    ._wrmsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_WRTMASK,
    ._rdmsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_RDMASK,
    ._xsmsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_XSMASK,
    ._wsemsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_WSEMASK,
    ._rsemsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_RSEMASK,
    ._w1smsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_W1SMASK,
    ._w1cmsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_W1CMASK,
    ._wrstmsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_HWWMASK,
    ._hwrmsk.val = AR_NIC_RAT_PRF_REQ_BYTES_RCVD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_rat_prf_req_bytes_rcvd_detail
};

/*
 *  INSTALL AR RAT MMRS
 */
static const cmmr_br_t* __ar_rat_mmrs[] = {
    &__ar_nic_rat_cfg_link_active,
    &__ar_nic_rat_cfg_params,
    &__ar_nic_rat_cfg_crdts,
    &__ar_nic_rat_cfg_timeout_req,
    &__ar_nic_rat_cfg_timeout_rsp,
    &__ar_nic_rat_err_flg,
    &__ar_nic_rat_err_clr,
    &__ar_nic_rat_err_hss_msk,
    &__ar_nic_rat_err_os_msk,
    &__ar_nic_rat_err_first_flg,
    &__ar_nic_rat_dbg_crdts,
    &__ar_nic_rat_dbg_buf_state,
    &__ar_nic_rat_dbg_errinj_bus,
    &__ar_nic_rat_dbg_errinj_buf,
    &__ar_nic_rat_prf_req_val0,
    &__ar_nic_rat_prf_req_val1,
    &__ar_nic_rat_prf_req_val2,
    &__ar_nic_rat_prf_req_mask0,
    &__ar_nic_rat_prf_req_mask1,
    &__ar_nic_rat_prf_req_mask2,
    &__ar_nic_rat_prf_rsp_val0,
    &__ar_nic_rat_prf_rsp_val1,
    &__ar_nic_rat_prf_rsp_val2,
    &__ar_nic_rat_prf_rsp_mask0,
    &__ar_nic_rat_prf_rsp_mask1,
    &__ar_nic_rat_prf_rsp_mask2,
    &__ar_nic_rat_prf_en,
    &__ar_nic_rat_prf_req_stall_duration,
    &__ar_nic_rat_prf_rsp_stall_duration,
    &__ar_nic_rat_prf_req_bytes_rcvd,
    NULL
};

/*
 *  INSTALL AR RAT LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_rat_enc_mmrs[] = {
    &__ar_nic_rat_rat_mmr_ring_0_hi_rat,
    &__ar_nic_rat_rat_mmr_ring_0_mid_rat,
    &__ar_nic_rat_rat_mmr_ring_0_lo_rat,
    &__ar_nic_rat_err_flg_1_hi_rat,
    &__ar_nic_rat_err_flg_1_mid_rat,
    &__ar_nic_rat_err_flg_1_lo_rat,
    &__ar_nic_rat_rat_wc_rsp_flit_2_hi_rat,
    &__ar_nic_rat_rat_wc_rsp_flit_2_mid_rat,
    &__ar_nic_rat_rat_wc_rsp_flit_2_lo_rat,
    &__ar_nic_rat_rat_rmt_req_flit_3_hi_rat,
    &__ar_nic_rat_rat_rmt_req_flit_3_mid_rat,
    &__ar_nic_rat_rat_rmt_req_flit_3_lo_rat,
    &__ar_nic_rat_rat_ce_req_flit_4_hi_rat,
    &__ar_nic_rat_rat_ce_req_flit_4_mid_rat,
    &__ar_nic_rat_rat_ce_req_flit_4_lo_rat,
    &__ar_nic_rat_nl_nic_req_flit_5_hi_rat,
    &__ar_nic_rat_nl_nic_req_flit_5_mid_rat,
    &__ar_nic_rat_nl_nic_req_flit_5_lo_rat,
    &__ar_nic_rat_rat_rdy_vecs_6_hi_rat,
    &__ar_nic_rat_rat_rdy_vecs_6_mid_rat,
    &__ar_nic_rat_rat_rdy_vecs_6_lo_rat,
    &__ar_nic_rat_rat_free_vld_vecs_7_hi_rat,
    &__ar_nic_rat_rat_free_vld_vecs_7_mid_rat,
    &__ar_nic_rat_rat_free_vld_vecs_7_lo_rat,
    &__ar_nic_rat_rat_vbuf_class_vecs_8_hi_rat,
    &__ar_nic_rat_rat_vbuf_class_vecs_8_mid_rat,
    &__ar_nic_rat_rat_vbuf_class_vecs_8_lo_rat,
    &__ar_nic_rat_rat_buffer_state_9_hi_rat,
    &__ar_nic_rat_rat_buffer_state_9_mid_rat,
    &__ar_nic_rat_rat_buffer_state_9_lo_rat,
    &__ar_nic_rat_rat_power_down_ff_hi_rat,
    &__ar_nic_rat_rat_power_down_ff_mid_rat,
    &__ar_nic_rat_rat_power_down_ff_lo_rat,
    NULL
};

#endif
