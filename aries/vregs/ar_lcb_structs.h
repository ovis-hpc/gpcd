/******************************************************************************
 * COPYRIGHT CRAY INC. ar_lcb_structs.h
 * FILE: ar_lcb_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_LCB_STRUCTS_H_
#define _AR_LCB_STRUCTS_H_

/*
 *  ARIES LCB STRUCTURES
 */
typedef union ar_slb_lcb_cfg_run_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* 0=reset, (Tx link3OR,Rx off) 1=RUN(Rx on) */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_run_desc_t;

typedef union ar_slb_lcb_cfg_mmr_reset_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Write a 1 to put all LCB MMRs into their reset state */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_mmr_reset_desc_t;

typedef union ar_slb_lcb_cfg_tx_fifos_reset_desc {
    struct {
        // QW0
        uint64_t en                       : 1;	/* Level sensitive */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t radr                     : 3;	/* These values will be implementation dependent and should be tested using XA-VCS */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t on_reinit                : 1;	/* Enables tx_fifo_reset on neg edge of tx_up_mode */
        uint64_t undefine_63_9            :55;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_tx_fifos_reset_desc_t;

typedef union ar_slb_lcb_cfg_startup_0_desc {
    struct {
        // QW0
        uint64_t rx_fifos_reset_radr      : 4;	/* Fifo is 12 deep These values will be implementation dependent and should be tested using XA-VCS */
        uint64_t loopback                 : 2;	/* 0: normal mode 1: loopback using lanes_lcb_dclk for tx_fifo read 2,3: loopback using lclk for tx_fifo read */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t tx_lane_fss              : 1;	/* Clear to turn tx side scrambling off */
        uint64_t rx_lane_fss              : 1;	/* Clear to turn Rx side scrambling off */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t crc_per_lane_mode        : 1;	/* CRC for each lane, 9 dclk uP */
        uint64_t undefine_15_13           : 3;	/* undefined */
        uint64_t rx_ln_allowed            : 3;	/* A */
        uint64_t ln_reinit_reenable       : 1;	/* if set a lane that has previously failed link3or testing is retested and allowed back into the mix on a subsequent reinit */
        uint64_t force_ln_enable          : 3;	/* B HSS control of Rx link3or lane enable coming out of init (1 forces lane to be used) This does not override rx_ln_allowed */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t ln_disable_4_skew_mode   : 2;	/* 0: lane disabled if 4,5,6,7,8 clks from other 2 lanes 1: lane disabled if 6 clks from other 2 lanes 2: lanes not disabled, still reported as in 0 3: lanes not disabled, still reported as in 1 */
        uint64_t undefine_27_26           : 2;	/* undefined */
        uint64_t ln_test_req_match_cnt    : 3;	/* 0: 0x00 (disables check) 1: 0x10 (enable reset for failed test) 2: 0x1D (enable reset for failed test) 3: 0x1D 4: 0x1E (enable reset for failed test) 5: 0x1E 6: 0x1F (enable reset for failed test) 7: 0x1F */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t ln_allowed_time_to_pass  : 2;	/* Time allowed for remaining two lanes to pass testing after 1st lane passes 0: 0x3FF 1: 0x7FF 2: 0xBFF 3: 0xFFF */
        uint64_t undefine_35_34           : 2;	/* undefined */
        uint64_t init_replay_timeout_sel  : 2;	/* initialization and replay repeated uP#s to trigger a replay 0: 0x40 (1 replay buffer depths) 1: 0x60 ,1 */
        uint64_t undefine_39_38           : 2;	/* undefined */
        uint64_t min_replay_timeout_sel1  : 3;	/* minimum number of repeated uP#s to trigger a replay when 3 lanes are active 0: 8'h06 1: 8'h08 2: 8'h0a 3: 8'h0c 4: 8'h10 5: 8'h18 6: 8'h20 7: INIT_REPLAY_TIMEOUT nulls get added, see LCB_DBG_REPLAY MMR q_min_timeout_plus_null_cnt field */
        uint64_t undefine_43_43           : 1;	/* undefined */
        uint64_t min_replay_timeout_sel2  : 3;	/* minimum number of repeated uP#s to trigger a replay when less than 3 lanes are active 0: 8'h18 1: 8'h1a 2: 8'h1d 3: 8'h20 4: 8'h28 5: 8'h30 6: 8'h40 7: INIT_REPLAY_TIMEOUT_SEL nulls get added, see LCB_DBG_REPLAY MMR q_min_timeout_plus_null_cnt field */
        uint64_t undefine_47_47           : 1;	/* undefined */
        uint64_t min_rcv_up_num           : 6;	/* lowest replay buffer address used */
        uint64_t undefine_55_54           : 2;	/* undefined */
        uint64_t max_rcv_up_num           : 6;	/* highest replay buffer address used */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_startup_0_desc_t;

typedef union ar_slb_lcb_cfg_startup_1_desc {
    struct {
        // QW0
        uint64_t num_seq_bad_crc_max      : 3;	/* Number of bad crcs in a row to trigger a reinit, do not use 0, the LCB will not function with this setting */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t ignore_seq_bad_crc       : 1;	/* do not reinit on sequential crc errors */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t ignore_rclk_loss         : 1;	/* do not reinit on loss of Rclk */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t throttle_tx_flits        : 4;	/* send idle in uP flit locations 8,5,3,0 wire throttle0 = i_throttle[0]; wire throttle3 = i_throttle[1]; wire throttle5 = i_throttle[2]; wire throttle8 = i_throttle[3]; */
        uint64_t rclk_select_priority     : 2;	/* lane 0,1,2 For Rclk sampling */
        uint64_t undefine_19_18           : 2;	/* undefined */
        uint64_t back_ch_select_priority  : 2;	/* lane 0,1,2 link3or back channel reporting */
        uint64_t undefine_23_22           : 2;	/* undefined */
        uint64_t turn_on_signal_cnt_sel   : 1;	/* required_tos_cnt, set selects 0xa, else 0x7 */
        uint64_t undefine_27_25           : 3;	/* undefined */
        uint64_t use_replay_buf_data      : 1;	/* pre loaded replay buffer data is recirculated instead of using the flow ctrl buffer input data */
        uint64_t undefine_31_29           : 3;	/* undefined */
        uint64_t pause_on_reinit          : 1;	/* Level sensitive */
        uint64_t undefine_35_33           : 3;	/* undefined */
        uint64_t link_timer_disable       : 1;	/* disable link_alive forward progress timer */
        uint64_t undefine_39_37           : 3;	/* undefined */
        uint64_t link_auto_restart_en     : 1;	/* enable auto restart if link alive goes low */
        uint64_t undefine_43_41           : 3;	/* undefined */
        uint64_t reinits_before_link_low  : 2;	/* number of reinit attempts before taking link_alive low */
        uint64_t undefine_47_46           : 2;	/* undefined */
        uint64_t lto_reinit_reenable      : 1;	/* if set a lane that has previously failed link3or testing is retested and allowed back into the mix on a subsequent reinit triggered by a link timeout when REINITS_BEFORE_LINK_LOW is greater than 0 */
        uint64_t undefine_51_49           : 3;	/* undefined */
        uint64_t lto_degrade_reenable     : 1;	/* if set a lane that has previously been removed by the uP mode degrade mechanism is allowed back into the mix on a subsequent reinit triggered by a link timeout when REINITS_BEFORE_LINK_LOW is greater than 0 */
        uint64_t undefine_55_53           : 3;	/* undefined */
        uint64_t link_alive_timer_max     : 2;	/* link timer Max value, In ltclks, select options, these will likely be tweaked at some point */
        uint64_t undefine_63_58           : 6;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_startup_1_desc_t;

typedef union ar_slb_lcb_sts_startup_0_desc {
    struct {
        // QW0
        uint64_t link_alive               : 1;	/* Internal link alive */
        uint64_t r_q_lcb_col_chan_alive   : 1;	/* External channel alive status */
        uint64_t tx_up_mode               : 1;	/* Tx in uP mode */
        uint64_t rx_up_mode               : 1;	/* Rx in uP mode */
        uint64_t rx_ln0_logical_id        : 2;	/* Peers Tx physical, adjusted 3=disabled */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t rx_ln1_logical_id        : 2;	/* Peers Tx physical, adjusted 3=disabled */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t rx_ln2_logical_id        : 2;	/* Peers Tx physical, adjusted 3=disabled */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t rx_logical_ln_en         : 3;	/* EEE being transmitted */
        uint64_t undefine_19_19           : 1;	/* undefined */
        uint64_t tx_phy_ln_en             : 3;	/* bottom line report if Tx physical lane is being used, on Tx side from peer */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t rx_phy_ln_en             : 3;	/* F */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t degrade_ln_en            : 3;	/* E */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t rx_link3or_phy_ln_en     : 3;	/* C */
        uint64_t undefine_35_35           : 1;	/* undefined */
        uint64_t round_trip_up_cnt        : 8;	/* Tx side count */
        uint64_t phit_quiet_cntr          : 3;	/* Rx/inq side count */
        uint64_t undefine_47_47           : 1;	/* undefined */
        uint64_t vc_ack_quiet_cntr        : 3;	/* Tx/inq side count */
        uint64_t undefine_63_51           :13;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_sts_startup_0_desc_t;

typedef union ar_slb_lcb_sts_startup_1_desc {
    struct {
        // QW0
        uint64_t link_alive_timer_value   :20;	/* LCB_link_alive_timer current value */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_sts_startup_1_desc_t;

typedef union ar_slb_lcb_cfg_discovery_local_desc {
    struct {
        // QW0
        uint64_t pattern                  ;	/* Sent during every init/reinit sequence */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_discovery_local_desc_t;

typedef union ar_slb_lcb_sts_discovery_remote_desc {
    struct {
        // QW0
        uint64_t pattern                  ;	/* Received during every init/reinit sequence design resets to 0x0 when !rx_up_mode */
    };
    uint64_t qwords[1];
} ar_slb_lcb_sts_discovery_remote_desc_t;

typedef union ar_slb_lcb_cfg_scramble_seed_0_desc {
    struct {
        // QW0
        uint64_t val                      :22;	/*  */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_scramble_seed_0_desc_t;

typedef union ar_slb_lcb_cfg_scramble_seed_1_desc {
    struct {
        // QW0
        uint64_t val                      :22;	/*  */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_scramble_seed_1_desc_t;

typedef union ar_slb_lcb_cfg_scramble_seed_2_desc {
    struct {
        // QW0
        uint64_t val                      :22;	/*  */
        uint64_t undefine_63_22           :42;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_scramble_seed_2_desc_t;

typedef union ar_slb_lcb_cfg_degrade_desc {
    struct {
        // QW0
        uint64_t ln_x_degrade_disable     : 3;	/* D */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t num_degrades_allowed     : 2;	/* Number of degrade reinits allowed */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t race_duration_sel        : 3;	/* The number of uPs for each race 0: 0x402 1: 0x1002 2: 0x6000 3: 0x10002 4: 0x20004 5: 0x40002 6: 0x80004 7: 0xFF000 */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t race_wins_2trigger       : 6;	/* Number of race wins to trigger degrade reinit */
        uint64_t undefine_19_18           : 2;	/* undefined */
        uint64_t ln_en_alt                : 3;	/* Alternate degrade report of physical Rx lane enable field */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t ln_01_races_won          : 6;	/* These are the shifted lane numbers, not the physical lane numbers */
        uint64_t undefine_31_30           : 2;	/* undefined */
        uint64_t ln_02_races_won          : 6;	/* These are the shifted lane numbers, not the physical lane numbers */
        uint64_t undefine_39_38           : 2;	/* undefined */
        uint64_t ln_12_races_won          : 6;	/* These are the shifted lane numbers, not the physical lane numbers */
        uint64_t undefine_47_46           : 2;	/* undefined */
        uint64_t current_cfg_races_won    : 6;	/* number of races won by the current lane configuration */
        uint64_t undefine_55_54           : 2;	/* undefined */
        uint64_t reset_settings           : 1;	/* reset degrade control settings, level sensitive */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_degrade_desc_t;

typedef union ar_slb_lcb_cfg_link_kill_en_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t rst_4_lost_ton_sig       : 1;	/* reset for lost turn on signal near the start of up_mode */
        uint64_t seq_crc_err              : 1;	/* sequential_crc_error & !ignore_seqbadcrc see NUM_SEQ_BAD_CRC_MAX */
        uint64_t rclk_stopped             : 1;	/* rclk stopped toggling */
        uint64_t reinit_from_peer         : 1;	/* reinit nulls were received from peer */
        uint64_t rst_4_failed_deskew      : 1;	/* deskew timer timed out and triggered reinit */
        uint64_t rst_4_link_timeout       : 1;	/* LINK timeout, The link will not necessarily go down if REINITS_BEFORE_LINK_LOW is greater the 0 and the reinit gets things moving again */
        uint64_t reinit_4_ln_degrade      : 1;	/* lane degrade triggered reinit */
        uint64_t mmr_forced_reinit        : 1;	/* see FORCE_REINIT */
        uint64_t or_of_all_pause_modes    : 1;	/* pause logic triggered reinit */
        uint64_t hold_reinit              : 1;	/* see PAUSE_ON_REINIT */
        uint64_t tx_less_than_3_lanes     : 1;	/* PosEdge of tx_up_mode with 1 or 2 lanes */
        uint64_t rx_less_than_3_lanes     : 1;	/* PosEdge of rx_up_mode with 1 or 2 lanes */
        uint64_t unexpected_replay        : 1;	/* Unexpected first replay uP */
        uint64_t flow_ctrl_buf_oflw       : 1;	/* flow control buffer overflow */
        uint64_t rcv_buf_oflw             : 1;	/* receive buffer overflow */
        uint64_t vc_ack_oflw              : 8;	/* 1 bit for each VC */
        uint64_t neg_edge_link_alive      : 1;	/* The link went down */
        uint64_t replay_buf_sbe0          : 1;	/* replay buffer RAM0 SBE */
        uint64_t replay_buf_mbe0          : 1;	/* replay buffer RAM0 MBE */
        uint64_t replay_buf_sbe1          : 1;	/* replay buffer RAM1 SBE */
        uint64_t replay_buf_mbe1          : 1;	/* replay buffer RAM1 MBE */
        uint64_t flow_ctrl_buf_sbe        : 1;	/* flow control buffer SBE */
        uint64_t flow_ctrl_buf_mbe        : 1;	/* flow control buffer MBE */
        uint64_t undefine_63_31           :33;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_link_kill_en_desc_t;

typedef union ar_slb_lcb_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t rst_4_lost_ton_sig       : 1;	/* reset for lost turn on signal near the start of rx_up_mode */
        uint64_t seq_crc_err              : 1;	/* sequential_crc_error & !ignore_seqbadcrc see NUM_SEQ_BAD_CRC_MAX */
        uint64_t rclk_stopped             : 1;	/* rclk stopped toggling */
        uint64_t reinit_from_peer         : 1;	/* reinit nulls were received from peer */
        uint64_t rst_4_failed_deskew      : 1;	/* deskew timer timed out and triggered reinit */
        uint64_t rst_4_link_timeout       : 1;	/* LINK timeout, The link will not necessarily go down if REINITS_BEFORE_LINK_LOW is greater the 0 and the reinit gets things moving again */
        uint64_t reinit_4_ln_degrade      : 1;	/* lane degrade triggered reinit */
        uint64_t mmr_forced_reinit        : 1;	/* see FORCE_REINIT */
        uint64_t or_of_all_pause_modes    : 1;	/* pause logic triggered reinit */
        uint64_t hold_reinit              : 1;	/* Will set with PAUSE_ON_REINIT and will clear if the pause is released */
        uint64_t tx_less_than_3_lanes     : 1;	/* PosEdge of tx_up_mode with 1 or 2 lanes */
        uint64_t rx_less_than_3_lanes     : 1;	/* PosEdge of rx_up_mode with 1 or 2 lanes */
        uint64_t unexpected_replay        : 1;	/* Unexpected first replay uP There is easy way to artificially force this condition */
        uint64_t flow_ctrl_buf_oflw       : 1;	/* flow control buffer overflow */
        uint64_t rcv_buf_oflw             : 1;	/* receive buffer overflow */
        uint64_t vc_ack_oflw              : 8;	/* 1 bit for each VC */
        uint64_t neg_edge_link_alive      : 1;	/* The link went down */
        uint64_t replay_buf_sbe0          : 1;	/* replay buffer RAM0 SBE */
        uint64_t replay_buf_mbe0          : 1;	/* replay buffer RAM0 MBE */
        uint64_t replay_buf_sbe1          : 1;	/* replay buffer RAM1 SBE */
        uint64_t replay_buf_mbe1          : 1;	/* replay buffer RAM1 MBE */
        uint64_t flow_ctrl_buf_sbe        : 1;	/* flow control buffer SBE */
        uint64_t flow_ctrl_buf_mbe        : 1;	/* flow control buffer MBE */
        uint64_t undefine_63_31           :33;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_flg_desc_t;

typedef union ar_slb_lcb_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t rst_4_lost_ton_sig       : 1;	/* reset for lost turn on signal near the start of rx_up_mode */
        uint64_t seq_crc_err              : 1;	/* sequential_crc_error & !ignore_seqbadcrc see NUM_SEQ_BAD_CRC_MAX */
        uint64_t rclk_stopped             : 1;	/* rclk stopped toggling */
        uint64_t reinit_from_peer         : 1;	/* reinit nulls were received from peer */
        uint64_t rst_4_failed_deskew      : 1;	/* deskew timer timed out and triggered reinit */
        uint64_t rst_4_link_timeout       : 1;	/* LINK timeout, The link will not necessarily go down if REINITS_BEFORE_LINK_LOW is greater the 0 and the reinit gets things moving again */
        uint64_t reinit_4_ln_degrade      : 1;	/* lane degrade triggered reinit */
        uint64_t mmr_forced_reinit        : 1;	/* see FORCE_REINIT */
        uint64_t or_of_all_pause_modes    : 1;	/* pause logic triggered reinit */
        uint64_t hold_reinit              : 1;	/* Will set with PAUSE_ON_REINIT and will clear if the pause is released */
        uint64_t tx_less_than_3_lanes     : 1;	/* PosEdge of tx_up_mode with 1 or 2 lanes */
        uint64_t rx_less_than_3_lanes     : 1;	/* PosEdge of rx_up_mode with 1 or 2 lanes */
        uint64_t unexpected_replay        : 1;	/* Unexpected first replay uP There is easy way to artificially force this condition */
        uint64_t flow_ctrl_buf_oflw       : 1;	/* flow control buffer overflow */
        uint64_t rcv_buf_oflw             : 1;	/* receive buffer overflow */
        uint64_t vc_ack_oflw              : 8;	/* 1 bit for each VC */
        uint64_t neg_edge_link_alive      : 1;	/* The link went down */
        uint64_t replay_buf_sbe0          : 1;	/* replay buffer RAM0 SBE */
        uint64_t replay_buf_mbe0          : 1;	/* replay buffer RAM0 MBE */
        uint64_t replay_buf_sbe1          : 1;	/* replay buffer RAM1 SBE */
        uint64_t replay_buf_mbe1          : 1;	/* replay buffer RAM1 MBE */
        uint64_t flow_ctrl_buf_sbe        : 1;	/* flow control buffer SBE */
        uint64_t flow_ctrl_buf_mbe        : 1;	/* flow control buffer MBE */
        uint64_t undefine_63_31           :33;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_clr_desc_t;

typedef union ar_slb_lcb_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t rst_4_lost_ton_sig       : 1;	/* reset for lost turn on signal near the start of rx_up_mode */
        uint64_t seq_crc_err              : 1;	/* sequential_crc_error & !ignore_seqbadcrc see NUM_SEQ_BAD_CRC_MAX */
        uint64_t rclk_stopped             : 1;	/* rclk stopped toggling */
        uint64_t reinit_from_peer         : 1;	/* reinit nulls were received from peer */
        uint64_t rst_4_failed_deskew      : 1;	/* deskew timer timed out and triggered reinit */
        uint64_t rst_4_link_timeout       : 1;	/* LINK timeout, The link will not necessarily go down if REINITS_BEFORE_LINK_LOW is greater the 0 and the reinit gets things moving again */
        uint64_t reinit_4_ln_degrade      : 1;	/* lane degrade triggered reinit */
        uint64_t mmr_forced_reinit        : 1;	/* see FORCE_REINIT */
        uint64_t or_of_all_pause_modes    : 1;	/* pause logic triggered reinit */
        uint64_t hold_reinit              : 1;	/* Will set with PAUSE_ON_REINIT and will clear if the pause is released */
        uint64_t tx_less_than_3_lanes     : 1;	/* PosEdge of tx_up_mode with 1 or 2 lanes */
        uint64_t rx_less_than_3_lanes     : 1;	/* PosEdge of rx_up_mode with 1 or 2 lanes */
        uint64_t unexpected_replay        : 1;	/* Unexpected first replay uP There is easy way to artificially force this condition */
        uint64_t flow_ctrl_buf_oflw       : 1;	/* flow control buffer overflow */
        uint64_t rcv_buf_oflw             : 1;	/* receive buffer overflow */
        uint64_t vc_ack_oflw              : 8;	/* 1 bit for each VC */
        uint64_t neg_edge_link_alive      : 1;	/* The link went down */
        uint64_t replay_buf_sbe0          : 1;	/* replay buffer RAM0 SBE */
        uint64_t replay_buf_mbe0          : 1;	/* replay buffer RAM0 MBE */
        uint64_t replay_buf_sbe1          : 1;	/* replay buffer RAM1 SBE */
        uint64_t replay_buf_mbe1          : 1;	/* replay buffer RAM1 MBE */
        uint64_t flow_ctrl_buf_sbe        : 1;	/* flow control buffer SBE */
        uint64_t flow_ctrl_buf_mbe        : 1;	/* flow control buffer MBE */
        uint64_t undefine_63_31           :33;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_hss_msk_desc_t;

typedef union ar_slb_lcb_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t rst_4_lost_ton_sig       : 1;	/* reset for lost turn on signal near the start of rx_up_mode */
        uint64_t seq_crc_err              : 1;	/* sequential_crc_error & !ignore_seqbadcrc see NUM_SEQ_BAD_CRC_MAX */
        uint64_t rclk_stopped             : 1;	/* rclk stopped toggling */
        uint64_t reinit_from_peer         : 1;	/* reinit nulls were received from peer */
        uint64_t rst_4_failed_deskew      : 1;	/* deskew timer timed out and triggered reinit */
        uint64_t rst_4_link_timeout       : 1;	/* LINK timeout, The link will not necessarily go down if REINITS_BEFORE_LINK_LOW is greater the 0 and the reinit gets things moving again */
        uint64_t reinit_4_ln_degrade      : 1;	/* lane degrade triggered reinit */
        uint64_t mmr_forced_reinit        : 1;	/* see FORCE_REINIT */
        uint64_t or_of_all_pause_modes    : 1;	/* pause logic triggered reinit */
        uint64_t hold_reinit              : 1;	/* Will set with PAUSE_ON_REINIT and will clear if the pause is released */
        uint64_t tx_less_than_3_lanes     : 1;	/* PosEdge of tx_up_mode with 1 or 2 lanes */
        uint64_t rx_less_than_3_lanes     : 1;	/* PosEdge of rx_up_mode with 1 or 2 lanes */
        uint64_t unexpected_replay        : 1;	/* Unexpected first replay uP There is easy way to artificially force this condition */
        uint64_t flow_ctrl_buf_oflw       : 1;	/* flow control buffer overflow */
        uint64_t rcv_buf_oflw             : 1;	/* receive buffer overflow */
        uint64_t vc_ack_oflw              : 8;	/* 1 bit for each VC */
        uint64_t neg_edge_link_alive      : 1;	/* The link went down */
        uint64_t replay_buf_sbe0          : 1;	/* replay buffer RAM0 SBE */
        uint64_t replay_buf_mbe0          : 1;	/* replay buffer RAM0 MBE */
        uint64_t replay_buf_sbe1          : 1;	/* replay buffer RAM1 SBE */
        uint64_t replay_buf_mbe1          : 1;	/* replay buffer RAM1 MBE */
        uint64_t flow_ctrl_buf_sbe        : 1;	/* flow control buffer SBE */
        uint64_t flow_ctrl_buf_mbe        : 1;	/* flow control buffer MBE */
        uint64_t undefine_63_31           :33;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_first_flg_desc_t;

typedef union ar_slb_lcb_dbg_good_up_cnt_desc {
    struct {
        // QW0
        uint64_t cnt                      :48;	/* Counts uPs with good crc, rx_up_mode only */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_good_up_cnt_desc_t;

typedef union ar_slb_lcb_dbg_accepted_up_cnt_desc {
    struct {
        // QW0
        uint64_t cnt                      :48;	/* Counts uPs accepted into the rcv buf */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_accepted_up_cnt_desc_t;

typedef union ar_slb_lcb_dbg_clk_cntr_desc {
    struct {
        // QW0
        uint64_t cnt                      :48;	/* If STROBE_ON_LCLK_CNTR is set strobe triggered after lclk cnt of 2**24 lclks,  This cntr is also used in performance monitoring and is held if hold_crc_error counters is active */
        uint64_t select                   : 5;	/* [4:3] = 00 and [2:0] = 0: raw tx fifo clk divby8 1: raw tx fifo clk divby8 after loopback mux 2: raw rx fifo clk0 divby8 3: raw rx fifo clk0 divby8 after loopback mux 4: raw rx fifo clk1 divby8 5: raw rx fifo clk1 divby8 after loopback mux 6: raw rx fifo clk2 divby8 7: raw rx fifo clk2 divby8 after loopback mux [4:3] = 01 and [2:0] = 0: gated ltclk divby8 1: GND, default for r_lcb_clk_observe 2: gated locked2lane0 divby8 3: gated selected lrclk0 divby8 4: gated locked2lane1 divby8 5: gated selected lrclk1 divby8 6: gated locked2lane2 divby8 7: gated selected lrclk2 divby8 [4:2] = 1XXand [1:0] = 0: cbus clk 1: cbus clk 2: sbus clk 3: sbus clk */
        uint64_t undefine_55_53           : 3;	/* undefined */
        uint64_t strobe_on_lclk_cntr      : 1;	/* clear during performance monitor applications */
        uint64_t undefine_59_57           : 3;	/* undefined */
        uint64_t new_value_was_strobed    : 1;	/* Set with strobe of new cnt, cleared with clear of cnt */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_clk_cntr_desc_t;

typedef union ar_slb_lcb_cfg_perf_cntr_reset_desc {
    struct {
        // QW0
        uint64_t clr_crc_err_cntrs        : 1;	/* clears the total, lanes, multiple errors, replays and good, accepted uP counts must be held high for at least a few clks for a reliable clear */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t hold_crc_err_cntrs       : 1;	/* simultaneously stops and holds the total, lanes, multiple errors, replays and good uP counts */
        uint64_t undefine_63_5            :59;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_perf_cntr_reset_desc_t;

typedef union ar_slb_lcb_err_info_crc_cnt_0_desc {
    struct {
        // QW0
        uint64_t ln0_crc_err_cnt          :24;	/* Rx physical lane 0 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_crc_cnt_0_desc_t;

typedef union ar_slb_lcb_err_info_crc_cnt_1_desc {
    struct {
        // QW0
        uint64_t ln1_crc_err_cnt          :24;	/* Rx physical lane 1 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_crc_cnt_1_desc_t;

typedef union ar_slb_lcb_err_info_crc_cnt_2_desc {
    struct {
        // QW0
        uint64_t ln2_crc_err_cnt          :24;	/* Rx physical lane 2 */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_crc_cnt_2_desc_t;

typedef union ar_slb_lcb_err_info_crc_cnt_3_desc {
    struct {
        // QW0
        uint64_t multiple_ln_err_cnt      :20;	/* q_multiple_ln_error_cnt */
        uint64_t undefine_63_20           :44;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_crc_cnt_3_desc_t;

typedef union ar_slb_lcb_err_info_crc_cnt_4_desc {
    struct {
        // QW0
        uint64_t total_crc_err_cnt        :32;	/* q_crc_error_cnt_tot */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_crc_cnt_4_desc_t;

typedef union ar_slb_lcb_err_info_crc_cnt_5_desc {
    struct {
        // QW0
        uint64_t tx_replay_cnt            :24;	/* q_tx_replay_cnt */
        uint64_t rx_replay_cnt            :24;	/* q_rx_replay_cnt */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_crc_cnt_5_desc_t;

typedef union ar_slb_lcb_err_info_misc_cnt_desc {
    struct {
        // QW0
        uint64_t rst_for_lost_tos_cnt     : 2;	/* reset_for_lost_tos_cnt turn on signal */
        uint64_t undefine_3_2             : 2;	/* undefined */
        uint64_t seq_crc_reinit_cnt       : 6;	/* q_sequential_crc_reinit_cnt */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t lost_rclk_reinit_cnt0    : 2;	/* q_rx_clk_loss_reinit_cnt0 */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t lost_rclk_reinit_cnt1    : 2;	/* q_rx_clk_loss_reinit_cnt1 */
        uint64_t undefine_19_18           : 2;	/* undefined */
        uint64_t lost_rclk_reinit_cnt2    : 2;	/* q_rx_clk_loss_reinit_cnt2 */
        uint64_t undefine_23_22           : 2;	/* undefined */
        uint64_t reinit_from_peer_cnt     : 8;	/* q_reinit_from_peer_cnt */
        uint64_t reinit_for_link_tout_cnt : 3;	/* q_reinit_for_link_timeout_cnt */
        uint64_t undefine_35_35           : 1;	/* undefined */
        uint64_t unexpected_replay_cnt    : 2;	/* q_unexpected_upid11_cnt */
        uint64_t undefine_39_38           : 2;	/* undefined */
        uint64_t noisy_degrade_cnt        : 2;	/* q_reinit_for_degrade_cnt */
        uint64_t undefine_43_42           : 2;	/* undefined */
        uint64_t reinits_b4_link_low_cnt  : 2;	/* reinits_before_link_low_cnt, counts down */
        uint64_t undefine_47_46           : 2;	/* undefined */
        uint64_t rst_for_failed_deskew_cnt: 2;	/* reset for failed deskew count */
        uint64_t undefine_63_50           :14;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_misc_cnt_desc_t;

typedef union ar_slb_lcb_err_info_ecc_cnt_0_desc {
    struct {
        // QW0
        uint64_t flow_ctrl_buf_sbe_cnt    :18;	/* Number of Single Bit Errors that have occurred in the flow control buffer */
        uint64_t undefine_19_18           : 2;	/* undefined */
        uint64_t flow_ctrl_buf_mbe_cnt    : 3;	/* Number of Multiple Bit Errors that have occurred in the flow control buffer */
        uint64_t undefine_63_23           :41;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_ecc_cnt_0_desc_t;

typedef union ar_slb_lcb_err_info_ecc_cnt_1_desc {
    struct {
        // QW0
        uint64_t replay_buf_sbe_cnt0      :18;	/* Number of Single Bit Errors that have occurred in replay RAM0 */
        uint64_t undefine_19_18           : 2;	/* undefined */
        uint64_t replay_buf_mbe_cnt0      : 3;	/* Number of Multiple Bit Errors that have occurred in replay RAM0 */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t replay_buf_sbe_cnt1      :18;	/* Number of Single Bit Errors that have occurred in replay RAM1 */
        uint64_t undefine_43_42           : 2;	/* undefined */
        uint64_t replay_buf_mbe_cnt1      : 3;	/* Number of Multiple Bit Errors that have occurred in replay RAM1 */
        uint64_t undefine_63_47           :17;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_ecc_cnt_1_desc_t;

typedef union ar_slb_lcb_err_info_rp_buf_sbe_0_desc {
    struct {
        // QW0
        uint64_t data                     :48;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t chk                      : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t mmr_created_sbe          : 1;	/* MMR read created the SBE Error */
        uint64_t syndrome                 : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_rp_buf_sbe_0_desc_t;

typedef union ar_slb_lcb_err_info_rp_buf_mbe_0_desc {
    struct {
        // QW0
        uint64_t data                     :48;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t chk                      : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t mmr_created_mbe          : 1;	/* MMR read created the MBE Error */
        uint64_t syndrome                 : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_rp_buf_mbe_0_desc_t;

typedef union ar_slb_lcb_err_info_rp_buf_sbe_1_desc {
    struct {
        // QW0
        uint64_t data                     :48;	/* Bit[43] missing */
        uint64_t chk                      : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t mmr_created_sbe          : 1;	/* MMR read created the SBE Error */
        uint64_t syndrome                 : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t sideband_sbe             : 1;	/* The SBE was in the uP sideband */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_rp_buf_sbe_1_desc_t;

typedef union ar_slb_lcb_err_info_rp_buf_mbe_1_desc {
    struct {
        // QW0
        uint64_t data                     :48;	/* Bit[43] missing */
        uint64_t chk                      : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t mmr_created_mbe          : 1;	/* MMR read created the MBE Error */
        uint64_t syndrome                 : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t sideband_mbe             : 1;	/* The MBE was in the uP sideband */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_rp_buf_mbe_1_desc_t;

typedef union ar_slb_lcb_err_info_fl_buf_sbe_desc {
    struct {
        // QW0
        uint64_t data                     :49;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t chk                      : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t syndrome                 : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t mmr_created_sbe          : 1;	/* MMR read created the SBE Error */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_fl_buf_sbe_desc_t;

typedef union ar_slb_lcb_err_info_fl_buf_mbe_desc {
    struct {
        // QW0
        uint64_t data                     :49;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t chk                      : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t syndrome                 : 7;	/* The content of an ERR_INFO MMR is updated when the corresponding error flag in the ERR_FLG MMR transitions from 0 to 1 due to a hardware detected event */
        uint64_t mmr_created_mbe          : 1;	/* MMR read created the MBE Error */
    };
    uint64_t qwords[1];
} ar_slb_lcb_err_info_fl_buf_mbe_desc_t;

typedef union ar_slb_lcb_dbg_errinj_crc_desc {
    struct {
        // QW0
        uint64_t crc_err_bit_en           :20;	/* Tx, lane(s) bit enable for crc errors, each enabled bit has a 50% err probability */
        uint64_t crc_err_xfr_en           :27;	/* Tx, lane(s) xfr enable for crc errors */
        uint64_t undefine_47_47           : 1;	/* undefined */
        uint64_t crc_err_ln_en            : 3;	/* Tx, lane(s) enable for crc errors */
        uint64_t undefine_51_51           : 1;	/* undefined */
        uint64_t random_xfr_err           : 1;	/* Tx, if random is set have CRC_ERR_XFR_EN all high, else if random clear use CRC_ERR_XFR_EN directly where only one bit should be set */
        uint64_t undefine_55_53           : 3;	/* undefined */
        uint64_t num_crc_up_errs          : 4;	/* Tx, max number or uP crc errors within 64 uPs */
        uint64_t crc_err_probability      : 3;	/* Tx, probability of forcing any uP to have an error */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_errinj_crc_desc_t;

typedef union ar_slb_lcb_dbg_errinj_crc_seed_desc {
    struct {
        // QW0
        uint64_t val                      :12;	/*  */
        uint64_t undefine_63_12           :52;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_errinj_crc_seed_desc_t;

typedef union ar_slb_lcb_dbg_errinj_ecc_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once, clear enable to rearm Mode 1: Inject error always Mode 2: Inject error once if address matches, clear enable to rearm Mode 3: Inject error always if address matches Mode 0,2 will wait until the replay buffer is being used */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t ramselect                : 4;	/* [8]: Enable errinj for Replay Buf 0 [9]: Enable errinj for Replay Buf 1 [10]: Enable errinj for Flow control Buf [11]: Flow control Buf stall mode */
        uint64_t checkbyte                : 7;	/*  */
        uint64_t undefine_19_19           : 1;	/* undefined */
        uint64_t address0                 : 9;	/*  */
        uint64_t undefine_31_29           : 3;	/* undefined */
        uint64_t address1                 : 9;	/*  */
        uint64_t undefine_43_41           : 3;	/* undefined */
        uint64_t clr_ecc_error_cnts       : 1;	/* Clear all ECC error counts */
        uint64_t undefine_63_45           :19;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_errinj_ecc_desc_t;

typedef union ar_slb_lcb_dbg_errinj_misc_desc {
    struct {
        // QW0
        uint64_t force_reinit             : 1;	/* On the Tx side write a 1 to force a single reinit */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t force_replay             : 1;	/* On the Rx side write a 1 to force a single replay request */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t force_bad_crc_reinit     : 1;	/* On the Rx side write a 1 to force continuous bad crcs until a single sequential bad crc reinit is triggered */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t force_lost_rclk_reinit   : 1;	/* On the Rx side write a 1 to force single lost rclk reinit */
        uint64_t undefine_15_13           : 3;	/* undefined */
        uint64_t force_lost_tos           : 1;	/* On the Rx side write a 1 to force a single reset for lost turn on signal near the start of rx_up_mode */
        uint64_t undefine_63_17           :47;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_errinj_misc_desc_t;

typedef union ar_slb_lcb_dbg_init_state_0_desc {
    struct {
        // QW0
        uint64_t align_complete           : 3;	/* link3or align complete */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t roll_cnt_ln0             : 6;	/* roll count lane 0, Read after ALIGN_COMPLETE */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t roll_cnt_ln1             : 6;	/* roll count lane 1, Read after ALIGN_COMPLETE */
        uint64_t undefine_19_18           : 2;	/* undefined */
        uint64_t roll_cnt_ln2             : 6;	/* roll count lane 2, Read after ALIGN_COMPLETE */
        uint64_t undefine_27_26           : 2;	/* undefined */
        uint64_t polarity_complete        : 3;	/* lane2,1,0 */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t polarity                 : 3;	/* 1=true lane2,1,0 Read after POLARITY_COMPLETE */
        uint64_t undefine_35_35           : 1;	/* undefined */
        uint64_t logical_id_complete      : 3;	/* lane2,1,0 */
        uint64_t undefine_39_39           : 1;	/* undefined */
        uint64_t framing1_complete        : 3;	/* link3or framing complete (not deskew) */
        uint64_t undefine_43_43           : 1;	/* undefined */
        uint64_t failed_framing1_cnt_ln0  : 3;	/* The number of resets back to align triggered when lane 0 does not achieve framing Read after FRAMING1_COMPLETE */
        uint64_t undefine_47_47           : 1;	/* undefined */
        uint64_t failed_framing1_cnt_ln1  : 3;	/* The number of resets back to align triggered when lane 1 does not achieve framing Read after FRAMING1_COMPLETE */
        uint64_t undefine_51_51           : 1;	/* undefined */
        uint64_t failed_framing1_cnt_ln2  : 3;	/* The number of resets back to align triggered when lane 2 does not achieve framing Read after FRAMING1_COMPLETE */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_init_state_0_desc_t;

typedef union ar_slb_lcb_dbg_init_state_1_desc {
    struct {
        // QW0
        uint64_t ln_testing_complete      : 3;	/* link3or testing complete, pulses if test fails */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t pass_cnt_ln0             : 8;	/* lane testing compare pass count, out of 256 pass if > LN_TEST_REQ_MATCH_CNT */
        uint64_t pass_cnt_ln1             : 8;	/* lane testing compare pass count, out of 256 pass if > LN_TEST_REQ_MATCH_CNT Read after LN_TESTING_COMPLETE */
        uint64_t pass_cnt_ln2             : 8;	/* lane testing compare pass count, out of 256 pass if > LN_TEST_REQ_MATCH_CNT Read after LN_TESTING_COMPLETE */
        uint64_t ln_passed_testing        : 3;	/* First lane to pass starts LN_TEST_TIMER */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t ln_test_timer_complete   : 1;	/* Time for other lanes to pass has expired */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_init_state_1_desc_t;

typedef union ar_slb_lcb_dbg_init_state_2_desc {
    struct {
        // QW0
        uint64_t rx_framed                : 1;	/* deskew complete, also F being transmitted unless it is prevented during init_pause_mode 3 */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t failed_test_cnt_ln0      : 3;	/* The number of resets back to align triggered when lane 0 does not pass testing Read after RX_FRAMED */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t failed_test_cnt_ln1      : 3;	/* The number of resets back to align triggered when lane 1 does not pass testing Read after RX_FRAMED */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t failed_test_cnt_ln2      : 3;	/* The number of resets back to align triggered when lane 2 does not pass testing Read after RX_FRAMED */
        uint64_t undefine_15_15           : 1;	/* undefined */
        uint64_t radr_skip4deskew_cnt_ln0 : 3;	/* rx fifo read pointer skips for deskew Read after RX_FRAMED */
        uint64_t undefine_19_19           : 1;	/* undefined */
        uint64_t radr_skip4deskew_cnt_ln1 : 3;	/* rx fifo read pointer skips for deskew Read after RX_FRAMED */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t radr_skip4deskew_cnt_ln2 : 3;	/* rx fifo read pointer skips for deskew Read after RX_FRAMED */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t rx_skew_ln_en            : 3;	/* If a bit is clear this lane had too much skew and will/would have been disabled if LN_DISABLE_4_SKEW_MODE is active/not active */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t back_chan_reporting_ln   : 2;	/* lane being used for back channel reporting Read after RX_FRAMED */
        uint64_t undefine_35_34           : 2;	/* undefined */
        uint64_t rclk_sampling_ln         : 2;	/* lane being used for Rclk sampling Read after RX_FRAMED */
        uint64_t undefine_39_38           : 2;	/* undefined */
        uint64_t peer_framed              : 1;	/* peer framed being received */
        uint64_t undefine_43_41           : 3;	/* undefined */
        uint64_t peer_lane_ena_detected   : 1;	/* peer lane enable detected, helps trigger tx_up_mode start */
        uint64_t undefine_47_45           : 3;	/* undefined */
        uint64_t tx_tos_3or               : 1;	/* Tx sending the tos to peer, triggers tx_up_mode start */
        uint64_t undefine_51_49           : 3;	/* undefined */
        uint64_t rx_turn_on_sig_cnt       : 4;	/* Here we monitor only bit[13] during each frame */
        uint64_t rx_wait4tos_fail_cnt     : 3;	/* While we are waiting for the tos on the rx side we continue to monitor back channel lane (17 bits) during each 8 clk frame */
        uint64_t undefine_63_59           : 5;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_init_state_2_desc_t;

typedef union ar_slb_lcb_cfg_init_pause_0_desc {
    struct {
        // QW0
        uint64_t init_pause_mode          : 2;	/* 0:no pause 1: init pause at 1 before align 2: init pause at 2 after lane test, before dskw 3: init pause at 3 after dskw, kill  */
        uint64_t undefine_3_2             : 2;	/* undefined */
        uint64_t use_alt_link3or_frame    : 1;	/* use alternate LINK3OR framing data, used with  */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t alt_link3or_frame        :16;	/* Alternate LINK3OR framing data, used with  */
        uint64_t undefine_27_24           : 4;	/* undefined */
        uint64_t tx_fifo_wadr             : 3;	/* wadr or dsk_cnt to update on */
        uint64_t undefine_31_31           : 1;	/* undefined */
        uint64_t tx_fifo_wadr_trip        : 2;	/* select one of 3 trips through the wadr address space, 2'd3 is undefined */
        uint64_t undefine_35_34           : 2;	/* undefined */
        uint64_t tx_fifo_wr_strobe_select : 1;	/* update on specific wadr, else dsk_cnt */
        uint64_t undefine_38_37           : 2;	/* undefined */
        uint64_t tx_fifo_rd_strobe_select : 1;	/* update on lane specific Radr else lanex_txdat[14:12] */
        uint64_t tx_fifo_radr             : 3;	/* Radr or lane_txdat to update on */
        uint64_t undefine_43_43           : 1;	/* undefined */
        uint64_t tx_fifo_radr_trip        : 2;	/* select one of 3 trips through the radr address space, 2'd3 is undefined */
        uint64_t undefine_47_46           : 2;	/* undefined */
        uint64_t rx_fifo_wadr             : 4;	/* Wadr to update on */
        uint64_t rx_fifo_wr_strobe_select : 1;	/* update on lane specific Wadr else rx_lane_datx[14:12] */
        uint64_t undefine_55_53           : 3;	/* undefined */
        uint64_t rx_fifo_rd_strobe_select : 2;	/* 0: update on lane0 Radr 1: update on lane1 Radr  2: update on lane2 Radr  3: update on lanes own address */
        uint64_t undefine_59_58           : 2;	/* undefined */
        uint64_t rx_fifo_radr             : 4;	/* Radr to update on */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_init_pause_0_desc_t;

typedef union ar_slb_lcb_cfg_init_pause_1_desc {
    struct {
        // QW0
        uint64_t force_roll               : 3;	/* On the Rx side force roll request for each lane, will always auto clear and read as 0 */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t rx_fifos_reset           : 3;	/* Force lane specific reset of the Rx deskew fifos */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t rx_fifos_skip_radr_incr  : 3;	/* Force lane specific 1 clk skip of the Radr increment */
        uint64_t undefine_63_11           :53;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_init_pause_1_desc_t;

typedef union ar_slb_lcb_dbg_tx_fifo_wr_data_desc {
    struct {
        // QW0
        uint64_t ln0                      :20;	/* lane 0 write data */
        uint64_t ln1                      :20;	/* lane 1 write data */
        uint64_t ln2                      :20;	/* lane 2 write data */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_tx_fifo_wr_data_desc_t;

typedef union ar_slb_lcb_dbg_tx_fifo_rd_data_desc {
    struct {
        // QW0
        uint64_t ln0                      :20;	/* lane 0 read data */
        uint64_t ln1                      :20;	/* lane 1 read data */
        uint64_t ln2                      :20;	/* lane 2 read data */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_tx_fifo_rd_data_desc_t;

typedef union ar_slb_lcb_dbg_rx_fifo_wr_data_desc {
    struct {
        // QW0
        uint64_t ln0                      :20;	/* lane 0 write data */
        uint64_t ln1                      :20;	/* lane 1 write data */
        uint64_t ln2                      :20;	/* lane 2 write data */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_rx_fifo_wr_data_desc_t;

typedef union ar_slb_lcb_dbg_rx_fifo_rd_data_desc {
    struct {
        // QW0
        uint64_t ln0                      :20;	/* lane 0 read data */
        uint64_t ln1                      :20;	/* lane 1 read data */
        uint64_t ln2                      :20;	/* lane 2 read data */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_rx_fifo_rd_data_desc_t;

typedef union ar_slb_lcb_dbg_reinit_cause_desc {
    struct {
        // QW0
        uint64_t clr_last_reinit_info     : 1;	/* clear last reinit info so that info for next reinit can be captured */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t was_seq_crc_err          : 1;	/* sequential_crc_error & !ignore_seqbadcrc see NUM_SEQ_BAD_CRC_MAX This is send_reinit_null_signals[0] */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t was_reinit_4_ln_degrade  : 1;	/* lane degrade triggered reinit This is send_reinit_null_signals[1] */
        uint64_t undefine_11_9            : 3;	/* undefined */
        uint64_t was_rclk_stopped         : 1;	/* rclk stopped toggling This is send_reinit_null_signals[2] */
        uint64_t undefine_15_13           : 3;	/* undefined */
        uint64_t was_unexpected_replay    : 1;	/* Unexpected first replay uP This is send_reinit_null_signals[3] */
        uint64_t undefine_19_17           : 3;	/* undefined */
        uint64_t was_rst_4_lost_ton_sig   : 1;	/* reset for lost turn on signal near the start of up_mode This is send_reinit_null_signals[4] */
        uint64_t undefine_23_21           : 3;	/* undefined */
        uint64_t was_rst_4_link_timeout   : 1;	/* LINK timeout, see REINITS_BEFORE_LINK_LOW This is send_reinit_null_signals[5] */
        uint64_t undefine_27_25           : 3;	/* undefined */
        uint64_t was_pause_mode6          : 1;	/* pause logic triggered reinit This is send_reinit_null_signals[6] */
        uint64_t undefine_31_29           : 3;	/* undefined */
        uint64_t was_mmr_forced_reinit    : 1;	/* see FORCE_REINIT This is send_reinit_null_signals[7] */
        uint64_t undefine_35_33           : 3;	/* undefined */
        uint64_t was_reinit_nulls_done    : 1;	/* REINIT NULLS sent to peer are completed, this is required for cause bits [9:2] */
        uint64_t undefine_39_37           : 3;	/* undefined */
        uint64_t was_nulls_not_required   : 1;	/* reinit nulls are not required as we are not in Tx up_mode */
        uint64_t undefine_43_41           : 3;	/* undefined */
        uint64_t was_reinit_from_peer     : 1;	/* reinit nulls were received from peer */
        uint64_t undefine_47_45           : 3;	/* undefined */
        uint64_t was_rst_4_failed_deskew  : 1;	/* deskew timed out */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_reinit_cause_desc_t;

typedef union ar_slb_lcb_dbg_replay_0_desc {
    struct {
        // QW0
        uint64_t q_verified_up            : 6;	/*  */
        uint64_t undefine_7_6             : 2;	/* undefined */
        uint64_t q_verified_up_previous   : 6;	/*  */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t q_verified_up_plus1      : 6;	/* replay will start here */
        uint64_t undefine_23_22           : 2;	/* undefined */
        uint64_t q_verified_odd_plus1     : 1;	/*  */
        uint64_t undefine_27_25           : 3;	/* undefined */
        uint64_t q_write_up               : 6;	/* next write will be here */
        uint64_t undefine_35_34           : 2;	/* undefined */
        uint64_t q_write_up_odd           : 1;	/*  */
        uint64_t undefine_39_37           : 3;	/* undefined */
        uint64_t q_read_up                : 6;	/*  */
        uint64_t undefine_47_46           : 2;	/* undefined */
        uint64_t q_full                   : 1;	/*  */
        uint64_t undefine_51_49           : 3;	/* undefined */
        uint64_t q_replaying              : 1;	/*  */
        uint64_t undefine_55_53           : 3;	/* undefined */
        uint64_t post_init_replay_empty   : 1;	/*  */
        uint64_t undefine_59_57           : 3;	/* undefined */
        uint64_t replay_empty             : 1;	/*  */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_replay_0_desc_t;

typedef union ar_slb_lcb_dbg_replay_1_desc {
    struct {
        // QW0
        uint64_t q_use_init_timeout       : 1;	/*  */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t q_first_round_trip       : 1;	/*  */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t q_static_rcv_up_cnt      : 8;	/*  */
        uint64_t q_min_timeout_plus_null_cnt: 8;	/*  */
        uint64_t q_lcl_rcv_up_num         : 6;	/*  */
        uint64_t undefine_31_30           : 2;	/* undefined */
        uint64_t q_lcl_rcv_up_odd         : 1;	/*  */
        uint64_t undefine_35_33           : 3;	/* undefined */
        uint64_t q_tossing                : 1;	/* rx side */
        uint64_t undefine_63_37           :27;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_replay_1_desc_t;

typedef union ar_slb_lcb_dbg_oflw_desc {
    struct {
        // QW0
        uint64_t flow_ctl_buf_empty       : 1;	/* flow control buffer empty signal */
        uint64_t undefine_3_1             : 3;	/* undefined */
        uint64_t flow_ctl_buf_full        : 1;	/* flow control buffer full signal */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t flow_ctl_buf_wadr        : 4;	/* flow control buffer write address */
        uint64_t flow_ctl_buf_wadr_stall  : 4;	/* flow control buffer write address at stall point */
        uint64_t flow_ctl_buf_radr        : 4;	/* flow control buffer read address */
        uint64_t rcv_buf_wadr             : 4;	/* receive buffer write address */
        uint64_t rcv_buf_radr             : 4;	/* receive buffer read address */
        uint64_t rcv_buf_padr_hold        : 4;	/* receive buffer current pop address */
        uint64_t rcv_buf_padr_prior       : 4;	/* receive buffer previous pop address */
        uint64_t undefine_63_36           :28;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_oflw_desc_t;

typedef union ar_slb_lcb_dbg_vc_ack_desc {
    struct {
        // QW0
        uint64_t cnt_0                    : 8;	/* count > 128 indicates overflow */
        uint64_t cnt_1                    : 8;	/* count > 128 indicates overflow */
        uint64_t cnt_2                    : 8;	/* count > 128 indicates overflow */
        uint64_t cnt_3                    : 8;	/* count > 128 indicates overflow */
        uint64_t cnt_4                    : 8;	/* count > 128 indicates overflow */
        uint64_t cnt_5                    : 8;	/* count > 128 indicates overflow */
        uint64_t cnt_6                    : 8;	/* count > 128 indicates overflow */
        uint64_t cnt_7                    : 8;	/* count > 128 indicates overflow */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_vc_ack_desc_t;

typedef union ar_slb_lcb_cfg_pause_desc {
    struct {
        // QW0
        uint64_t mode_sts                 :12;	/* Report of 12 pause mode control bits */
        uint64_t mode_enable              :12;	/* 0 - No new phits accepted from flow ctrl fifo 1 - No VC ack counter decrements 2 - Null only mode, requires LINK_TIMER_DISABLE if you want to unpause 3 - Kill Tx side gated clock 4 - Kill Rx side gated clock 5 - Force continuous replay attempts (from rx side), requires LINK_TIMER_DISABLE to prevent reinits 6 - Force reinit, requires PAUSE_ON_REINIT to stick for debug 7- take r_q_lcb_col_chan_alive low */
        uint64_t rearm_all                : 1;	/* level sensitive, high resets all pause mode logic, armed on neg edge */
        uint64_t clr_pause_mode2          : 1;	/* posedge will clr pause mode2 for 1 uP allowing 1 non null uP across the channel, must clear to rearm */
        uint64_t clr_pause_mode5          : 1;	/* posedge will clr pause mode5 for 1 uP allowing 1 upid=11uP into the rcv_buf must clear to rearm */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t trigger_selects          : 4;	/* 0: lane pack (also need tx_trigger_enables) 1: i_flow_ctl_buf 2: r_rcv_buf 3: i_rcv_buf 4: N sequential crc, max of 7 5: Nth crc, max of 15 6: Nth fcb sbe, max of 15 7: Nth fcb mbe, max of 7 8: Nth replay buf0 sbe, max of 15 9: Nth replay buf1 sbe, max of 15 a: Nth replay buf0 mbe, max of 7 b: Nth replay buf1 mbe, max of 7 c: inq error tx side d: inq error rx side e: 1st/any kind of reinit, immediate for rx clk and after delay_cnt reinit nulls for tx clk so we can stop the clk ASAP */
        uint64_t tx_trigger_enables       : 2;	/* {replays, virgins} unit48s feeding lane pack */
        uint64_t compare_type_select      : 2;	/* choice of compare=1/miscompare=2/OR=3 */
        uint64_t compare_cnt              : 4;	/* Required # of compares, value of N, N=0 is a direct/immediate force */
        uint64_t unit48_selects           :10;	/* mask to enable tx, rx unit48s within a uP including sideband used for lane pack and i_rcv_buf only */
        uint64_t undefine_50_50           : 1;	/* undefined */
        uint64_t cnt_clks                 : 1;	/* else count non idles in the delay counter */
        uint64_t delay_cnt                :10;	/* # of clks or non idles to count before pause is triggered, # of reinit nulls to send with pause_mode[3] and trigger_selects = 4'he */
        uint64_t undefine_63_62           : 2;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_pause_desc_t;

typedef union ar_slb_lcb_cfg_compare_value_desc {
    struct {
        // QW0
        uint64_t field                    :49;	/*  */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_compare_value_desc_t;

typedef union ar_slb_lcb_cfg_compare_mask_desc {
    struct {
        // QW0
        uint64_t field                    :49;	/* A 0 in this field masks the compare, (guarantees a match) */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_compare_mask_desc_t;

typedef union ar_slb_lcb_dbg_pause_trigger_flit_desc {
    struct {
        // QW0
        uint64_t value                    :49;	/* for i_rcv_buf and lane pack bit43 reported as 0 */
        uint64_t undefine_51_49           : 3;	/* undefined */
        uint64_t was_pipe1                : 1;	/* tx flit was from pipe1, not meaningful for i_rcv_buf, i_fcb shows up as if from  */
        uint64_t undefine_55_53           : 3;	/* undefined */
        uint64_t unit48_cnt               : 4;	/* tx, rx flit within uP for lane pack and i_rcv_buf */
        uint64_t valid                    : 1;	/* flit valid, cleared with rearm_all */
        uint64_t undefine_62_61           : 2;	/* undefined */
        uint64_t was_replay               : 1;	/* tx side flit was from a replay */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_pause_trigger_flit_desc_t;

typedef union ar_slb_lcb_cfg_ram_read_write_desc {
    struct {
        // QW0
        uint64_t address                  : 4;	/* This address increments every time the LCB_CFG_RAM_DATA register is read */
        uint64_t replay_buf_up            : 6;	/* This is used for the replay buffer only, uP select within the replay buffer */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t buffer                   : 2;	/* 0: raw good uP data buffer (park here in mm) 1: raw bad uP data buffer 2: receive buffer 3: replay ram(s) */
        uint64_t undefine_15_14           : 2;	/* undefined */
        uint64_t replay_buf_write         : 1;	/* This will cause the replay buf to be written using REPLAY_BUF_UP and ADDRESS as the pointer and LCB_CFG_RAM_DATA[47:0] as the data */
        uint64_t undefine_19_17           : 3;	/* undefined */
        uint64_t arm_raw_up_data_hold     : 1;	/* level sensitive, must set first and then clear to arm */
        uint64_t undefine_23_21           : 3;	/* undefined */
        uint64_t up_data_compare_rdy      : 1;	/* This will be set after arming when both the good and bad raw uP data are ready for readout */
        uint64_t undefine_27_25           : 3;	/* undefined */
        uint64_t up_data_was_tossing      : 1;	/* For the pause triggered raw data case, we were already in tossing mode, good data is unreliable (nulls), bad data is accurate */
        uint64_t undefine_31_29           : 3;	/* undefined */
        uint64_t up_data_was_good         : 1;	/* For the pause triggered raw data case, we were already in tossing mode, good data is unreliable (nulls) but it did have a good crc */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_ram_read_write_desc_t;

typedef union ar_slb_lcb_cfg_ram_data_desc {
    struct {
        // QW0
        uint64_t data                     ;	/* raw good uP data buffer: undefined[63:60], lane xfr 26,23,20,17,14,11,8,5,2 [59:40] lane xfr 25,22,19,16,13,10,7,4,1 [39:20] lane xfr 24,21,18,15,12, 9, 6,3,0 [19:0] raw bad uP data buffer: same map as good receive buffer: {up_odd[63],1'b0,up_num[61:56], up_word[55:52], 3'b0, data[48:0]} replay ram(s): bit 46 not included in data {undefined[63:55],ecc[54:48],data[47:0]} */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_ram_data_desc_t;

typedef union ar_slb_lcb_cfg_serdes_cx_desc {
    struct {
        // QW0
        uint64_t lsb_control              : 1;	/*  */
        uint64_t ln_reset                 : 1;	/*  */
        uint64_t core_to_cntl             :16;	/*  */
        uint64_t far_loopback_en          : 1;	/*  */
        uint64_t k30_7_err_en             : 1;	/*  */
        uint64_t kr_restart_training      : 1;	/*  */
        uint64_t kr_training_en           : 1;	/*  */
        uint64_t near_loopback_en         : 1;	/*  */
        uint64_t pll_recal_en             : 1;	/*  */
        uint64_t ref_sel                  : 8;	/*  */
        uint64_t tx_rate_sel              : 9;	/*  */
        uint64_t undefine_63_41           :23;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_serdes_cx_desc_t;

typedef union ar_slb_lcb_cfg_serdes_tx_desc {
    struct {
        // QW0
        uint64_t polarity_inv_en          : 3;	/* 1 for each lane */
        uint64_t pattern_gen_sel_ln0      : 3;	/*  */
        uint64_t pattern_gen_sel_ln1      : 3;	/*  */
        uint64_t pattern_gen_sel_ln2      : 3;	/*  */
        uint64_t pattern_gen_en           : 3;	/* 1 for each lane */
        uint64_t elec_idle                : 3;	/* 1 for each lane */
        uint64_t override_in              : 1;	/*  */
        uint64_t override_en              : 1;	/*  */
        uint64_t width_mode               : 2;	/*  */
        uint64_t phase_slip               : 3;	/* 1 for each lane */
        uint64_t refclk_sync_master       : 3;	/* 1 bit for each lane, lane 1 is the master 1/4 and 1/8 freq mode: set to 2 mm and 1/2 freq mode: set to 2 default Min Serial Output skew: set to 2 */
        uint64_t phase_master             : 3;	/* 1 bit for each lane 1/4 and 1/8 freq mode: set to 7 mm and 1/2 freq mode: set to 7 default Min Serial Output skew: set to 2 */
        uint64_t phase_cal_en             : 3;	/* Enables the phase optimizer, 1 bit for each lane, set all 3 the same unless in debug 1/4 and 1/8 freq mode: set low mm and 1/2 freq mode: set low default Minimum Output skew: set high */
        uint64_t output_slew              : 2;	/*  */
        uint64_t output_eq_pre            : 4;	/*  */
        uint64_t output_eq_post           : 8;	/*  */
        uint64_t output_en                : 1;	/*  */
        uint64_t output_attenuation       : 8;	/*  */
        uint64_t en                       : 1;	/*  */
        uint64_t undefine_63_58           : 6;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_serdes_tx_desc_t;

typedef union ar_slb_lcb_cfg_serdes_rx_desc {
    struct {
        // QW0
        uint64_t undefine_0_0             : 1;	/* undefined */
        uint64_t width_mode               : 2;	/*  */
        uint64_t sig_strength_strong_en   : 1;	/*  */
        uint64_t sig_strength_en          : 1;	/*  */
        uint64_t rate_sel                 : 9;	/*  */
        uint64_t polarity_inv_en          : 1;	/*  */
        uint64_t pattern_cmp_sel          : 3;	/*  */
        uint64_t pattern_cmp_en           : 1;	/*  */
        uint64_t en                       : 1;	/*  */
        uint64_t undefine_23_20           : 4;	/* undefined */
        uint64_t dropout_char_en          : 1;	/*  */
        uint64_t active_sig_min           : 6;	/*  */
        uint64_t sig_ok_use_fine_flock_counter: 1;	/*  */
        uint64_t sig_ok_use_signal_strength: 1;	/*  */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_cfg_serdes_rx_desc_t;

typedef union ar_slb_lcb_dbg_serdes_outputs_desc {
    struct {
        // QW0
        uint64_t rx_rdy                   : 3;	/* When asserted, the Rx PLL is calibrated, and the SerDes receiver is in a functional mode */
        uint64_t rx_sig_strength_ln0      : 2;	/*  */
        uint64_t rx_sig_strength_ln1      : 2;	/*  */
        uint64_t rx_sig_strength_ln2      : 2;	/* These signals indicate the relative health of the received serial signal */
        uint64_t rx_signal_ok             : 3;	/* This signal is an indicator to the status of the receiver, and is programmable for various configurations */
        uint64_t rx_pattern_cmp_pass_ln0  : 4;	/*  */
        uint64_t rx_pattern_cmp_pass_ln1  : 4;	/*  */
        uint64_t rx_pattern_cmp_pass_ln2  : 4;	/* Bit 3 corresponds to the current data word on o_rx_out[39:30], bit 2 corresponds to the current data word on o_rx_out[29:0], bit 1 corresponds to the current data word on o_rx_out[19:10]; bit 0 corresponds to the current data word on o_rx_out[9:0] */
        uint64_t tx_phase_out_ln0         : 5;	/* This output remains 4'b1111 until the optimum phase of the tx_clk has been selected */
        uint64_t tx_phase_out_ln1         : 5;	/* This output remains 4'b1111 until the optimum phase of the tx_clk has been selected */
        uint64_t tx_phase_out_ln2         : 5;	/* This output remains 4'b1111 until the optimum phase of the tx_clk has been selected */
        uint64_t tx_rdy                   : 3;	/* When asserted, the transmitter has calibrated, and is ready to send data presented oni_tx_in[39:0] */
        uint64_t undefine_63_42           :22;	/* undefined */
    };
    uint64_t qwords[1];
} ar_slb_lcb_dbg_serdes_outputs_desc_t;


#endif
