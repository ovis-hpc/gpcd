/******************************************************************************
 * COPYRIGHT CRAY INC. ar_rspmon_mmrs_h.h
 * FILE: ar_rspmon_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:02 2014
 ******************************************************************************/

#ifndef _AR_RSPMON_MMRS_H_H_
#define _AR_RSPMON_MMRS_H_H_

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

static const generic_mmr_t* _ar_rspmon_mmrs[] _unused;	/* RSPMON Array */

/*
 *  AR RSPMON MMR DETAIL DECLARATIONS
 */
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t0_cmp_lo_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_DATA_BP, AR_NIC_RSPMON_DBG_LM_T0_CMP_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_mmr_ring_0_hi_rspmon_detail[] = {
    { "UNUSED_145_84", AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_UNUSED_145_84_BP, AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON_UNUSED_145_84_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_mmr_ring_0_mid_rspmon_detail[] = {
    { "UNUSED_145_84", AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_145_84_BP, AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_145_84_MASK },
    { "INC_TRIGGER1", AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER1_BP, AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER1_MASK },
    { "INC_TRIGGER0", AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER0_BP, AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_INC_TRIGGER0_MASK },
    { "UNUSED_81_36", AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_81_36_BP, AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON_UNUSED_81_36_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_mmr_ring_0_lo_rspmon_detail[] = {
    { "UNUSED_81_36", AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_UNUSED_81_36_BP, AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_UNUSED_81_36_MASK },
    { "R_Q_RSPMON_NICLM_OS_IRQ", AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_OS_IRQ_BP, AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_OS_IRQ_MASK },
    { "R_Q_RSPMON_NICLM_HSS_IRQ", AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_HSS_IRQ_BP, AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_HSS_IRQ_MASK },
    { "R_Q_RSPMON_NICLM_RING_WRACK", AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_WRACK_BP, AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_WRACK_MASK },
    { "R_Q_RSPMON_NICLM_RING_15_0", AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_15_0_BP, AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_R_Q_RSPMON_NICLM_RING_15_0_MASK },
    { "I_NICLM_RSPMON_RING_15_0", AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_I_NICLM_RSPMON_RING_15_0_BP, AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON_I_NICLM_RSPMON_RING_15_0_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_detail[] = {
    { "UNUSED_145_69", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_UNUSED_145_69_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON_UNUSED_145_69_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_detail[] = {
    { "UNUSED_145_69", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_UNUSED_145_69_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_UNUSED_145_69_MASK },
    { "ERR_REG_TRIGGER1", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER1_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER1_MASK },
    { "ERR_REG_TRIGGER0", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER0_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_TRIGGER0_MASK },
    { "ERR_REG_PERR", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_PERR_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_PERR_MASK },
    { "ERR_REG_CNTR_ROLLOVER", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_CNTR_ROLLOVER_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_CNTR_ROLLOVER_MASK },
    { "ERR_REG_DIAG_ONLY", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_DIAG_ONLY_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON_ERR_REG_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_mmr_err_flags_1_lo_rspmon_detail[] = {
    { "UNUSED_63_5", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_63_5_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_63_5_MASK },
    { "ERR_IN_TRIGGER1", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER1_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER1_MASK },
    { "ERR_IN_TRIGGER0", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER0_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_TRIGGER0_MASK },
    { "ERR_IN_PERR", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_PERR_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_PERR_MASK },
    { "ERR_IN_CNTR_ROLLOVER", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_CNTR_ROLLOVER_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_ERR_IN_CNTR_ROLLOVER_MASK },
    { "UNUSED_0", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_0_BP, AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON_UNUSED_0_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t0_cmp_mid_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_DATA_BP, AR_NIC_RSPMON_DBG_LM_T0_CMP_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t0_cmp_hi_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_DATA_BP, AR_NIC_RSPMON_DBG_LM_T0_CMP_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t0_mode_detail[] = {
    { "MODE", AR_NIC_RSPMON_DBG_LM_T0_MODE_MODE_BP, AR_NIC_RSPMON_DBG_LM_T0_MODE_MODE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t0_mask_lo_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_DATA_BP, AR_NIC_RSPMON_DBG_LM_T0_MASK_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t0_mask_mid_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_DATA_BP, AR_NIC_RSPMON_DBG_LM_T0_MASK_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t0_mask_hi_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_DATA_BP, AR_NIC_RSPMON_DBG_LM_T0_MASK_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t1_cmp_lo_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_DATA_BP, AR_NIC_RSPMON_DBG_LM_T1_CMP_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t1_cmp_mid_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_DATA_BP, AR_NIC_RSPMON_DBG_LM_T1_CMP_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t1_cmp_hi_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_DATA_BP, AR_NIC_RSPMON_DBG_LM_T1_CMP_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t1_mode_detail[] = {
    { "MODE", AR_NIC_RSPMON_DBG_LM_T1_MODE_MODE_BP, AR_NIC_RSPMON_DBG_LM_T1_MODE_MODE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t1_mask_lo_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_DATA_BP, AR_NIC_RSPMON_DBG_LM_T1_MASK_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t1_mask_mid_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_DATA_BP, AR_NIC_RSPMON_DBG_LM_T1_MASK_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_t1_mask_hi_detail[] = {
    { "DATA", AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_DATA_BP, AR_NIC_RSPMON_DBG_LM_T1_MASK_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_mux_sel_detail[] = {
    { "LM_CAP1_SEL", AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP1_SEL_BP, AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP1_SEL_MASK },
    { "LM_CAP0_SEL", AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP0_SEL_BP, AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_CAP0_SEL_MASK },
    { "LM_TRIG1_SEL", AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG1_SEL_BP, AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG1_SEL_MASK },
    { "LM_TRIG0_SEL", AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG0_SEL_BP, AR_NIC_RSPMON_DBG_LM_MUX_SEL_LM_TRIG0_SEL_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_lm_blk_sel_detail[] = {
    { "LM_CAP1_BUS", AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BUS_BP, AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BUS_MASK },
    { "LM_CAP1_BLK", AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BLK_BP, AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP1_BLK_MASK },
    { "LM_CAP0_BUS", AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BUS_BP, AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BUS_MASK },
    { "LM_CAP0_BLK", AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BLK_BP, AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_CAP0_BLK_MASK },
    { "LM_TRIG1_BUS", AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BUS_BP, AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BUS_MASK },
    { "LM_TRIG1_BLK", AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BLK_BP, AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG1_BLK_MASK },
    { "LM_TRIG0_BUS", AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BUS_BP, AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BUS_MASK },
    { "LM_TRIG0_BLK", AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BLK_BP, AR_NIC_RSPMON_DBG_LM_BLK_SEL_LM_TRIG0_BLK_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_err_flg_detail[] = {
    { "TRIGGER1", AR_NIC_RSPMON_ERR_FLG_TRIGGER1_BP, AR_NIC_RSPMON_ERR_FLG_TRIGGER1_MASK },
    { "TRIGGER0", AR_NIC_RSPMON_ERR_FLG_TRIGGER0_BP, AR_NIC_RSPMON_ERR_FLG_TRIGGER0_MASK },
    { "CNTR_PERR", AR_NIC_RSPMON_ERR_FLG_CNTR_PERR_BP, AR_NIC_RSPMON_ERR_FLG_CNTR_PERR_MASK },
    { "CNTR_ROLLOVER", AR_NIC_RSPMON_ERR_FLG_CNTR_ROLLOVER_BP, AR_NIC_RSPMON_ERR_FLG_CNTR_ROLLOVER_MASK },
    { "DIAG_ONLY", AR_NIC_RSPMON_ERR_FLG_DIAG_ONLY_BP, AR_NIC_RSPMON_ERR_FLG_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};
#ifdef EXCEPTIONS_DEFS
static const errcat_mmrd_t _ar_nic_rspmon_err_flg_errcat[] = {
    { "TRIGGER1", AR_NIC_RSPMON_ERR_FLG_TRIGGER1_BP, AR_NIC_RSPMON_ERR_FLG_TRIGGER1_EC },
    { "TRIGGER0", AR_NIC_RSPMON_ERR_FLG_TRIGGER0_BP, AR_NIC_RSPMON_ERR_FLG_TRIGGER0_EC },
    { "CNTR_PERR", AR_NIC_RSPMON_ERR_FLG_CNTR_PERR_BP, AR_NIC_RSPMON_ERR_FLG_CNTR_PERR_EC },
    { "CNTR_ROLLOVER", AR_NIC_RSPMON_ERR_FLG_CNTR_ROLLOVER_BP, AR_NIC_RSPMON_ERR_FLG_CNTR_ROLLOVER_EC },
    { "DIAG_ONLY", AR_NIC_RSPMON_ERR_FLG_DIAG_ONLY_BP, AR_NIC_RSPMON_ERR_FLG_DIAG_ONLY_EC },
    { NULL, 0, 0 }
};
#endif
static const generic_mmrd_t _ar_nic_rspmon_err_clr_detail[] = {
    { "TRIGGER1", AR_NIC_RSPMON_ERR_CLR_TRIGGER1_BP, AR_NIC_RSPMON_ERR_CLR_TRIGGER1_MASK },
    { "TRIGGER0", AR_NIC_RSPMON_ERR_CLR_TRIGGER0_BP, AR_NIC_RSPMON_ERR_CLR_TRIGGER0_MASK },
    { "CNTR_PERR", AR_NIC_RSPMON_ERR_CLR_CNTR_PERR_BP, AR_NIC_RSPMON_ERR_CLR_CNTR_PERR_MASK },
    { "CNTR_ROLLOVER", AR_NIC_RSPMON_ERR_CLR_CNTR_ROLLOVER_BP, AR_NIC_RSPMON_ERR_CLR_CNTR_ROLLOVER_MASK },
    { "DIAG_ONLY", AR_NIC_RSPMON_ERR_CLR_DIAG_ONLY_BP, AR_NIC_RSPMON_ERR_CLR_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_err_hss_msk_detail[] = {
    { "TRIGGER1", AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER1_BP, AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER1_MASK },
    { "TRIGGER0", AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER0_BP, AR_NIC_RSPMON_ERR_HSS_MSK_TRIGGER0_MASK },
    { "CNTR_PERR", AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_PERR_BP, AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_PERR_MASK },
    { "CNTR_ROLLOVER", AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_ROLLOVER_BP, AR_NIC_RSPMON_ERR_HSS_MSK_CNTR_ROLLOVER_MASK },
    { "DIAG_ONLY", AR_NIC_RSPMON_ERR_HSS_MSK_DIAG_ONLY_BP, AR_NIC_RSPMON_ERR_HSS_MSK_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_err_os_msk_detail[] = {
    { "TRIGGER1", AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER1_BP, AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER1_MASK },
    { "TRIGGER0", AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER0_BP, AR_NIC_RSPMON_ERR_OS_MSK_TRIGGER0_MASK },
    { "CNTR_PERR", AR_NIC_RSPMON_ERR_OS_MSK_CNTR_PERR_BP, AR_NIC_RSPMON_ERR_OS_MSK_CNTR_PERR_MASK },
    { "CNTR_ROLLOVER", AR_NIC_RSPMON_ERR_OS_MSK_CNTR_ROLLOVER_BP, AR_NIC_RSPMON_ERR_OS_MSK_CNTR_ROLLOVER_MASK },
    { "DIAG_ONLY", AR_NIC_RSPMON_ERR_OS_MSK_DIAG_ONLY_BP, AR_NIC_RSPMON_ERR_OS_MSK_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_err_first_flg_detail[] = {
    { "TRIGGER1", AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER1_BP, AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER1_MASK },
    { "TRIGGER0", AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER0_BP, AR_NIC_RSPMON_ERR_FIRST_FLG_TRIGGER0_MASK },
    { "CNTR_PERR", AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_PERR_BP, AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_PERR_MASK },
    { "CNTR_ROLLOVER", AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_ROLLOVER_BP, AR_NIC_RSPMON_ERR_FIRST_FLG_CNTR_ROLLOVER_MASK },
    { "DIAG_ONLY", AR_NIC_RSPMON_ERR_FIRST_FLG_DIAG_ONLY_BP, AR_NIC_RSPMON_ERR_FIRST_FLG_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_dbg_errinj_cntr_perr_detail[] = {
    { "ADDRESS", AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ADDRESS_BP, AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ADDRESS_MASK },
    { "CHECKBITS", AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_CHECKBITS_BP, AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_CHECKBITS_MASK },
    { "TRIGGERED", AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_TRIGGERED_BP, AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_TRIGGERED_MASK },
    { "MODE", AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_MODE_BP, AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_MODE_MASK },
    { "ENABLE", AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ENABLE_BP, AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR_ENABLE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_err_info_cntr_perr_detail[] = {
    { "ADDRESS", AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_ADDRESS_BP, AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_ADDRESS_MASK },
    { "MMR_DETECTED_PERR", AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_BP, AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_err_info_cntr_perr_cnt_detail[] = {
    { "PERR_COUNT", AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_BP, AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nic_rspmon_prf_event_cntr_ctrl_detail[] = {
    { "DISABLE_AUTO_UPDATE", AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_BP, AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_MASK },
    { "ENABLE", AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_ENABLE_BP, AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_ENABLE_MASK },
    { "CLEAR", AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_CLEAR_BP, AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_CLEAR_MASK },
    { "COUNTERS_CLEAR", AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_BP, AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_MASK },
    { NULL, 0, 0 }
};

/*
 *  AR RSPMON MMR DECLARATIONS
 */
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t0_cmp_lo = {
    "AR_NIC_RSPMON_DBG_LM_T0_CMP_LO", AR_NIC_RSPMON_DBG_LM_T0_CMP_LO, 8, 1, _ar_nic_rspmon_dbg_lm_t0_cmp_lo_detail
};
static const generic_mmr_t _ar_nic_rspmon_mmr_ring_0_hi_rspmon = {
    "AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON", AR_NIC_RSPMON_MMR_RING_0_HI_RSPMON, 8, 1, _ar_nic_rspmon_mmr_ring_0_hi_rspmon_detail
};
static const generic_mmr_t _ar_nic_rspmon_mmr_ring_0_mid_rspmon = {
    "AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON", AR_NIC_RSPMON_MMR_RING_0_MID_RSPMON, 8, 1, _ar_nic_rspmon_mmr_ring_0_mid_rspmon_detail
};
static const generic_mmr_t _ar_nic_rspmon_mmr_ring_0_lo_rspmon = {
    "AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON", AR_NIC_RSPMON_MMR_RING_0_LO_RSPMON, 8, 1, _ar_nic_rspmon_mmr_ring_0_lo_rspmon_detail
};
static const generic_mmr_t _ar_nic_rspmon_mmr_err_flags_1_hi_rspmon = {
    "AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_HI_RSPMON, 8, 1, _ar_nic_rspmon_mmr_err_flags_1_hi_rspmon_detail
};
static const generic_mmr_t _ar_nic_rspmon_mmr_err_flags_1_mid_rspmon = {
    "AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_MID_RSPMON, 8, 1, _ar_nic_rspmon_mmr_err_flags_1_mid_rspmon_detail
};
static const generic_mmr_t _ar_nic_rspmon_mmr_err_flags_1_lo_rspmon = {
    "AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON", AR_NIC_RSPMON_MMR_ERR_FLAGS_1_LO_RSPMON, 8, 1, _ar_nic_rspmon_mmr_err_flags_1_lo_rspmon_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t0_cmp_mid = {
    "AR_NIC_RSPMON_DBG_LM_T0_CMP_MID", AR_NIC_RSPMON_DBG_LM_T0_CMP_MID, 8, 1, _ar_nic_rspmon_dbg_lm_t0_cmp_mid_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t0_cmp_hi = {
    "AR_NIC_RSPMON_DBG_LM_T0_CMP_HI", AR_NIC_RSPMON_DBG_LM_T0_CMP_HI, 8, 1, _ar_nic_rspmon_dbg_lm_t0_cmp_hi_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t0_mode = {
    "AR_NIC_RSPMON_DBG_LM_T0_MODE", AR_NIC_RSPMON_DBG_LM_T0_MODE, 8, 1, _ar_nic_rspmon_dbg_lm_t0_mode_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t0_mask_lo = {
    "AR_NIC_RSPMON_DBG_LM_T0_MASK_LO", AR_NIC_RSPMON_DBG_LM_T0_MASK_LO, 8, 1, _ar_nic_rspmon_dbg_lm_t0_mask_lo_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t0_mask_mid = {
    "AR_NIC_RSPMON_DBG_LM_T0_MASK_MID", AR_NIC_RSPMON_DBG_LM_T0_MASK_MID, 8, 1, _ar_nic_rspmon_dbg_lm_t0_mask_mid_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t0_mask_hi = {
    "AR_NIC_RSPMON_DBG_LM_T0_MASK_HI", AR_NIC_RSPMON_DBG_LM_T0_MASK_HI, 8, 1, _ar_nic_rspmon_dbg_lm_t0_mask_hi_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t1_cmp_lo = {
    "AR_NIC_RSPMON_DBG_LM_T1_CMP_LO", AR_NIC_RSPMON_DBG_LM_T1_CMP_LO, 8, 1, _ar_nic_rspmon_dbg_lm_t1_cmp_lo_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t1_cmp_mid = {
    "AR_NIC_RSPMON_DBG_LM_T1_CMP_MID", AR_NIC_RSPMON_DBG_LM_T1_CMP_MID, 8, 1, _ar_nic_rspmon_dbg_lm_t1_cmp_mid_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t1_cmp_hi = {
    "AR_NIC_RSPMON_DBG_LM_T1_CMP_HI", AR_NIC_RSPMON_DBG_LM_T1_CMP_HI, 8, 1, _ar_nic_rspmon_dbg_lm_t1_cmp_hi_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t1_mode = {
    "AR_NIC_RSPMON_DBG_LM_T1_MODE", AR_NIC_RSPMON_DBG_LM_T1_MODE, 8, 1, _ar_nic_rspmon_dbg_lm_t1_mode_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t1_mask_lo = {
    "AR_NIC_RSPMON_DBG_LM_T1_MASK_LO", AR_NIC_RSPMON_DBG_LM_T1_MASK_LO, 8, 1, _ar_nic_rspmon_dbg_lm_t1_mask_lo_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t1_mask_mid = {
    "AR_NIC_RSPMON_DBG_LM_T1_MASK_MID", AR_NIC_RSPMON_DBG_LM_T1_MASK_MID, 8, 1, _ar_nic_rspmon_dbg_lm_t1_mask_mid_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_t1_mask_hi = {
    "AR_NIC_RSPMON_DBG_LM_T1_MASK_HI", AR_NIC_RSPMON_DBG_LM_T1_MASK_HI, 8, 1, _ar_nic_rspmon_dbg_lm_t1_mask_hi_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_mux_sel = {
    "AR_NIC_RSPMON_DBG_LM_MUX_SEL", AR_NIC_RSPMON_DBG_LM_MUX_SEL, 8, 1, _ar_nic_rspmon_dbg_lm_mux_sel_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_lm_blk_sel = {
    "AR_NIC_RSPMON_DBG_LM_BLK_SEL", AR_NIC_RSPMON_DBG_LM_BLK_SEL, 8, 1, _ar_nic_rspmon_dbg_lm_blk_sel_detail
};
static const generic_mmr_t _ar_nic_rspmon_err_flg = {
    "AR_NIC_RSPMON_ERR_FLG", AR_NIC_RSPMON_ERR_FLG, 8, 1, _ar_nic_rspmon_err_flg_detail
};
static const generic_mmr_t _ar_nic_rspmon_err_clr = {
    "AR_NIC_RSPMON_ERR_CLR", AR_NIC_RSPMON_ERR_CLR, 8, 1, _ar_nic_rspmon_err_clr_detail
};
static const generic_mmr_t _ar_nic_rspmon_err_hss_msk = {
    "AR_NIC_RSPMON_ERR_HSS_MSK", AR_NIC_RSPMON_ERR_HSS_MSK, 8, 1, _ar_nic_rspmon_err_hss_msk_detail
};
static const generic_mmr_t _ar_nic_rspmon_err_os_msk = {
    "AR_NIC_RSPMON_ERR_OS_MSK", AR_NIC_RSPMON_ERR_OS_MSK, 8, 1, _ar_nic_rspmon_err_os_msk_detail
};
static const generic_mmr_t _ar_nic_rspmon_err_first_flg = {
    "AR_NIC_RSPMON_ERR_FIRST_FLG", AR_NIC_RSPMON_ERR_FIRST_FLG, 8, 1, _ar_nic_rspmon_err_first_flg_detail
};
static const generic_mmr_t _ar_nic_rspmon_dbg_errinj_cntr_perr = {
    "AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR", AR_NIC_RSPMON_DBG_ERRINJ_CNTR_PERR, 8, 1, _ar_nic_rspmon_dbg_errinj_cntr_perr_detail
};
static const generic_mmr_t _ar_nic_rspmon_err_info_cntr_perr = {
    "AR_NIC_RSPMON_ERR_INFO_CNTR_PERR", AR_NIC_RSPMON_ERR_INFO_CNTR_PERR, 8, 1, _ar_nic_rspmon_err_info_cntr_perr_detail
};
static const generic_mmr_t _ar_nic_rspmon_err_info_cntr_perr_cnt = {
    "AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT", AR_NIC_RSPMON_ERR_INFO_CNTR_PERR_CNT, 8, 1, _ar_nic_rspmon_err_info_cntr_perr_cnt_detail
};
static const generic_mmr_t _ar_nic_rspmon_prf_event_cntr_ctrl = {
    "AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL", AR_NIC_RSPMON_PRF_EVENT_CNTR_CTRL, 8, 1, _ar_nic_rspmon_prf_event_cntr_ctrl_detail
};

/*
 *  INSTALL AR RSPMON MMRS
 */
static const generic_mmr_t* _ar_rspmon_mmrs[] _unused = {
    &_ar_nic_rspmon_dbg_lm_t0_cmp_lo,
    &_ar_nic_rspmon_mmr_ring_0_hi_rspmon,
    &_ar_nic_rspmon_mmr_ring_0_mid_rspmon,
    &_ar_nic_rspmon_mmr_ring_0_lo_rspmon,
    &_ar_nic_rspmon_mmr_err_flags_1_hi_rspmon,
    &_ar_nic_rspmon_mmr_err_flags_1_mid_rspmon,
    &_ar_nic_rspmon_mmr_err_flags_1_lo_rspmon,
    &_ar_nic_rspmon_dbg_lm_t0_cmp_mid,
    &_ar_nic_rspmon_dbg_lm_t0_cmp_hi,
    &_ar_nic_rspmon_dbg_lm_t0_mode,
    &_ar_nic_rspmon_dbg_lm_t0_mask_lo,
    &_ar_nic_rspmon_dbg_lm_t0_mask_mid,
    &_ar_nic_rspmon_dbg_lm_t0_mask_hi,
    &_ar_nic_rspmon_dbg_lm_t1_cmp_lo,
    &_ar_nic_rspmon_dbg_lm_t1_cmp_mid,
    &_ar_nic_rspmon_dbg_lm_t1_cmp_hi,
    &_ar_nic_rspmon_dbg_lm_t1_mode,
    &_ar_nic_rspmon_dbg_lm_t1_mask_lo,
    &_ar_nic_rspmon_dbg_lm_t1_mask_mid,
    &_ar_nic_rspmon_dbg_lm_t1_mask_hi,
    &_ar_nic_rspmon_dbg_lm_mux_sel,
    &_ar_nic_rspmon_dbg_lm_blk_sel,
    &_ar_nic_rspmon_err_flg,
    &_ar_nic_rspmon_err_clr,
    &_ar_nic_rspmon_err_hss_msk,
    &_ar_nic_rspmon_err_os_msk,
    &_ar_nic_rspmon_err_first_flg,
    &_ar_nic_rspmon_dbg_errinj_cntr_perr,
    &_ar_nic_rspmon_err_info_cntr_perr,
    &_ar_nic_rspmon_err_info_cntr_perr_cnt,
    &_ar_nic_rspmon_prf_event_cntr_ctrl,
    NULL
};

#endif
