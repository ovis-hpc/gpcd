/******************************************************************************
 * COPYRIGHT CRAY INC. ar_rspmon_structs.h
 * FILE: ar_rspmon_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:02 2014
 ******************************************************************************/

#ifndef _AR_RSPMON_STRUCTS_H_
#define _AR_RSPMON_STRUCTS_H_

/*
 *  ARIES RSPMON STRUCTURES
 */
typedef union ar_nic_rspmon_dbg_lm_t0_cmp_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Trigger 0 Compare Values 63:0 */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t0_cmp_lo_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t0_cmp_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Trigger 0 Compare Values 127:64 */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t0_cmp_mid_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t0_cmp_hi_desc {
    struct {
        // QW0
        uint64_t data                     :22;	/* Trigger 0 Compare Values 149:128 */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t0_cmp_hi_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t0_mode_desc {
    struct {
        // QW0
        uint64_t mode                     : 2;	/* Trigger 0 Mode 0 all unmasked bits match 1 any unmasked bit matches 2 at least one unmasked bit doesnt match 3 do not trigger */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t0_mode_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t0_mask_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Trigger 0 Ignore Mask Values 63:0 */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t0_mask_lo_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t0_mask_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Trigger 0 Ignore Mask Values 127:64 */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t0_mask_mid_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t0_mask_hi_desc {
    struct {
        // QW0
        uint64_t data                     :22;	/* Trigger 0 Ignore Mask Values 149:128 */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t0_mask_hi_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t1_cmp_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Trigger 1 Compare Values 63:0 */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t1_cmp_lo_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t1_cmp_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Trigger 1 Compare Values 127:64 */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t1_cmp_mid_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t1_cmp_hi_desc {
    struct {
        // QW0
        uint64_t data                     :22;	/* Trigger 1 Compare Values 149:128 */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t1_cmp_hi_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t1_mode_desc {
    struct {
        // QW0
        uint64_t mode                     : 2;	/* Trigger 1 Mode 0 all unmasked bits match 1 any unmasked bit matches 2 at least one unmasked bit doesnt match 3 do not trigger */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t1_mode_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t1_mask_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Trigger 1 Ignore Mask Values 63:0 */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t1_mask_lo_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t1_mask_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Trigger 1 Ignore Mask Values 127:64 */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t1_mask_mid_desc_t;

typedef union ar_nic_rspmon_dbg_lm_t1_mask_hi_desc {
    struct {
        // QW0
        uint64_t data                     :22;	/* Trigger 1 Ignore Mask Values 149:128 */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_t1_mask_hi_desc_t;

typedef union ar_nic_rspmon_dbg_lm_mux_sel_desc {
    struct {
        // QW0
        uint64_t lm_trig0_sel             : 8;	/* MUX Select for Trigger 0 Data */
        uint64_t lm_trig1_sel             : 8;	/* MUX Select for Trigger 1 Data */
        uint64_t lm_cap0_sel              : 8;	/* MUX Select for Capture 0 Data */
        uint64_t lm_cap1_sel              : 8;	/* MUX Select for Capture 1 Data */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_mux_sel_desc_t;

typedef union ar_nic_rspmon_dbg_lm_blk_sel_desc {
    struct {
        // QW0
        uint64_t lm_trig0_blk             : 3;	/* The block to supply Trigger 0 */
        uint64_t lm_trig0_bus             : 1;	/* The bus from LM_TRIG0_BLK used to supply Trigger 0 */
        uint64_t undefine_7_4             : 4;	/* undefined */
        uint64_t lm_trig1_blk             : 3;	/* The block to supply Trigger 1 */
        uint64_t lm_trig1_bus             : 1;	/* The bus from LM_TRIG1_BLK used to supply Trigger 1 */
        uint64_t undefine_15_12           : 4;	/* undefined */
        uint64_t lm_cap0_blk              : 3;	/* The block to supply Capture 0 Data */
        uint64_t lm_cap0_bus              : 1;	/* The bus from LM_CAP0_BLK used to supply the Capture 0 Data */
        uint64_t undefine_23_20           : 4;	/* undefined */
        uint64_t lm_cap1_blk              : 3;	/* The block to supply Capture 1 Data */
        uint64_t lm_cap1_bus              : 1;	/* The bus from LM_CAP1_BLK used to supply the Capture 1 Data */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_lm_blk_sel_desc_t;

typedef union ar_nic_rspmon_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t cntr_rollover            : 1;	/* An event counter rolled over */
        uint64_t cntr_perr                : 1;	/* A parity error occurred reading the Event Counter RAM */
        uint64_t trigger0                 : 1;	/* The logic monitor trigger0 event occurred */
        uint64_t trigger1                 : 1;	/* The logic monitor trigger1 event occurred */
        uint64_t undefine_63_5            :59;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_err_flg_desc_t;

typedef union ar_nic_rspmon_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t cntr_rollover            : 1;	/* An event counter rolled over */
        uint64_t cntr_perr                : 1;	/* A parity error occurred reading the Event Counter RAM */
        uint64_t trigger0                 : 1;	/* The logic monitor trigger0 event occurred */
        uint64_t trigger1                 : 1;	/* The logic monitor trigger1 event occurred */
        uint64_t undefine_63_5            :59;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_err_clr_desc_t;

typedef union ar_nic_rspmon_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t cntr_rollover            : 1;	/* 1:1 */
        uint64_t cntr_perr                : 1;	/* 2:2 */
        uint64_t trigger0                 : 1;	/* 3:3 */
        uint64_t trigger1                 : 1;	/* 4:4 */
        uint64_t undefine_63_5            :59;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_err_hss_msk_desc_t;

typedef union ar_nic_rspmon_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t cntr_rollover            : 1;	/* 1:1 */
        uint64_t cntr_perr                : 1;	/* 2:2 */
        uint64_t trigger0                 : 1;	/* 3:3 */
        uint64_t trigger1                 : 1;	/* 4:4 */
        uint64_t undefine_63_5            :59;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_err_os_msk_desc_t;

typedef union ar_nic_rspmon_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t cntr_rollover            : 1;	/* 1:1 */
        uint64_t cntr_perr                : 1;	/* 2:2 */
        uint64_t trigger0                 : 1;	/* 3:3 */
        uint64_t trigger1                 : 1;	/* 4:4 */
        uint64_t undefine_63_5            :59;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_err_first_flg_desc_t;

typedef union ar_nic_rspmon_dbg_errinj_cntr_perr_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* This status bit is set when an error is injected */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t checkbits                : 4;	/* When an error in injected, each bit that is set to one is this field causes the corresponding parity bit to be inverted */
        uint64_t undefine_31_20           :12;	/* undefined */
        uint64_t address                  : 7;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_39           :25;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_dbg_errinj_cntr_perr_desc_t;

typedef union ar_nic_rspmon_err_info_cntr_perr_desc {
    struct {
        // QW0
        uint64_t undefine_2_0             : 3;	/* undefined */
        uint64_t mmr_detected_perr        : 1;	/* The parity error was observed during an MMR read */
        uint64_t undefine_11_4            : 8;	/* undefined */
        uint64_t address                  : 7;	/* Parity Error Address */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_err_info_cntr_perr_desc_t;

typedef union ar_nic_rspmon_err_info_cntr_perr_cnt_desc {
    struct {
        // QW0
        uint64_t perr_count               ;	/* Number of parity errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_err_info_cntr_perr_cnt_desc_t;

typedef union ar_nic_rspmon_prf_event_cntr_ctrl_desc {
    struct {
        // QW0
        uint64_t counters_clear           : 1;	/* This bit is clear during the clear sequence and becomes set upon the completion of the clear sequence */
        uint64_t undefine_46_1            :46;	/* undefined */
        uint64_t clear                    : 1;	/* Writing a 1 initiates the clear sequence which clears all performance counters except scratch counters, read returns zero */
        uint64_t enable                   : 1;	/* Writing a 1 enables performance counters, writing a 0 disables counting and allows all performance counters to be used as scratch */
        uint64_t disable_auto_update      : 1;	/* Writing a 1'b1 disables the auto-updating of the performance counter rams, turns off widget */
        uint64_t undefine_63_50           :14;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_prf_event_cntr_ctrl_desc_t;

typedef union ar_nic_rspmon_prf_event_cntr_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Event counters */
    };
    uint64_t qwords[1];
} ar_nic_rspmon_prf_event_cntr_desc_t;


#endif
