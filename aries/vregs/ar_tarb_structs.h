/******************************************************************************
 * COPYRIGHT CRAY INC. ar_tarb_structs.h
 * FILE: ar_tarb_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_TARB_STRUCTS_H_
#define _AR_TARB_STRUCTS_H_

/*
 *  ARIES TARB STRUCTURES
 */
typedef union ar_nic_tarb_cfg_params_desc {
    struct {
        // QW0
        uint64_t ssid_credit_max          : 8;	/* SSID Credit Maximum */
        uint64_t sf_ce                    : 1;	/* Setting this bit to 1'b1 will enable store-and-forward on the CE input FIFO */
        uint64_t sf_bte                   : 1;	/* Setting this bit to 1'b1 will enable store-and-forward on the BTE input FIFO */
        uint64_t sf_dla                   : 1;	/* Setting this bit to 1'b1 will enable store-and-forward on the DLA input FIFO */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t max_pkt_size             : 4;	/* Maximum packet size expected to traverse the TARB */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_tarb_cfg_params_desc_t;

typedef union ar_nic_tarb_cfg_qos_rate_desc {
    struct {
        // QW0
        uint64_t b1_rate                  :32;	/* Bucket 1 Rate, in terms of the number of clock cycles between each increment (a value of 0 will increment every cycle, a value of 1 will increment every other cycle, and so on) */
        uint64_t b2_rate                  :32;	/* Bucket 2 Rate, in terms of the number of clock cycles between each increment (a value of 0 will increment every cycle, a value of 1 will increment every other cycle, and so on) */
    };
    uint64_t qwords[1];
} ar_nic_tarb_cfg_qos_rate_desc_t;

typedef union ar_nic_tarb_cfg_qos_size_desc {
    struct {
        // QW0
        uint64_t b1_size                  :32;	/* Bucket 1 Size, in terms of packets */
        uint64_t b2_size                  :16;	/* Bucket 2 Size, in terms of packets */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_tarb_cfg_qos_size_desc_t;

typedef union ar_nic_tarb_dbg_credit_desc {
    struct {
        // QW0
        uint64_t ssid_credit_cnt          : 8;	/* SSID Credits Outstanding */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_tarb_dbg_credit_desc_t;

typedef union ar_nic_tarb_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic Flag */
        uint64_t ce_overflow              : 1;	/* CE Overflow Flag */
        uint64_t bte_overflow             : 1;	/* BTE Overflow Flag */
        uint64_t dla_overflow             : 1;	/* DLA Overflow Flag */
        uint64_t ce_underflow             : 1;	/* CE Underflow Flag */
        uint64_t bte_underflow            : 1;	/* BTE Underflow Flag */
        uint64_t dla_underflow            : 1;	/* DLA Underflow Flag */
        uint64_t undefine_63_7            :57;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_tarb_err_flg_desc_t;

typedef union ar_nic_tarb_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic Flag */
        uint64_t ce_overflow              : 1;	/* CE Overflow Flag */
        uint64_t bte_overflow             : 1;	/* BTE Overflow Flag */
        uint64_t dla_overflow             : 1;	/* DLA Overflow Flag */
        uint64_t ce_underflow             : 1;	/* CE Underflow Flag */
        uint64_t bte_underflow            : 1;	/* BTE Underflow Flag */
        uint64_t dla_underflow            : 1;	/* DLA Underflow Flag */
        uint64_t undefine_63_7            :57;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_tarb_err_clr_desc_t;

typedef union ar_nic_tarb_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t ce_overflow              : 1;	/* 1:1 */
        uint64_t bte_overflow             : 1;	/* 2:2 */
        uint64_t dla_overflow             : 1;	/* 3:3 */
        uint64_t ce_underflow             : 1;	/* 4:4 */
        uint64_t bte_underflow            : 1;	/* 5:5 */
        uint64_t dla_underflow            : 1;	/* 6:6 */
        uint64_t undefine_63_7            :57;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_tarb_err_hss_msk_desc_t;

typedef union ar_nic_tarb_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t ce_overflow              : 1;	/* 1:1 */
        uint64_t bte_overflow             : 1;	/* 2:2 */
        uint64_t dla_overflow             : 1;	/* 3:3 */
        uint64_t ce_underflow             : 1;	/* 4:4 */
        uint64_t bte_underflow            : 1;	/* 5:5 */
        uint64_t dla_underflow            : 1;	/* 6:6 */
        uint64_t undefine_63_7            :57;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_tarb_err_os_msk_desc_t;

typedef union ar_nic_tarb_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t ce_overflow              : 1;	/* 1:1 */
        uint64_t bte_overflow             : 1;	/* 2:2 */
        uint64_t dla_overflow             : 1;	/* 3:3 */
        uint64_t ce_underflow             : 1;	/* 4:4 */
        uint64_t bte_underflow            : 1;	/* 5:5 */
        uint64_t dla_underflow            : 1;	/* 6:6 */
        uint64_t undefine_63_7            :57;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_tarb_err_first_flg_desc_t;


#endif
