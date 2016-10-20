/******************************************************************************
 * COPYRIGHT CRAY INC. ar_np_mmrs_h.h
 * FILE: ar_np_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:01 2014
 ******************************************************************************/

#ifndef _AR_NP_MMRS_H_H_
#define _AR_NP_MMRS_H_H_

#ifdef __GNUC__
#define _unused __attribute__((unused))
#else
#define _unused
#endif

#ifndef _GENERIC_MMRD_T_
#define _GENERIC_MMRD_T_
typedef struct {
	char* _name;		/* Field name */
	uint32_t _bpos;		/* Field bit postion */
	uint64_t _mask;		/* Field bit mask */
} generic_mmrd_t;
#endif

#ifndef _ERRCAT_MMRD_T_
#define _ERRCAT_MMRD_T_
typedef struct {
	char* _name;		/* Field name */
	uint32_t _bpos;		/* Field bit postion */
	uint32_t _ec;		/* Field error category */
} errcat_mmrd_t;
#endif

#ifndef _GENERIC_MMR_T_
#define _GENERIC_MMR_T_
typedef struct {
	char* _name;		/* MMR name */
	uint64_t _addr;		/* MMR address */
	int _size;		/* Size in bytes of MMR */
	int _depth;		/* Number of MMR instances */
	const generic_mmrd_t *_info;	/* MMR detail */
} generic_mmr_t;
#endif

static const generic_mmr_t* _ar_np_mmrs[] _unused;	/* NP Array */

/*
 *  AR NP MMR DETAIL DECLARATIONS
 */
static const generic_mmrd_t _ar_np_cfg_detail[] = {
    { "RST_RAM_CTRL", AR_NP_CFG_RST_RAM_CTRL_BP, AR_NP_CFG_RST_RAM_CTRL_MASK },
    { "RST_SFR", AR_NP_CFG_RST_SFR_BP, AR_NP_CFG_RST_SFR_MASK },
    { "RST_PROC", AR_NP_CFG_RST_PROC_BP, AR_NP_CFG_RST_PROC_MASK },
    { "STOP_SBUS_SPICO", AR_NP_CFG_STOP_SBUS_SPICO_BP, AR_NP_CFG_STOP_SBUS_SPICO_MASK },
    { "CLKGEN_SPICO", AR_NP_CFG_CLKGEN_SPICO_BP, AR_NP_CFG_CLKGEN_SPICO_MASK },
    { "CLKGEN_CBUS_OUT", AR_NP_CFG_CLKGEN_CBUS_OUT_BP, AR_NP_CFG_CLKGEN_CBUS_OUT_MASK },
    { "CLKGEN_CBUS", AR_NP_CFG_CLKGEN_CBUS_BP, AR_NP_CFG_CLKGEN_CBUS_MASK },
    { "CLKGEN_PROC", AR_NP_CFG_CLKGEN_PROC_BP, AR_NP_CFG_CLKGEN_PROC_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_dbg_sfr_access_detail[] = {
    { "SFR_REQ_DATA_VALID", AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID_BP, AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID_MASK },
    { "SFR_REQ", AR_NP_DBG_SFR_ACCESS_SFR_REQ_BP, AR_NP_DBG_SFR_ACCESS_SFR_REQ_MASK },
    { "SFR_WT_ENA", AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA_BP, AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA_MASK },
    { "SFR_WT_DATA", AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA_BP, AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA_MASK },
    { "SFR_RD_DATA", AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA_BP, AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA_MASK },
    { "SFR_ADDR", AR_NP_DBG_SFR_ACCESS_SFR_ADDR_BP, AR_NP_DBG_SFR_ACCESS_SFR_ADDR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_dbg_processor_detail[] = {
    { "DEBUGACS", AR_NP_DBG_PROCESSOR_DEBUGACS_BP, AR_NP_DBG_PROCESSOR_DEBUGACS_MASK },
    { "CODERUN", AR_NP_DBG_PROCESSOR_CODERUN_BP, AR_NP_DBG_PROCESSOR_CODERUN_MASK },
    { "HALT_PROC_CLK", AR_NP_DBG_PROCESSOR_HALT_PROC_CLK_BP, AR_NP_DBG_PROCESSOR_HALT_PROC_CLK_MASK },
    { "ENA_INT", AR_NP_DBG_PROCESSOR_ENA_INT_BP, AR_NP_DBG_PROCESSOR_ENA_INT_MASK },
    { "INTS", AR_NP_DBG_PROCESSOR_INTS_BP, AR_NP_DBG_PROCESSOR_INTS_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_cfg_req_sbus_detail[] = {
    { "EXE", AR_NP_CFG_REQ_SBUS_EXE_BP, AR_NP_CFG_REQ_SBUS_EXE_MASK },
    { "DATA", AR_NP_CFG_REQ_SBUS_DATA_BP, AR_NP_CFG_REQ_SBUS_DATA_MASK },
    { "CMD", AR_NP_CFG_REQ_SBUS_CMD_BP, AR_NP_CFG_REQ_SBUS_CMD_MASK },
    { "DATA_ADDR", AR_NP_CFG_REQ_SBUS_DATA_ADDR_BP, AR_NP_CFG_REQ_SBUS_DATA_ADDR_MASK },
    { "RCV_ADDR", AR_NP_CFG_REQ_SBUS_RCV_ADDR_BP, AR_NP_CFG_REQ_SBUS_RCV_ADDR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_cfg_rsp_sbus_detail[] = {
    { "DATA_VLD_MODE_PROC", AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC_BP, AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC_MASK },
    { "DATA_VLD_MODE_MMR", AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR_BP, AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR_MASK },
    { "DONE", AR_NP_CFG_RSP_SBUS_DONE_BP, AR_NP_CFG_RSP_SBUS_DONE_MASK },
    { "DATA_OUT", AR_NP_CFG_RSP_SBUS_DATA_OUT_BP, AR_NP_CFG_RSP_SBUS_DATA_OUT_MASK },
    { "RCV_DATA_VALID", AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID_BP, AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID_MASK },
    { "RESULT_CODE", AR_NP_CFG_RSP_SBUS_RESULT_CODE_BP, AR_NP_CFG_RSP_SBUS_RESULT_CODE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_cfg_req_cbus_detail[] = {
    { "EXE", AR_NP_CFG_REQ_CBUS_EXE_BP, AR_NP_CFG_REQ_CBUS_EXE_MASK },
    { "DATA", AR_NP_CFG_REQ_CBUS_DATA_BP, AR_NP_CFG_REQ_CBUS_DATA_MASK },
    { "CMD", AR_NP_CFG_REQ_CBUS_CMD_BP, AR_NP_CFG_REQ_CBUS_CMD_MASK },
    { "DATA_ADDR", AR_NP_CFG_REQ_CBUS_DATA_ADDR_BP, AR_NP_CFG_REQ_CBUS_DATA_ADDR_MASK },
    { "RCV_ADDR", AR_NP_CFG_REQ_CBUS_RCV_ADDR_BP, AR_NP_CFG_REQ_CBUS_RCV_ADDR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_cfg_rsp_cbus_detail[] = {
    { "DATA_VLD_MODE_PROC", AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC_BP, AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC_MASK },
    { "DATA_VLD_MODE_MMR", AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR_BP, AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR_MASK },
    { "DONE", AR_NP_CFG_RSP_CBUS_DONE_BP, AR_NP_CFG_RSP_CBUS_DONE_MASK },
    { "DATA_OUT", AR_NP_CFG_RSP_CBUS_DATA_OUT_BP, AR_NP_CFG_RSP_CBUS_DATA_OUT_MASK },
    { "RCV_DATA_VALID", AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID_BP, AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID_MASK },
    { "RESULT_CODE", AR_NP_CFG_RSP_CBUS_RESULT_CODE_BP, AR_NP_CFG_RSP_CBUS_RESULT_CODE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_sts_therm_sensor_req_detail[] = {
    { "VOLTMODE", AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE_BP, AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE_MASK },
    { "WRITE", AR_NP_STS_THERM_SENSOR_REQ_WRITE_BP, AR_NP_STS_THERM_SENSOR_REQ_WRITE_MASK },
    { "START", AR_NP_STS_THERM_SENSOR_REQ_START_BP, AR_NP_STS_THERM_SENSOR_REQ_START_MASK },
    { "RESET", AR_NP_STS_THERM_SENSOR_REQ_RESET_BP, AR_NP_STS_THERM_SENSOR_REQ_RESET_MASK },
    { "READ", AR_NP_STS_THERM_SENSOR_REQ_READ_BP, AR_NP_STS_THERM_SENSOR_REQ_READ_MASK },
    { "ADDR", AR_NP_STS_THERM_SENSOR_REQ_ADDR_BP, AR_NP_STS_THERM_SENSOR_REQ_ADDR_MASK },
    { "DATA_IN", AR_NP_STS_THERM_SENSOR_REQ_DATA_IN_BP, AR_NP_STS_THERM_SENSOR_REQ_DATA_IN_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_sts_therm_sensor_rsp_detail[] = {
    { "WRITE_ACK", AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK_BP, AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK_MASK },
    { "VALID", AR_NP_STS_THERM_SENSOR_RSP_VALID_BP, AR_NP_STS_THERM_SENSOR_RSP_VALID_MASK },
    { "READ_ACK", AR_NP_STS_THERM_SENSOR_RSP_READ_ACK_BP, AR_NP_STS_THERM_SENSOR_RSP_READ_ACK_MASK },
    { "VALUE", AR_NP_STS_THERM_SENSOR_RSP_VALUE_BP, AR_NP_STS_THERM_SENSOR_RSP_VALUE_MASK },
    { "DATA_OUT", AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT_BP, AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_dbg_errinj_ecc_detail[] = {
    { "CLR_ERR", AR_NP_DBG_ERRINJ_ECC_CLR_ERR_BP, AR_NP_DBG_ERRINJ_ECC_CLR_ERR_MASK },
    { "ADDRESS", AR_NP_DBG_ERRINJ_ECC_ADDRESS_BP, AR_NP_DBG_ERRINJ_ECC_ADDRESS_MASK },
    { "CHECKBYTE", AR_NP_DBG_ERRINJ_ECC_CHECKBYTE_BP, AR_NP_DBG_ERRINJ_ECC_CHECKBYTE_MASK },
    { "RAMSELECT", AR_NP_DBG_ERRINJ_ECC_RAMSELECT_BP, AR_NP_DBG_ERRINJ_ECC_RAMSELECT_MASK },
    { "MODE", AR_NP_DBG_ERRINJ_ECC_MODE_BP, AR_NP_DBG_ERRINJ_ECC_MODE_MASK },
    { "ENABLE", AR_NP_DBG_ERRINJ_ECC_ENABLE_BP, AR_NP_DBG_ERRINJ_ECC_ENABLE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_info_iram_detail[] = {
    { "MBE_SYND", AR_NP_ERR_INFO_IRAM_MBE_SYND_BP, AR_NP_ERR_INFO_IRAM_MBE_SYND_MASK },
    { "SBE_SYND", AR_NP_ERR_INFO_IRAM_SBE_SYND_BP, AR_NP_ERR_INFO_IRAM_SBE_SYND_MASK },
    { "MMR_CREATED_MBE", AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE_BP, AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE_MASK },
    { "MMR_CREATED_SBE", AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE_BP, AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE_MASK },
    { "MBE", AR_NP_ERR_INFO_IRAM_MBE_BP, AR_NP_ERR_INFO_IRAM_MBE_MASK },
    { "SBE", AR_NP_ERR_INFO_IRAM_SBE_BP, AR_NP_ERR_INFO_IRAM_SBE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_info_dram_detail[] = {
    { "MBE_SYND", AR_NP_ERR_INFO_DRAM_MBE_SYND_BP, AR_NP_ERR_INFO_DRAM_MBE_SYND_MASK },
    { "SBE_SYND", AR_NP_ERR_INFO_DRAM_SBE_SYND_BP, AR_NP_ERR_INFO_DRAM_SBE_SYND_MASK },
    { "MMR_CREATED_MBE", AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE_BP, AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE_MASK },
    { "MMR_CREATED_SBE", AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE_BP, AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE_MASK },
    { "MBE", AR_NP_ERR_INFO_DRAM_MBE_BP, AR_NP_ERR_INFO_DRAM_MBE_MASK },
    { "SBE", AR_NP_ERR_INFO_DRAM_SBE_BP, AR_NP_ERR_INFO_DRAM_SBE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_info_idram_detail[] = {
    { "MBE_SYND", AR_NP_ERR_INFO_IDRAM_MBE_SYND_BP, AR_NP_ERR_INFO_IDRAM_MBE_SYND_MASK },
    { "SBE_SYND", AR_NP_ERR_INFO_IDRAM_SBE_SYND_BP, AR_NP_ERR_INFO_IDRAM_SBE_SYND_MASK },
    { "MMR_CREATED_MBE", AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE_BP, AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE_MASK },
    { "MMR_CREATED_SBE", AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE_BP, AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE_MASK },
    { "MBE", AR_NP_ERR_INFO_IDRAM_MBE_BP, AR_NP_ERR_INFO_IDRAM_MBE_MASK },
    { "SBE", AR_NP_ERR_INFO_IDRAM_SBE_BP, AR_NP_ERR_INFO_IDRAM_SBE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_info_cnt_iram_detail[] = {
    { "MBE_COUNT", AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT_BP, AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT_MASK },
    { "SBE_COUNT", AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT_BP, AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_info_cnt_dram_detail[] = {
    { "MBE_COUNT", AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT_BP, AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT_MASK },
    { "SBE_COUNT", AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT_BP, AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_info_cnt_idram_detail[] = {
    { "MBE_COUNT", AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT_BP, AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT_MASK },
    { "SBE_COUNT", AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT_BP, AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_deb_mon_sfr0_detail[] = {
    { "CBUS_DATA0", AR_NP_DEB_MON_SFR0_CBUS_DATA0_BP, AR_NP_DEB_MON_SFR0_CBUS_DATA0_MASK },
    { "CBUS_DATA1", AR_NP_DEB_MON_SFR0_CBUS_DATA1_BP, AR_NP_DEB_MON_SFR0_CBUS_DATA1_MASK },
    { "CBUS_DATA2", AR_NP_DEB_MON_SFR0_CBUS_DATA2_BP, AR_NP_DEB_MON_SFR0_CBUS_DATA2_MASK },
    { "CBUS_DATA3", AR_NP_DEB_MON_SFR0_CBUS_DATA3_BP, AR_NP_DEB_MON_SFR0_CBUS_DATA3_MASK },
    { "CBUS_DADDR", AR_NP_DEB_MON_SFR0_CBUS_DADDR_BP, AR_NP_DEB_MON_SFR0_CBUS_DADDR_MASK },
    { "CBUS_RADDR", AR_NP_DEB_MON_SFR0_CBUS_RADDR_BP, AR_NP_DEB_MON_SFR0_CBUS_RADDR_MASK },
    { "CBUS_COMMD", AR_NP_DEB_MON_SFR0_CBUS_COMMD_BP, AR_NP_DEB_MON_SFR0_CBUS_COMMD_MASK },
    { "CBUS_MISCS", AR_NP_DEB_MON_SFR0_CBUS_MISCS_BP, AR_NP_DEB_MON_SFR0_CBUS_MISCS_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_deb_mon_sfr1_detail[] = {
    { "SBUS_DATA0", AR_NP_DEB_MON_SFR1_SBUS_DATA0_BP, AR_NP_DEB_MON_SFR1_SBUS_DATA0_MASK },
    { "SBUS_DATA1", AR_NP_DEB_MON_SFR1_SBUS_DATA1_BP, AR_NP_DEB_MON_SFR1_SBUS_DATA1_MASK },
    { "SBUS_DATA2", AR_NP_DEB_MON_SFR1_SBUS_DATA2_BP, AR_NP_DEB_MON_SFR1_SBUS_DATA2_MASK },
    { "SBUS_DATA3", AR_NP_DEB_MON_SFR1_SBUS_DATA3_BP, AR_NP_DEB_MON_SFR1_SBUS_DATA3_MASK },
    { "SBUS_DADDR", AR_NP_DEB_MON_SFR1_SBUS_DADDR_BP, AR_NP_DEB_MON_SFR1_SBUS_DADDR_MASK },
    { "SBUS_RADDR", AR_NP_DEB_MON_SFR1_SBUS_RADDR_BP, AR_NP_DEB_MON_SFR1_SBUS_RADDR_MASK },
    { "SBUS_COMMD", AR_NP_DEB_MON_SFR1_SBUS_COMMD_BP, AR_NP_DEB_MON_SFR1_SBUS_COMMD_MASK },
    { "SBUS_MISCS", AR_NP_DEB_MON_SFR1_SBUS_MISCS_BP, AR_NP_DEB_MON_SFR1_SBUS_MISCS_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_deb_mon_sfr2_detail[] = {
    { "TMP08", AR_NP_DEB_MON_SFR2_TMP08_BP, AR_NP_DEB_MON_SFR2_TMP08_MASK },
    { "TMP07", AR_NP_DEB_MON_SFR2_TMP07_BP, AR_NP_DEB_MON_SFR2_TMP07_MASK },
    { "TMP06", AR_NP_DEB_MON_SFR2_TMP06_BP, AR_NP_DEB_MON_SFR2_TMP06_MASK },
    { "TMP05", AR_NP_DEB_MON_SFR2_TMP05_BP, AR_NP_DEB_MON_SFR2_TMP05_MASK },
    { "TMP04", AR_NP_DEB_MON_SFR2_TMP04_BP, AR_NP_DEB_MON_SFR2_TMP04_MASK },
    { "TMP03", AR_NP_DEB_MON_SFR2_TMP03_BP, AR_NP_DEB_MON_SFR2_TMP03_MASK },
    { "TMP02", AR_NP_DEB_MON_SFR2_TMP02_BP, AR_NP_DEB_MON_SFR2_TMP02_MASK },
    { "TMP01", AR_NP_DEB_MON_SFR2_TMP01_BP, AR_NP_DEB_MON_SFR2_TMP01_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_deb_mon_sfr3_detail[] = {
    { "TMP16", AR_NP_DEB_MON_SFR3_TMP16_BP, AR_NP_DEB_MON_SFR3_TMP16_MASK },
    { "TMP15", AR_NP_DEB_MON_SFR3_TMP15_BP, AR_NP_DEB_MON_SFR3_TMP15_MASK },
    { "TMP14", AR_NP_DEB_MON_SFR3_TMP14_BP, AR_NP_DEB_MON_SFR3_TMP14_MASK },
    { "TMP13", AR_NP_DEB_MON_SFR3_TMP13_BP, AR_NP_DEB_MON_SFR3_TMP13_MASK },
    { "TMP12", AR_NP_DEB_MON_SFR3_TMP12_BP, AR_NP_DEB_MON_SFR3_TMP12_MASK },
    { "TMP11", AR_NP_DEB_MON_SFR3_TMP11_BP, AR_NP_DEB_MON_SFR3_TMP11_MASK },
    { "TMP10", AR_NP_DEB_MON_SFR3_TMP10_BP, AR_NP_DEB_MON_SFR3_TMP10_MASK },
    { "TMP09", AR_NP_DEB_MON_SFR3_TMP09_BP, AR_NP_DEB_MON_SFR3_TMP09_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_deb_mon_sfr4_detail[] = {
    { "CBUS_MISCS_RD", AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD_BP, AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD_MASK },
    { "SBUS_MISCS_RD", AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD_BP, AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD_MASK },
    { "PORT3", AR_NP_DEB_MON_SFR4_PORT3_BP, AR_NP_DEB_MON_SFR4_PORT3_MASK },
    { "PORT2", AR_NP_DEB_MON_SFR4_PORT2_BP, AR_NP_DEB_MON_SFR4_PORT2_MASK },
    { "PORT1", AR_NP_DEB_MON_SFR4_PORT1_BP, AR_NP_DEB_MON_SFR4_PORT1_MASK },
    { "PORT0", AR_NP_DEB_MON_SFR4_PORT0_BP, AR_NP_DEB_MON_SFR4_PORT0_MASK },
    { "TMP18", AR_NP_DEB_MON_SFR4_TMP18_BP, AR_NP_DEB_MON_SFR4_TMP18_MASK },
    { "TMP17", AR_NP_DEB_MON_SFR4_TMP17_BP, AR_NP_DEB_MON_SFR4_TMP17_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_deb_mon_sfr5_detail[] = {
    { "CBUS_DATA3_RD", AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD_BP, AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD_MASK },
    { "CBUS_DATA2_RD", AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD_BP, AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD_MASK },
    { "CBUS_DATA1_RD", AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD_BP, AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD_MASK },
    { "CBUS_DATA0_RD", AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD_BP, AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD_MASK },
    { "SBUS_DATA3_RD", AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD_BP, AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD_MASK },
    { "SBUS_DATA2_RD", AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD_BP, AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD_MASK },
    { "SBUS_DATA1_RD", AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD_BP, AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD_MASK },
    { "SBUS_DATA0_RD", AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD_BP, AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_deb_mon_heatbeat_cnt_detail[] = {
    { "RESET_SBUS_CBUS_CMD_CNT", AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT_BP, AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT_MASK },
    { "RESET_PRG_ADDR_CHNANGE_CNT", AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT_BP, AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT_MASK },
    { "PRG_ADDR_CHANGE_CNT", AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT_BP, AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT_MASK },
    { "SBUS_CBUS_CMD_CNT", AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT_BP, AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_sts_therm_sensor_cfg_detail[] = {
    { "CLK_DIVIDE", AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE_BP, AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_flg_detail[] = {
    { "IDRAM_MBE", AR_NP_ERR_FLG_IDRAM_MBE_BP, AR_NP_ERR_FLG_IDRAM_MBE_MASK },
    { "IDRAM_SBE", AR_NP_ERR_FLG_IDRAM_SBE_BP, AR_NP_ERR_FLG_IDRAM_SBE_MASK },
    { "EDRAM_MBE", AR_NP_ERR_FLG_EDRAM_MBE_BP, AR_NP_ERR_FLG_EDRAM_MBE_MASK },
    { "EDRAM_SBE", AR_NP_ERR_FLG_EDRAM_SBE_BP, AR_NP_ERR_FLG_EDRAM_SBE_MASK },
    { "IRAM_MBE", AR_NP_ERR_FLG_IRAM_MBE_BP, AR_NP_ERR_FLG_IRAM_MBE_MASK },
    { "IRAM_SBE", AR_NP_ERR_FLG_IRAM_SBE_BP, AR_NP_ERR_FLG_IRAM_SBE_MASK },
    { "HEARTBEAT_PC_IDLE", AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE_BP, AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE_MASK },
    { "HEARTBEAT_BUS_CMD", AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD_BP, AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD_MASK },
    { "NP_LANE", AR_NP_ERR_FLG_NP_LANE_BP, AR_NP_ERR_FLG_NP_LANE_MASK },
    { "NP_TUNING", AR_NP_ERR_FLG_NP_TUNING_BP, AR_NP_ERR_FLG_NP_TUNING_MASK },
    { "NP_SBUS_RD", AR_NP_ERR_FLG_NP_SBUS_RD_BP, AR_NP_ERR_FLG_NP_SBUS_RD_MASK },
    { "NP_SBUS_WR", AR_NP_ERR_FLG_NP_SBUS_WR_BP, AR_NP_ERR_FLG_NP_SBUS_WR_MASK },
    { "NP_CBUS_RD", AR_NP_ERR_FLG_NP_CBUS_RD_BP, AR_NP_ERR_FLG_NP_CBUS_RD_MASK },
    { "NP_CBUS_WR", AR_NP_ERR_FLG_NP_CBUS_WR_BP, AR_NP_ERR_FLG_NP_CBUS_WR_MASK },
    { "NP_SPICO", AR_NP_ERR_FLG_NP_SPICO_BP, AR_NP_ERR_FLG_NP_SPICO_MASK },
    { "NP_CHECKSUM", AR_NP_ERR_FLG_NP_CHECKSUM_BP, AR_NP_ERR_FLG_NP_CHECKSUM_MASK },
    { "DIAG_ONLY", AR_NP_ERR_FLG_DIAG_ONLY_BP, AR_NP_ERR_FLG_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_clr_detail[] = {
    { "IDRAM_MBE", AR_NP_ERR_CLR_IDRAM_MBE_BP, AR_NP_ERR_CLR_IDRAM_MBE_MASK },
    { "IDRAM_SBE", AR_NP_ERR_CLR_IDRAM_SBE_BP, AR_NP_ERR_CLR_IDRAM_SBE_MASK },
    { "EDRAM_MBE", AR_NP_ERR_CLR_EDRAM_MBE_BP, AR_NP_ERR_CLR_EDRAM_MBE_MASK },
    { "EDRAM_SBE", AR_NP_ERR_CLR_EDRAM_SBE_BP, AR_NP_ERR_CLR_EDRAM_SBE_MASK },
    { "IRAM_MBE", AR_NP_ERR_CLR_IRAM_MBE_BP, AR_NP_ERR_CLR_IRAM_MBE_MASK },
    { "IRAM_SBE", AR_NP_ERR_CLR_IRAM_SBE_BP, AR_NP_ERR_CLR_IRAM_SBE_MASK },
    { "HEARTBEAT_PC_IDLE", AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE_BP, AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE_MASK },
    { "HEARTBEAT_BUS_CMD", AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD_BP, AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD_MASK },
    { "NP_LANE", AR_NP_ERR_CLR_NP_LANE_BP, AR_NP_ERR_CLR_NP_LANE_MASK },
    { "NP_TUNING", AR_NP_ERR_CLR_NP_TUNING_BP, AR_NP_ERR_CLR_NP_TUNING_MASK },
    { "NP_SBUS_RD", AR_NP_ERR_CLR_NP_SBUS_RD_BP, AR_NP_ERR_CLR_NP_SBUS_RD_MASK },
    { "NP_SBUS_WR", AR_NP_ERR_CLR_NP_SBUS_WR_BP, AR_NP_ERR_CLR_NP_SBUS_WR_MASK },
    { "NP_CBUS_RD", AR_NP_ERR_CLR_NP_CBUS_RD_BP, AR_NP_ERR_CLR_NP_CBUS_RD_MASK },
    { "NP_CBUS_WR", AR_NP_ERR_CLR_NP_CBUS_WR_BP, AR_NP_ERR_CLR_NP_CBUS_WR_MASK },
    { "NP_SPICO", AR_NP_ERR_CLR_NP_SPICO_BP, AR_NP_ERR_CLR_NP_SPICO_MASK },
    { "NP_CHECKSUM", AR_NP_ERR_CLR_NP_CHECKSUM_BP, AR_NP_ERR_CLR_NP_CHECKSUM_MASK },
    { "DIAG_ONLY", AR_NP_ERR_CLR_DIAG_ONLY_BP, AR_NP_ERR_CLR_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_hss_msk_detail[] = {
    { "IDRAM_MBE", AR_NP_ERR_HSS_MSK_IDRAM_MBE_BP, AR_NP_ERR_HSS_MSK_IDRAM_MBE_MASK },
    { "IDRAM_SBE", AR_NP_ERR_HSS_MSK_IDRAM_SBE_BP, AR_NP_ERR_HSS_MSK_IDRAM_SBE_MASK },
    { "EDRAM_MBE", AR_NP_ERR_HSS_MSK_EDRAM_MBE_BP, AR_NP_ERR_HSS_MSK_EDRAM_MBE_MASK },
    { "EDRAM_SBE", AR_NP_ERR_HSS_MSK_EDRAM_SBE_BP, AR_NP_ERR_HSS_MSK_EDRAM_SBE_MASK },
    { "IRAM_MBE", AR_NP_ERR_HSS_MSK_IRAM_MBE_BP, AR_NP_ERR_HSS_MSK_IRAM_MBE_MASK },
    { "IRAM_SBE", AR_NP_ERR_HSS_MSK_IRAM_SBE_BP, AR_NP_ERR_HSS_MSK_IRAM_SBE_MASK },
    { "HEARTBEAT_PC_IDLE", AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE_BP, AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE_MASK },
    { "HEARTBEAT_BUS_CMD", AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD_BP, AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD_MASK },
    { "NP_LANE", AR_NP_ERR_HSS_MSK_NP_LANE_BP, AR_NP_ERR_HSS_MSK_NP_LANE_MASK },
    { "NP_TUNING", AR_NP_ERR_HSS_MSK_NP_TUNING_BP, AR_NP_ERR_HSS_MSK_NP_TUNING_MASK },
    { "NP_SBUS_RD", AR_NP_ERR_HSS_MSK_NP_SBUS_RD_BP, AR_NP_ERR_HSS_MSK_NP_SBUS_RD_MASK },
    { "NP_SBUS_WR", AR_NP_ERR_HSS_MSK_NP_SBUS_WR_BP, AR_NP_ERR_HSS_MSK_NP_SBUS_WR_MASK },
    { "NP_CBUS_RD", AR_NP_ERR_HSS_MSK_NP_CBUS_RD_BP, AR_NP_ERR_HSS_MSK_NP_CBUS_RD_MASK },
    { "NP_CBUS_WR", AR_NP_ERR_HSS_MSK_NP_CBUS_WR_BP, AR_NP_ERR_HSS_MSK_NP_CBUS_WR_MASK },
    { "NP_SPICO", AR_NP_ERR_HSS_MSK_NP_SPICO_BP, AR_NP_ERR_HSS_MSK_NP_SPICO_MASK },
    { "NP_CHECKSUM", AR_NP_ERR_HSS_MSK_NP_CHECKSUM_BP, AR_NP_ERR_HSS_MSK_NP_CHECKSUM_MASK },
    { "DIAG_ONLY", AR_NP_ERR_HSS_MSK_DIAG_ONLY_BP, AR_NP_ERR_HSS_MSK_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_np_err_first_flg_detail[] = {
    { "IDRAM_MBE", AR_NP_ERR_FIRST_FLG_IDRAM_MBE_BP, AR_NP_ERR_FIRST_FLG_IDRAM_MBE_MASK },
    { "IDRAM_SBE", AR_NP_ERR_FIRST_FLG_IDRAM_SBE_BP, AR_NP_ERR_FIRST_FLG_IDRAM_SBE_MASK },
    { "EDRAM_MBE", AR_NP_ERR_FIRST_FLG_EDRAM_MBE_BP, AR_NP_ERR_FIRST_FLG_EDRAM_MBE_MASK },
    { "EDRAM_SBE", AR_NP_ERR_FIRST_FLG_EDRAM_SBE_BP, AR_NP_ERR_FIRST_FLG_EDRAM_SBE_MASK },
    { "IRAM_MBE", AR_NP_ERR_FIRST_FLG_IRAM_MBE_BP, AR_NP_ERR_FIRST_FLG_IRAM_MBE_MASK },
    { "IRAM_SBE", AR_NP_ERR_FIRST_FLG_IRAM_SBE_BP, AR_NP_ERR_FIRST_FLG_IRAM_SBE_MASK },
    { "HEARTBEAT_PC_IDLE", AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE_BP, AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE_MASK },
    { "HEARTBEAT_BUS_CMD", AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD_BP, AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD_MASK },
    { "NP_LANE", AR_NP_ERR_FIRST_FLG_NP_LANE_BP, AR_NP_ERR_FIRST_FLG_NP_LANE_MASK },
    { "NP_TUNING", AR_NP_ERR_FIRST_FLG_NP_TUNING_BP, AR_NP_ERR_FIRST_FLG_NP_TUNING_MASK },
    { "NP_SBUS_RD", AR_NP_ERR_FIRST_FLG_NP_SBUS_RD_BP, AR_NP_ERR_FIRST_FLG_NP_SBUS_RD_MASK },
    { "NP_SBUS_WR", AR_NP_ERR_FIRST_FLG_NP_SBUS_WR_BP, AR_NP_ERR_FIRST_FLG_NP_SBUS_WR_MASK },
    { "NP_CBUS_RD", AR_NP_ERR_FIRST_FLG_NP_CBUS_RD_BP, AR_NP_ERR_FIRST_FLG_NP_CBUS_RD_MASK },
    { "NP_CBUS_WR", AR_NP_ERR_FIRST_FLG_NP_CBUS_WR_BP, AR_NP_ERR_FIRST_FLG_NP_CBUS_WR_MASK },
    { "NP_SPICO", AR_NP_ERR_FIRST_FLG_NP_SPICO_BP, AR_NP_ERR_FIRST_FLG_NP_SPICO_MASK },
    { "NP_CHECKSUM", AR_NP_ERR_FIRST_FLG_NP_CHECKSUM_BP, AR_NP_ERR_FIRST_FLG_NP_CHECKSUM_MASK },
    { "DIAG_ONLY", AR_NP_ERR_FIRST_FLG_DIAG_ONLY_BP, AR_NP_ERR_FIRST_FLG_DIAG_ONLY_MASK },
    { NULL, 0, 0 }
};

/*
 *  AR NP MMR DECLARATIONS
 */
static const generic_mmr_t _ar_np_cfg = {
    "AR_NP_CFG", AR_NP_CFG, 8, 1, _ar_np_cfg_detail
};
static const generic_mmr_t _ar_np_dbg_sfr_access = {
    "AR_NP_DBG_SFR_ACCESS", AR_NP_DBG_SFR_ACCESS, 8, 1, _ar_np_dbg_sfr_access_detail
};
static const generic_mmr_t _ar_np_dbg_processor = {
    "AR_NP_DBG_PROCESSOR", AR_NP_DBG_PROCESSOR, 8, 1, _ar_np_dbg_processor_detail
};
static const generic_mmr_t _ar_np_cfg_req_sbus = {
    "AR_NP_CFG_REQ_SBUS", AR_NP_CFG_REQ_SBUS, 8, 1, _ar_np_cfg_req_sbus_detail
};
static const generic_mmr_t _ar_np_cfg_rsp_sbus = {
    "AR_NP_CFG_RSP_SBUS", AR_NP_CFG_RSP_SBUS, 8, 1, _ar_np_cfg_rsp_sbus_detail
};
static const generic_mmr_t _ar_np_cfg_req_cbus = {
    "AR_NP_CFG_REQ_CBUS", AR_NP_CFG_REQ_CBUS, 8, 1, _ar_np_cfg_req_cbus_detail
};
static const generic_mmr_t _ar_np_cfg_rsp_cbus = {
    "AR_NP_CFG_RSP_CBUS", AR_NP_CFG_RSP_CBUS, 8, 1, _ar_np_cfg_rsp_cbus_detail
};
static const generic_mmr_t _ar_np_sts_therm_sensor_req = {
    "AR_NP_STS_THERM_SENSOR_REQ", AR_NP_STS_THERM_SENSOR_REQ, 8, 1, _ar_np_sts_therm_sensor_req_detail
};
static const generic_mmr_t _ar_np_sts_therm_sensor_rsp = {
    "AR_NP_STS_THERM_SENSOR_RSP", AR_NP_STS_THERM_SENSOR_RSP, 8, 1, _ar_np_sts_therm_sensor_rsp_detail
};
static const generic_mmr_t _ar_np_dbg_errinj_ecc = {
    "AR_NP_DBG_ERRINJ_ECC", AR_NP_DBG_ERRINJ_ECC, 8, 1, _ar_np_dbg_errinj_ecc_detail
};
static const generic_mmr_t _ar_np_err_info_iram = {
    "AR_NP_ERR_INFO_IRAM", AR_NP_ERR_INFO_IRAM, 8, 1, _ar_np_err_info_iram_detail
};
static const generic_mmr_t _ar_np_err_info_dram = {
    "AR_NP_ERR_INFO_DRAM", AR_NP_ERR_INFO_DRAM, 8, 1, _ar_np_err_info_dram_detail
};
static const generic_mmr_t _ar_np_err_info_idram = {
    "AR_NP_ERR_INFO_IDRAM", AR_NP_ERR_INFO_IDRAM, 8, 1, _ar_np_err_info_idram_detail
};
static const generic_mmr_t _ar_np_err_info_cnt_iram = {
    "AR_NP_ERR_INFO_CNT_IRAM", AR_NP_ERR_INFO_CNT_IRAM, 8, 1, _ar_np_err_info_cnt_iram_detail
};
static const generic_mmr_t _ar_np_err_info_cnt_dram = {
    "AR_NP_ERR_INFO_CNT_DRAM", AR_NP_ERR_INFO_CNT_DRAM, 8, 1, _ar_np_err_info_cnt_dram_detail
};
static const generic_mmr_t _ar_np_err_info_cnt_idram = {
    "AR_NP_ERR_INFO_CNT_IDRAM", AR_NP_ERR_INFO_CNT_IDRAM, 8, 1, _ar_np_err_info_cnt_idram_detail
};
static const generic_mmr_t _ar_np_deb_mon_sfr0 = {
    "AR_NP_DEB_MON_SFR0", AR_NP_DEB_MON_SFR0, 8, 1, _ar_np_deb_mon_sfr0_detail
};
static const generic_mmr_t _ar_np_deb_mon_sfr1 = {
    "AR_NP_DEB_MON_SFR1", AR_NP_DEB_MON_SFR1, 8, 1, _ar_np_deb_mon_sfr1_detail
};
static const generic_mmr_t _ar_np_deb_mon_sfr2 = {
    "AR_NP_DEB_MON_SFR2", AR_NP_DEB_MON_SFR2, 8, 1, _ar_np_deb_mon_sfr2_detail
};
static const generic_mmr_t _ar_np_deb_mon_sfr3 = {
    "AR_NP_DEB_MON_SFR3", AR_NP_DEB_MON_SFR3, 8, 1, _ar_np_deb_mon_sfr3_detail
};
static const generic_mmr_t _ar_np_deb_mon_sfr4 = {
    "AR_NP_DEB_MON_SFR4", AR_NP_DEB_MON_SFR4, 8, 1, _ar_np_deb_mon_sfr4_detail
};
static const generic_mmr_t _ar_np_deb_mon_sfr5 = {
    "AR_NP_DEB_MON_SFR5", AR_NP_DEB_MON_SFR5, 8, 1, _ar_np_deb_mon_sfr5_detail
};
static const generic_mmr_t _ar_np_deb_mon_heatbeat_cnt = {
    "AR_NP_DEB_MON_HEATBEAT_CNT", AR_NP_DEB_MON_HEATBEAT_CNT, 8, 1, _ar_np_deb_mon_heatbeat_cnt_detail
};
static const generic_mmr_t _ar_np_sts_therm_sensor_cfg = {
    "AR_NP_STS_THERM_SENSOR_CFG", AR_NP_STS_THERM_SENSOR_CFG, 8, 1, _ar_np_sts_therm_sensor_cfg_detail
};
static const generic_mmr_t _ar_np_err_flg = {
    "AR_NP_ERR_FLG", AR_NP_ERR_FLG, 8, 1, _ar_np_err_flg_detail
};
static const generic_mmr_t _ar_np_err_clr = {
    "AR_NP_ERR_CLR", AR_NP_ERR_CLR, 8, 1, _ar_np_err_clr_detail
};
static const generic_mmr_t _ar_np_err_hss_msk = {
    "AR_NP_ERR_HSS_MSK", AR_NP_ERR_HSS_MSK, 8, 1, _ar_np_err_hss_msk_detail
};
static const generic_mmr_t _ar_np_err_first_flg = {
    "AR_NP_ERR_FIRST_FLG", AR_NP_ERR_FIRST_FLG, 8, 1, _ar_np_err_first_flg_detail
};

/*
 *  INSTALL AR NP MMRS
 */
static const generic_mmr_t* _ar_np_mmrs[] _unused = {
    &_ar_np_cfg,
    &_ar_np_dbg_sfr_access,
    &_ar_np_dbg_processor,
    &_ar_np_cfg_req_sbus,
    &_ar_np_cfg_rsp_sbus,
    &_ar_np_cfg_req_cbus,
    &_ar_np_cfg_rsp_cbus,
    &_ar_np_sts_therm_sensor_req,
    &_ar_np_sts_therm_sensor_rsp,
    &_ar_np_dbg_errinj_ecc,
    &_ar_np_err_info_iram,
    &_ar_np_err_info_dram,
    &_ar_np_err_info_idram,
    &_ar_np_err_info_cnt_iram,
    &_ar_np_err_info_cnt_dram,
    &_ar_np_err_info_cnt_idram,
    &_ar_np_deb_mon_sfr0,
    &_ar_np_deb_mon_sfr1,
    &_ar_np_deb_mon_sfr2,
    &_ar_np_deb_mon_sfr3,
    &_ar_np_deb_mon_sfr4,
    &_ar_np_deb_mon_sfr5,
    &_ar_np_deb_mon_heatbeat_cnt,
    &_ar_np_sts_therm_sensor_cfg,
    &_ar_np_err_flg,
    &_ar_np_err_clr,
    &_ar_np_err_hss_msk,
    &_ar_np_err_first_flg,
    NULL
};

#endif
