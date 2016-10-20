/******************************************************************************
 * COPYRIGHT CRAY INC. ar_nl_cclk_detailed_mmrs_h.h
 * FILE: ar_nl_cclk_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:59 2014
 ******************************************************************************/
/**
 * @file ar_nl_cclk_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:38:59 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_nl_cclk_mmr_values.h and ar_nl_cclk_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_nl_cclk_mmr_values.h"

#ifndef _AR_NL_CCLK_DETAILED_MMRS_H_H_
#define _AR_NL_CCLK_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_nl_cclk_mmrs[];	/* NL_CCLK Array */

/*
 *  AR NL_CCLK MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_ctl_detail[] = {
    { ._name = "LM_RST",
      ._bpos = AR_NL_CCLK_DBG_LM_CTL_LM_RST_BP,
      ._mask = AR_NL_CCLK_DBG_LM_CTL_LM_RST_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_CTL_RSTDATA & AR_NL_CCLK_DBG_LM_CTL_LM_RST_MASK,
      ._index = AR_NL_CCLK_DBG_LM_CTL_LM_RST_QW,
      ._desc = "Reset Capture block",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "WO"
    },
    { ._name = "LM_TRIG_STATE",
      ._bpos = AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_STATE_BP,
      ._mask = AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_STATE_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_CTL_RSTDATA & AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_STATE_MASK,
      ._index = AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_STATE_QW,
      ._desc = "Trigger State Machine Value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_CTL_T0_CNT",
      ._bpos = AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T0_CNT_BP,
      ._mask = AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T0_CNT_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_CTL_RSTDATA & AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T0_CNT_MASK,
      ._index = AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T0_CNT_QW,
      ._desc = "Trigger 0 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_T1_CNT",
      ._bpos = AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T1_CNT_BP,
      ._mask = AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T1_CNT_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_CTL_RSTDATA & AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T1_CNT_MASK,
      ._index = AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T1_CNT_QW,
      ._desc = "Trigger 1 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_TRIG_EN",
      ._bpos = AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_EN_BP,
      ._mask = AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_EN_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_CTL_RSTDATA & AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_EN_MASK,
      ._index = AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_EN_QW,
      ._desc = "Trigger enables for the eigth data capture ports",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_MODE",
      ._bpos = AR_NL_CCLK_DBG_LM_CTL_LM_CTL_MODE_BP,
      ._mask = AR_NL_CCLK_DBG_LM_CTL_LM_CTL_MODE_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_CTL_RSTDATA & AR_NL_CCLK_DBG_LM_CTL_LM_CTL_MODE_MASK,
      ._index = AR_NL_CCLK_DBG_LM_CTL_LM_CTL_MODE_QW,
      ._desc = "Capture Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_detail[] = {
    { ._name = "NIC_FULL",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_FULL_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_FULL_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_FULL_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_FULL_QW,
      ._desc = "No NIC credits available",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "HALT_REQ",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HALT_REQ_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HALT_REQ_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HALT_REQ_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HALT_REQ_QW,
      ._desc = "nic_full or NL to NIC Busy",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NIC_CREDITS_11_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_CREDITS_11_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_CREDITS_11_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_CREDITS_11_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_CREDITS_11_0_QW,
      ._desc = "Available NIC credits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_EN_LB_SB_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_LB_SB_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_LB_SB_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_LB_SB_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_LB_SB_3_0_QW,
      ._desc = "Enable Mask, sideband to LB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_EN_NIC_SB_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_NIC_SB_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_NIC_SB_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_NIC_SB_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_NIC_SB_3_0_QW,
      ._desc = "Enable Mask, sideband to NIC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ENABLE_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_ENABLE_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_ENABLE_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_ENABLE_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_ENABLE_3_0_QW,
      ._desc = "Enable Mask, request to NIC or LB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "KILL_PKT_1",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_1_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_1_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_1_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_1_QW,
      ._desc = "Packet in progress and kill_pkt[0] set",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "KILL_PKT_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_0_QW,
      ._desc = "free wedge or link not active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_0_QW,
      ._desc = "Sideband to LB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NIC_SB_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_SB_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_SB_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_SB_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_SB_3_0_QW,
      ._desc = "Sideband to NIC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DATA",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_DATA_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_DATA_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_DATA_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_DATA_QW,
      ._desc = "Packet data in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_HEAD",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_HEAD_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_HEAD_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_HEAD_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_HEAD_QW,
      ._desc = "Packet head in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_FLIT_CNTR_6_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_FLIT_CNTR_6_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_FLIT_CNTR_6_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_FLIT_CNTR_6_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_FLIT_CNTR_6_0_QW,
      ._desc = "Flit count within a packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_3_OR_REQ_SB_3",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_QW,
      ._desc = "NIC Select",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_2_OR_REQ_SB_2",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_QW,
      ._desc = "Copy of Tail",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_1_OR_REQ_SB_1",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_QW,
      ._desc = "Sideband Tail",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_0_OR_REQ_SB_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_QW,
      ._desc = "Sideband Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_3",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PARITY_3_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PARITY_3_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PARITY_3_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PARITY_3_QW,
      ._desc = "Parity bit 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_1",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RC_1_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RC_1_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RC_1_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RC_1_QW,
      ._desc = "Route Control Bit 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS_5_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LSTATUS_5_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LSTATUS_5_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LSTATUS_5_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LSTATUS_5_0_QW,
      ._desc = "Local error status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_QW,
      ._desc = "If set, use portID[2:0] as exit port (Only Valid for LB sourced packets)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PORTID_2_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PORTID_2_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PORTID_2_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PORTID_2_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PORTID_2_0_QW,
      ._desc = "Request exit port id if lb is set (Only Valid for LB sourced packets)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TGTID_1_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_TGTID_1_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_TGTID_1_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_TGTID_1_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_TGTID_1_0_QW,
      ._desc = "Request tgtid if lb is set (Only Valid for LB sourced packets)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_129_125",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_UNUSED_129_125_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_UNUSED_129_125_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_UNUSED_129_125_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_UNUSED_129_125_QW,
      ._desc = "Unsued",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_detail[] = {
    { ._name = "UNUSED_129_125",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UNUSED_129_125_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UNUSED_129_125_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UNUSED_129_125_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UNUSED_129_125_QW,
      ._desc = "Unsued",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_8_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_SSID_8_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_SSID_8_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_SSID_8_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_SSID_8_0_QW,
      ._desc = "ssid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_5_2_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_5_2_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_5_2_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_5_2_QW,
      ._desc = "Address bits [5:2]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_CNT_BM_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_CNT_BM_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_CNT_BM_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_CNT_BM_3_0_QW,
      ._desc = "Count Byte Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_2",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_2_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_2_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_2_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_2_QW,
      ._desc = "Parity bit 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_0_QW,
      ._desc = "Route Control Bit 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTID_11_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PKTID_11_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PKTID_11_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PKTID_11_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PKTID_11_0_QW,
      ._desc = "Packet ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDH_11_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_MDH_11_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_MDH_11_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_MDH_11_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_MDH_11_0_QW,
      ._desc = "Memory Domain Handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_2",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_2_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_2_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_2_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_2_QW,
      ._desc = "Route Control Bit 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD_8_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_REQCMD_8_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_REQCMD_8_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_REQCMD_8_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_REQCMD_8_0_QW,
      ._desc = "Request Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_1",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_1_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_1_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_1_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_1_QW,
      ._desc = "Parity bit 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UV",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UV_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UV_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UV_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UV_QW,
      ._desc = "Upper data valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_39_6_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_39_6_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_39_6_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_39_6_QW,
      ._desc = "Address bits [39:6]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_lo_netlink_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_ADDR_39_6_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_ADDR_39_6_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_ADDR_39_6_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_ADDR_39_6_QW,
      ._desc = "Address bits [39:6]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PARITY_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PARITY_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PARITY_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PARITY_0_QW,
      ._desc = "Parity bit 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSUED",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_UNUSUED_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_UNUSUED_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_UNUSUED_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_UNUSUED_QW,
      ._desc = "Unsued",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKEY_15_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PKEY_15_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PKEY_15_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PKEY_15_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PKEY_15_0_QW,
      ._desc = "Pkey",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSTID_1_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DSTID_1_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DSTID_1_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DSTID_1_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DSTID_1_0_QW,
      ._desc = "Destination ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DST_15_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DST_15_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DST_15_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DST_15_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DST_15_0_QW,
      ._desc = "Destination",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_detail[] = {
    { ._name = "NIC_FULL",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_FULL_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_FULL_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_FULL_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_FULL_QW,
      ._desc = "No NIC credits available",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "HALT_REQ",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HALT_REQ_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HALT_REQ_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HALT_REQ_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HALT_REQ_QW,
      ._desc = "nic_full or NL to NIC Busy",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NIC_CREDITS_11_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_CREDITS_11_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_CREDITS_11_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_CREDITS_11_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_CREDITS_11_0_QW,
      ._desc = "Available NIC credits",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_EN_LB_SB_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_LB_SB_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_LB_SB_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_LB_SB_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_LB_SB_3_0_QW,
      ._desc = "Enable Mask, sideband to LB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_EN_NIC_SB_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_NIC_SB_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_NIC_SB_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_NIC_SB_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_NIC_SB_3_0_QW,
      ._desc = "Enable Mask, sideband to NIC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_ENABLE_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_ENABLE_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_ENABLE_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_ENABLE_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_ENABLE_3_0_QW,
      ._desc = "Enable Mask, request to NIC or LB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "KILL_PKT_1",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_1_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_1_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_1_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_1_QW,
      ._desc = "Packet in progress and kill_pkt[0] set",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "KILL_PKT_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_0_QW,
      ._desc = "free wedge or link not active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_0_QW,
      ._desc = "Sideband to LB",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "NIC_SB_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_SB_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_SB_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_SB_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_SB_3_0_QW,
      ._desc = "Sideband to NIC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_DATA",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_DATA_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_DATA_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_DATA_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_DATA_QW,
      ._desc = "Packet data in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_HEAD",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_HEAD_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_HEAD_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_HEAD_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_HEAD_QW,
      ._desc = "Packet head in progress",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "Q_FLIT_CNTR_6_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_FLIT_CNTR_6_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_FLIT_CNTR_6_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_FLIT_CNTR_6_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_FLIT_CNTR_6_0_QW,
      ._desc = "Flit count within a packet",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_3_OR_REQ_SB_3",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_QW,
      ._desc = "NIC Select",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_2_OR_REQ_SB_2",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_QW,
      ._desc = "Copy of Tail",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_1_OR_REQ_SB_1",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_QW,
      ._desc = "Sideband Tail",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB_SB_0_OR_REQ_SB_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_QW,
      ._desc = "Sideband Valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_3",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PARITY_3_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PARITY_3_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PARITY_3_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PARITY_3_QW,
      ._desc = "Parity bit 3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_1",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RC_1_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RC_1_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RC_1_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RC_1_QW,
      ._desc = "Route Control Bit 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LSTATUS_5_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LSTATUS_5_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LSTATUS_5_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LSTATUS_5_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LSTATUS_5_0_QW,
      ._desc = "Local error status",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "LB",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_QW,
      ._desc = "If set, use portID[2:0] as exit port (Only Valid for LB sourced packets)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PORTID_2_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PORTID_2_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PORTID_2_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PORTID_2_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PORTID_2_0_QW,
      ._desc = "Request exit port id if lb is set (Only Valid for LB sourced packets)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "TGTID_1_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_TGTID_1_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_TGTID_1_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_TGTID_1_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_TGTID_1_0_QW,
      ._desc = "Request tgtid if lb is set (Only Valid for LB sourced packets)",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSED_129_125",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_UNUSED_129_125_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_UNUSED_129_125_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_UNUSED_129_125_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_UNUSED_129_125_QW,
      ._desc = "Unsued",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_detail[] = {
    { ._name = "UNUSED_129_125",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UNUSED_129_125_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UNUSED_129_125_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UNUSED_129_125_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UNUSED_129_125_QW,
      ._desc = "Unsued",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "SSID_8_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_SSID_8_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_SSID_8_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_SSID_8_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_SSID_8_0_QW,
      ._desc = "ssid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_5_2",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_5_2_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_5_2_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_5_2_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_5_2_QW,
      ._desc = "Address bits [5:2]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "CNT_BM_3_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_CNT_BM_3_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_CNT_BM_3_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_CNT_BM_3_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_CNT_BM_3_0_QW,
      ._desc = "Count Byte Mask",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_2",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_2_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_2_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_2_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_2_QW,
      ._desc = "Parity bit 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_0_QW,
      ._desc = "Route Control Bit 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKTID_11_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PKTID_11_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PKTID_11_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PKTID_11_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PKTID_11_0_QW,
      ._desc = "Packet ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "MDH_11_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_MDH_11_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_MDH_11_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_MDH_11_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_MDH_11_0_QW,
      ._desc = "Memory Domain Handle",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "RC_2",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_2_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_2_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_2_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_2_QW,
      ._desc = "Route Control Bit 2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "REQCMD_8_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_REQCMD_8_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_REQCMD_8_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_REQCMD_8_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_REQCMD_8_0_QW,
      ._desc = "Request Command",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_1",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_1_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_1_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_1_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_1_QW,
      ._desc = "Parity bit 1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UV",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UV_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UV_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UV_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UV_QW,
      ._desc = "Upper data valid",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "ADDR_39_6",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_39_6_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_39_6_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1 & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_39_6_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_39_6_QW,
      ._desc = "Address bits [39:6]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_req_tiletonic1_cclk_1_lo_netlink_detail[] = {
    { ._name = "ADDR_39_6",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_ADDR_39_6_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_ADDR_39_6_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_ADDR_39_6_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_ADDR_39_6_QW,
      ._desc = "Address bits [39:6]",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PARITY_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PARITY_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PARITY_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PARITY_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PARITY_0_QW,
      ._desc = "Parity bit 0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "UNUSUED",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_UNUSUED_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_UNUSUED_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_UNUSUED_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_UNUSUED_QW,
      ._desc = "Unsued",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "PKEY_15_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PKEY_15_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PKEY_15_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PKEY_15_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PKEY_15_0_QW,
      ._desc = "Pkey",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = "DSTID_1_0",
      ._bpos = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_DSTID_1_0_BP,
      ._mask = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_DSTID_1_0_MASK,
      ._rval = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_RSTDATA & AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_DSTID_1_0_MASK,
      ._index = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_DSTID_1_0_QW,
      ._desc = "Destination ID",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_ptrs_detail[] = {
    { ._name = "LM_TRIG_DELAY",
      ._bpos = AR_NL_CCLK_DBG_LM_PTRS_LM_TRIG_DELAY_BP,
      ._mask = AR_NL_CCLK_DBG_LM_PTRS_LM_TRIG_DELAY_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_PTRS_RSTDATA & AR_NL_CCLK_DBG_LM_PTRS_LM_TRIG_DELAY_MASK,
      ._index = AR_NL_CCLK_DBG_LM_PTRS_LM_TRIG_DELAY_QW,
      ._desc = "Current value of active trigger delay counter",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_REC_ACT",
      ._bpos = AR_NL_CCLK_DBG_LM_PTRS_LM_REC_ACT_BP,
      ._mask = AR_NL_CCLK_DBG_LM_PTRS_LM_REC_ACT_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_PTRS_RSTDATA & AR_NL_CCLK_DBG_LM_PTRS_LM_REC_ACT_MASK,
      ._index = AR_NL_CCLK_DBG_LM_PTRS_LM_REC_ACT_QW,
      ._desc = "Record Active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_REC_DONE",
      ._bpos = AR_NL_CCLK_DBG_LM_PTRS_LM_REC_DONE_BP,
      ._mask = AR_NL_CCLK_DBG_LM_PTRS_LM_REC_DONE_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_PTRS_RSTDATA & AR_NL_CCLK_DBG_LM_PTRS_LM_REC_DONE_MASK,
      ._index = AR_NL_CCLK_DBG_LM_PTRS_LM_REC_DONE_QW,
      ._desc = "Record Done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_MULT_EVENT",
      ._bpos = AR_NL_CCLK_DBG_LM_PTRS_LM_MULT_EVENT_BP,
      ._mask = AR_NL_CCLK_DBG_LM_PTRS_LM_MULT_EVENT_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_PTRS_RSTDATA & AR_NL_CCLK_DBG_LM_PTRS_LM_MULT_EVENT_MASK,
      ._index = AR_NL_CCLK_DBG_LM_PTRS_LM_MULT_EVENT_QW,
      ._desc = "Multiple Recording events occured during the same clock period",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_WR_AD_WRAP",
      ._bpos = AR_NL_CCLK_DBG_LM_PTRS_LM_WR_AD_WRAP_BP,
      ._mask = AR_NL_CCLK_DBG_LM_PTRS_LM_WR_AD_WRAP_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_PTRS_RSTDATA & AR_NL_CCLK_DBG_LM_PTRS_LM_WR_AD_WRAP_MASK,
      ._index = AR_NL_CCLK_DBG_LM_PTRS_LM_WR_AD_WRAP_QW,
      ._desc = "Write Address Pointer has wrapped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_RD_PTR",
      ._bpos = AR_NL_CCLK_DBG_LM_PTRS_LM_RD_PTR_BP,
      ._mask = AR_NL_CCLK_DBG_LM_PTRS_LM_RD_PTR_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_PTRS_RSTDATA & AR_NL_CCLK_DBG_LM_PTRS_LM_RD_PTR_MASK,
      ._index = AR_NL_CCLK_DBG_LM_PTRS_LM_RD_PTR_QW,
      ._desc = "Read Pointer of Record Buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_WR_PTR",
      ._bpos = AR_NL_CCLK_DBG_LM_PTRS_LM_WR_PTR_BP,
      ._mask = AR_NL_CCLK_DBG_LM_PTRS_LM_WR_PTR_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_PTRS_RSTDATA & AR_NL_CCLK_DBG_LM_PTRS_LM_WR_PTR_MASK,
      ._index = AR_NL_CCLK_DBG_LM_PTRS_LM_WR_PTR_QW,
      ._desc = "Write Pointer of the Record Buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_read_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_READ_LO_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_READ_LO_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_READ_LO_RSTDATA & AR_NL_CCLK_DBG_LM_READ_LO_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_READ_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_read_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_READ_MID_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_READ_MID_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_READ_MID_RSTDATA & AR_NL_CCLK_DBG_LM_READ_MID_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_READ_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_read_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_READ_HI_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_READ_HI_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_READ_HI_RSTDATA & AR_NL_CCLK_DBG_LM_READ_HI_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_READ_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_snap_sel_detail[] = {
    { ._name = "SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_SNAP_SEL_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_SNAP_SEL_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_SNAP_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_SNAP_SEL_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_SNAP_SEL_SEL_QW,
      ._desc = "Logic Monitor Snapshot Select",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_snap_dlo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_SNAP_DLO_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_SNAP_DLO_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_SNAP_DLO_RSTDATA & AR_NL_CCLK_DBG_LM_SNAP_DLO_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_SNAP_DLO_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_snap_dmid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_SNAP_DMID_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_SNAP_DMID_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_SNAP_DMID_RSTDATA & AR_NL_CCLK_DBG_LM_SNAP_DMID_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_SNAP_DMID_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_snap_dhi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_SNAP_DHI_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_SNAP_DHI_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_SNAP_DHI_RSTDATA & AR_NL_CCLK_DBG_LM_SNAP_DHI_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_SNAP_DHI_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_rem_trig_detail[] = {
    { ._name = "LM_PROP_TO_NL",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NL_QW,
      ._desc = "Propagate local triggers to other NL LM",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_MMR",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_MMR_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_MMR_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_MMR_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_MMR_QW,
      ._desc = "Enable Trigger from MMR block",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_NL",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NL_QW,
      ._desc = "Enable Trigger from other NL Logic Monitor",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "NIC_PROP_TO_NIC3",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC3_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC3_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC3_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC3_QW,
      ._desc = "Propagate NIC0, NIC1, and NIC2 triggers to NIC3, only valid in cclk Logic Monitor",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "NIC_PROP_TO_NIC2",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC2_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC2_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC2_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC2_QW,
      ._desc = "Propagate NIC0, NIC1, and NIC3 triggers to NIC2",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "NIC_PROP_TO_NIC1",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC1_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC1_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC1_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC1_QW,
      ._desc = "Propagate NIC0, NIC2, and NIC3 triggers to NIC1",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "NIC_PROP_TO_NIC0",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC0_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC0_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC0_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC0_QW,
      ._desc = "Propagate NIC1, NIC2, and NIC3 triggers to NIC0",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_PROP_TO_NIC",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NIC_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NIC_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NIC_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NIC_QW,
      ._desc = "Propagate local triggers to NICs",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_NIC3",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC3_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC3_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC3_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC3_QW,
      ._desc = "Enable remote triggers from NIC3",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_NIC2",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC2_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC2_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC2_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC2_QW,
      ._desc = "Enable remote triggers from NIC2",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_NIC1",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC1_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC1_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC1_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC1_QW,
      ._desc = "Enable remote triggers from NIC1",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_NIC0",
      ._bpos = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC0_BP,
      ._mask = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC0_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA & AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC0_MASK,
      ._index = AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC0_QW,
      ._desc = "Enable remote triggers from NIC0",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_trig_sts_detail[] = {
    { ._name = "REM_TRIG1_RCV_LAST",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_LAST_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_LAST_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_LAST_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_LAST_QW,
      ._desc = "The last trigger1 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG0_RCV_LAST",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_LAST_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_LAST_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_LAST_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_LAST_QW,
      ._desc = "The last trigger0 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG1_RCV_FIRST",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_FIRST_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_FIRST_QW,
      ._desc = "The first trigger1 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG0_RCV_FIRST",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_FIRST_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_FIRST_QW,
      ._desc = "The first trigger0 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG1_RCV",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_QW,
      ._desc = "A remote trigger1 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "REM_TRIG0_RCV",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_QW,
      ._desc = "A remote trigger0 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LCL_TRIG1_RCV",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG1_RCV_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG1_RCV_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG1_RCV_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG1_RCV_QW,
      ._desc = "A local trigger1 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LCL_TRIG0_RCV",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG0_RCV_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG0_RCV_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG0_RCV_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG0_RCV_QW,
      ._desc = "A local trigger0 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_errinj_lm_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NL_CCLK_DBG_ERRINJ_LM_ADDRESS_BP,
      ._mask = AR_NL_CCLK_DBG_ERRINJ_LM_ADDRESS_MASK,
      ._rval = AR_NL_CCLK_DBG_ERRINJ_LM_RSTDATA & AR_NL_CCLK_DBG_ERRINJ_LM_ADDRESS_MASK,
      ._index = AR_NL_CCLK_DBG_ERRINJ_LM_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_NL_CCLK_DBG_ERRINJ_LM_PARITY_BP,
      ._mask = AR_NL_CCLK_DBG_ERRINJ_LM_PARITY_MASK,
      ._rval = AR_NL_CCLK_DBG_ERRINJ_LM_RSTDATA & AR_NL_CCLK_DBG_ERRINJ_LM_PARITY_MASK,
      ._index = AR_NL_CCLK_DBG_ERRINJ_LM_PARITY_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding parity bit to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_NL_CCLK_DBG_ERRINJ_LM_TRIGGERED_BP,
      ._mask = AR_NL_CCLK_DBG_ERRINJ_LM_TRIGGERED_MASK,
      ._rval = AR_NL_CCLK_DBG_ERRINJ_LM_RSTDATA & AR_NL_CCLK_DBG_ERRINJ_LM_TRIGGERED_MASK,
      ._index = AR_NL_CCLK_DBG_ERRINJ_LM_TRIGGERED_QW,
      ._desc = "This status bit is cleared when the MMR is written and set when an error has been injected",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_NL_CCLK_DBG_ERRINJ_LM_MODE_BP,
      ._mask = AR_NL_CCLK_DBG_ERRINJ_LM_MODE_MASK,
      ._rval = AR_NL_CCLK_DBG_ERRINJ_LM_RSTDATA & AR_NL_CCLK_DBG_ERRINJ_LM_MODE_MASK,
      ._index = AR_NL_CCLK_DBG_ERRINJ_LM_MODE_QW,
      ._desc = "Mode 0: Inject error once",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NL_CCLK_DBG_ERRINJ_LM_ENABLE_BP,
      ._mask = AR_NL_CCLK_DBG_ERRINJ_LM_ENABLE_MASK,
      ._rval = AR_NL_CCLK_DBG_ERRINJ_LM_RSTDATA & AR_NL_CCLK_DBG_ERRINJ_LM_ENABLE_MASK,
      ._index = AR_NL_CCLK_DBG_ERRINJ_LM_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_err_info_lm_perr_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NL_CCLK_ERR_INFO_LM_PERR_ADDRESS_BP,
      ._mask = AR_NL_CCLK_ERR_INFO_LM_PERR_ADDRESS_MASK,
      ._rval = AR_NL_CCLK_ERR_INFO_LM_PERR_RSTDATA & AR_NL_CCLK_ERR_INFO_LM_PERR_ADDRESS_MASK,
      ._index = AR_NL_CCLK_ERR_INFO_LM_PERR_ADDRESS_QW,
      ._desc = "Address with parity error on LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_PERR",
      ._bpos = AR_NL_CCLK_ERR_INFO_LM_PERR_MMR_DETECTED_PERR_BP,
      ._mask = AR_NL_CCLK_ERR_INFO_LM_PERR_MMR_DETECTED_PERR_MASK,
      ._rval = AR_NL_CCLK_ERR_INFO_LM_PERR_RSTDATA & AR_NL_CCLK_ERR_INFO_LM_PERR_MMR_DETECTED_PERR_MASK,
      ._index = AR_NL_CCLK_ERR_INFO_LM_PERR_MMR_DETECTED_PERR_QW,
      ._desc = "The PE was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_err_info_lm_perr_cnt_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_CNT_BP,
      ._mask = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_CNT_MASK,
      ._rval = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_RSTDATA & AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_CNT_MASK,
      ._index = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_CNT_QW,
      ._desc = "Number of parity errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_cap_sel_detail[] = {
    { ._name = "DATA_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_CAP_SEL_DATA_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_CAP_SEL_DATA_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_CAP_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_CAP_SEL_DATA_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_CAP_SEL_DATA_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t0_cmp_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T0_CMP_LO_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T0_CMP_LO_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T0_CMP_LO_RSTDATA & AR_NL_CCLK_DBG_LM_T0_CMP_LO_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T0_CMP_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t0_cmp_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T0_CMP_MID_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T0_CMP_MID_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T0_CMP_MID_RSTDATA & AR_NL_CCLK_DBG_LM_T0_CMP_MID_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T0_CMP_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t0_cmp_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T0_CMP_HI_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T0_CMP_HI_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T0_CMP_HI_RSTDATA & AR_NL_CCLK_DBG_LM_T0_CMP_HI_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T0_CMP_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t0_mode_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T0_MODE_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T0_MODE_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T0_MODE_RSTDATA & AR_NL_CCLK_DBG_LM_T0_MODE_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T0_MODE_DATA_QW,
      ._desc = "0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t0_mask_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T0_MASK_LO_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T0_MASK_LO_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T0_MASK_LO_RSTDATA & AR_NL_CCLK_DBG_LM_T0_MASK_LO_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T0_MASK_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t0_mask_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T0_MASK_MID_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T0_MASK_MID_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T0_MASK_MID_RSTDATA & AR_NL_CCLK_DBG_LM_T0_MASK_MID_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T0_MASK_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t0_mask_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T0_MASK_HI_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T0_MASK_HI_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T0_MASK_HI_RSTDATA & AR_NL_CCLK_DBG_LM_T0_MASK_HI_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T0_MASK_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_trig_sel_detail[] = {
    { ._name = "DATA7_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA7_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA7_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA7_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA7_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DATA6_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA6_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA6_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA6_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA6_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DATA5_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA5_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA5_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA5_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA5_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DATA4_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA4_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA4_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA4_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA4_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DATA3_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA3_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA3_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA3_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA3_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DATA2_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA2_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA2_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA2_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA2_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DATA1_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA1_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA1_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA1_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA1_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "DATA0_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA0_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA0_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA0_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA0_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t1_cmp_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T1_CMP_LO_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T1_CMP_LO_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T1_CMP_LO_RSTDATA & AR_NL_CCLK_DBG_LM_T1_CMP_LO_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T1_CMP_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t1_cmp_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T1_CMP_MID_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T1_CMP_MID_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T1_CMP_MID_RSTDATA & AR_NL_CCLK_DBG_LM_T1_CMP_MID_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T1_CMP_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t1_cmp_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T1_CMP_HI_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T1_CMP_HI_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T1_CMP_HI_RSTDATA & AR_NL_CCLK_DBG_LM_T1_CMP_HI_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T1_CMP_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t1_mode_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T1_MODE_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T1_MODE_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T1_MODE_RSTDATA & AR_NL_CCLK_DBG_LM_T1_MODE_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T1_MODE_DATA_QW,
      ._desc = "0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t1_mask_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T1_MASK_LO_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T1_MASK_LO_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T1_MASK_LO_RSTDATA & AR_NL_CCLK_DBG_LM_T1_MASK_LO_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T1_MASK_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t1_mask_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T1_MASK_MID_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T1_MASK_MID_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T1_MASK_MID_RSTDATA & AR_NL_CCLK_DBG_LM_T1_MASK_MID_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T1_MASK_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_t1_mask_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NL_CCLK_DBG_LM_T1_MASK_HI_DATA_BP,
      ._mask = AR_NL_CCLK_DBG_LM_T1_MASK_HI_DATA_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_T1_MASK_HI_RSTDATA & AR_NL_CCLK_DBG_LM_T1_MASK_HI_DATA_MASK,
      ._index = AR_NL_CCLK_DBG_LM_T1_MASK_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nl_cclk_dbg_lm_mux_sel_detail[] = {
    { ._name = "CAP_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_MUX_SEL_CAP_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_MUX_SEL_CAP_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_MUX_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_MUX_SEL_CAP_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_MUX_SEL_CAP_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIG1_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG1_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG1_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_MUX_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG1_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG1_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIG0_SEL",
      ._bpos = AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG0_SEL_BP,
      ._mask = AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG0_SEL_MASK,
      ._rval = AR_NL_CCLK_DBG_LM_MUX_SEL_RSTDATA & AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG0_SEL_MASK,
      ._index = AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG0_SEL_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR NL_CCLK DESC MASK ARRAYS DECLARATIONS
 */
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_rval[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTDATA_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_rmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSTMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_wrmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_WRTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_WRTMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_WRTMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_rdmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RDMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RDMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RDMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_xsmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_XSMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_XSMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_XSMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_wsemsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_WSEMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_WSEMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_WSEMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_rsemsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSEMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSEMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RSEMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_w1smsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_W1SMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_W1SMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_W1SMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_w1cmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_W1CMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_W1CMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_W1CMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_wrstmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_WRSTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_WRSTMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_WRSTMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_hwwmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HWWMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HWWMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HWWMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_hwrmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HWRMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HWRMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HWRMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_rval[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTDATA_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_rmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSTMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_wrmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_WRTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_WRTMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_rdmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RDMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RDMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_xsmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_XSMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_XSMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_wsemsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_WSEMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_WSEMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_rsemsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSEMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RSEMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_w1smsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_W1SMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_W1SMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_w1cmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_W1CMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_W1CMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_wrstmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_WRSTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_WRSTMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_hwwmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_HWWMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_HWWMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_hwrmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_HWRMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_HWRMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_rval[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTDATA_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_rmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSTMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_wrmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_WRTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_WRTMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_WRTMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_rdmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RDMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RDMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RDMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_xsmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_XSMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_XSMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_XSMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_wsemsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_WSEMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_WSEMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_WSEMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_rsemsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSEMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSEMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RSEMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_w1smsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_W1SMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_W1SMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_W1SMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_w1cmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_W1CMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_W1CMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_W1CMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_wrstmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_WRSTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_WRSTMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_WRSTMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_hwwmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HWWMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HWWMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HWWMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_hwrmsk[3] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HWRMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HWRMASK_QW1,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HWRMASK_QW2
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_rval[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTDATA_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_rmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSTMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_wrmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_WRTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_WRTMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_rdmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RDMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RDMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_xsmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_XSMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_XSMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_wsemsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_WSEMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_WSEMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_rsemsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSEMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RSEMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_w1smsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_W1SMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_W1SMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_w1cmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_W1CMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_W1CMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_wrstmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_WRSTMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_WRSTMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_hwwmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_HWWMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_HWWMASK_QW1
};
static const uint64_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_hwrmsk[2] = {
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_HWRMASK_QW0,
	AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_HWRMASK_QW1
};

/*
 *  AR NL_CCLK MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nl_cclk_dbg_lm_ctl = {
    ._name = "AR_NL_CCLK_DBG_LM_CTL",
    ._addr = AR_NL_CCLK_DBG_LM_CTL,
    ._rval.val = AR_NL_CCLK_DBG_LM_CTL_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_CTL_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_CTL_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_CTL_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_CTL_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_CTL_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_CTL_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_CTL_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_CTL_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_CTL_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_CTL_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_CTL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_ctl_detail
};
static const cmmr_br_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink = {
    ._name = "AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK",
    ._addr = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK,
    ._rval.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_detail
};
static const cmmr_br_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink = {
    ._name = "AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK",
    ._addr = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK,
    ._rval.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_detail
};
static const cmmr_br_t __ar_nl_cclk_req_tiletonic0_lb_cclk_0_lo_netlink = {
    ._name = "AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK",
    ._addr = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK,
    ._rval.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_req_tiletonic0_lb_cclk_0_lo_netlink_detail
};
static const cmmr_br_t __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink = {
    ._name = "AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK",
    ._addr = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK,
    ._rval.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_hwrmsk,
    ._nqw = 3,
    ._size = 24,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_detail
};
static const cmmr_br_t __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink = {
    ._name = "AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK",
    ._addr = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK,
    ._rval.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_rval,
    ._rmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_rmsk,
    ._wrmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_wrmsk,
    ._rdmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_rdmsk,
    ._xsmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_xsmsk,
    ._wsemsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_wsemsk,
    ._rsemsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_rsemsk,
    ._w1smsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_w1smsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_w1cmsk,
    ._w1cmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_w1cmsk,
    ._wrstmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_wrstmsk,
    ._hwwmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_hwwmsk,
    ._hwrmsk.ptr = (uint64_t *)__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_hwrmsk,
    ._nqw = 2,
    ._size = 16,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_detail
};
static const cmmr_br_t __ar_nl_cclk_req_tiletonic1_cclk_1_lo_netlink = {
    ._name = "AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK",
    ._addr = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK,
    ._rval.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_req_tiletonic1_cclk_1_lo_netlink_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_ptrs = {
    ._name = "AR_NL_CCLK_DBG_LM_PTRS",
    ._addr = AR_NL_CCLK_DBG_LM_PTRS,
    ._rval.val = AR_NL_CCLK_DBG_LM_PTRS_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_PTRS_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_PTRS_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_PTRS_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_PTRS_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_PTRS_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_PTRS_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_PTRS_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_PTRS_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_PTRS_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_PTRS_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_PTRS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_nl_cclk_dbg_lm_ptrs_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_read_lo = {
    ._name = "AR_NL_CCLK_DBG_LM_READ_LO",
    ._addr = AR_NL_CCLK_DBG_LM_READ_LO,
    ._rval.val = AR_NL_CCLK_DBG_LM_READ_LO_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_READ_LO_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_READ_LO_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_READ_LO_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_READ_LO_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_READ_LO_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_READ_LO_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_READ_LO_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_READ_LO_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_READ_LO_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_READ_LO_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_READ_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_read_lo_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_read_mid = {
    ._name = "AR_NL_CCLK_DBG_LM_READ_MID",
    ._addr = AR_NL_CCLK_DBG_LM_READ_MID,
    ._rval.val = AR_NL_CCLK_DBG_LM_READ_MID_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_READ_MID_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_READ_MID_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_READ_MID_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_READ_MID_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_READ_MID_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_READ_MID_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_READ_MID_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_READ_MID_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_READ_MID_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_READ_MID_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_READ_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_read_mid_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_read_hi = {
    ._name = "AR_NL_CCLK_DBG_LM_READ_HI",
    ._addr = AR_NL_CCLK_DBG_LM_READ_HI,
    ._rval.val = AR_NL_CCLK_DBG_LM_READ_HI_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_READ_HI_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_READ_HI_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_READ_HI_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_READ_HI_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_READ_HI_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_READ_HI_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_READ_HI_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_READ_HI_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_READ_HI_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_READ_HI_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_READ_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_read_hi_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_snap_sel = {
    ._name = "AR_NL_CCLK_DBG_LM_SNAP_SEL",
    ._addr = AR_NL_CCLK_DBG_LM_SNAP_SEL,
    ._rval.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_SNAP_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nl_cclk_dbg_lm_snap_sel_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_snap_dlo = {
    ._name = "AR_NL_CCLK_DBG_LM_SNAP_DLO",
    ._addr = AR_NL_CCLK_DBG_LM_SNAP_DLO,
    ._rval.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DLO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_snap_dlo_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_snap_dmid = {
    ._name = "AR_NL_CCLK_DBG_LM_SNAP_DMID",
    ._addr = AR_NL_CCLK_DBG_LM_SNAP_DMID,
    ._rval.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DMID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_snap_dmid_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_snap_dhi = {
    ._name = "AR_NL_CCLK_DBG_LM_SNAP_DHI",
    ._addr = AR_NL_CCLK_DBG_LM_SNAP_DHI,
    ._rval.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_SNAP_DHI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_snap_dhi_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_rem_trig = {
    ._name = "AR_NL_CCLK_DBG_LM_REM_TRIG",
    ._addr = AR_NL_CCLK_DBG_LM_REM_TRIG,
    ._rval.val = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_REM_TRIG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_nl_cclk_dbg_lm_rem_trig_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_trig_sts = {
    ._name = "AR_NL_CCLK_DBG_LM_TRIG_STS",
    ._addr = AR_NL_CCLK_DBG_LM_TRIG_STS,
    ._rval.val = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_TRIG_STS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_trig_sts_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_errinj_lm = {
    ._name = "AR_NL_CCLK_DBG_ERRINJ_LM",
    ._addr = AR_NL_CCLK_DBG_ERRINJ_LM,
    ._rval.val = AR_NL_CCLK_DBG_ERRINJ_LM_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_ERRINJ_LM_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_errinj_lm_detail
};
static const cmmr_br_t __ar_nl_cclk_err_info_lm_perr = {
    ._name = "AR_NL_CCLK_ERR_INFO_LM_PERR",
    ._addr = AR_NL_CCLK_ERR_INFO_LM_PERR,
    ._rval.val = AR_NL_CCLK_ERR_INFO_LM_PERR_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_err_info_lm_perr_detail
};
static const cmmr_br_t __ar_nl_cclk_err_info_lm_perr_cnt = {
    ._name = "AR_NL_CCLK_ERR_INFO_LM_PERR_CNT",
    ._addr = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT,
    ._rval.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_err_info_lm_perr_cnt_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_cap_sel = {
    ._name = "AR_NL_CCLK_DBG_LM_CAP_SEL",
    ._addr = AR_NL_CCLK_DBG_LM_CAP_SEL,
    ._rval.val = AR_NL_CCLK_DBG_LM_CAP_SEL_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_CAP_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_cap_sel_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t0_cmp_lo = {
    ._name = "AR_NL_CCLK_DBG_LM_T0_CMP_LO",
    ._addr = AR_NL_CCLK_DBG_LM_T0_CMP_LO,
    ._rval.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t0_cmp_lo_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t0_cmp_mid = {
    ._name = "AR_NL_CCLK_DBG_LM_T0_CMP_MID",
    ._addr = AR_NL_CCLK_DBG_LM_T0_CMP_MID,
    ._rval.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t0_cmp_mid_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t0_cmp_hi = {
    ._name = "AR_NL_CCLK_DBG_LM_T0_CMP_HI",
    ._addr = AR_NL_CCLK_DBG_LM_T0_CMP_HI,
    ._rval.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T0_CMP_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t0_cmp_hi_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t0_mode = {
    ._name = "AR_NL_CCLK_DBG_LM_T0_MODE",
    ._addr = AR_NL_CCLK_DBG_LM_T0_MODE,
    ._rval.val = AR_NL_CCLK_DBG_LM_T0_MODE_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T0_MODE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t0_mode_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t0_mask_lo = {
    ._name = "AR_NL_CCLK_DBG_LM_T0_MASK_LO",
    ._addr = AR_NL_CCLK_DBG_LM_T0_MASK_LO,
    ._rval.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t0_mask_lo_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t0_mask_mid = {
    ._name = "AR_NL_CCLK_DBG_LM_T0_MASK_MID",
    ._addr = AR_NL_CCLK_DBG_LM_T0_MASK_MID,
    ._rval.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t0_mask_mid_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t0_mask_hi = {
    ._name = "AR_NL_CCLK_DBG_LM_T0_MASK_HI",
    ._addr = AR_NL_CCLK_DBG_LM_T0_MASK_HI,
    ._rval.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T0_MASK_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t0_mask_hi_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_trig_sel = {
    ._name = "AR_NL_CCLK_DBG_LM_TRIG_SEL",
    ._addr = AR_NL_CCLK_DBG_LM_TRIG_SEL,
    ._rval.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_TRIG_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_trig_sel_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t1_cmp_lo = {
    ._name = "AR_NL_CCLK_DBG_LM_T1_CMP_LO",
    ._addr = AR_NL_CCLK_DBG_LM_T1_CMP_LO,
    ._rval.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t1_cmp_lo_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t1_cmp_mid = {
    ._name = "AR_NL_CCLK_DBG_LM_T1_CMP_MID",
    ._addr = AR_NL_CCLK_DBG_LM_T1_CMP_MID,
    ._rval.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t1_cmp_mid_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t1_cmp_hi = {
    ._name = "AR_NL_CCLK_DBG_LM_T1_CMP_HI",
    ._addr = AR_NL_CCLK_DBG_LM_T1_CMP_HI,
    ._rval.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T1_CMP_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t1_cmp_hi_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t1_mode = {
    ._name = "AR_NL_CCLK_DBG_LM_T1_MODE",
    ._addr = AR_NL_CCLK_DBG_LM_T1_MODE,
    ._rval.val = AR_NL_CCLK_DBG_LM_T1_MODE_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T1_MODE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t1_mode_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t1_mask_lo = {
    ._name = "AR_NL_CCLK_DBG_LM_T1_MASK_LO",
    ._addr = AR_NL_CCLK_DBG_LM_T1_MASK_LO,
    ._rval.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t1_mask_lo_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t1_mask_mid = {
    ._name = "AR_NL_CCLK_DBG_LM_T1_MASK_MID",
    ._addr = AR_NL_CCLK_DBG_LM_T1_MASK_MID,
    ._rval.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t1_mask_mid_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_t1_mask_hi = {
    ._name = "AR_NL_CCLK_DBG_LM_T1_MASK_HI",
    ._addr = AR_NL_CCLK_DBG_LM_T1_MASK_HI,
    ._rval.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_T1_MASK_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_t1_mask_hi_detail
};
static const cmmr_br_t __ar_nl_cclk_dbg_lm_mux_sel = {
    ._name = "AR_NL_CCLK_DBG_LM_MUX_SEL",
    ._addr = AR_NL_CCLK_DBG_LM_MUX_SEL,
    ._rval.val = AR_NL_CCLK_DBG_LM_MUX_SEL_RSTDATA,
    ._rmsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_RSTMASK,
    ._wrmsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_WRTMASK,
    ._rdmsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_RDMASK,
    ._xsmsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_XSMASK,
    ._wsemsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_WSEMASK,
    ._rsemsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_RSEMASK,
    ._w1smsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_W1SMASK,
    ._w1cmsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_W1CMASK,
    ._wrstmsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_WRSTMASK,
    ._hwwmsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_HWWMASK,
    ._hwrmsk.val = AR_NL_CCLK_DBG_LM_MUX_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nl_cclk_dbg_lm_mux_sel_detail
};

/*
 *  INSTALL AR NL_CCLK MMRS
 */
static const cmmr_br_t* __ar_nl_cclk_mmrs[] = {
    &__ar_nl_cclk_dbg_lm_ctl,
    &__ar_nl_cclk_dbg_lm_ptrs,
    &__ar_nl_cclk_dbg_lm_read_lo,
    &__ar_nl_cclk_dbg_lm_read_mid,
    &__ar_nl_cclk_dbg_lm_read_hi,
    &__ar_nl_cclk_dbg_lm_snap_sel,
    &__ar_nl_cclk_dbg_lm_snap_dlo,
    &__ar_nl_cclk_dbg_lm_snap_dmid,
    &__ar_nl_cclk_dbg_lm_snap_dhi,
    &__ar_nl_cclk_dbg_lm_rem_trig,
    &__ar_nl_cclk_dbg_lm_trig_sts,
    &__ar_nl_cclk_dbg_errinj_lm,
    &__ar_nl_cclk_err_info_lm_perr,
    &__ar_nl_cclk_err_info_lm_perr_cnt,
    &__ar_nl_cclk_dbg_lm_cap_sel,
    &__ar_nl_cclk_dbg_lm_t0_cmp_lo,
    &__ar_nl_cclk_dbg_lm_t0_cmp_mid,
    &__ar_nl_cclk_dbg_lm_t0_cmp_hi,
    &__ar_nl_cclk_dbg_lm_t0_mode,
    &__ar_nl_cclk_dbg_lm_t0_mask_lo,
    &__ar_nl_cclk_dbg_lm_t0_mask_mid,
    &__ar_nl_cclk_dbg_lm_t0_mask_hi,
    &__ar_nl_cclk_dbg_lm_trig_sel,
    &__ar_nl_cclk_dbg_lm_t1_cmp_lo,
    &__ar_nl_cclk_dbg_lm_t1_cmp_mid,
    &__ar_nl_cclk_dbg_lm_t1_cmp_hi,
    &__ar_nl_cclk_dbg_lm_t1_mode,
    &__ar_nl_cclk_dbg_lm_t1_mask_lo,
    &__ar_nl_cclk_dbg_lm_t1_mask_mid,
    &__ar_nl_cclk_dbg_lm_t1_mask_hi,
    &__ar_nl_cclk_dbg_lm_mux_sel,
    NULL
};

/*
 *  INSTALL AR NL_CCLK LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_nl_cclk_enc_mmrs[] = {
    &__ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink,
    &__ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink,
    &__ar_nl_cclk_req_tiletonic0_lb_cclk_0_lo_netlink,
    &__ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink,
    &__ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink,
    &__ar_nl_cclk_req_tiletonic1_cclk_1_lo_netlink,
    NULL
};

#endif
