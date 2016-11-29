/******************************************************************************
 * COPYRIGHT CRAY INC. ar_rmt_structs.h
 * FILE: ar_rmt_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_RMT_STRUCTS_H_
#define _AR_RMT_STRUCTS_H_

/*
 *  ARIES RMT STRUCTURES
 */
typedef union ar_nic_rmt_cfg_bte_rx_desc_desc {
    struct {
        // QW0
        uint64_t undefine_5_0             : 6;	/* undefined */
        uint64_t base_addr                :42;	/* Bits 47:6 of the base address of the BTE_Send message receive buffer associated with this RX descriptor */
        uint64_t pi_hints                 : 3;	/* Processor Interface hints */
        uint64_t undefine_61_51           :11;	/* undefined */
        uint64_t delayed_irq_en           : 1;	/* Delayed Interrupt Enable When IRQ_EN = 1, this bit controls whether the interrupt can be aggregated and delayed */
        uint64_t irq_en                   : 1;	/* Receive BTE Interrupt Request Enable */
    };
    uint64_t qwords[1];
} ar_nic_rmt_cfg_bte_rx_desc_desc_t;

typedef union ar_nic_rmt_cfg_bte_rx_chan_desc_desc {
    struct {
        // QW0
        uint64_t rx_limit                 :32;	/* Receive Buffer limit used for overrun protection */
        uint64_t rx_idv                   : 8;	/* Receive Interrupt Delay Value This field represents the time that a receive interrupt can be delayed in IDV_INTERVAL increments */
        uint64_t tc                       : 4;	/* Translation Context for BTE_Send packets */
        uint64_t tc_wb                    : 4;	/* Translation Context for Rx Descriptor Writebacks */
        uint64_t tph                      : 3;	/* Translation Processing Hints for BTE_Send packets */
        uint64_t undefine_51_51           : 1;	/* undefined */
        uint64_t tph_wb                   : 3;	/* Translation Processing Hints for Rx Descriptor Writebacks */
        uint64_t irq_idx                  : 5;	/* Interrupt Request Index */
        uint64_t undefine_60_60           : 1;	/* undefined */
        uint64_t rx_rst                   : 1;	/* 0 = Normal Operation 1 = Reset BTE RX Channel When reset, new BTE_Send sequences are not allowed to allocate in the RX CAM */
        uint64_t rx_en                    : 1;	/* 0 = BTE RX Channel Disabled 1 = BTE RX Channel Enabled When disabled, new sequences are not allowed to allocate in the RX CAM */
        uint64_t rx_intr_en               : 1;	/* 0 = Receive Interrupt Disabled 1 = Receive Interrupt Enabled */
        // QW1
        uint64_t cpu_rx_base_addr         :48;	/* Base address of the CPU shadow copy of the BTE RX descriptors */
        uint64_t undefine_127_112         :16;	/* undefined */
        // QW2
        uint64_t rx_rd_idx                :16;	/* Receive queue read index */
        uint64_t undefine_159_144         :16;	/* undefined */
        uint64_t active_rmt_entries       :10;	/* Number of active RMT entries associated with this BTE RX channel */
        uint64_t undefine_191_170         :22;	/* undefined */
        // QW3
        uint64_t rx_wr_idx                :16;	/* Receive queue write index */
        uint64_t undefine_255_208         :48;	/* undefined */
    };
    uint64_t qwords[4];
} ar_nic_rmt_cfg_bte_rx_chan_desc_desc_t;

typedef union ar_nic_rmt_cfg_timer_control_desc {
    struct {
        // QW0
        uint64_t idv_interval             :14;	/* IDV interval */
        uint64_t undefine_31_14           :18;	/* undefined */
        uint64_t scrub_interval           :16;	/* RMT CAM Scrub Interval Default value is number of RMT core clock cycles in one millisecond divided by the number RMT CAM entries (512) */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_cfg_timer_control_desc_t;

typedef union ar_nic_rmt_cfg_cam_params0_desc {
    struct {
        // QW0
        uint64_t npt_credits              : 8;	/* NPT credits */
        uint64_t cq_credits               : 8;	/* The MAX number of outstanding CQEs from the RMT */
        uint64_t undefine_62_16           :47;	/* undefined */
        uint64_t rmt_en                   : 1;	/* RMT Enable */
    };
    uint64_t qwords[1];
} ar_nic_rmt_cfg_cam_params0_desc_t;

typedef union ar_nic_rmt_cfg_cam_params1_desc {
    struct {
        // QW0
        uint64_t evict_threshold          :11;	/* Send Eviction Threshold */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t max_cam_entries          :11;	/* Maximum number of active CAM entries RMT may have at any given time */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t send_timeout_value       :19;	/* Timeout value for BTE_Send sequences */
        uint64_t dsmn_timeout_value       :19;	/* Timeout value for DSMN sequences */
        uint64_t send_timeout_mode        : 1;	/* Timeout mode for BTE_Send sequences */
        uint64_t dsmn_timeout_mode        : 1;	/* Timeout mode for DSMN sequences */
    };
    uint64_t qwords[1];
} ar_nic_rmt_cfg_cam_params1_desc_t;

typedef union ar_nic_rmt_cfg_rx_desc_btech_base_idx_desc {
    struct {
        // QW0
        uint64_t btech0                   :16;	/* BTE RX Descriptor Channel 0 Base Index */
        uint64_t btech1                   :16;	/* BTE RX Descriptor Channel 1 Base Index */
        uint64_t btech2                   :16;	/* BTE RX Descriptor Channel 2 Base Index */
        uint64_t btech3                   :16;	/* BTE RX Descriptor Channel 3 Base Index */
    };
    uint64_t qwords[1];
} ar_nic_rmt_cfg_rx_desc_btech_base_idx_desc_t;

typedef union ar_nic_rmt_cfg_rx_desc_btech_cnt_desc {
    struct {
        // QW0
        uint64_t btech0                   :16;	/* BTE RX Descriptor Channel 0 Count */
        uint64_t btech1                   :16;	/* BTE RX Descriptor Channel 1 Count */
        uint64_t btech2                   :16;	/* BTE RX Descriptor Channel 2 Count */
        uint64_t btech3                   :16;	/* BTE RX Descriptor Channel 3 Count */
    };
    uint64_t qwords[1];
} ar_nic_rmt_cfg_rx_desc_btech_cnt_desc_t;

typedef union ar_nic_rmt_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t inq_parity               : 1;	/* A header flit parity error was detected in the input queue, causing the packet to be dropped */
        uint64_t payload_sbe              : 1;	/* A correctable payload flit ECC error was detected and corrected in the input queue */
        uint64_t payload_mbe              : 1;	/* An uncorrectable payload flit ECC error was detected in the input queue */
        uint64_t payload_mbe_drop         : 1;	/* Reported uncorrectable payload flit ECC error */
        uint64_t protocol_err             : 1;	/* A DSMN packet hit a BTE_Send sequence in the CAM, or a BTE_Send or BTE_SendComplete packet hit a DSMN sequence in the CAM */
        uint64_t seq_tbl_sbe              : 1;	/* A correctable ECC error occurred while reading the Sequence Table */
        uint64_t seq_tbl_mbe              : 1;	/* An uncorrectable ECC error occurred while reading the Sequence Table */
        uint64_t desc_tbl_sbe             : 1;	/* A correctable ECC error occurred while reading the RX Descriptor Table */
        uint64_t desc_tbl_mbe             : 1;	/* An uncorrectable error occurred while reading the RX Descriptor Table */
        uint64_t malformed_pkt            : 1;	/* RMT encountered a malformed packet */
        uint64_t undeliverable_cqe        : 1;	/* A CQE Event could not be delivered */
        uint64_t rx_desc_btech_inv        : 1;	/* RMT received a BTE_Send packet request for a BTE Channel that is not enabled or that is in reset */
        uint64_t rx_btech_unavailable     : 1;	/* RMT received a BTE_Send packet request for a BTE Channel that does not possess an RX Descriptor */
        uint64_t rx_send_cam_miss         : 1;	/* RMT received a BTE_Send packet request for a new sequence, but could not store it in the CAM due to it being full */
        uint64_t rx_overrun               : 1;	/* RMT received a BTE_Send packet request that exceeded that BTE Channel's RxBufSize */
        uint64_t send_timeout             : 1;	/* A BTE_Send sequence exceeded its time allowed in the CAM */
        uint64_t dsmn_timeout             : 1;	/* A DSMN sequence exceeded its time allowed in the CAM */
        uint64_t send_cam_parity          : 1;	/* The scrubber evicted a BTE_Send sequence from the CAM because of a parity error in its CAM tag */
        uint64_t dsmn_cam_parity          : 1;	/* The scrubber evicted a DSMN sequence from the CAM because of a parity error in its CAM tag */
        uint64_t btech0_last_desc         : 1;	/* The last RX Descriptor for BTE Channel 0 has been consumed */
        uint64_t btech0_no_desc           : 1;	/* A request for an RX Descriptor for BTE Channel 0 failed */
        uint64_t btech1_last_desc         : 1;	/* The last RX Descriptor for BTE Channel 1 has been consumed */
        uint64_t btech1_no_desc           : 1;	/* A request for an RX Descriptor for BTE Channel 1 failed */
        uint64_t btech2_last_desc         : 1;	/* The last RX Descriptor for BTE Channel 2 has been consumed */
        uint64_t btech2_no_desc           : 1;	/* A request for an RX Descriptor for BTE Channel 2 failed */
        uint64_t btech3_last_desc         : 1;	/* The last RX Descriptor for BTE Channel 3 has been consumed */
        uint64_t btech3_no_desc           : 1;	/* A request for an RX Descriptor for BTE Channel 3 failed */
        uint64_t stall_dropped            : 1;	/* A stall operation (an internally generated operation used to perform completion events) was dropped */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_flg_desc_t;

typedef union ar_nic_rmt_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t inq_parity               : 1;	/* A header flit parity error was detected in the input queue, causing the packet to be dropped */
        uint64_t payload_sbe              : 1;	/* A correctable payload flit ECC error was detected and corrected in the input queue */
        uint64_t payload_mbe              : 1;	/* An uncorrectable payload flit ECC error was detected in the input queue */
        uint64_t payload_mbe_drop         : 1;	/* Reported uncorrectable payload flit ECC error */
        uint64_t protocol_err             : 1;	/* A DSMN packet hit a BTE_Send sequence in the CAM, or a BTE_Send or BTE_SendComplete packet hit a DSMN sequence in the CAM */
        uint64_t seq_tbl_sbe              : 1;	/* A correctable ECC error occurred while reading the Sequence Table */
        uint64_t seq_tbl_mbe              : 1;	/* An uncorrectable ECC error occurred while reading the Sequence Table */
        uint64_t desc_tbl_sbe             : 1;	/* A correctable ECC error occurred while reading the RX Descriptor Table */
        uint64_t desc_tbl_mbe             : 1;	/* An uncorrectable error occurred while reading the RX Descriptor Table */
        uint64_t malformed_pkt            : 1;	/* RMT encountered a malformed packet */
        uint64_t undeliverable_cqe        : 1;	/* A CQE Event could not be delivered */
        uint64_t rx_desc_btech_inv        : 1;	/* RMT received a BTE_Send packet request for a BTE Channel that is not enabled or that is in reset */
        uint64_t rx_btech_unavailable     : 1;	/* RMT received a BTE_Send packet request for a BTE Channel that does not possess an RX Descriptor */
        uint64_t rx_send_cam_miss         : 1;	/* RMT received a BTE_Send packet request for a new sequence, but could not store it in the CAM due to it being full */
        uint64_t rx_overrun               : 1;	/* RMT received a BTE_Send packet request that exceeded that BTE Channel's RxBufSize */
        uint64_t send_timeout             : 1;	/* A BTE_Send sequence exceeded its time allowed in the CAM */
        uint64_t dsmn_timeout             : 1;	/* A DSMN sequence exceeded its time allowed in the CAM */
        uint64_t send_cam_parity          : 1;	/* The scrubber evicted a BTE_Send sequence from the CAM because of a parity error in its CAM tag */
        uint64_t dsmn_cam_parity          : 1;	/* The scrubber evicted a DSMN sequence from the CAM because of a parity error in its CAM tag */
        uint64_t btech0_last_desc         : 1;	/* The last RX Descriptor for BTE Channel 0 has been consumed */
        uint64_t btech0_no_desc           : 1;	/* A request for an RX Descriptor for BTE Channel 0 failed */
        uint64_t btech1_last_desc         : 1;	/* The last RX Descriptor for BTE Channel 1 has been consumed */
        uint64_t btech1_no_desc           : 1;	/* A request for an RX Descriptor for BTE Channel 1 failed */
        uint64_t btech2_last_desc         : 1;	/* The last RX Descriptor for BTE Channel 2 has been consumed */
        uint64_t btech2_no_desc           : 1;	/* A request for an RX Descriptor for BTE Channel 2 failed */
        uint64_t btech3_last_desc         : 1;	/* The last RX Descriptor for BTE Channel 3 has been consumed */
        uint64_t btech3_no_desc           : 1;	/* A request for an RX Descriptor for BTE Channel 3 failed */
        uint64_t stall_dropped            : 1;	/* A stall operation (an internally generated operation used to perform completion events) was dropped */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_clr_desc_t;

typedef union ar_nic_rmt_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t inq_parity               : 1;	/* 1:1 */
        uint64_t payload_sbe              : 1;	/* 2:2 */
        uint64_t payload_mbe              : 1;	/* 3:3 */
        uint64_t payload_mbe_drop         : 1;	/* 4:4 */
        uint64_t protocol_err             : 1;	/* 5:5 */
        uint64_t seq_tbl_sbe              : 1;	/* 6:6 */
        uint64_t seq_tbl_mbe              : 1;	/* 7:7 */
        uint64_t desc_tbl_sbe             : 1;	/* 8:8 */
        uint64_t desc_tbl_mbe             : 1;	/* 9:9 */
        uint64_t malformed_pkt            : 1;	/* 10:10 */
        uint64_t undeliverable_cqe        : 1;	/* 11:11 */
        uint64_t rx_desc_btech_inv        : 1;	/* 12:12 */
        uint64_t rx_btech_unavailable     : 1;	/* 13:13 */
        uint64_t rx_send_cam_miss         : 1;	/* 14:14 */
        uint64_t rx_overrun               : 1;	/* 15:15 */
        uint64_t send_timeout             : 1;	/* 16:16 */
        uint64_t dsmn_timeout             : 1;	/* 17:17 */
        uint64_t send_cam_parity          : 1;	/* 18:18 */
        uint64_t dsmn_cam_parity          : 1;	/* 19:19 */
        uint64_t btech0_last_desc         : 1;	/* 20:20 */
        uint64_t btech0_no_desc           : 1;	/* 21:21 */
        uint64_t btech1_last_desc         : 1;	/* 22:22 */
        uint64_t btech1_no_desc           : 1;	/* 23:23 */
        uint64_t btech2_last_desc         : 1;	/* 24:24 */
        uint64_t btech2_no_desc           : 1;	/* 25:25 */
        uint64_t btech3_last_desc         : 1;	/* 26:26 */
        uint64_t btech3_no_desc           : 1;	/* 27:27 */
        uint64_t stall_dropped            : 1;	/* 28:28 */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_hss_msk_desc_t;

typedef union ar_nic_rmt_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t inq_parity               : 1;	/* 1:1 */
        uint64_t payload_sbe              : 1;	/* 2:2 */
        uint64_t payload_mbe              : 1;	/* 3:3 */
        uint64_t payload_mbe_drop         : 1;	/* 4:4 */
        uint64_t protocol_err             : 1;	/* 5:5 */
        uint64_t seq_tbl_sbe              : 1;	/* 6:6 */
        uint64_t seq_tbl_mbe              : 1;	/* 7:7 */
        uint64_t desc_tbl_sbe             : 1;	/* 8:8 */
        uint64_t desc_tbl_mbe             : 1;	/* 9:9 */
        uint64_t malformed_pkt            : 1;	/* 10:10 */
        uint64_t undeliverable_cqe        : 1;	/* 11:11 */
        uint64_t rx_desc_btech_inv        : 1;	/* 12:12 */
        uint64_t rx_btech_unavailable     : 1;	/* 13:13 */
        uint64_t rx_send_cam_miss         : 1;	/* 14:14 */
        uint64_t rx_overrun               : 1;	/* 15:15 */
        uint64_t send_timeout             : 1;	/* 16:16 */
        uint64_t dsmn_timeout             : 1;	/* 17:17 */
        uint64_t send_cam_parity          : 1;	/* 18:18 */
        uint64_t dsmn_cam_parity          : 1;	/* 19:19 */
        uint64_t btech0_last_desc         : 1;	/* 20:20 */
        uint64_t btech0_no_desc           : 1;	/* 21:21 */
        uint64_t btech1_last_desc         : 1;	/* 22:22 */
        uint64_t btech1_no_desc           : 1;	/* 23:23 */
        uint64_t btech2_last_desc         : 1;	/* 24:24 */
        uint64_t btech2_no_desc           : 1;	/* 25:25 */
        uint64_t btech3_last_desc         : 1;	/* 26:26 */
        uint64_t btech3_no_desc           : 1;	/* 27:27 */
        uint64_t stall_dropped            : 1;	/* 28:28 */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_os_msk_desc_t;

typedef union ar_nic_rmt_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t inq_parity               : 1;	/* 1:1 */
        uint64_t payload_sbe              : 1;	/* 2:2 */
        uint64_t payload_mbe              : 1;	/* 3:3 */
        uint64_t payload_mbe_drop         : 1;	/* 4:4 */
        uint64_t protocol_err             : 1;	/* 5:5 */
        uint64_t seq_tbl_sbe              : 1;	/* 6:6 */
        uint64_t seq_tbl_mbe              : 1;	/* 7:7 */
        uint64_t desc_tbl_sbe             : 1;	/* 8:8 */
        uint64_t desc_tbl_mbe             : 1;	/* 9:9 */
        uint64_t malformed_pkt            : 1;	/* 10:10 */
        uint64_t undeliverable_cqe        : 1;	/* 11:11 */
        uint64_t rx_desc_btech_inv        : 1;	/* 12:12 */
        uint64_t rx_btech_unavailable     : 1;	/* 13:13 */
        uint64_t rx_send_cam_miss         : 1;	/* 14:14 */
        uint64_t rx_overrun               : 1;	/* 15:15 */
        uint64_t send_timeout             : 1;	/* 16:16 */
        uint64_t dsmn_timeout             : 1;	/* 17:17 */
        uint64_t send_cam_parity          : 1;	/* 18:18 */
        uint64_t dsmn_cam_parity          : 1;	/* 19:19 */
        uint64_t btech0_last_desc         : 1;	/* 20:20 */
        uint64_t btech0_no_desc           : 1;	/* 21:21 */
        uint64_t btech1_last_desc         : 1;	/* 22:22 */
        uint64_t btech1_no_desc           : 1;	/* 23:23 */
        uint64_t btech2_last_desc         : 1;	/* 24:24 */
        uint64_t btech2_no_desc           : 1;	/* 25:25 */
        uint64_t btech3_last_desc         : 1;	/* 26:26 */
        uint64_t btech3_no_desc           : 1;	/* 27:27 */
        uint64_t stall_dropped            : 1;	/* 28:28 */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_first_flg_desc_t;

typedef union ar_nic_rmt_err_info_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t msk                      :28;	/* Masks updates to RMT_ERR_INFO_HSS_PKT (see Section 6 */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_info_hss_msk_desc_t;

typedef union ar_nic_rmt_err_info_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t msk                      :28;	/* Masks updates to RMT_ERR_INFO_OS_PKT (see Section 6 */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_info_os_msk_desc_t;

typedef union ar_nic_rmt_err_info_desc_tbl_ecc_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t mmr_detected_sbe         : 1;	/* The SBE was observed during an MMR read */
        uint64_t mmr_detected_mbe         : 1;	/* The MBE was observed during an MMR read */
        uint64_t sbe_syndrome             : 8;	/* SBE syndrome */
        uint64_t sbe_address              :10;	/* Address of SBE */
        uint64_t undefine_23_22           : 2;	/* undefined */
        uint64_t mbe_syndrome             : 8;	/* MBE syndrome */
        uint64_t mbe_address              :10;	/* Address of MBE */
        uint64_t undefine_63_42           :22;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_info_desc_tbl_ecc_desc_t;

typedef union ar_nic_rmt_err_info_seq_tbl_ecc_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t mmr_detected_sbe         : 1;	/* The SBE was observed during an MMR read */
        uint64_t mmr_detected_mbe         : 1;	/* The MBE was observed during an MMR read */
        uint64_t sbe_syndrome             : 8;	/* SBE Syndrome */
        uint64_t sbe_address              : 9;	/* Address of SBE */
        uint64_t sbe_ram_msk              : 3;	/* The mask of the first rams to record correctable errors */
        uint64_t mbe_syndrome             : 8;	/* MBE Syndrome */
        uint64_t mbe_address              : 9;	/* Address of MBE */
        uint64_t mbe_ram_msk              : 3;	/* The mask of the first rams to record uncorrectable errors */
        uint64_t undefine_63_44           :20;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_info_seq_tbl_ecc_desc_t;

typedef union ar_nic_rmt_err_info_inq_parity_desc {
    struct {
        // QW0
        uint64_t msk                      : 4;	/* The mask of parity regions in error */
        uint64_t undefine_63_4            :60;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_info_inq_parity_desc_t;

typedef union ar_nic_rmt_err_info_payload_ecc_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t sbe_syndrome             : 8;	/* The SBE Syndrome */
        uint64_t sbe_msk                  : 2;	/* The mask of ECC regions that experienced an SBE */
        uint64_t undefine_23_14           :10;	/* undefined */
        uint64_t mbe_syndrome             : 8;	/* The MBE Syndrome */
        uint64_t mbe_msk                  : 2;	/* The mask of ECC regions that experienced an MBE */
        uint64_t undefine_63_34           :30;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_info_payload_ecc_desc_t;

typedef union ar_nic_rmt_err_info_hss_pkt_desc {
    struct {
        // QW0
        uint64_t ssid                     : 9;	/* SSID from packet header */
        uint64_t srcid                    : 2;	/* srcid from packet header */
        uint64_t source                   :16;	/* Source from packet header */
        uint64_t reqcmd                   : 9;	/* Command from packet header */
        uint64_t pktid                    :12;	/* pktID from packet header */
        uint64_t cam_idx                  : 9;	/* CAM index */
        uint64_t cam_fill                 : 1;	/* Set if the packet filled in the CAM */
        uint64_t cam_hit                  : 1;	/* Set if the packet hit in the CAM */
        uint64_t err_flg_num              : 5;	/* The encoded error flag number of the error recorded here */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_info_hss_pkt_desc_t;

typedef union ar_nic_rmt_err_info_os_pkt_desc {
    struct {
        // QW0
        uint64_t ssid                     : 9;	/* SSID from packet header */
        uint64_t srcid                    : 2;	/* SrcID from packet header */
        uint64_t source                   :16;	/* Source from packet header */
        uint64_t reqcmd                   : 9;	/* Command from packet header */
        uint64_t pktid                    :12;	/* PktId from packet header */
        uint64_t cam_idx                  : 9;	/* CAM index */
        uint64_t cam_fill                 : 1;	/* Set if the packet filled in the CAM */
        uint64_t cam_hit                  : 1;	/* Set if the packet hit in the CAM */
        uint64_t err_flg_num              : 5;	/* The encoded error flag number of the error recorded here */
    };
    uint64_t qwords[1];
} ar_nic_rmt_err_info_os_pkt_desc_t;

typedef union ar_nic_rmt_dbg_errinj_desc_tbl_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Error Injection Mode */
        uint64_t triggered                : 1;	/* This bit is set when an error is injected */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t checkbits                : 7;	/* Mask of checkbits to invert */
        uint64_t undefine_31_23           : 9;	/* undefined */
        uint64_t address                  :10;	/* Descriptor Table Address */
        uint64_t undefine_63_42           :22;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_dbg_errinj_desc_tbl_desc_t;

typedef union ar_nic_rmt_dbg_errinj_seq_tbl_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Error Injection Mode */
        uint64_t triggered                : 1;	/* This bit is set when an error is injected */
        uint64_t msk                      : 3;	/* Mask of RAMs to affect */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t checkbits                : 8;	/* Mask of checkbits to invert */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  : 9;	/* Descriptor Table Address */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_dbg_errinj_seq_tbl_desc_t;

typedef union ar_nic_rmt_dbg_errinj_inq_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 1;	/* Error Injection Mode */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* This bit is set when an error is injected */
        uint64_t count                    : 3;	/* Flit in which to inject the error */
        uint64_t undefine_9_7             : 3;	/* undefined */
        uint64_t tail                     : 1;	/* Set to invert the tail bit */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t parity                   : 4;	/* Mask of parity bits to invert */
        uint64_t checkbitslo              : 8;	/* Mask of checkbits to invert in lower ECC region */
        uint64_t checkbitsup              : 8;	/* Mask of checkbits to invert in upper ECC region */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_dbg_errinj_inq_desc_t;

typedef union ar_nic_rmt_dbg_errinj_cam_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Error Injection Mode */
        uint64_t triggered                : 1;	/* This bit is set when an error is injected */
        uint64_t undefine_31_4            :28;	/* undefined */
        uint64_t address                  : 9;	/* CAM Index */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_dbg_errinj_cam_desc_t;

typedef union ar_nic_rmt_prf_put_bytes_rx_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Count of PUT bytes received */
    };
    uint64_t qwords[1];
} ar_nic_rmt_prf_put_bytes_rx_desc_t;

typedef union ar_nic_rmt_prf_send_bytes_rx_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Count of BTE_Send bytes received */
    };
    uint64_t qwords[1];
} ar_nic_rmt_prf_send_bytes_rx_desc_t;

typedef union ar_nic_rmt_dbg_rx_cam_desc {
    struct {
        // QW0
        uint64_t cam_ssid                 : 9;	/* CAM SSID from packet header */
        uint64_t cam_srcid                : 2;	/* CAM SrcID from packet header */
        uint64_t cam_source               :16;	/* CAM Source from packet header */
        uint64_t cam_parity               : 1;	/* CAM Tag Parity */
        uint64_t cam_state                : 3;	/* CAM State */
        uint64_t undefine_63_31           :33;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rmt_dbg_rx_cam_desc_t;

typedef union ar_nic_rmt_dbg_seq_tbl_desc {
    struct {
        // QW0
        uint64_t bte_send                 : 1;	/* If 1, BTE_Send sequence field of Sequence Table are valid */
        uint64_t msg_complete_rx          : 1;	/* If 1, a MsgSendComplete or BTE_SendComplete for this sequence has been received */
        uint64_t pkt_flush                : 1;	/* Packet flush (fc) field from header of the MsgComplete packet received in this sequence */
        uint64_t undefine_5_3             : 3;	/* undefined */
        uint64_t epoch_en                 : 1;	/* If 1, EPOCH_TIME time to live is valid and this sequence can timeout */
        uint64_t epoch_mode               : 1;	/* If 1, EPOCH_TIME time to live is updated for on the arrival of each packet in this sequence */
        uint64_t epoch_time               :19;	/* Time to live of this sequence entry */
        uint64_t undefine_31_27           : 5;	/* undefined */
        uint64_t pktid                    :12;	/* Packet identifier from header of last packet received in this sequence */
        uint64_t undefine_47_44           : 4;	/* undefined */
        uint64_t pkt_cnt                  :16;	/* Sequence packet count, modulo 216 */
        // QW1 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t timeout                  : 1;	/* This sequence has timed out */
                uint64_t undefine_67_65           : 3;	/* undefined */
                uint64_t flag_op                  : 3;	/* When BTE_SEND = 0, Flag data operation to be performed on completion */
                uint64_t rx_delay_irq_en          : 1;	/* When BTE_SEND = 1 and RX_IRQ_EN = 1, an IRQ is queued on completion of this sequence until the IDV timer expires */
                uint64_t undefine_95_72           :24;	/* undefined */
                uint64_t rx_length_31_20          :12;	/* When BTE_SEND = 1, bits 31:20 of Rx Length for BTE_SEND sequence */
                uint64_t undefine_q1_f0_127_108   :20;	/* undefined */
            };
            struct {
                uint64_t undefine_q1_f1_67_64     : 4;	/* undefined */
                uint64_t rx_imm_en                : 1;	/* When BTE_SEND = 1, indicates RX_IMM_DATA is valid */
                uint64_t rx_overrun               : 1;	/* When BTE_SEND = 1, indicates a buffer overrun has occurred during receipt of this sequence */
                uint64_t rx_irq_en                : 1;	/* When BTE_SEND = 1, issue IRQ on completion of this sequence */
                uint64_t undefine_q1_f1_96_71     :26;	/* undefined */
                uint64_t cq_handle                :11;	/* When BTE_SEND = 0, this is the CQ handle for this sequence */
                uint64_t undefine_q1_f1_127_108   :20;	/* undefined */
            };
        };
        // QW2 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t rx_base_addr             :42;	/* When BTE_SEND = 1, Rx base address bits 47:6 to apply offset for BTE_SEND sequence packets */
                uint64_t rx_length_19_0           :20;	/* When BTE_SEND = 1, bits 19:0 of Rx Length for BTE_SEND sequences */
                uint64_t evicted                  : 1;	/* Sequence has been evicted */
                uint64_t rx_complete              : 1;	/* Sequence processing has been finalized */
            };
            struct {
                uint64_t cq_data                  :48;	/* When BTE_SEND = 0, data of CQE on completion */
                uint64_t undefine_q2_f1_179_176   : 4;	/* undefined */
                uint64_t msgcmp_tc                : 4;	/* When BTE_SEND = 0, MsgComplete Translation Context */
                uint64_t undefine_q2_f1_191_184   : 8;	/* undefined */
            };
        };
        // QW3 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t first_rx                 : 1;	/* First packet in sequence has been received */
                uint64_t undefine_194_193         : 2;	/* undefined */
                uint64_t flag_data_addr           :45;	/* When BTE_SEND = 0, Flag data write address */
                uint64_t rx_status                : 6;	/* Status of packets received */
                uint64_t err_loc                  : 2;	/* Error Location */
                uint64_t pi_hints                 : 3;	/* When BTE_SEND = 1, it is set to pi_hints[2:0] from RX Descriptor */
                uint64_t undefine_q3_f0_255_251   : 5;	/* undefined */
            };
            struct {
                uint64_t undefine_q3_f1_194_192   : 3;	/* undefined */
                uint64_t btech                    : 2;	/* When BTE_SEND = 1, BTE channel */
                uint64_t undefine_q3_f1_197_197   : 1;	/* undefined */
                uint64_t rx_desc_addr             :42;	/* When BTE_SEND = 1, BTE CPU RX Descriptor write address */
                uint64_t undefine_q3_f1_255_240   :16;	/* undefined */
            };
        };
        // QW4 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t rx_imm_data              ;	/* When BTE_SEND = 1, Rx Descriptor Immediate data */
            };
            struct {
                uint64_t flag_data                ;	/* When BTE_SEND = 0, Flag data */
            };
        };
    };
    uint64_t qwords[5];
} ar_nic_rmt_dbg_seq_tbl_desc_t;


#endif
