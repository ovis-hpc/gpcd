/******************************************************************************
 * COPYRIGHT CRAY INC. ar_np_structs.h
 * FILE: ar_np_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:01 2014
 ******************************************************************************/

#ifndef _AR_NP_STRUCTS_H_
#define _AR_NP_STRUCTS_H_

/*
 *  ARIES NP STRUCTURES
 */
typedef union ar_np_cfg_desc {
    struct {
        // QW0
        uint64_t clkgen_proc              : 2;	/* Processor clock configuration, divide LCLK by 2(00), 4(01),8(10) and 16(11) */
        uint64_t undefine_7_2             : 6;	/* undefined */
        uint64_t clkgen_cbus              : 2;	/* CBus clock configuration, divide LCLK by 2(00), 4(01), 8(10), and 16(11) */
        uint64_t undefine_15_10           : 6;	/* undefined */
        uint64_t clkgen_cbus_out          : 2;	/* CBus ring clock configuration, divided LCLK by 16(00), 32(01), 64(10), and 128(11) */
        uint64_t undefine_23_18           : 6;	/* undefined */
        uint64_t clkgen_spico             : 2;	/* SPICO clock generation configuration, divided LCLK by 2(00), 4(01), 8(10), 16(11) */
        uint64_t undefine_30_26           : 5;	/* undefined */
        uint64_t stop_sbus_spico          : 1;	/* Set to 1 to stop the SPICO clock for the SBus Master */
        uint64_t rst_proc                 : 1;	/* Set to 1 to reset the 8051 processor, write to 1 then stay at one for at least 64 LCLK cycles, then set to 0, the 8051 processor will start executing firmware at address 0 */
        uint64_t undefine_39_33           : 7;	/* undefined */
        uint64_t rst_sfr                  : 1;	/* Set to 1 to reset the SFR interface */
        uint64_t undefine_47_41           : 7;	/* undefined */
        uint64_t rst_ram_ctrl             : 1;	/* Set to 1 to reset all ram controllers */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_cfg_desc_t;

typedef union ar_np_dbg_sfr_access_desc {
    struct {
        // QW0
        uint64_t sfr_addr                 : 7;	/* Address field for read/write */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t sfr_rd_data              : 8;	/* Data from a read operation, it is valid when SFR_REQ_DATA_VALID is set */
        uint64_t sfr_wt_data              : 8;	/* Data to be written */
        uint64_t sfr_wt_ena               : 1;	/* Set to 1 to indicate a write request, otherwise it is a read request */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t sfr_req                  : 1;	/* Toggle to indicates a new request */
        uint64_t undefine_47_33           :15;	/* undefined */
        uint64_t sfr_req_data_valid       : 1;	/* Toggle to indicates RD_DATA(read data)is valid */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_dbg_sfr_access_desc_t;

typedef union ar_np_dbg_processor_desc {
    struct {
        // QW0
        uint64_t ints                     : 7;	/* Processor Interrupts, connects to the 7 interrupt pins on the 8051 */
        uint64_t ena_int                  : 1;	/* Enable the MMR access to INT */
        uint64_t halt_proc_clk            : 1;	/* 1 to halt the clock, 0 to resume */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t coderun                  : 1;	/* 1 indicates code is running */
        uint64_t debugacs                 : 1;	/* 1 indicates debugger is active */
        uint64_t undefine_63_18           :46;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_dbg_processor_desc_t;

typedef union ar_np_cfg_req_sbus_desc {
    struct {
        // QW0
        uint64_t rcv_addr                 : 8;	/* Address of the destination SBus RX */
        uint64_t data_addr                : 8;	/* Data Address within the targeted SBus Receiver (RX) */
        uint64_t cmd                      : 8;	/* SBus Command */
        uint64_t data                     :32;	/* SBus data input (write) */
        uint64_t exe                      : 1;	/* Signal used to initiates the SBus request */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_cfg_req_sbus_desc_t;

typedef union ar_np_cfg_rsp_sbus_desc {
    struct {
        // QW0
        uint64_t result_code              : 3;	/* Result code from the SBus request */
        uint64_t undefine_7_3             : 5;	/* undefined */
        uint64_t rcv_data_valid           : 1;	/* Indicating that the result code and result data are valid */
        uint64_t undefine_23_9            :15;	/* undefined */
        uint64_t data_out                 :32;	/* SBus data output(read) */
        uint64_t done                     : 1;	/* Handshake signal from the SBus Master to indicate the request has been received */
        uint64_t data_vld_mode_mmr        : 1;	/* Same as above */
        uint64_t data_vld_mode_proc       : 1;	/* 0: level mode, 1 toggle mode */
        uint64_t undefine_63_59           : 5;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_cfg_rsp_sbus_desc_t;

typedef union ar_np_cfg_req_cbus_desc {
    struct {
        // QW0
        uint64_t rcv_addr                 : 8;	/* Address of the destination CBus RX */
        uint64_t data_addr                : 8;	/* Data Address within the targeted CBus RX */
        uint64_t cmd                      : 8;	/* CBus Command */
        uint64_t data                     :32;	/* CBus data input (write) */
        uint64_t exe                      : 1;	/* Signal used to initiates the CBus request */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_cfg_req_cbus_desc_t;

typedef union ar_np_cfg_rsp_cbus_desc {
    struct {
        // QW0
        uint64_t result_code              : 3;	/* Result code from CBus request */
        uint64_t undefine_7_3             : 5;	/* undefined */
        uint64_t rcv_data_valid           : 1;	/* Indicates that the result code and data are valid */
        uint64_t undefine_23_9            :15;	/* undefined */
        uint64_t data_out                 :32;	/* Data output (read) */
        uint64_t done                     : 1;	/* Handshake signal from the CBus Controller to indicate a new request has been received */
        uint64_t data_vld_mode_mmr        : 1;	/* Same as above */
        uint64_t data_vld_mode_proc       : 1;	/* 0: level mode, 1 toggle mode */
        uint64_t undefine_63_59           : 5;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_cfg_rsp_cbus_desc_t;

typedef union ar_np_sts_therm_sensor_req_desc {
    struct {
        // QW0
        uint64_t data_in                  :16;	/* Data to be written into the memory block during a memory write operation */
        uint64_t addr                     : 4;	/* Memory address used for selecting memory locations for read and writes to the memory block */
        uint64_t undefine_23_20           : 4;	/* undefined */
        uint64_t read                     : 1;	/* Active high signal that when asserted will cause data from the memory location SENSOR_ADDR to be placed on SENSOR_DATA_OUT */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t reset                    : 1;	/* Active high signal that when asserted will cause the controllers state machine and internal memory locations to reset to their default voltage or temperature settings depending on the value of SENSOR_VOLT_MODE */
        uint64_t undefine_39_33           : 7;	/* undefined */
        uint64_t start                    : 1;	/* Active high signal that when asserted will cause the sensor to start a measurement */
        uint64_t undefine_47_41           : 7;	/* undefined */
        uint64_t write                    : 1;	/* When asserted, the data on SENSOR_DATA_IN is written into the memory address selected by SENSOR_ADDR */
        uint64_t undefine_55_49           : 7;	/* undefined */
        uint64_t voltmode                 : 1;	/* This signal switches the sensor between temperature or voltage conversion mode */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_sts_therm_sensor_req_desc_t;

typedef union ar_np_sts_therm_sensor_rsp_desc {
    struct {
        // QW0
        uint64_t data_out                 :16;	/* Data from the memory block during a memory read operation */
        uint64_t value                    :12;	/* In temperature mode: twos complement temperature result in degrees Celsius */
        uint64_t undefine_31_28           : 4;	/* undefined */
        uint64_t read_ack                 : 1;	/* Read acknowledge signal indicating that the memory data on SENSOR_DATA_OUT is valid */
        uint64_t undefine_39_33           : 7;	/* undefined */
        uint64_t valid                    : 1;	/* This signal indicates the SENSOR_VALUE bus is valid for reading */
        uint64_t undefine_47_41           : 7;	/* undefined */
        uint64_t write_ack                : 1;	/* Write acknowledge signal indicating that the memory write operation has been completed */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_sts_therm_sensor_rsp_desc_t;

typedef union ar_np_dbg_errinj_ecc_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once, clear enable to rerun Mode 1: Inject error always Mode 2: Inject error once if address matches, clear enable to rerun Mode 3: Inject error always if address matches */
        uint64_t ramselect                : 2;	/* 2'b01: IRAM 2'b10: DRAM 2'b11: IDRAM */
        uint64_t checkbyte                : 5;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted */
        uint64_t address                  :15;	/* This field indicates the address for which error injection is to occur */
        uint64_t undefine_31_25           : 7;	/* undefined */
        uint64_t clr_err                  : 1;	/* When asserted, clear all the error counters, Error Info is not clear by this */
        uint64_t undefine_63_33           :31;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_dbg_errinj_ecc_desc_t;

typedef union ar_np_err_info_iram_desc {
    struct {
        // QW0
        uint64_t sbe                      : 1;	/* indicates SBE occured */
        uint64_t mbe                      : 1;	/* indicates MBE occured */
        uint64_t mmr_created_sbe          : 1;	/* indicates SBE occured due to MMR error injection */
        uint64_t mmr_created_mbe          : 1;	/* indicates MBE occured due to MMR error injection */
        uint64_t sbe_synd                 : 5;	/* SBE syndrome */
        uint64_t mbe_synd                 : 5;	/* MBE Syndrome */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_err_info_iram_desc_t;

typedef union ar_np_err_info_dram_desc {
    struct {
        // QW0
        uint64_t sbe                      : 1;	/* indicates SBE occured */
        uint64_t mbe                      : 1;	/* indicates MBE occured */
        uint64_t mmr_created_sbe          : 1;	/* indicates SBE occured due to MMR error injection */
        uint64_t mmr_created_mbe          : 1;	/* indicates MBE occured due to MMR error injection */
        uint64_t sbe_synd                 : 5;	/* SBE syndrome */
        uint64_t mbe_synd                 : 5;	/* MBE Syndrome */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_err_info_dram_desc_t;

typedef union ar_np_err_info_idram_desc {
    struct {
        // QW0
        uint64_t sbe                      : 1;	/* indicates SBE occured */
        uint64_t mbe                      : 1;	/* indicates MBE occured */
        uint64_t mmr_created_sbe          : 1;	/* indicates SBE occured due to MMR error injection */
        uint64_t mmr_created_mbe          : 1;	/* indicates MBE occured due to MMR error injection */
        uint64_t sbe_synd                 : 5;	/* SBE syndrome */
        uint64_t mbe_synd                 : 5;	/* MBE Syndrome */
        uint64_t undefine_63_14           :50;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_err_info_idram_desc_t;

typedef union ar_np_err_info_cnt_iram_desc {
    struct {
        // QW0
        uint64_t sbe_count                :32;	/* Number of SBE Error */
        uint64_t mbe_count                :32;	/* Number of MBE error */
    };
    uint64_t qwords[1];
} ar_np_err_info_cnt_iram_desc_t;

typedef union ar_np_err_info_cnt_dram_desc {
    struct {
        // QW0
        uint64_t sbe_count                :32;	/* Number of SBE Error */
        uint64_t mbe_count                :32;	/* Number of MBE error */
    };
    uint64_t qwords[1];
} ar_np_err_info_cnt_dram_desc_t;

typedef union ar_np_err_info_cnt_idram_desc {
    struct {
        // QW0
        uint64_t sbe_count                :32;	/* Number of SBE Error */
        uint64_t mbe_count                :32;	/* Number of MBE error */
    };
    uint64_t qwords[1];
} ar_np_err_info_cnt_idram_desc_t;

typedef union ar_np_deb_mon_sfr0_desc {
    struct {
        // QW0
        uint64_t cbus_miscs               : 8;	/*  */
        uint64_t cbus_commd               : 8;	/*  */
        uint64_t cbus_raddr               : 8;	/*  */
        uint64_t cbus_daddr               : 8;	/*  */
        uint64_t cbus_data3               : 8;	/*  */
        uint64_t cbus_data2               : 8;	/*  */
        uint64_t cbus_data1               : 8;	/*  */
        uint64_t cbus_data0               : 8;	/*  */
    };
    uint64_t qwords[1];
} ar_np_deb_mon_sfr0_desc_t;

typedef union ar_np_deb_mon_sfr1_desc {
    struct {
        // QW0
        uint64_t sbus_miscs               : 8;	/*  */
        uint64_t sbus_commd               : 8;	/*  */
        uint64_t sbus_raddr               : 8;	/*  */
        uint64_t sbus_daddr               : 8;	/*  */
        uint64_t sbus_data3               : 8;	/*  */
        uint64_t sbus_data2               : 8;	/*  */
        uint64_t sbus_data1               : 8;	/*  */
        uint64_t sbus_data0               : 8;	/*  */
    };
    uint64_t qwords[1];
} ar_np_deb_mon_sfr1_desc_t;

typedef union ar_np_deb_mon_sfr2_desc {
    struct {
        // QW0
        uint64_t tmp01                    : 8;	/*  */
        uint64_t tmp02                    : 8;	/*  */
        uint64_t tmp03                    : 8;	/*  */
        uint64_t tmp04                    : 8;	/*  */
        uint64_t tmp05                    : 8;	/*  */
        uint64_t tmp06                    : 8;	/*  */
        uint64_t tmp07                    : 8;	/*  */
        uint64_t tmp08                    : 8;	/*  */
    };
    uint64_t qwords[1];
} ar_np_deb_mon_sfr2_desc_t;

typedef union ar_np_deb_mon_sfr3_desc {
    struct {
        // QW0
        uint64_t tmp09                    : 8;	/*  */
        uint64_t tmp10                    : 8;	/*  */
        uint64_t tmp11                    : 8;	/*  */
        uint64_t tmp12                    : 8;	/*  */
        uint64_t tmp13                    : 8;	/*  */
        uint64_t tmp14                    : 8;	/*  */
        uint64_t tmp15                    : 8;	/*  */
        uint64_t tmp16                    : 8;	/*  */
    };
    uint64_t qwords[1];
} ar_np_deb_mon_sfr3_desc_t;

typedef union ar_np_deb_mon_sfr4_desc {
    struct {
        // QW0
        uint64_t tmp17                    : 8;	/*  */
        uint64_t tmp18                    : 8;	/*  */
        uint64_t port0                    : 8;	/*  */
        uint64_t port1                    : 8;	/*  */
        uint64_t port2                    : 8;	/*  */
        uint64_t port3                    : 8;	/*  */
        uint64_t sbus_miscs_rd            : 8;	/*  */
        uint64_t cbus_miscs_rd            : 8;	/*  */
    };
    uint64_t qwords[1];
} ar_np_deb_mon_sfr4_desc_t;

typedef union ar_np_deb_mon_sfr5_desc {
    struct {
        // QW0
        uint64_t sbus_data0_rd            : 8;	/*  */
        uint64_t sbus_data1_rd            : 8;	/*  */
        uint64_t sbus_data2_rd            : 8;	/*  */
        uint64_t sbus_data3_rd            : 8;	/*  */
        uint64_t cbus_data0_rd            : 8;	/*  */
        uint64_t cbus_data1_rd            : 8;	/*  */
        uint64_t cbus_data2_rd            : 8;	/*  */
        uint64_t cbus_data3_rd            : 8;	/*  */
    };
    uint64_t qwords[1];
} ar_np_deb_mon_sfr5_desc_t;

typedef union ar_np_deb_mon_heatbeat_cnt_desc {
    struct {
        // QW0
        uint64_t sbus_cbus_cmd_cnt        :32;	/* This counter is to record the time laps between 2 consecutive SBus/CBus command issued by processor */
        uint64_t prg_addr_change_cnt      :16;	/* This counter is used to keep track of the time laps when program memory address changes */
        uint64_t reset_prg_addr_chnange_cnt: 1;	/* When written 1'b1, PRG_ADDR_CHANGE_CNT is in reset, when written 1'b0, counter is active */
        uint64_t undefine_55_49           : 7;	/* undefined */
        uint64_t reset_sbus_cbus_cmd_cnt  : 1;	/* When written 1'b1, SBUS_CBUS_CMD_CNT is in reset, when 1'b0, counter is active */
        uint64_t undefine_63_57           : 7;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_deb_mon_heatbeat_cnt_desc_t;

typedef union ar_np_sts_therm_sensor_cfg_desc {
    struct {
        // QW0
        uint64_t clk_divide               :10;	/* Clock divider configuration */
        uint64_t undefine_63_10           :54;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_sts_therm_sensor_cfg_desc_t;

typedef union ar_np_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t np_checksum              : 1;	/* set by 8051 firmware, checksum error */
        uint64_t np_spico                 : 1;	/* set by 8051 firmware, SPICO error */
        uint64_t np_cbus_wr               : 1;	/* set by 8051 firmware, CBUS WR error */
        uint64_t np_cbus_rd               : 1;	/* set by 8051 firmware, CBUS RD error */
        uint64_t np_sbus_wr               : 1;	/* set by 8051 firmware, SBUS WR error */
        uint64_t np_sbus_rd               : 1;	/* set by 8051 firmware, SBUS RD error */
        uint64_t np_tuning                : 1;	/* set by 8051 firmware, tuning error */
        uint64_t np_lane                  : 1;	/* set by 8051 firmware, lane error */
        uint64_t heartbeat_bus_cmd        : 1;	/* set if bus command timeout seen by the 8051 */
        uint64_t heartbeat_pc_idle        : 1;	/* set if PC for the 8051 not making forward progress */
        uint64_t iram_sbe                 : 1;	/* Instruction RAM SBE */
        uint64_t iram_mbe                 : 1;	/* Instruction RAM MBE */
        uint64_t edram_sbe                : 1;	/* external data RAM SBE */
        uint64_t edram_mbe                : 1;	/* external data RAM MBE */
        uint64_t idram_sbe                : 1;	/* internal data RAM SBE */
        uint64_t idram_mbe                : 1;	/* internal data RAM MBE */
        uint64_t undefine_63_17           :47;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_err_flg_desc_t;

typedef union ar_np_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t np_checksum              : 1;	/* set by 8051 firmware, checksum error */
        uint64_t np_spico                 : 1;	/* set by 8051 firmware, SPICO error */
        uint64_t np_cbus_wr               : 1;	/* set by 8051 firmware, CBUS WR error */
        uint64_t np_cbus_rd               : 1;	/* set by 8051 firmware, CBUS RD error */
        uint64_t np_sbus_wr               : 1;	/* set by 8051 firmware, SBUS WR error */
        uint64_t np_sbus_rd               : 1;	/* set by 8051 firmware, SBUS RD error */
        uint64_t np_tuning                : 1;	/* set by 8051 firmware, tuning error */
        uint64_t np_lane                  : 1;	/* set by 8051 firmware, lane error */
        uint64_t heartbeat_bus_cmd        : 1;	/* set if bus command timeout seen by the 8051 */
        uint64_t heartbeat_pc_idle        : 1;	/* set if PC for the 8051 not making forward progress */
        uint64_t iram_sbe                 : 1;	/* Instruction RAM SBE */
        uint64_t iram_mbe                 : 1;	/* Instruction RAM MBE */
        uint64_t edram_sbe                : 1;	/* external data RAM SBE */
        uint64_t edram_mbe                : 1;	/* external data RAM MBE */
        uint64_t idram_sbe                : 1;	/* internal data RAM SBE */
        uint64_t idram_mbe                : 1;	/* internal data RAM MBE */
        uint64_t undefine_63_17           :47;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_err_clr_desc_t;

typedef union ar_np_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t np_checksum              : 1;	/* set by 8051 firmware, checksum error */
        uint64_t np_spico                 : 1;	/* set by 8051 firmware, SPICO error */
        uint64_t np_cbus_wr               : 1;	/* set by 8051 firmware, CBUS WR error */
        uint64_t np_cbus_rd               : 1;	/* set by 8051 firmware, CBUS RD error */
        uint64_t np_sbus_wr               : 1;	/* set by 8051 firmware, SBUS WR error */
        uint64_t np_sbus_rd               : 1;	/* set by 8051 firmware, SBUS RD error */
        uint64_t np_tuning                : 1;	/* set by 8051 firmware, tuning error */
        uint64_t np_lane                  : 1;	/* set by 8051 firmware, lane error */
        uint64_t heartbeat_bus_cmd        : 1;	/* set if bus command timeout seen by the 8051 */
        uint64_t heartbeat_pc_idle        : 1;	/* set if PC for the 8051 not making forward progress */
        uint64_t iram_sbe                 : 1;	/* Instruction RAM SBE */
        uint64_t iram_mbe                 : 1;	/* Instruction RAM MBE */
        uint64_t edram_sbe                : 1;	/* external data RAM SBE */
        uint64_t edram_mbe                : 1;	/* external data RAM MBE */
        uint64_t idram_sbe                : 1;	/* internal data RAM SBE */
        uint64_t idram_mbe                : 1;	/* internal data RAM MBE */
        uint64_t undefine_63_17           :47;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_err_hss_msk_desc_t;

typedef union ar_np_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t np_checksum              : 1;	/* set by 8051 firmware, checksum error */
        uint64_t np_spico                 : 1;	/* set by 8051 firmware, SPICO error */
        uint64_t np_cbus_wr               : 1;	/* set by 8051 firmware, CBUS WR error */
        uint64_t np_cbus_rd               : 1;	/* set by 8051 firmware, CBUS RD error */
        uint64_t np_sbus_wr               : 1;	/* set by 8051 firmware, SBUS WR error */
        uint64_t np_sbus_rd               : 1;	/* set by 8051 firmware, SBUS RD error */
        uint64_t np_tuning                : 1;	/* set by 8051 firmware, tuning error */
        uint64_t np_lane                  : 1;	/* set by 8051 firmware, lane error */
        uint64_t heartbeat_bus_cmd        : 1;	/* set if bus command timeout seen by the 8051 */
        uint64_t heartbeat_pc_idle        : 1;	/* set if PC for the 8051 not making forward progress */
        uint64_t iram_sbe                 : 1;	/* Instruction RAM SBE */
        uint64_t iram_mbe                 : 1;	/* Instruction RAM MBE */
        uint64_t edram_sbe                : 1;	/* external data RAM SBE */
        uint64_t edram_mbe                : 1;	/* external data RAM MBE */
        uint64_t idram_sbe                : 1;	/* internal data RAM SBE */
        uint64_t idram_mbe                : 1;	/* internal data RAM MBE */
        uint64_t undefine_63_17           :47;	/* undefined */
    };
    uint64_t qwords[1];
} ar_np_err_first_flg_desc_t;

typedef union ar_np_cfg_req_stream_ld_dp_iram_desc {
    struct {
        // QW0
        uint64_t data_byte0               : 8;	/* Data Byte 0 to be written/read */
        uint64_t data_byte1               : 8;	/* Data Byte 1 to be written/read */
        uint64_t data_byte2               : 8;	/* Data Byte 2 to be written/read */
        uint64_t data_byte3               : 8;	/* Data Byte 3 to be written/read */
        uint64_t data_byte4               : 8;	/* Data Byte 4 to be written/read */
        uint64_t data_byte5               : 8;	/* Data Byte 5 to be written/read */
        uint64_t data_byte6               : 8;	/* Data Byte 6 to be written/read */
        uint64_t data_byte7               : 8;	/* Data Byte 7 to be written/read */
    };
    uint64_t qwords[1];
} ar_np_cfg_req_stream_ld_dp_iram_desc_t;

typedef union ar_np_cfg_req_stream_ld_dp_dram_desc {
    struct {
        // QW0
        uint64_t data_byte0               : 8;	/* Data Byte 0 to be written/read */
        uint64_t data_byte1               : 8;	/* Data Byte 1 to be written/read */
        uint64_t data_byte2               : 8;	/* Data Byte 2 to be written/read */
        uint64_t data_byte3               : 8;	/* Data Byte 3 to be written/read */
        uint64_t data_byte4               : 8;	/* Data Byte 4 to be written/read */
        uint64_t data_byte5               : 8;	/* Data Byte 5 to be written/read */
        uint64_t data_byte6               : 8;	/* Data Byte 6 to be written/read */
        uint64_t data_byte7               : 8;	/* Data Byte 7 to be written/read */
    };
    uint64_t qwords[1];
} ar_np_cfg_req_stream_ld_dp_dram_desc_t;


#endif
