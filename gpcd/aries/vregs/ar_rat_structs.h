/******************************************************************************
 * COPYRIGHT CRAY INC. ar_rat_structs.h
 * FILE: ar_rat_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_RAT_STRUCTS_H_
#define _AR_RAT_STRUCTS_H_

/*
 *  ARIES RAT STRUCTURES
 */
typedef union ar_nic_rat_cfg_link_active_desc {
    struct {
        // QW0
        uint64_t signal                   : 1;	/* Signal to NL that link is active */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_cfg_link_active_desc_t;

typedef union ar_nic_rat_cfg_params_desc {
    struct {
        // QW0
        uint64_t req_max                  : 6;	/* Maximum number of translation buffer slots that may be occupied by requests */
        uint64_t rsp_max                  : 6;	/* Maximum number of translation buffer slots that may be occupied by responses */
        uint64_t ro_hashed                : 1;	/* If the USE_RC bit of the MDD is set and the routing control field indicates hashed, then this bit determines the setting of the RO bit in the pi_hints field */
        uint64_t sf_nl                    : 1;	/* Store-and-forward in NL request queue */
        uint64_t sf_orb                   : 1;	/* Store-and-forward in ORB response queue */
        uint64_t sf_iommu                 : 1;	/* Store-and-forward in IOMMU request queue */
        uint64_t force_amo_rr             : 1;	/* Force AMO block (or PI, for offloaded AMOs) to be responsible for all AMO responses (otherwise they are only responsible for fetching AMO responses and the NPT is responsible for non-fetching AMO responses) */
        uint64_t undefine_63_17           :47;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_cfg_params_desc_t;

typedef union ar_nic_rat_cfg_crdts_desc {
    struct {
        // QW0
        uint64_t rmt_crdts                : 8;	/* Outgoing RMT flits, request channel */
        uint64_t ce_crdts                 : 8;	/* Outgoing CE flits, request channel */
        uint64_t wc_crdts                 : 8;	/* Outgoing WC flits, response channel */
        uint64_t max_pkt_size             : 4;	/* Max packet size */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_cfg_crdts_desc_t;

typedef union ar_nic_rat_cfg_timeout_req_desc {
    struct {
        // QW0
        uint64_t max_duration             :40;	/* Flag an error once the counter in A_NIC_RAT_PRF_REQ_STALL_DURATION exceeds this value */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_cfg_timeout_req_desc_t;

typedef union ar_nic_rat_cfg_timeout_rsp_desc {
    struct {
        // QW0
        uint64_t max_duration             :40;	/* Flag an error once the counter in A_NIC_RAT_PRF_RSP_STALL_DURATION exceeds this value */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_cfg_timeout_rsp_desc_t;

typedef union ar_nic_rat_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic */
        uint64_t oflw_req                 : 1;	/* Request Input FIFO Overflow */
        uint64_t oflw_iommu               : 1;	/* IOMMU Input FIFO Overflow */
        uint64_t oflw_rsp                 : 1;	/* Response Input FIFO Overflow */
        uint64_t oflw_xarb                : 1;	/* Translation Request Arbiter Overflow */
        uint64_t uflw_req                 : 1;	/* Request Input FIFO Underflow */
        uint64_t uflw_iommu               : 1;	/* IOMMU Input FIFO Underflow */
        uint64_t uflw_rsp                 : 1;	/* Response Input FIFO Underflow */
        uint64_t parity_req_input         : 1;	/* Header parity error on request (NL) channel input */
        uint64_t parity_rsp_input         : 1;	/* Header parity error on response channel input */
        uint64_t parity_req_output        : 1;	/* Header parity error on request channel output */
        uint64_t parity_rsp_output        : 1;	/* Header parity error on response channel output */
        uint64_t parity_req_trans         : 1;	/* Translation parity error on request channel buffer */
        uint64_t parity_rsp_trans         : 1;	/* Translation parity error on response channel buffer */
        uint64_t parity_iommu_input       : 1;	/* Header parity error on IOMMU channel input */
        uint64_t iommu_drop               : 1;	/* Decode error on IOMMU packet */
        uint64_t iommu_payld              : 1;	/* Payload size error on IOMMU packet */
        uint64_t req_timeout              : 1;	/* The request virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ) */
        uint64_t rsp_timeout              : 1;	/* The response virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ) */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_err_flg_desc_t;

typedef union ar_nic_rat_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic */
        uint64_t oflw_req                 : 1;	/* Request Input FIFO Overflow */
        uint64_t oflw_iommu               : 1;	/* IOMMU Input FIFO Overflow */
        uint64_t oflw_rsp                 : 1;	/* Response Input FIFO Overflow */
        uint64_t oflw_xarb                : 1;	/* Translation Request Arbiter Overflow */
        uint64_t uflw_req                 : 1;	/* Request Input FIFO Underflow */
        uint64_t uflw_iommu               : 1;	/* IOMMU Input FIFO Underflow */
        uint64_t uflw_rsp                 : 1;	/* Response Input FIFO Underflow */
        uint64_t parity_req_input         : 1;	/* Header parity error on request (NL) channel input */
        uint64_t parity_rsp_input         : 1;	/* Header parity error on response channel input */
        uint64_t parity_req_output        : 1;	/* Header parity error on request channel output */
        uint64_t parity_rsp_output        : 1;	/* Header parity error on response channel output */
        uint64_t parity_req_trans         : 1;	/* Translation parity error on request channel buffer */
        uint64_t parity_rsp_trans         : 1;	/* Translation parity error on response channel buffer */
        uint64_t parity_iommu_input       : 1;	/* Header parity error on IOMMU channel input */
        uint64_t iommu_drop               : 1;	/* Decode error on IOMMU packet */
        uint64_t iommu_payld              : 1;	/* Payload size error on IOMMU packet */
        uint64_t req_timeout              : 1;	/* The request virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ) */
        uint64_t rsp_timeout              : 1;	/* The response virtual channel has not made forward progress (see A_NIC_RAT_CFG_TIMEOUT_REQ) */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_err_clr_desc_t;

typedef union ar_nic_rat_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t oflw_req                 : 1;	/* 1:1 */
        uint64_t oflw_iommu               : 1;	/* 2:2 */
        uint64_t oflw_rsp                 : 1;	/* 3:3 */
        uint64_t oflw_xarb                : 1;	/* 4:4 */
        uint64_t uflw_req                 : 1;	/* 5:5 */
        uint64_t uflw_iommu               : 1;	/* 6:6 */
        uint64_t uflw_rsp                 : 1;	/* 7:7 */
        uint64_t parity_req_input         : 1;	/* 8:8 */
        uint64_t parity_rsp_input         : 1;	/* 9:9 */
        uint64_t parity_req_output        : 1;	/* 10:10 */
        uint64_t parity_rsp_output        : 1;	/* 11:11 */
        uint64_t parity_req_trans         : 1;	/* 12:12 */
        uint64_t parity_rsp_trans         : 1;	/* 13:13 */
        uint64_t parity_iommu_input       : 1;	/* 14:14 */
        uint64_t iommu_drop               : 1;	/* 15:15 */
        uint64_t iommu_payld              : 1;	/* 16:16 */
        uint64_t req_timeout              : 1;	/* 17:17 */
        uint64_t rsp_timeout              : 1;	/* 18:18 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_err_hss_msk_desc_t;

typedef union ar_nic_rat_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t oflw_req                 : 1;	/* 1:1 */
        uint64_t oflw_iommu               : 1;	/* 2:2 */
        uint64_t oflw_rsp                 : 1;	/* 3:3 */
        uint64_t oflw_xarb                : 1;	/* 4:4 */
        uint64_t uflw_req                 : 1;	/* 5:5 */
        uint64_t uflw_iommu               : 1;	/* 6:6 */
        uint64_t uflw_rsp                 : 1;	/* 7:7 */
        uint64_t parity_req_input         : 1;	/* 8:8 */
        uint64_t parity_rsp_input         : 1;	/* 9:9 */
        uint64_t parity_req_output        : 1;	/* 10:10 */
        uint64_t parity_rsp_output        : 1;	/* 11:11 */
        uint64_t parity_req_trans         : 1;	/* 12:12 */
        uint64_t parity_rsp_trans         : 1;	/* 13:13 */
        uint64_t parity_iommu_input       : 1;	/* 14:14 */
        uint64_t iommu_drop               : 1;	/* 15:15 */
        uint64_t iommu_payld              : 1;	/* 16:16 */
        uint64_t req_timeout              : 1;	/* 17:17 */
        uint64_t rsp_timeout              : 1;	/* 18:18 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_err_os_msk_desc_t;

typedef union ar_nic_rat_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t oflw_req                 : 1;	/* 1:1 */
        uint64_t oflw_iommu               : 1;	/* 2:2 */
        uint64_t oflw_rsp                 : 1;	/* 3:3 */
        uint64_t oflw_xarb                : 1;	/* 4:4 */
        uint64_t uflw_req                 : 1;	/* 5:5 */
        uint64_t uflw_iommu               : 1;	/* 6:6 */
        uint64_t uflw_rsp                 : 1;	/* 7:7 */
        uint64_t parity_req_input         : 1;	/* 8:8 */
        uint64_t parity_rsp_input         : 1;	/* 9:9 */
        uint64_t parity_req_output        : 1;	/* 10:10 */
        uint64_t parity_rsp_output        : 1;	/* 11:11 */
        uint64_t parity_req_trans         : 1;	/* 12:12 */
        uint64_t parity_rsp_trans         : 1;	/* 13:13 */
        uint64_t parity_iommu_input       : 1;	/* 14:14 */
        uint64_t iommu_drop               : 1;	/* 15:15 */
        uint64_t iommu_payld              : 1;	/* 16:16 */
        uint64_t req_timeout              : 1;	/* 17:17 */
        uint64_t rsp_timeout              : 1;	/* 18:18 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_err_first_flg_desc_t;

typedef union ar_nic_rat_dbg_crdts_desc {
    struct {
        // QW0
        uint64_t rmt_crdts                : 8;	/* Number of credits used on the RMT itnerface */
        uint64_t ce_crdts                 : 8;	/* Number of credits used on the CE interface */
        uint64_t wc_crdts                 : 8;	/* Number of credits used on the WC interface */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_dbg_crdts_desc_t;

typedef union ar_nic_rat_dbg_buf_state_desc {
    struct {
        // QW0
        uint64_t buf_cntr                 : 7;	/* Number of buffer slots in use */
        uint64_t rsp_cntr                 : 6;	/* Number of buffer slots allocated to response channel */
        uint64_t req_cntr                 : 6;	/* Number of buffer slots allocated to request channel */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_dbg_buf_state_desc_t;

typedef union ar_nic_rat_dbg_errinj_bus_desc {
    struct {
        // QW0
        uint64_t req_en                   : 1;	/* Enable error injection on request packets */
        uint64_t iommu_en                 : 1;	/* Enable error injection on IOMMU packets */
        uint64_t rsp_en                   : 1;	/* Enable error injection on response packets */
        uint64_t mode                     : 1;	/* 0: Inject error on one packet (on each enabled interface) 1: Inject error on every packet (on each enabled interface) */
        uint64_t count                    : 3;	/* Indicates which flit of a packet to inject the error */
        uint64_t tail                     : 1;	/* When an error is injected, this field indicates whether the tail bit should be inverted */
        uint64_t ecc0                     : 8;	/* When an error is injected on a payload flit, this field indicates which bits of ECC0 should be inverted */
        uint64_t ecc1                     : 8;	/* When an error is injected on a payload flit, this field indicates which bits of ECC1 should be inverted */
        uint64_t parity                   : 4;	/* When an error is injected on a header flit, this field indicates which parity bits should be inverted */
        uint64_t triggered_req            : 1;	/* Error has been injected on request packet */
        uint64_t triggered_iommu          : 1;	/* Error has been injected on IOMMU packet */
        uint64_t triggered_rsp            : 1;	/* Error has been injected on response packet */
        uint64_t undefine_63_31           :33;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_dbg_errinj_bus_desc_t;

typedef union ar_nic_rat_dbg_errinj_buf_desc {
    struct {
        // QW0
        uint64_t req_en                   : 1;	/* Enable error injection on request channel */
        uint64_t rsp_en                   : 1;	/* Enable error injection on response channel */
        uint64_t mode                     : 1;	/* 0: Inject error on one packet (on each enabled interface) 1: Inject error on every packet (on each enabled interface) */
        uint64_t translation_parity       : 1;	/* Inject a parity error in the translation data */
        uint64_t header_parity            : 1;	/* Inject a parity error in the header */
        uint64_t req_triggered            : 1;	/* Error has been injected on request channel */
        uint64_t rsp_triggered            : 1;	/* Error has been injected on response channel */
        uint64_t undefine_63_7            :57;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_dbg_errinj_buf_desc_t;

typedef union ar_nic_rat_prf_req_val0_desc {
    struct {
        // QW0
        uint64_t flit_63_0                ;	/* Bits [63:0] of the flit */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_req_val0_desc_t;

typedef union ar_nic_rat_prf_req_val1_desc {
    struct {
        // QW0
        uint64_t flit_127_64              ;	/* Bits [127:64] of the flit */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_req_val1_desc_t;

typedef union ar_nic_rat_prf_req_val2_desc {
    struct {
        // QW0
        uint64_t flit_143_128             :16;	/* Bits [143:128] of the flit */
        uint64_t tail                     : 1;	/* 1 = Flit is a tail flit */
        uint64_t hdr                      : 1;	/* 1 = Flit type is header */
        uint64_t nl_en                    : 1;	/* Enable this performance counter to look at incomming NL requests */
        uint64_t iommu_en                 : 1;	/* Enable this performance counter to look at incomming IOMMU requests */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_req_val2_desc_t;

typedef union ar_nic_rat_prf_req_mask0_desc {
    struct {
        // QW0
        uint64_t flit_63_0                ;	/* Bits [63:0] of the flit */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_req_mask0_desc_t;

typedef union ar_nic_rat_prf_req_mask1_desc {
    struct {
        // QW0
        uint64_t flit_127_64              ;	/* Bits [127:64] of the flit */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_req_mask1_desc_t;

typedef union ar_nic_rat_prf_req_mask2_desc {
    struct {
        // QW0
        uint64_t flit_143_128             :16;	/* Bits [143:128] of the flit */
        uint64_t tail                     : 1;	/* Flit is a tail flit */
        uint64_t hdr                      : 1;	/* Flit type (header/payload) To ensure atomicity, disable the counter (IOMMU_EN and NL_EN) before modifying the configuration */
        uint64_t undefine_63_18           :46;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_req_mask2_desc_t;

typedef union ar_nic_rat_prf_rsp_val0_desc {
    struct {
        // QW0
        uint64_t flit_63_0                ;	/* Bits [63:0] of the flit */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_rsp_val0_desc_t;

typedef union ar_nic_rat_prf_rsp_val1_desc {
    struct {
        // QW0
        uint64_t flit_127_64              ;	/* Bits [127:64] of the flit */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_rsp_val1_desc_t;

typedef union ar_nic_rat_prf_rsp_val2_desc {
    struct {
        // QW0
        uint64_t flit_143_128             :16;	/* Bits [143:128] of the flit */
        uint64_t tail                     : 1;	/* 1 = Flit is a tail flit */
        uint64_t hdr                      : 1;	/* 1 = Flit type is header */
        uint64_t en                       : 1;	/* Enable this performance counter */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_rsp_val2_desc_t;

typedef union ar_nic_rat_prf_rsp_mask0_desc {
    struct {
        // QW0
        uint64_t flit_63_0                ;	/* Bits [63:0] of the flit */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_rsp_mask0_desc_t;

typedef union ar_nic_rat_prf_rsp_mask1_desc {
    struct {
        // QW0
        uint64_t flit_127_64              ;	/* Bits [127:64] of the flit */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_rsp_mask1_desc_t;

typedef union ar_nic_rat_prf_rsp_mask2_desc {
    struct {
        // QW0
        uint64_t flit_143_128             :16;	/* Bits [143:128] of the flit */
        uint64_t tail                     : 1;	/* Flit is a tail flit */
        uint64_t hdr                      : 1;	/* Flit type (header/payload) To ensure atomicity, disable the counter (EN) before modifying the configuration */
        uint64_t undefine_63_18           :46;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_rsp_mask2_desc_t;

typedef union ar_nic_rat_prf_en_desc {
    struct {
        // QW0
        uint64_t prf_req_duration_en      : 1;	/* Enable register A_NIC_RAT_PRF_REQ_STALL_DURATION */
        uint64_t prf_rsp_duration_en      : 1;	/* Enable register A_NIC_RAT_PRF_RSP_STALL_DURATION */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_en_desc_t;

typedef union ar_nic_rat_prf_req_stall_duration_desc {
    struct {
        // QW0
        uint64_t value                    :40;	/* The maximum duration in clock cycles */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_req_stall_duration_desc_t;

typedef union ar_nic_rat_prf_rsp_stall_duration_desc {
    struct {
        // QW0
        uint64_t value                    :40;	/* The maximum duration in clock cycles */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_rsp_stall_duration_desc_t;

typedef union ar_nic_rat_prf_req_bytes_rcvd_desc {
    struct {
        // QW0
        uint64_t bytes                    ;	/* The number of payload bytes received on the request channel */
    };
    uint64_t qwords[1];
} ar_nic_rat_prf_req_bytes_rcvd_desc_t;


#endif
