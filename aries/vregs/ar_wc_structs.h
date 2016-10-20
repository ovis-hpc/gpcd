/******************************************************************************
 * COPYRIGHT CRAY INC. ar_wc_structs.h
 * FILE: ar_wc_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_WC_STRUCTS_H_
#define _AR_WC_STRUCTS_H_

/*
 *  ARIES WC STRUCTURES
 */
typedef union ar_nic_wc_cfg_params_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable write combining */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t req_wait_cnt             : 5;	/* Request wait count */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t buf_scrub_rate           :32;	/* Buffer scrub rate */
        uint64_t undefine_63_44           :20;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_cfg_params_desc_t;

typedef union ar_nic_wc_cfg_crdts_desc {
    struct {
        // QW0
        uint64_t parb_max_crdt            : 8;	/* Max credits for request channel to PARB */
        uint64_t ssid_rsp_max_crdt        : 8;	/* Max credits for response channel to SSID */
        uint64_t ssid_fl_rsp_max_crdt     : 8;	/* Max credits for flush response channel to SSID */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t rspin_fifo_max_crdt      : 5;	/* Max credits for respin_fifo internal to WC block */
        uint64_t undefine_39_37           : 3;	/* undefined */
        uint64_t rspout_fifo_max_crdt     : 6;	/* Max credits for respout_fifo internal to WC block */
        uint64_t undefine_47_46           : 2;	/* undefined */
        uint64_t flrsp_fifo_max_crdt      : 6;	/* Max credits for flrsp_fifo internal to WC block */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_cfg_crdts_desc_t;

typedef union ar_nic_wc_dbg_errinj_mem_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error onceMode 1: Inject error alwaysMode 2: Inject error once if address matchesMode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* This status bit should be clear when the MMR is written by software */
        uint64_t ramselect                :10;	/* This field identifies the memory in which errors will be injected */
        uint64_t undefine_19_14           : 6;	/* undefined */
        uint64_t checkbits                : 7;	/* When a Data RAM error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t poison                   : 1;	/* When a Data RAM error is injected, if this bit is set, the poison bit for the memory address read is inverted */
        uint64_t parity                   : 1;	/* When a TAG error is injected, if this bit is set, the parity bit for the TAG that is read is inverted */
        uint64_t undefine_31_30           : 2;	/* undefined */
        uint64_t address                  : 7;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_39           :25;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_dbg_errinj_mem_desc_t;

typedef union ar_nic_wc_dbg_errinj_bus_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error in flit specified by COUNT of one packetMode 1: Inject error in flit specified by COUNT of all packets */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* This status bit should be clear when the MMR is written by software */
        uint64_t count                    : 3;	/* Flit in which to inject the error */
        uint64_t undefine_11_7            : 5;	/* undefined */
        uint64_t parity                   : 4;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted */
        uint64_t checkbits_lo             : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 63:0 to be inverted */
        uint64_t checkbits_up             : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 135:72 to be inverted */
        uint64_t ntwk_rsp_fifo            : 1;	/* Select ntwk_rsp_fifo read for error injection */
        uint64_t rspin_fifo_0             : 1;	/* Select rspin_fifo of buffer block 0 read for error injection */
        uint64_t rspin_fifo_1             : 1;	/* Select rspin_fifo of buffer block 1 read for error injection */
        uint64_t undefine_63_35           :29;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_dbg_errinj_bus_desc_t;

typedef union ar_nic_wc_dbg_buf_inval_desc {
    struct {
        // QW0
        uint64_t flush                    : 1;	/* When set, entries are flushed to memory as they are invalidated */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_dbg_buf_inval_desc_t;

typedef union ar_nic_wc_sts_buf_avail_desc {
    struct {
        // QW0
        uint64_t buf0                     :32;	/* Flag is set if corresponding write combining buffer in buffer 0 is available to be allocated */
        uint64_t buf1                     :32;	/* Flag is set if corresponding write combining buffer in buffer 1 is available to be allocated */
    };
    uint64_t qwords[1];
} ar_nic_wc_sts_buf_avail_desc_t;

typedef union ar_nic_wc_sts_buf_vld_desc {
    struct {
        // QW0
        uint64_t buf0                     :32;	/* Flag is set if corresponding write combining buffer in buffer 0 is valid */
        uint64_t buf1                     :32;	/* Flag is set if corresponding write combining buffer in buffer 1 is valid */
    };
    uint64_t qwords[1];
} ar_nic_wc_sts_buf_vld_desc_t;

typedef union ar_nic_wc_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for Diagnostics */
        uint64_t rspin0_dat_sbe           : 1;	/* Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0 */
        uint64_t rspin0_dat_mbe           : 1;	/* Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0 */
        uint64_t rspin1_dat_sbe           : 1;	/* Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1 */
        uint64_t rspin1_dat_mbe           : 1;	/* Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1 */
        uint64_t buf0_sbe                 : 1;	/* Set when a SBE is detected on data being read from an entry in buffer block 0 */
        uint64_t buf0_mbe                 : 1;	/* Set when a MBE is detected on data being read from an entry in buffer block 0 */
        uint64_t buf1_sbe                 : 1;	/* Set when a SBE is detected on data being read from an entry in buffer block 1 */
        uint64_t buf1_mbe                 : 1;	/* Set when a MBE is detected on data being read from an entry in buffer block 1 */
        uint64_t ntwk_rsp_hdr_pbe         : 1;	/* Set when a header parity error is detected at the output of the ntwk_rsp FIFO */
        uint64_t rspin0_hdr_pbe           : 1;	/* Set when a header parity error is detected at the output of the rspin FIFO of buffer block 0 */
        uint64_t rspin1_hdr_pbe           : 1;	/* Set when a header parity error is detected at the output of the rspin FIFO of buffer block 1 */
        uint64_t tag_pbe                  : 1;	/* Set when a parity error is detected on a write combining buffer TAG */
        uint64_t ntwk_rsp_fifo_oflw       : 1;	/* Set when an overflow is detected on the ntwk_rsp FIFO */
        uint64_t ntwk_rsp_fifo_uflw       : 1;	/* Set when an underflow is detected on the ntwk_rsp FIFO */
        uint64_t rspin0_fifo_oflw         : 1;	/* Set when an overflow is detected on the rspin FIFO of buffer block 0 */
        uint64_t rspin0_fifo_uflw         : 1;	/* Set when an underflow is detected on the rspin FIFO of buffer block 0 */
        uint64_t rspin1_fifo_oflw         : 1;	/* Set when an overflow is detected on the rspin FIFO of buffer block 1 */
        uint64_t rspin1_fifo_uflw         : 1;	/* Set when an underflow is detected on the rspin FIFO of buffer block 1 */
        uint64_t rspout0_fifo_oflw        : 1;	/* Set when an overflow is detected on the rspout FIFO of buffer block 0 */
        uint64_t rspout0_fifo_uflw        : 1;	/* Set when an underflow is detected on the rspout FIFO of buffer block 0 */
        uint64_t rspout1_fifo_oflw        : 1;	/* Set when an overflow is detected on the rspout FIFO of buffer block 1 */
        uint64_t rspout1_fifo_uflw        : 1;	/* Set when an underflow is detected on the rspout FIFO of buffer block 1 */
        uint64_t flush_req_fifo_oflw      : 1;	/* Set when an overflow is detected on the flush_req FIFO */
        uint64_t flush_req_fifo_uflw      : 1;	/* Set when an underflow is detected on the flush_req FIFO */
        uint64_t flush_rsp_fifo_oflw      : 1;	/* Set when an overflow is detected on the flush_rsp FIFO */
        uint64_t flush_rsp_fifo_uflw      : 1;	/* Set when an underflow is detected on the flush_rsp FIFO */
        uint64_t buffer_timeout           : 1;	/* A write combining buffer time-out has occurred */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_flg_desc_t;

typedef union ar_nic_wc_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for Diagnostics */
        uint64_t rspin0_dat_sbe           : 1;	/* Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0 */
        uint64_t rspin0_dat_mbe           : 1;	/* Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 0 */
        uint64_t rspin1_dat_sbe           : 1;	/* Set when a SBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1 */
        uint64_t rspin1_dat_mbe           : 1;	/* Set when a MBE is detected on network response packet data coming out of the rspin FIFO of buffer block 1 */
        uint64_t buf0_sbe                 : 1;	/* Set when a SBE is detected on data being read from an entry in buffer block 0 */
        uint64_t buf0_mbe                 : 1;	/* Set when a MBE is detected on data being read from an entry in buffer block 0 */
        uint64_t buf1_sbe                 : 1;	/* Set when a SBE is detected on data being read from an entry in buffer block 1 */
        uint64_t buf1_mbe                 : 1;	/* Set when a MBE is detected on data being read from an entry in buffer block 1 */
        uint64_t ntwk_rsp_hdr_pbe         : 1;	/* Set when a header parity error is detected at the output of the ntwk_rsp FIFO */
        uint64_t rspin0_hdr_pbe           : 1;	/* Set when a header parity error is detected at the output of the rspin FIFO of buffer block 0 */
        uint64_t rspin1_hdr_pbe           : 1;	/* Set when a header parity error is detected at the output of the rspin FIFO of buffer block 1 */
        uint64_t tag_pbe                  : 1;	/* Set when a parity error is detected on a write combining buffer TAG */
        uint64_t ntwk_rsp_fifo_oflw       : 1;	/* Set when an overflow is detected on the ntwk_rsp FIFO */
        uint64_t ntwk_rsp_fifo_uflw       : 1;	/* Set when an underflow is detected on the ntwk_rsp FIFO */
        uint64_t rspin0_fifo_oflw         : 1;	/* Set when an overflow is detected on the rspin FIFO of buffer block 0 */
        uint64_t rspin0_fifo_uflw         : 1;	/* Set when an underflow is detected on the rspin FIFO of buffer block 0 */
        uint64_t rspin1_fifo_oflw         : 1;	/* Set when an overflow is detected on the rspin FIFO of buffer block 1 */
        uint64_t rspin1_fifo_uflw         : 1;	/* Set when an underflow is detected on the rspin FIFO of buffer block 1 */
        uint64_t rspout0_fifo_oflw        : 1;	/* Set when an overflow is detected on the rspout FIFO of buffer block 0 */
        uint64_t rspout0_fifo_uflw        : 1;	/* Set when an underflow is detected on the rspout FIFO of buffer block 0 */
        uint64_t rspout1_fifo_oflw        : 1;	/* Set when an overflow is detected on the rspout FIFO of buffer block 1 */
        uint64_t rspout1_fifo_uflw        : 1;	/* Set when an underflow is detected on the rspout FIFO of buffer block 1 */
        uint64_t flush_req_fifo_oflw      : 1;	/* Set when an overflow is detected on the flush_req FIFO */
        uint64_t flush_req_fifo_uflw      : 1;	/* Set when an underflow is detected on the flush_req FIFO */
        uint64_t flush_rsp_fifo_oflw      : 1;	/* Set when an overflow is detected on the flush_rsp FIFO */
        uint64_t flush_rsp_fifo_uflw      : 1;	/* Set when an underflow is detected on the flush_rsp FIFO */
        uint64_t buffer_timeout           : 1;	/* A write combining buffer time-out has occurred */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_clr_desc_t;

typedef union ar_nic_wc_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t rspin0_dat_sbe           : 1;	/* 1:1 */
        uint64_t rspin0_dat_mbe           : 1;	/* 2:2 */
        uint64_t rspin1_dat_sbe           : 1;	/* 3:3 */
        uint64_t rspin1_dat_mbe           : 1;	/* 4:4 */
        uint64_t buf0_sbe                 : 1;	/* 5:5 */
        uint64_t buf0_mbe                 : 1;	/* 6:6 */
        uint64_t buf1_sbe                 : 1;	/* 7:7 */
        uint64_t buf1_mbe                 : 1;	/* 8:8 */
        uint64_t ntwk_rsp_hdr_pbe         : 1;	/* 9:9 */
        uint64_t rspin0_hdr_pbe           : 1;	/* 10:10 */
        uint64_t rspin1_hdr_pbe           : 1;	/* 11:11 */
        uint64_t tag_pbe                  : 1;	/* 12:12 */
        uint64_t ntwk_rsp_fifo_oflw       : 1;	/* 13:13 */
        uint64_t ntwk_rsp_fifo_uflw       : 1;	/* 14:14 */
        uint64_t rspin0_fifo_oflw         : 1;	/* 15:15 */
        uint64_t rspin0_fifo_uflw         : 1;	/* 16:16 */
        uint64_t rspin1_fifo_oflw         : 1;	/* 17:17 */
        uint64_t rspin1_fifo_uflw         : 1;	/* 18:18 */
        uint64_t rspout0_fifo_oflw        : 1;	/* 19:19 */
        uint64_t rspout0_fifo_uflw        : 1;	/* 20:20 */
        uint64_t rspout1_fifo_oflw        : 1;	/* 21:21 */
        uint64_t rspout1_fifo_uflw        : 1;	/* 22:22 */
        uint64_t flush_req_fifo_oflw      : 1;	/* 23:23 */
        uint64_t flush_req_fifo_uflw      : 1;	/* 24:24 */
        uint64_t flush_rsp_fifo_oflw      : 1;	/* 25:25 */
        uint64_t flush_rsp_fifo_uflw      : 1;	/* 26:26 */
        uint64_t buffer_timeout           : 1;	/* 27:27 */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_hss_msk_desc_t;

typedef union ar_nic_wc_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t rspin0_dat_sbe           : 1;	/* 1:1 */
        uint64_t rspin0_dat_mbe           : 1;	/* 2:2 */
        uint64_t rspin1_dat_sbe           : 1;	/* 3:3 */
        uint64_t rspin1_dat_mbe           : 1;	/* 4:4 */
        uint64_t buf0_sbe                 : 1;	/* 5:5 */
        uint64_t buf0_mbe                 : 1;	/* 6:6 */
        uint64_t buf1_sbe                 : 1;	/* 7:7 */
        uint64_t buf1_mbe                 : 1;	/* 8:8 */
        uint64_t ntwk_rsp_hdr_pbe         : 1;	/* 9:9 */
        uint64_t rspin0_hdr_pbe           : 1;	/* 10:10 */
        uint64_t rspin1_hdr_pbe           : 1;	/* 11:11 */
        uint64_t tag_pbe                  : 1;	/* 12:12 */
        uint64_t ntwk_rsp_fifo_oflw       : 1;	/* 13:13 */
        uint64_t ntwk_rsp_fifo_uflw       : 1;	/* 14:14 */
        uint64_t rspin0_fifo_oflw         : 1;	/* 15:15 */
        uint64_t rspin0_fifo_uflw         : 1;	/* 16:16 */
        uint64_t rspin1_fifo_oflw         : 1;	/* 17:17 */
        uint64_t rspin1_fifo_uflw         : 1;	/* 18:18 */
        uint64_t rspout0_fifo_oflw        : 1;	/* 19:19 */
        uint64_t rspout0_fifo_uflw        : 1;	/* 20:20 */
        uint64_t rspout1_fifo_oflw        : 1;	/* 21:21 */
        uint64_t rspout1_fifo_uflw        : 1;	/* 22:22 */
        uint64_t flush_req_fifo_oflw      : 1;	/* 23:23 */
        uint64_t flush_req_fifo_uflw      : 1;	/* 24:24 */
        uint64_t flush_rsp_fifo_oflw      : 1;	/* 25:25 */
        uint64_t flush_rsp_fifo_uflw      : 1;	/* 26:26 */
        uint64_t buffer_timeout           : 1;	/* 27:27 */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_os_msk_desc_t;

typedef union ar_nic_wc_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t rspin0_dat_sbe           : 1;	/* 1:1 */
        uint64_t rspin0_dat_mbe           : 1;	/* 2:2 */
        uint64_t rspin1_dat_sbe           : 1;	/* 3:3 */
        uint64_t rspin1_dat_mbe           : 1;	/* 4:4 */
        uint64_t buf0_sbe                 : 1;	/* 5:5 */
        uint64_t buf0_mbe                 : 1;	/* 6:6 */
        uint64_t buf1_sbe                 : 1;	/* 7:7 */
        uint64_t buf1_mbe                 : 1;	/* 8:8 */
        uint64_t ntwk_rsp_hdr_pbe         : 1;	/* 9:9 */
        uint64_t rspin0_hdr_pbe           : 1;	/* 10:10 */
        uint64_t rspin1_hdr_pbe           : 1;	/* 11:11 */
        uint64_t tag_pbe                  : 1;	/* 12:12 */
        uint64_t ntwk_rsp_fifo_oflw       : 1;	/* 13:13 */
        uint64_t ntwk_rsp_fifo_uflw       : 1;	/* 14:14 */
        uint64_t rspin0_fifo_oflw         : 1;	/* 15:15 */
        uint64_t rspin0_fifo_uflw         : 1;	/* 16:16 */
        uint64_t rspin1_fifo_oflw         : 1;	/* 17:17 */
        uint64_t rspin1_fifo_uflw         : 1;	/* 18:18 */
        uint64_t rspout0_fifo_oflw        : 1;	/* 19:19 */
        uint64_t rspout0_fifo_uflw        : 1;	/* 20:20 */
        uint64_t rspout1_fifo_oflw        : 1;	/* 21:21 */
        uint64_t rspout1_fifo_uflw        : 1;	/* 22:22 */
        uint64_t flush_req_fifo_oflw      : 1;	/* 23:23 */
        uint64_t flush_req_fifo_uflw      : 1;	/* 24:24 */
        uint64_t flush_rsp_fifo_oflw      : 1;	/* 25:25 */
        uint64_t flush_rsp_fifo_uflw      : 1;	/* 26:26 */
        uint64_t buffer_timeout           : 1;	/* 27:27 */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_first_flg_desc_t;

typedef union ar_nic_wc_err_info_buf0_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t sbe_syndrome             : 7;	/* SBE Syndrome */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t sbe_part                 : 2;	/* SBE Part */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t sbe_address              : 7;	/* SBE Address (addr = {buffer[4:0],word[3:2]}) */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t mbe_syndrome             : 7;	/* MBE Syndrome */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t mbe_part                 : 2;	/* MBE Part */
        uint64_t undefine_35_34           : 2;	/* undefined */
        uint64_t mbe_address              : 7;	/* MBE Address (addr = {buffer[4:0],word[3:2]}) */
        uint64_t undefine_43_43           : 1;	/* undefined */
        uint64_t mbe_ssid                 : 9;	/* SSID of buffer which caused the MBE */
        uint64_t undefine_63_53           :11;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_buf0_desc_t;

typedef union ar_nic_wc_err_info_buf1_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t sbe_syndrome             : 7;	/* SBE Syndrome */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t sbe_part                 : 2;	/* SBE Part */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t sbe_address              : 7;	/* SBE Address (addr = {buffer[4:0],word[3:2]}) */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t mbe_syndrome             : 7;	/* MBE Syndrome */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t mbe_part                 : 2;	/* MBE Part */
        uint64_t undefine_35_34           : 2;	/* undefined */
        uint64_t mbe_address              : 7;	/* MBE Address (addr = {buffer[4:0],word[3:2]}) */
        uint64_t undefine_43_43           : 1;	/* undefined */
        uint64_t mbe_ssid                 : 9;	/* SSID of buffer which caused the MBE */
        uint64_t undefine_63_53           :11;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_buf1_desc_t;

typedef union ar_nic_wc_err_info_rspin0_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t sbe_syndrome             : 8;	/* SBE Syndrome */
        uint64_t sbe_upper                : 1;	/* SBE is from upper 72 bits of data flit */
        uint64_t undefine_15_13           : 3;	/* undefined */
        uint64_t mbe_syndrome             : 8;	/* MBE Syndrome */
        uint64_t mbe_upper                : 1;	/* MBE is from upper 72 bits of data flit */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_rspin0_desc_t;

typedef union ar_nic_wc_err_info_rspin1_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t sbe_syndrome             : 8;	/* SBE Syndrome */
        uint64_t sbe_upper                : 1;	/* SBE is from upper 72 bits of data flit */
        uint64_t undefine_15_13           : 3;	/* undefined */
        uint64_t mbe_syndrome             : 8;	/* MBE Syndrome */
        uint64_t mbe_upper                : 1;	/* MBE is from upper 72 bits of data flit */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_rspin1_desc_t;

typedef union ar_nic_wc_err_info_cnt_sbe_buf0_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* SBE error count */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_cnt_sbe_buf0_desc_t;

typedef union ar_nic_wc_err_info_cnt_mbe_buf0_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* MBE error count */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_cnt_mbe_buf0_desc_t;

typedef union ar_nic_wc_err_info_cnt_sbe_buf1_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* SBE error count */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_cnt_sbe_buf1_desc_t;

typedef union ar_nic_wc_err_info_cnt_mbe_buf1_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* MBE error count */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_cnt_mbe_buf1_desc_t;

typedef union ar_nic_wc_err_info_cnt_sbe_rspin0_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* SBE error count */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_cnt_sbe_rspin0_desc_t;

typedef union ar_nic_wc_err_info_cnt_mbe_rspin0_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* MBE error count */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_cnt_mbe_rspin0_desc_t;

typedef union ar_nic_wc_err_info_cnt_sbe_rspin1_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* SBE error count */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_cnt_sbe_rspin1_desc_t;

typedef union ar_nic_wc_err_info_cnt_mbe_rspin1_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* MBE error count */
    };
    uint64_t qwords[1];
} ar_nic_wc_err_info_cnt_mbe_rspin1_desc_t;

typedef union ar_nic_wc_prf_rsp_bytes_rcvd_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Byte Count */
    };
    uint64_t qwords[1];
} ar_nic_wc_prf_rsp_bytes_rcvd_desc_t;

typedef union ar_nic_wc_prf_bufs_vld_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Valid Buffers Count */
    };
    uint64_t qwords[1];
} ar_nic_wc_prf_bufs_vld_desc_t;


#endif
