/******************************************************************************
 * COPYRIGHT CRAY INC. ar_ssid_structs.h
 * FILE: ar_ssid_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_SSID_STRUCTS_H_
#define _AR_SSID_STRUCTS_H_

/*
 *  ARIES SSID STRUCTURES
 */
typedef union ar_nic_ssid_cfg_crdts_desc {
    struct {
        // QW0
        uint64_t ssid_to_orb              : 5;	/* Maximum number of outstanding credits allowed at the SSID to ORB interface */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t ssid_to_cq               : 5;	/* Maximum number of outstanding credits allowed at the SSID to CQ interface */
        uint64_t undefine_15_13           : 3;	/* undefined */
        uint64_t ssid_to_wc               : 5;	/* Maximum number of outstanding credits allowed at the SSID to WC Flush Request interface */
        uint64_t undefine_23_21           : 3;	/* undefined */
        uint64_t max_pkt_size             : 5;	/* Maximum packet size, in flits, at the SSID to ORB request interface */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_cfg_crdts_desc_t;

typedef union ar_nic_ssid_cfg_sts_scrubber_desc {
    struct {
        // QW0
        uint64_t scrubber_disable         : 1;	/* Disable stale SSID detection */
        uint64_t undefine_7_1             : 7;	/* undefined */
        uint64_t epoch_cfg                : 5;	/* This field controls the rate at which the SSID Scrubber Epoch counter increments */
        uint64_t undefine_15_13           : 3;	/* undefined */
        uint64_t current_epoch            : 3;	/* The current value of the SSID Scrubber Epoch counter */
        uint64_t undefine_31_19           :13;	/* undefined */
        uint64_t next_ssid                : 9;	/* The ID of the next ssid entry that will be checked to see if it is stale */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_cfg_sts_scrubber_desc_t;

typedef union ar_nic_ssid_cfg_reqrsp_dly_limit_desc {
    struct {
        // QW0
        uint64_t delay_limit              :16;	/* Maximum delay for the response to the first request If the number of network response packets that are configured in this MMR have been received for a transaction, and the response to the first request packet sent in the transaction has not yet been received, the rmt bit of subsequently sent request packets is cleared subject to the configuration of the LF_DSMN_RMT_SQUELCH and LF_SEND_RMT_SQUELCH bits in the A_NIC_SSID_CFG_PROTOCOL MMR */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_cfg_reqrsp_dly_limit_desc_t;

typedef union ar_nic_ssid_cfg_protocol_desc {
    struct {
        // QW0
        uint64_t redundant_dsmn_protect   : 1;	/* Block MsgRcvComplete packet when there is a risk of redundant destination completion notification */
        uint64_t msc_squelch              : 1;	/* Delete unnecessary MsgSendComplete packets */
        uint64_t bsc_squelch              : 1;	/* Delete unnecessary BTE_SendComplete packets */
        uint64_t bte_send_squelch         : 1;	/* Delete unnecessary BTE_Send packets */
        uint64_t invalid_msc_squelch      : 1;	/* Delete invalid MsgSendComplete packets */
        uint64_t invalid_bsc_squelch      : 1;	/* Delete invalid BTE_SendComplete requests */
        uint64_t lf_dsmn_rmt_squelch      : 1;	/* Squelch RMT usage if response to first DSMN packet arrives too late */
        uint64_t lf_send_rmt_squelch      : 1;	/* Squelch RMT usage if response to first BTE_Send packet arrives too late */
        uint64_t dsmn_rmt_squelch         : 1;	/* Squelch RMT usage for DSMN transactions */
        uint64_t undefine_63_9            :55;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_cfg_protocol_desc_t;

typedef union ar_nic_ssid_cfg_sup_fma_errd_rsp1_desc {
    struct {
        // QW0
        uint64_t fma_desc                 ;	/* When a bit is set to 1, responses are suppressed for FMA descriptor n when an errored response has been received */
    };
    uint64_t qwords[1];
} ar_nic_ssid_cfg_sup_fma_errd_rsp1_desc_t;

typedef union ar_nic_ssid_cfg_sup_fma_errd_rsp2_desc {
    struct {
        // QW0
        uint64_t fma_desc                 ;	/* When a bit is set to 1, responses are suppressed for FMA descriptor n when an errored response has been received */
    };
    uint64_t qwords[1];
} ar_nic_ssid_cfg_sup_fma_errd_rsp2_desc_t;

typedef union ar_nic_ssid_cfg_sup_bte_errd_rsp_desc {
    struct {
        // QW0
        uint64_t bte_ch                   : 4;	/* When a bit is set to 1, responses are suppressed for BTE channel n when an errored response has been received */
        uint64_t undefine_63_4            :60;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_cfg_sup_bte_errd_rsp_desc_t;

typedef union ar_nic_ssid_cfg_unreachable_ep_desc {
    struct {
        // QW0
        uint64_t fma_en                   : 1;	/* When set to 1, enables unreachable endpoint detection for transactions issued using FMA */
        uint64_t bte_en                   : 1;	/* When set to 1, enables unreachable endpoint detection for transactions issued using the BTE */
        uint64_t ce_en                    : 1;	/* When set to 1, enables unreachable endpoint detection for transactions issued by the CE */
        uint64_t undefine_15_3            :13;	/* undefined */
        uint64_t lost_rsp_limit           :16;	/* The number of responses that must all be lost before the corresponding transaction is declared to have failed due to unreachable endpoint(s) */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_cfg_unreachable_ep_desc_t;

typedef union ar_nic_ssid_cfg_event_cntr_filter_desc {
    struct {
        // QW0
        uint64_t all_chan_en              : 1;	/* When set to 1, counting is enabled for all FMA descriptors, BTE channels, and virtual CEs */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t initiator                : 2;	/* Selects whether counting is enabled for a FMA descriptor, a BTE channel, or a virtual CE */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t channel                  : 7;	/* The ID of the FMA descriptor, BTE channel, or virtual CE for which counting is enabled */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_cfg_event_cntr_filter_desc_t;

typedef union ar_nic_ssid_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Software controlled error flag */
        uint64_t lreq_err_hss             : 1;	/* A Local Request Error, for which HSS interrupts are enabled, has been detected */
        uint64_t rreq_err_hss             : 1;	/* A Remote Request Error, for which HSS interrupts are enabled, has been detected */
        uint64_t rsp_err_hss              : 1;	/* A local Response Error, for which HSS interrupts are enabled, has been detected */
        uint64_t lreq_err_os              : 1;	/* A Local Request Error, for which OS interrupts are enabled, has been detected */
        uint64_t rreq_err_os              : 1;	/* A Remote Request Error, for which OS interrupts are enabled, has been detected */
        uint64_t rsp_err_os               : 1;	/* A local Response Error, for which OS interrupts are enabled, has been detected */
        uint64_t sup_errd_ptag            : 1;	/* The PTAG associated with an error event could not be reported due to a hardware error */
        uint64_t sup_dst_cmpltn_event     : 1;	/* This error flag indicates that a hardware error has prevented a destination side completion event from being delivered */
        uint64_t sup_src_cmpltn_event     : 1;	/* This error flag indicates that a hardware error has prevented a source side completion event from being delivered */
        uint64_t stale_ssid               : 1;	/* This error flag indicates that a stale ssid entry has been detected */
        uint64_t seq_redundant_alloc      : 1;	/* Transaction sequence error; end of preceding transaction may be missing */
        uint64_t seq_missing_alloc        : 1;	/* Transaction sequence error; start of transaction missing */
        uint64_t seq_uncor_err            : 1;	/* Uncorrectable hardware error reported in request packet or detected in SSID channel state memory */
        uint64_t corrupt_req_head         : 1;	/* This bit is set when the SSID block receives a request packet with a corrupt head flit */
        uint64_t long_req_pkt             : 1;	/* A longer than expected request packet was received */
        uint64_t short_req_pkt            : 1;	/* A shorter than expected request packet was received */
        uint64_t corr_req_payld_err       : 1;	/* A correctable error was detected in a request packet payload flit */
        uint64_t uncorr_req_payld_err     : 1;	/* An uncorrectable error was detected in a request packet payload flit */
        uint64_t corrupt_rsp              : 1;	/* This bit is set when the SSID receives a corrupt response indication */
        uint64_t unexpctd_rsp             : 1;	/* The SSID received an unexpected response */
        uint64_t unexpctd_orb_crdt        : 1;	/* Unexpected flit credit received from ORB block */
        uint64_t unexpctd_cq_crdt         : 1;	/* Unexpected flit credit received from CQ block */
        uint64_t unexpctd_wc_flushreq_crdt: 1;	/* Unexpected Flush Request credit received from WC block */
        uint64_t corr_mem_err             : 1;	/* A corrected memory error has been detected */
        uint64_t uncorr_mem_err           : 1;	/* An uncorrectable memory error has been detected */
        uint64_t corrupt_chan_state       : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in reading an entry of the Channel State memory while processing a request packet */
        uint64_t corrupt_free_ssid        : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in a ssid value being read out of the Free SSID FIFO */
        uint64_t corrupt_pending_msgrcvcmplt: 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's Pending MsgRcvComplete FIFO */
        uint64_t corrupt_pending_rsp_cmd  : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's Pending Response Command FIFO */
        uint64_t corrupt_pending_stale_ssid: 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's Pending Stale SSID FIFO */
        uint64_t corrupt_flushrsp         : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's incoming flush response FIFO */
        uint64_t corrupt_bypassed_req     : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's bypassed request FIFO */
        uint64_t corrupt_pending_completion: 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's Pending Sequence Completion FIFO */
        uint64_t corrupt_cq_info          : 1;	/* This bit, when set, indicates that an uncorrectable SSID state memory error occurred when performing completion processing of a sequence for which all requests have already been sent and all responses have already been received */
        uint64_t corrupt_stale_ssid_detect_state: 1;	/* This bit, when set, indicates that an uncorrectable error occurred reading SSID state information associated with determining if the corresponding ssid entry is stale */
        uint64_t tarb_to_ssid_uflw        : 1;	/* This bit, when set, indicates that an attempt was made to read data from the TARB to SSID request flit FIFO while the FIFO was empty */
        uint64_t tarb_to_ssid_oflw        : 1;	/* This bit, when set, indicates that an attempt was made to write data into the TARB to SSID request flit FIFO while the FIFO was full */
        uint64_t wc_to_ssid_uflw          : 1;	/* This bit, when set, indicates that an attempt was made to read data from the WC to SSID response flit FIFO while the FIFO was empty */
        uint64_t wc_to_ssid_oflw          : 1;	/* This bit, when set, indicates that an attempt was made to write data into the WC to SSID response flit FIFO while the FIFO was full */
        uint64_t wc_to_ssid_flushrsp_uflw : 1;	/* This bit, when set, indicates that an attempt was made to read data from the WC to SSID Flush Response FIFO while the FIFO was empty */
        uint64_t wc_to_ssid_flushrsp_oflw : 1;	/* This bit, when set, indicates that an attempt was made to write data into the WC to SSID Flush Response FIFO while the FIFO was full */
        uint64_t free_ssid_uflw           : 1;	/* This bit, when set, indicates that an attempt was made to read data from the FreeSSID FIFO while the FIFO was empty */
        uint64_t free_ssid_oflw           : 1;	/* This bit, when set, indicates that an attempt was made to write data to the FreeSSID FIFO while the FIFO was full */
        uint64_t pending_mrc_uflw         : 1;	/* This bit, when set, indicates that an attempt was made to read data from the PendingMsgRcvCpl FIFO while the FIFO was empty */
        uint64_t pending_mrc_oflw         : 1;	/* This bit, when set, indicates that an attempt was made to write data to the PendingMsgRcvCpl FIFO while the FIFO was full */
        uint64_t pending_seqcmplt_uflw    : 1;	/* This bit, when set, indicates that an attempt was made to read data from the PendingSeqComplete FIFO while the FIFO was empty */
        uint64_t pending_seqcmplt_oflw    : 1;	/* This bit, when set, indicates that an attempt was made to write data to the PendingSeqComplete FIFO while the FIFO was full */
        uint64_t rsp_cmd_uflw             : 1;	/* This bit, when set, indicates that an attempt was made to read data from the RspCmd FIFO while the FIFO was empty */
        uint64_t rsp_cmd_oflw             : 1;	/* This bit, when set, indicates that an attempt was made to write data to the RspCmd FIFO while the FIFO was full */
        uint64_t stale_ssid_uflw          : 1;	/* This bit, when set, indicates that an attempt was made to read data from the Stale SSID FIFO while the FIFO was empty */
        uint64_t stale_ssid_oflw          : 1;	/* This bit, when set, indicates that an attempt was made to write data to the Stale SSID FIFO while the FIFO was full */
        uint64_t bypassed_req_uflw        : 1;	/* This bit, when set, indicates that an attempt was made to read data from the BypassedReq FIFO while the FIFO was empty */
        uint64_t bypassed_req_oflw        : 1;	/* This bit, when set, indicates that an attempt was made to write data to the BypassedReq FIFO while the FIFO was full */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_flg_desc_t;

typedef union ar_nic_ssid_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Software controlled error flag */
        uint64_t is                       : 1;	/*  */
        uint64_t lreq_err_hss             : 1;	/* A Local Request Error, for which HSS interrupts are enabled, has been detected */
        uint64_t rreq_err_hss             : 1;	/* A Remote Request Error, for which HSS interrupts are enabled, has been detected */
        uint64_t rsp_err_hss              : 1;	/* A local Response Error, for which HSS interrupts are enabled, has been detected */
        uint64_t lreq_err_os              : 1;	/* A Local Request Error, for which OS interrupts are enabled, has been detected */
        uint64_t rreq_err_os              : 1;	/* A Remote Request Error, for which OS interrupts are enabled, has been detected */
        uint64_t rsp_err_os               : 1;	/* A local Response Error, for which OS interrupts are enabled, has been detected */
        uint64_t sup_errd_ptag            : 1;	/* The PTAG associated with an error event could not be reported due to a hardware error */
        uint64_t sup_dst_cmpltn_event     : 1;	/* This error flag indicates that a hardware error has prevented a destination side completion event from being delivered */
        uint64_t sup_src_cmpltn_event     : 1;	/* This error flag indicates that a hardware error has prevented a source side completion event from being delivered */
        uint64_t stale_ssid               : 1;	/* This error flag indicates that a stale ssid entry has been detected */
        uint64_t seq_redundant_alloc      : 1;	/* Transaction sequence error; end of preceding transaction may be missing */
        uint64_t seq_missing_alloc        : 1;	/* Transaction sequence error; start of transaction missing */
        uint64_t seq_uncor_err            : 1;	/* Uncorrectable hardware error reported in request packet or detected in SSID channel state memory */
        uint64_t corrupt_req_head         : 1;	/* This bit is set when the SSID block receives a request packet with a corrupt head flit */
        uint64_t long_req_pkt             : 1;	/* A longer than expected request packet was received */
        uint64_t short_req_pkt            : 1;	/* A shorter than expected request packet was received */
        uint64_t corr_req_payld_err       : 1;	/* A correctable error was detected in a request packet payload flit */
        uint64_t uncorr_req_payld_err     : 1;	/* An uncorrectable error was detected in a request packet payload flit */
        uint64_t corrupt_rsp              : 1;	/* This bit is set when the SSID receives a corrupt response indication */
        uint64_t unexpctd_rsp             : 1;	/* The SSID received an unexpected response */
        uint64_t unexpctd_orb_crdt        : 1;	/* Unexpected flit credit received from ORB block */
        uint64_t unexpctd_cq_crdt         : 1;	/* Unexpected flit credit received from CQ block */
        uint64_t unexpctd_wc_flushreq_crdt: 1;	/* Unexpected Flush Request credit received from WC block */
        uint64_t corr_mem_err             : 1;	/* A corrected memory error has been detected */
        uint64_t uncorr_mem_err           : 1;	/* An uncorrectable memory error has been detected */
        uint64_t corrupt_chan_state       : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in reading an entry of the Channel State memory while processing a request packet */
        uint64_t corrupt_free_ssid        : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in a ssid value being read out of the Free SSID FIFO */
        uint64_t corrupt_pending_msgrcvcmplt: 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's Pending MsgRcvComplete FIFO */
        uint64_t corrupt_pending_rsp_cmd  : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's Pending Response Command FIFO */
        uint64_t corrupt_pending_stale_ssid: 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's Pending Stale SSID FIFO */
        uint64_t corrupt_flushrsp         : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's incoming flush response FIFO */
        uint64_t corrupt_bypassed_req     : 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's bypassed request FIFO */
        uint64_t corrupt_pending_completion: 1;	/* This bit, when set, indicates that an uncorrectable error occurred in data read out of the SSID block's Pending Sequence Completion FIFO */
        uint64_t corrupt_cq_info          : 1;	/* This bit, when set, indicates that an uncorrectable SSID state memory error occurred when performing completion processing of a sequence for which all requests have already been sent and all responses have already been received */
        uint64_t corrupt_stale_ssid_detect_state: 1;	/* This bit, when set, indicates that an uncorrectable error occurred reading SSID state information associated with determining if the corresponding ssid entry is stale */
        uint64_t tarb_to_ssid_uflw        : 1;	/* This bit, when set, indicates that an attempt was made to read data from the TARB to SSID request flit FIFO while the FIFO was empty */
        uint64_t tarb_to_ssid_oflw        : 1;	/* This bit, when set, indicates that an attempt was made to write data into the TARB to SSID request flit FIFO while the FIFO was full */
        uint64_t wc_to_ssid_uflw          : 1;	/* This bit, when set, indicates that an attempt was made to read data from the WC to SSID response flit FIFO while the FIFO was empty */
        uint64_t wc_to_ssid_oflw          : 1;	/* This bit, when set, indicates that an attempt was made to write data into the WC to SSID response flit FIFO while the FIFO was full */
        uint64_t wc_to_ssid_flushrsp_uflw : 1;	/* This bit, when set, indicates that an attempt was made to read data from the WC to SSID Flush Response FIFO while the FIFO was empty */
        uint64_t wc_to_ssid_flushrsp_oflw : 1;	/* This bit, when set, indicates that an attempt was made to write data into the WC to SSID Flush Response FIFO while the FIFO was full */
        uint64_t free_ssid_uflw           : 1;	/* This bit, when set, indicates that an attempt was made to read data from the FreeSSID FIFO while the FIFO was empty */
        uint64_t free_ssid_oflw           : 1;	/* This bit, when set, indicates that an attempt was made to write data to the FreeSSID FIFO while the FIFO was full */
        uint64_t pending_mrc_uflw         : 1;	/* This bit, when set, indicates that an attempt was made to read data from the PendingMsgRcvCpl FIFO while the FIFO was empty */
        uint64_t pending_mrc_oflw         : 1;	/* This bit, when set, indicates that an attempt was made to write data to the PendingMsgRcvCpl FIFO while the FIFO was full */
        uint64_t pending_seqcmplt_uflw    : 1;	/* This bit, when set, indicates that an attempt was made to read data from the PendingSeqComplete FIFO while the FIFO was empty */
        uint64_t pending_seqcmplt_oflw    : 1;	/* This bit, when set, indicates that an attempt was made to write data to the PendingSeqComplete FIFO while the FIFO was full */
        uint64_t rsp_cmd_uflw             : 1;	/* This bit, when set, indicates that an attempt was made to read data from the RspCmd FIFO while the FIFO was empty */
        uint64_t rsp_cmd_oflw             : 1;	/* This bit, when set, indicates that an attempt was made to write data to the RspCmd FIFO while the FIFO was full */
        uint64_t stale_ssid_uflw          : 1;	/* This bit, when set, indicates that an attempt was made to read data from the Stale SSID FIFO while the FIFO was empty */
        uint64_t stale_ssid_oflw          : 1;	/* This bit, when set, indicates that an attempt was made to write data to the Stale SSID FIFO while the FIFO was full */
        uint64_t bypassed_req_uflw        : 1;	/* This bit, when set, indicates that an attempt was made to read data from the BypassedReq FIFO while the FIFO was empty */
        uint64_t bypassed_req_oflw        : 1;	/* This bit, when set, indicates that an attempt was made to write data to the BypassedReq FIFO while the FIFO was full */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_clr_desc_t;

typedef union ar_nic_ssid_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t lreq_err_hss             : 1;	/* 1:1 */
        uint64_t rreq_err_hss             : 1;	/* 2:2 */
        uint64_t rsp_err_hss              : 1;	/* 3:3 */
        uint64_t lreq_err_os              : 1;	/* 4:4 */
        uint64_t rreq_err_os              : 1;	/* 5:5 */
        uint64_t rsp_err_os               : 1;	/* 6:6 */
        uint64_t sup_errd_ptag            : 1;	/* 7:7 */
        uint64_t sup_dst_cmpltn_event     : 1;	/* 8:8 */
        uint64_t sup_src_cmpltn_event     : 1;	/* 9:9 */
        uint64_t stale_ssid               : 1;	/* 10:10 */
        uint64_t seq_redundant_alloc      : 1;	/* 11:11 */
        uint64_t seq_missing_alloc        : 1;	/* 12:12 */
        uint64_t seq_uncor_err            : 1;	/* 13:13 */
        uint64_t corrupt_req_head         : 1;	/* 14:14 */
        uint64_t long_req_pkt             : 1;	/* 15:15 */
        uint64_t short_req_pkt            : 1;	/* 16:16 */
        uint64_t corr_req_payld_err       : 1;	/* 17:17 */
        uint64_t uncorr_req_payld_err     : 1;	/* 18:18 */
        uint64_t corrupt_rsp              : 1;	/* 19:19 */
        uint64_t unexpctd_rsp             : 1;	/* 20:20 */
        uint64_t unexpctd_orb_crdt        : 1;	/* 21:21 */
        uint64_t unexpctd_cq_crdt         : 1;	/* 22:22 */
        uint64_t unexpctd_wc_flushreq_crdt: 1;	/* 23:23 */
        uint64_t corr_mem_err             : 1;	/* 24:24 */
        uint64_t uncorr_mem_err           : 1;	/* 25:25 */
        uint64_t corrupt_chan_state       : 1;	/* 26:26 */
        uint64_t corrupt_free_ssid        : 1;	/* 27:27 */
        uint64_t corrupt_pending_msgrcvcmplt: 1;	/* 28:28 */
        uint64_t corrupt_pending_rsp_cmd  : 1;	/* 29:29 */
        uint64_t corrupt_pending_stale_ssid: 1;	/* 30:30 */
        uint64_t corrupt_flushrsp         : 1;	/* 31:31 */
        uint64_t corrupt_bypassed_req     : 1;	/* 32:32 */
        uint64_t corrupt_pending_completion: 1;	/* 33:33 */
        uint64_t corrupt_cq_info          : 1;	/* 34:34 */
        uint64_t corrupt_stale_ssid_detect_state: 1;	/* 35:35 */
        uint64_t tarb_to_ssid_uflw        : 1;	/* 36:36 */
        uint64_t tarb_to_ssid_oflw        : 1;	/* 37:37 */
        uint64_t wc_to_ssid_uflw          : 1;	/* 38:38 */
        uint64_t wc_to_ssid_oflw          : 1;	/* 39:39 */
        uint64_t wc_to_ssid_flushrsp_uflw : 1;	/* 40:40 */
        uint64_t wc_to_ssid_flushrsp_oflw : 1;	/* 41:41 */
        uint64_t free_ssid_uflw           : 1;	/* 42:42 */
        uint64_t free_ssid_oflw           : 1;	/* 43:43 */
        uint64_t pending_mrc_uflw         : 1;	/* 44:44 */
        uint64_t pending_mrc_oflw         : 1;	/* 45:45 */
        uint64_t pending_seqcmplt_uflw    : 1;	/* 46:46 */
        uint64_t pending_seqcmplt_oflw    : 1;	/* 47:47 */
        uint64_t rsp_cmd_uflw             : 1;	/* 48:48 */
        uint64_t rsp_cmd_oflw             : 1;	/* 49:49 */
        uint64_t stale_ssid_uflw          : 1;	/* 50:50 */
        uint64_t stale_ssid_oflw          : 1;	/* 51:51 */
        uint64_t bypassed_req_uflw        : 1;	/* 52:52 */
        uint64_t bypassed_req_oflw        : 1;	/* 53:53 */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_hss_msk_desc_t;

typedef union ar_nic_ssid_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t lreq_err_hss             : 1;	/* 1:1 */
        uint64_t rreq_err_hss             : 1;	/* 2:2 */
        uint64_t rsp_err_hss              : 1;	/* 3:3 */
        uint64_t lreq_err_os              : 1;	/* 4:4 */
        uint64_t rreq_err_os              : 1;	/* 5:5 */
        uint64_t rsp_err_os               : 1;	/* 6:6 */
        uint64_t sup_errd_ptag            : 1;	/* 7:7 */
        uint64_t sup_dst_cmpltn_event     : 1;	/* 8:8 */
        uint64_t sup_src_cmpltn_event     : 1;	/* 9:9 */
        uint64_t stale_ssid               : 1;	/* 10:10 */
        uint64_t seq_redundant_alloc      : 1;	/* 11:11 */
        uint64_t seq_missing_alloc        : 1;	/* 12:12 */
        uint64_t seq_uncor_err            : 1;	/* 13:13 */
        uint64_t corrupt_req_head         : 1;	/* 14:14 */
        uint64_t long_req_pkt             : 1;	/* 15:15 */
        uint64_t short_req_pkt            : 1;	/* 16:16 */
        uint64_t corr_req_payld_err       : 1;	/* 17:17 */
        uint64_t uncorr_req_payld_err     : 1;	/* 18:18 */
        uint64_t corrupt_rsp              : 1;	/* 19:19 */
        uint64_t unexpctd_rsp             : 1;	/* 20:20 */
        uint64_t unexpctd_orb_crdt        : 1;	/* 21:21 */
        uint64_t unexpctd_cq_crdt         : 1;	/* 22:22 */
        uint64_t unexpctd_wc_flushreq_crdt: 1;	/* 23:23 */
        uint64_t corr_mem_err             : 1;	/* 24:24 */
        uint64_t uncorr_mem_err           : 1;	/* 25:25 */
        uint64_t corrupt_chan_state       : 1;	/* 26:26 */
        uint64_t corrupt_free_ssid        : 1;	/* 27:27 */
        uint64_t corrupt_pending_msgrcvcmplt: 1;	/* 28:28 */
        uint64_t corrupt_pending_rsp_cmd  : 1;	/* 29:29 */
        uint64_t corrupt_pending_stale_ssid: 1;	/* 30:30 */
        uint64_t corrupt_flushrsp         : 1;	/* 31:31 */
        uint64_t corrupt_bypassed_req     : 1;	/* 32:32 */
        uint64_t corrupt_pending_completion: 1;	/* 33:33 */
        uint64_t corrupt_cq_info          : 1;	/* 34:34 */
        uint64_t corrupt_stale_ssid_detect_state: 1;	/* 35:35 */
        uint64_t tarb_to_ssid_uflw        : 1;	/* 36:36 */
        uint64_t tarb_to_ssid_oflw        : 1;	/* 37:37 */
        uint64_t wc_to_ssid_uflw          : 1;	/* 38:38 */
        uint64_t wc_to_ssid_oflw          : 1;	/* 39:39 */
        uint64_t wc_to_ssid_flushrsp_uflw : 1;	/* 40:40 */
        uint64_t wc_to_ssid_flushrsp_oflw : 1;	/* 41:41 */
        uint64_t free_ssid_uflw           : 1;	/* 42:42 */
        uint64_t free_ssid_oflw           : 1;	/* 43:43 */
        uint64_t pending_mrc_uflw         : 1;	/* 44:44 */
        uint64_t pending_mrc_oflw         : 1;	/* 45:45 */
        uint64_t pending_seqcmplt_uflw    : 1;	/* 46:46 */
        uint64_t pending_seqcmplt_oflw    : 1;	/* 47:47 */
        uint64_t rsp_cmd_uflw             : 1;	/* 48:48 */
        uint64_t rsp_cmd_oflw             : 1;	/* 49:49 */
        uint64_t stale_ssid_uflw          : 1;	/* 50:50 */
        uint64_t stale_ssid_oflw          : 1;	/* 51:51 */
        uint64_t bypassed_req_uflw        : 1;	/* 52:52 */
        uint64_t bypassed_req_oflw        : 1;	/* 53:53 */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_os_msk_desc_t;

typedef union ar_nic_ssid_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t lreq_err_hss             : 1;	/* 1:1 */
        uint64_t rreq_err_hss             : 1;	/* 2:2 */
        uint64_t rsp_err_hss              : 1;	/* 3:3 */
        uint64_t lreq_err_os              : 1;	/* 4:4 */
        uint64_t rreq_err_os              : 1;	/* 5:5 */
        uint64_t rsp_err_os               : 1;	/* 6:6 */
        uint64_t sup_errd_ptag            : 1;	/* 7:7 */
        uint64_t sup_dst_cmpltn_event     : 1;	/* 8:8 */
        uint64_t sup_src_cmpltn_event     : 1;	/* 9:9 */
        uint64_t stale_ssid               : 1;	/* 10:10 */
        uint64_t seq_redundant_alloc      : 1;	/* 11:11 */
        uint64_t seq_missing_alloc        : 1;	/* 12:12 */
        uint64_t seq_uncor_err            : 1;	/* 13:13 */
        uint64_t corrupt_req_head         : 1;	/* 14:14 */
        uint64_t long_req_pkt             : 1;	/* 15:15 */
        uint64_t short_req_pkt            : 1;	/* 16:16 */
        uint64_t corr_req_payld_err       : 1;	/* 17:17 */
        uint64_t uncorr_req_payld_err     : 1;	/* 18:18 */
        uint64_t corrupt_rsp              : 1;	/* 19:19 */
        uint64_t unexpctd_rsp             : 1;	/* 20:20 */
        uint64_t unexpctd_orb_crdt        : 1;	/* 21:21 */
        uint64_t unexpctd_cq_crdt         : 1;	/* 22:22 */
        uint64_t unexpctd_wc_flushreq_crdt: 1;	/* 23:23 */
        uint64_t corr_mem_err             : 1;	/* 24:24 */
        uint64_t uncorr_mem_err           : 1;	/* 25:25 */
        uint64_t corrupt_chan_state       : 1;	/* 26:26 */
        uint64_t corrupt_free_ssid        : 1;	/* 27:27 */
        uint64_t corrupt_pending_msgrcvcmplt: 1;	/* 28:28 */
        uint64_t corrupt_pending_rsp_cmd  : 1;	/* 29:29 */
        uint64_t corrupt_pending_stale_ssid: 1;	/* 30:30 */
        uint64_t corrupt_flushrsp         : 1;	/* 31:31 */
        uint64_t corrupt_bypassed_req     : 1;	/* 32:32 */
        uint64_t corrupt_pending_completion: 1;	/* 33:33 */
        uint64_t corrupt_cq_info          : 1;	/* 34:34 */
        uint64_t corrupt_stale_ssid_detect_state: 1;	/* 35:35 */
        uint64_t tarb_to_ssid_uflw        : 1;	/* 36:36 */
        uint64_t tarb_to_ssid_oflw        : 1;	/* 37:37 */
        uint64_t wc_to_ssid_uflw          : 1;	/* 38:38 */
        uint64_t wc_to_ssid_oflw          : 1;	/* 39:39 */
        uint64_t wc_to_ssid_flushrsp_uflw : 1;	/* 40:40 */
        uint64_t wc_to_ssid_flushrsp_oflw : 1;	/* 41:41 */
        uint64_t free_ssid_uflw           : 1;	/* 42:42 */
        uint64_t free_ssid_oflw           : 1;	/* 43:43 */
        uint64_t pending_mrc_uflw         : 1;	/* 44:44 */
        uint64_t pending_mrc_oflw         : 1;	/* 45:45 */
        uint64_t pending_seqcmplt_uflw    : 1;	/* 46:46 */
        uint64_t pending_seqcmplt_oflw    : 1;	/* 47:47 */
        uint64_t rsp_cmd_uflw             : 1;	/* 48:48 */
        uint64_t rsp_cmd_oflw             : 1;	/* 49:49 */
        uint64_t stale_ssid_uflw          : 1;	/* 50:50 */
        uint64_t stale_ssid_oflw          : 1;	/* 51:51 */
        uint64_t bypassed_req_uflw        : 1;	/* 52:52 */
        uint64_t bypassed_req_oflw        : 1;	/* 53:53 */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_first_flg_desc_t;

typedef union ar_nic_ssid_err_info_hss_msk_desc {
    struct {
        // QW0
        uint64_t hss_info_msk             :54;	/* Disables the capture of error information, in shared HSS error info MMRs, for the corresponding error flag in the A_NIC_SSID_ERR_FLG MMR */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_hss_msk_desc_t;

typedef union ar_nic_ssid_err_info_os_msk_desc {
    struct {
        // QW0
        uint64_t os_info_msk              :54;	/* Disables the capture of error information, in shared OS error info MMRs, for the corresponding error flag in the A_NIC_SSID_ERR_FLG MMR */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_os_msk_desc_t;

typedef union ar_nic_ssid_lreq_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Software controlled error flag */
        uint64_t a_status_req_disabled    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_cmd : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_insufficient_priv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_misrouted   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_err        : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_poison     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_timeout   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_inv       : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_malformed : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pe_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_fma_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_dla_overflow    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_sequence_terminate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_msg_protocol_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_timeout    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_buf_overrun : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_overrun      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_operation_unexpected: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_duplicate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_child_inv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_inconsistent: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_amo_cache_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_orb_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_timeout      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_endpoint_unreachable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3e     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3f     : 1;	/* See Table 59 on page 284, for locality  */
    };
    uint64_t qwords[1];
} ar_nic_ssid_lreq_err_flg_desc_t;

typedef union ar_nic_ssid_lreq_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Software controlled error flag */
        uint64_t a_status_req_disabled    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_cmd : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_insufficient_priv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_misrouted   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_err        : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_poison     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_timeout   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_inv       : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_malformed : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pe_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_fma_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_dla_overflow    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_sequence_terminate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_msg_protocol_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_timeout    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_buf_overrun : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_overrun      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_operation_unexpected: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_duplicate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_child_inv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_inconsistent: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_amo_cache_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_orb_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_timeout      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_endpoint_unreachable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3e     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3f     : 1;	/* See Table 59 on page 284, for locality  */
    };
    uint64_t qwords[1];
} ar_nic_ssid_lreq_err_clr_desc_t;

typedef union ar_nic_ssid_lreq_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t a_status_req_disabled    : 1;	/* 1:1 */
        uint64_t a_status_req_illegal_cmd : 1;	/* 2:2 */
        uint64_t a_status_req_illegal_addr: 1;	/* 3:3 */
        uint64_t a_status_req_illegal_size: 1;	/* 4:4 */
        uint64_t a_status_req_insufficient_priv: 1;	/* 5:5 */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* 6:6 */
        uint64_t a_status_pkt_malformed_addr: 1;	/* 7:7 */
        uint64_t a_status_pkt_malformed_size: 1;	/* 8:8 */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* 9:9 */
        uint64_t a_status_pkt_misrouted   : 1;	/* 10:10 */
        uint64_t a_status_data_err        : 1;	/* 11:11 */
        uint64_t a_status_data_poison     : 1;	/* 12:12 */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* 13:13 */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* 14:14 */
        uint64_t a_status_at_mdd_inv      : 1;	/* 15:15 */
        uint64_t a_status_at_mdd_malformed: 1;	/* 16:16 */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* 17:17 */
        uint64_t a_status_at_bounds_err   : 1;	/* 18:18 */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* 19:19 */
        uint64_t a_status_at_protection_err: 1;	/* 20:20 */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* 21:21 */
        uint64_t a_status_at_tce_inv      : 1;	/* 22:22 */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* 23:23 */
        uint64_t a_status_at_pf_timeout   : 1;	/* 24:24 */
        uint64_t a_status_at_pf_inv       : 1;	/* 25:25 */
        uint64_t a_status_at_pf_malformed : 1;	/* 26:26 */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* 27:27 */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* 28:28 */
        uint64_t a_status_at_uncorrectable: 1;	/* 29:29 */
        uint64_t a_status_pe_bounds_err   : 1;	/* 30:30 */
        uint64_t a_status_fma_uncorrectable: 1;	/* 31:31 */
        uint64_t a_status_dla_overflow    : 1;	/* 32:32 */
        uint64_t a_status_bte_uncorrectable: 1;	/* 33:33 */
        uint64_t a_status_bte_sequence_terminate: 1;	/* 34:34 */
        uint64_t a_status_bte_timeout     : 1;	/* 35:35 */
        uint64_t a_status_msg_protocol_err: 1;	/* 36:36 */
        uint64_t a_status_ssid_uncorrectable: 1;	/* 37:37 */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* 38:38 */
        uint64_t a_status_ssid_timeout    : 1;	/* 39:39 */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* 40:40 */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* 41:41 */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* 42:42 */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* 43:43 */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* 44:44 */
        uint64_t a_status_rmt_buf_overrun : 1;	/* 45:45 */
        uint64_t a_status_rmt_timeout     : 1;	/* 46:46 */
        uint64_t a_status_cq_overrun      : 1;	/* 47:47 */
        uint64_t a_status_cq_err          : 1;	/* 48:48 */
        uint64_t a_status_ce_uncorrectable: 1;	/* 49:49 */
        uint64_t a_status_ce_operation_unexpected: 1;	/* 50:50 */
        uint64_t a_status_ce_join_duplicate: 1;	/* 51:51 */
        uint64_t a_status_ce_join_child_inv: 1;	/* 52:52 */
        uint64_t a_status_ce_join_inconsistent: 1;	/* 53:53 */
        uint64_t a_status_ce_protection_err: 1;	/* 54:54 */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* 55:55 */
        uint64_t a_status_amo_cache_err   : 1;	/* 56:56 */
        uint64_t a_status_orb_timeout     : 1;	/* 57:57 */
        uint64_t a_status_pi_err          : 1;	/* 58:58 */
        uint64_t a_status_pi_timeout      : 1;	/* 59:59 */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* 60:60 */
        uint64_t a_status_endpoint_unreachable: 1;	/* 61:61 */
        uint64_t a_status_reserved_3e     : 1;	/* 62:62 */
        uint64_t a_status_reserved_3f     : 1;	/* 63:63 */
    };
    uint64_t qwords[1];
} ar_nic_ssid_lreq_err_hss_msk_desc_t;

typedef union ar_nic_ssid_lreq_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t a_status_req_disabled    : 1;	/* 1:1 */
        uint64_t a_status_req_illegal_cmd : 1;	/* 2:2 */
        uint64_t a_status_req_illegal_addr: 1;	/* 3:3 */
        uint64_t a_status_req_illegal_size: 1;	/* 4:4 */
        uint64_t a_status_req_insufficient_priv: 1;	/* 5:5 */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* 6:6 */
        uint64_t a_status_pkt_malformed_addr: 1;	/* 7:7 */
        uint64_t a_status_pkt_malformed_size: 1;	/* 8:8 */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* 9:9 */
        uint64_t a_status_pkt_misrouted   : 1;	/* 10:10 */
        uint64_t a_status_data_err        : 1;	/* 11:11 */
        uint64_t a_status_data_poison     : 1;	/* 12:12 */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* 13:13 */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* 14:14 */
        uint64_t a_status_at_mdd_inv      : 1;	/* 15:15 */
        uint64_t a_status_at_mdd_malformed: 1;	/* 16:16 */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* 17:17 */
        uint64_t a_status_at_bounds_err   : 1;	/* 18:18 */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* 19:19 */
        uint64_t a_status_at_protection_err: 1;	/* 20:20 */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* 21:21 */
        uint64_t a_status_at_tce_inv      : 1;	/* 22:22 */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* 23:23 */
        uint64_t a_status_at_pf_timeout   : 1;	/* 24:24 */
        uint64_t a_status_at_pf_inv       : 1;	/* 25:25 */
        uint64_t a_status_at_pf_malformed : 1;	/* 26:26 */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* 27:27 */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* 28:28 */
        uint64_t a_status_at_uncorrectable: 1;	/* 29:29 */
        uint64_t a_status_pe_bounds_err   : 1;	/* 30:30 */
        uint64_t a_status_fma_uncorrectable: 1;	/* 31:31 */
        uint64_t a_status_dla_overflow    : 1;	/* 32:32 */
        uint64_t a_status_bte_uncorrectable: 1;	/* 33:33 */
        uint64_t a_status_bte_sequence_terminate: 1;	/* 34:34 */
        uint64_t a_status_bte_timeout     : 1;	/* 35:35 */
        uint64_t a_status_msg_protocol_err: 1;	/* 36:36 */
        uint64_t a_status_ssid_uncorrectable: 1;	/* 37:37 */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* 38:38 */
        uint64_t a_status_ssid_timeout    : 1;	/* 39:39 */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* 40:40 */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* 41:41 */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* 42:42 */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* 43:43 */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* 44:44 */
        uint64_t a_status_rmt_buf_overrun : 1;	/* 45:45 */
        uint64_t a_status_rmt_timeout     : 1;	/* 46:46 */
        uint64_t a_status_cq_overrun      : 1;	/* 47:47 */
        uint64_t a_status_cq_err          : 1;	/* 48:48 */
        uint64_t a_status_ce_uncorrectable: 1;	/* 49:49 */
        uint64_t a_status_ce_operation_unexpected: 1;	/* 50:50 */
        uint64_t a_status_ce_join_duplicate: 1;	/* 51:51 */
        uint64_t a_status_ce_join_child_inv: 1;	/* 52:52 */
        uint64_t a_status_ce_join_inconsistent: 1;	/* 53:53 */
        uint64_t a_status_ce_protection_err: 1;	/* 54:54 */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* 55:55 */
        uint64_t a_status_amo_cache_err   : 1;	/* 56:56 */
        uint64_t a_status_orb_timeout     : 1;	/* 57:57 */
        uint64_t a_status_pi_err          : 1;	/* 58:58 */
        uint64_t a_status_pi_timeout      : 1;	/* 59:59 */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* 60:60 */
        uint64_t a_status_endpoint_unreachable: 1;	/* 61:61 */
        uint64_t a_status_reserved_3e     : 1;	/* 62:62 */
        uint64_t a_status_reserved_3f     : 1;	/* 63:63 */
    };
    uint64_t qwords[1];
} ar_nic_ssid_lreq_err_os_msk_desc_t;

typedef union ar_nic_ssid_lreq_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t a_status_req_disabled    : 1;	/* 1:1 */
        uint64_t a_status_req_illegal_cmd : 1;	/* 2:2 */
        uint64_t a_status_req_illegal_addr: 1;	/* 3:3 */
        uint64_t a_status_req_illegal_size: 1;	/* 4:4 */
        uint64_t a_status_req_insufficient_priv: 1;	/* 5:5 */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* 6:6 */
        uint64_t a_status_pkt_malformed_addr: 1;	/* 7:7 */
        uint64_t a_status_pkt_malformed_size: 1;	/* 8:8 */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* 9:9 */
        uint64_t a_status_pkt_misrouted   : 1;	/* 10:10 */
        uint64_t a_status_data_err        : 1;	/* 11:11 */
        uint64_t a_status_data_poison     : 1;	/* 12:12 */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* 13:13 */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* 14:14 */
        uint64_t a_status_at_mdd_inv      : 1;	/* 15:15 */
        uint64_t a_status_at_mdd_malformed: 1;	/* 16:16 */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* 17:17 */
        uint64_t a_status_at_bounds_err   : 1;	/* 18:18 */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* 19:19 */
        uint64_t a_status_at_protection_err: 1;	/* 20:20 */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* 21:21 */
        uint64_t a_status_at_tce_inv      : 1;	/* 22:22 */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* 23:23 */
        uint64_t a_status_at_pf_timeout   : 1;	/* 24:24 */
        uint64_t a_status_at_pf_inv       : 1;	/* 25:25 */
        uint64_t a_status_at_pf_malformed : 1;	/* 26:26 */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* 27:27 */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* 28:28 */
        uint64_t a_status_at_uncorrectable: 1;	/* 29:29 */
        uint64_t a_status_pe_bounds_err   : 1;	/* 30:30 */
        uint64_t a_status_fma_uncorrectable: 1;	/* 31:31 */
        uint64_t a_status_dla_overflow    : 1;	/* 32:32 */
        uint64_t a_status_bte_uncorrectable: 1;	/* 33:33 */
        uint64_t a_status_bte_sequence_terminate: 1;	/* 34:34 */
        uint64_t a_status_bte_timeout     : 1;	/* 35:35 */
        uint64_t a_status_msg_protocol_err: 1;	/* 36:36 */
        uint64_t a_status_ssid_uncorrectable: 1;	/* 37:37 */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* 38:38 */
        uint64_t a_status_ssid_timeout    : 1;	/* 39:39 */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* 40:40 */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* 41:41 */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* 42:42 */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* 43:43 */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* 44:44 */
        uint64_t a_status_rmt_buf_overrun : 1;	/* 45:45 */
        uint64_t a_status_rmt_timeout     : 1;	/* 46:46 */
        uint64_t a_status_cq_overrun      : 1;	/* 47:47 */
        uint64_t a_status_cq_err          : 1;	/* 48:48 */
        uint64_t a_status_ce_uncorrectable: 1;	/* 49:49 */
        uint64_t a_status_ce_operation_unexpected: 1;	/* 50:50 */
        uint64_t a_status_ce_join_duplicate: 1;	/* 51:51 */
        uint64_t a_status_ce_join_child_inv: 1;	/* 52:52 */
        uint64_t a_status_ce_join_inconsistent: 1;	/* 53:53 */
        uint64_t a_status_ce_protection_err: 1;	/* 54:54 */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* 55:55 */
        uint64_t a_status_amo_cache_err   : 1;	/* 56:56 */
        uint64_t a_status_orb_timeout     : 1;	/* 57:57 */
        uint64_t a_status_pi_err          : 1;	/* 58:58 */
        uint64_t a_status_pi_timeout      : 1;	/* 59:59 */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* 60:60 */
        uint64_t a_status_endpoint_unreachable: 1;	/* 61:61 */
        uint64_t a_status_reserved_3e     : 1;	/* 62:62 */
        uint64_t a_status_reserved_3f     : 1;	/* 63:63 */
    };
    uint64_t qwords[1];
} ar_nic_ssid_lreq_err_first_flg_desc_t;

typedef union ar_nic_ssid_lreq_err_info_hss_msk_desc {
    struct {
        // QW0
        uint64_t lreq_hss_info_msk        ;	/* Disables the capture of error information, in the HSS LREQ error info MMRs, for the corresponding error flag in the A_NIC_SSID_LREQ_ERR_FLG MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_lreq_err_info_hss_msk_desc_t;

typedef union ar_nic_ssid_lreq_err_info_os_msk_desc {
    struct {
        // QW0
        uint64_t lreq_os_info_msk         ;	/* Disables the capture of error information, in the OS LREQ error info MMRs, for the corresponding error flag in the A_NIC_SSID_LREQ_ERR_FLG MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_lreq_err_info_os_msk_desc_t;

typedef union ar_nic_ssid_rreq_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Software controlled error flag */
        uint64_t a_status_req_disabled    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_cmd : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_insufficient_priv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_misrouted   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_err        : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_poison     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_timeout   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_inv       : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_malformed : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pe_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_fma_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_dla_overflow    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_sequence_terminate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_msg_protocol_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_timeout    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_buf_overrun : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_overrun      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_operation_unexpected: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_duplicate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_child_inv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_inconsistent: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_amo_cache_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_orb_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_timeout      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_endpoint_unreachable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3e     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3f     : 1;	/* See Table 59 on page 284, for locality  */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rreq_err_flg_desc_t;

typedef union ar_nic_ssid_rreq_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Software controlled error flag */
        uint64_t a_status_req_disabled    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_cmd : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_insufficient_priv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_misrouted   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_err        : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_poison     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_timeout   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_inv       : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_malformed : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pe_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_fma_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_dla_overflow    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_sequence_terminate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_msg_protocol_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_timeout    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_buf_overrun : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_overrun      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_operation_unexpected: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_duplicate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_child_inv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_inconsistent: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_amo_cache_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_orb_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_timeout      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_endpoint_unreachable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3e     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3f     : 1;	/* See Table 59 on page 284, for locality  */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rreq_err_clr_desc_t;

typedef union ar_nic_ssid_rreq_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t a_status_req_disabled    : 1;	/* 1:1 */
        uint64_t a_status_req_illegal_cmd : 1;	/* 2:2 */
        uint64_t a_status_req_illegal_addr: 1;	/* 3:3 */
        uint64_t a_status_req_illegal_size: 1;	/* 4:4 */
        uint64_t a_status_req_insufficient_priv: 1;	/* 5:5 */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* 6:6 */
        uint64_t a_status_pkt_malformed_addr: 1;	/* 7:7 */
        uint64_t a_status_pkt_malformed_size: 1;	/* 8:8 */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* 9:9 */
        uint64_t a_status_pkt_misrouted   : 1;	/* 10:10 */
        uint64_t a_status_data_err        : 1;	/* 11:11 */
        uint64_t a_status_data_poison     : 1;	/* 12:12 */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* 13:13 */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* 14:14 */
        uint64_t a_status_at_mdd_inv      : 1;	/* 15:15 */
        uint64_t a_status_at_mdd_malformed: 1;	/* 16:16 */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* 17:17 */
        uint64_t a_status_at_bounds_err   : 1;	/* 18:18 */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* 19:19 */
        uint64_t a_status_at_protection_err: 1;	/* 20:20 */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* 21:21 */
        uint64_t a_status_at_tce_inv      : 1;	/* 22:22 */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* 23:23 */
        uint64_t a_status_at_pf_timeout   : 1;	/* 24:24 */
        uint64_t a_status_at_pf_inv       : 1;	/* 25:25 */
        uint64_t a_status_at_pf_malformed : 1;	/* 26:26 */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* 27:27 */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* 28:28 */
        uint64_t a_status_at_uncorrectable: 1;	/* 29:29 */
        uint64_t a_status_pe_bounds_err   : 1;	/* 30:30 */
        uint64_t a_status_fma_uncorrectable: 1;	/* 31:31 */
        uint64_t a_status_dla_overflow    : 1;	/* 32:32 */
        uint64_t a_status_bte_uncorrectable: 1;	/* 33:33 */
        uint64_t a_status_bte_sequence_terminate: 1;	/* 34:34 */
        uint64_t a_status_bte_timeout     : 1;	/* 35:35 */
        uint64_t a_status_msg_protocol_err: 1;	/* 36:36 */
        uint64_t a_status_ssid_uncorrectable: 1;	/* 37:37 */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* 38:38 */
        uint64_t a_status_ssid_timeout    : 1;	/* 39:39 */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* 40:40 */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* 41:41 */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* 42:42 */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* 43:43 */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* 44:44 */
        uint64_t a_status_rmt_buf_overrun : 1;	/* 45:45 */
        uint64_t a_status_rmt_timeout     : 1;	/* 46:46 */
        uint64_t a_status_cq_overrun      : 1;	/* 47:47 */
        uint64_t a_status_cq_err          : 1;	/* 48:48 */
        uint64_t a_status_ce_uncorrectable: 1;	/* 49:49 */
        uint64_t a_status_ce_operation_unexpected: 1;	/* 50:50 */
        uint64_t a_status_ce_join_duplicate: 1;	/* 51:51 */
        uint64_t a_status_ce_join_child_inv: 1;	/* 52:52 */
        uint64_t a_status_ce_join_inconsistent: 1;	/* 53:53 */
        uint64_t a_status_ce_protection_err: 1;	/* 54:54 */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* 55:55 */
        uint64_t a_status_amo_cache_err   : 1;	/* 56:56 */
        uint64_t a_status_orb_timeout     : 1;	/* 57:57 */
        uint64_t a_status_pi_err          : 1;	/* 58:58 */
        uint64_t a_status_pi_timeout      : 1;	/* 59:59 */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* 60:60 */
        uint64_t a_status_endpoint_unreachable: 1;	/* 61:61 */
        uint64_t a_status_reserved_3e     : 1;	/* 62:62 */
        uint64_t a_status_reserved_3f     : 1;	/* 63:63 */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rreq_err_hss_msk_desc_t;

typedef union ar_nic_ssid_rreq_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t a_status_req_disabled    : 1;	/* 1:1 */
        uint64_t a_status_req_illegal_cmd : 1;	/* 2:2 */
        uint64_t a_status_req_illegal_addr: 1;	/* 3:3 */
        uint64_t a_status_req_illegal_size: 1;	/* 4:4 */
        uint64_t a_status_req_insufficient_priv: 1;	/* 5:5 */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* 6:6 */
        uint64_t a_status_pkt_malformed_addr: 1;	/* 7:7 */
        uint64_t a_status_pkt_malformed_size: 1;	/* 8:8 */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* 9:9 */
        uint64_t a_status_pkt_misrouted   : 1;	/* 10:10 */
        uint64_t a_status_data_err        : 1;	/* 11:11 */
        uint64_t a_status_data_poison     : 1;	/* 12:12 */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* 13:13 */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* 14:14 */
        uint64_t a_status_at_mdd_inv      : 1;	/* 15:15 */
        uint64_t a_status_at_mdd_malformed: 1;	/* 16:16 */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* 17:17 */
        uint64_t a_status_at_bounds_err   : 1;	/* 18:18 */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* 19:19 */
        uint64_t a_status_at_protection_err: 1;	/* 20:20 */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* 21:21 */
        uint64_t a_status_at_tce_inv      : 1;	/* 22:22 */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* 23:23 */
        uint64_t a_status_at_pf_timeout   : 1;	/* 24:24 */
        uint64_t a_status_at_pf_inv       : 1;	/* 25:25 */
        uint64_t a_status_at_pf_malformed : 1;	/* 26:26 */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* 27:27 */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* 28:28 */
        uint64_t a_status_at_uncorrectable: 1;	/* 29:29 */
        uint64_t a_status_pe_bounds_err   : 1;	/* 30:30 */
        uint64_t a_status_fma_uncorrectable: 1;	/* 31:31 */
        uint64_t a_status_dla_overflow    : 1;	/* 32:32 */
        uint64_t a_status_bte_uncorrectable: 1;	/* 33:33 */
        uint64_t a_status_bte_sequence_terminate: 1;	/* 34:34 */
        uint64_t a_status_bte_timeout     : 1;	/* 35:35 */
        uint64_t a_status_msg_protocol_err: 1;	/* 36:36 */
        uint64_t a_status_ssid_uncorrectable: 1;	/* 37:37 */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* 38:38 */
        uint64_t a_status_ssid_timeout    : 1;	/* 39:39 */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* 40:40 */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* 41:41 */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* 42:42 */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* 43:43 */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* 44:44 */
        uint64_t a_status_rmt_buf_overrun : 1;	/* 45:45 */
        uint64_t a_status_rmt_timeout     : 1;	/* 46:46 */
        uint64_t a_status_cq_overrun      : 1;	/* 47:47 */
        uint64_t a_status_cq_err          : 1;	/* 48:48 */
        uint64_t a_status_ce_uncorrectable: 1;	/* 49:49 */
        uint64_t a_status_ce_operation_unexpected: 1;	/* 50:50 */
        uint64_t a_status_ce_join_duplicate: 1;	/* 51:51 */
        uint64_t a_status_ce_join_child_inv: 1;	/* 52:52 */
        uint64_t a_status_ce_join_inconsistent: 1;	/* 53:53 */
        uint64_t a_status_ce_protection_err: 1;	/* 54:54 */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* 55:55 */
        uint64_t a_status_amo_cache_err   : 1;	/* 56:56 */
        uint64_t a_status_orb_timeout     : 1;	/* 57:57 */
        uint64_t a_status_pi_err          : 1;	/* 58:58 */
        uint64_t a_status_pi_timeout      : 1;	/* 59:59 */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* 60:60 */
        uint64_t a_status_endpoint_unreachable: 1;	/* 61:61 */
        uint64_t a_status_reserved_3e     : 1;	/* 62:62 */
        uint64_t a_status_reserved_3f     : 1;	/* 63:63 */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rreq_err_os_msk_desc_t;

typedef union ar_nic_ssid_rreq_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t a_status_req_disabled    : 1;	/* 1:1 */
        uint64_t a_status_req_illegal_cmd : 1;	/* 2:2 */
        uint64_t a_status_req_illegal_addr: 1;	/* 3:3 */
        uint64_t a_status_req_illegal_size: 1;	/* 4:4 */
        uint64_t a_status_req_insufficient_priv: 1;	/* 5:5 */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* 6:6 */
        uint64_t a_status_pkt_malformed_addr: 1;	/* 7:7 */
        uint64_t a_status_pkt_malformed_size: 1;	/* 8:8 */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* 9:9 */
        uint64_t a_status_pkt_misrouted   : 1;	/* 10:10 */
        uint64_t a_status_data_err        : 1;	/* 11:11 */
        uint64_t a_status_data_poison     : 1;	/* 12:12 */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* 13:13 */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* 14:14 */
        uint64_t a_status_at_mdd_inv      : 1;	/* 15:15 */
        uint64_t a_status_at_mdd_malformed: 1;	/* 16:16 */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* 17:17 */
        uint64_t a_status_at_bounds_err   : 1;	/* 18:18 */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* 19:19 */
        uint64_t a_status_at_protection_err: 1;	/* 20:20 */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* 21:21 */
        uint64_t a_status_at_tce_inv      : 1;	/* 22:22 */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* 23:23 */
        uint64_t a_status_at_pf_timeout   : 1;	/* 24:24 */
        uint64_t a_status_at_pf_inv       : 1;	/* 25:25 */
        uint64_t a_status_at_pf_malformed : 1;	/* 26:26 */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* 27:27 */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* 28:28 */
        uint64_t a_status_at_uncorrectable: 1;	/* 29:29 */
        uint64_t a_status_pe_bounds_err   : 1;	/* 30:30 */
        uint64_t a_status_fma_uncorrectable: 1;	/* 31:31 */
        uint64_t a_status_dla_overflow    : 1;	/* 32:32 */
        uint64_t a_status_bte_uncorrectable: 1;	/* 33:33 */
        uint64_t a_status_bte_sequence_terminate: 1;	/* 34:34 */
        uint64_t a_status_bte_timeout     : 1;	/* 35:35 */
        uint64_t a_status_msg_protocol_err: 1;	/* 36:36 */
        uint64_t a_status_ssid_uncorrectable: 1;	/* 37:37 */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* 38:38 */
        uint64_t a_status_ssid_timeout    : 1;	/* 39:39 */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* 40:40 */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* 41:41 */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* 42:42 */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* 43:43 */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* 44:44 */
        uint64_t a_status_rmt_buf_overrun : 1;	/* 45:45 */
        uint64_t a_status_rmt_timeout     : 1;	/* 46:46 */
        uint64_t a_status_cq_overrun      : 1;	/* 47:47 */
        uint64_t a_status_cq_err          : 1;	/* 48:48 */
        uint64_t a_status_ce_uncorrectable: 1;	/* 49:49 */
        uint64_t a_status_ce_operation_unexpected: 1;	/* 50:50 */
        uint64_t a_status_ce_join_duplicate: 1;	/* 51:51 */
        uint64_t a_status_ce_join_child_inv: 1;	/* 52:52 */
        uint64_t a_status_ce_join_inconsistent: 1;	/* 53:53 */
        uint64_t a_status_ce_protection_err: 1;	/* 54:54 */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* 55:55 */
        uint64_t a_status_amo_cache_err   : 1;	/* 56:56 */
        uint64_t a_status_orb_timeout     : 1;	/* 57:57 */
        uint64_t a_status_pi_err          : 1;	/* 58:58 */
        uint64_t a_status_pi_timeout      : 1;	/* 59:59 */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* 60:60 */
        uint64_t a_status_endpoint_unreachable: 1;	/* 61:61 */
        uint64_t a_status_reserved_3e     : 1;	/* 62:62 */
        uint64_t a_status_reserved_3f     : 1;	/* 63:63 */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rreq_err_first_flg_desc_t;

typedef union ar_nic_ssid_rreq_err_info_hss_msk_desc {
    struct {
        // QW0
        uint64_t rreq_hss_info_msk        ;	/* Disables the capture of error information, in the HSS RREQ error info MMRs, for the corresponding error flag in the A_NIC_SSID_RREQ_ERR_FLG MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rreq_err_info_hss_msk_desc_t;

typedef union ar_nic_ssid_rreq_err_info_os_msk_desc {
    struct {
        // QW0
        uint64_t rreq_os_info_msk         ;	/* Disables the capture of error information, in the OS RREQ error info MMRs, for the corresponding error flag in the A_NIC_SSID_RREQ_ERR_FLG MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rreq_err_info_os_msk_desc_t;

typedef union ar_nic_ssid_rsp_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Software controlled error flag */
        uint64_t a_status_req_disabled    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_cmd : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_insufficient_priv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_misrouted   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_err        : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_poison     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_timeout   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_inv       : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_malformed : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pe_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_fma_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_dla_overflow    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_sequence_terminate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_msg_protocol_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_timeout    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_buf_overrun : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_overrun      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_operation_unexpected: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_duplicate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_child_inv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_inconsistent: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_amo_cache_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_orb_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_timeout      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_endpoint_unreachable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3e     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3f     : 1;	/* See Table 59 on page 284, for locality  */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rsp_err_flg_desc_t;

typedef union ar_nic_ssid_rsp_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Software controlled error flag */
        uint64_t a_status_req_disabled    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_cmd : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_illegal_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_req_insufficient_priv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_addr: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pkt_misrouted   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_err        : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_data_poison     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_malformed: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_tce_inv      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_timeout   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_inv       : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_malformed : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_at_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pe_bounds_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_fma_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_dla_overflow    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_sequence_terminate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_bte_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_msg_protocol_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ssid_timeout    : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_buf_overrun : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_rmt_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_overrun      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_cq_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_operation_unexpected: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_duplicate: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_child_inv: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_join_inconsistent: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_protection_err: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_amo_cache_err   : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_orb_timeout     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_err          : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_pi_timeout      : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_endpoint_unreachable: 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3e     : 1;	/* See the definition of bit 63 in this MMR */
        uint64_t a_status_reserved_3f     : 1;	/* See Table 59 on page 284, for locality  */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rsp_err_clr_desc_t;

typedef union ar_nic_ssid_rsp_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t a_status_req_disabled    : 1;	/* 1:1 */
        uint64_t a_status_req_illegal_cmd : 1;	/* 2:2 */
        uint64_t a_status_req_illegal_addr: 1;	/* 3:3 */
        uint64_t a_status_req_illegal_size: 1;	/* 4:4 */
        uint64_t a_status_req_insufficient_priv: 1;	/* 5:5 */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* 6:6 */
        uint64_t a_status_pkt_malformed_addr: 1;	/* 7:7 */
        uint64_t a_status_pkt_malformed_size: 1;	/* 8:8 */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* 9:9 */
        uint64_t a_status_pkt_misrouted   : 1;	/* 10:10 */
        uint64_t a_status_data_err        : 1;	/* 11:11 */
        uint64_t a_status_data_poison     : 1;	/* 12:12 */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* 13:13 */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* 14:14 */
        uint64_t a_status_at_mdd_inv      : 1;	/* 15:15 */
        uint64_t a_status_at_mdd_malformed: 1;	/* 16:16 */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* 17:17 */
        uint64_t a_status_at_bounds_err   : 1;	/* 18:18 */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* 19:19 */
        uint64_t a_status_at_protection_err: 1;	/* 20:20 */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* 21:21 */
        uint64_t a_status_at_tce_inv      : 1;	/* 22:22 */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* 23:23 */
        uint64_t a_status_at_pf_timeout   : 1;	/* 24:24 */
        uint64_t a_status_at_pf_inv       : 1;	/* 25:25 */
        uint64_t a_status_at_pf_malformed : 1;	/* 26:26 */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* 27:27 */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* 28:28 */
        uint64_t a_status_at_uncorrectable: 1;	/* 29:29 */
        uint64_t a_status_pe_bounds_err   : 1;	/* 30:30 */
        uint64_t a_status_fma_uncorrectable: 1;	/* 31:31 */
        uint64_t a_status_dla_overflow    : 1;	/* 32:32 */
        uint64_t a_status_bte_uncorrectable: 1;	/* 33:33 */
        uint64_t a_status_bte_sequence_terminate: 1;	/* 34:34 */
        uint64_t a_status_bte_timeout     : 1;	/* 35:35 */
        uint64_t a_status_msg_protocol_err: 1;	/* 36:36 */
        uint64_t a_status_ssid_uncorrectable: 1;	/* 37:37 */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* 38:38 */
        uint64_t a_status_ssid_timeout    : 1;	/* 39:39 */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* 40:40 */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* 41:41 */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* 42:42 */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* 43:43 */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* 44:44 */
        uint64_t a_status_rmt_buf_overrun : 1;	/* 45:45 */
        uint64_t a_status_rmt_timeout     : 1;	/* 46:46 */
        uint64_t a_status_cq_overrun      : 1;	/* 47:47 */
        uint64_t a_status_cq_err          : 1;	/* 48:48 */
        uint64_t a_status_ce_uncorrectable: 1;	/* 49:49 */
        uint64_t a_status_ce_operation_unexpected: 1;	/* 50:50 */
        uint64_t a_status_ce_join_duplicate: 1;	/* 51:51 */
        uint64_t a_status_ce_join_child_inv: 1;	/* 52:52 */
        uint64_t a_status_ce_join_inconsistent: 1;	/* 53:53 */
        uint64_t a_status_ce_protection_err: 1;	/* 54:54 */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* 55:55 */
        uint64_t a_status_amo_cache_err   : 1;	/* 56:56 */
        uint64_t a_status_orb_timeout     : 1;	/* 57:57 */
        uint64_t a_status_pi_err          : 1;	/* 58:58 */
        uint64_t a_status_pi_timeout      : 1;	/* 59:59 */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* 60:60 */
        uint64_t a_status_endpoint_unreachable: 1;	/* 61:61 */
        uint64_t a_status_reserved_3e     : 1;	/* 62:62 */
        uint64_t a_status_reserved_3f     : 1;	/* 63:63 */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rsp_err_hss_msk_desc_t;

typedef union ar_nic_ssid_rsp_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t a_status_req_disabled    : 1;	/* 1:1 */
        uint64_t a_status_req_illegal_cmd : 1;	/* 2:2 */
        uint64_t a_status_req_illegal_addr: 1;	/* 3:3 */
        uint64_t a_status_req_illegal_size: 1;	/* 4:4 */
        uint64_t a_status_req_insufficient_priv: 1;	/* 5:5 */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* 6:6 */
        uint64_t a_status_pkt_malformed_addr: 1;	/* 7:7 */
        uint64_t a_status_pkt_malformed_size: 1;	/* 8:8 */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* 9:9 */
        uint64_t a_status_pkt_misrouted   : 1;	/* 10:10 */
        uint64_t a_status_data_err        : 1;	/* 11:11 */
        uint64_t a_status_data_poison     : 1;	/* 12:12 */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* 13:13 */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* 14:14 */
        uint64_t a_status_at_mdd_inv      : 1;	/* 15:15 */
        uint64_t a_status_at_mdd_malformed: 1;	/* 16:16 */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* 17:17 */
        uint64_t a_status_at_bounds_err   : 1;	/* 18:18 */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* 19:19 */
        uint64_t a_status_at_protection_err: 1;	/* 20:20 */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* 21:21 */
        uint64_t a_status_at_tce_inv      : 1;	/* 22:22 */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* 23:23 */
        uint64_t a_status_at_pf_timeout   : 1;	/* 24:24 */
        uint64_t a_status_at_pf_inv       : 1;	/* 25:25 */
        uint64_t a_status_at_pf_malformed : 1;	/* 26:26 */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* 27:27 */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* 28:28 */
        uint64_t a_status_at_uncorrectable: 1;	/* 29:29 */
        uint64_t a_status_pe_bounds_err   : 1;	/* 30:30 */
        uint64_t a_status_fma_uncorrectable: 1;	/* 31:31 */
        uint64_t a_status_dla_overflow    : 1;	/* 32:32 */
        uint64_t a_status_bte_uncorrectable: 1;	/* 33:33 */
        uint64_t a_status_bte_sequence_terminate: 1;	/* 34:34 */
        uint64_t a_status_bte_timeout     : 1;	/* 35:35 */
        uint64_t a_status_msg_protocol_err: 1;	/* 36:36 */
        uint64_t a_status_ssid_uncorrectable: 1;	/* 37:37 */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* 38:38 */
        uint64_t a_status_ssid_timeout    : 1;	/* 39:39 */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* 40:40 */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* 41:41 */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* 42:42 */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* 43:43 */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* 44:44 */
        uint64_t a_status_rmt_buf_overrun : 1;	/* 45:45 */
        uint64_t a_status_rmt_timeout     : 1;	/* 46:46 */
        uint64_t a_status_cq_overrun      : 1;	/* 47:47 */
        uint64_t a_status_cq_err          : 1;	/* 48:48 */
        uint64_t a_status_ce_uncorrectable: 1;	/* 49:49 */
        uint64_t a_status_ce_operation_unexpected: 1;	/* 50:50 */
        uint64_t a_status_ce_join_duplicate: 1;	/* 51:51 */
        uint64_t a_status_ce_join_child_inv: 1;	/* 52:52 */
        uint64_t a_status_ce_join_inconsistent: 1;	/* 53:53 */
        uint64_t a_status_ce_protection_err: 1;	/* 54:54 */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* 55:55 */
        uint64_t a_status_amo_cache_err   : 1;	/* 56:56 */
        uint64_t a_status_orb_timeout     : 1;	/* 57:57 */
        uint64_t a_status_pi_err          : 1;	/* 58:58 */
        uint64_t a_status_pi_timeout      : 1;	/* 59:59 */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* 60:60 */
        uint64_t a_status_endpoint_unreachable: 1;	/* 61:61 */
        uint64_t a_status_reserved_3e     : 1;	/* 62:62 */
        uint64_t a_status_reserved_3f     : 1;	/* 63:63 */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rsp_err_os_msk_desc_t;

typedef union ar_nic_ssid_rsp_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t a_status_req_disabled    : 1;	/* 1:1 */
        uint64_t a_status_req_illegal_cmd : 1;	/* 2:2 */
        uint64_t a_status_req_illegal_addr: 1;	/* 3:3 */
        uint64_t a_status_req_illegal_size: 1;	/* 4:4 */
        uint64_t a_status_req_insufficient_priv: 1;	/* 5:5 */
        uint64_t a_status_pkt_malformed_cmd: 1;	/* 6:6 */
        uint64_t a_status_pkt_malformed_addr: 1;	/* 7:7 */
        uint64_t a_status_pkt_malformed_size: 1;	/* 8:8 */
        uint64_t a_status_pkt_malformed_reserved: 1;	/* 9:9 */
        uint64_t a_status_pkt_misrouted   : 1;	/* 10:10 */
        uint64_t a_status_data_err        : 1;	/* 11:11 */
        uint64_t a_status_data_poison     : 1;	/* 12:12 */
        uint64_t a_status_at_vmdhcam_malformed: 1;	/* 13:13 */
        uint64_t a_status_at_mdd_uncorrectable: 1;	/* 14:14 */
        uint64_t a_status_at_mdd_inv      : 1;	/* 15:15 */
        uint64_t a_status_at_mdd_malformed: 1;	/* 16:16 */
        uint64_t a_status_at_mdd_wr_permission_err: 1;	/* 17:17 */
        uint64_t a_status_at_bounds_err   : 1;	/* 18:18 */
        uint64_t a_status_at_ptt_uncorrectable: 1;	/* 19:19 */
        uint64_t a_status_at_protection_err: 1;	/* 20:20 */
        uint64_t a_status_at_tce_uncorrectable: 1;	/* 21:21 */
        uint64_t a_status_at_tce_inv      : 1;	/* 22:22 */
        uint64_t a_status_at_pf_uncorrectable: 1;	/* 23:23 */
        uint64_t a_status_at_pf_timeout   : 1;	/* 24:24 */
        uint64_t a_status_at_pf_inv       : 1;	/* 25:25 */
        uint64_t a_status_at_pf_malformed : 1;	/* 26:26 */
        uint64_t a_status_at_pf_rd_permission_err: 1;	/* 27:27 */
        uint64_t a_status_at_pf_wr_permission_err: 1;	/* 28:28 */
        uint64_t a_status_at_uncorrectable: 1;	/* 29:29 */
        uint64_t a_status_pe_bounds_err   : 1;	/* 30:30 */
        uint64_t a_status_fma_uncorrectable: 1;	/* 31:31 */
        uint64_t a_status_dla_overflow    : 1;	/* 32:32 */
        uint64_t a_status_bte_uncorrectable: 1;	/* 33:33 */
        uint64_t a_status_bte_sequence_terminate: 1;	/* 34:34 */
        uint64_t a_status_bte_timeout     : 1;	/* 35:35 */
        uint64_t a_status_msg_protocol_err: 1;	/* 36:36 */
        uint64_t a_status_ssid_uncorrectable: 1;	/* 37:37 */
        uint64_t a_status_ssid_pkt_malformed_size: 1;	/* 38:38 */
        uint64_t a_status_ssid_timeout    : 1;	/* 39:39 */
        uint64_t a_status_rmt_desc_uncorrectable: 1;	/* 40:40 */
        uint64_t a_status_rmt_desc_unavailable: 1;	/* 41:41 */
        uint64_t a_status_rmt_seqtbl_uncorrectable: 1;	/* 42:42 */
        uint64_t a_status_rmt_cam_uncorrectable: 1;	/* 43:43 */
        uint64_t a_status_rmt_seqtbl_unavailable: 1;	/* 44:44 */
        uint64_t a_status_rmt_buf_overrun : 1;	/* 45:45 */
        uint64_t a_status_rmt_timeout     : 1;	/* 46:46 */
        uint64_t a_status_cq_overrun      : 1;	/* 47:47 */
        uint64_t a_status_cq_err          : 1;	/* 48:48 */
        uint64_t a_status_ce_uncorrectable: 1;	/* 49:49 */
        uint64_t a_status_ce_operation_unexpected: 1;	/* 50:50 */
        uint64_t a_status_ce_join_duplicate: 1;	/* 51:51 */
        uint64_t a_status_ce_join_child_inv: 1;	/* 52:52 */
        uint64_t a_status_ce_join_inconsistent: 1;	/* 53:53 */
        uint64_t a_status_ce_protection_err: 1;	/* 54:54 */
        uint64_t a_status_ce_reduction_id_mismatch: 1;	/* 55:55 */
        uint64_t a_status_amo_cache_err   : 1;	/* 56:56 */
        uint64_t a_status_orb_timeout     : 1;	/* 57:57 */
        uint64_t a_status_pi_err          : 1;	/* 58:58 */
        uint64_t a_status_pi_timeout      : 1;	/* 59:59 */
        uint64_t a_status_wc_tag_uncorrectable: 1;	/* 60:60 */
        uint64_t a_status_endpoint_unreachable: 1;	/* 61:61 */
        uint64_t a_status_reserved_3e     : 1;	/* 62:62 */
        uint64_t a_status_reserved_3f     : 1;	/* 63:63 */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rsp_err_first_flg_desc_t;

typedef union ar_nic_ssid_rsp_err_info_hss_msk_desc {
    struct {
        // QW0
        uint64_t rsp_hss_info_msk         ;	/* Disables the capture of error information, in the HSS RSP error info MMRs, for the corresponding error flag in the A_NIC_SSID_RSP_ERR_FLG MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rsp_err_info_hss_msk_desc_t;

typedef union ar_nic_ssid_rsp_err_info_os_msk_desc {
    struct {
        // QW0
        uint64_t rsp_os_info_msk          ;	/* Disables the capture of error information, in the OS RSP error info MMRs, for the corresponding error flag in the A_NIC_SSID_RSP_ERR_FLG MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_rsp_err_info_os_msk_desc_t;

typedef union ar_nic_ssid_err_info_hss_lreq1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t error_type               : 6;	/* The type of error that resulted in the information captured in this register */
                uint64_t initiator                : 2;	/* The functional unit that initiated the errored request */
                uint64_t channel                  : 7;	/* The ID of the FMA descriptor, BTE channel, or virtual CE that initiated the errored Request */
                uint64_t op_type                  : 9;	/* The value encoded in the reqcmd header field of the errored request */
                uint64_t ssidptag                 : 8;	/* The Protection Tag value that was used to allocate the ssid entry that is associated with the errored Request */
                uint64_t invalid_ssidptag         : 1;	/* SSIDPTAG is invalid */
                uint64_t undefine_36_33           : 4;	/* undefined */
                uint64_t ntt                      : 1;	/* The value of the NodeTranslationTable bit in the most recent request, for the ssid entry, that was intended to be delivered to the network */
                uint64_t dstid                    : 2;	/* The destination core ID that was targeted by the most recent request, for the ssid entry, that was intended to be delivered to the network */
                uint64_t destination              :16;	/* The destination ID that was targeted by the most recent request, for the ssid entry, that was intended to be delivered to the network */
                uint64_t multi_dest               : 1;	/* Transaction targeted multiple destinations */
                uint64_t undefine_60_57           : 4;	/* undefined */
                uint64_t reqrspmem_corrupt        : 1;	/* RequestResponse SSID state memory corrupt */
                uint64_t undefine_q0_f0_63_62     : 2;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f1_12_0      :13;	/* undefined */
                uint64_t is_putmsg                : 1;	/* If Initiator = BTE, this bit indicates whether or not the BTE sequence is a PUTMSG sequence */
                uint64_t is_bte_send              : 1;	/* If Initiator = BTE, this bit indicates whether or not the BTE sequence is a BTE_SEND sequence */
                uint64_t undefine_q0_f1_63_15     :49;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_hss_lreq1_desc_t;

typedef union ar_nic_ssid_err_info_hss_lreq2_desc {
    struct {
        // QW0
        uint64_t undefine_11_0            :12;	/* undefined */
        uint64_t address                  :28;	/* Bits 39:12 of the Address field contained in the errored request */
        uint64_t mdh                      :12;	/* Memory Domain Handle contained in the errored request */
        uint64_t undefine_55_52           : 4;	/* undefined */
        uint64_t ptag                     : 8;	/* Protection Tag contained in the errored request */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_hss_lreq2_desc_t;

typedef union ar_nic_ssid_err_info_os_lreq1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t error_type               : 6;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t initiator                : 2;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t channel                  : 7;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t op_type                  : 9;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t ssidptag                 : 8;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t invalid_ssidptag         : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t undefine_36_33           : 4;	/* undefined */
                uint64_t ntt                      : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t dstid                    : 2;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t destination              :16;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t multi_dest               : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t undefine_60_57           : 4;	/* undefined */
                uint64_t reqrspmem_corrupt        : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t undefine_q0_f0_63_62     : 2;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f1_12_0      :13;	/* undefined */
                uint64_t is_putmsg                : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t is_bte_send              : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ1 MMR */
                uint64_t undefine_q0_f1_63_15     :49;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_os_lreq1_desc_t;

typedef union ar_nic_ssid_err_info_os_lreq2_desc {
    struct {
        // QW0
        uint64_t undefine_11_0            :12;	/* undefined */
        uint64_t address                  :28;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ2 MMR */
        uint64_t mdh                      :12;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ2 MMR */
        uint64_t undefine_55_52           : 4;	/* undefined */
        uint64_t ptag                     : 8;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_LREQ2 MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_os_lreq2_desc_t;

typedef union ar_nic_ssid_err_info_hss_rreq1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t error_type               : 6;	/* The type of error that resulted in the information captured in this register */
                uint64_t initiator                : 2;	/* The functional unit that initiated the errored request */
                uint64_t channel                  : 7;	/* The ID of the FMA descriptor, BTE channel, or virtual CE that initiated the errored Request */
                uint64_t undefine_15_15           : 1;	/* undefined */
                uint64_t op_type                  : 3;	/* The value encoded in the rspcmd header field of the response packet in which the error is reported */
                uint64_t undefine_23_19           : 5;	/* undefined */
                uint64_t ssidptag                 : 8;	/* The Protection Tag value that was used to allocate the ssid entry that is associated with the original Request that resulted in the captured error */
                uint64_t invalid_ssidptag         : 1;	/* SSIDPTAG is invalid */
                uint64_t undefine_33_33           : 1;	/* undefined */
                uint64_t tp                       : 2;	/* The value of the  */
                uint64_t undefine_37_36           : 2;	/* undefined */
                uint64_t dstid                    : 2;	/* The physical destination core ID of the remote endpoint where the Request error was detected */
                uint64_t destination              :16;	/* The physical destination ID of the remote endpoint where the Request error was detected */
                uint64_t multi_dest               : 1;	/* Transaction targeted multiple destinations */
                uint64_t undefine_60_57           : 4;	/* undefined */
                uint64_t reqrspmem_corrupt        : 1;	/* RequestResponse SSID state memory corrupt */
                uint64_t undefine_q0_f0_63_62     : 2;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f1_12_0      :13;	/* undefined */
                uint64_t is_putmsg                : 1;	/* If Initiator = BTE, this bit indicates whether or not the BTE sequence is a PUTMSG sequence */
                uint64_t is_bte_send              : 1;	/* If Initiator = BTE, this bit indicates whether or not the BTE sequence is a BTE_SEND sequence */
                uint64_t undefine_q0_f1_63_15     :49;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_hss_rreq1_desc_t;

typedef union ar_nic_ssid_err_info_hss_rreq2_desc {
    struct {
        // QW0
        uint64_t undefine_11_0            :12;	/* undefined */
        uint64_t address                  :28;	/* Bits 39:12 of the Address value that was provided to the remote endpoint */
        uint64_t mdh                      :12;	/* Memory Domain Handle value that was provided to the remote endpoint */
        uint64_t undefine_63_52           :12;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_hss_rreq2_desc_t;

typedef union ar_nic_ssid_err_info_os_rreq1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t error_type               : 6;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t initiator                : 2;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t channel                  : 7;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t undefine_15_15           : 1;	/* undefined */
                uint64_t op_type                  : 3;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t undefine_23_19           : 5;	/* undefined */
                uint64_t ssidptag                 : 8;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t invalid_ssidptag         : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t undefine_33_33           : 1;	/* undefined */
                uint64_t tp                       : 2;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t undefine_37_36           : 2;	/* undefined */
                uint64_t dstid                    : 2;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t destination              :16;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t multi_dest               : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t undefine_60_57           : 4;	/* undefined */
                uint64_t reqrspmem_corrupt        : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t undefine_q0_f0_63_62     : 2;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f1_12_0      :13;	/* undefined */
                uint64_t is_putmsg                : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t is_bte_send              : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ1 MMR */
                uint64_t undefine_q0_f1_63_15     :49;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_os_rreq1_desc_t;

typedef union ar_nic_ssid_err_info_os_rreq2_desc {
    struct {
        // QW0
        uint64_t undefine_11_0            :12;	/* undefined */
        uint64_t address                  :28;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ2 MMR */
        uint64_t mdh                      :12;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RREQ2 MMR */
        uint64_t undefine_63_52           :12;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_os_rreq2_desc_t;

typedef union ar_nic_ssid_err_info_hss_rsp1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t error_type               : 6;	/* The type of error that resulted in the information captured in this register */
                uint64_t initiator                : 2;	/* The functional unit that initiated the errored request */
                uint64_t channel                  : 7;	/* The ID of the FMA descriptor, BTE channel, or virtual CE that initiated the errored Request */
                uint64_t undefine_15_15           : 1;	/* undefined */
                uint64_t op_type                  : 3;	/* The value encoded in the rspcmd header field of the response packet in which the error is reported */
                uint64_t undefine_22_19           : 4;	/* undefined */
                uint64_t suppressed_mrc           : 1;	/* When this bit is set the potential generation of a MsgRcvComplete packet has been suppressed due to the occurrence of a A_STATUS_ORB_TIMEOUT error */
                uint64_t ssidptag                 : 8;	/* The Protection Tag value that was used to allocate the ssid entry that is associated with the original Request that resulted in the captured error */
                uint64_t invalid_ssidptag         : 1;	/* SSIDPTAG is invalid */
                uint64_t undefine_33_33           : 1;	/* undefined */
                uint64_t tp                       : 2;	/* The value of the  */
                uint64_t undefine_36_36           : 1;	/* undefined */
                uint64_t ntt                      : 1;	/* The value of the NodeTranslationTable bit in the last request issued using the ssid entry associated with the received response that resulted in this error */
                uint64_t dstid                    : 2;	/* The destination core ID that was targeted by the last request issued using the ssid entry associated with the received response that resulted in this error */
                uint64_t destination              :16;	/* The destination ID that was targeted by the last request issued using the ssid entry associated with the received response that resulted in this error */
                uint64_t multi_dest               : 1;	/* Transaction targeted multiple destinations */
                uint64_t intentional_timeout      : 1;	/* When this bit is set, an intentional ssid timeout was triggered by the error reported in the ERROR_TYPE field of this MMR */
                uint64_t flush_rsp_err            : 1;	/* When this bit is set, the information in this MMR corresponds to a flush response error reported by the WC block */
                uint64_t unexpctd_ns              : 1;	/* Unexpected NotificationSent indication received */
                uint64_t undefine_60_60           : 1;	/* undefined */
                uint64_t reqrspmem_corrupt        : 1;	/* RequestResponse SSID state memory corrupt */
                uint64_t undefine_q0_f0_63_62     : 2;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f1_12_0      :13;	/* undefined */
                uint64_t is_putmsg                : 1;	/* If Initiator = BTE, this bit indicates whether or not the BTE sequence is a PUTMSG sequence */
                uint64_t is_bte_send              : 1;	/* If Initiator = BTE, this bit indicates whether or not the BTE sequence is a BTE_SEND sequence */
                uint64_t undefine_q0_f1_63_15     :49;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_hss_rsp1_desc_t;

typedef union ar_nic_ssid_err_info_hss_rsp2_desc {
    struct {
        // QW0
        uint64_t undefine_11_0            :12;	/* undefined */
        uint64_t address                  :28;	/* Bits 39:12 of the Local Address */
        uint64_t mdh                      :12;	/* Local address Memory Domain Handle */
        uint64_t undefine_55_52           : 4;	/* undefined */
        uint64_t ptag                     : 8;	/* Local address protection tag */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_hss_rsp2_desc_t;

typedef union ar_nic_ssid_err_info_os_rsp1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t error_type               : 6;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t initiator                : 2;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t channel                  : 7;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t undefine_15_15           : 1;	/* undefined */
                uint64_t op_type                  : 3;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t undefine_22_19           : 4;	/* undefined */
                uint64_t suppressed_mrc           : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t ssidptag                 : 8;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t invalid_ssidptag         : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t undefine_33_33           : 1;	/* undefined */
                uint64_t tp                       : 2;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t undefine_36_36           : 1;	/* undefined */
                uint64_t ntt                      : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t dstid                    : 2;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t destination              :16;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t multi_dest               : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t intentional_timeout      : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t flush_rsp_err            : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t unexpctd_ns              : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t undefine_60_60           : 1;	/* undefined */
                uint64_t reqrspmem_corrupt        : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t undefine_q0_f0_63_62     : 2;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f1_12_0      :13;	/* undefined */
                uint64_t is_putmsg                : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t is_bte_send              : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP1 MMR */
                uint64_t undefine_q0_f1_63_15     :49;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_os_rsp1_desc_t;

typedef union ar_nic_ssid_err_info_os_rsp2_desc {
    struct {
        // QW0
        uint64_t undefine_11_0            :12;	/* undefined */
        uint64_t address                  :28;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP2 MMR */
        uint64_t mdh                      :12;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP2 MMR */
        uint64_t undefine_55_52           : 4;	/* undefined */
        uint64_t ptag                     : 8;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_RSP2 MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_os_rsp2_desc_t;

typedef union ar_nic_ssid_err_info_hss_seq_desc {
    struct {
        // QW0
        uint64_t seq_redundant_alloc      : 1;	/* When this bit is set, the error that resulted in the information captured in this MMR was SEQ_REDUNDANT_ALLOC */
        uint64_t seq_missing_alloc        : 1;	/* When this bit is set, the error that resulted in the information captured in this MMR was SEQ_MISSING_ALLOC */
        uint64_t seq_corrupt_req_pkt      : 1;	/* When this bit is set, a request packet received with local status = A_STATUS_FMA_UNCORRECTABLE, A_STATUS_BTE_UNCORRECTABLE, or A_STATUS_CE_UNCORRECTABLE was processed */
        uint64_t seq_corrupt_chan_state   : 1;	/* Uncorrectable error in Channel State memory */
        uint64_t undefine_5_4             : 2;	/* undefined */
        uint64_t initiator                : 2;	/* The functional unit that initiated the errored request */
        uint64_t channel                  : 7;	/* The ID of the FMA descriptor, BTE channel, or virtual CE associated with the sequence error */
        uint64_t op_type                  : 9;	/* The value encoded in the reqcmd header field of the errored packet */
        uint64_t ptag                     : 8;	/* The PTAG value contained in the header of the errored packet */
        uint64_t invalid_ptag             : 1;	/* PTAG is invalid */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_hss_seq_desc_t;

typedef union ar_nic_ssid_err_info_os_seq_desc {
    struct {
        // QW0
        uint64_t seq_redundant_alloc      : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_SEQ MMR */
        uint64_t seq_missing_alloc        : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_SEQ MMR */
        uint64_t seq_corrupt_req_pkt      : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_SEQ MMR */
        uint64_t seq_corrupt_chan_state   : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_SEQ MMR */
        uint64_t undefine_5_4             : 2;	/* undefined */
        uint64_t initiator                : 2;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_SEQ MMR */
        uint64_t channel                  : 7;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_SEQ MMR */
        uint64_t op_type                  : 9;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_SEQ MMR */
        uint64_t ptag                     : 8;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_SEQ MMR */
        uint64_t invalid_ptag             : 1;	/* See the definition of the corresponding field in the A_NIC_SSID_ERR_INFO_HSS_SEQ MMR */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_os_seq_desc_t;

typedef union ar_nic_ssid_err_info_stale_ssid1_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t undefine_5_0             : 6;	/* undefined */
                uint64_t initiator                : 2;	/* The functional unit that initiated the errored request */
                uint64_t channel                  : 7;	/* The ID of the FMA descriptor, BTE channel, or virtual CE that initiated the errored Request */
                uint64_t undefine_23_15           : 9;	/* undefined */
                uint64_t ssidptag                 : 8;	/* The Protection Tag value that was used to allocate the stale ssid entry */
                uint64_t invalid_ssidptag         : 1;	/* SSIDPTAG is invalid */
                uint64_t undefine_36_33           : 4;	/* undefined */
                uint64_t ntt                      : 1;	/* The value of the NodeTranslationTable bit in the last request issued using the ssid entry that became stale */
                uint64_t dstid                    : 2;	/* The destination core ID of the last endpoint to which a Request was sent using the ssid entry that became stale */
                uint64_t destination              :16;	/* The destination ID of the last endpoint to which a Request was sent using the ssid entry that became stale */
                uint64_t multi_dest               : 1;	/* Transaction targeted multiple destinations */
                uint64_t undefine_60_57           : 4;	/* undefined */
                uint64_t reqrspmem_corrupt        : 1;	/* RequestResponse SSID state memory corrupt */
                uint64_t undefine_q0_f0_63_62     : 2;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f1_12_0      :13;	/* undefined */
                uint64_t is_putmsg                : 1;	/* If Initiator = BTE, this bit indicates whether or not the BTE sequence is a PUTMSG sequence */
                uint64_t is_bte_send              : 1;	/* If Initiator = BTE, this bit indicates whether or not the BTE sequence is a BTE_SEND sequence */
                uint64_t undefine_q0_f1_63_15     :49;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_stale_ssid1_desc_t;

typedef union ar_nic_ssid_err_info_stale_ssid2_desc {
    struct {
        // QW0
        uint64_t sent_request_count       :16;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA4 MMR */
        uint64_t rcvd_response_count      :16;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t frac_get_rsp             : 2;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t frac_famo_rsp            : 2;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t cpltn_mode               : 3;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t mrc_or_abort_sent        : 1;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t rcv_notify_del           : 1;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t rmt_miss                 : 1;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t got_first                : 1;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t first_too_late           : 1;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t ack_pending              : 1;	/* See description of this field in the A_NIC_SSID_DBG_SSID_STATE_DATA7 MMR */
        uint64_t flush_timeout            : 1;	/* A flush operation took too long to complete */
        uint64_t undefine_47_46           : 2;	/* undefined */
        uint64_t ssid                     : 9;	/* The ID of the ssid entry that was detected to be stale */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_stale_ssid2_desc_t;

typedef union ar_nic_ssid_err_info_unexpctd_rsp_desc {
    struct {
        // QW0
        uint64_t recently_stale           : 1;	/* If this bit is set, a stale ssid timeout occurred on the ssid entry that matched the unexpected response when that entry was last in use */
        uint64_t rsp_event                : 1;	/* If this bit is set, the event that triggered the UNEXPCTD_RSP error was a received response */
        uint64_t flush_rsp_event          : 1;	/* If this bit is set, the event that triggered the UNEXPCTD_RSP error was a Flush Response from the WC block */
        uint64_t rspcmd_event             : 1;	/* If this bit is set, the event that triggered the UNEXPCTD_RSP error was a response command generated internally within the SSID */
        uint64_t bypassed_req_event       : 1;	/* If this bit is set, the event that triggered the UNEXPCTD_RSP error was a bypassed request indication generated internally within the SSID */
        uint64_t undefine_47_5            :43;	/* undefined */
        uint64_t ssid                     : 9;	/* The unexpected ssid value that was included in the response indication received by the SSID */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_unexpctd_rsp_desc_t;

typedef union ar_nic_ssid_err_info_corr_mem_desc {
    struct {
        // QW0
        uint64_t undefine_7_0             : 8;	/* undefined */
        uint64_t sbe_syndrome             :16;	/* The syndrome of the detected error */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t sbe_address              : 9;	/* For memories, this field indicates the address being read when the error occurred */
        uint64_t undefine_55_41           :15;	/* undefined */
        uint64_t sbe_mem_errloc           : 5;	/* Memory and memory port at which the error was detected */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_corr_mem_desc_t;

typedef union ar_nic_ssid_err_info_uncorr_mem_desc {
    struct {
        // QW0
        uint64_t undefine_7_0             : 8;	/* undefined */
        uint64_t mbe_syndrome             :16;	/* The syndrome of the detected error */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t mbe_address              : 9;	/* For memories, this field indicates the address being read when the error occurred */
        uint64_t undefine_55_41           :15;	/* undefined */
        uint64_t mbe_mem_errloc           : 5;	/* Memory and memory port at which the error was detected */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_uncorr_mem_desc_t;

typedef union ar_nic_ssid_err_info_req_flit_err_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t pe_syndrome              : 4;	/* This field identifies the  */
        uint64_t sbe_syndrome             : 8;	/* The syndrome of a correctable payload flit error */
        uint64_t mbe_syndrome             : 8;	/* The syndrome of an uncorrectable payload flit error */
        uint64_t sbe_upper                : 1;	/* If this bit is set, SBE_SYNDROME reflects a correctable error detected in the upper half of a payload flit */
        uint64_t mbe_upper                : 1;	/* If this bit is set, MBE_SYNDROME reflects an uncorrectable error detected in the upper half of a payload flit */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t reqcmd                   : 9;	/* The value of reqcmd field contained in an errant header flit */
        uint64_t undefine_43_41           : 3;	/* undefined */
        uint64_t pkt_src                  : 2;	/* The value of the pkt_src field contained in an errant header flit */
        uint64_t undefine_47_46           : 2;	/* undefined */
        uint64_t ssid_ch                  : 7;	/* The value of the ssid_ch field contained in an errant header flit */
        uint64_t undefine_55_55           : 1;	/* undefined */
        uint64_t ssid_cmd                 : 5;	/* The value of the ssid_cmd field contained in an errant header flit */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_req_flit_err_desc_t;

typedef union ar_nic_ssid_err_info_rsp_flit_err_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t pe_syndrome              : 4;	/* This field identifies the  */
        uint64_t undefine_31_8            :24;	/* undefined */
        uint64_t rspcmd                   : 3;	/* The value of the rspcmd field contained in the errant response header flit */
        uint64_t undefine_35_35           : 1;	/* undefined */
        uint64_t tp                       : 2;	/* The value of the tp (total packet) field contained in the errant response header flit */
        uint64_t undefine_39_38           : 2;	/* undefined */
        uint64_t f                        : 1;	/* The value of the F (First Request in Message) field contained in the errant response header flit */
        uint64_t undefine_47_41           : 7;	/* undefined */
        uint64_t ssid                     : 9;	/* The value of the ssid field contained in the errant response header flit */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_info_rsp_flit_err_desc_t;

typedef union ar_nic_ssid_err_ptag1_desc {
    struct {
        // QW0
        uint64_t ptag_err                 ;	/* An error has occurred with one or more packets associated with the job using PTAG value n */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_ptag1_desc_t;

typedef union ar_nic_ssid_err_ptag2_desc {
    struct {
        // QW0
        uint64_t ptag_err                 ;	/* An error has occurred with one or more packets associated with the job using PTAG value n */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_ptag2_desc_t;

typedef union ar_nic_ssid_err_ptag3_desc {
    struct {
        // QW0
        uint64_t ptag_err                 ;	/* An error has occurred with one or more packets associated with the job using PTAG value n */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_ptag3_desc_t;

typedef union ar_nic_ssid_err_ptag4_desc {
    struct {
        // QW0
        uint64_t ptag_err                 ;	/* An error has occurred with one or more packets associated with the job using PTAG value n */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_ptag4_desc_t;

typedef union ar_nic_ssid_err_clr_ptag1_desc {
    struct {
        // QW0
        uint64_t ptag_err_clr             ;	/* Clears the corresponding bit in the A_NIC_SSID_ERR_PTAG1 MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_clr_ptag1_desc_t;

typedef union ar_nic_ssid_err_clr_ptag2_desc {
    struct {
        // QW0
        uint64_t ptag_err_clr             ;	/* Clears the corresponding bit in the A_NIC_SSID_ERR_PTAG2 MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_clr_ptag2_desc_t;

typedef union ar_nic_ssid_err_clr_ptag3_desc {
    struct {
        // QW0
        uint64_t ptag_err_clr             ;	/* Clears the corresponding bit in the A_NIC_SSID_ERR_PTAG3 MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_clr_ptag3_desc_t;

typedef union ar_nic_ssid_err_clr_ptag4_desc {
    struct {
        // QW0
        uint64_t ptag_err_clr             ;	/* Clears the corresponding bit in the A_NIC_SSID_ERR_PTAG4 MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_err_clr_ptag4_desc_t;

typedef union ar_nic_ssid_prf_cntr_ssids_in_use_desc {
    struct {
        // QW0
        uint64_t cur_ssids_in_use         : 9;	/* The number of SSIDs currently in use across all Request Channels */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t max_ssids_in_use         : 9;	/* The maximum number of SSIDs that have been in use simultaneously since this register was last initialized */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_prf_cntr_ssids_in_use_desc_t;

typedef union ar_nic_ssid_dbg_crdts_desc {
    struct {
        // QW0
        uint64_t ssid_to_orb              : 5;	/* This field provides a real time indication of the number of credits in use on the SSID to ORB interface */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t ssid_to_cq               : 5;	/* This field provides a real time indication of the number of credits in use on the SSID to CQ block interface */
        uint64_t undefine_15_13           : 3;	/* undefined */
        uint64_t ssid_to_wc               : 5;	/* This field provides a real time indication of the number of credits in use on the SSID to WC Flush Request interface */
        uint64_t undefine_63_21           :43;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_crdts_desc_t;

typedef union ar_nic_ssid_dbg_general_status_desc {
    struct {
        // QW0
        uint64_t warm_reset               : 1;	/* This bit indicates the state of the warm reset signal input to the SSID block */
        uint64_t initialization_done      : 1;	/* This bit becomes set when the SSID block has completed its internal initialization process */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_general_status_desc_t;

typedef union ar_nic_ssid_dbg_errinj_memory_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* MODE = 0: Inject error once MODE = 1: Inject error each time the memory port                   specified with MEM_ERRLOC is read MODE = 2: Inject error once if address matches MODE = 3: Inject error each time the memory port                   specified with MEM_ERRLOC is read if                   address matches */
        uint64_t triggered                : 1;	/* This bit is set to 1 by hardware when the conditions to inject an error, as configured through this MMR, have been met */
        uint64_t undefine_7_4             : 4;	/* undefined */
        uint64_t checkbits                :16;	/* This field controls the type of error that is injected */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  : 9;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_55_41           :15;	/* undefined */
        uint64_t mem_errloc               : 5;	/* This field identifies the memory and the read port of that memory where the error is to be injected */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_errinj_memory_desc_t;

typedef union ar_nic_ssid_dbg_errinj_req_flit_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 1;	/* MODE = 0: Inject error, in the flit specified by FLIT_CNT, in                   one packet MODE = 1: Inject error, in the flit specified                   by FLIT_CNT, in each packet received */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* This bit is set to 1 by hardware when the conditions to inject an error, as configured through this MMR, have been met */
        uint64_t flit_cnt                 : 4;	/* This field identifies the flit within the packet into which the error will be injected */
        uint64_t undefine_11_8            : 4;	/* undefined */
        uint64_t parity                   : 4;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header flit to be inverted */
        uint64_t checkbits_lo             : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the payload flit error detection check field (ecc0[7:0]), used to protect data0[63:0], to be inverted */
        uint64_t checkbits_up             : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the payload flit error detection check field (ecc1[7:0]), used to protect data1[63:0], to be inverted */
        uint64_t invert_tail              : 1;	/* Invert the tail bit of the flit selected for error injection */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_errinj_req_flit_desc_t;

typedef union ar_nic_ssid_dbg_errinj_rsp_flit_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 1;	/* MODE = 0: Inject error in one response flit MODE = 1: Inject error, in each response flit received */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* This bit is set to 1 by hardware when the conditions to inject an error, as configured through this MMR, have been met */
        uint64_t undefine_11_4            : 8;	/* undefined */
        uint64_t parity                   : 4;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header flit to be inverted */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_errinj_rsp_flit_desc_t;

typedef union ar_nic_ssid_dbg_ssid_state_access_desc {
    struct {
        // QW0
        uint64_t ssid                     : 9;	/* The ID of the ssid entry that is to be read or written */
        uint64_t undefine_9_9             : 1;	/* undefined */
        uint64_t data_1_2_3_wr_en         : 1;	/* To enable the Data 1, Data 2, and Data 3 SSID State Data MMRs to be written to the ssid entry this bit must be set to 1 */
        uint64_t data_4_wr_en             : 1;	/* To enable the Data 4 SSID State Data MMR to be written to the ssid entry this bit must be set to 1 */
        uint64_t data_5_6_wr_en           : 1;	/* To enable the Data 5 and Data 6 SSID State Data MMRs to be written to the ssid entry this bit must be set to 1 */
        uint64_t data_7_wr_en             : 1;	/* To enable the Data 7 SSID State Data MMR to be written to the ssid entry this bit must be set to 1 */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t write                    : 1;	/* Perform a SSID State write; else perform a read */
        uint64_t done                     : 1;	/* SSID State debug access has been completed */
        uint64_t undefine_63_18           :46;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_ssid_state_access_desc_t;

typedef union ar_nic_ssid_dbg_ssid_state_data1_desc {
    struct {
        // QW0
        uint64_t dest_cqe_data            :48;	/* DSMN CQE data */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_ssid_state_data1_desc_t;

typedef union ar_nic_ssid_dbg_ssid_state_data2_desc {
    struct {
        // QW0
        uint64_t msg_flag_data            ;	/* DSMN flag data */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_ssid_state_data2_desc_t;

typedef union ar_nic_ssid_dbg_ssid_state_data3_desc {
    struct {
        // QW0
        uint64_t msg_flag_offset          :38;	/* Address for termination packet */
        uint64_t mdh                      :12;	/* MDH for termination packet */
        uint64_t rc                       : 3;	/* Routing Control for termination packet */
        uint64_t msg_flag_present         : 1;	/* Doing DSMN with flag data */
        uint64_t first_sent               : 1;	/* First network request issued */
        uint64_t sync_cmplt_rcvd          : 1;	/* The last request of the transaction has been received */
        uint64_t initial_rmt_squelch_req_induced: 1;	/* When asserted the SSID has determined that it is not useful for any more requests in this transaction to attempt to allocate in the destination RMT due to situations associated with request processing */
        uint64_t corrupt                  : 1;	/* SSID State entry is corrupted */
        uint64_t undefine_61_58           : 4;	/* undefined */
        uint64_t req_rd_err1              : 1;	/* Uncorrectable error reading SSID State through MMR */
        uint64_t req_rd_err2              : 1;	/* Uncorrectable error reading SSID State through MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_ssid_state_data3_desc_t;

typedef union ar_nic_ssid_dbg_ssid_state_data4_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t sent_req_count           :16;	/* A count of the number of request packets, modulo 2**16, sent to the network for the transaction */
                uint64_t initiator                : 2;	/* The functional unit that last allocated this ssid entry */
                uint64_t channel                  : 7;	/* This field identifies the particular FMA descriptor, BTE channel, or virtual CE to which the sequence belongs */
                uint64_t ptag                     : 8;	/* This field contains the value of the  */
                uint64_t invalid_ptag             : 1;	/* PTAG value may be corrupted */
                uint64_t dstid                    : 2;	/* This field contains the value of the  */
                uint64_t destination              :16;	/* This field contains the value of the  */
                uint64_t ntt                      : 1;	/* This field contains the value of the  */
                uint64_t squelch_rmt              : 1;	/* When asserted the SSID has determined that it is not useful for any more requests in this transaction to attempt to allocate in the destination RMT */
                uint64_t alloc_in_rmt             : 1;	/* When asserted the transaction included at least one network request of a type that may have caused allocation in the destination RMT CAM */
                uint64_t unreachable_ep           : 1;	/* When this bit is set, the endpoint targeted by the transaction has been declared to be unreachable */
                uint64_t multi_dest               : 1;	/* When this bit is set, network requests with different DESTINATION / DSTID / NTT values have been issued within the transaction */
                uint64_t corrupt                  : 1;	/* SSID State entry is corrupted */
                uint64_t undefine_62_58           : 5;	/* undefined */
                uint64_t reqrsp_rd_err            : 1;	/* Uncorrectable error reading SSID State through MMR */
            };
            struct {
                uint64_t undefine_q0_f1_22_0      :23;	/* undefined */
                uint64_t is_putmsg                : 1;	/* If INITIATOR = BTE, this bit indicates whether or not the BTE transaction is a PUTMSG transaction */
                uint64_t is_bte_send              : 1;	/* If INITIATOR = BTE, this bit indicates whether or not the BTE transaction is a BTE_SEND transaction */
                uint64_t undefine_q0_f1_63_25     :39;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_ssid_state_data4_desc_t;

typedef union ar_nic_ssid_dbg_ssid_state_data5_desc {
    struct {
        // QW0
        uint64_t src_cqe_data             :48;	/* SSCN CQE data */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_ssid_state_data5_desc_t;

typedef union ar_nic_ssid_dbg_ssid_state_data6_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ Handle for SSCN CQE */
        uint64_t cq_nsrc                  : 2;	/* This field indicates that a source side completion event is to be reported: 00 = no 01 = yes 11 = iff error 10 = An uncorrectable error occurred reading any of the fields covered by REQCQ_RD_ERR1 bit while processing a request packet after the transaction's SequenceComplete or BTE_SendComplete request packet had already been processed */
        uint64_t src_req_status           : 6;	/* This field records the error status of the first request packet in the sequence with an error status indicating an error */
        uint64_t undefine_61_19           :43;	/* undefined */
        uint64_t reqcq_rd_err1            : 1;	/* Uncorrectable error reading SSID State through MMR */
        uint64_t reqcq_rd_err2            : 1;	/* Uncorrectable error reading SSID State through MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_ssid_state_data6_desc_t;

typedef union ar_nic_ssid_dbg_ssid_state_data7_desc {
    struct {
        // QW0
        uint64_t frac_get_rsp             : 2;	/* Fractional get responses */
        uint64_t frac_famo_rsp            : 2;	/* Fractional fetching AMO responses */
        uint64_t rcvd_rsp_count           :16;	/* A count of the number of response packets, modulo 2**16, that have been received for the transaction */
        uint64_t cpltn_mode               : 3;	/* Indicates the completion mode of the transaction: 000: DSMN Not Required or SyncComplete /     BTE_SendComplete not yet received001: MsgSendComplete has been sent, it is possible     for a MsgRcvComplete to be sent */
        uint64_t mrc_or_abort_sent        : 1;	/* A MsgRcvComplete or an Abort request has been sent for the transaction */
        uint64_t rcv_notify_del           : 1;	/* Destination side notification delivered */
        uint64_t rmt_miss                 : 1;	/* If set, at least one request packet is known to have not been able to allocate in the Receive Message Table (RMT) at the destination */
        uint64_t ssid_state               : 3;	/* Indicates the state of the transaction: 0: Active     Source block (FMA / BTE / CE) may still     issue more requests1: Waiting for outstanding responses     All normal requests issued     (MRC or Abort may still be issued)2: Waiting for an intentional timeout          The associated ssid value is intentionally        not being freed until the stale ssid          detection timeout interval has elapsed */
        uint64_t dcq_overrun              : 1;	/* When this bit is set to 1, a destination endpoint has reported that a CQE for this transaction was dropped due to a CQ overrun condition */
        uint64_t error_status             : 6;	/* Remote request and local response error status */
        uint64_t error_location           : 1;	/* If an error is reported in ERROR_STATUS, this field identifies the location where the error was detected: 0: Detected during request processing at destination1: Detected during response processing at source */
        uint64_t rcvd_rsp_state           : 2;	/* Status of response reception from the remote endpoint: 0: No responses received     No responses have been received yet     from the real remote endpoint1: One or more responses received     One or more responses have been     received from the real remote endpoint     but response to the first sent request     has not yet been received2: Remote endpoint received first request     Response to first sent request has been     received from the remote endpoint3: Remote endpoint unreachable     Too many response time-outs have been     received */
        uint64_t first_too_late           : 1;	/* When this bit is set to 1, the response to the first sent request packet was received too late */
        uint64_t epoch                    : 3;	/* The  */
        uint64_t ack_pending              : 1;	/* This bit is set if process_response has sent a req cmd to process_request for which process_response needs to receive an Ack rsp cmd back */
        uint64_t flush_state              : 2;	/* Indicates the WC block flush status for the transaction */
        uint64_t undefine_62_46           :17;	/* undefined */
        uint64_t rspcq_rd_err             : 1;	/* Uncorrectable error reading SSID State through MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_ssid_state_data7_desc_t;

typedef union ar_nic_ssid_dbg_req_chan_state_desc {
    struct {
        // QW0
        uint64_t ssid                     : 9;	/* The ID of the ssid entry currently allocated to this Request Channel */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t ssid_active              : 1;	/* When 1, a ssid entry is allocated for this Request Channel */
        uint64_t undefine_62_17           :46;	/* undefined */
        uint64_t req_chan_error           : 1;	/* An uncorrectable memory error occurred reading the Request Channel state information through this MMR */
    };
    uint64_t qwords[1];
} ar_nic_ssid_dbg_req_chan_state_desc_t;


#endif
