/******************************************************************************
 * COPYRIGHT CRAY INC. ar_dla_structs.h
 * FILE: ar_dla_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_DLA_STRUCTS_H_
#define _AR_DLA_STRUCTS_H_

/*
 *  ARIES DLA STRUCTURES
 */
typedef union ar_nic_dla_desc_status_desc {
    struct {
        // QW0
        uint64_t consumed_pr_credits      :15;	/* Consumed persistent reservation credit count */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t resvd_credits            :15;	/* Reserved credit count */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t pr_release_pending       : 1;	/* Persistent reservation release active */
        uint64_t hp_active                : 1;	/* High priority, valid only if controlled discard reservation is active */
        uint64_t pr_active                : 1;	/* Persistent reservation active */
        uint64_t cd_active                : 1;	/* Controlled discard reservation active */
        uint64_t trans_overflow           : 1;	/* Overflow error flag for current transaction */
        uint64_t alloc_overflow           : 1;	/* Overflow error flag for current allocation */
        uint64_t discard                  : 1;	/* Discard flag, indicating an allocation has failed */
        uint64_t undefine_63_39           :25;	/* undefined */
        // QW1
        uint64_t block_id                 :20;	/* Block ID for reporting allocation status */
        uint64_t alloc_cqh                :11;	/* Completion queue handle for reporting allocation status */
        uint64_t undefine_127_95          :33;	/* undefined */
        // QW2
        uint64_t marker_id                :32;	/* DLA marker ID */
        uint64_t marker_cqh               :11;	/* DLA marker completion queue handle */
        uint64_t marker_overflow          : 1;	/* DLA marker overflow flag */
        uint64_t undefine_191_172         :20;	/* undefined */
    };
    uint64_t qwords[3];
} ar_nic_dla_desc_status_desc_t;

typedef union ar_nic_dla_cfg_max_desc {
    struct {
        // QW0
        uint64_t max_credits              :15;	/* Maximum credit count */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_max_desc_t;

typedef union ar_nic_dla_cfg_max_lo_cd_desc {
    struct {
        // QW0
        uint64_t max_lo_cd_credits        :15;	/* Maximum low priority controlled discard allowed credit count */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_max_lo_cd_desc_t;

typedef union ar_nic_dla_cfg_max_hi_cd_desc {
    struct {
        // QW0
        uint64_t max_hi_cd_credits        :15;	/* Maximum high priority controlled discard allowed credit count */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_max_hi_cd_desc_t;

typedef union ar_nic_dla_cfg_max_pr_desc {
    struct {
        // QW0
        uint64_t max_pr_credits           :15;	/* Maximum persistent reservation credit count */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_max_pr_desc_t;

typedef union ar_nic_dla_cfg_max_lo_cd_pr_desc {
    struct {
        // QW0
        uint64_t max_lo_cd_pr_credits     :15;	/* Maximum low priority controlled discard and persistent reservation credit count */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_max_lo_cd_pr_desc_t;

typedef union ar_nic_dla_cfg_max_lo_hi_cd_desc {
    struct {
        // QW0
        uint64_t max_lo_hi_cd_credits     :15;	/* Maximum low and high priority controlled discard credit count */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_max_lo_hi_cd_desc_t;

typedef union ar_nic_dla_cfg_max_hi_cd_pr_desc {
    struct {
        // QW0
        uint64_t max_hi_cd_pr_credits     :15;	/* Maximum high priority controlled discard and persistent reservation credit count */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_max_hi_cd_pr_desc_t;

typedef union ar_nic_dla_cfg_max_cd_alloc_desc {
    struct {
        // QW0
        uint64_t max_cd_alloc_credits     :15;	/* Maximum controlled discard allocation credit count */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_max_cd_alloc_desc_t;

typedef union ar_nic_dla_cfg_max_pr_alloc_desc {
    struct {
        // QW0
        uint64_t max_pr_alloc_credits     :15;	/* Maximum persistent reservation allocation credit count */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_max_pr_alloc_desc_t;

typedef union ar_nic_dla_sts_consumed_desc {
    struct {
        // QW0
        uint64_t consumed                 :15;	/* Total FIFO credits currently in use */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_sts_consumed_desc_t;

typedef union ar_nic_dla_sts_consumed_lo_cd_desc {
    struct {
        // QW0
        uint64_t lo_cd_consumed           :15;	/* Count of FIFO credits currently used by low priority controlled discard reservations */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_sts_consumed_lo_cd_desc_t;

typedef union ar_nic_dla_sts_consumed_hi_cd_desc {
    struct {
        // QW0
        uint64_t hi_cd_consumed           :15;	/* Count of FIFO credits currently used for high priority controlled discard reservations */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_sts_consumed_hi_cd_desc_t;

typedef union ar_nic_dla_sts_consumed_pr_desc {
    struct {
        // QW0
        uint64_t pr_consumed              :15;	/* Count of FIFO credits currently used for persistent reservations */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_sts_consumed_pr_desc_t;

typedef union ar_nic_dla_sts_resvd_lo_cd_desc {
    struct {
        // QW0
        uint64_t lo_cd_resvd              :15;	/* Count of FIFO credits currently reserved for low priority controlled discard requests */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_sts_resvd_lo_cd_desc_t;

typedef union ar_nic_dla_sts_resvd_hi_cd_desc {
    struct {
        // QW0
        uint64_t hi_cd_resvd              :15;	/* Count of FIFO credits currently reserved for high priority controlled discard */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_sts_resvd_hi_cd_desc_t;

typedef union ar_nic_dla_sts_resvd_pr_desc {
    struct {
        // QW0
        uint64_t pr_resvd                 :15;	/* Count of FIFO credits currently reserved for persistent reservations */
        uint64_t undefine_63_15           :49;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_sts_resvd_pr_desc_t;

typedef union ar_nic_dla_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Not written by hardware */
        uint64_t fifo_hdr_sbe             : 1;	/* Outgoing header ECC single bit error */
        uint64_t fifo_hdr_mbe             : 1;	/* Outgoing header ECC multiple bit error */
        uint64_t data0_sbe                : 1;	/* Lower data word from FMA single bit error */
        uint64_t data0_mbe                : 1;	/* Lower data word from FMA multiple bit error */
        uint64_t data1_sbe                : 1;	/* Upper data word from FMA single bit error Info MMR A_NIC_DLA_ERR_INFO_PKT holds an additional information */
        uint64_t data1_mbe                : 1;	/* Upper data word from FMA multiple bit error */
        uint64_t hdr_perr                 : 1;	/* Header with parity error received from FMA */
        uint64_t fifo_overflow            : 1;	/* DLA FIFO overflow by hardware due to a hardware error or misconfigured credit count */
        uint64_t alloc_ram_sbe            : 1;	/* Descriptor status offset 0x08 single bit error */
        uint64_t alloc_ram_mbe            : 1;	/* Descriptor status offset 0x08 multiple bit error */
        uint64_t marker_ram_sbe           : 1;	/* Descriptor status offset 0x10 single bit error */
        uint64_t marker_ram_mbe           : 1;	/* Descriptor status offset 0x10 multiple bit error */
        uint64_t fma_pkt_err              : 1;	/* Set when an AllocSSID, SyncComplete, or DLAMARKER packet is received from FMA with an lstatus of  A_STATUS_FMA_UNCORRECTABLE or A_STATUS_DATA_ERR or with a packet data error of DATA0_MBE or DATA1_MBE */
        uint64_t alloc_both_err           : 1;	/* An AllocSSID packet with both CD and PR allocation bits set */
        uint64_t fifo_data0_sbe           : 1;	/* DLA FIFO data flit lower SBE */
        uint64_t fifo_data0_mbe           : 1;	/* DLA FIFO data flit lower MBE */
        uint64_t fifo_data1_sbe           : 1;	/* DLA FIFO data flit upper SBE */
        uint64_t fifo_data1_mbe           : 1;	/* DLA FIFO data flit upper MBE */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_err_flg_desc_t;

typedef union ar_nic_dla_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Not written by hardware */
        uint64_t fifo_hdr_sbe             : 1;	/* Outgoing header ECC single bit error */
        uint64_t fifo_hdr_mbe             : 1;	/* Outgoing header ECC multiple bit error */
        uint64_t data0_sbe                : 1;	/* Lower data word from FMA single bit error */
        uint64_t data0_mbe                : 1;	/* Lower data word from FMA multiple bit error */
        uint64_t data1_sbe                : 1;	/* Upper data word from FMA single bit error Info MMR A_NIC_DLA_ERR_INFO_PKT holds an additional information */
        uint64_t data1_mbe                : 1;	/* Upper data word from FMA multiple bit error */
        uint64_t hdr_perr                 : 1;	/* Header with parity error received from FMA */
        uint64_t fifo_overflow            : 1;	/* DLA FIFO overflow by hardware due to a hardware error or misconfigured credit count */
        uint64_t alloc_ram_sbe            : 1;	/* Descriptor status offset 0x08 single bit error */
        uint64_t alloc_ram_mbe            : 1;	/* Descriptor status offset 0x08 multiple bit error */
        uint64_t marker_ram_sbe           : 1;	/* Descriptor status offset 0x10 single bit error */
        uint64_t marker_ram_mbe           : 1;	/* Descriptor status offset 0x10 multiple bit error */
        uint64_t fma_pkt_err              : 1;	/* Set when an AllocSSID, SyncComplete, or DLAMARKER packet is received from FMA with an lstatus of  A_STATUS_FMA_UNCORRECTABLE or A_STATUS_DATA_ERR or with a packet data error of DATA0_MBE or DATA1_MBE */
        uint64_t alloc_both_err           : 1;	/* An AllocSSID packet with both CD and PR allocation bits set */
        uint64_t fifo_data0_sbe           : 1;	/* DLA FIFO data flit lower SBE */
        uint64_t fifo_data0_mbe           : 1;	/* DLA FIFO data flit lower MBE */
        uint64_t fifo_data1_sbe           : 1;	/* DLA FIFO data flit upper SBE */
        uint64_t fifo_data1_mbe           : 1;	/* DLA FIFO data flit upper MBE */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_err_clr_desc_t;

typedef union ar_nic_dla_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t fifo_hdr_sbe             : 1;	/* 1:1 */
        uint64_t fifo_hdr_mbe             : 1;	/* 2:2 */
        uint64_t data0_sbe                : 1;	/* 3:3 */
        uint64_t data0_mbe                : 1;	/* 4:4 */
        uint64_t data1_sbe                : 1;	/* 5:5 */
        uint64_t data1_mbe                : 1;	/* 6:6 */
        uint64_t hdr_perr                 : 1;	/* 7:7 */
        uint64_t fifo_overflow            : 1;	/* 8:8 */
        uint64_t alloc_ram_sbe            : 1;	/* 9:9 */
        uint64_t alloc_ram_mbe            : 1;	/* 10:10 */
        uint64_t marker_ram_sbe           : 1;	/* 11:11 */
        uint64_t marker_ram_mbe           : 1;	/* 12:12 */
        uint64_t fma_pkt_err              : 1;	/* 13:13 */
        uint64_t alloc_both_err           : 1;	/* 14:14 */
        uint64_t fifo_data0_sbe           : 1;	/* 15:15 */
        uint64_t fifo_data0_mbe           : 1;	/* 16:16 */
        uint64_t fifo_data1_sbe           : 1;	/* 17:17 */
        uint64_t fifo_data1_mbe           : 1;	/* 18:18 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_err_hss_msk_desc_t;

typedef union ar_nic_dla_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t fifo_hdr_sbe             : 1;	/* 1:1 */
        uint64_t fifo_hdr_mbe             : 1;	/* 2:2 */
        uint64_t data0_sbe                : 1;	/* 3:3 */
        uint64_t data0_mbe                : 1;	/* 4:4 */
        uint64_t data1_sbe                : 1;	/* 5:5 */
        uint64_t data1_mbe                : 1;	/* 6:6 */
        uint64_t hdr_perr                 : 1;	/* 7:7 */
        uint64_t fifo_overflow            : 1;	/* 8:8 */
        uint64_t alloc_ram_sbe            : 1;	/* 9:9 */
        uint64_t alloc_ram_mbe            : 1;	/* 10:10 */
        uint64_t marker_ram_sbe           : 1;	/* 11:11 */
        uint64_t marker_ram_mbe           : 1;	/* 12:12 */
        uint64_t fma_pkt_err              : 1;	/* 13:13 */
        uint64_t alloc_both_err           : 1;	/* 14:14 */
        uint64_t fifo_data0_sbe           : 1;	/* 15:15 */
        uint64_t fifo_data0_mbe           : 1;	/* 16:16 */
        uint64_t fifo_data1_sbe           : 1;	/* 17:17 */
        uint64_t fifo_data1_mbe           : 1;	/* 18:18 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_err_os_msk_desc_t;

typedef union ar_nic_dla_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t fifo_hdr_sbe             : 1;	/* 1:1 */
        uint64_t fifo_hdr_mbe             : 1;	/* 2:2 */
        uint64_t data0_sbe                : 1;	/* 3:3 */
        uint64_t data0_mbe                : 1;	/* 4:4 */
        uint64_t data1_sbe                : 1;	/* 5:5 */
        uint64_t data1_mbe                : 1;	/* 6:6 */
        uint64_t hdr_perr                 : 1;	/* 7:7 */
        uint64_t fifo_overflow            : 1;	/* 8:8 */
        uint64_t alloc_ram_sbe            : 1;	/* 9:9 */
        uint64_t alloc_ram_mbe            : 1;	/* 10:10 */
        uint64_t marker_ram_sbe           : 1;	/* 11:11 */
        uint64_t marker_ram_mbe           : 1;	/* 12:12 */
        uint64_t fma_pkt_err              : 1;	/* 13:13 */
        uint64_t alloc_both_err           : 1;	/* 14:14 */
        uint64_t fifo_data0_sbe           : 1;	/* 15:15 */
        uint64_t fifo_data0_mbe           : 1;	/* 16:16 */
        uint64_t fifo_data1_sbe           : 1;	/* 17:17 */
        uint64_t fifo_data1_mbe           : 1;	/* 18:18 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_err_first_flg_desc_t;

typedef union ar_nic_dla_err_info_pkt_desc {
    struct {
        // QW0
        uint64_t data0_sbe_synd           : 8;	/* Packet from FMA payload SBE syndrome, lower data */
        uint64_t data0_mbe_synd           : 8;	/* Packet from FMA payload MBE syndrome, lower data */
        uint64_t data1_sbe_synd           : 8;	/* Packet from FMA payload SBE syndrome, upper data */
        uint64_t data1_mbe_synd           : 8;	/* Packet from FMA payload MBE syndrome, upper data */
        uint64_t perr                     : 4;	/* Packet from FMA header parity error information */
        uint64_t undefine_63_36           :28;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_err_info_pkt_desc_t;

typedef union ar_nic_dla_err_info_ram_desc {
    struct {
        // QW0
        uint64_t fifo_sbe_synd            : 9;	/* DLA FIFO packet header SBE syndrome */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t fifo_mbe_synd            : 9;	/* DLA FIFO packet header MBE syndrome */
        uint64_t undefine_23_21           : 3;	/* undefined */
        uint64_t alloc_ram_sbe_synd       : 8;	/* Single bit error syndrome for alloc status RAM */
        uint64_t alloc_ram_mbe_synd       : 8;	/* Multiple bit error syndrome for alloc status RAM */
        uint64_t marker_ram_sbe_synd      : 8;	/* Single bit error syndrome for marker RAM */
        uint64_t marker_ram_mbe_synd      : 8;	/* Multiple bit error syndrome for marker RAM */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_err_info_ram_desc_t;

typedef union ar_nic_dla_dbg_errinj_ram_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/*  */
        uint64_t fifo_hdr                 : 1;	/*  */
        uint64_t alloc_ram                : 1;	/*  */
        uint64_t marker_ram               : 1;	/*  */
        uint64_t fifo_data                : 1;	/*  */
        uint64_t checkbits_lo             : 9;	/*  */
        uint64_t undefine_19_17           : 3;	/* undefined */
        uint64_t checkbits_up             : 8;	/*  */
        uint64_t undefine_31_28           : 4;	/* undefined */
        uint64_t address                  :13;	/*  */
        uint64_t undefine_63_45           :19;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_dbg_errinj_ram_desc_t;

typedef union ar_nic_dla_dbg_errinj_pkt_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error in Nth flit of one packet Mode 1: Inject error in Nth flit of all packets */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/*  */
        uint64_t count                    : 6;	/*  */
        uint64_t tail                     : 1;	/*  */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t parity                   : 4;	/*  */
        uint64_t checkbits_lo             : 8;	/*  */
        uint64_t checkbits_up             : 8;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_dbg_errinj_pkt_desc_t;

typedef union ar_nic_dla_cfg_desc {
    struct {
        // QW0
        uint64_t tarb_count               : 5;	/* TARB input buffer maximum credit count */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t cq_count                 : 5;	/* Completion queue maximum credit count */
        uint64_t undefine_15_13           : 3;	/* undefined */
        uint64_t parb_count               : 5;	/* PARB input buffer maximum credit count */
        uint64_t undefine_23_21           : 3;	/* undefined */
        uint64_t bypass                   : 1;	/*  */
        uint64_t mrkr_bypass              : 1;	/*  */
        uint64_t undefine_63_26           :38;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_desc_t;

typedef union ar_nic_dla_cfg_alloc_status_adr_desc {
    struct {
        // QW0
        uint64_t undefine_5_0             : 6;	/* undefined */
        uint64_t stat_addr                :42;	/* Address for allocation status write */
        uint64_t tc                       : 4;	/*  */
        uint64_t tph                      : 3;	/*  */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_alloc_status_adr_desc_t;

typedef union ar_nic_dla_cfg_alloc_status_trig_desc {
    struct {
        // QW0
        uint64_t threshold                :15;	/* Consumed or reserved change count to trigger an allocation status write */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t count                    :16;	/* Count in clocks of when to trigger an allocation status write */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_cfg_alloc_status_trig_desc_t;

typedef union ar_nic_dla_sts_alloc_cnt_desc {
    struct {
        // QW0
        uint64_t alloc_count              : 8;	/* Current active allocation count */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_sts_alloc_cnt_desc_t;

typedef union ar_nic_dla_sts_cqe_merge_cnt_desc {
    struct {
        // QW0
        uint64_t alloc                    :20;	/* Count of merged allocation status completion queue events */
        uint64_t undefine_31_20           :12;	/* undefined */
        uint64_t marker                   :20;	/* Count of merged marker completion queue events */
        uint64_t undefine_63_52           :12;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_sts_cqe_merge_cnt_desc_t;

typedef union ar_nic_dla_err_info_fma_pkt_desc {
    struct {
        // QW0
        uint64_t lstatus                  : 6;	/* LSTATUS from dropped FMA packet with error */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t ssid_ch                  : 7;	/* SSID_CH from dropped FMA packet with error */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t ptag                     : 8;	/* PTAG from dropped FMA packet with error */
        uint64_t ssid_cmd                 : 5;	/* SSID_CMD from dropped FMA packet with error */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_err_info_fma_pkt_desc_t;

typedef union ar_nic_dla_clear_desc {
    struct {
        // QW0
        uint64_t undefine_63_0            :64;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_clear_desc_t;

typedef union ar_nic_dla_err_info_ram1_desc {
    struct {
        // QW0
        uint64_t data0_sbe_synd           : 8;	/* DLA FIFO SBE syndrome, lower data */
        uint64_t data0_mbe_synd           : 8;	/* DLA FIFO MBE syndrome, lower data */
        uint64_t data1_sbe_synd           : 8;	/* DLA FIFO SBE syndrome, upper data */
        uint64_t data1_mbe_synd           : 8;	/* DLA FIFO MBE syndrome, upper data */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_dla_err_info_ram1_desc_t;


#endif
