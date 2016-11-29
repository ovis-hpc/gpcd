/******************************************************************************
 * COPYRIGHT CRAY INC. ar_orb_detailed_mmrs_h.h
 * FILE: ar_orb_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:02 2014
 ******************************************************************************/
/**
 * @file ar_orb_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:02 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_orb_mmr_values.h and ar_orb_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_orb_mmr_values.h"

#ifndef _AR_ORB_DETAILED_MMRS_H_H_
#define _AR_ORB_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_orb_mmrs[];	/* ORB Array */

/*
 *  AR ORB MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_orb_cfg_params_detail[] = {
    { ._name = "DISABLE_RSP_ECC_GEN",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_DISABLE_RSP_ECC_GEN_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_DISABLE_RSP_ECC_GEN_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_DISABLE_RSP_ECC_GEN_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_DISABLE_RSP_ECC_GEN_QW,
      ._desc = "If set to 1'b1, disables check-bit and parity generation for response flits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DISABLE_RSP_ECC_CHK",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_DISABLE_RSP_ECC_CHK_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_DISABLE_RSP_ECC_CHK_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_DISABLE_RSP_ECC_CHK_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_DISABLE_RSP_ECC_CHK_QW,
      ._desc = "If set to 1'b1, disables SECDED and parity checking and correction for response flits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DISABLE_REQ_ECC_GEN",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_DISABLE_REQ_ECC_GEN_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_DISABLE_REQ_ECC_GEN_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_DISABLE_REQ_ECC_GEN_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_DISABLE_REQ_ECC_GEN_QW,
      ._desc = "If set to 1'b1, disables parity generation for request flits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DISABLE_REQ_ECC_CHK",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_DISABLE_REQ_ECC_CHK_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_DISABLE_REQ_ECC_CHK_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_DISABLE_REQ_ECC_CHK_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_DISABLE_REQ_ECC_CHK_QW,
      ._desc = "If set to 1'b1, disables SECDED and parity checking and correction for request flits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REQ_FIFO_DQ_CRDT_MIN",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_REQ_FIFO_DQ_CRDT_MIN_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_REQ_FIFO_DQ_CRDT_MIN_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_REQ_FIFO_DQ_CRDT_MIN_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_REQ_FIFO_DQ_CRDT_MIN_QW,
      ._desc = "The minimum number of credits that must be available on the ORB to NL interface before the ORB dequeues a packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SF_REQ_FIFO_EN",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_SF_REQ_FIFO_EN_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_SF_REQ_FIFO_EN_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_SF_REQ_FIFO_EN_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_SF_REQ_FIFO_EN_QW,
      ._desc = "If set to 1'b1, forces the Request FIFO to wait for an entire packet to be in the queue before proceeding",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MAX_PID_CNT",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_MAX_PID_CNT_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_MAX_PID_CNT_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_MAX_PID_CNT_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_MAX_PID_CNT_QW,
      ._desc = "The maximum number of pktIDs allowed to be in use",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LATENCY_CNTR_STEP_SIZE",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_LATENCY_CNTR_STEP_SIZE_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_LATENCY_CNTR_STEP_SIZE_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_LATENCY_CNTR_STEP_SIZE_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_LATENCY_CNTR_STEP_SIZE_QW,
      ._desc = "This register selects the rate at which the ORB Latency Counter increments",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ORB_TO_RAT_CRDTS",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_ORB_TO_RAT_CRDTS_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_ORB_TO_RAT_CRDTS_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_ORB_TO_RAT_CRDTS_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_ORB_TO_RAT_CRDTS_QW,
      ._desc = "The maximum number of credits on the ORB-to-RAT interface",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ORB_TO_NL_CRDTS",
      ._bpos = AR_NIC_ORB_CFG_PARAMS_ORB_TO_NL_CRDTS_BP,
      ._mask = AR_NIC_ORB_CFG_PARAMS_ORB_TO_NL_CRDTS_MASK,
      ._rval = AR_NIC_ORB_CFG_PARAMS_RSTDATA & AR_NIC_ORB_CFG_PARAMS_ORB_TO_NL_CRDTS_MASK,
      ._index = AR_NIC_ORB_CFG_PARAMS_ORB_TO_NL_CRDTS_QW,
      ._desc = "The maximum number of credits on the ORB-to-NL interface",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_detail[] = {
    { ._name = "UNUSED_145_82",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_UNUSED_145_82_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_UNUSED_145_82_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_UNUSED_145_82_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_UNUSED_145_82_QW,
      ._desc = "Reserved",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_detail[] = {
    { ._name = "UNUSED_127_110",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_UNUSED_127_110_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_UNUSED_127_110_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_UNUSED_127_110_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_UNUSED_127_110_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ILLEGAL_LSTATUS",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ILLEGAL_LSTATUS_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ILLEGAL_LSTATUS_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ILLEGAL_LSTATUS_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ILLEGAL_LSTATUS_QW,
      ._desc = "Illegal Local Status in Response Packet Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ILLEGAL_PKTID",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ILLEGAL_PKTID_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ILLEGAL_PKTID_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ILLEGAL_PKTID_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ILLEGAL_PKTID_QW,
      ._desc = "Illegal Packet ID in Response Packet Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_CMD_MISMATCH_QW,
      ._desc = "Command Mismatch Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NO_ENTRY",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NO_ENTRY_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NO_ENTRY_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NO_ENTRY_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NO_ENTRY_QW,
      ._desc = "No Entry in ORD Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_SCRUB_CNT",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_SCRUB_CNT_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_SCRUB_CNT_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_SCRUB_CNT_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_SCRUB_CNT_QW,
      ._desc = "ORB Scrub Entry Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ORD_MBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_MBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_MBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_MBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_MBE_QW,
      ._desc = "ORB Outstanding Request Data RAM MBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ORD_SBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_SBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_SBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_SBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_SBE_QW,
      ._desc = "ORB Outstanding Request Data RAM SBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_FIFO_SPKT",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_SPKT_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_SPKT_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_SPKT_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_SPKT_QW,
      ._desc = "Response FIFO Super Packet Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_FIFO_PE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_PE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_PE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_PE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_PE_QW,
      ._desc = "ORB Response FIFO PE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_FIFO_MBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_MBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_MBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_MBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_MBE_QW,
      ._desc = "ORB Response FIFO MBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_FIFO_SBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_SBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_SBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_SBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FIFO_SBE_QW,
      ._desc = "ORB Response FIFO SBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_FIFO_PE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_PE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_PE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_PE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_PE_QW,
      ._desc = "ORB Request FIFO PE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_FIFO_MBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_MBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_MBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_MBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_MBE_QW,
      ._desc = "ORB Request FIFO MBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_FIFO_SBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_SBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_SBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_SBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FIFO_SBE_QW,
      ._desc = "ORB Request FIFO SBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTT_MBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_PTT_MBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_PTT_MBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_PTT_MBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_PTT_MBE_QW,
      ._desc = "ORB PTT MBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_PTT_SBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_PTT_SBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_PTT_SBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_PTT_SBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_PTT_SBE_QW,
      ._desc = "ORB PTT SBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NTT_MBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NTT_MBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NTT_MBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NTT_MBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NTT_MBE_QW,
      ._desc = "ORB NTT MBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_NTT_SBE",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NTT_SBE_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NTT_SBE_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NTT_SBE_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_NTT_SBE_QW,
      ._desc = "ORB NTT SBE Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_ORD_RAM_READ",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_RAM_READ_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_RAM_READ_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_RAM_READ_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_ORD_RAM_READ_QW,
      ._desc = "ORB Response Packets read from ORD Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_BLOCKED_PKT_GEN",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_BLOCKED_PKT_GEN_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_BLOCKED_PKT_GEN_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_BLOCKED_PKT_GEN_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_BLOCKED_PKT_GEN_QW,
      ._desc = "ORB Response Blocked due to GET Packet Generation Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_BLOCKED",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_BLOCKED_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_BLOCKED_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_BLOCKED_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_BLOCKED_QW,
      ._desc = "ORB Response Blocked Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_STALLED",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_STALLED_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_STALLED_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_STALLED_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_STALLED_QW,
      ._desc = "ORB Response Stalled Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_PKTS",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_PKTS_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_PKTS_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_PKTS_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_PKTS_QW,
      ._desc = "ORB Response Packets Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_FLITS",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FLITS_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FLITS_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FLITS_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_FLITS_QW,
      ._desc = "ORB Response Flits Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_RSP_NET_TRACK",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_NET_TRACK_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_NET_TRACK_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_NET_TRACK_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_RSP_NET_TRACK_QW,
      ._desc = "ORB Response Packets Tracked Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_STALLED",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_STALLED_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_STALLED_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_STALLED_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_STALLED_QW,
      ._desc = "ORB Request Stalled Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_PKTS",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_PKTS_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_PKTS_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_PKTS_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_PKTS_QW,
      ._desc = "ORB Request Packets Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNTR_REQ_FLITS",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FLITS_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FLITS_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FLITS_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_CNTR_REQ_FLITS_QW,
      ._desc = "ORB Request Flits Event Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_81_35",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_UNUSED_81_35_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_UNUSED_81_35_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_UNUSED_81_35_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_UNUSED_81_35_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_mmr_ring_0_lo_orb_detail[] = {
    { ._name = "UNUSED_81_35",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_UNUSED_81_35_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_UNUSED_81_35_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_UNUSED_81_35_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_UNUSED_81_35_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ORB_PI_OS_IRQ",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_PI_OS_IRQ_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_PI_OS_IRQ_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_PI_OS_IRQ_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_PI_OS_IRQ_QW,
      ._desc = "PI OS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ORB_LB_HSS_IRQ",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_LB_HSS_IRQ_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_LB_HSS_IRQ_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_LB_HSS_IRQ_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_LB_HSS_IRQ_QW,
      ._desc = "Local Block HSS Interrupt Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ORB_NETMON_RING_WRACK",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_NETMON_RING_WRACK_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_NETMON_RING_WRACK_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_NETMON_RING_WRACK_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_NETMON_RING_WRACK_QW,
      ._desc = "NETMON Write Acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ORB_NETMON_RING_15_0",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_NETMON_RING_15_0_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_NETMON_RING_15_0_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_NETMON_RING_15_0_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_R_Q_ORB_NETMON_RING_15_0_QW,
      ._desc = "NETMON Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NETMON_ORB_RING_15_0",
      ._bpos = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_I_NETMON_ORB_RING_15_0_BP,
      ._mask = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_I_NETMON_ORB_RING_15_0_MASK,
      ._rval = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_I_NETMON_ORB_RING_15_0_MASK,
      ._index = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_I_NETMON_ORB_RING_15_0_QW,
      ._desc = "NETMON Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_flg_1_hi_orb_detail[] = {
    { ._name = "UNUSED_145_128",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_HI_ORB_UNUSED_145_128_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_HI_ORB_UNUSED_145_128_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ERR_FLG_1_HI_ORB_UNUSED_145_128_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_HI_ORB_UNUSED_145_128_QW,
      ._desc = "Not used",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_flg_1_mid_orb_detail[] = {
    { ._name = "UNUSED_127_92",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_UNUSED_127_92_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_UNUSED_127_92_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_UNUSED_127_92_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_UNUSED_127_92_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_MBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_MBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_MBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_MBE_PTT_QW,
      ._desc = "PTT Multiple Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_SBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_SBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_SBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_SBE_PTT_QW,
      ._desc = "PTT Single Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_MBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_MBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_MBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_MBE_NTT_QW,
      ._desc = "NTT Multiple Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_SBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_SBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_SBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_SBE_NTT_QW,
      ._desc = "NTT Single Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "FR_CHK",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_FR_CHK_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_FR_CHK_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_FR_CHK_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_FR_CHK_QW,
      ._desc = "Set when the Flagged Response bit of an FMA request is set and the address is not dword aligned or when the Flagged Response bit of an FMA request is set and the amount of data crosses a cache line boundary",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TAIL_ON_HEAD",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_TAIL_ON_HEAD_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_TAIL_ON_HEAD_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_TAIL_ON_HEAD_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_TAIL_ON_HEAD_QW,
      ._desc = "Set when there is a tail bit set on a header for a request packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NL_CRDT_UNF",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_NL_CRDT_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_NL_CRDT_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_NL_CRDT_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_NL_CRDT_UNF_QW,
      ._desc = "Set when there is an underflow in the credits between the ORB (sender) and NL (receiver)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_MBE_QW,
      ._desc = "Set when a Multi-bit Error occurs on a data flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_SBE_QW,
      ._desc = "Set when a Single Bit Error occurs on a data flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_PE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_PE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_PE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_PE_QW,
      ._desc = "Set when a Parity Error occurs on a header flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_SPKT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_SPKT_QW,
      ._desc = "Set when there is a super packet (a header flit followed by more than four data flits) coming into the Request Control Logic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_UNF",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_UNF_QW,
      ._desc = "Set when an underflow in the Request FIFO occurs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQ_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_REQ_FIFO_OVF_QW,
      ._desc = "Set when an overflow in the Request FIFO occurs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORD_SBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_SBE_QW,
      ._desc = "Set when there is a single bit error in the ORD RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORD_MBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_MBE_QW,
      ._desc = "Set when there is a multi-bit error in the ORD RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORD_TIMEOUT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_TIMEOUT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_TIMEOUT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_TIMEOUT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_TIMEOUT_QW,
      ._desc = "Set when an entry in the ORD RAM times out due to a lack of a response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORD_SCRUB",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_SCRUB_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_SCRUB_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_SCRUB_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ORD_SCRUB_QW,
      ._desc = "Set when an entry in the ORD RAM times out due to lack of a response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_FLIT_CNT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_FLIT_CNT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_FLIT_CNT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_FLIT_CNT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_FLIT_CNT_QW,
      ._desc = "Set when the number of flits in a response packet does not match the number of expected flits (based on the byte count stored in the ORB Data RAM)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_MBE_QW,
      ._desc = "Set when a Multi-bit Error occurs on a data flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_SBE_QW,
      ._desc = "Set when a Single Bit Error occurs on a data flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_PE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_PE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_PE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_PE_QW,
      ._desc = "Set when a Parity Error occurs on a header flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_SPKT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_SPKT_QW,
      ._desc = "Set when there is a super packet (a header flit followed by more than four data flits) coming into the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RSP_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSP_FIFO_OVF_QW,
      ._desc = "Set when an overflow in the Response FIFO occurs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ILLEGAL_RSP_LSTAT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ILLEGAL_RSP_LSTAT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ILLEGAL_RSP_LSTAT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_ILLEGAL_RSP_LSTAT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ILLEGAL_RSP_LSTAT_QW,
      ._desc = "Set when there is a local status of an incoming response packet not set to 6'b0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ILLEGAL_RSP_PID",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ILLEGAL_RSP_PID_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ILLEGAL_RSP_PID_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_ILLEGAL_RSP_PID_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_ILLEGAL_RSP_PID_QW,
      ._desc = "Set when the upper two bits of the packet ID (pktID) value of an incoming response packet is not set to 2'b00",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_CMD_MISMATCH_QW,
      ._desc = "Set when a response packet comes into the Response FIFO that does not have the same type of command (GET, PUT, or Fetching AMO) as the corresponding request entry in the ORD and the remote status (rstatus) does not indicate an invalid command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NO_ENTRY_IN_ORD",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_NO_ENTRY_IN_ORD_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_NO_ENTRY_IN_ORD_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_NO_ENTRY_IN_ORD_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_NO_ENTRY_IN_ORD_QW,
      ._desc = "Set when a response packet comes into the Response FIFO for which there is no corresponding request in the ORD RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_MID_ORB_DIAG_ONLY_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_MID_ORB_DIAG_ONLY_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ERR_FLG_1_MID_ORB_DIAG_ONLY_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_MID_ORB_DIAG_ONLY_QW,
      ._desc = "Reserved for the purpose of inserting a ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_flg_1_lo_orb_detail[] = {
    { ._name = "UNUSED_63_28",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_UNUSED_63_28_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_UNUSED_63_28_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_UNUSED_63_28_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_UNUSED_63_28_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_MBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_MBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_MBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_MBE_PTT_QW,
      ._desc = "PTT Multiple Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_SBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_SBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_SBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_SBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_SBE_PTT_QW,
      ._desc = "PTT Single Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_MBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_MBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_MBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_MBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_MBE_NTT_QW,
      ._desc = "NTT Multiple Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_SBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_SBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_SBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_SBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_SBE_NTT_QW,
      ._desc = "NTT Single Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_FR_CHK",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_FR_CHK_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_FR_CHK_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_FR_CHK_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_FR_CHK_QW,
      ._desc = "Set when the Flagged Response bit of an FMA request is set and the address is not dword aligned or when the Flagged Response bit of an FMA request is set and the amount of data crosses a cache line boundary",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_TAIL_ON_HEAD",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_TAIL_ON_HEAD_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_TAIL_ON_HEAD_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_TAIL_ON_HEAD_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_TAIL_ON_HEAD_QW,
      ._desc = "Set when there is a tail bit set on a header for a request packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NL_CRDT_UNF",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_NL_CRDT_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_NL_CRDT_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_NL_CRDT_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_NL_CRDT_UNF_QW,
      ._desc = "Set when there is an underflow in the credits between the ORB (sender) and NL (receiver)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_MBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_MBE_QW,
      ._desc = "Set when a Multi-bit Error occurs on a data flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_SBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_SBE_QW,
      ._desc = "Set when a Single Bit Error occurs on a data flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_PE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_PE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_PE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_PE_QW,
      ._desc = "Set when a Parity Error occurs on a header flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_SPKT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_SPKT_QW,
      ._desc = "Set when there is a super packet (a header flit followed by more than four data flits) coming into the Request Control Logic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_UNF",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_UNF_QW,
      ._desc = "Set when an underflow in the Request FIFO occurs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_REQ_FIFO_OVF_QW,
      ._desc = "Set when an overflow in the Request FIFO occurs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ORD_SBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_SBE_QW,
      ._desc = "Set when there is a single bit error in the ORD RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ORD_MBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_MBE_QW,
      ._desc = "Set when there is a multi-bit error in the ORD RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ORD_TIMEOUT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_TIMEOUT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_TIMEOUT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_TIMEOUT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_TIMEOUT_QW,
      ._desc = "Set when an entry in the ORD RAM times out due to a lack of a response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ORD_SCRUB",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_SCRUB_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_SCRUB_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_SCRUB_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ORD_SCRUB_QW,
      ._desc = "Set when an entry in the ORD RAM times out due to lack of a response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_FLIT_CNT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_FLIT_CNT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_FLIT_CNT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_FLIT_CNT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_FLIT_CNT_QW,
      ._desc = "Set when the number of flits in a response packet does not match the number of expected flits (based on the byte count stored in the ORB Data RAM)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_MBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_MBE_QW,
      ._desc = "Set when a Multi-bit Error occurs on a data flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_SBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_SBE_QW,
      ._desc = "Set when a Single Bit Error occurs on a data flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_PE",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_PE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_PE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_PE_QW,
      ._desc = "Set when a Parity Error occurs on a header flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_SPKT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_SPKT_QW,
      ._desc = "Set when there is a super packet (a header flit followed by more than four data flits) coming into the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_RSP_FIFO_OVF_QW,
      ._desc = "Set when an overflow in the Response FIFO occurs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ILLEGAL_RSP_LSTAT",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ILLEGAL_RSP_LSTAT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ILLEGAL_RSP_LSTAT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ILLEGAL_RSP_LSTAT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ILLEGAL_RSP_LSTAT_QW,
      ._desc = "Set when there is a local status of an incoming response packet not set to 6'b0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_ILLEGAL_RSP_PID",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ILLEGAL_RSP_PID_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ILLEGAL_RSP_PID_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ILLEGAL_RSP_PID_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_ILLEGAL_RSP_PID_QW,
      ._desc = "Set when the upper two bits of the packet ID (pktID) value of an incoming response packet is not set to 2'b00",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_CMD_MISMATCH_QW,
      ._desc = "Set when a response packet comes into the Response FIFO that does not have the same type of command (GET, PUT, or Fetching AMO) as the corresponding request entry in the ORD and the remote status (rstatus) does not indicate an invalid command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NO_ENTRY_IN_ORD",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_NO_ENTRY_IN_ORD_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_NO_ENTRY_IN_ORD_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_NO_ENTRY_IN_ORD_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_I_NO_ENTRY_IN_ORD_QW,
      ._desc = "Set when a response packet comes into the Response FIFO for which there is no corresponding request in the ORD RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_0",
      ._bpos = AR_NIC_ORB_ERR_FLG_1_LO_ORB_UNUSED_0_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_1_LO_ORB_UNUSED_0_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA & AR_NIC_ORB_ERR_FLG_1_LO_ORB_UNUSED_0_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_1_LO_ORB_UNUSED_0_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_detail[] = {
    { ._name = "NL_NIC_RSP_SB",
      ._bpos = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_NL_NIC_RSP_SB_BP,
      ._mask = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_NL_NIC_RSP_SB_MASK,
      ._rval = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_NL_NIC_RSP_SB_MASK,
      ._index = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_NL_NIC_RSP_SB_QW,
      ._desc = "NL Response Flit Sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NL_NIC_RSP_FLIT",
      ._bpos = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_NL_NIC_RSP_FLIT_BP,
      ._mask = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_NL_NIC_RSP_FLIT_MASK,
      ._rval = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_NL_NIC_RSP_FLIT_MASK,
      ._index = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_NL_NIC_RSP_FLIT_QW,
      ._desc = "NL Response Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_detail[] = {
    { ._name = "NL_NIC_RSP_FLIT",
      ._bpos = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_NL_NIC_RSP_FLIT_BP,
      ._mask = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_NL_NIC_RSP_FLIT_MASK,
      ._rval = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_NL_NIC_RSP_FLIT_MASK,
      ._index = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_NL_NIC_RSP_FLIT_QW,
      ._desc = "NL Response Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_nl_orb_rsp_flit_2_lo_orb_detail[] = {
    { ._name = "NL_NIC_RSP_FLIT",
      ._bpos = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_NL_NIC_RSP_FLIT_BP,
      ._mask = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_NL_NIC_RSP_FLIT_MASK,
      ._rval = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_RSTDATA & AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_NL_NIC_RSP_FLIT_MASK,
      ._index = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_NL_NIC_RSP_FLIT_QW,
      ._desc = "NL Response Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_detail[] = {
    { ._name = "NIC_NL_REQ_SB",
      ._bpos = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_NIC_NL_REQ_SB_BP,
      ._mask = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_NIC_NL_REQ_SB_MASK,
      ._rval = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_NIC_NL_REQ_SB_MASK,
      ._index = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_NIC_NL_REQ_SB_QW,
      ._desc = "NL Request Flit Sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NIC_NL_REQ_FLIT",
      ._bpos = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_NIC_NL_REQ_FLIT_BP,
      ._mask = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_NIC_NL_REQ_FLIT_MASK,
      ._rval = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_NIC_NL_REQ_FLIT_MASK,
      ._index = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_NIC_NL_REQ_FLIT_QW,
      ._desc = "NL Request Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_detail[] = {
    { ._name = "NIC_NL_REQ_FLIT",
      ._bpos = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_NIC_NL_REQ_FLIT_BP,
      ._mask = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_NIC_NL_REQ_FLIT_MASK,
      ._rval = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_NIC_NL_REQ_FLIT_MASK,
      ._index = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_NIC_NL_REQ_FLIT_QW,
      ._desc = "NL Request Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_nl_req_flit_3_lo_orb_detail[] = {
    { ._name = "NIC_NL_REQ_FLIT",
      ._bpos = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_NIC_NL_REQ_FLIT_BP,
      ._mask = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_NIC_NL_REQ_FLIT_MASK,
      ._rval = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_NIC_NL_REQ_FLIT_MASK,
      ._index = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_NIC_NL_REQ_FLIT_QW,
      ._desc = "NL Request Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_detail[] = {
    { ._name = "ORB_RAT_RSP_SB",
      ._bpos = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_ORB_RAT_RSP_SB_BP,
      ._mask = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_ORB_RAT_RSP_SB_MASK,
      ._rval = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_ORB_RAT_RSP_SB_MASK,
      ._index = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_ORB_RAT_RSP_SB_QW,
      ._desc = "RAT Response Flit Sideband",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ORB_RAT_RSP_FLIT",
      ._bpos = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_ORB_RAT_RSP_FLIT_BP,
      ._mask = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_ORB_RAT_RSP_FLIT_MASK,
      ._rval = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_ORB_RAT_RSP_FLIT_MASK,
      ._index = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_ORB_RAT_RSP_FLIT_QW,
      ._desc = "RAT Response Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_detail[] = {
    { ._name = "ORB_RAT_RSP_FLIT",
      ._bpos = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_ORB_RAT_RSP_FLIT_BP,
      ._mask = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_ORB_RAT_RSP_FLIT_MASK,
      ._rval = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_ORB_RAT_RSP_FLIT_MASK,
      ._index = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_ORB_RAT_RSP_FLIT_QW,
      ._desc = "RAT Response Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_rat_rsp_flit_4_lo_orb_detail[] = {
    { ._name = "ORB_RAT_RSP_FLIT",
      ._bpos = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_ORB_RAT_RSP_FLIT_BP,
      ._mask = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_ORB_RAT_RSP_FLIT_MASK,
      ._rval = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_ORB_RAT_RSP_FLIT_MASK,
      ._index = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_ORB_RAT_RSP_FLIT_QW,
      ._desc = "RAT Response Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_detail[] = {
    { ._name = "UNUSED_145_29",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_UNUSED_145_29_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_UNUSED_145_29_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_UNUSED_145_29_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_UNUSED_145_29_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_detail[] = {
    { ._name = "UNUSED_145_29",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_UNUSED_145_29_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_UNUSED_145_29_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_UNUSED_145_29_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_UNUSED_145_29_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_crdts_acks_5_lo_orb_detail[] = {
    { ._name = "UNUSED_145_29",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_145_29_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_145_29_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_145_29_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_145_29_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_ORB_SSID_REQ_ACK",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_R_Q_ORB_SSID_REQ_ACK_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_R_Q_ORB_SSID_REQ_ACK_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_R_Q_ORB_SSID_REQ_ACK_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_R_Q_ORB_SSID_REQ_ACK_QW,
      ._desc = "SSID request packet acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_27_25",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_27_25_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_27_25_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_27_25_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_27_25_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "R_Q_NIC_NL_RSP_ACK",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_R_Q_NIC_NL_RSP_ACK_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_R_Q_NIC_NL_RSP_ACK_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_R_Q_NIC_NL_RSP_ACK_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_R_Q_NIC_NL_RSP_ACK_QW,
      ._desc = "NL response packet acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_23_21",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_23_21_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_23_21_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_23_21_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_23_21_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NL_NIC_REQ_ACK",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_I_NL_NIC_REQ_ACK_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_I_NL_NIC_REQ_ACK_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_I_NL_NIC_REQ_ACK_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_I_NL_NIC_REQ_ACK_QW,
      ._desc = "NL request packet acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_NL_OUT_CRDTS",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_Q_ORB_NL_OUT_CRDTS_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_Q_ORB_NL_OUT_CRDTS_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_Q_ORB_NL_OUT_CRDTS_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_Q_ORB_NL_OUT_CRDTS_QW,
      ._desc = "Number of credits outstanding to NL",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_11_9",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_11_9_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_11_9_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_11_9_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_UNUSED_11_9_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RAT_ORB_RSP_ACK",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_I_RAT_ORB_RSP_ACK_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_I_RAT_ORB_RSP_ACK_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_I_RAT_ORB_RSP_ACK_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_I_RAT_ORB_RSP_ACK_QW,
      ._desc = "RAT response packet acknowledge",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORB_RAT_OUT_CRDTS",
      ._bpos = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_Q_ORB_RAT_OUT_CRDTS_BP,
      ._mask = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_Q_ORB_RAT_OUT_CRDTS_MASK,
      ._rval = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_Q_ORB_RAT_OUT_CRDTS_MASK,
      ._index = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_Q_ORB_RAT_OUT_CRDTS_QW,
      ._desc = "Number of credits outstanding to the RAT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_prf_trk_6_hi_orb_detail[] = {
    { ._name = "UNUSED_145_84",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_UNUSED_145_84_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_UNUSED_145_84_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_UNUSED_145_84_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_UNUSED_145_84_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_prf_trk_6_mid_orb_detail[] = {
    { ._name = "UNUSED_145_84",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_UNUSED_145_84_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_UNUSED_145_84_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_UNUSED_145_84_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_UNUSED_145_84_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LATENCY_CNTR_SUB_CNT",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_Q_LATENCY_CNTR_SUB_CNT_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_Q_LATENCY_CNTR_SUB_CNT_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_Q_LATENCY_CNTR_SUB_CNT_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_Q_LATENCY_CNTR_SUB_CNT_QW,
      ._desc = "Latency counter count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_prf_trk_6_lo_orb_detail[] = {
    { ._name = "Q_LATENCY_CNTR_SUB_CNT",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_Q_LATENCY_CNTR_SUB_CNT_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_Q_LATENCY_CNTR_SUB_CNT_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_Q_LATENCY_CNTR_SUB_CNT_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_Q_LATENCY_CNTR_SUB_CNT_QW,
      ._desc = "Latency counter count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_LATENCY_TIMECNT",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_Q_LATENCY_TIMECNT_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_Q_LATENCY_TIMECNT_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_Q_LATENCY_TIMECNT_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_Q_LATENCY_TIMECNT_QW,
      ._desc = "Time stamp that gets assigned to requests and responses for performance tracking",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_39_38",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_39_38_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_39_38_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_39_38_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_39_38_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_FLIT_BYTE_CNT_EN",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_RSP_FLIT_BYTE_CNT_EN_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_RSP_FLIT_BYTE_CNT_EN_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_RSP_FLIT_BYTE_CNT_EN_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_RSP_FLIT_BYTE_CNT_EN_QW,
      ._desc = "Response flit byte count enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_FLIT_BYTE_CNT_EN",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_REQ_FLIT_BYTE_CNT_EN_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_REQ_FLIT_BYTE_CNT_EN_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_REQ_FLIT_BYTE_CNT_EN_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_REQ_FLIT_BYTE_CNT_EN_QW,
      ._desc = "Request flit byte count enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_35",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_35_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_35_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_35_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_35_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_RSP_FLIT_BYTE_CNT",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_RSP_FLIT_BYTE_CNT_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_RSP_FLIT_BYTE_CNT_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_RSP_FLIT_BYTE_CNT_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_RSP_FLIT_BYTE_CNT_QW,
      ._desc = "Value to be added to response byte count if enabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_27",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_27_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_27_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_27_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_27_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_REQ_FLIT_BYTE_CNT",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_REQ_FLIT_BYTE_CNT_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_REQ_FLIT_BYTE_CNT_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_REQ_FLIT_BYTE_CNT_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_REQ_FLIT_BYTE_CNT_QW,
      ._desc = "Value to be added to request byte count if enabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_19_17",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_19_17_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_19_17_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_19_17_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_UNUSED_19_17_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NET_RSP_TRK_EN",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_NET_RSP_TRK_EN_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_NET_RSP_TRK_EN_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_NET_RSP_TRK_EN_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_NET_RSP_TRK_EN_QW,
      ._desc = "Network response track enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_NET_RSP_LATENCY",
      ._bpos = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_NET_RSP_LATENCY_BP,
      ._mask = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_NET_RSP_LATENCY_MASK,
      ._rval = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_NET_RSP_LATENCY_MASK,
      ._index = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_I_NET_RSP_LATENCY_QW,
      ._desc = "Value to be added to histograms if enabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_detail[] = {
    { ._name = "UNUSED_145_70",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_UNUSED_145_70_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_UNUSED_145_70_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_UNUSED_145_70_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_UNUSED_145_70_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_detail[] = {
    { ._name = "UNUSED_145_70",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_UNUSED_145_70_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_UNUSED_145_70_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_UNUSED_145_70_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_UNUSED_145_70_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORD_TIMEOUT_FLG",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_ORD_TIMEOUT_FLG_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_ORD_TIMEOUT_FLG_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_ORD_TIMEOUT_FLG_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_ORD_TIMEOUT_FLG_QW,
      ._desc = "Timeout flag is set",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CFG_ORD_SCRUB_NOTIFY_ONLY",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_I_CFG_ORD_SCRUB_NOTIFY_ONLY_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_I_CFG_ORD_SCRUB_NOTIFY_ONLY_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_I_CFG_ORD_SCRUB_NOTIFY_ONLY_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_I_CFG_ORD_SCRUB_NOTIFY_ONLY_QW,
      ._desc = "Scrubber is in Notify Only Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SET_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_SET_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_SET_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_SET_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_SET_CHECK_VECTOR_QW,
      ._desc = "Check vector set enable from scrub logic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_CLR_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_CLR_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_CLR_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_CLR_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_CLR_CHECK_VECTOR_QW,
      ._desc = "Check vector clear enable from scrub logic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORD_SCRUB_ADDR_CHK_SG1",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_ORD_SCRUB_ADDR_CHK_SG1_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_ORD_SCRUB_ADDR_CHK_SG1_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_ORD_SCRUB_ADDR_CHK_SG1_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_Q_ORD_SCRUB_ADDR_CHK_SG1_QW,
      ._desc = "Check vector clear address from scrub logic (same as q_ord_scrub_addr)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_scrub_logic_1_7_lo_orb_detail[] = {
    { ._name = "Q_ORD_SCRUB_ADDR_CHK_SG1",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_ADDR_CHK_SG1_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_ADDR_CHK_SG1_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_ADDR_CHK_SG1_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_ADDR_CHK_SG1_QW,
      ._desc = "Check vector clear address from scrub logic (same as q_ord_scrub_addr)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_55",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_UNUSED_55_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_UNUSED_55_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_UNUSED_55_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_UNUSED_55_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CLR_CHECK_VECTOR_EN",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_I_CLR_CHECK_VECTOR_EN_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_I_CLR_CHECK_VECTOR_EN_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_I_CLR_CHECK_VECTOR_EN_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_I_CLR_CHECK_VECTOR_EN_QW,
      ._desc = "Check vector clear enable from normal response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "I_CLR_CHECK_VECTOR_ADDR",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_I_CLR_CHECK_VECTOR_ADDR_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_I_CLR_CHECK_VECTOR_ADDR_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_I_CLR_CHECK_VECTOR_ADDR_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_I_CLR_CHECK_VECTOR_ADDR_QW,
      ._desc = "Check vector clear address from normal response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORD_SCRUB_CNT",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_CNT_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_CNT_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_CNT_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_CNT_QW,
      ._desc = "Counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_11",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_UNUSED_11_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_UNUSED_11_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_UNUSED_11_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_UNUSED_11_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORD_SCRUB_EN",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_EN_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_EN_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_EN_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_EN_QW,
      ._desc = "Enable scrub",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORD_SCRUB_ADDR",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_ADDR_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_ADDR_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_ADDR_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_Q_ORD_SCRUB_ADDR_QW,
      ._desc = "Next address to be checked for a scrub",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_detail[] = {
    { ._name = "UNUSED_145_138",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_UNUSED_145_138_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_UNUSED_145_138_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_UNUSED_145_138_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_UNUSED_145_138_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ORD_SCRUB_ADDR_CHK_SG2",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_Q_ORD_SCRUB_ADDR_CHK_SG2_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_Q_ORD_SCRUB_ADDR_CHK_SG2_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_Q_ORD_SCRUB_ADDR_CHK_SG2_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_Q_ORD_SCRUB_ADDR_CHK_SG2_QW,
      ._desc = "Index indicating which 64-bit chunk is being viewed for q_ord_full_vector_64 and q_check_vector_64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_detail[] = {
    { ._name = "Q_ORD_FULL_VECTOR_64",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_Q_ORD_FULL_VECTOR_64_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_Q_ORD_FULL_VECTOR_64_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_Q_ORD_FULL_VECTOR_64_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_Q_ORD_FULL_VECTOR_64_QW,
      ._desc = "64-bit window into the scrubber's i_ord_full_vector[1023:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_scrub_logic_2_8_lo_orb_detail[] = {
    { ._name = "Q_CHECK_VECTOR_64",
      ._bpos = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_Q_CHECK_VECTOR_64_BP,
      ._mask = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_Q_CHECK_VECTOR_64_MASK,
      ._rval = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_Q_CHECK_VECTOR_64_MASK,
      ._index = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_Q_CHECK_VECTOR_64_QW,
      ._desc = "64-bit window into the scrubber's q_check_vector[1023:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_state_machines_9_hi_orb_detail[] = {
    { ._name = "UNUSED_145_32",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_UNUSED_145_32_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_UNUSED_145_32_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_UNUSED_145_32_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_UNUSED_145_32_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_state_machines_9_mid_orb_detail[] = {
    { ._name = "UNUSED_145_32",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_UNUSED_145_32_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_UNUSED_145_32_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_UNUSED_145_32_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_UNUSED_145_32_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_state_machines_9_lo_orb_detail[] = {
    { ._name = "UNUSED_145_32",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_145_32_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_145_32_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_145_32_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_145_32_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_MMR_WR_STATE",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_MMR_WR_STATE_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_MMR_WR_STATE_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_MMR_WR_STATE_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_MMR_WR_STATE_QW,
      ._desc = "MMR Write State Machine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_MMR_RD_STATE",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_MMR_RD_STATE_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_MMR_RD_STATE_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_MMR_RD_STATE_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_MMR_RD_STATE_QW,
      ._desc = "MMR Read State Machine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_23_21",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_23_21_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_23_21_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_23_21_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_23_21_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_SCRUB_STATE",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_SCRUB_STATE_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_SCRUB_STATE_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_SCRUB_STATE_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_SCRUB_STATE_QW,
      ._desc = "Scrubber State Machine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_11",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_11_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_11_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_11_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_UNUSED_11_QW,
      ._desc = "Reads as zero",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_RSP_FLIT_STATE",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_RSP_FLIT_STATE_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_RSP_FLIT_STATE_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_RSP_FLIT_STATE_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_RSP_FLIT_STATE_QW,
      ._desc = "Receive Response Flit State Machine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_REQ_FLIT_STATE",
      ._bpos = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_REQ_FLIT_STATE_BP,
      ._mask = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_REQ_FLIT_STATE_MASK,
      ._rval = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_REQ_FLIT_STATE_MASK,
      ._index = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_Q_REQ_FLIT_STATE_QW,
      ._desc = "Receive Request Flit State Machine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_detail[] = {
    { ._name = "UNUSED_145_72",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_UNUSED_145_72_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_UNUSED_145_72_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSTDATA_QW2 & AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_UNUSED_145_72_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_UNUSED_145_72_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_detail[] = {
    { ._name = "UNUSED_145_72",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_UNUSED_145_72_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_UNUSED_145_72_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_UNUSED_145_72_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_UNUSED_145_72_QW,
      ._desc = "Reads as zeros",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PKEY_15_0",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_Q_PKEY_15_0_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_Q_PKEY_15_0_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RSTDATA_QW1 & AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_Q_PKEY_15_0_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_Q_PKEY_15_0_QW,
      ._desc = "PKEY Out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_orb_ntt_ptt_a_lo_orb_detail[] = {
    { ._name = "Q_PKEY_15_0",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PKEY_15_0_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PKEY_15_0_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PKEY_15_0_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PKEY_15_0_QW,
      ._desc = "PKEY Out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ADR_17_0",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_ADR_17_0_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_ADR_17_0_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_ADR_17_0_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_ADR_17_0_QW,
      ._desc = "NODEID Out",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PTAG_SG0",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTAG_SG0_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTAG_SG0_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTAG_SG0_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTAG_SG0_QW,
      ._desc = "PTAG In",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NODEID_SG0",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NODEID_SG0_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NODEID_SG0_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NODEID_SG0_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NODEID_SG0_QW,
      ._desc = "NODEID In",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTT_ERROR",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_ERROR_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_ERROR_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_ERROR_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_ERROR_QW,
      ._desc = "NTT/PTT MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_GO_MMR_SG0",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_GO_MMR_SG0_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_GO_MMR_SG0_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_GO_MMR_SG0_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_GO_MMR_SG0_QW,
      ._desc = "Go MMR Request",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PTT_RD_SG0",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTT_RD_SG0_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTT_RD_SG0_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTT_RD_SG0_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTT_RD_SG0_QW,
      ._desc = "PTT Go Read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTT_RD_SG0",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_RD_SG0_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_RD_SG0_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_RD_SG0_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_RD_SG0_QW,
      ._desc = "NTT Go Read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_PTT_WD_SG0",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTT_WD_SG0_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTT_WD_SG0_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTT_WD_SG0_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_PTT_WD_SG0_QW,
      ._desc = "PTT Word Select",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_NTT_MODE",
      ._bpos = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_MODE_BP,
      ._mask = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_MODE_MASK,
      ._rval = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA & AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_MODE_MASK,
      ._index = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_Q_NTT_MODE_QW,
      ._desc = "NTT Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_ord_scrub_ctrl_detail[] = {
    { ._name = "SCRUB_NOTIFY_ONLY",
      ._bpos = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_SCRUB_NOTIFY_ONLY_BP,
      ._mask = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_SCRUB_NOTIFY_ONLY_MASK,
      ._rval = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_RSTDATA & AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_SCRUB_NOTIFY_ONLY_MASK,
      ._index = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_SCRUB_NOTIFY_ONLY_QW,
      ._desc = "When set the ORD Scrubber, if an entry is determined to be stale, sets the ORD_TIMEOUT flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "DISABLE",
      ._bpos = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_DISABLE_BP,
      ._mask = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_DISABLE_MASK,
      ._rval = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_RSTDATA & AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_DISABLE_MASK,
      ._index = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_DISABLE_QW,
      ._desc = "When set the ORD Scrubber is disabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "NEXT_SCRUB_ADDR",
      ._bpos = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_NEXT_SCRUB_ADDR_BP,
      ._mask = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_NEXT_SCRUB_ADDR_MASK,
      ._rval = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_RSTDATA & AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_NEXT_SCRUB_ADDR_MASK,
      ._index = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_NEXT_SCRUB_ADDR_QW,
      ._desc = "The value of the address checked to see if a scrub is needed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "SCRUB_RATE",
      ._bpos = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_SCRUB_RATE_BP,
      ._mask = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_SCRUB_RATE_MASK,
      ._rval = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_RSTDATA & AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_SCRUB_RATE_MASK,
      ._index = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_SCRUB_RATE_QW,
      ._desc = "Sets the maximum value to which the counter in the ORD (Outstanding Request Data) counts to before initiating the scrub process for a given location in the Outstanding Request Data RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_net_rsp_hist_1_detail[] = {
    { ._name = "BIN3_MIN",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN3_MIN_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN3_MIN_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_1_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN3_MIN_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN3_MIN_QW,
      ._desc = "Boundary between bin 2 and bin 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BIN2_MIN",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN2_MIN_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN2_MIN_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_1_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN2_MIN_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN2_MIN_QW,
      ._desc = "Boundary between bin 1 and bin 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BIN1_MIN",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN1_MIN_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN1_MIN_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_1_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN1_MIN_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_1_BIN1_MIN_QW,
      ._desc = "Boundary between bin 0 and bin 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_net_rsp_hist_2_detail[] = {
    { ._name = "BIN7_MIN",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN7_MIN_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN7_MIN_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_2_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN7_MIN_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN7_MIN_QW,
      ._desc = "Boundary between bin 6 and bin 7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BIN6_MIN",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN6_MIN_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN6_MIN_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_2_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN6_MIN_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN6_MIN_QW,
      ._desc = "Boundary between bin 5 and bin 6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BIN5_MIN",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN5_MIN_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN5_MIN_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_2_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN5_MIN_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN5_MIN_QW,
      ._desc = "Boundary between bin 4 and bin 5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "BIN4_MIN",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN4_MIN_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN4_MIN_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_2_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN4_MIN_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_2_BIN4_MIN_QW,
      ._desc = "Boundary between bin 3 and bin 4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_net_rsp_hist_ovf_detail[] = {
    { ._name = "BIN7_OVF",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN7_OVF_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN7_OVF_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN7_OVF_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN7_OVF_QW,
      ._desc = "Indicates the 32-bit bin 7 has overflowed",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW1C"
    },
    { ._name = "BIN6_OVF",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN6_OVF_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN6_OVF_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN6_OVF_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN6_OVF_QW,
      ._desc = "Indicates the 32-bit bin 6 has overflowed",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW1C"
    },
    { ._name = "BIN5_OVF",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN5_OVF_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN5_OVF_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN5_OVF_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN5_OVF_QW,
      ._desc = "Indicates the 32-bit bin 5 has overflowed",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW1C"
    },
    { ._name = "BIN4_OVF",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN4_OVF_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN4_OVF_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN4_OVF_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN4_OVF_QW,
      ._desc = "Indicates the 32-bit bin 4 has overflowed",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW1C"
    },
    { ._name = "BIN3_OVF",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN3_OVF_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN3_OVF_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN3_OVF_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN3_OVF_QW,
      ._desc = "Indicates the 32-bit bin 3 has overflowed",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW1C"
    },
    { ._name = "BIN2_OVF",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN2_OVF_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN2_OVF_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN2_OVF_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN2_OVF_QW,
      ._desc = "Indicates the 32-bit bin 2 has overflowed",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW1C"
    },
    { ._name = "BIN1_OVF",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN1_OVF_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN1_OVF_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN1_OVF_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN1_OVF_QW,
      ._desc = "Indicates the 32-bit bin 1 has overflowed",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW1C"
    },
    { ._name = "BIN0_OVF",
      ._bpos = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN0_OVF_BP,
      ._mask = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN0_OVF_MASK,
      ._rval = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTDATA & AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN0_OVF_MASK,
      ._index = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_BIN0_OVF_QW,
      ._desc = "Indicates the 32-bit bin 0 has overflowed",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW1C"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_flagged_rsp_detail[] = {
    { ._name = "FR_FLG",
      ._bpos = AR_NIC_ORB_CFG_FLAGGED_RSP_FR_FLG_BP,
      ._mask = AR_NIC_ORB_CFG_FLAGGED_RSP_FR_FLG_MASK,
      ._rval = AR_NIC_ORB_CFG_FLAGGED_RSP_RSTDATA & AR_NIC_ORB_CFG_FLAGGED_RSP_FR_FLG_MASK,
      ._index = AR_NIC_ORB_CFG_FLAGGED_RSP_FR_FLG_QW,
      ._desc = "32-bit flag inserted into GET responses generated by the FMA when the fr bit is set",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_comp_0_detail[] = {
    { ._name = "ADDR_33_6",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_ADDR_33_6_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_ADDR_33_6_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_0_ADDR_33_6_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_ADDR_33_6_QW,
      ._desc = "Address[33:6]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "P0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_P0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_P0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_0_P0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_P0_QW,
      ._desc = "Parity Bit 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_NTT_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_NTT_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_0_NTT_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_NTT_QW,
      ._desc = "Node Translation Table Enable",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_33_28",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RESERVED_33_28_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RESERVED_33_28_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RESERVED_33_28_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RESERVED_33_28_QW,
      ._desc = "Reserved[33:28]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PKT_SRC",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_PKT_SRC_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_PKT_SRC_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_0_PKT_SRC_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_PKT_SRC_QW,
      ._desc = "Packet Source",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_PTAG_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_PTAG_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_0_PTAG_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_PTAG_QW,
      ._desc = "Protection Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_DSTID_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_DSTID_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_0_DSTID_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_DST_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_DST_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_0_DST_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_DST_QW,
      ._desc = "Destination Endpoint",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_comp_1_detail[] = {
    { ._name = "RESERVED_63_61",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RESERVED_63_61_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RESERVED_63_61_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RESERVED_63_61_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RESERVED_63_61_QW,
      ._desc = "Reserved[127:125]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_SSID_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_SSID_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_SSID_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_SSID_QW,
      ._desc = "Synchronization Sequence Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_ADDR_5_2_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_ADDR_5_2_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_ADDR_5_2_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_ADDR_5_2_QW,
      ._desc = "Address[5:2]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CNT_BM",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_CNT_BM_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_CNT_BM_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_CNT_BM_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_CNT_BM_QW,
      ._desc = "Count/Byte-mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "P2",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_P2_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_P2_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_P2_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_P2_QW,
      ._desc = "Parity Bit 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RC0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RC0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RC0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RC0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RC0_QW,
      ._desc = "Routing Control Bit 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_41_30",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RESERVED_41_30_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RESERVED_41_30_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RESERVED_41_30_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RESERVED_41_30_QW,
      ._desc = "Reserved[105:94]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_MDH_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_MDH_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_MDH_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_MDH_QW,
      ._desc = "Memory Domain Handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RC2",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RC2_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RC2_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RC2_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RC2_QW,
      ._desc = "Routing Control Bit 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_REQCMD_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_REQCMD_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_REQCMD_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_REQCMD_QW,
      ._desc = "Request Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "P1",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_P1_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_P1_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_P1_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_P1_QW,
      ._desc = "Parity Bit 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "UV",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_UV_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_UV_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_UV_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_UV_QW,
      ._desc = "Upper Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ADDR_39_34",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_ADDR_39_34_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_ADDR_39_34_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_1_ADDR_39_34_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_ADDR_39_34_QW,
      ._desc = "Address[39:34]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_comp_2_detail[] = {
    { ._name = "EN",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_EN_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_EN_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_2_EN_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_EN_QW,
      ._desc = "Enable performance tracking comparisons for SSID-to-ORB Local Address Flit or Request Header Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "P3",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_P3_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_P3_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_2_P3_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_P3_QW,
      ._desc = "Parity Bit 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RC1",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RC1_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RC1_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RC1_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RC1_QW,
      ._desc = "Routing Control Bit 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_LSTATUS_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_LSTATUS_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_2_LSTATUS_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_LSTATUS_QW,
      ._desc = "Local Status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_7_0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RESERVED_7_0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RESERVED_7_0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RESERVED_7_0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RESERVED_7_0_QW,
      ._desc = "Reserved[135:128]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_mask_0_detail[] = {
    { ._name = "ADDR_33_6_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_ADDR_33_6_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_ADDR_33_6_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_0_ADDR_33_6_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_ADDR_33_6_MSK_QW,
      ._desc = "Address[33:6] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "P0_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_P0_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_P0_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_0_P0_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_P0_MSK_QW,
      ._desc = "Parity Bit 0 Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NTT_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_NTT_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_NTT_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_0_NTT_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_NTT_MSK_QW,
      ._desc = "Node Translation Table Enable Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_33_28",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RESERVED_33_28_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RESERVED_33_28_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RESERVED_33_28_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RESERVED_33_28_QW,
      ._desc = "Reserved[33:28] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PKT_SRC_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_PKT_SRC_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_PKT_SRC_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_0_PKT_SRC_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_PKT_SRC_MSK_QW,
      ._desc = "Packet Source Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PTAG_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_PTAG_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_PTAG_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_0_PTAG_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_PTAG_MSK_QW,
      ._desc = "Protection Tag Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DSTID_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_DSTID_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_DSTID_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_0_DSTID_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_DSTID_MSK_QW,
      ._desc = "Destination Core Identifier Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_DST_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_DST_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_0_DST_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_DST_QW,
      ._desc = "Destination Endpoint Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_mask_1_detail[] = {
    { ._name = "RESERVED_63_61",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RESERVED_63_61_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RESERVED_63_61_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RESERVED_63_61_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RESERVED_63_61_QW,
      ._desc = "Reserved[127:125] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "SSID_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_SSID_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_SSID_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_SSID_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_SSID_MSK_QW,
      ._desc = "Synchronization Sequence Identifier Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ADDR_5_2_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_ADDR_5_2_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_ADDR_5_2_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_ADDR_5_2_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_ADDR_5_2_MSK_QW,
      ._desc = "Address[5:2] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CNT_BM_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_CNT_BM_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_CNT_BM_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_CNT_BM_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_CNT_BM_MSK_QW,
      ._desc = "Count/Byte-mask Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "P2_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_P2_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_P2_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_P2_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_P2_MSK_QW,
      ._desc = "Parity Bit 2 Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RC0_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RC0_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RC0_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RC0_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RC0_MSK_QW,
      ._desc = "Routing Control Bit 0 Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_41_30",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RESERVED_41_30_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RESERVED_41_30_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RESERVED_41_30_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RESERVED_41_30_QW,
      ._desc = "Reserved[105:94] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MDH_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_MDH_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_MDH_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_MDH_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_MDH_MSK_QW,
      ._desc = "Memory Domain Handle Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RC2_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RC2_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RC2_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RC2_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RC2_MSK_QW,
      ._desc = "Routing Control Bit 2 Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "REQCMD_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_REQCMD_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_REQCMD_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_REQCMD_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_REQCMD_MSK_QW,
      ._desc = "Request Command Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "P1_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_P1_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_P1_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_P1_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_P1_MSK_QW,
      ._desc = "Parity Bit 1 Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "UV_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_UV_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_UV_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_UV_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_UV_MSK_QW,
      ._desc = "Upper Valid Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ADDR_39_34_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_ADDR_39_34_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_ADDR_39_34_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_1_ADDR_39_34_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_ADDR_39_34_MSK_QW,
      ._desc = "Address[39:34] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_mask_2_detail[] = {
    { ._name = "P3_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_P3_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_P3_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_2_P3_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_P3_MSK_QW,
      ._desc = "Parity Bit 3 Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RC1_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RC1_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RC1_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RC1_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RC1_MSK_QW,
      ._desc = "Routing Control Bit 1 Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LSTATUS_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_LSTATUS_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_LSTATUS_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_2_LSTATUS_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_LSTATUS_MSK_QW,
      ._desc = "Local Status Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_7_0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RESERVED_7_0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RESERVED_7_0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RESERVED_7_0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RESERVED_7_0_QW,
      ._desc = "Reserved[135:128] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_comp_3_detail[] = {
    { ._name = "LADDR_27_0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_LADDR_27_0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_LADDR_27_0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_3_LADDR_27_0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_LADDR_27_0_QW,
      ._desc = "Local Address[27:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_35_26",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RESERVED_35_26_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RESERVED_35_26_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RESERVED_35_26_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RESERVED_35_26_QW,
      ._desc = "Reserved[35:26]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LPTAG",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_LPTAG_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_LPTAG_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_3_LPTAG_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_LPTAG_QW,
      ._desc = "Local Protection Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_17_0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RESERVED_17_0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RESERVED_17_0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RESERVED_17_0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RESERVED_17_0_QW,
      ._desc = "Reserved[17:0]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_comp_4_detail[] = {
    { ._name = "RESERVED_63_48",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_63_48_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_63_48_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_63_48_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_63_48_QW,
      ._desc = "Reserved[127:112]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LCNT",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LCNT_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LCNT_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LCNT_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LCNT_QW,
      ._desc = "Local 32-bit Word Count ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_43",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_43_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_43_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_43_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_43_QW,
      ._desc = "Reserved[107]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FR",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_FR_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_FR_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_4_FR_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_FR_QW,
      ._desc = "Flagged Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LADDR_39_28",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LADDR_39_28_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LADDR_39_28_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LADDR_39_28_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LADDR_39_28_QW,
      ._desc = "Local Address[39:28]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LMDH",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LMDH_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LMDH_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LMDH_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_LMDH_QW,
      ._desc = "Local Memory Domain Handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_17_8",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_17_8_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_17_8_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_17_8_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RESERVED_17_8_QW,
      ._desc = "Reserved[81:72]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_ECC0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_ECC0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_4_ECC0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_ECC0_QW,
      ._desc = "Error Correction Code 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_comp_5_detail[] = {
    { ._name = "EN",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_EN_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_EN_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_5_EN_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_EN_QW,
      ._desc = "Enable performance tracking comparisons for SSID-to-ORB Local Address Flit or Request Header Flit",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC1",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_ECC1_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_ECC1_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_5_ECC1_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_ECC1_QW,
      ._desc = "Error Correction Code 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LWC",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_LWC_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_LWC_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_5_LWC_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_LWC_QW,
      ._desc = "Write Combine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_6_0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RESERVED_6_0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RESERVED_6_0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RESERVED_6_0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RESERVED_6_0_QW,
      ._desc = "Reserved[134:128]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_mask_3_detail[] = {
    { ._name = "LADDR_27_0_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_LADDR_27_0_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_LADDR_27_0_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_3_LADDR_27_0_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_LADDR_27_0_MSK_QW,
      ._desc = "Local Address[27:0] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_35_26",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RESERVED_35_26_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RESERVED_35_26_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RESERVED_35_26_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RESERVED_35_26_QW,
      ._desc = "Reserved[35:26] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LPTAG_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_LPTAG_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_LPTAG_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_3_LPTAG_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_LPTAG_MSK_QW,
      ._desc = "Local Protection Tag Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_17_0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RESERVED_17_0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RESERVED_17_0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RESERVED_17_0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RESERVED_17_0_QW,
      ._desc = "Reserved[17:0] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_mask_4_detail[] = {
    { ._name = "RESERVED_63_48",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_63_48_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_63_48_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_63_48_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_63_48_QW,
      ._desc = "Reserved[127:112] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LCNT_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LCNT_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LCNT_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LCNT_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LCNT_MSK_QW,
      ._desc = "Local 32-bit Word Count ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_43",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_43_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_43_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_43_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_43_QW,
      ._desc = "Reserved[107] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "FR_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_FR_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_FR_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_4_FR_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_FR_MSK_QW,
      ._desc = "Flagged Response Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LADDR_39_28_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LADDR_39_28_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LADDR_39_28_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LADDR_39_28_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LADDR_39_28_MSK_QW,
      ._desc = "Local Address[39:28] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LMDH_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LMDH_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LMDH_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LMDH_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_LMDH_MSK_QW,
      ._desc = "Local Memory Domain Handle Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_17_8",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_17_8_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_17_8_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_17_8_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RESERVED_17_8_QW,
      ._desc = "Reserved[81:72] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ECC0_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_ECC0_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_ECC0_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_4_ECC0_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_ECC0_MSK_QW,
      ._desc = "Error Correction Code 0 Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_prf_trk_mask_5_detail[] = {
    { ._name = "ECC1_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_ECC1_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_ECC1_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_5_ECC1_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_ECC1_MSK_QW,
      ._desc = "Error Correction Code 1 Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LWC_MSK",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_LWC_MSK_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_LWC_MSK_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_5_LWC_MSK_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_LWC_MSK_QW,
      ._desc = "Write Combine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "RESERVED_6_0",
      ._bpos = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RESERVED_6_0_BP,
      ._mask = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RESERVED_6_0_MASK,
      ._rval = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RSTDATA & AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RESERVED_6_0_MASK,
      ._index = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RESERVED_6_0_QW,
      ._desc = "Reserved[134:128] Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_ram_access_detail[] = {
    { ._name = "READ0_WRITE1",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_READ0_WRITE1_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_READ0_WRITE1_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_ACCESS_READ0_WRITE1_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_READ0_WRITE1_QW,
      ._desc = "If this bit is set to zero when this MMR is written, the contents of A_NIC_ORB_DBG_ORD_RAM_LO and A_NIC_ORB_DBG_ORD_RAM_UP are updated with the state of the ORB Outstanding Request Data RAM as indexed by bits 9:0 of the MMR",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RWS"
    },
    { ._name = "IDX",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_IDX_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_IDX_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_ACCESS_IDX_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_IDX_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_ram_lo_detail[] = {
    { ._name = "MBE_DETECTED",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_LO_MBE_DETECTED_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_LO_MBE_DETECTED_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_LO_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_LO_MBE_DETECTED_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_LO_MBE_DETECTED_QW,
      ._desc = "The previous write to the A_NIC_ORB_DBG_ORD_RAM_ACCESS MMR with READ0_WRITE1 set to 1'b0 resulted in an MBE when data was read from the ORB Data RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_LO_SSID_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_LO_SSID_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_LO_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_LO_SSID_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_LO_SSID_QW,
      ._desc = "Synchronization Sequence Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_LO_MDH_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_LO_MDH_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_LO_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_LO_MDH_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_LO_MDH_QW,
      ._desc = "MDH for PUTs or lMDH for GETs or Fetching AMOs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "TRK_RSP",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_LO_TRK_RSP_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_LO_TRK_RSP_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_LO_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_LO_TRK_RSP_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_LO_TRK_RSP_QW,
      ._desc = "Track Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_LO_RSPCMD_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_LO_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_LO_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_LO_RSPCMD_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_LO_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "TIMECNT",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_LO_TIMECNT_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_LO_TIMECNT_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_LO_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_LO_TIMECNT_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_LO_TIMECNT_QW,
      ._desc = "Time Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_ram_up_detail[] = {
    { ._name = "MBE_DETECTED",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_MBE_DETECTED_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_MBE_DETECTED_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_MBE_DETECTED_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_MBE_DETECTED_QW,
      ._desc = "The previous write to the A_NIC_ORB_DBG_ORD_RAM_ACCESS MMR with READ0_WRITE1 set to 1'b0 resulted in an MBE when data was read from the ORB Data RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "WC",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_WC_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_WC_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_WC_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_WC_QW,
      ._desc = "Write Combine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "FR",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_FR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_FR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_FR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_FR_QW,
      ._desc = "Flagged Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "FR_ERR",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_FR_ERR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_FR_ERR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_FR_ERR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_FR_ERR_QW,
      ._desc = "Flagged Response Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "VOID_54_48",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_VOID_54_48_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_VOID_54_48_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_VOID_54_48_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_VOID_54_48_QW,
      ._desc = "Unused",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW"
    },
    { ._name = "F",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_F_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_F_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_F_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_F_QW,
      ._desc = "First Request in Message",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_NTT_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_NTT_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_NTT_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_NTT_QW,
      ._desc = "Node Translation Table Lookup Enable",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW"
    },
    { ._name = "LPTAG",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_LPTAG_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_LPTAG_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_LPTAG_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_LPTAG_QW,
      ._desc = "Local Protection Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_DSTID_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_DSTID_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_DSTID_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW"
    },
    { ._name = "ADDR_PUT_39_12",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_ADDR_PUT_39_12_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_ADDR_PUT_39_12_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_ADDR_PUT_39_12_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_ADDR_PUT_39_12_QW,
      ._desc = "PUT Address bits 39:12",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW"
    },
    { ._name = "ADDR_GET_39_0",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_ADDR_GET_39_0_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_ADDR_GET_39_0_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_ADDR_GET_39_0_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_ADDR_GET_39_0_QW,
      ._desc = "GET Address bits 39:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LCNT",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_LCNT_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_LCNT_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_LCNT_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_LCNT_QW,
      ._desc = "Local 32-bit Word Count Minus One",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_DBG_ORD_RAM_UP_DST_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_RAM_UP_DST_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA & AR_NIC_ORB_DBG_ORD_RAM_UP_DST_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_RAM_UP_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_crdt_params_detail[] = {
    { ._name = "ORB_TO_RAT_CRDTS_IN_USE",
      ._bpos = AR_NIC_ORB_DBG_CRDT_PARAMS_ORB_TO_RAT_CRDTS_IN_USE_BP,
      ._mask = AR_NIC_ORB_DBG_CRDT_PARAMS_ORB_TO_RAT_CRDTS_IN_USE_MASK,
      ._rval = AR_NIC_ORB_DBG_CRDT_PARAMS_RSTDATA & AR_NIC_ORB_DBG_CRDT_PARAMS_ORB_TO_RAT_CRDTS_IN_USE_MASK,
      ._index = AR_NIC_ORB_DBG_CRDT_PARAMS_ORB_TO_RAT_CRDTS_IN_USE_QW,
      ._desc = "The register provides the current number of flit credits that are being used on the ORB-to-RAT interface",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HWO"
    },
    { ._name = "ORB_TO_NL_CRDTS_IN_USE",
      ._bpos = AR_NIC_ORB_DBG_CRDT_PARAMS_ORB_TO_NL_CRDTS_IN_USE_BP,
      ._mask = AR_NIC_ORB_DBG_CRDT_PARAMS_ORB_TO_NL_CRDTS_IN_USE_MASK,
      ._rval = AR_NIC_ORB_DBG_CRDT_PARAMS_RSTDATA & AR_NIC_ORB_DBG_CRDT_PARAMS_ORB_TO_NL_CRDTS_IN_USE_MASK,
      ._index = AR_NIC_ORB_DBG_CRDT_PARAMS_ORB_TO_NL_CRDTS_IN_USE_QW,
      ._desc = "The register provides the current number of flit credits that are being used on the ORB-to-NL interface",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_errinj_ord_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_ORD_ADDRESS_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_ORD_ADDRESS_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_ORD_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_ORD_ADDRESS_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_ORD_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_ORD_CHECKBITS_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_ORD_CHECKBITS_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_ORD_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_ORD_CHECKBITS_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_ORD_CHECKBITS_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_ORD_TRIGGERED_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_ORD_TRIGGERED_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_ORD_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_ORD_TRIGGERED_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_ORD_TRIGGERED_QW,
      ._desc = "This status bit should be clear when the MMR is written by software",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_ORD_MODE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_ORD_MODE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_ORD_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_ORD_MODE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_ORD_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_ORD_ENABLE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_ORD_ENABLE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_ORD_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_ORD_ENABLE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_ORD_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_errinj_rsp_pipe_detail[] = {
    { ._name = "CHECKBITSUP",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_CHECKBITSUP_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_CHECKBITSUP_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_CHECKBITSUP_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_CHECKBITSUP_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 135:72 to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITSLO",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_CHECKBITSLO_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_CHECKBITSLO_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_CHECKBITSLO_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_CHECKBITSLO_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 63:0 to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_PARITY_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_PARITY_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_PARITY_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_PARITY_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_COUNT_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_COUNT_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_COUNT_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_COUNT_QW,
      ._desc = "Flit in which to inject the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_TRIGGERED_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_TRIGGERED_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_TRIGGERED_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_TRIGGERED_QW,
      ._desc = "This status bit should be clear when the MMR is written by software",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_MODE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_MODE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_MODE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_MODE_QW,
      ._desc = "Mode 0: Inject error in Nth flit of one packet Mode 1: Inject error in Nth flit of all packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_ENABLE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_ENABLE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_ENABLE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_ENABLE_QW,
      ._desc = "Enable Error Injection for Response Pipeline",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_errinj_req_pipe_detail[] = {
    { ._name = "CHECKBITSUP",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_CHECKBITSUP_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_CHECKBITSUP_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_CHECKBITSUP_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_CHECKBITSUP_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 135:72 to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITSLO",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_CHECKBITSLO_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_CHECKBITSLO_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_CHECKBITSLO_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_CHECKBITSLO_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 63:0 to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_PARITY_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_PARITY_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_PARITY_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_PARITY_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "COUNT",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_COUNT_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_COUNT_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_COUNT_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_COUNT_QW,
      ._desc = "Flit in which to inject the error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_TRIGGERED_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_TRIGGERED_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_TRIGGERED_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_TRIGGERED_QW,
      ._desc = "This status bit should be clear when the MMR is written by software",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_MODE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_MODE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_MODE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_MODE_QW,
      ._desc = "Mode 0: Inject error in Nth flit of one packet Mode 1: Inject error in Nth flit of all packets",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_ENABLE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_ENABLE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_ENABLE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_ENABLE_QW,
      ._desc = "Enable Error Injection for Request Pipeline",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_0_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_0_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_0_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_0_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_0_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_0_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_0_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_0_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_0_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_0_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_0_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_1_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_1_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_1_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_1_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_1_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_1_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_1_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_1_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_1_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_1_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_1_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_2_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_2_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_2_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_2_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_2_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_2_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_2_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_2_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_2_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_2_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_2_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_3_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_3_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_3_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_3_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_3_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_3_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_3_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_3_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_3_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_3_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_3_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_4_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_4_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_4_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_4_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_4_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_4_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_4_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_4_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_4_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_4_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_4_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_5_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_5_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_5_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_5_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_5_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_5_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_5_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_5_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_5_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_5_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_5_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_6_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_6_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_6_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_6_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_6_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_6_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_6_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_6_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_6_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_6_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_6_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_7_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_7_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_7_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_7_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_7_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_7_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_7_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_7_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_7_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_7_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_7_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_8_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_8_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_8_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_8_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_8_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_8_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_8_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_8_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_8_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_8_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_8_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_9_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_9_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_9_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_9_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_9_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_9_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_9_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_9_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_9_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_9_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_9_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_10_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_10_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_10_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_10_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_10_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_10_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_10_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_10_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_10_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_10_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_10_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_11_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_11_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_11_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_11_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_11_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_11_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_11_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_11_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_11_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_11_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_11_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_12_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_12_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_12_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_12_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_12_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_12_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_12_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_12_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_12_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_12_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_12_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_13_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_13_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_13_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_13_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_13_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_13_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_13_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_13_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_13_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_13_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_13_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_14_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_14_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_14_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_14_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_14_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_14_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_14_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_14_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_14_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_14_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_14_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_15_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_15_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_15_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_15_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_15_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_15_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_15_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_15_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_15_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_15_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_15_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_16_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_16_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_16_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_16_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_16_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_16_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_16_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_16_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_16_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_16_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_16_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_17_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_17_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_17_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_17_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_17_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_17_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_17_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_17_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_17_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_17_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_17_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_18_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_18_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_18_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_18_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_18_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_18_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_18_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_18_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_18_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_18_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_18_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_19_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_19_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_19_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_19_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_19_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_19_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_19_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_19_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_19_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_19_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_19_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_20_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_20_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_20_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_20_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_20_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_20_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_20_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_20_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_20_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_20_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_20_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_21_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_21_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_21_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_21_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_21_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_21_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_21_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_21_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_21_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_21_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_21_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_22_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_22_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_22_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_22_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_22_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_22_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_22_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_22_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_22_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_22_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_22_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_23_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_23_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_23_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_23_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_23_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_23_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_23_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_23_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_23_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_23_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_23_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_24_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_24_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_24_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_24_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_24_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_24_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_24_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_24_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_24_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_24_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_24_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_25_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_25_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_25_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_25_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_25_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_25_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_25_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_25_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_25_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_25_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_25_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_26_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_26_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_26_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_26_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_26_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_26_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_26_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_26_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_26_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_26_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_26_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_27_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_27_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_27_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_27_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_27_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_27_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_27_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_27_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_27_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_27_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_27_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_28_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_28_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_28_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_28_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_28_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_28_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_28_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_28_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_28_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_28_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_28_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_29_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_29_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_29_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_29_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_29_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_29_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_29_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_29_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_29_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_29_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_29_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_30_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_30_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_30_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_30_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_30_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_30_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_30_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_30_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_30_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_30_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_30_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_vectors_31_detail[] = {
    { ._name = "ORD_CHECK_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_31_ORD_CHECK_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_31_ORD_CHECK_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_31_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_31_ORD_CHECK_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_31_ORD_CHECK_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORB Scrubber Check Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = "ORD_FULL_VECTOR",
      ._bpos = AR_NIC_ORB_DBG_ORD_VECTORS_31_ORD_FULL_VECTOR_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_VECTORS_31_ORD_FULL_VECTOR_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_VECTORS_31_RSTDATA & AR_NIC_ORB_DBG_ORD_VECTORS_31_ORD_FULL_VECTOR_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_VECTORS_31_ORD_FULL_VECTOR_QW,
      ._desc = "This field gives the value of a 32-bit range of the ORD Full Vector",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_ord_ent_cnt_detail[] = {
    { ._name = "ORD_ENTS",
      ._bpos = AR_NIC_ORB_DBG_ORD_ENT_CNT_ORD_ENTS_BP,
      ._mask = AR_NIC_ORB_DBG_ORD_ENT_CNT_ORD_ENTS_MASK,
      ._rval = AR_NIC_ORB_DBG_ORD_ENT_CNT_RSTDATA & AR_NIC_ORB_DBG_ORD_ENT_CNT_ORD_ENTS_MASK,
      ._index = AR_NIC_ORB_DBG_ORD_ENT_CNT_ORD_ENTS_QW,
      ._desc = "Number of packets in the ORD RAM",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_scrub_notify_cnt_detail[] = {
    { ._name = "PREVIOUS_CNT",
      ._bpos = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_PREVIOUS_CNT_BP,
      ._mask = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_PREVIOUS_CNT_MASK,
      ._rval = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_RSTDATA & AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_PREVIOUS_CNT_MASK,
      ._index = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_PREVIOUS_CNT_QW,
      ._desc = "The pevious value of CURRENT_CNT",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HWO"
    },
    { ._name = "CURRENT_CNT",
      ._bpos = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_CURRENT_CNT_BP,
      ._mask = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_CURRENT_CNT_MASK,
      ._rval = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_RSTDATA & AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_CURRENT_CNT_MASK,
      ._index = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_CURRENT_CNT_QW,
      ._desc = "Number of packets setting the ORD_TIMEOUT flag on the last pass through the ORD scrubber",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_sts_rsp_fifo_status_detail[] = {
    { ._name = "RSP_FIFO_ENTS",
      ._bpos = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_ENTS_BP,
      ._mask = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_ENTS_MASK,
      ._rval = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSTDATA & AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_ENTS_MASK,
      ._index = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_ENTS_QW,
      ._desc = "Number of packets in the Response FIFO",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "RSP_FIFO_RDPTR",
      ._bpos = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_RDPTR_BP,
      ._mask = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_RDPTR_MASK,
      ._rval = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSTDATA & AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_RDPTR_MASK,
      ._index = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_RDPTR_QW,
      ._desc = "Read pointer for of the Response FIFO",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = "RSP_FIFO_WRPTR",
      ._bpos = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_WRPTR_BP,
      ._mask = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_WRPTR_MASK,
      ._rval = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSTDATA & AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_WRPTR_MASK,
      ._index = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSP_FIFO_WRPTR_QW,
      ._desc = "Write pointer for of the Response FIFO",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_flg_detail[] = {
    { ._name = "MBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_MBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_MBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_MBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_MBE_PTT_QW,
      ._desc = "PTT Multiple Bit Error Flag",
      ._type_bitmsk = 0x0000000000010001ull,
      ._access = "RW1"
    },
    { ._name = "SBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_SBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_SBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_SBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_SBE_PTT_QW,
      ._desc = "PTT Single Bit Error Flag",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "MBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_MBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_MBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_MBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_MBE_NTT_QW,
      ._desc = "NTT Multiple Bit Error Flag",
      ._type_bitmsk = 0x0000000000010001ull,
      ._access = "RW1"
    },
    { ._name = "SBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_FLG_SBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_SBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_SBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_SBE_NTT_QW,
      ._desc = "NTT Single Bit Error Flag",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "FR_CHK",
      ._bpos = AR_NIC_ORB_ERR_FLG_FR_CHK_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_FR_CHK_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_FR_CHK_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_FR_CHK_QW,
      ._desc = "Set when the Flagged Response bit of an FMA request is set and the address is not dword aligned or when the Flagged Response bit of an FMA request is set and the amount of data crosses a cache line boundary",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "TAIL_ON_HEAD",
      ._bpos = AR_NIC_ORB_ERR_FLG_TAIL_ON_HEAD_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_TAIL_ON_HEAD_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_TAIL_ON_HEAD_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_TAIL_ON_HEAD_QW,
      ._desc = "Set when there is a tail bit set on a header for a request packet",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "NL_CRDT_UNF",
      ._bpos = AR_NIC_ORB_ERR_FLG_NL_CRDT_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_NL_CRDT_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_NL_CRDT_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_NL_CRDT_UNF_QW,
      ._desc = "Set when there is an underflow in the credits between the ORB (sender) and NL (receiver)",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_REQ_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_REQ_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_REQ_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_REQ_MBE_QW,
      ._desc = "Set when a Multi-bit Error occurs on a data flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_REQ_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_REQ_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_REQ_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_REQ_SBE_QW,
      ._desc = "Set when a Single Bit Error occurs on a data flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "REQ_PE",
      ._bpos = AR_NIC_ORB_ERR_FLG_REQ_PE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_REQ_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_REQ_PE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_REQ_PE_QW,
      ._desc = "Set when a Parity Error occurs on a header flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "REQ_SPKT",
      ._bpos = AR_NIC_ORB_ERR_FLG_REQ_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_REQ_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_REQ_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_REQ_SPKT_QW,
      ._desc = "Set when there is a super packet (a header flit followed by more than four data flits) coming into the Request Control Logic",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "REQ_UNF",
      ._bpos = AR_NIC_ORB_ERR_FLG_REQ_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_REQ_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_REQ_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_REQ_UNF_QW,
      ._desc = "Set when an underflow in the Request FIFO occurs",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "REQ_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_FLG_REQ_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_REQ_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_REQ_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_REQ_FIFO_OVF_QW,
      ._desc = "Set when an overflow in the Request FIFO occurs",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "ORD_SBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_ORD_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_ORD_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_ORD_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_ORD_SBE_QW,
      ._desc = "Set when there is a single bit error in the ORD RAM",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "ORD_MBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_ORD_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_ORD_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_ORD_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_ORD_MBE_QW,
      ._desc = "Set when there is a multi-bit error in the ORD RAM",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "ORD_TIMEOUT",
      ._bpos = AR_NIC_ORB_ERR_FLG_ORD_TIMEOUT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_ORD_TIMEOUT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_ORD_TIMEOUT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_ORD_TIMEOUT_QW,
      ._desc = "Set when an entry in the ORD RAM times out due to a lack of a response",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "ORD_SCRUB",
      ._bpos = AR_NIC_ORB_ERR_FLG_ORD_SCRUB_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_ORD_SCRUB_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_ORD_SCRUB_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_ORD_SCRUB_QW,
      ._desc = "Set when an entry in the ORD RAM times out due to lack of a response",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "RSP_FLIT_CNT",
      ._bpos = AR_NIC_ORB_ERR_FLG_RSP_FLIT_CNT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_RSP_FLIT_CNT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_RSP_FLIT_CNT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_RSP_FLIT_CNT_QW,
      ._desc = "Set when the number of flits in a response packet does not match the number of expected flits (based on the byte count stored in the ORB Data RAM)",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_RSP_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_RSP_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_RSP_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_RSP_MBE_QW,
      ._desc = "Set when a Multi-bit Error occurs on a data flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_ORB_ERR_FLG_RSP_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_RSP_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_RSP_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_RSP_SBE_QW,
      ._desc = "Set when a Single Bit Error occurs on a data flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000004001ull,
      ._access = "RW1"
    },
    { ._name = "RSP_PE",
      ._bpos = AR_NIC_ORB_ERR_FLG_RSP_PE_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_RSP_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_RSP_PE_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_RSP_PE_QW,
      ._desc = "Set when a Parity Error occurs on a header flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "RSP_SPKT",
      ._bpos = AR_NIC_ORB_ERR_FLG_RSP_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_RSP_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_RSP_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_RSP_SPKT_QW,
      ._desc = "Set when there is a super packet (a header flit followed by more than four data flits) coming into the Response FIFO",
      ._type_bitmsk = 0x0000000000040001ull,
      ._access = "RW1"
    },
    { ._name = "RSP_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_FLG_RSP_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_RSP_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_RSP_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_RSP_FIFO_OVF_QW,
      ._desc = "Set when an overflow in the Response FIFO occurs",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "ILLEGAL_RSP_LSTAT",
      ._bpos = AR_NIC_ORB_ERR_FLG_ILLEGAL_RSP_LSTAT_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_ILLEGAL_RSP_LSTAT_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_ILLEGAL_RSP_LSTAT_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_ILLEGAL_RSP_LSTAT_QW,
      ._desc = "Set when there is a local status of an incoming response packet not set to 6'b0",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "ILLEGAL_RSP_PID",
      ._bpos = AR_NIC_ORB_ERR_FLG_ILLEGAL_RSP_PID_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_ILLEGAL_RSP_PID_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_ILLEGAL_RSP_PID_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_ILLEGAL_RSP_PID_QW,
      ._desc = "Set when the upper two bits of the packet ID (pktID) value of an incoming response packet is not set to 2'b00",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ERR_FLG_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_CMD_MISMATCH_QW,
      ._desc = "Set when a response packet comes into the Response FIFO that does not have the same type of command (GET, PUT, or Fetching AMO) as the corresponding request entry in the ORD and the remote status (rstatus) does not indicate an invalid command",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "NO_ENTRY_IN_ORD",
      ._bpos = AR_NIC_ORB_ERR_FLG_NO_ENTRY_IN_ORD_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_NO_ENTRY_IN_ORD_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_NO_ENTRY_IN_ORD_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_NO_ENTRY_IN_ORD_QW,
      ._desc = "Set when a response packet comes into the Response FIFO for which there is no corresponding request in the ORD RAM",
      ._type_bitmsk = 0x0000000000008001ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_ORB_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_ORB_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_ORB_ERR_FLG_RSTDATA & AR_NIC_ORB_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_ORB_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Reserved for the purpose of inserting a ",
      ._type_bitmsk = 0x0000000000100001ull,
      ._access = "RW1"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_clr_detail[] = {
    { ._name = "MBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_CLR_MBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_MBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_MBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_MBE_PTT_QW,
      ._desc = "PTT Multiple Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "SBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_CLR_SBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_SBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_SBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_SBE_PTT_QW,
      ._desc = "PTT Single Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "MBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_CLR_MBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_MBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_MBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_MBE_NTT_QW,
      ._desc = "NTT Multiple Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "SBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_CLR_SBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_SBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_SBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_SBE_NTT_QW,
      ._desc = "NTT Single Bit Error Flag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "FR_CHK",
      ._bpos = AR_NIC_ORB_ERR_CLR_FR_CHK_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_FR_CHK_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_FR_CHK_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_FR_CHK_QW,
      ._desc = "Set when the Flagged Response bit of an FMA request is set and the address is not dword aligned or when the Flagged Response bit of an FMA request is set and the amount of data crosses a cache line boundary",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "TAIL_ON_HEAD",
      ._bpos = AR_NIC_ORB_ERR_CLR_TAIL_ON_HEAD_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_TAIL_ON_HEAD_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_TAIL_ON_HEAD_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_TAIL_ON_HEAD_QW,
      ._desc = "Set when there is a tail bit set on a header for a request packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NL_CRDT_UNF",
      ._bpos = AR_NIC_ORB_ERR_CLR_NL_CRDT_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_NL_CRDT_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_NL_CRDT_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_NL_CRDT_UNF_QW,
      ._desc = "Set when there is an underflow in the credits between the ORB (sender) and NL (receiver)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_ORB_ERR_CLR_REQ_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_REQ_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_REQ_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_REQ_MBE_QW,
      ._desc = "Set when a Multi-bit Error occurs on a data flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_ORB_ERR_CLR_REQ_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_REQ_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_REQ_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_REQ_SBE_QW,
      ._desc = "Set when a Single Bit Error occurs on a data flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_PE",
      ._bpos = AR_NIC_ORB_ERR_CLR_REQ_PE_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_REQ_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_REQ_PE_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_REQ_PE_QW,
      ._desc = "Set when a Parity Error occurs on a header flit in the Request FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_SPKT",
      ._bpos = AR_NIC_ORB_ERR_CLR_REQ_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_REQ_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_REQ_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_REQ_SPKT_QW,
      ._desc = "Set when there is a super packet (a header flit followed by more than four data flits) coming into the Request Control Logic",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_UNF",
      ._bpos = AR_NIC_ORB_ERR_CLR_REQ_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_REQ_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_REQ_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_REQ_UNF_QW,
      ._desc = "Set when an underflow in the Request FIFO occurs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "REQ_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_CLR_REQ_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_REQ_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_REQ_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_REQ_FIFO_OVF_QW,
      ._desc = "Set when an overflow in the Request FIFO occurs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ORD_SBE",
      ._bpos = AR_NIC_ORB_ERR_CLR_ORD_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_ORD_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_ORD_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_ORD_SBE_QW,
      ._desc = "Set when there is a single bit error in the ORD RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ORD_MBE",
      ._bpos = AR_NIC_ORB_ERR_CLR_ORD_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_ORD_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_ORD_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_ORD_MBE_QW,
      ._desc = "Set when there is a multi-bit error in the ORD RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ORD_TIMEOUT",
      ._bpos = AR_NIC_ORB_ERR_CLR_ORD_TIMEOUT_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_ORD_TIMEOUT_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_ORD_TIMEOUT_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_ORD_TIMEOUT_QW,
      ._desc = "Set when an entry in the ORD RAM times out due to a lack of a response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ORD_SCRUB",
      ._bpos = AR_NIC_ORB_ERR_CLR_ORD_SCRUB_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_ORD_SCRUB_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_ORD_SCRUB_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_ORD_SCRUB_QW,
      ._desc = "Set when an entry in the ORD RAM times out due to lack of a response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_FLIT_CNT",
      ._bpos = AR_NIC_ORB_ERR_CLR_RSP_FLIT_CNT_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_RSP_FLIT_CNT_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_RSP_FLIT_CNT_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_RSP_FLIT_CNT_QW,
      ._desc = "Set when the number of flits in a response packet does not match the number of expected flits (based on the byte count stored in the ORB Data RAM)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_ORB_ERR_CLR_RSP_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_RSP_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_RSP_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_RSP_MBE_QW,
      ._desc = "Set when a Multi-bit Error occurs on a data flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_ORB_ERR_CLR_RSP_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_RSP_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_RSP_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_RSP_SBE_QW,
      ._desc = "Set when a Single Bit Error occurs on a data flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_PE",
      ._bpos = AR_NIC_ORB_ERR_CLR_RSP_PE_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_RSP_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_RSP_PE_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_RSP_PE_QW,
      ._desc = "Set when a Parity Error occurs on a header flit in the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_SPKT",
      ._bpos = AR_NIC_ORB_ERR_CLR_RSP_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_RSP_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_RSP_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_RSP_SPKT_QW,
      ._desc = "Set when there is a super packet (a header flit followed by more than four data flits) coming into the Response FIFO",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "RSP_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_CLR_RSP_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_RSP_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_RSP_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_RSP_FIFO_OVF_QW,
      ._desc = "Set when an overflow in the Response FIFO occurs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ILLEGAL_RSP_LSTAT",
      ._bpos = AR_NIC_ORB_ERR_CLR_ILLEGAL_RSP_LSTAT_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_ILLEGAL_RSP_LSTAT_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_ILLEGAL_RSP_LSTAT_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_ILLEGAL_RSP_LSTAT_QW,
      ._desc = "Set when there is a local status of an incoming response packet not set to 6'b0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "ILLEGAL_RSP_PID",
      ._bpos = AR_NIC_ORB_ERR_CLR_ILLEGAL_RSP_PID_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_ILLEGAL_RSP_PID_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_ILLEGAL_RSP_PID_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_ILLEGAL_RSP_PID_QW,
      ._desc = "Set when the upper two bits of the packet ID (pktID) value of an incoming response packet is not set to 2'b00",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ERR_CLR_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_CMD_MISMATCH_QW,
      ._desc = "Set when a response packet comes into the Response FIFO that does not have the same type of command (GET, PUT, or Fetching AMO) as the corresponding request entry in the ORD and the remote status (rstatus) does not indicate an invalid command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "NO_ENTRY_IN_ORD",
      ._bpos = AR_NIC_ORB_ERR_CLR_NO_ENTRY_IN_ORD_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_NO_ENTRY_IN_ORD_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_NO_ENTRY_IN_ORD_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_NO_ENTRY_IN_ORD_QW,
      ._desc = "Set when a response packet comes into the Response FIFO for which there is no corresponding request in the ORD RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_ORB_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_ORB_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_ORB_ERR_CLR_RSTDATA & AR_NIC_ORB_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_ORB_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Reserved for the purpose of inserting a ",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_hss_msk_detail[] = {
    { ._name = "MBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_MBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_MBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_MBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_MBE_PTT_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "SBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_SBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_SBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_SBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_SBE_PTT_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_MBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_MBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_MBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_MBE_NTT_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "SBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_SBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_SBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_SBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_SBE_NTT_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FR_CHK",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_FR_CHK_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_FR_CHK_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_FR_CHK_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_FR_CHK_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TAIL_ON_HEAD",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_TAIL_ON_HEAD_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_TAIL_ON_HEAD_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_TAIL_ON_HEAD_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_TAIL_ON_HEAD_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NL_CRDT_UNF",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_NL_CRDT_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_NL_CRDT_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_NL_CRDT_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_NL_CRDT_UNF_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_REQ_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_REQ_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_REQ_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_REQ_MBE_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_REQ_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_REQ_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_REQ_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_REQ_SBE_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_PE",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_REQ_PE_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_REQ_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_REQ_PE_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_REQ_PE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_SPKT",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_REQ_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_REQ_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_REQ_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_REQ_SPKT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_UNF",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_REQ_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_REQ_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_REQ_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_REQ_UNF_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_REQ_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_REQ_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_REQ_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_REQ_FIFO_OVF_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_SBE",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_ORD_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_ORD_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_ORD_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_ORD_SBE_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_MBE",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_ORD_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_ORD_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_ORD_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_ORD_MBE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_TIMEOUT",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_ORD_TIMEOUT_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_ORD_TIMEOUT_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_ORD_TIMEOUT_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_ORD_TIMEOUT_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_SCRUB",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_ORD_SCRUB_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_ORD_SCRUB_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_ORD_SCRUB_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_ORD_SCRUB_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_CNT",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_RSP_FLIT_CNT_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_RSP_FLIT_CNT_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_RSP_FLIT_CNT_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_RSP_FLIT_CNT_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_RSP_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_RSP_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_RSP_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_RSP_MBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_RSP_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_RSP_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_RSP_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_RSP_SBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_PE",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_RSP_PE_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_RSP_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_RSP_PE_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_RSP_PE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_SPKT",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_RSP_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_RSP_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_RSP_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_RSP_SPKT_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_RSP_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_RSP_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_RSP_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_RSP_FIFO_OVF_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ILLEGAL_RSP_LSTAT",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_ILLEGAL_RSP_LSTAT_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_ILLEGAL_RSP_LSTAT_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_ILLEGAL_RSP_LSTAT_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_ILLEGAL_RSP_LSTAT_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ILLEGAL_RSP_PID",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_ILLEGAL_RSP_PID_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_ILLEGAL_RSP_PID_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_ILLEGAL_RSP_PID_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_ILLEGAL_RSP_PID_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_CMD_MISMATCH_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NO_ENTRY_IN_ORD",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_NO_ENTRY_IN_ORD_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_NO_ENTRY_IN_ORD_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_NO_ENTRY_IN_ORD_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_NO_ENTRY_IN_ORD_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_ORB_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_ORB_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_ORB_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_os_msk_detail[] = {
    { ._name = "MBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_MBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_MBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_MBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_MBE_PTT_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "SBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_SBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_SBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_SBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_SBE_PTT_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_MBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_MBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_MBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_MBE_NTT_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "SBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_SBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_SBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_SBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_SBE_NTT_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FR_CHK",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_FR_CHK_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_FR_CHK_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_FR_CHK_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_FR_CHK_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TAIL_ON_HEAD",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_TAIL_ON_HEAD_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_TAIL_ON_HEAD_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_TAIL_ON_HEAD_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_TAIL_ON_HEAD_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NL_CRDT_UNF",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_NL_CRDT_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_NL_CRDT_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_NL_CRDT_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_NL_CRDT_UNF_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_REQ_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_REQ_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_REQ_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_REQ_MBE_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_REQ_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_REQ_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_REQ_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_REQ_SBE_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_PE",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_REQ_PE_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_REQ_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_REQ_PE_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_REQ_PE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_SPKT",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_REQ_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_REQ_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_REQ_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_REQ_SPKT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_UNF",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_REQ_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_REQ_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_REQ_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_REQ_UNF_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_REQ_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_REQ_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_REQ_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_REQ_FIFO_OVF_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_SBE",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_ORD_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_ORD_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_ORD_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_ORD_SBE_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_MBE",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_ORD_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_ORD_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_ORD_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_ORD_MBE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_TIMEOUT",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_ORD_TIMEOUT_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_ORD_TIMEOUT_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_ORD_TIMEOUT_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_ORD_TIMEOUT_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_SCRUB",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_ORD_SCRUB_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_ORD_SCRUB_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_ORD_SCRUB_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_ORD_SCRUB_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_CNT",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_RSP_FLIT_CNT_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_RSP_FLIT_CNT_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_RSP_FLIT_CNT_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_RSP_FLIT_CNT_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_RSP_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_RSP_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_RSP_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_RSP_MBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_RSP_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_RSP_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_RSP_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_RSP_SBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_PE",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_RSP_PE_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_RSP_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_RSP_PE_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_RSP_PE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_SPKT",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_RSP_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_RSP_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_RSP_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_RSP_SPKT_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_RSP_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_RSP_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_RSP_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_RSP_FIFO_OVF_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ILLEGAL_RSP_LSTAT",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_ILLEGAL_RSP_LSTAT_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_ILLEGAL_RSP_LSTAT_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_ILLEGAL_RSP_LSTAT_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_ILLEGAL_RSP_LSTAT_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ILLEGAL_RSP_PID",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_ILLEGAL_RSP_PID_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_ILLEGAL_RSP_PID_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_ILLEGAL_RSP_PID_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_ILLEGAL_RSP_PID_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_CMD_MISMATCH_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NO_ENTRY_IN_ORD",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_NO_ENTRY_IN_ORD_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_NO_ENTRY_IN_ORD_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_NO_ENTRY_IN_ORD_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_NO_ENTRY_IN_ORD_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_ORB_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_ORB_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_ORB_ERR_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_ORB_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_first_flg_detail[] = {
    { ._name = "MBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_MBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_MBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_MBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_MBE_PTT_QW,
      ._desc = "27:27",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "SBE_PTT",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_SBE_PTT_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_SBE_PTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_SBE_PTT_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_SBE_PTT_QW,
      ._desc = "26:26",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "MBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_MBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_MBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_MBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_MBE_NTT_QW,
      ._desc = "25:25",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "SBE_NTT",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_SBE_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_SBE_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_SBE_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_SBE_NTT_QW,
      ._desc = "24:24",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "FR_CHK",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_FR_CHK_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_FR_CHK_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_FR_CHK_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_FR_CHK_QW,
      ._desc = "23:23",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "TAIL_ON_HEAD",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_TAIL_ON_HEAD_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_TAIL_ON_HEAD_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_TAIL_ON_HEAD_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_TAIL_ON_HEAD_QW,
      ._desc = "22:22",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NL_CRDT_UNF",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_NL_CRDT_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_NL_CRDT_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_NL_CRDT_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_NL_CRDT_UNF_QW,
      ._desc = "21:21",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_MBE",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_REQ_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_REQ_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_REQ_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_REQ_MBE_QW,
      ._desc = "20:20",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_SBE",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_REQ_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_REQ_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_REQ_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_REQ_SBE_QW,
      ._desc = "19:19",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_PE",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_REQ_PE_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_REQ_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_REQ_PE_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_REQ_PE_QW,
      ._desc = "18:18",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_SPKT",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_REQ_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_REQ_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_REQ_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_REQ_SPKT_QW,
      ._desc = "17:17",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_UNF",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_REQ_UNF_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_REQ_UNF_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_REQ_UNF_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_REQ_UNF_QW,
      ._desc = "16:16",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQ_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_REQ_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_REQ_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_REQ_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_REQ_FIFO_OVF_QW,
      ._desc = "15:15",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_SBE",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_ORD_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_ORD_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_ORD_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_ORD_SBE_QW,
      ._desc = "14:14",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_MBE",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_ORD_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_ORD_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_ORD_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_ORD_MBE_QW,
      ._desc = "13:13",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_TIMEOUT",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_ORD_TIMEOUT_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_ORD_TIMEOUT_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_ORD_TIMEOUT_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_ORD_TIMEOUT_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ORD_SCRUB",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_ORD_SCRUB_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_ORD_SCRUB_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_ORD_SCRUB_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_ORD_SCRUB_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FLIT_CNT",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_RSP_FLIT_CNT_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_RSP_FLIT_CNT_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_RSP_FLIT_CNT_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_RSP_FLIT_CNT_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_MBE",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_RSP_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_RSP_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_RSP_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_RSP_MBE_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_SBE",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_RSP_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_RSP_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_RSP_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_RSP_SBE_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_PE",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_RSP_PE_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_RSP_PE_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_RSP_PE_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_RSP_PE_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_SPKT",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_RSP_SPKT_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_RSP_SPKT_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_RSP_SPKT_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_RSP_SPKT_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSP_FIFO_OVF",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_RSP_FIFO_OVF_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_RSP_FIFO_OVF_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_RSP_FIFO_OVF_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_RSP_FIFO_OVF_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ILLEGAL_RSP_LSTAT",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_ILLEGAL_RSP_LSTAT_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_ILLEGAL_RSP_LSTAT_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_ILLEGAL_RSP_LSTAT_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_ILLEGAL_RSP_LSTAT_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "ILLEGAL_RSP_PID",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_ILLEGAL_RSP_PID_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_ILLEGAL_RSP_PID_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_ILLEGAL_RSP_PID_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_ILLEGAL_RSP_PID_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_CMD_MISMATCH_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NO_ENTRY_IN_ORD",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_NO_ENTRY_IN_ORD_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_NO_ENTRY_IN_ORD_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_NO_ENTRY_IN_ORD_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_NO_ENTRY_IN_ORD_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_ORB_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_ORB_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA & AR_NIC_ORB_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_ORB_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_hss_msk_detail[] = {
    { ._name = "MSK_VOID",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_MSK_MSK_VOID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_MSK_MSK_VOID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_MSK_MSK_VOID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_MSK_MSK_VOID_QW,
      ._desc = "Unused mask bits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ILLEGAL_RSP_LSTAT",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_MSK_ILLEGAL_RSP_LSTAT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_MSK_ILLEGAL_RSP_LSTAT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_MSK_ILLEGAL_RSP_LSTAT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_MSK_ILLEGAL_RSP_LSTAT_QW,
      ._desc = "Masks updates to A_NIC_ORB_ERR_INFO_HSS_DROP_RSP",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ILLEGAL_RSP_PID",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_MSK_ILLEGAL_RSP_PID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_MSK_ILLEGAL_RSP_PID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_MSK_ILLEGAL_RSP_PID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_MSK_ILLEGAL_RSP_PID_QW,
      ._desc = "Masks updates to A_NIC_ORB_ERR_INFO_HSS_DROP_RSP",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_MSK_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_MSK_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_MSK_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_MSK_CMD_MISMATCH_QW,
      ._desc = "Masks updates to A_NIC_ORB_ERR_INFO_HSS_DROP_RSP",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NO_ENTRY_IN_ORD",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_MSK_NO_ENTRY_IN_ORD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_MSK_NO_ENTRY_IN_ORD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_MSK_NO_ENTRY_IN_ORD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_MSK_NO_ENTRY_IN_ORD_QW,
      ._desc = "Masks updates to A_NIC_ORB_ERR_INFO_HSS_DROP_RSP",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DIAG",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_MSK_DIAG_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_MSK_DIAG_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_MSK_DIAG_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_MSK_DIAG_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_os_msk_detail[] = {
    { ._name = "MSK_VOID",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_MSK_MSK_VOID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_MSK_MSK_VOID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_MSK_MSK_VOID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_MSK_MSK_VOID_QW,
      ._desc = "Unused mask bits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ILLEGAL_RSP_LSTAT",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_MSK_ILLEGAL_RSP_LSTAT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_MSK_ILLEGAL_RSP_LSTAT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_MSK_ILLEGAL_RSP_LSTAT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_MSK_ILLEGAL_RSP_LSTAT_QW,
      ._desc = "Masks updates to A_NIC_ORB_ERR_INFO_OS_DROP_RSP",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ILLEGAL_RSP_PID",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_MSK_ILLEGAL_RSP_PID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_MSK_ILLEGAL_RSP_PID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_MSK_ILLEGAL_RSP_PID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_MSK_ILLEGAL_RSP_PID_QW,
      ._desc = "Masks updates to A_NIC_ORB_ERR_INFO_OS_DROP_RSP",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CMD_MISMATCH",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_MSK_CMD_MISMATCH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_MSK_CMD_MISMATCH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_MSK_CMD_MISMATCH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_MSK_CMD_MISMATCH_QW,
      ._desc = "Masks updates to A_NIC_ORB_ERR_INFO_OS_DROP_RSP",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "NO_ENTRY_IN_ORD",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_MSK_NO_ENTRY_IN_ORD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_MSK_NO_ENTRY_IN_ORD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_MSK_NO_ENTRY_IN_ORD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_MSK_NO_ENTRY_IN_ORD_QW,
      ._desc = "Masks updates to A_NIC_ORB_ERR_INFO_OS_DROP_RSP",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DIAG",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_MSK_DIAG_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_MSK_DIAG_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_MSK_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_MSK_DIAG_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_MSK_DIAG_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_hss_drop_rsp_detail[] = {
    { ._name = "ERR_ENCODING",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_ERR_ENCODING_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_ERR_ENCODING_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_ERR_ENCODING_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_ERR_ENCODING_QW,
      ._desc = "4'bxxx1 - NO_ENTRY_IN_ORD 4'bxx1x - CMD_MISMATCH 4'bx1xx - ILLEGAL_RSP_PID 4'b1xxx - ILLEGAL_RSP_LSTAT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RC",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RC_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RC_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RC_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RC_QW,
      ._desc = "Routing Control",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSTATUS",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTATUS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTATUS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTATUS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTATUS_QW,
      ._desc = "Remote Status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_LSTATUS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_LSTATUS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_LSTATUS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_LSTATUS_QW,
      ._desc = "Local Status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LB",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_LB_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_LB_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_LB_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_LB_QW,
      ._desc = "Packet Generated by Local Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PORTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_PORTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_PORTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_PORTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_PORTID_QW,
      ._desc = "Port Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_PKTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_PKTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_PKTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_PKTID_QW,
      ._desc = "Packet Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSPCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSPCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_os_drop_rsp_detail[] = {
    { ._name = "ERR_ENCODING",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_ERR_ENCODING_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_ERR_ENCODING_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_ERR_ENCODING_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_ERR_ENCODING_QW,
      ._desc = "4'bxxx1 - NO_ENTRY_IN_ORD 4'bxx1x - CMD_MISMATCH 4'bx1xx - ILLEGAL_RSP_PID 4'b1xxx - ILLEGAL_RSP_LSTAT",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RC",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RC_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RC_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RC_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RC_QW,
      ._desc = "Routing Control",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSTATUS",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTATUS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTATUS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTATUS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTATUS_QW,
      ._desc = "Remote Status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_LSTATUS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_LSTATUS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_LSTATUS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_LSTATUS_QW,
      ._desc = "Local Status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LB",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_LB_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_LB_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_LB_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_LB_QW,
      ._desc = "Packet Generated by Local Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PORTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_PORTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_PORTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_PORTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_PORTID_QW,
      ._desc = "Port Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_PKTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_PKTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_PKTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_PKTID_QW,
      ._desc = "Packet Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSPCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSPCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA & AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_rsp_spkt_detail[] = {
    { ._name = "RC",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RC_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RC_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SPKT_RC_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RC_QW,
      ._desc = "Routing Control",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSTATUS",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTATUS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTATUS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTATUS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTATUS_QW,
      ._desc = "Remote Status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LSTATUS",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SPKT_LSTATUS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SPKT_LSTATUS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SPKT_LSTATUS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SPKT_LSTATUS_QW,
      ._desc = "Local Status - Always read as zero if the previous write access was by hardware",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LB",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SPKT_LB_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SPKT_LB_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SPKT_LB_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SPKT_LB_QW,
      ._desc = "Packet Generated by Local Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PORTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SPKT_PORTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SPKT_PORTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SPKT_PORTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SPKT_PORTID_QW,
      ._desc = "Port Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SPKT_PKTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SPKT_PKTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SPKT_PKTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SPKT_PKTID_QW,
      ._desc = "Packet Identifier - Bits 32:21 always read as zero if the previous write access was by hardware",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSPCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSPCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SPKT_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SPKT_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SPKT_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SPKT_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SPKT_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SPKT_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SPKT_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SPKT_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_rsp_pe_detail[] = {
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_PE_RSPCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_PE_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_PE_RSPCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_PE_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_PE_PKTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_PE_PKTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_PE_PKTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_PE_PKTID_QW,
      ._desc = "Packet Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSTATUS",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTATUS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTATUS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_PE_RSTATUS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTATUS_QW,
      ._desc = "Remote Status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_PE_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_PE_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_PE_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_PE_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_PE_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_PE_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_PE_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_PE_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_rsp_sbe_detail[] = {
    { ._name = "DATA_FLIT",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SBE_DATA_FLIT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SBE_DATA_FLIT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SBE_DATA_FLIT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SBE_DATA_FLIT_QW,
      ._desc = "2'b00: SBE in Data Flit 0 2'b01: SBE in Data Flit 1 2'b10: SBE in Data Flit 2 2'b11: SBE in Data Flit 3  If multiple Data Flits contain bit errors, this field indicates the lowest value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ERR_MSK",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SBE_ERR_MSK_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SBE_ERR_MSK_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SBE_ERR_MSK_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SBE_ERR_MSK_QW,
      ._desc = "2'bx1: Error in bits 63:0 2'b1x: Error in bits 135:72",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSPCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SBE_RSPCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SBE_PKTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SBE_PKTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SBE_PKTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SBE_PKTID_QW,
      ._desc = "Packet Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSTATUS",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTATUS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTATUS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTATUS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTATUS_QW,
      ._desc = "Remote Status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SBE_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SBE_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SBE_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SBE_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SBE_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SBE_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SBE_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SBE_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_SBE_SYNDROME_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_SBE_SYNDROME_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_SBE_SYNDROME_QW,
      ._desc = "SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_rsp_mbe_detail[] = {
    { ._name = "DATA_FLIT",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_MBE_DATA_FLIT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_MBE_DATA_FLIT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_MBE_DATA_FLIT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_MBE_DATA_FLIT_QW,
      ._desc = "2'b00: MBE in Data Flit 0 2'b01: MBE in Data Flit 1 2'b10: MBE in Data Flit 2 2'b11: MBE in Data Flit 3  If multiple Data Flits contain bit errors, this field indicates the lowest value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "ERR_MSK",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_MBE_ERR_MSK_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_MBE_ERR_MSK_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_MBE_ERR_MSK_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_MBE_ERR_MSK_QW,
      ._desc = "2'bx1: Error in bits 63:0 2'b1x: Error in bits 135:72",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSPCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_MBE_RSPCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_MBE_PKTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_MBE_PKTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_MBE_PKTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_MBE_PKTID_QW,
      ._desc = "Packet Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSTATUS",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTATUS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTATUS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTATUS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTATUS_QW,
      ._desc = "Remote Status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_MBE_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_MBE_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_MBE_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_MBE_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_MBE_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_MBE_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_MBE_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_MBE_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME",
      ._bpos = AR_NIC_ORB_ERR_INFO_RSP_MBE_SYNDROME_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_RSP_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_RSP_MBE_SYNDROME_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_RSP_MBE_SYNDROME_QW,
      ._desc = "MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_ord_scrub_lo_detail[] = {
    { ._name = "PKTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_PKTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_PKTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_PKTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_PKTID_QW,
      ._desc = "Packet ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_SSID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_SSID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_SSID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_SSID_QW,
      ._desc = "Synchronization Sequence Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_MDH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_MDH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_MDH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_MDH_QW,
      ._desc = "Memory Domain Handle for PUTs or lMDH for GETs or Fetching AMOs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TRK_RSP",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_TRK_RSP_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_TRK_RSP_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_TRK_RSP_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_TRK_RSP_QW,
      ._desc = "Track Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSPCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSPCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TIMECNT",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_TIMECNT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_TIMECNT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_TIMECNT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_TIMECNT_QW,
      ._desc = "Time Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_ord_scrub_up_detail[] = {
    { ._name = "WC",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_WC_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_WC_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_WC_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_WC_QW,
      ._desc = "Write Combine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "FR",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_FR_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_FR_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_FR_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_FR_QW,
      ._desc = "Flagged Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "FR_ERR",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_FR_ERR_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_FR_ERR_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_FR_ERR_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_FR_ERR_QW,
      ._desc = "Flagged Response Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "VOID_54_48",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_VOID_54_48_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_VOID_54_48_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_VOID_54_48_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_VOID_54_48_QW,
      ._desc = "Unused for GET Requests",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "F",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_F_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_F_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_F_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_F_QW,
      ._desc = "First Request in Message",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_NTT_QW,
      ._desc = "Node Translation Table Lookup Enable",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "LPTAG",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_LPTAG_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_LPTAG_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_LPTAG_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_LPTAG_QW,
      ._desc = "Local Protection Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_PUT_39_12",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_ADDR_PUT_39_12_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_ADDR_PUT_39_12_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_ADDR_PUT_39_12_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_ADDR_PUT_39_12_QW,
      ._desc = "PUT Address bits 39:12",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_GET_39_0",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_ADDR_GET_39_0_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_ADDR_GET_39_0_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_ADDR_GET_39_0_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_ADDR_GET_39_0_QW,
      ._desc = "GET Address bits 39:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LCNT",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_LCNT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_LCNT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_LCNT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_LCNT_QW,
      ._desc = "Local 32-bit Word Count Minus One",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_ord_mbe_lo_detail[] = {
    { ._name = "MMR_DETECTED",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_MMR_DETECTED_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_MMR_DETECTED_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_MMR_DETECTED_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_MMR_DETECTED_QW,
      ._desc = "MMR detected MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_PKTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_PKTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_PKTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_PKTID_QW,
      ._desc = "Packet ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_SSID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_SSID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_SSID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_SSID_QW,
      ._desc = "Synchronization Sequence Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_MDH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_MDH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_MDH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_MDH_QW,
      ._desc = "Memory Domain Handle for PUTs or lMDH for GETs or Fetching AMOs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TRK_RSP",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_TRK_RSP_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_TRK_RSP_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_TRK_RSP_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_TRK_RSP_QW,
      ._desc = "Track Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSPCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSPCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TIMECNT",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_TIMECNT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_TIMECNT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_TIMECNT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_TIMECNT_QW,
      ._desc = "Time Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_ord_mbe_up_detail[] = {
    { ._name = "SYNDROME",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_SYNDROME_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_SYNDROME_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_SYNDROME_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_SYNDROME_QW,
      ._desc = "Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "WC",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_WC_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_WC_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_WC_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_WC_QW,
      ._desc = "Write Combine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "FR",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_FR_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_FR_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_FR_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_FR_QW,
      ._desc = "Flagged Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "FR_ERR",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_FR_ERR_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_FR_ERR_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_FR_ERR_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_FR_ERR_QW,
      ._desc = "Flagged Response Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "VOID_54_48",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_VOID_54_48_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_VOID_54_48_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_VOID_54_48_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_VOID_54_48_QW,
      ._desc = "Unused for GET Requests",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "F",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_F_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_F_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_F_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_F_QW,
      ._desc = "First Request in Message",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_NTT_QW,
      ._desc = "Node Translation Table Lookup Enable",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "LPTAG",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_LPTAG_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_LPTAG_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_LPTAG_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_LPTAG_QW,
      ._desc = "Local Protection Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_PUT_39_12",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_ADDR_PUT_39_12_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_ADDR_PUT_39_12_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_ADDR_PUT_39_12_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_ADDR_PUT_39_12_QW,
      ._desc = "PUT Address bits 39:12",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_GET_39_0",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_ADDR_GET_39_0_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_ADDR_GET_39_0_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_ADDR_GET_39_0_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_ADDR_GET_39_0_QW,
      ._desc = "GET Address bits 39:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LCNT",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_LCNT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_LCNT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_LCNT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_LCNT_QW,
      ._desc = "Local 32-bit Word Count Minus One",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_ord_sbe_lo_detail[] = {
    { ._name = "MMR_DETECTED",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_MMR_DETECTED_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_MMR_DETECTED_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_MMR_DETECTED_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_MMR_DETECTED_QW,
      ._desc = "MMR detected SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PKTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_PKTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_PKTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_PKTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_PKTID_QW,
      ._desc = "Packet ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_SSID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_SSID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_SSID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_SSID_QW,
      ._desc = "Synchronization Sequence Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_MDH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_MDH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_MDH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_MDH_QW,
      ._desc = "Memory Domain Handle for PUTs or lMDH for GETs or Fetching AMOs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TRK_RSP",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_TRK_RSP_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_TRK_RSP_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_TRK_RSP_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_TRK_RSP_QW,
      ._desc = "Track Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RSPCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSPCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSPCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSPCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSPCMD_QW,
      ._desc = "Response Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "TIMECNT",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_TIMECNT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_TIMECNT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_TIMECNT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_TIMECNT_QW,
      ._desc = "Time Count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_ord_sbe_up_detail[] = {
    { ._name = "SYNDROME",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_SYNDROME_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_SYNDROME_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_SYNDROME_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_SYNDROME_QW,
      ._desc = "Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "WC",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_WC_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_WC_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_WC_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_WC_QW,
      ._desc = "Write Combine",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "FR",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_FR_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_FR_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_FR_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_FR_QW,
      ._desc = "Flagged Response",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "FR_ERR",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_FR_ERR_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_FR_ERR_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_FR_ERR_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_FR_ERR_QW,
      ._desc = "Flagged Response Error",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "VOID_54_48",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_VOID_54_48_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_VOID_54_48_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_VOID_54_48_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_VOID_54_48_QW,
      ._desc = "Unused for GET Requests",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "F",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_F_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_F_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_F_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_F_QW,
      ._desc = "First Request in Message",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "NTT",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_NTT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_NTT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_NTT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_NTT_QW,
      ._desc = "Node Translation Table Lookup Enable",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "LPTAG",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_LPTAG_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_LPTAG_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_LPTAG_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_LPTAG_QW,
      ._desc = "Local Protection Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_PUT_39_12",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_ADDR_PUT_39_12_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_ADDR_PUT_39_12_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_ADDR_PUT_39_12_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_ADDR_PUT_39_12_QW,
      ._desc = "PUT Address bits 39:12",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = "ADDR_GET_39_0",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_ADDR_GET_39_0_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_ADDR_GET_39_0_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_ADDR_GET_39_0_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_ADDR_GET_39_0_QW,
      ._desc = "GET Address bits 39:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LCNT",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_LCNT_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_LCNT_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_LCNT_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_LCNT_QW,
      ._desc = "Local 32-bit Word Count Minus One",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA & AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000003ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_req_pe_detail[] = {
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_PE_MDH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_PE_MDH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_PE_MDH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_PE_MDH_QW,
      ._desc = "Memory Domain Handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_PE_SSID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_PE_SSID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_PE_SSID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_PE_SSID_QW,
      ._desc = "SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REQCMD",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_PE_REQCMD_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_PE_REQCMD_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_PE_REQCMD_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_PE_REQCMD_QW,
      ._desc = "Request Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PKT_SRC",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_PE_PKT_SRC_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_PE_PKT_SRC_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_PE_PKT_SRC_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_PE_PKT_SRC_QW,
      ._desc = "Packet Source",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DSTID",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_PE_DSTID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_PE_DSTID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_PE_DSTID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_PE_DSTID_QW,
      ._desc = "Destination Core Identifier",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "DST",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_PE_DST_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_PE_DST_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_PE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_PE_DST_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_PE_DST_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_req_sbe_detail[] = {
    { ._name = "ERR_MSK",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_SBE_ERR_MSK_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_SBE_ERR_MSK_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_SBE_ERR_MSK_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_SBE_ERR_MSK_QW,
      ._desc = "2'bx1: Error in bits 63:0 2'b1x: Error in bits 135:72",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_SBE_SSID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_SBE_SSID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_SBE_SSID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_SBE_SSID_QW,
      ._desc = "SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_SBE_MDH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_SBE_MDH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_SBE_MDH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_SBE_MDH_QW,
      ._desc = "Memory Domain Handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_SBE_PTAG_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_SBE_PTAG_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_SBE_PTAG_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_SBE_PTAG_QW,
      ._desc = "Protection Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME1",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_SBE_SYNDROME1_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_SBE_SYNDROME1_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_SBE_SYNDROME1_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_SBE_SYNDROME1_QW,
      ._desc = "Syndrome for bits 135:72",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME0",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_SBE_SYNDROME0_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_SBE_SYNDROME0_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_SBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_SBE_SYNDROME0_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_SBE_SYNDROME0_QW,
      ._desc = "Syndrome for bits 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_req_mbe_detail[] = {
    { ._name = "ERR_MSK",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_MBE_ERR_MSK_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_MBE_ERR_MSK_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_MBE_ERR_MSK_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_MBE_ERR_MSK_QW,
      ._desc = "2'bx1: Error in bits 63:0 2'b1x: Error in bits 135:72",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SSID",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_MBE_SSID_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_MBE_SSID_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_MBE_SSID_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_MBE_SSID_QW,
      ._desc = "SSID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_MBE_MDH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_MBE_MDH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_MBE_MDH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_MBE_MDH_QW,
      ._desc = "Memory Domain Handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_MBE_PTAG_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_MBE_PTAG_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_MBE_PTAG_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_MBE_PTAG_QW,
      ._desc = "Protection Tag",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME1",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_MBE_SYNDROME1_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_MBE_SYNDROME1_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_MBE_SYNDROME1_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_MBE_SYNDROME1_QW,
      ._desc = "Syndrome for bits 135:72",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "SYNDROME0",
      ._bpos = AR_NIC_ORB_ERR_INFO_REQ_MBE_SYNDROME0_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_REQ_MBE_SYNDROME0_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_REQ_MBE_RSTDATA & AR_NIC_ORB_ERR_INFO_REQ_MBE_SYNDROME0_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_REQ_MBE_SYNDROME0_QW,
      ._desc = "Syndrome for bits 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_net_rsp_track_1_detail[] = {
    { ._name = "MAX_RSP_TIME",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_MAX_RSP_TIME_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_MAX_RSP_TIME_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_TRACK_1_MAX_RSP_TIME_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_MAX_RSP_TIME_QW,
      ._desc = "Tracks the maximum response time for an outstanding request to the Aries Network",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "MIN_RSP_TIME",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_MIN_RSP_TIME_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_MIN_RSP_TIME_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_TRACK_1_MIN_RSP_TIME_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_MIN_RSP_TIME_QW,
      ._desc = "Tracks the minimum response time for an outstanding request to the Aries Network",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_net_rsp_track_2_detail[] = {
    { ._name = "SUM_RSP_TIME_COUNT",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_SUM_RSP_TIME_COUNT_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_SUM_RSP_TIME_COUNT_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_TRACK_2_SUM_RSP_TIME_COUNT_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_SUM_RSP_TIME_COUNT_QW,
      ._desc = "Tracks the sum of all response times for outstanding requests to the Aries Network",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_net_rsp_hist_bin01_detail[] = {
    { ._name = "BIN1_COUNT",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_BIN1_COUNT_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_BIN1_COUNT_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_BIN1_COUNT_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_BIN1_COUNT_QW,
      ._desc = "Bin 1 count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "BIN0_COUNT",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_BIN0_COUNT_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_BIN0_COUNT_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_BIN0_COUNT_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_BIN0_COUNT_QW,
      ._desc = "Bin 0 count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_net_rsp_hist_bin23_detail[] = {
    { ._name = "BIN3_COUNT",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_BIN3_COUNT_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_BIN3_COUNT_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_BIN3_COUNT_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_BIN3_COUNT_QW,
      ._desc = "Bin 3 count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "BIN2_COUNT",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_BIN2_COUNT_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_BIN2_COUNT_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_BIN2_COUNT_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_BIN2_COUNT_QW,
      ._desc = "Bin 2 count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_net_rsp_hist_bin45_detail[] = {
    { ._name = "BIN5_COUNT",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_BIN5_COUNT_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_BIN5_COUNT_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_BIN5_COUNT_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_BIN5_COUNT_QW,
      ._desc = "Bin 5 count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "BIN4_COUNT",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_BIN4_COUNT_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_BIN4_COUNT_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_BIN4_COUNT_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_BIN4_COUNT_QW,
      ._desc = "Bin 4 count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_net_rsp_hist_bin67_detail[] = {
    { ._name = "BIN7_COUNT",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_BIN7_COUNT_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_BIN7_COUNT_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_BIN7_COUNT_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_BIN7_COUNT_QW,
      ._desc = "Bin 7 count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "BIN6_COUNT",
      ._bpos = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_BIN6_COUNT_BP,
      ._mask = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_BIN6_COUNT_MASK,
      ._rval = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_RSTDATA & AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_BIN6_COUNT_MASK,
      ._index = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_BIN6_COUNT_QW,
      ._desc = "Bin 6 count",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_req_bytes_sent_detail[] = {
    { ._name = "BYTE_CNT",
      ._bpos = AR_NIC_ORB_PRF_REQ_BYTES_SENT_BYTE_CNT_BP,
      ._mask = AR_NIC_ORB_PRF_REQ_BYTES_SENT_BYTE_CNT_MASK,
      ._rval = AR_NIC_ORB_PRF_REQ_BYTES_SENT_RSTDATA & AR_NIC_ORB_PRF_REQ_BYTES_SENT_BYTE_CNT_MASK,
      ._index = AR_NIC_ORB_PRF_REQ_BYTES_SENT_BYTE_CNT_QW,
      ._desc = "Count of the number of bytes sent to the network",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_rsp_bytes_rcvd_detail[] = {
    { ._name = "BYTE_CNT",
      ._bpos = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_BYTE_CNT_BP,
      ._mask = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_BYTE_CNT_MASK,
      ._rval = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_RSTDATA & AR_NIC_ORB_PRF_RSP_BYTES_RCVD_BYTE_CNT_MASK,
      ._index = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_BYTE_CNT_QW,
      ._desc = "Count of the number of bytes received from the network",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_stall_duration_en_detail[] = {
    { ._name = "ENABLE_PKTID",
      ._bpos = AR_NIC_ORB_PRF_STALL_DURATION_EN_ENABLE_PKTID_BP,
      ._mask = AR_NIC_ORB_PRF_STALL_DURATION_EN_ENABLE_PKTID_MASK,
      ._rval = AR_NIC_ORB_PRF_STALL_DURATION_EN_RSTDATA & AR_NIC_ORB_PRF_STALL_DURATION_EN_ENABLE_PKTID_MASK,
      ._index = AR_NIC_ORB_PRF_STALL_DURATION_EN_ENABLE_PKTID_QW,
      ._desc = "Set to enable A_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE_CRDTS",
      ._bpos = AR_NIC_ORB_PRF_STALL_DURATION_EN_ENABLE_CRDTS_BP,
      ._mask = AR_NIC_ORB_PRF_STALL_DURATION_EN_ENABLE_CRDTS_MASK,
      ._rval = AR_NIC_ORB_PRF_STALL_DURATION_EN_RSTDATA & AR_NIC_ORB_PRF_STALL_DURATION_EN_ENABLE_CRDTS_MASK,
      ._index = AR_NIC_ORB_PRF_STALL_DURATION_EN_ENABLE_CRDTS_QW,
      ._desc = "Set to enable A_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_req_pktid_stall_duration_detail[] = {
    { ._name = "VALUE",
      ._bpos = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_VALUE_BP,
      ._mask = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_VALUE_MASK,
      ._rval = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_RSTDATA & AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_VALUE_MASK,
      ._index = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_VALUE_QW,
      ._desc = "The maximum duration",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_prf_req_crdts_stall_duration_detail[] = {
    { ._name = "VALUE",
      ._bpos = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_VALUE_BP,
      ._mask = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_VALUE_MASK,
      ._rval = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_RSTDATA & AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_VALUE_MASK,
      ._index = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_VALUE_QW,
      ._desc = "The maximum duration",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RWS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_ntt_table_detail[] = {
    { ._name = "SYNDROME",
      ._bpos = AR_NIC_ORB_CFG_NTT_TABLE_SYNDROME_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_TABLE_SYNDROME_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_NTT_TABLE_SYNDROME_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_TABLE_SYNDROME_QW,
      ._desc = "Syndrome, returned because these bits are available",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "R"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_ORB_CFG_NTT_TABLE_CHECKBITS_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_TABLE_CHECKBITS_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_NTT_TABLE_CHECKBITS_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_TABLE_CHECKBITS_QW,
      ._desc = "Corrected Check Bits",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "R"
    },
    { ._name = "RPLC_SIZE",
      ._bpos = AR_NIC_ORB_CFG_NTT_TABLE_RPLC_SIZE_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_TABLE_RPLC_SIZE_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_NTT_TABLE_RPLC_SIZE_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_TABLE_RPLC_SIZE_QW,
      ._desc = "'s': Replacement block size = 2s 0 - 11 - 22 - 43 - 84 - 165 - 326 - invalid7 - invalid  RPLC_SIZE should be less than GRANULARITY",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "RPLC_PHY_ADR",
      ._bpos = AR_NIC_ORB_CFG_NTT_TABLE_RPLC_PHY_ADR_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_TABLE_RPLC_PHY_ADR_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_NTT_TABLE_RPLC_PHY_ADR_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_TABLE_RPLC_PHY_ADR_QW,
      ._desc = "Entry n, Replacement Physical Address",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "RPLC_NIC",
      ._bpos = AR_NIC_ORB_CFG_NTT_TABLE_RPLC_NIC_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_TABLE_RPLC_NIC_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_NTT_TABLE_RPLC_NIC_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_TABLE_RPLC_NIC_QW,
      ._desc = "Entry n, Replacement Physical NIC",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "BLK_PHYS_ADR",
      ._bpos = AR_NIC_ORB_CFG_NTT_TABLE_BLK_PHYS_ADR_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_TABLE_BLK_PHYS_ADR_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_NTT_TABLE_BLK_PHYS_ADR_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_TABLE_BLK_PHYS_ADR_QW,
      ._desc = "Entry n, Physical Network Address",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "BLK_NIC",
      ._bpos = AR_NIC_ORB_CFG_NTT_TABLE_BLK_NIC_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_TABLE_BLK_NIC_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_NTT_TABLE_BLK_NIC_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_TABLE_BLK_NIC_QW,
      ._desc = "Entry n, Physical NIC",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_ntt_config_detail[] = {
    { ._name = "MEM_EN",
      ._bpos = AR_NIC_ORB_CFG_NTT_CONFIG_MEM_EN_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_CONFIG_MEM_EN_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_CONFIG_RSTDATA & AR_NIC_ORB_CFG_NTT_CONFIG_MEM_EN_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_CONFIG_MEM_EN_QW,
      ._desc = "If this bit is set to 1'b1, the NTT RAM is always enabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DISABLE_ERR",
      ._bpos = AR_NIC_ORB_CFG_NTT_CONFIG_DISABLE_ERR_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_CONFIG_DISABLE_ERR_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_CONFIG_RSTDATA & AR_NIC_ORB_CFG_NTT_CONFIG_DISABLE_ERR_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_CONFIG_DISABLE_ERR_QW,
      ._desc = "Disable the fatal translation error signal to ORB request logic, preventing reads of NTT, that generate bit errors, from request packets from being processed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "GRANULARITY",
      ._bpos = AR_NIC_ORB_CFG_NTT_CONFIG_GRANULARITY_BP,
      ._mask = AR_NIC_ORB_CFG_NTT_CONFIG_GRANULARITY_MASK,
      ._rval = AR_NIC_ORB_CFG_NTT_CONFIG_RSTDATA & AR_NIC_ORB_CFG_NTT_CONFIG_GRANULARITY_MASK,
      ._index = AR_NIC_ORB_CFG_NTT_CONFIG_GRANULARITY_QW,
      ._desc = "'k': Mapping granularity = 2k 0 - Invalid 1 - 2 2 - 4 3 - 8 4 - 16 5 - 32 6 - 64 7 or greater - Invalid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_ntt_detail[] = {
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_ERR_INFO_NTT_MDH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_NTT_MDH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_NTT_RSTDATA & AR_NIC_ORB_ERR_INFO_NTT_MDH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_NTT_MDH_QW,
      ._desc = "Memory Domain Handle of the request that caused the error (MBE Only)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_ORB_ERR_INFO_NTT_PTAG_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_NTT_PTAG_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_NTT_RSTDATA & AR_NIC_ORB_ERR_INFO_NTT_PTAG_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_NTT_PTAG_QW,
      ._desc = "Protection Tag of the request that caused the error (MBE Only)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_ORB_ERR_INFO_NTT_MBE_ADDRESS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_NTT_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_NTT_RSTDATA & AR_NIC_ORB_ERR_INFO_NTT_MBE_ADDRESS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_NTT_MBE_ADDRESS_QW,
      ._desc = "MBE Address Virtual Node ID shifted by granularity",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_ORB_ERR_INFO_NTT_MBE_SYNDROME_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_NTT_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_NTT_RSTDATA & AR_NIC_ORB_ERR_INFO_NTT_MBE_SYNDROME_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_NTT_MBE_SYNDROME_QW,
      ._desc = "MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_ORB_ERR_INFO_NTT_SBE_ADDRESS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_NTT_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_NTT_RSTDATA & AR_NIC_ORB_ERR_INFO_NTT_SBE_ADDRESS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_NTT_SBE_ADDRESS_QW,
      ._desc = "SBE Address Virtual Node ID shifted by granularity",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_ORB_ERR_INFO_NTT_SBE_SYNDROME_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_NTT_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_NTT_RSTDATA & AR_NIC_ORB_ERR_INFO_NTT_SBE_SYNDROME_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_NTT_SBE_SYNDROME_QW,
      ._desc = "SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MMR_DETECTED_MBE",
      ._bpos = AR_NIC_ORB_ERR_INFO_NTT_MMR_DETECTED_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_NTT_MMR_DETECTED_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_NTT_RSTDATA & AR_NIC_ORB_ERR_INFO_NTT_MMR_DETECTED_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_NTT_MMR_DETECTED_MBE_QW,
      ._desc = "MMR read detected the MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MMR_DETECTED_SBE",
      ._bpos = AR_NIC_ORB_ERR_INFO_NTT_MMR_DETECTED_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_NTT_MMR_DETECTED_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_NTT_RSTDATA & AR_NIC_ORB_ERR_INFO_NTT_MMR_DETECTED_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_NTT_MMR_DETECTED_SBE_QW,
      ._desc = "MMR read detected the SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_errinj_ntt_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_NTT_ADDRESS_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_NTT_ADDRESS_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_NTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_NTT_ADDRESS_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_NTT_ADDRESS_QW,
      ._desc = "BIts 43:32 are the NTT address to match",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_NTT_CHECKBITS_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_NTT_CHECKBITS_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_NTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_NTT_CHECKBITS_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_NTT_CHECKBITS_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_NTT_TRIGGERED_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_NTT_TRIGGERED_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_NTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_NTT_TRIGGERED_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_NTT_TRIGGERED_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_NTT_MODE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_NTT_MODE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_NTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_NTT_MODE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_NTT_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2 : Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_NTT_ENABLE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_NTT_ENABLE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_NTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_NTT_ENABLE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_NTT_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_ptt_table_detail[] = {
    { ._name = "PKEY_3",
      ._bpos = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_3_BP,
      ._mask = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_3_MASK,
      ._rval = AR_NIC_ORB_CFG_PTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_PTT_TABLE_PKEY_3_MASK,
      ._index = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_3_QW,
      ._desc = "PKey N+3",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "PKEY_2",
      ._bpos = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_2_BP,
      ._mask = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_2_MASK,
      ._rval = AR_NIC_ORB_CFG_PTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_PTT_TABLE_PKEY_2_MASK,
      ._index = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_2_QW,
      ._desc = "PKey N+2",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "PKEY_1",
      ._bpos = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_1_BP,
      ._mask = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_1_MASK,
      ._rval = AR_NIC_ORB_CFG_PTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_PTT_TABLE_PKEY_1_MASK,
      ._index = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_1_QW,
      ._desc = "PKey N+1",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = "PKEY_0",
      ._bpos = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_0_BP,
      ._mask = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_0_MASK,
      ._rval = AR_NIC_ORB_CFG_PTT_TABLE_RSTDATA & AR_NIC_ORB_CFG_PTT_TABLE_PKEY_0_MASK,
      ._index = AR_NIC_ORB_CFG_PTT_TABLE_PKEY_0_QW,
      ._desc = "PKey N+0",
      ._type_bitmsk = 0x0000000000000009ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_cfg_ptt_config_detail[] = {
    { ._name = "MEM_EN",
      ._bpos = AR_NIC_ORB_CFG_PTT_CONFIG_MEM_EN_BP,
      ._mask = AR_NIC_ORB_CFG_PTT_CONFIG_MEM_EN_MASK,
      ._rval = AR_NIC_ORB_CFG_PTT_CONFIG_RSTDATA & AR_NIC_ORB_CFG_PTT_CONFIG_MEM_EN_MASK,
      ._index = AR_NIC_ORB_CFG_PTT_CONFIG_MEM_EN_QW,
      ._desc = "If this bit is set to 1'b1, the PTT RAM is always enabled",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DISABLE_ERR",
      ._bpos = AR_NIC_ORB_CFG_PTT_CONFIG_DISABLE_ERR_BP,
      ._mask = AR_NIC_ORB_CFG_PTT_CONFIG_DISABLE_ERR_MASK,
      ._rval = AR_NIC_ORB_CFG_PTT_CONFIG_RSTDATA & AR_NIC_ORB_CFG_PTT_CONFIG_DISABLE_ERR_MASK,
      ._index = AR_NIC_ORB_CFG_PTT_CONFIG_DISABLE_ERR_QW,
      ._desc = "Disable the fatal translation error signal to ORB request logic, preventing reads of PTT, that generate bit errors, from request packets from being processed",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DISABLE",
      ._bpos = AR_NIC_ORB_CFG_PTT_CONFIG_DISABLE_BP,
      ._mask = AR_NIC_ORB_CFG_PTT_CONFIG_DISABLE_MASK,
      ._rval = AR_NIC_ORB_CFG_PTT_CONFIG_RSTDATA & AR_NIC_ORB_CFG_PTT_CONFIG_DISABLE_MASK,
      ._index = AR_NIC_ORB_CFG_PTT_CONFIG_DISABLE_QW,
      ._desc = "If set, disables PTT translation",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_err_info_ptt_detail[] = {
    { ._name = "MDH",
      ._bpos = AR_NIC_ORB_ERR_INFO_PTT_MDH_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_PTT_MDH_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_PTT_RSTDATA & AR_NIC_ORB_ERR_INFO_PTT_MDH_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_PTT_MDH_QW,
      ._desc = "Memory Domain Handle of the request that caused the error (MBE Only)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "PTAG",
      ._bpos = AR_NIC_ORB_ERR_INFO_PTT_PTAG_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_PTT_PTAG_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_PTT_RSTDATA & AR_NIC_ORB_ERR_INFO_PTT_PTAG_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_PTT_PTAG_QW,
      ._desc = "Protection Tag of the request that caused the error (MBE Only)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MBE_ADDRESS",
      ._bpos = AR_NIC_ORB_ERR_INFO_PTT_MBE_ADDRESS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_PTT_MBE_ADDRESS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_PTT_RSTDATA & AR_NIC_ORB_ERR_INFO_PTT_MBE_ADDRESS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_PTT_MBE_ADDRESS_QW,
      ._desc = "MBE Address (PTAG)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MBE_SYNDROME",
      ._bpos = AR_NIC_ORB_ERR_INFO_PTT_MBE_SYNDROME_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_PTT_MBE_SYNDROME_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_PTT_RSTDATA & AR_NIC_ORB_ERR_INFO_PTT_MBE_SYNDROME_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_PTT_MBE_SYNDROME_QW,
      ._desc = "MBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SBE_ADDRESS",
      ._bpos = AR_NIC_ORB_ERR_INFO_PTT_SBE_ADDRESS_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_PTT_SBE_ADDRESS_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_PTT_RSTDATA & AR_NIC_ORB_ERR_INFO_PTT_SBE_ADDRESS_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_PTT_SBE_ADDRESS_QW,
      ._desc = "SBE Address (PTAG)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "SBE_SYNDROME",
      ._bpos = AR_NIC_ORB_ERR_INFO_PTT_SBE_SYNDROME_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_PTT_SBE_SYNDROME_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_PTT_RSTDATA & AR_NIC_ORB_ERR_INFO_PTT_SBE_SYNDROME_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_PTT_SBE_SYNDROME_QW,
      ._desc = "SBE Syndrome",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MMR_DETECTED_MBE",
      ._bpos = AR_NIC_ORB_ERR_INFO_PTT_MMR_DETECTED_MBE_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_PTT_MMR_DETECTED_MBE_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_PTT_RSTDATA & AR_NIC_ORB_ERR_INFO_PTT_MMR_DETECTED_MBE_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_PTT_MMR_DETECTED_MBE_QW,
      ._desc = "MMR read detected the MBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "MMR_DETECTED_SBE",
      ._bpos = AR_NIC_ORB_ERR_INFO_PTT_MMR_DETECTED_SBE_BP,
      ._mask = AR_NIC_ORB_ERR_INFO_PTT_MMR_DETECTED_SBE_MASK,
      ._rval = AR_NIC_ORB_ERR_INFO_PTT_RSTDATA & AR_NIC_ORB_ERR_INFO_PTT_MMR_DETECTED_SBE_MASK,
      ._index = AR_NIC_ORB_ERR_INFO_PTT_MMR_DETECTED_SBE_QW,
      ._desc = "MMR read detected the SBE",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_orb_dbg_errinj_ptt_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_PTT_ADDRESS_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_PTT_ADDRESS_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_PTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_PTT_ADDRESS_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_PTT_ADDRESS_QW,
      ._desc = "Bits 39:32 are the PTAG to match",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_PTT_CHECKBITS_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_PTT_CHECKBITS_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_PTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_PTT_CHECKBITS_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_PTT_CHECKBITS_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_PTT_TRIGGERED_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_PTT_TRIGGERED_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_PTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_PTT_TRIGGERED_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_PTT_TRIGGERED_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_PTT_MODE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_PTT_MODE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_PTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_PTT_MODE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_PTT_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2 : Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_ORB_DBG_ERRINJ_PTT_ENABLE_BP,
      ._mask = AR_NIC_ORB_DBG_ERRINJ_PTT_ENABLE_MASK,
      ._rval = AR_NIC_ORB_DBG_ERRINJ_PTT_RSTDATA & AR_NIC_ORB_DBG_ERRINJ_PTT_ENABLE_MASK,
      ._index = AR_NIC_ORB_DBG_ERRINJ_PTT_ENABLE_QW,
      ._desc = "Enable Error Injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR ORB DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_rval[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_rval[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_mmr_ring_0_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_rval[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ERR_FLG_1_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_rval[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_err_flg_1_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ERR_FLG_1_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_rval[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_rmsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_rval[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_rmsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_rval[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_rval[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_rval[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_rval[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_rval[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_rval[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_crdts_acks_5_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_rval[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_rval[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_prf_trk_6_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_rval[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_rval[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_rval[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_rval[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_rval[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_rval[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_state_machines_9_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB_HWRMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_rval[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSTDATA_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSTDATA_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_rmsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSTMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_wrmsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_WRTMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_WRTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_rdmsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RDMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RDMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_xsmsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_XSMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_XSMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_wsemsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_WSEMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_WSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_rsemsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSEMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_RSEMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_w1smsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_W1SMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_W1SMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_w1cmsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_W1CMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_W1CMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_wrstmsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_WRSTMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_WRSTMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_hwwmsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_HWWMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_HWWMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb_hwrmsk[3] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_HWRMASK_QW1,
	AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB_HWRMASK_QW2
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_rval[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RSTDATA_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RSTDATA_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_rmsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RSTMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_wrmsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_WRTMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_WRTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_rdmsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RDMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RDMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_xsmsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_XSMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_XSMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_wsemsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_WSEMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_WSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_rsemsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RSEMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_RSEMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_w1smsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_W1SMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_W1SMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_w1cmsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_W1CMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_W1CMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_wrstmsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_WRSTMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_WRSTMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_hwwmsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_HWWMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_HWWMASK_QW1
};
static const uint64_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb_hwrmsk[2] = {
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_HWRMASK_QW0,
	AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB_HWRMASK_QW1
};

/*
 *  AR ORB MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_orb_cfg_params = {
    ._name = "AR_NIC_ORB_CFG_PARAMS",
    ._addr = AR_NIC_ORB_CFG_PARAMS,
    ._rval.val = AR_NIC_ORB_CFG_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_params_detail
};
static const cmmr_br_t __ar_nic_orb_orb_mmr_ring_0_hi_orb = {
    ._name = "AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB",
    ._addr = AR_NIC_ORB_ORB_MMR_RING_0_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_mmr_ring_0_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_mmr_ring_0_mid_orb = {
    ._name = "AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB",
    ._addr = AR_NIC_ORB_ORB_MMR_RING_0_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_mmr_ring_0_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_mmr_ring_0_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_mmr_ring_0_lo_orb = {
    ._name = "AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB",
    ._addr = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB,
    ._rval.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ORB_MMR_RING_0_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_mmr_ring_0_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_err_flg_1_hi_orb = {
    ._name = "AR_NIC_ORB_ERR_FLG_1_HI_ORB",
    ._addr = AR_NIC_ORB_ERR_FLG_1_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_flg_1_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_err_flg_1_mid_orb = {
    ._name = "AR_NIC_ORB_ERR_FLG_1_MID_ORB",
    ._addr = AR_NIC_ORB_ERR_FLG_1_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_err_flg_1_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_flg_1_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_err_flg_1_lo_orb = {
    ._name = "AR_NIC_ORB_ERR_FLG_1_LO_ORB",
    ._addr = AR_NIC_ORB_ERR_FLG_1_LO_ORB,
    ._rval.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_FLG_1_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_flg_1_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb = {
    ._name = "AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB",
    ._addr = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_nl_orb_rsp_flit_2_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb = {
    ._name = "AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB",
    ._addr = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_nl_orb_rsp_flit_2_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_nl_orb_rsp_flit_2_lo_orb = {
    ._name = "AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB",
    ._addr = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB,
    ._rval.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_NL_ORB_RSP_FLIT_2_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_nl_orb_rsp_flit_2_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_nl_req_flit_3_hi_orb = {
    ._name = "AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB",
    ._addr = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_nl_req_flit_3_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_nl_req_flit_3_mid_orb = {
    ._name = "AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB",
    ._addr = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_nl_req_flit_3_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_nl_req_flit_3_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_nl_req_flit_3_lo_orb = {
    ._name = "AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB",
    ._addr = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB,
    ._rval.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ORB_NL_REQ_FLIT_3_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_nl_req_flit_3_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb = {
    ._name = "AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB",
    ._addr = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_rat_rsp_flit_4_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb = {
    ._name = "AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB",
    ._addr = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_rat_rsp_flit_4_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_rat_rsp_flit_4_lo_orb = {
    ._name = "AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB",
    ._addr = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB,
    ._rval.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ORB_RAT_RSP_FLIT_4_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_rat_rsp_flit_4_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_crdts_acks_5_hi_orb = {
    ._name = "AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB",
    ._addr = AR_NIC_ORB_ORB_CRDTS_ACKS_5_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_crdts_acks_5_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_crdts_acks_5_mid_orb = {
    ._name = "AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB",
    ._addr = AR_NIC_ORB_ORB_CRDTS_ACKS_5_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_crdts_acks_5_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_crdts_acks_5_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_crdts_acks_5_lo_orb = {
    ._name = "AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB",
    ._addr = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB,
    ._rval.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ORB_CRDTS_ACKS_5_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_crdts_acks_5_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_prf_trk_6_hi_orb = {
    ._name = "AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB",
    ._addr = AR_NIC_ORB_ORB_PRF_TRK_6_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_prf_trk_6_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_prf_trk_6_mid_orb = {
    ._name = "AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB",
    ._addr = AR_NIC_ORB_ORB_PRF_TRK_6_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_prf_trk_6_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_prf_trk_6_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_prf_trk_6_lo_orb = {
    ._name = "AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB",
    ._addr = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB,
    ._rval.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ORB_PRF_TRK_6_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_prf_trk_6_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_scrub_logic_1_7_hi_orb = {
    ._name = "AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB",
    ._addr = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_scrub_logic_1_7_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_scrub_logic_1_7_mid_orb = {
    ._name = "AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB",
    ._addr = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_1_7_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_scrub_logic_1_7_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_scrub_logic_1_7_lo_orb = {
    ._name = "AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB",
    ._addr = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB,
    ._rval.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_1_7_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_scrub_logic_1_7_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_scrub_logic_2_8_hi_orb = {
    ._name = "AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB",
    ._addr = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_scrub_logic_2_8_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_scrub_logic_2_8_mid_orb = {
    ._name = "AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB",
    ._addr = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_scrub_logic_2_8_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_scrub_logic_2_8_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_scrub_logic_2_8_lo_orb = {
    ._name = "AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB",
    ._addr = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB,
    ._rval.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ORB_SCRUB_LOGIC_2_8_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_scrub_logic_2_8_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_state_machines_9_hi_orb = {
    ._name = "AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB",
    ._addr = AR_NIC_ORB_ORB_STATE_MACHINES_9_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_state_machines_9_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_state_machines_9_mid_orb = {
    ._name = "AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB",
    ._addr = AR_NIC_ORB_ORB_STATE_MACHINES_9_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_state_machines_9_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_state_machines_9_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_state_machines_9_lo_orb = {
    ._name = "AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB",
    ._addr = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB,
    ._rval.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ORB_STATE_MACHINES_9_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_state_machines_9_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_ntt_ptt_a_hi_orb = {
    ._name = "AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB",
    ._addr = AR_NIC_ORB_ORB_NTT_PTT_A_HI_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_hi_orb_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_ntt_ptt_a_hi_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_ntt_ptt_a_mid_orb = {
    ._name = "AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB",
    ._addr = AR_NIC_ORB_ORB_NTT_PTT_A_MID_ORB,
    ._rval.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nic_orb_orb_ntt_ptt_a_mid_orb_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_ntt_ptt_a_mid_orb_detail
};
static const cmmr_br_t __ar_nic_orb_orb_ntt_ptt_a_lo_orb = {
    ._name = "AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB",
    ._addr = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB,
    ._rval.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ORB_NTT_PTT_A_LO_ORB_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_orb_ntt_ptt_a_lo_orb_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_ord_scrub_ctrl = {
    ._name = "AR_NIC_ORB_CFG_ORD_SCRUB_CTRL",
    ._addr = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL,
    ._rval.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_ORD_SCRUB_CTRL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_ord_scrub_ctrl_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_net_rsp_hist_1 = {
    ._name = "AR_NIC_ORB_CFG_NET_RSP_HIST_1",
    ._addr = AR_NIC_ORB_CFG_NET_RSP_HIST_1,
    ._rval.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_net_rsp_hist_1_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_net_rsp_hist_2 = {
    ._name = "AR_NIC_ORB_CFG_NET_RSP_HIST_2",
    ._addr = AR_NIC_ORB_CFG_NET_RSP_HIST_2,
    ._rval.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_net_rsp_hist_2_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_net_rsp_hist_ovf = {
    ._name = "AR_NIC_ORB_CFG_NET_RSP_HIST_OVF",
    ._addr = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF,
    ._rval.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_NET_RSP_HIST_OVF_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_orb_cfg_net_rsp_hist_ovf_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_flagged_rsp = {
    ._name = "AR_NIC_ORB_CFG_FLAGGED_RSP",
    ._addr = AR_NIC_ORB_CFG_FLAGGED_RSP,
    ._rval.val = AR_NIC_ORB_CFG_FLAGGED_RSP_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_FLAGGED_RSP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_flagged_rsp_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_comp_0 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_COMP_0",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_COMP_0,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_comp_0_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_comp_1 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_COMP_1",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_COMP_1,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_comp_1_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_comp_2 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_COMP_2",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_COMP_2,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_comp_2_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_mask_0 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_MASK_0",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_MASK_0,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_mask_0_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_mask_1 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_MASK_1",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_MASK_1,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_mask_1_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_mask_2 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_MASK_2",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_MASK_2,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_mask_2_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_comp_3 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_COMP_3",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_COMP_3,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_3_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_comp_3_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_comp_4 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_COMP_4",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_COMP_4,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_4_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_comp_4_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_comp_5 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_COMP_5",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_COMP_5,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_COMP_5_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_comp_5_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_mask_3 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_MASK_3",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_MASK_3,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_3_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_mask_3_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_mask_4 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_MASK_4",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_MASK_4,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_4_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_mask_4_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_prf_trk_mask_5 = {
    ._name = "AR_NIC_ORB_CFG_PRF_TRK_MASK_5",
    ._addr = AR_NIC_ORB_CFG_PRF_TRK_MASK_5,
    ._rval.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PRF_TRK_MASK_5_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_prf_trk_mask_5_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_ram_access = {
    ._name = "AR_NIC_ORB_DBG_ORD_RAM_ACCESS",
    ._addr = AR_NIC_ORB_DBG_ORD_RAM_ACCESS,
    ._rval.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_RAM_ACCESS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_ram_access_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_ram_lo = {
    ._name = "AR_NIC_ORB_DBG_ORD_RAM_LO",
    ._addr = AR_NIC_ORB_DBG_ORD_RAM_LO,
    ._rval.val = AR_NIC_ORB_DBG_ORD_RAM_LO_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_RAM_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_dbg_ord_ram_lo_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_ram_up = {
    ._name = "AR_NIC_ORB_DBG_ORD_RAM_UP",
    ._addr = AR_NIC_ORB_DBG_ORD_RAM_UP,
    ._rval.val = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_RAM_UP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000003ull,
    ._info = __ar_nic_orb_dbg_ord_ram_up_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_crdt_params = {
    ._name = "AR_NIC_ORB_DBG_CRDT_PARAMS",
    ._addr = AR_NIC_ORB_DBG_CRDT_PARAMS,
    ._rval.val = AR_NIC_ORB_DBG_CRDT_PARAMS_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_CRDT_PARAMS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_orb_dbg_crdt_params_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_errinj_ord = {
    ._name = "AR_NIC_ORB_DBG_ERRINJ_ORD",
    ._addr = AR_NIC_ORB_DBG_ERRINJ_ORD,
    ._rval.val = AR_NIC_ORB_DBG_ERRINJ_ORD_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ERRINJ_ORD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_dbg_errinj_ord_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_errinj_rsp_pipe = {
    ._name = "AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE",
    ._addr = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE,
    ._rval.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ERRINJ_RSP_PIPE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_dbg_errinj_rsp_pipe_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_errinj_req_pipe = {
    ._name = "AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE",
    ._addr = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE,
    ._rval.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ERRINJ_REQ_PIPE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_dbg_errinj_req_pipe_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_0 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_0",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_0,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_0_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_1 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_1",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_1,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_1_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_2 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_2",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_2,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_2_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_3 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_3",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_3,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_3_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_3_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_4 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_4",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_4,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_4_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_4_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_5 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_5",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_5,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_5_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_5_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_6 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_6",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_6,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_6_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_6_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_7 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_7",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_7,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_7_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_7_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_8 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_8",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_8,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_8_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_8_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_9 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_9",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_9,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_9_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_9_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_10 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_10",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_10,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_10_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_10_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_11 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_11",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_11,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_11_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_11_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_12 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_12",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_12,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_12_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_12_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_13 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_13",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_13,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_13_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_13_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_14 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_14",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_14,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_14_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_14_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_15 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_15",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_15,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_15_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_15_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_16 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_16",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_16,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_16_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_16_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_17 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_17",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_17,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_17_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_17_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_18 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_18",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_18,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_18_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_18_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_19 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_19",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_19,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_19_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_19_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_20 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_20",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_20,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_20_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_20_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_21 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_21",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_21,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_21_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_21_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_22 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_22",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_22,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_22_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_22_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_23 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_23",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_23,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_23_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_23_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_24 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_24",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_24,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_24_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_24_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_25 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_25",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_25,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_25_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_25_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_26 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_26",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_26,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_26_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_26_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_27 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_27",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_27,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_27_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_27_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_28 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_28",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_28,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_28_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_28_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_29 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_29",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_29,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_29_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_29_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_30 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_30",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_30,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_30_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_30_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_vectors_31 = {
    ._name = "AR_NIC_ORB_DBG_ORD_VECTORS_31",
    ._addr = AR_NIC_ORB_DBG_ORD_VECTORS_31,
    ._rval.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_VECTORS_31_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_ord_vectors_31_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_ord_ent_cnt = {
    ._name = "AR_NIC_ORB_DBG_ORD_ENT_CNT",
    ._addr = AR_NIC_ORB_DBG_ORD_ENT_CNT,
    ._rval.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ORD_ENT_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_orb_dbg_ord_ent_cnt_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_scrub_notify_cnt = {
    ._name = "AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT",
    ._addr = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT,
    ._rval.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_SCRUB_NOTIFY_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_nic_orb_dbg_scrub_notify_cnt_detail
};
static const cmmr_br_t __ar_nic_orb_sts_rsp_fifo_status = {
    ._name = "AR_NIC_ORB_STS_RSP_FIFO_STATUS",
    ._addr = AR_NIC_ORB_STS_RSP_FIFO_STATUS,
    ._rval.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_STS_RSP_FIFO_STATUS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nic_orb_sts_rsp_fifo_status_detail
};
static const cmmr_br_t __ar_nic_orb_err_flg = {
    ._name = "AR_NIC_ORB_ERR_FLG",
    ._addr = AR_NIC_ORB_ERR_FLG,
    ._rval.val = AR_NIC_ORB_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x000000000015c011ull,
    ._info = __ar_nic_orb_err_flg_detail
};
static const cmmr_br_t __ar_nic_orb_err_clr = {
    ._name = "AR_NIC_ORB_ERR_CLR",
    ._addr = AR_NIC_ORB_ERR_CLR,
    ._rval.val = AR_NIC_ORB_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000021ull,
    ._info = __ar_nic_orb_err_clr_detail
};
static const cmmr_br_t __ar_nic_orb_err_hss_msk = {
    ._name = "AR_NIC_ORB_ERR_HSS_MSK",
    ._addr = AR_NIC_ORB_ERR_HSS_MSK,
    ._rval.val = AR_NIC_ORB_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000041ull,
    ._info = __ar_nic_orb_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_orb_err_os_msk = {
    ._name = "AR_NIC_ORB_ERR_OS_MSK",
    ._addr = AR_NIC_ORB_ERR_OS_MSK,
    ._rval.val = AR_NIC_ORB_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000081ull,
    ._info = __ar_nic_orb_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_orb_err_first_flg = {
    ._name = "AR_NIC_ORB_ERR_FIRST_FLG",
    ._addr = AR_NIC_ORB_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_ORB_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000401ull,
    ._info = __ar_nic_orb_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_hss_msk = {
    ._name = "AR_NIC_ORB_ERR_INFO_HSS_MSK",
    ._addr = AR_NIC_ORB_ERR_INFO_HSS_MSK,
    ._rval.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000101ull,
    ._info = __ar_nic_orb_err_info_hss_msk_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_os_msk = {
    ._name = "AR_NIC_ORB_ERR_INFO_OS_MSK",
    ._addr = AR_NIC_ORB_ERR_INFO_OS_MSK,
    ._rval.val = AR_NIC_ORB_ERR_INFO_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000201ull,
    ._info = __ar_nic_orb_err_info_os_msk_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_hss_drop_rsp = {
    ._name = "AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP",
    ._addr = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP,
    ._rval.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_HSS_DROP_RSP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_hss_drop_rsp_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_os_drop_rsp = {
    ._name = "AR_NIC_ORB_ERR_INFO_OS_DROP_RSP",
    ._addr = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP,
    ._rval.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_OS_DROP_RSP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_os_drop_rsp_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_rsp_spkt = {
    ._name = "AR_NIC_ORB_ERR_INFO_RSP_SPKT",
    ._addr = AR_NIC_ORB_ERR_INFO_RSP_SPKT,
    ._rval.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SPKT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_rsp_spkt_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_rsp_pe = {
    ._name = "AR_NIC_ORB_ERR_INFO_RSP_PE",
    ._addr = AR_NIC_ORB_ERR_INFO_RSP_PE,
    ._rval.val = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_RSP_PE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_rsp_pe_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_rsp_sbe = {
    ._name = "AR_NIC_ORB_ERR_INFO_RSP_SBE",
    ._addr = AR_NIC_ORB_ERR_INFO_RSP_SBE,
    ._rval.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_RSP_SBE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_rsp_sbe_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_rsp_mbe = {
    ._name = "AR_NIC_ORB_ERR_INFO_RSP_MBE",
    ._addr = AR_NIC_ORB_ERR_INFO_RSP_MBE,
    ._rval.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_RSP_MBE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_rsp_mbe_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_ord_scrub_lo = {
    ._name = "AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO",
    ._addr = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO,
    ._rval.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_ord_scrub_lo_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_ord_scrub_up = {
    ._name = "AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP",
    ._addr = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP,
    ._rval.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SCRUB_UP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000003ull,
    ._info = __ar_nic_orb_err_info_ord_scrub_up_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_ord_mbe_lo = {
    ._name = "AR_NIC_ORB_ERR_INFO_ORD_MBE_LO",
    ._addr = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO,
    ._rval.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_ord_mbe_lo_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_ord_mbe_up = {
    ._name = "AR_NIC_ORB_ERR_INFO_ORD_MBE_UP",
    ._addr = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP,
    ._rval.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_MBE_UP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000003ull,
    ._info = __ar_nic_orb_err_info_ord_mbe_up_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_ord_sbe_lo = {
    ._name = "AR_NIC_ORB_ERR_INFO_ORD_SBE_LO",
    ._addr = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO,
    ._rval.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_ord_sbe_lo_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_ord_sbe_up = {
    ._name = "AR_NIC_ORB_ERR_INFO_ORD_SBE_UP",
    ._addr = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP,
    ._rval.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_ORD_SBE_UP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000003ull,
    ._info = __ar_nic_orb_err_info_ord_sbe_up_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_req_pe = {
    ._name = "AR_NIC_ORB_ERR_INFO_REQ_PE",
    ._addr = AR_NIC_ORB_ERR_INFO_REQ_PE,
    ._rval.val = AR_NIC_ORB_ERR_INFO_REQ_PE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_REQ_PE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_req_pe_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_req_sbe = {
    ._name = "AR_NIC_ORB_ERR_INFO_REQ_SBE",
    ._addr = AR_NIC_ORB_ERR_INFO_REQ_SBE,
    ._rval.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_REQ_SBE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_req_sbe_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_req_mbe = {
    ._name = "AR_NIC_ORB_ERR_INFO_REQ_MBE",
    ._addr = AR_NIC_ORB_ERR_INFO_REQ_MBE,
    ._rval.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_REQ_MBE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_req_mbe_detail
};
static const cmmr_br_t __ar_nic_orb_prf_net_rsp_track_1 = {
    ._name = "AR_NIC_ORB_PRF_NET_RSP_TRACK_1",
    ._addr = AR_NIC_ORB_PRF_NET_RSP_TRACK_1,
    ._rval.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_orb_prf_net_rsp_track_1_detail
};
static const cmmr_br_t __ar_nic_orb_prf_net_rsp_track_2 = {
    ._name = "AR_NIC_ORB_PRF_NET_RSP_TRACK_2",
    ._addr = AR_NIC_ORB_PRF_NET_RSP_TRACK_2,
    ._rval.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_NET_RSP_TRACK_2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_orb_prf_net_rsp_track_2_detail
};
static const cmmr_br_t __ar_nic_orb_prf_net_rsp_hist_bin01 = {
    ._name = "AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01",
    ._addr = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01,
    ._rval.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN01_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_prf_net_rsp_hist_bin01_detail
};
static const cmmr_br_t __ar_nic_orb_prf_net_rsp_hist_bin23 = {
    ._name = "AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23",
    ._addr = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23,
    ._rval.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN23_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_prf_net_rsp_hist_bin23_detail
};
static const cmmr_br_t __ar_nic_orb_prf_net_rsp_hist_bin45 = {
    ._name = "AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45",
    ._addr = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45,
    ._rval.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN45_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_prf_net_rsp_hist_bin45_detail
};
static const cmmr_br_t __ar_nic_orb_prf_net_rsp_hist_bin67 = {
    ._name = "AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67",
    ._addr = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67,
    ._rval.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_NET_RSP_HIST_BIN67_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_prf_net_rsp_hist_bin67_detail
};
static const cmmr_br_t __ar_nic_orb_prf_req_bytes_sent = {
    ._name = "AR_NIC_ORB_PRF_REQ_BYTES_SENT",
    ._addr = AR_NIC_ORB_PRF_REQ_BYTES_SENT,
    ._rval.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_REQ_BYTES_SENT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_orb_prf_req_bytes_sent_detail
};
static const cmmr_br_t __ar_nic_orb_prf_rsp_bytes_rcvd = {
    ._name = "AR_NIC_ORB_PRF_RSP_BYTES_RCVD",
    ._addr = AR_NIC_ORB_PRF_RSP_BYTES_RCVD,
    ._rval.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_RSP_BYTES_RCVD_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_orb_prf_rsp_bytes_rcvd_detail
};
static const cmmr_br_t __ar_nic_orb_prf_stall_duration_en = {
    ._name = "AR_NIC_ORB_PRF_STALL_DURATION_EN",
    ._addr = AR_NIC_ORB_PRF_STALL_DURATION_EN,
    ._rval.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_STALL_DURATION_EN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_prf_stall_duration_en_detail
};
static const cmmr_br_t __ar_nic_orb_prf_req_pktid_stall_duration = {
    ._name = "AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION",
    ._addr = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION,
    ._rval.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_REQ_PKTID_STALL_DURATION_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_orb_prf_req_pktid_stall_duration_detail
};
static const cmmr_br_t __ar_nic_orb_prf_req_crdts_stall_duration = {
    ._name = "AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION",
    ._addr = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION,
    ._rval.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_PRF_REQ_CRDTS_STALL_DURATION_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_orb_prf_req_crdts_stall_duration_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_ntt_table = {
    ._name = "AR_NIC_ORB_CFG_NTT_TABLE",
    ._addr = AR_NIC_ORB_CFG_NTT_TABLE,
    ._rval.val = AR_NIC_ORB_CFG_NTT_TABLE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_NTT_TABLE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_NTT_TABLE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_NTT_TABLE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_NTT_TABLE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_NTT_TABLE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_NTT_TABLE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_NTT_TABLE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_NTT_TABLE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_NTT_TABLE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_NTT_TABLE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_NTT_TABLE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 4096,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_orb_cfg_ntt_table_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_ntt_config = {
    ._name = "AR_NIC_ORB_CFG_NTT_CONFIG",
    ._addr = AR_NIC_ORB_CFG_NTT_CONFIG,
    ._rval.val = AR_NIC_ORB_CFG_NTT_CONFIG_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_NTT_CONFIG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_ntt_config_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_ntt = {
    ._name = "AR_NIC_ORB_ERR_INFO_NTT",
    ._addr = AR_NIC_ORB_ERR_INFO_NTT,
    ._rval.val = AR_NIC_ORB_ERR_INFO_NTT_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_NTT_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_NTT_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_NTT_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_NTT_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_NTT_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_NTT_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_NTT_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_NTT_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_NTT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_NTT_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_NTT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_ntt_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_errinj_ntt = {
    ._name = "AR_NIC_ORB_DBG_ERRINJ_NTT",
    ._addr = AR_NIC_ORB_DBG_ERRINJ_NTT,
    ._rval.val = AR_NIC_ORB_DBG_ERRINJ_NTT_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ERRINJ_NTT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_dbg_errinj_ntt_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_ptt_table = {
    ._name = "AR_NIC_ORB_CFG_PTT_TABLE",
    ._addr = AR_NIC_ORB_CFG_PTT_TABLE,
    ._rval.val = AR_NIC_ORB_CFG_PTT_TABLE_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PTT_TABLE_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PTT_TABLE_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PTT_TABLE_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PTT_TABLE_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PTT_TABLE_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PTT_TABLE_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PTT_TABLE_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PTT_TABLE_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PTT_TABLE_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PTT_TABLE_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PTT_TABLE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 8,
    ._depth = 64,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_orb_cfg_ptt_table_detail
};
static const cmmr_br_t __ar_nic_orb_cfg_ptt_config = {
    ._name = "AR_NIC_ORB_CFG_PTT_CONFIG",
    ._addr = AR_NIC_ORB_CFG_PTT_CONFIG,
    ._rval.val = AR_NIC_ORB_CFG_PTT_CONFIG_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_CFG_PTT_CONFIG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_cfg_ptt_config_detail
};
static const cmmr_br_t __ar_nic_orb_err_info_ptt = {
    ._name = "AR_NIC_ORB_ERR_INFO_PTT",
    ._addr = AR_NIC_ORB_ERR_INFO_PTT,
    ._rval.val = AR_NIC_ORB_ERR_INFO_PTT_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_ERR_INFO_PTT_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_ERR_INFO_PTT_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_ERR_INFO_PTT_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_ERR_INFO_PTT_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_ERR_INFO_PTT_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_ERR_INFO_PTT_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_ERR_INFO_PTT_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_ERR_INFO_PTT_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_ERR_INFO_PTT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_ERR_INFO_PTT_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_ERR_INFO_PTT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_err_info_ptt_detail
};
static const cmmr_br_t __ar_nic_orb_dbg_errinj_ptt = {
    ._name = "AR_NIC_ORB_DBG_ERRINJ_PTT",
    ._addr = AR_NIC_ORB_DBG_ERRINJ_PTT,
    ._rval.val = AR_NIC_ORB_DBG_ERRINJ_PTT_RSTDATA,
    ._rmsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_RSTMASK,
    ._wrmsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_WRTMASK,
    ._rdmsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_RDMASK,
    ._xsmsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_XSMASK,
    ._wsemsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_WSEMASK,
    ._rsemsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_RSEMASK,
    ._w1smsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_W1SMASK,
    ._w1cmsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_W1CMASK,
    ._wrstmsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_HWWMASK,
    ._hwrmsk.val = AR_NIC_ORB_DBG_ERRINJ_PTT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_orb_dbg_errinj_ptt_detail
};

/*
 *  INSTALL AR ORB MMRS
 */
static const cmmr_br_t* __ar_orb_mmrs[] = {
    &__ar_nic_orb_cfg_params,
    &__ar_nic_orb_cfg_ord_scrub_ctrl,
    &__ar_nic_orb_cfg_net_rsp_hist_1,
    &__ar_nic_orb_cfg_net_rsp_hist_2,
    &__ar_nic_orb_cfg_net_rsp_hist_ovf,
    &__ar_nic_orb_cfg_flagged_rsp,
    &__ar_nic_orb_cfg_prf_trk_comp_0,
    &__ar_nic_orb_cfg_prf_trk_comp_1,
    &__ar_nic_orb_cfg_prf_trk_comp_2,
    &__ar_nic_orb_cfg_prf_trk_mask_0,
    &__ar_nic_orb_cfg_prf_trk_mask_1,
    &__ar_nic_orb_cfg_prf_trk_mask_2,
    &__ar_nic_orb_cfg_prf_trk_comp_3,
    &__ar_nic_orb_cfg_prf_trk_comp_4,
    &__ar_nic_orb_cfg_prf_trk_comp_5,
    &__ar_nic_orb_cfg_prf_trk_mask_3,
    &__ar_nic_orb_cfg_prf_trk_mask_4,
    &__ar_nic_orb_cfg_prf_trk_mask_5,
    &__ar_nic_orb_dbg_ord_ram_access,
    &__ar_nic_orb_dbg_ord_ram_lo,
    &__ar_nic_orb_dbg_ord_ram_up,
    &__ar_nic_orb_dbg_crdt_params,
    &__ar_nic_orb_dbg_errinj_ord,
    &__ar_nic_orb_dbg_errinj_rsp_pipe,
    &__ar_nic_orb_dbg_errinj_req_pipe,
    &__ar_nic_orb_dbg_ord_vectors_0,
    &__ar_nic_orb_dbg_ord_vectors_1,
    &__ar_nic_orb_dbg_ord_vectors_2,
    &__ar_nic_orb_dbg_ord_vectors_3,
    &__ar_nic_orb_dbg_ord_vectors_4,
    &__ar_nic_orb_dbg_ord_vectors_5,
    &__ar_nic_orb_dbg_ord_vectors_6,
    &__ar_nic_orb_dbg_ord_vectors_7,
    &__ar_nic_orb_dbg_ord_vectors_8,
    &__ar_nic_orb_dbg_ord_vectors_9,
    &__ar_nic_orb_dbg_ord_vectors_10,
    &__ar_nic_orb_dbg_ord_vectors_11,
    &__ar_nic_orb_dbg_ord_vectors_12,
    &__ar_nic_orb_dbg_ord_vectors_13,
    &__ar_nic_orb_dbg_ord_vectors_14,
    &__ar_nic_orb_dbg_ord_vectors_15,
    &__ar_nic_orb_dbg_ord_vectors_16,
    &__ar_nic_orb_dbg_ord_vectors_17,
    &__ar_nic_orb_dbg_ord_vectors_18,
    &__ar_nic_orb_dbg_ord_vectors_19,
    &__ar_nic_orb_dbg_ord_vectors_20,
    &__ar_nic_orb_dbg_ord_vectors_21,
    &__ar_nic_orb_dbg_ord_vectors_22,
    &__ar_nic_orb_dbg_ord_vectors_23,
    &__ar_nic_orb_dbg_ord_vectors_24,
    &__ar_nic_orb_dbg_ord_vectors_25,
    &__ar_nic_orb_dbg_ord_vectors_26,
    &__ar_nic_orb_dbg_ord_vectors_27,
    &__ar_nic_orb_dbg_ord_vectors_28,
    &__ar_nic_orb_dbg_ord_vectors_29,
    &__ar_nic_orb_dbg_ord_vectors_30,
    &__ar_nic_orb_dbg_ord_vectors_31,
    &__ar_nic_orb_dbg_ord_ent_cnt,
    &__ar_nic_orb_dbg_scrub_notify_cnt,
    &__ar_nic_orb_sts_rsp_fifo_status,
    &__ar_nic_orb_err_flg,
    &__ar_nic_orb_err_clr,
    &__ar_nic_orb_err_hss_msk,
    &__ar_nic_orb_err_os_msk,
    &__ar_nic_orb_err_first_flg,
    &__ar_nic_orb_err_info_hss_msk,
    &__ar_nic_orb_err_info_os_msk,
    &__ar_nic_orb_err_info_hss_drop_rsp,
    &__ar_nic_orb_err_info_os_drop_rsp,
    &__ar_nic_orb_err_info_rsp_spkt,
    &__ar_nic_orb_err_info_rsp_pe,
    &__ar_nic_orb_err_info_rsp_sbe,
    &__ar_nic_orb_err_info_rsp_mbe,
    &__ar_nic_orb_err_info_ord_scrub_lo,
    &__ar_nic_orb_err_info_ord_scrub_up,
    &__ar_nic_orb_err_info_ord_mbe_lo,
    &__ar_nic_orb_err_info_ord_mbe_up,
    &__ar_nic_orb_err_info_ord_sbe_lo,
    &__ar_nic_orb_err_info_ord_sbe_up,
    &__ar_nic_orb_err_info_req_pe,
    &__ar_nic_orb_err_info_req_sbe,
    &__ar_nic_orb_err_info_req_mbe,
    &__ar_nic_orb_prf_net_rsp_track_1,
    &__ar_nic_orb_prf_net_rsp_track_2,
    &__ar_nic_orb_prf_net_rsp_hist_bin01,
    &__ar_nic_orb_prf_net_rsp_hist_bin23,
    &__ar_nic_orb_prf_net_rsp_hist_bin45,
    &__ar_nic_orb_prf_net_rsp_hist_bin67,
    &__ar_nic_orb_prf_req_bytes_sent,
    &__ar_nic_orb_prf_rsp_bytes_rcvd,
    &__ar_nic_orb_prf_stall_duration_en,
    &__ar_nic_orb_prf_req_pktid_stall_duration,
    &__ar_nic_orb_prf_req_crdts_stall_duration,
    &__ar_nic_orb_cfg_ntt_table,
    &__ar_nic_orb_cfg_ntt_config,
    &__ar_nic_orb_err_info_ntt,
    &__ar_nic_orb_dbg_errinj_ntt,
    &__ar_nic_orb_cfg_ptt_table,
    &__ar_nic_orb_cfg_ptt_config,
    &__ar_nic_orb_err_info_ptt,
    &__ar_nic_orb_dbg_errinj_ptt,
    NULL
};

/*
 *  INSTALL AR ORB LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_orb_enc_mmrs[] = {
    &__ar_nic_orb_orb_mmr_ring_0_hi_orb,
    &__ar_nic_orb_orb_mmr_ring_0_mid_orb,
    &__ar_nic_orb_orb_mmr_ring_0_lo_orb,
    &__ar_nic_orb_err_flg_1_hi_orb,
    &__ar_nic_orb_err_flg_1_mid_orb,
    &__ar_nic_orb_err_flg_1_lo_orb,
    &__ar_nic_orb_nl_orb_rsp_flit_2_hi_orb,
    &__ar_nic_orb_nl_orb_rsp_flit_2_mid_orb,
    &__ar_nic_orb_nl_orb_rsp_flit_2_lo_orb,
    &__ar_nic_orb_orb_nl_req_flit_3_hi_orb,
    &__ar_nic_orb_orb_nl_req_flit_3_mid_orb,
    &__ar_nic_orb_orb_nl_req_flit_3_lo_orb,
    &__ar_nic_orb_orb_rat_rsp_flit_4_hi_orb,
    &__ar_nic_orb_orb_rat_rsp_flit_4_mid_orb,
    &__ar_nic_orb_orb_rat_rsp_flit_4_lo_orb,
    &__ar_nic_orb_orb_crdts_acks_5_hi_orb,
    &__ar_nic_orb_orb_crdts_acks_5_mid_orb,
    &__ar_nic_orb_orb_crdts_acks_5_lo_orb,
    &__ar_nic_orb_orb_prf_trk_6_hi_orb,
    &__ar_nic_orb_orb_prf_trk_6_mid_orb,
    &__ar_nic_orb_orb_prf_trk_6_lo_orb,
    &__ar_nic_orb_orb_scrub_logic_1_7_hi_orb,
    &__ar_nic_orb_orb_scrub_logic_1_7_mid_orb,
    &__ar_nic_orb_orb_scrub_logic_1_7_lo_orb,
    &__ar_nic_orb_orb_scrub_logic_2_8_hi_orb,
    &__ar_nic_orb_orb_scrub_logic_2_8_mid_orb,
    &__ar_nic_orb_orb_scrub_logic_2_8_lo_orb,
    &__ar_nic_orb_orb_state_machines_9_hi_orb,
    &__ar_nic_orb_orb_state_machines_9_mid_orb,
    &__ar_nic_orb_orb_state_machines_9_lo_orb,
    &__ar_nic_orb_orb_ntt_ptt_a_hi_orb,
    &__ar_nic_orb_orb_ntt_ptt_a_mid_orb,
    &__ar_nic_orb_orb_ntt_ptt_a_lo_orb,
    NULL
};

#endif
