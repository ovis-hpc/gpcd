/******************************************************************************
 * COPYRIGHT CRAY INC. ar_np_defs.h
 * FILE: ar_np_defs.h
 * Created by v2h.c on Wed Oct  8 14:39:01 2014
 ******************************************************************************/

#ifndef _AR_NP_DEFS_H_
#define _AR_NP_DEFS_H_

#define AR_NP_N_MMRS                                           	30
#define AR_NP_N_DESCS                                          	0

/*
 *  AR NP MMR TABLE ADDRESS DEFINES
 */
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM                        	(AR_NP_BASE+0x0000008000ull)
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_BASE                   	(AR_NP_BASE+0x0000008000ull)
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_SIZE                   	0x0000008000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_LIMIT                  	AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_BASE+AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_SIZE-1
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_N_ENTRY                	4096
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DESC_INCR              	0x00000008ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DESC_N_QUADWORDS       	1
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_ADDR(didx)             	(((didx)*AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DESC_INCR)\
								+ AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_BASE)
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM                        	(AR_NP_BASE+0x0000010000ull)
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_BASE                   	(AR_NP_BASE+0x0000010000ull)
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_SIZE                   	0x0000004000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_LIMIT                  	AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_BASE+AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_SIZE-1
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_N_ENTRY                	2048
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DESC_INCR              	0x00000008ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DESC_N_QUADWORDS       	1
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_ADDR(didx)             	(((didx)*AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DESC_INCR)\
								+ AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_BASE)

/*
 *  AR NP MMR ADDRESS DEFINES
 */
#define AR_NP_CFG                                              	(AR_NP_BASE+0x0000000000ull)
#define AR_NP_CFG_SIZE                                         	0x0000000008ull
#define AR_NP_CFG_LIMIT                                        	AR_NP_CFG+AR_NP_CFG_SIZE-1
#define AR_NP_DBG_SFR_ACCESS                                   	(AR_NP_BASE+0x0000000008ull)
#define AR_NP_DBG_SFR_ACCESS_SIZE                              	0x0000000008ull
#define AR_NP_DBG_SFR_ACCESS_LIMIT                             	AR_NP_DBG_SFR_ACCESS+AR_NP_DBG_SFR_ACCESS_SIZE-1
#define AR_NP_DBG_PROCESSOR                                    	(AR_NP_BASE+0x0000000010ull)
#define AR_NP_DBG_PROCESSOR_SIZE                               	0x0000000008ull
#define AR_NP_DBG_PROCESSOR_LIMIT                              	AR_NP_DBG_PROCESSOR+AR_NP_DBG_PROCESSOR_SIZE-1
#define AR_NP_CFG_REQ_SBUS                                     	(AR_NP_BASE+0x0000000018ull)
#define AR_NP_CFG_REQ_SBUS_SIZE                                	0x0000000008ull
#define AR_NP_CFG_REQ_SBUS_LIMIT                               	AR_NP_CFG_REQ_SBUS+AR_NP_CFG_REQ_SBUS_SIZE-1
#define AR_NP_CFG_RSP_SBUS                                     	(AR_NP_BASE+0x0000000020ull)
#define AR_NP_CFG_RSP_SBUS_SIZE                                	0x0000000008ull
#define AR_NP_CFG_RSP_SBUS_LIMIT                               	AR_NP_CFG_RSP_SBUS+AR_NP_CFG_RSP_SBUS_SIZE-1
#define AR_NP_CFG_REQ_CBUS                                     	(AR_NP_BASE+0x0000000028ull)
#define AR_NP_CFG_REQ_CBUS_SIZE                                	0x0000000008ull
#define AR_NP_CFG_REQ_CBUS_LIMIT                               	AR_NP_CFG_REQ_CBUS+AR_NP_CFG_REQ_CBUS_SIZE-1
#define AR_NP_CFG_RSP_CBUS                                     	(AR_NP_BASE+0x0000000030ull)
#define AR_NP_CFG_RSP_CBUS_SIZE                                	0x0000000008ull
#define AR_NP_CFG_RSP_CBUS_LIMIT                               	AR_NP_CFG_RSP_CBUS+AR_NP_CFG_RSP_CBUS_SIZE-1
#define AR_NP_STS_THERM_SENSOR_REQ                             	(AR_NP_BASE+0x0000000048ull)
#define AR_NP_STS_THERM_SENSOR_REQ_SIZE                        	0x0000000008ull
#define AR_NP_STS_THERM_SENSOR_REQ_LIMIT                       	AR_NP_STS_THERM_SENSOR_REQ+AR_NP_STS_THERM_SENSOR_REQ_SIZE-1
#define AR_NP_STS_THERM_SENSOR_RSP                             	(AR_NP_BASE+0x0000000050ull)
#define AR_NP_STS_THERM_SENSOR_RSP_SIZE                        	0x0000000008ull
#define AR_NP_STS_THERM_SENSOR_RSP_LIMIT                       	AR_NP_STS_THERM_SENSOR_RSP+AR_NP_STS_THERM_SENSOR_RSP_SIZE-1
#define AR_NP_DBG_ERRINJ_ECC                                   	(AR_NP_BASE+0x0000000068ull)
#define AR_NP_DBG_ERRINJ_ECC_SIZE                              	0x0000000008ull
#define AR_NP_DBG_ERRINJ_ECC_LIMIT                             	AR_NP_DBG_ERRINJ_ECC+AR_NP_DBG_ERRINJ_ECC_SIZE-1
#define AR_NP_ERR_INFO_IRAM                                    	(AR_NP_BASE+0x0000000070ull)
#define AR_NP_ERR_INFO_IRAM_SIZE                               	0x0000000008ull
#define AR_NP_ERR_INFO_IRAM_LIMIT                              	AR_NP_ERR_INFO_IRAM+AR_NP_ERR_INFO_IRAM_SIZE-1
#define AR_NP_ERR_INFO_DRAM                                    	(AR_NP_BASE+0x0000000078ull)
#define AR_NP_ERR_INFO_DRAM_SIZE                               	0x0000000008ull
#define AR_NP_ERR_INFO_DRAM_LIMIT                              	AR_NP_ERR_INFO_DRAM+AR_NP_ERR_INFO_DRAM_SIZE-1
#define AR_NP_ERR_INFO_IDRAM                                   	(AR_NP_BASE+0x0000000080ull)
#define AR_NP_ERR_INFO_IDRAM_SIZE                              	0x0000000008ull
#define AR_NP_ERR_INFO_IDRAM_LIMIT                             	AR_NP_ERR_INFO_IDRAM+AR_NP_ERR_INFO_IDRAM_SIZE-1
#define AR_NP_ERR_INFO_CNT_IRAM                                	(AR_NP_BASE+0x0000000088ull)
#define AR_NP_ERR_INFO_CNT_IRAM_SIZE                           	0x0000000008ull
#define AR_NP_ERR_INFO_CNT_IRAM_LIMIT                          	AR_NP_ERR_INFO_CNT_IRAM+AR_NP_ERR_INFO_CNT_IRAM_SIZE-1
#define AR_NP_ERR_INFO_CNT_DRAM                                	(AR_NP_BASE+0x0000000090ull)
#define AR_NP_ERR_INFO_CNT_DRAM_SIZE                           	0x0000000008ull
#define AR_NP_ERR_INFO_CNT_DRAM_LIMIT                          	AR_NP_ERR_INFO_CNT_DRAM+AR_NP_ERR_INFO_CNT_DRAM_SIZE-1
#define AR_NP_ERR_INFO_CNT_IDRAM                               	(AR_NP_BASE+0x0000000098ull)
#define AR_NP_ERR_INFO_CNT_IDRAM_SIZE                          	0x0000000008ull
#define AR_NP_ERR_INFO_CNT_IDRAM_LIMIT                         	AR_NP_ERR_INFO_CNT_IDRAM+AR_NP_ERR_INFO_CNT_IDRAM_SIZE-1
#define AR_NP_DEB_MON_SFR0                                     	(AR_NP_BASE+0x00000000a0ull)
#define AR_NP_DEB_MON_SFR0_SIZE                                	0x0000000008ull
#define AR_NP_DEB_MON_SFR0_LIMIT                               	AR_NP_DEB_MON_SFR0+AR_NP_DEB_MON_SFR0_SIZE-1
#define AR_NP_DEB_MON_SFR1                                     	(AR_NP_BASE+0x00000000a8ull)
#define AR_NP_DEB_MON_SFR1_SIZE                                	0x0000000008ull
#define AR_NP_DEB_MON_SFR1_LIMIT                               	AR_NP_DEB_MON_SFR1+AR_NP_DEB_MON_SFR1_SIZE-1
#define AR_NP_DEB_MON_SFR2                                     	(AR_NP_BASE+0x00000000b0ull)
#define AR_NP_DEB_MON_SFR2_SIZE                                	0x0000000008ull
#define AR_NP_DEB_MON_SFR2_LIMIT                               	AR_NP_DEB_MON_SFR2+AR_NP_DEB_MON_SFR2_SIZE-1
#define AR_NP_DEB_MON_SFR3                                     	(AR_NP_BASE+0x00000000b8ull)
#define AR_NP_DEB_MON_SFR3_SIZE                                	0x0000000008ull
#define AR_NP_DEB_MON_SFR3_LIMIT                               	AR_NP_DEB_MON_SFR3+AR_NP_DEB_MON_SFR3_SIZE-1
#define AR_NP_DEB_MON_SFR4                                     	(AR_NP_BASE+0x00000000c0ull)
#define AR_NP_DEB_MON_SFR4_SIZE                                	0x0000000008ull
#define AR_NP_DEB_MON_SFR4_LIMIT                               	AR_NP_DEB_MON_SFR4+AR_NP_DEB_MON_SFR4_SIZE-1
#define AR_NP_DEB_MON_SFR5                                     	(AR_NP_BASE+0x00000000c8ull)
#define AR_NP_DEB_MON_SFR5_SIZE                                	0x0000000008ull
#define AR_NP_DEB_MON_SFR5_LIMIT                               	AR_NP_DEB_MON_SFR5+AR_NP_DEB_MON_SFR5_SIZE-1
#define AR_NP_DEB_MON_HEATBEAT_CNT                             	(AR_NP_BASE+0x00000000d8ull)
#define AR_NP_DEB_MON_HEATBEAT_CNT_SIZE                        	0x0000000008ull
#define AR_NP_DEB_MON_HEATBEAT_CNT_LIMIT                       	AR_NP_DEB_MON_HEATBEAT_CNT+AR_NP_DEB_MON_HEATBEAT_CNT_SIZE-1
#define AR_NP_STS_THERM_SENSOR_CFG                             	(AR_NP_BASE+0x00000000e0ull)
#define AR_NP_STS_THERM_SENSOR_CFG_SIZE                        	0x0000000008ull
#define AR_NP_STS_THERM_SENSOR_CFG_LIMIT                       	AR_NP_STS_THERM_SENSOR_CFG+AR_NP_STS_THERM_SENSOR_CFG_SIZE-1
#define AR_NP_ERR_FLG                                          	(AR_NP_BASE+0x0000000100ull)
#define AR_NP_ERR_FLG_SIZE                                     	0x0000000008ull
#define AR_NP_ERR_FLG_LIMIT                                    	AR_NP_ERR_FLG+AR_NP_ERR_FLG_SIZE-1
#define AR_NP_ERR_CLR                                          	(AR_NP_BASE+0x0000000108ull)
#define AR_NP_ERR_CLR_SIZE                                     	0x0000000008ull
#define AR_NP_ERR_CLR_LIMIT                                    	AR_NP_ERR_CLR+AR_NP_ERR_CLR_SIZE-1
#define AR_NP_ERR_HSS_MSK                                      	(AR_NP_BASE+0x0000000110ull)
#define AR_NP_ERR_HSS_MSK_SIZE                                 	0x0000000008ull
#define AR_NP_ERR_HSS_MSK_LIMIT                                	AR_NP_ERR_HSS_MSK+AR_NP_ERR_HSS_MSK_SIZE-1
#define AR_NP_ERR_FIRST_FLG                                    	(AR_NP_BASE+0x0000000118ull)
#define AR_NP_ERR_FIRST_FLG_SIZE                               	0x0000000008ull
#define AR_NP_ERR_FIRST_FLG_LIMIT                              	AR_NP_ERR_FIRST_FLG+AR_NP_ERR_FIRST_FLG_SIZE-1

/*
 *  AR_NP_CFG DEFINES
 */
#define AR_NP_CFG_RST_RAM_CTRL_MASK                                     	0x0001000000000000ull
#define AR_NP_CFG_RST_SFR_MASK                                          	0x0000010000000000ull
#define AR_NP_CFG_RST_PROC_MASK                                         	0x0000000100000000ull
#define AR_NP_CFG_STOP_SBUS_SPICO_MASK                                  	0x0000000080000000ull
#define AR_NP_CFG_CLKGEN_SPICO_MASK                                     	0x0000000003000000ull
#define AR_NP_CFG_CLKGEN_CBUS_OUT_MASK                                  	0x0000000000030000ull
#define AR_NP_CFG_CLKGEN_CBUS_MASK                                      	0x0000000000000300ull
#define AR_NP_CFG_CLKGEN_PROC_MASK                                      	0x0000000000000003ull
#define AR_NP_CFG_RST_RAM_CTRL_BP                                       	48
#define AR_NP_CFG_RST_SFR_BP                                            	40
#define AR_NP_CFG_RST_PROC_BP                                           	32
#define AR_NP_CFG_STOP_SBUS_SPICO_BP                                    	31
#define AR_NP_CFG_CLKGEN_SPICO_BP                                       	24
#define AR_NP_CFG_CLKGEN_CBUS_OUT_BP                                    	16
#define AR_NP_CFG_CLKGEN_CBUS_BP                                        	8
#define AR_NP_CFG_CLKGEN_PROC_BP                                        	0
#define AR_NP_CFG_RST_RAM_CTRL_QW                                       	0
#define AR_NP_CFG_RST_SFR_QW                                            	0
#define AR_NP_CFG_RST_PROC_QW                                           	0
#define AR_NP_CFG_STOP_SBUS_SPICO_QW                                    	0
#define AR_NP_CFG_CLKGEN_SPICO_QW                                       	0
#define AR_NP_CFG_CLKGEN_CBUS_OUT_QW                                    	0
#define AR_NP_CFG_CLKGEN_CBUS_QW                                        	0
#define AR_NP_CFG_CLKGEN_PROC_QW                                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DBG_SFR_ACCESS DEFINES
 */
#define AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID_MASK                    	0x0001000000000000ull
#define AR_NP_DBG_SFR_ACCESS_SFR_REQ_MASK                               	0x0000000100000000ull
#define AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA_MASK                            	0x0000000001000000ull
#define AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA_MASK                           	0x0000000000ff0000ull
#define AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA_MASK                           	0x000000000000ff00ull
#define AR_NP_DBG_SFR_ACCESS_SFR_ADDR_MASK                              	0x000000000000007full
#define AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID_BP                      	48
#define AR_NP_DBG_SFR_ACCESS_SFR_REQ_BP                                 	32
#define AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA_BP                              	24
#define AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA_BP                             	16
#define AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA_BP                             	8
#define AR_NP_DBG_SFR_ACCESS_SFR_ADDR_BP                                	0
#define AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID_QW                      	0
#define AR_NP_DBG_SFR_ACCESS_SFR_REQ_QW                                 	0
#define AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA_QW                              	0
#define AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA_QW                             	0
#define AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA_QW                             	0
#define AR_NP_DBG_SFR_ACCESS_SFR_ADDR_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DBG_PROCESSOR DEFINES
 */
#define AR_NP_DBG_PROCESSOR_DEBUGACS_MASK                               	0x0000000000020000ull
#define AR_NP_DBG_PROCESSOR_CODERUN_MASK                                	0x0000000000010000ull
#define AR_NP_DBG_PROCESSOR_HALT_PROC_CLK_MASK                          	0x0000000000000100ull
#define AR_NP_DBG_PROCESSOR_ENA_INT_MASK                                	0x0000000000000080ull
#define AR_NP_DBG_PROCESSOR_INTS_MASK                                   	0x000000000000007full
#define AR_NP_DBG_PROCESSOR_DEBUGACS_BP                                 	17
#define AR_NP_DBG_PROCESSOR_CODERUN_BP                                  	16
#define AR_NP_DBG_PROCESSOR_HALT_PROC_CLK_BP                            	8
#define AR_NP_DBG_PROCESSOR_ENA_INT_BP                                  	7
#define AR_NP_DBG_PROCESSOR_INTS_BP                                     	0
#define AR_NP_DBG_PROCESSOR_DEBUGACS_QW                                 	0
#define AR_NP_DBG_PROCESSOR_CODERUN_QW                                  	0
#define AR_NP_DBG_PROCESSOR_HALT_PROC_CLK_QW                            	0
#define AR_NP_DBG_PROCESSOR_ENA_INT_QW                                  	0
#define AR_NP_DBG_PROCESSOR_INTS_QW                                     	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_CFG_REQ_SBUS DEFINES
 */
#define AR_NP_CFG_REQ_SBUS_EXE_MASK                                     	0x0100000000000000ull
#define AR_NP_CFG_REQ_SBUS_DATA_MASK                                    	0x00ffffffff000000ull
#define AR_NP_CFG_REQ_SBUS_CMD_MASK                                     	0x0000000000ff0000ull
#define AR_NP_CFG_REQ_SBUS_DATA_ADDR_MASK                               	0x000000000000ff00ull
#define AR_NP_CFG_REQ_SBUS_RCV_ADDR_MASK                                	0x00000000000000ffull
#define AR_NP_CFG_REQ_SBUS_EXE_BP                                       	56
#define AR_NP_CFG_REQ_SBUS_DATA_BP                                      	24
#define AR_NP_CFG_REQ_SBUS_CMD_BP                                       	16
#define AR_NP_CFG_REQ_SBUS_DATA_ADDR_BP                                 	8
#define AR_NP_CFG_REQ_SBUS_RCV_ADDR_BP                                  	0
#define AR_NP_CFG_REQ_SBUS_EXE_QW                                       	0
#define AR_NP_CFG_REQ_SBUS_DATA_QW                                      	0
#define AR_NP_CFG_REQ_SBUS_CMD_QW                                       	0
#define AR_NP_CFG_REQ_SBUS_DATA_ADDR_QW                                 	0
#define AR_NP_CFG_REQ_SBUS_RCV_ADDR_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_CFG_RSP_SBUS DEFINES
 */
#define AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC_MASK                      	0x0400000000000000ull
#define AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR_MASK                       	0x0200000000000000ull
#define AR_NP_CFG_RSP_SBUS_DONE_MASK                                    	0x0100000000000000ull
#define AR_NP_CFG_RSP_SBUS_DATA_OUT_MASK                                	0x00ffffffff000000ull
#define AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID_MASK                          	0x0000000000000100ull
#define AR_NP_CFG_RSP_SBUS_RESULT_CODE_MASK                             	0x0000000000000007ull
#define AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC_BP                        	58
#define AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR_BP                         	57
#define AR_NP_CFG_RSP_SBUS_DONE_BP                                      	56
#define AR_NP_CFG_RSP_SBUS_DATA_OUT_BP                                  	24
#define AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID_BP                            	8
#define AR_NP_CFG_RSP_SBUS_RESULT_CODE_BP                               	0
#define AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC_QW                        	0
#define AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR_QW                         	0
#define AR_NP_CFG_RSP_SBUS_DONE_QW                                      	0
#define AR_NP_CFG_RSP_SBUS_DATA_OUT_QW                                  	0
#define AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID_QW                            	0
#define AR_NP_CFG_RSP_SBUS_RESULT_CODE_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_CFG_REQ_CBUS DEFINES
 */
#define AR_NP_CFG_REQ_CBUS_EXE_MASK                                     	0x0100000000000000ull
#define AR_NP_CFG_REQ_CBUS_DATA_MASK                                    	0x00ffffffff000000ull
#define AR_NP_CFG_REQ_CBUS_CMD_MASK                                     	0x0000000000ff0000ull
#define AR_NP_CFG_REQ_CBUS_DATA_ADDR_MASK                               	0x000000000000ff00ull
#define AR_NP_CFG_REQ_CBUS_RCV_ADDR_MASK                                	0x00000000000000ffull
#define AR_NP_CFG_REQ_CBUS_EXE_BP                                       	56
#define AR_NP_CFG_REQ_CBUS_DATA_BP                                      	24
#define AR_NP_CFG_REQ_CBUS_CMD_BP                                       	16
#define AR_NP_CFG_REQ_CBUS_DATA_ADDR_BP                                 	8
#define AR_NP_CFG_REQ_CBUS_RCV_ADDR_BP                                  	0
#define AR_NP_CFG_REQ_CBUS_EXE_QW                                       	0
#define AR_NP_CFG_REQ_CBUS_DATA_QW                                      	0
#define AR_NP_CFG_REQ_CBUS_CMD_QW                                       	0
#define AR_NP_CFG_REQ_CBUS_DATA_ADDR_QW                                 	0
#define AR_NP_CFG_REQ_CBUS_RCV_ADDR_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_CFG_RSP_CBUS DEFINES
 */
#define AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC_MASK                      	0x0400000000000000ull
#define AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR_MASK                       	0x0200000000000000ull
#define AR_NP_CFG_RSP_CBUS_DONE_MASK                                    	0x0100000000000000ull
#define AR_NP_CFG_RSP_CBUS_DATA_OUT_MASK                                	0x00ffffffff000000ull
#define AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID_MASK                          	0x0000000000000100ull
#define AR_NP_CFG_RSP_CBUS_RESULT_CODE_MASK                             	0x0000000000000007ull
#define AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC_BP                        	58
#define AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR_BP                         	57
#define AR_NP_CFG_RSP_CBUS_DONE_BP                                      	56
#define AR_NP_CFG_RSP_CBUS_DATA_OUT_BP                                  	24
#define AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID_BP                            	8
#define AR_NP_CFG_RSP_CBUS_RESULT_CODE_BP                               	0
#define AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC_QW                        	0
#define AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR_QW                         	0
#define AR_NP_CFG_RSP_CBUS_DONE_QW                                      	0
#define AR_NP_CFG_RSP_CBUS_DATA_OUT_QW                                  	0
#define AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID_QW                            	0
#define AR_NP_CFG_RSP_CBUS_RESULT_CODE_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_STS_THERM_SENSOR_REQ DEFINES
 */
#define AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE_MASK                        	0x0100000000000000ull
#define AR_NP_STS_THERM_SENSOR_REQ_WRITE_MASK                           	0x0001000000000000ull
#define AR_NP_STS_THERM_SENSOR_REQ_START_MASK                           	0x0000010000000000ull
#define AR_NP_STS_THERM_SENSOR_REQ_RESET_MASK                           	0x0000000100000000ull
#define AR_NP_STS_THERM_SENSOR_REQ_READ_MASK                            	0x0000000001000000ull
#define AR_NP_STS_THERM_SENSOR_REQ_ADDR_MASK                            	0x00000000000f0000ull
#define AR_NP_STS_THERM_SENSOR_REQ_DATA_IN_MASK                         	0x000000000000ffffull
#define AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE_BP                          	56
#define AR_NP_STS_THERM_SENSOR_REQ_WRITE_BP                             	48
#define AR_NP_STS_THERM_SENSOR_REQ_START_BP                             	40
#define AR_NP_STS_THERM_SENSOR_REQ_RESET_BP                             	32
#define AR_NP_STS_THERM_SENSOR_REQ_READ_BP                              	24
#define AR_NP_STS_THERM_SENSOR_REQ_ADDR_BP                              	16
#define AR_NP_STS_THERM_SENSOR_REQ_DATA_IN_BP                           	0
#define AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE_QW                          	0
#define AR_NP_STS_THERM_SENSOR_REQ_WRITE_QW                             	0
#define AR_NP_STS_THERM_SENSOR_REQ_START_QW                             	0
#define AR_NP_STS_THERM_SENSOR_REQ_RESET_QW                             	0
#define AR_NP_STS_THERM_SENSOR_REQ_READ_QW                              	0
#define AR_NP_STS_THERM_SENSOR_REQ_ADDR_QW                              	0
#define AR_NP_STS_THERM_SENSOR_REQ_DATA_IN_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_STS_THERM_SENSOR_RSP DEFINES
 */
#define AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK_MASK                       	0x0001000000000000ull
#define AR_NP_STS_THERM_SENSOR_RSP_VALID_MASK                           	0x0000010000000000ull
#define AR_NP_STS_THERM_SENSOR_RSP_READ_ACK_MASK                        	0x0000000100000000ull
#define AR_NP_STS_THERM_SENSOR_RSP_VALUE_MASK                           	0x000000000fff0000ull
#define AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT_MASK                        	0x000000000000ffffull
#define AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK_BP                         	48
#define AR_NP_STS_THERM_SENSOR_RSP_VALID_BP                             	40
#define AR_NP_STS_THERM_SENSOR_RSP_READ_ACK_BP                          	32
#define AR_NP_STS_THERM_SENSOR_RSP_VALUE_BP                             	16
#define AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT_BP                          	0
#define AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK_QW                         	0
#define AR_NP_STS_THERM_SENSOR_RSP_VALID_QW                             	0
#define AR_NP_STS_THERM_SENSOR_RSP_READ_ACK_QW                          	0
#define AR_NP_STS_THERM_SENSOR_RSP_VALUE_QW                             	0
#define AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DBG_ERRINJ_ECC DEFINES
 */
#define AR_NP_DBG_ERRINJ_ECC_CLR_ERR_MASK                               	0x0000000100000000ull
#define AR_NP_DBG_ERRINJ_ECC_ADDRESS_MASK                               	0x0000000001fffc00ull
#define AR_NP_DBG_ERRINJ_ECC_CHECKBYTE_MASK                             	0x00000000000003e0ull
#define AR_NP_DBG_ERRINJ_ECC_RAMSELECT_MASK                             	0x0000000000000018ull
#define AR_NP_DBG_ERRINJ_ECC_MODE_MASK                                  	0x0000000000000006ull
#define AR_NP_DBG_ERRINJ_ECC_ENABLE_MASK                                	0x0000000000000001ull
#define AR_NP_DBG_ERRINJ_ECC_CLR_ERR_BP                                 	32
#define AR_NP_DBG_ERRINJ_ECC_ADDRESS_BP                                 	10
#define AR_NP_DBG_ERRINJ_ECC_CHECKBYTE_BP                               	5
#define AR_NP_DBG_ERRINJ_ECC_RAMSELECT_BP                               	3
#define AR_NP_DBG_ERRINJ_ECC_MODE_BP                                    	1
#define AR_NP_DBG_ERRINJ_ECC_ENABLE_BP                                  	0
#define AR_NP_DBG_ERRINJ_ECC_CLR_ERR_QW                                 	0
#define AR_NP_DBG_ERRINJ_ECC_ADDRESS_QW                                 	0
#define AR_NP_DBG_ERRINJ_ECC_CHECKBYTE_QW                               	0
#define AR_NP_DBG_ERRINJ_ECC_RAMSELECT_QW                               	0
#define AR_NP_DBG_ERRINJ_ECC_MODE_QW                                    	0
#define AR_NP_DBG_ERRINJ_ECC_ENABLE_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_INFO_IRAM DEFINES
 */
#define AR_NP_ERR_INFO_IRAM_MBE_SYND_MASK                               	0x0000000000003e00ull
#define AR_NP_ERR_INFO_IRAM_SBE_SYND_MASK                               	0x00000000000001f0ull
#define AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE_MASK                        	0x0000000000000008ull
#define AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE_MASK                        	0x0000000000000004ull
#define AR_NP_ERR_INFO_IRAM_MBE_MASK                                    	0x0000000000000002ull
#define AR_NP_ERR_INFO_IRAM_SBE_MASK                                    	0x0000000000000001ull
#define AR_NP_ERR_INFO_IRAM_MBE_SYND_BP                                 	9
#define AR_NP_ERR_INFO_IRAM_SBE_SYND_BP                                 	4
#define AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE_BP                          	3
#define AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE_BP                          	2
#define AR_NP_ERR_INFO_IRAM_MBE_BP                                      	1
#define AR_NP_ERR_INFO_IRAM_SBE_BP                                      	0
#define AR_NP_ERR_INFO_IRAM_MBE_SYND_QW                                 	0
#define AR_NP_ERR_INFO_IRAM_SBE_SYND_QW                                 	0
#define AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE_QW                          	0
#define AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE_QW                          	0
#define AR_NP_ERR_INFO_IRAM_MBE_QW                                      	0
#define AR_NP_ERR_INFO_IRAM_SBE_QW                                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_INFO_DRAM DEFINES
 */
#define AR_NP_ERR_INFO_DRAM_MBE_SYND_MASK                               	0x0000000000003e00ull
#define AR_NP_ERR_INFO_DRAM_SBE_SYND_MASK                               	0x00000000000001f0ull
#define AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE_MASK                        	0x0000000000000008ull
#define AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE_MASK                        	0x0000000000000004ull
#define AR_NP_ERR_INFO_DRAM_MBE_MASK                                    	0x0000000000000002ull
#define AR_NP_ERR_INFO_DRAM_SBE_MASK                                    	0x0000000000000001ull
#define AR_NP_ERR_INFO_DRAM_MBE_SYND_BP                                 	9
#define AR_NP_ERR_INFO_DRAM_SBE_SYND_BP                                 	4
#define AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE_BP                          	3
#define AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE_BP                          	2
#define AR_NP_ERR_INFO_DRAM_MBE_BP                                      	1
#define AR_NP_ERR_INFO_DRAM_SBE_BP                                      	0
#define AR_NP_ERR_INFO_DRAM_MBE_SYND_QW                                 	0
#define AR_NP_ERR_INFO_DRAM_SBE_SYND_QW                                 	0
#define AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE_QW                          	0
#define AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE_QW                          	0
#define AR_NP_ERR_INFO_DRAM_MBE_QW                                      	0
#define AR_NP_ERR_INFO_DRAM_SBE_QW                                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_INFO_IDRAM DEFINES
 */
#define AR_NP_ERR_INFO_IDRAM_MBE_SYND_MASK                              	0x0000000000003e00ull
#define AR_NP_ERR_INFO_IDRAM_SBE_SYND_MASK                              	0x00000000000001f0ull
#define AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE_MASK                       	0x0000000000000008ull
#define AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE_MASK                       	0x0000000000000004ull
#define AR_NP_ERR_INFO_IDRAM_MBE_MASK                                   	0x0000000000000002ull
#define AR_NP_ERR_INFO_IDRAM_SBE_MASK                                   	0x0000000000000001ull
#define AR_NP_ERR_INFO_IDRAM_MBE_SYND_BP                                	9
#define AR_NP_ERR_INFO_IDRAM_SBE_SYND_BP                                	4
#define AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE_BP                         	3
#define AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE_BP                         	2
#define AR_NP_ERR_INFO_IDRAM_MBE_BP                                     	1
#define AR_NP_ERR_INFO_IDRAM_SBE_BP                                     	0
#define AR_NP_ERR_INFO_IDRAM_MBE_SYND_QW                                	0
#define AR_NP_ERR_INFO_IDRAM_SBE_SYND_QW                                	0
#define AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE_QW                         	0
#define AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE_QW                         	0
#define AR_NP_ERR_INFO_IDRAM_MBE_QW                                     	0
#define AR_NP_ERR_INFO_IDRAM_SBE_QW                                     	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_INFO_CNT_IRAM DEFINES
 */
#define AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT_MASK                          	0xffffffff00000000ull
#define AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT_MASK                          	0x00000000ffffffffull
#define AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT_BP                            	32
#define AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT_BP                            	0
#define AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT_QW                            	0
#define AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_INFO_CNT_DRAM DEFINES
 */
#define AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT_MASK                          	0xffffffff00000000ull
#define AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT_MASK                          	0x00000000ffffffffull
#define AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT_BP                            	32
#define AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT_BP                            	0
#define AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT_QW                            	0
#define AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_INFO_CNT_IDRAM DEFINES
 */
#define AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT_MASK                         	0xffffffff00000000ull
#define AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT_MASK                         	0x00000000ffffffffull
#define AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT_BP                           	32
#define AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT_BP                           	0
#define AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT_QW                           	0
#define AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DEB_MON_SFR0 DEFINES
 */
#define AR_NP_DEB_MON_SFR0_CBUS_DATA0_MASK                              	0xff00000000000000ull
#define AR_NP_DEB_MON_SFR0_CBUS_DATA1_MASK                              	0x00ff000000000000ull
#define AR_NP_DEB_MON_SFR0_CBUS_DATA2_MASK                              	0x0000ff0000000000ull
#define AR_NP_DEB_MON_SFR0_CBUS_DATA3_MASK                              	0x000000ff00000000ull
#define AR_NP_DEB_MON_SFR0_CBUS_DADDR_MASK                              	0x00000000ff000000ull
#define AR_NP_DEB_MON_SFR0_CBUS_RADDR_MASK                              	0x0000000000ff0000ull
#define AR_NP_DEB_MON_SFR0_CBUS_COMMD_MASK                              	0x000000000000ff00ull
#define AR_NP_DEB_MON_SFR0_CBUS_MISCS_MASK                              	0x00000000000000ffull
#define AR_NP_DEB_MON_SFR0_CBUS_DATA0_BP                                	56
#define AR_NP_DEB_MON_SFR0_CBUS_DATA1_BP                                	48
#define AR_NP_DEB_MON_SFR0_CBUS_DATA2_BP                                	40
#define AR_NP_DEB_MON_SFR0_CBUS_DATA3_BP                                	32
#define AR_NP_DEB_MON_SFR0_CBUS_DADDR_BP                                	24
#define AR_NP_DEB_MON_SFR0_CBUS_RADDR_BP                                	16
#define AR_NP_DEB_MON_SFR0_CBUS_COMMD_BP                                	8
#define AR_NP_DEB_MON_SFR0_CBUS_MISCS_BP                                	0
#define AR_NP_DEB_MON_SFR0_CBUS_DATA0_QW                                	0
#define AR_NP_DEB_MON_SFR0_CBUS_DATA1_QW                                	0
#define AR_NP_DEB_MON_SFR0_CBUS_DATA2_QW                                	0
#define AR_NP_DEB_MON_SFR0_CBUS_DATA3_QW                                	0
#define AR_NP_DEB_MON_SFR0_CBUS_DADDR_QW                                	0
#define AR_NP_DEB_MON_SFR0_CBUS_RADDR_QW                                	0
#define AR_NP_DEB_MON_SFR0_CBUS_COMMD_QW                                	0
#define AR_NP_DEB_MON_SFR0_CBUS_MISCS_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DEB_MON_SFR1 DEFINES
 */
#define AR_NP_DEB_MON_SFR1_SBUS_DATA0_MASK                              	0xff00000000000000ull
#define AR_NP_DEB_MON_SFR1_SBUS_DATA1_MASK                              	0x00ff000000000000ull
#define AR_NP_DEB_MON_SFR1_SBUS_DATA2_MASK                              	0x0000ff0000000000ull
#define AR_NP_DEB_MON_SFR1_SBUS_DATA3_MASK                              	0x000000ff00000000ull
#define AR_NP_DEB_MON_SFR1_SBUS_DADDR_MASK                              	0x00000000ff000000ull
#define AR_NP_DEB_MON_SFR1_SBUS_RADDR_MASK                              	0x0000000000ff0000ull
#define AR_NP_DEB_MON_SFR1_SBUS_COMMD_MASK                              	0x000000000000ff00ull
#define AR_NP_DEB_MON_SFR1_SBUS_MISCS_MASK                              	0x00000000000000ffull
#define AR_NP_DEB_MON_SFR1_SBUS_DATA0_BP                                	56
#define AR_NP_DEB_MON_SFR1_SBUS_DATA1_BP                                	48
#define AR_NP_DEB_MON_SFR1_SBUS_DATA2_BP                                	40
#define AR_NP_DEB_MON_SFR1_SBUS_DATA3_BP                                	32
#define AR_NP_DEB_MON_SFR1_SBUS_DADDR_BP                                	24
#define AR_NP_DEB_MON_SFR1_SBUS_RADDR_BP                                	16
#define AR_NP_DEB_MON_SFR1_SBUS_COMMD_BP                                	8
#define AR_NP_DEB_MON_SFR1_SBUS_MISCS_BP                                	0
#define AR_NP_DEB_MON_SFR1_SBUS_DATA0_QW                                	0
#define AR_NP_DEB_MON_SFR1_SBUS_DATA1_QW                                	0
#define AR_NP_DEB_MON_SFR1_SBUS_DATA2_QW                                	0
#define AR_NP_DEB_MON_SFR1_SBUS_DATA3_QW                                	0
#define AR_NP_DEB_MON_SFR1_SBUS_DADDR_QW                                	0
#define AR_NP_DEB_MON_SFR1_SBUS_RADDR_QW                                	0
#define AR_NP_DEB_MON_SFR1_SBUS_COMMD_QW                                	0
#define AR_NP_DEB_MON_SFR1_SBUS_MISCS_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DEB_MON_SFR2 DEFINES
 */
#define AR_NP_DEB_MON_SFR2_TMP08_MASK                                   	0xff00000000000000ull
#define AR_NP_DEB_MON_SFR2_TMP07_MASK                                   	0x00ff000000000000ull
#define AR_NP_DEB_MON_SFR2_TMP06_MASK                                   	0x0000ff0000000000ull
#define AR_NP_DEB_MON_SFR2_TMP05_MASK                                   	0x000000ff00000000ull
#define AR_NP_DEB_MON_SFR2_TMP04_MASK                                   	0x00000000ff000000ull
#define AR_NP_DEB_MON_SFR2_TMP03_MASK                                   	0x0000000000ff0000ull
#define AR_NP_DEB_MON_SFR2_TMP02_MASK                                   	0x000000000000ff00ull
#define AR_NP_DEB_MON_SFR2_TMP01_MASK                                   	0x00000000000000ffull
#define AR_NP_DEB_MON_SFR2_TMP08_BP                                     	56
#define AR_NP_DEB_MON_SFR2_TMP07_BP                                     	48
#define AR_NP_DEB_MON_SFR2_TMP06_BP                                     	40
#define AR_NP_DEB_MON_SFR2_TMP05_BP                                     	32
#define AR_NP_DEB_MON_SFR2_TMP04_BP                                     	24
#define AR_NP_DEB_MON_SFR2_TMP03_BP                                     	16
#define AR_NP_DEB_MON_SFR2_TMP02_BP                                     	8
#define AR_NP_DEB_MON_SFR2_TMP01_BP                                     	0
#define AR_NP_DEB_MON_SFR2_TMP08_QW                                     	0
#define AR_NP_DEB_MON_SFR2_TMP07_QW                                     	0
#define AR_NP_DEB_MON_SFR2_TMP06_QW                                     	0
#define AR_NP_DEB_MON_SFR2_TMP05_QW                                     	0
#define AR_NP_DEB_MON_SFR2_TMP04_QW                                     	0
#define AR_NP_DEB_MON_SFR2_TMP03_QW                                     	0
#define AR_NP_DEB_MON_SFR2_TMP02_QW                                     	0
#define AR_NP_DEB_MON_SFR2_TMP01_QW                                     	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DEB_MON_SFR3 DEFINES
 */
#define AR_NP_DEB_MON_SFR3_TMP16_MASK                                   	0xff00000000000000ull
#define AR_NP_DEB_MON_SFR3_TMP15_MASK                                   	0x00ff000000000000ull
#define AR_NP_DEB_MON_SFR3_TMP14_MASK                                   	0x0000ff0000000000ull
#define AR_NP_DEB_MON_SFR3_TMP13_MASK                                   	0x000000ff00000000ull
#define AR_NP_DEB_MON_SFR3_TMP12_MASK                                   	0x00000000ff000000ull
#define AR_NP_DEB_MON_SFR3_TMP11_MASK                                   	0x0000000000ff0000ull
#define AR_NP_DEB_MON_SFR3_TMP10_MASK                                   	0x000000000000ff00ull
#define AR_NP_DEB_MON_SFR3_TMP09_MASK                                   	0x00000000000000ffull
#define AR_NP_DEB_MON_SFR3_TMP16_BP                                     	56
#define AR_NP_DEB_MON_SFR3_TMP15_BP                                     	48
#define AR_NP_DEB_MON_SFR3_TMP14_BP                                     	40
#define AR_NP_DEB_MON_SFR3_TMP13_BP                                     	32
#define AR_NP_DEB_MON_SFR3_TMP12_BP                                     	24
#define AR_NP_DEB_MON_SFR3_TMP11_BP                                     	16
#define AR_NP_DEB_MON_SFR3_TMP10_BP                                     	8
#define AR_NP_DEB_MON_SFR3_TMP09_BP                                     	0
#define AR_NP_DEB_MON_SFR3_TMP16_QW                                     	0
#define AR_NP_DEB_MON_SFR3_TMP15_QW                                     	0
#define AR_NP_DEB_MON_SFR3_TMP14_QW                                     	0
#define AR_NP_DEB_MON_SFR3_TMP13_QW                                     	0
#define AR_NP_DEB_MON_SFR3_TMP12_QW                                     	0
#define AR_NP_DEB_MON_SFR3_TMP11_QW                                     	0
#define AR_NP_DEB_MON_SFR3_TMP10_QW                                     	0
#define AR_NP_DEB_MON_SFR3_TMP09_QW                                     	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DEB_MON_SFR4 DEFINES
 */
#define AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD_MASK                           	0xff00000000000000ull
#define AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD_MASK                           	0x00ff000000000000ull
#define AR_NP_DEB_MON_SFR4_PORT3_MASK                                   	0x0000ff0000000000ull
#define AR_NP_DEB_MON_SFR4_PORT2_MASK                                   	0x000000ff00000000ull
#define AR_NP_DEB_MON_SFR4_PORT1_MASK                                   	0x00000000ff000000ull
#define AR_NP_DEB_MON_SFR4_PORT0_MASK                                   	0x0000000000ff0000ull
#define AR_NP_DEB_MON_SFR4_TMP18_MASK                                   	0x000000000000ff00ull
#define AR_NP_DEB_MON_SFR4_TMP17_MASK                                   	0x00000000000000ffull
#define AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD_BP                             	56
#define AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD_BP                             	48
#define AR_NP_DEB_MON_SFR4_PORT3_BP                                     	40
#define AR_NP_DEB_MON_SFR4_PORT2_BP                                     	32
#define AR_NP_DEB_MON_SFR4_PORT1_BP                                     	24
#define AR_NP_DEB_MON_SFR4_PORT0_BP                                     	16
#define AR_NP_DEB_MON_SFR4_TMP18_BP                                     	8
#define AR_NP_DEB_MON_SFR4_TMP17_BP                                     	0
#define AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD_QW                             	0
#define AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD_QW                             	0
#define AR_NP_DEB_MON_SFR4_PORT3_QW                                     	0
#define AR_NP_DEB_MON_SFR4_PORT2_QW                                     	0
#define AR_NP_DEB_MON_SFR4_PORT1_QW                                     	0
#define AR_NP_DEB_MON_SFR4_PORT0_QW                                     	0
#define AR_NP_DEB_MON_SFR4_TMP18_QW                                     	0
#define AR_NP_DEB_MON_SFR4_TMP17_QW                                     	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DEB_MON_SFR5 DEFINES
 */
#define AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD_MASK                           	0xff00000000000000ull
#define AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD_MASK                           	0x00ff000000000000ull
#define AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD_MASK                           	0x0000ff0000000000ull
#define AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD_MASK                           	0x000000ff00000000ull
#define AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD_MASK                           	0x00000000ff000000ull
#define AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD_MASK                           	0x0000000000ff0000ull
#define AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD_MASK                           	0x000000000000ff00ull
#define AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD_MASK                           	0x00000000000000ffull
#define AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD_BP                             	56
#define AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD_BP                             	48
#define AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD_BP                             	40
#define AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD_BP                             	32
#define AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD_BP                             	24
#define AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD_BP                             	16
#define AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD_BP                             	8
#define AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD_BP                             	0
#define AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD_QW                             	0
#define AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD_QW                             	0
#define AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD_QW                             	0
#define AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD_QW                             	0
#define AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD_QW                             	0
#define AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD_QW                             	0
#define AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD_QW                             	0
#define AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_DEB_MON_HEATBEAT_CNT DEFINES
 */
#define AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT_MASK         	0x0100000000000000ull
#define AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT_MASK      	0x0001000000000000ull
#define AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT_MASK             	0x0000ffff00000000ull
#define AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT_MASK               	0x00000000ffffffffull
#define AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT_BP           	56
#define AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT_BP        	48
#define AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT_BP               	32
#define AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT_BP                 	0
#define AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT_QW           	0
#define AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT_QW        	0
#define AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT_QW               	0
#define AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_STS_THERM_SENSOR_CFG DEFINES
 */
#define AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE_MASK                      	0x00000000000003ffull
#define AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE_BP                        	0
#define AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_FLG DEFINES
 */
#define AR_NP_ERR_FLG_IDRAM_MBE_MASK                                    	0x0000000000010000ull
#define AR_NP_ERR_FLG_IDRAM_SBE_MASK                                    	0x0000000000008000ull
#define AR_NP_ERR_FLG_EDRAM_MBE_MASK                                    	0x0000000000004000ull
#define AR_NP_ERR_FLG_EDRAM_SBE_MASK                                    	0x0000000000002000ull
#define AR_NP_ERR_FLG_IRAM_MBE_MASK                                     	0x0000000000001000ull
#define AR_NP_ERR_FLG_IRAM_SBE_MASK                                     	0x0000000000000800ull
#define AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE_MASK                            	0x0000000000000400ull
#define AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD_MASK                            	0x0000000000000200ull
#define AR_NP_ERR_FLG_NP_LANE_MASK                                      	0x0000000000000100ull
#define AR_NP_ERR_FLG_NP_TUNING_MASK                                    	0x0000000000000080ull
#define AR_NP_ERR_FLG_NP_SBUS_RD_MASK                                   	0x0000000000000040ull
#define AR_NP_ERR_FLG_NP_SBUS_WR_MASK                                   	0x0000000000000020ull
#define AR_NP_ERR_FLG_NP_CBUS_RD_MASK                                   	0x0000000000000010ull
#define AR_NP_ERR_FLG_NP_CBUS_WR_MASK                                   	0x0000000000000008ull
#define AR_NP_ERR_FLG_NP_SPICO_MASK                                     	0x0000000000000004ull
#define AR_NP_ERR_FLG_NP_CHECKSUM_MASK                                  	0x0000000000000002ull
#define AR_NP_ERR_FLG_DIAG_ONLY_MASK                                    	0x0000000000000001ull
#define AR_NP_ERR_FLG_IDRAM_MBE_BP                                      	16
#define AR_NP_ERR_FLG_IDRAM_SBE_BP                                      	15
#define AR_NP_ERR_FLG_EDRAM_MBE_BP                                      	14
#define AR_NP_ERR_FLG_EDRAM_SBE_BP                                      	13
#define AR_NP_ERR_FLG_IRAM_MBE_BP                                       	12
#define AR_NP_ERR_FLG_IRAM_SBE_BP                                       	11
#define AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE_BP                              	10
#define AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD_BP                              	9
#define AR_NP_ERR_FLG_NP_LANE_BP                                        	8
#define AR_NP_ERR_FLG_NP_TUNING_BP                                      	7
#define AR_NP_ERR_FLG_NP_SBUS_RD_BP                                     	6
#define AR_NP_ERR_FLG_NP_SBUS_WR_BP                                     	5
#define AR_NP_ERR_FLG_NP_CBUS_RD_BP                                     	4
#define AR_NP_ERR_FLG_NP_CBUS_WR_BP                                     	3
#define AR_NP_ERR_FLG_NP_SPICO_BP                                       	2
#define AR_NP_ERR_FLG_NP_CHECKSUM_BP                                    	1
#define AR_NP_ERR_FLG_DIAG_ONLY_BP                                      	0
#define AR_NP_ERR_FLG_IDRAM_MBE_QW                                      	0
#define AR_NP_ERR_FLG_IDRAM_SBE_QW                                      	0
#define AR_NP_ERR_FLG_EDRAM_MBE_QW                                      	0
#define AR_NP_ERR_FLG_EDRAM_SBE_QW                                      	0
#define AR_NP_ERR_FLG_IRAM_MBE_QW                                       	0
#define AR_NP_ERR_FLG_IRAM_SBE_QW                                       	0
#define AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE_QW                              	0
#define AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD_QW                              	0
#define AR_NP_ERR_FLG_NP_LANE_QW                                        	0
#define AR_NP_ERR_FLG_NP_TUNING_QW                                      	0
#define AR_NP_ERR_FLG_NP_SBUS_RD_QW                                     	0
#define AR_NP_ERR_FLG_NP_SBUS_WR_QW                                     	0
#define AR_NP_ERR_FLG_NP_CBUS_RD_QW                                     	0
#define AR_NP_ERR_FLG_NP_CBUS_WR_QW                                     	0
#define AR_NP_ERR_FLG_NP_SPICO_QW                                       	0
#define AR_NP_ERR_FLG_NP_CHECKSUM_QW                                    	0
#define AR_NP_ERR_FLG_DIAG_ONLY_QW                                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_CLR DEFINES
 */
#define AR_NP_ERR_CLR_IDRAM_MBE_MASK                                    	0x0000000000010000ull
#define AR_NP_ERR_CLR_IDRAM_SBE_MASK                                    	0x0000000000008000ull
#define AR_NP_ERR_CLR_EDRAM_MBE_MASK                                    	0x0000000000004000ull
#define AR_NP_ERR_CLR_EDRAM_SBE_MASK                                    	0x0000000000002000ull
#define AR_NP_ERR_CLR_IRAM_MBE_MASK                                     	0x0000000000001000ull
#define AR_NP_ERR_CLR_IRAM_SBE_MASK                                     	0x0000000000000800ull
#define AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE_MASK                            	0x0000000000000400ull
#define AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD_MASK                            	0x0000000000000200ull
#define AR_NP_ERR_CLR_NP_LANE_MASK                                      	0x0000000000000100ull
#define AR_NP_ERR_CLR_NP_TUNING_MASK                                    	0x0000000000000080ull
#define AR_NP_ERR_CLR_NP_SBUS_RD_MASK                                   	0x0000000000000040ull
#define AR_NP_ERR_CLR_NP_SBUS_WR_MASK                                   	0x0000000000000020ull
#define AR_NP_ERR_CLR_NP_CBUS_RD_MASK                                   	0x0000000000000010ull
#define AR_NP_ERR_CLR_NP_CBUS_WR_MASK                                   	0x0000000000000008ull
#define AR_NP_ERR_CLR_NP_SPICO_MASK                                     	0x0000000000000004ull
#define AR_NP_ERR_CLR_NP_CHECKSUM_MASK                                  	0x0000000000000002ull
#define AR_NP_ERR_CLR_DIAG_ONLY_MASK                                    	0x0000000000000001ull
#define AR_NP_ERR_CLR_IDRAM_MBE_BP                                      	16
#define AR_NP_ERR_CLR_IDRAM_SBE_BP                                      	15
#define AR_NP_ERR_CLR_EDRAM_MBE_BP                                      	14
#define AR_NP_ERR_CLR_EDRAM_SBE_BP                                      	13
#define AR_NP_ERR_CLR_IRAM_MBE_BP                                       	12
#define AR_NP_ERR_CLR_IRAM_SBE_BP                                       	11
#define AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE_BP                              	10
#define AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD_BP                              	9
#define AR_NP_ERR_CLR_NP_LANE_BP                                        	8
#define AR_NP_ERR_CLR_NP_TUNING_BP                                      	7
#define AR_NP_ERR_CLR_NP_SBUS_RD_BP                                     	6
#define AR_NP_ERR_CLR_NP_SBUS_WR_BP                                     	5
#define AR_NP_ERR_CLR_NP_CBUS_RD_BP                                     	4
#define AR_NP_ERR_CLR_NP_CBUS_WR_BP                                     	3
#define AR_NP_ERR_CLR_NP_SPICO_BP                                       	2
#define AR_NP_ERR_CLR_NP_CHECKSUM_BP                                    	1
#define AR_NP_ERR_CLR_DIAG_ONLY_BP                                      	0
#define AR_NP_ERR_CLR_IDRAM_MBE_QW                                      	0
#define AR_NP_ERR_CLR_IDRAM_SBE_QW                                      	0
#define AR_NP_ERR_CLR_EDRAM_MBE_QW                                      	0
#define AR_NP_ERR_CLR_EDRAM_SBE_QW                                      	0
#define AR_NP_ERR_CLR_IRAM_MBE_QW                                       	0
#define AR_NP_ERR_CLR_IRAM_SBE_QW                                       	0
#define AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE_QW                              	0
#define AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD_QW                              	0
#define AR_NP_ERR_CLR_NP_LANE_QW                                        	0
#define AR_NP_ERR_CLR_NP_TUNING_QW                                      	0
#define AR_NP_ERR_CLR_NP_SBUS_RD_QW                                     	0
#define AR_NP_ERR_CLR_NP_SBUS_WR_QW                                     	0
#define AR_NP_ERR_CLR_NP_CBUS_RD_QW                                     	0
#define AR_NP_ERR_CLR_NP_CBUS_WR_QW                                     	0
#define AR_NP_ERR_CLR_NP_SPICO_QW                                       	0
#define AR_NP_ERR_CLR_NP_CHECKSUM_QW                                    	0
#define AR_NP_ERR_CLR_DIAG_ONLY_QW                                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_HSS_MSK DEFINES
 */
#define AR_NP_ERR_HSS_MSK_IDRAM_MBE_MASK                                	0x0000000000010000ull
#define AR_NP_ERR_HSS_MSK_IDRAM_SBE_MASK                                	0x0000000000008000ull
#define AR_NP_ERR_HSS_MSK_EDRAM_MBE_MASK                                	0x0000000000004000ull
#define AR_NP_ERR_HSS_MSK_EDRAM_SBE_MASK                                	0x0000000000002000ull
#define AR_NP_ERR_HSS_MSK_IRAM_MBE_MASK                                 	0x0000000000001000ull
#define AR_NP_ERR_HSS_MSK_IRAM_SBE_MASK                                 	0x0000000000000800ull
#define AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE_MASK                        	0x0000000000000400ull
#define AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD_MASK                        	0x0000000000000200ull
#define AR_NP_ERR_HSS_MSK_NP_LANE_MASK                                  	0x0000000000000100ull
#define AR_NP_ERR_HSS_MSK_NP_TUNING_MASK                                	0x0000000000000080ull
#define AR_NP_ERR_HSS_MSK_NP_SBUS_RD_MASK                               	0x0000000000000040ull
#define AR_NP_ERR_HSS_MSK_NP_SBUS_WR_MASK                               	0x0000000000000020ull
#define AR_NP_ERR_HSS_MSK_NP_CBUS_RD_MASK                               	0x0000000000000010ull
#define AR_NP_ERR_HSS_MSK_NP_CBUS_WR_MASK                               	0x0000000000000008ull
#define AR_NP_ERR_HSS_MSK_NP_SPICO_MASK                                 	0x0000000000000004ull
#define AR_NP_ERR_HSS_MSK_NP_CHECKSUM_MASK                              	0x0000000000000002ull
#define AR_NP_ERR_HSS_MSK_DIAG_ONLY_MASK                                	0x0000000000000001ull
#define AR_NP_ERR_HSS_MSK_IDRAM_MBE_BP                                  	16
#define AR_NP_ERR_HSS_MSK_IDRAM_SBE_BP                                  	15
#define AR_NP_ERR_HSS_MSK_EDRAM_MBE_BP                                  	14
#define AR_NP_ERR_HSS_MSK_EDRAM_SBE_BP                                  	13
#define AR_NP_ERR_HSS_MSK_IRAM_MBE_BP                                   	12
#define AR_NP_ERR_HSS_MSK_IRAM_SBE_BP                                   	11
#define AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE_BP                          	10
#define AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD_BP                          	9
#define AR_NP_ERR_HSS_MSK_NP_LANE_BP                                    	8
#define AR_NP_ERR_HSS_MSK_NP_TUNING_BP                                  	7
#define AR_NP_ERR_HSS_MSK_NP_SBUS_RD_BP                                 	6
#define AR_NP_ERR_HSS_MSK_NP_SBUS_WR_BP                                 	5
#define AR_NP_ERR_HSS_MSK_NP_CBUS_RD_BP                                 	4
#define AR_NP_ERR_HSS_MSK_NP_CBUS_WR_BP                                 	3
#define AR_NP_ERR_HSS_MSK_NP_SPICO_BP                                   	2
#define AR_NP_ERR_HSS_MSK_NP_CHECKSUM_BP                                	1
#define AR_NP_ERR_HSS_MSK_DIAG_ONLY_BP                                  	0
#define AR_NP_ERR_HSS_MSK_IDRAM_MBE_QW                                  	0
#define AR_NP_ERR_HSS_MSK_IDRAM_SBE_QW                                  	0
#define AR_NP_ERR_HSS_MSK_EDRAM_MBE_QW                                  	0
#define AR_NP_ERR_HSS_MSK_EDRAM_SBE_QW                                  	0
#define AR_NP_ERR_HSS_MSK_IRAM_MBE_QW                                   	0
#define AR_NP_ERR_HSS_MSK_IRAM_SBE_QW                                   	0
#define AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE_QW                          	0
#define AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD_QW                          	0
#define AR_NP_ERR_HSS_MSK_NP_LANE_QW                                    	0
#define AR_NP_ERR_HSS_MSK_NP_TUNING_QW                                  	0
#define AR_NP_ERR_HSS_MSK_NP_SBUS_RD_QW                                 	0
#define AR_NP_ERR_HSS_MSK_NP_SBUS_WR_QW                                 	0
#define AR_NP_ERR_HSS_MSK_NP_CBUS_RD_QW                                 	0
#define AR_NP_ERR_HSS_MSK_NP_CBUS_WR_QW                                 	0
#define AR_NP_ERR_HSS_MSK_NP_SPICO_QW                                   	0
#define AR_NP_ERR_HSS_MSK_NP_CHECKSUM_QW                                	0
#define AR_NP_ERR_HSS_MSK_DIAG_ONLY_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_ERR_FIRST_FLG DEFINES
 */
#define AR_NP_ERR_FIRST_FLG_IDRAM_MBE_MASK                              	0x0000000000010000ull
#define AR_NP_ERR_FIRST_FLG_IDRAM_SBE_MASK                              	0x0000000000008000ull
#define AR_NP_ERR_FIRST_FLG_EDRAM_MBE_MASK                              	0x0000000000004000ull
#define AR_NP_ERR_FIRST_FLG_EDRAM_SBE_MASK                              	0x0000000000002000ull
#define AR_NP_ERR_FIRST_FLG_IRAM_MBE_MASK                               	0x0000000000001000ull
#define AR_NP_ERR_FIRST_FLG_IRAM_SBE_MASK                               	0x0000000000000800ull
#define AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE_MASK                      	0x0000000000000400ull
#define AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD_MASK                      	0x0000000000000200ull
#define AR_NP_ERR_FIRST_FLG_NP_LANE_MASK                                	0x0000000000000100ull
#define AR_NP_ERR_FIRST_FLG_NP_TUNING_MASK                              	0x0000000000000080ull
#define AR_NP_ERR_FIRST_FLG_NP_SBUS_RD_MASK                             	0x0000000000000040ull
#define AR_NP_ERR_FIRST_FLG_NP_SBUS_WR_MASK                             	0x0000000000000020ull
#define AR_NP_ERR_FIRST_FLG_NP_CBUS_RD_MASK                             	0x0000000000000010ull
#define AR_NP_ERR_FIRST_FLG_NP_CBUS_WR_MASK                             	0x0000000000000008ull
#define AR_NP_ERR_FIRST_FLG_NP_SPICO_MASK                               	0x0000000000000004ull
#define AR_NP_ERR_FIRST_FLG_NP_CHECKSUM_MASK                            	0x0000000000000002ull
#define AR_NP_ERR_FIRST_FLG_DIAG_ONLY_MASK                              	0x0000000000000001ull
#define AR_NP_ERR_FIRST_FLG_IDRAM_MBE_BP                                	16
#define AR_NP_ERR_FIRST_FLG_IDRAM_SBE_BP                                	15
#define AR_NP_ERR_FIRST_FLG_EDRAM_MBE_BP                                	14
#define AR_NP_ERR_FIRST_FLG_EDRAM_SBE_BP                                	13
#define AR_NP_ERR_FIRST_FLG_IRAM_MBE_BP                                 	12
#define AR_NP_ERR_FIRST_FLG_IRAM_SBE_BP                                 	11
#define AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE_BP                        	10
#define AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD_BP                        	9
#define AR_NP_ERR_FIRST_FLG_NP_LANE_BP                                  	8
#define AR_NP_ERR_FIRST_FLG_NP_TUNING_BP                                	7
#define AR_NP_ERR_FIRST_FLG_NP_SBUS_RD_BP                               	6
#define AR_NP_ERR_FIRST_FLG_NP_SBUS_WR_BP                               	5
#define AR_NP_ERR_FIRST_FLG_NP_CBUS_RD_BP                               	4
#define AR_NP_ERR_FIRST_FLG_NP_CBUS_WR_BP                               	3
#define AR_NP_ERR_FIRST_FLG_NP_SPICO_BP                                 	2
#define AR_NP_ERR_FIRST_FLG_NP_CHECKSUM_BP                              	1
#define AR_NP_ERR_FIRST_FLG_DIAG_ONLY_BP                                	0
#define AR_NP_ERR_FIRST_FLG_IDRAM_MBE_QW                                	0
#define AR_NP_ERR_FIRST_FLG_IDRAM_SBE_QW                                	0
#define AR_NP_ERR_FIRST_FLG_EDRAM_MBE_QW                                	0
#define AR_NP_ERR_FIRST_FLG_EDRAM_SBE_QW                                	0
#define AR_NP_ERR_FIRST_FLG_IRAM_MBE_QW                                 	0
#define AR_NP_ERR_FIRST_FLG_IRAM_SBE_QW                                 	0
#define AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE_QW                        	0
#define AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD_QW                        	0
#define AR_NP_ERR_FIRST_FLG_NP_LANE_QW                                  	0
#define AR_NP_ERR_FIRST_FLG_NP_TUNING_QW                                	0
#define AR_NP_ERR_FIRST_FLG_NP_SBUS_RD_QW                               	0
#define AR_NP_ERR_FIRST_FLG_NP_SBUS_WR_QW                               	0
#define AR_NP_ERR_FIRST_FLG_NP_CBUS_RD_QW                               	0
#define AR_NP_ERR_FIRST_FLG_NP_CBUS_WR_QW                               	0
#define AR_NP_ERR_FIRST_FLG_NP_SPICO_QW                                 	0
#define AR_NP_ERR_FIRST_FLG_NP_CHECKSUM_QW                              	0
#define AR_NP_ERR_FIRST_FLG_DIAG_ONLY_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_CFG_REQ_STREAM_LD_DP_IRAM DEFINES
 */
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE7_MASK                 	0xff00000000000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE6_MASK                 	0x00ff000000000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE5_MASK                 	0x0000ff0000000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE4_MASK                 	0x000000ff00000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE3_MASK                 	0x00000000ff000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE2_MASK                 	0x0000000000ff0000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE1_MASK                 	0x000000000000ff00ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE0_MASK                 	0x00000000000000ffull
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE7_BP                   	56
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE6_BP                   	48
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE5_BP                   	40
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE4_BP                   	32
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE3_BP                   	24
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE2_BP                   	16
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE1_BP                   	8
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE0_BP                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE7_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE6_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE5_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE4_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE3_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE2_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE1_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE0_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NP_CFG_REQ_STREAM_LD_DP_DRAM DEFINES
 */
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE7_MASK                 	0xff00000000000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE6_MASK                 	0x00ff000000000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE5_MASK                 	0x0000ff0000000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE4_MASK                 	0x000000ff00000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE3_MASK                 	0x00000000ff000000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE2_MASK                 	0x0000000000ff0000ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE1_MASK                 	0x000000000000ff00ull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE0_MASK                 	0x00000000000000ffull
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE7_BP                   	56
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE6_BP                   	48
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE5_BP                   	40
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE4_BP                   	32
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE3_BP                   	24
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE2_BP                   	16
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE1_BP                   	8
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE0_BP                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE7_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE6_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE5_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE4_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE3_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE2_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE1_QW                   	0
#define AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE0_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */



/*
 *  AR NP MACROS
 */
#ifndef RD_FIELD
#define RD_FIELD(d, bp, m)	(((d)&(m))>>(bp))
#endif
#ifndef WR_FIELD
#define WR_FIELD(mmr, d, bp, m)	(mmr = (((mmr) & ~(m)) | ((((uint64_t)(d))<<(bp)) & (m))))
#endif
#define RF_AR_NP_CFG_RST_RAM_CTRL(mmr)                          	RD_FIELD(mmr,\
									AR_NP_CFG_RST_RAM_CTRL_BP,\
									AR_NP_CFG_RST_RAM_CTRL_MASK)
#define WF_AR_NP_CFG_RST_RAM_CTRL(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_CFG_RST_RAM_CTRL_BP,\
									AR_NP_CFG_RST_RAM_CTRL_MASK)
#define RF_AR_NP_CFG_RST_SFR(mmr)                               	RD_FIELD(mmr,\
									AR_NP_CFG_RST_SFR_BP,\
									AR_NP_CFG_RST_SFR_MASK)
#define WF_AR_NP_CFG_RST_SFR(mmr,v)                             	WR_FIELD(mmr,v,\
									AR_NP_CFG_RST_SFR_BP,\
									AR_NP_CFG_RST_SFR_MASK)
#define RF_AR_NP_CFG_RST_PROC(mmr)                              	RD_FIELD(mmr,\
									AR_NP_CFG_RST_PROC_BP,\
									AR_NP_CFG_RST_PROC_MASK)
#define WF_AR_NP_CFG_RST_PROC(mmr,v)                            	WR_FIELD(mmr,v,\
									AR_NP_CFG_RST_PROC_BP,\
									AR_NP_CFG_RST_PROC_MASK)
#define RF_AR_NP_CFG_STOP_SBUS_SPICO(mmr)                       	RD_FIELD(mmr,\
									AR_NP_CFG_STOP_SBUS_SPICO_BP,\
									AR_NP_CFG_STOP_SBUS_SPICO_MASK)
#define WF_AR_NP_CFG_STOP_SBUS_SPICO(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_NP_CFG_STOP_SBUS_SPICO_BP,\
									AR_NP_CFG_STOP_SBUS_SPICO_MASK)
#define RF_AR_NP_CFG_CLKGEN_SPICO(mmr)                          	RD_FIELD(mmr,\
									AR_NP_CFG_CLKGEN_SPICO_BP,\
									AR_NP_CFG_CLKGEN_SPICO_MASK)
#define WF_AR_NP_CFG_CLKGEN_SPICO(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_CFG_CLKGEN_SPICO_BP,\
									AR_NP_CFG_CLKGEN_SPICO_MASK)
#define RF_AR_NP_CFG_CLKGEN_CBUS_OUT(mmr)                       	RD_FIELD(mmr,\
									AR_NP_CFG_CLKGEN_CBUS_OUT_BP,\
									AR_NP_CFG_CLKGEN_CBUS_OUT_MASK)
#define WF_AR_NP_CFG_CLKGEN_CBUS_OUT(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_NP_CFG_CLKGEN_CBUS_OUT_BP,\
									AR_NP_CFG_CLKGEN_CBUS_OUT_MASK)
#define RF_AR_NP_CFG_CLKGEN_CBUS(mmr)                           	RD_FIELD(mmr,\
									AR_NP_CFG_CLKGEN_CBUS_BP,\
									AR_NP_CFG_CLKGEN_CBUS_MASK)
#define WF_AR_NP_CFG_CLKGEN_CBUS(mmr,v)                         	WR_FIELD(mmr,v,\
									AR_NP_CFG_CLKGEN_CBUS_BP,\
									AR_NP_CFG_CLKGEN_CBUS_MASK)
#define RF_AR_NP_CFG_CLKGEN_PROC(mmr)                           	RD_FIELD(mmr,\
									AR_NP_CFG_CLKGEN_PROC_BP,\
									AR_NP_CFG_CLKGEN_PROC_MASK)
#define WF_AR_NP_CFG_CLKGEN_PROC(mmr,v)                         	WR_FIELD(mmr,v,\
									AR_NP_CFG_CLKGEN_PROC_BP,\
									AR_NP_CFG_CLKGEN_PROC_MASK)
#define RF_AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID(mmr)         	RD_FIELD(mmr,\
									AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID_MASK)
#define WF_AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_REQ_DATA_VALID_MASK)
#define RF_AR_NP_DBG_SFR_ACCESS_SFR_REQ(mmr)                    	RD_FIELD(mmr,\
									AR_NP_DBG_SFR_ACCESS_SFR_REQ_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_REQ_MASK)
#define WF_AR_NP_DBG_SFR_ACCESS_SFR_REQ(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_DBG_SFR_ACCESS_SFR_REQ_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_REQ_MASK)
#define RF_AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA(mmr)                 	RD_FIELD(mmr,\
									AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA_MASK)
#define WF_AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_WT_ENA_MASK)
#define RF_AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA(mmr)                	RD_FIELD(mmr,\
									AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA_MASK)
#define WF_AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_WT_DATA_MASK)
#define RF_AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA(mmr)                	RD_FIELD(mmr,\
									AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA_MASK)
#define WF_AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_RD_DATA_MASK)
#define RF_AR_NP_DBG_SFR_ACCESS_SFR_ADDR(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DBG_SFR_ACCESS_SFR_ADDR_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_ADDR_MASK)
#define WF_AR_NP_DBG_SFR_ACCESS_SFR_ADDR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DBG_SFR_ACCESS_SFR_ADDR_BP,\
									AR_NP_DBG_SFR_ACCESS_SFR_ADDR_MASK)
#define RF_AR_NP_DBG_PROCESSOR_DEBUGACS(mmr)                    	RD_FIELD(mmr,\
									AR_NP_DBG_PROCESSOR_DEBUGACS_BP,\
									AR_NP_DBG_PROCESSOR_DEBUGACS_MASK)
#define WF_AR_NP_DBG_PROCESSOR_DEBUGACS(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_DBG_PROCESSOR_DEBUGACS_BP,\
									AR_NP_DBG_PROCESSOR_DEBUGACS_MASK)
#define RF_AR_NP_DBG_PROCESSOR_CODERUN(mmr)                     	RD_FIELD(mmr,\
									AR_NP_DBG_PROCESSOR_CODERUN_BP,\
									AR_NP_DBG_PROCESSOR_CODERUN_MASK)
#define WF_AR_NP_DBG_PROCESSOR_CODERUN(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_DBG_PROCESSOR_CODERUN_BP,\
									AR_NP_DBG_PROCESSOR_CODERUN_MASK)
#define RF_AR_NP_DBG_PROCESSOR_HALT_PROC_CLK(mmr)               	RD_FIELD(mmr,\
									AR_NP_DBG_PROCESSOR_HALT_PROC_CLK_BP,\
									AR_NP_DBG_PROCESSOR_HALT_PROC_CLK_MASK)
#define WF_AR_NP_DBG_PROCESSOR_HALT_PROC_CLK(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NP_DBG_PROCESSOR_HALT_PROC_CLK_BP,\
									AR_NP_DBG_PROCESSOR_HALT_PROC_CLK_MASK)
#define RF_AR_NP_DBG_PROCESSOR_ENA_INT(mmr)                     	RD_FIELD(mmr,\
									AR_NP_DBG_PROCESSOR_ENA_INT_BP,\
									AR_NP_DBG_PROCESSOR_ENA_INT_MASK)
#define WF_AR_NP_DBG_PROCESSOR_ENA_INT(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_DBG_PROCESSOR_ENA_INT_BP,\
									AR_NP_DBG_PROCESSOR_ENA_INT_MASK)
#define RF_AR_NP_DBG_PROCESSOR_INTS(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DBG_PROCESSOR_INTS_BP,\
									AR_NP_DBG_PROCESSOR_INTS_MASK)
#define WF_AR_NP_DBG_PROCESSOR_INTS(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DBG_PROCESSOR_INTS_BP,\
									AR_NP_DBG_PROCESSOR_INTS_MASK)
#define RF_AR_NP_CFG_REQ_SBUS_EXE(mmr)                          	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_SBUS_EXE_BP,\
									AR_NP_CFG_REQ_SBUS_EXE_MASK)
#define WF_AR_NP_CFG_REQ_SBUS_EXE(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_SBUS_EXE_BP,\
									AR_NP_CFG_REQ_SBUS_EXE_MASK)
#define RF_AR_NP_CFG_REQ_SBUS_DATA(mmr)                         	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_SBUS_DATA_BP,\
									AR_NP_CFG_REQ_SBUS_DATA_MASK)
#define WF_AR_NP_CFG_REQ_SBUS_DATA(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_SBUS_DATA_BP,\
									AR_NP_CFG_REQ_SBUS_DATA_MASK)
#define RF_AR_NP_CFG_REQ_SBUS_CMD(mmr)                          	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_SBUS_CMD_BP,\
									AR_NP_CFG_REQ_SBUS_CMD_MASK)
#define WF_AR_NP_CFG_REQ_SBUS_CMD(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_SBUS_CMD_BP,\
									AR_NP_CFG_REQ_SBUS_CMD_MASK)
#define RF_AR_NP_CFG_REQ_SBUS_DATA_ADDR(mmr)                    	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_SBUS_DATA_ADDR_BP,\
									AR_NP_CFG_REQ_SBUS_DATA_ADDR_MASK)
#define WF_AR_NP_CFG_REQ_SBUS_DATA_ADDR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_SBUS_DATA_ADDR_BP,\
									AR_NP_CFG_REQ_SBUS_DATA_ADDR_MASK)
#define RF_AR_NP_CFG_REQ_SBUS_RCV_ADDR(mmr)                     	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_SBUS_RCV_ADDR_BP,\
									AR_NP_CFG_REQ_SBUS_RCV_ADDR_MASK)
#define WF_AR_NP_CFG_REQ_SBUS_RCV_ADDR(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_SBUS_RCV_ADDR_BP,\
									AR_NP_CFG_REQ_SBUS_RCV_ADDR_MASK)
#define RF_AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC(mmr)           	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC_BP,\
									AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC_MASK)
#define WF_AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC_BP,\
									AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_PROC_MASK)
#define RF_AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR(mmr)            	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR_BP,\
									AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR_MASK)
#define WF_AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR_BP,\
									AR_NP_CFG_RSP_SBUS_DATA_VLD_MODE_MMR_MASK)
#define RF_AR_NP_CFG_RSP_SBUS_DONE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_SBUS_DONE_BP,\
									AR_NP_CFG_RSP_SBUS_DONE_MASK)
#define WF_AR_NP_CFG_RSP_SBUS_DONE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_SBUS_DONE_BP,\
									AR_NP_CFG_RSP_SBUS_DONE_MASK)
#define RF_AR_NP_CFG_RSP_SBUS_DATA_OUT(mmr)                     	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_SBUS_DATA_OUT_BP,\
									AR_NP_CFG_RSP_SBUS_DATA_OUT_MASK)
#define WF_AR_NP_CFG_RSP_SBUS_DATA_OUT(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_SBUS_DATA_OUT_BP,\
									AR_NP_CFG_RSP_SBUS_DATA_OUT_MASK)
#define RF_AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID(mmr)               	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID_BP,\
									AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID_MASK)
#define WF_AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID_BP,\
									AR_NP_CFG_RSP_SBUS_RCV_DATA_VALID_MASK)
#define RF_AR_NP_CFG_RSP_SBUS_RESULT_CODE(mmr)                  	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_SBUS_RESULT_CODE_BP,\
									AR_NP_CFG_RSP_SBUS_RESULT_CODE_MASK)
#define WF_AR_NP_CFG_RSP_SBUS_RESULT_CODE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_SBUS_RESULT_CODE_BP,\
									AR_NP_CFG_RSP_SBUS_RESULT_CODE_MASK)
#define RF_AR_NP_CFG_REQ_CBUS_EXE(mmr)                          	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_CBUS_EXE_BP,\
									AR_NP_CFG_REQ_CBUS_EXE_MASK)
#define WF_AR_NP_CFG_REQ_CBUS_EXE(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_CBUS_EXE_BP,\
									AR_NP_CFG_REQ_CBUS_EXE_MASK)
#define RF_AR_NP_CFG_REQ_CBUS_DATA(mmr)                         	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_CBUS_DATA_BP,\
									AR_NP_CFG_REQ_CBUS_DATA_MASK)
#define WF_AR_NP_CFG_REQ_CBUS_DATA(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_CBUS_DATA_BP,\
									AR_NP_CFG_REQ_CBUS_DATA_MASK)
#define RF_AR_NP_CFG_REQ_CBUS_CMD(mmr)                          	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_CBUS_CMD_BP,\
									AR_NP_CFG_REQ_CBUS_CMD_MASK)
#define WF_AR_NP_CFG_REQ_CBUS_CMD(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_CBUS_CMD_BP,\
									AR_NP_CFG_REQ_CBUS_CMD_MASK)
#define RF_AR_NP_CFG_REQ_CBUS_DATA_ADDR(mmr)                    	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_CBUS_DATA_ADDR_BP,\
									AR_NP_CFG_REQ_CBUS_DATA_ADDR_MASK)
#define WF_AR_NP_CFG_REQ_CBUS_DATA_ADDR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_CBUS_DATA_ADDR_BP,\
									AR_NP_CFG_REQ_CBUS_DATA_ADDR_MASK)
#define RF_AR_NP_CFG_REQ_CBUS_RCV_ADDR(mmr)                     	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_CBUS_RCV_ADDR_BP,\
									AR_NP_CFG_REQ_CBUS_RCV_ADDR_MASK)
#define WF_AR_NP_CFG_REQ_CBUS_RCV_ADDR(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_CBUS_RCV_ADDR_BP,\
									AR_NP_CFG_REQ_CBUS_RCV_ADDR_MASK)
#define RF_AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC(mmr)           	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC_BP,\
									AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC_MASK)
#define WF_AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC_BP,\
									AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_PROC_MASK)
#define RF_AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR(mmr)            	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR_BP,\
									AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR_MASK)
#define WF_AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR_BP,\
									AR_NP_CFG_RSP_CBUS_DATA_VLD_MODE_MMR_MASK)
#define RF_AR_NP_CFG_RSP_CBUS_DONE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_CBUS_DONE_BP,\
									AR_NP_CFG_RSP_CBUS_DONE_MASK)
#define WF_AR_NP_CFG_RSP_CBUS_DONE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_CBUS_DONE_BP,\
									AR_NP_CFG_RSP_CBUS_DONE_MASK)
#define RF_AR_NP_CFG_RSP_CBUS_DATA_OUT(mmr)                     	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_CBUS_DATA_OUT_BP,\
									AR_NP_CFG_RSP_CBUS_DATA_OUT_MASK)
#define WF_AR_NP_CFG_RSP_CBUS_DATA_OUT(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_CBUS_DATA_OUT_BP,\
									AR_NP_CFG_RSP_CBUS_DATA_OUT_MASK)
#define RF_AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID(mmr)               	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID_BP,\
									AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID_MASK)
#define WF_AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID_BP,\
									AR_NP_CFG_RSP_CBUS_RCV_DATA_VALID_MASK)
#define RF_AR_NP_CFG_RSP_CBUS_RESULT_CODE(mmr)                  	RD_FIELD(mmr,\
									AR_NP_CFG_RSP_CBUS_RESULT_CODE_BP,\
									AR_NP_CFG_RSP_CBUS_RESULT_CODE_MASK)
#define WF_AR_NP_CFG_RSP_CBUS_RESULT_CODE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NP_CFG_RSP_CBUS_RESULT_CODE_BP,\
									AR_NP_CFG_RSP_CBUS_RESULT_CODE_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE(mmr)             	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_VOLTMODE_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_REQ_WRITE(mmr)                	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_REQ_WRITE_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_WRITE_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_REQ_WRITE(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_REQ_WRITE_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_WRITE_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_REQ_START(mmr)                	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_REQ_START_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_START_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_REQ_START(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_REQ_START_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_START_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_REQ_RESET(mmr)                	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_REQ_RESET_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_RESET_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_REQ_RESET(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_REQ_RESET_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_RESET_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_REQ_READ(mmr)                 	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_REQ_READ_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_READ_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_REQ_READ(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_REQ_READ_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_READ_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_REQ_ADDR(mmr)                 	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_REQ_ADDR_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_ADDR_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_REQ_ADDR(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_REQ_ADDR_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_ADDR_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_REQ_DATA_IN(mmr)              	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_REQ_DATA_IN_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_DATA_IN_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_REQ_DATA_IN(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_REQ_DATA_IN_BP,\
									AR_NP_STS_THERM_SENSOR_REQ_DATA_IN_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK(mmr)            	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_WRITE_ACK_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_RSP_VALID(mmr)                	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_RSP_VALID_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_VALID_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_RSP_VALID(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_RSP_VALID_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_VALID_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_RSP_READ_ACK(mmr)             	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_RSP_READ_ACK_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_READ_ACK_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_RSP_READ_ACK(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_RSP_READ_ACK_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_READ_ACK_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_RSP_VALUE(mmr)                	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_RSP_VALUE_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_VALUE_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_RSP_VALUE(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_RSP_VALUE_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_VALUE_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT(mmr)             	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT_BP,\
									AR_NP_STS_THERM_SENSOR_RSP_DATA_OUT_MASK)
#define RF_AR_NP_DBG_ERRINJ_ECC_CLR_ERR(mmr)                    	RD_FIELD(mmr,\
									AR_NP_DBG_ERRINJ_ECC_CLR_ERR_BP,\
									AR_NP_DBG_ERRINJ_ECC_CLR_ERR_MASK)
#define WF_AR_NP_DBG_ERRINJ_ECC_CLR_ERR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_DBG_ERRINJ_ECC_CLR_ERR_BP,\
									AR_NP_DBG_ERRINJ_ECC_CLR_ERR_MASK)
#define RF_AR_NP_DBG_ERRINJ_ECC_ADDRESS(mmr)                    	RD_FIELD(mmr,\
									AR_NP_DBG_ERRINJ_ECC_ADDRESS_BP,\
									AR_NP_DBG_ERRINJ_ECC_ADDRESS_MASK)
#define WF_AR_NP_DBG_ERRINJ_ECC_ADDRESS(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_DBG_ERRINJ_ECC_ADDRESS_BP,\
									AR_NP_DBG_ERRINJ_ECC_ADDRESS_MASK)
#define RF_AR_NP_DBG_ERRINJ_ECC_CHECKBYTE(mmr)                  	RD_FIELD(mmr,\
									AR_NP_DBG_ERRINJ_ECC_CHECKBYTE_BP,\
									AR_NP_DBG_ERRINJ_ECC_CHECKBYTE_MASK)
#define WF_AR_NP_DBG_ERRINJ_ECC_CHECKBYTE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NP_DBG_ERRINJ_ECC_CHECKBYTE_BP,\
									AR_NP_DBG_ERRINJ_ECC_CHECKBYTE_MASK)
#define RF_AR_NP_DBG_ERRINJ_ECC_RAMSELECT(mmr)                  	RD_FIELD(mmr,\
									AR_NP_DBG_ERRINJ_ECC_RAMSELECT_BP,\
									AR_NP_DBG_ERRINJ_ECC_RAMSELECT_MASK)
#define WF_AR_NP_DBG_ERRINJ_ECC_RAMSELECT(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NP_DBG_ERRINJ_ECC_RAMSELECT_BP,\
									AR_NP_DBG_ERRINJ_ECC_RAMSELECT_MASK)
#define RF_AR_NP_DBG_ERRINJ_ECC_MODE(mmr)                       	RD_FIELD(mmr,\
									AR_NP_DBG_ERRINJ_ECC_MODE_BP,\
									AR_NP_DBG_ERRINJ_ECC_MODE_MASK)
#define WF_AR_NP_DBG_ERRINJ_ECC_MODE(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_NP_DBG_ERRINJ_ECC_MODE_BP,\
									AR_NP_DBG_ERRINJ_ECC_MODE_MASK)
#define RF_AR_NP_DBG_ERRINJ_ECC_ENABLE(mmr)                     	RD_FIELD(mmr,\
									AR_NP_DBG_ERRINJ_ECC_ENABLE_BP,\
									AR_NP_DBG_ERRINJ_ECC_ENABLE_MASK)
#define WF_AR_NP_DBG_ERRINJ_ECC_ENABLE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_DBG_ERRINJ_ECC_ENABLE_BP,\
									AR_NP_DBG_ERRINJ_ECC_ENABLE_MASK)
#define RF_AR_NP_ERR_INFO_IRAM_MBE_SYND(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IRAM_MBE_SYND_BP,\
									AR_NP_ERR_INFO_IRAM_MBE_SYND_MASK)
#define WF_AR_NP_ERR_INFO_IRAM_MBE_SYND(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IRAM_MBE_SYND_BP,\
									AR_NP_ERR_INFO_IRAM_MBE_SYND_MASK)
#define RF_AR_NP_ERR_INFO_IRAM_SBE_SYND(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IRAM_SBE_SYND_BP,\
									AR_NP_ERR_INFO_IRAM_SBE_SYND_MASK)
#define WF_AR_NP_ERR_INFO_IRAM_SBE_SYND(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IRAM_SBE_SYND_BP,\
									AR_NP_ERR_INFO_IRAM_SBE_SYND_MASK)
#define RF_AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE(mmr)             	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE_BP,\
									AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE_MASK)
#define WF_AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE_BP,\
									AR_NP_ERR_INFO_IRAM_MMR_CREATED_MBE_MASK)
#define RF_AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE(mmr)             	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE_BP,\
									AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE_MASK)
#define WF_AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE_BP,\
									AR_NP_ERR_INFO_IRAM_MMR_CREATED_SBE_MASK)
#define RF_AR_NP_ERR_INFO_IRAM_MBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IRAM_MBE_BP,\
									AR_NP_ERR_INFO_IRAM_MBE_MASK)
#define WF_AR_NP_ERR_INFO_IRAM_MBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IRAM_MBE_BP,\
									AR_NP_ERR_INFO_IRAM_MBE_MASK)
#define RF_AR_NP_ERR_INFO_IRAM_SBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IRAM_SBE_BP,\
									AR_NP_ERR_INFO_IRAM_SBE_MASK)
#define WF_AR_NP_ERR_INFO_IRAM_SBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IRAM_SBE_BP,\
									AR_NP_ERR_INFO_IRAM_SBE_MASK)
#define RF_AR_NP_ERR_INFO_DRAM_MBE_SYND(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_DRAM_MBE_SYND_BP,\
									AR_NP_ERR_INFO_DRAM_MBE_SYND_MASK)
#define WF_AR_NP_ERR_INFO_DRAM_MBE_SYND(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_DRAM_MBE_SYND_BP,\
									AR_NP_ERR_INFO_DRAM_MBE_SYND_MASK)
#define RF_AR_NP_ERR_INFO_DRAM_SBE_SYND(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_DRAM_SBE_SYND_BP,\
									AR_NP_ERR_INFO_DRAM_SBE_SYND_MASK)
#define WF_AR_NP_ERR_INFO_DRAM_SBE_SYND(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_DRAM_SBE_SYND_BP,\
									AR_NP_ERR_INFO_DRAM_SBE_SYND_MASK)
#define RF_AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE(mmr)             	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE_BP,\
									AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE_MASK)
#define WF_AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE_BP,\
									AR_NP_ERR_INFO_DRAM_MMR_CREATED_MBE_MASK)
#define RF_AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE(mmr)             	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE_BP,\
									AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE_MASK)
#define WF_AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE_BP,\
									AR_NP_ERR_INFO_DRAM_MMR_CREATED_SBE_MASK)
#define RF_AR_NP_ERR_INFO_DRAM_MBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_DRAM_MBE_BP,\
									AR_NP_ERR_INFO_DRAM_MBE_MASK)
#define WF_AR_NP_ERR_INFO_DRAM_MBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_DRAM_MBE_BP,\
									AR_NP_ERR_INFO_DRAM_MBE_MASK)
#define RF_AR_NP_ERR_INFO_DRAM_SBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_DRAM_SBE_BP,\
									AR_NP_ERR_INFO_DRAM_SBE_MASK)
#define WF_AR_NP_ERR_INFO_DRAM_SBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_DRAM_SBE_BP,\
									AR_NP_ERR_INFO_DRAM_SBE_MASK)
#define RF_AR_NP_ERR_INFO_IDRAM_MBE_SYND(mmr)                   	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IDRAM_MBE_SYND_BP,\
									AR_NP_ERR_INFO_IDRAM_MBE_SYND_MASK)
#define WF_AR_NP_ERR_INFO_IDRAM_MBE_SYND(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IDRAM_MBE_SYND_BP,\
									AR_NP_ERR_INFO_IDRAM_MBE_SYND_MASK)
#define RF_AR_NP_ERR_INFO_IDRAM_SBE_SYND(mmr)                   	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IDRAM_SBE_SYND_BP,\
									AR_NP_ERR_INFO_IDRAM_SBE_SYND_MASK)
#define WF_AR_NP_ERR_INFO_IDRAM_SBE_SYND(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IDRAM_SBE_SYND_BP,\
									AR_NP_ERR_INFO_IDRAM_SBE_SYND_MASK)
#define RF_AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE(mmr)            	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE_BP,\
									AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE_MASK)
#define WF_AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE_BP,\
									AR_NP_ERR_INFO_IDRAM_MMR_CREATED_MBE_MASK)
#define RF_AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE(mmr)            	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE_BP,\
									AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE_MASK)
#define WF_AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE_BP,\
									AR_NP_ERR_INFO_IDRAM_MMR_CREATED_SBE_MASK)
#define RF_AR_NP_ERR_INFO_IDRAM_MBE(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IDRAM_MBE_BP,\
									AR_NP_ERR_INFO_IDRAM_MBE_MASK)
#define WF_AR_NP_ERR_INFO_IDRAM_MBE(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IDRAM_MBE_BP,\
									AR_NP_ERR_INFO_IDRAM_MBE_MASK)
#define RF_AR_NP_ERR_INFO_IDRAM_SBE(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_IDRAM_SBE_BP,\
									AR_NP_ERR_INFO_IDRAM_SBE_MASK)
#define WF_AR_NP_ERR_INFO_IDRAM_SBE(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_IDRAM_SBE_BP,\
									AR_NP_ERR_INFO_IDRAM_SBE_MASK)
#define RF_AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT(mmr)               	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT_MASK)
#define WF_AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_IRAM_MBE_COUNT_MASK)
#define RF_AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT(mmr)               	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT_MASK)
#define WF_AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_IRAM_SBE_COUNT_MASK)
#define RF_AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT(mmr)               	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT_MASK)
#define WF_AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_DRAM_MBE_COUNT_MASK)
#define RF_AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT(mmr)               	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT_MASK)
#define WF_AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_DRAM_SBE_COUNT_MASK)
#define RF_AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT(mmr)              	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT_MASK)
#define WF_AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_IDRAM_MBE_COUNT_MASK)
#define RF_AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT(mmr)              	RD_FIELD(mmr,\
									AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT_MASK)
#define WF_AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT_BP,\
									AR_NP_ERR_INFO_CNT_IDRAM_SBE_COUNT_MASK)
#define RF_AR_NP_DEB_MON_SFR0_CBUS_DATA0(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA0_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA0_MASK)
#define WF_AR_NP_DEB_MON_SFR0_CBUS_DATA0(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA0_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA0_MASK)
#define RF_AR_NP_DEB_MON_SFR0_CBUS_DATA1(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA1_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA1_MASK)
#define WF_AR_NP_DEB_MON_SFR0_CBUS_DATA1(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA1_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA1_MASK)
#define RF_AR_NP_DEB_MON_SFR0_CBUS_DATA2(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA2_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA2_MASK)
#define WF_AR_NP_DEB_MON_SFR0_CBUS_DATA2(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA2_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA2_MASK)
#define RF_AR_NP_DEB_MON_SFR0_CBUS_DATA3(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA3_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA3_MASK)
#define WF_AR_NP_DEB_MON_SFR0_CBUS_DATA3(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA3_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DATA3_MASK)
#define RF_AR_NP_DEB_MON_SFR0_CBUS_DADDR(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR0_CBUS_DADDR_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DADDR_MASK)
#define WF_AR_NP_DEB_MON_SFR0_CBUS_DADDR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR0_CBUS_DADDR_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_DADDR_MASK)
#define RF_AR_NP_DEB_MON_SFR0_CBUS_RADDR(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR0_CBUS_RADDR_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_RADDR_MASK)
#define WF_AR_NP_DEB_MON_SFR0_CBUS_RADDR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR0_CBUS_RADDR_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_RADDR_MASK)
#define RF_AR_NP_DEB_MON_SFR0_CBUS_COMMD(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR0_CBUS_COMMD_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_COMMD_MASK)
#define WF_AR_NP_DEB_MON_SFR0_CBUS_COMMD(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR0_CBUS_COMMD_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_COMMD_MASK)
#define RF_AR_NP_DEB_MON_SFR0_CBUS_MISCS(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR0_CBUS_MISCS_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_MISCS_MASK)
#define WF_AR_NP_DEB_MON_SFR0_CBUS_MISCS(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR0_CBUS_MISCS_BP,\
									AR_NP_DEB_MON_SFR0_CBUS_MISCS_MASK)
#define RF_AR_NP_DEB_MON_SFR1_SBUS_DATA0(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA0_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA0_MASK)
#define WF_AR_NP_DEB_MON_SFR1_SBUS_DATA0(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA0_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA0_MASK)
#define RF_AR_NP_DEB_MON_SFR1_SBUS_DATA1(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA1_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA1_MASK)
#define WF_AR_NP_DEB_MON_SFR1_SBUS_DATA1(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA1_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA1_MASK)
#define RF_AR_NP_DEB_MON_SFR1_SBUS_DATA2(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA2_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA2_MASK)
#define WF_AR_NP_DEB_MON_SFR1_SBUS_DATA2(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA2_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA2_MASK)
#define RF_AR_NP_DEB_MON_SFR1_SBUS_DATA3(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA3_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA3_MASK)
#define WF_AR_NP_DEB_MON_SFR1_SBUS_DATA3(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA3_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DATA3_MASK)
#define RF_AR_NP_DEB_MON_SFR1_SBUS_DADDR(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR1_SBUS_DADDR_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DADDR_MASK)
#define WF_AR_NP_DEB_MON_SFR1_SBUS_DADDR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR1_SBUS_DADDR_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_DADDR_MASK)
#define RF_AR_NP_DEB_MON_SFR1_SBUS_RADDR(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR1_SBUS_RADDR_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_RADDR_MASK)
#define WF_AR_NP_DEB_MON_SFR1_SBUS_RADDR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR1_SBUS_RADDR_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_RADDR_MASK)
#define RF_AR_NP_DEB_MON_SFR1_SBUS_COMMD(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR1_SBUS_COMMD_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_COMMD_MASK)
#define WF_AR_NP_DEB_MON_SFR1_SBUS_COMMD(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR1_SBUS_COMMD_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_COMMD_MASK)
#define RF_AR_NP_DEB_MON_SFR1_SBUS_MISCS(mmr)                   	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR1_SBUS_MISCS_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_MISCS_MASK)
#define WF_AR_NP_DEB_MON_SFR1_SBUS_MISCS(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR1_SBUS_MISCS_BP,\
									AR_NP_DEB_MON_SFR1_SBUS_MISCS_MASK)
#define RF_AR_NP_DEB_MON_SFR2_TMP08(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR2_TMP08_BP,\
									AR_NP_DEB_MON_SFR2_TMP08_MASK)
#define WF_AR_NP_DEB_MON_SFR2_TMP08(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR2_TMP08_BP,\
									AR_NP_DEB_MON_SFR2_TMP08_MASK)
#define RF_AR_NP_DEB_MON_SFR2_TMP07(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR2_TMP07_BP,\
									AR_NP_DEB_MON_SFR2_TMP07_MASK)
#define WF_AR_NP_DEB_MON_SFR2_TMP07(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR2_TMP07_BP,\
									AR_NP_DEB_MON_SFR2_TMP07_MASK)
#define RF_AR_NP_DEB_MON_SFR2_TMP06(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR2_TMP06_BP,\
									AR_NP_DEB_MON_SFR2_TMP06_MASK)
#define WF_AR_NP_DEB_MON_SFR2_TMP06(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR2_TMP06_BP,\
									AR_NP_DEB_MON_SFR2_TMP06_MASK)
#define RF_AR_NP_DEB_MON_SFR2_TMP05(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR2_TMP05_BP,\
									AR_NP_DEB_MON_SFR2_TMP05_MASK)
#define WF_AR_NP_DEB_MON_SFR2_TMP05(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR2_TMP05_BP,\
									AR_NP_DEB_MON_SFR2_TMP05_MASK)
#define RF_AR_NP_DEB_MON_SFR2_TMP04(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR2_TMP04_BP,\
									AR_NP_DEB_MON_SFR2_TMP04_MASK)
#define WF_AR_NP_DEB_MON_SFR2_TMP04(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR2_TMP04_BP,\
									AR_NP_DEB_MON_SFR2_TMP04_MASK)
#define RF_AR_NP_DEB_MON_SFR2_TMP03(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR2_TMP03_BP,\
									AR_NP_DEB_MON_SFR2_TMP03_MASK)
#define WF_AR_NP_DEB_MON_SFR2_TMP03(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR2_TMP03_BP,\
									AR_NP_DEB_MON_SFR2_TMP03_MASK)
#define RF_AR_NP_DEB_MON_SFR2_TMP02(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR2_TMP02_BP,\
									AR_NP_DEB_MON_SFR2_TMP02_MASK)
#define WF_AR_NP_DEB_MON_SFR2_TMP02(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR2_TMP02_BP,\
									AR_NP_DEB_MON_SFR2_TMP02_MASK)
#define RF_AR_NP_DEB_MON_SFR2_TMP01(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR2_TMP01_BP,\
									AR_NP_DEB_MON_SFR2_TMP01_MASK)
#define WF_AR_NP_DEB_MON_SFR2_TMP01(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR2_TMP01_BP,\
									AR_NP_DEB_MON_SFR2_TMP01_MASK)
#define RF_AR_NP_DEB_MON_SFR3_TMP16(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR3_TMP16_BP,\
									AR_NP_DEB_MON_SFR3_TMP16_MASK)
#define WF_AR_NP_DEB_MON_SFR3_TMP16(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR3_TMP16_BP,\
									AR_NP_DEB_MON_SFR3_TMP16_MASK)
#define RF_AR_NP_DEB_MON_SFR3_TMP15(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR3_TMP15_BP,\
									AR_NP_DEB_MON_SFR3_TMP15_MASK)
#define WF_AR_NP_DEB_MON_SFR3_TMP15(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR3_TMP15_BP,\
									AR_NP_DEB_MON_SFR3_TMP15_MASK)
#define RF_AR_NP_DEB_MON_SFR3_TMP14(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR3_TMP14_BP,\
									AR_NP_DEB_MON_SFR3_TMP14_MASK)
#define WF_AR_NP_DEB_MON_SFR3_TMP14(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR3_TMP14_BP,\
									AR_NP_DEB_MON_SFR3_TMP14_MASK)
#define RF_AR_NP_DEB_MON_SFR3_TMP13(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR3_TMP13_BP,\
									AR_NP_DEB_MON_SFR3_TMP13_MASK)
#define WF_AR_NP_DEB_MON_SFR3_TMP13(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR3_TMP13_BP,\
									AR_NP_DEB_MON_SFR3_TMP13_MASK)
#define RF_AR_NP_DEB_MON_SFR3_TMP12(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR3_TMP12_BP,\
									AR_NP_DEB_MON_SFR3_TMP12_MASK)
#define WF_AR_NP_DEB_MON_SFR3_TMP12(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR3_TMP12_BP,\
									AR_NP_DEB_MON_SFR3_TMP12_MASK)
#define RF_AR_NP_DEB_MON_SFR3_TMP11(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR3_TMP11_BP,\
									AR_NP_DEB_MON_SFR3_TMP11_MASK)
#define WF_AR_NP_DEB_MON_SFR3_TMP11(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR3_TMP11_BP,\
									AR_NP_DEB_MON_SFR3_TMP11_MASK)
#define RF_AR_NP_DEB_MON_SFR3_TMP10(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR3_TMP10_BP,\
									AR_NP_DEB_MON_SFR3_TMP10_MASK)
#define WF_AR_NP_DEB_MON_SFR3_TMP10(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR3_TMP10_BP,\
									AR_NP_DEB_MON_SFR3_TMP10_MASK)
#define RF_AR_NP_DEB_MON_SFR3_TMP09(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR3_TMP09_BP,\
									AR_NP_DEB_MON_SFR3_TMP09_MASK)
#define WF_AR_NP_DEB_MON_SFR3_TMP09(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR3_TMP09_BP,\
									AR_NP_DEB_MON_SFR3_TMP09_MASK)
#define RF_AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD_BP,\
									AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD_BP,\
									AR_NP_DEB_MON_SFR4_CBUS_MISCS_RD_MASK)
#define RF_AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD_BP,\
									AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD_BP,\
									AR_NP_DEB_MON_SFR4_SBUS_MISCS_RD_MASK)
#define RF_AR_NP_DEB_MON_SFR4_PORT3(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR4_PORT3_BP,\
									AR_NP_DEB_MON_SFR4_PORT3_MASK)
#define WF_AR_NP_DEB_MON_SFR4_PORT3(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR4_PORT3_BP,\
									AR_NP_DEB_MON_SFR4_PORT3_MASK)
#define RF_AR_NP_DEB_MON_SFR4_PORT2(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR4_PORT2_BP,\
									AR_NP_DEB_MON_SFR4_PORT2_MASK)
#define WF_AR_NP_DEB_MON_SFR4_PORT2(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR4_PORT2_BP,\
									AR_NP_DEB_MON_SFR4_PORT2_MASK)
#define RF_AR_NP_DEB_MON_SFR4_PORT1(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR4_PORT1_BP,\
									AR_NP_DEB_MON_SFR4_PORT1_MASK)
#define WF_AR_NP_DEB_MON_SFR4_PORT1(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR4_PORT1_BP,\
									AR_NP_DEB_MON_SFR4_PORT1_MASK)
#define RF_AR_NP_DEB_MON_SFR4_PORT0(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR4_PORT0_BP,\
									AR_NP_DEB_MON_SFR4_PORT0_MASK)
#define WF_AR_NP_DEB_MON_SFR4_PORT0(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR4_PORT0_BP,\
									AR_NP_DEB_MON_SFR4_PORT0_MASK)
#define RF_AR_NP_DEB_MON_SFR4_TMP18(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR4_TMP18_BP,\
									AR_NP_DEB_MON_SFR4_TMP18_MASK)
#define WF_AR_NP_DEB_MON_SFR4_TMP18(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR4_TMP18_BP,\
									AR_NP_DEB_MON_SFR4_TMP18_MASK)
#define RF_AR_NP_DEB_MON_SFR4_TMP17(mmr)                        	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR4_TMP17_BP,\
									AR_NP_DEB_MON_SFR4_TMP17_MASK)
#define WF_AR_NP_DEB_MON_SFR4_TMP17(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR4_TMP17_BP,\
									AR_NP_DEB_MON_SFR4_TMP17_MASK)
#define RF_AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD_BP,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD_BP,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA3_RD_MASK)
#define RF_AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD_BP,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD_BP,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA2_RD_MASK)
#define RF_AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD_BP,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD_BP,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA1_RD_MASK)
#define RF_AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD_BP,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD_BP,\
									AR_NP_DEB_MON_SFR5_CBUS_DATA0_RD_MASK)
#define RF_AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD_BP,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD_BP,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA3_RD_MASK)
#define RF_AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD_BP,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD_BP,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA2_RD_MASK)
#define RF_AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD_BP,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD_BP,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA1_RD_MASK)
#define RF_AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD(mmr)                	RD_FIELD(mmr,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD_BP,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD_MASK)
#define WF_AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD_BP,\
									AR_NP_DEB_MON_SFR5_SBUS_DATA0_RD_MASK)
#define RF_AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT(mmr)	RD_FIELD(mmr,\
									AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT_BP,\
									AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT_MASK)
#define WF_AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT(mmr,v)	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT_BP,\
									AR_NP_DEB_MON_HEATBEAT_CNT_RESET_SBUS_CBUS_CMD_CNT_MASK)
#define RF_AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT(mmr)	RD_FIELD(mmr,\
									AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT_BP,\
									AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT_MASK)
#define WF_AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT(mmr,v)	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT_BP,\
									AR_NP_DEB_MON_HEATBEAT_CNT_RESET_PRG_ADDR_CHNANGE_CNT_MASK)
#define RF_AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT(mmr)  	RD_FIELD(mmr,\
									AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT_BP,\
									AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT_MASK)
#define WF_AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT(mmr,v)	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT_BP,\
									AR_NP_DEB_MON_HEATBEAT_CNT_PRG_ADDR_CHANGE_CNT_MASK)
#define RF_AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT(mmr)    	RD_FIELD(mmr,\
									AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT_BP,\
									AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT_MASK)
#define WF_AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT_BP,\
									AR_NP_DEB_MON_HEATBEAT_CNT_SBUS_CBUS_CMD_CNT_MASK)
#define RF_AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE(mmr)           	RD_FIELD(mmr,\
									AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE_BP,\
									AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE_MASK)
#define WF_AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE_BP,\
									AR_NP_STS_THERM_SENSOR_CFG_CLK_DIVIDE_MASK)
#define RF_AR_NP_ERR_FLG_IDRAM_MBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_IDRAM_MBE_BP,\
									AR_NP_ERR_FLG_IDRAM_MBE_MASK)
#define WF_AR_NP_ERR_FLG_IDRAM_MBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_IDRAM_MBE_BP,\
									AR_NP_ERR_FLG_IDRAM_MBE_MASK)
#define RF_AR_NP_ERR_FLG_IDRAM_SBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_IDRAM_SBE_BP,\
									AR_NP_ERR_FLG_IDRAM_SBE_MASK)
#define WF_AR_NP_ERR_FLG_IDRAM_SBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_IDRAM_SBE_BP,\
									AR_NP_ERR_FLG_IDRAM_SBE_MASK)
#define RF_AR_NP_ERR_FLG_EDRAM_MBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_EDRAM_MBE_BP,\
									AR_NP_ERR_FLG_EDRAM_MBE_MASK)
#define WF_AR_NP_ERR_FLG_EDRAM_MBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_EDRAM_MBE_BP,\
									AR_NP_ERR_FLG_EDRAM_MBE_MASK)
#define RF_AR_NP_ERR_FLG_EDRAM_SBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_EDRAM_SBE_BP,\
									AR_NP_ERR_FLG_EDRAM_SBE_MASK)
#define WF_AR_NP_ERR_FLG_EDRAM_SBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_EDRAM_SBE_BP,\
									AR_NP_ERR_FLG_EDRAM_SBE_MASK)
#define RF_AR_NP_ERR_FLG_IRAM_MBE(mmr)                          	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_IRAM_MBE_BP,\
									AR_NP_ERR_FLG_IRAM_MBE_MASK)
#define WF_AR_NP_ERR_FLG_IRAM_MBE(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_IRAM_MBE_BP,\
									AR_NP_ERR_FLG_IRAM_MBE_MASK)
#define RF_AR_NP_ERR_FLG_IRAM_SBE(mmr)                          	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_IRAM_SBE_BP,\
									AR_NP_ERR_FLG_IRAM_SBE_MASK)
#define WF_AR_NP_ERR_FLG_IRAM_SBE(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_IRAM_SBE_BP,\
									AR_NP_ERR_FLG_IRAM_SBE_MASK)
#define RF_AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE(mmr)                 	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE_BP,\
									AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE_MASK)
#define WF_AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE_BP,\
									AR_NP_ERR_FLG_HEARTBEAT_PC_IDLE_MASK)
#define RF_AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD(mmr)                 	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD_BP,\
									AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD_MASK)
#define WF_AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD_BP,\
									AR_NP_ERR_FLG_HEARTBEAT_BUS_CMD_MASK)
#define RF_AR_NP_ERR_FLG_NP_LANE(mmr)                           	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_NP_LANE_BP,\
									AR_NP_ERR_FLG_NP_LANE_MASK)
#define WF_AR_NP_ERR_FLG_NP_LANE(mmr,v)                         	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_NP_LANE_BP,\
									AR_NP_ERR_FLG_NP_LANE_MASK)
#define RF_AR_NP_ERR_FLG_NP_TUNING(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_NP_TUNING_BP,\
									AR_NP_ERR_FLG_NP_TUNING_MASK)
#define WF_AR_NP_ERR_FLG_NP_TUNING(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_NP_TUNING_BP,\
									AR_NP_ERR_FLG_NP_TUNING_MASK)
#define RF_AR_NP_ERR_FLG_NP_SBUS_RD(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_NP_SBUS_RD_BP,\
									AR_NP_ERR_FLG_NP_SBUS_RD_MASK)
#define WF_AR_NP_ERR_FLG_NP_SBUS_RD(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_NP_SBUS_RD_BP,\
									AR_NP_ERR_FLG_NP_SBUS_RD_MASK)
#define RF_AR_NP_ERR_FLG_NP_SBUS_WR(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_NP_SBUS_WR_BP,\
									AR_NP_ERR_FLG_NP_SBUS_WR_MASK)
#define WF_AR_NP_ERR_FLG_NP_SBUS_WR(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_NP_SBUS_WR_BP,\
									AR_NP_ERR_FLG_NP_SBUS_WR_MASK)
#define RF_AR_NP_ERR_FLG_NP_CBUS_RD(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_NP_CBUS_RD_BP,\
									AR_NP_ERR_FLG_NP_CBUS_RD_MASK)
#define WF_AR_NP_ERR_FLG_NP_CBUS_RD(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_NP_CBUS_RD_BP,\
									AR_NP_ERR_FLG_NP_CBUS_RD_MASK)
#define RF_AR_NP_ERR_FLG_NP_CBUS_WR(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_NP_CBUS_WR_BP,\
									AR_NP_ERR_FLG_NP_CBUS_WR_MASK)
#define WF_AR_NP_ERR_FLG_NP_CBUS_WR(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_NP_CBUS_WR_BP,\
									AR_NP_ERR_FLG_NP_CBUS_WR_MASK)
#define RF_AR_NP_ERR_FLG_NP_SPICO(mmr)                          	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_NP_SPICO_BP,\
									AR_NP_ERR_FLG_NP_SPICO_MASK)
#define WF_AR_NP_ERR_FLG_NP_SPICO(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_NP_SPICO_BP,\
									AR_NP_ERR_FLG_NP_SPICO_MASK)
#define RF_AR_NP_ERR_FLG_NP_CHECKSUM(mmr)                       	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_NP_CHECKSUM_BP,\
									AR_NP_ERR_FLG_NP_CHECKSUM_MASK)
#define WF_AR_NP_ERR_FLG_NP_CHECKSUM(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_NP_CHECKSUM_BP,\
									AR_NP_ERR_FLG_NP_CHECKSUM_MASK)
#define RF_AR_NP_ERR_FLG_DIAG_ONLY(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_FLG_DIAG_ONLY_BP,\
									AR_NP_ERR_FLG_DIAG_ONLY_MASK)
#define WF_AR_NP_ERR_FLG_DIAG_ONLY(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_FLG_DIAG_ONLY_BP,\
									AR_NP_ERR_FLG_DIAG_ONLY_MASK)
#define RF_AR_NP_ERR_CLR_IDRAM_MBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_IDRAM_MBE_BP,\
									AR_NP_ERR_CLR_IDRAM_MBE_MASK)
#define WF_AR_NP_ERR_CLR_IDRAM_MBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_IDRAM_MBE_BP,\
									AR_NP_ERR_CLR_IDRAM_MBE_MASK)
#define RF_AR_NP_ERR_CLR_IDRAM_SBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_IDRAM_SBE_BP,\
									AR_NP_ERR_CLR_IDRAM_SBE_MASK)
#define WF_AR_NP_ERR_CLR_IDRAM_SBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_IDRAM_SBE_BP,\
									AR_NP_ERR_CLR_IDRAM_SBE_MASK)
#define RF_AR_NP_ERR_CLR_EDRAM_MBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_EDRAM_MBE_BP,\
									AR_NP_ERR_CLR_EDRAM_MBE_MASK)
#define WF_AR_NP_ERR_CLR_EDRAM_MBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_EDRAM_MBE_BP,\
									AR_NP_ERR_CLR_EDRAM_MBE_MASK)
#define RF_AR_NP_ERR_CLR_EDRAM_SBE(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_EDRAM_SBE_BP,\
									AR_NP_ERR_CLR_EDRAM_SBE_MASK)
#define WF_AR_NP_ERR_CLR_EDRAM_SBE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_EDRAM_SBE_BP,\
									AR_NP_ERR_CLR_EDRAM_SBE_MASK)
#define RF_AR_NP_ERR_CLR_IRAM_MBE(mmr)                          	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_IRAM_MBE_BP,\
									AR_NP_ERR_CLR_IRAM_MBE_MASK)
#define WF_AR_NP_ERR_CLR_IRAM_MBE(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_IRAM_MBE_BP,\
									AR_NP_ERR_CLR_IRAM_MBE_MASK)
#define RF_AR_NP_ERR_CLR_IRAM_SBE(mmr)                          	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_IRAM_SBE_BP,\
									AR_NP_ERR_CLR_IRAM_SBE_MASK)
#define WF_AR_NP_ERR_CLR_IRAM_SBE(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_IRAM_SBE_BP,\
									AR_NP_ERR_CLR_IRAM_SBE_MASK)
#define RF_AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE(mmr)                 	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE_BP,\
									AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE_MASK)
#define WF_AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE_BP,\
									AR_NP_ERR_CLR_HEARTBEAT_PC_IDLE_MASK)
#define RF_AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD(mmr)                 	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD_BP,\
									AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD_MASK)
#define WF_AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD_BP,\
									AR_NP_ERR_CLR_HEARTBEAT_BUS_CMD_MASK)
#define RF_AR_NP_ERR_CLR_NP_LANE(mmr)                           	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_NP_LANE_BP,\
									AR_NP_ERR_CLR_NP_LANE_MASK)
#define WF_AR_NP_ERR_CLR_NP_LANE(mmr,v)                         	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_NP_LANE_BP,\
									AR_NP_ERR_CLR_NP_LANE_MASK)
#define RF_AR_NP_ERR_CLR_NP_TUNING(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_NP_TUNING_BP,\
									AR_NP_ERR_CLR_NP_TUNING_MASK)
#define WF_AR_NP_ERR_CLR_NP_TUNING(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_NP_TUNING_BP,\
									AR_NP_ERR_CLR_NP_TUNING_MASK)
#define RF_AR_NP_ERR_CLR_NP_SBUS_RD(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_NP_SBUS_RD_BP,\
									AR_NP_ERR_CLR_NP_SBUS_RD_MASK)
#define WF_AR_NP_ERR_CLR_NP_SBUS_RD(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_NP_SBUS_RD_BP,\
									AR_NP_ERR_CLR_NP_SBUS_RD_MASK)
#define RF_AR_NP_ERR_CLR_NP_SBUS_WR(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_NP_SBUS_WR_BP,\
									AR_NP_ERR_CLR_NP_SBUS_WR_MASK)
#define WF_AR_NP_ERR_CLR_NP_SBUS_WR(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_NP_SBUS_WR_BP,\
									AR_NP_ERR_CLR_NP_SBUS_WR_MASK)
#define RF_AR_NP_ERR_CLR_NP_CBUS_RD(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_NP_CBUS_RD_BP,\
									AR_NP_ERR_CLR_NP_CBUS_RD_MASK)
#define WF_AR_NP_ERR_CLR_NP_CBUS_RD(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_NP_CBUS_RD_BP,\
									AR_NP_ERR_CLR_NP_CBUS_RD_MASK)
#define RF_AR_NP_ERR_CLR_NP_CBUS_WR(mmr)                        	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_NP_CBUS_WR_BP,\
									AR_NP_ERR_CLR_NP_CBUS_WR_MASK)
#define WF_AR_NP_ERR_CLR_NP_CBUS_WR(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_NP_CBUS_WR_BP,\
									AR_NP_ERR_CLR_NP_CBUS_WR_MASK)
#define RF_AR_NP_ERR_CLR_NP_SPICO(mmr)                          	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_NP_SPICO_BP,\
									AR_NP_ERR_CLR_NP_SPICO_MASK)
#define WF_AR_NP_ERR_CLR_NP_SPICO(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_NP_SPICO_BP,\
									AR_NP_ERR_CLR_NP_SPICO_MASK)
#define RF_AR_NP_ERR_CLR_NP_CHECKSUM(mmr)                       	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_NP_CHECKSUM_BP,\
									AR_NP_ERR_CLR_NP_CHECKSUM_MASK)
#define WF_AR_NP_ERR_CLR_NP_CHECKSUM(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_NP_CHECKSUM_BP,\
									AR_NP_ERR_CLR_NP_CHECKSUM_MASK)
#define RF_AR_NP_ERR_CLR_DIAG_ONLY(mmr)                         	RD_FIELD(mmr,\
									AR_NP_ERR_CLR_DIAG_ONLY_BP,\
									AR_NP_ERR_CLR_DIAG_ONLY_MASK)
#define WF_AR_NP_ERR_CLR_DIAG_ONLY(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_NP_ERR_CLR_DIAG_ONLY_BP,\
									AR_NP_ERR_CLR_DIAG_ONLY_MASK)
#define RF_AR_NP_ERR_HSS_MSK_IDRAM_MBE(mmr)                     	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_IDRAM_MBE_BP,\
									AR_NP_ERR_HSS_MSK_IDRAM_MBE_MASK)
#define WF_AR_NP_ERR_HSS_MSK_IDRAM_MBE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_IDRAM_MBE_BP,\
									AR_NP_ERR_HSS_MSK_IDRAM_MBE_MASK)
#define RF_AR_NP_ERR_HSS_MSK_IDRAM_SBE(mmr)                     	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_IDRAM_SBE_BP,\
									AR_NP_ERR_HSS_MSK_IDRAM_SBE_MASK)
#define WF_AR_NP_ERR_HSS_MSK_IDRAM_SBE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_IDRAM_SBE_BP,\
									AR_NP_ERR_HSS_MSK_IDRAM_SBE_MASK)
#define RF_AR_NP_ERR_HSS_MSK_EDRAM_MBE(mmr)                     	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_EDRAM_MBE_BP,\
									AR_NP_ERR_HSS_MSK_EDRAM_MBE_MASK)
#define WF_AR_NP_ERR_HSS_MSK_EDRAM_MBE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_EDRAM_MBE_BP,\
									AR_NP_ERR_HSS_MSK_EDRAM_MBE_MASK)
#define RF_AR_NP_ERR_HSS_MSK_EDRAM_SBE(mmr)                     	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_EDRAM_SBE_BP,\
									AR_NP_ERR_HSS_MSK_EDRAM_SBE_MASK)
#define WF_AR_NP_ERR_HSS_MSK_EDRAM_SBE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_EDRAM_SBE_BP,\
									AR_NP_ERR_HSS_MSK_EDRAM_SBE_MASK)
#define RF_AR_NP_ERR_HSS_MSK_IRAM_MBE(mmr)                      	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_IRAM_MBE_BP,\
									AR_NP_ERR_HSS_MSK_IRAM_MBE_MASK)
#define WF_AR_NP_ERR_HSS_MSK_IRAM_MBE(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_IRAM_MBE_BP,\
									AR_NP_ERR_HSS_MSK_IRAM_MBE_MASK)
#define RF_AR_NP_ERR_HSS_MSK_IRAM_SBE(mmr)                      	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_IRAM_SBE_BP,\
									AR_NP_ERR_HSS_MSK_IRAM_SBE_MASK)
#define WF_AR_NP_ERR_HSS_MSK_IRAM_SBE(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_IRAM_SBE_BP,\
									AR_NP_ERR_HSS_MSK_IRAM_SBE_MASK)
#define RF_AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE(mmr)             	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE_BP,\
									AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE_MASK)
#define WF_AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE_BP,\
									AR_NP_ERR_HSS_MSK_HEARTBEAT_PC_IDLE_MASK)
#define RF_AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD(mmr)             	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD_BP,\
									AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD_MASK)
#define WF_AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD_BP,\
									AR_NP_ERR_HSS_MSK_HEARTBEAT_BUS_CMD_MASK)
#define RF_AR_NP_ERR_HSS_MSK_NP_LANE(mmr)                       	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_NP_LANE_BP,\
									AR_NP_ERR_HSS_MSK_NP_LANE_MASK)
#define WF_AR_NP_ERR_HSS_MSK_NP_LANE(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_NP_LANE_BP,\
									AR_NP_ERR_HSS_MSK_NP_LANE_MASK)
#define RF_AR_NP_ERR_HSS_MSK_NP_TUNING(mmr)                     	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_NP_TUNING_BP,\
									AR_NP_ERR_HSS_MSK_NP_TUNING_MASK)
#define WF_AR_NP_ERR_HSS_MSK_NP_TUNING(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_NP_TUNING_BP,\
									AR_NP_ERR_HSS_MSK_NP_TUNING_MASK)
#define RF_AR_NP_ERR_HSS_MSK_NP_SBUS_RD(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_NP_SBUS_RD_BP,\
									AR_NP_ERR_HSS_MSK_NP_SBUS_RD_MASK)
#define WF_AR_NP_ERR_HSS_MSK_NP_SBUS_RD(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_NP_SBUS_RD_BP,\
									AR_NP_ERR_HSS_MSK_NP_SBUS_RD_MASK)
#define RF_AR_NP_ERR_HSS_MSK_NP_SBUS_WR(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_NP_SBUS_WR_BP,\
									AR_NP_ERR_HSS_MSK_NP_SBUS_WR_MASK)
#define WF_AR_NP_ERR_HSS_MSK_NP_SBUS_WR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_NP_SBUS_WR_BP,\
									AR_NP_ERR_HSS_MSK_NP_SBUS_WR_MASK)
#define RF_AR_NP_ERR_HSS_MSK_NP_CBUS_RD(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_NP_CBUS_RD_BP,\
									AR_NP_ERR_HSS_MSK_NP_CBUS_RD_MASK)
#define WF_AR_NP_ERR_HSS_MSK_NP_CBUS_RD(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_NP_CBUS_RD_BP,\
									AR_NP_ERR_HSS_MSK_NP_CBUS_RD_MASK)
#define RF_AR_NP_ERR_HSS_MSK_NP_CBUS_WR(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_NP_CBUS_WR_BP,\
									AR_NP_ERR_HSS_MSK_NP_CBUS_WR_MASK)
#define WF_AR_NP_ERR_HSS_MSK_NP_CBUS_WR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_NP_CBUS_WR_BP,\
									AR_NP_ERR_HSS_MSK_NP_CBUS_WR_MASK)
#define RF_AR_NP_ERR_HSS_MSK_NP_SPICO(mmr)                      	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_NP_SPICO_BP,\
									AR_NP_ERR_HSS_MSK_NP_SPICO_MASK)
#define WF_AR_NP_ERR_HSS_MSK_NP_SPICO(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_NP_SPICO_BP,\
									AR_NP_ERR_HSS_MSK_NP_SPICO_MASK)
#define RF_AR_NP_ERR_HSS_MSK_NP_CHECKSUM(mmr)                   	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_NP_CHECKSUM_BP,\
									AR_NP_ERR_HSS_MSK_NP_CHECKSUM_MASK)
#define WF_AR_NP_ERR_HSS_MSK_NP_CHECKSUM(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_NP_CHECKSUM_BP,\
									AR_NP_ERR_HSS_MSK_NP_CHECKSUM_MASK)
#define RF_AR_NP_ERR_HSS_MSK_DIAG_ONLY(mmr)                     	RD_FIELD(mmr,\
									AR_NP_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_NP_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define WF_AR_NP_ERR_HSS_MSK_DIAG_ONLY(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_NP_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_IDRAM_MBE(mmr)                   	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_IDRAM_MBE_BP,\
									AR_NP_ERR_FIRST_FLG_IDRAM_MBE_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_IDRAM_MBE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_IDRAM_MBE_BP,\
									AR_NP_ERR_FIRST_FLG_IDRAM_MBE_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_IDRAM_SBE(mmr)                   	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_IDRAM_SBE_BP,\
									AR_NP_ERR_FIRST_FLG_IDRAM_SBE_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_IDRAM_SBE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_IDRAM_SBE_BP,\
									AR_NP_ERR_FIRST_FLG_IDRAM_SBE_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_EDRAM_MBE(mmr)                   	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_EDRAM_MBE_BP,\
									AR_NP_ERR_FIRST_FLG_EDRAM_MBE_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_EDRAM_MBE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_EDRAM_MBE_BP,\
									AR_NP_ERR_FIRST_FLG_EDRAM_MBE_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_EDRAM_SBE(mmr)                   	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_EDRAM_SBE_BP,\
									AR_NP_ERR_FIRST_FLG_EDRAM_SBE_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_EDRAM_SBE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_EDRAM_SBE_BP,\
									AR_NP_ERR_FIRST_FLG_EDRAM_SBE_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_IRAM_MBE(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_IRAM_MBE_BP,\
									AR_NP_ERR_FIRST_FLG_IRAM_MBE_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_IRAM_MBE(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_IRAM_MBE_BP,\
									AR_NP_ERR_FIRST_FLG_IRAM_MBE_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_IRAM_SBE(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_IRAM_SBE_BP,\
									AR_NP_ERR_FIRST_FLG_IRAM_SBE_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_IRAM_SBE(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_IRAM_SBE_BP,\
									AR_NP_ERR_FIRST_FLG_IRAM_SBE_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE(mmr)           	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE_BP,\
									AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE_BP,\
									AR_NP_ERR_FIRST_FLG_HEARTBEAT_PC_IDLE_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD(mmr)           	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD_BP,\
									AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD_BP,\
									AR_NP_ERR_FIRST_FLG_HEARTBEAT_BUS_CMD_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_NP_LANE(mmr)                     	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_NP_LANE_BP,\
									AR_NP_ERR_FIRST_FLG_NP_LANE_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_NP_LANE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_NP_LANE_BP,\
									AR_NP_ERR_FIRST_FLG_NP_LANE_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_NP_TUNING(mmr)                   	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_NP_TUNING_BP,\
									AR_NP_ERR_FIRST_FLG_NP_TUNING_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_NP_TUNING(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_NP_TUNING_BP,\
									AR_NP_ERR_FIRST_FLG_NP_TUNING_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_NP_SBUS_RD(mmr)                  	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_NP_SBUS_RD_BP,\
									AR_NP_ERR_FIRST_FLG_NP_SBUS_RD_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_NP_SBUS_RD(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_NP_SBUS_RD_BP,\
									AR_NP_ERR_FIRST_FLG_NP_SBUS_RD_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_NP_SBUS_WR(mmr)                  	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_NP_SBUS_WR_BP,\
									AR_NP_ERR_FIRST_FLG_NP_SBUS_WR_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_NP_SBUS_WR(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_NP_SBUS_WR_BP,\
									AR_NP_ERR_FIRST_FLG_NP_SBUS_WR_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_NP_CBUS_RD(mmr)                  	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_NP_CBUS_RD_BP,\
									AR_NP_ERR_FIRST_FLG_NP_CBUS_RD_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_NP_CBUS_RD(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_NP_CBUS_RD_BP,\
									AR_NP_ERR_FIRST_FLG_NP_CBUS_RD_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_NP_CBUS_WR(mmr)                  	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_NP_CBUS_WR_BP,\
									AR_NP_ERR_FIRST_FLG_NP_CBUS_WR_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_NP_CBUS_WR(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_NP_CBUS_WR_BP,\
									AR_NP_ERR_FIRST_FLG_NP_CBUS_WR_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_NP_SPICO(mmr)                    	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_NP_SPICO_BP,\
									AR_NP_ERR_FIRST_FLG_NP_SPICO_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_NP_SPICO(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_NP_SPICO_BP,\
									AR_NP_ERR_FIRST_FLG_NP_SPICO_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_NP_CHECKSUM(mmr)                 	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_NP_CHECKSUM_BP,\
									AR_NP_ERR_FIRST_FLG_NP_CHECKSUM_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_NP_CHECKSUM(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_NP_CHECKSUM_BP,\
									AR_NP_ERR_FIRST_FLG_NP_CHECKSUM_MASK)
#define RF_AR_NP_ERR_FIRST_FLG_DIAG_ONLY(mmr)                   	RD_FIELD(mmr,\
									AR_NP_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_NP_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define WF_AR_NP_ERR_FIRST_FLG_DIAG_ONLY(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NP_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_NP_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE7(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE7_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE7_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE7(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE7_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE7_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE6(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE6_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE6_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE6(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE6_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE6_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE5(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE5_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE5_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE5(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE5_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE5_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE4(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE4_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE4_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE4(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE4_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE4_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE3(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE3_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE3_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE3(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE3_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE3_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE2(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE2_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE2_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE2(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE2_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE2_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE1(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE1_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE1_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE1(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE1_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE1_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE0(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE0_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE0_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE0(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE0_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_IRAM_DATA_BYTE0_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE7(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE7_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE7_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE7(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE7_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE7_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE6(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE6_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE6_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE6(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE6_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE6_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE5(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE5_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE5_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE5(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE5_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE5_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE4(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE4_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE4_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE4(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE4_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE4_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE3(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE3_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE3_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE3(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE3_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE3_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE2(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE2_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE2_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE2(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE2_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE2_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE1(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE1_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE1_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE1(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE1_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE1_MASK)
#define RF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE0(mmr)      	RD_FIELD(mmr,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE0_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE0_MASK)
#define WF_AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE0(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE0_BP,\
									AR_NP_CFG_REQ_STREAM_LD_DP_DRAM_DATA_BYTE0_MASK)

#endif
