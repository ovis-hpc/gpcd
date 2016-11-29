/******************************************************************************
 * COPYRIGHT CRAY INC. ar_npt_structs.h
 * FILE: ar_npt_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:01 2014
 ******************************************************************************/

#ifndef _AR_NPT_STRUCTS_H_
#define _AR_NPT_STRUCTS_H_

/*
 *  ARIES NPT STRUCTURES
 */
typedef union ar_nic_npt_cfg_params_desc {
    struct {
        // QW0
        uint64_t entry_timeout_period     :32;	/* Number of clock cycles to periodically take a snapshot of the valid entries and scrub the NPT of stale entries */
        uint64_t timeout_enable           : 1;	/* Enable timeout mechanism */
        uint64_t sf_cq                    : 1;	/* Set to enable store-and-forward on CQ request FIFO */
        uint64_t sf_rmt                   : 1;	/* Set to enable store-and-forward on request RMT FIFO */
        uint64_t sf_p                     : 1;	/* Enable store-and-forward for posted response FIFO */
        uint64_t sf_ce                    : 1;	/* Enable store-and-forward for CE response FIFO */
        uint64_t all_integrity_errs       : 1;	/* Set this to have the NPT report all response packet integrity errors, even for responses destined for other blocks */
        uint64_t undefine_63_38           :26;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_cfg_params_desc_t;

typedef union ar_nic_npt_cfg_crdts_desc {
    struct {
        // QW0
        uint64_t nl_crdts_max             : 8;	/* Netlink response queue credits */
        uint64_t amo_crdts_max            : 8;	/* AMO request queue credits */
        uint64_t p_crdts_max              : 8;	/* Posted response queue credits */
        uint64_t max_pkt_size             : 4;	/* Max packet size to guarantee a full packet will fit in the NL/AMO before sending it */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_cfg_crdts_desc_t;

typedef union ar_nic_npt_cfg_avail_tags_desc {
    struct {
        // QW0
        uint64_t en                       ;	/* Enable for each tag */
    };
    uint64_t qwords[1];
} ar_nic_npt_cfg_avail_tags_desc_t;

typedef union ar_nic_npt_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic */
        uint64_t cq_oflw                  : 1;	/* CQ FIFO Overflow */
        uint64_t rmt_oflw                 : 1;	/* RMT FIFO Overflow */
        uint64_t np_hdr_oflw              : 1;	/* Non-Posted Header FIFO Overflow */
        uint64_t np_payld_oflw            : 1;	/* Non-Posted Payload FIFO Overflow */
        uint64_t p_oflw                   : 1;	/* Posted FIFO Overflow */
        uint64_t ce_oflw                  : 1;	/* CE FIFO Overflow */
        uint64_t cq_uflw                  : 1;	/* CQ FIFO Underflow */
        uint64_t rmt_uflw                 : 1;	/* RMT FIFO Underflow */
        uint64_t np_hdr_uflw              : 1;	/* Non-Posted Header FIFO Underflow */
        uint64_t np_payld_uflw            : 1;	/* Non-Posted Payload FIFO Underflow */
        uint64_t p_uflw                   : 1;	/* Posted FIFO Underflow */
        uint64_t ce_uflw                  : 1;	/* CE FIFO Underflow */
        uint64_t npt_ram_mbe              : 1;	/* An MBE reading the NPT entry */
        uint64_t npt_ram_sbe              : 1;	/* An SBE reading the NPT entry */
        uint64_t timeout                  : 1;	/* One or more stale entries were timed out */
        uint64_t unsolicited_rsp          : 1;	/* The incoming response targeted an invalid NPT entry */
        uint64_t cmd_mismatch             : 1;	/* The incoming response had an unexpected resposne command */
        uint64_t req_flit_pe              : 1;	/* A parity error was detected in the request flit header */
        uint64_t rsp_flit_pe              : 1;	/* A parity error was detected in the response flit header */
        uint64_t rsp_flit_sbe             : 1;	/* An SBE was detected in the response payload flit */
        uint64_t rsp_flit_mbe             : 1;	/* An MBE was detected in the response payload flit */
        uint64_t cw_drop                  : 1;	/* The completion wait flush response was dropped because the rstatus field indicated an error (see related error info) */
        uint64_t nl_crdt_unflw            : 1;	/* A credit was returned from the NL, but the credit counter was already zero */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_flg_desc_t;

typedef union ar_nic_npt_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic */
        uint64_t cq_oflw                  : 1;	/* CQ FIFO Overflow */
        uint64_t rmt_oflw                 : 1;	/* RMT FIFO Overflow */
        uint64_t np_hdr_oflw              : 1;	/* Non-Posted Header FIFO Overflow */
        uint64_t np_payld_oflw            : 1;	/* Non-Posted Payload FIFO Overflow */
        uint64_t p_oflw                   : 1;	/* Posted FIFO Overflow */
        uint64_t ce_oflw                  : 1;	/* CE FIFO Overflow */
        uint64_t cq_uflw                  : 1;	/* CQ FIFO Underflow */
        uint64_t rmt_uflw                 : 1;	/* RMT FIFO Underflow */
        uint64_t np_hdr_uflw              : 1;	/* Non-Posted Header FIFO Underflow */
        uint64_t np_payld_uflw            : 1;	/* Non-Posted Payload FIFO Underflow */
        uint64_t p_uflw                   : 1;	/* Posted FIFO Underflow */
        uint64_t ce_uflw                  : 1;	/* CE FIFO Underflow */
        uint64_t npt_ram_mbe              : 1;	/* An MBE reading the NPT entry */
        uint64_t npt_ram_sbe              : 1;	/* An SBE reading the NPT entry */
        uint64_t timeout                  : 1;	/* One or more stale entries were timed out */
        uint64_t unsolicited_rsp          : 1;	/* The incoming response targeted an invalid NPT entry */
        uint64_t cmd_mismatch             : 1;	/* The incoming response had an unexpected resposne command */
        uint64_t req_flit_pe              : 1;	/* A parity error was detected in the request flit header */
        uint64_t rsp_flit_pe              : 1;	/* A parity error was detected in the response flit header */
        uint64_t rsp_flit_sbe             : 1;	/* An SBE was detected in the response payload flit */
        uint64_t rsp_flit_mbe             : 1;	/* An MBE was detected in the response payload flit */
        uint64_t cw_drop                  : 1;	/* The completion wait flush response was dropped because the rstatus field indicated an error (see related error info) */
        uint64_t nl_crdt_unflw            : 1;	/* A credit was returned from the NL, but the credit counter was already zero */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_clr_desc_t;

typedef union ar_nic_npt_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t cq_oflw                  : 1;	/* 1:1 */
        uint64_t rmt_oflw                 : 1;	/* 2:2 */
        uint64_t np_hdr_oflw              : 1;	/* 3:3 */
        uint64_t np_payld_oflw            : 1;	/* 4:4 */
        uint64_t p_oflw                   : 1;	/* 5:5 */
        uint64_t ce_oflw                  : 1;	/* 6:6 */
        uint64_t cq_uflw                  : 1;	/* 7:7 */
        uint64_t rmt_uflw                 : 1;	/* 8:8 */
        uint64_t np_hdr_uflw              : 1;	/* 9:9 */
        uint64_t np_payld_uflw            : 1;	/* 10:10 */
        uint64_t p_uflw                   : 1;	/* 11:11 */
        uint64_t ce_uflw                  : 1;	/* 12:12 */
        uint64_t npt_ram_mbe              : 1;	/* 13:13 */
        uint64_t npt_ram_sbe              : 1;	/* 14:14 */
        uint64_t timeout                  : 1;	/* 15:15 */
        uint64_t unsolicited_rsp          : 1;	/* 16:16 */
        uint64_t cmd_mismatch             : 1;	/* 17:17 */
        uint64_t req_flit_pe              : 1;	/* 18:18 */
        uint64_t rsp_flit_pe              : 1;	/* 19:19 */
        uint64_t rsp_flit_sbe             : 1;	/* 20:20 */
        uint64_t rsp_flit_mbe             : 1;	/* 21:21 */
        uint64_t cw_drop                  : 1;	/* 22:22 */
        uint64_t nl_crdt_unflw            : 1;	/* 23:23 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_hss_msk_desc_t;

typedef union ar_nic_npt_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t cq_oflw                  : 1;	/* 1:1 */
        uint64_t rmt_oflw                 : 1;	/* 2:2 */
        uint64_t np_hdr_oflw              : 1;	/* 3:3 */
        uint64_t np_payld_oflw            : 1;	/* 4:4 */
        uint64_t p_oflw                   : 1;	/* 5:5 */
        uint64_t ce_oflw                  : 1;	/* 6:6 */
        uint64_t cq_uflw                  : 1;	/* 7:7 */
        uint64_t rmt_uflw                 : 1;	/* 8:8 */
        uint64_t np_hdr_uflw              : 1;	/* 9:9 */
        uint64_t np_payld_uflw            : 1;	/* 10:10 */
        uint64_t p_uflw                   : 1;	/* 11:11 */
        uint64_t ce_uflw                  : 1;	/* 12:12 */
        uint64_t npt_ram_mbe              : 1;	/* 13:13 */
        uint64_t npt_ram_sbe              : 1;	/* 14:14 */
        uint64_t timeout                  : 1;	/* 15:15 */
        uint64_t unsolicited_rsp          : 1;	/* 16:16 */
        uint64_t cmd_mismatch             : 1;	/* 17:17 */
        uint64_t req_flit_pe              : 1;	/* 18:18 */
        uint64_t rsp_flit_pe              : 1;	/* 19:19 */
        uint64_t rsp_flit_sbe             : 1;	/* 20:20 */
        uint64_t rsp_flit_mbe             : 1;	/* 21:21 */
        uint64_t cw_drop                  : 1;	/* 22:22 */
        uint64_t nl_crdt_unflw            : 1;	/* 23:23 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_os_msk_desc_t;

typedef union ar_nic_npt_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t cq_oflw                  : 1;	/* 1:1 */
        uint64_t rmt_oflw                 : 1;	/* 2:2 */
        uint64_t np_hdr_oflw              : 1;	/* 3:3 */
        uint64_t np_payld_oflw            : 1;	/* 4:4 */
        uint64_t p_oflw                   : 1;	/* 5:5 */
        uint64_t ce_oflw                  : 1;	/* 6:6 */
        uint64_t cq_uflw                  : 1;	/* 7:7 */
        uint64_t rmt_uflw                 : 1;	/* 8:8 */
        uint64_t np_hdr_uflw              : 1;	/* 9:9 */
        uint64_t np_payld_uflw            : 1;	/* 10:10 */
        uint64_t p_uflw                   : 1;	/* 11:11 */
        uint64_t ce_uflw                  : 1;	/* 12:12 */
        uint64_t npt_ram_mbe              : 1;	/* 13:13 */
        uint64_t npt_ram_sbe              : 1;	/* 14:14 */
        uint64_t timeout                  : 1;	/* 15:15 */
        uint64_t unsolicited_rsp          : 1;	/* 16:16 */
        uint64_t cmd_mismatch             : 1;	/* 17:17 */
        uint64_t req_flit_pe              : 1;	/* 18:18 */
        uint64_t rsp_flit_pe              : 1;	/* 19:19 */
        uint64_t rsp_flit_sbe             : 1;	/* 20:20 */
        uint64_t rsp_flit_mbe             : 1;	/* 21:21 */
        uint64_t cw_drop                  : 1;	/* 22:22 */
        uint64_t nl_crdt_unflw            : 1;	/* 23:23 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_first_flg_desc_t;

typedef union ar_nic_npt_err_info_ram_desc {
    struct {
        // QW0
        uint64_t sbe_syndrome             : 7;	/* SBE syndrome */
        uint64_t sbe_address              : 6;	/* SBE Address */
        uint64_t mbe_syndrome             : 7;	/* MBE syndrome */
        uint64_t mbe_address              : 6;	/* MBE Address */
        uint64_t undefine_63_26           :38;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_info_ram_desc_t;

typedef union ar_nic_npt_err_info_timeout_desc {
    struct {
        // QW0
        uint64_t entries                  ;	/* A vector indicating which entries timed out (a 1 in a given bit position indicates that entry timed out) */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_info_timeout_desc_t;

typedef union ar_nic_npt_err_info_unsolicited_rsp_desc {
    struct {
        // QW0
        uint64_t request_tag              : 6;	/* Request tag of the unsolicited response */
        uint64_t undefine_63_6            :58;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_info_unsolicited_rsp_desc_t;

typedef union ar_nic_npt_err_info_cmd_mismatch_desc {
    struct {
        // QW0
        uint64_t request_tag              : 6;	/* Request tag of the response */
        uint64_t rcv_cmd                  : 3;	/* Response command of the response */
        uint64_t type                     : 1;	/* 0=Network Resposne 1=Completion Wait Flush Response (always expects PutResp) */
        uint64_t exp_net_cmd              : 3;	/* Expected response command (if TYPE=NET) */
        uint64_t undefine_63_13           :51;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_info_cmd_mismatch_desc_t;

typedef union ar_nic_npt_err_info_cw_drop_desc {
    struct {
        // QW0
        uint64_t rstatus                  : 6;	/* RSTATUS field of response */
        uint64_t undefine_63_6            :58;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_err_info_cw_drop_desc_t;

typedef union ar_nic_npt_dbg_errinj_ram_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t checkbyte                : 7;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted */
        uint64_t undefine_31_23           : 9;	/* undefined */
        uint64_t address                  : 6;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_38           :26;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_dbg_errinj_ram_desc_t;

typedef union ar_nic_npt_dbg_errinj_rsp_bus_desc {
    struct {
        // QW0
        uint64_t en                       : 4;	/* Enable the error injection per interface: [0]: NPT [1]: BTE [2]: IOMMU [3]: PARB */
        uint64_t count                    : 3;	/* Indicates which flit of a packet to inject the error */
        uint64_t mode                     : 1;	/* 0: Inject error on one packet (on each enabled interface) 1: Inject error on every packet (on each enabled interface) */
        uint64_t ecc0                     : 8;	/* When an error is injected on a payload flit, this field indicates which bits of lower check bits should be inverted */
        uint64_t ecc1                     : 8;	/* When an error is injected on a payload flit, this field indicates which bits of upper check bits should be inverted */
        uint64_t parity                   : 4;	/* When an error is injected on a header flit, this field indicates which parity bits should be inverted */
        uint64_t tail                     : 1;	/* When an error is injected, this field indicates whether the tail bit should be inverted */
        uint64_t triggered_0              : 1;	/* Error has been injected on NPT bus */
        uint64_t triggered_1              : 1;	/* Error has been injected on BTE bus */
        uint64_t triggered_2              : 1;	/* Error has been injected on IOMMU bus */
        uint64_t triggered_3              : 1;	/* Error has been injected on PARB bus */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_dbg_errinj_rsp_bus_desc_t;

typedef union ar_nic_npt_dbg_crdts_desc {
    struct {
        // QW0
        uint64_t p_crdts                  : 8;	/* The number of credits currently in use on the Posted interface (internal credit exchange) */
        uint64_t amo_crdts                : 8;	/* The number of credits currently in use on the AMO interface */
        uint64_t nl_crdts                 : 8;	/* The number of credits currently in use on the NL interface */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_dbg_crdts_desc_t;

typedef union ar_nic_npt_sts_comp_wait_desc {
    struct {
        // QW0
        uint64_t reset                    : 1;	/* Write a 1 to this bit to reset the state machine to IDLE */
        uint64_t state                    : 2;	/*  */
        uint64_t undefine_63_3            :61;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_sts_comp_wait_desc_t;

typedef union ar_nic_npt_prf_en_desc {
    struct {
        // QW0
        uint64_t prf_full_en              : 1;	/* Enable A_NIC_NPT_PRF_FULL_DURATION */
        uint64_t prf_stall_en             : 1;	/* Enable A_NIC_NPT_PRF_NL_STALL_DURATION */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_prf_en_desc_t;

typedef union ar_nic_npt_prf_full_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* The maximum duration in clock cycles */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_prf_full_duration_desc_t;

typedef union ar_nic_npt_prf_nl_stall_duration_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* The maximum duration in clock cycles */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_npt_prf_nl_stall_duration_desc_t;


#endif
