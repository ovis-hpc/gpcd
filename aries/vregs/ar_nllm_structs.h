/******************************************************************************
 * COPYRIGHT CRAY INC. ar_nllm_structs.h
 * FILE: ar_nllm_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:00 2014
 ******************************************************************************/

#ifndef _AR_NLLM_STRUCTS_H_
#define _AR_NLLM_STRUCTS_H_

/*
 *  ARIES NLLM STRUCTURES
 */
typedef union ar_nl_dbg_lm_ctl_desc {
    struct {
        // QW0
        uint64_t lm_ctl_mode              : 4;	/* Capture Mode */
        uint64_t lm_trig_en               : 8;	/* Trigger enables for the eigth data capture ports */
        uint64_t undefine_15_12           : 4;	/* undefined */
        uint64_t lm_ctl_t1_cnt            :10;	/* Trigger 1 Count/Delay */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t lm_ctl_t0_cnt            :10;	/* Trigger 0 Count/Delay */
        uint64_t undefine_47_42           : 6;	/* undefined */
        uint64_t lm_trig_state            : 6;	/* Trigger State Machine Value */
        uint64_t undefine_62_54           : 9;	/* undefined */
        uint64_t lm_rst                   : 1;	/* Reset Capture block */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_ctl_desc_t;

typedef union ar_nl_dbg_lm_ptrs_desc {
    struct {
        // QW0
        uint64_t lm_wr_ptr                :16;	/* Write Pointer of the Record Buffer */
        uint64_t lm_rd_ptr                :16;	/* Read Pointer of Record Buffer */
        uint64_t lm_wr_ad_wrap            : 1;	/* Write Address Pointer has wrapped */
        uint64_t lm_mult_event            : 1;	/* Multiple Recording events occured during the same clock period */
        uint64_t lm_rec_done              : 1;	/* Record Done */
        uint64_t lm_rec_act               : 1;	/* Record Active */
        uint64_t lm_trig_delay            :10;	/* Current value of active trigger delay counter */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_ptrs_desc_t;

typedef union ar_nl_dbg_lm_read_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_read_lo_desc_t;

typedef union ar_nl_dbg_lm_read_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_read_mid_desc_t;

typedef union ar_nl_dbg_lm_read_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_read_hi_desc_t;

typedef union ar_nl_dbg_lm_snap_sel_desc {
    struct {
        // QW0
        uint64_t sel                      : 3;	/* Logic Monitor Snapshot Select */
        uint64_t undefine_63_3            :61;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_snap_sel_desc_t;

typedef union ar_nl_dbg_lm_snap_dlo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_snap_dlo_desc_t;

typedef union ar_nl_dbg_lm_snap_dmid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_snap_dmid_desc_t;

typedef union ar_nl_dbg_lm_snap_dhi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_snap_dhi_desc_t;

typedef union ar_nl_dbg_lm_rem_trig_desc {
    struct {
        // QW0
        uint64_t lm_enable_from_nic0      : 8;	/* Enable remote triggers from NIC0 */
        uint64_t lm_enable_from_nic1      : 8;	/* Enable remote triggers from NIC1 */
        uint64_t lm_enable_from_nic2      : 8;	/* Enable remote triggers from NIC2 */
        uint64_t lm_enable_from_nic3      : 8;	/* Enable remote triggers from NIC3 */
        uint64_t lm_prop_to_nic           : 4;	/* Propagate local triggers to NICs */
        uint64_t nic_prop_to_nic0         : 1;	/* Propagate NIC1, NIC2, and NIC3 triggers to NIC0 */
        uint64_t nic_prop_to_nic1         : 1;	/* Propagate NIC0, NIC2, and NIC3 triggers to NIC1 */
        uint64_t nic_prop_to_nic2         : 1;	/* Propagate NIC0, NIC1, and NIC3 triggers to NIC2 */
        uint64_t nic_prop_to_nic3         : 1;	/* Propagate NIC0, NIC1, and NIC2 triggers to NIC3, only valid in cclk Logic Monitor */
        uint64_t lm_enable_from_nl        : 8;	/* Enable Trigger from other NL Logic Monitor */
        uint64_t lm_enable_from_mmr       : 8;	/* Enable Trigger from MMR block */
        uint64_t lm_prop_to_nl            : 1;	/* Propagate local triggers to other NL LM */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_rem_trig_desc_t;

typedef union ar_nl_dbg_lm_trig_sts_desc {
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
} ar_nl_dbg_lm_trig_sts_desc_t;

typedef union ar_nl_dbg_errinj_lm_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once */
        uint64_t triggered                : 1;	/* This status bit is cleared when the MMR is written and set when an error has been injected */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t parity                   : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding parity bit to be inverted */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  : 9;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_dbg_errinj_lm_desc_t;

typedef union ar_nl_err_info_lm_perr_desc {
    struct {
        // QW0
        uint64_t undefine_2_0             : 3;	/* undefined */
        uint64_t mmr_detected_perr        : 1;	/* The PE was observed during an MMR read */
        uint64_t undefine_11_4            : 8;	/* undefined */
        uint64_t address                  : 9;	/* Address with parity error on LM */
        uint64_t undefine_63_21           :43;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_lm_perr_desc_t;

typedef union ar_nl_err_info_lm_perr_cnt_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of parity errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nl_err_info_lm_perr_cnt_desc_t;

typedef union ar_nl_dbg_lm_cap_sel_desc {
    struct {
        // QW0
        uint64_t data_sel                 : 8;	/*  */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_cap_sel_desc_t;

typedef union ar_nl_dbg_lm_t0_cmp_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t0_cmp_lo_desc_t;

typedef union ar_nl_dbg_lm_t0_cmp_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t0_cmp_mid_desc_t;

typedef union ar_nl_dbg_lm_t0_cmp_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t0_cmp_hi_desc_t;

typedef union ar_nl_dbg_lm_t0_mode_desc {
    struct {
        // QW0
        uint64_t data                     : 2;	/* 0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t0_mode_desc_t;

typedef union ar_nl_dbg_lm_t0_mask_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t0_mask_lo_desc_t;

typedef union ar_nl_dbg_lm_t0_mask_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t0_mask_mid_desc_t;

typedef union ar_nl_dbg_lm_t0_mask_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t0_mask_hi_desc_t;

typedef union ar_nl_dbg_lm_trig_sel_desc {
    struct {
        // QW0
        uint64_t data0_sel                : 8;	/*  */
        uint64_t data1_sel                : 8;	/*  */
        uint64_t data2_sel                : 8;	/*  */
        uint64_t data3_sel                : 8;	/*  */
        uint64_t data4_sel                : 8;	/*  */
        uint64_t data5_sel                : 8;	/*  */
        uint64_t data6_sel                : 8;	/*  */
        uint64_t data7_sel                : 8;	/*  */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_trig_sel_desc_t;

typedef union ar_nl_dbg_lm_t1_cmp_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t1_cmp_lo_desc_t;

typedef union ar_nl_dbg_lm_t1_cmp_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t1_cmp_mid_desc_t;

typedef union ar_nl_dbg_lm_t1_cmp_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t1_cmp_hi_desc_t;

typedef union ar_nl_dbg_lm_t1_mode_desc {
    struct {
        // QW0
        uint64_t data                     : 2;	/* 0: Generate trigger pulse when the bits set in the mask register match between the trigger data and the match data */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t1_mode_desc_t;

typedef union ar_nl_dbg_lm_t1_mask_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t1_mask_lo_desc_t;

typedef union ar_nl_dbg_lm_t1_mask_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t1_mask_mid_desc_t;

typedef union ar_nl_dbg_lm_t1_mask_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_t1_mask_hi_desc_t;

typedef union ar_nl_dbg_lm_mux_sel_desc {
    struct {
        // QW0
        uint64_t dst_15_0                 :16;	/* Destination */
        uint64_t trig0_sel                : 8;	/*  */
        uint64_t trig1_sel                : 8;	/*  */
        uint64_t cap_sel                  : 8;	/*  */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_dbg_lm_mux_sel_desc_t;


#endif
