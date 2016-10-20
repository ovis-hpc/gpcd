/******************************************************************************
 * COPYRIGHT CRAY INC. ar_amo_structs.h
 * FILE: ar_amo_structs.h
 * Created by v2h.c on Wed Oct  8 14:38:57 2014
 ******************************************************************************/

#ifndef _AR_AMO_STRUCTS_H_
#define _AR_AMO_STRUCTS_H_

/*
 *  ARIES AMO STRUCTURES
 */
typedef union ar_nic_amo_cfg_cache_inv_desc {
    struct {
        // QW0
        uint64_t inv                      : 1;	/* Set this to invalidate stale entries */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_cfg_cache_inv_desc_t;

typedef union ar_nic_amo_cfg_rounding_mode_desc {
    struct {
        // QW0
        uint64_t rounding_mode            : 2;	/* Rounding Mode for Floating point computation */
        uint64_t undefine_63_2            :62;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_cfg_rounding_mode_desc_t;

typedef union ar_nic_amo_cfg_params_desc {
    struct {
        // QW0
        uint64_t lfsr_threshold           : 8;	/* Threshold to adjust frequency of updates */
        uint64_t lfsr_seed                : 8;	/* Initial value of LFSR at negative edge of warm reset */
        uint64_t lfsr_en                  : 1;	/* Enable intra-chain memory updates (write backs) */
        uint64_t sf_input                 : 1;	/* Set to enable store-and-forward on the request input FIFO */
        uint64_t sf_req                   : 1;	/* Set to enable store-and-forward on the request FIFO */
        uint64_t sf_rsp                   : 1;	/* Set to enable store-and-forward on the response FIFO */
        uint64_t reqlist_max              : 6;	/* The maximum number of AMO requests that can be processed simultaneously (valid in the request list) minus one */
        uint64_t force_ca_en              : 1;	/* Set this to force the caching flavor of all AMO requests, regardless of the ca bit */
        uint64_t force_ca_val             : 1;	/* Value to force */
        uint64_t ordered_wait             : 1;	/* An ordered request (RO=0) waits until the cache is clean */
        uint64_t ignore_dirty             : 1;	/* Set to ignore the dirty-bits in the AMO cache (always assume dirty) */
        uint64_t clear_ro                 : 1;	/* This determines how the RO (reorderable) hint is set for requests that the AMO block generates */
        uint64_t timeout_en               : 1;	/* Enable the timeout mechanism */
        uint64_t timeout_threshold        :32;	/* Number of clock cycles to periodically take a snapshot of the pending cache fills and scrub the cache (and corresponding entries in the request list) of stale entries */
    };
    uint64_t qwords[1];
} ar_nic_amo_cfg_params_desc_t;

typedef union ar_nic_amo_cfg_crdts_desc {
    struct {
        // QW0
        uint64_t input_crdts_max          : 8;	/* Number of credits between the input and output (req0) request queues */
        uint64_t parb_crdts_max           : 8;	/* AMO to PARB request credits */
        uint64_t rsp_crdts_max            : 8;	/* AMO-generated response credits (rsp1) */
        uint64_t req_crdts_max            : 8;	/* AMO-generated request credits (req1) */
        uint64_t max_pkt_size             : 4;	/* Maximum packet size (in flits) */
        uint64_t rsp_arbitration          : 8;	/* Number of failed arbitration cycles to wait before forcing the AMO response priority */
        uint64_t undefine_63_44           :20;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_cfg_crdts_desc_t;

typedef union ar_nic_amo_cfg_offld_desc {
    struct {
        // QW0
        uint64_t op_disable               :16;	/* 16-bit vector indicating which of the 16 OP encodings are illegal */
        uint64_t op_flush                 :16;	/* 16-bit vector indicating which of the 16 OP encodings will flush the cache prior to being performed (non-offloaded non-fetching AMOs only) */
        uint64_t op_offload               :16;	/* 16-bit vector indicating which of the 16 OP encodings can be offloaded (if qualifiers allow) */
        uint64_t nonfetch                 : 1;	/* Qualifier for the offloading vector */
        uint64_t fetch                    : 1;	/* Qualifier for the offloading vector */
        uint64_t word32                   : 1;	/* Qualifier for the offloading vector */
        uint64_t word64                   : 1;	/* Qualifier for the offloading vector */
        uint64_t uncacheable              : 1;	/* Qualifier for the offloading vector */
        uint64_t cacheable                : 1;	/* Qualifier for the offloading vector */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_cfg_offld_desc_t;

typedef union ar_nic_amo_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic */
        uint64_t input_fifo_ovflw         : 1;	/* Overflow detected on input fifo (from NPT) */
        uint64_t req0_fifo_ovflw          : 1;	/* Overflow detected on req0 fifo (PI requests) */
        uint64_t req1_fifo_ovflw          : 1;	/* Overflow detected on req1 fifo (AMO writebacks) */
        uint64_t rsp0_fifo_ovflw          : 1;	/* Overflow detected on rsp0 fifo (PI responses) */
        uint64_t rsp1_fifo_ovflw          : 1;	/* Overflow detected on rsp1 fifo (AMO responses) */
        uint64_t input_fifo_unflw         : 1;	/* Underflow detected on input fifo (from NPT) */
        uint64_t req0_fifo_unflw          : 1;	/* Underflow detected on req0 fifo (PI requests) */
        uint64_t req1_fifo_unflw          : 1;	/* Underflow detected on req1 fifo (AMO writebacks) */
        uint64_t rsp0_fifo_unflw          : 1;	/* Underflow detected on rsp0 fifo (PI responses) */
        uint64_t rsp1_fifo_unflw          : 1;	/* Underflow detected on rsp1 fifo (AMO responses) */
        uint64_t req_parity               : 1;	/* Parity error on request packet (packet dropped)  Classified as UXACT because the dropped packet may have been a CQE or DSMN flag data write */
        uint64_t req_sbe                  : 1;	/* SBE on AMO request */
        uint64_t req_mbe                  : 1;	/* MBE on AMO request */
        uint64_t rsp_parity               : 1;	/* Parity error on response packet (packet dropped) */
        uint64_t rsp_unsolicited          : 1;	/* Fill response was not expected (tag state not valid and pending) */
        uint64_t rsp_sbe                  : 1;	/* SBE on fill response */
        uint64_t rsp_mbe                  : 1;	/* MBE on fill response */
        uint64_t datastore_rd_poison      : 1;	/* The datastore read encountered a parity error */
        uint64_t datastore_wr_poison      : 1;	/* The datastore was intentionally written with poisoned data */
        uint64_t reqlist_sbe              : 1;	/* SBE reading request list */
        uint64_t reqlist_mbe              : 1;	/* MBE reading request list */
        uint64_t fp_inexact               : 1;	/* Floating Point Exception: Inexact The floating point errors are for information purposes only */
        uint64_t fp_invalid               : 1;	/* Floating Point Exception: Invalid The floating point errors are for information purposes only */
        uint64_t fp_overflow              : 1;	/* Floating Point Exception: Overflow The floating point errors are for information purposes only */
        uint64_t fp_underflow             : 1;	/* Floating Point Exception: Underflow The floating point errors are for information purposes only */
        uint64_t timeout                  : 1;	/* Fill request timed out */
        uint64_t undefine_63_27           :37;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_flg_desc_t;

typedef union ar_nic_amo_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic */
        uint64_t input_fifo_ovflw         : 1;	/* Overflow detected on input fifo (from NPT) */
        uint64_t req0_fifo_ovflw          : 1;	/* Overflow detected on req0 fifo (PI requests) */
        uint64_t req1_fifo_ovflw          : 1;	/* Overflow detected on req1 fifo (AMO writebacks) */
        uint64_t rsp0_fifo_ovflw          : 1;	/* Overflow detected on rsp0 fifo (PI responses) */
        uint64_t rsp1_fifo_ovflw          : 1;	/* Overflow detected on rsp1 fifo (AMO responses) */
        uint64_t input_fifo_unflw         : 1;	/* Underflow detected on input fifo (from NPT) */
        uint64_t req0_fifo_unflw          : 1;	/* Underflow detected on req0 fifo (PI requests) */
        uint64_t req1_fifo_unflw          : 1;	/* Underflow detected on req1 fifo (AMO writebacks) */
        uint64_t rsp0_fifo_unflw          : 1;	/* Underflow detected on rsp0 fifo (PI responses) */
        uint64_t rsp1_fifo_unflw          : 1;	/* Underflow detected on rsp1 fifo (AMO responses) */
        uint64_t req_parity               : 1;	/* Parity error on request packet (packet dropped)  Classified as UXACT because the dropped packet may have been a CQE or DSMN flag data write */
        uint64_t req_sbe                  : 1;	/* SBE on AMO request */
        uint64_t req_mbe                  : 1;	/* MBE on AMO request */
        uint64_t rsp_parity               : 1;	/* Parity error on response packet (packet dropped) */
        uint64_t rsp_unsolicited          : 1;	/* Fill response was not expected (tag state not valid and pending) */
        uint64_t rsp_sbe                  : 1;	/* SBE on fill response */
        uint64_t rsp_mbe                  : 1;	/* MBE on fill response */
        uint64_t datastore_rd_poison      : 1;	/* The datastore read encountered a parity error */
        uint64_t datastore_wr_poison      : 1;	/* The datastore was intentionally written with poisoned data */
        uint64_t reqlist_sbe              : 1;	/* SBE reading request list */
        uint64_t reqlist_mbe              : 1;	/* MBE reading request list */
        uint64_t fp_inexact               : 1;	/* Floating Point Exception: Inexact The floating point errors are for information purposes only */
        uint64_t fp_invalid               : 1;	/* Floating Point Exception: Invalid The floating point errors are for information purposes only */
        uint64_t fp_overflow              : 1;	/* Floating Point Exception: Overflow The floating point errors are for information purposes only */
        uint64_t fp_underflow             : 1;	/* Floating Point Exception: Underflow The floating point errors are for information purposes only */
        uint64_t timeout                  : 1;	/* Fill request timed out */
        uint64_t undefine_63_27           :37;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_clr_desc_t;

typedef union ar_nic_amo_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t input_fifo_ovflw         : 1;	/* 1:1 */
        uint64_t req0_fifo_ovflw          : 1;	/* 2:2 */
        uint64_t req1_fifo_ovflw          : 1;	/* 3:3 */
        uint64_t rsp0_fifo_ovflw          : 1;	/* 4:4 */
        uint64_t rsp1_fifo_ovflw          : 1;	/* 5:5 */
        uint64_t input_fifo_unflw         : 1;	/* 6:6 */
        uint64_t req0_fifo_unflw          : 1;	/* 7:7 */
        uint64_t req1_fifo_unflw          : 1;	/* 8:8 */
        uint64_t rsp0_fifo_unflw          : 1;	/* 9:9 */
        uint64_t rsp1_fifo_unflw          : 1;	/* 10:10 */
        uint64_t req_parity               : 1;	/* 11:11 */
        uint64_t req_sbe                  : 1;	/* 12:12 */
        uint64_t req_mbe                  : 1;	/* 13:13 */
        uint64_t rsp_parity               : 1;	/* 14:14 */
        uint64_t rsp_unsolicited          : 1;	/* 15:15 */
        uint64_t rsp_sbe                  : 1;	/* 16:16 */
        uint64_t rsp_mbe                  : 1;	/* 17:17 */
        uint64_t datastore_rd_poison      : 1;	/* 18:18 */
        uint64_t datastore_wr_poison      : 1;	/* 19:19 */
        uint64_t reqlist_sbe              : 1;	/* 20:20 */
        uint64_t reqlist_mbe              : 1;	/* 21:21 */
        uint64_t fp_inexact               : 1;	/* 22:22 */
        uint64_t fp_invalid               : 1;	/* 23:23 */
        uint64_t fp_overflow              : 1;	/* 24:24 */
        uint64_t fp_underflow             : 1;	/* 25:25 */
        uint64_t timeout                  : 1;	/* 26:26 */
        uint64_t undefine_63_27           :37;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_hss_msk_desc_t;

typedef union ar_nic_amo_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t input_fifo_ovflw         : 1;	/* 1:1 */
        uint64_t req0_fifo_ovflw          : 1;	/* 2:2 */
        uint64_t req1_fifo_ovflw          : 1;	/* 3:3 */
        uint64_t rsp0_fifo_ovflw          : 1;	/* 4:4 */
        uint64_t rsp1_fifo_ovflw          : 1;	/* 5:5 */
        uint64_t input_fifo_unflw         : 1;	/* 6:6 */
        uint64_t req0_fifo_unflw          : 1;	/* 7:7 */
        uint64_t req1_fifo_unflw          : 1;	/* 8:8 */
        uint64_t rsp0_fifo_unflw          : 1;	/* 9:9 */
        uint64_t rsp1_fifo_unflw          : 1;	/* 10:10 */
        uint64_t req_parity               : 1;	/* 11:11 */
        uint64_t req_sbe                  : 1;	/* 12:12 */
        uint64_t req_mbe                  : 1;	/* 13:13 */
        uint64_t rsp_parity               : 1;	/* 14:14 */
        uint64_t rsp_unsolicited          : 1;	/* 15:15 */
        uint64_t rsp_sbe                  : 1;	/* 16:16 */
        uint64_t rsp_mbe                  : 1;	/* 17:17 */
        uint64_t datastore_rd_poison      : 1;	/* 18:18 */
        uint64_t datastore_wr_poison      : 1;	/* 19:19 */
        uint64_t reqlist_sbe              : 1;	/* 20:20 */
        uint64_t reqlist_mbe              : 1;	/* 21:21 */
        uint64_t fp_inexact               : 1;	/* 22:22 */
        uint64_t fp_invalid               : 1;	/* 23:23 */
        uint64_t fp_overflow              : 1;	/* 24:24 */
        uint64_t fp_underflow             : 1;	/* 25:25 */
        uint64_t timeout                  : 1;	/* 26:26 */
        uint64_t undefine_63_27           :37;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_os_msk_desc_t;

typedef union ar_nic_amo_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t input_fifo_ovflw         : 1;	/* 1:1 */
        uint64_t req0_fifo_ovflw          : 1;	/* 2:2 */
        uint64_t req1_fifo_ovflw          : 1;	/* 3:3 */
        uint64_t rsp0_fifo_ovflw          : 1;	/* 4:4 */
        uint64_t rsp1_fifo_ovflw          : 1;	/* 5:5 */
        uint64_t input_fifo_unflw         : 1;	/* 6:6 */
        uint64_t req0_fifo_unflw          : 1;	/* 7:7 */
        uint64_t req1_fifo_unflw          : 1;	/* 8:8 */
        uint64_t rsp0_fifo_unflw          : 1;	/* 9:9 */
        uint64_t rsp1_fifo_unflw          : 1;	/* 10:10 */
        uint64_t req_parity               : 1;	/* 11:11 */
        uint64_t req_sbe                  : 1;	/* 12:12 */
        uint64_t req_mbe                  : 1;	/* 13:13 */
        uint64_t rsp_parity               : 1;	/* 14:14 */
        uint64_t rsp_unsolicited          : 1;	/* 15:15 */
        uint64_t rsp_sbe                  : 1;	/* 16:16 */
        uint64_t rsp_mbe                  : 1;	/* 17:17 */
        uint64_t datastore_rd_poison      : 1;	/* 18:18 */
        uint64_t datastore_wr_poison      : 1;	/* 19:19 */
        uint64_t reqlist_sbe              : 1;	/* 20:20 */
        uint64_t reqlist_mbe              : 1;	/* 21:21 */
        uint64_t fp_inexact               : 1;	/* 22:22 */
        uint64_t fp_invalid               : 1;	/* 23:23 */
        uint64_t fp_overflow              : 1;	/* 24:24 */
        uint64_t fp_underflow             : 1;	/* 25:25 */
        uint64_t timeout                  : 1;	/* 26:26 */
        uint64_t undefine_63_27           :37;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_first_flg_desc_t;

typedef union ar_nic_amo_err_info_reqlist_ram_desc {
    struct {
        // QW0
        uint64_t sbe_syndrome             : 9;	/* SBE syndrome */
        uint64_t sbe_address              : 6;	/* SBE Address */
        uint64_t mbe_syndrome             : 9;	/* MBE syndrome */
        uint64_t mbe_address              : 6;	/* MBE Address */
        uint64_t undefine_63_30           :34;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_info_reqlist_ram_desc_t;

typedef union ar_nic_amo_err_info_fp_inexact_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t addr_47_2                :46;	/* Address associated with floating point exception */
        uint64_t tc                       : 4;	/* Translation context associated with floating point exception */
        uint64_t word_size                : 1;	/* Word size associated with floating point exception (0=32-bit; 1=64-bit) */
        uint64_t undefine_63_53           :11;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_info_fp_inexact_desc_t;

typedef union ar_nic_amo_err_info_fp_invalid_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t addr_47_2                :46;	/* Address associated with floating point exception */
        uint64_t tc                       : 4;	/* Translation context associated with floating point exception */
        uint64_t word_size                : 1;	/* Word size associated with floating point exception (0=32-bit; 1=64-bit) */
        uint64_t undefine_63_53           :11;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_info_fp_invalid_desc_t;

typedef union ar_nic_amo_err_info_fp_overflow_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t addr_47_2                :46;	/* Address associated with floating point exception */
        uint64_t tc                       : 4;	/* Translation context associated with floating point exception */
        uint64_t word_size                : 1;	/* Word size associated with floating point exception (0=32-bit; 1=64-bit) */
        uint64_t undefine_63_53           :11;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_info_fp_overflow_desc_t;

typedef union ar_nic_amo_err_info_fp_underflow_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t addr_47_2                :46;	/* Address associated with floating point exception */
        uint64_t tc                       : 4;	/* Translation context associated with floating point exception */
        uint64_t word_size                : 1;	/* Word size associated with floating point exception (0=32-bit; 1=64-bit) */
        uint64_t undefine_63_53           :11;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_info_fp_underflow_desc_t;

typedef union ar_nic_amo_err_info_req_bus_desc {
    struct {
        // QW0
        uint64_t syndrome0_sbe            : 8;	/* Syndrome from SBE (Lower word) */
        uint64_t syndrome1_sbe            : 8;	/* Syndrome from SBE (Upper word) */
        uint64_t syndrome0_mbe            : 8;	/* Syndrome from MBE (Lower word) */
        uint64_t syndrome1_mbe            : 8;	/* Syndrome from MBE (Upper word) */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_info_req_bus_desc_t;

typedef union ar_nic_amo_err_info_rsp_bus_desc {
    struct {
        // QW0
        uint64_t syndrome_sbe             : 8;	/* Syndrome from SBE */
        uint64_t syndrome_mbe             : 8;	/* Syndrome from MBE */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_err_info_rsp_bus_desc_t;

typedef union ar_nic_amo_dbg_state_desc {
    struct {
        // QW0
        uint64_t input_crdts              : 8;	/* credits used */
        uint64_t parb_crdts               : 8;	/* credits used */
        uint64_t rsp_crdts                : 8;	/* credits used */
        uint64_t req_crdts                : 8;	/* credits used */
        uint64_t req0_rdy                 : 1;	/* Ready according to ordering rules */
        uint64_t req1_rdy                 : 1;	/* Ready according to ordering rules */
        uint64_t rsp0_rdy                 : 1;	/* Ready according to ordering rules */
        uint64_t rsp1_rdy                 : 1;	/* Ready according to ordering rules */
        uint64_t reqlist_cntr             : 7;	/* Number of valid entries in the request list */
        uint64_t lfsr_val                 : 8;	/* Value of write-back lfsr */
        uint64_t cache_vld                : 1;	/* At least one entry in the cache is valid */
        uint64_t cache_pend               : 1;	/* At least one entry in the cache is pending a fill */
        uint64_t undefine_63_53           :11;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_dbg_state_desc_t;

typedef union ar_nic_amo_dbg_errinj_reqlist_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t undefine_15_4            :12;	/* undefined */
        uint64_t checkbyte                : 9;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t address                  : 6;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_38           :26;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_dbg_errinj_reqlist_desc_t;

typedef union ar_nic_amo_dbg_errinj_datastore_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t undefine_31_4            :28;	/* undefined */
        uint64_t address                  : 6;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_38           :26;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_dbg_errinj_datastore_desc_t;

typedef union ar_nic_amo_dbg_errinj_req_bus_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* 0: Inject error on one packet 1: Inject error on every packet */
        uint64_t count                    : 3;	/* Indicates which flit of a packet to inject the error */
        uint64_t tail                     : 1;	/* When an error is injected, this field indicates whether the tail bit should be inverted */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t ecc0                     : 8;	/* When an error is injected on a payload flit, this field indicates which bits of ECC0 should be inverted */
        uint64_t ecc1                     : 8;	/* When an error is injected on a payload flit, this field indicates which bits of ECC1 should be inverted */
        uint64_t parity                   : 4;	/* When an error is injected on a header flit, this field indicates which parity bits should be inverted */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_dbg_errinj_req_bus_desc_t;

typedef union ar_nic_amo_dbg_errinj_rsp_bus_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Enable error injection */
        uint64_t mode                     : 1;	/* 0: Inject error on one packet 1: Inject error on every packet */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t parity                   : 1;	/* When an error is injected, this field will cause the parity to be inverted (if set) */
        uint64_t ecc0                     : 8;	/* When an error is injected, this field indicates which bits of the ECC0 should be inverted */
        uint64_t pkt_err                  : 1;	/* When an error is injected, this field will cause the rstatus field to be interpreted as non-zero */
        uint64_t undefine_63_13           :51;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_dbg_errinj_rsp_bus_desc_t;

typedef union ar_nic_amo_prf_en_desc {
    struct {
        // QW0
        uint64_t prf_match_en             : 1;	/* Enable A_NIC_AMO_PRF_STALL_DURATION_MATCH */
        uint64_t prf_flush_en             : 1;	/* Enable A_NIC_AMO_PRF_STALL_DURATION_FLUSH */
        uint64_t prf_full_en              : 1;	/* Enable A_NIC_AMO_PRF_STALL_DURATION_FULL */
        uint64_t prf_ordered_en           : 1;	/* Enable A_NIC_AMO_PRF_STALL_DURATION_ORDERED */
        uint64_t undefine_63_4            :60;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_prf_en_desc_t;

typedef union ar_nic_amo_prf_stall_duration_match_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_prf_stall_duration_match_desc_t;

typedef union ar_nic_amo_prf_stall_duration_flush_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_prf_stall_duration_flush_desc_t;

typedef union ar_nic_amo_prf_stall_duration_full_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_prf_stall_duration_full_desc_t;

typedef union ar_nic_amo_prf_stall_duration_ordered_desc {
    struct {
        // QW0
        uint64_t max                      :40;	/* Maximum duration of stall */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_amo_prf_stall_duration_ordered_desc_t;


#endif
