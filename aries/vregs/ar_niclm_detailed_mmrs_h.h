/******************************************************************************
 * COPYRIGHT CRAY INC. ar_niclm_detailed_mmrs_h.h
 * FILE: ar_niclm_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:01 2014
 ******************************************************************************/
/**
 * @file ar_niclm_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:01 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_niclm_mmr_values.h and ar_niclm_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_niclm_mmr_values.h"

#ifndef _AR_NICLM_DETAILED_MMRS_H_H_
#define _AR_NICLM_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_niclm_mmrs[];	/* NICLM Array */

/*
 *  AR NICLM MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_nic_niclm_dbg_lm0_ctl_detail[] = {
    { ._name = "LM_RST",
      ._bpos = AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_QW,
      ._desc = "Reset Capture block",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "WO"
    },
    { ._name = "LM_TRIG_STATE",
      ._bpos = AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_QW,
      ._desc = "Trigger State Machine Value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_CAP_STATE",
      ._bpos = AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_QW,
      ._desc = "Capture State Machine Value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_CTL_T0_CNT",
      ._bpos = AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_QW,
      ._desc = "Trigger 0 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_T1_CNT",
      ._bpos = AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_QW,
      ._desc = "Trigger 1 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_TRIG_EN",
      ._bpos = AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_QW,
      ._desc = "Trigger enables for the three data capture ports, one for each NSLM, as defined in Table 118",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_MODE",
      ._bpos = AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_QW,
      ._desc = "Capture Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm0_ptrs_detail[] = {
    { ._name = "LM_REC_ACT",
      ._bpos = AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_QW,
      ._desc = "Record Active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_REC_DONE",
      ._bpos = AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_QW,
      ._desc = "Record Done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_MULT_EVENT",
      ._bpos = AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_QW,
      ._desc = "Multiple recording events occurred during the same clock period",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_WR_AD_WRAP",
      ._bpos = AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_QW,
      ._desc = "Write Address Pointer has wrapped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_RD_PTR",
      ._bpos = AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_QW,
      ._desc = "Read Pointer of record buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RWS,HRO"
    },
    { ._name = "LM_WR_PTR",
      ._bpos = AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_QW,
      ._desc = "Write Pointer of the recording buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm0_read_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_READ_LO_RSTDATA & AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm0_read_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_READ_MID_RSTDATA & AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm0_read_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_READ_HI_RSTDATA & AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm0_snap_sel_detail[] = {
    { ._name = "SEL",
      ._bpos = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_RSTDATA & AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_QW,
      ._desc = "Logic Monitor Snapshot Select",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RWS,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm0_snap_dlo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_RSTDATA & AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm0_snap_dmid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_RSTDATA & AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm0_snap_dhi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_RSTDATA & AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm1_ctl_detail[] = {
    { ._name = "LM_RST",
      ._bpos = AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_QW,
      ._desc = "Reset Capture block",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "WO"
    },
    { ._name = "LM_TRIG_STATE",
      ._bpos = AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_QW,
      ._desc = "Trigger State Machine Value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_CAP_STATE",
      ._bpos = AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_QW,
      ._desc = "Capture State Machine Value",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_CTL_T0_CNT",
      ._bpos = AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_QW,
      ._desc = "Trigger 0 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_T1_CNT",
      ._bpos = AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_QW,
      ._desc = "Trigger 1 Count/Delay",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_TRIG_EN",
      ._bpos = AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_QW,
      ._desc = "Trigger enables for the three data capture ports, one for each NSLM, as defined in Table 118",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM_CTL_MODE",
      ._bpos = AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_CTL_RSTDATA & AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_QW,
      ._desc = "Capture Mode",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm1_ptrs_detail[] = {
    { ._name = "LM_REC_ACT",
      ._bpos = AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_QW,
      ._desc = "Record Active",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_REC_DONE",
      ._bpos = AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_QW,
      ._desc = "Record Done",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_MULT_EVENT",
      ._bpos = AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_QW,
      ._desc = "Multiple Recording events occurred during the same clock period",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_WR_AD_WRAP",
      ._bpos = AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_QW,
      ._desc = "Write Address Pointer has wrapped",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = "LM_RD_PTR",
      ._bpos = AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_QW,
      ._desc = "Read Pointer of Record Buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RWS,HRO"
    },
    { ._name = "LM_WR_PTR",
      ._bpos = AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_PTRS_RSTDATA & AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_QW,
      ._desc = "Write Pointer of the recording buffer",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm1_read_lo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_READ_LO_RSTDATA & AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 63:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm1_read_mid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_READ_MID_RSTDATA & AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 127:64",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm1_read_hi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_READ_HI_RSTDATA & AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_QW,
      ._desc = "Logic Monitor Buffer Readout 191:128",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "R,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm1_snap_sel_detail[] = {
    { ._name = "SEL",
      ._bpos = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_RSTDATA & AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_QW,
      ._desc = "Logic Monitor Snapshot Select",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RWS,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm1_snap_dlo_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_RSTDATA & AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm1_snap_dmid_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_RSTDATA & AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_lm1_snap_dhi_detail[] = {
    { ._name = "DATA",
      ._bpos = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_BP,
      ._mask = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_MASK,
      ._rval = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_RSTDATA & AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_MASK,
      ._index = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_QW,
      ._desc = "Logic Monitor Snapshot Readout",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RO,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_rem_trig_detail[] = {
    { ._name = "NL_PROP_TO_PI",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_QW,
      ._desc = "Propagate NL triggers to PI",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "PI_PROP_TO_NL",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_QW,
      ._desc = "Propagate PI triggers to NL",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM1_PROP_TO_NL",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_QW,
      ._desc = "Propagate LM1 triggers to NL",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM0_PROP_TO_NL",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_QW,
      ._desc = "Propagate LM0 triggers to NL",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM1_PROP_TO_PI",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_QW,
      ._desc = "Propagate LM1 triggers to PI",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM0_PROP_TO_PI",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_QW,
      ._desc = "Propagate LM0 triggers to PI",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM1_ENABLE_NIC_RSP_HSS_IRQ",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_QW,
      ._desc = "Enable trigger from NIC RSP HSS IRQ to LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM1_ENABLE_NIC_REQ_HSS_IRQ",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_QW,
      ._desc = "Enable trigger from NIC REQ HSS IRQ to LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM1_ENABLE_NIC_NET_HSS_IRQ",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_QW,
      ._desc = "Enable trigger from NIC NET HSS IRQ to LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM0_ENABLE_NIC_RSP_HSS_IRQ",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_QW,
      ._desc = "Enable trigger from NIC RSP HSS IRQ to LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM0_ENABLE_NIC_REQ_HSS_IRQ",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_QW,
      ._desc = "Enable trigger from NIC REQ HSS IRQ to LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM0_ENABLE_NIC_NET_HSS_IRQ",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_QW,
      ._desc = "Enable trigger from NIC NET HSS IRQ to LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM1_ENABLE_NIC_HSS_IRQ",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_QW,
      ._desc = "Enable triggers from NIC HSS IRQ to LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM0_ENABLE_NIC_HSS_IRQ",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_QW,
      ._desc = "Enable triggers from NIC HSS IRQ to LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM1_ENABLE_FROM_NL",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_QW,
      ._desc = "Enable remote triggers from NL to LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM0_ENABLE_FROM_NL",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_QW,
      ._desc = "Enable remote triggers from NL to LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM1_ENABLE_FROM_PI",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_QW,
      ._desc = "Enable remote triggers from PI to LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM0_ENABLE_FROM_PI",
      ._bpos = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_BP,
      ._mask = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_MASK,
      ._rval = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA & AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_MASK,
      ._index = AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_QW,
      ._desc = "Enable remote triggers from PI to LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_trig_sts_detail[] = {
    { ._name = "LM1_REM_TRIG1_RCV_LAST",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_QW,
      ._desc = "The last trigger1 received by LM1 was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM1_REM_TRIG0_RCV_LAST",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_QW,
      ._desc = "The last trigger0 received by LM1 was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM1_REM_TRIG1_RCV_FIRST",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_QW,
      ._desc = "The first trigger1 received by LM1 was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM1_REM_TRIG0_RCV_FIRST",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_QW,
      ._desc = "The first trigger0 received by LM1 was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM1_REM_TRIG1_RCV",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_QW,
      ._desc = "A remote trigger1 has been received by LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LM1_REM_TRIG0_RCV",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_QW,
      ._desc = "A remote trigger0 has been received by LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LM1_LCL_TRIG1_RCV",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_QW,
      ._desc = "A local trigger1 has been received by LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LM1_LCL_TRIG0_RCV",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_QW,
      ._desc = "A local trigger0 has been received by LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LM0_REM_TRIG1_RCV_LAST",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_QW,
      ._desc = "The last trigger1 received by LM0 was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM0_REM_TRIG0_RCV_LAST",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_QW,
      ._desc = "The last trigger0 received by LM0 was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM0_REM_TRIG1_RCV_FIRST",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_QW,
      ._desc = "The first trigger1 received by LM0 was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM0_REM_TRIG0_RCV_FIRST",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_QW,
      ._desc = "The first trigger0 received by LM0 was remote",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM0_REM_TRIG1_RCV",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_QW,
      ._desc = "A remote trigger1 has been received by LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LM0_REM_TRIG0_RCV",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_QW,
      ._desc = "A remote trigger0 has been received by LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LM0_LCL_TRIG1_RCV",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_QW,
      ._desc = "A local trigger1 has been received by LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = "LM0_LCL_TRIG0_RCV",
      ._bpos = AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_BP,
      ._mask = AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_MASK,
      ._rval = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA & AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_MASK,
      ._index = AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_QW,
      ._desc = "A local trigger0 has been received by LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_err_flg_detail[] = {
    { ._name = "PI_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_QW,
      ._desc = "The PI Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "PI_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_QW,
      ._desc = "The PI Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "NL_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_QW,
      ._desc = "The NL Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "NL_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_QW,
      ._desc = "The NL Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "RSPMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_QW,
      ._desc = "The RSPMON Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "RSPMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_QW,
      ._desc = "The RSPMON Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "REQMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_QW,
      ._desc = "The REQMON Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "REQMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_QW,
      ._desc = "The REQMON Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "NETMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_QW,
      ._desc = "The NETMON Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "NETMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_QW,
      ._desc = "The NETMON Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "LM1_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_QW,
      ._desc = "An parity error occurred reading the Logic Monitor 1 RAM",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "LM0_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_QW,
      ._desc = "An parity error occurred reading the Logic Monitor 0 RAM",
      ._type_bitmsk = 0x0000000000080001ull,
      ._access = "RW1"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NICLM_ERR_FLG_RSTDATA & AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000100001ull,
      ._access = "RW1,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_err_clr_detail[] = {
    { ._name = "PI_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_QW,
      ._desc = "The PI Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "PI_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_QW,
      ._desc = "The PI Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "NL_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_QW,
      ._desc = "The NL Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "NL_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_QW,
      ._desc = "The NL Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "RSPMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_QW,
      ._desc = "The RSPMON Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "RSPMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_QW,
      ._desc = "The RSPMON Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "REQMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_QW,
      ._desc = "The REQMON Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "REQMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_QW,
      ._desc = "The REQMON Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "NETMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_QW,
      ._desc = "The NETMON Trigger 1 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "NETMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_QW,
      ._desc = "The NETMON Trigger 0 was raised",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "LM1_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_QW,
      ._desc = "An parity error occurred reading the Logic Monitor 1 RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "LM0_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_QW,
      ._desc = "An parity error occurred reading the Logic Monitor 0 RAM",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_BP,
      ._mask = AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NICLM_ERR_CLR_RSTDATA & AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_MASK,
      ._index = AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_QW,
      ._desc = "Reserved for diagnostics",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "WS"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_err_hss_msk_detail[] = {
    { ._name = "PI_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PI_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NL_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NL_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NETMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NETMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "LM1_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "LM0_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA & AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_err_os_msk_detail[] = {
    { ._name = "PI_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PI_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NL_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NL_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NETMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NETMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "LM1_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "LM0_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_BP,
      ._mask = AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA & AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_MASK,
      ._index = AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_err_first_flg_detail[] = {
    { ._name = "PI_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_QW,
      ._desc = "12:12",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "PI_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_QW,
      ._desc = "11:11",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NL_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_QW,
      ._desc = "10:10",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NL_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_QW,
      ._desc = "9:9",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_QW,
      ._desc = "8:8",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "RSPMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_QW,
      ._desc = "7:7",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_QW,
      ._desc = "6:6",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "REQMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_QW,
      ._desc = "5:5",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NETMON_TRIGGER1",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_QW,
      ._desc = "4:4",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "NETMON_TRIGGER0",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_QW,
      ._desc = "3:3",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "LM1_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_QW,
      ._desc = "2:2",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "LM0_RAM_PARITY",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_QW,
      ._desc = "1:1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = "DIAG_ONLY",
      ._bpos = AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_BP,
      ._mask = AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._rval = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA & AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_MASK,
      ._index = AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_QW,
      ._desc = "0:0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_dbg_errinj_perr_detail[] = {
    { ._name = "ADDRESS",
      ._bpos = AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_BP,
      ._mask = AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_MASK,
      ._rval = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSTDATA & AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_MASK,
      ._index = AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_QW,
      ._desc = "This field indicates the address within the memory for which error injection is to occur",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "CHECKBITS",
      ._bpos = AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_BP,
      ._mask = AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_MASK,
      ._rval = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSTDATA & AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_MASK,
      ._index = AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_QW,
      ._desc = "When an error is injected, each bit that is set to one in this field causes the corresponding parity bit for the memory address read to be inverted",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "LM1_TRIGGERED",
      ._bpos = AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_BP,
      ._mask = AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_MASK,
      ._rval = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSTDATA & AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_MASK,
      ._index = AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_QW,
      ._desc = "This bit is set when an error is injected in LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM0_TRIGGERED",
      ._bpos = AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_BP,
      ._mask = AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_MASK,
      ._rval = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSTDATA & AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_MASK,
      ._index = AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_QW,
      ._desc = "This bit is set when an error is injected in LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "RAM_SELECT",
      ._bpos = AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_BP,
      ._mask = AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_MASK,
      ._rval = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSTDATA & AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_MASK,
      ._index = AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_QW,
      ._desc = "Mask of Logic Monitor RAMs",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "MODE",
      ._bpos = AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_BP,
      ._mask = AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_MASK,
      ._rval = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSTDATA & AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_MASK,
      ._index = AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_QW,
      ._desc = "Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = "ENABLE",
      ._bpos = AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_BP,
      ._mask = AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_MASK,
      ._rval = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSTDATA & AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_MASK,
      ._index = AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_QW,
      ._desc = "Enable error injection",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_err_info_perr_detail[] = {
    { ._name = "LM1_ADDRESS",
      ._bpos = AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_BP,
      ._mask = AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_MASK,
      ._rval = AR_NIC_NICLM_ERR_INFO_PERR_RSTDATA & AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_MASK,
      ._index = AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_QW,
      ._desc = "Address with parity error on LM1",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM0_ADDRESS",
      ._bpos = AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_BP,
      ._mask = AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_MASK,
      ._rval = AR_NIC_NICLM_ERR_INFO_PERR_RSTDATA & AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_MASK,
      ._index = AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_QW,
      ._desc = "Address with parity error on LM0",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM1_MMR_DETECTED_PERR",
      ._bpos = AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_BP,
      ._mask = AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_MASK,
      ._rval = AR_NIC_NICLM_ERR_INFO_PERR_RSTDATA & AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_MASK,
      ._index = AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_QW,
      ._desc = "The LM1 parity error was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = "LM0_MMR_DETECTED_PERR",
      ._bpos = AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_BP,
      ._mask = AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_MASK,
      ._rval = AR_NIC_NICLM_ERR_INFO_PERR_RSTDATA & AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_MASK,
      ._index = AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_QW,
      ._desc = "The LM0 parity error was observed during an MMR read",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_err_info_lm0_perr_cnt_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_BP,
      ._mask = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_MASK,
      ._rval = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_RSTDATA & AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_MASK,
      ._index = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_QW,
      ._desc = "Number of parity errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_err_info_lm1_perr_cnt_detail[] = {
    { ._name = "CNT",
      ._bpos = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_BP,
      ._mask = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_MASK,
      ._rval = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_RSTDATA & AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_MASK,
      ._index = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_QW,
      ._desc = "Number of parity errors that have occurred",
      ._type_bitmsk = 0x0000000000000001ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_nic_niclm_err_frc_hss_irq_detail[] = {
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR NICLM DESC MASK ARRAYS DECLARATIONS
 */

/*
 *  AR NICLM MMR DECLARATIONS
 */
static const cmmr_br_t __ar_nic_niclm_dbg_lm0_ctl = {
    ._name = "AR_NIC_NICLM_DBG_LM0_CTL",
    ._addr = AR_NIC_NICLM_DBG_LM0_CTL,
    ._rval.val = AR_NIC_NICLM_DBG_LM0_CTL_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM0_CTL_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM0_CTL_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM0_CTL_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM0_CTL_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM0_CTL_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM0_CTL_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM0_CTL_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM0_CTL_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM0_CTL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM0_CTL_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM0_CTL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm0_ctl_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm0_ptrs = {
    ._name = "AR_NIC_NICLM_DBG_LM0_PTRS",
    ._addr = AR_NIC_NICLM_DBG_LM0_PTRS,
    ._rval.val = AR_NIC_NICLM_DBG_LM0_PTRS_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM0_PTRS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_niclm_dbg_lm0_ptrs_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm0_read_lo = {
    ._name = "AR_NIC_NICLM_DBG_LM0_READ_LO",
    ._addr = AR_NIC_NICLM_DBG_LM0_READ_LO,
    ._rval.val = AR_NIC_NICLM_DBG_LM0_READ_LO_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM0_READ_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm0_read_lo_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm0_read_mid = {
    ._name = "AR_NIC_NICLM_DBG_LM0_READ_MID",
    ._addr = AR_NIC_NICLM_DBG_LM0_READ_MID,
    ._rval.val = AR_NIC_NICLM_DBG_LM0_READ_MID_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM0_READ_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm0_read_mid_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm0_read_hi = {
    ._name = "AR_NIC_NICLM_DBG_LM0_READ_HI",
    ._addr = AR_NIC_NICLM_DBG_LM0_READ_HI,
    ._rval.val = AR_NIC_NICLM_DBG_LM0_READ_HI_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM0_READ_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm0_read_hi_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm0_snap_sel = {
    ._name = "AR_NIC_NICLM_DBG_LM0_SNAP_SEL",
    ._addr = AR_NIC_NICLM_DBG_LM0_SNAP_SEL,
    ._rval.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_niclm_dbg_lm0_snap_sel_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm0_snap_dlo = {
    ._name = "AR_NIC_NICLM_DBG_LM0_SNAP_DLO",
    ._addr = AR_NIC_NICLM_DBG_LM0_SNAP_DLO,
    ._rval.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DLO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm0_snap_dlo_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm0_snap_dmid = {
    ._name = "AR_NIC_NICLM_DBG_LM0_SNAP_DMID",
    ._addr = AR_NIC_NICLM_DBG_LM0_SNAP_DMID,
    ._rval.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DMID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm0_snap_dmid_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm0_snap_dhi = {
    ._name = "AR_NIC_NICLM_DBG_LM0_SNAP_DHI",
    ._addr = AR_NIC_NICLM_DBG_LM0_SNAP_DHI,
    ._rval.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM0_SNAP_DHI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm0_snap_dhi_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm1_ctl = {
    ._name = "AR_NIC_NICLM_DBG_LM1_CTL",
    ._addr = AR_NIC_NICLM_DBG_LM1_CTL,
    ._rval.val = AR_NIC_NICLM_DBG_LM1_CTL_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM1_CTL_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM1_CTL_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM1_CTL_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM1_CTL_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM1_CTL_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM1_CTL_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM1_CTL_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM1_CTL_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM1_CTL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM1_CTL_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM1_CTL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm1_ctl_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm1_ptrs = {
    ._name = "AR_NIC_NICLM_DBG_LM1_PTRS",
    ._addr = AR_NIC_NICLM_DBG_LM1_PTRS,
    ._rval.val = AR_NIC_NICLM_DBG_LM1_PTRS_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM1_PTRS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_niclm_dbg_lm1_ptrs_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm1_read_lo = {
    ._name = "AR_NIC_NICLM_DBG_LM1_READ_LO",
    ._addr = AR_NIC_NICLM_DBG_LM1_READ_LO,
    ._rval.val = AR_NIC_NICLM_DBG_LM1_READ_LO_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM1_READ_LO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm1_read_lo_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm1_read_mid = {
    ._name = "AR_NIC_NICLM_DBG_LM1_READ_MID",
    ._addr = AR_NIC_NICLM_DBG_LM1_READ_MID,
    ._rval.val = AR_NIC_NICLM_DBG_LM1_READ_MID_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM1_READ_MID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm1_read_mid_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm1_read_hi = {
    ._name = "AR_NIC_NICLM_DBG_LM1_READ_HI",
    ._addr = AR_NIC_NICLM_DBG_LM1_READ_HI,
    ._rval.val = AR_NIC_NICLM_DBG_LM1_READ_HI_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM1_READ_HI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm1_read_hi_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm1_snap_sel = {
    ._name = "AR_NIC_NICLM_DBG_LM1_SNAP_SEL",
    ._addr = AR_NIC_NICLM_DBG_LM1_SNAP_SEL,
    ._rval.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_niclm_dbg_lm1_snap_sel_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm1_snap_dlo = {
    ._name = "AR_NIC_NICLM_DBG_LM1_SNAP_DLO",
    ._addr = AR_NIC_NICLM_DBG_LM1_SNAP_DLO,
    ._rval.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DLO_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm1_snap_dlo_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm1_snap_dmid = {
    ._name = "AR_NIC_NICLM_DBG_LM1_SNAP_DMID",
    ._addr = AR_NIC_NICLM_DBG_LM1_SNAP_DMID,
    ._rval.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DMID_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm1_snap_dmid_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_lm1_snap_dhi = {
    ._name = "AR_NIC_NICLM_DBG_LM1_SNAP_DHI",
    ._addr = AR_NIC_NICLM_DBG_LM1_SNAP_DHI,
    ._rval.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_LM1_SNAP_DHI_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_lm1_snap_dhi_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_rem_trig = {
    ._name = "AR_NIC_NICLM_DBG_REM_TRIG",
    ._addr = AR_NIC_NICLM_DBG_REM_TRIG,
    ._rval.val = AR_NIC_NICLM_DBG_REM_TRIG_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_REM_TRIG_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_REM_TRIG_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_REM_TRIG_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_REM_TRIG_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_REM_TRIG_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_REM_TRIG_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_REM_TRIG_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_REM_TRIG_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_REM_TRIG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_REM_TRIG_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_REM_TRIG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_rem_trig_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_trig_sts = {
    ._name = "AR_NIC_NICLM_DBG_TRIG_STS",
    ._addr = AR_NIC_NICLM_DBG_TRIG_STS,
    ._rval.val = AR_NIC_NICLM_DBG_TRIG_STS_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_TRIG_STS_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_TRIG_STS_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_TRIG_STS_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_TRIG_STS_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_TRIG_STS_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_TRIG_STS_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_TRIG_STS_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_TRIG_STS_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_TRIG_STS_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_TRIG_STS_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_TRIG_STS_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_trig_sts_detail
};
static const cmmr_br_t __ar_nic_niclm_err_flg = {
    ._name = "AR_NIC_NICLM_ERR_FLG",
    ._addr = AR_NIC_NICLM_ERR_FLG,
    ._rval.val = AR_NIC_NICLM_ERR_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_ERR_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_ERR_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_ERR_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_ERR_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_ERR_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_ERR_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_ERR_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_ERR_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_ERR_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_ERR_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_ERR_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000180011ull,
    ._info = __ar_nic_niclm_err_flg_detail
};
static const cmmr_br_t __ar_nic_niclm_err_clr = {
    ._name = "AR_NIC_NICLM_ERR_CLR",
    ._addr = AR_NIC_NICLM_ERR_CLR,
    ._rval.val = AR_NIC_NICLM_ERR_CLR_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_ERR_CLR_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_ERR_CLR_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_ERR_CLR_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_ERR_CLR_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_ERR_CLR_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_ERR_CLR_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_ERR_CLR_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_ERR_CLR_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_ERR_CLR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_ERR_CLR_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_ERR_CLR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000021ull,
    ._info = __ar_nic_niclm_err_clr_detail
};
static const cmmr_br_t __ar_nic_niclm_err_hss_msk = {
    ._name = "AR_NIC_NICLM_ERR_HSS_MSK",
    ._addr = AR_NIC_NICLM_ERR_HSS_MSK,
    ._rval.val = AR_NIC_NICLM_ERR_HSS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_ERR_HSS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_ERR_HSS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_ERR_HSS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_ERR_HSS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_ERR_HSS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_ERR_HSS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_ERR_HSS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_ERR_HSS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_ERR_HSS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_ERR_HSS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_ERR_HSS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000041ull,
    ._info = __ar_nic_niclm_err_hss_msk_detail
};
static const cmmr_br_t __ar_nic_niclm_err_os_msk = {
    ._name = "AR_NIC_NICLM_ERR_OS_MSK",
    ._addr = AR_NIC_NICLM_ERR_OS_MSK,
    ._rval.val = AR_NIC_NICLM_ERR_OS_MSK_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_ERR_OS_MSK_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_ERR_OS_MSK_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_ERR_OS_MSK_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_ERR_OS_MSK_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_ERR_OS_MSK_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_ERR_OS_MSK_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_ERR_OS_MSK_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_ERR_OS_MSK_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_ERR_OS_MSK_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_ERR_OS_MSK_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_ERR_OS_MSK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000081ull,
    ._info = __ar_nic_niclm_err_os_msk_detail
};
static const cmmr_br_t __ar_nic_niclm_err_first_flg = {
    ._name = "AR_NIC_NICLM_ERR_FIRST_FLG",
    ._addr = AR_NIC_NICLM_ERR_FIRST_FLG,
    ._rval.val = AR_NIC_NICLM_ERR_FIRST_FLG_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_ERR_FIRST_FLG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000401ull,
    ._info = __ar_nic_niclm_err_first_flg_detail
};
static const cmmr_br_t __ar_nic_niclm_dbg_errinj_perr = {
    ._name = "AR_NIC_NICLM_DBG_ERRINJ_PERR",
    ._addr = AR_NIC_NICLM_DBG_ERRINJ_PERR,
    ._rval.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_DBG_ERRINJ_PERR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_dbg_errinj_perr_detail
};
static const cmmr_br_t __ar_nic_niclm_err_info_perr = {
    ._name = "AR_NIC_NICLM_ERR_INFO_PERR",
    ._addr = AR_NIC_NICLM_ERR_INFO_PERR,
    ._rval.val = AR_NIC_NICLM_ERR_INFO_PERR_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_ERR_INFO_PERR_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_ERR_INFO_PERR_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_ERR_INFO_PERR_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_ERR_INFO_PERR_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_ERR_INFO_PERR_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_ERR_INFO_PERR_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_ERR_INFO_PERR_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_ERR_INFO_PERR_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_ERR_INFO_PERR_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_ERR_INFO_PERR_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_ERR_INFO_PERR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_err_info_perr_detail
};
static const cmmr_br_t __ar_nic_niclm_err_info_lm0_perr_cnt = {
    ._name = "AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT",
    ._addr = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT,
    ._rval.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_err_info_lm0_perr_cnt_detail
};
static const cmmr_br_t __ar_nic_niclm_err_info_lm1_perr_cnt = {
    ._name = "AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT",
    ._addr = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT,
    ._rval.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000001ull,
    ._info = __ar_nic_niclm_err_info_lm1_perr_cnt_detail
};
static const cmmr_br_t __ar_nic_niclm_err_frc_hss_irq = {
    ._name = "AR_NIC_NICLM_ERR_FRC_HSS_IRQ",
    ._addr = AR_NIC_NICLM_ERR_FRC_HSS_IRQ,
    ._rval.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_RSTDATA,
    ._rmsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_RSTMASK,
    ._wrmsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_WRTMASK,
    ._rdmsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_RDMASK,
    ._xsmsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_XSMASK,
    ._wsemsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_WSEMASK,
    ._rsemsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_RSEMASK,
    ._w1smsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_W1SMASK,
    ._w1cmsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_W1CMASK,
    ._wrstmsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_WRSTMASK,
    ._hwwmsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_HWWMASK,
    ._hwrmsk.val = AR_NIC_NICLM_ERR_FRC_HSS_IRQ_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000009ull,
    ._info = __ar_nic_niclm_err_frc_hss_irq_detail
};

/*
 *  INSTALL AR NICLM MMRS
 */
static const cmmr_br_t* __ar_niclm_mmrs[] = {
    &__ar_nic_niclm_dbg_lm0_ctl,
    &__ar_nic_niclm_dbg_lm0_ptrs,
    &__ar_nic_niclm_dbg_lm0_read_lo,
    &__ar_nic_niclm_dbg_lm0_read_mid,
    &__ar_nic_niclm_dbg_lm0_read_hi,
    &__ar_nic_niclm_dbg_lm0_snap_sel,
    &__ar_nic_niclm_dbg_lm0_snap_dlo,
    &__ar_nic_niclm_dbg_lm0_snap_dmid,
    &__ar_nic_niclm_dbg_lm0_snap_dhi,
    &__ar_nic_niclm_dbg_lm1_ctl,
    &__ar_nic_niclm_dbg_lm1_ptrs,
    &__ar_nic_niclm_dbg_lm1_read_lo,
    &__ar_nic_niclm_dbg_lm1_read_mid,
    &__ar_nic_niclm_dbg_lm1_read_hi,
    &__ar_nic_niclm_dbg_lm1_snap_sel,
    &__ar_nic_niclm_dbg_lm1_snap_dlo,
    &__ar_nic_niclm_dbg_lm1_snap_dmid,
    &__ar_nic_niclm_dbg_lm1_snap_dhi,
    &__ar_nic_niclm_dbg_rem_trig,
    &__ar_nic_niclm_dbg_trig_sts,
    &__ar_nic_niclm_err_flg,
    &__ar_nic_niclm_err_clr,
    &__ar_nic_niclm_err_hss_msk,
    &__ar_nic_niclm_err_os_msk,
    &__ar_nic_niclm_err_first_flg,
    &__ar_nic_niclm_dbg_errinj_perr,
    &__ar_nic_niclm_err_info_perr,
    &__ar_nic_niclm_err_info_lm0_perr_cnt,
    &__ar_nic_niclm_err_info_lm1_perr_cnt,
    &__ar_nic_niclm_err_frc_hss_irq,
    NULL
};

/*
 *  INSTALL AR NICLM LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_niclm_enc_mmrs[] = {
    NULL
};

#endif
