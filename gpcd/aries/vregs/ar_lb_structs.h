/******************************************************************************
 * COPYRIGHT CRAY INC. ar_lb_structs.h
 * FILE: ar_lb_structs.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/

#ifndef _AR_LB_STRUCTS_H_
#define _AR_LB_STRUCTS_H_

/*
 *  ARIES LB STRUCTURES
 */
typedef union ar_lb_sts_rev_desc {
    struct {
        // QW0
        uint64_t aries_revision           : 8;	/* Device ID Register 0x05 = Aries */
        uint64_t undefine_15_8            : 8;	/* undefined */
        uint64_t jtag_id                  :32;	/* JTAG ID from TAP, reset value is determined from value in TAP */
        uint64_t rev_scratch              :16;	/* OS writable Scratch field */
    };
    uint64_t qwords[1];
} ar_lb_sts_rev_desc_t;

typedef union ar_lb_cfg_params_desc {
    struct {
        // QW0
        uint64_t lb_jtag_req_fifo_lowater : 4;	/* JTAG Request FIFO Low Water Mark */
        uint64_t lb_jtag_rsp_fifo_lowater : 4;	/* JTAG Response FIFO Low Water Mark */
        uint64_t lb_pi_req_fifo_lowater   : 4;	/* PI Request FIFO Low Water Mark, for all 4 PI interfaces */
        uint64_t lb_nl_access_disable     : 1;	/* Netlink Request Access Disable */
        uint64_t lb_bootram_disable       : 1;	/* Boot RAM Disable */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t hss_pulse_width          :12;	/* Pulse width of HSS interrupt, in number of CCLK clocks */
        uint64_t lb_logmon_info_sel       : 3;	/* Select for mux on logic monitor outputs */
        uint64_t undefine_63_31           :33;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_cfg_params_desc_t;

typedef union ar_lb_cfg_wedge0_desc {
    struct {
        // QW0
        uint64_t lb_nl_req_timer_core0    : 4;	/* Request Timer 0 for Netlink */
        uint64_t lb_nl_rsp_timer_core0    : 4;	/* Response Timer 0 for Netlink */
        uint64_t lb_nl_req_timer_core1    : 4;	/* Request Timer 1 for Netlink */
        uint64_t lb_nl_rsp_timer_core1    : 4;	/* Response Timer 1 for Netlink */
        uint64_t lb_nl_req_timer_core2    : 4;	/* Request Timer 2 for Netlink */
        uint64_t lb_nl_rsp_timer_core2    : 4;	/* Response Timer 2 for Netlink */
        uint64_t lb_nl_req_timer_core3    : 4;	/* Request Timer 3 for Netlink */
        uint64_t lb_nl_rsp_timer_core3    : 4;	/* Response Timer 3 for Netlink */
        uint64_t lb_ring_pi0_timer        : 4;	/* Local Block PI 0 ring timer */
        uint64_t lb_ring_pi1_timer        : 4;	/* Local Block PI 1 ring timer */
        uint64_t lb_ring_pi2_timer        : 4;	/* Local Block PI 2 ring timer */
        uint64_t lb_ring_pi3_timer        : 4;	/* Local Block PI 3 ring timer */
        uint64_t lb_ring_nl_timer         : 4;	/* Local Block Netlink ring timer */
        uint64_t lb_ring_jtag_timer       : 4;	/* Local Block JTAG ring timer */
        uint64_t lb_cap_rsp_timer         : 4;	/* Local Block Create-a-Packet Response timer */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_cfg_wedge0_desc_t;

typedef union ar_lb_cfg_wedge1_desc {
    struct {
        // QW0
        uint64_t lb_wedge_master_timer    :32;	/* Master Timer for non-Netlink and non-Construct-a-Packet Wedge Timeouts */
        uint64_t lb_wedge_nl_master_timer :32;	/* Master Timer for Netlink and Construct-a-Packet Wedge Timeouts */
    };
    uint64_t qwords[1];
} ar_lb_cfg_wedge1_desc_t;

typedef union ar_lb_err_flg_desc {
    struct {
        // QW0
        uint64_t lb_err_diag_only         : 1;	/* Bit to allow diagnostics to trigger unique error */
        uint64_t lb_nl_rsp_val            : 1;	/* Netlink Response (as a result of a construct-a-command) valid */
        uint64_t lb_nl_rsp_oflow          : 1;	/* This bit sets when a create-a-packet response has been received before a previous create-a-packet response has been read out */
        uint64_t lb_nl_bad_pkt            : 1;	/* An NL packet with a bad format was received */
        uint64_t lb_jtag_rsp_buf_oflow    : 1;	/* JTAG response fifo Overflow */
        uint64_t lb_jtag_req_buf_oflow    : 1;	/* JTAG request fifo Overflow */
        uint64_t lb_jtag_rsp_buf_uflow    : 1;	/* JTAG response fifo Underflow */
        uint64_t lb_jtag_req_buf_uflow    : 1;	/* JTAG request fifo Underflow */
        uint64_t lb_pi0_req_buf_oflow     : 1;	/* PI #0 Request FIFO Overflow */
        uint64_t lb_pi1_req_buf_oflow     : 1;	/* PI #1 Request FIFO Overflow */
        uint64_t lb_pi2_req_buf_oflow     : 1;	/* PI #2 Request FIFO Overflow */
        uint64_t lb_pi3_req_buf_oflow     : 1;	/* PI #3 Request FIFO Overflow */
        uint64_t lb_pi0_req_buf_uflow     : 1;	/* PI #0 Request FIFO Underflow */
        uint64_t lb_pi1_req_buf_uflow     : 1;	/* PI #1 Request FIFO Underflow */
        uint64_t lb_pi2_req_buf_uflow     : 1;	/* PI #2 Request FIFO Underflow */
        uint64_t lb_pi3_req_buf_uflow     : 1;	/* PI #3 Request FIFO Underflow */
        uint64_t lb_jtag_notail           : 1;	/* During any JTAG command the tail indicator was not detected on (or before) the flit it was expected */
        uint64_t lb_jtag_pretail          : 1;	/* During streamed JTAG writes the tail indicator was detected before the transfer it was expected */
        uint64_t lb_nl0_req_fwd_progress  : 1;	/* NL0 Processor Requests are not making forward progress; it is wedged */
        uint64_t lb_nl0_rsp_fwd_progress  : 1;	/* NL0 Processor Responses are not making forward progress; it is wedged */
        uint64_t lb_nl1_req_fwd_progress  : 1;	/* NL1 Processor Requests are not making forward progress; it is wedged */
        uint64_t lb_nl1_rsp_fwd_progress  : 1;	/* NL1 Processor Responses are not making forward progress; it is wedged */
        uint64_t lb_nl2_req_fwd_progress  : 1;	/* NL2 Processor Requests are not making forward progress; it is wedged */
        uint64_t lb_nl2_rsp_fwd_progress  : 1;	/* NL2 Processor Responses are not making forward progress; it is wedged */
        uint64_t lb_nl3_req_fwd_progress  : 1;	/* NL3 Processor Requests are not making forward progress; it is wedged */
        uint64_t lb_nl3_rsp_fwd_progress  : 1;	/* NL3 Processor Responses are not making forward progress; it is wedged */
        uint64_t lb_pi0_rg_fwd_progress   : 1;	/* PI0 ring request is wedged */
        uint64_t lb_pi1_rg_fwd_progress   : 1;	/* PI1 ring request is wedged */
        uint64_t lb_pi2_rg_fwd_progress   : 1;	/* PI2 ring request is wedged */
        uint64_t lb_pi3_rg_fwd_progress   : 1;	/* PI3 ring request is wedged */
        uint64_t lb_nl_rg_fwd_progress    : 1;	/* Netlink ring request is wedged */
        uint64_t lb_jt_rg_fwd_progress    : 1;	/* JTAG ring request is wedged */
        uint64_t lb_cac_fwd_progress      : 1;	/* Local Block Construct-a-Command packets are not making forward progress */
        uint64_t lb_pi0_rsp_err           : 1;	/* Error Response was returned to PI0 interface */
        uint64_t lb_pi1_rsp_err           : 1;	/* Error Response was returned to PI1 interface */
        uint64_t lb_pi2_rsp_err           : 1;	/* Error Response was returned to PI2 interface */
        uint64_t lb_pi3_rsp_err           : 1;	/* Error Response was returned to PI3 interface */
        uint64_t lb_pi0_buf_perr          : 1;	/* PI #0 Request Buffer Parity Error */
        uint64_t lb_pi1_buf_perr          : 1;	/* PI #1 Request Buffer Parity Error */
        uint64_t lb_pi2_buf_perr          : 1;	/* PI #2 Request Buffer Parity Error */
        uint64_t lb_pi3_buf_perr          : 1;	/* PI #3 Request Buffer Parity Error */
        uint64_t lb_nl_req_sbe            : 1;	/* Single Bit ECC Error on NL Request data packet */
        uint64_t lb_nl_req_mbe            : 1;	/* Multiple Bit ECC Error on NL Request data packet */
        uint64_t lb_nl_req_parity         : 1;	/* Parity Error detected on NL Request Header */
        uint64_t np_hss_irq               : 1;	/* Network Processor HSS Interrupt */
        uint64_t lb_jtag_req_fifo_perr    : 1;	/* JTAG Request Buffer read detected a parity error */
        uint64_t lb_jtag_rsp_fifo_perr    : 1;	/* JTAG Response Buffer read detected a parity error */
        uint64_t lb_rtr_row0_err          : 1;	/* Router Row 0 of the tile matrix received an error */
        uint64_t lb_rtr_row1_err          : 1;	/* Router Row 1 of the tile matrix received an error */
        uint64_t lb_rtr_row2_err          : 1;	/* Router Row 2 of the tile matrix received an error */
        uint64_t lb_rtr_row3_err          : 1;	/* Router Row 3 of the tile matrix received an error */
        uint64_t lb_rtr_row4_err          : 1;	/* Router Row 4 of the tile matrix received an error */
        uint64_t lb_rtr_row5_err          : 1;	/* Router Row 5 of the tile matrix received an error */
        uint64_t lb_force_hss_err         : 4;	/* Force HSS Interrupt flags These bits are set by writing to the A_NIC_NICLM_ERR_FRC_HSS_IRQ MMRs (Section 6 */
        uint64_t nl_hss_irq               : 1;	/* Netlink HSS Error Flag */
        uint64_t nic_hss_irq              : 4;	/* A NIC HSS IRQ was generated from the NIC Error registers and their associated mask registers */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_err_flg_desc_t;

typedef union ar_lb_err_clr_desc {
    struct {
        // QW0
        uint64_t lb_err_diag_only         : 1;	/* Bit to allow diagnostics to trigger unique error */
        uint64_t lb_nl_rsp_val            : 1;	/* Netlink Response (as a result of a construct-a-command) valid */
        uint64_t lb_nl_rsp_oflow          : 1;	/* This bit sets when a create-a-packet response has been received before a previous create-a-packet response has been read out */
        uint64_t lb_nl_bad_pkt            : 1;	/* An NL packet with a bad format was received */
        uint64_t lb_jtag_rsp_buf_oflow    : 1;	/* JTAG response fifo Overflow */
        uint64_t lb_jtag_req_buf_oflow    : 1;	/* JTAG request fifo Overflow */
        uint64_t lb_jtag_rsp_buf_uflow    : 1;	/* JTAG response fifo Underflow */
        uint64_t lb_jtag_req_buf_uflow    : 1;	/* JTAG request fifo Underflow */
        uint64_t lb_pi0_req_buf_oflow     : 1;	/* PI #0 Request FIFO Overflow */
        uint64_t lb_pi1_req_buf_oflow     : 1;	/* PI #1 Request FIFO Overflow */
        uint64_t lb_pi2_req_buf_oflow     : 1;	/* PI #2 Request FIFO Overflow */
        uint64_t lb_pi3_req_buf_oflow     : 1;	/* PI #3 Request FIFO Overflow */
        uint64_t lb_pi0_req_buf_uflow     : 1;	/* PI #0 Request FIFO Underflow */
        uint64_t lb_pi1_req_buf_uflow     : 1;	/* PI #1 Request FIFO Underflow */
        uint64_t lb_pi2_req_buf_uflow     : 1;	/* PI #2 Request FIFO Underflow */
        uint64_t lb_pi3_req_buf_uflow     : 1;	/* PI #3 Request FIFO Underflow */
        uint64_t lb_jtag_notail           : 1;	/* During any JTAG command the tail indicator was not detected on (or before) the flit it was expected */
        uint64_t lb_jtag_pretail          : 1;	/* During streamed JTAG writes the tail indicator was detected before the transfer it was expected */
        uint64_t lb_nl0_req_fwd_progress  : 1;	/* NL0 Processor Requests are not making forward progress; it is wedged */
        uint64_t lb_nl0_rsp_fwd_progress  : 1;	/* NL0 Processor Responses are not making forward progress; it is wedged */
        uint64_t lb_nl1_req_fwd_progress  : 1;	/* NL1 Processor Requests are not making forward progress; it is wedged */
        uint64_t lb_nl1_rsp_fwd_progress  : 1;	/* NL1 Processor Responses are not making forward progress; it is wedged */
        uint64_t lb_nl2_req_fwd_progress  : 1;	/* NL2 Processor Requests are not making forward progress; it is wedged */
        uint64_t lb_nl2_rsp_fwd_progress  : 1;	/* NL2 Processor Responses are not making forward progress; it is wedged */
        uint64_t lb_nl3_req_fwd_progress  : 1;	/* NL3 Processor Requests are not making forward progress; it is wedged */
        uint64_t lb_nl3_rsp_fwd_progress  : 1;	/* NL3 Processor Responses are not making forward progress; it is wedged */
        uint64_t lb_pi0_rg_fwd_progress   : 1;	/* PI0 ring request is wedged */
        uint64_t lb_pi1_rg_fwd_progress   : 1;	/* PI1 ring request is wedged */
        uint64_t lb_pi2_rg_fwd_progress   : 1;	/* PI2 ring request is wedged */
        uint64_t lb_pi3_rg_fwd_progress   : 1;	/* PI3 ring request is wedged */
        uint64_t lb_nl_rg_fwd_progress    : 1;	/* Netlink ring request is wedged */
        uint64_t lb_jt_rg_fwd_progress    : 1;	/* JTAG ring request is wedged */
        uint64_t lb_cac_fwd_progress      : 1;	/* Local Block Construct-a-Command packets are not making forward progress */
        uint64_t lb_pi0_rsp_err           : 1;	/* Error Response was returned to PI0 interface */
        uint64_t lb_pi1_rsp_err           : 1;	/* Error Response was returned to PI1 interface */
        uint64_t lb_pi2_rsp_err           : 1;	/* Error Response was returned to PI2 interface */
        uint64_t lb_pi3_rsp_err           : 1;	/* Error Response was returned to PI3 interface */
        uint64_t lb_pi0_buf_perr          : 1;	/* PI #0 Request Buffer Parity Error */
        uint64_t lb_pi1_buf_perr          : 1;	/* PI #1 Request Buffer Parity Error */
        uint64_t lb_pi2_buf_perr          : 1;	/* PI #2 Request Buffer Parity Error */
        uint64_t lb_pi3_buf_perr          : 1;	/* PI #3 Request Buffer Parity Error */
        uint64_t lb_nl_req_sbe            : 1;	/* Single Bit ECC Error on NL Request data packet */
        uint64_t lb_nl_req_mbe            : 1;	/* Multiple Bit ECC Error on NL Request data packet */
        uint64_t lb_nl_req_parity         : 1;	/* Parity Error detected on NL Request Header */
        uint64_t np_hss_irq               : 1;	/* Network Processor HSS Interrupt */
        uint64_t lb_jtag_req_fifo_perr    : 1;	/* JTAG Request Buffer read detected a parity error */
        uint64_t lb_jtag_rsp_fifo_perr    : 1;	/* JTAG Response Buffer read detected a parity error */
        uint64_t lb_rtr_row0_err          : 1;	/* Router Row 0 of the tile matrix received an error */
        uint64_t lb_rtr_row1_err          : 1;	/* Router Row 1 of the tile matrix received an error */
        uint64_t lb_rtr_row2_err          : 1;	/* Router Row 2 of the tile matrix received an error */
        uint64_t lb_rtr_row3_err          : 1;	/* Router Row 3 of the tile matrix received an error */
        uint64_t lb_rtr_row4_err          : 1;	/* Router Row 4 of the tile matrix received an error */
        uint64_t lb_rtr_row5_err          : 1;	/* Router Row 5 of the tile matrix received an error */
        uint64_t lb_force_hss_err         : 4;	/* Force HSS Interrupt flags These bits are set by writing to the A_NIC_NICLM_ERR_FRC_HSS_IRQ MMRs (Section 6 */
        uint64_t nl_hss_irq               : 1;	/* Netlink HSS Error Flag */
        uint64_t nic_hss_irq              : 4;	/* A NIC HSS IRQ was generated from the NIC Error registers and their associated mask registers */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_err_clr_desc_t;

typedef union ar_lb_nic0_pi0_err_flg_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* Diagnostic Bit */
        uint64_t lb_nic_err               :17;	/* 0 - A_NIC_AMO_ERR_FLG1 - A_NIC_BTE_ERR_FLG2 - A_NIC_NICLM_ERR_FLG3 - A_NIC_CQ_ERR_FLG4 - A_NIC_FMA_ERR_FLG5- A_NIC_PARB_ERR_FLG6 - A_NIC_NAT_ERR_FLG7 - A_NIC_NPT_ERR_FLG8 - A_NIC_ORB_ERR_FLG9 - A_NIC_RAT_ERR_FLG10 - A_NIC_RMT_ERR_FLG11 - A_NIC_SSID_ERR_FLG12 - A_NIC_TARB_ERR_FLG13 - A_NIC_IOMMU_ERR_FLG14 - A_NIC_WC_ERR_FLG15 - A_NIC_CE_ERR_FLG16 - A_NIC_DLA_ERR_FLG */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 0 - A_PI_ERR_FLG1 - A_PI_PMI_ERR_FLG2 - A_PI_PMI_FIFO_ERR_FLG3 - A_PI_PII_ERR_FLG4 - A_PI_PTI_ERR_FLG5 - A_PI_ERR_FLG_IP6 - A_PI_PMI_FIFO2_ERR_FLG7 - A_PI_PII_PCLK_ERR_FLG8 - A_PI_PTI_PCLK_ERR_FLG */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic0_pi0_err_flg_desc_t;

typedef union ar_lb_nic0_pi0_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* Diagnostic Bit */
        uint64_t lb_nic_err               :17;	/* 0 - A_NIC_AMO_ERR_FLG1 - A_NIC_BTE_ERR_FLG2 - A_NIC_NICLM_ERR_FLG3 - A_NIC_CQ_ERR_FLG4 - A_NIC_FMA_ERR_FLG5- A_NIC_PARB_ERR_FLG6 - A_NIC_NAT_ERR_FLG7 - A_NIC_NPT_ERR_FLG8 - A_NIC_ORB_ERR_FLG9 - A_NIC_RAT_ERR_FLG10 - A_NIC_RMT_ERR_FLG11 - A_NIC_SSID_ERR_FLG12 - A_NIC_TARB_ERR_FLG13 - A_NIC_IOMMU_ERR_FLG14 - A_NIC_WC_ERR_FLG15 - A_NIC_CE_ERR_FLG16 - A_NIC_DLA_ERR_FLG */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 0 - A_PI_ERR_FLG1 - A_PI_PMI_ERR_FLG2 - A_PI_PMI_FIFO_ERR_FLG3 - A_PI_PII_ERR_FLG4 - A_PI_PTI_ERR_FLG5 - A_PI_ERR_FLG_IP6 - A_PI_PMI_FIFO2_ERR_FLG7 - A_PI_PII_PCLK_ERR_FLG8 - A_PI_PTI_PCLK_ERR_FLG */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic0_pi0_err_hss_msk_desc_t;

typedef union ar_lb_nic0_pi0_err_clr_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nic_err               :17;	/* 17:1 */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 26:18 */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic0_pi0_err_clr_desc_t;

typedef union ar_lb_nic0_pi0_err_first_flg_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nic_err               :17;	/* 17:1 */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 26:18 */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic0_pi0_err_first_flg_desc_t;

typedef union ar_lb_nic1_pi1_err_flg_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* Diagnostic Bit */
        uint64_t lb_nic_err               :17;	/* 0 - A_NIC_AMO_ERR_FLG1 - A_NIC_BTE_ERR_FLG2 - A_NIC_NICLM_ERR_FLG3 - A_NIC_CQ_ERR_FLG4 - A_NIC_FMA_ERR_FLG5- A_NIC_PARB_ERR_FLG6 - A_NIC_NAT_ERR_FLG7 - A_NIC_NPT_ERR_FLG8 - A_NIC_ORB_ERR_FLG9 - A_NIC_RAT_ERR_FLG10 - A_NIC_RMT_ERR_FLG11 - A_NIC_SSID_ERR_FLG12 - A_NIC_TARB_ERR_FLG13 - A_NIC_IOMMU_ERR_FLG14 - A_NIC_WC_ERR_FLG15 - A_NIC_CE_ERR_FLG16 - A_NIC_DLA_ERR_FLG */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 0 - A_PI_ERR_FLG1 - A_PI_PMI_ERR_FLG2 - A_PI_PMI_FIFO_ERR_FLG3 - A_PI_PII_ERR_FLG4 - A_PI_PTI_ERR_FLG5 - A_PI_ERR_FLG_IP6 - A_PI_PMI_FIFO2_ERR_FLG7 - A_PI_PII_PCLK_ERR_FLG8 - A_PI_PTI_PCLK_ERR_FLG */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic1_pi1_err_flg_desc_t;

typedef union ar_lb_nic1_pi1_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* Diagnostic Bit */
        uint64_t lb_nic_err               :17;	/* 0 - A_NIC_AMO_ERR_FLG1 - A_NIC_BTE_ERR_FLG2 - A_NIC_NICLM_ERR_FLG3 - A_NIC_CQ_ERR_FLG4 - A_NIC_FMA_ERR_FLG5- A_NIC_PARB_ERR_FLG6 - A_NIC_NAT_ERR_FLG7 - A_NIC_NPT_ERR_FLG8 - A_NIC_ORB_ERR_FLG9 - A_NIC_RAT_ERR_FLG10 - A_NIC_RMT_ERR_FLG11 - A_NIC_SSID_ERR_FLG12 - A_NIC_TARB_ERR_FLG13 - A_NIC_IOMMU_ERR_FLG14 - A_NIC_WC_ERR_FLG15 - A_NIC_CE_ERR_FLG16 - A_NIC_DLA_ERR_FLG */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 0 - A_PI_ERR_FLG1 - A_PI_PMI_ERR_FLG2 - A_PI_PMI_FIFO_ERR_FLG3 - A_PI_PII_ERR_FLG4 - A_PI_PTI_ERR_FLG5 - A_PI_ERR_FLG_IP6 - A_PI_PMI_FIFO2_ERR_FLG7 - A_PI_PII_PCLK_ERR_FLG8 - A_PI_PTI_PCLK_ERR_FLG */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic1_pi1_err_hss_msk_desc_t;

typedef union ar_lb_nic1_pi1_err_clr_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nic_err               :17;	/* 17:1 */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 26:18 */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic1_pi1_err_clr_desc_t;

typedef union ar_lb_nic1_pi1_err_first_flg_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nic_err               :17;	/* 17:1 */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 26:18 */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic1_pi1_err_first_flg_desc_t;

typedef union ar_lb_nic2_pi2_err_flg_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* Diagnostic Bit */
        uint64_t lb_nic_err               :17;	/* 0 - A_NIC_AMO_ERR_FLG1 - A_NIC_BTE_ERR_FLG2 - A_NIC_NICLM_ERR_FLG3 - A_NIC_CQ_ERR_FLG4 - A_NIC_FMA_ERR_FLG5- A_NIC_PARB_ERR_FLG6 - A_NIC_NAT_ERR_FLG7 - A_NIC_NPT_ERR_FLG8 - A_NIC_ORB_ERR_FLG9 - A_NIC_RAT_ERR_FLG10 - A_NIC_RMT_ERR_FLG11 - A_NIC_SSID_ERR_FLG12 - A_NIC_TARB_ERR_FLG13 - A_NIC_IOMMU_ERR_FLG14 - A_NIC_WC_ERR_FLG15 - A_NIC_CE_ERR_FLG16 - A_NIC_DLA_ERR_FLG */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 0 - A_PI_ERR_FLG1 - A_PI_PMI_ERR_FLG2 - A_PI_PMI_FIFO_ERR_FLG3 - A_PI_PII_ERR_FLG4 - A_PI_PTI_ERR_FLG5 - A_PI_ERR_FLG_IP6 - A_PI_PMI_FIFO2_ERR_FLG7 - A_PI_PII_PCLK_ERR_FLG8 - A_PI_PTI_PCLK_ERR_FLG */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic2_pi2_err_flg_desc_t;

typedef union ar_lb_nic2_pi2_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* Diagnostic Bit */
        uint64_t lb_nic_err               :17;	/* 0 - A_NIC_AMO_ERR_FLG1 - A_NIC_BTE_ERR_FLG2 - A_NIC_NICLM_ERR_FLG3 - A_NIC_CQ_ERR_FLG4 - A_NIC_FMA_ERR_FLG5- A_NIC_PARB_ERR_FLG6 - A_NIC_NAT_ERR_FLG7 - A_NIC_NPT_ERR_FLG8 - A_NIC_ORB_ERR_FLG9 - A_NIC_RAT_ERR_FLG10 - A_NIC_RMT_ERR_FLG11 - A_NIC_SSID_ERR_FLG12 - A_NIC_TARB_ERR_FLG13 - A_NIC_IOMMU_ERR_FLG14 - A_NIC_WC_ERR_FLG15 - A_NIC_CE_ERR_FLG16 - A_NIC_DLA_ERR_FLG */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 0 - A_PI_ERR_FLG1 - A_PI_PMI_ERR_FLG2 - A_PI_PMI_FIFO_ERR_FLG3 - A_PI_PII_ERR_FLG4 - A_PI_PTI_ERR_FLG5 - A_PI_ERR_FLG_IP6 - A_PI_PMI_FIFO2_ERR_FLG7 - A_PI_PII_PCLK_ERR_FLG8 - A_PI_PTI_PCLK_ERR_FLG */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic2_pi2_err_hss_msk_desc_t;

typedef union ar_lb_nic2_pi2_err_clr_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nic_err               :17;	/* 17:1 */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 26:18 */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic2_pi2_err_clr_desc_t;

typedef union ar_lb_nic2_pi2_err_first_flg_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nic_err               :17;	/* 17:1 */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 26:18 */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic2_pi2_err_first_flg_desc_t;

typedef union ar_lb_nic3_pi3_err_flg_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* Diagnostic Bit */
        uint64_t lb_nic_err               :17;	/* 0 - A_NIC_AMO_ERR_FLG1 - A_NIC_BTE_ERR_FLG2 - A_NIC_NICLM_ERR_FLG3 - A_NIC_CQ_ERR_FLG4 - A_NIC_FMA_ERR_FLG5- A_NIC_PARB_ERR_FLG6 - A_NIC_NAT_ERR_FLG7 - A_NIC_NPT_ERR_FLG8 - A_NIC_ORB_ERR_FLG9 - A_NIC_RAT_ERR_FLG10 - A_NIC_RMT_ERR_FLG11 - A_NIC_SSID_ERR_FLG12 - A_NIC_TARB_ERR_FLG13 - A_NIC_IOMMU_ERR_FLG14 - A_NIC_WC_ERR_FLG15 - A_NIC_CE_ERR_FLG16 - A_NIC_DLA_ERR_FLG */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 0 - A_PI_ERR_FLG1 - A_PI_PMI_ERR_FLG2 - A_PI_PMI_FIFO_ERR_FLG3 - A_PI_PII_ERR_FLG4 - A_PI_PTI_ERR_FLG5 - A_PI_ERR_FLG_IP6 - A_PI_PMI_FIFO2_ERR_FLG7 - A_PI_PII_PCLK_ERR_FLG8 - A_PI_PTI_PCLK_ERR_FLG */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic3_pi3_err_flg_desc_t;

typedef union ar_lb_nic3_pi3_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* Diagnostic Bit */
        uint64_t lb_nic_err               :17;	/* 0 - A_NIC_AMO_ERR_FLG1 - A_NIC_BTE_ERR_FLG2 - A_NIC_NICLM_ERR_FLG3 - A_NIC_CQ_ERR_FLG4 - A_NIC_FMA_ERR_FLG5- A_NIC_PARB_ERR_FLG6 - A_NIC_NAT_ERR_FLG7 - A_NIC_NPT_ERR_FLG8 - A_NIC_ORB_ERR_FLG9 - A_NIC_RAT_ERR_FLG10 - A_NIC_RMT_ERR_FLG11 - A_NIC_SSID_ERR_FLG12 - A_NIC_TARB_ERR_FLG13 - A_NIC_IOMMU_ERR_FLG14 - A_NIC_WC_ERR_FLG15 - A_NIC_CE_ERR_FLG16 - A_NIC_DLA_ERR_FLG */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 0 - A_PI_ERR_FLG1 - A_PI_PMI_ERR_FLG2 - A_PI_PMI_FIFO_ERR_FLG3 - A_PI_PII_ERR_FLG4 - A_PI_PTI_ERR_FLG5 - A_PI_ERR_FLG_IP6 - A_PI_PMI_FIFO2_ERR_FLG7 - A_PI_PII_PCLK_ERR_FLG8 - A_PI_PTI_PCLK_ERR_FLG */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic3_pi3_err_hss_msk_desc_t;

typedef union ar_lb_nic3_pi3_err_clr_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nic_err               :17;	/* 17:1 */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 26:18 */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic3_pi3_err_clr_desc_t;

typedef union ar_lb_nic3_pi3_err_first_flg_desc {
    struct {
        // QW0
        uint64_t lb_nic_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nic_err               :17;	/* 17:1 */
        uint64_t undefine_31_18           :14;	/* undefined */
        uint64_t lb_pi_err                : 9;	/* 26:18 */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nic3_pi3_err_first_flg_desc_t;

typedef union ar_lb_pi0_err_os_msk_desc {
    struct {
        // QW0
        uint64_t lb_err_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nl_rsp_val            : 1;	/* 1:1 */
        uint64_t lb_nl_rsp_oflow          : 1;	/* 2:2 */
        uint64_t lb_nl_bad_pkt            : 1;	/* 3:3 */
        uint64_t lb_jtag_rsp_buf_oflow    : 1;	/* 4:4 */
        uint64_t lb_jtag_req_buf_oflow    : 1;	/* 5:5 */
        uint64_t lb_jtag_rsp_buf_uflow    : 1;	/* 6:6 */
        uint64_t lb_jtag_req_buf_uflow    : 1;	/* 7:7 */
        uint64_t lb_pi0_req_buf_oflow     : 1;	/* 8:8 */
        uint64_t lb_pi1_req_buf_oflow     : 1;	/* 9:9 */
        uint64_t lb_pi2_req_buf_oflow     : 1;	/* 10:10 */
        uint64_t lb_pi3_req_buf_oflow     : 1;	/* 11:11 */
        uint64_t lb_pi0_req_buf_uflow     : 1;	/* 12:12 */
        uint64_t lb_pi1_req_buf_uflow     : 1;	/* 13:13 */
        uint64_t lb_pi2_req_buf_uflow     : 1;	/* 14:14 */
        uint64_t lb_pi3_req_buf_uflow     : 1;	/* 15:15 */
        uint64_t lb_jtag_notail           : 1;	/* 16:16 */
        uint64_t lb_jtag_pretail          : 1;	/* 17:17 */
        uint64_t lb_nl0_req_fwd_progress  : 1;	/* 18:18 */
        uint64_t lb_nl0_rsp_fwd_progress  : 1;	/* 19:19 */
        uint64_t lb_nl1_req_fwd_progress  : 1;	/* 20:20 */
        uint64_t lb_nl1_rsp_fwd_progress  : 1;	/* 21:21 */
        uint64_t lb_nl2_req_fwd_progress  : 1;	/* 22:22 */
        uint64_t lb_nl2_rsp_fwd_progress  : 1;	/* 23:23 */
        uint64_t lb_nl3_req_fwd_progress  : 1;	/* 24:24 */
        uint64_t lb_nl3_rsp_fwd_progress  : 1;	/* 25:25 */
        uint64_t lb_pi0_rg_fwd_progress   : 1;	/* 26:26 */
        uint64_t lb_pi1_rg_fwd_progress   : 1;	/* 27:27 */
        uint64_t lb_pi2_rg_fwd_progress   : 1;	/* 28:28 */
        uint64_t lb_pi3_rg_fwd_progress   : 1;	/* 29:29 */
        uint64_t lb_nl_rg_fwd_progress    : 1;	/* 30:30 */
        uint64_t lb_jt_rg_fwd_progress    : 1;	/* 31:31 */
        uint64_t lb_cac_fwd_progress      : 1;	/* 32:32 */
        uint64_t lb_pi0_rsp_err           : 1;	/* 33:33 */
        uint64_t lb_pi1_rsp_err           : 1;	/* 34:34 */
        uint64_t lb_pi2_rsp_err           : 1;	/* 35:35 */
        uint64_t lb_pi3_rsp_err           : 1;	/* 36:36 */
        uint64_t lb_pi0_buf_perr          : 1;	/* 37:37 */
        uint64_t lb_pi1_buf_perr          : 1;	/* 38:38 */
        uint64_t lb_pi2_buf_perr          : 1;	/* 39:39 */
        uint64_t lb_pi3_buf_perr          : 1;	/* 40:40 */
        uint64_t lb_nl_req_sbe            : 1;	/* 41:41 */
        uint64_t lb_nl_req_mbe            : 1;	/* 42:42 */
        uint64_t lb_nl_req_parity         : 1;	/* 43:43 */
        uint64_t np_hss_irq               : 1;	/* 44:44 */
        uint64_t lb_jtag_req_fifo_perr    : 1;	/* 45:45 */
        uint64_t lb_jtag_rsp_fifo_perr    : 1;	/* 46:46 */
        uint64_t lb_rtr_row0_err          : 1;	/* 47:47 */
        uint64_t lb_rtr_row1_err          : 1;	/* 48:48 */
        uint64_t lb_rtr_row2_err          : 1;	/* 49:49 */
        uint64_t lb_rtr_row3_err          : 1;	/* 50:50 */
        uint64_t lb_rtr_row4_err          : 1;	/* 51:51 */
        uint64_t lb_rtr_row5_err          : 1;	/* 52:52 */
        uint64_t lb_force_hss_err         : 4;	/* 56:53 */
        uint64_t nl_hss_irq               : 1;	/* 57:57 */
        uint64_t nic_hss_irq              : 4;	/* 61:58 */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_pi0_err_os_msk_desc_t;

typedef union ar_lb_pi1_err_os_msk_desc {
    struct {
        // QW0
        uint64_t lb_err_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nl_rsp_val            : 1;	/* 1:1 */
        uint64_t lb_nl_rsp_oflow          : 1;	/* 2:2 */
        uint64_t lb_nl_bad_pkt            : 1;	/* 3:3 */
        uint64_t lb_jtag_rsp_buf_oflow    : 1;	/* 4:4 */
        uint64_t lb_jtag_req_buf_oflow    : 1;	/* 5:5 */
        uint64_t lb_jtag_rsp_buf_uflow    : 1;	/* 6:6 */
        uint64_t lb_jtag_req_buf_uflow    : 1;	/* 7:7 */
        uint64_t lb_pi0_req_buf_oflow     : 1;	/* 8:8 */
        uint64_t lb_pi1_req_buf_oflow     : 1;	/* 9:9 */
        uint64_t lb_pi2_req_buf_oflow     : 1;	/* 10:10 */
        uint64_t lb_pi3_req_buf_oflow     : 1;	/* 11:11 */
        uint64_t lb_pi0_req_buf_uflow     : 1;	/* 12:12 */
        uint64_t lb_pi1_req_buf_uflow     : 1;	/* 13:13 */
        uint64_t lb_pi2_req_buf_uflow     : 1;	/* 14:14 */
        uint64_t lb_pi3_req_buf_uflow     : 1;	/* 15:15 */
        uint64_t lb_jtag_notail           : 1;	/* 16:16 */
        uint64_t lb_jtag_pretail          : 1;	/* 17:17 */
        uint64_t lb_nl0_req_fwd_progress  : 1;	/* 18:18 */
        uint64_t lb_nl0_rsp_fwd_progress  : 1;	/* 19:19 */
        uint64_t lb_nl1_req_fwd_progress  : 1;	/* 20:20 */
        uint64_t lb_nl1_rsp_fwd_progress  : 1;	/* 21:21 */
        uint64_t lb_nl2_req_fwd_progress  : 1;	/* 22:22 */
        uint64_t lb_nl2_rsp_fwd_progress  : 1;	/* 23:23 */
        uint64_t lb_nl3_req_fwd_progress  : 1;	/* 24:24 */
        uint64_t lb_nl3_rsp_fwd_progress  : 1;	/* 25:25 */
        uint64_t lb_pi0_rg_fwd_progress   : 1;	/* 26:26 */
        uint64_t lb_pi1_rg_fwd_progress   : 1;	/* 27:27 */
        uint64_t lb_pi2_rg_fwd_progress   : 1;	/* 28:28 */
        uint64_t lb_pi3_rg_fwd_progress   : 1;	/* 29:29 */
        uint64_t lb_nl_rg_fwd_progress    : 1;	/* 30:30 */
        uint64_t lb_jt_rg_fwd_progress    : 1;	/* 31:31 */
        uint64_t lb_cac_fwd_progress      : 1;	/* 32:32 */
        uint64_t lb_pi0_rsp_err           : 1;	/* 33:33 */
        uint64_t lb_pi1_rsp_err           : 1;	/* 34:34 */
        uint64_t lb_pi2_rsp_err           : 1;	/* 35:35 */
        uint64_t lb_pi3_rsp_err           : 1;	/* 36:36 */
        uint64_t lb_pi0_buf_perr          : 1;	/* 37:37 */
        uint64_t lb_pi1_buf_perr          : 1;	/* 38:38 */
        uint64_t lb_pi2_buf_perr          : 1;	/* 39:39 */
        uint64_t lb_pi3_buf_perr          : 1;	/* 40:40 */
        uint64_t lb_nl_req_sbe            : 1;	/* 41:41 */
        uint64_t lb_nl_req_mbe            : 1;	/* 42:42 */
        uint64_t lb_nl_req_parity         : 1;	/* 43:43 */
        uint64_t np_hss_irq               : 1;	/* 44:44 */
        uint64_t lb_jtag_req_fifo_perr    : 1;	/* 45:45 */
        uint64_t lb_jtag_rsp_fifo_perr    : 1;	/* 46:46 */
        uint64_t lb_rtr_row0_err          : 1;	/* 47:47 */
        uint64_t lb_rtr_row1_err          : 1;	/* 48:48 */
        uint64_t lb_rtr_row2_err          : 1;	/* 49:49 */
        uint64_t lb_rtr_row3_err          : 1;	/* 50:50 */
        uint64_t lb_rtr_row4_err          : 1;	/* 51:51 */
        uint64_t lb_rtr_row5_err          : 1;	/* 52:52 */
        uint64_t lb_force_hss_err         : 4;	/* 56:53 */
        uint64_t nl_hss_irq               : 1;	/* 57:57 */
        uint64_t nic_hss_irq              : 4;	/* 61:58 */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_pi1_err_os_msk_desc_t;

typedef union ar_lb_pi2_err_os_msk_desc {
    struct {
        // QW0
        uint64_t lb_err_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nl_rsp_val            : 1;	/* 1:1 */
        uint64_t lb_nl_rsp_oflow          : 1;	/* 2:2 */
        uint64_t lb_nl_bad_pkt            : 1;	/* 3:3 */
        uint64_t lb_jtag_rsp_buf_oflow    : 1;	/* 4:4 */
        uint64_t lb_jtag_req_buf_oflow    : 1;	/* 5:5 */
        uint64_t lb_jtag_rsp_buf_uflow    : 1;	/* 6:6 */
        uint64_t lb_jtag_req_buf_uflow    : 1;	/* 7:7 */
        uint64_t lb_pi0_req_buf_oflow     : 1;	/* 8:8 */
        uint64_t lb_pi1_req_buf_oflow     : 1;	/* 9:9 */
        uint64_t lb_pi2_req_buf_oflow     : 1;	/* 10:10 */
        uint64_t lb_pi3_req_buf_oflow     : 1;	/* 11:11 */
        uint64_t lb_pi0_req_buf_uflow     : 1;	/* 12:12 */
        uint64_t lb_pi1_req_buf_uflow     : 1;	/* 13:13 */
        uint64_t lb_pi2_req_buf_uflow     : 1;	/* 14:14 */
        uint64_t lb_pi3_req_buf_uflow     : 1;	/* 15:15 */
        uint64_t lb_jtag_notail           : 1;	/* 16:16 */
        uint64_t lb_jtag_pretail          : 1;	/* 17:17 */
        uint64_t lb_nl0_req_fwd_progress  : 1;	/* 18:18 */
        uint64_t lb_nl0_rsp_fwd_progress  : 1;	/* 19:19 */
        uint64_t lb_nl1_req_fwd_progress  : 1;	/* 20:20 */
        uint64_t lb_nl1_rsp_fwd_progress  : 1;	/* 21:21 */
        uint64_t lb_nl2_req_fwd_progress  : 1;	/* 22:22 */
        uint64_t lb_nl2_rsp_fwd_progress  : 1;	/* 23:23 */
        uint64_t lb_nl3_req_fwd_progress  : 1;	/* 24:24 */
        uint64_t lb_nl3_rsp_fwd_progress  : 1;	/* 25:25 */
        uint64_t lb_pi0_rg_fwd_progress   : 1;	/* 26:26 */
        uint64_t lb_pi1_rg_fwd_progress   : 1;	/* 27:27 */
        uint64_t lb_pi2_rg_fwd_progress   : 1;	/* 28:28 */
        uint64_t lb_pi3_rg_fwd_progress   : 1;	/* 29:29 */
        uint64_t lb_nl_rg_fwd_progress    : 1;	/* 30:30 */
        uint64_t lb_jt_rg_fwd_progress    : 1;	/* 31:31 */
        uint64_t lb_cac_fwd_progress      : 1;	/* 32:32 */
        uint64_t lb_pi0_rsp_err           : 1;	/* 33:33 */
        uint64_t lb_pi1_rsp_err           : 1;	/* 34:34 */
        uint64_t lb_pi2_rsp_err           : 1;	/* 35:35 */
        uint64_t lb_pi3_rsp_err           : 1;	/* 36:36 */
        uint64_t lb_pi0_buf_perr          : 1;	/* 37:37 */
        uint64_t lb_pi1_buf_perr          : 1;	/* 38:38 */
        uint64_t lb_pi2_buf_perr          : 1;	/* 39:39 */
        uint64_t lb_pi3_buf_perr          : 1;	/* 40:40 */
        uint64_t lb_nl_req_sbe            : 1;	/* 41:41 */
        uint64_t lb_nl_req_mbe            : 1;	/* 42:42 */
        uint64_t lb_nl_req_parity         : 1;	/* 43:43 */
        uint64_t np_hss_irq               : 1;	/* 44:44 */
        uint64_t lb_jtag_req_fifo_perr    : 1;	/* 45:45 */
        uint64_t lb_jtag_rsp_fifo_perr    : 1;	/* 46:46 */
        uint64_t lb_rtr_row0_err          : 1;	/* 47:47 */
        uint64_t lb_rtr_row1_err          : 1;	/* 48:48 */
        uint64_t lb_rtr_row2_err          : 1;	/* 49:49 */
        uint64_t lb_rtr_row3_err          : 1;	/* 50:50 */
        uint64_t lb_rtr_row4_err          : 1;	/* 51:51 */
        uint64_t lb_rtr_row5_err          : 1;	/* 52:52 */
        uint64_t lb_force_hss_err         : 4;	/* 56:53 */
        uint64_t nl_hss_irq               : 1;	/* 57:57 */
        uint64_t nic_hss_irq              : 4;	/* 61:58 */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_pi2_err_os_msk_desc_t;

typedef union ar_lb_pi3_err_os_msk_desc {
    struct {
        // QW0
        uint64_t lb_err_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nl_rsp_val            : 1;	/* 1:1 */
        uint64_t lb_nl_rsp_oflow          : 1;	/* 2:2 */
        uint64_t lb_nl_bad_pkt            : 1;	/* 3:3 */
        uint64_t lb_jtag_rsp_buf_oflow    : 1;	/* 4:4 */
        uint64_t lb_jtag_req_buf_oflow    : 1;	/* 5:5 */
        uint64_t lb_jtag_rsp_buf_uflow    : 1;	/* 6:6 */
        uint64_t lb_jtag_req_buf_uflow    : 1;	/* 7:7 */
        uint64_t lb_pi0_req_buf_oflow     : 1;	/* 8:8 */
        uint64_t lb_pi1_req_buf_oflow     : 1;	/* 9:9 */
        uint64_t lb_pi2_req_buf_oflow     : 1;	/* 10:10 */
        uint64_t lb_pi3_req_buf_oflow     : 1;	/* 11:11 */
        uint64_t lb_pi0_req_buf_uflow     : 1;	/* 12:12 */
        uint64_t lb_pi1_req_buf_uflow     : 1;	/* 13:13 */
        uint64_t lb_pi2_req_buf_uflow     : 1;	/* 14:14 */
        uint64_t lb_pi3_req_buf_uflow     : 1;	/* 15:15 */
        uint64_t lb_jtag_notail           : 1;	/* 16:16 */
        uint64_t lb_jtag_pretail          : 1;	/* 17:17 */
        uint64_t lb_nl0_req_fwd_progress  : 1;	/* 18:18 */
        uint64_t lb_nl0_rsp_fwd_progress  : 1;	/* 19:19 */
        uint64_t lb_nl1_req_fwd_progress  : 1;	/* 20:20 */
        uint64_t lb_nl1_rsp_fwd_progress  : 1;	/* 21:21 */
        uint64_t lb_nl2_req_fwd_progress  : 1;	/* 22:22 */
        uint64_t lb_nl2_rsp_fwd_progress  : 1;	/* 23:23 */
        uint64_t lb_nl3_req_fwd_progress  : 1;	/* 24:24 */
        uint64_t lb_nl3_rsp_fwd_progress  : 1;	/* 25:25 */
        uint64_t lb_pi0_rg_fwd_progress   : 1;	/* 26:26 */
        uint64_t lb_pi1_rg_fwd_progress   : 1;	/* 27:27 */
        uint64_t lb_pi2_rg_fwd_progress   : 1;	/* 28:28 */
        uint64_t lb_pi3_rg_fwd_progress   : 1;	/* 29:29 */
        uint64_t lb_nl_rg_fwd_progress    : 1;	/* 30:30 */
        uint64_t lb_jt_rg_fwd_progress    : 1;	/* 31:31 */
        uint64_t lb_cac_fwd_progress      : 1;	/* 32:32 */
        uint64_t lb_pi0_rsp_err           : 1;	/* 33:33 */
        uint64_t lb_pi1_rsp_err           : 1;	/* 34:34 */
        uint64_t lb_pi2_rsp_err           : 1;	/* 35:35 */
        uint64_t lb_pi3_rsp_err           : 1;	/* 36:36 */
        uint64_t lb_pi0_buf_perr          : 1;	/* 37:37 */
        uint64_t lb_pi1_buf_perr          : 1;	/* 38:38 */
        uint64_t lb_pi2_buf_perr          : 1;	/* 39:39 */
        uint64_t lb_pi3_buf_perr          : 1;	/* 40:40 */
        uint64_t lb_nl_req_sbe            : 1;	/* 41:41 */
        uint64_t lb_nl_req_mbe            : 1;	/* 42:42 */
        uint64_t lb_nl_req_parity         : 1;	/* 43:43 */
        uint64_t np_hss_irq               : 1;	/* 44:44 */
        uint64_t lb_jtag_req_fifo_perr    : 1;	/* 45:45 */
        uint64_t lb_jtag_rsp_fifo_perr    : 1;	/* 46:46 */
        uint64_t lb_rtr_row0_err          : 1;	/* 47:47 */
        uint64_t lb_rtr_row1_err          : 1;	/* 48:48 */
        uint64_t lb_rtr_row2_err          : 1;	/* 49:49 */
        uint64_t lb_rtr_row3_err          : 1;	/* 50:50 */
        uint64_t lb_rtr_row4_err          : 1;	/* 51:51 */
        uint64_t lb_rtr_row5_err          : 1;	/* 52:52 */
        uint64_t lb_force_hss_err         : 4;	/* 56:53 */
        uint64_t nl_hss_irq               : 1;	/* 57:57 */
        uint64_t nic_hss_irq              : 4;	/* 61:58 */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_pi3_err_os_msk_desc_t;

typedef union ar_lb_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t lb_err_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nl_rsp_val            : 1;	/* 1:1 */
        uint64_t lb_nl_rsp_oflow          : 1;	/* 2:2 */
        uint64_t lb_nl_bad_pkt            : 1;	/* 3:3 */
        uint64_t lb_jtag_rsp_buf_oflow    : 1;	/* 4:4 */
        uint64_t lb_jtag_req_buf_oflow    : 1;	/* 5:5 */
        uint64_t lb_jtag_rsp_buf_uflow    : 1;	/* 6:6 */
        uint64_t lb_jtag_req_buf_uflow    : 1;	/* 7:7 */
        uint64_t lb_pi0_req_buf_oflow     : 1;	/* 8:8 */
        uint64_t lb_pi1_req_buf_oflow     : 1;	/* 9:9 */
        uint64_t lb_pi2_req_buf_oflow     : 1;	/* 10:10 */
        uint64_t lb_pi3_req_buf_oflow     : 1;	/* 11:11 */
        uint64_t lb_pi0_req_buf_uflow     : 1;	/* 12:12 */
        uint64_t lb_pi1_req_buf_uflow     : 1;	/* 13:13 */
        uint64_t lb_pi2_req_buf_uflow     : 1;	/* 14:14 */
        uint64_t lb_pi3_req_buf_uflow     : 1;	/* 15:15 */
        uint64_t lb_jtag_notail           : 1;	/* 16:16 */
        uint64_t lb_jtag_pretail          : 1;	/* 17:17 */
        uint64_t lb_nl0_req_fwd_progress  : 1;	/* 18:18 */
        uint64_t lb_nl0_rsp_fwd_progress  : 1;	/* 19:19 */
        uint64_t lb_nl1_req_fwd_progress  : 1;	/* 20:20 */
        uint64_t lb_nl1_rsp_fwd_progress  : 1;	/* 21:21 */
        uint64_t lb_nl2_req_fwd_progress  : 1;	/* 22:22 */
        uint64_t lb_nl2_rsp_fwd_progress  : 1;	/* 23:23 */
        uint64_t lb_nl3_req_fwd_progress  : 1;	/* 24:24 */
        uint64_t lb_nl3_rsp_fwd_progress  : 1;	/* 25:25 */
        uint64_t lb_pi0_rg_fwd_progress   : 1;	/* 26:26 */
        uint64_t lb_pi1_rg_fwd_progress   : 1;	/* 27:27 */
        uint64_t lb_pi2_rg_fwd_progress   : 1;	/* 28:28 */
        uint64_t lb_pi3_rg_fwd_progress   : 1;	/* 29:29 */
        uint64_t lb_nl_rg_fwd_progress    : 1;	/* 30:30 */
        uint64_t lb_jt_rg_fwd_progress    : 1;	/* 31:31 */
        uint64_t lb_cac_fwd_progress      : 1;	/* 32:32 */
        uint64_t lb_pi0_rsp_err           : 1;	/* 33:33 */
        uint64_t lb_pi1_rsp_err           : 1;	/* 34:34 */
        uint64_t lb_pi2_rsp_err           : 1;	/* 35:35 */
        uint64_t lb_pi3_rsp_err           : 1;	/* 36:36 */
        uint64_t lb_pi0_buf_perr          : 1;	/* 37:37 */
        uint64_t lb_pi1_buf_perr          : 1;	/* 38:38 */
        uint64_t lb_pi2_buf_perr          : 1;	/* 39:39 */
        uint64_t lb_pi3_buf_perr          : 1;	/* 40:40 */
        uint64_t lb_nl_req_sbe            : 1;	/* 41:41 */
        uint64_t lb_nl_req_mbe            : 1;	/* 42:42 */
        uint64_t lb_nl_req_parity         : 1;	/* 43:43 */
        uint64_t np_hss_irq               : 1;	/* 44:44 */
        uint64_t lb_jtag_req_fifo_perr    : 1;	/* 45:45 */
        uint64_t lb_jtag_rsp_fifo_perr    : 1;	/* 46:46 */
        uint64_t lb_rtr_row0_err          : 1;	/* 47:47 */
        uint64_t lb_rtr_row1_err          : 1;	/* 48:48 */
        uint64_t lb_rtr_row2_err          : 1;	/* 49:49 */
        uint64_t lb_rtr_row3_err          : 1;	/* 50:50 */
        uint64_t lb_rtr_row4_err          : 1;	/* 51:51 */
        uint64_t lb_rtr_row5_err          : 1;	/* 52:52 */
        uint64_t lb_force_hss_err         : 4;	/* 56:53 */
        uint64_t nl_hss_irq               : 1;	/* 57:57 */
        uint64_t nic_hss_irq              : 4;	/* 61:58 */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_err_hss_msk_desc_t;

typedef union ar_lb_hss_err_first_flg_desc {
    struct {
        // QW0
        uint64_t lb_err_diag_only         : 1;	/* 0:0 */
        uint64_t lb_nl_rsp_val            : 1;	/* 1:1 */
        uint64_t lb_nl_rsp_oflow          : 1;	/* 2:2 */
        uint64_t lb_nl_bad_pkt            : 1;	/* 3:3 */
        uint64_t lb_jtag_rsp_buf_oflow    : 1;	/* 4:4 */
        uint64_t lb_jtag_req_buf_oflow    : 1;	/* 5:5 */
        uint64_t lb_jtag_rsp_buf_uflow    : 1;	/* 6:6 */
        uint64_t lb_jtag_req_buf_uflow    : 1;	/* 7:7 */
        uint64_t lb_pi0_req_buf_oflow     : 1;	/* 8:8 */
        uint64_t lb_pi1_req_buf_oflow     : 1;	/* 9:9 */
        uint64_t lb_pi2_req_buf_oflow     : 1;	/* 10:10 */
        uint64_t lb_pi3_req_buf_oflow     : 1;	/* 11:11 */
        uint64_t lb_pi0_req_buf_uflow     : 1;	/* 12:12 */
        uint64_t lb_pi1_req_buf_uflow     : 1;	/* 13:13 */
        uint64_t lb_pi2_req_buf_uflow     : 1;	/* 14:14 */
        uint64_t lb_pi3_req_buf_uflow     : 1;	/* 15:15 */
        uint64_t lb_jtag_notail           : 1;	/* 16:16 */
        uint64_t lb_jtag_pretail          : 1;	/* 17:17 */
        uint64_t lb_nl0_req_fwd_progress  : 1;	/* 18:18 */
        uint64_t lb_nl0_rsp_fwd_progress  : 1;	/* 19:19 */
        uint64_t lb_nl1_req_fwd_progress  : 1;	/* 20:20 */
        uint64_t lb_nl1_rsp_fwd_progress  : 1;	/* 21:21 */
        uint64_t lb_nl2_req_fwd_progress  : 1;	/* 22:22 */
        uint64_t lb_nl2_rsp_fwd_progress  : 1;	/* 23:23 */
        uint64_t lb_nl3_req_fwd_progress  : 1;	/* 24:24 */
        uint64_t lb_nl3_rsp_fwd_progress  : 1;	/* 25:25 */
        uint64_t lb_pi0_rg_fwd_progress   : 1;	/* 26:26 */
        uint64_t lb_pi1_rg_fwd_progress   : 1;	/* 27:27 */
        uint64_t lb_pi2_rg_fwd_progress   : 1;	/* 28:28 */
        uint64_t lb_pi3_rg_fwd_progress   : 1;	/* 29:29 */
        uint64_t lb_nl_rg_fwd_progress    : 1;	/* 30:30 */
        uint64_t lb_jt_rg_fwd_progress    : 1;	/* 31:31 */
        uint64_t lb_cac_fwd_progress      : 1;	/* 32:32 */
        uint64_t lb_pi0_rsp_err           : 1;	/* 33:33 */
        uint64_t lb_pi1_rsp_err           : 1;	/* 34:34 */
        uint64_t lb_pi2_rsp_err           : 1;	/* 35:35 */
        uint64_t lb_pi3_rsp_err           : 1;	/* 36:36 */
        uint64_t lb_pi0_buf_perr          : 1;	/* 37:37 */
        uint64_t lb_pi1_buf_perr          : 1;	/* 38:38 */
        uint64_t lb_pi2_buf_perr          : 1;	/* 39:39 */
        uint64_t lb_pi3_buf_perr          : 1;	/* 40:40 */
        uint64_t lb_nl_req_sbe            : 1;	/* 41:41 */
        uint64_t lb_nl_req_mbe            : 1;	/* 42:42 */
        uint64_t lb_nl_req_parity         : 1;	/* 43:43 */
        uint64_t np_hss_irq               : 1;	/* 44:44 */
        uint64_t lb_jtag_req_fifo_perr    : 1;	/* 45:45 */
        uint64_t lb_jtag_rsp_fifo_perr    : 1;	/* 46:46 */
        uint64_t lb_rtr_row0_err          : 1;	/* 47:47 */
        uint64_t lb_rtr_row1_err          : 1;	/* 48:48 */
        uint64_t lb_rtr_row2_err          : 1;	/* 49:49 */
        uint64_t lb_rtr_row3_err          : 1;	/* 50:50 */
        uint64_t lb_rtr_row4_err          : 1;	/* 51:51 */
        uint64_t lb_rtr_row5_err          : 1;	/* 52:52 */
        uint64_t lb_force_hss_err         : 4;	/* 56:53 */
        uint64_t nl_hss_irq               : 1;	/* 57:57 */
        uint64_t nic_hss_irq              : 4;	/* 61:58 */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_hss_err_first_flg_desc_t;

typedef union ar_lb_dbg_creat0_desc {
    struct {
        // QW0
        uint64_t lb_cap_parity0           : 1;	/* Parity for use on first flit of command field in manual mode On a response, the parity bit of the header is written into this field */
        uint64_t lb_cap_parity1           : 1;	/* Parity for use on second flit of command field in manual mode On a response, the parity bit of the header is written into this field */
        uint64_t lb_cap_parity2           : 1;	/* Parity for use on third flit of command field in manual mode */
        uint64_t lb_cap_parity3           : 1;	/* Parity for use on fourth flit of command field in manual mode */
        uint64_t lb_cap_auto_ecc          : 1;	/* If 1, generate data ECC from actual data; if 0, use manual fields for ECC from A_LB_DBG_CREAT3 */
        uint64_t lb_cap_auto_parity       : 1;	/* If 1, generate parity from data; if 0, use manual fields for command packet parity */
        uint64_t lb_cap_rsp_correct       : 1;	/* If 1, correct the data using the checkbits and capture the corrected data and syndrome bits */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t lb_cap_length            : 3;	/* Packet Length */
        uint64_t undefine_14_11           : 4;	/* undefined */
        uint64_t lb_cap_perr              : 1;	/* A parity error was detected on the response packet in the header flit on a response */
        uint64_t lb_cap_ecc0_sbe          : 1;	/* A single bit ECC error was detected in the data0 field of a data flit on a response */
        uint64_t lb_cap_ecc1_sbe          : 1;	/* A single bit ECC error was detected in the data1 field of a data flit on a response */
        uint64_t lb_cap_ecc0_mbe          : 1;	/* A multiple bit ECC error was detected in the data0 field of a data flit */
        uint64_t lb_cap_ecc1_mbe          : 1;	/* A multiple bit ECC error was detected in the data1 field of a data flit */
        uint64_t lb_cap_data_err0         : 2;	/* This contains the data flit number of the packet that contains the first MBE, or if no MBE, the first SBE, in the data0 (lower half) of the flit */
        uint64_t lb_cap_data_err1         : 2;	/* This contains the data flit number of the packet that contains the first MBE, or if no MBE, the first SBE, in the data1 (upper half) of the flit */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t lb_cap_synd0             : 8;	/* This field contains the syndrome for any errors detected in the data0 field on a response */
        uint64_t lb_cap_synd1             : 8;	/* This field contains the syndrome for any errors detected in the data1 field on a response */
        uint64_t undefine_60_48           :13;	/* undefined */
        uint64_t lb_cap_rsp_err           : 1;	/* Create a Packet response packet error */
        uint64_t lb_cap_start             : 1;	/* Create a Packet request start */
        uint64_t lb_cap_rsp_complete      : 1;	/* Response Complete indication */
    };
    uint64_t qwords[1];
} ar_lb_dbg_creat0_desc_t;

typedef union ar_lb_dbg_creat1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t lb_cap_dstid             : 2;	/* Destination ID */
                uint64_t lb_cap_addr              :38;	/* Address[39:2] */
                uint64_t lb_cap_cnt_bm            : 4;	/* Count/Byte Mask field */
                uint64_t lb_cap_pktsrc_dbg_nl     : 2;	/* Packet Source Debug NL */
                uint64_t lb_cap_ssid              : 9;	/* SSID */
                uint64_t lb_cap_reqcmd            : 9;	/* Request Command */
            };
            struct {
                uint64_t undefine_q0_f1_45_0      :46;	/* undefined */
                uint64_t lb_cap_lstatus1          : 6;	/* Response LSTATUS */
                uint64_t undefine_q0_f1_54_52     : 3;	/* undefined */
                uint64_t lb_cap_rspcmd1           : 3;	/* Response Command */
                uint64_t lb_cap_rstatus           : 6;	/* Response RSTATUS */
            };
        };
    };
    uint64_t qwords[1];
} ar_lb_dbg_creat1_desc_t;

typedef union ar_lb_dbg_creat2_desc {
    struct {
        // QW0
        uint64_t lb_cap_dst               :16;	/* Destination ID */
        uint64_t lb_cap_pkey              :16;	/* Packet Key */
        uint64_t lb_cap_pktid             :12;	/* Packet ID */
        uint64_t lb_cap_portid            : 3;	/* Port ID */
        uint64_t lb_cap_lb                : 1;	/* Local Block Bit */
        uint64_t lb_cap_mdh               :12;	/* Memory Domain Handle */
        uint64_t lb_cap_rc                : 3;	/* Routing Control */
        uint64_t lb_cap_uv                : 1;	/* Upper data Valid */
    };
    uint64_t qwords[1];
} ar_lb_dbg_creat2_desc_t;

typedef union ar_lb_dbg_creat3_desc {
    struct {
        // QW0
        uint64_t lb_cap_ecc0              : 8;	/* ECC 0 for data flit 0 */
        uint64_t lb_cap_ecc1              : 8;	/* ECC 1 for data flit 0 */
        uint64_t lb_cap_ecc2              : 8;	/* ECC 0 for data flit 1 */
        uint64_t lb_cap_ecc3              : 8;	/* ECC 1 for data flit 1 */
        uint64_t lb_cap_ecc4              : 8;	/* ECC 0 for data flit 2 */
        uint64_t lb_cap_ecc5              : 8;	/* ECC 1 for data flit 2 */
        uint64_t lb_cap_ecc6              : 8;	/* ECC 0 for data flit 3 */
        uint64_t lb_cap_ecc7              : 8;	/* ECC 1 for data flit 3 */
    };
    uint64_t qwords[1];
} ar_lb_dbg_creat3_desc_t;

typedef union ar_lb_dbg_creat_data_desc {
    struct {
        // QW0
        uint64_t lb_cap_data              ;	/* Data field for Create-a-packet */
    };
    uint64_t qwords[1];
} ar_lb_dbg_creat_data_desc_t;

typedef union ar_lb_nl_err_desc {
    struct {
        // QW0
        uint64_t nl_synd                  : 8;	/* Syndrome for the lower word of the NL request */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_lb_nl_err_desc_t;

typedef union ar_lb_cfg_scratch_desc {
    struct {
        // QW0
        uint64_t lb_gp_reg                ;	/* General Purpose Scratch Register */
    };
    uint64_t qwords[1];
} ar_lb_cfg_scratch_desc_t;


#endif
