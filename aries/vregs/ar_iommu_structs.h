/******************************************************************************
 * COPYRIGHT CRAY INC. ar_iommu_structs.h
 * FILE: ar_iommu_structs.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/

#ifndef _AR_IOMMU_STRUCTS_H_
#define _AR_IOMMU_STRUCTS_H_

/*
 *  ARIES IOMMU STRUCTURES
 */
typedef union ar_nic_iommu_cfg_tbl_cq_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t undefine_q0_f0_63_0      :64;	/* undefined */
            };
            struct {
                uint64_t inval_mdd                :12;	/* Invalidate MDD ID */
                uint64_t undefine_q0_f1_63_12     :52;	/* undefined */
            };
            struct {
                uint64_t inval_iommu_pg_addr      :48;	/* Invalidate IOMMU Pages address[47:00] */
                uint64_t inval_iommu_els          : 1;	/* Invalidate IOMMU Pages Entry Level Select */
                uint64_t inval_iommu_pde          : 1;	/* Invalidate IOMMU Pages Directory Entry Flag */
                uint64_t undefine_q0_f2_51_50     : 2;	/* undefined */
                uint64_t inval_iommu_tc           : 4;	/* Invalidate IOMMU Pages Translation Context Register ID */
                uint64_t undefine_q0_f2_63_56     : 8;	/* undefined */
            };
            struct {
                uint64_t undefine_q0_f3_2_0       : 3;	/* undefined */
                uint64_t comp_wait_rsp_addr       :45;	/* Completion Wait Response Address(HPA) */
                uint64_t comp_wait_rsp_en         : 1;	/* Completion Wait Response Enable */
                uint64_t comp_wait_int_en         : 1;	/* Completion Wait Interrupt Enable */
                uint64_t comp_wait_stall          : 1;	/* Completion Wait stall command queue execution until this Completion Wait command completes */
                uint64_t undefine_q0_f3_51_51     : 1;	/* undefined */
                uint64_t comp_wait_tc_flush       : 4;	/* TCR to be used for RAT Flush Requests(Completion Wait) */
                uint64_t comp_wait_tc_sd          : 4;	/* TCR to be used for RAT Put/IRQ Requests(Completion_Wait) */
                uint64_t cmd                      : 4;	/* Command Type(all cmd entries) */
            };
        };
        // QW1
        uint64_t store_data               ;	/* Completion Wait Store Data */
    };
    uint64_t qwords[2];
} ar_nic_iommu_cfg_tbl_cq_desc_t;

typedef union ar_nic_iommu_cfg_tbl_tcr_desc {
    struct {
        // QW0
        uint64_t ignored_11_0             :12;	/* This field is available to software */
        uint64_t pt_root_ptr_47_12        :36;	/* Page Table root pointer */
        uint64_t pg_mode                  : 1;	/* Specify depth of page tables for this translation context:0b = 2 Level Page Table  1b = 1 Level Page Table (default page size 2MB) */
        uint64_t pg_size                  : 4;	/* Page Size to be used in 1-Level Page Table */
        uint64_t se                       : 1;	/* Suppress page fault errors */
        uint64_t sa                       : 1;	/* Suppress all page fault errors */
        uint64_t pte_rd_pi_tc             : 4;	/* Page Table Entry Get Request Transaction Translation Context */
        uint64_t pte_rd_pi_tph            : 3;	/* Page Table Entry Get Request Transaction Processing Hints */
        uint64_t pte_rd_pi_ro             : 1;	/* Page Table Entry Get Request Relaxed Ordering Hints */
        uint64_t context_en               : 1;	/* Setting to 1 enables this translation context */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_tbl_tcr_desc_t;

typedef union ar_nic_iommu_cfg_params_desc {
    struct {
        // QW0
        uint64_t iommu_en                 : 1;	/* When set to 1, IOMMU is enabled */
        uint64_t pte_format               : 1;	/* 0= Version 1 PTE Format 1= Version 2 PTE Format */
        uint64_t event_log_en             : 1;	/* Event log enable */
        uint64_t coherency                : 1;	/* This field indicates if IOMMU access to the page table structures are coherent (snooped) or not */
        uint64_t inv_pte_safe_mode        : 1;	/* Blocks all new translation requests when INVALIDATE_IOMMU_PAGES command is active in the Command Queue */
        uint64_t pte_re_fetch_mode        : 1;	/* If this bit is set, a PTE Cacheline re-fetch will occur if a translation request encounters a cached page table entry with a Not Present state */
        uint64_t iommu_chn_to_en          : 1;	/* IOMMU Channel Time Out Enable */
        uint64_t undefine_31_7            :25;	/* undefined */
        uint64_t iommu_chn_timeout        :32;	/* Initial timeout interval for IOMMU channel interfaces */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_params_desc_t;

typedef union ar_nic_iommu_cfg_crdts_desc {
    struct {
        // QW0
        uint64_t rat_crdts                : 8;	/* Maximum outstanding Request FLITS to RAT */
        uint64_t parb_crdts               : 8;	/* Maximum outstanding Request FLITS to PARB */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_crdts_desc_t;

typedef union ar_nic_iommu_cfg_cq_desc {
    struct {
        // QW0
        uint64_t ip_timeout_en            : 1;	/* Invalidate Page Table Entry Command Timeout Enable */
        uint64_t im_timeout_en            : 1;	/* Invalidate Memory Domain Handle Command Timeout Enable */
        uint64_t cw_timeout_en            : 1;	/* Completion Wait Command Timeout Enable */
        uint64_t cw_irq_en                : 1;	/* Completion Wait Command In-Band Interrupt Enable */
        uint64_t cw_irq_idx               : 5;	/* Completion Wait Command In-Band Interrupt Index */
        uint64_t cw_single_step           : 1;	/* Completion Wait Command Single Step Issue */
        uint64_t undefine_27_10           :18;	/* undefined */
        uint64_t cqc_timer_prescale       : 4;	/* Command Queue Command Timer Prescale 0000b = Decrement every clock period 0001b = Decrement every 2 clock periods 0010b = Decrement every 4 clock periods  */
        uint64_t cqcmd_timeout            :32;	/* Initial time out interval, for Command Queue Command Execution */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_cq_desc_t;

typedef union ar_nic_iommu_cfg_cqrp_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t cmd_rd_ptr               : 5;	/* Command queue read pointer */
        uint64_t undefine_63_9            :55;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_cqrp_desc_t;

typedef union ar_nic_iommu_cfg_cqwp_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t cmd_wr_ptr               : 5;	/* Command queue write pointer */
        uint64_t undefine_63_9            :55;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_cqwp_desc_t;

typedef union ar_nic_iommu_cfg_cqr_desc {
    struct {
        // QW0
        uint64_t cmd_queue_reset          : 1;	/* Storing 1 to this bit forces the IOMMU to reset the command queue hardware read and write pointers to zero */
        uint64_t ip_reset                 : 1;	/* Invalidate PTE Cache Command Timed out reset */
        uint64_t im_reset                 : 1;	/* Invalidate MDH Command Timed out reset */
        uint64_t cw_reset                 : 1;	/* Reset Completion Wait Command Manager, and Flush Command */
        uint64_t undefine_63_4            :60;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_cqr_desc_t;

typedef union ar_nic_iommu_cfg_elog_desc {
    struct {
        // QW0
        uint64_t event_tc                 : 4;	/* Event log entry Translation Context */
        uint64_t event_base               :48;	/* Event log base address */
        uint64_t event_len                : 4;	/* Specifies the length of the event log in power of 2 increments: 0001b = 2 entries  */
        uint64_t event_ro                 : 1;	/* Event Log entry Put requests Relaxed Ordering mode */
        uint64_t undefine_57_57           : 1;	/* undefined */
        uint64_t irq_en                   : 1;	/* Event Log In-band Interrupt enable */
        uint64_t irq_idx                  : 5;	/* Event Log In-band Interrupt Index */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_elog_desc_t;

typedef union ar_nic_iommu_cfg_elog_rp_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t event_rd_ptr             :16;	/* Specifies the 128 bit aligned offset from the event log base address register that is read next by software */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_elog_rp_desc_t;

typedef union ar_nic_iommu_cfg_elog_wp_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t event_wr_ptr             :16;	/* Specifies the 128 bit aligned offset from the event log base address register that is written next by the IOMMU when an event is generated */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_cfg_elog_wp_desc_t;

typedef union ar_nic_iommu_sts_desc {
    struct {
        // QW0
        uint64_t trp_active               : 1;	/* The Translation Request pipeline has valid requests in progress */
        uint64_t trp_empty                : 1;	/* The Translation Request pipeline has no valid requests */
        uint64_t trp_hold                 : 1;	/* The Translation Request pipeline is stalled for outstanding PTE Get requests or a busy PTE cache */
        uint64_t reserved_7_3             : 5;	/* Reserved */
        uint64_t parb_chn_crdts           : 8;	/* Current PARB Request Channel Credit Count */
        uint64_t rat_chn_crdts            : 8;	/* Current RAT Request Channel Credit Count */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_sts_desc_t;

typedef union ar_nic_iommu_sts_cq_desc {
    struct {
        // QW0
        uint64_t inval_pte_act            : 1;	/* Invalidate PTE Cache Command In Progress */
        uint64_t inval_mdh_act            : 1;	/* Invalidate MDH Command In Progress */
        uint64_t comp_wait_act            : 1;	/* Completion Wait Command in progress */
        uint64_t reserved_3               : 1;	/* Reserved */
        uint64_t inval_mdh_to             : 1;	/* Invalidate MDH Command Timed out */
        uint64_t inval_pte_to             : 1;	/* Invalidate PTE Cache Command Timed out */
        uint64_t inval_pte_hw_err         : 1;	/* Invalidate PTE Cache Command Hardware Error */
        uint64_t comp_wait_to             : 1;	/* Completion Wait Command Timed out */
        uint64_t comp_wait_done           : 1;	/* A COMPLETION_WAIT command has completed */
        uint64_t npt_comp_wait_sent       : 1;	/* Non-Posted Table Completion Wait Command Request Sent */
        uint64_t npt_comp_wait_ack        : 1;	/* Non-Posted Table Completion Wait Command Response Received */
        uint64_t rat_comp_wait_sent       : 1;	/* Remote Address Translation Completion Wait Command Request Sent */
        uint64_t rat_comp_wait_ack        : 1;	/* Remote Address Translation Completion Wait Command Response Received */
        uint64_t bte_comp_wait_sent       : 1;	/* Block Transfer Engine Completion Wait Command Request Sent */
        uint64_t bte_comp_wait_ack        : 1;	/* Block Transfer Engine Completion Wait Command Response Received */
        uint64_t cq_comp_wait_sent        : 1;	/* Completion Queue Completion Wait Command Request Sent */
        uint64_t cq_comp_wait_ack         : 1;	/* Completion Queue Completion Wait Command Response Received */
        uint64_t wc_comp_wait_sent        : 1;	/* Write Combining Completion Wait Command Request Sent */
        uint64_t wc_comp_wait_ack         : 1;	/* Write Combining Completion Wait Command Response Received */
        uint64_t rat_flush_sent           : 1;	/* RAT Flush Packet Sent */
        uint64_t undefine_31_20           :12;	/* undefined */
        uint64_t cq_cmd_val               :32;	/* Command Queue Valid Commands */
    };
    uint64_t qwords[1];
} ar_nic_iommu_sts_cq_desc_t;

typedef union ar_nic_iommu_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t iommu_pe                 : 1;	/* An IOMMU PTE Get Response Header Parity Error has been detected */
        uint64_t ptec_tag_sbe             : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t ptec_tag_mbe             : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t ptec_data_sbe            : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t ptec_data_mbe            : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t cmd_queue_sbe            : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t cmd_queue_mbe            : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t tc_reg_sbe               : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t tc_reg_mbe               : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t tr_buff_sbe              : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t tr_buf_mbe               : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t tr_buf_of                : 1;	/* IOMMU received a new translation request with maximum(32) valid translation requests in progress */
        uint64_t tr_queue_err             : 1;	/* One of the three Translation Request Queues was overrun */
        uint64_t rsp_fifo_of              : 1;	/* The NPT interface response FIFO overflowed */
        uint64_t rsp_fifo_uf              : 1;	/* The NPT interface response FIFO underflowed */
        uint64_t event_log_of             : 1;	/* The Event Log FIFO overflowed( */
        uint64_t event_log_uf             : 1;	/* The Event Log FIFO underflowed */
        uint64_t cq_cmd_to                : 1;	/* A Command Queue Command has not completed before the CQCmd Timer expired */
        uint64_t cq_ip_hw_err             : 1;	/* The execution of an Invalidate PTE command resulted in a Multiple Bit Error in either the Translation Context Register read, or the PTE Cache read */
        uint64_t illegal_cmd              : 1;	/* An illegal command was encountered in the Command Queue */
        uint64_t pi_chn_to                : 1;	/* A Processor Interface Request or Response channel has stalled */
        uint64_t pte_pkt_err              : 1;	/* A PTE Get response was received without payload flits */
        uint64_t pte_rsp_err              : 1;	/* A PTE Get response was received that did not match a PTE OFB(possibly a stale response after an OFB timeout) */
        uint64_t event_tc_inval_of        : 1;	/* When read as 1, an event log TC Invalid event overflow has occurred */
        uint64_t event_iopg_of            : 1;	/* When read as 1, an event log IO Page Fault event overflow has occurred */
        uint64_t event_hw_of              : 1;	/* When read as 1, an event log Hardware Error event overflow has occurred */
        uint64_t event_ill_cmd_of         : 1;	/* When read as 1, an event log Illegal Command event overflow has occurred */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_flg_desc_t;

typedef union ar_nic_iommu_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t iommu_pe                 : 1;	/* An IOMMU PTE Get Response Header Parity Error has been detected */
        uint64_t ptec_tag_sbe             : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t ptec_tag_mbe             : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t ptec_data_sbe            : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t ptec_data_mbe            : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t cmd_queue_sbe            : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t cmd_queue_mbe            : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t tc_reg_sbe               : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t tc_reg_mbe               : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t tr_buff_sbe              : 1;	/* An IOMMU register read port detected a Correctable Error */
        uint64_t tr_buf_mbe               : 1;	/* An IOMMU register read port detected an Uncorrectable Error */
        uint64_t tr_buf_of                : 1;	/* IOMMU received a new translation request with maximum(32) valid translation requests in progress */
        uint64_t tr_queue_err             : 1;	/* One of the three Translation Request Queues was overrun */
        uint64_t rsp_fifo_of              : 1;	/* The NPT interface response FIFO overflowed */
        uint64_t rsp_fifo_uf              : 1;	/* The NPT interface response FIFO underflowed */
        uint64_t event_log_of             : 1;	/* The Event Log FIFO overflowed( */
        uint64_t event_log_uf             : 1;	/* The Event Log FIFO underflowed */
        uint64_t cq_cmd_to                : 1;	/* A Command Queue Command has not completed before the CQCmd Timer expired */
        uint64_t cq_ip_hw_err             : 1;	/* The execution of an Invalidate PTE command resulted in a Multiple Bit Error in either the Translation Context Register read, or the PTE Cache read */
        uint64_t illegal_cmd              : 1;	/* An illegal command was encountered in the Command Queue */
        uint64_t pi_chn_to                : 1;	/* A Processor Interface Request or Response channel has stalled */
        uint64_t pte_pkt_err              : 1;	/* A PTE Get response was received without payload flits */
        uint64_t pte_rsp_err              : 1;	/* A PTE Get response was received that did not match a PTE OFB(possibly a stale response after an OFB timeout) */
        uint64_t event_tc_inval_of        : 1;	/* When read as 1, an event log TC Invalid event overflow has occurred */
        uint64_t event_iopg_of            : 1;	/* When read as 1, an event log IO Page Fault event overflow has occurred */
        uint64_t event_hw_of              : 1;	/* When read as 1, an event log Hardware Error event overflow has occurred */
        uint64_t event_ill_cmd_of         : 1;	/* When read as 1, an event log Illegal Command event overflow has occurred */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_clr_desc_t;

typedef union ar_nic_iommu_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t iommu_pe                 : 1;	/* 1:1 */
        uint64_t ptec_tag_sbe             : 1;	/* 2:2 */
        uint64_t ptec_tag_mbe             : 1;	/* 3:3 */
        uint64_t ptec_data_sbe            : 1;	/* 4:4 */
        uint64_t ptec_data_mbe            : 1;	/* 5:5 */
        uint64_t cmd_queue_sbe            : 1;	/* 6:6 */
        uint64_t cmd_queue_mbe            : 1;	/* 7:7 */
        uint64_t tc_reg_sbe               : 1;	/* 8:8 */
        uint64_t tc_reg_mbe               : 1;	/* 9:9 */
        uint64_t tr_buff_sbe              : 1;	/* 10:10 */
        uint64_t tr_buf_mbe               : 1;	/* 11:11 */
        uint64_t tr_buf_of                : 1;	/* 12:12 */
        uint64_t tr_queue_err             : 1;	/* 13:13 */
        uint64_t rsp_fifo_of              : 1;	/* 14:14 */
        uint64_t rsp_fifo_uf              : 1;	/* 15:15 */
        uint64_t event_log_of             : 1;	/* 16:16 */
        uint64_t event_log_uf             : 1;	/* 17:17 */
        uint64_t cq_cmd_to                : 1;	/* 18:18 */
        uint64_t cq_ip_hw_err             : 1;	/* 19:19 */
        uint64_t illegal_cmd              : 1;	/* 20:20 */
        uint64_t pi_chn_to                : 1;	/* 21:21 */
        uint64_t pte_pkt_err              : 1;	/* 22:22 */
        uint64_t pte_rsp_err              : 1;	/* 23:23 */
        uint64_t event_tc_inval_of        : 1;	/* 24:24 */
        uint64_t event_iopg_of            : 1;	/* 25:25 */
        uint64_t event_hw_of              : 1;	/* 26:26 */
        uint64_t event_ill_cmd_of         : 1;	/* 27:27 */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_hss_msk_desc_t;

typedef union ar_nic_iommu_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t iommu_pe                 : 1;	/* 1:1 */
        uint64_t ptec_tag_sbe             : 1;	/* 2:2 */
        uint64_t ptec_tag_mbe             : 1;	/* 3:3 */
        uint64_t ptec_data_sbe            : 1;	/* 4:4 */
        uint64_t ptec_data_mbe            : 1;	/* 5:5 */
        uint64_t cmd_queue_sbe            : 1;	/* 6:6 */
        uint64_t cmd_queue_mbe            : 1;	/* 7:7 */
        uint64_t tc_reg_sbe               : 1;	/* 8:8 */
        uint64_t tc_reg_mbe               : 1;	/* 9:9 */
        uint64_t tr_buff_sbe              : 1;	/* 10:10 */
        uint64_t tr_buf_mbe               : 1;	/* 11:11 */
        uint64_t tr_buf_of                : 1;	/* 12:12 */
        uint64_t tr_queue_err             : 1;	/* 13:13 */
        uint64_t rsp_fifo_of              : 1;	/* 14:14 */
        uint64_t rsp_fifo_uf              : 1;	/* 15:15 */
        uint64_t event_log_of             : 1;	/* 16:16 */
        uint64_t event_log_uf             : 1;	/* 17:17 */
        uint64_t cq_cmd_to                : 1;	/* 18:18 */
        uint64_t cq_ip_hw_err             : 1;	/* 19:19 */
        uint64_t illegal_cmd              : 1;	/* 20:20 */
        uint64_t pi_chn_to                : 1;	/* 21:21 */
        uint64_t pte_pkt_err              : 1;	/* 22:22 */
        uint64_t pte_rsp_err              : 1;	/* 23:23 */
        uint64_t event_tc_inval_of        : 1;	/* 24:24 */
        uint64_t event_iopg_of            : 1;	/* 25:25 */
        uint64_t event_hw_of              : 1;	/* 26:26 */
        uint64_t event_ill_cmd_of         : 1;	/* 27:27 */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_os_msk_desc_t;

typedef union ar_nic_iommu_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t iommu_pe                 : 1;	/* 1:1 */
        uint64_t ptec_tag_sbe             : 1;	/* 2:2 */
        uint64_t ptec_tag_mbe             : 1;	/* 3:3 */
        uint64_t ptec_data_sbe            : 1;	/* 4:4 */
        uint64_t ptec_data_mbe            : 1;	/* 5:5 */
        uint64_t cmd_queue_sbe            : 1;	/* 6:6 */
        uint64_t cmd_queue_mbe            : 1;	/* 7:7 */
        uint64_t tc_reg_sbe               : 1;	/* 8:8 */
        uint64_t tc_reg_mbe               : 1;	/* 9:9 */
        uint64_t tr_buff_sbe              : 1;	/* 10:10 */
        uint64_t tr_buf_mbe               : 1;	/* 11:11 */
        uint64_t tr_buf_of                : 1;	/* 12:12 */
        uint64_t tr_queue_err             : 1;	/* 13:13 */
        uint64_t rsp_fifo_of              : 1;	/* 14:14 */
        uint64_t rsp_fifo_uf              : 1;	/* 15:15 */
        uint64_t event_log_of             : 1;	/* 16:16 */
        uint64_t event_log_uf             : 1;	/* 17:17 */
        uint64_t cq_cmd_to                : 1;	/* 18:18 */
        uint64_t cq_ip_hw_err             : 1;	/* 19:19 */
        uint64_t illegal_cmd              : 1;	/* 20:20 */
        uint64_t pi_chn_to                : 1;	/* 21:21 */
        uint64_t pte_pkt_err              : 1;	/* 22:22 */
        uint64_t pte_rsp_err              : 1;	/* 23:23 */
        uint64_t event_tc_inval_of        : 1;	/* 24:24 */
        uint64_t event_iopg_of            : 1;	/* 25:25 */
        uint64_t event_hw_of              : 1;	/* 26:26 */
        uint64_t event_ill_cmd_of         : 1;	/* 27:27 */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_first_flg_desc_t;

typedef union ar_nic_iommu_err_info_tcr_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t mmr_detected_sbe         : 1;	/* Command Queue MMR Single Bit Error occurred */
        uint64_t mmr_detected_mbe         : 1;	/* Command Queue MMR Multiple Bit Error occurred */
        uint64_t syndrome_sbe             : 8;	/* Translation Context SBE Syndrome */
        uint64_t sbe_tc                   : 4;	/* Translation Context SBE Register */
        uint64_t undefine_23_16           : 8;	/* undefined */
        uint64_t syndrome_mbe             : 8;	/* Translation Context MBE Syndrome */
        uint64_t mbe_tc                   : 4;	/* Translation Context MBE Register */
        uint64_t undefine_63_36           :28;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_tcr_desc_t;

typedef union ar_nic_iommu_err_info_trb_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t sbe_syndrome             : 8;	/* Translation Request Buffer SBE Syndrome */
        uint64_t sbe_addr                 : 5;	/* Translation Request Buffer SBE Address */
        uint64_t undefine_23_17           : 7;	/* undefined */
        uint64_t mbe_syndrome             : 8;	/* Translation Request Buffer MBE Syndrome */
        uint64_t mbe_addr                 : 5;	/* Translation Request Buffer MBE Address */
        uint64_t undefine_63_37           :27;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_trb_desc_t;

typedef union ar_nic_iommu_err_info_ptc_tag_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t sbe_syndrome             : 7;	/* PTEC Tag Way SBE Syndrome */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t sbe_address              : 5;	/* PTEC Tag Way SBE Address */
        uint64_t sbe_way                  : 2;	/* PTEC Tag SBE Way */
        uint64_t undefine_23_19           : 5;	/* undefined */
        uint64_t mbe_syndrome             : 7;	/* PTEC Tag Way MBE Syndrome */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t mbe_address              : 5;	/* PTEC Tag MBE Address */
        uint64_t mbe_way                  : 2;	/* PTEC Tag MBE Way */
        uint64_t undefine_63_39           :25;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_ptc_tag_desc_t;

typedef union ar_nic_iommu_err_info_ptc_data_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t sbe_syndrome             : 8;	/* PTEC Data SBE Syndrome */
        uint64_t sbe_address              : 7;	/* PTEC Data SBE Address */
        uint64_t sbe_seg                  : 1;	/* PTEC Data SBE Segment(0=lower 72 bit segment, 1=upper 72 bit segment) */
        uint64_t sbe_way                  : 2;	/* PTEC Data SBE Way */
        uint64_t undefine_23_22           : 2;	/* undefined */
        uint64_t mbe_syndrome             : 8;	/* PTEC Data MBE Syndrome */
        uint64_t mbe_address              : 7;	/* PTEC Data MBE Address */
        uint64_t mbe_seg                  : 1;	/* PTEC Data SBE Segment(0=lower 72 bit segment, 1=upper 72 bit segment) */
        uint64_t mbe_way                  : 2;	/* PTEC Data MBE Way */
        uint64_t undefine_63_42           :22;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_ptc_data_desc_t;

typedef union ar_nic_iommu_err_info_cqr_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t mmr_detected_sbe         : 1;	/* Command Queue Register Single Bit Error occurred */
        uint64_t mmr_detected_mbe         : 1;	/* Command Queue Register Multiple Bit Error occurred */
        uint64_t sbe_syndrome             : 8;	/* Command Queue Register SBE Syndrome */
        uint64_t sbe_address              : 6;	/* Command Queue Register SBE Address NOTE: Address LSB is select of upper or lower 64 bits of Command */
        uint64_t undefine_23_18           : 6;	/* undefined */
        uint64_t mbe_syndrome             : 8;	/* Command Queue Register MBE Syndrome */
        uint64_t mbe_address              : 6;	/* Command Queue Register MBE Address NOTE: Address LSB is select of upper or lower 64 bits of Command */
        uint64_t undefine_63_38           :26;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cqr_desc_t;

typedef union ar_nic_iommu_err_info_cnt_mbe_tcr_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* Number of Register Multiple Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_mbe_tcr_desc_t;

typedef union ar_nic_iommu_err_info_cnt_sbe_tcr_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* Number of Register Single Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_sbe_tcr_desc_t;

typedef union ar_nic_iommu_err_info_cnt_mbe_trb_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* Number of Register Multiple Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_mbe_trb_desc_t;

typedef union ar_nic_iommu_err_info_cnt_sbe_trb_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* Number of Register Single Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_sbe_trb_desc_t;

typedef union ar_nic_iommu_err_info_cnt_mbe_pt_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* Number of Register Multiple Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_mbe_pt_desc_t;

typedef union ar_nic_iommu_err_info_cnt_sbe_pt_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* Number of Register Single Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_sbe_pt_desc_t;

typedef union ar_nic_iommu_err_info_cnt_mbe_pd_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* Number of Register Multiple Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_mbe_pd_desc_t;

typedef union ar_nic_iommu_err_info_cnt_sbe_pd_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* Number of Register Single Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_sbe_pd_desc_t;

typedef union ar_nic_iommu_err_info_cnt_mbe_cqr_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* Number of Register Multiple Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_mbe_cqr_desc_t;

typedef union ar_nic_iommu_err_info_cnt_sbe_cqr_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* Number of Register Single Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_info_cnt_sbe_cqr_desc_t;

typedef union ar_nic_iommu_err_pf_desc {
    struct {
        // QW0
        uint64_t io_pg_fault              :16;	/* Bit field for IO page fault condition for translation contexts */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_pf_desc_t;

typedef union ar_nic_iommu_err_cpf_desc {
    struct {
        // QW0
        uint64_t clr_pg_fault             :16;	/* Bit field for clearing page fault condition for translation contexts for which the SE bit is set */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_err_cpf_desc_t;

typedef union ar_nic_iommu_dbg_errinj_misc_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once on next read */
        uint64_t triggered                : 1;	/* This status bit is cleared when the MMR is written and set when an error has been injected */
        uint64_t ramselect                : 4;	/* This field identifies the RAM in which errors will be injected */
        uint64_t undefine_15_8            : 8;	/* undefined */
        uint64_t checkbyte                : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the RAM address read to be inverted */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  :11;	/* This field indicates the address within selected RAM for which error injection is to occur */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_dbg_errinj_misc_desc_t;

typedef union ar_nic_iommu_dbg_errinj_ptec_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once on next read */
        uint64_t triggered                : 1;	/* This status bit is cleared when the MMR is written and set when an error has been injected */
        uint64_t ramselect                : 8;	/* This field identifies the RAM in which errors will be injected */
        uint64_t undefine_15_12           : 4;	/* undefined */
        uint64_t checkbyte                : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the RAM address read to be inverted */
        uint64_t checkbyte_u              : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the RAM address read to be inverted */
        uint64_t address                  :11;	/* This field indicates the address within the TX descriptor table for which error injection is to occur */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_iommu_dbg_errinj_ptec_desc_t;


#endif
