/******************************************************************************
 * COPYRIGHT CRAY INC. ar_cbus_mmrs_h.h
 * FILE: ar_cbus_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_CBUS_MMRS_H_H_
#define _AR_CBUS_MMRS_H_H_

#ifdef __GNUC__
#define _unused __attribute__((unused))
#else
#define _unused
#endif

#ifndef _GENERIC_MMRD_T_
#define _GENERIC_MMRD_T_
typedef struct {
	char* _name;		/* Field name */
	uint32_t _bpos;		/* Field bit postion */
	uint64_t _mask;		/* Field bit mask */
} generic_mmrd_t;
#endif

#ifndef _ERRCAT_MMRD_T_
#define _ERRCAT_MMRD_T_
typedef struct {
	char* _name;		/* Field name */
	uint32_t _bpos;		/* Field bit postion */
	uint32_t _ec;		/* Field error category */
} errcat_mmrd_t;
#endif

#ifndef _GENERIC_MMR_T_
#define _GENERIC_MMR_T_
typedef struct {
	char* _name;		/* MMR name */
	uint64_t _addr;		/* MMR address */
	int _size;		/* Size in bytes of MMR */
	int _depth;		/* Number of MMR instances */
	const generic_mmrd_t *_info;	/* MMR detail */
} generic_mmr_t;
#endif

static const generic_mmr_t* _ar_cbus_mmrs[] _unused;	/* CBUS Array */

/*
 *  AR CBUS MMR DETAIL DECLARATIONS
 */
static const generic_mmrd_t _ar_serdes_cbus_pattern_detail[] = {
    { "Q_PATTERN", AR_SERDES_CBUS_PATTERN_Q_PATTERN_BP, AR_SERDES_CBUS_PATTERN_Q_PATTERN_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_serdes_cbus_patdet_detail[] = {
    { "Q_PATDET", AR_SERDES_CBUS_PATDET_Q_PATDET_BP, AR_SERDES_CBUS_PATDET_Q_PATDET_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_serdes_cbus_revpol_detail[] = {
    { "REVPOL", AR_SERDES_CBUS_REVPOL_REVPOL_BP, AR_SERDES_CBUS_REVPOL_REVPOL_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_serdes_cbus_tx_pat_detail[] = {
    { "Q_TX_PAT", AR_SERDES_CBUS_TX_PAT_Q_TX_PAT_BP, AR_SERDES_CBUS_TX_PAT_Q_TX_PAT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_serdes_cbus_rx_pat_detail[] = {
    { "Q_RX_PAT", AR_SERDES_CBUS_RX_PAT_Q_RX_PAT_BP, AR_SERDES_CBUS_RX_PAT_Q_RX_PAT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_serdes_cbus_rx_mask_detail[] = {
    { "Q_RX_MASK", AR_SERDES_CBUS_RX_MASK_Q_RX_MASK_BP, AR_SERDES_CBUS_RX_MASK_Q_RX_MASK_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_serdes_cbus_enpolcnt_detail[] = {
    { "RESERVED_7_1", AR_SERDES_CBUS_ENPOLCNT_RESERVED_7_1_BP, AR_SERDES_CBUS_ENPOLCNT_RESERVED_7_1_MASK },
    { "Q_ENPOLCNT", AR_SERDES_CBUS_ENPOLCNT_Q_ENPOLCNT_BP, AR_SERDES_CBUS_ENPOLCNT_Q_ENPOLCNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_serdes_cbus_txi_en_proc_reset_detail[] = {
    { "RESERVED_7_2", AR_SERDES_CBUS_TXI_EN_PROC_RESET_RESERVED_7_2_BP, AR_SERDES_CBUS_TXI_EN_PROC_RESET_RESERVED_7_2_MASK },
    { "Q_TXI_EN", AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_TXI_EN_BP, AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_TXI_EN_MASK },
    { "Q_PROC_RESET", AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_PROC_RESET_BP, AR_SERDES_CBUS_TXI_EN_PROC_RESET_Q_PROC_RESET_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_serdes_cbus_elec_idle_en_sel_detail[] = {
    { "RESERVED_7_5", AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RESERVED_7_5_BP, AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_RESERVED_7_5_MASK },
    { "R_TX_ELEC_IDLE_FPSK", AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_TX_ELEC_IDLE_FPSK_BP, AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_TX_ELEC_IDLE_FPSK_MASK },
    { "R_PATT_GEN_EN_FPSK", AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_EN_FPSK_BP, AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_EN_FPSK_MASK },
    { "R_PATT_GEN_SEL_FPSK", AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_SEL_FPSK_BP, AR_SERDES_CBUS_ELEC_IDLE_EN_SEL_R_PATT_GEN_SEL_FPSK_MASK },
    { NULL, 0, 0 }
};

/*
 *  AR CBUS MMR DECLARATIONS
 */
static const generic_mmr_t _ar_serdes_cbus_pattern = {
    "AR_SERDES_CBUS_PATTERN", AR_SERDES_CBUS_PATTERN, 8, 1, _ar_serdes_cbus_pattern_detail
};
static const generic_mmr_t _ar_serdes_cbus_patdet = {
    "AR_SERDES_CBUS_PATDET", AR_SERDES_CBUS_PATDET, 8, 1, _ar_serdes_cbus_patdet_detail
};
static const generic_mmr_t _ar_serdes_cbus_revpol = {
    "AR_SERDES_CBUS_REVPOL", AR_SERDES_CBUS_REVPOL, 8, 1, _ar_serdes_cbus_revpol_detail
};
static const generic_mmr_t _ar_serdes_cbus_tx_pat = {
    "AR_SERDES_CBUS_TX_PAT", AR_SERDES_CBUS_TX_PAT, 8, 1, _ar_serdes_cbus_tx_pat_detail
};
static const generic_mmr_t _ar_serdes_cbus_rx_pat = {
    "AR_SERDES_CBUS_RX_PAT", AR_SERDES_CBUS_RX_PAT, 8, 1, _ar_serdes_cbus_rx_pat_detail
};
static const generic_mmr_t _ar_serdes_cbus_rx_mask = {
    "AR_SERDES_CBUS_RX_MASK", AR_SERDES_CBUS_RX_MASK, 8, 1, _ar_serdes_cbus_rx_mask_detail
};
static const generic_mmr_t _ar_serdes_cbus_enpolcnt = {
    "AR_SERDES_CBUS_ENPOLCNT", AR_SERDES_CBUS_ENPOLCNT, 8, 1, _ar_serdes_cbus_enpolcnt_detail
};
static const generic_mmr_t _ar_serdes_cbus_txi_en_proc_reset = {
    "AR_SERDES_CBUS_TXI_EN_PROC_RESET", AR_SERDES_CBUS_TXI_EN_PROC_RESET, 8, 1, _ar_serdes_cbus_txi_en_proc_reset_detail
};
static const generic_mmr_t _ar_serdes_cbus_elec_idle_en_sel = {
    "AR_SERDES_CBUS_ELEC_IDLE_EN_SEL", AR_SERDES_CBUS_ELEC_IDLE_EN_SEL, 8, 1, _ar_serdes_cbus_elec_idle_en_sel_detail
};

/*
 *  INSTALL AR CBUS MMRS
 */
static const generic_mmr_t* _ar_cbus_mmrs[] _unused = {
    &_ar_serdes_cbus_pattern,
    &_ar_serdes_cbus_patdet,
    &_ar_serdes_cbus_revpol,
    &_ar_serdes_cbus_tx_pat,
    &_ar_serdes_cbus_rx_pat,
    &_ar_serdes_cbus_rx_mask,
    &_ar_serdes_cbus_enpolcnt,
    &_ar_serdes_cbus_txi_en_proc_reset,
    &_ar_serdes_cbus_elec_idle_en_sel,
    NULL
};

#endif
