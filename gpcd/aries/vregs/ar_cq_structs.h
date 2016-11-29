/******************************************************************************
 * COPYRIGHT CRAY INC. ar_cq_structs.h
 * FILE: ar_cq_structs.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/

#ifndef _AR_CQ_STRUCTS_H_
#define _AR_CQ_STRUCTS_H_

/*
 *  ARIES CQ STRUCTURES
 */
typedef union ar_nic_cq_cfg_desc_tbl_desc {
    struct {
        // QW0
        uint64_t rd_idx                   :29;	/* Completion Queue Read Index */
        uint64_t undefine_31_29           : 3;	/* undefined */
        uint64_t wr_idx                   :29;	/* Completion Queue Write Index */
        uint64_t undefine_62_61           : 2;	/* undefined */
        uint64_t irq_mask                 : 1;	/* User Mode Interrupt Mask */
        // QW1
        uint64_t max_idx                  :29;	/* Completion Queue Maximum Index */
        uint64_t undefine_95_93           : 3;	/* undefined */
        uint64_t irq_thresh_idx           :13;	/* Threshold Index for interrupt signal */
        uint64_t undefine_110_109         : 2;	/* undefined */
        uint64_t irq_req                  : 1;	/* Interrupt Request */
        uint64_t irq_idx                  : 5;	/* Interrupt Request Index */
        uint64_t en                       : 1;	/* Enable CQ */
        uint64_t undefine_126_118         : 9;	/* undefined */
        uint64_t mdd_en                   : 1;	/* MDD Enable */
        // QW2 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t undefine_139_128         :12;	/* undefined */
                uint64_t mdd1_base_offset_39_12   :28;	/* When MDD_EN==1, Memory Domain Base Offset 39:12 */
                uint64_t mdd1_mdh                 :12;	/* When MDD_EN==1, Memory Domain Handle */
                uint64_t undefine_183_180         : 4;	/* undefined */
                uint64_t mdd1_ptag                : 8;	/* When MDD_EN==1, Protection Tag */
            };
            struct {
                uint64_t undefine_q2_f1_139_128   :12;	/* undefined */
                uint64_t mdd0_base_addr_47_12     :36;	/* When MDD_EN==0, Completion Queue Base Address 47:12 (byte address) */
                uint64_t undefine_q2_f1_178_176   : 3;	/* undefined */
                uint64_t mdd0_mmu_prefetch        : 1;	/* When MDD_EN==0, MMU Pre-fetch Enable */
                uint64_t undefine_q2_f1_183_180   : 4;	/* undefined */
                uint64_t mdd0_tph                 : 3;	/* When MDD_EN==0, TPH */
                uint64_t mdd0_mmu_en              : 1;	/* When MDD_EN==0, MMU Enable */
                uint64_t mdd0_mmu_tc              : 4;	/* When MDD_EN==0, MMU Translation Context */
            };
        };
    };
    uint64_t qwords[3];
} ar_nic_cq_cfg_desc_tbl_desc_t;

typedef union ar_nic_cq_cfg_npt_credits_desc {
    struct {
        // QW0
        uint64_t npt_crdts_used_max       : 5;	/* Max value for NPT_CRDTS_USED */
        uint64_t npt_crdts_used           : 5;	/* Flit credits used for CQ NPT Flits */
        uint64_t undefine_63_10           :54;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_cfg_npt_credits_desc_t;

typedef union ar_nic_cq_cfg_cam_credits_desc {
    struct {
        // QW0
        uint64_t cam_crdts_used_max       : 5;	/* Max value for CAM_CRDTS_USED */
        uint64_t cam_crdts_used           : 5;	/* Credits used for CQ CAM entries */
        uint64_t undefine_63_10           :54;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_cfg_cam_credits_desc_t;

typedef union ar_nic_cq_cfg_cache_revisit_rate_desc {
    struct {
        // QW0
        uint64_t cache_revisit_rate       : 2;	/* 0 Revisit Cache Line every 1 event 1 Revisit Cache Line every 64 events 2 Revisit Cache Line every 128 events (base address must be 8KB aligned) 3 Revisit Cache Line every 256 events (base address must be 16KB aligned) */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_cfg_cache_revisit_rate_desc_t;

typedef union ar_nic_cq_cfg_nat_response_timeout_desc {
    struct {
        // QW0
        uint64_t nat_timeout_cnt          : 9;	/* NAT Timeout Counter rollover rate in units of 163 */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t nat_timeout_en           : 1;	/* Enable NAT Response Timeout Error Reporting */
        uint64_t undefine_63_13           :51;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_cfg_nat_response_timeout_desc_t;

typedef union ar_nic_cq_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Test bit for generating interrupt */
        uint64_t bte_cq_input_q_overrun   : 1;	/* BTE input queue overrun */
        uint64_t dla_cq_input_q_overrun   : 1;	/* DLA input queue overrun */
        uint64_t rmt_cq_input_q_overrun   : 1;	/* RMT input queue overrun */
        uint64_t ssid_cq_input_q_overrun  : 1;	/* SSID input queue overrun */
        uint64_t fma_cq_input_q_overrun   : 1;	/* FMA input queue overrun */
        uint64_t cq_desc_tbl_mbe          : 1;	/* CQ Descriptor Table MBE */
        uint64_t cq_desc_tbl_sbe          : 1;	/* CQ Descriptor Table SBE */
        uint64_t cq_rmt_disabled_cq       : 1;	/* An event referred to a disabled RMT CQ descriptor */
        uint64_t cq_rmt_overrun_event     : 1;	/* An RMT event occurred when its completion queue was full */
        uint64_t cq_rmt_nat_err           : 1;	/* NAT Error translating RMT CQ address */
        uint64_t cq_rmt_idx_bounds        : 1;	/* RMT RD_IDX or WR_IDX out of bounds (greater than MAX_IDX) */
        uint64_t cq_rmt_dropped_event     : 1;	/* CQ Dropped a RMT CQ event */
        uint64_t cq_rmt_parity_err        : 1;	/* CQ had RMT parity error, either input event data parity error, input extra RMT data parity error or Translation Complete Queue parity error */
        uint64_t cq_rmt_nat_response_timeout_err: 1;	/* CQ had RMT NAT Response Timeout which is a combination of no NPT credits or long NAT response time */
        uint64_t cq_lcl_disabled_cq       : 1;	/* An event referred to a disabled BTE/DLA/SSID CQ descriptor */
        uint64_t cq_lcl_overrun_event     : 1;	/* A BTE/DLA/SSID event occurred when its completion queue was full */
        uint64_t cq_lcl_nat_err           : 1;	/* NAT Error translating BTE/DLA/SSID CQ address */
        uint64_t cq_lcl_idx_bounds        : 1;	/* BTE/DLA/SSID RD_IDX or WR_IDX out of bounds (greater than MAX_IDX) */
        uint64_t cq_lcl_dropped_event     : 1;	/* CQ Dropped a BTE/DLA/SSID CQ event */
        uint64_t cq_lcl_parity_err        : 1;	/* CQ had BTE/DLA/SSID parity error, either input event data parity error or Translation Complete Queue parity error */
        uint64_t cq_lcl_nat_response_timeout_err: 1;	/* CQ had BTE/DLA/SSID NAT Response Timeout which is a combination of no NPT credits or long NAT response time */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_flg_desc_t;

typedef union ar_nic_cq_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Test bit for generating interrupt */
        uint64_t bte_cq_input_q_overrun   : 1;	/* BTE input queue overrun */
        uint64_t dla_cq_input_q_overrun   : 1;	/* DLA input queue overrun */
        uint64_t rmt_cq_input_q_overrun   : 1;	/* RMT input queue overrun */
        uint64_t ssid_cq_input_q_overrun  : 1;	/* SSID input queue overrun */
        uint64_t fma_cq_input_q_overrun   : 1;	/* FMA input queue overrun */
        uint64_t cq_desc_tbl_mbe          : 1;	/* CQ Descriptor Table MBE */
        uint64_t cq_desc_tbl_sbe          : 1;	/* CQ Descriptor Table SBE */
        uint64_t cq_rmt_disabled_cq       : 1;	/* An event referred to a disabled RMT CQ descriptor */
        uint64_t cq_rmt_overrun_event     : 1;	/* An RMT event occurred when its completion queue was full */
        uint64_t cq_rmt_nat_err           : 1;	/* NAT Error translating RMT CQ address */
        uint64_t cq_rmt_idx_bounds        : 1;	/* RMT RD_IDX or WR_IDX out of bounds (greater than MAX_IDX) */
        uint64_t cq_rmt_dropped_event     : 1;	/* CQ Dropped a RMT CQ event */
        uint64_t cq_rmt_parity_err        : 1;	/* CQ had RMT parity error, either input event data parity error, input extra RMT data parity error or Translation Complete Queue parity error */
        uint64_t cq_rmt_nat_response_timeout_err: 1;	/* CQ had RMT NAT Response Timeout which is a combination of no NPT credits or long NAT response time */
        uint64_t cq_lcl_disabled_cq       : 1;	/* An event referred to a disabled BTE/DLA/SSID CQ descriptor */
        uint64_t cq_lcl_overrun_event     : 1;	/* A BTE/DLA/SSID event occurred when its completion queue was full */
        uint64_t cq_lcl_nat_err           : 1;	/* NAT Error translating BTE/DLA/SSID CQ address */
        uint64_t cq_lcl_idx_bounds        : 1;	/* BTE/DLA/SSID RD_IDX or WR_IDX out of bounds (greater than MAX_IDX) */
        uint64_t cq_lcl_dropped_event     : 1;	/* CQ Dropped a BTE/DLA/SSID CQ event */
        uint64_t cq_lcl_parity_err        : 1;	/* CQ had BTE/DLA/SSID parity error, either input event data parity error or Translation Complete Queue parity error */
        uint64_t cq_lcl_nat_response_timeout_err: 1;	/* CQ had BTE/DLA/SSID NAT Response Timeout which is a combination of no NPT credits or long NAT response time */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_clr_desc_t;

typedef union ar_nic_cq_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t bte_cq_input_q_overrun   : 1;	/* 1:1 */
        uint64_t dla_cq_input_q_overrun   : 1;	/* 2:2 */
        uint64_t rmt_cq_input_q_overrun   : 1;	/* 3:3 */
        uint64_t ssid_cq_input_q_overrun  : 1;	/* 4:4 */
        uint64_t fma_cq_input_q_overrun   : 1;	/* 5:5 */
        uint64_t cq_desc_tbl_mbe          : 1;	/* 6:6 */
        uint64_t cq_desc_tbl_sbe          : 1;	/* 7:7 */
        uint64_t cq_rmt_disabled_cq       : 1;	/* 8:8 */
        uint64_t cq_rmt_overrun_event     : 1;	/* 9:9 */
        uint64_t cq_rmt_nat_err           : 1;	/* 10:10 */
        uint64_t cq_rmt_idx_bounds        : 1;	/* 11:11 */
        uint64_t cq_rmt_dropped_event     : 1;	/* 12:12 */
        uint64_t cq_rmt_parity_err        : 1;	/* 13:13 */
        uint64_t cq_rmt_nat_response_timeout_err: 1;	/* 14:14 */
        uint64_t cq_lcl_disabled_cq       : 1;	/* 15:15 */
        uint64_t cq_lcl_overrun_event     : 1;	/* 16:16 */
        uint64_t cq_lcl_nat_err           : 1;	/* 17:17 */
        uint64_t cq_lcl_idx_bounds        : 1;	/* 18:18 */
        uint64_t cq_lcl_dropped_event     : 1;	/* 19:19 */
        uint64_t cq_lcl_parity_err        : 1;	/* 20:20 */
        uint64_t cq_lcl_nat_response_timeout_err: 1;	/* 21:21 */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_hss_msk_desc_t;

typedef union ar_nic_cq_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t bte_cq_input_q_overrun   : 1;	/* 1:1 */
        uint64_t dla_cq_input_q_overrun   : 1;	/* 2:2 */
        uint64_t rmt_cq_input_q_overrun   : 1;	/* 3:3 */
        uint64_t ssid_cq_input_q_overrun  : 1;	/* 4:4 */
        uint64_t fma_cq_input_q_overrun   : 1;	/* 5:5 */
        uint64_t cq_desc_tbl_mbe          : 1;	/* 6:6 */
        uint64_t cq_desc_tbl_sbe          : 1;	/* 7:7 */
        uint64_t cq_rmt_disabled_cq       : 1;	/* 8:8 */
        uint64_t cq_rmt_overrun_event     : 1;	/* 9:9 */
        uint64_t cq_rmt_nat_err           : 1;	/* 10:10 */
        uint64_t cq_rmt_idx_bounds        : 1;	/* 11:11 */
        uint64_t cq_rmt_dropped_event     : 1;	/* 12:12 */
        uint64_t cq_rmt_parity_err        : 1;	/* 13:13 */
        uint64_t cq_rmt_nat_response_timeout_err: 1;	/* 14:14 */
        uint64_t cq_lcl_disabled_cq       : 1;	/* 15:15 */
        uint64_t cq_lcl_overrun_event     : 1;	/* 16:16 */
        uint64_t cq_lcl_nat_err           : 1;	/* 17:17 */
        uint64_t cq_lcl_idx_bounds        : 1;	/* 18:18 */
        uint64_t cq_lcl_dropped_event     : 1;	/* 19:19 */
        uint64_t cq_lcl_parity_err        : 1;	/* 20:20 */
        uint64_t cq_lcl_nat_response_timeout_err: 1;	/* 21:21 */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_os_msk_desc_t;

typedef union ar_nic_cq_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t bte_cq_input_q_overrun   : 1;	/* 1:1 */
        uint64_t dla_cq_input_q_overrun   : 1;	/* 2:2 */
        uint64_t rmt_cq_input_q_overrun   : 1;	/* 3:3 */
        uint64_t ssid_cq_input_q_overrun  : 1;	/* 4:4 */
        uint64_t fma_cq_input_q_overrun   : 1;	/* 5:5 */
        uint64_t cq_desc_tbl_mbe          : 1;	/* 6:6 */
        uint64_t cq_desc_tbl_sbe          : 1;	/* 7:7 */
        uint64_t cq_rmt_disabled_cq       : 1;	/* 8:8 */
        uint64_t cq_rmt_overrun_event     : 1;	/* 9:9 */
        uint64_t cq_rmt_nat_err           : 1;	/* 10:10 */
        uint64_t cq_rmt_idx_bounds        : 1;	/* 11:11 */
        uint64_t cq_rmt_dropped_event     : 1;	/* 12:12 */
        uint64_t cq_rmt_parity_err        : 1;	/* 13:13 */
        uint64_t cq_rmt_nat_response_timeout_err: 1;	/* 14:14 */
        uint64_t cq_lcl_disabled_cq       : 1;	/* 15:15 */
        uint64_t cq_lcl_overrun_event     : 1;	/* 16:16 */
        uint64_t cq_lcl_nat_err           : 1;	/* 17:17 */
        uint64_t cq_lcl_idx_bounds        : 1;	/* 18:18 */
        uint64_t cq_lcl_dropped_event     : 1;	/* 19:19 */
        uint64_t cq_lcl_parity_err        : 1;	/* 20:20 */
        uint64_t cq_lcl_nat_response_timeout_err: 1;	/* 21:21 */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_first_flg_desc_t;

typedef union ar_nic_cq_err_info_desc_tbl_sbe_mbe_desc {
    struct {
        // QW0
        uint64_t mbe_addr                 :11;	/* First CQ Descriptor Table read address with MBE */
        uint64_t mbe_syndrome             : 7;	/* First CQ Descriptor Table Syndrome of ECC region with MBE */
        uint64_t mbe_region               : 2;	/* First CQ Descriptor Table ECC region with MBE */
        uint64_t mbe_src                  : 3;	/* Source of MBE: 0 BTE event 1 SSID event 2 RMT event 3 DLA event 4 LB read */
        uint64_t undefine_31_23           : 9;	/* undefined */
        uint64_t sbe_addr                 :11;	/* First CQ Descriptor Table read address with SBE */
        uint64_t sbe_syndrome             : 7;	/* First CQ Descriptor Table Syndrome of ECC region with SBE */
        uint64_t sbe_region               : 2;	/* First CQ Descriptor Table ECC region with SBE */
        uint64_t sbe_src                  : 3;	/* Source of SBE: 0 BTE event 1 SSID event 2 RMT event 3 DLA event 4 LB read */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_desc_tbl_sbe_mbe_desc_t;

typedef union ar_nic_cq_err_info_rmt_disabled_cq_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ Handle of event with descriptor disabled */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of event with descriptor disabled */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_rmt_disabled_cq_desc_t;

typedef union ar_nic_cq_err_info_rmt_nat_err_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ Handle of event with translation error */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of event with translation error */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t nat_err                  : 5;	/* NAT Error Code */
        uint64_t undefine_63_21           :43;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_rmt_nat_err_desc_t;

typedef union ar_nic_cq_err_info_rmt_idx_bounds_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ Handle of event with index bounds error */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of event with index bounds error */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_rmt_idx_bounds_desc_t;

typedef union ar_nic_cq_err_info_rmt_dropped_event_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ handle of dropped event */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of dropped event */
        uint64_t tcq_status               : 2;	/* Translation Complete Q Status:  00 No Error 01 Descriptor MBE 10 NAT Error 11 Dropped (EN = 0 OR rd_idx or wr_idx > max_idx OR CQ is full with no event error) */
        uint64_t tcq_parity_err           : 1;	/* Translation Complete Q Parity Err */
        uint64_t input_event_parity_err   : 1;	/* Input Buffer Event Data Parity Err */
        uint64_t input_rmt_parity_err     : 1;	/* Input Buffer RMT Data Parity Err  (only applicable if SOURCE is RMT) */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_rmt_dropped_event_desc_t;

typedef union ar_nic_cq_err_info_rmt_nat_response_timeout_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ handle of NAT response timed out event */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of NAT response timed out event */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_rmt_nat_response_timeout_desc_t;

typedef union ar_nic_cq_err_info_lcl_disabled_cq_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ Handle of event with descriptor disabled */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of event with descriptor disabled */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_lcl_disabled_cq_desc_t;

typedef union ar_nic_cq_err_info_lcl_nat_err_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ Handle of event with translation error */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of event with translation error */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t nat_err                  : 5;	/* NAT Error Code */
        uint64_t undefine_63_21           :43;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_lcl_nat_err_desc_t;

typedef union ar_nic_cq_err_info_lcl_idx_bounds_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ Handle of event with index bounds error */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of event with index bounds error */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_lcl_idx_bounds_desc_t;

typedef union ar_nic_cq_err_info_lcl_dropped_event_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ handle of dropped event */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of dropped event */
        uint64_t tcq_status               : 2;	/* Translation Complete Q Status:  00 No Error 01 Descriptor MBE 10 NAT Error 11 Dropped (EN = 0 OR rd_idx or wr_idx > max_idx OR CQ is full with no event error) */
        uint64_t tcq_parity_err           : 1;	/* Translation Complete Q Parity Err */
        uint64_t input_event_parity_err   : 1;	/* Input Buffer Event Data Parity Err */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_lcl_dropped_event_desc_t;

typedef union ar_nic_cq_err_info_lcl_nat_response_timeout_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* CQ handle of NAT response timed out event */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t source                   : 3;	/* Source of NAT response timed out event */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_err_info_lcl_nat_response_timeout_desc_t;

typedef union ar_nic_cq_dbg_errinj_desc_tbl_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Error Injection Mode */
        uint64_t triggered                : 1;	/* Hardware logic sets this bit when error injection triggers */
        uint64_t select                   : 4;	/* Mask of ECC regions to affect */
        uint64_t undefine_15_8            : 8;	/* undefined */
        uint64_t checkbits                : 7;	/* Mask of checkbits to invert */
        uint64_t undefine_31_23           : 9;	/* undefined */
        uint64_t address                  :11;	/* Descriptor Table Address */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_dbg_errinj_desc_tbl_desc_t;

typedef union ar_nic_cq_dbg_errinj_parity_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode0                    : 1;	/* Error Injection Mode[0] */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* Hardware logic sets this bit when error injection triggers */
        uint64_t bte_input_event_data     : 1;	/* Induce parity error on BTE input data */
        uint64_t dla_input_event_data     : 1;	/* Induce parity error on DLA input data */
        uint64_t ssid_input_event_data    : 1;	/* Induce parity error on SSID input data */
        uint64_t rmt_input_event_data     : 1;	/* Induce parity error on RMT input data */
        uint64_t rmt_input_rmt_data       : 1;	/* Induce parity error on RMT input control */
        uint64_t trans_compl_q            : 1;	/* Induce parity error on Translation Complete Queue */
        uint64_t undefine_63_10           :54;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_dbg_errinj_parity_desc_t;

typedef union ar_nic_cq_dbg_iommu_status_desc {
    struct {
        // QW0
        uint64_t cq_iommu_comp_wait_ack_pending: 1;	/* 1 indicates CQ logic is waiting for CQ_IOMMU_EPOCH_CNT[~CQ_IOMMU_EPOCH] to go to 0 so it can send r_q_cq_iommu_comp_wait_ack */
        uint64_t cq_iommu_epoch_cnt_0     : 6;	/* IOMMU epoch count for epoch 0 */
        uint64_t cq_iommu_epoch_cnt_1     : 6;	/* IOMMU epoch count for epoch 1 */
        uint64_t cq_iommu_epoch           : 1;	/* Current IOMMU epoch */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_dbg_iommu_status_desc_t;

typedef union ar_nic_cq_dbg_state_desc {
    struct {
        // QW0
        uint64_t bte_cq_trdr_cnt          : 5;	/* Number of entries currently in BTE TRDR */
        uint64_t bte_cq_trq_cnt           : 5;	/* Number of entries currently in BTE TRQ */
        uint64_t ssid_cq_trdr_cnt         : 5;	/* Number of entries currently in SSID TRDR */
        uint64_t ssid_cq_trq_cnt          : 5;	/* Number of entries currently in SSID TRQ */
        uint64_t rmt_cq_trdr_cnt          : 5;	/* Number of entries currently in RMT TRDR */
        uint64_t rmt_cq_trq_cnt           : 5;	/* Number of entries currently in RMT TRQ */
        uint64_t dla_cq_trdr_cnt          : 5;	/* Number of entries currently in DLATRDR */
        uint64_t dla_cq_trq_cnt           : 5;	/* Number of entries currently in DLA TRQ */
        uint64_t fma_cq_q_cnt             : 3;	/* Number of entries currently in FMA input Q */
        uint64_t cq_desc_fifo_cnt         : 2;	/* Descriptor fifo count */
        uint64_t cq_npt_state             : 5;	/* One-hot NPT output state machine: 1 = idle or sending event packet header flit or sending nop packet 2 = event packet data flit 4 = send nop packet 8 = send irq packet 16= send flush packet */
        uint64_t undefine_63_50           :14;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_cq_dbg_state_desc_t;


#endif
