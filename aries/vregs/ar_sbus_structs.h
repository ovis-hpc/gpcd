/******************************************************************************
 * COPYRIGHT CRAY INC. ar_sbus_structs.h
 * FILE: ar_sbus_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_SBUS_STRUCTS_H_
#define _AR_SBUS_STRUCTS_H_

/*
 *  ARIES SBUS STRUCTURES
 */
typedef union ar_serdes_sbus_00_desc {
    struct {
        // QW0
        uint64_t sbus_clk_gate            : 1;	/* Gate to override Tx/Rx enable and ref/rate sel ports */
        uint64_t tx_en_cntl               : 1;	/* Overrides the i_tx_en port */
        uint64_t rx_en_cntl               : 1;	/* Overrides the i_rx_en port */
        uint64_t pll_recal_en_cntl        : 1;	/* Overrides the i_pll_recal_en port */
        uint64_t ref_sel_cntl             : 8;	/* Overrides i_ref_sel ports */
        uint64_t tx_phase_master_cntl     : 1;	/* Overrides the i_tx_phase_master port */
        uint64_t tx_phase_cal_en_cntl     : 1;	/* Overrides the i_tx_phase_cal_en port */
        uint64_t tx_phase_slip_cntl       : 1;	/* Overrides the i_tx_phase_slip port */
        uint64_t reserved_31_15           :17;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_00_desc_t;

typedef union ar_serdes_sbus_01_desc {
    struct {
        // QW0
        uint64_t tx_rate_sel_cntl         : 9;	/* Overrides i_tx_rate_sel ports */
        uint64_t reserved_15_9            : 7;	/*  */
        uint64_t rx_rate_sel_cntl         : 9;	/* Overrides i_rx_rate_sel ports */
        uint64_t reserved_31_25           : 7;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_01_desc_t;

typedef union ar_serdes_sbus_02_desc {
    struct {
        // QW0
        uint64_t reserved_0               : 1;	/*  */
        uint64_t tx_rdy_obs               : 1;	/* Observes o_tx_rdy port */
        uint64_t rx_rdy_obs               : 1;	/* Observes o_rx_rdy port */
        uint64_t reserved_31_3            :29;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_02_desc_t;

typedef union ar_serdes_sbus_03_desc {
    struct {
        // QW0
        uint64_t tx_width_mode_cntl       : 2;	/* Overrides i_tx_width_mode */
        uint64_t rx_width_mode_cntl       : 2;	/* Overrides i_rx_width_mode */
        uint64_t reserved_31_4            :28;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_03_desc_t;

typedef union ar_serdes_sbus_05_desc {
    struct {
        // QW0
        uint64_t reserved_2_0             : 3;	/*  */
        uint64_t tx_phase_out_obs         : 5;	/* Observes the o_tx_phase_out ports */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_05_desc_t;

typedef union ar_serdes_sbus_06_desc {
    struct {
        // QW0
        uint64_t tx_phase_in_gate         : 1;	/* Gate to override the i_tx_phase_in ports */
        uint64_t tx_phase_in_cntl         : 5;	/* Overrides the i_tx_phase_in ports */
        uint64_t reserved_31_6            :26;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_06_desc_t;

typedef union ar_serdes_sbus_07_desc {
    struct {
        // QW0
        uint64_t reserved_3_0             : 4;	/*  */
        uint64_t allow_core_halt_cntl     : 1;	/* When asserted, I_HALT is used to control the HALT input of the CC blocks */
        uint64_t halt_cntl                : 8;	/* SBus override of HALT inputs of CCB */
        uint64_t reserved_31_13           :19;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_07_desc_t;

typedef union ar_serdes_sbus_0b_desc {
    struct {
        // QW0
        uint64_t reserved_0               : 1;	/*  */
        uint64_t tx_refclk_sync_gate      : 1;	/* Gate for overriding i_tx_refclk_sync_master */
        uint64_t tx_refclk_sync_ctrl      : 1;	/* Override for i_tx_refclk_sync_master */
        uint64_t reserved_31_3            :29;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_0b_desc_t;

typedef union ar_serdes_sbus_3c_desc {
    struct {
        // QW0
        uint64_t tx_output_eq_gate        : 1;	/* Gate to override the i_tx_output_eq_pre and i_tx_output_eq_post ports */
        uint64_t tx_output_eq_pre_cntl    : 4;	/* Overrides i_tx_output_eq_pre port */
        uint64_t tx_output_eq_post_cntl   : 8;	/* Overrides i_tx_output_eq_post port */
        uint64_t reserved_31_13           :19;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_3c_desc_t;

typedef union ar_serdes_sbus_3d_desc {
    struct {
        // QW0
        uint64_t tx_attenuation_gate      : 1;	/* Gate to override Tx output controls */
        uint64_t tx_output_slew_cntl      : 2;	/* Overrides i_tx_output_slew port Observes the gated value */
        uint64_t tx_lnd_disable_cntl      : 1;	/* When set, the low noise driver is disabled */
        uint64_t tx_output_attenuation_cntl: 8;	/* Overrides i_tx_output_attenuation port */
        uint64_t tx_impedance_cntl        : 2;	/* Controls the impedance setting */
        uint64_t tx_impedance_gate        : 1;	/* Gate to override Tx impedance controls */
        uint64_t reserved_31_15           :17;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_3d_desc_t;

typedef union ar_serdes_sbus_3e_desc {
    struct {
        // QW0
        uint64_t tx_output_gate           : 1;	/* Gate for various Tx driver control ports */
        uint64_t tx_output_en_cntl        : 1;	/* Overrides the i_tx_output_en port */
        uint64_t near_loopback_en_cntl    : 1;	/* Overrides the i_near_loopback_en port */
        uint64_t reserved_31_3            :29;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_3e_desc_t;

typedef union ar_serdes_sbus_3f_desc {
    struct {
        // QW0
        uint64_t tx_data_gate             : 1;	/* Gate to override Tx controls */
        uint64_t tx_data_sel_cntl         : 2;	/* Selects which data to transmit: 00 - PRBS data 01 - inverse PRBS data 10 - user register data 11 - alternating inverse user register data */
        uint64_t tx_pattern_gen_ctl_cntl  : 1;	/* Used to load/run 40/80-bit user patterns */
        uint64_t tx_pattern_gen_sel_cntl  : 3;	/* Overrides the i_tx_pattern_gen_sel port */
        uint64_t tx_pattern_gen_en_cntl   : 1;	/* Overrides the i_tx_pattern_gen_en port */
        uint64_t tx_sel_core_data_cntl    : 1;	/* Set to '1' to force the Tx to send core data rather than data from the pattern generator when SBUS mode is enabled */
        uint64_t tx_invert_one_word_cntl  : 1;	/* On a '0'-to-'1' transition, inverts one word out of the transmitter */
        uint64_t tx_polarity_inv_en_cntl  : 1;	/* Overrides i_tx_polarity_inv_en port */
        uint64_t tx_elec_idle_cntl        : 1;	/* Overrides i_pcie_tx_elec_idle port */
        uint64_t tx_alt_pattern_en_cntl   : 1;	/* When asserted, enables transmitter 40/80-bit alternating user pattern mode */
        uint64_t reserved_31_13           :19;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_3f_desc_t;

typedef union ar_serdes_sbus_40_desc {
    struct {
        // QW0
        uint64_t tx_user_reg_cntl         :20;	/* In 10-bit mode, the lower 10 bits are loaded into the pattern generator */
        uint64_t reserved_31_20           :12;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_40_desc_t;

typedef union ar_serdes_sbus_41_desc {
    struct {
        // QW0
        uint64_t rx_k30_7_err_en_cntl     : 1;	/* Overrides i_k30_7_err_en port */
        uint64_t reserved_31_1            :31;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_41_desc_t;

typedef union ar_serdes_sbus_50_desc {
    struct {
        // QW0
        uint64_t rx_data_gate             : 1;	/* Gate to override Rx controls */
        uint64_t rx_8b10b_align_en_cntl   : 1;	/* Overrides the i_rx_8b10b_align_en port */
        uint64_t rx_bit_slip_cntl         : 1;	/* Overrides the i_rx_bit_slip port */
        uint64_t rx_polarity_inv_en_cntl  : 1;	/* Overrides the i_rx_polarity_inv_en port */
        uint64_t rx_data_halt_load_cntl   : 1;	/* Used to halt loading of the comparators */
        uint64_t rx_k28_7_comma_det_en_cntl: 1;	/* Overrides i_rx_k28_7_comma_det_en port, which is used to enable/disable the use of the K28 */
        uint64_t rx_sel_cntl              : 2;	/* Selects comparator data: 00-PRBS data, 01-inverse PRBS data 10-user register data 11-alternating inverse user reg */
        uint64_t rx_pattern_ctl_cntl      : 2;	/* Bit 0 selects Load-til-Error mode */
        uint64_t rx_pattern_cmp_sel_cntl  : 3;	/* Overrides the i_rx_pattern_cmp_sel port */
        uint64_t rx_pattern_cmp_en_cntl   : 1;	/* Overrides the i_rx_pattern_cmp_en port */
        uint64_t rx_invert_one_word_cntl  : 1;	/* A rising edge on this signal will force an inversion of a single Rx data word */
        uint64_t rx_dropout_char_en_cntl  : 1;	/* Overrides the i_rx_dropout_char_en port */
        uint64_t rx_sig_strength_en_cntl  : 1;	/* Overrides the i_rx_sig_strength_en port */
        uint64_t sig_strength_strong_en_cntl: 1;	/* Overrides i_rx_sig_strength_strong_en port */
        uint64_t reserved_19_18           : 2;	/*  */
        uint64_t rx_offset_data_sel_cntl  : 1;	/* Selects between regular and offset data */
        uint64_t reserved_31_21           :11;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_50_desc_t;

typedef union ar_serdes_sbus_51_desc {
    struct {
        // QW0
        uint64_t reserved_1_0             : 2;	/*  */
        uint64_t rx_alt_pattern_en_cntl   : 1;	/* When asserted, enables receiver 40/80-bit alternating user pattern mode */
        uint64_t reserved_31_3            :29;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_51_desc_t;

typedef union ar_serdes_sbus_52_desc {
    struct {
        // QW0
        uint64_t rx_user_reg_cntl         :20;	/* Used for loading the comparator during four load sequences */
        uint64_t reserved_31_20           :12;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_52_desc_t;

typedef union ar_serdes_sbus_53_desc {
    struct {
        // QW0
        uint64_t rx_error_monitor_gate    : 1;	/* Gate for Rx error monitoring circuitry */
        uint64_t rx_error_monitor_sel_cntl: 4;	/* Selects which data is monitored by the error counter: 0000 thru 0010 - NA 0011 - rx_pattern_cmp_fail 0100 - rx_8b10b_slip_in_progress 0101 - rx_8b10b_comma_det 0110 - rx_bit_slip_edge 0111 - rx_sig_strength[0] 1000 - rx_sig_strength[1] 1001 - rx_data_offset_error 1010 - cal_in_progress 1011 - fine_frequency_lock 1100 - rx_elec_idle_detect 1101 thru 1111 - NA */
        uint64_t rx_error_edge_detect_cntl: 1;	/* When set to '1', only positive edges detected on the selected data (RX_ERROR_MONITOR_SEL_CNTL) will increment the error counter */
        uint64_t rx_error_monitor_reset_cntl: 1;	/* Logic '1' resets the error counter and the sticky error monitoring registers */
        uint64_t rx_error_monitor_en_cntl : 1;	/* Logic '1' enables the error counter and allows the sticky error monitoring registers to update */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_53_desc_t;

typedef union ar_serdes_sbus_54_desc {
    struct {
        // QW0
        uint64_t rx_error_occured         : 1;	/* Set as soon as the error counter is incremented away from '0' */
        uint64_t rx_prbs_failure          : 1;	/* Monitors pattern comparison failures between the expected data values and the received data values */
        uint64_t reserved_2               : 1;	/*  */
        uint64_t rx_8b10b_slip_in_progress_det: 1;	/* Observes o_rx_8b10b_slip_in_progress port */
        uint64_t rx_8b10b_comma_det_lsb   : 1;	/* Observes o_rx_8b10b_comma_det LSB */
        uint64_t rx_8b10b_comma_det_msb   : 1;	/* Observes o_rx_8b10b_comma_det MSB */
        uint64_t rx_pattern_cmp_pass      : 1;	/* Observes o_rx_pattern_cmp_pass port */
        uint64_t rx_8b10b_aligned_comma_det_lsb: 1;	/* Observes o_rx_8b10b_aligned_comma_det LSB */
        uint64_t rx_8b10b_aligned_comma_det_msb: 1;	/* Observes o_rx_8b10b_aligned_comma_det MSB */
        uint64_t reserved_31_9            :23;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_54_desc_t;

typedef union ar_serdes_sbus_55_desc {
    struct {
        // QW0
        uint64_t rx_error_count_obs       :32;	/* Monitors error_count_value[31:0] */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_55_desc_t;

typedef union ar_serdes_sbus_56_desc {
    struct {
        // QW0
        uint64_t rx_prbs_data_msb_obs_39_32: 8;	/* Monitors the user/PRBS MSB data registers[39:32] */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_56_desc_t;

typedef union ar_serdes_sbus_57_desc {
    struct {
        // QW0
        uint64_t rx_prbs_data_msb_obs_31_0:32;	/* Monitors the user/PRBS MSB data registers[31:0] */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_57_desc_t;

typedef union ar_serdes_sbus_58_desc {
    struct {
        // QW0
        uint64_t rx_prbs_data_lsb_obs_39_32: 8;	/* Monitors the user/PRBS LSB data registers[39:32] */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_58_desc_t;

typedef union ar_serdes_sbus_59_desc {
    struct {
        // QW0
        uint64_t rx_prbs_data_lsb_obs_31_0:32;	/* Monitors the user/PRBS LSB data registers[31:0] */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_59_desc_t;

typedef union ar_serdes_sbus_5a_desc {
    struct {
        // QW0
        uint64_t reserved_5_0             : 6;	/*  */
        uint64_t rx_sig_strength_obs      : 2;	/* Observes o_rx_sig_strength ports */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_5a_desc_t;

typedef union ar_serdes_sbus_5b_desc {
    struct {
        // QW0
        uint64_t rx_far_loopback_gate     : 1;	/* Gate for far loopback related signals */
        uint64_t rx_far_loopback_en_cntl  : 1;	/* Overrides i_far_loopback_en port */
        uint64_t reserved_31_2            :30;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_5b_desc_t;

typedef union ar_serdes_sbus_64_desc {
    struct {
        // QW0
        uint64_t rx_dfe_gate              : 1;	/* Gate to enable DFE registers */
        uint64_t rx_dfe_pd_gate           : 1;	/* Gate for overriding A/B channels PDs */
        uint64_t rx_phase_interpolator_gate: 1;	/* Gate to override Rx phase interpolator bits */
        uint64_t rx_sel_dfe_a_offset_cntl : 1;	/* Set to '1' for DFE A offset */
        uint64_t rx_sel_dfe_a_data_cntl   : 1;	/* Set to '1' for DFE A data */
        uint64_t rx_dfe_a_offset_pd_cntl  : 1;	/* Set to '1' to power down DFE A offset */
        uint64_t rx_dfe_a_data_pd_cntl    : 1;	/* Set to '1' to power down DFE A data */
        uint64_t rx_dfe_b_offset_pd_cntl  : 1;	/* Set to '1' to power down DFE B offset */
        uint64_t rx_dfe_b_data_pd_cntl    : 1;	/* Set to '1' to power down DFE B data */
        uint64_t reserved_31_9            :23;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_64_desc_t;

typedef union ar_serdes_sbus_65_desc {
    struct {
        // QW0
        uint64_t rx_phase_interpolator_cntl: 7;	/* Overrides and observes Rx phase interpolator bits */
        uint64_t reserved_31_7            :25;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_65_desc_t;

typedef union ar_serdes_sbus_67_desc {
    struct {
        // QW0
        uint64_t rx_dfe_a_cntl_29_0_      :30;	/* Overrides DFE A values */
        uint64_t reserved_31_30           : 2;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_67_desc_t;

typedef union ar_serdes_sbus_68_desc {
    struct {
        // QW0
        uint64_t rx_dfe_a_cntl_39_30_     :10;	/* Overrides DFE A values */
        uint64_t reserved_31_10           :22;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_68_desc_t;

typedef union ar_serdes_sbus_69_desc {
    struct {
        // QW0
        uint64_t rx_dfe_b_cntl_29_0_      :30;	/* Overrides DFE B values */
        uint64_t reserved_31_30           : 2;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_69_desc_t;

typedef union ar_serdes_sbus_6a_desc {
    struct {
        // QW0
        uint64_t rx_dfe_b_cntl_39_30_     :10;	/* Overrides DFE B values */
        uint64_t reserved_31_10           :22;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_6a_desc_t;

typedef union ar_serdes_sbus_6b_desc {
    struct {
        // QW0
        uint64_t rx_dfe_a_ebert_dac_cntl  : 8;	/* Overrides the eBERT DAC on DFE A */
        uint64_t reserved_15_8            : 8;	/*  */
        uint64_t rx_dfe_b_ebert_dac_cntl  : 8;	/* Overrides the eBERT DAC on DFE B */
        uint64_t reserved_31_24           : 8;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_6b_desc_t;

typedef union ar_serdes_sbus_81_desc {
    struct {
        // QW0
        uint64_t dfe_scratch_pad_cntl     :16;	/* Scratch pad controls for DFE tuning */
        uint64_t reserved_31_16           :16;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_81_desc_t;

typedef union ar_serdes_sbus_82_desc {
    struct {
        // QW0
        uint64_t dfe_user_config          :16;	/* User can use these control/status bits for DFE tuning and storing values */
        uint64_t reserved_31_16           :16;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_82_desc_t;

typedef union ar_serdes_sbus_8c_desc {
    struct {
        // QW0
        uint64_t reserved_28_0            :29;	/*  */
        uint64_t tx_override_en_obs       : 1;	/* Observes i_tx_override_en port */
        uint64_t tx_override_in_obs       : 1;	/* Observes i_tx_override_in port */
        uint64_t reserved_31              : 1;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_8c_desc_t;

typedef union ar_serdes_sbus_8e_desc {
    struct {
        // QW0
        uint64_t sbus_override_core_to_anlg_gate: 1;	/* Gate to override the i_core_to_cntl ports */
        uint64_t reserved_3_1             : 3;	/*  */
        uint64_t sbus_override_core_to_anlg_cntl:16;	/* Overrides the i_core_to_cntl ports */
        uint64_t reserved_31_20           :12;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_8e_desc_t;

typedef union ar_serdes_sbus_8f_desc {
    struct {
        // QW0
        uint64_t sbus_override_anlg_to_core_gate: 1;	/* Gate to override the o_analog_to_core ports */
        uint64_t reserved_3_1             : 3;	/*  */
        uint64_t sbus_override_anlg_to_core_cntl:16;	/* Overrides the o_analog_to_core ports */
        uint64_t reserved_31_20           :12;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_8f_desc_t;

typedef union ar_serdes_sbus_90_desc {
    struct {
        // QW0
        uint64_t reserved_30_0            :31;	/*  */
        uint64_t link_loopback_en_cntl    : 1;	/* Perform link loopback when asserted */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_90_desc_t;

typedef union ar_serdes_sbus_92_desc {
    struct {
        // QW0
        uint64_t pcie_gate                : 1;	/* Gate to PCIe-specific circuitry */
        uint64_t pcie_rx_elec_idle_threshold_cntl: 4;	/* Overrides the i_pcie_rx_elec_idle_threshold ports */
        uint64_t pcie_tx_detect_rx_cntl   : 1;	/* Overrides the i_pcie_tx_detect_rx port */
        uint64_t pcie_tx_power_down_cntl  : 2;	/* Overrides the i_pcie_tx_power_down ports */
        uint64_t pcie_rx_power_down_cntl  : 1;	/* Overrides the i_pcie_rx_power_down ports */
        uint64_t reserved_31_9            :23;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_92_desc_t;

typedef union ar_serdes_sbus_93_desc {
    struct {
        // QW0
        uint64_t pcie_rx_elec_idle_detect_gate: 1;	/* Gate to override the o_pcie_rx_elec_idle_detect port */
        uint64_t pcie_rx_elec_idle_detect_cntl: 1;	/* Overrides the o_pcie_rx_elec_idle_detect port */
        uint64_t reserved_31_2            :30;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_93_desc_t;

typedef union ar_serdes_sbus_95_desc {
    struct {
        // QW0
        uint64_t sig_ok_en_prgrmble_inputs_gate: 1;	/* Enables all of the o_rx_signal_ok programmable inputs */
        uint64_t sig_ok_use_rx_fine_flock_cnt: 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_use_elec_idle_cntl: 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_use_signal_strength_cntl: 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_use_comma_det_cntl: 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_use_rx_rdy_cntl   : 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_use_slip_in_progress_cntl: 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_use_fine_flock_cntr_cntl: 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_ffl_counter_bit2_en_cntl: 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_ffl_counter_bit3_en_cntl: 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_output_cntl       : 2;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_obs               : 1;	/* Observes o_rx_signal_ok */
        uint64_t programmable_sig_ok_obs  : 1;	/* Observes output of programmable portion of o_rx_signal_ok logic */
        uint64_t sig_ok_use_kr_cntl       : 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_comma_count_limit_cntl: 4;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_use_sel_pfd_cntl  : 1;	/* See o_rx_signal_ok description */
        uint64_t sig_ok_pfd_counter_cntl  : 3;	/* See o_rx_signal_ok description */
        uint64_t reserved_31_23           : 9;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_95_desc_t;

typedef union ar_serdes_sbus_ad_desc {
    struct {
        // QW0
        uint64_t kr_training_en_gate      : 1;	/* Gate to override i_kr_training_en port */
        uint64_t kr_training_en           : 1;	/* Overrides the i_kr_training_en port */
        uint64_t reserved_31_2            :30;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ad_desc_t;

typedef union ar_serdes_sbus_ae_desc {
    struct {
        // QW0
        uint64_t kr_restart_training_gate : 1;	/* Gate to override the i_kr_restart_training port */
        uint64_t kr_restart_training      : 1;	/* Overrides the i_kr_restart_training port */
        uint64_t reserved_31_2            :30;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ae_desc_t;

typedef union ar_serdes_sbus_af_desc {
    struct {
        // QW0
        uint64_t kr_rx_trained_gate       : 1;	/* Gate to override the rx_trained variable */
        uint64_t kr_rx_trained            : 1;	/* Overrides the rx_trained variable */
        uint64_t kr_training_failure      : 1;	/* Observation of o_kr_training_failure */
        uint64_t kr_signal_detect         : 1;	/* Observation of o_kr_signal_detect */
        uint64_t kr_pmd_fault             : 1;	/* Observation of o_kr_pmd_fault */
        uint64_t kr_tx_fault              : 1;	/* Observation of o_tx_fault */
        uint64_t kr_rx_fault              : 1;	/* Observation of o_rx_fault */
        uint64_t kr_frame_lock            : 1;	/* Observation of kr frame_lock variable */
        uint64_t kr_training              : 1;	/* Observation of kr_training variable */
        uint64_t reserved_15_9            : 7;	/*  */
        uint64_t kr_training_state        : 3;	/* Observation of KR training FSM state: 0 −> INITIALIZE 1 −> SEND_TRAINING 2 −> TRAIN_LOCAL 3 −> TRAIN_REMOTE 4 −> LINK_READY 5 −> SEND_DATA 6,7 −> TRAINING_FAILURE */
        uint64_t reserved_31_19           :13;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_af_desc_t;

typedef union ar_serdes_sbus_b3_desc {
    struct {
        // QW0
        uint64_t kr_remote_rx_rdy_gate    : 1;	/* Gate to override the remote_rx_ready variable */
        uint64_t kr_remote_rx_rdy         : 1;	/* Overrides the remote_rx_ready variable */
        uint64_t reserved_31_2            :30;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_b3_desc_t;

typedef union ar_serdes_sbus_fc_desc {
    struct {
        // QW0
        uint64_t ignore_broadcast_cntl    : 1;	/* Set to '1' for SBus Rx to ignore broadcast commands */
        uint64_t reserved_3_1             : 3;	/*  */
        uint64_t broadcast_inv_cnt        : 8;	/* Alternative standard SerDes broadcast address - inverted */
        uint64_t reserved_15_12           : 4;	/*  */
        uint64_t broadcast_inv_2_cntl     : 8;	/* Second alternative standard SerDes broadcast address - inverted */
        uint64_t reserved_31_24           : 8;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_fc_desc_t;

typedef union ar_serdes_sbus_fd_desc {
    struct {
        // QW0
        uint64_t serdes_sbus_test_read_write: 8;	/* This is a spare register where the user can write a value into and read from, in order to test SBus operations */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_fd_desc_t;

typedef union ar_serdes_sbus_fe_desc {
    struct {
        // QW0
        uint64_t serdes_variant_idcode_obs: 8;	/* This IDCODE depends on the type of SerDes being used */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_fe_desc_t;

typedef union ar_serdes_sbus_ff_desc {
    struct {
        // QW0
        uint64_t idcode                   : 8;	/* Defaults to 8'h01 for SerDes Macros */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ff_desc_t;

typedef union ar_serdes_pmro_ctrl_desc {
    struct {
        // QW0
        uint64_t osc_run                  : 1;	/* This is the only writable bit of the register, all other bits are read only */
        uint64_t state_bit_0              : 1;	/* This is the first state bit and is set one state after bit0 is set */
        uint64_t state_bit_1              : 1;	/* This is the second state bit and is set one state after bit 1 is set */
        uint64_t state_bit_2              : 1;	/* This is the third state bit and is set one state after bit 2 is set */
        uint64_t state_bit_3              : 1;	/* This is the third state bit and is set one state after bit 3 is set */
        uint64_t pmro_active              : 1;	/* The run signal is synchronized into the oscillator clock domain by a double synchronizer */
        uint64_t pmro_active_delay        : 1;	/* This bit is set or cleared one state after bit 5 is set or cleared */
        uint64_t osc_run_delay            : 1;	/* This bit is a one state delayed version of the run signal that is provided for monitoring purposes */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_pmro_ctrl_desc_t;

typedef union ar_serdes_pmro_std_vt_config_desc {
    struct {
        // QW0
        uint64_t inverter                 : 1;	/* Inverter */
        uint64_t nand_two_fast_in         : 1;	/* Two input NAND gate, fastest input */
        uint64_t nand_two_slow_in         : 1;	/* Two input NAND gate, slowest input */
        uint64_t nor_two_fast_in          : 1;	/* Two input NOR gate, fastest input */
        uint64_t nor_two_slow_in          : 1;	/* Two input NOR gate, slowest input */
        uint64_t xor_two_fast_in_im       : 1;	/* Two input XOR gate, fastest input, inverting mode (second input tied high) */
        uint64_t xor_two_slow_in_im       : 1;	/* Two input XOR gate, slowest input, inverting mode (second input tied high) */
        uint64_t xor_two_fast_in_nim      : 1;	/* Two input XOR gate, fastest input, non-inverting mode (second input tied low) */
        uint64_t xor_two_slow_in_nim      : 1;	/* Two input XOR gate, slowest input, non-inverting mode (second input tied low) */
        uint64_t nand_three_slow_in       : 1;	/* Three input NAND gate, slowest input */
        uint64_t nor_three_slow_in        : 1;	/* Three input NOR gate, slowest input */
        uint64_t aoi221_fast_in_fast_and  : 1;	/* AOI221 gate, fastest input of fastest AND gate */
        uint64_t aoi221_slow_in_fast_and  : 1;	/* AOI221 gate, slowest input of fastest AND gate */
        uint64_t aoi221_fast_in_slow_and  : 1;	/* AOI221 gate, fastest input of slowest AND gate */
        uint64_t aoi221_slow_in_slow_and  : 1;	/* AOI221 gate, slowest input of slowest AND gate */
        uint64_t buffer                   : 1;	/* Buffer */
        uint64_t reserved_31_16           :16;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_pmro_std_vt_config_desc_t;

typedef union ar_serdes_pmro_hi_vt_config_desc {
    struct {
        // QW0
        uint64_t inverter                 : 1;	/* Inverter */
        uint64_t nand_two_fast_in         : 1;	/* Two input NAND gate, fastest input */
        uint64_t nand_two_slow_in         : 1;	/* Two input NAND gate, slowest input */
        uint64_t nor_two_fast_in          : 1;	/* Two input NOR gate, fastest input */
        uint64_t nor_two_slow_in          : 1;	/* Two input NOR gate, slowest input */
        uint64_t xor_two_fast_in_im       : 1;	/* Two input XOR gate, fastest input, inverting mode (second input tied high) */
        uint64_t xor_two_slow_in_im       : 1;	/* Two input XOR gate, slowest input, inverting mode (second input tied high) */
        uint64_t xor_two_fast_in_nim      : 1;	/* Two input XOR gate, fastest input, non-inverting mode (second input tied low) */
        uint64_t xor_two_slow_in_nim      : 1;	/* Two input XOR gate, slowest input, non-inverting mode (second input tied low) */
        uint64_t nand_three_slow_in       : 1;	/* Three input NAND gate, slowest input */
        uint64_t nor_three_slow_in        : 1;	/* Three input NOR gate, slowest input */
        uint64_t aoi221_fast_in_fast_and  : 1;	/* AOI221 gate, fastest input of fastest AND gate */
        uint64_t aoi221_slow_in_fast_and  : 1;	/* AOI221 gate, slowest input of fastest AND gate */
        uint64_t aoi221_fast_in_slow_and  : 1;	/* AOI221 gate, fastest input of slowest AND gate */
        uint64_t aoi221_slow_in_slow_and  : 1;	/* AOI221 gate, slowest input of slowest AND gate */
        uint64_t buffer                   : 1;	/* Buffer */
        uint64_t reserved_31_16           :16;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_pmro_hi_vt_config_desc_t;

typedef union ar_serdes_pmro_lo_vt_config_desc {
    struct {
        // QW0
        uint64_t inverter                 : 1;	/* Inverter */
        uint64_t nand_two_fast_in         : 1;	/* Two input NAND gate, fastest input */
        uint64_t nand_two_slow_in         : 1;	/* Two input NAND gate, slowest input */
        uint64_t nor_two_fast_in          : 1;	/* Two input NOR gate, fastest input */
        uint64_t nor_two_slow_in          : 1;	/* Two input NOR gate, slowest input */
        uint64_t xor_two_fast_in_im       : 1;	/* Two input XOR gate, fastest input, inverting mode (second input tied high) */
        uint64_t xor_two_slow_in_im       : 1;	/* Two input XOR gate, slowest input, inverting mode (second input tied high) */
        uint64_t xor_two_fast_in_nim      : 1;	/* Two input XOR gate, fastest input, non-inverting mode (second input tied low) */
        uint64_t xor_two_slow_in_nim      : 1;	/* Two input XOR gate, slowest input, non-inverting mode (second input tied low) */
        uint64_t nand_three_slow_in       : 1;	/* Three input NAND gate, slowest input */
        uint64_t nor_three_slow_in        : 1;	/*  */
        uint64_t aoi221_fast_in_fast_and  : 1;	/* AOI221 gate, fastest input of fastest AND gate */
        uint64_t aoi221_slow_in_fast_and  : 1;	/* AOI221 gate, slowest input of fastest AND gate */
        uint64_t aoi221_fast_in_slow_and  : 1;	/* AOI221 gate, fastest input of slowest AND gate */
        uint64_t aoi221_slow_in_slow_and  : 1;	/* AOI221 gate, slowest input of slowest AND gate */
        uint64_t buffer                   : 1;	/* Buffer */
        uint64_t reserved_31_16           :16;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_pmro_lo_vt_config_desc_t;

typedef union ar_serdes_pmro_ref_clk_cntr_desc {
    struct {
        // QW0
        uint64_t counter_value            :16;	/* Counter initial value */
        uint64_t reserved_31_16           :16;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_pmro_ref_clk_cntr_desc_t;

typedef union ar_serdes_pmro_osc_cntr_desc {
    struct {
        // QW0
        uint64_t osc_count                :16;	/* Initialization value */
        uint64_t reserved_31_16           :16;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_pmro_osc_cntr_desc_t;

typedef union ar_serdes_pmro_unimplemented_desc {
    struct {
        // QW0
        uint64_t reserved_31_0            :32;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_pmro_unimplemented_desc_t;

typedef union ar_serdes_pmro_sbus_id_desc {
    struct {
        // QW0
        uint64_t sbus_id                  : 8;	/* Identifier for PMRO block */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_pmro_sbus_id_desc_t;

typedef union ar_serdes_sbus_ctrl_00_desc {
    struct {
        // QW0
        uint64_t cism_start               : 1;	/* Start the CISM state machine */
        uint64_t cism_loop                : 1;	/* Enable CISM to continuously loop */
        uint64_t reserved_31_2            :30;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_00_desc_t;

typedef union ar_serdes_sbus_ctrl_01_desc {
    struct {
        // QW0
        uint64_t cism_timer_value         : 5;	/* Number of SBus clock cycles between CISM commands (cycles=2^timer value) */
        uint64_t reserved_31_5            :27;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_01_desc_t;

typedef union ar_serdes_sbus_ctrl_02_desc {
    struct {
        // QW0
        uint64_t last_sbus_address        : 8;	/* Value of sbus_address_in */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_02_desc_t;

typedef union ar_serdes_sbus_ctrl_0a_desc {
    struct {
        // QW0
        uint64_t clock_divider_setting1   : 4;	/* Divider value */
        uint64_t undefine_6_4             : 3;	/* undefined */
        uint64_t clock_divider_setting0   : 1;	/* Enable non2^n clock divider */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_0a_desc_t;

typedef union ar_serdes_sbus_ctrl_0b_desc {
    struct {
        // QW0
        uint64_t clock_divider_reset_value:12;	/* Value at which the clock divider resets if bit 7 of address 0x0A is set */
        uint64_t reserved_31_12           :20;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_0b_desc_t;

typedef union ar_serdes_sbus_ctrl_0c_desc {
    struct {
        // QW0
        uint64_t cism_loop                : 8;	/* Access to bits 7:0 of address 0x0B */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_0c_desc_t;

typedef union ar_serdes_sbus_ctrl_0d_desc {
    struct {
        // QW0
        uint64_t clock_divider_reset_value_page1: 4;	/* Access to bits 11:8 of address 0x0B */
        uint64_t reserved_31_4            :28;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_0d_desc_t;

typedef union ar_serdes_sbus_ctrl_10_desc {
    struct {
        // QW0
        uint64_t cism_sbus_rx_address     : 8;	/* Rx address used in CISM commands */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_10_desc_t;

typedef union ar_serdes_sbus_ctrl_11_desc {
    struct {
        // QW0
        uint64_t cism_command_1           : 8;	/* Command field for first command */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_11_desc_t;

typedef union ar_serdes_sbus_ctrl_12_desc {
    struct {
        // QW0
        uint64_t cism_data_address_1      : 8;	/* Data address for first command */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_12_desc_t;

typedef union ar_serdes_sbus_ctrl_13_desc {
    struct {
        // QW0
        uint64_t cism_data_word_1         :32;	/* Data word for first command */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_13_desc_t;

typedef union ar_serdes_sbus_ctrl_14_desc {
    struct {
        // QW0
        uint64_t cism_command_2           : 8;	/* Command field for second command */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_14_desc_t;

typedef union ar_serdes_sbus_ctrl_15_desc {
    struct {
        // QW0
        uint64_t cism_data_address_2      : 8;	/* Data address for second command */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_15_desc_t;

typedef union ar_serdes_sbus_ctrl_16_desc {
    struct {
        // QW0
        uint64_t cism_data_word_2         :32;	/* Data word for second command */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_16_desc_t;

typedef union ar_serdes_sbus_ctrl_20_desc {
    struct {
        // QW0
        uint64_t bsb_control              : 5;	/* Selects data_out bit */
        uint64_t undefine_6_5             : 2;	/* undefined */
        uint64_t bsb_select               : 1;	/* Selects interface: 0=TAP, 1=SPARE */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_20_desc_t;

typedef union ar_serdes_sbus_ctrl_80_desc {
    struct {
        // QW0
        uint64_t generic_write            :32;	/* 32-bit field driven out of SBus Controller output port sbus_0xfe_0x80_out[31:0] */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_80_desc_t;

typedef union ar_serdes_sbus_ctrl_81_desc {
    struct {
        // QW0
        uint64_t reserved_31_0            :32;	/* 32-bit field read by SBus Controller intput port sbus_0xfe_0x81_in[31:0] */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_81_desc_t;

typedef union ar_serdes_sbus_ctrl_82_desc {
    struct {
        // QW0
        uint64_t generic_write_page0      : 8;	/* Access to bits 7:0 of Address 0x80 */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_82_desc_t;

typedef union ar_serdes_sbus_ctrl_83_desc {
    struct {
        // QW0
        uint64_t generic_write_page1      : 8;	/* Access to bits 15:8 of Address 0x80 */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_83_desc_t;

typedef union ar_serdes_sbus_ctrl_84_desc {
    struct {
        // QW0
        uint64_t generic_write_page2      : 8;	/* Access to bits 23:16 of Address 0x80 */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_84_desc_t;

typedef union ar_serdes_sbus_ctrl_85_desc {
    struct {
        // QW0
        uint64_t generic_write_page3      : 8;	/* Access to bits 31:42 of Address 0x80 */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_85_desc_t;

typedef union ar_serdes_sbus_ctrl_86_desc {
    struct {
        // QW0
        uint64_t generic_read_page0       : 8;	/* Access to bits 7:0 of Address 0x81 */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_86_desc_t;

typedef union ar_serdes_sbus_ctrl_87_desc {
    struct {
        // QW0
        uint64_t generic_read_page1       : 8;	/* Access to bits 15:8 of Address 0x81 */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_87_desc_t;

typedef union ar_serdes_sbus_ctrl_88_desc {
    struct {
        // QW0
        uint64_t generic_read_page2       : 8;	/* Access to bits 23:16 of Address 0x81 */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_88_desc_t;

typedef union ar_serdes_sbus_ctrl_89_desc {
    struct {
        // QW0
        uint64_t generic_read_page3       : 8;	/* Access to bits 31:24 of Address 0x81 */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_89_desc_t;

typedef union ar_serdes_sbus_ctrl_fe_desc {
    struct {
        // QW0
        uint64_t sbus_id                  : 8;	/* SBus Controller ID code */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_fe_desc_t;

typedef union ar_serdes_sbus_ctrl_ff_desc {
    struct {
        // QW0
        uint64_t ip_idcode                : 8;	/* IP ID code */
        uint64_t reserved_31_8            :24;	/*  */
        uint64_t undefine_63_32           :32;	/* undefined */
    };
    uint64_t qwords[1];
} ar_serdes_sbus_ctrl_ff_desc_t;


#endif
