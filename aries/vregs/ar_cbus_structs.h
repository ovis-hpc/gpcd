/******************************************************************************
 * COPYRIGHT CRAY INC. ar_cbus_structs.h
 * FILE: ar_cbus_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_CBUS_STRUCTS_H_
#define _AR_CBUS_STRUCTS_H_

/*
 *  ARIES CBUS STRUCTURES
 */
typedef union ar_serdes_cbus_pattern_desc {
    struct {
        // QW0
        uint64_t q_pattern                : 8;	/* Receive pattern detected */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_cbus_pattern_desc_t;

typedef union ar_serdes_cbus_patdet_desc {
    struct {
        // QW0
        uint64_t q_patdet                 : 8;	/* Receive pattern detected flag */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_cbus_patdet_desc_t;

typedef union ar_serdes_cbus_revpol_desc {
    struct {
        // QW0
        uint64_t revpol                   : 8;	/* Revers polarity flag */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_cbus_revpol_desc_t;

typedef union ar_serdes_cbus_tx_pat_desc {
    struct {
        // QW0
        uint64_t q_tx_pat                 : 8;	/* Transmit pattern */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_cbus_tx_pat_desc_t;

typedef union ar_serdes_cbus_rx_pat_desc {
    struct {
        // QW0
        uint64_t q_rx_pat                 : 8;	/* Receive pattern */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_cbus_rx_pat_desc_t;

typedef union ar_serdes_cbus_rx_mask_desc {
    struct {
        // QW0
        uint64_t q_rx_mask                : 8;	/* Receive mask */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_cbus_rx_mask_desc_t;

typedef union ar_serdes_cbus_enpolcnt_desc {
    struct {
        // QW0
        uint64_t q_enpolcnt               : 1;	/* Enable polarity count */
        uint64_t reserved_7_1             : 7;	/*  */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_cbus_enpolcnt_desc_t;

typedef union ar_serdes_cbus_txi_en_proc_reset_desc {
    struct {
        // QW0
        uint64_t q_proc_reset             : 1;	/* Lane reset */
        uint64_t q_txi_en                 : 1;	/* Enable tx_init module */
        uint64_t reserved_7_2             : 6;	/*  */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_cbus_txi_en_proc_reset_desc_t;

typedef union ar_serdes_cbus_elec_idle_en_sel_desc {
    struct {
        // QW0
        uint64_t r_patt_gen_sel_fpsk      : 3;	/* SerDes TX pattern generator select */
        uint64_t r_patt_gen_en_fpsk       : 1;	/* SerDes TX pattern generator enable */
        uint64_t r_tx_elec_idle_fpsk      : 1;	/* SerDes TX elec idle */
        uint64_t reserved_7_5             : 3;	/*  */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_cbus_elec_idle_en_sel_desc_t;


#endif
