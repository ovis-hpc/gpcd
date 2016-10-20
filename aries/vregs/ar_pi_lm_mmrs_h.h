/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pi_lm_mmrs_h.h
 * FILE: ar_pi_lm_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_PI_LM_MMRS_H_H_
#define _AR_PI_LM_MMRS_H_H_

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

static const generic_mmr_t* _ar_pi_lm_mmrs[] _unused;	/* PI_LM Array */

/*
 *  AR PI_LM MMR DETAIL DECLARATIONS
 */
static const generic_mmrd_t _ar_pi_dbg_lm0_ctl_detail[] = {
    { "LM_RST", AR_PI_DBG_LM0_CTL_LM_RST_BP, AR_PI_DBG_LM0_CTL_LM_RST_MASK },
    { "LM_TRIG01_OCCURRED", AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_BP, AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_MASK },
    { "LM_TRIG1_OCCURRED", AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_BP, AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_MASK },
    { "LM_TRIG0_OCCURRED", AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_BP, AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_MASK },
    { "LM_CAP_STATE", AR_PI_DBG_LM0_CTL_LM_CAP_STATE_BP, AR_PI_DBG_LM0_CTL_LM_CAP_STATE_MASK },
    { "LM_CTL_T0_CNT", AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_BP, AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK },
    { "LM_CTL_T1_CNT", AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_BP, AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK },
    { "LM_CTL_MODE", AR_PI_DBG_LM0_CTL_LM_CTL_MODE_BP, AR_PI_DBG_LM0_CTL_LM_CTL_MODE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_ptrs_detail[] = {
    { "LM_REC_ACT", AR_PI_DBG_LM0_PTRS_LM_REC_ACT_BP, AR_PI_DBG_LM0_PTRS_LM_REC_ACT_MASK },
    { "LM_REC_DONE", AR_PI_DBG_LM0_PTRS_LM_REC_DONE_BP, AR_PI_DBG_LM0_PTRS_LM_REC_DONE_MASK },
    { "LM_MULT_EVENT", AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_BP, AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_MASK },
    { "LM_WR_AD_WRAP", AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_BP, AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK },
    { "LM_RD_PTR", AR_PI_DBG_LM0_PTRS_LM_RD_PTR_BP, AR_PI_DBG_LM0_PTRS_LM_RD_PTR_MASK },
    { "LM_WR_PTR", AR_PI_DBG_LM0_PTRS_LM_WR_PTR_BP, AR_PI_DBG_LM0_PTRS_LM_WR_PTR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_read_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM0_READ_LO_DATA_BP, AR_PI_DBG_LM0_READ_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_read_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM0_READ_MID_DATA_BP, AR_PI_DBG_LM0_READ_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_read_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM0_READ_HI_DATA_BP, AR_PI_DBG_LM0_READ_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_snap_sel_detail[] = {
    { "SEL", AR_PI_DBG_LM0_SNAP_SEL_SEL_BP, AR_PI_DBG_LM0_SNAP_SEL_SEL_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_snap_dlo_detail[] = {
    { "DATA", AR_PI_DBG_LM0_SNAP_DLO_DATA_BP, AR_PI_DBG_LM0_SNAP_DLO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_snap_dmid_detail[] = {
    { "DATA", AR_PI_DBG_LM0_SNAP_DMID_DATA_BP, AR_PI_DBG_LM0_SNAP_DMID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_snap_dhi_detail[] = {
    { "DATA", AR_PI_DBG_LM0_SNAP_DHI_DATA_BP, AR_PI_DBG_LM0_SNAP_DHI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_rem_trig_detail[] = {
    { "LM_ENABLE_FROM_MMR", AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_BP, AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_MASK },
    { "LM_ENABLE_FROM_PI", AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_BP, AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_MASK },
    { "LM_ENABLE_FROM_NIC", AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_BP, AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_trig_sts_detail[] = {
    { "REM_TRIG1_RCV_LAST", AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_BP, AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_MASK },
    { "REM_TRIG0_RCV_LAST", AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_BP, AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_MASK },
    { "REM_TRIG1_RCV_FIRST", AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_BP, AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK },
    { "REM_TRIG0_RCV_FIRST", AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_BP, AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK },
    { "REM_TRIG1_RCV", AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_BP, AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_MASK },
    { "REM_TRIG0_RCV", AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_BP, AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_MASK },
    { "LCL_TRIG1_RCV", AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_BP, AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_MASK },
    { "LCL_TRIG0_RCV", AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_BP, AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_errinj_lm0_detail[] = {
    { "ADDRESS", AR_PI_DBG_ERRINJ_LM0_ADDRESS_BP, AR_PI_DBG_ERRINJ_LM0_ADDRESS_MASK },
    { "PARITY", AR_PI_DBG_ERRINJ_LM0_PARITY_BP, AR_PI_DBG_ERRINJ_LM0_PARITY_MASK },
    { "TRIGGERED", AR_PI_DBG_ERRINJ_LM0_TRIGGERED_BP, AR_PI_DBG_ERRINJ_LM0_TRIGGERED_MASK },
    { "MODE", AR_PI_DBG_ERRINJ_LM0_MODE_BP, AR_PI_DBG_ERRINJ_LM0_MODE_MASK },
    { "ENABLE", AR_PI_DBG_ERRINJ_LM0_ENABLE_BP, AR_PI_DBG_ERRINJ_LM0_ENABLE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_err_info_lm0_perr_detail[] = {
    { "ADDRESS", AR_PI_ERR_INFO_LM0_PERR_ADDRESS_BP, AR_PI_ERR_INFO_LM0_PERR_ADDRESS_MASK },
    { "MMR_DETECTED_PERR", AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_BP, AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_err_info_lm0_perr_cnt_detail[] = {
    { "CNT", AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_BP, AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_cap_sel_detail[] = {
    { "DEN", AR_PI_DBG_LM0_CAP_SEL_DEN_BP, AR_PI_DBG_LM0_CAP_SEL_DEN_MASK },
    { "PII", AR_PI_DBG_LM0_CAP_SEL_PII_BP, AR_PI_DBG_LM0_CAP_SEL_PII_MASK },
    { "PMI", AR_PI_DBG_LM0_CAP_SEL_PMI_BP, AR_PI_DBG_LM0_CAP_SEL_PMI_MASK },
    { "PTI", AR_PI_DBG_LM0_CAP_SEL_PTI_BP, AR_PI_DBG_LM0_CAP_SEL_PTI_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t0_cmp_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T0_CMP_LO_DATA_BP, AR_PI_DBG_LM0_T0_CMP_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t0_cmp_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T0_CMP_MID_DATA_BP, AR_PI_DBG_LM0_T0_CMP_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t0_cmp_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T0_CMP_HI_DATA_BP, AR_PI_DBG_LM0_T0_CMP_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t0_mode_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T0_MODE_DATA_BP, AR_PI_DBG_LM0_T0_MODE_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t0_mask_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T0_MASK_LO_DATA_BP, AR_PI_DBG_LM0_T0_MASK_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t0_mask_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T0_MASK_MID_DATA_BP, AR_PI_DBG_LM0_T0_MASK_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t0_mask_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T0_MASK_HI_DATA_BP, AR_PI_DBG_LM0_T0_MASK_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_trig_sel_detail[] = {
    { "DEN", AR_PI_DBG_LM0_TRIG_SEL_DEN_BP, AR_PI_DBG_LM0_TRIG_SEL_DEN_MASK },
    { "PII", AR_PI_DBG_LM0_TRIG_SEL_PII_BP, AR_PI_DBG_LM0_TRIG_SEL_PII_MASK },
    { "PMI", AR_PI_DBG_LM0_TRIG_SEL_PMI_BP, AR_PI_DBG_LM0_TRIG_SEL_PMI_MASK },
    { "PTI", AR_PI_DBG_LM0_TRIG_SEL_PTI_BP, AR_PI_DBG_LM0_TRIG_SEL_PTI_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t1_cmp_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T1_CMP_LO_DATA_BP, AR_PI_DBG_LM0_T1_CMP_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t1_cmp_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T1_CMP_MID_DATA_BP, AR_PI_DBG_LM0_T1_CMP_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t1_cmp_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T1_CMP_HI_DATA_BP, AR_PI_DBG_LM0_T1_CMP_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t1_mode_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T1_MODE_DATA_BP, AR_PI_DBG_LM0_T1_MODE_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t1_mask_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T1_MASK_LO_DATA_BP, AR_PI_DBG_LM0_T1_MASK_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t1_mask_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T1_MASK_MID_DATA_BP, AR_PI_DBG_LM0_T1_MASK_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_t1_mask_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM0_T1_MASK_HI_DATA_BP, AR_PI_DBG_LM0_T1_MASK_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm0_mux_sel_detail[] = {
    { "PCLK_SEL1", AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_BP, AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_MASK },
    { "PCLK_SEL0", AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_BP, AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_MASK },
    { "CAP_SEL", AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_BP, AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_MASK },
    { "TRIG1_SEL", AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_BP, AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_MASK },
    { "TRIG0_SEL", AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_BP, AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_ctl_detail[] = {
    { "LM_RST", AR_PI_DBG_LM1_CTL_LM_RST_BP, AR_PI_DBG_LM1_CTL_LM_RST_MASK },
    { "LM_TRIG01_OCCURRED", AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_BP, AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_MASK },
    { "LM_TRIG1_OCCURRED", AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_BP, AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_MASK },
    { "LM_TRIG0_OCCURRED", AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_BP, AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_MASK },
    { "LM_CAP_STATE", AR_PI_DBG_LM1_CTL_LM_CAP_STATE_BP, AR_PI_DBG_LM1_CTL_LM_CAP_STATE_MASK },
    { "LM_CTL_T0_CNT", AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_BP, AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK },
    { "LM_CTL_T1_CNT", AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_BP, AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK },
    { "LM_CTL_MODE", AR_PI_DBG_LM1_CTL_LM_CTL_MODE_BP, AR_PI_DBG_LM1_CTL_LM_CTL_MODE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_ptrs_detail[] = {
    { "LM_REC_ACT", AR_PI_DBG_LM1_PTRS_LM_REC_ACT_BP, AR_PI_DBG_LM1_PTRS_LM_REC_ACT_MASK },
    { "LM_REC_DONE", AR_PI_DBG_LM1_PTRS_LM_REC_DONE_BP, AR_PI_DBG_LM1_PTRS_LM_REC_DONE_MASK },
    { "LM_MULT_EVENT", AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_BP, AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_MASK },
    { "LM_WR_AD_WRAP", AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_BP, AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK },
    { "LM_RD_PTR", AR_PI_DBG_LM1_PTRS_LM_RD_PTR_BP, AR_PI_DBG_LM1_PTRS_LM_RD_PTR_MASK },
    { "LM_WR_PTR", AR_PI_DBG_LM1_PTRS_LM_WR_PTR_BP, AR_PI_DBG_LM1_PTRS_LM_WR_PTR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_read_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM1_READ_LO_DATA_BP, AR_PI_DBG_LM1_READ_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_read_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM1_READ_MID_DATA_BP, AR_PI_DBG_LM1_READ_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_read_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM1_READ_HI_DATA_BP, AR_PI_DBG_LM1_READ_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_snap_sel_detail[] = {
    { "SEL", AR_PI_DBG_LM1_SNAP_SEL_SEL_BP, AR_PI_DBG_LM1_SNAP_SEL_SEL_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_snap_dlo_detail[] = {
    { "DATA", AR_PI_DBG_LM1_SNAP_DLO_DATA_BP, AR_PI_DBG_LM1_SNAP_DLO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_snap_dmid_detail[] = {
    { "DATA", AR_PI_DBG_LM1_SNAP_DMID_DATA_BP, AR_PI_DBG_LM1_SNAP_DMID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_snap_dhi_detail[] = {
    { "DATA", AR_PI_DBG_LM1_SNAP_DHI_DATA_BP, AR_PI_DBG_LM1_SNAP_DHI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_rem_trig_detail[] = {
    { "LM_ENABLE_FROM_MMR", AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_BP, AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_MASK },
    { "LM_ENABLE_FROM_PI", AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_BP, AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_MASK },
    { "LM_ENABLE_FROM_NIC", AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_BP, AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_trig_sts_detail[] = {
    { "REM_TRIG1_RCV_LAST", AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_BP, AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_MASK },
    { "REM_TRIG0_RCV_LAST", AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_BP, AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_MASK },
    { "REM_TRIG1_RCV_FIRST", AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_BP, AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK },
    { "REM_TRIG0_RCV_FIRST", AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_BP, AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK },
    { "REM_TRIG1_RCV", AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_BP, AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_MASK },
    { "REM_TRIG0_RCV", AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_BP, AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_MASK },
    { "LCL_TRIG1_RCV", AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_BP, AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_MASK },
    { "LCL_TRIG0_RCV", AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_BP, AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_errinj_lm1_detail[] = {
    { "ADDRESS", AR_PI_DBG_ERRINJ_LM1_ADDRESS_BP, AR_PI_DBG_ERRINJ_LM1_ADDRESS_MASK },
    { "PARITY", AR_PI_DBG_ERRINJ_LM1_PARITY_BP, AR_PI_DBG_ERRINJ_LM1_PARITY_MASK },
    { "TRIGGERED", AR_PI_DBG_ERRINJ_LM1_TRIGGERED_BP, AR_PI_DBG_ERRINJ_LM1_TRIGGERED_MASK },
    { "MODE", AR_PI_DBG_ERRINJ_LM1_MODE_BP, AR_PI_DBG_ERRINJ_LM1_MODE_MASK },
    { "ENABLE", AR_PI_DBG_ERRINJ_LM1_ENABLE_BP, AR_PI_DBG_ERRINJ_LM1_ENABLE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_err_info_lm1_perr_detail[] = {
    { "ADDRESS", AR_PI_ERR_INFO_LM1_PERR_ADDRESS_BP, AR_PI_ERR_INFO_LM1_PERR_ADDRESS_MASK },
    { "MMR_DETECTED_PERR", AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_BP, AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_err_info_lm1_perr_cnt_detail[] = {
    { "CNT", AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_BP, AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_cap_sel_detail[] = {
    { "DEN", AR_PI_DBG_LM1_CAP_SEL_DEN_BP, AR_PI_DBG_LM1_CAP_SEL_DEN_MASK },
    { "PII", AR_PI_DBG_LM1_CAP_SEL_PII_BP, AR_PI_DBG_LM1_CAP_SEL_PII_MASK },
    { "PMI", AR_PI_DBG_LM1_CAP_SEL_PMI_BP, AR_PI_DBG_LM1_CAP_SEL_PMI_MASK },
    { "PTI", AR_PI_DBG_LM1_CAP_SEL_PTI_BP, AR_PI_DBG_LM1_CAP_SEL_PTI_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t0_cmp_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T0_CMP_LO_DATA_BP, AR_PI_DBG_LM1_T0_CMP_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t0_cmp_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T0_CMP_MID_DATA_BP, AR_PI_DBG_LM1_T0_CMP_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t0_cmp_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T0_CMP_HI_DATA_BP, AR_PI_DBG_LM1_T0_CMP_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t0_mode_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T0_MODE_DATA_BP, AR_PI_DBG_LM1_T0_MODE_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t0_mask_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T0_MASK_LO_DATA_BP, AR_PI_DBG_LM1_T0_MASK_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t0_mask_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T0_MASK_MID_DATA_BP, AR_PI_DBG_LM1_T0_MASK_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t0_mask_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T0_MASK_HI_DATA_BP, AR_PI_DBG_LM1_T0_MASK_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_trig_sel_detail[] = {
    { "DEN", AR_PI_DBG_LM1_TRIG_SEL_DEN_BP, AR_PI_DBG_LM1_TRIG_SEL_DEN_MASK },
    { "PII", AR_PI_DBG_LM1_TRIG_SEL_PII_BP, AR_PI_DBG_LM1_TRIG_SEL_PII_MASK },
    { "PMI", AR_PI_DBG_LM1_TRIG_SEL_PMI_BP, AR_PI_DBG_LM1_TRIG_SEL_PMI_MASK },
    { "PTI", AR_PI_DBG_LM1_TRIG_SEL_PTI_BP, AR_PI_DBG_LM1_TRIG_SEL_PTI_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t1_cmp_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T1_CMP_LO_DATA_BP, AR_PI_DBG_LM1_T1_CMP_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t1_cmp_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T1_CMP_MID_DATA_BP, AR_PI_DBG_LM1_T1_CMP_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t1_cmp_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T1_CMP_HI_DATA_BP, AR_PI_DBG_LM1_T1_CMP_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t1_mode_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T1_MODE_DATA_BP, AR_PI_DBG_LM1_T1_MODE_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t1_mask_lo_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T1_MASK_LO_DATA_BP, AR_PI_DBG_LM1_T1_MASK_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t1_mask_mid_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T1_MASK_MID_DATA_BP, AR_PI_DBG_LM1_T1_MASK_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_t1_mask_hi_detail[] = {
    { "DATA", AR_PI_DBG_LM1_T1_MASK_HI_DATA_BP, AR_PI_DBG_LM1_T1_MASK_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_pi_dbg_lm1_mux_sel_detail[] = {
    { "PCLK_SEL1", AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_BP, AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_MASK },
    { "PCLK_SEL0", AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_BP, AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_MASK },
    { "CAP_SEL", AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_BP, AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_MASK },
    { "TRIG1_SEL", AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_BP, AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_MASK },
    { "TRIG0_SEL", AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_BP, AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_MASK },
    { NULL, 0, 0 }
};

/*
 *  AR PI_LM MMR DECLARATIONS
 */
static const generic_mmr_t _ar_pi_dbg_lm0_ctl = {
    "AR_PI_DBG_LM0_CTL", AR_PI_DBG_LM0_CTL, 8, 1, _ar_pi_dbg_lm0_ctl_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_ptrs = {
    "AR_PI_DBG_LM0_PTRS", AR_PI_DBG_LM0_PTRS, 8, 1, _ar_pi_dbg_lm0_ptrs_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_read_lo = {
    "AR_PI_DBG_LM0_READ_LO", AR_PI_DBG_LM0_READ_LO, 8, 1, _ar_pi_dbg_lm0_read_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_read_mid = {
    "AR_PI_DBG_LM0_READ_MID", AR_PI_DBG_LM0_READ_MID, 8, 1, _ar_pi_dbg_lm0_read_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_read_hi = {
    "AR_PI_DBG_LM0_READ_HI", AR_PI_DBG_LM0_READ_HI, 8, 1, _ar_pi_dbg_lm0_read_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_snap_sel = {
    "AR_PI_DBG_LM0_SNAP_SEL", AR_PI_DBG_LM0_SNAP_SEL, 8, 1, _ar_pi_dbg_lm0_snap_sel_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_snap_dlo = {
    "AR_PI_DBG_LM0_SNAP_DLO", AR_PI_DBG_LM0_SNAP_DLO, 8, 1, _ar_pi_dbg_lm0_snap_dlo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_snap_dmid = {
    "AR_PI_DBG_LM0_SNAP_DMID", AR_PI_DBG_LM0_SNAP_DMID, 8, 1, _ar_pi_dbg_lm0_snap_dmid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_snap_dhi = {
    "AR_PI_DBG_LM0_SNAP_DHI", AR_PI_DBG_LM0_SNAP_DHI, 8, 1, _ar_pi_dbg_lm0_snap_dhi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_rem_trig = {
    "AR_PI_DBG_LM0_REM_TRIG", AR_PI_DBG_LM0_REM_TRIG, 8, 1, _ar_pi_dbg_lm0_rem_trig_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_trig_sts = {
    "AR_PI_DBG_LM0_TRIG_STS", AR_PI_DBG_LM0_TRIG_STS, 8, 1, _ar_pi_dbg_lm0_trig_sts_detail
};
static const generic_mmr_t _ar_pi_dbg_errinj_lm0 = {
    "AR_PI_DBG_ERRINJ_LM0", AR_PI_DBG_ERRINJ_LM0, 8, 1, _ar_pi_dbg_errinj_lm0_detail
};
static const generic_mmr_t _ar_pi_err_info_lm0_perr = {
    "AR_PI_ERR_INFO_LM0_PERR", AR_PI_ERR_INFO_LM0_PERR, 8, 1, _ar_pi_err_info_lm0_perr_detail
};
static const generic_mmr_t _ar_pi_err_info_lm0_perr_cnt = {
    "AR_PI_ERR_INFO_LM0_PERR_CNT", AR_PI_ERR_INFO_LM0_PERR_CNT, 8, 1, _ar_pi_err_info_lm0_perr_cnt_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_cap_sel = {
    "AR_PI_DBG_LM0_CAP_SEL", AR_PI_DBG_LM0_CAP_SEL, 8, 1, _ar_pi_dbg_lm0_cap_sel_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t0_cmp_lo = {
    "AR_PI_DBG_LM0_T0_CMP_LO", AR_PI_DBG_LM0_T0_CMP_LO, 8, 1, _ar_pi_dbg_lm0_t0_cmp_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t0_cmp_mid = {
    "AR_PI_DBG_LM0_T0_CMP_MID", AR_PI_DBG_LM0_T0_CMP_MID, 8, 1, _ar_pi_dbg_lm0_t0_cmp_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t0_cmp_hi = {
    "AR_PI_DBG_LM0_T0_CMP_HI", AR_PI_DBG_LM0_T0_CMP_HI, 8, 1, _ar_pi_dbg_lm0_t0_cmp_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t0_mode = {
    "AR_PI_DBG_LM0_T0_MODE", AR_PI_DBG_LM0_T0_MODE, 8, 1, _ar_pi_dbg_lm0_t0_mode_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t0_mask_lo = {
    "AR_PI_DBG_LM0_T0_MASK_LO", AR_PI_DBG_LM0_T0_MASK_LO, 8, 1, _ar_pi_dbg_lm0_t0_mask_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t0_mask_mid = {
    "AR_PI_DBG_LM0_T0_MASK_MID", AR_PI_DBG_LM0_T0_MASK_MID, 8, 1, _ar_pi_dbg_lm0_t0_mask_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t0_mask_hi = {
    "AR_PI_DBG_LM0_T0_MASK_HI", AR_PI_DBG_LM0_T0_MASK_HI, 8, 1, _ar_pi_dbg_lm0_t0_mask_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_trig_sel = {
    "AR_PI_DBG_LM0_TRIG_SEL", AR_PI_DBG_LM0_TRIG_SEL, 8, 1, _ar_pi_dbg_lm0_trig_sel_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t1_cmp_lo = {
    "AR_PI_DBG_LM0_T1_CMP_LO", AR_PI_DBG_LM0_T1_CMP_LO, 8, 1, _ar_pi_dbg_lm0_t1_cmp_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t1_cmp_mid = {
    "AR_PI_DBG_LM0_T1_CMP_MID", AR_PI_DBG_LM0_T1_CMP_MID, 8, 1, _ar_pi_dbg_lm0_t1_cmp_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t1_cmp_hi = {
    "AR_PI_DBG_LM0_T1_CMP_HI", AR_PI_DBG_LM0_T1_CMP_HI, 8, 1, _ar_pi_dbg_lm0_t1_cmp_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t1_mode = {
    "AR_PI_DBG_LM0_T1_MODE", AR_PI_DBG_LM0_T1_MODE, 8, 1, _ar_pi_dbg_lm0_t1_mode_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t1_mask_lo = {
    "AR_PI_DBG_LM0_T1_MASK_LO", AR_PI_DBG_LM0_T1_MASK_LO, 8, 1, _ar_pi_dbg_lm0_t1_mask_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t1_mask_mid = {
    "AR_PI_DBG_LM0_T1_MASK_MID", AR_PI_DBG_LM0_T1_MASK_MID, 8, 1, _ar_pi_dbg_lm0_t1_mask_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_t1_mask_hi = {
    "AR_PI_DBG_LM0_T1_MASK_HI", AR_PI_DBG_LM0_T1_MASK_HI, 8, 1, _ar_pi_dbg_lm0_t1_mask_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm0_mux_sel = {
    "AR_PI_DBG_LM0_MUX_SEL", AR_PI_DBG_LM0_MUX_SEL, 8, 1, _ar_pi_dbg_lm0_mux_sel_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_ctl = {
    "AR_PI_DBG_LM1_CTL", AR_PI_DBG_LM1_CTL, 8, 1, _ar_pi_dbg_lm1_ctl_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_ptrs = {
    "AR_PI_DBG_LM1_PTRS", AR_PI_DBG_LM1_PTRS, 8, 1, _ar_pi_dbg_lm1_ptrs_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_read_lo = {
    "AR_PI_DBG_LM1_READ_LO", AR_PI_DBG_LM1_READ_LO, 8, 1, _ar_pi_dbg_lm1_read_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_read_mid = {
    "AR_PI_DBG_LM1_READ_MID", AR_PI_DBG_LM1_READ_MID, 8, 1, _ar_pi_dbg_lm1_read_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_read_hi = {
    "AR_PI_DBG_LM1_READ_HI", AR_PI_DBG_LM1_READ_HI, 8, 1, _ar_pi_dbg_lm1_read_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_snap_sel = {
    "AR_PI_DBG_LM1_SNAP_SEL", AR_PI_DBG_LM1_SNAP_SEL, 8, 1, _ar_pi_dbg_lm1_snap_sel_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_snap_dlo = {
    "AR_PI_DBG_LM1_SNAP_DLO", AR_PI_DBG_LM1_SNAP_DLO, 8, 1, _ar_pi_dbg_lm1_snap_dlo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_snap_dmid = {
    "AR_PI_DBG_LM1_SNAP_DMID", AR_PI_DBG_LM1_SNAP_DMID, 8, 1, _ar_pi_dbg_lm1_snap_dmid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_snap_dhi = {
    "AR_PI_DBG_LM1_SNAP_DHI", AR_PI_DBG_LM1_SNAP_DHI, 8, 1, _ar_pi_dbg_lm1_snap_dhi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_rem_trig = {
    "AR_PI_DBG_LM1_REM_TRIG", AR_PI_DBG_LM1_REM_TRIG, 8, 1, _ar_pi_dbg_lm1_rem_trig_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_trig_sts = {
    "AR_PI_DBG_LM1_TRIG_STS", AR_PI_DBG_LM1_TRIG_STS, 8, 1, _ar_pi_dbg_lm1_trig_sts_detail
};
static const generic_mmr_t _ar_pi_dbg_errinj_lm1 = {
    "AR_PI_DBG_ERRINJ_LM1", AR_PI_DBG_ERRINJ_LM1, 8, 1, _ar_pi_dbg_errinj_lm1_detail
};
static const generic_mmr_t _ar_pi_err_info_lm1_perr = {
    "AR_PI_ERR_INFO_LM1_PERR", AR_PI_ERR_INFO_LM1_PERR, 8, 1, _ar_pi_err_info_lm1_perr_detail
};
static const generic_mmr_t _ar_pi_err_info_lm1_perr_cnt = {
    "AR_PI_ERR_INFO_LM1_PERR_CNT", AR_PI_ERR_INFO_LM1_PERR_CNT, 8, 1, _ar_pi_err_info_lm1_perr_cnt_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_cap_sel = {
    "AR_PI_DBG_LM1_CAP_SEL", AR_PI_DBG_LM1_CAP_SEL, 8, 1, _ar_pi_dbg_lm1_cap_sel_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t0_cmp_lo = {
    "AR_PI_DBG_LM1_T0_CMP_LO", AR_PI_DBG_LM1_T0_CMP_LO, 8, 1, _ar_pi_dbg_lm1_t0_cmp_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t0_cmp_mid = {
    "AR_PI_DBG_LM1_T0_CMP_MID", AR_PI_DBG_LM1_T0_CMP_MID, 8, 1, _ar_pi_dbg_lm1_t0_cmp_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t0_cmp_hi = {
    "AR_PI_DBG_LM1_T0_CMP_HI", AR_PI_DBG_LM1_T0_CMP_HI, 8, 1, _ar_pi_dbg_lm1_t0_cmp_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t0_mode = {
    "AR_PI_DBG_LM1_T0_MODE", AR_PI_DBG_LM1_T0_MODE, 8, 1, _ar_pi_dbg_lm1_t0_mode_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t0_mask_lo = {
    "AR_PI_DBG_LM1_T0_MASK_LO", AR_PI_DBG_LM1_T0_MASK_LO, 8, 1, _ar_pi_dbg_lm1_t0_mask_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t0_mask_mid = {
    "AR_PI_DBG_LM1_T0_MASK_MID", AR_PI_DBG_LM1_T0_MASK_MID, 8, 1, _ar_pi_dbg_lm1_t0_mask_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t0_mask_hi = {
    "AR_PI_DBG_LM1_T0_MASK_HI", AR_PI_DBG_LM1_T0_MASK_HI, 8, 1, _ar_pi_dbg_lm1_t0_mask_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_trig_sel = {
    "AR_PI_DBG_LM1_TRIG_SEL", AR_PI_DBG_LM1_TRIG_SEL, 8, 1, _ar_pi_dbg_lm1_trig_sel_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t1_cmp_lo = {
    "AR_PI_DBG_LM1_T1_CMP_LO", AR_PI_DBG_LM1_T1_CMP_LO, 8, 1, _ar_pi_dbg_lm1_t1_cmp_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t1_cmp_mid = {
    "AR_PI_DBG_LM1_T1_CMP_MID", AR_PI_DBG_LM1_T1_CMP_MID, 8, 1, _ar_pi_dbg_lm1_t1_cmp_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t1_cmp_hi = {
    "AR_PI_DBG_LM1_T1_CMP_HI", AR_PI_DBG_LM1_T1_CMP_HI, 8, 1, _ar_pi_dbg_lm1_t1_cmp_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t1_mode = {
    "AR_PI_DBG_LM1_T1_MODE", AR_PI_DBG_LM1_T1_MODE, 8, 1, _ar_pi_dbg_lm1_t1_mode_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t1_mask_lo = {
    "AR_PI_DBG_LM1_T1_MASK_LO", AR_PI_DBG_LM1_T1_MASK_LO, 8, 1, _ar_pi_dbg_lm1_t1_mask_lo_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t1_mask_mid = {
    "AR_PI_DBG_LM1_T1_MASK_MID", AR_PI_DBG_LM1_T1_MASK_MID, 8, 1, _ar_pi_dbg_lm1_t1_mask_mid_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_t1_mask_hi = {
    "AR_PI_DBG_LM1_T1_MASK_HI", AR_PI_DBG_LM1_T1_MASK_HI, 8, 1, _ar_pi_dbg_lm1_t1_mask_hi_detail
};
static const generic_mmr_t _ar_pi_dbg_lm1_mux_sel = {
    "AR_PI_DBG_LM1_MUX_SEL", AR_PI_DBG_LM1_MUX_SEL, 8, 1, _ar_pi_dbg_lm1_mux_sel_detail
};

/*
 *  INSTALL AR PI_LM MMRS
 */
static const generic_mmr_t* _ar_pi_lm_mmrs[] _unused = {
    &_ar_pi_dbg_lm0_ctl,
    &_ar_pi_dbg_lm0_ptrs,
    &_ar_pi_dbg_lm0_read_lo,
    &_ar_pi_dbg_lm0_read_mid,
    &_ar_pi_dbg_lm0_read_hi,
    &_ar_pi_dbg_lm0_snap_sel,
    &_ar_pi_dbg_lm0_snap_dlo,
    &_ar_pi_dbg_lm0_snap_dmid,
    &_ar_pi_dbg_lm0_snap_dhi,
    &_ar_pi_dbg_lm0_rem_trig,
    &_ar_pi_dbg_lm0_trig_sts,
    &_ar_pi_dbg_errinj_lm0,
    &_ar_pi_err_info_lm0_perr,
    &_ar_pi_err_info_lm0_perr_cnt,
    &_ar_pi_dbg_lm0_cap_sel,
    &_ar_pi_dbg_lm0_t0_cmp_lo,
    &_ar_pi_dbg_lm0_t0_cmp_mid,
    &_ar_pi_dbg_lm0_t0_cmp_hi,
    &_ar_pi_dbg_lm0_t0_mode,
    &_ar_pi_dbg_lm0_t0_mask_lo,
    &_ar_pi_dbg_lm0_t0_mask_mid,
    &_ar_pi_dbg_lm0_t0_mask_hi,
    &_ar_pi_dbg_lm0_trig_sel,
    &_ar_pi_dbg_lm0_t1_cmp_lo,
    &_ar_pi_dbg_lm0_t1_cmp_mid,
    &_ar_pi_dbg_lm0_t1_cmp_hi,
    &_ar_pi_dbg_lm0_t1_mode,
    &_ar_pi_dbg_lm0_t1_mask_lo,
    &_ar_pi_dbg_lm0_t1_mask_mid,
    &_ar_pi_dbg_lm0_t1_mask_hi,
    &_ar_pi_dbg_lm0_mux_sel,
    &_ar_pi_dbg_lm1_ctl,
    &_ar_pi_dbg_lm1_ptrs,
    &_ar_pi_dbg_lm1_read_lo,
    &_ar_pi_dbg_lm1_read_mid,
    &_ar_pi_dbg_lm1_read_hi,
    &_ar_pi_dbg_lm1_snap_sel,
    &_ar_pi_dbg_lm1_snap_dlo,
    &_ar_pi_dbg_lm1_snap_dmid,
    &_ar_pi_dbg_lm1_snap_dhi,
    &_ar_pi_dbg_lm1_rem_trig,
    &_ar_pi_dbg_lm1_trig_sts,
    &_ar_pi_dbg_errinj_lm1,
    &_ar_pi_err_info_lm1_perr,
    &_ar_pi_err_info_lm1_perr_cnt,
    &_ar_pi_dbg_lm1_cap_sel,
    &_ar_pi_dbg_lm1_t0_cmp_lo,
    &_ar_pi_dbg_lm1_t0_cmp_mid,
    &_ar_pi_dbg_lm1_t0_cmp_hi,
    &_ar_pi_dbg_lm1_t0_mode,
    &_ar_pi_dbg_lm1_t0_mask_lo,
    &_ar_pi_dbg_lm1_t0_mask_mid,
    &_ar_pi_dbg_lm1_t0_mask_hi,
    &_ar_pi_dbg_lm1_trig_sel,
    &_ar_pi_dbg_lm1_t1_cmp_lo,
    &_ar_pi_dbg_lm1_t1_cmp_mid,
    &_ar_pi_dbg_lm1_t1_cmp_hi,
    &_ar_pi_dbg_lm1_t1_mode,
    &_ar_pi_dbg_lm1_t1_mask_lo,
    &_ar_pi_dbg_lm1_t1_mask_mid,
    &_ar_pi_dbg_lm1_t1_mask_hi,
    &_ar_pi_dbg_lm1_mux_sel,
    NULL
};

#endif
