/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pi_lm_structs.h
 * FILE: ar_pi_lm_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_PI_LM_STRUCTS_H_
#define _AR_PI_LM_STRUCTS_H_

/*
 *  ARIES PI_LM STRUCTURES
 */
typedef union ar_pi_dbg_lm0_ctl_desc {
    struct {
        // QW0
        uint64_t lm_ctl_mode              : 4;	/* Capture Mode */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t lm_ctl_t1_cnt            :10;	/* Trigger 1 Count/Delay */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t lm_ctl_t0_cnt            :10;	/* Trigger 0 Count/Delay */
        uint64_t undefine_47_42           : 6;	/* undefined */
        uint64_t lm_cap_state             : 2;	/* Trigger State Machine Value */
        uint64_t lm_trig0_occurred        : 1;	/* Sets when the capture mode is non-zero and a trigger 0 occurs on any bus */
        uint64_t lm_trig1_occurred        : 1;	/* Sets when the capture mode is non-zero and a trigger 1 occurs on any bus */
        uint64_t lm_trig01_occurred       : 1;	/* Sets when the capture mode is non-zero and a trigger 0 and a trigger 1 occur in the same clock cycle on the same bus */
        uint64_t undefine_62_53           :10;	/* undefined */
        uint64_t lm_rst                   : 1;	/* Reset Capture block */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_ctl_desc_t;

typedef union ar_pi_dbg_lm0_ptrs_desc {
    struct {
        // QW0
        uint64_t lm_wr_ptr                : 9;	/* Write Pointer of the Record Buffer */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t lm_rd_ptr                : 9;	/* Read Pointer of Record Buffer */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t lm_wr_ad_wrap            : 1;	/* Write Address Pointer has wrapped */
        uint64_t lm_mult_event            : 1;	/* Multiple Recording events occured during the same clock period */
        uint64_t lm_rec_done              : 1;	/* Record Done */
        uint64_t lm_rec_act               : 1;	/* Record Active */
        uint64_t undefine_63_36           :28;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_ptrs_desc_t;

typedef union ar_pi_dbg_lm0_read_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_read_lo_desc_t;

typedef union ar_pi_dbg_lm0_read_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_read_mid_desc_t;

typedef union ar_pi_dbg_lm0_read_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_read_hi_desc_t;

typedef union ar_pi_dbg_lm0_snap_sel_desc {
    struct {
        // QW0
        uint64_t sel                      : 3;	/* Logic Monitor Snapshot Select This field is not used since the the logic monitor has only 1 capture bus */
        uint64_t undefine_63_3            :61;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_snap_sel_desc_t;

typedef union ar_pi_dbg_lm0_snap_dlo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_snap_dlo_desc_t;

typedef union ar_pi_dbg_lm0_snap_dmid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_snap_dmid_desc_t;

typedef union ar_pi_dbg_lm0_snap_dhi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_snap_dhi_desc_t;

typedef union ar_pi_dbg_lm0_rem_trig_desc {
    struct {
        // QW0
        uint64_t lm_enable_from_nic       : 1;	/* Enable remote trigger from NIC */
        uint64_t lm_enable_from_pi        : 1;	/* Enable Trigger from other PI Logic Monitor */
        uint64_t lm_enable_from_mmr       : 1;	/* Enable Trigger from MMR block */
        uint64_t undefine_63_3            :61;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_rem_trig_desc_t;

typedef union ar_pi_dbg_lm0_trig_sts_desc {
    struct {
        // QW0
        uint64_t lcl_trig0_rcv            : 1;	/* A local trigger0 has been received by LM */
        uint64_t lcl_trig1_rcv            : 1;	/* A local trigger1 has been received by LM */
        uint64_t rem_trig0_rcv            : 1;	/* A remote trigger0 has been received by LM */
        uint64_t rem_trig1_rcv            : 1;	/* A remote trigger1 has been received by LM */
        uint64_t rem_trig0_rcv_first      : 1;	/* The first trigger0 received by LM was remote */
        uint64_t rem_trig1_rcv_first      : 1;	/* The first trigger1 received by LM was remote */
        uint64_t rem_trig0_rcv_last       : 1;	/* The last trigger0 received by LM was remote */
        uint64_t rem_trig1_rcv_last       : 1;	/* The last trigger1 received by LM was remote */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_trig_sts_desc_t;

typedef union ar_pi_dbg_errinj_lm0_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* This status bit is cleared when the MMR is written and set when an error has been injected */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t parity                   : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding parity bit to be inverted */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  : 9;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_errinj_lm0_desc_t;

typedef union ar_pi_err_info_lm0_perr_desc {
    struct {
        // QW0
        uint64_t undefine_2_0             : 3;	/* undefined */
        uint64_t mmr_detected_perr        : 1;	/* The PE was observed during an MMR read */
        uint64_t undefine_11_4            : 8;	/* undefined */
        uint64_t address                  : 9;	/* Address with parity error on LM */
        uint64_t undefine_63_21           :43;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_info_lm0_perr_desc_t;

typedef union ar_pi_err_info_lm0_perr_cnt_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of parity errors that have occurred */
    };
    uint64_t qwords[1];
} ar_pi_err_info_lm0_perr_cnt_desc_t;

typedef union ar_pi_dbg_lm0_cap_sel_desc {
    struct {
        // QW0
        uint64_t pti                      : 4;	/* LM Select for the PTI Block */
        uint64_t pmi                      : 5;	/* LM Select for the PMI Block */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t pii                      : 4;	/* LM Select for the PII Block */
        uint64_t den                      : 4;	/* LM Select for the DEN Block */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_cap_sel_desc_t;

typedef union ar_pi_dbg_lm0_t0_cmp_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t0_cmp_lo_desc_t;

typedef union ar_pi_dbg_lm0_t0_cmp_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t0_cmp_mid_desc_t;

typedef union ar_pi_dbg_lm0_t0_cmp_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t0_cmp_hi_desc_t;

typedef union ar_pi_dbg_lm0_t0_mode_desc {
    struct {
        // QW0
        uint64_t data                     : 2;	/* 0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t0_mode_desc_t;

typedef union ar_pi_dbg_lm0_t0_mask_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t0_mask_lo_desc_t;

typedef union ar_pi_dbg_lm0_t0_mask_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t0_mask_mid_desc_t;

typedef union ar_pi_dbg_lm0_t0_mask_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t0_mask_hi_desc_t;

typedef union ar_pi_dbg_lm0_trig_sel_desc {
    struct {
        // QW0
        uint64_t pti                      : 4;	/* LM Select for the PTI Block */
        uint64_t pmi                      : 5;	/* LM Select for the PMI Block */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t pii                      : 4;	/* LM Select for the PII Block */
        uint64_t den                      : 4;	/* LM Select for the DEN Block */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_trig_sel_desc_t;

typedef union ar_pi_dbg_lm0_t1_cmp_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t1_cmp_lo_desc_t;

typedef union ar_pi_dbg_lm0_t1_cmp_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t1_cmp_mid_desc_t;

typedef union ar_pi_dbg_lm0_t1_cmp_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t1_cmp_hi_desc_t;

typedef union ar_pi_dbg_lm0_t1_mode_desc {
    struct {
        // QW0
        uint64_t data                     : 2;	/* 0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t1_mode_desc_t;

typedef union ar_pi_dbg_lm0_t1_mask_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t1_mask_lo_desc_t;

typedef union ar_pi_dbg_lm0_t1_mask_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t1_mask_mid_desc_t;

typedef union ar_pi_dbg_lm0_t1_mask_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_t1_mask_hi_desc_t;

typedef union ar_pi_dbg_lm0_mux_sel_desc {
    struct {
        // QW0
        uint64_t trig0_sel                : 3;	/* MUX Select for Trigger 0 Data 0 = PTI capture data 1 = PMI capture data 2 = PII capture data 3 = Data selected by PCLK_SEL0 4 = PTI trigger data 5 = PMI trigger data 6 = PII trigger data 7 = Data slected by PCLK_SEL1 */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t trig1_sel                : 3;	/* MUX Select for Trigger 1 Data */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t cap_sel                  : 3;	/* MUX Select for Capture Data */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t pclk_sel0                : 3;	/* LM Select for the ASYNC Block mux 0 0 = PTI capture datap 1 = PMI capture datap 2 = PII capture datap 3 = DEN capture datap 4 = PTI trigger datap 5 = PMI trigger datap 6 = PII trigger datap 7 = DEN trigger datap */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t pclk_sel1                : 3;	/* LM Select for the ASYNC Block mux 1 7-0 same as PCLK_SEL0 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm0_mux_sel_desc_t;

typedef union ar_pi_dbg_lm1_ctl_desc {
    struct {
        // QW0
        uint64_t lm_ctl_mode              : 4;	/* Capture Mode */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t lm_ctl_t1_cnt            :10;	/* Trigger 1 Count/Delay */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t lm_ctl_t0_cnt            :10;	/* Trigger 0 Count/Delay */
        uint64_t undefine_47_42           : 6;	/* undefined */
        uint64_t lm_cap_state             : 2;	/* Trigger State Machine Value */
        uint64_t lm_trig0_occurred        : 1;	/* Sets when the capture mode is non-zero and a trigger 0 occurs on any bus */
        uint64_t lm_trig1_occurred        : 1;	/* Sets when the capture mode is non-zero and a trigger 1 occurs on any bus */
        uint64_t lm_trig01_occurred       : 1;	/* Sets when the capture mode is non-zero and a trigger 0 and a trigger 1 occur in the same clock cycle on the same bus */
        uint64_t undefine_62_53           :10;	/* undefined */
        uint64_t lm_rst                   : 1;	/* Reset Capture block */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_ctl_desc_t;

typedef union ar_pi_dbg_lm1_ptrs_desc {
    struct {
        // QW0
        uint64_t lm_wr_ptr                : 9;	/* Write Pointer of the Record Buffer */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t lm_rd_ptr                : 9;	/* Read Pointer of Record Buffer */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t lm_wr_ad_wrap            : 1;	/* Write Address Pointer has wrapped */
        uint64_t lm_mult_event            : 1;	/* Multiple Recording events occured during the same clock period */
        uint64_t lm_rec_done              : 1;	/* Record Done */
        uint64_t lm_rec_act               : 1;	/* Record Active */
        uint64_t undefine_63_36           :28;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_ptrs_desc_t;

typedef union ar_pi_dbg_lm1_read_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_read_lo_desc_t;

typedef union ar_pi_dbg_lm1_read_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_read_mid_desc_t;

typedef union ar_pi_dbg_lm1_read_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_read_hi_desc_t;

typedef union ar_pi_dbg_lm1_snap_sel_desc {
    struct {
        // QW0
        uint64_t sel                      : 3;	/* Logic Monitor Snapshot Select This field is not used since the the logic monitor has only 1 capture bus */
        uint64_t undefine_63_3            :61;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_snap_sel_desc_t;

typedef union ar_pi_dbg_lm1_snap_dlo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_snap_dlo_desc_t;

typedef union ar_pi_dbg_lm1_snap_dmid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_snap_dmid_desc_t;

typedef union ar_pi_dbg_lm1_snap_dhi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_snap_dhi_desc_t;

typedef union ar_pi_dbg_lm1_rem_trig_desc {
    struct {
        // QW0
        uint64_t lm_enable_from_nic       : 1;	/* Enable remote trigger from NIC */
        uint64_t lm_enable_from_pi        : 1;	/* Enable Trigger from other PI Logic Monitor */
        uint64_t lm_enable_from_mmr       : 1;	/* Enable Trigger from MMR block */
        uint64_t undefine_63_3            :61;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_rem_trig_desc_t;

typedef union ar_pi_dbg_lm1_trig_sts_desc {
    struct {
        // QW0
        uint64_t lcl_trig0_rcv            : 1;	/* A local trigger0 has been received by LM */
        uint64_t lcl_trig1_rcv            : 1;	/* A local trigger1 has been received by LM */
        uint64_t rem_trig0_rcv            : 1;	/* A remote trigger0 has been received by LM */
        uint64_t rem_trig1_rcv            : 1;	/* A remote trigger1 has been received by LM */
        uint64_t rem_trig0_rcv_first      : 1;	/* The first trigger0 received by LM was remote */
        uint64_t rem_trig1_rcv_first      : 1;	/* The first trigger1 received by LM was remote */
        uint64_t rem_trig0_rcv_last       : 1;	/* The last trigger0 received by LM was remote */
        uint64_t rem_trig1_rcv_last       : 1;	/* The last trigger1 received by LM was remote */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_trig_sts_desc_t;

typedef union ar_pi_dbg_errinj_lm1_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* This status bit is cleared when the MMR is written and set when an error has been injected */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t parity                   : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding parity bit to be inverted */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  : 9;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_errinj_lm1_desc_t;

typedef union ar_pi_err_info_lm1_perr_desc {
    struct {
        // QW0
        uint64_t undefine_2_0             : 3;	/* undefined */
        uint64_t mmr_detected_perr        : 1;	/* The PE was observed during an MMR read */
        uint64_t undefine_11_4            : 8;	/* undefined */
        uint64_t address                  : 9;	/* Address with parity error on LM */
        uint64_t undefine_63_21           :43;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_info_lm1_perr_desc_t;

typedef union ar_pi_err_info_lm1_perr_cnt_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of parity errors that have occurred */
    };
    uint64_t qwords[1];
} ar_pi_err_info_lm1_perr_cnt_desc_t;

typedef union ar_pi_dbg_lm1_cap_sel_desc {
    struct {
        // QW0
        uint64_t pti                      : 4;	/* LM Select for the PTI Block */
        uint64_t pmi                      : 5;	/* LM Select for the PMI Block */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t pii                      : 4;	/* LM Select for the PII Block */
        uint64_t den                      : 4;	/* LM Select for the DEN Block */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_cap_sel_desc_t;

typedef union ar_pi_dbg_lm1_t0_cmp_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t0_cmp_lo_desc_t;

typedef union ar_pi_dbg_lm1_t0_cmp_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t0_cmp_mid_desc_t;

typedef union ar_pi_dbg_lm1_t0_cmp_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t0_cmp_hi_desc_t;

typedef union ar_pi_dbg_lm1_t0_mode_desc {
    struct {
        // QW0
        uint64_t data                     : 2;	/* 0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t0_mode_desc_t;

typedef union ar_pi_dbg_lm1_t0_mask_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t0_mask_lo_desc_t;

typedef union ar_pi_dbg_lm1_t0_mask_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t0_mask_mid_desc_t;

typedef union ar_pi_dbg_lm1_t0_mask_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t0_mask_hi_desc_t;

typedef union ar_pi_dbg_lm1_trig_sel_desc {
    struct {
        // QW0
        uint64_t pti                      : 4;	/* LM Select for the PTI Block */
        uint64_t pmi                      : 5;	/* LM Select for the PMI Block */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t pii                      : 4;	/* LM Select for the PII Block */
        uint64_t den                      : 4;	/* LM Select for the DEN Block */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_trig_sel_desc_t;

typedef union ar_pi_dbg_lm1_t1_cmp_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t1_cmp_lo_desc_t;

typedef union ar_pi_dbg_lm1_t1_cmp_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t1_cmp_mid_desc_t;

typedef union ar_pi_dbg_lm1_t1_cmp_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t1_cmp_hi_desc_t;

typedef union ar_pi_dbg_lm1_t1_mode_desc {
    struct {
        // QW0
        uint64_t data                     : 2;	/* 0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t1_mode_desc_t;

typedef union ar_pi_dbg_lm1_t1_mask_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t1_mask_lo_desc_t;

typedef union ar_pi_dbg_lm1_t1_mask_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t1_mask_mid_desc_t;

typedef union ar_pi_dbg_lm1_t1_mask_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_t1_mask_hi_desc_t;

typedef union ar_pi_dbg_lm1_mux_sel_desc {
    struct {
        // QW0
        uint64_t trig0_sel                : 3;	/* MUX Select for Trigger 0 Data 0 = PTI capture data 1 = PMI capture data 2 = PII capture data 3 = Data selected by PCLK_SEL0 4 = PTI trigger data 5 = PMI trigger data 6 = PII trigger data 7 = Data slected by PCLK_SEL1 */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t trig1_sel                : 3;	/* MUX Select for Trigger 1 Data */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t cap_sel                  : 3;	/* MUX Select for Capture Data */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t pclk_sel0                : 3;	/* LM Select for the ASYNC Block mux 0 0 = PTI capture datap 1 = PMI capture datap 2 = PII capture datap 3 = DEN capture datap 4 = PTI trigger datap 5 = PMI trigger datap 6 = PII trigger datap 7 = DEN trigger datap */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t pclk_sel1                : 3;	/* LM Select for the ASYNC Block mux 1 7-0 same as PCLK_SEL0 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_dbg_lm1_mux_sel_desc_t;


#endif
