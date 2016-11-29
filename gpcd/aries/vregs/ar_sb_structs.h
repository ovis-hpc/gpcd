/******************************************************************************
 * COPYRIGHT CRAY INC. ar_sb_structs.h
 * FILE: ar_sb_structs.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/

#ifndef _AR_SB_STRUCTS_H_
#define _AR_SB_STRUCTS_H_

/*
 *  ARIES SB STRUCTURES
 */
typedef union ar_sb_hpet_cap_desc {
    struct {
        // QW0
        uint64_t rev_id                   : 8;	/* This indicates which revision of the function is implemented */
        uint64_t num_tim_cap              : 5;	/* Number of Timers: This indicates the number of timers in this block */
        uint64_t count_size_cap           : 1;	/* Counter Size: This bit is a 0 to indicate that the main counter is 32 bits wide (and cannot operate in 64-bit mode) */
        uint64_t undefine_14_14           : 1;	/* undefined */
        uint64_t leg_rt_cap               : 1;	/* Legacy Replacement Route Capable: If this bit is a 1, it indicates that the hardware supports the Legacy Replacement Interrupt Route option */
        uint64_t vendor_id                :16;	/* This read-only field will be the same as what would be assigned if this logic was a PCI function */
        uint64_t clk_period               :32;	/* Main Counter Tick Period: This read-only field indicates the period at which the counter increments in femtoseconds (10^-15 seconds) */
    };
    uint64_t qwords[1];
} ar_sb_hpet_cap_desc_t;

typedef union ar_sb_hpet_config_desc {
    struct {
        // QW0
        uint64_t enable_cnf               : 1;	/* Overall Enable */
        uint64_t leg_rt_cnf               : 1;	/* Legacy Replacement Route */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_config_desc_t;

typedef union ar_sb_hpet_isr_desc {
    struct {
        // QW0
        uint64_t t0_int_sts               : 1;	/* Timer 0 Interrupt Active */
        uint64_t t1_int_sts               : 1;	/* Timer 1 Interrupt Active */
        uint64_t t2_int_sts               : 1;	/* Timer 2 Interrupt Active */
        uint64_t undefine_63_3            :61;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_isr_desc_t;

typedef union ar_sb_hpet_mcv_desc {
    struct {
        // QW0
        uint64_t mcv                      :32;	/* Main Counter */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_mcv_desc_t;

typedef union ar_sb_hpet_t0_conf_desc {
    struct {
        // QW0
        uint64_t undefine_0_0             : 1;	/* undefined */
        uint64_t int_type                 : 1;	/* Timer Interrupt Type, is always edge triggered because we are using an MSI-X controller for interrupts */
        uint64_t int_enb                  : 1;	/* Timer Interrupt Enable */
        uint64_t type                     : 1;	/* Timer Type */
        uint64_t per_int_cap              : 1;	/* Periodic Interrupt Capable */
        uint64_t size                     : 1;	/* Timer Size = 32 bit */
        uint64_t val_set_cnf              : 1;	/* Value Set */
        uint64_t undefine_63_7            :57;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_t0_conf_desc_t;

typedef union ar_sb_hpet_t0_comp_desc {
    struct {
        // QW0
        uint64_t comparator               :32;	/* Comparator Value */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_t0_comp_desc_t;

typedef union ar_sb_hpet_t1_conf_desc {
    struct {
        // QW0
        uint64_t undefine_0_0             : 1;	/* undefined */
        uint64_t int_type                 : 1;	/* Timer Interrupt Type, is always edge triggered because we are using an MSI-X controller for interrupts */
        uint64_t int_enb                  : 1;	/* Timer Interrupt Enable */
        uint64_t type                     : 1;	/* Timer Type */
        uint64_t per_int_cap              : 1;	/* Periodic Interrupt Capable */
        uint64_t size                     : 1;	/* Timer Size */
        uint64_t val_set_cnf              : 1;	/* Value Set */
        uint64_t undefine_63_7            :57;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_t1_conf_desc_t;

typedef union ar_sb_hpet_t1_comp_desc {
    struct {
        // QW0
        uint64_t comparator               :32;	/* Comparator Value */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_t1_comp_desc_t;

typedef union ar_sb_hpet_t2_conf_desc {
    struct {
        // QW0
        uint64_t undefine_0_0             : 1;	/* undefined */
        uint64_t int_type                 : 1;	/* Timer Interrupt Type, is always edge triggered because we are using an MSI-X controller for interrupts */
        uint64_t int_enb                  : 1;	/* Timer Interrupt Enable */
        uint64_t type                     : 1;	/* Timer Type */
        uint64_t per_int_cap              : 1;	/* Periodic Interrupt Capable */
        uint64_t size                     : 1;	/* Timer Size */
        uint64_t val_set_cnf              : 1;	/* Value Set */
        uint64_t undefine_63_7            :57;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_t2_conf_desc_t;

typedef union ar_sb_hpet_t2_comp_desc {
    struct {
        // QW0
        uint64_t comparator               :32;	/* Comparator Value */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_t2_comp_desc_t;

typedef union ar_sb_hpet_freq1_desc {
    struct {
        // QW0
        uint64_t count                    :28;	/* Current Divider Count */
        uint64_t lock                     : 1;	/* PLL Lock Indicator */
        uint64_t outen                    : 1;	/* Enable Timer 0 to local block */
        uint64_t undefine_31_30           : 2;	/* undefined */
        uint64_t delay                    :12;	/* Delay pulse after timer 0 receipt */
        uint64_t shift0                   : 2;	/* Phase 0 gain shift */
        uint64_t shift1                   : 2;	/* Phase 1 gain Shift */
        uint64_t gain0                    : 8;	/* Phase 0 gain coefficient */
        uint64_t gain1                    : 8;	/* Phase 1 gain coefficient */
    };
    uint64_t qwords[1];
} ar_sb_hpet_freq1_desc_t;

typedef union ar_sb_hpet_freq2_desc {
    struct {
        // QW0
        uint64_t incr                     :20;	/* Phase Delta Increment for count */
        uint64_t undefine_31_20           :12;	/* undefined */
        uint64_t wrap                     :28;	/* Counter Wrap Control Reg */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_freq2_desc_t;

typedef union ar_sb_hpet_pll_adj1_desc {
    struct {
        // QW0
        uint64_t pll_adj_min              :28;	/* PLL adjust min value */
        uint64_t undefine_31_28           : 4;	/* undefined */
        uint64_t pll_adj_max              :28;	/* PLL adjust max value */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_pll_adj1_desc_t;

typedef union ar_sb_hpet_pll_adj2_desc {
    struct {
        // QW0
        uint64_t pll_lock_max             :28;	/* Max value required for lock */
        uint64_t undefine_31_28           : 4;	/* undefined */
        uint64_t divider_value            :10;	/* Divider value */
        uint64_t undefine_63_42           :22;	/* undefined */
    };
    uint64_t qwords[1];
} ar_sb_hpet_pll_adj2_desc_t;


#endif
