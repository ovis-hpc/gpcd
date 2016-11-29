/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pi_lm_detailed_mmrs_h.h
 * FILE: ar_pi_lm_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/
/**
 * @file ar_pi_lm_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:03 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_pi_lm_mmr_values.h and ar_pi_lm_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_pi_lm_mmr_values.h"

#ifndef _AR_PI_LM_DETAILED_MMRS_H_H_
#define _AR_PI_LM_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_pi_lm_mmrs[];	/* PI_LM Array */

/*
 *  AR PI_LM MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_pi_dbg_lm0_ctl_detail[] = {
    { ._name = "LM_RST",
      ._bpos = AR_PI_DBG_LM0_CTL_LM_RST_BP,
      ._mask = AR_PI_DBG_LM0_CTL_LM_RST_MASK,
      ._rval = AR_PI_DBG_LM0_CTL_RSTDATA & AR_PI_DBG_LM0_CTL_LM_RST_MASK,
      ._index = AR_PI_DBG_LM0_CTL_LM_RST_QW,
      ._desc = "Reset Capture block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WO"
    },
    { ._name = "LM_TRIG01_OCCURRED",
      ._bpos = AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_BP,
      ._mask = AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_MASK,
      ._rval = AR_PI_DBG_LM0_CTL_RSTDATA & AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_MASK,
      ._index = AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_QW,
      ._desc = "Sets when the capture mode is non-zero and a trigger 0 and a trigger 1 occur in the same clock cycle on the same bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_TRIG1_OCCURRED",
      ._bpos = AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_BP,
      ._mask = AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_MASK,
      ._rval = AR_PI_DBG_LM0_CTL_RSTDATA & AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_MASK,
      ._index = AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_QW,
      ._desc = "Sets when the capture mode is non-zero and a trigger 1 occurs on any bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_TRIG0_OCCURRED",
      ._bpos = AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_BP,
      ._mask = AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_MASK,
      ._rval = AR_PI_DBG_LM0_CTL_RSTDATA & AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_MASK,
      ._index = AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_QW,
      ._desc = "Sets when the capture mode is non-zero and a trigger 0 occurs on any bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_CAP_STATE",
      ._bpos = AR_PI_DBG_LM0_CTL_LM_CAP_STATE_BP,
      ._mask = AR_PI_DBG_LM0_CTL_LM_CAP_STATE_MASK,
      ._rval = AR_PI_DBG_LM0_CTL_RSTDATA & AR_PI_DBG_LM0_CTL_LM_CAP_STATE_MASK,
      ._index = AR_PI_DBG_LM0_CTL_LM_CAP_STATE_QW,
      ._desc = "Trigger State Machine Value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_CTL_T0_CNT",
      ._bpos = AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_BP,
      ._mask = AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK,
      ._rval = AR_PI_DBG_LM0_CTL_RSTDATA & AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK,
      ._index = AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_QW,
      ._desc = "Trigger 0 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_T1_CNT",
      ._bpos = AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_BP,
      ._mask = AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK,
      ._rval = AR_PI_DBG_LM0_CTL_RSTDATA & AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK,
      ._index = AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_QW,
      ._desc = "Trigger 1 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_MODE",
      ._bpos = AR_PI_DBG_LM0_CTL_LM_CTL_MODE_BP,
      ._mask = AR_PI_DBG_LM0_CTL_LM_CTL_MODE_MASK,
      ._rval = AR_PI_DBG_LM0_CTL_RSTDATA & AR_PI_DBG_LM0_CTL_LM_CTL_MODE_MASK,
      ._index = AR_PI_DBG_LM0_CTL_LM_CTL_MODE_QW,
      ._desc = "Capture Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_ptrs_detail[] = {
    { ._name = "LM_REC_ACT",
      ._bpos = AR_PI_DBG_LM0_PTRS_LM_REC_ACT_BP,
      ._mask = AR_PI_DBG_LM0_PTRS_LM_REC_ACT_MASK,
      ._rval = AR_PI_DBG_LM0_PTRS_RSTDATA & AR_PI_DBG_LM0_PTRS_LM_REC_ACT_MASK,
      ._index = AR_PI_DBG_LM0_PTRS_LM_REC_ACT_QW,
      ._desc = "Record Active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_REC_DONE",
      ._bpos = AR_PI_DBG_LM0_PTRS_LM_REC_DONE_BP,
      ._mask = AR_PI_DBG_LM0_PTRS_LM_REC_DONE_MASK,
      ._rval = AR_PI_DBG_LM0_PTRS_RSTDATA & AR_PI_DBG_LM0_PTRS_LM_REC_DONE_MASK,
      ._index = AR_PI_DBG_LM0_PTRS_LM_REC_DONE_QW,
      ._desc = "Record Done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_MULT_EVENT",
      ._bpos = AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_BP,
      ._mask = AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_MASK,
      ._rval = AR_PI_DBG_LM0_PTRS_RSTDATA & AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_MASK,
      ._index = AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_QW,
      ._desc = "Multiple Recording events occured during the same clock period",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_WR_AD_WRAP",
      ._bpos = AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_BP,
      ._mask = AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK,
      ._rval = AR_PI_DBG_LM0_PTRS_RSTDATA & AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK,
      ._index = AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_QW,
      ._desc = "Write Address Pointer has wrapped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_RD_PTR",
      ._bpos = AR_PI_DBG_LM0_PTRS_LM_RD_PTR_BP,
      ._mask = AR_PI_DBG_LM0_PTRS_LM_RD_PTR_MASK,
      ._rval = AR_PI_DBG_LM0_PTRS_RSTDATA & AR_PI_DBG_LM0_PTRS_LM_RD_PTR_MASK,
      ._index = AR_PI_DBG_LM0_PTRS_LM_RD_PTR_QW,
      ._desc = "Read Pointer of Record Buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_WR_PTR",
      ._bpos = AR_PI_DBG_LM0_PTRS_LM_WR_PTR_BP,
      ._mask = AR_PI_DBG_LM0_PTRS_LM_WR_PTR_MASK,
      ._rval = AR_PI_DBG_LM0_PTRS_RSTDATA & AR_PI_DBG_LM0_PTRS_LM_WR_PTR_MASK,
      ._index = AR_PI_DBG_LM0_PTRS_LM_WR_PTR_QW,
      ._desc = "Write Pointer of the Record Buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_read_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_READ_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM0_READ_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_READ_LO_RSTDATA & AR_PI_DBG_LM0_READ_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM0_READ_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_read_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_READ_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM0_READ_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_READ_MID_RSTDATA & AR_PI_DBG_LM0_READ_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM0_READ_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_read_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_READ_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM0_READ_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_READ_HI_RSTDATA & AR_PI_DBG_LM0_READ_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM0_READ_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_snap_sel_detail[] = {
    { ._name = "SEL",
      ._bpos = AR_PI_DBG_LM0_SNAP_SEL_SEL_BP,
      ._mask = AR_PI_DBG_LM0_SNAP_SEL_SEL_MASK,
      ._rval = AR_PI_DBG_LM0_SNAP_SEL_RSTDATA & AR_PI_DBG_LM0_SNAP_SEL_SEL_MASK,
      ._index = AR_PI_DBG_LM0_SNAP_SEL_SEL_QW,
      ._desc = "Logic Monitor Snapshot Select This field is not used since the the logic monitor has only 1 capture bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_snap_dlo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_SNAP_DLO_DATA_BP,
      ._mask = AR_PI_DBG_LM0_SNAP_DLO_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_SNAP_DLO_RSTDATA & AR_PI_DBG_LM0_SNAP_DLO_DATA_MASK,
      ._index = AR_PI_DBG_LM0_SNAP_DLO_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_snap_dmid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_SNAP_DMID_DATA_BP,
      ._mask = AR_PI_DBG_LM0_SNAP_DMID_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_SNAP_DMID_RSTDATA & AR_PI_DBG_LM0_SNAP_DMID_DATA_MASK,
      ._index = AR_PI_DBG_LM0_SNAP_DMID_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_snap_dhi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_SNAP_DHI_DATA_BP,
      ._mask = AR_PI_DBG_LM0_SNAP_DHI_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_SNAP_DHI_RSTDATA & AR_PI_DBG_LM0_SNAP_DHI_DATA_MASK,
      ._index = AR_PI_DBG_LM0_SNAP_DHI_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_rem_trig_detail[] = {
    { ._name = "LM_ENABLE_FROM_MMR",
      ._bpos = AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_BP,
      ._mask = AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_MASK,
      ._rval = AR_PI_DBG_LM0_REM_TRIG_RSTDATA & AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_MASK,
      ._index = AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_QW,
      ._desc = "Enable Trigger from MMR block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_PI",
      ._bpos = AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_BP,
      ._mask = AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_MASK,
      ._rval = AR_PI_DBG_LM0_REM_TRIG_RSTDATA & AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_MASK,
      ._index = AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_QW,
      ._desc = "Enable Trigger from other PI Logic Monitor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_NIC",
      ._bpos = AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_BP,
      ._mask = AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_MASK,
      ._rval = AR_PI_DBG_LM0_REM_TRIG_RSTDATA & AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_MASK,
      ._index = AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_QW,
      ._desc = "Enable remote trigger from NIC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_trig_sts_detail[] = {
    { ._name = "REM_TRIG1_RCV_LAST",
      ._bpos = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_STS_RSTDATA & AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_QW,
      ._desc = "The last trigger1 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG0_RCV_LAST",
      ._bpos = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_STS_RSTDATA & AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_QW,
      ._desc = "The last trigger0 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG1_RCV_FIRST",
      ._bpos = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_STS_RSTDATA & AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_QW,
      ._desc = "The first trigger1 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG0_RCV_FIRST",
      ._bpos = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_STS_RSTDATA & AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_QW,
      ._desc = "The first trigger0 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG1_RCV",
      ._bpos = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_STS_RSTDATA & AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_QW,
      ._desc = "A remote trigger1 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "REM_TRIG0_RCV",
      ._bpos = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_STS_RSTDATA & AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_QW,
      ._desc = "A remote trigger0 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LCL_TRIG1_RCV",
      ._bpos = AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_STS_RSTDATA & AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_QW,
      ._desc = "A local trigger1 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LCL_TRIG0_RCV",
      ._bpos = AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_STS_RSTDATA & AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_QW,
      ._desc = "A local trigger0 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_errinj_lm0_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_PI_DBG_ERRINJ_LM0_ADDRESS_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM0_ADDRESS_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM0_RSTDATA & AR_PI_DBG_ERRINJ_LM0_ADDRESS_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM0_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_PI_DBG_ERRINJ_LM0_PARITY_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM0_PARITY_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM0_RSTDATA & AR_PI_DBG_ERRINJ_LM0_PARITY_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM0_PARITY_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding parity bit to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_PI_DBG_ERRINJ_LM0_TRIGGERED_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM0_TRIGGERED_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM0_RSTDATA & AR_PI_DBG_ERRINJ_LM0_TRIGGERED_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM0_TRIGGERED_QW,
      ._desc = "This status bit is cleared when the MMR is written and set when an error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_PI_DBG_ERRINJ_LM0_MODE_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM0_MODE_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM0_RSTDATA & AR_PI_DBG_ERRINJ_LM0_MODE_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM0_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_PI_DBG_ERRINJ_LM0_ENABLE_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM0_ENABLE_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM0_RSTDATA & AR_PI_DBG_ERRINJ_LM0_ENABLE_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM0_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_err_info_lm0_perr_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_PI_ERR_INFO_LM0_PERR_ADDRESS_BP,
      ._mask = AR_PI_ERR_INFO_LM0_PERR_ADDRESS_MASK,
      ._rval = AR_PI_ERR_INFO_LM0_PERR_RSTDATA & AR_PI_ERR_INFO_LM0_PERR_ADDRESS_MASK,
      ._index = AR_PI_ERR_INFO_LM0_PERR_ADDRESS_QW,
      ._desc = "Address with parity error on LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_PERR",
      ._bpos = AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_BP,
      ._mask = AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_MASK,
      ._rval = AR_PI_ERR_INFO_LM0_PERR_RSTDATA & AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_MASK,
      ._index = AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_QW,
      ._desc = "The PE was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_err_info_lm0_perr_cnt_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_BP,
      ._mask = AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_MASK,
      ._rval = AR_PI_ERR_INFO_LM0_PERR_CNT_RSTDATA & AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_MASK,
      ._index = AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_QW,
      ._desc = "Number of parity errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_cap_sel_detail[] = {
    { ._name = "DEN",
      ._bpos = AR_PI_DBG_LM0_CAP_SEL_DEN_BP,
      ._mask = AR_PI_DBG_LM0_CAP_SEL_DEN_MASK,
      ._rval = AR_PI_DBG_LM0_CAP_SEL_RSTDATA & AR_PI_DBG_LM0_CAP_SEL_DEN_MASK,
      ._index = AR_PI_DBG_LM0_CAP_SEL_DEN_QW,
      ._desc = "LM Select for the DEN Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PII",
      ._bpos = AR_PI_DBG_LM0_CAP_SEL_PII_BP,
      ._mask = AR_PI_DBG_LM0_CAP_SEL_PII_MASK,
      ._rval = AR_PI_DBG_LM0_CAP_SEL_RSTDATA & AR_PI_DBG_LM0_CAP_SEL_PII_MASK,
      ._index = AR_PI_DBG_LM0_CAP_SEL_PII_QW,
      ._desc = "LM Select for the PII Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PMI",
      ._bpos = AR_PI_DBG_LM0_CAP_SEL_PMI_BP,
      ._mask = AR_PI_DBG_LM0_CAP_SEL_PMI_MASK,
      ._rval = AR_PI_DBG_LM0_CAP_SEL_RSTDATA & AR_PI_DBG_LM0_CAP_SEL_PMI_MASK,
      ._index = AR_PI_DBG_LM0_CAP_SEL_PMI_QW,
      ._desc = "LM Select for the PMI Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PTI",
      ._bpos = AR_PI_DBG_LM0_CAP_SEL_PTI_BP,
      ._mask = AR_PI_DBG_LM0_CAP_SEL_PTI_MASK,
      ._rval = AR_PI_DBG_LM0_CAP_SEL_RSTDATA & AR_PI_DBG_LM0_CAP_SEL_PTI_MASK,
      ._index = AR_PI_DBG_LM0_CAP_SEL_PTI_QW,
      ._desc = "LM Select for the PTI Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t0_cmp_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T0_CMP_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T0_CMP_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T0_CMP_LO_RSTDATA & AR_PI_DBG_LM0_T0_CMP_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T0_CMP_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t0_cmp_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T0_CMP_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T0_CMP_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T0_CMP_MID_RSTDATA & AR_PI_DBG_LM0_T0_CMP_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T0_CMP_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t0_cmp_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T0_CMP_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T0_CMP_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T0_CMP_HI_RSTDATA & AR_PI_DBG_LM0_T0_CMP_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T0_CMP_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t0_mode_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T0_MODE_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T0_MODE_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T0_MODE_RSTDATA & AR_PI_DBG_LM0_T0_MODE_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T0_MODE_DATA_QW,
      ._desc = "0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t0_mask_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T0_MASK_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T0_MASK_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T0_MASK_LO_RSTDATA & AR_PI_DBG_LM0_T0_MASK_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T0_MASK_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t0_mask_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T0_MASK_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T0_MASK_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T0_MASK_MID_RSTDATA & AR_PI_DBG_LM0_T0_MASK_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T0_MASK_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t0_mask_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T0_MASK_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T0_MASK_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T0_MASK_HI_RSTDATA & AR_PI_DBG_LM0_T0_MASK_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T0_MASK_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_trig_sel_detail[] = {
    { ._name = "DEN",
      ._bpos = AR_PI_DBG_LM0_TRIG_SEL_DEN_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_SEL_DEN_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_SEL_RSTDATA & AR_PI_DBG_LM0_TRIG_SEL_DEN_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_SEL_DEN_QW,
      ._desc = "LM Select for the DEN Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PII",
      ._bpos = AR_PI_DBG_LM0_TRIG_SEL_PII_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_SEL_PII_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_SEL_RSTDATA & AR_PI_DBG_LM0_TRIG_SEL_PII_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_SEL_PII_QW,
      ._desc = "LM Select for the PII Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PMI",
      ._bpos = AR_PI_DBG_LM0_TRIG_SEL_PMI_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_SEL_PMI_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_SEL_RSTDATA & AR_PI_DBG_LM0_TRIG_SEL_PMI_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_SEL_PMI_QW,
      ._desc = "LM Select for the PMI Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PTI",
      ._bpos = AR_PI_DBG_LM0_TRIG_SEL_PTI_BP,
      ._mask = AR_PI_DBG_LM0_TRIG_SEL_PTI_MASK,
      ._rval = AR_PI_DBG_LM0_TRIG_SEL_RSTDATA & AR_PI_DBG_LM0_TRIG_SEL_PTI_MASK,
      ._index = AR_PI_DBG_LM0_TRIG_SEL_PTI_QW,
      ._desc = "LM Select for the PTI Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t1_cmp_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T1_CMP_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T1_CMP_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T1_CMP_LO_RSTDATA & AR_PI_DBG_LM0_T1_CMP_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T1_CMP_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t1_cmp_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T1_CMP_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T1_CMP_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T1_CMP_MID_RSTDATA & AR_PI_DBG_LM0_T1_CMP_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T1_CMP_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t1_cmp_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T1_CMP_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T1_CMP_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T1_CMP_HI_RSTDATA & AR_PI_DBG_LM0_T1_CMP_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T1_CMP_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t1_mode_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T1_MODE_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T1_MODE_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T1_MODE_RSTDATA & AR_PI_DBG_LM0_T1_MODE_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T1_MODE_DATA_QW,
      ._desc = "0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t1_mask_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T1_MASK_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T1_MASK_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T1_MASK_LO_RSTDATA & AR_PI_DBG_LM0_T1_MASK_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T1_MASK_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t1_mask_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T1_MASK_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T1_MASK_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T1_MASK_MID_RSTDATA & AR_PI_DBG_LM0_T1_MASK_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T1_MASK_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_t1_mask_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM0_T1_MASK_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM0_T1_MASK_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM0_T1_MASK_HI_RSTDATA & AR_PI_DBG_LM0_T1_MASK_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM0_T1_MASK_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm0_mux_sel_detail[] = {
    { ._name = "PCLK_SEL1",
      ._bpos = AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_BP,
      ._mask = AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_MASK,
      ._rval = AR_PI_DBG_LM0_MUX_SEL_RSTDATA & AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_MASK,
      ._index = AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_QW,
      ._desc = "LM Select for the ASYNC Block mux 1 7-0 same as PCLK_SEL0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PCLK_SEL0",
      ._bpos = AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_BP,
      ._mask = AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_MASK,
      ._rval = AR_PI_DBG_LM0_MUX_SEL_RSTDATA & AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_MASK,
      ._index = AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_QW,
      ._desc = "LM Select for the ASYNC Block mux 0 0 = PTI capture datap 1 = PMI capture datap 2 = PII capture datap 3 = DEN capture datap 4 = PTI trigger datap 5 = PMI trigger datap 6 = PII trigger datap 7 = DEN trigger datap",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CAP_SEL",
      ._bpos = AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_BP,
      ._mask = AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_MASK,
      ._rval = AR_PI_DBG_LM0_MUX_SEL_RSTDATA & AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_MASK,
      ._index = AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_QW,
      ._desc = "MUX Select for Capture Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIG1_SEL",
      ._bpos = AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_BP,
      ._mask = AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_MASK,
      ._rval = AR_PI_DBG_LM0_MUX_SEL_RSTDATA & AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_MASK,
      ._index = AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_QW,
      ._desc = "MUX Select for Trigger 1 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIG0_SEL",
      ._bpos = AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_BP,
      ._mask = AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_MASK,
      ._rval = AR_PI_DBG_LM0_MUX_SEL_RSTDATA & AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_MASK,
      ._index = AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_QW,
      ._desc = "MUX Select for Trigger 0 Data 0 = PTI capture data 1 = PMI capture data 2 = PII capture data 3 = Data selected by PCLK_SEL0 4 = PTI trigger data 5 = PMI trigger data 6 = PII trigger data 7 = Data slected by PCLK_SEL1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_ctl_detail[] = {
    { ._name = "LM_RST",
      ._bpos = AR_PI_DBG_LM1_CTL_LM_RST_BP,
      ._mask = AR_PI_DBG_LM1_CTL_LM_RST_MASK,
      ._rval = AR_PI_DBG_LM1_CTL_RSTDATA & AR_PI_DBG_LM1_CTL_LM_RST_MASK,
      ._index = AR_PI_DBG_LM1_CTL_LM_RST_QW,
      ._desc = "Reset Capture block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WO"
    },
    { ._name = "LM_TRIG01_OCCURRED",
      ._bpos = AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_BP,
      ._mask = AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_MASK,
      ._rval = AR_PI_DBG_LM1_CTL_RSTDATA & AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_MASK,
      ._index = AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_QW,
      ._desc = "Sets when the capture mode is non-zero and a trigger 0 and a trigger 1 occur in the same clock cycle on the same bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_TRIG1_OCCURRED",
      ._bpos = AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_BP,
      ._mask = AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_MASK,
      ._rval = AR_PI_DBG_LM1_CTL_RSTDATA & AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_MASK,
      ._index = AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_QW,
      ._desc = "Sets when the capture mode is non-zero and a trigger 1 occurs on any bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_TRIG0_OCCURRED",
      ._bpos = AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_BP,
      ._mask = AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_MASK,
      ._rval = AR_PI_DBG_LM1_CTL_RSTDATA & AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_MASK,
      ._index = AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_QW,
      ._desc = "Sets when the capture mode is non-zero and a trigger 0 occurs on any bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_CAP_STATE",
      ._bpos = AR_PI_DBG_LM1_CTL_LM_CAP_STATE_BP,
      ._mask = AR_PI_DBG_LM1_CTL_LM_CAP_STATE_MASK,
      ._rval = AR_PI_DBG_LM1_CTL_RSTDATA & AR_PI_DBG_LM1_CTL_LM_CAP_STATE_MASK,
      ._index = AR_PI_DBG_LM1_CTL_LM_CAP_STATE_QW,
      ._desc = "Trigger State Machine Value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_CTL_T0_CNT",
      ._bpos = AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_BP,
      ._mask = AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK,
      ._rval = AR_PI_DBG_LM1_CTL_RSTDATA & AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK,
      ._index = AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_QW,
      ._desc = "Trigger 0 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_T1_CNT",
      ._bpos = AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_BP,
      ._mask = AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK,
      ._rval = AR_PI_DBG_LM1_CTL_RSTDATA & AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK,
      ._index = AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_QW,
      ._desc = "Trigger 1 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_MODE",
      ._bpos = AR_PI_DBG_LM1_CTL_LM_CTL_MODE_BP,
      ._mask = AR_PI_DBG_LM1_CTL_LM_CTL_MODE_MASK,
      ._rval = AR_PI_DBG_LM1_CTL_RSTDATA & AR_PI_DBG_LM1_CTL_LM_CTL_MODE_MASK,
      ._index = AR_PI_DBG_LM1_CTL_LM_CTL_MODE_QW,
      ._desc = "Capture Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_ptrs_detail[] = {
    { ._name = "LM_REC_ACT",
      ._bpos = AR_PI_DBG_LM1_PTRS_LM_REC_ACT_BP,
      ._mask = AR_PI_DBG_LM1_PTRS_LM_REC_ACT_MASK,
      ._rval = AR_PI_DBG_LM1_PTRS_RSTDATA & AR_PI_DBG_LM1_PTRS_LM_REC_ACT_MASK,
      ._index = AR_PI_DBG_LM1_PTRS_LM_REC_ACT_QW,
      ._desc = "Record Active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_REC_DONE",
      ._bpos = AR_PI_DBG_LM1_PTRS_LM_REC_DONE_BP,
      ._mask = AR_PI_DBG_LM1_PTRS_LM_REC_DONE_MASK,
      ._rval = AR_PI_DBG_LM1_PTRS_RSTDATA & AR_PI_DBG_LM1_PTRS_LM_REC_DONE_MASK,
      ._index = AR_PI_DBG_LM1_PTRS_LM_REC_DONE_QW,
      ._desc = "Record Done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_MULT_EVENT",
      ._bpos = AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_BP,
      ._mask = AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_MASK,
      ._rval = AR_PI_DBG_LM1_PTRS_RSTDATA & AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_MASK,
      ._index = AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_QW,
      ._desc = "Multiple Recording events occured during the same clock period",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_WR_AD_WRAP",
      ._bpos = AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_BP,
      ._mask = AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK,
      ._rval = AR_PI_DBG_LM1_PTRS_RSTDATA & AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK,
      ._index = AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_QW,
      ._desc = "Write Address Pointer has wrapped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = "LM_RD_PTR",
      ._bpos = AR_PI_DBG_LM1_PTRS_LM_RD_PTR_BP,
      ._mask = AR_PI_DBG_LM1_PTRS_LM_RD_PTR_MASK,
      ._rval = AR_PI_DBG_LM1_PTRS_RSTDATA & AR_PI_DBG_LM1_PTRS_LM_RD_PTR_MASK,
      ._index = AR_PI_DBG_LM1_PTRS_LM_RD_PTR_QW,
      ._desc = "Read Pointer of Record Buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_WR_PTR",
      ._bpos = AR_PI_DBG_LM1_PTRS_LM_WR_PTR_BP,
      ._mask = AR_PI_DBG_LM1_PTRS_LM_WR_PTR_MASK,
      ._rval = AR_PI_DBG_LM1_PTRS_RSTDATA & AR_PI_DBG_LM1_PTRS_LM_WR_PTR_MASK,
      ._index = AR_PI_DBG_LM1_PTRS_LM_WR_PTR_QW,
      ._desc = "Write Pointer of the Record Buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_read_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_READ_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM1_READ_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_READ_LO_RSTDATA & AR_PI_DBG_LM1_READ_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM1_READ_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_read_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_READ_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM1_READ_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_READ_MID_RSTDATA & AR_PI_DBG_LM1_READ_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM1_READ_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_read_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_READ_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM1_READ_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_READ_HI_RSTDATA & AR_PI_DBG_LM1_READ_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM1_READ_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_snap_sel_detail[] = {
    { ._name = "SEL",
      ._bpos = AR_PI_DBG_LM1_SNAP_SEL_SEL_BP,
      ._mask = AR_PI_DBG_LM1_SNAP_SEL_SEL_MASK,
      ._rval = AR_PI_DBG_LM1_SNAP_SEL_RSTDATA & AR_PI_DBG_LM1_SNAP_SEL_SEL_MASK,
      ._index = AR_PI_DBG_LM1_SNAP_SEL_SEL_QW,
      ._desc = "Logic Monitor Snapshot Select This field is not used since the the logic monitor has only 1 capture bus",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_snap_dlo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_SNAP_DLO_DATA_BP,
      ._mask = AR_PI_DBG_LM1_SNAP_DLO_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_SNAP_DLO_RSTDATA & AR_PI_DBG_LM1_SNAP_DLO_DATA_MASK,
      ._index = AR_PI_DBG_LM1_SNAP_DLO_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_snap_dmid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_SNAP_DMID_DATA_BP,
      ._mask = AR_PI_DBG_LM1_SNAP_DMID_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_SNAP_DMID_RSTDATA & AR_PI_DBG_LM1_SNAP_DMID_DATA_MASK,
      ._index = AR_PI_DBG_LM1_SNAP_DMID_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_snap_dhi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_SNAP_DHI_DATA_BP,
      ._mask = AR_PI_DBG_LM1_SNAP_DHI_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_SNAP_DHI_RSTDATA & AR_PI_DBG_LM1_SNAP_DHI_DATA_MASK,
      ._index = AR_PI_DBG_LM1_SNAP_DHI_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_rem_trig_detail[] = {
    { ._name = "LM_ENABLE_FROM_MMR",
      ._bpos = AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_BP,
      ._mask = AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_MASK,
      ._rval = AR_PI_DBG_LM1_REM_TRIG_RSTDATA & AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_MASK,
      ._index = AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_QW,
      ._desc = "Enable Trigger from MMR block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_PI",
      ._bpos = AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_BP,
      ._mask = AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_MASK,
      ._rval = AR_PI_DBG_LM1_REM_TRIG_RSTDATA & AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_MASK,
      ._index = AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_QW,
      ._desc = "Enable Trigger from other PI Logic Monitor",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_ENABLE_FROM_NIC",
      ._bpos = AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_BP,
      ._mask = AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_MASK,
      ._rval = AR_PI_DBG_LM1_REM_TRIG_RSTDATA & AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_MASK,
      ._index = AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_QW,
      ._desc = "Enable remote trigger from NIC",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_trig_sts_detail[] = {
    { ._name = "REM_TRIG1_RCV_LAST",
      ._bpos = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_STS_RSTDATA & AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_QW,
      ._desc = "The last trigger1 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG0_RCV_LAST",
      ._bpos = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_STS_RSTDATA & AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_QW,
      ._desc = "The last trigger0 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG1_RCV_FIRST",
      ._bpos = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_STS_RSTDATA & AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_QW,
      ._desc = "The first trigger1 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG0_RCV_FIRST",
      ._bpos = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_STS_RSTDATA & AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_QW,
      ._desc = "The first trigger0 received by LM was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "REM_TRIG1_RCV",
      ._bpos = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_STS_RSTDATA & AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_QW,
      ._desc = "A remote trigger1 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "REM_TRIG0_RCV",
      ._bpos = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_STS_RSTDATA & AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_QW,
      ._desc = "A remote trigger0 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LCL_TRIG1_RCV",
      ._bpos = AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_STS_RSTDATA & AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_QW,
      ._desc = "A local trigger1 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LCL_TRIG0_RCV",
      ._bpos = AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_STS_RSTDATA & AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_QW,
      ._desc = "A local trigger0 has been received by LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_errinj_lm1_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_PI_DBG_ERRINJ_LM1_ADDRESS_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM1_ADDRESS_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM1_RSTDATA & AR_PI_DBG_ERRINJ_LM1_ADDRESS_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM1_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PARITY",
      ._bpos = AR_PI_DBG_ERRINJ_LM1_PARITY_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM1_PARITY_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM1_RSTDATA & AR_PI_DBG_ERRINJ_LM1_PARITY_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM1_PARITY_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding parity bit to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIGGERED",
      ._bpos = AR_PI_DBG_ERRINJ_LM1_TRIGGERED_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM1_TRIGGERED_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM1_RSTDATA & AR_PI_DBG_ERRINJ_LM1_TRIGGERED_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM1_TRIGGERED_QW,
      ._desc = "This status bit is cleared when the MMR is written and set when an error has been injected",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MODE",
      ._bpos = AR_PI_DBG_ERRINJ_LM1_MODE_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM1_MODE_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM1_RSTDATA & AR_PI_DBG_ERRINJ_LM1_MODE_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM1_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_PI_DBG_ERRINJ_LM1_ENABLE_BP,
      ._mask = AR_PI_DBG_ERRINJ_LM1_ENABLE_MASK,
      ._rval = AR_PI_DBG_ERRINJ_LM1_RSTDATA & AR_PI_DBG_ERRINJ_LM1_ENABLE_MASK,
      ._index = AR_PI_DBG_ERRINJ_LM1_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_err_info_lm1_perr_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_PI_ERR_INFO_LM1_PERR_ADDRESS_BP,
      ._mask = AR_PI_ERR_INFO_LM1_PERR_ADDRESS_MASK,
      ._rval = AR_PI_ERR_INFO_LM1_PERR_RSTDATA & AR_PI_ERR_INFO_LM1_PERR_ADDRESS_MASK,
      ._index = AR_PI_ERR_INFO_LM1_PERR_ADDRESS_QW,
      ._desc = "Address with parity error on LM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "MMR_DETECTED_PERR",
      ._bpos = AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_BP,
      ._mask = AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_MASK,
      ._rval = AR_PI_ERR_INFO_LM1_PERR_RSTDATA & AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_MASK,
      ._index = AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_QW,
      ._desc = "The PE was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_err_info_lm1_perr_cnt_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_BP,
      ._mask = AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_MASK,
      ._rval = AR_PI_ERR_INFO_LM1_PERR_CNT_RSTDATA & AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_MASK,
      ._index = AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_QW,
      ._desc = "Number of parity errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_cap_sel_detail[] = {
    { ._name = "DEN",
      ._bpos = AR_PI_DBG_LM1_CAP_SEL_DEN_BP,
      ._mask = AR_PI_DBG_LM1_CAP_SEL_DEN_MASK,
      ._rval = AR_PI_DBG_LM1_CAP_SEL_RSTDATA & AR_PI_DBG_LM1_CAP_SEL_DEN_MASK,
      ._index = AR_PI_DBG_LM1_CAP_SEL_DEN_QW,
      ._desc = "LM Select for the DEN Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PII",
      ._bpos = AR_PI_DBG_LM1_CAP_SEL_PII_BP,
      ._mask = AR_PI_DBG_LM1_CAP_SEL_PII_MASK,
      ._rval = AR_PI_DBG_LM1_CAP_SEL_RSTDATA & AR_PI_DBG_LM1_CAP_SEL_PII_MASK,
      ._index = AR_PI_DBG_LM1_CAP_SEL_PII_QW,
      ._desc = "LM Select for the PII Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PMI",
      ._bpos = AR_PI_DBG_LM1_CAP_SEL_PMI_BP,
      ._mask = AR_PI_DBG_LM1_CAP_SEL_PMI_MASK,
      ._rval = AR_PI_DBG_LM1_CAP_SEL_RSTDATA & AR_PI_DBG_LM1_CAP_SEL_PMI_MASK,
      ._index = AR_PI_DBG_LM1_CAP_SEL_PMI_QW,
      ._desc = "LM Select for the PMI Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PTI",
      ._bpos = AR_PI_DBG_LM1_CAP_SEL_PTI_BP,
      ._mask = AR_PI_DBG_LM1_CAP_SEL_PTI_MASK,
      ._rval = AR_PI_DBG_LM1_CAP_SEL_RSTDATA & AR_PI_DBG_LM1_CAP_SEL_PTI_MASK,
      ._index = AR_PI_DBG_LM1_CAP_SEL_PTI_QW,
      ._desc = "LM Select for the PTI Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t0_cmp_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T0_CMP_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T0_CMP_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T0_CMP_LO_RSTDATA & AR_PI_DBG_LM1_T0_CMP_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T0_CMP_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t0_cmp_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T0_CMP_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T0_CMP_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T0_CMP_MID_RSTDATA & AR_PI_DBG_LM1_T0_CMP_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T0_CMP_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t0_cmp_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T0_CMP_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T0_CMP_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T0_CMP_HI_RSTDATA & AR_PI_DBG_LM1_T0_CMP_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T0_CMP_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t0_mode_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T0_MODE_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T0_MODE_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T0_MODE_RSTDATA & AR_PI_DBG_LM1_T0_MODE_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T0_MODE_DATA_QW,
      ._desc = "0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t0_mask_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T0_MASK_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T0_MASK_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T0_MASK_LO_RSTDATA & AR_PI_DBG_LM1_T0_MASK_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T0_MASK_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t0_mask_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T0_MASK_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T0_MASK_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T0_MASK_MID_RSTDATA & AR_PI_DBG_LM1_T0_MASK_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T0_MASK_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t0_mask_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T0_MASK_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T0_MASK_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T0_MASK_HI_RSTDATA & AR_PI_DBG_LM1_T0_MASK_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T0_MASK_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_trig_sel_detail[] = {
    { ._name = "DEN",
      ._bpos = AR_PI_DBG_LM1_TRIG_SEL_DEN_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_SEL_DEN_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_SEL_RSTDATA & AR_PI_DBG_LM1_TRIG_SEL_DEN_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_SEL_DEN_QW,
      ._desc = "LM Select for the DEN Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PII",
      ._bpos = AR_PI_DBG_LM1_TRIG_SEL_PII_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_SEL_PII_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_SEL_RSTDATA & AR_PI_DBG_LM1_TRIG_SEL_PII_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_SEL_PII_QW,
      ._desc = "LM Select for the PII Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PMI",
      ._bpos = AR_PI_DBG_LM1_TRIG_SEL_PMI_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_SEL_PMI_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_SEL_RSTDATA & AR_PI_DBG_LM1_TRIG_SEL_PMI_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_SEL_PMI_QW,
      ._desc = "LM Select for the PMI Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PTI",
      ._bpos = AR_PI_DBG_LM1_TRIG_SEL_PTI_BP,
      ._mask = AR_PI_DBG_LM1_TRIG_SEL_PTI_MASK,
      ._rval = AR_PI_DBG_LM1_TRIG_SEL_RSTDATA & AR_PI_DBG_LM1_TRIG_SEL_PTI_MASK,
      ._index = AR_PI_DBG_LM1_TRIG_SEL_PTI_QW,
      ._desc = "LM Select for the PTI Block",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t1_cmp_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T1_CMP_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T1_CMP_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T1_CMP_LO_RSTDATA & AR_PI_DBG_LM1_T1_CMP_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T1_CMP_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t1_cmp_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T1_CMP_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T1_CMP_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T1_CMP_MID_RSTDATA & AR_PI_DBG_LM1_T1_CMP_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T1_CMP_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t1_cmp_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T1_CMP_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T1_CMP_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T1_CMP_HI_RSTDATA & AR_PI_DBG_LM1_T1_CMP_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T1_CMP_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t1_mode_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T1_MODE_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T1_MODE_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T1_MODE_RSTDATA & AR_PI_DBG_LM1_T1_MODE_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T1_MODE_DATA_QW,
      ._desc = "0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t1_mask_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T1_MASK_LO_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T1_MASK_LO_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T1_MASK_LO_RSTDATA & AR_PI_DBG_LM1_T1_MASK_LO_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T1_MASK_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t1_mask_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T1_MASK_MID_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T1_MASK_MID_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T1_MASK_MID_RSTDATA & AR_PI_DBG_LM1_T1_MASK_MID_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T1_MASK_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_t1_mask_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_PI_DBG_LM1_T1_MASK_HI_DATA_BP,
      ._mask = AR_PI_DBG_LM1_T1_MASK_HI_DATA_MASK,
      ._rval = AR_PI_DBG_LM1_T1_MASK_HI_RSTDATA & AR_PI_DBG_LM1_T1_MASK_HI_DATA_MASK,
      ._index = AR_PI_DBG_LM1_T1_MASK_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_pi_dbg_lm1_mux_sel_detail[] = {
    { ._name = "PCLK_SEL1",
      ._bpos = AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_BP,
      ._mask = AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_MASK,
      ._rval = AR_PI_DBG_LM1_MUX_SEL_RSTDATA & AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_MASK,
      ._index = AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_QW,
      ._desc = "LM Select for the ASYNC Block mux 1 7-0 same as PCLK_SEL0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PCLK_SEL0",
      ._bpos = AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_BP,
      ._mask = AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_MASK,
      ._rval = AR_PI_DBG_LM1_MUX_SEL_RSTDATA & AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_MASK,
      ._index = AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_QW,
      ._desc = "LM Select for the ASYNC Block mux 0 0 = PTI capture datap 1 = PMI capture datap 2 = PII capture datap 3 = DEN capture datap 4 = PTI trigger datap 5 = PMI trigger datap 6 = PII trigger datap 7 = DEN trigger datap",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CAP_SEL",
      ._bpos = AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_BP,
      ._mask = AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_MASK,
      ._rval = AR_PI_DBG_LM1_MUX_SEL_RSTDATA & AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_MASK,
      ._index = AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_QW,
      ._desc = "MUX Select for Capture Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIG1_SEL",
      ._bpos = AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_BP,
      ._mask = AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_MASK,
      ._rval = AR_PI_DBG_LM1_MUX_SEL_RSTDATA & AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_MASK,
      ._index = AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_QW,
      ._desc = "MUX Select for Trigger 1 Data",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "TRIG0_SEL",
      ._bpos = AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_BP,
      ._mask = AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_MASK,
      ._rval = AR_PI_DBG_LM1_MUX_SEL_RSTDATA & AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_MASK,
      ._index = AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_QW,
      ._desc = "MUX Select for Trigger 0 Data 0 = PTI capture data 1 = PMI capture data 2 = PII capture data 3 = Data selected by PCLK_SEL0 4 = PTI trigger data 5 = PMI trigger data 6 = PII trigger data 7 = Data slected by PCLK_SEL1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR PI_LM DESC MASK ARRAYS DECLARATIONS
 */

/*
 *  AR PI_LM MMR DECLARATIONS
 */
static const cmmr_br_t __ar_pi_dbg_lm0_ctl = {
    ._name = "AR_PI_DBG_LM0_CTL",
    ._addr = AR_PI_DBG_LM0_CTL,
    ._rval.val = AR_PI_DBG_LM0_CTL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_CTL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_CTL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_CTL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_CTL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_CTL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_CTL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_CTL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_CTL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_CTL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_CTL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_CTL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_ctl_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_ptrs = {
    ._name = "AR_PI_DBG_LM0_PTRS",
    ._addr = AR_PI_DBG_LM0_PTRS,
    ._rval.val = AR_PI_DBG_LM0_PTRS_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_PTRS_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_PTRS_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_PTRS_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_PTRS_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_PTRS_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_PTRS_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_PTRS_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_PTRS_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_PTRS_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_PTRS_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_PTRS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_pi_dbg_lm0_ptrs_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_read_lo = {
    ._name = "AR_PI_DBG_LM0_READ_LO",
    ._addr = AR_PI_DBG_LM0_READ_LO,
    ._rval.val = AR_PI_DBG_LM0_READ_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_READ_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_READ_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_READ_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_READ_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_READ_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_READ_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_READ_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_READ_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_READ_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_READ_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_READ_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_read_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_read_mid = {
    ._name = "AR_PI_DBG_LM0_READ_MID",
    ._addr = AR_PI_DBG_LM0_READ_MID,
    ._rval.val = AR_PI_DBG_LM0_READ_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_READ_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_READ_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_READ_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_READ_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_READ_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_READ_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_READ_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_READ_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_READ_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_READ_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_READ_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_read_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_read_hi = {
    ._name = "AR_PI_DBG_LM0_READ_HI",
    ._addr = AR_PI_DBG_LM0_READ_HI,
    ._rval.val = AR_PI_DBG_LM0_READ_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_READ_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_READ_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_READ_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_READ_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_READ_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_READ_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_READ_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_READ_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_READ_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_READ_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_READ_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_read_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_snap_sel = {
    ._name = "AR_PI_DBG_LM0_SNAP_SEL",
    ._addr = AR_PI_DBG_LM0_SNAP_SEL,
    ._rval.val = AR_PI_DBG_LM0_SNAP_SEL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_SNAP_SEL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_SNAP_SEL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_SNAP_SEL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_SNAP_SEL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_SNAP_SEL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_SNAP_SEL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_SNAP_SEL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_SNAP_SEL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_SNAP_SEL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_SNAP_SEL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_SNAP_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_pi_dbg_lm0_snap_sel_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_snap_dlo = {
    ._name = "AR_PI_DBG_LM0_SNAP_DLO",
    ._addr = AR_PI_DBG_LM0_SNAP_DLO,
    ._rval.val = AR_PI_DBG_LM0_SNAP_DLO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_SNAP_DLO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_SNAP_DLO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_SNAP_DLO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_SNAP_DLO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_SNAP_DLO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_SNAP_DLO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_SNAP_DLO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_SNAP_DLO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_SNAP_DLO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_SNAP_DLO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_SNAP_DLO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_snap_dlo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_snap_dmid = {
    ._name = "AR_PI_DBG_LM0_SNAP_DMID",
    ._addr = AR_PI_DBG_LM0_SNAP_DMID,
    ._rval.val = AR_PI_DBG_LM0_SNAP_DMID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_SNAP_DMID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_SNAP_DMID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_SNAP_DMID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_SNAP_DMID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_SNAP_DMID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_SNAP_DMID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_SNAP_DMID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_SNAP_DMID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_SNAP_DMID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_SNAP_DMID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_SNAP_DMID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_snap_dmid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_snap_dhi = {
    ._name = "AR_PI_DBG_LM0_SNAP_DHI",
    ._addr = AR_PI_DBG_LM0_SNAP_DHI,
    ._rval.val = AR_PI_DBG_LM0_SNAP_DHI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_SNAP_DHI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_SNAP_DHI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_SNAP_DHI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_SNAP_DHI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_SNAP_DHI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_SNAP_DHI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_SNAP_DHI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_SNAP_DHI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_SNAP_DHI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_SNAP_DHI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_SNAP_DHI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_snap_dhi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_rem_trig = {
    ._name = "AR_PI_DBG_LM0_REM_TRIG",
    ._addr = AR_PI_DBG_LM0_REM_TRIG,
    ._rval.val = AR_PI_DBG_LM0_REM_TRIG_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_REM_TRIG_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_REM_TRIG_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_REM_TRIG_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_REM_TRIG_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_REM_TRIG_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_REM_TRIG_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_REM_TRIG_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_REM_TRIG_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_REM_TRIG_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_REM_TRIG_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_REM_TRIG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_rem_trig_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_trig_sts = {
    ._name = "AR_PI_DBG_LM0_TRIG_STS",
    ._addr = AR_PI_DBG_LM0_TRIG_STS,
    ._rval.val = AR_PI_DBG_LM0_TRIG_STS_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_TRIG_STS_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_TRIG_STS_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_TRIG_STS_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_TRIG_STS_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_TRIG_STS_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_TRIG_STS_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_TRIG_STS_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_TRIG_STS_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_TRIG_STS_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_TRIG_STS_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_TRIG_STS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_trig_sts_detail
};
static const cmmr_br_t __ar_pi_dbg_errinj_lm0 = {
    ._name = "AR_PI_DBG_ERRINJ_LM0",
    ._addr = AR_PI_DBG_ERRINJ_LM0,
    ._rval.val = AR_PI_DBG_ERRINJ_LM0_RSTDATA,
    ._rmsk.val = AR_PI_DBG_ERRINJ_LM0_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_ERRINJ_LM0_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_ERRINJ_LM0_RDMASK,
    ._xsmsk.val = AR_PI_DBG_ERRINJ_LM0_XSMASK,
    ._wsemsk.val = AR_PI_DBG_ERRINJ_LM0_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_ERRINJ_LM0_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_ERRINJ_LM0_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_ERRINJ_LM0_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_ERRINJ_LM0_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_ERRINJ_LM0_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_ERRINJ_LM0_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_errinj_lm0_detail
};
static const cmmr_br_t __ar_pi_err_info_lm0_perr = {
    ._name = "AR_PI_ERR_INFO_LM0_PERR",
    ._addr = AR_PI_ERR_INFO_LM0_PERR,
    ._rval.val = AR_PI_ERR_INFO_LM0_PERR_RSTDATA,
    ._rmsk.val = AR_PI_ERR_INFO_LM0_PERR_RSTMASK,
    ._wrmsk.val = AR_PI_ERR_INFO_LM0_PERR_WRTMASK,
    ._rdmsk.val = AR_PI_ERR_INFO_LM0_PERR_RDMASK,
    ._xsmsk.val = AR_PI_ERR_INFO_LM0_PERR_XSMASK,
    ._wsemsk.val = AR_PI_ERR_INFO_LM0_PERR_WSEMASK,
    ._rsemsk.val = AR_PI_ERR_INFO_LM0_PERR_RSEMASK,
    ._w1smsk.val = AR_PI_ERR_INFO_LM0_PERR_W1SMASK,
    ._w1cmsk.val = AR_PI_ERR_INFO_LM0_PERR_W1CMASK,
    ._wrstmsk.val = AR_PI_ERR_INFO_LM0_PERR_WRSTMASK,
    ._hwwmsk.val = AR_PI_ERR_INFO_LM0_PERR_HWWMASK,
    ._hwrmsk.val = AR_PI_ERR_INFO_LM0_PERR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_err_info_lm0_perr_detail
};
static const cmmr_br_t __ar_pi_err_info_lm0_perr_cnt = {
    ._name = "AR_PI_ERR_INFO_LM0_PERR_CNT",
    ._addr = AR_PI_ERR_INFO_LM0_PERR_CNT,
    ._rval.val = AR_PI_ERR_INFO_LM0_PERR_CNT_RSTDATA,
    ._rmsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_RSTMASK,
    ._wrmsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_WRTMASK,
    ._rdmsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_RDMASK,
    ._xsmsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_XSMASK,
    ._wsemsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_WSEMASK,
    ._rsemsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_RSEMASK,
    ._w1smsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_W1SMASK,
    ._w1cmsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_W1CMASK,
    ._wrstmsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_WRSTMASK,
    ._hwwmsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_HWWMASK,
    ._hwrmsk.val = AR_PI_ERR_INFO_LM0_PERR_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_err_info_lm0_perr_cnt_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_cap_sel = {
    ._name = "AR_PI_DBG_LM0_CAP_SEL",
    ._addr = AR_PI_DBG_LM0_CAP_SEL,
    ._rval.val = AR_PI_DBG_LM0_CAP_SEL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_CAP_SEL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_CAP_SEL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_CAP_SEL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_CAP_SEL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_CAP_SEL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_CAP_SEL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_CAP_SEL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_CAP_SEL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_CAP_SEL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_CAP_SEL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_CAP_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_cap_sel_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t0_cmp_lo = {
    ._name = "AR_PI_DBG_LM0_T0_CMP_LO",
    ._addr = AR_PI_DBG_LM0_T0_CMP_LO,
    ._rval.val = AR_PI_DBG_LM0_T0_CMP_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T0_CMP_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T0_CMP_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T0_CMP_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T0_CMP_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T0_CMP_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T0_CMP_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T0_CMP_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T0_CMP_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T0_CMP_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T0_CMP_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T0_CMP_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t0_cmp_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t0_cmp_mid = {
    ._name = "AR_PI_DBG_LM0_T0_CMP_MID",
    ._addr = AR_PI_DBG_LM0_T0_CMP_MID,
    ._rval.val = AR_PI_DBG_LM0_T0_CMP_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T0_CMP_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T0_CMP_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T0_CMP_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T0_CMP_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T0_CMP_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T0_CMP_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T0_CMP_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T0_CMP_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T0_CMP_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T0_CMP_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T0_CMP_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t0_cmp_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t0_cmp_hi = {
    ._name = "AR_PI_DBG_LM0_T0_CMP_HI",
    ._addr = AR_PI_DBG_LM0_T0_CMP_HI,
    ._rval.val = AR_PI_DBG_LM0_T0_CMP_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T0_CMP_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T0_CMP_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T0_CMP_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T0_CMP_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T0_CMP_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T0_CMP_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T0_CMP_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T0_CMP_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T0_CMP_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T0_CMP_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T0_CMP_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t0_cmp_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t0_mode = {
    ._name = "AR_PI_DBG_LM0_T0_MODE",
    ._addr = AR_PI_DBG_LM0_T0_MODE,
    ._rval.val = AR_PI_DBG_LM0_T0_MODE_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T0_MODE_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T0_MODE_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T0_MODE_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T0_MODE_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T0_MODE_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T0_MODE_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T0_MODE_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T0_MODE_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T0_MODE_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T0_MODE_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T0_MODE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t0_mode_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t0_mask_lo = {
    ._name = "AR_PI_DBG_LM0_T0_MASK_LO",
    ._addr = AR_PI_DBG_LM0_T0_MASK_LO,
    ._rval.val = AR_PI_DBG_LM0_T0_MASK_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T0_MASK_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T0_MASK_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T0_MASK_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T0_MASK_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T0_MASK_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T0_MASK_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T0_MASK_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T0_MASK_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T0_MASK_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T0_MASK_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T0_MASK_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t0_mask_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t0_mask_mid = {
    ._name = "AR_PI_DBG_LM0_T0_MASK_MID",
    ._addr = AR_PI_DBG_LM0_T0_MASK_MID,
    ._rval.val = AR_PI_DBG_LM0_T0_MASK_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T0_MASK_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T0_MASK_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T0_MASK_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T0_MASK_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T0_MASK_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T0_MASK_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T0_MASK_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T0_MASK_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T0_MASK_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T0_MASK_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T0_MASK_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t0_mask_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t0_mask_hi = {
    ._name = "AR_PI_DBG_LM0_T0_MASK_HI",
    ._addr = AR_PI_DBG_LM0_T0_MASK_HI,
    ._rval.val = AR_PI_DBG_LM0_T0_MASK_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T0_MASK_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T0_MASK_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T0_MASK_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T0_MASK_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T0_MASK_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T0_MASK_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T0_MASK_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T0_MASK_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T0_MASK_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T0_MASK_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T0_MASK_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t0_mask_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_trig_sel = {
    ._name = "AR_PI_DBG_LM0_TRIG_SEL",
    ._addr = AR_PI_DBG_LM0_TRIG_SEL,
    ._rval.val = AR_PI_DBG_LM0_TRIG_SEL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_TRIG_SEL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_TRIG_SEL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_TRIG_SEL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_TRIG_SEL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_TRIG_SEL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_TRIG_SEL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_TRIG_SEL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_TRIG_SEL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_TRIG_SEL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_TRIG_SEL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_TRIG_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_trig_sel_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t1_cmp_lo = {
    ._name = "AR_PI_DBG_LM0_T1_CMP_LO",
    ._addr = AR_PI_DBG_LM0_T1_CMP_LO,
    ._rval.val = AR_PI_DBG_LM0_T1_CMP_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T1_CMP_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T1_CMP_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T1_CMP_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T1_CMP_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T1_CMP_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T1_CMP_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T1_CMP_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T1_CMP_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T1_CMP_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T1_CMP_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T1_CMP_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t1_cmp_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t1_cmp_mid = {
    ._name = "AR_PI_DBG_LM0_T1_CMP_MID",
    ._addr = AR_PI_DBG_LM0_T1_CMP_MID,
    ._rval.val = AR_PI_DBG_LM0_T1_CMP_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T1_CMP_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T1_CMP_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T1_CMP_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T1_CMP_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T1_CMP_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T1_CMP_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T1_CMP_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T1_CMP_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T1_CMP_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T1_CMP_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T1_CMP_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t1_cmp_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t1_cmp_hi = {
    ._name = "AR_PI_DBG_LM0_T1_CMP_HI",
    ._addr = AR_PI_DBG_LM0_T1_CMP_HI,
    ._rval.val = AR_PI_DBG_LM0_T1_CMP_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T1_CMP_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T1_CMP_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T1_CMP_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T1_CMP_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T1_CMP_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T1_CMP_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T1_CMP_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T1_CMP_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T1_CMP_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T1_CMP_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T1_CMP_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t1_cmp_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t1_mode = {
    ._name = "AR_PI_DBG_LM0_T1_MODE",
    ._addr = AR_PI_DBG_LM0_T1_MODE,
    ._rval.val = AR_PI_DBG_LM0_T1_MODE_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T1_MODE_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T1_MODE_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T1_MODE_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T1_MODE_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T1_MODE_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T1_MODE_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T1_MODE_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T1_MODE_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T1_MODE_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T1_MODE_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T1_MODE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t1_mode_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t1_mask_lo = {
    ._name = "AR_PI_DBG_LM0_T1_MASK_LO",
    ._addr = AR_PI_DBG_LM0_T1_MASK_LO,
    ._rval.val = AR_PI_DBG_LM0_T1_MASK_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T1_MASK_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T1_MASK_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T1_MASK_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T1_MASK_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T1_MASK_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T1_MASK_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T1_MASK_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T1_MASK_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T1_MASK_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T1_MASK_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T1_MASK_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t1_mask_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t1_mask_mid = {
    ._name = "AR_PI_DBG_LM0_T1_MASK_MID",
    ._addr = AR_PI_DBG_LM0_T1_MASK_MID,
    ._rval.val = AR_PI_DBG_LM0_T1_MASK_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T1_MASK_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T1_MASK_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T1_MASK_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T1_MASK_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T1_MASK_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T1_MASK_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T1_MASK_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T1_MASK_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T1_MASK_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T1_MASK_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T1_MASK_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t1_mask_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_t1_mask_hi = {
    ._name = "AR_PI_DBG_LM0_T1_MASK_HI",
    ._addr = AR_PI_DBG_LM0_T1_MASK_HI,
    ._rval.val = AR_PI_DBG_LM0_T1_MASK_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_T1_MASK_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_T1_MASK_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_T1_MASK_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_T1_MASK_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_T1_MASK_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_T1_MASK_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_T1_MASK_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_T1_MASK_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_T1_MASK_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_T1_MASK_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_T1_MASK_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_t1_mask_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm0_mux_sel = {
    ._name = "AR_PI_DBG_LM0_MUX_SEL",
    ._addr = AR_PI_DBG_LM0_MUX_SEL,
    ._rval.val = AR_PI_DBG_LM0_MUX_SEL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM0_MUX_SEL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM0_MUX_SEL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM0_MUX_SEL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM0_MUX_SEL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM0_MUX_SEL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM0_MUX_SEL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM0_MUX_SEL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM0_MUX_SEL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM0_MUX_SEL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM0_MUX_SEL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM0_MUX_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm0_mux_sel_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_ctl = {
    ._name = "AR_PI_DBG_LM1_CTL",
    ._addr = AR_PI_DBG_LM1_CTL,
    ._rval.val = AR_PI_DBG_LM1_CTL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_CTL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_CTL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_CTL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_CTL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_CTL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_CTL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_CTL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_CTL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_CTL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_CTL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_CTL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_ctl_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_ptrs = {
    ._name = "AR_PI_DBG_LM1_PTRS",
    ._addr = AR_PI_DBG_LM1_PTRS,
    ._rval.val = AR_PI_DBG_LM1_PTRS_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_PTRS_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_PTRS_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_PTRS_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_PTRS_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_PTRS_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_PTRS_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_PTRS_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_PTRS_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_PTRS_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_PTRS_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_PTRS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000001001ull,
    ._info = __ar_pi_dbg_lm1_ptrs_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_read_lo = {
    ._name = "AR_PI_DBG_LM1_READ_LO",
    ._addr = AR_PI_DBG_LM1_READ_LO,
    ._rval.val = AR_PI_DBG_LM1_READ_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_READ_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_READ_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_READ_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_READ_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_READ_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_READ_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_READ_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_READ_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_READ_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_READ_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_READ_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_read_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_read_mid = {
    ._name = "AR_PI_DBG_LM1_READ_MID",
    ._addr = AR_PI_DBG_LM1_READ_MID,
    ._rval.val = AR_PI_DBG_LM1_READ_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_READ_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_READ_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_READ_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_READ_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_READ_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_READ_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_READ_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_READ_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_READ_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_READ_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_READ_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_read_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_read_hi = {
    ._name = "AR_PI_DBG_LM1_READ_HI",
    ._addr = AR_PI_DBG_LM1_READ_HI,
    ._rval.val = AR_PI_DBG_LM1_READ_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_READ_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_READ_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_READ_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_READ_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_READ_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_READ_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_READ_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_READ_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_READ_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_READ_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_READ_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_read_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_snap_sel = {
    ._name = "AR_PI_DBG_LM1_SNAP_SEL",
    ._addr = AR_PI_DBG_LM1_SNAP_SEL,
    ._rval.val = AR_PI_DBG_LM1_SNAP_SEL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_SNAP_SEL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_SNAP_SEL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_SNAP_SEL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_SNAP_SEL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_SNAP_SEL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_SNAP_SEL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_SNAP_SEL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_SNAP_SEL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_SNAP_SEL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_SNAP_SEL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_SNAP_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_pi_dbg_lm1_snap_sel_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_snap_dlo = {
    ._name = "AR_PI_DBG_LM1_SNAP_DLO",
    ._addr = AR_PI_DBG_LM1_SNAP_DLO,
    ._rval.val = AR_PI_DBG_LM1_SNAP_DLO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_SNAP_DLO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_SNAP_DLO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_SNAP_DLO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_SNAP_DLO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_SNAP_DLO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_SNAP_DLO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_SNAP_DLO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_SNAP_DLO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_SNAP_DLO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_SNAP_DLO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_SNAP_DLO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_snap_dlo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_snap_dmid = {
    ._name = "AR_PI_DBG_LM1_SNAP_DMID",
    ._addr = AR_PI_DBG_LM1_SNAP_DMID,
    ._rval.val = AR_PI_DBG_LM1_SNAP_DMID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_SNAP_DMID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_SNAP_DMID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_SNAP_DMID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_SNAP_DMID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_SNAP_DMID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_SNAP_DMID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_SNAP_DMID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_SNAP_DMID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_SNAP_DMID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_SNAP_DMID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_SNAP_DMID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_snap_dmid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_snap_dhi = {
    ._name = "AR_PI_DBG_LM1_SNAP_DHI",
    ._addr = AR_PI_DBG_LM1_SNAP_DHI,
    ._rval.val = AR_PI_DBG_LM1_SNAP_DHI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_SNAP_DHI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_SNAP_DHI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_SNAP_DHI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_SNAP_DHI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_SNAP_DHI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_SNAP_DHI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_SNAP_DHI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_SNAP_DHI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_SNAP_DHI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_SNAP_DHI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_SNAP_DHI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_snap_dhi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_rem_trig = {
    ._name = "AR_PI_DBG_LM1_REM_TRIG",
    ._addr = AR_PI_DBG_LM1_REM_TRIG,
    ._rval.val = AR_PI_DBG_LM1_REM_TRIG_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_REM_TRIG_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_REM_TRIG_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_REM_TRIG_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_REM_TRIG_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_REM_TRIG_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_REM_TRIG_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_REM_TRIG_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_REM_TRIG_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_REM_TRIG_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_REM_TRIG_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_REM_TRIG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_rem_trig_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_trig_sts = {
    ._name = "AR_PI_DBG_LM1_TRIG_STS",
    ._addr = AR_PI_DBG_LM1_TRIG_STS,
    ._rval.val = AR_PI_DBG_LM1_TRIG_STS_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_TRIG_STS_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_TRIG_STS_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_TRIG_STS_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_TRIG_STS_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_TRIG_STS_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_TRIG_STS_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_TRIG_STS_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_TRIG_STS_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_TRIG_STS_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_TRIG_STS_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_TRIG_STS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_trig_sts_detail
};
static const cmmr_br_t __ar_pi_dbg_errinj_lm1 = {
    ._name = "AR_PI_DBG_ERRINJ_LM1",
    ._addr = AR_PI_DBG_ERRINJ_LM1,
    ._rval.val = AR_PI_DBG_ERRINJ_LM1_RSTDATA,
    ._rmsk.val = AR_PI_DBG_ERRINJ_LM1_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_ERRINJ_LM1_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_ERRINJ_LM1_RDMASK,
    ._xsmsk.val = AR_PI_DBG_ERRINJ_LM1_XSMASK,
    ._wsemsk.val = AR_PI_DBG_ERRINJ_LM1_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_ERRINJ_LM1_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_ERRINJ_LM1_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_ERRINJ_LM1_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_ERRINJ_LM1_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_ERRINJ_LM1_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_ERRINJ_LM1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_errinj_lm1_detail
};
static const cmmr_br_t __ar_pi_err_info_lm1_perr = {
    ._name = "AR_PI_ERR_INFO_LM1_PERR",
    ._addr = AR_PI_ERR_INFO_LM1_PERR,
    ._rval.val = AR_PI_ERR_INFO_LM1_PERR_RSTDATA,
    ._rmsk.val = AR_PI_ERR_INFO_LM1_PERR_RSTMASK,
    ._wrmsk.val = AR_PI_ERR_INFO_LM1_PERR_WRTMASK,
    ._rdmsk.val = AR_PI_ERR_INFO_LM1_PERR_RDMASK,
    ._xsmsk.val = AR_PI_ERR_INFO_LM1_PERR_XSMASK,
    ._wsemsk.val = AR_PI_ERR_INFO_LM1_PERR_WSEMASK,
    ._rsemsk.val = AR_PI_ERR_INFO_LM1_PERR_RSEMASK,
    ._w1smsk.val = AR_PI_ERR_INFO_LM1_PERR_W1SMASK,
    ._w1cmsk.val = AR_PI_ERR_INFO_LM1_PERR_W1CMASK,
    ._wrstmsk.val = AR_PI_ERR_INFO_LM1_PERR_WRSTMASK,
    ._hwwmsk.val = AR_PI_ERR_INFO_LM1_PERR_HWWMASK,
    ._hwrmsk.val = AR_PI_ERR_INFO_LM1_PERR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_err_info_lm1_perr_detail
};
static const cmmr_br_t __ar_pi_err_info_lm1_perr_cnt = {
    ._name = "AR_PI_ERR_INFO_LM1_PERR_CNT",
    ._addr = AR_PI_ERR_INFO_LM1_PERR_CNT,
    ._rval.val = AR_PI_ERR_INFO_LM1_PERR_CNT_RSTDATA,
    ._rmsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_RSTMASK,
    ._wrmsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_WRTMASK,
    ._rdmsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_RDMASK,
    ._xsmsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_XSMASK,
    ._wsemsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_WSEMASK,
    ._rsemsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_RSEMASK,
    ._w1smsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_W1SMASK,
    ._w1cmsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_W1CMASK,
    ._wrstmsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_WRSTMASK,
    ._hwwmsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_HWWMASK,
    ._hwrmsk.val = AR_PI_ERR_INFO_LM1_PERR_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_err_info_lm1_perr_cnt_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_cap_sel = {
    ._name = "AR_PI_DBG_LM1_CAP_SEL",
    ._addr = AR_PI_DBG_LM1_CAP_SEL,
    ._rval.val = AR_PI_DBG_LM1_CAP_SEL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_CAP_SEL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_CAP_SEL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_CAP_SEL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_CAP_SEL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_CAP_SEL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_CAP_SEL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_CAP_SEL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_CAP_SEL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_CAP_SEL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_CAP_SEL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_CAP_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_cap_sel_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t0_cmp_lo = {
    ._name = "AR_PI_DBG_LM1_T0_CMP_LO",
    ._addr = AR_PI_DBG_LM1_T0_CMP_LO,
    ._rval.val = AR_PI_DBG_LM1_T0_CMP_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T0_CMP_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T0_CMP_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T0_CMP_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T0_CMP_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T0_CMP_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T0_CMP_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T0_CMP_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T0_CMP_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T0_CMP_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T0_CMP_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T0_CMP_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t0_cmp_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t0_cmp_mid = {
    ._name = "AR_PI_DBG_LM1_T0_CMP_MID",
    ._addr = AR_PI_DBG_LM1_T0_CMP_MID,
    ._rval.val = AR_PI_DBG_LM1_T0_CMP_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T0_CMP_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T0_CMP_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T0_CMP_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T0_CMP_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T0_CMP_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T0_CMP_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T0_CMP_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T0_CMP_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T0_CMP_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T0_CMP_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T0_CMP_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t0_cmp_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t0_cmp_hi = {
    ._name = "AR_PI_DBG_LM1_T0_CMP_HI",
    ._addr = AR_PI_DBG_LM1_T0_CMP_HI,
    ._rval.val = AR_PI_DBG_LM1_T0_CMP_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T0_CMP_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T0_CMP_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T0_CMP_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T0_CMP_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T0_CMP_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T0_CMP_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T0_CMP_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T0_CMP_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T0_CMP_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T0_CMP_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T0_CMP_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t0_cmp_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t0_mode = {
    ._name = "AR_PI_DBG_LM1_T0_MODE",
    ._addr = AR_PI_DBG_LM1_T0_MODE,
    ._rval.val = AR_PI_DBG_LM1_T0_MODE_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T0_MODE_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T0_MODE_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T0_MODE_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T0_MODE_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T0_MODE_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T0_MODE_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T0_MODE_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T0_MODE_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T0_MODE_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T0_MODE_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T0_MODE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t0_mode_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t0_mask_lo = {
    ._name = "AR_PI_DBG_LM1_T0_MASK_LO",
    ._addr = AR_PI_DBG_LM1_T0_MASK_LO,
    ._rval.val = AR_PI_DBG_LM1_T0_MASK_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T0_MASK_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T0_MASK_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T0_MASK_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T0_MASK_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T0_MASK_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T0_MASK_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T0_MASK_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T0_MASK_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T0_MASK_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T0_MASK_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T0_MASK_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t0_mask_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t0_mask_mid = {
    ._name = "AR_PI_DBG_LM1_T0_MASK_MID",
    ._addr = AR_PI_DBG_LM1_T0_MASK_MID,
    ._rval.val = AR_PI_DBG_LM1_T0_MASK_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T0_MASK_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T0_MASK_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T0_MASK_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T0_MASK_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T0_MASK_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T0_MASK_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T0_MASK_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T0_MASK_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T0_MASK_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T0_MASK_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T0_MASK_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t0_mask_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t0_mask_hi = {
    ._name = "AR_PI_DBG_LM1_T0_MASK_HI",
    ._addr = AR_PI_DBG_LM1_T0_MASK_HI,
    ._rval.val = AR_PI_DBG_LM1_T0_MASK_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T0_MASK_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T0_MASK_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T0_MASK_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T0_MASK_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T0_MASK_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T0_MASK_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T0_MASK_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T0_MASK_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T0_MASK_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T0_MASK_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T0_MASK_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t0_mask_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_trig_sel = {
    ._name = "AR_PI_DBG_LM1_TRIG_SEL",
    ._addr = AR_PI_DBG_LM1_TRIG_SEL,
    ._rval.val = AR_PI_DBG_LM1_TRIG_SEL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_TRIG_SEL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_TRIG_SEL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_TRIG_SEL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_TRIG_SEL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_TRIG_SEL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_TRIG_SEL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_TRIG_SEL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_TRIG_SEL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_TRIG_SEL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_TRIG_SEL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_TRIG_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_trig_sel_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t1_cmp_lo = {
    ._name = "AR_PI_DBG_LM1_T1_CMP_LO",
    ._addr = AR_PI_DBG_LM1_T1_CMP_LO,
    ._rval.val = AR_PI_DBG_LM1_T1_CMP_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T1_CMP_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T1_CMP_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T1_CMP_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T1_CMP_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T1_CMP_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T1_CMP_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T1_CMP_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T1_CMP_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T1_CMP_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T1_CMP_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T1_CMP_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t1_cmp_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t1_cmp_mid = {
    ._name = "AR_PI_DBG_LM1_T1_CMP_MID",
    ._addr = AR_PI_DBG_LM1_T1_CMP_MID,
    ._rval.val = AR_PI_DBG_LM1_T1_CMP_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T1_CMP_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T1_CMP_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T1_CMP_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T1_CMP_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T1_CMP_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T1_CMP_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T1_CMP_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T1_CMP_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T1_CMP_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T1_CMP_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T1_CMP_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t1_cmp_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t1_cmp_hi = {
    ._name = "AR_PI_DBG_LM1_T1_CMP_HI",
    ._addr = AR_PI_DBG_LM1_T1_CMP_HI,
    ._rval.val = AR_PI_DBG_LM1_T1_CMP_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T1_CMP_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T1_CMP_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T1_CMP_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T1_CMP_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T1_CMP_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T1_CMP_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T1_CMP_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T1_CMP_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T1_CMP_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T1_CMP_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T1_CMP_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t1_cmp_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t1_mode = {
    ._name = "AR_PI_DBG_LM1_T1_MODE",
    ._addr = AR_PI_DBG_LM1_T1_MODE,
    ._rval.val = AR_PI_DBG_LM1_T1_MODE_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T1_MODE_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T1_MODE_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T1_MODE_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T1_MODE_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T1_MODE_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T1_MODE_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T1_MODE_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T1_MODE_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T1_MODE_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T1_MODE_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T1_MODE_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t1_mode_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t1_mask_lo = {
    ._name = "AR_PI_DBG_LM1_T1_MASK_LO",
    ._addr = AR_PI_DBG_LM1_T1_MASK_LO,
    ._rval.val = AR_PI_DBG_LM1_T1_MASK_LO_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T1_MASK_LO_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T1_MASK_LO_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T1_MASK_LO_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T1_MASK_LO_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T1_MASK_LO_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T1_MASK_LO_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T1_MASK_LO_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T1_MASK_LO_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T1_MASK_LO_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T1_MASK_LO_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T1_MASK_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t1_mask_lo_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t1_mask_mid = {
    ._name = "AR_PI_DBG_LM1_T1_MASK_MID",
    ._addr = AR_PI_DBG_LM1_T1_MASK_MID,
    ._rval.val = AR_PI_DBG_LM1_T1_MASK_MID_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T1_MASK_MID_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T1_MASK_MID_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T1_MASK_MID_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T1_MASK_MID_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T1_MASK_MID_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T1_MASK_MID_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T1_MASK_MID_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T1_MASK_MID_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T1_MASK_MID_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T1_MASK_MID_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T1_MASK_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t1_mask_mid_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_t1_mask_hi = {
    ._name = "AR_PI_DBG_LM1_T1_MASK_HI",
    ._addr = AR_PI_DBG_LM1_T1_MASK_HI,
    ._rval.val = AR_PI_DBG_LM1_T1_MASK_HI_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_T1_MASK_HI_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_T1_MASK_HI_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_T1_MASK_HI_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_T1_MASK_HI_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_T1_MASK_HI_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_T1_MASK_HI_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_T1_MASK_HI_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_T1_MASK_HI_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_T1_MASK_HI_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_T1_MASK_HI_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_T1_MASK_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_t1_mask_hi_detail
};
static const cmmr_br_t __ar_pi_dbg_lm1_mux_sel = {
    ._name = "AR_PI_DBG_LM1_MUX_SEL",
    ._addr = AR_PI_DBG_LM1_MUX_SEL,
    ._rval.val = AR_PI_DBG_LM1_MUX_SEL_RSTDATA,
    ._rmsk.val = AR_PI_DBG_LM1_MUX_SEL_RSTMASK,
    ._wrmsk.val = AR_PI_DBG_LM1_MUX_SEL_WRTMASK,
    ._rdmsk.val = AR_PI_DBG_LM1_MUX_SEL_RDMASK,
    ._xsmsk.val = AR_PI_DBG_LM1_MUX_SEL_XSMASK,
    ._wsemsk.val = AR_PI_DBG_LM1_MUX_SEL_WSEMASK,
    ._rsemsk.val = AR_PI_DBG_LM1_MUX_SEL_RSEMASK,
    ._w1smsk.val = AR_PI_DBG_LM1_MUX_SEL_W1SMASK,
    ._w1cmsk.val = AR_PI_DBG_LM1_MUX_SEL_W1CMASK,
    ._wrstmsk.val = AR_PI_DBG_LM1_MUX_SEL_WRSTMASK,
    ._hwwmsk.val = AR_PI_DBG_LM1_MUX_SEL_HWWMASK,
    ._hwrmsk.val = AR_PI_DBG_LM1_MUX_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_pi_dbg_lm1_mux_sel_detail
};

/*
 *  INSTALL AR PI_LM MMRS
 */
static const cmmr_br_t* __ar_pi_lm_mmrs[] = {
    &__ar_pi_dbg_lm0_ctl,
    &__ar_pi_dbg_lm0_ptrs,
    &__ar_pi_dbg_lm0_read_lo,
    &__ar_pi_dbg_lm0_read_mid,
    &__ar_pi_dbg_lm0_read_hi,
    &__ar_pi_dbg_lm0_snap_sel,
    &__ar_pi_dbg_lm0_snap_dlo,
    &__ar_pi_dbg_lm0_snap_dmid,
    &__ar_pi_dbg_lm0_snap_dhi,
    &__ar_pi_dbg_lm0_rem_trig,
    &__ar_pi_dbg_lm0_trig_sts,
    &__ar_pi_dbg_errinj_lm0,
    &__ar_pi_err_info_lm0_perr,
    &__ar_pi_err_info_lm0_perr_cnt,
    &__ar_pi_dbg_lm0_cap_sel,
    &__ar_pi_dbg_lm0_t0_cmp_lo,
    &__ar_pi_dbg_lm0_t0_cmp_mid,
    &__ar_pi_dbg_lm0_t0_cmp_hi,
    &__ar_pi_dbg_lm0_t0_mode,
    &__ar_pi_dbg_lm0_t0_mask_lo,
    &__ar_pi_dbg_lm0_t0_mask_mid,
    &__ar_pi_dbg_lm0_t0_mask_hi,
    &__ar_pi_dbg_lm0_trig_sel,
    &__ar_pi_dbg_lm0_t1_cmp_lo,
    &__ar_pi_dbg_lm0_t1_cmp_mid,
    &__ar_pi_dbg_lm0_t1_cmp_hi,
    &__ar_pi_dbg_lm0_t1_mode,
    &__ar_pi_dbg_lm0_t1_mask_lo,
    &__ar_pi_dbg_lm0_t1_mask_mid,
    &__ar_pi_dbg_lm0_t1_mask_hi,
    &__ar_pi_dbg_lm0_mux_sel,
    &__ar_pi_dbg_lm1_ctl,
    &__ar_pi_dbg_lm1_ptrs,
    &__ar_pi_dbg_lm1_read_lo,
    &__ar_pi_dbg_lm1_read_mid,
    &__ar_pi_dbg_lm1_read_hi,
    &__ar_pi_dbg_lm1_snap_sel,
    &__ar_pi_dbg_lm1_snap_dlo,
    &__ar_pi_dbg_lm1_snap_dmid,
    &__ar_pi_dbg_lm1_snap_dhi,
    &__ar_pi_dbg_lm1_rem_trig,
    &__ar_pi_dbg_lm1_trig_sts,
    &__ar_pi_dbg_errinj_lm1,
    &__ar_pi_err_info_lm1_perr,
    &__ar_pi_err_info_lm1_perr_cnt,
    &__ar_pi_dbg_lm1_cap_sel,
    &__ar_pi_dbg_lm1_t0_cmp_lo,
    &__ar_pi_dbg_lm1_t0_cmp_mid,
    &__ar_pi_dbg_lm1_t0_cmp_hi,
    &__ar_pi_dbg_lm1_t0_mode,
    &__ar_pi_dbg_lm1_t0_mask_lo,
    &__ar_pi_dbg_lm1_t0_mask_mid,
    &__ar_pi_dbg_lm1_t0_mask_hi,
    &__ar_pi_dbg_lm1_trig_sel,
    &__ar_pi_dbg_lm1_t1_cmp_lo,
    &__ar_pi_dbg_lm1_t1_cmp_mid,
    &__ar_pi_dbg_lm1_t1_cmp_hi,
    &__ar_pi_dbg_lm1_t1_mode,
    &__ar_pi_dbg_lm1_t1_mask_lo,
    &__ar_pi_dbg_lm1_t1_mask_mid,
    &__ar_pi_dbg_lm1_t1_mask_hi,
    &__ar_pi_dbg_lm1_mux_sel,
    NULL
};

/*
 *  INSTALL AR PI_LM LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_pi_lm_enc_mmrs[] = {
    NULL
};

#endif
