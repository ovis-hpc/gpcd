/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pi_structs.h
 * FILE: ar_pi_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:02 2014
 ******************************************************************************/

#ifndef _AR_PI_STRUCTS_H_
#define _AR_PI_STRUCTS_H_

/*
 *  ARIES PI STRUCTURES
 */
typedef union ar_pi_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t lm0_perr                 : 1;	/* logic monitor 0 parity error */
        uint64_t lm1_perr                 : 1;	/* logic monitor 1 parity error */
        uint64_t lm0_trigger              : 1;	/* logic monitor 0 Trigger */
        uint64_t lm1_trigger              : 1;	/* logic monitor 1 Trigger */
        uint64_t pm_cntr_perr             : 1;	/* performance monitor counter parity error */
        uint64_t pm_cntr_rollover         : 1;	/* performance monitor counter rollover */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t lm0_perr_cnt_ovflow      : 1;	/* LM counter overflow */
        uint64_t lm0_pc_trigger10         : 1;	/* Trigger 1 and 0 */
        uint64_t lm0_pc_trigger0          : 1;	/* Trigger 0 */
        uint64_t lm0_pc_trigger1          : 1;	/* Trigger 1 */
        uint64_t lm0_async_buf1_unflow    : 1;	/* Async Buffer 1Underflow */
        uint64_t lm0_async_buf1_ovflow    : 1;	/* Async Buffer 1 Overflow */
        uint64_t lm0_async_buf0_unflow    : 1;	/* Async Buffer 0 Underflow */
        uint64_t lm0_async_buf0_ovflow    : 1;	/* Async Buffer 0 Overflow */
        uint64_t lm1_perr_cnt_ovflow      : 1;	/* LM counter overflow */
        uint64_t lm1_pc_trigger10         : 1;	/* Trigger 1 and 0 */
        uint64_t lm1_pc_trigger0          : 1;	/* Trigger 0 */
        uint64_t lm1_pc_trigger1          : 1;	/* Trigger 1 */
        uint64_t lm1_async_buf1_unflow    : 1;	/* Async Buffer 1Underflowow */
        uint64_t lm1_async_buf1_ovflow    : 1;	/* Async Buffer 1 Overflow */
        uint64_t lm1_async_buf0_unflow    : 1;	/* Async Buffer 0 Underflow */
        uint64_t lm1_async_buf0_ovflow    : 1;	/* Async Buffer 0 Overflow */
        uint64_t lb_ring_cclk_ovflow      : 1;	/* LB Ring FIFO for converting cclk to pclk has overflowed */
        uint64_t lb_ring_cclk_unflow      : 1;	/* LB Ring FIFO for converting pclk to cclk has underflowed */
        uint64_t undefine_63_34           :30;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_flg_desc_t;

typedef union ar_pi_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t lm0_perr                 : 1;	/* logic monitor 0 parity error */
        uint64_t lm1_perr                 : 1;	/* logic monitor 1 parity error */
        uint64_t lm0_trigger              : 1;	/* logic monitor 0 Trigger */
        uint64_t lm1_trigger              : 1;	/* logic monitor 1 Trigger */
        uint64_t pm_cntr_perr             : 1;	/* performance monitor counter parity error */
        uint64_t pm_cntr_rollover         : 1;	/* performance monitor counter rollover */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t lm0_perr_cnt_ovflow      : 1;	/* LM counter overflow */
        uint64_t lm0_pc_trigger10         : 1;	/* Trigger 1 and 0 */
        uint64_t lm0_pc_trigger0          : 1;	/* Trigger 0 */
        uint64_t lm0_pc_trigger1          : 1;	/* Trigger 1 */
        uint64_t lm0_async_buf1_unflow    : 1;	/* Async Buffer 1Underflow */
        uint64_t lm0_async_buf1_ovflow    : 1;	/* Async Buffer 1 Overflow */
        uint64_t lm0_async_buf0_unflow    : 1;	/* Async Buffer 0 Underflow */
        uint64_t lm0_async_buf0_ovflow    : 1;	/* Async Buffer 0 Overflow */
        uint64_t lm1_perr_cnt_ovflow      : 1;	/* LM counter overflow */
        uint64_t lm1_pc_trigger10         : 1;	/* Trigger 1 and 0 */
        uint64_t lm1_pc_trigger0          : 1;	/* Trigger 0 */
        uint64_t lm1_pc_trigger1          : 1;	/* Trigger 1 */
        uint64_t lm1_async_buf1_unflow    : 1;	/* Async Buffer 1Underflowow */
        uint64_t lm1_async_buf1_ovflow    : 1;	/* Async Buffer 1 Overflow */
        uint64_t lm1_async_buf0_unflow    : 1;	/* Async Buffer 0 Underflow */
        uint64_t lm1_async_buf0_ovflow    : 1;	/* Async Buffer 0 Overflow */
        uint64_t lb_ring_cclk_ovflow      : 1;	/* LB Ring FIFO for converting cclk to pclk has overflowed */
        uint64_t lb_ring_cclk_unflow      : 1;	/* LB Ring FIFO for converting pclk to cclk has underflowed */
        uint64_t undefine_63_34           :30;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_clr_desc_t;

typedef union ar_pi_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t lm0_perr                 : 1;	/* 1:1 */
        uint64_t lm1_perr                 : 1;	/* 2:2 */
        uint64_t lm0_trigger              : 1;	/* 3:3 */
        uint64_t lm1_trigger              : 1;	/* 4:4 */
        uint64_t pm_cntr_perr             : 1;	/* 5:5 */
        uint64_t pm_cntr_rollover         : 1;	/* 6:6 */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t lm0_perr_cnt_ovflow      : 1;	/* 7:7 */
        uint64_t lm0_pc_trigger10         : 1;	/* 8:8 */
        uint64_t lm0_pc_trigger0          : 1;	/* 9:9 */
        uint64_t lm0_pc_trigger1          : 1;	/* 10:10 */
        uint64_t lm0_async_buf1_unflow    : 1;	/* 11:11 */
        uint64_t lm0_async_buf1_ovflow    : 1;	/* 12:12 */
        uint64_t lm0_async_buf0_unflow    : 1;	/* 13:13 */
        uint64_t lm0_async_buf0_ovflow    : 1;	/* 14:14 */
        uint64_t lm1_perr_cnt_ovflow      : 1;	/* 15:15 */
        uint64_t lm1_pc_trigger10         : 1;	/* 16:16 */
        uint64_t lm1_pc_trigger0          : 1;	/* 17:17 */
        uint64_t lm1_pc_trigger1          : 1;	/* 18:18 */
        uint64_t lm1_async_buf1_unflow    : 1;	/* 19:19 */
        uint64_t lm1_async_buf1_ovflow    : 1;	/* 20:20 */
        uint64_t lm1_async_buf0_unflow    : 1;	/* 21:21 */
        uint64_t lm1_async_buf0_ovflow    : 1;	/* 22:22 */
        uint64_t lb_ring_cclk_ovflow      : 1;	/* 23:23 */
        uint64_t lb_ring_cclk_unflow      : 1;	/* 24:24 */
        uint64_t undefine_63_34           :30;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_hss_msk_desc_t;

typedef union ar_pi_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t lm0_perr                 : 1;	/* 1:1 */
        uint64_t lm1_perr                 : 1;	/* 2:2 */
        uint64_t lm0_trigger              : 1;	/* 3:3 */
        uint64_t lm1_trigger              : 1;	/* 4:4 */
        uint64_t pm_cntr_perr             : 1;	/* 5:5 */
        uint64_t pm_cntr_rollover         : 1;	/* 6:6 */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t lm0_perr_cnt_ovflow      : 1;	/* 7:7 */
        uint64_t lm0_pc_trigger10         : 1;	/* 8:8 */
        uint64_t lm0_pc_trigger0          : 1;	/* 9:9 */
        uint64_t lm0_pc_trigger1          : 1;	/* 10:10 */
        uint64_t lm0_async_buf1_unflow    : 1;	/* 11:11 */
        uint64_t lm0_async_buf1_ovflow    : 1;	/* 12:12 */
        uint64_t lm0_async_buf0_unflow    : 1;	/* 13:13 */
        uint64_t lm0_async_buf0_ovflow    : 1;	/* 14:14 */
        uint64_t lm1_perr_cnt_ovflow      : 1;	/* 15:15 */
        uint64_t lm1_pc_trigger10         : 1;	/* 16:16 */
        uint64_t lm1_pc_trigger0          : 1;	/* 17:17 */
        uint64_t lm1_pc_trigger1          : 1;	/* 18:18 */
        uint64_t lm1_async_buf1_unflow    : 1;	/* 19:19 */
        uint64_t lm1_async_buf1_ovflow    : 1;	/* 20:20 */
        uint64_t lm1_async_buf0_unflow    : 1;	/* 21:21 */
        uint64_t lm1_async_buf0_ovflow    : 1;	/* 22:22 */
        uint64_t lb_ring_cclk_ovflow      : 1;	/* 23:23 */
        uint64_t lb_ring_cclk_unflow      : 1;	/* 24:24 */
        uint64_t undefine_63_34           :30;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_os_msk_desc_t;

typedef union ar_pi_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t lm0_perr                 : 1;	/* 1:1 */
        uint64_t lm1_perr                 : 1;	/* 2:2 */
        uint64_t lm0_trigger              : 1;	/* 3:3 */
        uint64_t lm1_trigger              : 1;	/* 4:4 */
        uint64_t pm_cntr_perr             : 1;	/* 5:5 */
        uint64_t pm_cntr_rollover         : 1;	/* 6:6 */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t lm0_perr_cnt_ovflow      : 1;	/* 7:7 */
        uint64_t lm0_pc_trigger10         : 1;	/* 8:8 */
        uint64_t lm0_pc_trigger0          : 1;	/* 9:9 */
        uint64_t lm0_pc_trigger1          : 1;	/* 10:10 */
        uint64_t lm0_async_buf1_unflow    : 1;	/* 11:11 */
        uint64_t lm0_async_buf1_ovflow    : 1;	/* 12:12 */
        uint64_t lm0_async_buf0_unflow    : 1;	/* 13:13 */
        uint64_t lm0_async_buf0_ovflow    : 1;	/* 14:14 */
        uint64_t lm1_perr_cnt_ovflow      : 1;	/* 15:15 */
        uint64_t lm1_pc_trigger10         : 1;	/* 16:16 */
        uint64_t lm1_pc_trigger0          : 1;	/* 17:17 */
        uint64_t lm1_pc_trigger1          : 1;	/* 18:18 */
        uint64_t lm1_async_buf1_unflow    : 1;	/* 19:19 */
        uint64_t lm1_async_buf1_ovflow    : 1;	/* 20:20 */
        uint64_t lm1_async_buf0_unflow    : 1;	/* 21:21 */
        uint64_t lm1_async_buf0_ovflow    : 1;	/* 22:22 */
        uint64_t lb_ring_cclk_ovflow      : 1;	/* 23:23 */
        uint64_t lb_ring_cclk_unflow      : 1;	/* 24:24 */
        uint64_t undefine_63_34           :30;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_err_first_flg_desc_t;

typedef union ar_pi_cfg_pmi_cfg_desc {
    struct {
        // QW0
        uint64_t preq_fc_thresh           : 4;	/* PCIe Request Buffer Flow Control Threshold */
        uint64_t nrsp_fc_thresh           : 4;	/* NIC Response Buffer Flow Control Threshold */
        uint64_t irsp_fc_thresh           : 3;	/* Immediate Response Buffer Flow Control Threshold */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t nrsp_hwm_thresh          : 4;	/* NIC Response Buffer High Water Mark Threshold */
        uint64_t nic_resp_credits         : 8;	/* PI to NIC Response Flit Buffer Credits */
        uint64_t ext_tag_pool_ena         : 8;	/* Extended Tag Mode TID Pool enable */
        uint64_t amo_tph_ena              : 1;	/* TPH enable for AMO requests */
        uint64_t put_tph_ena              : 1;	/* TPH enable for Put requests */
        uint64_t get_tph_ena              : 1;	/* TPH enable for Get requests */
        uint64_t poison_ena               : 1;	/* Sets the poison bit for PCIe requests that incur a MBE payload error during request translation */
        uint64_t tbe_fatal_ena            : 1;	/* Tail Bit Error and MBE Fatal Enable */
        uint64_t posted_phantom_ena       : 1;	/* Posted Phantom ID Enable */
        uint64_t prf_nrsp_blkd_en         : 1;	/* Enable for NRsp Buffer Blocked Performance counter */
        uint64_t prf_irsp_blkd_en         : 1;	/* Enable for IRsp Buffer Blocked Performance counter */
        uint64_t prf_ptid_blkd_en         : 1;	/* Enable for a NIC request translation Blocked Performance counter */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_cfg_pmi_cfg_desc_t;

typedef union ar_pi_cfg_pmi_attr_ctl_desc {
    struct {
        // QW0
        uint64_t amo_ro                   : 2;	/* Relaxed Order Attribute control for AMO requests */
        uint64_t amo_ns                   : 2;	/* No Snoop Attribute control for AMO requests */
        uint64_t flush_ro                 : 2;	/* Relaxed Order Attribute control for Flush requests */
        uint64_t flush_ns                 : 2;	/* No Snoop Attribute control for Flush requests */
        uint64_t get_ro                   : 2;	/* Relaxed Order Attribute control for Get requests */
        uint64_t get_ns                   : 2;	/* No Snoop Attribute control for Get requests */
        uint64_t put_ro                   : 2;	/* Relaxed Order Attribute control for Put requests */
        uint64_t put_ns                   : 2;	/* No Snoop Attribute control for Put requests */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_cfg_pmi_attr_ctl_desc_t;

typedef union ar_pi_cfg_pmi_tcg_cfg_desc {
    struct {
        // QW0
        uint64_t tcg0_vec                 : 8;	/* Translation Context Group 0 Function ID Vector */
        uint64_t tcg1_vec                 : 8;	/* Translation Context Group 1 Function ID Vector */
        uint64_t tcg2_vec                 : 8;	/* Translation Context Group 2 Function ID Vector */
        uint64_t tcg3_vec                 : 8;	/* Translation Context Group 3 Function ID Vector */
        uint64_t tcg4_vec                 : 8;	/* Translation Context Group 4 Function ID Vector */
        uint64_t tcg5_vec                 : 8;	/* Translation Context Group 5 Function ID Vector */
        uint64_t tcg6_vec                 : 8;	/* Translation Context Group 6 Function ID Vector */
        uint64_t tcg7_vec                 : 8;	/* Translation Context Group 7 Function ID Vector */
    };
    uint64_t qwords[1];
} ar_pi_cfg_pmi_tcg_cfg_desc_t;

typedef union ar_pi_cfg_pmi_tcg_map_desc {
    struct {
        // QW0
        uint64_t tcg_ntc0                 : 3;	/* Translation Context Group ID for NTC0 */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t tcg_ntc1                 : 3;	/* Translation Context Group ID for NTC1 */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t tcg_ntc2                 : 3;	/* Translation Context Group ID for NTC2 */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t tcg_ntc3                 : 3;	/* Translation Context Group ID for NTC3 */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t tcg_ntc4                 : 3;	/* Translation Context Group ID for NTC4 */
        uint64_t undefine_19_19           : 1;	/* undefined */
        uint64_t tcg_ntc5                 : 3;	/* Translation Context Group ID for NTC5 */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t tcg_ntc6                 : 3;	/* Translation Context Group ID for NTC6 */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t tcg_ntc7                 : 3;	/* Translation Context Group ID for NTC7 */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t tcg_ntc8                 : 3;	/* Translation Context Group ID for NTC8 */
        uint64_t undefine_35_35           : 1;	/* undefined */
        uint64_t tcg_ntc9                 : 3;	/* Translation Context Group ID for NTC9 */
        uint64_t undefine_39_39           : 1;	/* undefined */
        uint64_t tcg_ntc10                : 3;	/* Translation Context Group ID for NTC10 */
        uint64_t undefine_43_43           : 1;	/* undefined */
        uint64_t tcg_ntc11                : 3;	/* Translation Context Group ID for NTC11 */
        uint64_t undefine_47_47           : 1;	/* undefined */
        uint64_t tcg_ntc12                : 3;	/* Translation Context Group ID for NTC12 */
        uint64_t undefine_51_51           : 1;	/* undefined */
        uint64_t tcg_ntc13                : 3;	/* Translation Context Group ID for NTC13 */
        uint64_t undefine_55_55           : 1;	/* undefined */
        uint64_t tcg_ntc14                : 3;	/* Translation Context Group ID for NTC14 */
        uint64_t undefine_59_59           : 1;	/* undefined */
        uint64_t tcg_ntc15                : 3;	/* Translation Context Group ID for NTC15 */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_cfg_pmi_tcg_map_desc_t;

typedef union ar_pi_cfg_pmi_tph_map_desc {
    struct {
        // QW0
        uint64_t st_tag                   : 9;	/* TPH Steering Tag (ST) Bit 8 controls the source for providing the 8-bit ST used in the PCIe request */
        uint64_t type                     : 2;	/* TPH Type (PH)00: Bi-directional data structure01: Requester10: Target11: Target with Priority */
        uint64_t present                  : 1;	/* TPH Present (TH) */
        uint64_t undefine_63_12           :52;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_cfg_pmi_tph_map_desc_t;

typedef union ar_pi_cfg_pmi_zbr_adr_desc {
    struct {
        // QW0
        uint64_t zbr_adr                  ;	/* Zero-Byte Read Address */
    };
    uint64_t qwords[1];
} ar_pi_cfg_pmi_zbr_adr_desc_t;

typedef union ar_pi_cfg_pmi_scrub_desc {
    struct {
        // QW0
        uint64_t timeout                  :32;	/* Timeout value in prescaled clocks (2 */
        uint64_t prescale                 : 2;	/* Timeout clock Prescale Control of 800Mhz (1 */
        uint64_t undefine_34_34           : 1;	/* undefined */
        uint64_t enable                   : 1;	/* Scrub function Enable */
        uint64_t undefine_63_36           :28;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_cfg_pmi_scrub_desc_t;

typedef union ar_pi_cfg_pmi_traffic_shape_desc {
    struct {
        // QW0
        uint64_t token_rate               :16;	/* Token Rate */
        uint64_t token_cnt                :16;	/* Token Count */
        uint64_t burst_limit              :16;	/* Burst Limit */
        uint64_t undefine_62_48           :15;	/* undefined */
        uint64_t enable                   : 1;	/* Traffic Shaping Enable */
    };
    uint64_t qwords[1];
} ar_pi_cfg_pmi_traffic_shape_desc_t;

typedef union ar_pi_pmi_dbg_errinj_reqtrans_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error in the flit specified by COUNT in one packet */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* This status bit should be clear when the MMR is written by software */
        uint64_t count                    : 3;	/* Flit in which to inject the error */
        uint64_t undefine_11_7            : 5;	/* undefined */
        uint64_t parity                   : 4;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted */
        uint64_t checkbits_lo             : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 63:0 to be inverted */
        uint64_t checkbits_up             : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 135:72 to be inverted */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_dbg_errinj_reqtrans_desc_t;

typedef union ar_pi_pmi_dbg_errinj_prsp_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error in the flit specified by COUNT in one packet */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* This status bit should be clear when the MMR is written by software */
        uint64_t count                    : 3;	/* Flit in which to inject the error */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t checkbits_lo             : 7;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the PRSP buffer completion response bits 48:0 to be inverted */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t checkbits_up             : 9;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the PRSP buffer completion response bits 295:49 to be inverted */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_dbg_errinj_prsp_desc_t;

typedef union ar_pi_pmi_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t preq_wrt_error           : 1;	/* PReq Buffer Write Error */
        uint64_t nreq_sb_hdr_err          : 1;	/* NReq Buffer Sideband Header Error */
        uint64_t nreq_sb_data_err_rsp     : 1;	/* NReq Buffer Sideband Data Error w/ Response */
        uint64_t nreq_sb_data_err         : 1;	/* NReq Buffer Sideband Data Error */
        uint64_t nreq_sb_pe               : 1;	/* NReq Buffer Sideband Parity Error */
        uint64_t nreq_hdr_pe              : 1;	/* NReq Buffer Header Parity Error */
        uint64_t last_compl_err           : 1;	/* Last Compltion Error */
        uint64_t nrsp_sb_pe               : 1;	/* NRsp Buffer Sideband Parity Error */
        uint64_t irsp_pe                  : 1;	/* IRsp Buffer Parity Error */
        uint64_t morb_pe                  : 1;	/* MORB Buffer Parity Error */
        uint64_t illegal_cmd_rsp          : 1;	/* Illegal NIC Request Command w/ Response */
        uint64_t illegal_cmd              : 1;	/* Illegal NIC Request Command */
        uint64_t illegal_cntbm_rsp        : 1;	/* Illegal NIC Request cntbm-address combination w/ Response */
        uint64_t illegal_cntbm            : 1;	/* Illegal NIC Request cntbm-address combination */
        uint64_t tid_alloc_err            : 1;	/* PCIe TID Allocation Error */
        uint64_t undefine_31_16           :16;	/* undefined */
        uint64_t hal_compl_adrerr_rsp     : 1;	/* HAL Completion Address Error */
        uint64_t hal_compl_ur_rsp         : 1;	/* HAL Completion terminated with UR (unsupported request) status */
        uint64_t hal_compl_ca_rsp         : 1;	/* HAL Completion terminated with CA (abort) status */
        uint64_t hal_compl_crs_rsp        : 1;	/* HAL Completion terminated with CRS (retry) status */
        uint64_t hal_compl_iderr_rsp      : 1;	/* HAL Completion with ID Error */
        uint64_t hal_compl_invtag         : 1;	/* HAL Completion with Invalid Tag Error */
        uint64_t hal_compl_merr_rsp       : 1;	/* HAL Completion with Master Error */
        uint64_t hal_compl_nodata_rsp     : 1;	/* HAL Completion with No Data Error */
        uint64_t hal_compl_pe             : 1;	/* HAL Completion Parity Error (header) */
        uint64_t hal_compl_pe_rsp         : 1;	/* HAL Completion Parity Error (payload) */
        uint64_t hal_compl_poison_rsp     : 1;	/* HAL Completion Poison status */
        uint64_t hal_compl_timeout_rsp    : 1;	/* HAL Completion Timeout */
        uint64_t nreq_lstatus_err_rsp     : 1;	/* NIC Request received with LSTATUS Error */
        uint64_t nreq_lstatus_err         : 1;	/* NIC Request received with LSTATUS Error */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_err_flg_desc_t;

typedef union ar_pi_pmi_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t preq_wrt_error           : 1;	/* PReq Buffer Write Error */
        uint64_t nreq_sb_hdr_err          : 1;	/* NReq Buffer Sideband Header Error */
        uint64_t nreq_sb_data_err_rsp     : 1;	/* NReq Buffer Sideband Data Error w/ Response */
        uint64_t nreq_sb_data_err         : 1;	/* NReq Buffer Sideband Data Error */
        uint64_t nreq_sb_pe               : 1;	/* NReq Buffer Sideband Parity Error */
        uint64_t nreq_hdr_pe              : 1;	/* NReq Buffer Header Parity Error */
        uint64_t last_compl_err           : 1;	/* Last Compltion Error */
        uint64_t nrsp_sb_pe               : 1;	/* NRsp Buffer Sideband Parity Error */
        uint64_t irsp_pe                  : 1;	/* IRsp Buffer Parity Error */
        uint64_t morb_pe                  : 1;	/* MORB Buffer Parity Error */
        uint64_t illegal_cmd_rsp          : 1;	/* Illegal NIC Request Command w/ Response */
        uint64_t illegal_cmd              : 1;	/* Illegal NIC Request Command */
        uint64_t illegal_cntbm_rsp        : 1;	/* Illegal NIC Request cntbm-address combination w/ Response */
        uint64_t illegal_cntbm            : 1;	/* Illegal NIC Request cntbm-address combination */
        uint64_t tid_alloc_err            : 1;	/* PCIe TID Allocation Error */
        uint64_t undefine_31_16           :16;	/* undefined */
        uint64_t hal_compl_adrerr_rsp     : 1;	/* HAL Completion Address Error */
        uint64_t hal_compl_ur_rsp         : 1;	/* HAL Completion terminated with UR (unsupported request) status */
        uint64_t hal_compl_ca_rsp         : 1;	/* HAL Completion terminated with CA (abort) status */
        uint64_t hal_compl_crs_rsp        : 1;	/* HAL Completion terminated with CRS (retry) status */
        uint64_t hal_compl_iderr_rsp      : 1;	/* HAL Completion with ID Error */
        uint64_t hal_compl_invtag         : 1;	/* HAL Completion with Invalid Tag Error */
        uint64_t hal_compl_merr_rsp       : 1;	/* HAL Completion with Master Error */
        uint64_t hal_compl_nodata_rsp     : 1;	/* HAL Completion with No Data Error */
        uint64_t hal_compl_pe             : 1;	/* HAL Completion Parity Error (header) */
        uint64_t hal_compl_pe_rsp         : 1;	/* HAL Completion Parity Error (payload) */
        uint64_t hal_compl_poison_rsp     : 1;	/* HAL Completion Poison status */
        uint64_t hal_compl_timeout_rsp    : 1;	/* HAL Completion Timeout */
        uint64_t nreq_lstatus_err_rsp     : 1;	/* NIC Request received with LSTATUS Error */
        uint64_t nreq_lstatus_err         : 1;	/* NIC Request received with LSTATUS Error */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_err_clr_desc_t;

typedef union ar_pi_pmi_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t preq_wrt_error           : 1;	/* 1:1 */
        uint64_t nreq_sb_hdr_err          : 1;	/* 2:2 */
        uint64_t nreq_sb_data_err_rsp     : 1;	/* 3:3 */
        uint64_t nreq_sb_data_err         : 1;	/* 4:4 */
        uint64_t nreq_sb_pe               : 1;	/* 5:5 */
        uint64_t nreq_hdr_pe              : 1;	/* 6:6 */
        uint64_t last_compl_err           : 1;	/* 7:7 */
        uint64_t nrsp_sb_pe               : 1;	/* 8:8 */
        uint64_t irsp_pe                  : 1;	/* 9:9 */
        uint64_t morb_pe                  : 1;	/* 10:10 */
        uint64_t illegal_cmd_rsp          : 1;	/* 11:11 */
        uint64_t illegal_cmd              : 1;	/* 12:12 */
        uint64_t illegal_cntbm_rsp        : 1;	/* 13:13 */
        uint64_t illegal_cntbm            : 1;	/* 14:14 */
        uint64_t tid_alloc_err            : 1;	/* 15:15 */
        uint64_t undefine_31_16           :16;	/* undefined */
        uint64_t hal_compl_adrerr_rsp     : 1;	/* 16:16 */
        uint64_t hal_compl_ur_rsp         : 1;	/* 17:17 */
        uint64_t hal_compl_ca_rsp         : 1;	/* 18:18 */
        uint64_t hal_compl_crs_rsp        : 1;	/* 19:19 */
        uint64_t hal_compl_iderr_rsp      : 1;	/* 20:20 */
        uint64_t hal_compl_invtag         : 1;	/* 21:21 */
        uint64_t hal_compl_merr_rsp       : 1;	/* 22:22 */
        uint64_t hal_compl_nodata_rsp     : 1;	/* 23:23 */
        uint64_t hal_compl_pe             : 1;	/* 24:24 */
        uint64_t hal_compl_pe_rsp         : 1;	/* 25:25 */
        uint64_t hal_compl_poison_rsp     : 1;	/* 26:26 */
        uint64_t hal_compl_timeout_rsp    : 1;	/* 27:27 */
        uint64_t nreq_lstatus_err_rsp     : 1;	/* 28:28 */
        uint64_t nreq_lstatus_err         : 1;	/* 29:29 */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_err_hss_msk_desc_t;

typedef union ar_pi_pmi_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t preq_wrt_error           : 1;	/* 1:1 */
        uint64_t nreq_sb_hdr_err          : 1;	/* 2:2 */
        uint64_t nreq_sb_data_err_rsp     : 1;	/* 3:3 */
        uint64_t nreq_sb_data_err         : 1;	/* 4:4 */
        uint64_t nreq_sb_pe               : 1;	/* 5:5 */
        uint64_t nreq_hdr_pe              : 1;	/* 6:6 */
        uint64_t last_compl_err           : 1;	/* 7:7 */
        uint64_t nrsp_sb_pe               : 1;	/* 8:8 */
        uint64_t irsp_pe                  : 1;	/* 9:9 */
        uint64_t morb_pe                  : 1;	/* 10:10 */
        uint64_t illegal_cmd_rsp          : 1;	/* 11:11 */
        uint64_t illegal_cmd              : 1;	/* 12:12 */
        uint64_t illegal_cntbm_rsp        : 1;	/* 13:13 */
        uint64_t illegal_cntbm            : 1;	/* 14:14 */
        uint64_t tid_alloc_err            : 1;	/* 15:15 */
        uint64_t undefine_31_16           :16;	/* undefined */
        uint64_t hal_compl_adrerr_rsp     : 1;	/* 16:16 */
        uint64_t hal_compl_ur_rsp         : 1;	/* 17:17 */
        uint64_t hal_compl_ca_rsp         : 1;	/* 18:18 */
        uint64_t hal_compl_crs_rsp        : 1;	/* 19:19 */
        uint64_t hal_compl_iderr_rsp      : 1;	/* 20:20 */
        uint64_t hal_compl_invtag         : 1;	/* 21:21 */
        uint64_t hal_compl_merr_rsp       : 1;	/* 22:22 */
        uint64_t hal_compl_nodata_rsp     : 1;	/* 23:23 */
        uint64_t hal_compl_pe             : 1;	/* 24:24 */
        uint64_t hal_compl_pe_rsp         : 1;	/* 25:25 */
        uint64_t hal_compl_poison_rsp     : 1;	/* 26:26 */
        uint64_t hal_compl_timeout_rsp    : 1;	/* 27:27 */
        uint64_t nreq_lstatus_err_rsp     : 1;	/* 28:28 */
        uint64_t nreq_lstatus_err         : 1;	/* 29:29 */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_err_os_msk_desc_t;

typedef union ar_pi_pmi_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t preq_wrt_error           : 1;	/* 1:1 */
        uint64_t nreq_sb_hdr_err          : 1;	/* 2:2 */
        uint64_t nreq_sb_data_err_rsp     : 1;	/* 3:3 */
        uint64_t nreq_sb_data_err         : 1;	/* 4:4 */
        uint64_t nreq_sb_pe               : 1;	/* 5:5 */
        uint64_t nreq_hdr_pe              : 1;	/* 6:6 */
        uint64_t last_compl_err           : 1;	/* 7:7 */
        uint64_t nrsp_sb_pe               : 1;	/* 8:8 */
        uint64_t irsp_pe                  : 1;	/* 9:9 */
        uint64_t morb_pe                  : 1;	/* 10:10 */
        uint64_t illegal_cmd_rsp          : 1;	/* 11:11 */
        uint64_t illegal_cmd              : 1;	/* 12:12 */
        uint64_t illegal_cntbm_rsp        : 1;	/* 13:13 */
        uint64_t illegal_cntbm            : 1;	/* 14:14 */
        uint64_t tid_alloc_err            : 1;	/* 15:15 */
        uint64_t undefine_31_16           :16;	/* undefined */
        uint64_t hal_compl_adrerr_rsp     : 1;	/* 16:16 */
        uint64_t hal_compl_ur_rsp         : 1;	/* 17:17 */
        uint64_t hal_compl_ca_rsp         : 1;	/* 18:18 */
        uint64_t hal_compl_crs_rsp        : 1;	/* 19:19 */
        uint64_t hal_compl_iderr_rsp      : 1;	/* 20:20 */
        uint64_t hal_compl_invtag         : 1;	/* 21:21 */
        uint64_t hal_compl_merr_rsp       : 1;	/* 22:22 */
        uint64_t hal_compl_nodata_rsp     : 1;	/* 23:23 */
        uint64_t hal_compl_pe             : 1;	/* 24:24 */
        uint64_t hal_compl_pe_rsp         : 1;	/* 25:25 */
        uint64_t hal_compl_poison_rsp     : 1;	/* 26:26 */
        uint64_t hal_compl_timeout_rsp    : 1;	/* 27:27 */
        uint64_t nreq_lstatus_err_rsp     : 1;	/* 28:28 */
        uint64_t nreq_lstatus_err         : 1;	/* 29:29 */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_err_first_flg_desc_t;

typedef union ar_pi_pmi_fifo_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t nreq_unflow              : 3;	/* NReq Buffer Underflow */
        uint64_t nreq_ovflow              : 3;	/* NReq Buffer Overflow */
        uint64_t nreq_mbe_rsp             : 2;	/* NReq Buffer Multi-Bit Error w/ Response  */
        uint64_t nreq_mbe                 : 2;	/* NReq Buffer Multi-Bit Error */
        uint64_t nreq_sbe                 : 2;	/* NReq Buffer Single-Bit Error */
        uint64_t prsp_mbe                 : 2;	/* PRsp Buffer Multi-bit Error */
        uint64_t prsp_sbe                 : 2;	/* PRsp Buffer Single-bit Error */
        uint64_t nrsp_buf_ovflow          : 1;	/* NRsp Buffer Overflow */
        uint64_t nrsp_buf_unflow          : 1;	/* NRsp Buffer Underflow */
        uint64_t irsp_buf_ovflow          : 1;	/* IRsp Buffer Overflow */
        uint64_t irsp_buf_unflow          : 1;	/* IRsp Buffer Underflow */
        uint64_t prsp_unflow              : 1;	/* PRsp Buffer Underflow */
        uint64_t preq0_ovflow             : 1;	/* PReq Buffer 0 Overflow */
        uint64_t preq1_ovflow             : 1;	/* PReq Buffer 1 Overflow */
        uint64_t preq2_ovflow             : 1;	/* PReq Buffer 2 Overflow */
        uint64_t prsp_mbe_rsp             : 2;	/* PRsp Buffer Multi-bit Error w/ Response */
        uint64_t prsp_tbe                 : 1;	/* PRsp Buffer Tail bit Error */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo_err_flg_desc_t;

typedef union ar_pi_pmi_fifo_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t nreq_unflow              : 3;	/* NReq Buffer Underflow */
        uint64_t nreq_ovflow              : 3;	/* NReq Buffer Overflow */
        uint64_t nreq_mbe_rsp             : 2;	/* NReq Buffer Multi-Bit Error w/ Response  */
        uint64_t nreq_mbe                 : 2;	/* NReq Buffer Multi-Bit Error */
        uint64_t nreq_sbe                 : 2;	/* NReq Buffer Single-Bit Error */
        uint64_t prsp_mbe                 : 2;	/* PRsp Buffer Multi-bit Error */
        uint64_t prsp_sbe                 : 2;	/* PRsp Buffer Single-bit Error */
        uint64_t nrsp_buf_ovflow          : 1;	/* NRsp Buffer Overflow */
        uint64_t nrsp_buf_unflow          : 1;	/* NRsp Buffer Underflow */
        uint64_t irsp_buf_ovflow          : 1;	/* IRsp Buffer Overflow */
        uint64_t irsp_buf_unflow          : 1;	/* IRsp Buffer Underflow */
        uint64_t prsp_unflow              : 1;	/* PRsp Buffer Underflow */
        uint64_t preq0_ovflow             : 1;	/* PReq Buffer 0 Overflow */
        uint64_t preq1_ovflow             : 1;	/* PReq Buffer 1 Overflow */
        uint64_t preq2_ovflow             : 1;	/* PReq Buffer 2 Overflow */
        uint64_t prsp_mbe_rsp             : 2;	/* PRsp Buffer Multi-bit Error w/ Response */
        uint64_t prsp_tbe                 : 1;	/* PRsp Buffer Tail bit Error */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo_err_clr_desc_t;

typedef union ar_pi_pmi_fifo_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nreq_unflow              : 3;	/* 3:1 */
        uint64_t nreq_ovflow              : 3;	/* 6:4 */
        uint64_t nreq_mbe_rsp             : 2;	/* 8:7 */
        uint64_t nreq_mbe                 : 2;	/* 10:9 */
        uint64_t nreq_sbe                 : 2;	/* 12:11 */
        uint64_t prsp_mbe                 : 2;	/* 14:13 */
        uint64_t prsp_sbe                 : 2;	/* 16:15 */
        uint64_t nrsp_buf_ovflow          : 1;	/* 17:17 */
        uint64_t nrsp_buf_unflow          : 1;	/* 18:18 */
        uint64_t irsp_buf_ovflow          : 1;	/* 19:19 */
        uint64_t irsp_buf_unflow          : 1;	/* 20:20 */
        uint64_t prsp_unflow              : 1;	/* 21:21 */
        uint64_t preq0_ovflow             : 1;	/* 22:22 */
        uint64_t preq1_ovflow             : 1;	/* 23:23 */
        uint64_t preq2_ovflow             : 1;	/* 24:24 */
        uint64_t prsp_mbe_rsp             : 2;	/* 26:25 */
        uint64_t prsp_tbe                 : 1;	/* 27:27 */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo_err_hss_msk_desc_t;

typedef union ar_pi_pmi_fifo_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nreq_unflow              : 3;	/* 3:1 */
        uint64_t nreq_ovflow              : 3;	/* 6:4 */
        uint64_t nreq_mbe_rsp             : 2;	/* 8:7 */
        uint64_t nreq_mbe                 : 2;	/* 10:9 */
        uint64_t nreq_sbe                 : 2;	/* 12:11 */
        uint64_t prsp_mbe                 : 2;	/* 14:13 */
        uint64_t prsp_sbe                 : 2;	/* 16:15 */
        uint64_t nrsp_buf_ovflow          : 1;	/* 17:17 */
        uint64_t nrsp_buf_unflow          : 1;	/* 18:18 */
        uint64_t irsp_buf_ovflow          : 1;	/* 19:19 */
        uint64_t irsp_buf_unflow          : 1;	/* 20:20 */
        uint64_t prsp_unflow              : 1;	/* 21:21 */
        uint64_t preq0_ovflow             : 1;	/* 22:22 */
        uint64_t preq1_ovflow             : 1;	/* 23:23 */
        uint64_t preq2_ovflow             : 1;	/* 24:24 */
        uint64_t prsp_mbe_rsp             : 2;	/* 26:25 */
        uint64_t prsp_tbe                 : 1;	/* 27:27 */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo_err_os_msk_desc_t;

typedef union ar_pi_pmi_fifo_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nreq_unflow              : 3;	/* 3:1 */
        uint64_t nreq_ovflow              : 3;	/* 6:4 */
        uint64_t nreq_mbe_rsp             : 2;	/* 8:7 */
        uint64_t nreq_mbe                 : 2;	/* 10:9 */
        uint64_t nreq_sbe                 : 2;	/* 12:11 */
        uint64_t prsp_mbe                 : 2;	/* 14:13 */
        uint64_t prsp_sbe                 : 2;	/* 16:15 */
        uint64_t nrsp_buf_ovflow          : 1;	/* 17:17 */
        uint64_t nrsp_buf_unflow          : 1;	/* 18:18 */
        uint64_t irsp_buf_ovflow          : 1;	/* 19:19 */
        uint64_t irsp_buf_unflow          : 1;	/* 20:20 */
        uint64_t prsp_unflow              : 1;	/* 21:21 */
        uint64_t preq0_ovflow             : 1;	/* 22:22 */
        uint64_t preq1_ovflow             : 1;	/* 23:23 */
        uint64_t preq2_ovflow             : 1;	/* 24:24 */
        uint64_t prsp_mbe_rsp             : 2;	/* 26:25 */
        uint64_t prsp_tbe                 : 1;	/* 27:27 */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_fifo_err_first_flg_desc_t;

typedef union ar_pi_pmi_mbe_err_info_desc {
    struct {
        // QW0
        uint64_t nreq_synd0               : 8;	/* NReq Buffer Data Syndrome0 */
        uint64_t nreq_synd1               : 8;	/* NReq Buffer Data Syndrome1 */
        uint64_t nreq_rsp_synd0           : 8;	/* NReq Buffer Data Syndrome0 */
        uint64_t nreq_rsp_synd1           : 8;	/* NReq Buffer Data Syndrome1 */
        uint64_t prsp_synd0               : 7;	/* PReq1 Buffer Data Syndrome0 */
        uint64_t prsp_synd1               : 9;	/* PReq1 Buffer Data Syndrome1 */
        uint64_t prsp_rsp_synd0           : 7;	/* PReq1 Buffer Data Syndrome0 */
        uint64_t prsp_rsp_synd1           : 9;	/* PReq1 Buffer Data Syndrome1 */
    };
    uint64_t qwords[1];
} ar_pi_pmi_mbe_err_info_desc_t;

typedef union ar_pi_pmi_sbe_err_info_desc {
    struct {
        // QW0
        uint64_t nreq_synd0               : 8;	/* NReq Buffer Data Syndrome0 */
        uint64_t nreq_synd1               : 8;	/* NReq Buffer Data Syndrome1 */
        uint64_t prsp_synd0               : 7;	/* PRsp Buffer Data Syndrome0 */
        uint64_t prsp_synd1               : 9;	/* PRsp Buffer Data Syndrome1 */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_sbe_err_info_desc_t;

typedef union ar_pi_pmi_ptid_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_ptid_stall_duration_desc_t;

typedef union ar_pi_pmi_irsp_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_irsp_stall_duration_desc_t;

typedef union ar_pi_pmi_nrsp_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pmi_nrsp_stall_duration_desc_t;

typedef union ar_pi_pii_cfg_desc {
    struct {
        // QW0
        uint64_t msix_in_band_func_disable: 1;	/* MSI-X In Band Function DisableThe encoded in-band IRQ bus from the PMI block includes an associated function */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_cfg_desc_t;

typedef union ar_pi_pii_dbg_errinj_ram_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error onceMode 1: Inject error alwaysMode 2: Inject error once if address matchesMode 3: Inject error always if address matches */
        uint64_t undefine_4_3             : 2;	/* undefined */
        uint64_t select                   : 2;	/* SELECT=00: Function 0SELECT=01: Function 1SELECT=10: Function 2SELECT=11: Function 3 */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t ecc0                     : 8;	/* When an error is injected on a flit, this field indicates which bits of ECC0 should be inverted */
        uint64_t undefine_23_16           : 8;	/* undefined */
        uint64_t ecc1                     : 8;	/* When an error is injected on a flit, this field indicates which bits of ECC1 should be inverted */
        uint64_t address                  : 6;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_38           :26;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_dbg_errinj_ram_desc_t;

typedef union ar_pi_pii_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t f0_msix_table_mbe        : 1;	/* Function 0 MSI-X TABLE Multi-Bit Error */
        uint64_t f0_msix_table_mbe_dup    : 1;	/* Function 0 MSI-X TABLE Multi-Bit Error */
        uint64_t f0_msix_table_sbe        : 1;	/* Function 0 MSI-X TABLE Single-Bit Error */
        uint64_t f0_msix_table_sbe_dup    : 1;	/* Function 0 MSI-X TABLE Single-Bit Error */
        uint64_t f1_msix_table_mbe        : 1;	/* Function 1 MSI-X TABLE Multi-Bit Error */
        uint64_t f1_msix_table_mbe_dup    : 1;	/* Function 1 MSI-X TABLE Multi-Bit Error */
        uint64_t f1_msix_table_sbe        : 1;	/* Function 1 MSI-X TABLE Single-Bit Error */
        uint64_t f1_msix_table_sbe_dup    : 1;	/* Function 1 MSI-X TABLE Single-Bit Error */
        uint64_t f2_msix_table_mbe        : 1;	/* Function 2 MSI-X TABLE Multi-Bit Error */
        uint64_t f2_msix_table_mbe_dup    : 1;	/* Function 2 MSI-X TABLE Multi-Bit Error */
        uint64_t f2_msix_table_sbe        : 1;	/* Function 2 MSI-X TABLE Single-Bit Error */
        uint64_t f2_msix_table_sbe_dup    : 1;	/* Function 2 MSI-X TABLE Single-Bit Error */
        uint64_t f3_msix_table_mbe        : 1;	/* Function 3 MSI-X TABLE Multi-Bit Error */
        uint64_t f3_msix_table_mbe_dup    : 1;	/* Function 3 MSI-X TABLE Multi-Bit Error */
        uint64_t f3_msix_table_sbe        : 1;	/* Function 3 MSI-X TABLE Single-Bit Error */
        uint64_t f3_msix_table_sbe_dup    : 1;	/* Function 3 MSI-X TABLE Single-Bit Error */
        uint64_t f0_msix_msg_fifo_ov      : 1;	/* Function 0 MSI-X Message FIFO Overflow */
        uint64_t f1_msix_msg_fifo_ov      : 1;	/* Function 1 MSI-X Message FIFO Overflow */
        uint64_t f2_msix_msg_fifo_ov      : 1;	/* Function 2 MSI-X Message FIFO Overflow */
        uint64_t f3_msix_msg_fifo_ov      : 1;	/* Function 3 MSI-X Message FIFO Overflow */
        uint64_t irq_sync_fifo_un         : 1;	/* IRQ Sync FIFO Underflow */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_err_flg_desc_t;

typedef union ar_pi_pii_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t f0_msix_table_mbe        : 1;	/* Function 0 MSI-X TABLE Multi-Bit Error */
        uint64_t f0_msix_table_mbe_dup    : 1;	/* Function 0 MSI-X TABLE Multi-Bit Error */
        uint64_t f0_msix_table_sbe        : 1;	/* Function 0 MSI-X TABLE Single-Bit Error */
        uint64_t f0_msix_table_sbe_dup    : 1;	/* Function 0 MSI-X TABLE Single-Bit Error */
        uint64_t f1_msix_table_mbe        : 1;	/* Function 1 MSI-X TABLE Multi-Bit Error */
        uint64_t f1_msix_table_mbe_dup    : 1;	/* Function 1 MSI-X TABLE Multi-Bit Error */
        uint64_t f1_msix_table_sbe        : 1;	/* Function 1 MSI-X TABLE Single-Bit Error */
        uint64_t f1_msix_table_sbe_dup    : 1;	/* Function 1 MSI-X TABLE Single-Bit Error */
        uint64_t f2_msix_table_mbe        : 1;	/* Function 2 MSI-X TABLE Multi-Bit Error */
        uint64_t f2_msix_table_mbe_dup    : 1;	/* Function 2 MSI-X TABLE Multi-Bit Error */
        uint64_t f2_msix_table_sbe        : 1;	/* Function 2 MSI-X TABLE Single-Bit Error */
        uint64_t f2_msix_table_sbe_dup    : 1;	/* Function 2 MSI-X TABLE Single-Bit Error */
        uint64_t f3_msix_table_mbe        : 1;	/* Function 3 MSI-X TABLE Multi-Bit Error */
        uint64_t f3_msix_table_mbe_dup    : 1;	/* Function 3 MSI-X TABLE Multi-Bit Error */
        uint64_t f3_msix_table_sbe        : 1;	/* Function 3 MSI-X TABLE Single-Bit Error */
        uint64_t f3_msix_table_sbe_dup    : 1;	/* Function 3 MSI-X TABLE Single-Bit Error */
        uint64_t f0_msix_msg_fifo_ov      : 1;	/* Function 0 MSI-X Message FIFO Overflow */
        uint64_t f1_msix_msg_fifo_ov      : 1;	/* Function 1 MSI-X Message FIFO Overflow */
        uint64_t f2_msix_msg_fifo_ov      : 1;	/* Function 2 MSI-X Message FIFO Overflow */
        uint64_t f3_msix_msg_fifo_ov      : 1;	/* Function 3 MSI-X Message FIFO Overflow */
        uint64_t irq_sync_fifo_un         : 1;	/* IRQ Sync FIFO Underflow */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_err_clr_desc_t;

typedef union ar_pi_pii_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t f0_msix_table_mbe        : 1;	/* 2:1 */
        uint64_t f0_msix_table_mbe_dup    : 1;	/* 2:1 */
        uint64_t f0_msix_table_sbe        : 1;	/* 4:3 */
        uint64_t f0_msix_table_sbe_dup    : 1;	/* 4:3 */
        uint64_t f1_msix_table_mbe        : 1;	/* 6:5 */
        uint64_t f1_msix_table_mbe_dup    : 1;	/* 6:5 */
        uint64_t f1_msix_table_sbe        : 1;	/* 8:7 */
        uint64_t f1_msix_table_sbe_dup    : 1;	/* 8:7 */
        uint64_t f2_msix_table_mbe        : 1;	/* 10:9 */
        uint64_t f2_msix_table_mbe_dup    : 1;	/* 10:9 */
        uint64_t f2_msix_table_sbe        : 1;	/* 12:11 */
        uint64_t f2_msix_table_sbe_dup    : 1;	/* 12:11 */
        uint64_t f3_msix_table_mbe        : 1;	/* 14:13 */
        uint64_t f3_msix_table_mbe_dup    : 1;	/* 14:13 */
        uint64_t f3_msix_table_sbe        : 1;	/* 16:15 */
        uint64_t f3_msix_table_sbe_dup    : 1;	/* 16:15 */
        uint64_t f0_msix_msg_fifo_ov      : 1;	/* 17:17 */
        uint64_t f1_msix_msg_fifo_ov      : 1;	/* 18:18 */
        uint64_t f2_msix_msg_fifo_ov      : 1;	/* 19:19 */
        uint64_t f3_msix_msg_fifo_ov      : 1;	/* 20:20 */
        uint64_t irq_sync_fifo_un         : 1;	/* 21:21 */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_err_hss_msk_desc_t;

typedef union ar_pi_pii_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t f0_msix_table_mbe        : 1;	/* 2:1 */
        uint64_t f0_msix_table_mbe_dup    : 1;	/* 2:1 */
        uint64_t f0_msix_table_sbe        : 1;	/* 4:3 */
        uint64_t f0_msix_table_sbe_dup    : 1;	/* 4:3 */
        uint64_t f1_msix_table_mbe        : 1;	/* 6:5 */
        uint64_t f1_msix_table_mbe_dup    : 1;	/* 6:5 */
        uint64_t f1_msix_table_sbe        : 1;	/* 8:7 */
        uint64_t f1_msix_table_sbe_dup    : 1;	/* 8:7 */
        uint64_t f2_msix_table_mbe        : 1;	/* 10:9 */
        uint64_t f2_msix_table_mbe_dup    : 1;	/* 10:9 */
        uint64_t f2_msix_table_sbe        : 1;	/* 12:11 */
        uint64_t f2_msix_table_sbe_dup    : 1;	/* 12:11 */
        uint64_t f3_msix_table_mbe        : 1;	/* 14:13 */
        uint64_t f3_msix_table_mbe_dup    : 1;	/* 14:13 */
        uint64_t f3_msix_table_sbe        : 1;	/* 16:15 */
        uint64_t f3_msix_table_sbe_dup    : 1;	/* 16:15 */
        uint64_t f0_msix_msg_fifo_ov      : 1;	/* 17:17 */
        uint64_t f1_msix_msg_fifo_ov      : 1;	/* 18:18 */
        uint64_t f2_msix_msg_fifo_ov      : 1;	/* 19:19 */
        uint64_t f3_msix_msg_fifo_ov      : 1;	/* 20:20 */
        uint64_t irq_sync_fifo_un         : 1;	/* 21:21 */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_err_os_msk_desc_t;

typedef union ar_pi_pii_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t f0_msix_table_mbe        : 1;	/* 2:1 */
        uint64_t f0_msix_table_mbe_dup    : 1;	/* 2:1 */
        uint64_t f0_msix_table_sbe        : 1;	/* 4:3 */
        uint64_t f0_msix_table_sbe_dup    : 1;	/* 4:3 */
        uint64_t f1_msix_table_mbe        : 1;	/* 6:5 */
        uint64_t f1_msix_table_mbe_dup    : 1;	/* 6:5 */
        uint64_t f1_msix_table_sbe        : 1;	/* 8:7 */
        uint64_t f1_msix_table_sbe_dup    : 1;	/* 8:7 */
        uint64_t f2_msix_table_mbe        : 1;	/* 10:9 */
        uint64_t f2_msix_table_mbe_dup    : 1;	/* 10:9 */
        uint64_t f2_msix_table_sbe        : 1;	/* 12:11 */
        uint64_t f2_msix_table_sbe_dup    : 1;	/* 12:11 */
        uint64_t f3_msix_table_mbe        : 1;	/* 14:13 */
        uint64_t f3_msix_table_mbe_dup    : 1;	/* 14:13 */
        uint64_t f3_msix_table_sbe        : 1;	/* 16:15 */
        uint64_t f3_msix_table_sbe_dup    : 1;	/* 16:15 */
        uint64_t f0_msix_msg_fifo_ov      : 1;	/* 17:17 */
        uint64_t f1_msix_msg_fifo_ov      : 1;	/* 18:18 */
        uint64_t f2_msix_msg_fifo_ov      : 1;	/* 19:19 */
        uint64_t f3_msix_msg_fifo_ov      : 1;	/* 20:20 */
        uint64_t irq_sync_fifo_un         : 1;	/* 21:21 */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pii_err_first_flg_desc_t;

typedef union ar_pi_pii_err_info_mbe_desc {
    struct {
        // QW0
        uint64_t f0_msix_table_synd0      : 8;	/* Function 0 MSI-X Table Syndrome */
        uint64_t f0_msix_table_synd1      : 8;	/* Function 0 MSI-X Table Syndrome */
        uint64_t f1_msix_table_synd0      : 8;	/* Function 1 MSI-X Table Syndrome */
        uint64_t f1_msix_table_synd1      : 8;	/* Function 1 MSI-X Table Syndrome */
        uint64_t f2_msix_table_synd0      : 8;	/* Function 2 MSI-X Table Syndrome */
        uint64_t f2_msix_table_synd1      : 8;	/* Function 2 MSI-X Table Syndrome */
        uint64_t f3_msix_table_synd0      : 8;	/* Function 3 MSI-X Table Syndrome */
        uint64_t f3_msix_table_synd1      : 8;	/* Function 3 MSI-X Table Syndrome */
    };
    uint64_t qwords[1];
} ar_pi_pii_err_info_mbe_desc_t;

typedef union ar_pi_pii_err_info_sbe_desc {
    struct {
        // QW0
        uint64_t f0_msix_table_synd0      : 8;	/* Function 0 MSI-X Table Syndrome */
        uint64_t f0_msix_table_synd1      : 8;	/* Function 0 MSI-X Table Syndrome */
        uint64_t f1_msix_table_synd0      : 8;	/* Function 1 MSI-X Table Syndrome */
        uint64_t f1_msix_table_synd1      : 8;	/* Function 1 MSI-X Table Syndrome */
        uint64_t f2_msix_table_synd0      : 8;	/* Function 2 MSI-X Table Syndrome */
        uint64_t f2_msix_table_synd1      : 8;	/* Function 2 MSI-X Table Syndrome */
        uint64_t f3_msix_table_synd0      : 8;	/* Function 3 MSI-X Table Syndrome */
        uint64_t f3_msix_table_synd1      : 8;	/* Function 3 MSI-X Table Syndrome */
    };
    uint64_t qwords[1];
} ar_pi_pii_err_info_sbe_desc_t;

typedef union ar_pi_pti_cfg_desc {
    struct {
        // QW0
        uint64_t lif_rsp_ofifo_af_thresh  : 4;	/* LIF Response Output FIFO Almost Full ThresholdThis field is used to configure the almost full threshold of the asynchronous response FIFO between the Local Block Interface and the PCIe Target Request Interface */
        uint64_t pi_nic_crd_max           : 5;	/* PI to NIC Credit MaximumMust be a minimum of 5 credits for requests to flow between the PI and NIC */
        uint64_t req_halt_on_fatal_error  : 1;	/* Request Halt on Fatal ErrorIf this bit is set and a tail error or MBE is detected on the NIF request IFIFO, the PTI will halt processing of NIF requests and instead discard all packets */
        uint64_t undefine_63_10           :54;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_cfg_desc_t;

typedef union ar_pi_pti_dbg_errinj_fifo_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* 0: Inject error once1: Inject error continuously */
        uint64_t count                    : 3;	/* Indicates the spacing between flits with errors injected */
        uint64_t select                   : 2;	/* SELECT=00: LIF IFIFOSELECT=01: NIF IFIFOSELECT=10: ReservedSELECT=11: Reserved */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t ecc0                     : 9;	/* When an error is injected on a flit, this field indicates which bits of ECC0 should be inverted */
        uint64_t undefine_23_17           : 7;	/* undefined */
        uint64_t ecc1                     : 9;	/* When an error is injected on a flit, this field indicates which bits of ECC1 should be inverted */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_dbg_errinj_fifo_desc_t;

typedef union ar_pi_pti_dbg_errinj_cmpl_poison_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error onceMode 1: Inject error alwaysMode 2: Inject error once if address of request matchesMode 3: Inject error always if address of request matches */
        uint64_t undefine_6_3             : 4;	/* undefined */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t address                  :28;	/* This field indicates the address of the original request for which completion poison injection is to occur */
        uint64_t mask                     :28;	/* This field can be used to mask individual bits of the address of the original request for which completion poison injection is to occur */
    };
    uint64_t qwords[1];
} ar_pi_pti_dbg_errinj_cmpl_poison_desc_t;

typedef union ar_pi_pti_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t nif_req_ififo_mbe        : 2;	/* NIF Request Input FIFO Multi-Bit Error */
        uint64_t nif_req_ififo_sbe        : 2;	/* NIF Request Input FIFO Single-Bit Error */
        uint64_t nif_req_discard          : 1;	/* NIF Request DiscardThis bit indicates that the NIF module discarded a posted request */
        uint64_t nif_req_hdr_mbe          : 1;	/* NIF Request Header MBEThe NIF received a packet with an header flit MBE (could be due to HAL parity error or IFIFO fault) */
        uint64_t nif_req_data_mbe         : 1;	/* NIF Request Data MBEThe NIF received a packet with an data flit MBE (could be due to HAL parity error or IFIFO fault) */
        uint64_t nif_req_hdr_poisoned     : 1;	/* NIF Request Header PoisonedThe NIF received a packet with a poisoned header flit (due to HAL parity error) */
        uint64_t nif_req_data_poisoned    : 1;	/* NIF Request Data PoisonedThe NIF received a packet with a poisoned data flit (due to HAL parity error) */
        uint64_t nif_req_byte_wr_err      : 1;	/* NIF Request Byte Write ErrorThe NIF received a byte write larger than 64 bits with non-contiguous byte enables */
        uint64_t nif_req_unsupported_pkt  : 1;	/* NIF Request Unsupported PacketThe NIF received an unsupported packet type */
        uint64_t nif_req_zero_length_wr   : 1;	/* NIF Request Zero Length WriteThe NIF received a zero length write */
        uint64_t nif_req_hal_wr_error     : 1;	/* NIF Request HAL Write ErrorThe NIF received a packet in which hal_pi_target_req_write_error was asserted */
        uint64_t nif_req_nic_poison       : 1;	/* NIF Request NIC Packet PoisonThe NIF sent a packet to the NIC with at least one data flit poisoned */
        uint64_t nif_req_ififo_un         : 1;	/* NIF Request IFIFO Underrun */
        uint64_t nif_req_ififo_tail_error : 1;	/* NIF Request IFIFO Tail Error */
        uint64_t lif_req_ififo_mbe        : 2;	/* LIF Request Input FIFO Multi-Bit Error */
        uint64_t lif_req_ififo_sbe        : 2;	/* LIF Request Input FIFO Single-Bit Error */
        uint64_t lif_req_discard          : 1;	/* LIF Request DiscardThis bit indicates that the LIF Request module discarded a posted request */
        uint64_t lif_req_hdr_mbe          : 1;	/* LIF Request Header MBEThe LIF received a packet with an header flit MBE (could be due to HAL parity error or IFIFO fault) */
        uint64_t lif_req_data_mbe         : 1;	/* LIF Request Data MBEThe LIF received a packet with an data flit MBE (could be due to HAL parity error or IFIFO fault) */
        uint64_t lif_req_hdr_poisoned     : 1;	/* LIF Request Header PoisonedThe LIF received a packet with a poisoned header flit (due to HAL parity error) */
        uint64_t lif_req_data_poisoned    : 1;	/* LIF Request Data PoisonedThe LIF received a packet with a poisoned data flit (due to HAL parity error) */
        uint64_t lif_req_completer_abort  : 1;	/* LIF Request Completer AbortThe LIF received a packet that violates the Aries programming model */
        uint64_t lif_req_unsupported_pkt  : 1;	/* LIF Request Unsupported PacketThe LIF received an unsupported packet type */
        uint64_t lif_req_zero_length_wr   : 1;	/* LIF Request Zero Length WriteThe LIF received a zero length write */
        uint64_t lif_req_hal_wr_error     : 1;	/* LIF Request HAL Write ErrorThe LIF received a packet in which hal_pi_target_req_write_error was asserted */
        uint64_t lif_req_rsp_payload_ov   : 1;	/* LIF Request Response Payload OverflowThe LIF received a read request for more that 256 bytes */
        uint64_t lif_req_ififo_un         : 1;	/* LIF Request IFIFO Underrun */
        uint64_t lif_req_orf_un           : 1;	/* LIF Request Outstanding Request FIFO Underrun */
        uint64_t lif_req_orf_ov           : 1;	/* LIF Request Outstanding Request FIFO Overrun */
        uint64_t lif_rsp_sync_error       : 1;	/* LIF Response Sync ErrorThe LIF has detected a synchronization error between the outstanding request FIFO and responses received from the local block */
        uint64_t lif_rsp_lb_flit_error    : 1;	/* LIF Response Local Block Flit ErrorThe LIF received a malformed flit from the local block */
        uint64_t lif_rsp_completer_abort  : 1;	/* LIF Response Completer AbortThe LIF sent a completion with a completer abort indication */
        uint64_t lif_rsp_unsupported_pkt  : 1;	/* LIF Response Unsupported PacketThe LIF sent a completion with a unsupported request indication */
        uint64_t lif_rsp_tx_cmpl_error    : 1;	/* LIF Response Transmit Completer ErrorThe LIF asserted the tx completer error sideband signal while building a completion */
        uint64_t lif_rsp_write_error      : 1;	/* LIF Response Write ErrorThe LIF received an error from the local block associated with a write request */
        uint64_t lif_rsp_ififo_un         : 1;	/* LIF Response IFIFO Underrun */
        uint64_t lif_rsp_ififo_ov         : 1;	/* LIF Response IFIFO Overrun */
        uint64_t lif_rsp_ofifo_ov         : 1;	/* LIF Response OFIFO Overrun */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_flg_desc_t;

typedef union ar_pi_pti_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t nif_req_ififo_mbe        : 2;	/* NIF Request Input FIFO Multi-Bit Error */
        uint64_t nif_req_ififo_sbe        : 2;	/* NIF Request Input FIFO Single-Bit Error */
        uint64_t nif_req_discard          : 1;	/* NIF Request DiscardThis bit indicates that the NIF module discarded a posted request */
        uint64_t nif_req_hdr_mbe          : 1;	/* NIF Request Header MBEThe NIF received a packet with an header flit MBE (could be due to HAL parity error or IFIFO fault) */
        uint64_t nif_req_data_mbe         : 1;	/* NIF Request Data MBEThe NIF received a packet with an data flit MBE (could be due to HAL parity error or IFIFO fault) */
        uint64_t nif_req_hdr_poisoned     : 1;	/* NIF Request Header PoisonedThe NIF received a packet with a poisoned header flit (due to HAL parity error) */
        uint64_t nif_req_data_poisoned    : 1;	/* NIF Request Data PoisonedThe NIF received a packet with a poisoned data flit (due to HAL parity error) */
        uint64_t nif_req_byte_wr_err      : 1;	/* NIF Request Byte Write ErrorThe NIF received a byte write larger than 64 bits with non-contiguous byte enables */
        uint64_t nif_req_unsupported_pkt  : 1;	/* NIF Request Unsupported PacketThe NIF received an unsupported packet type */
        uint64_t nif_req_zero_length_wr   : 1;	/* NIF Request Zero Length WriteThe NIF received a zero length write */
        uint64_t nif_req_hal_wr_error     : 1;	/* NIF Request HAL Write ErrorThe NIF received a packet in which hal_pi_target_req_write_error was asserted */
        uint64_t nif_req_nic_poison       : 1;	/* NIF Request NIC Packet PoisonThe NIF sent a packet to the NIC with at least one data flit poisoned */
        uint64_t nif_req_ififo_un         : 1;	/* NIF Request IFIFO Underrun */
        uint64_t nif_req_ififo_tail_error : 1;	/* NIF Request IFIFO Tail Error */
        uint64_t lif_req_ififo_mbe        : 2;	/* LIF Request Input FIFO Multi-Bit Error */
        uint64_t lif_req_ififo_sbe        : 2;	/* LIF Request Input FIFO Single-Bit Error */
        uint64_t lif_req_discard          : 1;	/* LIF Request DiscardThis bit indicates that the LIF Request module discarded a posted request */
        uint64_t lif_req_hdr_mbe          : 1;	/* LIF Request Header MBEThe LIF received a packet with an header flit MBE (could be due to HAL parity error or IFIFO fault) */
        uint64_t lif_req_data_mbe         : 1;	/* LIF Request Data MBEThe LIF received a packet with an data flit MBE (could be due to HAL parity error or IFIFO fault) */
        uint64_t lif_req_hdr_poisoned     : 1;	/* LIF Request Header PoisonedThe LIF received a packet with a poisoned header flit (due to HAL parity error) */
        uint64_t lif_req_data_poisoned    : 1;	/* LIF Request Data PoisonedThe LIF received a packet with a poisoned data flit (due to HAL parity error) */
        uint64_t lif_req_completer_abort  : 1;	/* LIF Request Completer AbortThe LIF received a packet that violates the Aries programming model */
        uint64_t lif_req_unsupported_pkt  : 1;	/* LIF Request Unsupported PacketThe LIF received an unsupported packet type */
        uint64_t lif_req_zero_length_wr   : 1;	/* LIF Request Zero Length WriteThe LIF received a zero length write */
        uint64_t lif_req_hal_wr_error     : 1;	/* LIF Request HAL Write ErrorThe LIF received a packet in which hal_pi_target_req_write_error was asserted */
        uint64_t lif_req_rsp_payload_ov   : 1;	/* LIF Request Response Payload OverflowThe LIF received a read request for more that 256 bytes */
        uint64_t lif_req_ififo_un         : 1;	/* LIF Request IFIFO Underrun */
        uint64_t lif_req_orf_un           : 1;	/* LIF Request Outstanding Request FIFO Underrun */
        uint64_t lif_req_orf_ov           : 1;	/* LIF Request Outstanding Request FIFO Overrun */
        uint64_t lif_rsp_sync_error       : 1;	/* LIF Response Sync ErrorThe LIF has detected a synchronization error between the outstanding request FIFO and responses received from the local block */
        uint64_t lif_rsp_lb_flit_error    : 1;	/* LIF Response Local Block Flit ErrorThe LIF received a malformed flit from the local block */
        uint64_t lif_rsp_completer_abort  : 1;	/* LIF Response Completer AbortThe LIF sent a completion with a completer abort indication */
        uint64_t lif_rsp_unsupported_pkt  : 1;	/* LIF Response Unsupported PacketThe LIF sent a completion with a unsupported request indication */
        uint64_t lif_rsp_tx_cmpl_error    : 1;	/* LIF Response Transmit Completer ErrorThe LIF asserted the tx completer error sideband signal while building a completion */
        uint64_t lif_rsp_write_error      : 1;	/* LIF Response Write ErrorThe LIF received an error from the local block associated with a write request */
        uint64_t lif_rsp_ififo_un         : 1;	/* LIF Response IFIFO Underrun */
        uint64_t lif_rsp_ififo_ov         : 1;	/* LIF Response IFIFO Overrun */
        uint64_t lif_rsp_ofifo_ov         : 1;	/* LIF Response OFIFO Overrun */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_clr_desc_t;

typedef union ar_pi_pti_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nif_req_ififo_mbe        : 2;	/* 2:1 */
        uint64_t nif_req_ififo_sbe        : 2;	/* 4:3 */
        uint64_t nif_req_discard          : 1;	/* 5:5 */
        uint64_t nif_req_hdr_mbe          : 1;	/* 6:6 */
        uint64_t nif_req_data_mbe         : 1;	/* 7:7 */
        uint64_t nif_req_hdr_poisoned     : 1;	/* 8:8 */
        uint64_t nif_req_data_poisoned    : 1;	/* 9:9 */
        uint64_t nif_req_byte_wr_err      : 1;	/* 10:10 */
        uint64_t nif_req_unsupported_pkt  : 1;	/* 11:11 */
        uint64_t nif_req_zero_length_wr   : 1;	/* 12:12 */
        uint64_t nif_req_hal_wr_error     : 1;	/* 13:13 */
        uint64_t nif_req_nic_poison       : 1;	/* 14:14 */
        uint64_t nif_req_ififo_un         : 1;	/* 15:15 */
        uint64_t nif_req_ififo_tail_error : 1;	/* 16:16 */
        uint64_t lif_req_ififo_mbe        : 2;	/* 18:17 */
        uint64_t lif_req_ififo_sbe        : 2;	/* 20:19 */
        uint64_t lif_req_discard          : 1;	/* 21:21 */
        uint64_t lif_req_hdr_mbe          : 1;	/* 22:22 */
        uint64_t lif_req_data_mbe         : 1;	/* 23:23 */
        uint64_t lif_req_hdr_poisoned     : 1;	/* 24:24 */
        uint64_t lif_req_data_poisoned    : 1;	/* 25:25 */
        uint64_t lif_req_completer_abort  : 1;	/* 26:26 */
        uint64_t lif_req_unsupported_pkt  : 1;	/* 27:27 */
        uint64_t lif_req_zero_length_wr   : 1;	/* 28:28 */
        uint64_t lif_req_hal_wr_error     : 1;	/* 29:29 */
        uint64_t lif_req_rsp_payload_ov   : 1;	/* 30:30 */
        uint64_t lif_req_ififo_un         : 1;	/* 31:31 */
        uint64_t lif_req_orf_un           : 1;	/* 32:32 */
        uint64_t lif_req_orf_ov           : 1;	/* 33:33 */
        uint64_t lif_rsp_sync_error       : 1;	/* 34:34 */
        uint64_t lif_rsp_lb_flit_error    : 1;	/* 35:35 */
        uint64_t lif_rsp_completer_abort  : 1;	/* 36:36 */
        uint64_t lif_rsp_unsupported_pkt  : 1;	/* 37:37 */
        uint64_t lif_rsp_tx_cmpl_error    : 1;	/* 38:38 */
        uint64_t lif_rsp_write_error      : 1;	/* 39:39 */
        uint64_t lif_rsp_ififo_un         : 1;	/* 40:40 */
        uint64_t lif_rsp_ififo_ov         : 1;	/* 41:41 */
        uint64_t lif_rsp_ofifo_ov         : 1;	/* 42:42 */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_hss_msk_desc_t;

typedef union ar_pi_pti_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nif_req_ififo_mbe        : 2;	/* 2:1 */
        uint64_t nif_req_ififo_sbe        : 2;	/* 4:3 */
        uint64_t nif_req_discard          : 1;	/* 5:5 */
        uint64_t nif_req_hdr_mbe          : 1;	/* 6:6 */
        uint64_t nif_req_data_mbe         : 1;	/* 7:7 */
        uint64_t nif_req_hdr_poisoned     : 1;	/* 8:8 */
        uint64_t nif_req_data_poisoned    : 1;	/* 9:9 */
        uint64_t nif_req_byte_wr_err      : 1;	/* 10:10 */
        uint64_t nif_req_unsupported_pkt  : 1;	/* 11:11 */
        uint64_t nif_req_zero_length_wr   : 1;	/* 12:12 */
        uint64_t nif_req_hal_wr_error     : 1;	/* 13:13 */
        uint64_t nif_req_nic_poison       : 1;	/* 14:14 */
        uint64_t nif_req_ififo_un         : 1;	/* 15:15 */
        uint64_t nif_req_ififo_tail_error : 1;	/* 16:16 */
        uint64_t lif_req_ififo_mbe        : 2;	/* 18:17 */
        uint64_t lif_req_ififo_sbe        : 2;	/* 20:19 */
        uint64_t lif_req_discard          : 1;	/* 21:21 */
        uint64_t lif_req_hdr_mbe          : 1;	/* 22:22 */
        uint64_t lif_req_data_mbe         : 1;	/* 23:23 */
        uint64_t lif_req_hdr_poisoned     : 1;	/* 24:24 */
        uint64_t lif_req_data_poisoned    : 1;	/* 25:25 */
        uint64_t lif_req_completer_abort  : 1;	/* 26:26 */
        uint64_t lif_req_unsupported_pkt  : 1;	/* 27:27 */
        uint64_t lif_req_zero_length_wr   : 1;	/* 28:28 */
        uint64_t lif_req_hal_wr_error     : 1;	/* 29:29 */
        uint64_t lif_req_rsp_payload_ov   : 1;	/* 30:30 */
        uint64_t lif_req_ififo_un         : 1;	/* 31:31 */
        uint64_t lif_req_orf_un           : 1;	/* 32:32 */
        uint64_t lif_req_orf_ov           : 1;	/* 33:33 */
        uint64_t lif_rsp_sync_error       : 1;	/* 34:34 */
        uint64_t lif_rsp_lb_flit_error    : 1;	/* 35:35 */
        uint64_t lif_rsp_completer_abort  : 1;	/* 36:36 */
        uint64_t lif_rsp_unsupported_pkt  : 1;	/* 37:37 */
        uint64_t lif_rsp_tx_cmpl_error    : 1;	/* 38:38 */
        uint64_t lif_rsp_write_error      : 1;	/* 39:39 */
        uint64_t lif_rsp_ififo_un         : 1;	/* 40:40 */
        uint64_t lif_rsp_ififo_ov         : 1;	/* 41:41 */
        uint64_t lif_rsp_ofifo_ov         : 1;	/* 42:42 */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_os_msk_desc_t;

typedef union ar_pi_pti_err_info_hss_msk_desc {
    struct {
        // QW0
        uint64_t msk                      :43;	/* Masks the capture of HSS error information for the associated error flag */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_hss_msk_desc_t;

typedef union ar_pi_pti_err_info_os_msk_desc {
    struct {
        // QW0
        uint64_t msk                      :43;	/* Masks the capture of OS error information for the associated error flag */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_os_msk_desc_t;

typedef union ar_pi_pti_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nif_req_ififo_mbe        : 2;	/* 2:1 */
        uint64_t nif_req_ififo_sbe        : 2;	/* 4:3 */
        uint64_t nif_req_discard          : 1;	/* 5:5 */
        uint64_t nif_req_hdr_mbe          : 1;	/* 6:6 */
        uint64_t nif_req_data_mbe         : 1;	/* 7:7 */
        uint64_t nif_req_hdr_poisoned     : 1;	/* 8:8 */
        uint64_t nif_req_data_poisoned    : 1;	/* 9:9 */
        uint64_t nif_req_byte_wr_err      : 1;	/* 10:10 */
        uint64_t nif_req_unsupported_pkt  : 1;	/* 11:11 */
        uint64_t nif_req_zero_length_wr   : 1;	/* 12:12 */
        uint64_t nif_req_hal_wr_error     : 1;	/* 13:13 */
        uint64_t nif_req_nic_poison       : 1;	/* 14:14 */
        uint64_t nif_req_ififo_un         : 1;	/* 15:15 */
        uint64_t nif_req_ififo_tail_error : 1;	/* 16:16 */
        uint64_t lif_req_ififo_mbe        : 2;	/* 18:17 */
        uint64_t lif_req_ififo_sbe        : 2;	/* 20:19 */
        uint64_t lif_req_discard          : 1;	/* 21:21 */
        uint64_t lif_req_hdr_mbe          : 1;	/* 22:22 */
        uint64_t lif_req_data_mbe         : 1;	/* 23:23 */
        uint64_t lif_req_hdr_poisoned     : 1;	/* 24:24 */
        uint64_t lif_req_data_poisoned    : 1;	/* 25:25 */
        uint64_t lif_req_completer_abort  : 1;	/* 26:26 */
        uint64_t lif_req_unsupported_pkt  : 1;	/* 27:27 */
        uint64_t lif_req_zero_length_wr   : 1;	/* 28:28 */
        uint64_t lif_req_hal_wr_error     : 1;	/* 29:29 */
        uint64_t lif_req_rsp_payload_ov   : 1;	/* 30:30 */
        uint64_t lif_req_ififo_un         : 1;	/* 31:31 */
        uint64_t lif_req_orf_un           : 1;	/* 32:32 */
        uint64_t lif_req_orf_ov           : 1;	/* 33:33 */
        uint64_t lif_rsp_sync_error       : 1;	/* 34:34 */
        uint64_t lif_rsp_lb_flit_error    : 1;	/* 35:35 */
        uint64_t lif_rsp_completer_abort  : 1;	/* 36:36 */
        uint64_t lif_rsp_unsupported_pkt  : 1;	/* 37:37 */
        uint64_t lif_rsp_tx_cmpl_error    : 1;	/* 38:38 */
        uint64_t lif_rsp_write_error      : 1;	/* 39:39 */
        uint64_t lif_rsp_ififo_un         : 1;	/* 40:40 */
        uint64_t lif_rsp_ififo_ov         : 1;	/* 41:41 */
        uint64_t lif_rsp_ofifo_ov         : 1;	/* 42:42 */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_first_flg_desc_t;

typedef union ar_pi_pti_err_info_mbe_desc {
    struct {
        // QW0
        uint64_t lif_req_ififo_synd0      : 9;	/* LIF Request IFIFO Syndrome */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t lif_req_ififo_synd1      : 9;	/* LIF Request IFIFO Syndrome */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t nif_req_ififo_synd0      : 9;	/* NIF Request IFIFO Syndrome */
        uint64_t undefine_47_41           : 7;	/* undefined */
        uint64_t nif_req_ififo_synd1      : 9;	/* NIF Request IFIFO Syndrome */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_mbe_desc_t;

typedef union ar_pi_pti_err_info_sbe_desc {
    struct {
        // QW0
        uint64_t lif_req_ififo_synd0      : 9;	/* LIF Request IFIFO Syndrome */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t lif_req_ififo_synd1      : 9;	/* LIF Request IFIFO Syndrome */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t nif_req_ififo_synd0      : 9;	/* NIF Request IFIFO Syndrome */
        uint64_t undefine_47_41           : 7;	/* undefined */
        uint64_t nif_req_ififo_synd1      : 9;	/* NIF Request IFIFO Syndrome */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_sbe_desc_t;

typedef union ar_pi_pti_err_info_hss_misc_desc {
    struct {
        // QW0
        uint64_t desc_src                 : 2;	/* This field encodes the source of A_PI_PTI_ERR_INFO_HSS_DESC_LSQW and A_PI_PTI_ERR_INFO_HSS_DESC_MSQW 00 = LIF_REQ LIF_REQ_RSP_PAYLOAD_OVLIF_REQ_HAL_WR_ERRORLIF_REQ_ZERO_LENGTH_WR LIF_REQ_UNSUPPORTED_PKT LIF_REQ_COMPLETER_ABORT LIF_REQ_DATA_POISONED LIF_REQ_HDR_POISONED LIF_REQ_DATA_MBE LIF_REQ_HDR_MBELIF_REQ_DISCARD 01 = LIF_RSP LIF_RSP_WRITE_ERROR LIF_RSP_TX_CMPL_ERROR LIF_RSP_UNSUPPORTED_PKT LIF_RSP_COMPLETER_ABORTLIF_RSP_LB_FLIT_ERROR LIF_RSP_SYNC_ERROR 10 = NIF_REQ NIF_REQ_NIC_POISON NIF_REQ_HAL_WR_ERROR NIF_REQ_ZERO_LENGTH_WR NIF_REQ_UNSUPPORTED_PKT NIF_REQ_BYTE_WR_ERR NIF_REQ_DATA_POISONED NIF_REQ_HDR_POISONED NIF_REQ_DATA_MBE NIF_REQ_HDR_MBENIF_REQ_DISCARD */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_hss_misc_desc_t;

typedef union ar_pi_pti_err_info_hss_desc_lsqw_desc {
    struct {
        // QW0
        uint64_t desc_63_0                ;	/* The least significant quad word of the descriptor of a request associated with an error */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_hss_desc_lsqw_desc_t;

typedef union ar_pi_pti_err_info_hss_desc_msqw_desc {
    struct {
        // QW0
        uint64_t desc_127_64              ;	/* The least significant quad word of the descriptor of a request associated with an error */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_hss_desc_msqw_desc_t;

typedef union ar_pi_pti_err_info_os_misc_desc {
    struct {
        // QW0
        uint64_t desc_src                 : 2;	/* This field encodes the source of A_PI_PTI_ERR_INFO_OS_DESC_LSQW and A_PI_PTI_ERR_INFO_OS_DESC_MSQW00 = LIF_REQ01 = LIF_RSP10 = NIF_REQ */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_os_misc_desc_t;

typedef union ar_pi_pti_err_info_os_desc_lsqw_desc {
    struct {
        // QW0
        uint64_t desc_63_0                ;	/* The least significant quad word of the descriptor of a request associated with an error */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_os_desc_lsqw_desc_t;

typedef union ar_pi_pti_err_info_os_desc_msqw_desc {
    struct {
        // QW0
        uint64_t desc_127_64              ;	/* The least significant quad word of the descriptor of a request associated with an error */
    };
    uint64_t qwords[1];
} ar_pi_pti_err_info_os_desc_msqw_desc_t;

typedef union ar_pi_pti_nic_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_nic_stall_duration_desc_t;

typedef union ar_pi_pti_lb_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_lb_stall_duration_desc_t;

typedef union ar_pi_pti_orf_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_orf_stall_duration_desc_t;

typedef union ar_pi_pti_hal_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pti_hal_stall_duration_desc_t;

typedef union ar_pi_pm_dbg_errinj_cntr_perr_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error onceMode 1: Inject error alwaysMode 2: Inject error once if address matchesMode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* This status bit is set when an error is injected */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t checkbits                : 4;	/* When an error in injected, each bit that is set to one is this field causes the corresponding parity bit to be inverted */
        uint64_t undefine_31_20           :12;	/* undefined */
        uint64_t address                  : 7;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_39           :25;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pm_dbg_errinj_cntr_perr_desc_t;

typedef union ar_pi_pm_err_info_cntr_perr_desc {
    struct {
        // QW0
        uint64_t undefine_2_0             : 3;	/* undefined */
        uint64_t mmr_detected_perr        : 1;	/* The parity error was observed during an MMR read */
        uint64_t undefine_11_4            : 8;	/* undefined */
        uint64_t address                  : 7;	/* Parity Error Address */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_pm_err_info_cntr_perr_desc_t;

typedef union ar_pi_pm_err_info_cntr_perr_cnt_desc {
    struct {
        // QW0
        uint64_t perr_count               ;	/* Number of parity errors that have occurred */
    };
    uint64_t qwords[1];
} ar_pi_pm_err_info_cntr_perr_cnt_desc_t;

typedef union ar_pi_pm_event_cntr_ctrl_desc {
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
} ar_pi_pm_event_cntr_ctrl_desc_t;

typedef union ar_pi_pm_event_cntr_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Event counters */
    };
    uint64_t qwords[1];
} ar_pi_pm_event_cntr_desc_t;

typedef union ar_pi_cfg_f0_msi_x_table_qw0_desc {
    struct {
        // QW0
        uint64_t msg_addr                 ;	/* System-specified message address */
    };
    uint64_t qwords[1];
} ar_pi_cfg_f0_msi_x_table_qw0_desc_t;

typedef union ar_pi_cfg_f0_msi_x_table_qw1_desc {
    struct {
        // QW0
        uint64_t msg_data                 :32;	/* System-specified message data */
        uint64_t vector_ctl_mask          : 1;	/* When this bit is set, the function is prohibited from sending a message using this MSI-X Table entry */
        uint64_t vector_ctl_reserved_44_33:12;	/* Software should not modify this field when an entry is unmasked */
        uint64_t msg_tph_present          : 1;	/* Indicates the presence of a Transaction Processing Hint (TPH) in the MSIX interrupt request */
        uint64_t msg_tph_type             : 2;	/* When a TPH is present in the MSIX request, this field is used to supply the 2-bit type associated with the hint */
        uint64_t msg_steering_tag         : 9;	/* When the MSIX_TPH_ENABLE is set this field is used in the HAL interface MSIX_REQ_TPH_ST_TAG field for MSI-X requests associated with the entry */
        uint64_t vector_ctl_reserved_63_57: 7;	/* After reset, the state of these bits must be 0 */
    };
    uint64_t qwords[1];
} ar_pi_cfg_f0_msi_x_table_qw1_desc_t;

typedef union ar_pi_sts_f0_msi_x_pba_desc {
    struct {
        // QW0
        uint64_t pending                  ;	/* For each Pending Bit that is set, the function has a pending message for the associated MSI-X Table entry */
    };
    uint64_t qwords[1];
} ar_pi_sts_f0_msi_x_pba_desc_t;

typedef union ar_pi_sts_f0_msi_x_irq_status_desc {
    struct {
        // QW0
        uint64_t irq_status               ;	/* For each IRQ_STATUS bit that is set, the function has received an interrupt request for the associated MSI-X Table entry */
    };
    uint64_t qwords[1];
} ar_pi_sts_f0_msi_x_irq_status_desc_t;

typedef union ar_pi_cfg_f1_msi_x_table_qw0_desc {
    struct {
        // QW0
        uint64_t msg_addr                 ;	/* System-specified message address */
    };
    uint64_t qwords[1];
} ar_pi_cfg_f1_msi_x_table_qw0_desc_t;

typedef union ar_pi_cfg_f1_msi_x_table_qw1_desc {
    struct {
        // QW0
        uint64_t msg_data                 :32;	/* System-specified message data */
        uint64_t vector_ctl_mask          : 1;	/* When this bit is set, the function is prohibited from sending a message using this MSI-X Table entry */
        uint64_t vector_ctl_reserved_44_33:12;	/* Software should not modify this field when an entry is unmasked */
        uint64_t msg_tph_present          : 1;	/* Indicates the presence of a Transaction Processing Hint (TPH) in the MSIX interrupt request */
        uint64_t msg_tph_type             : 2;	/* When a TPH is present in the MSIX request, this field is used to supply the 2-bit type associated with the hint */
        uint64_t msg_steering_tag         : 9;	/* When the MSIX_TPH_ENABLE is set this field is used in the HAL interface MSIX_REQ_TPH_ST_TAG field for MSI-X requests associated with the entry */
        uint64_t vector_ctl_reserved_63_57: 7;	/* After reset, the state of these bits must be 0 */
    };
    uint64_t qwords[1];
} ar_pi_cfg_f1_msi_x_table_qw1_desc_t;

typedef union ar_pi_sts_f1_msi_x_pba_desc {
    struct {
        // QW0
        uint64_t pending                  :32;	/* For each Pending Bit that is set, the function has a pending message for the associated MSI-X Table entry */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_f1_msi_x_pba_desc_t;

typedef union ar_pi_sts_f1_msi_x_irq_status_desc {
    struct {
        // QW0
        uint64_t irq_status               :32;	/* For each IRQ_STATUS bit that is set, the function has received an interrupt request for the associated MSI-X Table entry */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_f1_msi_x_irq_status_desc_t;

typedef union ar_pi_cfg_f2_msi_x_table_qw0_desc {
    struct {
        // QW0
        uint64_t msg_addr                 ;	/* System-specified message address */
    };
    uint64_t qwords[1];
} ar_pi_cfg_f2_msi_x_table_qw0_desc_t;

typedef union ar_pi_cfg_f2_msi_x_table_qw1_desc {
    struct {
        // QW0
        uint64_t msg_data                 :32;	/* System-specified message data */
        uint64_t vector_ctl_mask          : 1;	/* When this bit is set, the function is prohibited from sending a message using this MSI-X Table entry */
        uint64_t vector_ctl_reserved_44_33:12;	/* Software should not modify this field when an entry is unmasked */
        uint64_t msg_tph_present          : 1;	/* Indicates the presence of a Transaction Processing Hint (TPH) in the MSIX interrupt request */
        uint64_t msg_tph_type             : 2;	/* When a TPH is present in the MSIX request, this field is used to supply the 2-bit type associated with the hint */
        uint64_t msg_steering_tag         : 9;	/* When the MSIX_TPH_ENABLE is set this field is used in the HAL interface MSIX_REQ_TPH_ST_TAG field for MSI-X requests associated with the entry */
        uint64_t vector_ctl_reserved_63_57: 7;	/* After reset, the state of these bits must be 0 */
    };
    uint64_t qwords[1];
} ar_pi_cfg_f2_msi_x_table_qw1_desc_t;

typedef union ar_pi_sts_f2_msi_x_pba_desc {
    struct {
        // QW0
        uint64_t pending                  :32;	/* For each Pending Bit that is set, the function has a pending message for the associated MSI-X Table entry */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_f2_msi_x_pba_desc_t;

typedef union ar_pi_sts_f2_msi_x_irq_status_desc {
    struct {
        // QW0
        uint64_t irq_status               :32;	/* For each IRQ_STATUS bit that is set, the function has received an interrupt request for the associated MSI-X Table entry */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_f2_msi_x_irq_status_desc_t;

typedef union ar_pi_cfg_f3_msi_x_table_qw0_desc {
    struct {
        // QW0
        uint64_t msg_addr                 ;	/* System-specified message address */
    };
    uint64_t qwords[1];
} ar_pi_cfg_f3_msi_x_table_qw0_desc_t;

typedef union ar_pi_cfg_f3_msi_x_table_qw1_desc {
    struct {
        // QW0
        uint64_t msg_data                 :32;	/* System-specified message data */
        uint64_t vector_ctl_mask          : 1;	/* When this bit is set, the function is prohibited from sending a message using this MSI-X Table entry */
        uint64_t vector_ctl_reserved_44_33:12;	/* Software should not modify this field when an entry is unmasked */
        uint64_t msg_tph_present          : 1;	/* Indicates the presence of a Transaction Processing Hint (TPH) in the MSIX interrupt request */
        uint64_t msg_tph_type             : 2;	/* When a TPH is present in the MSIX request, this field is used to supply the 2-bit type associated with the hint */
        uint64_t msg_steering_tag         : 9;	/* When the MSIX_TPH_ENABLE is set this field is used in the HAL interface MSIX_REQ_TPH_ST_TAG field for MSI-X requests associated with the entry */
        uint64_t vector_ctl_reserved_63_57: 7;	/* After reset, the state of these bits must be 0 */
    };
    uint64_t qwords[1];
} ar_pi_cfg_f3_msi_x_table_qw1_desc_t;

typedef union ar_pi_sts_f3_msi_x_pba_desc {
    struct {
        // QW0
        uint64_t pending                  :32;	/* For each Pending Bit that is set, the function has a pending message for the associated MSI-X Table entry */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_f3_msi_x_pba_desc_t;

typedef union ar_pi_sts_f3_msi_x_irq_status_desc {
    struct {
        // QW0
        uint64_t irq_status               :32;	/* For each IRQ_STATUS bit that is set, the function has received an interrupt request for the associated MSI-X Table entry */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_pi_sts_f3_msi_x_irq_status_desc_t;


#endif
