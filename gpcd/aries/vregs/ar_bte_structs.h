/******************************************************************************
 * COPYRIGHT CRAY INC. ar_bte_structs.h
 * FILE: ar_bte_structs.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/

#ifndef _AR_BTE_STRUCTS_H_
#define _AR_BTE_STRUCTS_H_

/*
 *  ARIES BTE STRUCTURES
 */
typedef union ar_nic_bte_cfg_tbl_desc_desc {
    struct {
        // QW0
        uint64_t rem_mem_offset           :40;	/* Remote Starting Offset Address */
        uint64_t dest_endpoint            :18;	/* Destination node ID */
        uint64_t bte_op                   : 2;	/* BTE Operation */
        uint64_t src_bte_cq_en            : 1;	/* Enable BTE completion queue event */
        uint64_t src_ssid_cq_en           : 1;	/* Enable SSID completion queue event */
        uint64_t nat_en                   : 1;	/* NAT Translation Enable */
        uint64_t ntt_en                   : 1;	/* NTT Translation Enable */
        // QW1 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t loc_mem_offset           :40;	/* If BTE_OP == BTE_GET, this field is the local memory offset */
                uint64_t loc_mdh                  :12;	/* If BTE_OP == BTE_GET, this field is the local memory domain handle */
                uint64_t rem_mdh                  :12;	/* Remote Memory Domain Handle */
            };
            struct {
                uint64_t loc_phys_addr            :48;	/* If BTE_OP == BTE_PUT or BTE_SEND and NAT_EN is cleared, this field is the full physical address of the local memory */
                uint64_t undefine_q1_f1_127_112   :16;	/* undefined */
            };
        };
        // QW2
        uint64_t xfer_len                 :32;	/* Transfer Length */
        uint64_t src_cqh                  :11;	/* Source Completion Queue Handle */
        uint64_t rem_ptag                 : 8;	/* Remote Memory Protection Tag */
        uint64_t loc_ptag                 : 8;	/* Local Memory Protection Tag */
        uint64_t tx_concatenate           : 1;	/* Concatenate Bit */
        uint64_t bte_immediate            : 1;	/* Use Immediate Data */
        uint64_t bte_fence                : 1;	/* Fence Bit */
        uint64_t irq_mode                 : 1;	/* Interrupt Request Mode */
        uint64_t delayed_irq_en           : 1;	/* Delayed Interrupt Enable */
        // QW3
        uint64_t src_cq_data              :48;	/* Source Completion Queue Data */
        uint64_t rd_no_snoop              : 1;	/* Don't force coherence */
        uint64_t rd_ro                    : 1;	/* Relaxed Ordering Allowed */
        uint64_t rc                       : 3;	/* Routing Control */
        uint64_t fmal                     : 1;	/* When set, tells the BTE this TX descriptor was launched via FMA */
        uint64_t bte_complete             : 1;	/* Transfer Complete Flag */
        uint64_t timeout_err              : 1;	/* Transfer Timeout Error Flag */
        uint64_t tx_sts                   : 6;	/* Transfer Status */
        uint64_t wc                       : 1;	/* The WC bit for BTE_GET operations */
        uint64_t reserved_255             : 1;	/* Reserved bit */
        // QW4
        uint64_t dest_user_data           ;	/* Destination User Data */
    };
    uint64_t qwords[5];
} ar_nic_bte_cfg_tbl_desc_desc_t;

typedef union ar_nic_bte_cfg_chan_desc_desc {
    struct {
        // QW0
        uint64_t tx_idv                   : 8;	/* Transmit interrupt delay value */
        uint64_t irq_idx                  : 5;	/* Interrupt request index */
        uint64_t tx_timeout_val           :19;	/* TX descriptor timeout value */
        uint64_t fma_max_xfer_len         :32;	/* The maximum transfer size in bytes allowed for an FMA initiated TX descriptor table entry write */
        // QW1
        uint64_t cpu_tx_base_addr         :48;	/* Address of CPU shadow copy of BTE TX descriptor table */
        uint64_t tx_dbg                   : 1;	/* Setting this field tells the BTE channel to clear the TX_EN bit when it finishes processing the next TX descriptor which generates an error */
        uint64_t tx_rst                   : 1;	/* 0 = Normal operation 1 = Reset TX BTE channel */
        uint64_t tx_en                    : 1;	/* 0 = BTE TX channel disabled 1 = BTE TX channel enabled */
        uint64_t tx_irq_en                : 1;	/* 0 = Transmit interrupt disabled 1 = Transmit interrupt enabled */
        uint64_t fma_no_bte_send          : 1;	/* Typically, BTE_SEND transfers are only used by system software and are used with a dedicated BTE channel */
        uint64_t fma_en                   : 1;	/* When FMA_EN is cleared, FMA launched transactions are disabled */
        uint64_t fma_anp_hw_clr_en        : 1;	/* Enable automatic clearing of FMA_ALLOW_NON_PRIV field by hardware */
        uint64_t max_num_ssids            : 9;	/* Maximum number of SSIDs this BTE channel may have in use at any one time */
        // QW2
        uint64_t tx_rd_idx                :11;	/* Transmit queue read index */
        uint64_t ssids_in_use_clr_en      : 1;	/* When this bit is set, and when the SSIDS_IN_USE field of the A_NIC_BTE_STS_TX_CTRL[3:0] MMR is at zero, both the GET_REQ_CNT field of the A_NIC_BTE_STS_PARB_RD_CHN[3:0] MMR and the PKT_CNT field for the correct channel of the A_NIC_BTE_STS_TARB_CHN MMR are forced to zero */
        uint64_t pi_tail_timeout_val      :19;	/* PI tail error timeout value */
        uint64_t undefine_159_159         : 1;	/* undefined */
        uint64_t wr_tc                    : 4;	/* The translation context bits used for TX descriptor write backs and IRQ packets */
        uint64_t rd_tc                    : 4;	/* The translation context bits used for local reads for BTE_PUT and BTE_SEND operation when NAT_EN == 0 */
        uint64_t wr_tph                   : 3;	/* The TPH bits used for TX descriptor write backs (these bits are forced to zero for IRQ packets) */
        uint64_t undefine_171_171         : 1;	/* undefined */
        uint64_t rd_tph                   : 3;	/* The TPH bits used for local reads for BTE_PUT and BTE_SEND operations when NAT_EN == 0 */
        uint64_t undefine_191_175         :17;	/* undefined */
        // QW3
        uint64_t tx_wr_idx                :11;	/* Transmit queue write index */
        uint64_t undefine_255_203         :53;	/* undefined */
        // QW4
        uint64_t fma_allow_non_priv       : 1;	/* Non-privileged FMA launched transactions (transactions with transaction control parameter PRIVILEGED = 0) are not enqueued unless the FMA_ALLOW_NON_PRIV parameter is set */
        uint64_t undefine_319_257         :63;	/* undefined */
        // QW5
        uint64_t ssids_in_use_clr         : 1;	/* When written as a one, clears the SSIDS_IN_USE count of the BTE channel */
        uint64_t undefine_383_321         :63;	/* undefined */
    };
    uint64_t qwords[6];
} ar_nic_bte_cfg_chan_desc_desc_t;

typedef union ar_nic_bte_cfg_desc_base_idx_desc {
    struct {
        // QW0
        uint64_t chn0_base                :11;	/* Channel 0 TX descriptor base index */
        uint64_t undefine_15_11           : 5;	/* undefined */
        uint64_t chn1_base                :11;	/* Channel 1 TX descriptor base index */
        uint64_t undefine_31_27           : 5;	/* undefined */
        uint64_t chn2_base                :11;	/* Channel 2 TX descriptor base index */
        uint64_t undefine_47_43           : 5;	/* undefined */
        uint64_t chn3_base                :11;	/* Channel 3 TX descriptor base index */
        uint64_t undefine_63_59           : 5;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_desc_base_idx_desc_t;

typedef union ar_nic_bte_cfg_desc_cnt_desc {
    struct {
        // QW0
        uint64_t chn0_cnt                 :12;	/* Channel 0 TX descriptor count */
        uint64_t undefine_15_12           : 4;	/* undefined */
        uint64_t chn1_cnt                 :12;	/* Channel 1 TX descriptor count */
        uint64_t undefine_31_28           : 4;	/* undefined */
        uint64_t chn2_cnt                 :12;	/* Channel 2 TX descriptor count */
        uint64_t undefine_47_44           : 4;	/* undefined */
        uint64_t chn3_cnt                 :12;	/* Channel 3 TX descriptor count */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_desc_cnt_desc_t;

typedef union ar_nic_bte_cfg_tmr_ctrl_desc {
    struct {
        // QW0
        uint64_t idv                      :12;	/* IDV 2 */
        uint64_t undefine_31_12           :20;	/* undefined */
        uint64_t millisecond              :20;	/* Millisecond interval */
        uint64_t undefine_63_52           :12;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_tmr_ctrl_desc_t;

typedef union ar_nic_bte_cfg_tarb_desc {
    struct {
        // QW0
        uint64_t pkt_crdts                :11;	/* Maximum number of packets the BTE is allowed to have outstanding in the network */
        uint64_t undefine_31_11           :21;	/* undefined */
        uint64_t flt_crdts                : 5;	/* Maximum number of flits the BTE is allowed to have outstanding in the TARB */
        uint64_t undefine_63_37           :27;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_tarb_desc_t;

typedef union ar_nic_bte_cfg_tarb_chn_desc {
    struct {
        // QW0
        uint64_t chn0_pkt_crdts           :11;	/* Maximum number of packets channel 0 may have outstanding in the network */
        uint64_t chn0_flt_crdts           : 5;	/* Maximum number of flits channel 0 may have outstanding to the TARB interface logic */
        uint64_t chn1_pkt_crdts           :11;	/* Maximum number of packets channel 1 may have outstanding in the network */
        uint64_t chn1_flt_crdts           : 5;	/* Maximum number of flits channel 1 may have outstanding to the TARB interface logic */
        uint64_t chn2_pkt_crdts           :11;	/* Maximum number of packets channel 2 may have outstanding in the network */
        uint64_t chn2_flt_crdts           : 5;	/* Maximum number of flits channel 2 may have outstanding to the TARB interface logic */
        uint64_t chn3_pkt_crdts           :11;	/* Maximum number of packets channel 3 may have outstanding in the network */
        uint64_t chn3_flt_crdts           : 5;	/* Maximum number of flits channel 3 may have outstanding to the TARB interface logic */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_tarb_chn_desc_t;

typedef union ar_nic_bte_cfg_parb_wr_desc {
    struct {
        // QW0
        uint64_t undefine_31_0            :32;	/* undefined */
        uint64_t flt_crdts                : 5;	/* Maximum number of flits BTE is allowed to have outstanding in the PARB */
        uint64_t undefine_63_37           :27;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_parb_wr_desc_t;

typedef union ar_nic_bte_cfg_parb_wr_chn_desc {
    struct {
        // QW0
        uint64_t undefine_10_0            :11;	/* undefined */
        uint64_t chn0_flt_crdts           : 5;	/* Maximum number of flits channel 0 may have outstanding to the write channel PARB interface logic */
        uint64_t undefine_26_16           :11;	/* undefined */
        uint64_t chn1_flt_crdts           : 5;	/* Maximum number of flits channel 1 may have outstanding to the write channel PARB interface logic */
        uint64_t undefine_42_32           :11;	/* undefined */
        uint64_t chn2_flt_crdts           : 5;	/* Maximum number of flits channel 2 may have outstanding to the write channel PARB interface logic */
        uint64_t undefine_58_48           :11;	/* undefined */
        uint64_t chn3_flt_crdts           : 5;	/* Maximum number of flits channel 3 may have outstanding to the write channel PARB interface logic */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_parb_wr_chn_desc_t;

typedef union ar_nic_bte_cfg_parb_rd_desc {
    struct {
        // QW0
        uint64_t pkt_crdts                : 8;	/* Maximum number of packets the BTE is allowed to have outstanding in the local memory */
        uint64_t undefine_31_8            :24;	/* undefined */
        uint64_t flt_crdts                : 5;	/* Maximum number of flits BTE is allowed to have outstanding in the PARB */
        uint64_t undefine_63_37           :27;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_parb_rd_desc_t;

typedef union ar_nic_bte_cfg_rd_op_ctrl_desc {
    struct {
        // QW0
        uint64_t max_get_req              :11;	/* Maximum number of GET requests this channel may have outstanding to the network at any given time */
        uint64_t get_quiesce_cnt          :11;	/* Once this channel has this many GET requests is process, wait GET_DLY cycles prior to issuing the next request */
        uint64_t get_dly                  : 8;	/* Once GET_QUIESCE_CNT is reached, wait this many BTE core clock cycles prior to issuing the next GET request */
        uint64_t undefine_31_30           : 2;	/* undefined */
        uint64_t max_rd_req               : 8;	/* Maximum number of PI RD requests this channel may have to the PI at any given time */
        uint64_t rd_quiesce_cnt           : 8;	/* Once this channel has this many PI read requests in process, wait PI_RD_DLY cycles prior to issuing the next request */
        uint64_t rd_dly                   : 8;	/* Once PI_RD_QUIESCE_CNT is reached, wait this many BTE core clock cycles prior to issuing the next PI read request */
        uint64_t chn_flt_crdts            : 5;	/* Maximum number of flits channel may have outstanding to the read channel PARB interface logic */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_rd_op_ctrl_desc_t;

typedef union ar_nic_bte_cfg_carb_desc {
    struct {
        // QW0
        uint64_t cq_crdts                 : 5;	/* Queue depth on BTE to CQ interface */
        uint64_t undefine_63_5            :59;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_cfg_carb_desc_t;

typedef union ar_nic_bte_prf_bytes_desc {
    struct {
        // QW0
        uint64_t bytes_cnt                ;	/* Current count of total number of bytes transmitted by this BTE channel */
    };
    uint64_t qwords[1];
} ar_nic_bte_prf_bytes_desc_t;

typedef union ar_nic_bte_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t tx_desc_tbl_sbe          : 1;	/* A single bit error has been detected and corrected in the BTE TX descriptor table */
        uint64_t tx_desc_tbl_mbe          : 1;	/* A multiple bit error has been detected in the BTE TX descriptor table */
        uint64_t rd_rsp_sbe               : 1;	/* A read channel response packet contained a single bit error in a data field */
        uint64_t rd_rsp_mbe               : 1;	/* A read channel response packet contained a multiple bit error in a data field */
        uint64_t rd_rsp_pkt_err           : 1;	/* A read channel response packet contained an error other than a data SECDED error */
        uint64_t chn0_tx_desc_unalgn_get  : 1;	/* A BTE TX descriptor for channel 0 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor */
        uint64_t chn1_tx_desc_unalgn_get  : 1;	/* A BTE TX descriptor for channel 1 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor */
        uint64_t chn2_tx_desc_unalgn_get  : 1;	/* A BTE TX descriptor for channel 2 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor */
        uint64_t chn3_tx_desc_unalgn_get  : 1;	/* A BTE TX descriptor for channel 3 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor */
        uint64_t chn0_tx_desc_inv_op      : 1;	/* A BTE TX descriptor for channel 0 contained an invalid operation type */
        uint64_t chn1_tx_desc_inv_op      : 1;	/* A BTE TX descriptor for channel 1 contained an invalid operation type */
        uint64_t chn2_tx_desc_inv_op      : 1;	/* A BTE TX descriptor for channel 2 contained an invalid operation type */
        uint64_t chn3_tx_desc_inv_op      : 1;	/* A BTE TX descriptor for channel 3 contained an invalid operation type */
        uint64_t chn0_desc_timeout        : 1;	/* TX descriptor processing by BTE channel 0 was aborted due to a timeout */
        uint64_t chn1_desc_timeout        : 1;	/* TX descriptor processing by BTE channel 1 was aborted due to a timeout */
        uint64_t chn2_desc_timeout        : 1;	/* TX descriptor processing by BTE channel 2 was aborted due to a timeout */
        uint64_t chn3_desc_timeout        : 1;	/* TX descriptor processing by BTE channel 3 was aborted due to a timeout */
        uint64_t chn0_desc_dbl_timeout    : 1;	/* BTE channel 0 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response */
        uint64_t chn1_desc_dbl_timeout    : 1;	/* BTE channel 1 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response */
        uint64_t chn2_desc_dbl_timeout    : 1;	/* BTE channel 2 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response */
        uint64_t chn3_desc_dbl_timeout    : 1;	/* BTE channel 3 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response */
        uint64_t chn0_bte_dropped_complete: 1;	/* BTE channel 0 was unable to send a requested CQE */
        uint64_t chn1_bte_dropped_complete: 1;	/* BTE channel 1 was unable to send a requested CQE */
        uint64_t chn2_bte_dropped_complete: 1;	/* BTE channel 2 was unable to send a requested CQE */
        uint64_t chn3_bte_dropped_complete: 1;	/* BTE channel 3 was unable to send a requested CQE */
        uint64_t chn0_ssid_dropped_complete: 1;	/* BTE channel 0 was unable to send a requested message complete */
        uint64_t chn1_ssid_dropped_complete: 1;	/* BTE channel 1 was unable to send a requested message complete */
        uint64_t chn2_ssid_dropped_complete: 1;	/* BTE channel 2 was unable to send a requested message complete */
        uint64_t chn3_ssid_dropped_complete: 1;	/* BTE channel 3 was unable to send a requested message complete */
        uint64_t chn0_algn_buf0_perr      : 1;	/* On BTE channel 0, alignment buffer 0, a parity error has been detected */
        uint64_t chn0_algn_buf1_perr      : 1;	/* On BTE channel 0, alignment buffer 1, a parity error has been detected */
        uint64_t chn1_algn_buf0_perr      : 1;	/* On BTE channel 1, alignment buffer 0, a parity error has been detected */
        uint64_t chn1_algn_buf1_perr      : 1;	/* On BTE channel 1, alignment buffer 1, a parity error has been detected */
        uint64_t chn2_algn_buf0_perr      : 1;	/* On BTE channel 2, alignment buffer 0, a parity error has been detected */
        uint64_t chn2_algn_buf1_perr      : 1;	/* On BTE channel 2, alignment buffer 1, a parity error has been detected */
        uint64_t chn3_algn_buf0_perr      : 1;	/* On BTE channel 3, alignment buffer 0, a parity error has been detected */
        uint64_t chn3_algn_buf1_perr      : 1;	/* On BTE channel 3, alignment buffer 1, a parity error has been detected */
        uint64_t chn0_nat_err             : 1;	/* On BTE channel 0, a NAT translation error has occurred */
        uint64_t chn1_nat_err             : 1;	/* On BTE channel 1, a NAT translation error has occurred */
        uint64_t chn2_nat_err             : 1;	/* On BTE channel 2, a NAT translation error has occurred */
        uint64_t chn3_nat_err             : 1;	/* On BTE channel 3, a NAT translation error has occurred */
        uint64_t fma_cqe_perr             : 1;	/* A parity error has been detected in the FLBTE CQE buffer */
        uint64_t chn0_debug               : 1;	/* Channel 0 debugging IRQ */
        uint64_t chn1_debug               : 1;	/* Channel 1 debugging IRQ */
        uint64_t chn2_debug               : 1;	/* Channel 2 debugging IRQ */
        uint64_t chn3_debug               : 1;	/* Channel 3 debugging IRQ */
        uint64_t undefine_63_47           :17;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_flg_desc_t;

typedef union ar_nic_bte_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t tx_desc_tbl_sbe          : 1;	/* A single bit error has been detected and corrected in the BTE TX descriptor table */
        uint64_t tx_desc_tbl_mbe          : 1;	/* A multiple bit error has been detected in the BTE TX descriptor table */
        uint64_t rd_rsp_sbe               : 1;	/* A read channel response packet contained a single bit error in a data field */
        uint64_t rd_rsp_mbe               : 1;	/* A read channel response packet contained a multiple bit error in a data field */
        uint64_t rd_rsp_pkt_err           : 1;	/* A read channel response packet contained an error other than a data SECDED error */
        uint64_t chn0_tx_desc_unalgn_get  : 1;	/* A BTE TX descriptor for channel 0 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor */
        uint64_t chn1_tx_desc_unalgn_get  : 1;	/* A BTE TX descriptor for channel 1 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor */
        uint64_t chn2_tx_desc_unalgn_get  : 1;	/* A BTE TX descriptor for channel 2 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor */
        uint64_t chn3_tx_desc_unalgn_get  : 1;	/* A BTE TX descriptor for channel 3 contained a BTE_GET operation type with a non 32 bit aligned value in either the REM_MEM_OFFSET field or the XFER_LEN field of the TX descriptor */
        uint64_t chn0_tx_desc_inv_op      : 1;	/* A BTE TX descriptor for channel 0 contained an invalid operation type */
        uint64_t chn1_tx_desc_inv_op      : 1;	/* A BTE TX descriptor for channel 1 contained an invalid operation type */
        uint64_t chn2_tx_desc_inv_op      : 1;	/* A BTE TX descriptor for channel 2 contained an invalid operation type */
        uint64_t chn3_tx_desc_inv_op      : 1;	/* A BTE TX descriptor for channel 3 contained an invalid operation type */
        uint64_t chn0_desc_timeout        : 1;	/* TX descriptor processing by BTE channel 0 was aborted due to a timeout */
        uint64_t chn1_desc_timeout        : 1;	/* TX descriptor processing by BTE channel 1 was aborted due to a timeout */
        uint64_t chn2_desc_timeout        : 1;	/* TX descriptor processing by BTE channel 2 was aborted due to a timeout */
        uint64_t chn3_desc_timeout        : 1;	/* TX descriptor processing by BTE channel 3 was aborted due to a timeout */
        uint64_t chn0_desc_dbl_timeout    : 1;	/* BTE channel 0 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response */
        uint64_t chn1_desc_dbl_timeout    : 1;	/* BTE channel 1 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response */
        uint64_t chn2_desc_dbl_timeout    : 1;	/* BTE channel 2 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response */
        uint64_t chn3_desc_dbl_timeout    : 1;	/* BTE channel 3 experienced a second timeout following an abort of TX descriptor processing, typically due to a lost PI RD request or response */
        uint64_t chn0_bte_dropped_complete: 1;	/* BTE channel 0 was unable to send a requested CQE */
        uint64_t chn1_bte_dropped_complete: 1;	/* BTE channel 1 was unable to send a requested CQE */
        uint64_t chn2_bte_dropped_complete: 1;	/* BTE channel 2 was unable to send a requested CQE */
        uint64_t chn3_bte_dropped_complete: 1;	/* BTE channel 3 was unable to send a requested CQE */
        uint64_t chn0_ssid_dropped_complete: 1;	/* BTE channel 0 was unable to send a requested message complete */
        uint64_t chn1_ssid_dropped_complete: 1;	/* BTE channel 1 was unable to send a requested message complete */
        uint64_t chn2_ssid_dropped_complete: 1;	/* BTE channel 2 was unable to send a requested message complete */
        uint64_t chn3_ssid_dropped_complete: 1;	/* BTE channel 3 was unable to send a requested message complete */
        uint64_t chn0_algn_buf0_perr      : 1;	/* On BTE channel 0, alignment buffer 0, a parity error has been detected */
        uint64_t chn0_algn_buf1_perr      : 1;	/* On BTE channel 0, alignment buffer 1, a parity error has been detected */
        uint64_t chn1_algn_buf0_perr      : 1;	/* On BTE channel 1, alignment buffer 0, a parity error has been detected */
        uint64_t chn1_algn_buf1_perr      : 1;	/* On BTE channel 1, alignment buffer 1, a parity error has been detected */
        uint64_t chn2_algn_buf0_perr      : 1;	/* On BTE channel 2, alignment buffer 0, a parity error has been detected */
        uint64_t chn2_algn_buf1_perr      : 1;	/* On BTE channel 2, alignment buffer 1, a parity error has been detected */
        uint64_t chn3_algn_buf0_perr      : 1;	/* On BTE channel 3, alignment buffer 0, a parity error has been detected */
        uint64_t chn3_algn_buf1_perr      : 1;	/* On BTE channel 3, alignment buffer 1, a parity error has been detected */
        uint64_t chn0_nat_err             : 1;	/* On BTE channel 0, a NAT translation error has occurred */
        uint64_t chn1_nat_err             : 1;	/* On BTE channel 1, a NAT translation error has occurred */
        uint64_t chn2_nat_err             : 1;	/* On BTE channel 2, a NAT translation error has occurred */
        uint64_t chn3_nat_err             : 1;	/* On BTE channel 3, a NAT translation error has occurred */
        uint64_t fma_cqe_perr             : 1;	/* A parity error has been detected in the FLBTE CQE buffer */
        uint64_t chn0_debug               : 1;	/* Channel 0 debugging IRQ */
        uint64_t chn1_debug               : 1;	/* Channel 1 debugging IRQ */
        uint64_t chn2_debug               : 1;	/* Channel 2 debugging IRQ */
        uint64_t chn3_debug               : 1;	/* Channel 3 debugging IRQ */
        uint64_t undefine_63_47           :17;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_clr_desc_t;

typedef union ar_nic_bte_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t tx_desc_tbl_sbe          : 1;	/* 1:1 */
        uint64_t tx_desc_tbl_mbe          : 1;	/* 2:2 */
        uint64_t rd_rsp_sbe               : 1;	/* 3:3 */
        uint64_t rd_rsp_mbe               : 1;	/* 4:4 */
        uint64_t rd_rsp_pkt_err           : 1;	/* 5:5 */
        uint64_t chn0_tx_desc_unalgn_get  : 1;	/* 6:6 */
        uint64_t chn1_tx_desc_unalgn_get  : 1;	/* 7:7 */
        uint64_t chn2_tx_desc_unalgn_get  : 1;	/* 8:8 */
        uint64_t chn3_tx_desc_unalgn_get  : 1;	/* 9:9 */
        uint64_t chn0_tx_desc_inv_op      : 1;	/* 10:10 */
        uint64_t chn1_tx_desc_inv_op      : 1;	/* 11:11 */
        uint64_t chn2_tx_desc_inv_op      : 1;	/* 12:12 */
        uint64_t chn3_tx_desc_inv_op      : 1;	/* 13:13 */
        uint64_t chn0_desc_timeout        : 1;	/* 14:14 */
        uint64_t chn1_desc_timeout        : 1;	/* 15:15 */
        uint64_t chn2_desc_timeout        : 1;	/* 16:16 */
        uint64_t chn3_desc_timeout        : 1;	/* 17:17 */
        uint64_t chn0_desc_dbl_timeout    : 1;	/* 18:18 */
        uint64_t chn1_desc_dbl_timeout    : 1;	/* 19:19 */
        uint64_t chn2_desc_dbl_timeout    : 1;	/* 20:20 */
        uint64_t chn3_desc_dbl_timeout    : 1;	/* 21:21 */
        uint64_t chn0_bte_dropped_complete: 1;	/* 22:22 */
        uint64_t chn1_bte_dropped_complete: 1;	/* 23:23 */
        uint64_t chn2_bte_dropped_complete: 1;	/* 24:24 */
        uint64_t chn3_bte_dropped_complete: 1;	/* 25:25 */
        uint64_t chn0_ssid_dropped_complete: 1;	/* 26:26 */
        uint64_t chn1_ssid_dropped_complete: 1;	/* 27:27 */
        uint64_t chn2_ssid_dropped_complete: 1;	/* 28:28 */
        uint64_t chn3_ssid_dropped_complete: 1;	/* 29:29 */
        uint64_t chn0_algn_buf0_perr      : 1;	/* 30:30 */
        uint64_t chn0_algn_buf1_perr      : 1;	/* 31:31 */
        uint64_t chn1_algn_buf0_perr      : 1;	/* 32:32 */
        uint64_t chn1_algn_buf1_perr      : 1;	/* 33:33 */
        uint64_t chn2_algn_buf0_perr      : 1;	/* 34:34 */
        uint64_t chn2_algn_buf1_perr      : 1;	/* 35:35 */
        uint64_t chn3_algn_buf0_perr      : 1;	/* 36:36 */
        uint64_t chn3_algn_buf1_perr      : 1;	/* 37:37 */
        uint64_t chn0_nat_err             : 1;	/* 38:38 */
        uint64_t chn1_nat_err             : 1;	/* 39:39 */
        uint64_t chn2_nat_err             : 1;	/* 40:40 */
        uint64_t chn3_nat_err             : 1;	/* 41:41 */
        uint64_t fma_cqe_perr             : 1;	/* 42:42 */
        uint64_t chn0_debug               : 1;	/* 43:43 */
        uint64_t chn1_debug               : 1;	/* 44:44 */
        uint64_t chn2_debug               : 1;	/* 45:45 */
        uint64_t chn3_debug               : 1;	/* 46:46 */
        uint64_t undefine_63_47           :17;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_hss_msk_desc_t;

typedef union ar_nic_bte_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t tx_desc_tbl_sbe          : 1;	/* 1:1 */
        uint64_t tx_desc_tbl_mbe          : 1;	/* 2:2 */
        uint64_t rd_rsp_sbe               : 1;	/* 3:3 */
        uint64_t rd_rsp_mbe               : 1;	/* 4:4 */
        uint64_t rd_rsp_pkt_err           : 1;	/* 5:5 */
        uint64_t chn0_tx_desc_unalgn_get  : 1;	/* 6:6 */
        uint64_t chn1_tx_desc_unalgn_get  : 1;	/* 7:7 */
        uint64_t chn2_tx_desc_unalgn_get  : 1;	/* 8:8 */
        uint64_t chn3_tx_desc_unalgn_get  : 1;	/* 9:9 */
        uint64_t chn0_tx_desc_inv_op      : 1;	/* 10:10 */
        uint64_t chn1_tx_desc_inv_op      : 1;	/* 11:11 */
        uint64_t chn2_tx_desc_inv_op      : 1;	/* 12:12 */
        uint64_t chn3_tx_desc_inv_op      : 1;	/* 13:13 */
        uint64_t chn0_desc_timeout        : 1;	/* 14:14 */
        uint64_t chn1_desc_timeout        : 1;	/* 15:15 */
        uint64_t chn2_desc_timeout        : 1;	/* 16:16 */
        uint64_t chn3_desc_timeout        : 1;	/* 17:17 */
        uint64_t chn0_desc_dbl_timeout    : 1;	/* 18:18 */
        uint64_t chn1_desc_dbl_timeout    : 1;	/* 19:19 */
        uint64_t chn2_desc_dbl_timeout    : 1;	/* 20:20 */
        uint64_t chn3_desc_dbl_timeout    : 1;	/* 21:21 */
        uint64_t chn0_bte_dropped_complete: 1;	/* 22:22 */
        uint64_t chn1_bte_dropped_complete: 1;	/* 23:23 */
        uint64_t chn2_bte_dropped_complete: 1;	/* 24:24 */
        uint64_t chn3_bte_dropped_complete: 1;	/* 25:25 */
        uint64_t chn0_ssid_dropped_complete: 1;	/* 26:26 */
        uint64_t chn1_ssid_dropped_complete: 1;	/* 27:27 */
        uint64_t chn2_ssid_dropped_complete: 1;	/* 28:28 */
        uint64_t chn3_ssid_dropped_complete: 1;	/* 29:29 */
        uint64_t chn0_algn_buf0_perr      : 1;	/* 30:30 */
        uint64_t chn0_algn_buf1_perr      : 1;	/* 31:31 */
        uint64_t chn1_algn_buf0_perr      : 1;	/* 32:32 */
        uint64_t chn1_algn_buf1_perr      : 1;	/* 33:33 */
        uint64_t chn2_algn_buf0_perr      : 1;	/* 34:34 */
        uint64_t chn2_algn_buf1_perr      : 1;	/* 35:35 */
        uint64_t chn3_algn_buf0_perr      : 1;	/* 36:36 */
        uint64_t chn3_algn_buf1_perr      : 1;	/* 37:37 */
        uint64_t chn0_nat_err             : 1;	/* 38:38 */
        uint64_t chn1_nat_err             : 1;	/* 39:39 */
        uint64_t chn2_nat_err             : 1;	/* 40:40 */
        uint64_t chn3_nat_err             : 1;	/* 41:41 */
        uint64_t fma_cqe_perr             : 1;	/* 42:42 */
        uint64_t chn0_debug               : 1;	/* 43:43 */
        uint64_t chn1_debug               : 1;	/* 44:44 */
        uint64_t chn2_debug               : 1;	/* 45:45 */
        uint64_t chn3_debug               : 1;	/* 46:46 */
        uint64_t undefine_63_47           :17;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_os_msk_desc_t;

typedef union ar_nic_bte_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t tx_desc_tbl_sbe          : 1;	/* 1:1 */
        uint64_t tx_desc_tbl_mbe          : 1;	/* 2:2 */
        uint64_t rd_rsp_sbe               : 1;	/* 3:3 */
        uint64_t rd_rsp_mbe               : 1;	/* 4:4 */
        uint64_t rd_rsp_pkt_err           : 1;	/* 5:5 */
        uint64_t chn0_tx_desc_unalgn_get  : 1;	/* 6:6 */
        uint64_t chn1_tx_desc_unalgn_get  : 1;	/* 7:7 */
        uint64_t chn2_tx_desc_unalgn_get  : 1;	/* 8:8 */
        uint64_t chn3_tx_desc_unalgn_get  : 1;	/* 9:9 */
        uint64_t chn0_tx_desc_inv_op      : 1;	/* 10:10 */
        uint64_t chn1_tx_desc_inv_op      : 1;	/* 11:11 */
        uint64_t chn2_tx_desc_inv_op      : 1;	/* 12:12 */
        uint64_t chn3_tx_desc_inv_op      : 1;	/* 13:13 */
        uint64_t chn0_desc_timeout        : 1;	/* 14:14 */
        uint64_t chn1_desc_timeout        : 1;	/* 15:15 */
        uint64_t chn2_desc_timeout        : 1;	/* 16:16 */
        uint64_t chn3_desc_timeout        : 1;	/* 17:17 */
        uint64_t chn0_desc_dbl_timeout    : 1;	/* 18:18 */
        uint64_t chn1_desc_dbl_timeout    : 1;	/* 19:19 */
        uint64_t chn2_desc_dbl_timeout    : 1;	/* 20:20 */
        uint64_t chn3_desc_dbl_timeout    : 1;	/* 21:21 */
        uint64_t chn0_bte_dropped_complete: 1;	/* 22:22 */
        uint64_t chn1_bte_dropped_complete: 1;	/* 23:23 */
        uint64_t chn2_bte_dropped_complete: 1;	/* 24:24 */
        uint64_t chn3_bte_dropped_complete: 1;	/* 25:25 */
        uint64_t chn0_ssid_dropped_complete: 1;	/* 26:26 */
        uint64_t chn1_ssid_dropped_complete: 1;	/* 27:27 */
        uint64_t chn2_ssid_dropped_complete: 1;	/* 28:28 */
        uint64_t chn3_ssid_dropped_complete: 1;	/* 29:29 */
        uint64_t chn0_algn_buf0_perr      : 1;	/* 30:30 */
        uint64_t chn0_algn_buf1_perr      : 1;	/* 31:31 */
        uint64_t chn1_algn_buf0_perr      : 1;	/* 32:32 */
        uint64_t chn1_algn_buf1_perr      : 1;	/* 33:33 */
        uint64_t chn2_algn_buf0_perr      : 1;	/* 34:34 */
        uint64_t chn2_algn_buf1_perr      : 1;	/* 35:35 */
        uint64_t chn3_algn_buf0_perr      : 1;	/* 36:36 */
        uint64_t chn3_algn_buf1_perr      : 1;	/* 37:37 */
        uint64_t chn0_nat_err             : 1;	/* 38:38 */
        uint64_t chn1_nat_err             : 1;	/* 39:39 */
        uint64_t chn2_nat_err             : 1;	/* 40:40 */
        uint64_t chn3_nat_err             : 1;	/* 41:41 */
        uint64_t fma_cqe_perr             : 1;	/* 42:42 */
        uint64_t chn0_debug               : 1;	/* 43:43 */
        uint64_t chn1_debug               : 1;	/* 44:44 */
        uint64_t chn2_debug               : 1;	/* 45:45 */
        uint64_t chn3_debug               : 1;	/* 46:46 */
        uint64_t undefine_63_47           :17;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_first_flg_desc_t;

typedef union ar_nic_bte_err_info_dst_desc {
    struct {
        // QW0
        uint64_t mmr_created_sbe          : 1;	/* MMR read created the SBE error */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t sbe_syndrome             : 8;	/* The single bit error syndrome for specified word part */
        uint64_t sbe_address              :11;	/* The TX descriptor address of the single bit error */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t sbe_part                 : 5;	/* The 64-bit word, or words, of the single bit error */
        uint64_t undefine_31_29           : 3;	/* undefined */
        uint64_t mmr_created_mbe          : 1;	/* MMR read created the MBE error */
        uint64_t undefine_35_33           : 3;	/* undefined */
        uint64_t mbe_syndrome             : 8;	/* The multiple bit error syndrome for specified word part */
        uint64_t mbe_address              :11;	/* The TX descriptor index of the multiple bit error */
        uint64_t undefine_55_55           : 1;	/* undefined */
        uint64_t mbe_part                 : 5;	/* The 64-bit word, or words, of the multiple bit error */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_dst_desc_t;

typedef union ar_nic_bte_err_info_cnt_sbe_dst_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Running count of single bit errors in the TX descriptor table */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_cnt_sbe_dst_desc_t;

typedef union ar_nic_bte_err_info_cnt_mbe_dst_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Running count of multiple bit errors in the TX descriptor table */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_cnt_mbe_dst_desc_t;

typedef union ar_nic_bte_err_info_ab0_desc {
    struct {
        // QW0
        uint64_t parity_mask              :16;	/* The parity error mask for RAM0, one bit for each of the 16 possibly failing bytes */
        uint64_t address                  : 7;	/* Address of RAM0 byte parity error */
        uint64_t undefine_63_23           :41;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_ab0_desc_t;

typedef union ar_nic_bte_err_info_ab1_desc {
    struct {
        // QW0
        uint64_t parity_mask              :16;	/* The parity error mask for RAM1, one bit for each of the 16 possibly failing bytes */
        uint64_t address                  : 7;	/* Address of RAM1 byte parity error */
        uint64_t undefine_63_23           :41;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_ab1_desc_t;

typedef union ar_nic_bte_err_info_cnt_ab0_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Running count of byte parity errors */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_cnt_ab0_desc_t;

typedef union ar_nic_bte_err_info_cnt_ab1_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Running count of byte parity errors */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_cnt_ab1_desc_t;

typedef union ar_nic_bte_err_info_fma_cqe0_desc {
    struct {
        // QW0
        uint64_t data                     :59;	/* Data for failing parity check */
        uint64_t parity                   : 1;	/* Parity bit for failing parity check */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_fma_cqe0_desc_t;

typedef union ar_nic_bte_err_info_fma_cqe1_desc {
    struct {
        // QW0
        uint64_t address                  : 7;	/* Address of RAM parity error */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t overrun                  : 1;	/* Indicates a parity error occurred while the FMA_CQE_PERR was set, indicating a parity error occurred and we were unable to capture the FMA descriptor number */
        uint64_t undefine_63_9            :55;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_fma_cqe1_desc_t;

typedef union ar_nic_bte_err_info_rd_rsp_sbe_desc {
    struct {
        // QW0
        uint64_t syndrome                 : 8;	/* The single bit error syndrome for specified word part */
        uint64_t part                     : 8;	/* The 64-bit word, or words, of the single bit error */
        uint64_t pi_id                    :10;	/* The pi_id field of the header flit */
        uint64_t undefine_63_26           :38;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_rd_rsp_sbe_desc_t;

typedef union ar_nic_bte_err_info_rd_rsp_mbe_desc {
    struct {
        // QW0
        uint64_t syndrome                 : 8;	/* The multiple bit error syndrome for specified word part */
        uint64_t part                     : 8;	/* The 64-bit word, or words, of the multiple bit error */
        uint64_t pi_id                    :10;	/* The pi_id field of the header flit */
        uint64_t undefine_63_26           :38;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_rd_rsp_mbe_desc_t;

typedef union ar_nic_bte_err_info_cnt_sbe_rd_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Running count of single bit errors */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_cnt_sbe_rd_desc_t;

typedef union ar_nic_bte_err_info_cnt_mbe_rd_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Running count of multiple bit errors */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_cnt_mbe_rd_desc_t;

typedef union ar_nic_bte_err_info_rd_rsp_desc {
    struct {
        // QW0
        uint64_t parity_err               : 4;	/* Parity error indication */
        uint64_t tail_err                 : 1;	/* Tail error indication */
        uint64_t rspcmd_err               : 1;	/* Response command error indication */
        uint64_t rstatus_err              : 1;	/* Error indicated in the rstatus field */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t parity                   : 4;	/* The four parity bits of the header flit */
        uint64_t tail                     : 1;	/* Tail bit of the failing flit */
        uint64_t uv                       : 1;	/* Upper valid bit of the header flit */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t rspcmd                   : 3;	/* The rspcmd field of the header flit */
        uint64_t undefine_19_19           : 1;	/* undefined */
        uint64_t pi_id                    :10;	/* The pi_id field of the header flit */
        uint64_t undefine_31_30           : 2;	/* undefined */
        uint64_t rstatus                  : 6;	/* The rstatus field of the header flit */
        uint64_t undefine_39_38           : 2;	/* undefined */
        uint64_t flit_num                 : 3;	/* The failing flit in the packet, only useful for tail errors */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_rd_rsp_desc_t;

typedef union ar_nic_bte_err_info_cnt_pkt_rd_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Running count of read response packet errors */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_cnt_pkt_rd_desc_t;

typedef union ar_nic_bte_err_info_timeout_desc {
    struct {
        // QW0
        uint64_t tx_state                 : 8;	/* The state the TX controller state machine was in when the timeout occurred */
        uint64_t tarb_pkt_cnt             :11;	/* The number of outstanding network packets when the timeout occurred */
        uint64_t tarb_flt_cnt             : 5;	/* The number of outstanding TARB flits when the timeout occurred */
        uint64_t wr_parb_flt_cnt          : 5;	/* The number of outstanding flits for the PARB write channel when the timeout occurred */
        uint64_t rd_parb_pkt_cnt          : 8;	/* The number of outstanding packets for the PARB read channel when the timeout occurred */
        uint64_t rd_parb_flt_cnt          : 5;	/* The number of outstanding flits for the PARB read channel when the timeout occurred */
        uint64_t get_req_cnt              :11;	/* The number of outstanding GET requests when the timeout occurred */
        uint64_t cq_req_cnt               : 5;	/* The number of outstanding CQ events when the timeout occurred */
        uint64_t bte_op                   : 2;	/* The BTE operation when the timeout occurred */
        uint64_t nat_trans                : 1;	/* Indicates the BTE was waiting for a NAT translation response when the timeout occurred */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_timeout_desc_t;

typedef union ar_nic_bte_err_info_dbg_desc {
    struct {
        // QW0
        uint64_t tx_state                 : 8;	/* State the channels TX controller state machine was in when the error occurred */
        uint64_t tx_desc_mbe              : 1;	/* An uncorrectable error in the TX descriptor has occurred */
        uint64_t tx_concatenate           : 1;	/* The concatenate bit was set in the failing descriptor */
        uint64_t unaligned                : 1;	/* Set when an unaligned GET is indicated */
        uint64_t tx_timeout               : 1;	/* A timeout for this TX descriptor has occurred */
        uint64_t align_done               : 1;	/* Alignment buffer operation completed */
        uint64_t align_buf_perr           : 1;	/* An alignment buffer parity error has occurred */
        uint64_t nat_error                : 1;	/* A not translation error occurred */
        uint64_t pi_rsp_error             : 1;	/* An error occurred on the PI response channel */
        uint64_t tx_rd_idx                :11;	/* Read index */
        uint64_t tx_dly_irq               : 1;	/* Delayed IRQ pending? */
        uint64_t tx_status                : 6;	/* Error status which caused this debug MMR to stop capture */
        uint64_t undefine_35_34           : 2;	/* undefined */
        uint64_t ssids_in_use             :10;	/* The number of SSIDS in use at the time of the error */
        uint64_t undefine_47_46           : 2;	/* undefined */
        uint64_t tx_wr_idx                :11;	/* Write index */
        uint64_t undefine_63_59           : 5;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_err_info_dbg_desc_t;

typedef union ar_nic_bte_sts_tarb_desc {
    struct {
        // QW0
        uint64_t pkt_cnt                  :11;	/* Current number of packets outstanding on the network */
        uint64_t undefine_31_11           :21;	/* undefined */
        uint64_t flt_cnt                  : 5;	/* Current number of flits outstanding to the TARB */
        uint64_t undefine_47_37           :11;	/* undefined */
        uint64_t bad_rsp_cnt              : 8;	/* Current number of SSID_RSP_AMOs received */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_sts_tarb_desc_t;

typedef union ar_nic_bte_sts_tarb_chn_desc {
    struct {
        // QW0
        uint64_t chn0_pkt_cnt             :11;	/* Current number of packets channel 0 has outstanding in the network */
        uint64_t chn0_flt_cnt             : 5;	/* Current number of flits channel 0 has outstanding to the TARB interface logic */
        uint64_t chn1_pkt_cnt             :11;	/* Current number of packets channel 1 has outstanding in the network */
        uint64_t chn1_flt_cnt             : 5;	/* Current number of flits channel 1 has outstanding to the TARB interface logic */
        uint64_t chn2_pkt_cnt             :11;	/* Current number of packets channel 2 has outstanding in the network */
        uint64_t chn2_flt_cnt             : 5;	/* Current number of flits channel 2 has outstanding to the TARB interface logic */
        uint64_t chn3_pkt_cnt             :11;	/* Current number of packets channel 3 has outstanding in the network */
        uint64_t chn3_flt_cnt             : 5;	/* Current number of flits channel 3 has outstanding to the TARB interface logic */
    };
    uint64_t qwords[1];
} ar_nic_bte_sts_tarb_chn_desc_t;

typedef union ar_nic_bte_sts_parb_wr_desc {
    struct {
        // QW0
        uint64_t undefine_31_0            :32;	/* undefined */
        uint64_t flt_cnt                  : 5;	/* Current number of flits the write channel has outstanding to the PARB logic */
        uint64_t undefine_63_37           :27;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_sts_parb_wr_desc_t;

typedef union ar_nic_bte_sts_parb_wr_chn_desc {
    struct {
        // QW0
        uint64_t undefine_10_0            :11;	/* undefined */
        uint64_t chn0_flt_cnt             : 5;	/* Current number of flits channel 0 has outstanding to the write channel PARB interface logic */
        uint64_t undefine_26_16           :11;	/* undefined */
        uint64_t chn1_flt_cnt             : 5;	/* Current number of flits channel 1 has outstanding to the write channel PARB interface logic */
        uint64_t undefine_42_32           :11;	/* undefined */
        uint64_t chn2_flt_cnt             : 5;	/* Current number of flits channel 2 has outstanding to the write channel PARB interface logic */
        uint64_t undefine_58_48           :11;	/* undefined */
        uint64_t chn3_flt_cnt             : 5;	/* Current number of flits channel 3 has outstanding to the write channel PARB interface logic */
    };
    uint64_t qwords[1];
} ar_nic_bte_sts_parb_wr_chn_desc_t;

typedef union ar_nic_bte_sts_parb_rd_desc {
    struct {
        // QW0
        uint64_t pkt_cnt                  : 8;	/* Current number of packets outstanding to the read channel local memory */
        uint64_t undefine_31_8            :24;	/* undefined */
        uint64_t flt_cnt                  : 5;	/* Current number of flits outstanding to the read channel PARB logic */
        uint64_t undefine_63_37           :27;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_sts_parb_rd_desc_t;

typedef union ar_nic_bte_sts_parb_rd_chn_desc {
    struct {
        // QW0
        uint64_t rd_req_cnt               : 8;	/* Current number of packets channel has outstanding in local memory */
        uint64_t undefine_31_8            :24;	/* undefined */
        uint64_t rd_flt_cnt               : 5;	/* Current number of flits channel has outstanding to the read channel PARB interface logic */
        uint64_t undefine_39_37           : 3;	/* undefined */
        uint64_t nat_req_ip               : 1;	/* A NAT request is currently outstanding */
        uint64_t undefine_47_41           : 7;	/* undefined */
        uint64_t get_req_cnt              :11;	/* Current number of GET requests channel has outstanding on the network */
        uint64_t undefine_63_59           : 5;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_sts_parb_rd_chn_desc_t;

typedef union ar_nic_bte_sts_tx_ctrl_desc {
    struct {
        // QW0
        uint64_t ssids_in_use             :10;	/* Number of SSIDs in use associated with this BTE channel */
        uint64_t undefine_15_10           : 6;	/* undefined */
        uint64_t tx_state                 : 8;	/* The BTE TX control state */
        uint64_t cqe_ip                   : 1;	/* The channel currently has a completion queue event in progress */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_sts_tx_ctrl_desc_t;

typedef union ar_nic_bte_sts_algn_buf_desc {
    struct {
        // QW0
        uint64_t block_vld                ;	/* Source tag request mask for outstanding PI RD requests */
    };
    uint64_t qwords[1];
} ar_nic_bte_sts_algn_buf_desc_t;

typedef union ar_nic_bte_dbg_errinj_desc_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once on next read */
        uint64_t triggered                : 1;	/* This status bit is cleared when the MMR is written and set when an error has been injected */
        uint64_t ramselect                : 5;	/* This field identifies the RAM in which errors will be injected */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t checkbyte                : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the RAM address read to be inverted */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  :11;	/* This field indicates the address within the TX descriptor table for which error injection is to occur */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_dbg_errinj_desc_desc_t;

typedef union ar_nic_bte_dbg_errinj_algn_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once on next read */
        uint64_t triggered                : 1;	/* This status bit is cleared when the MMR is written and set when an error has been injected */
        uint64_t ramselect                : 2;	/* This field identifies the RAM in which errors will be injected */
        uint64_t undefine_15_6            :10;	/* undefined */
        uint64_t parity                   :16;	/* When an error is injected, each bit that is set to one in this field causes the corresponding byte parity bit to be flipped for the address read */
        uint64_t address                  : 7;	/* This field indicates the address within the alignment buffer for which error injection is to occur */
        uint64_t undefine_63_39           :25;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_dbg_errinj_algn_desc_t;

typedef union ar_nic_bte_dbg_errinj_fma_cqe_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once on next read */
        uint64_t triggered                : 1;	/* This status bit is cleared when the MMR is written and set when an error has been injected */
        uint64_t undefine_31_4            :28;	/* undefined */
        uint64_t address                  : 7;	/* This field indicates the address within the FLBTE CQE buffer for which error injection is to occur */
        uint64_t undefine_63_39           :25;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_dbg_errinj_fma_cqe_desc_t;

typedef union ar_nic_bte_dbg_errinj_rd_rsp_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error in COUNT flit of one packet */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* This status bit is cleared when the MMR is written and set when an error has been injected */
        uint64_t count                    : 3;	/* Flit in which to inject the error */
        uint64_t undefine_9_7             : 3;	/* undefined */
        uint64_t tail                     : 1;	/* When an error is injected, invert the tail bit of the flit of the packet corresponding to the COUNT field */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t parity                   : 4;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted */
        uint64_t checkbytelo              : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the lower 64 bit data word to be inverted */
        uint64_t checkbyteup              : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the upper 64 bit data word to be inverted */
        uint64_t rstatus                  : 6;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the rstatus field of the BTE read response packet to be inverted */
        uint64_t undefine_39_38           : 2;	/* undefined */
        uint64_t cmd                      : 3;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the response command field of the BTE read response packet to be inverted */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_bte_dbg_errinj_rd_rsp_desc_t;


#endif
