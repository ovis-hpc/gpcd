/******************************************************************************
 * COPYRIGHT CRAY INC. ar_niclm_structs.h
 * FILE: ar_niclm_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:01 2014
 ******************************************************************************/

#ifndef _AR_NICLM_STRUCTS_H_
#define _AR_NICLM_STRUCTS_H_

/*
 *  ARIES NICLM STRUCTURES
 */
typedef union ar_nic_niclm_dbg_lm0_ctl_desc {
    struct {
        // QW0
        uint64_t lm_ctl_mode              : 4;	/* Capture Mode */
        uint64_t lm_trig_en               : 3;	/* Trigger enables for the three data capture ports, one for each NSLM, as defined in Table 118 */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t lm_ctl_t1_cnt            :10;	/* Trigger 1 Count/Delay */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t lm_ctl_t0_cnt            :10;	/* Trigger 0 Count/Delay */
        uint64_t undefine_47_42           : 6;	/* undefined */
        uint64_t lm_cap_state             : 2;	/* Capture State Machine Value */
        uint64_t lm_trig_state            : 3;	/* Trigger State Machine Value */
        uint64_t undefine_62_53           :10;	/* undefined */
        uint64_t lm_rst                   : 1;	/* Reset Capture block */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm0_ctl_desc_t;

typedef union ar_nic_niclm_dbg_lm0_ptrs_desc {
    struct {
        // QW0
        uint64_t lm_wr_ptr                : 9;	/* Write Pointer of the recording buffer */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t lm_rd_ptr                : 9;	/* Read Pointer of record buffer */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t lm_wr_ad_wrap            : 1;	/* Write Address Pointer has wrapped */
        uint64_t lm_mult_event            : 1;	/* Multiple recording events occurred during the same clock period */
        uint64_t lm_rec_done              : 1;	/* Record Done */
        uint64_t lm_rec_act               : 1;	/* Record Active */
        uint64_t undefine_63_36           :28;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm0_ptrs_desc_t;

typedef union ar_nic_niclm_dbg_lm0_read_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm0_read_lo_desc_t;

typedef union ar_nic_niclm_dbg_lm0_read_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm0_read_mid_desc_t;

typedef union ar_nic_niclm_dbg_lm0_read_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm0_read_hi_desc_t;

typedef union ar_nic_niclm_dbg_lm0_snap_sel_desc {
    struct {
        // QW0
        uint64_t sel                      : 2;	/* Logic Monitor Snapshot Select */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm0_snap_sel_desc_t;

typedef union ar_nic_niclm_dbg_lm0_snap_dlo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm0_snap_dlo_desc_t;

typedef union ar_nic_niclm_dbg_lm0_snap_dmid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm0_snap_dmid_desc_t;

typedef union ar_nic_niclm_dbg_lm0_snap_dhi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm0_snap_dhi_desc_t;

typedef union ar_nic_niclm_dbg_lm1_ctl_desc {
    struct {
        // QW0
        uint64_t lm_ctl_mode              : 4;	/* Capture Mode */
        uint64_t lm_trig_en               : 3;	/* Trigger enables for the three data capture ports, one for each NSLM, as defined in Table 118 */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t lm_ctl_t1_cnt            :10;	/* Trigger 1 Count/Delay */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t lm_ctl_t0_cnt            :10;	/* Trigger 0 Count/Delay */
        uint64_t undefine_47_42           : 6;	/* undefined */
        uint64_t lm_cap_state             : 2;	/* Capture State Machine Value */
        uint64_t lm_trig_state            : 3;	/* Trigger State Machine Value */
        uint64_t undefine_62_53           :10;	/* undefined */
        uint64_t lm_rst                   : 1;	/* Reset Capture block */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm1_ctl_desc_t;

typedef union ar_nic_niclm_dbg_lm1_ptrs_desc {
    struct {
        // QW0
        uint64_t lm_wr_ptr                : 9;	/* Write Pointer of the recording buffer */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t lm_rd_ptr                : 9;	/* Read Pointer of Record Buffer */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t lm_wr_ad_wrap            : 1;	/* Write Address Pointer has wrapped */
        uint64_t lm_mult_event            : 1;	/* Multiple Recording events occurred during the same clock period */
        uint64_t lm_rec_done              : 1;	/* Record Done */
        uint64_t lm_rec_act               : 1;	/* Record Active */
        uint64_t undefine_63_36           :28;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm1_ptrs_desc_t;

typedef union ar_nic_niclm_dbg_lm1_read_lo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 63:0 */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm1_read_lo_desc_t;

typedef union ar_nic_niclm_dbg_lm1_read_mid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 127:64 */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm1_read_mid_desc_t;

typedef union ar_nic_niclm_dbg_lm1_read_hi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Buffer Readout 191:128 */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm1_read_hi_desc_t;

typedef union ar_nic_niclm_dbg_lm1_snap_sel_desc {
    struct {
        // QW0
        uint64_t sel                      : 2;	/* Logic Monitor Snapshot Select */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm1_snap_sel_desc_t;

typedef union ar_nic_niclm_dbg_lm1_snap_dlo_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm1_snap_dlo_desc_t;

typedef union ar_nic_niclm_dbg_lm1_snap_dmid_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm1_snap_dmid_desc_t;

typedef union ar_nic_niclm_dbg_lm1_snap_dhi_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* Logic Monitor Snapshot Readout */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_lm1_snap_dhi_desc_t;

typedef union ar_nic_niclm_dbg_rem_trig_desc {
    struct {
        // QW0
        uint64_t lm0_enable_from_pi       : 3;	/* Enable remote triggers from PI to LM0 */
        uint64_t lm1_enable_from_pi       : 3;	/* Enable remote triggers from PI to LM1 */
        uint64_t lm0_enable_from_nl       : 3;	/* Enable remote triggers from NL to LM0 */
        uint64_t lm1_enable_from_nl       : 3;	/* Enable remote triggers from NL to LM1 */
        uint64_t lm0_enable_nic_hss_irq   : 3;	/* Enable triggers from NIC HSS IRQ to LM0 */
        uint64_t lm1_enable_nic_hss_irq   : 3;	/* Enable triggers from NIC HSS IRQ to LM1 */
        uint64_t lm0_enable_nic_net_hss_irq: 1;	/* Enable trigger from NIC NET HSS IRQ to LM0 */
        uint64_t lm0_enable_nic_req_hss_irq: 1;	/* Enable trigger from NIC REQ HSS IRQ to LM0 */
        uint64_t lm0_enable_nic_rsp_hss_irq: 1;	/* Enable trigger from NIC RSP HSS IRQ to LM0 */
        uint64_t lm1_enable_nic_net_hss_irq: 1;	/* Enable trigger from NIC NET HSS IRQ to LM1 */
        uint64_t lm1_enable_nic_req_hss_irq: 1;	/* Enable trigger from NIC REQ HSS IRQ to LM1 */
        uint64_t lm1_enable_nic_rsp_hss_irq: 1;	/* Enable trigger from NIC RSP HSS IRQ to LM1 */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t lm0_prop_to_pi           : 1;	/* Propagate LM0 triggers to PI */
        uint64_t lm1_prop_to_pi           : 1;	/* Propagate LM1 triggers to PI */
        uint64_t lm0_prop_to_nl           : 1;	/* Propagate LM0 triggers to NL */
        uint64_t lm1_prop_to_nl           : 1;	/* Propagate LM1 triggers to NL */
        uint64_t pi_prop_to_nl            : 1;	/* Propagate PI triggers to NL */
        uint64_t nl_prop_to_pi            : 1;	/* Propagate NL triggers to PI */
        uint64_t undefine_63_38           :26;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_rem_trig_desc_t;

typedef union ar_nic_niclm_dbg_trig_sts_desc {
    struct {
        // QW0
        uint64_t lm0_lcl_trig0_rcv        : 1;	/* A local trigger0 has been received by LM0 */
        uint64_t lm0_lcl_trig1_rcv        : 1;	/* A local trigger1 has been received by LM0 */
        uint64_t lm0_rem_trig0_rcv        : 1;	/* A remote trigger0 has been received by LM0 */
        uint64_t lm0_rem_trig1_rcv        : 1;	/* A remote trigger1 has been received by LM0 */
        uint64_t lm0_rem_trig0_rcv_first  : 1;	/* The first trigger0 received by LM0 was remote */
        uint64_t lm0_rem_trig1_rcv_first  : 1;	/* The first trigger1 received by LM0 was remote */
        uint64_t lm0_rem_trig0_rcv_last   : 1;	/* The last trigger0 received by LM0 was remote */
        uint64_t lm0_rem_trig1_rcv_last   : 1;	/* The last trigger1 received by LM0 was remote */
        uint64_t undefine_31_8            :24;	/* undefined */
        uint64_t lm1_lcl_trig0_rcv        : 1;	/* A local trigger0 has been received by LM1 */
        uint64_t lm1_lcl_trig1_rcv        : 1;	/* A local trigger1 has been received by LM1 */
        uint64_t lm1_rem_trig0_rcv        : 1;	/* A remote trigger0 has been received by LM1 */
        uint64_t lm1_rem_trig1_rcv        : 1;	/* A remote trigger1 has been received by LM1 */
        uint64_t lm1_rem_trig0_rcv_first  : 1;	/* The first trigger0 received by LM1 was remote */
        uint64_t lm1_rem_trig1_rcv_first  : 1;	/* The first trigger1 received by LM1 was remote */
        uint64_t lm1_rem_trig0_rcv_last   : 1;	/* The last trigger0 received by LM1 was remote */
        uint64_t lm1_rem_trig1_rcv_last   : 1;	/* The last trigger1 received by LM1 was remote */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_trig_sts_desc_t;

typedef union ar_nic_niclm_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t lm0_ram_parity           : 1;	/* An parity error occurred reading the Logic Monitor 0 RAM */
        uint64_t lm1_ram_parity           : 1;	/* An parity error occurred reading the Logic Monitor 1 RAM */
        uint64_t netmon_trigger0          : 1;	/* The NETMON Trigger 0 was raised */
        uint64_t netmon_trigger1          : 1;	/* The NETMON Trigger 1 was raised */
        uint64_t reqmon_trigger0          : 1;	/* The REQMON Trigger 0 was raised */
        uint64_t reqmon_trigger1          : 1;	/* The REQMON Trigger 1 was raised */
        uint64_t rspmon_trigger0          : 1;	/* The RSPMON Trigger 0 was raised */
        uint64_t rspmon_trigger1          : 1;	/* The RSPMON Trigger 1 was raised */
        uint64_t nl_trigger0              : 1;	/* The NL Trigger 0 was raised */
        uint64_t nl_trigger1              : 1;	/* The NL Trigger 1 was raised */
        uint64_t pi_trigger0              : 1;	/* The PI Trigger 0 was raised */
        uint64_t pi_trigger1              : 1;	/* The PI Trigger 1 was raised */
        uint64_t undefine_63_13           :51;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_err_flg_desc_t;

typedef union ar_nic_niclm_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t lm0_ram_parity           : 1;	/* An parity error occurred reading the Logic Monitor 0 RAM */
        uint64_t lm1_ram_parity           : 1;	/* An parity error occurred reading the Logic Monitor 1 RAM */
        uint64_t netmon_trigger0          : 1;	/* The NETMON Trigger 0 was raised */
        uint64_t netmon_trigger1          : 1;	/* The NETMON Trigger 1 was raised */
        uint64_t reqmon_trigger0          : 1;	/* The REQMON Trigger 0 was raised */
        uint64_t reqmon_trigger1          : 1;	/* The REQMON Trigger 1 was raised */
        uint64_t rspmon_trigger0          : 1;	/* The RSPMON Trigger 0 was raised */
        uint64_t rspmon_trigger1          : 1;	/* The RSPMON Trigger 1 was raised */
        uint64_t nl_trigger0              : 1;	/* The NL Trigger 0 was raised */
        uint64_t nl_trigger1              : 1;	/* The NL Trigger 1 was raised */
        uint64_t pi_trigger0              : 1;	/* The PI Trigger 0 was raised */
        uint64_t pi_trigger1              : 1;	/* The PI Trigger 1 was raised */
        uint64_t undefine_63_13           :51;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_err_clr_desc_t;

typedef union ar_nic_niclm_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t lm0_ram_parity           : 1;	/* 1:1 */
        uint64_t lm1_ram_parity           : 1;	/* 2:2 */
        uint64_t netmon_trigger0          : 1;	/* 3:3 */
        uint64_t netmon_trigger1          : 1;	/* 4:4 */
        uint64_t reqmon_trigger0          : 1;	/* 5:5 */
        uint64_t reqmon_trigger1          : 1;	/* 6:6 */
        uint64_t rspmon_trigger0          : 1;	/* 7:7 */
        uint64_t rspmon_trigger1          : 1;	/* 8:8 */
        uint64_t nl_trigger0              : 1;	/* 9:9 */
        uint64_t nl_trigger1              : 1;	/* 10:10 */
        uint64_t pi_trigger0              : 1;	/* 11:11 */
        uint64_t pi_trigger1              : 1;	/* 12:12 */
        uint64_t undefine_63_13           :51;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_err_hss_msk_desc_t;

typedef union ar_nic_niclm_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t lm0_ram_parity           : 1;	/* 1:1 */
        uint64_t lm1_ram_parity           : 1;	/* 2:2 */
        uint64_t netmon_trigger0          : 1;	/* 3:3 */
        uint64_t netmon_trigger1          : 1;	/* 4:4 */
        uint64_t reqmon_trigger0          : 1;	/* 5:5 */
        uint64_t reqmon_trigger1          : 1;	/* 6:6 */
        uint64_t rspmon_trigger0          : 1;	/* 7:7 */
        uint64_t rspmon_trigger1          : 1;	/* 8:8 */
        uint64_t nl_trigger0              : 1;	/* 9:9 */
        uint64_t nl_trigger1              : 1;	/* 10:10 */
        uint64_t pi_trigger0              : 1;	/* 11:11 */
        uint64_t pi_trigger1              : 1;	/* 12:12 */
        uint64_t undefine_63_13           :51;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_err_os_msk_desc_t;

typedef union ar_nic_niclm_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t lm0_ram_parity           : 1;	/* 1:1 */
        uint64_t lm1_ram_parity           : 1;	/* 2:2 */
        uint64_t netmon_trigger0          : 1;	/* 3:3 */
        uint64_t netmon_trigger1          : 1;	/* 4:4 */
        uint64_t reqmon_trigger0          : 1;	/* 5:5 */
        uint64_t reqmon_trigger1          : 1;	/* 6:6 */
        uint64_t rspmon_trigger0          : 1;	/* 7:7 */
        uint64_t rspmon_trigger1          : 1;	/* 8:8 */
        uint64_t nl_trigger0              : 1;	/* 9:9 */
        uint64_t nl_trigger1              : 1;	/* 10:10 */
        uint64_t pi_trigger0              : 1;	/* 11:11 */
        uint64_t pi_trigger1              : 1;	/* 12:12 */
        uint64_t undefine_63_13           :51;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_err_first_flg_desc_t;

typedef union ar_nic_niclm_dbg_errinj_perr_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t ram_select               : 2;	/* Mask of Logic Monitor RAMs */
        uint64_t lm0_triggered            : 1;	/* This bit is set when an error is injected in LM0 */
        uint64_t lm1_triggered            : 1;	/* This bit is set when an error is injected in LM1 */
        uint64_t undefine_15_8            : 8;	/* undefined */
        uint64_t checkbits                : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding parity bit for the memory address read to be inverted */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  : 9;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_dbg_errinj_perr_desc_t;

typedef union ar_nic_niclm_err_info_perr_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t lm0_mmr_detected_perr    : 1;	/* The LM0 parity error was observed during an MMR read */
        uint64_t lm1_mmr_detected_perr    : 1;	/* The LM1 parity error was observed during an MMR read */
        uint64_t undefine_11_4            : 8;	/* undefined */
        uint64_t lm0_address              : 9;	/* Address with parity error on LM0 */
        uint64_t undefine_31_21           :11;	/* undefined */
        uint64_t lm1_address              : 9;	/* Address with parity error on LM1 */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_err_info_perr_desc_t;

typedef union ar_nic_niclm_err_info_lm0_perr_cnt_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of parity errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_niclm_err_info_lm0_perr_cnt_desc_t;

typedef union ar_nic_niclm_err_info_lm1_perr_cnt_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of parity errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_niclm_err_info_lm1_perr_cnt_desc_t;

typedef union ar_nic_niclm_err_frc_hss_irq_desc {
    struct {
        // QW0
        uint64_t undefine_63_0            :64;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_niclm_err_frc_hss_irq_desc_t;


#endif
