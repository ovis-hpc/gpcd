/******************************************************************************
 * COPYRIGHT CRAY INC. ar_cbus_detailed_mmrs_h.h
 * FILE: ar_cbus_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/
/**
 * @file ar_cbus_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:39:04 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_cbus_mmr_values.h and ar_cbus_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_cbus_mmr_values.h"

#ifndef _AR_CBUS_DETAILED_MMRS_H_H_
#define _AR_CBUS_DETAILED_MMRS_H_H_

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

static const cmmr_br_t* __ar_cbus_mmrs[];	/* CBUS Array */

/*
 *  AR CBUS MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_serdes_cbus_pattern_detail[] = {
    { ._name = "Q_PATTERN",
      ._bpos = AR_SERDES_CBUS_PATTERN_Q_PATTERN_BP,
      ._mask = AR_SERDES_CBUS_PATTERN_Q_PATTERN_MASK,
      ._rval = AR_SERDES_CBUS_PATTERN_RSTDATA & AR_SERDES_CBUS_PATTERN_Q_PATTERN_MASK,
      ._index = AR_SERDES_CBUS_PATTERN_Q_PATTERN_QW,
      ._desc = "Receive pattern detected",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_serdes_cbus_patdet_detail[] = {
    { ._name = "Q_PATDET",
      ._bpos = AR_SERDES_CBUS_PATDET_Q_PATDET_BP,
      ._mask = AR_SERDES_CBUS_PATDET_Q_PATDET_MASK,
      ._rval = AR_SERDES_CBUS_PATDET_RSTDATA & AR_SERDES_CBUS_PATDET_Q_PATDET_MASK,
      ._index = AR_SERDES_CBUS_PATDET_Q_PATDET_QW,
      ._desc = "Receive pattern detected flag",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_serdes_cbus_revpol_detail[] = {
    { ._name = "REVPOL",
      ._bpos = AR_SERDES_CBUS_REVPOL_REVPOL_BP,
      ._mask = AR_SERDES_CBUS_REVPOL_REVPOL_MASK,
      ._rval = AR_SERDES_CBUS_REVPOL_RSTDATA & AR_SERDES_CBUS_REVPOL_REVPOL_MASK,
      ._index = AR_SERDES_CBUS_REVPOL_REVPOL_QW,
      ._desc = "Revers polarity flag",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_serdes_cbus_tx_pat_detail[] = {
    { ._name = "Q_TX_PAT",
      ._bpos = AR_SERDES_CBUS_TX_PAT_Q_TX_PAT_BP,
      ._mask = AR_SERDES_CBUS_TX_PAT_Q_TX_PAT_MASK,
      ._rval = AR_SERDES_CBUS_TX_PAT_RSTDATA & AR_SERDES_CBUS_TX_PAT_Q_TX_PAT_MASK,
      ._index = AR_SERDES_CBUS_TX_PAT_Q_TX_PAT_QW,
      ._desc = "Transmit pattern",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_serdes_cbus_rx_pat_detail[] = {
    { ._name = "Q_RX_PAT",
      ._bpos = AR_SERDES_CBUS_RX_PAT_Q_RX_PAT_BP,
      ._mask = AR_SERDES_CBUS_RX_PAT_Q_RX_PAT_MASK,
      ._rval = AR_SERDES_CBUS_RX_PAT_RSTDATA & AR_SERDES_CBUS_RX_PAT_Q_RX_PAT_MASK,
      ._index = AR_SERDES_CBUS_RX_PAT_Q_RX_PAT_QW,
      ._desc = "Receive pattern",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_serdes_cbus_rx_mask_detail[] = {
    { ._name = "Q_RX_MASK",
      ._bpos = AR_SERDES_CBUS_RX_MASK_Q_RX_MASK_BP,
      ._mask = AR_SERDES_CBUS_RX_MASK_Q_RX_MASK_MASK,
      ._rval = AR_SERDES_CBUS_RX_MASK_RSTDATA & AR_SERDES_CBUS_RX_MASK_Q_RX_MASK_MASK,
      ._index = AR_SERDES_CBUS_RX_MASK_Q_RX_MASK_QW,
      ._desc = "Receive mask",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_serdes_cbus_enpolcnt_detail[] = {
    { ._name = "RESERVED_7_1",
      ._bpos = AR_SERDES_CBUS_ENPOLCNT_RESERVED_7_1_BP,
      ._mask = AR_SERDES_CBUS_ENPOLCNT_RESERVED_7_1_MASK,
      ._rval = AR_SERDES_CBUS_ENPOLCNT_RSTDATA & AR_SERDES_CBUS_ENPOLCNT_RESERVED_7_1_MASK,
      ._index = AR_SERDES_CBUS_ENPOLCNT_RESERVED_7_1_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "Q_ENPOLCNT",
      ._bpos = AR_SERDES_CBUS_ENPOLCNT_Q_ENPOLCNT_BP,
      ._mask = AR_SERDES_CBUS_ENPOLCNT_Q_ENPOLCNT_MASK,
      ._rval = AR_SERDES_CBUS_ENPOLCNT_RSTDATA & AR_SERDES_CBUS_ENPOLCNT_Q_ENPOLCNT_MASK,
      ._index = AR_SERDES_CBUS_ENPOLCNT_Q_ENPOLCNT_QW,
      ._desc = "Enable polarity count",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_serdes_cbus_txi_en_proc_reset_detail[] = {
    { ._name = "RESERVED_7_2",
      ._bpos = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RESERVED_7_2_BP,
      ._mask = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RESERVED_7_2_MASK,
      ._rval = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RSTDATA & AR_SERDES_CBUS_TXI_EN_PROC_RESET_RESERVED_7_2_MASK,
      ._index = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RESERVED_7_2_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "Q_TXI_EN",
      ._bpos = AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_TXI_EN_BP,
      ._mask = AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_TXI_EN_MASK,
      ._rval = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RSTDATA & AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_TXI_EN_MASK,
      ._index = AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_TXI_EN_QW,
      ._desc = "Enable tx_init module",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "Q_PROC_RESET",
      ._bpos = AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_PROC_RESET_BP,
      ._mask = AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_PROC_RESET_MASK,
      ._rval = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RSTDATA & AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_PROC_RESET_MASK,
      ._index = AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_PROC_RESET_QW,
      ._desc = "Lane reset",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_serdes_cbus_elec_idle_en_sel_detail[] = {
    { ._name = "RESERVED_7_5",
      ._bpos = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RESERVED_7_5_BP,
      ._mask = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RESERVED_7_5_MASK,
      ._rval = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RSTDATA & AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RESERVED_7_5_MASK,
      ._index = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RESERVED_7_5_QW,
      ._desc = "",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO"
    },
    { ._name = "R_TX_ELEC_IDLE_FPSK",
      ._bpos = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_TX_ELEC_IDLE_FPSK_BP,
      ._mask = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_TX_ELEC_IDLE_FPSK_MASK,
      ._rval = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RSTDATA & AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_TX_ELEC_IDLE_FPSK_MASK,
      ._index = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_TX_ELEC_IDLE_FPSK_QW,
      ._desc = "SerDes TX elec idle",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "R_PATT_GEN_EN_FPSK",
      ._bpos = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_EN_FPSK_BP,
      ._mask = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_EN_FPSK_MASK,
      ._rval = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RSTDATA & AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_EN_FPSK_MASK,
      ._index = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_EN_FPSK_QW,
      ._desc = "SerDes TX pattern generator enable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "R_PATT_GEN_SEL_FPSK",
      ._bpos = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_SEL_FPSK_BP,
      ._mask = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_SEL_FPSK_MASK,
      ._rval = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RSTDATA & AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_SEL_FPSK_MASK,
      ._index = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_SEL_FPSK_QW,
      ._desc = "SerDes TX pattern generator select",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR CBUS DESC MASK ARRAYS DECLARATIONS
 */

/*
 *  AR CBUS MMR DECLARATIONS
 */
static const cmmr_br_t __ar_serdes_cbus_pattern = {
    ._name = "AR_SERDES_CBUS_PATTERN",
    ._addr = AR_SERDES_CBUS_PATTERN,
    ._rval.val = AR_SERDES_CBUS_PATTERN_RSTDATA,
    ._rmsk.val = AR_SERDES_CBUS_PATTERN_RSTMASK,
    ._wrmsk.val = AR_SERDES_CBUS_PATTERN_WRTMASK,
    ._rdmsk.val = AR_SERDES_CBUS_PATTERN_RDMASK,
    ._xsmsk.val = AR_SERDES_CBUS_PATTERN_XSMASK,
    ._wsemsk.val = AR_SERDES_CBUS_PATTERN_WSEMASK,
    ._rsemsk.val = AR_SERDES_CBUS_PATTERN_RSEMASK,
    ._w1smsk.val = AR_SERDES_CBUS_PATTERN_W1SMASK,
    ._w1cmsk.val = AR_SERDES_CBUS_PATTERN_W1CMASK,
    ._wrstmsk.val = AR_SERDES_CBUS_PATTERN_WRSTMASK,
    ._hwwmsk.val = AR_SERDES_CBUS_PATTERN_HWWMASK,
    ._hwrmsk.val = AR_SERDES_CBUS_PATTERN_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_serdes_cbus_pattern_detail
};
static const cmmr_br_t __ar_serdes_cbus_patdet = {
    ._name = "AR_SERDES_CBUS_PATDET",
    ._addr = AR_SERDES_CBUS_PATDET,
    ._rval.val = AR_SERDES_CBUS_PATDET_RSTDATA,
    ._rmsk.val = AR_SERDES_CBUS_PATDET_RSTMASK,
    ._wrmsk.val = AR_SERDES_CBUS_PATDET_WRTMASK,
    ._rdmsk.val = AR_SERDES_CBUS_PATDET_RDMASK,
    ._xsmsk.val = AR_SERDES_CBUS_PATDET_XSMASK,
    ._wsemsk.val = AR_SERDES_CBUS_PATDET_WSEMASK,
    ._rsemsk.val = AR_SERDES_CBUS_PATDET_RSEMASK,
    ._w1smsk.val = AR_SERDES_CBUS_PATDET_W1SMASK,
    ._w1cmsk.val = AR_SERDES_CBUS_PATDET_W1CMASK,
    ._wrstmsk.val = AR_SERDES_CBUS_PATDET_WRSTMASK,
    ._hwwmsk.val = AR_SERDES_CBUS_PATDET_HWWMASK,
    ._hwrmsk.val = AR_SERDES_CBUS_PATDET_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_serdes_cbus_patdet_detail
};
static const cmmr_br_t __ar_serdes_cbus_revpol = {
    ._name = "AR_SERDES_CBUS_REVPOL",
    ._addr = AR_SERDES_CBUS_REVPOL,
    ._rval.val = AR_SERDES_CBUS_REVPOL_RSTDATA,
    ._rmsk.val = AR_SERDES_CBUS_REVPOL_RSTMASK,
    ._wrmsk.val = AR_SERDES_CBUS_REVPOL_WRTMASK,
    ._rdmsk.val = AR_SERDES_CBUS_REVPOL_RDMASK,
    ._xsmsk.val = AR_SERDES_CBUS_REVPOL_XSMASK,
    ._wsemsk.val = AR_SERDES_CBUS_REVPOL_WSEMASK,
    ._rsemsk.val = AR_SERDES_CBUS_REVPOL_RSEMASK,
    ._w1smsk.val = AR_SERDES_CBUS_REVPOL_W1SMASK,
    ._w1cmsk.val = AR_SERDES_CBUS_REVPOL_W1CMASK,
    ._wrstmsk.val = AR_SERDES_CBUS_REVPOL_WRSTMASK,
    ._hwwmsk.val = AR_SERDES_CBUS_REVPOL_HWWMASK,
    ._hwrmsk.val = AR_SERDES_CBUS_REVPOL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_serdes_cbus_revpol_detail
};
static const cmmr_br_t __ar_serdes_cbus_tx_pat = {
    ._name = "AR_SERDES_CBUS_TX_PAT",
    ._addr = AR_SERDES_CBUS_TX_PAT,
    ._rval.val = AR_SERDES_CBUS_TX_PAT_RSTDATA,
    ._rmsk.val = AR_SERDES_CBUS_TX_PAT_RSTMASK,
    ._wrmsk.val = AR_SERDES_CBUS_TX_PAT_WRTMASK,
    ._rdmsk.val = AR_SERDES_CBUS_TX_PAT_RDMASK,
    ._xsmsk.val = AR_SERDES_CBUS_TX_PAT_XSMASK,
    ._wsemsk.val = AR_SERDES_CBUS_TX_PAT_WSEMASK,
    ._rsemsk.val = AR_SERDES_CBUS_TX_PAT_RSEMASK,
    ._w1smsk.val = AR_SERDES_CBUS_TX_PAT_W1SMASK,
    ._w1cmsk.val = AR_SERDES_CBUS_TX_PAT_W1CMASK,
    ._wrstmsk.val = AR_SERDES_CBUS_TX_PAT_WRSTMASK,
    ._hwwmsk.val = AR_SERDES_CBUS_TX_PAT_HWWMASK,
    ._hwrmsk.val = AR_SERDES_CBUS_TX_PAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_serdes_cbus_tx_pat_detail
};
static const cmmr_br_t __ar_serdes_cbus_rx_pat = {
    ._name = "AR_SERDES_CBUS_RX_PAT",
    ._addr = AR_SERDES_CBUS_RX_PAT,
    ._rval.val = AR_SERDES_CBUS_RX_PAT_RSTDATA,
    ._rmsk.val = AR_SERDES_CBUS_RX_PAT_RSTMASK,
    ._wrmsk.val = AR_SERDES_CBUS_RX_PAT_WRTMASK,
    ._rdmsk.val = AR_SERDES_CBUS_RX_PAT_RDMASK,
    ._xsmsk.val = AR_SERDES_CBUS_RX_PAT_XSMASK,
    ._wsemsk.val = AR_SERDES_CBUS_RX_PAT_WSEMASK,
    ._rsemsk.val = AR_SERDES_CBUS_RX_PAT_RSEMASK,
    ._w1smsk.val = AR_SERDES_CBUS_RX_PAT_W1SMASK,
    ._w1cmsk.val = AR_SERDES_CBUS_RX_PAT_W1CMASK,
    ._wrstmsk.val = AR_SERDES_CBUS_RX_PAT_WRSTMASK,
    ._hwwmsk.val = AR_SERDES_CBUS_RX_PAT_HWWMASK,
    ._hwrmsk.val = AR_SERDES_CBUS_RX_PAT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_serdes_cbus_rx_pat_detail
};
static const cmmr_br_t __ar_serdes_cbus_rx_mask = {
    ._name = "AR_SERDES_CBUS_RX_MASK",
    ._addr = AR_SERDES_CBUS_RX_MASK,
    ._rval.val = AR_SERDES_CBUS_RX_MASK_RSTDATA,
    ._rmsk.val = AR_SERDES_CBUS_RX_MASK_RSTMASK,
    ._wrmsk.val = AR_SERDES_CBUS_RX_MASK_WRTMASK,
    ._rdmsk.val = AR_SERDES_CBUS_RX_MASK_RDMASK,
    ._xsmsk.val = AR_SERDES_CBUS_RX_MASK_XSMASK,
    ._wsemsk.val = AR_SERDES_CBUS_RX_MASK_WSEMASK,
    ._rsemsk.val = AR_SERDES_CBUS_RX_MASK_RSEMASK,
    ._w1smsk.val = AR_SERDES_CBUS_RX_MASK_W1SMASK,
    ._w1cmsk.val = AR_SERDES_CBUS_RX_MASK_W1CMASK,
    ._wrstmsk.val = AR_SERDES_CBUS_RX_MASK_WRSTMASK,
    ._hwwmsk.val = AR_SERDES_CBUS_RX_MASK_HWWMASK,
    ._hwrmsk.val = AR_SERDES_CBUS_RX_MASK_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_serdes_cbus_rx_mask_detail
};
static const cmmr_br_t __ar_serdes_cbus_enpolcnt = {
    ._name = "AR_SERDES_CBUS_ENPOLCNT",
    ._addr = AR_SERDES_CBUS_ENPOLCNT,
    ._rval.val = AR_SERDES_CBUS_ENPOLCNT_RSTDATA,
    ._rmsk.val = AR_SERDES_CBUS_ENPOLCNT_RSTMASK,
    ._wrmsk.val = AR_SERDES_CBUS_ENPOLCNT_WRTMASK,
    ._rdmsk.val = AR_SERDES_CBUS_ENPOLCNT_RDMASK,
    ._xsmsk.val = AR_SERDES_CBUS_ENPOLCNT_XSMASK,
    ._wsemsk.val = AR_SERDES_CBUS_ENPOLCNT_WSEMASK,
    ._rsemsk.val = AR_SERDES_CBUS_ENPOLCNT_RSEMASK,
    ._w1smsk.val = AR_SERDES_CBUS_ENPOLCNT_W1SMASK,
    ._w1cmsk.val = AR_SERDES_CBUS_ENPOLCNT_W1CMASK,
    ._wrstmsk.val = AR_SERDES_CBUS_ENPOLCNT_WRSTMASK,
    ._hwwmsk.val = AR_SERDES_CBUS_ENPOLCNT_HWWMASK,
    ._hwrmsk.val = AR_SERDES_CBUS_ENPOLCNT_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_serdes_cbus_enpolcnt_detail
};
static const cmmr_br_t __ar_serdes_cbus_txi_en_proc_reset = {
    ._name = "AR_SERDES_CBUS_TXI_EN_PROC_RESET",
    ._addr = AR_SERDES_CBUS_TXI_EN_PROC_RESET,
    ._rval.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RSTDATA,
    ._rmsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RSTMASK,
    ._wrmsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_WRTMASK,
    ._rdmsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RDMASK,
    ._xsmsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_XSMASK,
    ._wsemsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_WSEMASK,
    ._rsemsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_RSEMASK,
    ._w1smsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_W1SMASK,
    ._w1cmsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_W1CMASK,
    ._wrstmsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_WRSTMASK,
    ._hwwmsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_HWWMASK,
    ._hwrmsk.val = AR_SERDES_CBUS_TXI_EN_PROC_RESET_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_serdes_cbus_txi_en_proc_reset_detail
};
static const cmmr_br_t __ar_serdes_cbus_elec_idle_en_sel = {
    ._name = "AR_SERDES_CBUS_ELEC_IDLE_EN_SEL",
    ._addr = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL,
    ._rval.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RSTDATA,
    ._rmsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RSTMASK,
    ._wrmsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_WRTMASK,
    ._rdmsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RDMASK,
    ._xsmsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_XSMASK,
    ._wsemsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_WSEMASK,
    ._rsemsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RSEMASK,
    ._w1smsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_W1SMASK,
    ._w1cmsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_W1CMASK,
    ._wrstmsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_WRSTMASK,
    ._hwwmsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_HWWMASK,
    ._hwrmsk.val = AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_serdes_cbus_elec_idle_en_sel_detail
};

/*
 *  INSTALL AR CBUS MMRS
 */
static const cmmr_br_t* __ar_cbus_mmrs[] = {
    &__ar_serdes_cbus_pattern,
    &__ar_serdes_cbus_patdet,
    &__ar_serdes_cbus_revpol,
    &__ar_serdes_cbus_tx_pat,
    &__ar_serdes_cbus_rx_pat,
    &__ar_serdes_cbus_rx_mask,
    &__ar_serdes_cbus_enpolcnt,
    &__ar_serdes_cbus_txi_en_proc_reset,
    &__ar_serdes_cbus_elec_idle_en_sel,
    NULL
};

/*
 *  INSTALL AR CBUS LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_cbus_enc_mmrs[] = {
    NULL
};

#endif
