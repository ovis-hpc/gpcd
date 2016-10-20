/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pi_ip_structs.h
 * FILE: ar_pi_ip_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_PI_IP_STRUCTS_H_
#define _AR_PI_IP_STRUCTS_H_

/*
 *  ARIES PI_IP STRUCTURES
 */
typedef union ar_pi_cfg_den_ip_desc {
    struct {
        // QW0
        uint64_t config_enable            : 1;	/* When this input is set to 0 in the EP mode, the core will generate a CRS Completion in response to Configuration Requests */
        uint64_t link_training_enable     : 1;	/* This input must be set to 1 to enable the Link Training Status State Machine (LTSSM) to brink up the link */
        uint64_t undefine_3_2             : 2;	/* undefined */
        uint64_t pltrst_enable            : 1;	/* Platform Reset Enable */
        uint64_t link_down_enable         : 1;	/* Link Down reset Enable */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t phantom_function_mode_sel: 2;	/* These two strap inputs are used to select the number of Physical (Real) and Phantom Functions enabled in the EndPoint */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t pcie_generation_sel      : 2;	/* This strap input selects the generation of the PCI Express protocol supported by the core */
        uint64_t pcie_disable_gen3_dc_balance: 1;	/* Setting changes Denali IP to act as a pcie gen 3 version 0 */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t lane_count_in            : 3;	/* This strap input allows the core to be brought up with a reduced link-width */
        uint64_t debug_status_perf_cntr_sel: 1;	/* If set, selects the upper 8 bits of the Denali debug status bits to be sent to the pclk performance counter instead of the lower 8 bits */
        uint64_t phy_lane_reset_pltrst_enable: 1;	/* Also force lane reset when platform reset asserts */
        uint64_t undefine_31_21           :11;	/* undefined */
        uint64_t link_down_reset_count    :16;	/* Link Down Reset is pulsed for 8 pclks (500Mhz) from the Denali IP */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_cfg_den_ip_desc_t;

typedef union ar_pi_sts_den_ip_desc {
    struct {
        // QW0
        uint64_t hot_reset_out            : 1;	/* The core activates this output when a hot reset is received from the link in the Endpoint mode */
        uint64_t link_down_reset_out      : 1;	/* This output is asserted by the core when its LTSSM detects a link-down event (when the LINK_UP state variable goes to 0) */
        uint64_t negotiated_speed         : 2;	/* Current operating speed of the link (00 = 2 */
        uint64_t link_status              : 2;	/* Status of the PCI Express link */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t max_read_req_size        : 3;	/* The maximum request size field programmed in the PCI Express Device Control Register */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t link_power_state         : 4;	/* Current power state of the PCIe link */
        uint64_t ltssm_state              : 6;	/* Current state of the Link Training and Status State Machine within the core */
        uint64_t undefine_23_22           : 2;	/* undefined */
        uint64_t max_payload_size         : 3;	/* The maximum payload size field programmed in the PCI Express Device Control Register */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t rcb_status               : 4;	/* Provides the setting of the Read Completion Boundary (RCB) bit in the Link Control Register of each Physical Function */
        uint64_t function_status          :16;	/* These outputs indicate the states of the Command Register bits in the PCI configuration space of each Function */
        uint64_t function_power_state     :12;	/* These outputs provide the current power state of the Physical Functions */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_den_ip_desc_t;

typedef union ar_pi_err_flg_ip_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t den_fatal_error          : 1;	/* Denali Core Fatal Error */
        uint64_t den_non_fatal_error      : 1;	/* Denali Core Non Fatal Error */
        uint64_t den_correctable_error    : 1;	/* Denali Core Correctable Error */
        uint64_t den_dpa_intr             : 4;	/* Denali Core Dynamic Power Allocation Interrupt */
        uint64_t den_intr                 : 1;	/* Denali Core Local Interrupt */
        uint64_t den_speed_change         : 1;	/* The pcie had a link width change or a speed change (Gen1, 2, or 3 speed) */
        uint64_t pm_cntr_perr             : 1;	/* performance monitor counter parity error */
        uint64_t pm_cntr_rollover         : 1;	/* performance monitor counter rollover */
        uint64_t lb_ring_pclk_ovflow      : 1;	/* LB Ring FIFO for converting pclk to cclk has overflowed */
        uint64_t lb_ring_pclk_unflow      : 1;	/* LB Ring FIFO for converting cclk to pclk has underflowed */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_flg_ip_desc_t;

typedef union ar_pi_err_clr_ip_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t den_fatal_error          : 1;	/* Denali Core Fatal Error */
        uint64_t den_non_fatal_error      : 1;	/* Denali Core Non Fatal Error */
        uint64_t den_correctable_error    : 1;	/* Denali Core Correctable Error */
        uint64_t den_dpa_intr             : 4;	/* Denali Core Dynamic Power Allocation Interrupt */
        uint64_t den_intr                 : 1;	/* Denali Core Local Interrupt */
        uint64_t den_speed_change         : 1;	/* The pcie had a link width change or a speed change (Gen1, 2, or 3 speed) */
        uint64_t pm_cntr_perr             : 1;	/* performance monitor counter parity error */
        uint64_t pm_cntr_rollover         : 1;	/* performance monitor counter rollover */
        uint64_t lb_ring_pclk_ovflow      : 1;	/* LB Ring FIFO for converting pclk to cclk has overflowed */
        uint64_t lb_ring_pclk_unflow      : 1;	/* LB Ring FIFO for converting cclk to pclk has underflowed */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_clr_ip_desc_t;

typedef union ar_pi_err_hss_msk_ip_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t den_fatal_error          : 1;	/* 1:1 */
        uint64_t den_non_fatal_error      : 1;	/* 2:2 */
        uint64_t den_correctable_error    : 1;	/* 3:3 */
        uint64_t den_dpa_intr             : 4;	/* 7:4 */
        uint64_t den_intr                 : 1;	/* 8:8 */
        uint64_t den_speed_change         : 1;	/* 9:9 */
        uint64_t pm_cntr_perr             : 1;	/* 10:10 */
        uint64_t pm_cntr_rollover         : 1;	/* 11:11 */
        uint64_t lb_ring_pclk_ovflow      : 1;	/* 12:12 */
        uint64_t lb_ring_pclk_unflow      : 1;	/* 13:13 */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_hss_msk_ip_desc_t;

typedef union ar_pi_err_os_msk_ip_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t den_fatal_error          : 1;	/* 1:1 */
        uint64_t den_non_fatal_error      : 1;	/* 2:2 */
        uint64_t den_correctable_error    : 1;	/* 3:3 */
        uint64_t den_dpa_intr             : 4;	/* 7:4 */
        uint64_t den_intr                 : 1;	/* 8:8 */
        uint64_t den_speed_change         : 1;	/* 9:9 */
        uint64_t pm_cntr_perr             : 1;	/* 10:10 */
        uint64_t pm_cntr_rollover         : 1;	/* 11:11 */
        uint64_t lb_ring_pclk_ovflow      : 1;	/* 12:12 */
        uint64_t lb_ring_pclk_unflow      : 1;	/* 13:13 */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_os_msk_ip_desc_t;

typedef union ar_pi_err_first_flg_ip_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t den_fatal_error          : 1;	/* 1:1 */
        uint64_t den_non_fatal_error      : 1;	/* 2:2 */
        uint64_t den_correctable_error    : 1;	/* 3:3 */
        uint64_t den_dpa_intr             : 4;	/* 7:4 */
        uint64_t den_intr                 : 1;	/* 8:8 */
        uint64_t den_speed_change         : 1;	/* 9:9 */
        uint64_t pm_cntr_perr             : 1;	/* 10:10 */
        uint64_t pm_cntr_rollover         : 1;	/* 11:11 */
        uint64_t lb_ring_pclk_ovflow      : 1;	/* 12:12 */
        uint64_t lb_ring_pclk_unflow      : 1;	/* 13:13 */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_first_flg_ip_desc_t;

typedef union ar_pi_phy_status_den_ip_desc {
    struct {
        // QW0
        uint64_t phy_status_sample        :16;	/* One bit per lane */
        uint64_t phy_status_override      :16;	/* One bit per lane */
        uint64_t phy_status_override_enable:16;	/* One bit per lane */
        uint64_t cmu_ok_o                 : 1;	/* CMU OK from phy quad 0 */
        uint64_t cmu_ok_1                 : 1;	/* CMU OK from phy quad 1 */
        uint64_t cmu_ok_2                 : 1;	/* CMU OK from phy quad 2 */
        uint64_t cmu_ok_3                 : 1;	/* CMU OK from phy quad 3 */
        uint64_t undefine_63_52           :12;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_status_den_ip_desc_t;

typedef union ar_pi_phy_equal_den_ip_desc {
    struct {
        // QW0
        uint64_t link_eq_fs               : 6;	/* This input must be set to the Full Swing (FS) parameter value to be advertised by the core in its TS1 ordered sets during Phase 1 of the linkequalization procedure */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t link_eq_lf               : 6;	/* This input must be set to the Low Frequency (FS) parameter value to be advertised by the core in its TS1 ordered sets during Phase 1 of the link equalization procedure */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t max_delta                : 6;	/* maximum delta */
        uint64_t undefine_23_22           : 2;	/* undefined */
        uint64_t min_adapt_cycles         : 6;	/* Minimum adaptaion cycles */
        uint64_t undefine_31_30           : 2;	/* undefined */
        uint64_t max_adapt_cycles         : 6;	/* Maximum adaptation cycles */
        uint64_t undefine_63_38           :26;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_den_ip_desc_t;

typedef union ar_pi_phy_equal_coeff_0_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_0_desc_t;

typedef union ar_pi_phy_equal_coeff_1_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_1_desc_t;

typedef union ar_pi_phy_equal_coeff_2_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_2_desc_t;

typedef union ar_pi_phy_equal_coeff_3_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_3_desc_t;

typedef union ar_pi_phy_equal_coeff_4_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_4_desc_t;

typedef union ar_pi_phy_equal_coeff_5_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_5_desc_t;

typedef union ar_pi_phy_equal_coeff_6_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_6_desc_t;

typedef union ar_pi_phy_equal_coeff_7_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_7_desc_t;

typedef union ar_pi_phy_equal_coeff_8_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_8_desc_t;

typedef union ar_pi_phy_equal_coeff_9_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_9_desc_t;

typedef union ar_pi_phy_equal_coeff_10_desc {
    struct {
        // QW0
        uint64_t cm1                      : 6;	/* Precursor coefficient */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t c0                       : 6;	/* Cursor coefficient */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t cp1                      : 6;	/* Post cursor coeeficient */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_phy_equal_coeff_10_desc_t;

typedef union ar_pi_pmi_pclk_cfg_desc {
    struct {
        // QW0
        uint64_t prsp_fc_thresh           : 4;	/* PCIe Response Buffer Flow Control Threshold */
        uint64_t pnp_arb_ena              : 1;	/* Posted/Non-Posted request Arbitration Enable in PReq buffer */
        uint64_t pm_select                : 1;	/* Performance Monitor Select: Determines all/part of what is counted by Performance Monitors */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t prf_preq_ptc_blkd_en     : 3;	/* Enable for PReq PTC Buffer Blocked Performance counter */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t prf_preq_blkd_en         : 1;	/* Enable for PReq Request Blocked Performance counter */
        uint64_t prf_prsp_hal_blkd_en     : 1;	/* Enable for PRsp HAL Blocked Performance counter */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_pclk_cfg_desc_t;

typedef union ar_pi_pmi_dbg_errinj_preq_desc {
    struct {
        // QW0
        uint64_t enable0                  : 1;	/* Enable error injection for PREQ FIFO0 data out */
        uint64_t enable1                  : 1;	/* Enable error injectionfor PREQ FIFO1 data out */
        uint64_t enable2                  : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error in the flit specified by COUNT in one packet */
        uint64_t count                    : 3;	/* Flit in which to inject the error */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* This status bit should be clear when the MMR is written by software */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t checkbits_lo             : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the PRSP buffer completion response bits 48:0 to be inverted */
        uint64_t checkbits_up             : 9;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the PRSP buffer completion response bits 295:49 to be inverted */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_dbg_errinj_preq_desc_t;

typedef union ar_pi_pmi_dbg_errinj_prsp_hal_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error in the flit specified by COUNT in one packet */
        uint64_t count                    : 2;	/* Flit in which to inject the error */
        uint64_t triggered                : 1;	/* This status bit should be clear when the MMR is written by software */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t parity                   :32;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_dbg_errinj_prsp_hal_desc_t;

typedef union ar_pi_pmi_fifo2_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t preq0_mbe                : 2;	/* PReq Buffer0 Multi-Bit Error */
        uint64_t preq1_mbe                : 2;	/* PReq Buffer1 Multi-Bit Error */
        uint64_t preq2_mbe                : 2;	/* PReq Buffer2 Multi-Bit Error */
        uint64_t preq0_sbe                : 2;	/* PReq Buffer0 Single-Bit Error */
        uint64_t preq1_sbe                : 2;	/* PReq Buffer1 Single-Bit Error */
        uint64_t preq2_sbe                : 2;	/* PReq Buffer2 Single-Bit Error */
        uint64_t preq0_unflow             : 1;	/* PReq Buffer 0 Underflow */
        uint64_t preq1_unflow             : 1;	/* PReq Buffer 1 Underflow */
        uint64_t preq2_unflow             : 1;	/* PReq Buffer 2 Underflow */
        uint64_t prsp_ovflow              : 1;	/* PRsp Buffer Overflow */
        uint64_t preq0_tbe                : 1;	/* PReq Buffer 0 Tail Bit Error */
        uint64_t preq1_tbe                : 1;	/* PReq Buffer 1 Tail Bit Error */
        uint64_t preq2_tbe                : 1;	/* PReq Buffer 2 Tail Bit Error */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo2_err_flg_desc_t;

typedef union ar_pi_pmi_fifo2_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t preq0_mbe                : 2;	/* PReq Buffer0 Multi-Bit Error */
        uint64_t preq1_mbe                : 2;	/* PReq Buffer1 Multi-Bit Error */
        uint64_t preq2_mbe                : 2;	/* PReq Buffer2 Multi-Bit Error */
        uint64_t preq0_sbe                : 2;	/* PReq Buffer0 Single-Bit Error */
        uint64_t preq1_sbe                : 2;	/* PReq Buffer1 Single-Bit Error */
        uint64_t preq2_sbe                : 2;	/* PReq Buffer2 Single-Bit Error */
        uint64_t preq0_unflow             : 1;	/* PReq Buffer 0 Underflow */
        uint64_t preq1_unflow             : 1;	/* PReq Buffer 1 Underflow */
        uint64_t preq2_unflow             : 1;	/* PReq Buffer 2 Underflow */
        uint64_t prsp_ovflow              : 1;	/* PRsp Buffer Overflow */
        uint64_t preq0_tbe                : 1;	/* PReq Buffer 0 Tail Bit Error */
        uint64_t preq1_tbe                : 1;	/* PReq Buffer 1 Tail Bit Error */
        uint64_t preq2_tbe                : 1;	/* PReq Buffer 2 Tail Bit Error */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo2_err_clr_desc_t;

typedef union ar_pi_pmi_fifo2_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t preq0_mbe                : 2;	/* 2:1 */
        uint64_t preq1_mbe                : 2;	/* 4:3 */
        uint64_t preq2_mbe                : 2;	/* 6:5 */
        uint64_t preq0_sbe                : 2;	/* 8:7 */
        uint64_t preq1_sbe                : 2;	/* 10:9 */
        uint64_t preq2_sbe                : 2;	/* 12:11 */
        uint64_t preq0_unflow             : 1;	/* 13:13 */
        uint64_t preq1_unflow             : 1;	/* 14:14 */
        uint64_t preq2_unflow             : 1;	/* 15:15 */
        uint64_t prsp_ovflow              : 1;	/* 16:16 */
        uint64_t preq0_tbe                : 1;	/* 17:17 */
        uint64_t preq1_tbe                : 1;	/* 18:18 */
        uint64_t preq2_tbe                : 1;	/* 19:19 */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo2_err_hss_msk_desc_t;

typedef union ar_pi_pmi_fifo2_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t preq0_mbe                : 2;	/* 2:1 */
        uint64_t preq1_mbe                : 2;	/* 4:3 */
        uint64_t preq2_mbe                : 2;	/* 6:5 */
        uint64_t preq0_sbe                : 2;	/* 8:7 */
        uint64_t preq1_sbe                : 2;	/* 10:9 */
        uint64_t preq2_sbe                : 2;	/* 12:11 */
        uint64_t preq0_unflow             : 1;	/* 13:13 */
        uint64_t preq1_unflow             : 1;	/* 14:14 */
        uint64_t preq2_unflow             : 1;	/* 15:15 */
        uint64_t prsp_ovflow              : 1;	/* 16:16 */
        uint64_t preq0_tbe                : 1;	/* 17:17 */
        uint64_t preq1_tbe                : 1;	/* 18:18 */
        uint64_t preq2_tbe                : 1;	/* 19:19 */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo2_err_os_msk_desc_t;

typedef union ar_pi_pmi_fifo2_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t preq0_mbe                : 2;	/* 2:1 */
        uint64_t preq1_mbe                : 2;	/* 4:3 */
        uint64_t preq2_mbe                : 2;	/* 6:5 */
        uint64_t preq0_sbe                : 2;	/* 8:7 */
        uint64_t preq1_sbe                : 2;	/* 10:9 */
        uint64_t preq2_sbe                : 2;	/* 12:11 */
        uint64_t preq0_unflow             : 1;	/* 13:13 */
        uint64_t preq1_unflow             : 1;	/* 14:14 */
        uint64_t preq2_unflow             : 1;	/* 15:15 */
        uint64_t prsp_ovflow              : 1;	/* 16:16 */
        uint64_t preq0_tbe                : 1;	/* 17:17 */
        uint64_t preq1_tbe                : 1;	/* 18:18 */
        uint64_t preq2_tbe                : 1;	/* 19:19 */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo2_err_first_flg_desc_t;

typedef union ar_pi_pmi_mbe_err_info2_desc {
    struct {
        // QW0
        uint64_t preq0_synd0              : 8;	/* PReq0 Buffer Data Syndrome0 */
        uint64_t preq0_synd1              : 9;	/* PReq0 Buffer Data Syndrome1 */
        uint64_t preq1_synd0              : 8;	/* PReq1 Buffer Data Syndrome0 */
        uint64_t preq1_synd1              : 9;	/* PReq1 Buffer Data Syndrome1 */
        uint64_t preq2_synd0              : 8;	/* PReq2 Buffer Data Syndrome0 */
        uint64_t preq2_synd1              : 9;	/* PReq2 Buffer Data Syndrome1 */
        uint64_t undefine_63_51           :13;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_mbe_err_info2_desc_t;

typedef union ar_pi_pmi_sbe_err_info2_desc {
    struct {
        // QW0
        uint64_t preq0_synd0              : 8;	/* PReq0 Buffer Data Syndrome0 */
        uint64_t preq0_synd1              : 9;	/* PReq0 Buffer Data Syndrome1 */
        uint64_t preq1_synd0              : 8;	/* PReq1 Buffer Data Syndrome0 */
        uint64_t preq1_synd1              : 9;	/* PReq1 Buffer Data Syndrome1 */
        uint64_t preq2_synd0              : 8;	/* PReq2 Buffer Data Syndrome0 */
        uint64_t preq2_synd1              : 9;	/* PReq2 Buffer Data Syndrome1 */
        uint64_t undefine_63_51           :13;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_sbe_err_info2_desc_t;

typedef union ar_pi_pmi_preq_ptc0_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_preq_ptc0_stall_duration_desc_t;

typedef union ar_pi_pmi_preq_ptc1_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_preq_ptc1_stall_duration_desc_t;

typedef union ar_pi_pmi_preq_ptc2_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_preq_ptc2_stall_duration_desc_t;

typedef union ar_pi_pmi_preq_hal_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_preq_hal_stall_duration_desc_t;

typedef union ar_pi_pmi_prsp_hal_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_prsp_hal_stall_duration_desc_t;

typedef union ar_pi_pii_pclk_cfg_desc {
    struct {
        // QW0
        uint64_t msix_tph_enable          : 1;	/* MSI-X Transaction Processing Hint EnableSetting this bit to 1 allows Transaction Processing Hints associated with each MSI-X entry to be sent in the TPH sideband */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_cfg_desc_t;

typedef union ar_pi_pii_pclk_dbg_errinj_fifo_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* 0: Inject error once1: Inject error continuously */
        uint64_t count                    : 3;	/* Indicates the spacing between flits with errors injected */
        uint64_t select                   : 2;	/* SELECT=00: Function 0SELECT=01: Function 1SELECT=10: Function 2SELECT=11: Function 3 */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t ecc0                     : 8;	/* When an error is injected on a flit, this field indicates which bits of ECC0 should be inverted */
        uint64_t undefine_23_16           : 8;	/* undefined */
        uint64_t ecc1                     : 8;	/* When an error is injected on a flit, this field indicates which bits of ECC1 should be inverted */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_dbg_errinj_fifo_desc_t;

typedef union ar_pi_pii_pclk_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t msg_discard              : 1;	/* An interrupt message was discarded in the msix_mux due to an MBE error from one of the FIFOs */
        uint64_t msg_aborted              : 1;	/* The HAL aborted an interrupt message */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t f0_msix_fifo_mbe         : 2;	/* Function 0 MSI-X FIFO Multi-Bit Error */
        uint64_t f0_msix_fifo_sbe         : 2;	/* Function 0 MSI-X FIFO Single-Bit Error */
        uint64_t f1_msix_fifo_mbe         : 2;	/* Function 1 MSI-X FIFO Multi-Bit Error */
        uint64_t f1_msix_fifo_sbe         : 2;	/* Function 1 MSI-X FIFO Single-Bit Error */
        uint64_t f2_msix_fifo_mbe         : 2;	/* Function 2 MSI-X FIFO Multi-Bit Error */
        uint64_t f2_msix_fifo_sbe         : 2;	/* Function 2 MSI-X FIFO Single-Bit Error */
        uint64_t f3_msix_fifo_mbe         : 2;	/* Function 3 MSI-X FIFO Multi-Bit Error */
        uint64_t f3_msix_fifo_sbe         : 2;	/* Function 3 MSI-X FIFO Single-Bit Error */
        uint64_t f0_msix_msg_fifo_un      : 1;	/* Function 0 MSI-X Message FIFO Underflow */
        uint64_t f1_msix_msg_fifo_un      : 1;	/* Function 1 MSI-X Message FIFO Underflow */
        uint64_t f2_msix_msg_fifo_un      : 1;	/* Function 2 MSI-X Message FIFO Underflow */
        uint64_t f3_msix_msg_fifo_un      : 1;	/* Function 3 MSI-X Message FIFO Underflow */
        uint64_t irq_sync_fifo_ov         : 1;	/* IRQ Sync FIFO Overflow */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_err_flg_desc_t;

typedef union ar_pi_pii_pclk_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t msg_discard              : 1;	/* An interrupt message was discarded in the msix_mux due to an MBE error from one of the FIFOs */
        uint64_t msg_aborted              : 1;	/* The HAL aborted an interrupt message */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t f0_msix_fifo_mbe         : 2;	/* Function 0 MSI-X FIFO Multi-Bit Error */
        uint64_t f0_msix_fifo_sbe         : 2;	/* Function 0 MSI-X FIFO Single-Bit Error */
        uint64_t f1_msix_fifo_mbe         : 2;	/* Function 1 MSI-X FIFO Multi-Bit Error */
        uint64_t f1_msix_fifo_sbe         : 2;	/* Function 1 MSI-X FIFO Single-Bit Error */
        uint64_t f2_msix_fifo_mbe         : 2;	/* Function 2 MSI-X FIFO Multi-Bit Error */
        uint64_t f2_msix_fifo_sbe         : 2;	/* Function 2 MSI-X FIFO Single-Bit Error */
        uint64_t f3_msix_fifo_mbe         : 2;	/* Function 3 MSI-X FIFO Multi-Bit Error */
        uint64_t f3_msix_fifo_sbe         : 2;	/* Function 3 MSI-X FIFO Single-Bit Error */
        uint64_t f0_msix_msg_fifo_un      : 1;	/* Function 0 MSI-X Message FIFO Underflow */
        uint64_t f1_msix_msg_fifo_un      : 1;	/* Function 1 MSI-X Message FIFO Underflow */
        uint64_t f2_msix_msg_fifo_un      : 1;	/* Function 2 MSI-X Message FIFO Underflow */
        uint64_t f3_msix_msg_fifo_un      : 1;	/* Function 3 MSI-X Message FIFO Underflow */
        uint64_t irq_sync_fifo_ov         : 1;	/* IRQ Sync FIFO Overflow */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_err_clr_desc_t;

typedef union ar_pi_pii_pclk_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t msg_discard              : 1;	/* 1:1 */
        uint64_t msg_aborted              : 1;	/* 2:2 */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t f0_msix_fifo_mbe         : 2;	/* 4:3 */
        uint64_t f0_msix_fifo_sbe         : 2;	/* 6:5 */
        uint64_t f1_msix_fifo_mbe         : 2;	/* 8:7 */
        uint64_t f1_msix_fifo_sbe         : 2;	/* 10:9 */
        uint64_t f2_msix_fifo_mbe         : 2;	/* 12:11 */
        uint64_t f2_msix_fifo_sbe         : 2;	/* 14:13 */
        uint64_t f3_msix_fifo_mbe         : 2;	/* 16:15 */
        uint64_t f3_msix_fifo_sbe         : 2;	/* 18:17 */
        uint64_t f0_msix_msg_fifo_un      : 1;	/* 19:19 */
        uint64_t f1_msix_msg_fifo_un      : 1;	/* 20:20 */
        uint64_t f2_msix_msg_fifo_un      : 1;	/* 21:21 */
        uint64_t f3_msix_msg_fifo_un      : 1;	/* 22:22 */
        uint64_t irq_sync_fifo_ov         : 1;	/* 23:23 */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_err_hss_msk_desc_t;

typedef union ar_pi_pii_pclk_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t msg_discard              : 1;	/* 1:1 */
        uint64_t msg_aborted              : 1;	/* 2:2 */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t f0_msix_fifo_mbe         : 2;	/* 4:3 */
        uint64_t f0_msix_fifo_sbe         : 2;	/* 6:5 */
        uint64_t f1_msix_fifo_mbe         : 2;	/* 8:7 */
        uint64_t f1_msix_fifo_sbe         : 2;	/* 10:9 */
        uint64_t f2_msix_fifo_mbe         : 2;	/* 12:11 */
        uint64_t f2_msix_fifo_sbe         : 2;	/* 14:13 */
        uint64_t f3_msix_fifo_mbe         : 2;	/* 16:15 */
        uint64_t f3_msix_fifo_sbe         : 2;	/* 18:17 */
        uint64_t f0_msix_msg_fifo_un      : 1;	/* 19:19 */
        uint64_t f1_msix_msg_fifo_un      : 1;	/* 20:20 */
        uint64_t f2_msix_msg_fifo_un      : 1;	/* 21:21 */
        uint64_t f3_msix_msg_fifo_un      : 1;	/* 22:22 */
        uint64_t irq_sync_fifo_ov         : 1;	/* 23:23 */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_err_os_msk_desc_t;

typedef union ar_pi_pii_pclk_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t msg_discard              : 1;	/* 1:1 */
        uint64_t msg_aborted              : 1;	/* 2:2 */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t f0_msix_fifo_mbe         : 2;	/* 4:3 */
        uint64_t f0_msix_fifo_sbe         : 2;	/* 6:5 */
        uint64_t f1_msix_fifo_mbe         : 2;	/* 8:7 */
        uint64_t f1_msix_fifo_sbe         : 2;	/* 10:9 */
        uint64_t f2_msix_fifo_mbe         : 2;	/* 12:11 */
        uint64_t f2_msix_fifo_sbe         : 2;	/* 14:13 */
        uint64_t f3_msix_fifo_mbe         : 2;	/* 16:15 */
        uint64_t f3_msix_fifo_sbe         : 2;	/* 18:17 */
        uint64_t f0_msix_msg_fifo_un      : 1;	/* 19:19 */
        uint64_t f1_msix_msg_fifo_un      : 1;	/* 20:20 */
        uint64_t f2_msix_msg_fifo_un      : 1;	/* 21:21 */
        uint64_t f3_msix_msg_fifo_un      : 1;	/* 22:22 */
        uint64_t irq_sync_fifo_ov         : 1;	/* 23:23 */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_err_first_flg_desc_t;

typedef union ar_pi_pii_pclk_err_info_mbe_desc {
    struct {
        // QW0
        uint64_t f0_msix_fifo_synd0       : 8;	/* Function 0 MSI-X Table Syndrome */
        uint64_t f0_msix_fifo_synd1       : 8;	/* Function 0 MSI-X Table Syndrome */
        uint64_t f1_msix_fifo_synd0       : 8;	/* Function 1 MSI-X Table Syndrome */
        uint64_t f1_msix_fifo_synd1       : 8;	/* Function 1 MSI-X Table Syndrome */
        uint64_t f2_msix_fifo_synd0       : 8;	/* Function 2 MSI-X Table Syndrome */
        uint64_t f2_msix_fifo_synd1       : 8;	/* Function 2 MSI-X Table Syndrome */
        uint64_t f3_msix_fifo_synd0       : 8;	/* Function 3 MSI-X Table Syndrome */
        uint64_t f3_msix_fifo_synd1       : 8;	/* Function 3 MSI-X Table Syndrome */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_err_info_mbe_desc_t;

typedef union ar_pi_pii_pclk_err_info_sbe_desc {
    struct {
        // QW0
        uint64_t f0_msix_fifo_synd0       : 8;	/* Function 0 MSI-X Table Syndrome */
        uint64_t f0_msix_fifo_synd1       : 8;	/* Function 0 MSI-X Table Syndrome */
        uint64_t f1_msix_fifo_synd0       : 8;	/* Function 1 MSI-X Table Syndrome */
        uint64_t f1_msix_fifo_synd1       : 8;	/* Function 1 MSI-X Table Syndrome */
        uint64_t f2_msix_fifo_synd0       : 8;	/* Function 2 MSI-X Table Syndrome */
        uint64_t f2_msix_fifo_synd1       : 8;	/* Function 2 MSI-X Table Syndrome */
        uint64_t f3_msix_fifo_synd0       : 8;	/* Function 3 MSI-X Table Syndrome */
        uint64_t f3_msix_fifo_synd1       : 8;	/* Function 3 MSI-X Table Syndrome */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_err_info_sbe_desc_t;

typedef union ar_pi_pii_pclk_err_info_msg_addr_desc {
    struct {
        // QW0
        uint64_t msg_address              ;	/* Message AddressThis field is updated on the first rising edge of MSG_ABORTED or MSG_DISCARD */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_err_info_msg_addr_desc_t;

typedef union ar_pi_pii_pclk_err_info_msg_data_desc {
    struct {
        // QW0
        uint64_t msg_data                 :32;	/* This field is updated on the first rising edge of MSG_ABORTED or MSG_DISCARD */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_err_info_msg_data_desc_t;

typedef union ar_pi_pii_pclk_msg_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_pclk_msg_stall_duration_desc_t;

typedef union ar_pi_pti_pclk_cfg_desc {
    struct {
        // QW0
        uint64_t lif_req_ififo_af_thresh  : 4;	/* LIF Request Interface Input FIFO Almost Full ThresholdThis field is used to configure the almost full threshold of the asynchronous request FIFO between the PCIe Target Request Interface and the Local Block Interface */
        uint64_t nif_req_ififo_af_thresh  : 4;	/* NIF Request Interface Input FIFO Almost Full ThresholdThis field is used to configure the almost full threshold of the asynchronous request FIFO between the PCIe Target Request Interface and the NIC Interface */
        uint64_t rsp_halt_on_fatal_error  : 1;	/* Response Halt on Fatal ErrorIf this bit is set and a tail error or MBE is detected on the LIF response OFIFO, the PTI will halt processing of LIF responses and instead discard all packets */
        uint64_t undefine_63_9            :55;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_cfg_desc_t;

typedef union ar_pi_pti_pclk_dbg_errinj_fifo_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* 0: Inject error once1: Inject error continuously */
        uint64_t count                    : 3;	/* Indicates the spacing between flits with errors injected */
        uint64_t select                   : 2;	/* SELECT=00: LIF OFIFOSELECT=01: ReservedSELECT=10: ReservedSELECT=11: Reserved */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t ecc0                     : 9;	/* When an error is injected on a flit, this field indicates which bits of ECC0 should be inverted */
        uint64_t undefine_23_17           : 7;	/* undefined */
        uint64_t ecc1                     : 9;	/* When an error is injected on a flit, this field indicates which bits of ECC1 should be inverted */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_dbg_errinj_fifo_desc_t;

typedef union ar_pi_pti_pclk_dbg_errinj_hal_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* 0: Inject error once1: Inject error continuously */
        uint64_t count                    : 3;	/* Indicates the spacing between flits with errors injected */
        uint64_t select                   : 2;	/* SELECT=00: Target RequestSELECT=01: Target ResponseSELECT=10: ReservedSELECT=11: Reserved */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t parity                   :32;	/* When an error is injected on a flit, this field indicates which bits of parity should be inverted */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_dbg_errinj_hal_desc_t;

typedef union ar_pi_pti_pclk_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t nif_req_ififo_ov         : 1;	/* NIF Request IFIFO Overrun */
        uint64_t lif_req_ififo_ov         : 1;	/* LIF Request IFIFO Overrun */
        uint64_t lif_rsp_ofifo_un         : 1;	/* LIF Response OFIFO Underun */
        uint64_t lif_rsp_ofifo_tail_error : 1;	/* LIF Response OFIFO Tail Error */
        uint64_t lif_rsp_ofifo_mbe        : 2;	/* LIF Response Output FIFO Multi-Bit Error */
        uint64_t lif_rsp_ofifo_sbe        : 2;	/* LIF Response Output FIFO Single-Bit Error */
        uint64_t treq_hal_wr_eop_error    : 1;	/* Target Request HAL Write End Of Packet ErrorIndicates that the Target Request state machine didn't receive a Write EOP signal when it was expected */
        uint64_t treq_hal_ttype_error     : 1;	/* Target Request HAL Transaction Type ErrorIndicates a packet with an unexpected transaction type has been received from the HAL target interface */
        uint64_t treq_hal_parity_error    : 1;	/* Target Request HAL Parity ErrorIndicates a parity error has been detected on the HAL target interface */
        uint64_t undefine_63_12           :52;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_err_flg_desc_t;

typedef union ar_pi_pti_pclk_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t nif_req_ififo_ov         : 1;	/* NIF Request IFIFO Overrun */
        uint64_t lif_req_ififo_ov         : 1;	/* LIF Request IFIFO Overrun */
        uint64_t lif_rsp_ofifo_un         : 1;	/* LIF Response OFIFO Underun */
        uint64_t lif_rsp_ofifo_tail_error : 1;	/* LIF Response OFIFO Tail Error */
        uint64_t lif_rsp_ofifo_mbe        : 2;	/* LIF Response Output FIFO Multi-Bit Error */
        uint64_t lif_rsp_ofifo_sbe        : 2;	/* LIF Response Output FIFO Single-Bit Error */
        uint64_t treq_hal_wr_eop_error    : 1;	/* Target Request HAL Write End Of Packet ErrorIndicates that the Target Request state machine didn't receive a Write EOP signal when it was expected */
        uint64_t treq_hal_ttype_error     : 1;	/* Target Request HAL Transaction Type ErrorIndicates a packet with an unexpected transaction type has been received from the HAL target interface */
        uint64_t treq_hal_parity_error    : 1;	/* Target Request HAL Parity ErrorIndicates a parity error has been detected on the HAL target interface */
        uint64_t undefine_63_12           :52;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_err_clr_desc_t;

typedef union ar_pi_pti_pclk_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nif_req_ififo_ov         : 1;	/* 1:1 */
        uint64_t lif_req_ififo_ov         : 1;	/* 2:2 */
        uint64_t lif_rsp_ofifo_un         : 1;	/* 3:3 */
        uint64_t lif_rsp_ofifo_tail_error : 1;	/* 4:4 */
        uint64_t lif_rsp_ofifo_mbe        : 2;	/* 6:5 */
        uint64_t lif_rsp_ofifo_sbe        : 2;	/* 8:7 */
        uint64_t treq_hal_wr_eop_error    : 1;	/* 9:9 */
        uint64_t treq_hal_ttype_error     : 1;	/* 10:10 */
        uint64_t treq_hal_parity_error    : 1;	/* 11:11 */
        uint64_t undefine_63_12           :52;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_err_hss_msk_desc_t;

typedef union ar_pi_pti_pclk_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nif_req_ififo_ov         : 1;	/* 1:1 */
        uint64_t lif_req_ififo_ov         : 1;	/* 2:2 */
        uint64_t lif_rsp_ofifo_un         : 1;	/* 3:3 */
        uint64_t lif_rsp_ofifo_tail_error : 1;	/* 4:4 */
        uint64_t lif_rsp_ofifo_mbe        : 2;	/* 6:5 */
        uint64_t lif_rsp_ofifo_sbe        : 2;	/* 8:7 */
        uint64_t treq_hal_wr_eop_error    : 1;	/* 9:9 */
        uint64_t treq_hal_ttype_error     : 1;	/* 10:10 */
        uint64_t treq_hal_parity_error    : 1;	/* 11:11 */
        uint64_t undefine_63_12           :52;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_err_os_msk_desc_t;

typedef union ar_pi_pti_pclk_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nif_req_ififo_ov         : 1;	/* 1:1 */
        uint64_t lif_req_ififo_ov         : 1;	/* 2:2 */
        uint64_t lif_rsp_ofifo_un         : 1;	/* 3:3 */
        uint64_t lif_rsp_ofifo_tail_error : 1;	/* 4:4 */
        uint64_t lif_rsp_ofifo_mbe        : 2;	/* 6:5 */
        uint64_t lif_rsp_ofifo_sbe        : 2;	/* 8:7 */
        uint64_t treq_hal_wr_eop_error    : 1;	/* 9:9 */
        uint64_t treq_hal_ttype_error     : 1;	/* 10:10 */
        uint64_t treq_hal_parity_error    : 1;	/* 11:11 */
        uint64_t undefine_63_12           :52;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_err_first_flg_desc_t;

typedef union ar_pi_pti_pclk_err_info_ecc_desc {
    struct {
        // QW0
        uint64_t lif_rsp_ofifo_mbe_synd0  : 9;	/* LIF Request IFIFO Syndrome */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t lif_rsp_ofifo_mbe_synd1  : 9;	/* LIF Request IFIFO Syndrome */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t lif_rsp_ofifo_sbe_synd0  : 9;	/* LIF Request IFIFO Syndrome */
        uint64_t undefine_47_41           : 7;	/* undefined */
        uint64_t lif_rsp_ofifo_sbe_synd1  : 9;	/* LIF Request IFIFO Syndrome */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_err_info_ecc_desc_t;

typedef union ar_pi_pti_pclk_err_info_misc_desc {
    struct {
        // QW0
        uint64_t treq_parity_error        :32;	/* Target Request Parity ErrorThis field is updated on the first rising edge of TREQ_HAL_PARITY_ERROR */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_pclk_err_info_misc_desc_t;

typedef union ar_pi_pm_pclk_dbg_errinj_cntr_perr_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error onceMode 1: Inject error alwaysMode 2: Inject error once if address matchesMode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* This status bit is set when an error is injected */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t checkbits                : 4;	/* When an error in injected, each bit that is set to one is this field causes the corresponding parity bit to be inverted */
        uint64_t undefine_31_20           :12;	/* undefined */
        uint64_t address                  : 5;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_37           :27;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pm_pclk_dbg_errinj_cntr_perr_desc_t;

typedef union ar_pi_pm_pclk_err_info_cntr_perr_desc {
    struct {
        // QW0
        uint64_t undefine_2_0             : 3;	/* undefined */
        uint64_t mmr_detected_perr        : 1;	/* The parity error was observed during an MMR read */
        uint64_t undefine_11_4            : 8;	/* undefined */
        uint64_t address                  : 5;	/* Parity Error Address */
        uint64_t undefine_63_17           :47;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pm_pclk_err_info_cntr_perr_desc_t;

typedef union ar_pi_pm_pclk_err_info_cntr_perr_cnt_desc {
    struct {
        // QW0
        uint64_t perr_count               ;	/* Number of parity errors that have occurred */
    };
    uint64_t qwords[1];
} ar_pi_pm_pclk_err_info_cntr_perr_cnt_desc_t;

typedef union ar_pi_pm_pclk_event_cntr_ctrl_desc {
    struct {
        // QW0
        uint64_t counters_clear           : 1;	/* This bit becomes set upon the completion of the clear sequence */
        uint64_t undefine_46_1            :46;	/* undefined */
        uint64_t clear                    : 1;	/* Initiates the clear sequence which clears al l performance counters, read returns zero */
        uint64_t enable                   : 1;	/* Writing a 1'b1 enables performance counters, writing 1'b0 disable counting */
        uint64_t disable_auto_update      : 1;	/* Disables the auto-updating of the performance counters, turns off widget */
        uint64_t undefine_63_50           :14;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pm_pclk_event_cntr_ctrl_desc_t;

typedef union ar_pi_pm_pclk_event_cntr_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Event counters */
    };
    uint64_t qwords[1];
} ar_pi_pm_pclk_event_cntr_desc_t;

typedef union ar_pi_cfg_diag_trans_desc {
    struct {
        // QW0
        uint64_t start_capture            : 1;	/* Writing a 1 will begin Capturing the downsteam transactions */
        uint64_t stop_capture             : 1;	/* Writing a 1 will interrupt any Capture in progess */
        uint64_t wrap_capture             : 1;	/* Ignore the Capture Count, and continue to capture until STOP_CAPTURE is activated */
        uint64_t capture_bus              : 1;	/* Indicates which HAL Interface to capture */
        uint64_t reset_capture            : 1;	/* Writing a 1 will reset the Capture Array Status */
        uint64_t capture_type             : 3;	/* 010 = Capture Matched only 011 = Capture non Matching only 100 = Start Capture on Match 101 = Stop Capture on Match Any other = Capture every cycle */
        uint64_t capture_count            : 7;	/* Number of flits to capture */
        uint64_t no_cpu_capture           : 1;	/* Enable capturing and injecting transactions without the CPU installed or Denali core configured */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_cfg_diag_trans_desc_t;

typedef union ar_pi_sts_diag_trans_desc {
    struct {
        // QW0
        uint64_t in_progress              : 1;	/* Capture is enabled */
        uint64_t capture_full             : 1;	/* RAM has filled with transactions since last reset */
        uint64_t undefine_7_2             : 6;	/* undefined */
        uint64_t capture_count            : 8;	/* Number of flits captured since last reset */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_diag_trans_desc_t;

typedef union ar_pi_dbg_trans_ctl_0_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_ctl_0_desc_t;

typedef union ar_pi_dbg_trans_ctl_1_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_ctl_1_desc_t;

typedef union ar_pi_dbg_trans_ctl_2_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_ctl_2_desc_t;

typedef union ar_pi_dbg_trans_ctl_3_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 255:192 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_ctl_3_desc_t;

typedef union ar_pi_dbg_trans_ctl_4_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 319:256 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_ctl_4_desc_t;

typedef union ar_pi_dbg_trans_mask_0_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_mask_0_desc_t;

typedef union ar_pi_dbg_trans_mask_1_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_mask_1_desc_t;

typedef union ar_pi_dbg_trans_mask_2_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_mask_2_desc_t;

typedef union ar_pi_dbg_trans_mask_3_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 255:192 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_mask_3_desc_t;

typedef union ar_pi_dbg_trans_mask_4_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 319:256 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_trans_mask_4_desc_t;

typedef union ar_pi_cfg_diag_recv_desc {
    struct {
        // QW0
        uint64_t start_capture            : 1;	/* Writing a 1 will begin Capturing the downsteam transactions */
        uint64_t stop_capture             : 1;	/* Writing a 1 will interrupt any Capture in progess */
        uint64_t wrap_capture             : 1;	/* Ignore the Capture Count, and continue to capture until STOP_CAPTURE is activated */
        uint64_t capture_bus              : 1;	/* Indicates which HAL Interface to capture */
        uint64_t reset_capture            : 1;	/* Writing a 1 will reset the Capture Array Status */
        uint64_t capture_type             : 3;	/* 010 = Capture Matched only 011 = Capture non Matching only 100 = Start Capture on Match 101 = Stop Capture on Match Any other = Capture every cycle */
        uint64_t capture_count            : 7;	/* Number of flits to capture */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_cfg_diag_recv_desc_t;

typedef union ar_pi_sts_diag_recv_desc {
    struct {
        // QW0
        uint64_t in_progress              : 1;	/* Capture is enabled */
        uint64_t capture_full             : 1;	/* RAM has filled with transactions since last reset */
        uint64_t undefine_7_2             : 6;	/* undefined */
        uint64_t capture_count            : 8;	/* Number of flits captured since last reset */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_diag_recv_desc_t;

typedef union ar_pi_dbg_recv_ctl_0_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_ctl_0_desc_t;

typedef union ar_pi_dbg_recv_ctl_1_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_ctl_1_desc_t;

typedef union ar_pi_dbg_recv_ctl_2_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_ctl_2_desc_t;

typedef union ar_pi_dbg_recv_ctl_3_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 255:192 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_ctl_3_desc_t;

typedef union ar_pi_dbg_recv_ctl_4_desc {
    struct {
        // QW0
        uint64_t capture_cntl             ;	/* Trace Control Data 319:256 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_ctl_4_desc_t;

typedef union ar_pi_dbg_recv_mask_0_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 63:0 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_mask_0_desc_t;

typedef union ar_pi_dbg_recv_mask_1_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 127:64 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_mask_1_desc_t;

typedef union ar_pi_dbg_recv_mask_2_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 191:128 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_mask_2_desc_t;

typedef union ar_pi_dbg_recv_mask_3_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 255:192 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_mask_3_desc_t;

typedef union ar_pi_dbg_recv_mask_4_desc {
    struct {
        // QW0
        uint64_t capture_mask             ;	/* Trace Control Mask 319:256 */
    };
    uint64_t qwords[1];
} ar_pi_dbg_recv_mask_4_desc_t;

typedef union ar_pi_debug_den_ip_desc {
    struct {
        // QW0
        uint64_t den_debug_ports          :16;	/* See Denali document for mux selection and information on the debug ports debug muxselection is done via Denali CSR */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_debug_den_ip_desc_t;

typedef union ar_pi_cfg_diag_inj_desc {
    struct {
        // QW0
        uint64_t start_inject             : 1;	/* Writing a 1 will begin Injecting the downsteam transactions */
        uint64_t stop_inject              : 1;	/* Writing a 1 will interrupt and stop any Injection in progess */
        uint64_t undefine_3_2             : 2;	/* undefined */
        uint64_t reset_inject             : 1;	/* Writing a 1 will reset the Inject Array Status */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t inject_count             : 7;	/* Number of flits to inject */
        uint64_t one_trans                : 1;	/* Instructs injection logic to inject until an EOP is encountered in the injection stream */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_cfg_diag_inj_desc_t;

typedef union ar_pi_sts_diag_inj_desc {
    struct {
        // QW0
        uint64_t in_progress              : 1;	/* Injection is occuring */
        uint64_t inject_complete          : 1;	/* Injection has injected all of the valid transactions in the injection array */
        uint64_t undefine_7_2             : 6;	/* undefined */
        uint64_t inject_count             : 8;	/* Number of flits injected since last reset */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_diag_inj_desc_t;

typedef union ar_pi_pcic_mems_dbg_errinj_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* 0: Inject error once1: Inject error always 2: Inject error once if address matches 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t ramselect                : 5;	/* 5'b000xx: SCTE RF5'b001aa: Posted Diag RF A5'b010aa: Non-Posted Diag RF A5'b011aa: Completion Diag RF 5'b100aa: Replay Diag RF aa=00,01,10,11 for 63:0, 127:64, 191:128, 255:192 data bit error injection per array */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t checkbits                : 8;	/* When an error is injected, each bit that is set to one in this field causes the cooresponding bit of the error detection syndrome to be inverted */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  : 8;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pcic_mems_dbg_errinj_desc_t;

typedef union ar_pi_phy_csrs_desc {
    struct {
        // QW0
        uint64_t csr_data_q0_a0           : 8;	/* CSR Data for Quad 0, LSB=0 */
        uint64_t csr_data_q1_a0           : 8;	/* CSR Data for Quad 1, LSB=0 */
        uint64_t csr_data_q2_a0           : 8;	/* CSR Data for Quad 2, LSB=0 */
        uint64_t csr_data_q3_a0           : 8;	/* CSR Data for Quad 3, LSB=0 */
        uint64_t csr_data_q0_a1           : 8;	/* CSR Data for Quad 0, LSB=1 */
        uint64_t csr_data_q1_a1           : 8;	/* CSR Data for Quad 1, LSB=1 */
        uint64_t csr_data_q2_a1           : 8;	/* CSR Data for Quad 2, LSB=1 */
        uint64_t csr_data_q3_a1           : 8;	/* CSR Data for Quad 3, LSB=1 */
    };
    uint64_t qwords[1];
} ar_pi_phy_csrs_desc_t;

typedef union ar_pi_phy_csr_cmu_0_desc {
    struct {
        // QW0
        uint64_t cmu_master_cdn_q0        : 1;	/* Master Reset for CMU in quad 0 */
        uint64_t pll_ctrl_good_state_q0   : 1;	/* State of qsample for PLL to be considered locked in quad 0 */
        uint64_t pll_ctrl_num_cycles_5_0_q0: 6;	/* Number of cycles qsample must be equal to [4:9] in quad 0 */
        uint64_t cmu_master_cdn_q1        : 1;	/* Master Reset for CMU in quad 1 */
        uint64_t pll_ctrl_good_state_q1   : 1;	/* State of qsample for PLL to be considered locked in quad 1 */
        uint64_t pll_ctrl_num_cycles_5_0_q1: 6;	/* Number of cycles qsample must be equal to [4:9] in quad 1 */
        uint64_t cmu_master_cdn_q2        : 1;	/* Master Reset for CMU in quad 2 */
        uint64_t pll_ctrl_good_state_q2   : 1;	/* State of qsample for PLL to be considered locked in quad 2 */
        uint64_t pll_ctrl_num_cycles_5_0_q2: 6;	/* Number of cycles qsample must be equal to [4:9] in quad 2 */
        uint64_t cmu_master_cdn_q3        : 1;	/* Master Reset for CMU in quad 3 */
        uint64_t pll_ctrl_good_state_q3   : 1;	/* State of qsample for PLL to be considered locked in quad 3 */
        uint64_t pll_ctrl_num_cycles_5_0_q3: 6;	/* Number of cycles qsample must be equal to [4:9] in quad 3 */
        uint64_t pll_ctrl_num_cycles_9_6_q0: 4;	/* Number of cycles qsample must be equal to [0:3] in quad 0 */
        uint64_t gcfsm_clk_div_q0         : 2;	/* Clock division control for GCFSM */
        uint64_t ssc_clk_div_q0           : 2;	/* Clock division control for SSC block [0:1] in quad 0 */
        uint64_t pll_ctrl_num_cycles_9_6_q1: 4;	/* Number of cycles qsample must be equal to [0:3] in quad 1 */
        uint64_t gcfsm_clk_div_q1         : 2;	/* Clock division control for GCFSM */
        uint64_t ssc_clk_div_q1           : 2;	/* Clock division control for SSC block [0:1] in quad 1 */
        uint64_t pll_ctrl_num_cycles_9_6_q2: 4;	/* Number of cycles qsample must be equal to [0:3] in quad 2 */
        uint64_t gcfsm_clk_div_q2         : 2;	/* Clock division control for GCFSM */
        uint64_t ssc_clk_div_q2           : 2;	/* Clock division control for SSC block [0:1] in quad 2 */
        uint64_t pll_ctrl_num_cycles_9_6_q3: 4;	/* Number of cycles qsample must be equal to [0:3] in quad 3 */
        uint64_t gcfsm_clk_div_q3         : 2;	/* Clock division control for GCFSM */
        uint64_t ssc_clk_div_q3           : 2;	/* Clock division control for SSC block [0:1] in quad 3 */
    };
    uint64_t qwords[1];
} ar_pi_phy_csr_cmu_0_desc_t;

typedef union ar_pi_phy_csr_lane1_0_desc {
    struct {
        // QW0
        uint64_t tx_clk_src_o_q0          : 1;	/* TX path clock select */
        uint64_t rx_clk_src_o_q0          : 1;	/* RX path (post elastic buffer) clock select */
        uint64_t rx_src_o_q0              : 1;	/* RX loopback mux input select */
        uint64_t treg0_pol_o_q0           : 1;	/* TReg0 data bank polarity select */
        uint64_t treg0_bit_o_q0           : 1;	/* TReg0 data bank bit order select */
        uint64_t treg0_word_o_q0          : 1;	/* TReg0 data bank word order select */
        uint64_t dmux_txa_sel_o_1_0_q0    : 2;	/* Transmit mux A data input select */
        uint64_t tx_clk_src_o_q1          : 1;	/* See _Q0 description above */
        uint64_t rx_clk_src_o_q1          : 1;	/* See _Q0 description above */
        uint64_t rx_src_o_q1              : 1;	/* See _Q0 description above */
        uint64_t treg0_pol_o_q1           : 1;	/* See _Q0 description above */
        uint64_t treg0_bit_o_q1           : 1;	/* See _Q0 description above */
        uint64_t treg0_word_o_q1          : 1;	/* See _Q0 description above */
        uint64_t dmux_txa_sel_o_1_0_q1    : 2;	/* See _Q0 description above */
        uint64_t tx_clk_src_o_q2          : 1;	/* See _Q0 description above */
        uint64_t rx_clk_src_o_q2          : 1;	/* See _Q0 description above */
        uint64_t rx_src_o_q2              : 1;	/* See _Q0 description above */
        uint64_t treg0_pol_o_q2           : 1;	/* See _Q0 description above */
        uint64_t treg0_bit_o_q2           : 1;	/* See _Q0 description above */
        uint64_t treg0_word_o_q2          : 1;	/* See _Q0 description above */
        uint64_t dmux_txa_sel_o_1_0_q2    : 2;	/* See _Q0 description above */
        uint64_t tx_clk_src_o_q3          : 1;	/* See _Q0 description above */
        uint64_t rx_clk_src_o_q3          : 1;	/* See _Q0 description above */
        uint64_t rx_src_o_q3              : 1;	/* See _Q0 description above */
        uint64_t treg0_pol_o_q3           : 1;	/* See _Q0 description above */
        uint64_t treg0_bit_o_q3           : 1;	/* See _Q0 description above */
        uint64_t treg0_word_o_q3          : 1;	/* See _Q0 description above */
        uint64_t dmux_txa_sel_o_1_0_q3    : 2;	/* See _Q0 description above */
        uint64_t treg1_pol_o_q0           : 1;	/* TReg1 data bank polarity select */
        uint64_t treg1_bit_o_q0           : 1;	/* TReg1 data bank bit order select */
        uint64_t treg1_word_o_q0          : 1;	/* TReg1 data bank word order select */
        uint64_t reg1_pol_o_q0            : 1;	/* Reg1 data bank polarity select */
        uint64_t reg1_bit_o_q0            : 1;	/* Reg1 data bank bit order select */
        uint64_t reg1_word_o_q0           : 1;	/* Reg1 data bank word order select */
        uint64_t fes_lb_ena_o_q0          : 1;	/* FES loopback enable */
        uint64_t neim_lb_ena_o_q0         : 1;	/* NEIM loopback enable */
        uint64_t treg1_pol_o_q1           : 1;	/* See _Q0 description above */
        uint64_t treg1_bit_o_q1           : 1;	/* See _Q0 description above */
        uint64_t treg1_word_o_q1          : 1;	/* See _Q0 description above */
        uint64_t reg1_pol_o_q1            : 1;	/* See _Q0 description above */
        uint64_t reg1_bit_o_q1            : 1;	/* See _Q0 description above */
        uint64_t reg1_word_o_q1           : 1;	/* See _Q0 description above */
        uint64_t fes_lb_ena_o_q1          : 1;	/* See _Q0 description above */
        uint64_t neim_lb_ena_o_q1         : 1;	/* See _Q0 description above */
        uint64_t treg1_pol_o_q2           : 1;	/* See _Q0 description above */
        uint64_t treg1_bit_o_q2           : 1;	/* See _Q0 description above */
        uint64_t treg1_word_o_q2          : 1;	/* See _Q0 description above */
        uint64_t reg1_pol_o_q2            : 1;	/* See _Q0 description above */
        uint64_t reg1_bit_o_q2            : 1;	/* See _Q0 description above */
        uint64_t reg1_word_o_q2           : 1;	/* See _Q0 description above */
        uint64_t fes_lb_ena_o_q2          : 1;	/* See _Q0 description above */
        uint64_t neim_lb_ena_o_q2         : 1;	/* See _Q0 description above */
        uint64_t treg1_pol_o_q3           : 1;	/* See _Q0 description above */
        uint64_t treg1_bit_o_q3           : 1;	/* See _Q0 description above */
        uint64_t treg1_word_o_q3          : 1;	/* See _Q0 description above */
        uint64_t reg1_pol_o_q3            : 1;	/* See _Q0 description above */
        uint64_t reg1_bit_o_q3            : 1;	/* See _Q0 description above */
        uint64_t reg1_word_o_q3           : 1;	/* See _Q0 description above */
        uint64_t fes_lb_ena_o_q3          : 1;	/* See _Q0 description above */
        uint64_t neim_lb_ena_o_q3         : 1;	/* See _Q0 description above */
    };
    uint64_t qwords[1];
} ar_pi_phy_csr_lane1_0_desc_t;

typedef union ar_pi_phy_csr_comlane_0_desc {
    struct {
        // QW0
        uint64_t ln_master_cdn_ovr_q0     : 1;	/* Lane master reset override for quad 0 */
        uint64_t l0_master_cdn_q0         : 1;	/* Lane0 master reset for quad 0 */
        uint64_t l1_master_cdn_q0         : 1;	/* Lane1 master reset for quad 0 */
        uint64_t l2_master_cdn_q0         : 1;	/* Lane2 master reset for quad 0 */
        uint64_t l3_master_cdn_q0         : 1;	/* Lane3 master reset for quad 0 */
        uint64_t rld_en_q0                : 1;	/* Maximum run length detector enable for quad 0 */
        uint64_t enc_en_q0                : 1;	/* 8b/10b encoder enable for quad 0 */
        uint64_t dec_en_q0                : 1;	/* 8b/10b decoder enable for quad 0 */
        uint64_t ln_master_cdn_ovr_q1     : 1;	/* Lane master reset override for quad 1 */
        uint64_t l0_master_cdn_q1         : 1;	/* Lane0 master reset for quad 1 */
        uint64_t l1_master_cdn_q1         : 1;	/* Lane1 master reset for quad 1 */
        uint64_t l2_master_cdn_q1         : 1;	/* Lane2 master reset for quad 1 */
        uint64_t l3_master_cdn_q1         : 1;	/* Lane3 master reset for quad 1 */
        uint64_t rld_en_q1                : 1;	/* Maximum run length detector enable for quad 1 */
        uint64_t enc_en_q1                : 1;	/* 8b/10b encoder enable for quad 1 */
        uint64_t dec_en_q1                : 1;	/* 8b/10b decoder enable for quad 1 */
        uint64_t ln_master_cdn_ovr_q2     : 1;	/* Lane master reset override for quad 2 */
        uint64_t l0_master_cdn_q2         : 1;	/* Lane0 master reset for quad 2 */
        uint64_t l1_master_cdn_q2         : 1;	/* Lane1 master reset for quad 2 */
        uint64_t l2_master_cdn_q2         : 1;	/* Lane2 master reset for quad 2 */
        uint64_t l3_master_cdn_q2         : 1;	/* Lane3 master reset for quad 2 */
        uint64_t rld_en_q2                : 1;	/* Maximum run length detector enable for quad 2 */
        uint64_t enc_en_q2                : 1;	/* 8b/10b encoder enable for quad 2 */
        uint64_t dec_en_q2                : 1;	/* 8b/10b decoder enable for quad 2 */
        uint64_t ln_master_cdn_ovr_q3     : 1;	/* Lane master reset override for quad 3 */
        uint64_t l0_master_cdn_q3         : 1;	/* Lane0 master reset for quad 3 */
        uint64_t l1_master_cdn_q3         : 1;	/* Lane1 master reset for quad 3 */
        uint64_t l2_master_cdn_q3         : 1;	/* Lane2 master reset for quad 3 */
        uint64_t l3_master_cdn_q3         : 1;	/* Lane3 master reset for quad 3 */
        uint64_t rld_en_q3                : 1;	/* Maximum run length detector enable for quad 3 */
        uint64_t enc_en_q3                : 1;	/* 8b/10b encoder enable for quad 3 */
        uint64_t dec_en_q3                : 1;	/* 8b/10b decoder enable for quad 3 */
        uint64_t rxeq_cdr_lock_wait_3_0_q0: 4;	/* Number of wait cycles for the CDR to lock [0:3] (times 64) for quad 0 */
        uint64_t pipe_en_q0               : 1;	/* PIPE interface block enable for quad 0 */
        uint64_t sapis_en_q0              : 1;	/* SAPIS interface block enable for quad 0 */
        uint64_t quad_en_q0               : 1;	/* QUAD interface block enable for quad 0 */
        uint64_t ebuf_en_q0               : 1;	/* Elastic Buffer Enable for quad 0 */
        uint64_t rxeq_cdr_lock_wait_3_0_q1: 4;	/* Number of wait cycles for the CDR to lock [0:3] (times 64) for quad 1 */
        uint64_t pipe_en_q1               : 1;	/* PIPE interface block enable for quad 1 */
        uint64_t sapis_en_q1              : 1;	/* SAPIS interface block enable for quad 1 */
        uint64_t quad_en_q1               : 1;	/* QUAD interface block enable for quad 1 */
        uint64_t ebuf_en_q1               : 1;	/* Elastic Buffer Enable for quad 1 */
        uint64_t rxeq_cdr_lock_wait_3_0_q2: 4;	/* Number of wait cycles for the CDR to lock [0:3] (times 64) for quad 2 */
        uint64_t pipe_en_q2               : 1;	/* PIPE interface block enable for quad 2 */
        uint64_t sapis_en_q2              : 1;	/* SAPIS interface block enable for quad 2 */
        uint64_t quad_en_q2               : 1;	/* QUAD interface block enable for quad 2 */
        uint64_t ebuf_en_q2               : 1;	/* Elastic Buffer Enable for quad 2 */
        uint64_t rxeq_cdr_lock_wait_3_0_q3: 4;	/* Number of wait cycles for the CDR to lock [0:3] (times 64) for quad 3 */
        uint64_t pipe_en_q3               : 1;	/* PIPE interface block enable for quad 3 */
        uint64_t sapis_en_q3              : 1;	/* SAPIS interface block enable for quad 3 */
        uint64_t quad_en_q3               : 1;	/* QUAD interface block enable for quad 3 */
        uint64_t ebuf_en_q3               : 1;	/* Elastic Buffer Enable for quad 3 */
    };
    uint64_t qwords[1];
} ar_pi_phy_csr_comlane_0_desc_t;

typedef union ar_pi_databahn_csrs_desc {
    struct {
        // QW0
        uint64_t csr_data_a0              :32;	/* CSR Data for LSB=0 */
        uint64_t csr_data_a1              :32;	/* CSR Data for LSB=1 */
    };
    uint64_t qwords[1];
} ar_pi_databahn_csrs_desc_t;

typedef union ar_pi_db_f0_db_rev_id_class_code_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t revision_id              : 8;	/* For Aries 1 */
                uint64_t class_code               :24;	/* Class Code field defined in PCI Specifications 3 */
                uint64_t undefine_39_32           : 8;	/* undefined */
                uint64_t latency_timer            : 8;	/* Latency Timer field defined in PCI Specifications 3 */
                uint64_t header_type              : 8;	/* Header Type field defined in PCI Specifications 3 */
                uint64_t bist                     : 8;	/* BIST field defined in PCI Specifications 3 */
            };
            struct {
                uint64_t undefine_q0_f1_31_0      :32;	/* undefined */
                uint64_t cache_line_size          : 8;	/* Cache Line Size field defined in PCI Specifications 3 */
                uint64_t undefine_q0_f1_63_40     :24;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_f0_db_rev_id_class_code_desc_t;

typedef union ar_pi_db_f0_bar_0_1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t mem_space                : 1;	/* Specifies whether this BAR defines a memory address range or an I/O address range (0 = memory, 1 = I/O) */
                uint64_t undefine_1_1             : 1;	/* undefined */
                uint64_t size                     : 1;	/* When the BAR is used to define a memory address range, this field indicates whether the address range is 32-bit or 64-bit (0 = 32-bit, 1 = 64 bit) */
                uint64_t prefetchability          : 1;	/* When the BAR is used to define a memory address range, this field declares whether data from the address range is prefetchable (0 = non-prefetchable, 1 = prefetchable) */
                uint64_t undefine_7_4             : 4;	/* undefined */
                uint64_t read_only_128g           :29;	/* Function 0 defaults to 128G, so this is a read only address section */
                uint64_t writeable_128g           :27;	/* Function 0 defaults to 128G, so this is a writeable address section */
            };
            struct {
                uint64_t undefine_q0_f1_7_0       : 8;	/* undefined */
                uint64_t base_addr_low            :24;	/* This field defines the base address and range of the BAR when it is used to define a memory address range */
                uint64_t undefine_q0_f1_63_32     :32;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f2_7_0       : 8;	/* undefined */
                uint64_t base_addr                :56;	/* This is an overloaded entry to allow access to the entire base address if needed */
            };
            struct {
                uint64_t undefine_q0_f3_31_0      :32;	/* undefined */
                uint64_t base_addr_high           :32;	/* This field defines the upper 32 bits of the base address */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_f0_bar_0_1_desc_t;

typedef union ar_pi_db_msi_x_cntl_2c_0_desc {
    struct {
        // QW0
        uint64_t capability_id            : 8;	/* Identifies that the capability structure is for MSI-X */
        uint64_t capability_ptr           : 8;	/* Contains pointer to the next PCI Capability Structure */
        uint64_t msi_x_table_size         :11;	/* Specifies the size of the MSI-X Table, that is, the number of interrupt vectors defined for the Function */
        uint64_t undefine_29_27           : 3;	/* undefined */
        uint64_t function_mask            : 1;	/* This bit serves as a global mask to all the interrupt conditions associated with this Function */
        uint64_t msi_x_enable             : 1;	/* Set by the configuration program to enable the MSI-X feature */
        uint64_t bar_indicator_eg         : 3;	/* Identifies the BAR corresponding to the memory address range where the MSI-X Table is located (000 = BAR 0, 001 = BAR 1, …, 101 = BAR 5) */
        uint64_t table_offset             :29;	/* Offset of the memory address where the MSI-X Table is located, relative to the selected BAR */
    };
    uint64_t qwords[1];
} ar_pi_db_msi_x_cntl_2c_0_desc_t;

typedef union ar_pi_db_msi_x_pendi_2e_0_desc {
    struct {
        // QW0
        uint64_t bar_indicator_reg        : 3;	/* Identifies the BAR corresponding to the memory address range where the PBA Structure is located (000 = BAR 0, 001 = BAR 1, …, 101 = BAR 5) */
        uint64_t pba_offset               :29;	/* Offset of the memory address where the PBA is located, relative to the selected BAR */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_db_msi_x_pendi_2e_0_desc_t;

typedef union ar_pi_db_pcie_cntl_sts_0_desc {
    struct {
        // QW0
        uint64_t cor_err_rep_en           : 1;	/* Enables the sending of ERR_COR messages by the core on the detection of correctable errors */
        uint64_t nonfatal_rep_en          : 1;	/* Enables the sending of ERR_NONFATAL messages by the core on the detection of non-fatal errors */
        uint64_t fatal_rep_en             : 1;	/* Enables the sending of ERR_FATAL messages by the core on the detection of fatal errors */
        uint64_t uns_req_rep_en           : 1;	/* Enables the sending of error messages by the core on receiving unsupported requests */
        uint64_t relax_ord_en             : 1;	/* When set, this bit indicates that the device is allowed to set the Relaxed Ordering bit in the Attributes field of transactions initiated from it */
        uint64_t max_payload              : 3;	/* Specifies the maximum TLP payload size configured */
        uint64_t tag_field_en             : 1;	/* Enables the extension of the tag field from 5 to 8 bits */
        uint64_t phantom_func_en          : 1;	/* Enables the use of Phantom Functions in generated requests from the master side */
        uint64_t aux_power_en             : 1;	/* Used only when device used aux power */
        uint64_t no_snoop_en              : 1;	/* When set to 1, the device is allowed to set the No Snoop bit in initiated transactions in which cache coherency is not needed */
        uint64_t max_read_req             : 3;	/* Specifies the maximum size allowed in read requests generated by the device */
        uint64_t func_level_reset         : 1;	/* Writing a 1 into this bit position generated a Function-Level Reset for the selected Function */
        uint64_t corr_err_det             : 1;	/* Set to 1 by the core when it detects a correctable error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t non_fatal_err_det        : 1;	/* Set to 1 by the core when it detects a non-fatal error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t fatal_err_det            : 1;	/* Set to 1 by the core when it detects a fatal error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t unsup_req_det            : 1;	/* Set to 1 by the core when it receives an unsupported request, regardless of whether its reporting is enabled or not */
        uint64_t aux_power_det            : 1;	/* Set when auxiliary power is detected by the device */
        uint64_t trans_pending            : 1;	/* Indicates if any of the Non-Posted requests issued by the Function are still pending */
        uint64_t reserved_31_22           :10;	/*  */
        uint64_t max_link_speed           : 4;	/* Indicates the speeds supported by the link (2 */
        uint64_t max_link_width           : 6;	/* Indicates the maximum number of lanes supported by the device */
        uint64_t active_pwr_state         : 2;	/* Indicates the level of ASPM support provided by the device */
        uint64_t los_exit_lat             : 3;	/* Specifies the time required for the device to transition from L0S to L0 */
        uint64_t l1_exit_lat              : 3;	/* Specifies the exit latency from L1 state */
        uint64_t clk_pwr_mngt             : 1;	/* Indicates that the device supports removal of reference clocks */
        uint64_t surp_down_report         : 1;	/* Indicates the capability of the device to report a Surprise Down error condition */
        uint64_t data_link_report         : 1;	/* Set to 1 if the device is capable of reporting that the DL Control and Management State Machine has reached the DL_Active state */
        uint64_t reserved_53              : 1;	/*  */
        uint64_t aspm_optionality_compliance: 1;	/* A 1 in this position indicates the device supports the ASPM Optionality feature */
        uint64_t reserved_55              : 1;	/*  */
        uint64_t port_number              : 8;	/* Specifies the port number assigned to the PCI Express link connected to this device */
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_cntl_sts_0_desc_t;

typedef union ar_pi_db_pcie_cntl_sts_2_0_desc {
    struct {
        // QW0
        uint64_t cmp_timeout              : 4;	/* Specifies the Completion Timeout value for the device */
        uint64_t cmp_timeout_dis          : 1;	/* Setting this bit disables Completion Timeout in the device */
        uint64_t reserved_5               : 1;	/*  */
        uint64_t atom_op_req_en           : 1;	/* This bit must be set to enable the generation of Atomic Op Requests from the Function */
        uint64_t reserved_7               : 1;	/*  */
        uint64_t ido_req_en               : 1;	/* When this bit is 1, the Function is allowed to set the ID-based Ordering (IDO) Attribute bit in the requests it generates */
        uint64_t ido_comp                 : 1;	/* When this bit is 1, the Function is allowed to set the ID-based Ordering (IDO) Attribute bit in the Completions it generates */
        uint64_t ltr_mech_en              : 1;	/* This must be set to 1 to enable the Latency Tolerance Reporting Mechanism */
        uint64_t reserved_12_11           : 2;	/*  */
        uint64_t obff_en                  : 2;	/* Enables the Optimized Buffer Flush/Fill (OBFF) capability in the device */
        uint64_t reserved_31_15           :17;	/*  */
        uint64_t reserved_32              : 1;	/*  */
        uint64_t sup_link_speed           : 3;	/* This field indicates the supported link speeds of the core */
        uint64_t reserved_63_36           :28;	/*  */
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_cntl_sts_2_0_desc_t;

typedef union ar_pi_db_pcie_tph_req_cntl_0_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t no_st_mode_sup           : 1;	/* When set to 1, indicates that this Function supports the  */
                uint64_t int_vectmode_sup         : 1;	/* A setting of 1 indicates that the Function supports the Interrupt Vector Mode for TPH Steering Tag generation */
                uint64_t dev_specmode_sup         : 1;	/* A setting of 1 indicates that the Function supports the Device- Specific Mode for TPH Steering Tag generation */
                uint64_t reserved_7_3             : 5;	/*  */
                uint64_t ext_tph_reg_sup          : 1;	/* When set to 1, indicates that the Function is capable of generating requests with a TPH TLP Prefix */
                uint64_t st_table_loc             : 2;	/* The setting of this field indicates if a Steering Tag Table is implemented for this Function, and its location if present */
                uint64_t reserved_15_11           : 5;	/*  */
                uint64_t st_table_size            :11;	/* Specifies the number of entries in the Steering Tag Table (0 = 1 entry, 1 = 2 entries, and so on) */
                uint64_t reserved_31_27           : 5;	/*  */
                uint64_t st_mode                  : 3;	/* This field selects the ST mode (000 = No Steering Tag Mode,001 = Interrupt Vector Mode, 010 = Device-Specific Mode, other values are reserved) */
                uint64_t reserved_39_35           : 5;	/*  */
                uint64_t tph_req_en               : 1;	/* When set to 1, the Function is allowed to generate requests with Transaction Processing Hints */
                uint64_t reserved_63_41           :23;	/*  */
            };
            struct {
                uint64_t undefine_q0_f1_7_0       : 8;	/* undefined */
                uint64_t st_table_loc_wa          : 2;	/* The setting of this field indicates if a Steering Tag Table is implemented for this Function, and its location if present */
                uint64_t undefine_q0_f1_63_10     :54;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_tph_req_cntl_0_desc_t;

typedef union ar_pi_db_f1_db_rev_id_class_code_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t revision_id              : 8;	/* For Aries 1 */
                uint64_t class_code               :24;	/* Class Code field defined in PCI Specifications 3 */
                uint64_t undefine_39_32           : 8;	/* undefined */
                uint64_t latency_timer            : 8;	/* Latency Timer field defined in PCI Specifications 3 */
                uint64_t header_type              : 8;	/* Header Type field defined in PCI Specifications 3 */
                uint64_t bist                     : 8;	/* BIST field defined in PCI Specifications 3 */
            };
            struct {
                uint64_t undefine_q0_f1_31_0      :32;	/* undefined */
                uint64_t cache_line_size          : 8;	/* Cache Line Size field defined in PCI Specifications 3 */
                uint64_t undefine_q0_f1_63_40     :24;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_f1_db_rev_id_class_code_desc_t;

typedef union ar_pi_db_f1_bar_0_1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t mem_space                : 1;	/* Specifies whether this BAR defines a memory address range or an I/O address range (0 = memory, 1 = I/O) */
                uint64_t undefine_1_1             : 1;	/* undefined */
                uint64_t size                     : 1;	/* When the BAR is used to define a memory address range, this field indicates whether the address range is 32-bit or 64-bit (0 = 32-bit, 1 = 64 bit) */
                uint64_t prefetchability          : 1;	/* When the BAR is used to define a memory address range, this field declares whether data from the address range is prefetchable (0 = non-prefetchable, 1 = prefetchable) */
                uint64_t undefine_7_4             : 4;	/* undefined */
                uint64_t read_only_8k             : 5;	/* Function 1 defaults to 8K, so this is a read only address section */
                uint64_t writeable_8k             :51;	/* Function 1 defaults to 8K, so this is a writeable address section */
            };
            struct {
                uint64_t undefine_q0_f1_7_0       : 8;	/* undefined */
                uint64_t base_addr_low            :24;	/* This field defines the base address and range of the BAR when it is used to define a memory address range */
                uint64_t undefine_q0_f1_63_32     :32;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f2_7_0       : 8;	/* undefined */
                uint64_t base_addr                :56;	/* This is an overloaded entry to allow access to the entire base address if needed */
            };
            struct {
                uint64_t undefine_q0_f3_31_0      :32;	/* undefined */
                uint64_t base_addr_high           :32;	/* This field defines the upper 32 bits of the base address */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_f1_bar_0_1_desc_t;

typedef union ar_pi_db_msi_x_cntl_2c_1_desc {
    struct {
        // QW0
        uint64_t capability_id            : 8;	/* Identifies that the capability structure is for MSI-X */
        uint64_t capability_ptr           : 8;	/* Contains pointer to the next PCI Capability Structure */
        uint64_t msi_x_table_size         :11;	/* Specifies the size of the MSI-X Table, that is, the number of interrupt vectors defined for the Function */
        uint64_t undefine_29_27           : 3;	/* undefined */
        uint64_t function_mask            : 1;	/* This bit serves as a global mask to all the interrupt conditions associated with this Function */
        uint64_t msi_x_enable             : 1;	/* Set by the configuration program to enable the MSI-X feature */
        uint64_t bar_indicator_eg         : 3;	/* Identifies the BAR corresponding to the memory address range where the MSI-X Table is located (000 = BAR 0, 001 = BAR 1, …, 101 = BAR 5) */
        uint64_t table_offset             :29;	/* Offset of the memory address where the MSI-X Table is located, relative to the selected BAR */
    };
    uint64_t qwords[1];
} ar_pi_db_msi_x_cntl_2c_1_desc_t;

typedef union ar_pi_db_msi_x_pendi_2e_1_desc {
    struct {
        // QW0
        uint64_t bar_indicator_reg        : 3;	/* Identifies the BAR corresponding to the memory address range where the PBA Structure is located (000 = BAR 0, 001 = BAR 1, …, 101 = BAR 5) */
        uint64_t pba_offset               :29;	/* Offset of the memory address where the PBA is located, relative to the selected BAR */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_db_msi_x_pendi_2e_1_desc_t;

typedef union ar_pi_db_pcie_cntl_sts_1_desc {
    struct {
        // QW0
        uint64_t cor_err_rep_en           : 1;	/* Enables the sending of ERR_COR messages by the core on the detection of correctable errors */
        uint64_t nonfatal_rep_en          : 1;	/* Enables the sending of ERR_NONFATAL messages by the core on the detection of non-fatal errors */
        uint64_t fatal_rep_en             : 1;	/* Enables the sending of ERR_FATAL messages by the core on the detection of fatal errors */
        uint64_t uns_req_rep_en           : 1;	/* Enables the sending of error messages by the core on receiving unsupported requests */
        uint64_t relax_ord_en             : 1;	/* When set, this bit indicates that the device is allowed to set the Relaxed Ordering bit in the Attributes field of transactions initiated from it */
        uint64_t max_payload              : 3;	/* Specifies the maximum TLP payload size configured */
        uint64_t tag_field_en             : 1;	/* Enables the extension of the tag field from 5 to 8 bits */
        uint64_t phantom_func_en          : 1;	/* Enables the use of Phantom Functions in generated requests from the master side */
        uint64_t aux_power_en             : 1;	/* Used only when device used aux power */
        uint64_t no_snoop_en              : 1;	/* When set to 1, the device is allowed to set the No Snoop bit in initiated transactions in which cache coherency is not needed */
        uint64_t max_read_req             : 3;	/* Specifies the maximum size allowed in read requests generated by the device */
        uint64_t func_level_reset         : 1;	/* Writing a 1 into this bit position generated a Function-Level Reset for the selected Function */
        uint64_t corr_err_det             : 1;	/* Set to 1 by the core when it detects a correctable error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t non_fatal_err_det        : 1;	/* Set to 1 by the core when it detects a non-fatal error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t fatal_err_det            : 1;	/* Set to 1 by the core when it detects a fatal error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t unsup_req_det            : 1;	/* Set to 1 by the core when it receives an unsupported request, regardless of whether its reporting is enabled or not */
        uint64_t aux_power_det            : 1;	/* Set when auxiliary power is detected by the device */
        uint64_t trans_pending            : 1;	/* Indicates if any of the Non-Posted requests issued by the Function are still pending */
        uint64_t reserved_31_22           :10;	/*  */
        uint64_t max_link_speed           : 4;	/* Indicates the speeds supported by the link (2 */
        uint64_t max_link_width           : 6;	/* Indicates the maximum number of lanes supported by the device */
        uint64_t active_pwr_state         : 2;	/* Indicates the level of ASPM support provided by the device */
        uint64_t los_exit_lat             : 3;	/* Specifies the time required for the device to transition from L0S to L0 */
        uint64_t l1_exit_lat              : 3;	/* Specifies the exit latency from L1 state */
        uint64_t clk_pwr_mngt             : 1;	/* Indicates that the device supports removal of reference clocks */
        uint64_t surp_down_report         : 1;	/* Indicates the capability of the device to report a Surprise Down error condition */
        uint64_t data_link_report         : 1;	/* Set to 1 if the device is capable of reporting that the DL Control and Management State Machine has reached the DL_Active state */
        uint64_t reserved_53              : 1;	/*  */
        uint64_t aspm_optionality_compliance: 1;	/* A 1 in this position indicates the device supports the ASPM Optionality feature */
        uint64_t reserved_55              : 1;	/*  */
        uint64_t port_number              : 8;	/* Specifies the port number assigned to the PCI Express link connected to this device */
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_cntl_sts_1_desc_t;

typedef union ar_pi_db_pcie_cntl_sts_2_1_desc {
    struct {
        // QW0
        uint64_t cmp_timeout              : 4;	/* Specifies the Completion Timeout value for the device */
        uint64_t cmp_timeout_dis          : 1;	/* Setting this bit disables Completion Timeout in the device */
        uint64_t reserved_5               : 1;	/*  */
        uint64_t atom_op_req_en           : 1;	/* This bit must be set to enable the generation of Atomic Op Requests from the Function */
        uint64_t reserved_7               : 1;	/*  */
        uint64_t ido_req_en               : 1;	/* When this bit is 1, the Function is allowed to set the ID-based Ordering (IDO) Attribute bit in the requests it generates */
        uint64_t ido_comp                 : 1;	/* When this bit is 1, the Function is allowed to set the ID-based Ordering (IDO) Attribute bit in the Completions it generates */
        uint64_t ltr_mech_en              : 1;	/* This must be set to 1 to enable the Latency Tolerance Reporting Mechanism */
        uint64_t reserved_12_11           : 2;	/*  */
        uint64_t obff_en                  : 2;	/* Enables the Optimized Buffer Flush/Fill (OBFF) capability in the device */
        uint64_t reserved_31_15           :17;	/*  */
        uint64_t reserved_32              : 1;	/*  */
        uint64_t sup_link_speed           : 3;	/* This field indicates the supported link speeds of the core */
        uint64_t reserved_63_36           :28;	/*  */
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_cntl_sts_2_1_desc_t;

typedef union ar_pi_db_pcie_tph_req_cntl_1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t no_st_mode_sup           : 1;	/* When set to 1, indicates that this Function supports the  */
                uint64_t int_vectmode_sup         : 1;	/* A setting of 1 indicates that the Function supports the Interrupt Vector Mode for TPH Steering Tag generation */
                uint64_t dev_specmode_sup         : 1;	/* A setting of 1 indicates that the Function supports the Device- Specific Mode for TPH Steering Tag generation */
                uint64_t reserved_7_3             : 5;	/*  */
                uint64_t ext_tph_reg_sup          : 1;	/* When set to 1, indicates that the Function is capable of generating requests with a TPH TLP Prefix */
                uint64_t st_table_loc             : 2;	/* The setting of this field indicates if a Steering Tag Table is implemented for this Function, and its location if present */
                uint64_t reserved_15_11           : 5;	/*  */
                uint64_t st_table_size            :11;	/* Specifies the number of entries in the Steering Tag Table (0 = 1 entry, 1 = 2 entries, and so on) */
                uint64_t reserved_31_27           : 5;	/*  */
                uint64_t st_mode                  : 3;	/* This field selects the ST mode (000 = No Steering Tag Mode,001 = Interrupt Vector Mode, 010 = Device-Specific Mode, other values are reserved) */
                uint64_t reserved_39_35           : 5;	/*  */
                uint64_t tph_req_en               : 1;	/* When set to 1, the Function is allowed to generate requests with Transaction Processing Hints */
                uint64_t reserved_63_41           :23;	/*  */
            };
            struct {
                uint64_t undefine_q0_f1_7_0       : 8;	/* undefined */
                uint64_t st_table_loc_wa          : 2;	/* The setting of this field indicates if a Steering Tag Table is implemented for this Function, and its location if present */
                uint64_t undefine_q0_f1_63_10     :54;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_tph_req_cntl_1_desc_t;

typedef union ar_pi_db_f2_db_rev_id_class_code_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t revision_id              : 8;	/* For Aries 1 */
                uint64_t class_code               :24;	/* Class Code field defined in PCI Specifications 3 */
                uint64_t undefine_39_32           : 8;	/* undefined */
                uint64_t latency_timer            : 8;	/* Latency Timer field defined in PCI Specifications 3 */
                uint64_t header_type              : 8;	/* Header Type field defined in PCI Specifications 3 */
                uint64_t bist                     : 8;	/* BIST field defined in PCI Specifications 3 */
            };
            struct {
                uint64_t undefine_q0_f1_31_0      :32;	/* undefined */
                uint64_t cache_line_size          : 8;	/* Cache Line Size field defined in PCI Specifications 3 */
                uint64_t undefine_q0_f1_63_40     :24;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_f2_db_rev_id_class_code_desc_t;

typedef union ar_pi_db_f2_bar_0_1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t mem_space                : 1;	/* Specifies whether this BAR defines a memory address range or an I/O address range (0 = memory, 1 = I/O) */
                uint64_t undefine_1_1             : 1;	/* undefined */
                uint64_t size                     : 1;	/* When the BAR is used to define a memory address range, this field indicates whether the address range is 32-bit or 64-bit (0 = 32-bit, 1 = 64 bit) */
                uint64_t prefetchability          : 1;	/* When the BAR is used to define a memory address range, this field declares whether data from the address range is prefetchable (0 = non-prefetchable, 1 = prefetchable) */
                uint64_t undefine_7_4             : 4;	/* undefined */
                uint64_t read_only_8k             : 5;	/* Function 1 defaults to 8K, so this is a read only address section */
                uint64_t writeable_8k             :51;	/* Function 1 defaults to 8K, so this is a writeable address section */
            };
            struct {
                uint64_t undefine_q0_f1_7_0       : 8;	/* undefined */
                uint64_t base_addr_low            :24;	/* This field defines the base address and range of the BAR when it is used to define a memory address range */
                uint64_t undefine_q0_f1_63_32     :32;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f2_7_0       : 8;	/* undefined */
                uint64_t base_addr                :56;	/* This is an overloaded entry to allow access to the entire base address if needed */
            };
            struct {
                uint64_t undefine_q0_f3_31_0      :32;	/* undefined */
                uint64_t base_addr_high           :32;	/* This field defines the upper 32 bits of the base address */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_f2_bar_0_1_desc_t;

typedef union ar_pi_db_msi_x_cntl_2c_2_desc {
    struct {
        // QW0
        uint64_t capability_id            : 8;	/* Identifies that the capability structure is for MSI-X */
        uint64_t capability_ptr           : 8;	/* Contains pointer to the next PCI Capability Structure */
        uint64_t msi_x_table_size         :11;	/* Specifies the size of the MSI-X Table, that is, the number of interrupt vectors defined for the Function */
        uint64_t undefine_29_27           : 3;	/* undefined */
        uint64_t function_mask            : 1;	/* This bit serves as a global mask to all the interrupt conditions associated with this Function */
        uint64_t msi_x_enable             : 1;	/* Set by the configuration program to enable the MSI-X feature */
        uint64_t bar_indicator_eg         : 3;	/* Identifies the BAR corresponding to the memory address range where the MSI-X Table is located (000 = BAR 0, 001 = BAR 1, …, 101 = BAR 5) */
        uint64_t table_offset             :29;	/* Offset of the memory address where the MSI-X Table is located, relative to the selected BAR */
    };
    uint64_t qwords[1];
} ar_pi_db_msi_x_cntl_2c_2_desc_t;

typedef union ar_pi_db_msi_x_pendi_2e_2_desc {
    struct {
        // QW0
        uint64_t bar_indicator_reg        : 3;	/* Identifies the BAR corresponding to the memory address range where the PBA Structure is located (000 = BAR 0, 001 = BAR 1, …, 101 = BAR 5) */
        uint64_t pba_offset               :29;	/* Offset of the memory address where the PBA is located, relative to the selected BAR */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_db_msi_x_pendi_2e_2_desc_t;

typedef union ar_pi_db_pcie_cntl_sts_2_desc {
    struct {
        // QW0
        uint64_t cor_err_rep_en           : 1;	/* Enables the sending of ERR_COR messages by the core on the detection of correctable errors */
        uint64_t nonfatal_rep_en          : 1;	/* Enables the sending of ERR_NONFATAL messages by the core on the detection of non-fatal errors */
        uint64_t fatal_rep_en             : 1;	/* Enables the sending of ERR_FATAL messages by the core on the detection of fatal errors */
        uint64_t uns_req_rep_en           : 1;	/* Enables the sending of error messages by the core on receiving unsupported requests */
        uint64_t relax_ord_en             : 1;	/* When set, this bit indicates that the device is allowed to set the Relaxed Ordering bit in the Attributes field of transactions initiated from it */
        uint64_t max_payload              : 3;	/* Specifies the maximum TLP payload size configured */
        uint64_t tag_field_en             : 1;	/* Enables the extension of the tag field from 5 to 8 bits */
        uint64_t phantom_func_en          : 1;	/* Enables the use of Phantom Functions in generated requests from the master side */
        uint64_t aux_power_en             : 1;	/* Used only when device used aux power */
        uint64_t no_snoop_en              : 1;	/* When set to 1, the device is allowed to set the No Snoop bit in initiated transactions in which cache coherency is not needed */
        uint64_t max_read_req             : 3;	/* Specifies the maximum size allowed in read requests generated by the device */
        uint64_t func_level_reset         : 1;	/* Writing a 1 into this bit position generated a Function-Level Reset for the selected Function */
        uint64_t corr_err_det             : 1;	/* Set to 1 by the core when it detects a correctable error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t non_fatal_err_det        : 1;	/* Set to 1 by the core when it detects a non-fatal error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t fatal_err_det            : 1;	/* Set to 1 by the core when it detects a fatal error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t unsup_req_det            : 1;	/* Set to 1 by the core when it receives an unsupported request, regardless of whether its reporting is enabled or not */
        uint64_t aux_power_det            : 1;	/* Set when auxiliary power is detected by the device */
        uint64_t trans_pending            : 1;	/* Indicates if any of the Non-Posted requests issued by the Function are still pending */
        uint64_t reserved_31_22           :10;	/*  */
        uint64_t max_link_speed           : 4;	/* Indicates the speeds supported by the link (2 */
        uint64_t max_link_width           : 6;	/* Indicates the maximum number of lanes supported by the device */
        uint64_t active_pwr_state         : 2;	/* Indicates the level of ASPM support provided by the device */
        uint64_t los_exit_lat             : 3;	/* Specifies the time required for the device to transition from L0S to L0 */
        uint64_t l1_exit_lat              : 3;	/* Specifies the exit latency from L1 state */
        uint64_t clk_pwr_mngt             : 1;	/* Indicates that the device supports removal of reference clocks */
        uint64_t surp_down_report         : 1;	/* Indicates the capability of the device to report a Surprise Down error condition */
        uint64_t data_link_report         : 1;	/* Set to 1 if the device is capable of reporting that the DL Control and Management State Machine has reached the DL_Active state */
        uint64_t reserved_53              : 1;	/*  */
        uint64_t aspm_optionality_compliance: 1;	/* A 1 in this position indicates the device supports the ASPM Optionality feature */
        uint64_t reserved_55              : 1;	/*  */
        uint64_t port_number              : 8;	/* Specifies the port number assigned to the PCI Express link connected to this device */
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_cntl_sts_2_desc_t;

typedef union ar_pi_db_pcie_cntl_sts_2_2_desc {
    struct {
        // QW0
        uint64_t cmp_timeout              : 4;	/* Specifies the Completion Timeout value for the device */
        uint64_t cmp_timeout_dis          : 1;	/* Setting this bit disables Completion Timeout in the device */
        uint64_t reserved_5               : 1;	/*  */
        uint64_t atom_op_req_en           : 1;	/* This bit must be set to enable the generation of Atomic Op Requests from the Function */
        uint64_t reserved_7               : 1;	/*  */
        uint64_t ido_req_en               : 1;	/* When this bit is 1, the Function is allowed to set the ID-based Ordering (IDO) Attribute bit in the requests it generates */
        uint64_t ido_comp                 : 1;	/* When this bit is 1, the Function is allowed to set the ID-based Ordering (IDO) Attribute bit in the Completions it generates */
        uint64_t ltr_mech_en              : 1;	/* This must be set to 1 to enable the Latency Tolerance Reporting Mechanism */
        uint64_t reserved_12_11           : 2;	/*  */
        uint64_t obff_en                  : 2;	/* Enables the Optimized Buffer Flush/Fill (OBFF) capability in the device */
        uint64_t reserved_31_15           :17;	/*  */
        uint64_t reserved_32              : 1;	/*  */
        uint64_t sup_link_speed           : 3;	/* This field indicates the supported link speeds of the core */
        uint64_t reserved_63_36           :28;	/*  */
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_cntl_sts_2_2_desc_t;

typedef union ar_pi_db_pcie_tph_req_cntl_2_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t no_st_mode_sup           : 1;	/* When set to 1, indicates that this Function supports the  */
                uint64_t int_vectmode_sup         : 1;	/* A setting of 1 indicates that the Function supports the Interrupt Vector Mode for TPH Steering Tag generation */
                uint64_t dev_specmode_sup         : 1;	/* A setting of 1 indicates that the Function supports the Device- Specific Mode for TPH Steering Tag generation */
                uint64_t reserved_7_3             : 5;	/*  */
                uint64_t ext_tph_reg_sup          : 1;	/* When set to 1, indicates that the Function is capable of generating requests with a TPH TLP Prefix */
                uint64_t st_table_loc             : 2;	/* The setting of this field indicates if a Steering Tag Table is implemented for this Function, and its location if present */
                uint64_t reserved_15_11           : 5;	/*  */
                uint64_t st_table_size            :11;	/* Specifies the number of entries in the Steering Tag Table (0 = 1 entry, 1 = 2 entries, and so on) */
                uint64_t reserved_31_27           : 5;	/*  */
                uint64_t st_mode                  : 3;	/* This field selects the ST mode (000 = No Steering Tag Mode,001 = Interrupt Vector Mode, 010 = Device-Specific Mode, other values are reserved) */
                uint64_t reserved_39_35           : 5;	/*  */
                uint64_t tph_req_en               : 1;	/* When set to 1, the Function is allowed to generate requests with Transaction Processing Hints */
                uint64_t reserved_63_41           :23;	/*  */
            };
            struct {
                uint64_t undefine_q0_f1_7_0       : 8;	/* undefined */
                uint64_t st_table_loc_wa          : 2;	/* The setting of this field indicates if a Steering Tag Table is implemented for this Function, and its location if present */
                uint64_t undefine_q0_f1_63_10     :54;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_tph_req_cntl_2_desc_t;

typedef union ar_pi_db_f3_db_rev_id_class_code_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t revision_id              : 8;	/* For Aries 1 */
                uint64_t class_code               :24;	/* Class Code field defined in PCI Specifications 3 */
                uint64_t undefine_39_32           : 8;	/* undefined */
                uint64_t latency_timer            : 8;	/* Latency Timer field defined in PCI Specifications 3 */
                uint64_t header_type              : 8;	/* Header Type field defined in PCI Specifications 3 */
                uint64_t bist                     : 8;	/* BIST field defined in PCI Specifications 3 */
            };
            struct {
                uint64_t undefine_q0_f1_31_0      :32;	/* undefined */
                uint64_t cache_line_size          : 8;	/* Cache Line Size field defined in PCI Specifications 3 */
                uint64_t undefine_q0_f1_63_40     :24;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_f3_db_rev_id_class_code_desc_t;

typedef union ar_pi_db_f3_bar_0_1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t mem_space                : 1;	/* Specifies whether this BAR defines a memory address range or an I/O address range (0 = memory, 1 = I/O) */
                uint64_t undefine_1_1             : 1;	/* undefined */
                uint64_t size                     : 1;	/* When the BAR is used to define a memory address range, this field indicates whether the address range is 32-bit or 64-bit (0 = 32-bit, 1 = 64 bit) */
                uint64_t prefetchability          : 1;	/* When the BAR is used to define a memory address range, this field declares whether data from the address range is prefetchable (0 = non-prefetchable, 1 = prefetchable) */
                uint64_t undefine_7_4             : 4;	/* undefined */
                uint64_t read_only_8k             : 5;	/* Function 1 defaults to 8K, so this is a read only address section */
                uint64_t writeable_8k             :51;	/* Function 1 defaults to 8K, so this is a writeable address section */
            };
            struct {
                uint64_t undefine_q0_f1_7_0       : 8;	/* undefined */
                uint64_t base_addr_low            :24;	/* This field defines the base address and range of the BAR when it is used to define a memory address range */
                uint64_t undefine_q0_f1_63_32     :32;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f2_7_0       : 8;	/* undefined */
                uint64_t base_addr                :56;	/* This is an overloaded entry to allow access to the entire base address if needed */
            };
            struct {
                uint64_t undefine_q0_f3_31_0      :32;	/* undefined */
                uint64_t base_addr_high           :32;	/* This field defines the upper 32 bits of the base address */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_f3_bar_0_1_desc_t;

typedef union ar_pi_db_msi_x_cntl_2c_3_desc {
    struct {
        // QW0
        uint64_t capability_id            : 8;	/* Identifies that the capability structure is for MSI-X */
        uint64_t capability_ptr           : 8;	/* Contains pointer to the next PCI Capability Structure */
        uint64_t msi_x_table_size         :11;	/* Specifies the size of the MSI-X Table, that is, the number of interrupt vectors defined for the Function */
        uint64_t undefine_29_27           : 3;	/* undefined */
        uint64_t function_mask            : 1;	/* This bit serves as a global mask to all the interrupt conditions associated with this Function */
        uint64_t msi_x_enable             : 1;	/* Set by the configuration program to enable the MSI-X feature */
        uint64_t bar_indicator_eg         : 3;	/* Identifies the BAR corresponding to the memory address range where the MSI-X Table is located (000 = BAR 0, 001 = BAR 1, …, 101 = BAR 5) */
        uint64_t table_offset             :29;	/* Offset of the memory address where the MSI-X Table is located, relative to the selected BAR */
    };
    uint64_t qwords[1];
} ar_pi_db_msi_x_cntl_2c_3_desc_t;

typedef union ar_pi_db_msi_x_pendi_2e_3_desc {
    struct {
        // QW0
        uint64_t bar_indicator_reg        : 3;	/* Identifies the BAR corresponding to the memory address range where the PBA Structure is located (000 = BAR 0, 001 = BAR 1, …, 101 = BAR 5) */
        uint64_t pba_offset               :29;	/* Offset of the memory address where the PBA is located, relative to the selected BAR */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_db_msi_x_pendi_2e_3_desc_t;

typedef union ar_pi_db_pcie_cntl_sts_3_desc {
    struct {
        // QW0
        uint64_t cor_err_rep_en           : 1;	/* Enables the sending of ERR_COR messages by the core on the detection of correctable errors */
        uint64_t nonfatal_rep_en          : 1;	/* Enables the sending of ERR_NONFATAL messages by the core on the detection of non-fatal errors */
        uint64_t fatal_rep_en             : 1;	/* Enables the sending of ERR_FATAL messages by the core on the detection of fatal errors */
        uint64_t uns_req_rep_en           : 1;	/* Enables the sending of error messages by the core on receiving unsupported requests */
        uint64_t relax_ord_en             : 1;	/* When set, this bit indicates that the device is allowed to set the Relaxed Ordering bit in the Attributes field of transactions initiated from it */
        uint64_t max_payload              : 3;	/* Specifies the maximum TLP payload size configured */
        uint64_t tag_field_en             : 1;	/* Enables the extension of the tag field from 5 to 8 bits */
        uint64_t phantom_func_en          : 1;	/* Enables the use of Phantom Functions in generated requests from the master side */
        uint64_t aux_power_en             : 1;	/* Used only when device used aux power */
        uint64_t no_snoop_en              : 1;	/* When set to 1, the device is allowed to set the No Snoop bit in initiated transactions in which cache coherency is not needed */
        uint64_t max_read_req             : 3;	/* Specifies the maximum size allowed in read requests generated by the device */
        uint64_t func_level_reset         : 1;	/* Writing a 1 into this bit position generated a Function-Level Reset for the selected Function */
        uint64_t corr_err_det             : 1;	/* Set to 1 by the core when it detects a correctable error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t non_fatal_err_det        : 1;	/* Set to 1 by the core when it detects a non-fatal error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t fatal_err_det            : 1;	/* Set to 1 by the core when it detects a fatal error, regardless of whether error reporting is enabled or not, and regardless of whether the error is masked */
        uint64_t unsup_req_det            : 1;	/* Set to 1 by the core when it receives an unsupported request, regardless of whether its reporting is enabled or not */
        uint64_t aux_power_det            : 1;	/* Set when auxiliary power is detected by the device */
        uint64_t trans_pending            : 1;	/* Indicates if any of the Non-Posted requests issued by the Function are still pending */
        uint64_t reserved_31_22           :10;	/*  */
        uint64_t max_link_speed           : 4;	/* Indicates the speeds supported by the link (2 */
        uint64_t max_link_width           : 6;	/* Indicates the maximum number of lanes supported by the device */
        uint64_t active_pwr_state         : 2;	/* Indicates the level of ASPM support provided by the device */
        uint64_t los_exit_lat             : 3;	/* Specifies the time required for the device to transition from L0S to L0 */
        uint64_t l1_exit_lat              : 3;	/* Specifies the exit latency from L1 state */
        uint64_t clk_pwr_mngt             : 1;	/* Indicates that the device supports removal of reference clocks */
        uint64_t surp_down_report         : 1;	/* Indicates the capability of the device to report a Surprise Down error condition */
        uint64_t data_link_report         : 1;	/* Set to 1 if the device is capable of reporting that the DL Control and Management State Machine has reached the DL_Active state */
        uint64_t reserved_53              : 1;	/*  */
        uint64_t aspm_optionality_compliance: 1;	/* A 1 in this position indicates the device supports the ASPM Optionality feature */
        uint64_t reserved_55              : 1;	/*  */
        uint64_t port_number              : 8;	/* Specifies the port number assigned to the PCI Express link connected to this device */
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_cntl_sts_3_desc_t;

typedef union ar_pi_db_pcie_cntl_sts_2_3_desc {
    struct {
        // QW0
        uint64_t cmp_timeout              : 4;	/* Specifies the Completion Timeout value for the device */
        uint64_t cmp_timeout_dis          : 1;	/* Setting this bit disables Completion Timeout in the device */
        uint64_t reserved_5               : 1;	/*  */
        uint64_t atom_op_req_en           : 1;	/* This bit must be set to enable the generation of Atomic Op Requests from the Function */
        uint64_t reserved_7               : 1;	/*  */
        uint64_t ido_req_en               : 1;	/* When this bit is 1, the Function is allowed to set the ID-based Ordering (IDO) Attribute bit in the requests it generates */
        uint64_t ido_comp                 : 1;	/* When this bit is 1, the Function is allowed to set the ID-based Ordering (IDO) Attribute bit in the Completions it generates */
        uint64_t ltr_mech_en              : 1;	/* This must be set to 1 to enable the Latency Tolerance Reporting Mechanism */
        uint64_t reserved_12_11           : 2;	/*  */
        uint64_t obff_en                  : 2;	/* Enables the Optimized Buffer Flush/Fill (OBFF) capability in the device */
        uint64_t reserved_31_15           :17;	/*  */
        uint64_t reserved_32              : 1;	/*  */
        uint64_t sup_link_speed           : 3;	/* This field indicates the supported link speeds of the core */
        uint64_t reserved_63_36           :28;	/*  */
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_cntl_sts_2_3_desc_t;

typedef union ar_pi_db_pcie_tph_req_cntl_3_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t no_st_mode_sup           : 1;	/* When set to 1, indicates that this Function supports the  */
                uint64_t int_vectmode_sup         : 1;	/* A setting of 1 indicates that the Function supports the Interrupt Vector Mode for TPH Steering Tag generation */
                uint64_t dev_specmode_sup         : 1;	/* A setting of 1 indicates that the Function supports the Device- Specific Mode for TPH Steering Tag generation */
                uint64_t reserved_7_3             : 5;	/*  */
                uint64_t ext_tph_reg_sup          : 1;	/* When set to 1, indicates that the Function is capable of generating requests with a TPH TLP Prefix */
                uint64_t st_table_loc             : 2;	/* The setting of this field indicates if a Steering Tag Table is implemented for this Function, and its location if present */
                uint64_t reserved_15_11           : 5;	/*  */
                uint64_t st_table_size            :11;	/* Specifies the number of entries in the Steering Tag Table (0 = 1 entry, 1 = 2 entries, and so on) */
                uint64_t reserved_31_27           : 5;	/*  */
                uint64_t st_mode                  : 3;	/* This field selects the ST mode (000 = No Steering Tag Mode,001 = Interrupt Vector Mode, 010 = Device-Specific Mode, other values are reserved) */
                uint64_t reserved_39_35           : 5;	/*  */
                uint64_t tph_req_en               : 1;	/* When set to 1, the Function is allowed to generate requests with Transaction Processing Hints */
                uint64_t reserved_63_41           :23;	/*  */
            };
            struct {
                uint64_t undefine_q0_f1_7_0       : 8;	/* undefined */
                uint64_t st_table_loc_wa          : 2;	/* The setting of this field indicates if a Steering Tag Table is implemented for this Function, and its location if present */
                uint64_t undefine_q0_f1_63_10     :54;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_pi_db_pcie_tph_req_cntl_3_desc_t;

typedef union ar_pi_db_phy_layer_cfg_desc {
    struct {
        // QW0
        uint64_t link_status              : 1;	/* Current state of link (1 = link training done, 0 = link training not complete) */
        uint64_t neg_lane_count           : 3;	/* Lane count negotiated with other side during link training (000 = x1, 001 = x2, 010 = x4, 011 = x8, 100 = x16) */
        uint64_t neg_speed                : 2;	/* Current operating speed of link (00 = 2 */
        uint64_t all_phy_err_rpt          : 1;	/* When this bit is set to 1, the core will report all phy errors detected at the PIPE interface, regardless of whether it caused packet corruption */
        uint64_t tx_swing_setting         : 1;	/* This bit drives the PIPE_TX_SWING output of the core */
        uint64_t recv_fts_cnt_2_5         : 8;	/* FTS count received from the other side during link training */
        uint64_t recv_link_id             : 8;	/* Link id received from other side during link training */
        uint64_t ltssm_state              : 6;	/* Current state of the LTSSM */
        uint64_t reserved_30              : 1;	/*  */
        uint64_t master_lb_enable         : 1;	/* When the core is operating as a Root Complex, setting this to 1 causes theLTSSM to initiate a loopback and become the loopback master */
        uint64_t reserved_39_32           : 8;	/*  */
        uint64_t trans_fts_cnt_2_5        : 8;	/* FTS count transmitted by the core in TS1/TS2 sequences during link training */
        uint64_t trans_fts_cnt_5          : 8;	/* FTS count transmitted by the core in TS1/TS2 sequences during link training */
        uint64_t trans_fts_cnt_8          : 8;	/* FTS count transmitted by the core in TS1/TS2 sequences during link training */
    };
    uint64_t qwords[1];
} ar_pi_db_phy_layer_cfg_desc_t;

typedef union ar_pi_db_recv_credit_0_desc {
    struct {
        // QW0
        uint64_t trans_replay_to          : 9;	/* Transmit-side replay timer timeout value (in units of 4 ns) */
        uint64_t reserved_15_9            : 7;	/*  */
        uint64_t recv_ack_nak_to          : 9;	/* Timeout setting of receive side CKNAK replay (in units of 4 ns) */
        uint64_t reserved_31_25           : 7;	/*  */
        uint64_t post_payl_cred           :12;	/* Posted payload credit limit advertised by the core for VC 0 */
        uint64_t post_head_cred           : 8;	/* Posted payload credit limit advertised by the core for VC 0 (in number of packets) */
        uint64_t nonp_payl_cred           :12;	/* Non-Posted payload credit limit advertised by the core for VC 0 (in units of 4 Dwords) */
    };
    uint64_t qwords[1];
} ar_pi_db_recv_credit_0_desc_t;

typedef union ar_pi_db_recv_credit_1_desc {
    struct {
        // QW0
        uint64_t recv_nonp_head           : 8;	/* Non-Posted header credit limit advertised by the core for VC 0 (in number of packets) */
        uint64_t recv_comp_payl           :12;	/* Completion payload credit limit advertised by the core for VC 0 (in units of 4 Dwords) */
        uint64_t reserved_23_20           : 4;	/*  */
        uint64_t recv_comp_head           : 8;	/* Completion header credit limit advertised by the core for VC 0 (in number of packets) */
        uint64_t tran_post_payl           :12;	/* Posted payload credit limit received by the core for this link (in units of 4 DWORDs) */
        uint64_t tran_post_head           : 8;	/* Posted payload credit limit received by the core for this link (in number of packets) */
        uint64_t tran_nonp_payl           :12;	/* Non-Posted payload credit limit received by the core for Link 0 (in units of 4 DWORDs) */
    };
    uint64_t qwords[1];
} ar_pi_db_recv_credit_1_desc_t;

typedef union ar_pi_db_recv_fts_count_desc {
    struct {
        // QW0
        uint64_t neg_lane_map             :16;	/* Bit i of this field is set to 1 at the end of link training if Lane i is part of the PCIe link */
        uint64_t lane_reversal            : 1;	/* This bit set by the core at the end of link training if the LTSSM had to reverse the lane numbers to form the link */
        uint64_t reserved_31_17           :15;	/*  */
        uint64_t recv_fts_cnt_5g          : 8;	/* FTS count received from the other side during link training for use at the 5 GT/s link speed */
        uint64_t recv_fts_cnt_8g          : 8;	/* FTS count received from the other side during link training for use at the 8 GT/s link speed */
        uint64_t reserved_63_48           :16;	/*  */
    };
    uint64_t qwords[1];
} ar_pi_db_recv_fts_count_desc_t;

typedef union ar_pi_db_physical_cfg_reg_desc {
    struct {
        // QW0
        uint64_t func_0_enable            : 1;	/* Enable for Function 0 */
        uint64_t func_1_enable            : 1;	/* Enable for Function 1 */
        uint64_t func_2_enable            : 1;	/* Enable for Function 2 */
        uint64_t func_3_enable            : 1;	/* Enable for Function 3 */
        uint64_t reserved_63_4            :60;	/* Posted payload credit limit received by the core for this link (in units of 4 DWORDs) */
    };
    uint64_t qwords[1];
} ar_pi_db_physical_cfg_reg_desc_t;

typedef union ar_pi_dbg_diag_inj_ram_desc {
    struct {
        // QW0
        uint64_t array_data               ;	/* Can not be read or written while an injection is in progress */
    };
    uint64_t qwords[1];
} ar_pi_dbg_diag_inj_ram_desc_t;

typedef union ar_pi_dbg_diag_trans_ram_desc {
    struct {
        // QW0
        uint64_t array_data               ;	/*  */
    };
    uint64_t qwords[1];
} ar_pi_dbg_diag_trans_ram_desc_t;

typedef union ar_pi_dbg_diag_recv_ram_desc {
    struct {
        // QW0
        uint64_t array_data               ;	/*  */
    };
    uint64_t qwords[1];
} ar_pi_dbg_diag_recv_ram_desc_t;


#endif
