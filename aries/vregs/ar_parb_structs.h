/******************************************************************************
 * COPYRIGHT CRAY INC. ar_parb_structs.h
 * FILE: ar_parb_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:02 2014
 ******************************************************************************/

#ifndef _AR_PARB_STRUCTS_H_
#define _AR_PARB_STRUCTS_H_

/*
 *  ARIES PARB STRUCTURES
 */
typedef union ar_nic_parb_cfg_params_desc {
    struct {
        // QW0
        uint64_t pi_vc0_crdts             : 8;	/* Processor Interface Credits for VC0 (applies only when USE_SHARED_CRDTS=0) */
        uint64_t pi_vc1_crdts             : 8;	/* Processor Interface Credits for VC1 (applies only when USE_SHARED_CRDTS=0) */
        uint64_t pi_vc2_crdts             : 8;	/* Processor Interface Credits for VC2 (applies only when USE_SHARED_CRDTS=0) */
        uint64_t pi_pool_crdts            : 8;	/* Processor Interface Credits to be shared among all VC's (applies only when USE_SHARED_CRDTS=1) */
        uint64_t use_shared_crdts         : 1;	/* When set to 1, available credits are taken from and returned to a pool of credits shared by all three virtual channels */
        uint64_t dla_vc                   : 3;	/* Virtual channel for DLA queue */
        uint64_t iommu_vc                 : 3;	/* Virtual channel for IOMMU queue */
        uint64_t wc_vc                    : 3;	/* Virtual channel for WC queue */
        uint64_t amo_vc                   : 3;	/* Virtual channel for AMO queue */
        uint64_t bte_wr_vc                : 3;	/* Virtual channel for BTE_WR queue */
        uint64_t bte_rd_vc                : 3;	/* Virtual channel for BTE_RD queue */
        uint64_t sf_dla                   : 1;	/* Enable store-and-forward on DLA queue */
        uint64_t sf_iommu                 : 1;	/* Enable store-and-forward on IOMMU queue */
        uint64_t sf_wc                    : 1;	/* Enable store-and-forward on WC queue */
        uint64_t sf_amo                   : 1;	/* Enable store-and-forward on AMO queue */
        uint64_t sf_bte_wr                : 1;	/* Enable store-and-forward on BTE_WR queue */
        uint64_t sf_bte_rd                : 1;	/* Enable store-and-forward on BTE_RD queue */
        uint64_t max_pkt_size             : 5;	/* Max packet size used to ensure one virtual channel cannot tie up the physical channel indefinately */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_cfg_params_desc_t;

typedef union ar_nic_parb_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic Flag */
        uint64_t dla_oflw                 : 1;	/* DLA Queue Overflow Flag */
        uint64_t iommu_oflw               : 1;	/* IOMMU Queue Overflow Flag */
        uint64_t wc_oflw                  : 1;	/* WC Queue Overflow Flag */
        uint64_t amo_oflw                 : 1;	/* AMO Queue Overflow Flag */
        uint64_t bte_wr_oflw              : 1;	/* BTE Write Queue Overflow Flag */
        uint64_t bte_rd_oflw              : 1;	/* BTE Read Queue Overflow Flag */
        uint64_t dla_uflw                 : 1;	/* DLA Queue Underflow Flag */
        uint64_t iommu_uflw               : 1;	/* IOMMU Queue Underflow Flag */
        uint64_t wc_uflw                  : 1;	/* WC Queue Underflow Flag */
        uint64_t amo_uflw                 : 1;	/* AMO Queue Underflow Flag */
        uint64_t bte_wr_uflw              : 1;	/* BTE Write Queue Underflow Flag */
        uint64_t bte_rd_uflw              : 1;	/* BTE Read Queue Underflow Flag */
        uint64_t maint_lfifo_ovflw        : 1;	/* Large maintenance FIFO overflow */
        uint64_t maint_sfifo_ovflw        : 1;	/* Small maintenance FIFO overflow */
        uint64_t maint_rsp_pe             : 1;	/* Parity Error in response header flit entering maintenance FIFO (since block_id is not trusted, this is flagged for all header parity errors) */
        uint64_t maint_rsp_sbe            : 1;	/* SBE in response payload flit entering maintenance FIFO (only flagged if block_id matches) */
        uint64_t maint_rsp_mbe            : 1;	/* MBE in response payload flit entering maintenance FIFO (only flagged if block_id matches) */
        uint64_t maint_lfifo_sbe          : 1;	/* SBE in read of large maintenance FIFO */
        uint64_t maint_lfifo_mbe          : 1;	/* MBE in read of large maintenance FIFO */
        uint64_t maint_illegal_wr         : 1;	/* An MMR write was not expected by the maintenance queue and was dropped */
        uint64_t maint_illegal_rd         : 1;	/* An MMR read was not expected by the maintenance queue */
        uint64_t maint_rsp_drop           : 1;	/* A response packet with the correct block ID was dropped because the maintenance queue was not expecting any (more) responses due to the state of the maintenance queue (not in INJECT or CAPTURE state) */
        uint64_t maint_bad_payld_cnt      : 1;	/* The REQ_HDR_LO_PAYLD_CNT field in a header flit written to the maintenance queue was not in the range 0 to 4 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_err_flg_desc_t;

typedef union ar_nic_parb_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic Flag */
        uint64_t dla_oflw                 : 1;	/* DLA Queue Overflow Flag */
        uint64_t iommu_oflw               : 1;	/* IOMMU Queue Overflow Flag */
        uint64_t wc_oflw                  : 1;	/* WC Queue Overflow Flag */
        uint64_t amo_oflw                 : 1;	/* AMO Queue Overflow Flag */
        uint64_t bte_wr_oflw              : 1;	/* BTE Write Queue Overflow Flag */
        uint64_t bte_rd_oflw              : 1;	/* BTE Read Queue Overflow Flag */
        uint64_t dla_uflw                 : 1;	/* DLA Queue Underflow Flag */
        uint64_t iommu_uflw               : 1;	/* IOMMU Queue Underflow Flag */
        uint64_t wc_uflw                  : 1;	/* WC Queue Underflow Flag */
        uint64_t amo_uflw                 : 1;	/* AMO Queue Underflow Flag */
        uint64_t bte_wr_uflw              : 1;	/* BTE Write Queue Underflow Flag */
        uint64_t bte_rd_uflw              : 1;	/* BTE Read Queue Underflow Flag */
        uint64_t maint_lfifo_ovflw        : 1;	/* Large maintenance FIFO overflow */
        uint64_t maint_sfifo_ovflw        : 1;	/* Small maintenance FIFO overflow */
        uint64_t maint_rsp_pe             : 1;	/* Parity Error in response header flit entering maintenance FIFO (since block_id is not trusted, this is flagged for all header parity errors) */
        uint64_t maint_rsp_sbe            : 1;	/* SBE in response payload flit entering maintenance FIFO (only flagged if block_id matches) */
        uint64_t maint_rsp_mbe            : 1;	/* MBE in response payload flit entering maintenance FIFO (only flagged if block_id matches) */
        uint64_t maint_lfifo_sbe          : 1;	/* SBE in read of large maintenance FIFO */
        uint64_t maint_lfifo_mbe          : 1;	/* MBE in read of large maintenance FIFO */
        uint64_t maint_illegal_wr         : 1;	/* An MMR write was not expected by the maintenance queue and was dropped */
        uint64_t maint_illegal_rd         : 1;	/* An MMR read was not expected by the maintenance queue */
        uint64_t maint_rsp_drop           : 1;	/* A response packet with the correct block ID was dropped because the maintenance queue was not expecting any (more) responses due to the state of the maintenance queue (not in INJECT or CAPTURE state) */
        uint64_t maint_bad_payld_cnt      : 1;	/* The REQ_HDR_LO_PAYLD_CNT field in a header flit written to the maintenance queue was not in the range 0 to 4 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_err_clr_desc_t;

typedef union ar_nic_parb_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t dla_oflw                 : 1;	/* 1:1 */
        uint64_t iommu_oflw               : 1;	/* 2:2 */
        uint64_t wc_oflw                  : 1;	/* 3:3 */
        uint64_t amo_oflw                 : 1;	/* 4:4 */
        uint64_t bte_wr_oflw              : 1;	/* 5:5 */
        uint64_t bte_rd_oflw              : 1;	/* 6:6 */
        uint64_t dla_uflw                 : 1;	/* 7:7 */
        uint64_t iommu_uflw               : 1;	/* 8:8 */
        uint64_t wc_uflw                  : 1;	/* 9:9 */
        uint64_t amo_uflw                 : 1;	/* 10:10 */
        uint64_t bte_wr_uflw              : 1;	/* 11:11 */
        uint64_t bte_rd_uflw              : 1;	/* 12:12 */
        uint64_t maint_lfifo_ovflw        : 1;	/* 13:13 */
        uint64_t maint_sfifo_ovflw        : 1;	/* 14:14 */
        uint64_t maint_rsp_pe             : 1;	/* 15:15 */
        uint64_t maint_rsp_sbe            : 1;	/* 16:16 */
        uint64_t maint_rsp_mbe            : 1;	/* 17:17 */
        uint64_t maint_lfifo_sbe          : 1;	/* 18:18 */
        uint64_t maint_lfifo_mbe          : 1;	/* 19:19 */
        uint64_t maint_illegal_wr         : 1;	/* 20:20 */
        uint64_t maint_illegal_rd         : 1;	/* 21:21 */
        uint64_t maint_rsp_drop           : 1;	/* 22:22 */
        uint64_t maint_bad_payld_cnt      : 1;	/* 23:23 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_err_hss_msk_desc_t;

typedef union ar_nic_parb_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t dla_oflw                 : 1;	/* 1:1 */
        uint64_t iommu_oflw               : 1;	/* 2:2 */
        uint64_t wc_oflw                  : 1;	/* 3:3 */
        uint64_t amo_oflw                 : 1;	/* 4:4 */
        uint64_t bte_wr_oflw              : 1;	/* 5:5 */
        uint64_t bte_rd_oflw              : 1;	/* 6:6 */
        uint64_t dla_uflw                 : 1;	/* 7:7 */
        uint64_t iommu_uflw               : 1;	/* 8:8 */
        uint64_t wc_uflw                  : 1;	/* 9:9 */
        uint64_t amo_uflw                 : 1;	/* 10:10 */
        uint64_t bte_wr_uflw              : 1;	/* 11:11 */
        uint64_t bte_rd_uflw              : 1;	/* 12:12 */
        uint64_t maint_lfifo_ovflw        : 1;	/* 13:13 */
        uint64_t maint_sfifo_ovflw        : 1;	/* 14:14 */
        uint64_t maint_rsp_pe             : 1;	/* 15:15 */
        uint64_t maint_rsp_sbe            : 1;	/* 16:16 */
        uint64_t maint_rsp_mbe            : 1;	/* 17:17 */
        uint64_t maint_lfifo_sbe          : 1;	/* 18:18 */
        uint64_t maint_lfifo_mbe          : 1;	/* 19:19 */
        uint64_t maint_illegal_wr         : 1;	/* 20:20 */
        uint64_t maint_illegal_rd         : 1;	/* 21:21 */
        uint64_t maint_rsp_drop           : 1;	/* 22:22 */
        uint64_t maint_bad_payld_cnt      : 1;	/* 23:23 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_err_os_msk_desc_t;

typedef union ar_nic_parb_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t dla_oflw                 : 1;	/* 1:1 */
        uint64_t iommu_oflw               : 1;	/* 2:2 */
        uint64_t wc_oflw                  : 1;	/* 3:3 */
        uint64_t amo_oflw                 : 1;	/* 4:4 */
        uint64_t bte_wr_oflw              : 1;	/* 5:5 */
        uint64_t bte_rd_oflw              : 1;	/* 6:6 */
        uint64_t dla_uflw                 : 1;	/* 7:7 */
        uint64_t iommu_uflw               : 1;	/* 8:8 */
        uint64_t wc_uflw                  : 1;	/* 9:9 */
        uint64_t amo_uflw                 : 1;	/* 10:10 */
        uint64_t bte_wr_uflw              : 1;	/* 11:11 */
        uint64_t bte_rd_uflw              : 1;	/* 12:12 */
        uint64_t maint_lfifo_ovflw        : 1;	/* 13:13 */
        uint64_t maint_sfifo_ovflw        : 1;	/* 14:14 */
        uint64_t maint_rsp_pe             : 1;	/* 15:15 */
        uint64_t maint_rsp_sbe            : 1;	/* 16:16 */
        uint64_t maint_rsp_mbe            : 1;	/* 17:17 */
        uint64_t maint_lfifo_sbe          : 1;	/* 18:18 */
        uint64_t maint_lfifo_mbe          : 1;	/* 19:19 */
        uint64_t maint_illegal_wr         : 1;	/* 20:20 */
        uint64_t maint_illegal_rd         : 1;	/* 21:21 */
        uint64_t maint_rsp_drop           : 1;	/* 22:22 */
        uint64_t maint_bad_payld_cnt      : 1;	/* 23:23 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_err_first_flg_desc_t;

typedef union ar_nic_parb_dbg_state_desc {
    struct {
        // QW0
        uint64_t vc0_crdts                : 8;	/* Used VC0 credits */
        uint64_t vc1_crdts                : 8;	/* Used VC1 credits */
        uint64_t vc2_crdts                : 8;	/* Used VC2 credits */
        uint64_t pool_crdts               : 8;	/* Used pool credits */
        uint64_t wc_rdy                   : 1;	/* Queue is ready according to ordering rules */
        uint64_t amo_rdy                  : 1;	/* Queue is ready according to ordering rules */
        uint64_t undefine_63_34           :30;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_dbg_state_desc_t;

typedef union ar_nic_parb_prf_en_desc {
    struct {
        // QW0
        uint64_t prf_vc0_en               : 1;	/* Enable register  PARB Performance Register VC0 Stall Duration */
        uint64_t prf_vc1_en               : 1;	/* Enable register  PARB Performance Register VC1 Stall Duration */
        uint64_t prf_vc2_en               : 1;	/* Enable register  PARB Performance Register VC2 Stall Duration */
        uint64_t undefine_63_3            :61;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_prf_en_desc_t;

typedef union ar_nic_parb_prf_stall_duration_vc0_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of a stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_prf_stall_duration_vc0_desc_t;

typedef union ar_nic_parb_prf_stall_duration_vc1_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of a stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_prf_stall_duration_vc1_desc_t;

typedef union ar_nic_parb_prf_stall_duration_vc2_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of a stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_prf_stall_duration_vc2_desc_t;

typedef union ar_nic_parb_cfg_maint_queue_params_desc {
    struct {
        // QW0
        uint64_t block_id                 : 4;	/* Block ID of responses to capture */
        uint64_t maint_vc                 : 3;	/* Virtual channel for MAINT queue */
        uint64_t undefine_11_7            : 5;	/* undefined */
        uint64_t sfifo_crdts              : 4;	/* Number of credits in the small FIFO */
        uint64_t max_flits                : 9;	/* This field indicates the number of entries in the queue available for software to use */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_cfg_maint_queue_params_desc_t;

typedef union ar_nic_parb_cfg_maint_queue_go_desc {
    struct {
        // QW0
        uint64_t go                       : 1;	/* Manual mechanism to transition from the LOAD state to the INJECT state */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_cfg_maint_queue_go_desc_t;

typedef union ar_nic_parb_cfg_maint_queue_reset_desc {
    struct {
        // QW0
        uint64_t reset                    : 1;	/* Manual Reset */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_cfg_maint_queue_reset_desc_t;

typedef union ar_nic_parb_sts_maint_queue_desc {
    struct {
        // QW0
        uint64_t req_flit_cntr            : 9;	/* Number of request flits in the maintenance queue logic */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t rsp_flit_cntr            : 9;	/* Number of response flits in the maintenance queue logic */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t sfifo_cntr               : 3;	/* Number of entries used in the small fifo */
        uint64_t undefine_35_35           : 1;	/* undefined */
        uint64_t lfifo_cntr               : 9;	/* Number of entries used in the large fifo */
        uint64_t undefine_47_45           : 3;	/* undefined */
        uint64_t queue_state              : 4;	/* 0001:LOAD 0010:INJECT 0100:CAPTURE 1000:FULL */
        uint64_t undefine_63_52           :12;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_parb_sts_maint_queue_desc_t;

typedef union ar_nic_parb_dbg_maint_queue_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t generic                  ;	/* Generic Properties of MMR */
            };
            struct {
                uint64_t rsp_payld_hi_data        ;	/* Upper 64-bits of response payload flit */
            };
            struct {
                uint64_t rsp_payld_lo_data        ;	/* Lower 64-bits of response payload flit */
            };
            struct {
                uint64_t rsp_hdr_lo_uv            : 1;	/* UV field of response header flit */
                uint64_t rsp_hdr_lo_rspcmd        : 3;	/* RSPCMD[2:0] field of response header flit */
                uint64_t rsp_hdr_lo_rstatus       : 6;	/* RSTATUS[5:0] field of response header flit */
                uint64_t rsp_hdr_lo_pi_id         :10;	/* PI_ID[9:0] field of response header flit */
                uint64_t rsp_hdr_lo_tail          : 1;	/* Set if this header is followed by no data, otherwise the payload size will correspond to the data requested by the request with the matching PI_ID */
                uint64_t undefine_q0_f3_63_21     :43;	/* undefined */
            };
            struct {
                uint64_t req_payld_hi_data        ;	/* Upper 64-bits of request payload flit */
            };
            struct {
                uint64_t req_payld_lo_data        ;	/* Lower 64-bits of request payload flit */
            };
            struct {
                uint64_t req_hdr_hi_pi_id         :10;	/* PI_ID[9:0] field of request header flit */
                uint64_t req_hdr_hi_cnt_bm        : 4;	/* CNT_BM[3:0] field of request header flit */
                uint64_t req_hdr_hi_addr_5_2      : 4;	/* ADDR[5:2] field of request header flit */
                uint64_t req_hdr_hi_pi_hints      : 6;	/* PI_HINTS[5:0] field of request header flit */
                uint64_t req_hdr_hi_lstatus       : 6;	/* LSTATUS[5:0] field of request header flit */
                uint64_t undefine_q0_f6_63_30     :34;	/* undefined */
            };
            struct {
                uint64_t req_hdr_lo_payld_cnt     : 3;	/* Three bit field to indicate how many data flits will follow the header flit (0 to 4) */
                uint64_t req_hdr_lo_tc            : 4;	/* TC[3:0] field of request header flit */
                uint64_t req_hdr_lo_addr_39_6     :34;	/* ADDR[39:6] field of request header flit */
                uint64_t req_hdr_lo_reqcmd        : 9;	/* REQCMD[8:0] field of request header flit */
                uint64_t req_hdr_lo_irqindex      : 5;	/* IRQINDEX[4:0] field of request header flit */
                uint64_t req_hdr_lo_addr_47_40    : 8;	/* ADDR[47:40] field of request header flit */
                uint64_t req_hdr_lo_go            : 1;	/* Set this bit on the last packet to enable the queue when this packet has finished being written */
            };
        };
    };
    uint64_t qwords[1];
} ar_nic_parb_dbg_maint_queue_desc_t;


#endif
