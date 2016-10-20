/******************************************************************************
 * COPYRIGHT CRAY INC. ar_sb_mmrs_h.h
 * FILE: ar_sb_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/

#ifndef _AR_SB_MMRS_H_H_
#define _AR_SB_MMRS_H_H_

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

static const generic_mmr_t* _ar_sb_mmrs[] _unused;	/* SB Array */

/*
 *  AR SB MMR DETAIL DECLARATIONS
 */
static const generic_mmrd_t _ar_sb_hpet_cap_detail[] = {
    { "CLK_PERIOD", AR_SB_HPET_CAP_CLK_PERIOD_BP, AR_SB_HPET_CAP_CLK_PERIOD_MASK },
    { "VENDOR_ID", AR_SB_HPET_CAP_VENDOR_ID_BP, AR_SB_HPET_CAP_VENDOR_ID_MASK },
    { "LEG_RT_CAP", AR_SB_HPET_CAP_LEG_RT_CAP_BP, AR_SB_HPET_CAP_LEG_RT_CAP_MASK },
    { "COUNT_SIZE_CAP", AR_SB_HPET_CAP_COUNT_SIZE_CAP_BP, AR_SB_HPET_CAP_COUNT_SIZE_CAP_MASK },
    { "NUM_TIM_CAP", AR_SB_HPET_CAP_NUM_TIM_CAP_BP, AR_SB_HPET_CAP_NUM_TIM_CAP_MASK },
    { "REV_ID", AR_SB_HPET_CAP_REV_ID_BP, AR_SB_HPET_CAP_REV_ID_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_config_detail[] = {
    { "LEG_RT_CNF", AR_SB_HPET_CONFIG_LEG_RT_CNF_BP, AR_SB_HPET_CONFIG_LEG_RT_CNF_MASK },
    { "ENABLE_CNF", AR_SB_HPET_CONFIG_ENABLE_CNF_BP, AR_SB_HPET_CONFIG_ENABLE_CNF_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_isr_detail[] = {
    { "T2_INT_STS", AR_SB_HPET_ISR_T2_INT_STS_BP, AR_SB_HPET_ISR_T2_INT_STS_MASK },
    { "T1_INT_STS", AR_SB_HPET_ISR_T1_INT_STS_BP, AR_SB_HPET_ISR_T1_INT_STS_MASK },
    { "T0_INT_STS", AR_SB_HPET_ISR_T0_INT_STS_BP, AR_SB_HPET_ISR_T0_INT_STS_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_mcv_detail[] = {
    { "MCV", AR_SB_HPET_MCV_MCV_BP, AR_SB_HPET_MCV_MCV_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_t0_conf_detail[] = {
    { "VAL_SET_CNF", AR_SB_HPET_T0_CONF_VAL_SET_CNF_BP, AR_SB_HPET_T0_CONF_VAL_SET_CNF_MASK },
    { "SIZE", AR_SB_HPET_T0_CONF_SIZE_BP, AR_SB_HPET_T0_CONF_SIZE_MASK },
    { "PER_INT_CAP", AR_SB_HPET_T0_CONF_PER_INT_CAP_BP, AR_SB_HPET_T0_CONF_PER_INT_CAP_MASK },
    { "TYPE", AR_SB_HPET_T0_CONF_TYPE_BP, AR_SB_HPET_T0_CONF_TYPE_MASK },
    { "INT_ENB", AR_SB_HPET_T0_CONF_INT_ENB_BP, AR_SB_HPET_T0_CONF_INT_ENB_MASK },
    { "INT_TYPE", AR_SB_HPET_T0_CONF_INT_TYPE_BP, AR_SB_HPET_T0_CONF_INT_TYPE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_t0_comp_detail[] = {
    { "COMPARATOR", AR_SB_HPET_T0_COMP_COMPARATOR_BP, AR_SB_HPET_T0_COMP_COMPARATOR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_t1_conf_detail[] = {
    { "VAL_SET_CNF", AR_SB_HPET_T1_CONF_VAL_SET_CNF_BP, AR_SB_HPET_T1_CONF_VAL_SET_CNF_MASK },
    { "SIZE", AR_SB_HPET_T1_CONF_SIZE_BP, AR_SB_HPET_T1_CONF_SIZE_MASK },
    { "PER_INT_CAP", AR_SB_HPET_T1_CONF_PER_INT_CAP_BP, AR_SB_HPET_T1_CONF_PER_INT_CAP_MASK },
    { "TYPE", AR_SB_HPET_T1_CONF_TYPE_BP, AR_SB_HPET_T1_CONF_TYPE_MASK },
    { "INT_ENB", AR_SB_HPET_T1_CONF_INT_ENB_BP, AR_SB_HPET_T1_CONF_INT_ENB_MASK },
    { "INT_TYPE", AR_SB_HPET_T1_CONF_INT_TYPE_BP, AR_SB_HPET_T1_CONF_INT_TYPE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_t1_comp_detail[] = {
    { "COMPARATOR", AR_SB_HPET_T1_COMP_COMPARATOR_BP, AR_SB_HPET_T1_COMP_COMPARATOR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_t2_conf_detail[] = {
    { "VAL_SET_CNF", AR_SB_HPET_T2_CONF_VAL_SET_CNF_BP, AR_SB_HPET_T2_CONF_VAL_SET_CNF_MASK },
    { "SIZE", AR_SB_HPET_T2_CONF_SIZE_BP, AR_SB_HPET_T2_CONF_SIZE_MASK },
    { "PER_INT_CAP", AR_SB_HPET_T2_CONF_PER_INT_CAP_BP, AR_SB_HPET_T2_CONF_PER_INT_CAP_MASK },
    { "TYPE", AR_SB_HPET_T2_CONF_TYPE_BP, AR_SB_HPET_T2_CONF_TYPE_MASK },
    { "INT_ENB", AR_SB_HPET_T2_CONF_INT_ENB_BP, AR_SB_HPET_T2_CONF_INT_ENB_MASK },
    { "INT_TYPE", AR_SB_HPET_T2_CONF_INT_TYPE_BP, AR_SB_HPET_T2_CONF_INT_TYPE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_t2_comp_detail[] = {
    { "COMPARATOR", AR_SB_HPET_T2_COMP_COMPARATOR_BP, AR_SB_HPET_T2_COMP_COMPARATOR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_freq1_detail[] = {
    { "GAIN1", AR_SB_HPET_FREQ1_GAIN1_BP, AR_SB_HPET_FREQ1_GAIN1_MASK },
    { "GAIN0", AR_SB_HPET_FREQ1_GAIN0_BP, AR_SB_HPET_FREQ1_GAIN0_MASK },
    { "SHIFT1", AR_SB_HPET_FREQ1_SHIFT1_BP, AR_SB_HPET_FREQ1_SHIFT1_MASK },
    { "SHIFT0", AR_SB_HPET_FREQ1_SHIFT0_BP, AR_SB_HPET_FREQ1_SHIFT0_MASK },
    { "DELAY", AR_SB_HPET_FREQ1_DELAY_BP, AR_SB_HPET_FREQ1_DELAY_MASK },
    { "OUTEN", AR_SB_HPET_FREQ1_OUTEN_BP, AR_SB_HPET_FREQ1_OUTEN_MASK },
    { "LOCK", AR_SB_HPET_FREQ1_LOCK_BP, AR_SB_HPET_FREQ1_LOCK_MASK },
    { "COUNT", AR_SB_HPET_FREQ1_COUNT_BP, AR_SB_HPET_FREQ1_COUNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_freq2_detail[] = {
    { "WRAP", AR_SB_HPET_FREQ2_WRAP_BP, AR_SB_HPET_FREQ2_WRAP_MASK },
    { "INCR", AR_SB_HPET_FREQ2_INCR_BP, AR_SB_HPET_FREQ2_INCR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_pll_adj1_detail[] = {
    { "PLL_ADJ_MAX", AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_BP, AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_MASK },
    { "PLL_ADJ_MIN", AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_BP, AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_sb_hpet_pll_adj2_detail[] = {
    { "DIVIDER_VALUE", AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_BP, AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_MASK },
    { "PLL_LOCK_MAX", AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_BP, AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_MASK },
    { NULL, 0, 0 }
};

/*
 *  AR SB MMR DECLARATIONS
 */
static const generic_mmr_t _ar_sb_hpet_cap = {
    "AR_SB_HPET_CAP", AR_SB_HPET_CAP, 8, 1, _ar_sb_hpet_cap_detail
};
static const generic_mmr_t _ar_sb_hpet_config = {
    "AR_SB_HPET_CONFIG", AR_SB_HPET_CONFIG, 8, 1, _ar_sb_hpet_config_detail
};
static const generic_mmr_t _ar_sb_hpet_isr = {
    "AR_SB_HPET_ISR", AR_SB_HPET_ISR, 8, 1, _ar_sb_hpet_isr_detail
};
static const generic_mmr_t _ar_sb_hpet_mcv = {
    "AR_SB_HPET_MCV", AR_SB_HPET_MCV, 8, 1, _ar_sb_hpet_mcv_detail
};
static const generic_mmr_t _ar_sb_hpet_t0_conf = {
    "AR_SB_HPET_T0_CONF", AR_SB_HPET_T0_CONF, 8, 1, _ar_sb_hpet_t0_conf_detail
};
static const generic_mmr_t _ar_sb_hpet_t0_comp = {
    "AR_SB_HPET_T0_COMP", AR_SB_HPET_T0_COMP, 8, 1, _ar_sb_hpet_t0_comp_detail
};
static const generic_mmr_t _ar_sb_hpet_t1_conf = {
    "AR_SB_HPET_T1_CONF", AR_SB_HPET_T1_CONF, 8, 1, _ar_sb_hpet_t1_conf_detail
};
static const generic_mmr_t _ar_sb_hpet_t1_comp = {
    "AR_SB_HPET_T1_COMP", AR_SB_HPET_T1_COMP, 8, 1, _ar_sb_hpet_t1_comp_detail
};
static const generic_mmr_t _ar_sb_hpet_t2_conf = {
    "AR_SB_HPET_T2_CONF", AR_SB_HPET_T2_CONF, 8, 1, _ar_sb_hpet_t2_conf_detail
};
static const generic_mmr_t _ar_sb_hpet_t2_comp = {
    "AR_SB_HPET_T2_COMP", AR_SB_HPET_T2_COMP, 8, 1, _ar_sb_hpet_t2_comp_detail
};
static const generic_mmr_t _ar_sb_hpet_freq1 = {
    "AR_SB_HPET_FREQ1", AR_SB_HPET_FREQ1, 8, 1, _ar_sb_hpet_freq1_detail
};
static const generic_mmr_t _ar_sb_hpet_freq2 = {
    "AR_SB_HPET_FREQ2", AR_SB_HPET_FREQ2, 8, 1, _ar_sb_hpet_freq2_detail
};
static const generic_mmr_t _ar_sb_hpet_pll_adj1 = {
    "AR_SB_HPET_PLL_ADJ1", AR_SB_HPET_PLL_ADJ1, 8, 1, _ar_sb_hpet_pll_adj1_detail
};
static const generic_mmr_t _ar_sb_hpet_pll_adj2 = {
    "AR_SB_HPET_PLL_ADJ2", AR_SB_HPET_PLL_ADJ2, 8, 1, _ar_sb_hpet_pll_adj2_detail
};

/*
 *  INSTALL AR SB MMRS
 */
static const generic_mmr_t* _ar_sb_mmrs[] _unused = {
    &_ar_sb_hpet_cap,
    &_ar_sb_hpet_config,
    &_ar_sb_hpet_isr,
    &_ar_sb_hpet_mcv,
    &_ar_sb_hpet_t0_conf,
    &_ar_sb_hpet_t0_comp,
    &_ar_sb_hpet_t1_conf,
    &_ar_sb_hpet_t1_comp,
    &_ar_sb_hpet_t2_conf,
    &_ar_sb_hpet_t2_comp,
    &_ar_sb_hpet_freq1,
    &_ar_sb_hpet_freq2,
    &_ar_sb_hpet_pll_adj1,
    &_ar_sb_hpet_pll_adj2,
    NULL
};

#endif
