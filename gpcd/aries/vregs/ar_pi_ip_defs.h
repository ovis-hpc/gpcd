/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pi_ip_defs.h
 * FILE: ar_pi_ip_defs.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_PI_IP_DEFS_H_
#define _AR_PI_IP_DEFS_H_

#define AR_PI_IP_N_MMRS                                        	131
#define AR_PI_IP_N_DESCS                                       	0

/*
 *  AR PI_IP MMR TABLE ADDRESS DEFINES
 */
#define AR_PI_PM_PCLK_EVENT_CNTR                               	(AR_PI_IP_BASE+0x0000000a00ull)
#define AR_PI_PM_PCLK_EVENT_CNTR_BASE                          	(AR_PI_IP_BASE+0x0000000a00ull)
#define AR_PI_PM_PCLK_EVENT_CNTR_SIZE                          	0x0000000100ull
#define AR_PI_PM_PCLK_EVENT_CNTR_LIMIT                         	AR_PI_PM_PCLK_EVENT_CNTR_BASE+AR_PI_PM_PCLK_EVENT_CNTR_SIZE-1
#define AR_PI_PM_PCLK_EVENT_CNTR_N_ENTRY                       	32
#define AR_PI_PM_PCLK_EVENT_CNTR_DESC_INCR                     	0x00000008ull
#define AR_PI_PM_PCLK_EVENT_CNTR_DESC_N_QUADWORDS              	1
#define AR_PI_PM_PCLK_EVENT_CNTR_ADDR(didx)                    	(((didx)*AR_PI_PM_PCLK_EVENT_CNTR_DESC_INCR)\
								+ AR_PI_PM_PCLK_EVENT_CNTR_BASE)
#define AR_PI_PHY_CSRS                                         	(AR_PI_IP_BASE+0x0000008000ull)
#define AR_PI_PHY_CSRS_BASE                                    	(AR_PI_IP_BASE+0x0000008000ull)
#define AR_PI_PHY_CSRS_SIZE                                    	0x0000008000ull
#define AR_PI_PHY_CSRS_LIMIT                                   	AR_PI_PHY_CSRS_BASE+AR_PI_PHY_CSRS_SIZE-1
#define AR_PI_PHY_CSRS_N_ENTRY                                 	4096
#define AR_PI_PHY_CSRS_DESC_INCR                               	0x00000008ull
#define AR_PI_PHY_CSRS_DESC_N_QUADWORDS                        	1
#define AR_PI_PHY_CSRS_ADDR(didx)                              	(((didx)*AR_PI_PHY_CSRS_DESC_INCR)\
								+ AR_PI_PHY_CSRS_BASE)
#define AR_PI_DATABAHN_CSRS                                    	(AR_PI_IP_BASE+0x0000010000ull)
#define AR_PI_DATABAHN_CSRS_BASE                               	(AR_PI_IP_BASE+0x0000010000ull)
#define AR_PI_DATABAHN_CSRS_SIZE                               	0x0000008000ull
#define AR_PI_DATABAHN_CSRS_LIMIT                              	AR_PI_DATABAHN_CSRS_BASE+AR_PI_DATABAHN_CSRS_SIZE-1
#define AR_PI_DATABAHN_CSRS_N_ENTRY                            	4096
#define AR_PI_DATABAHN_CSRS_DESC_INCR                          	0x00000008ull
#define AR_PI_DATABAHN_CSRS_DESC_N_QUADWORDS                   	1
#define AR_PI_DATABAHN_CSRS_ADDR(didx)                         	(((didx)*AR_PI_DATABAHN_CSRS_DESC_INCR)\
								+ AR_PI_DATABAHN_CSRS_BASE)
#define AR_PI_DBG_DIAG_INJ_RAM                                 	(AR_PI_IP_BASE+0x000001e000ull)
#define AR_PI_DBG_DIAG_INJ_RAM_BASE                            	(AR_PI_IP_BASE+0x000001e000ull)
#define AR_PI_DBG_DIAG_INJ_RAM_SIZE                            	0x0000001400ull
#define AR_PI_DBG_DIAG_INJ_RAM_LIMIT                           	AR_PI_DBG_DIAG_INJ_RAM_BASE+AR_PI_DBG_DIAG_INJ_RAM_SIZE-1
#define AR_PI_DBG_DIAG_INJ_RAM_N_ENTRY                         	640
#define AR_PI_DBG_DIAG_INJ_RAM_DESC_INCR                       	0x00000008ull
#define AR_PI_DBG_DIAG_INJ_RAM_DESC_N_QUADWORDS                	1
#define AR_PI_DBG_DIAG_INJ_RAM_ADDR(didx)                      	(((didx)*AR_PI_DBG_DIAG_INJ_RAM_DESC_INCR)\
								+ AR_PI_DBG_DIAG_INJ_RAM_BASE)
#define AR_PI_DBG_DIAG_TRANS_RAM                               	(AR_PI_IP_BASE+0x0000020000ull)
#define AR_PI_DBG_DIAG_TRANS_RAM_BASE                          	(AR_PI_IP_BASE+0x0000020000ull)
#define AR_PI_DBG_DIAG_TRANS_RAM_SIZE                          	0x0000001800ull
#define AR_PI_DBG_DIAG_TRANS_RAM_LIMIT                         	AR_PI_DBG_DIAG_TRANS_RAM_BASE+AR_PI_DBG_DIAG_TRANS_RAM_SIZE-1
#define AR_PI_DBG_DIAG_TRANS_RAM_N_ENTRY                       	768
#define AR_PI_DBG_DIAG_TRANS_RAM_DESC_INCR                     	0x00000008ull
#define AR_PI_DBG_DIAG_TRANS_RAM_DESC_N_QUADWORDS              	1
#define AR_PI_DBG_DIAG_TRANS_RAM_ADDR(didx)                    	(((didx)*AR_PI_DBG_DIAG_TRANS_RAM_DESC_INCR)\
								+ AR_PI_DBG_DIAG_TRANS_RAM_BASE)
#define AR_PI_DBG_DIAG_RECV_RAM                                	(AR_PI_IP_BASE+0x0000022000ull)
#define AR_PI_DBG_DIAG_RECV_RAM_BASE                           	(AR_PI_IP_BASE+0x0000022000ull)
#define AR_PI_DBG_DIAG_RECV_RAM_SIZE                           	0x0000001800ull
#define AR_PI_DBG_DIAG_RECV_RAM_LIMIT                          	AR_PI_DBG_DIAG_RECV_RAM_BASE+AR_PI_DBG_DIAG_RECV_RAM_SIZE-1
#define AR_PI_DBG_DIAG_RECV_RAM_N_ENTRY                        	768
#define AR_PI_DBG_DIAG_RECV_RAM_DESC_INCR                      	0x00000008ull
#define AR_PI_DBG_DIAG_RECV_RAM_DESC_N_QUADWORDS               	1
#define AR_PI_DBG_DIAG_RECV_RAM_ADDR(didx)                     	(((didx)*AR_PI_DBG_DIAG_RECV_RAM_DESC_INCR)\
								+ AR_PI_DBG_DIAG_RECV_RAM_BASE)

/*
 *  AR PI_IP MMR ADDRESS DEFINES
 */
#define AR_PI_CFG_DEN_IP                                       	(AR_PI_IP_BASE+0x0000000000ull)
#define AR_PI_CFG_DEN_IP_SIZE                                  	0x0000000008ull
#define AR_PI_CFG_DEN_IP_LIMIT                                 	AR_PI_CFG_DEN_IP+AR_PI_CFG_DEN_IP_SIZE-1
#define AR_PI_STS_DEN_IP                                       	(AR_PI_IP_BASE+0x0000000008ull)
#define AR_PI_STS_DEN_IP_SIZE                                  	0x0000000008ull
#define AR_PI_STS_DEN_IP_LIMIT                                 	AR_PI_STS_DEN_IP+AR_PI_STS_DEN_IP_SIZE-1
#define AR_PI_ERR_FLG_IP                                       	(AR_PI_IP_BASE+0x0000000010ull)
#define AR_PI_ERR_FLG_IP_SIZE                                  	0x0000000008ull
#define AR_PI_ERR_FLG_IP_LIMIT                                 	AR_PI_ERR_FLG_IP+AR_PI_ERR_FLG_IP_SIZE-1
#define AR_PI_ERR_CLR_IP                                       	(AR_PI_IP_BASE+0x0000000018ull)
#define AR_PI_ERR_CLR_IP_SIZE                                  	0x0000000008ull
#define AR_PI_ERR_CLR_IP_LIMIT                                 	AR_PI_ERR_CLR_IP+AR_PI_ERR_CLR_IP_SIZE-1
#define AR_PI_ERR_HSS_MSK_IP                                   	(AR_PI_IP_BASE+0x0000000020ull)
#define AR_PI_ERR_HSS_MSK_IP_SIZE                              	0x0000000008ull
#define AR_PI_ERR_HSS_MSK_IP_LIMIT                             	AR_PI_ERR_HSS_MSK_IP+AR_PI_ERR_HSS_MSK_IP_SIZE-1
#define AR_PI_ERR_OS_MSK_IP                                    	(AR_PI_IP_BASE+0x0000000028ull)
#define AR_PI_ERR_OS_MSK_IP_SIZE                               	0x0000000008ull
#define AR_PI_ERR_OS_MSK_IP_LIMIT                              	AR_PI_ERR_OS_MSK_IP+AR_PI_ERR_OS_MSK_IP_SIZE-1
#define AR_PI_ERR_FIRST_FLG_IP                                 	(AR_PI_IP_BASE+0x0000000030ull)
#define AR_PI_ERR_FIRST_FLG_IP_SIZE                            	0x0000000008ull
#define AR_PI_ERR_FIRST_FLG_IP_LIMIT                           	AR_PI_ERR_FIRST_FLG_IP+AR_PI_ERR_FIRST_FLG_IP_SIZE-1
#define AR_PI_PHY_STATUS_DEN_IP                                	(AR_PI_IP_BASE+0x0000000038ull)
#define AR_PI_PHY_STATUS_DEN_IP_SIZE                           	0x0000000008ull
#define AR_PI_PHY_STATUS_DEN_IP_LIMIT                          	AR_PI_PHY_STATUS_DEN_IP+AR_PI_PHY_STATUS_DEN_IP_SIZE-1
#define AR_PI_PHY_EQUAL_DEN_IP                                 	(AR_PI_IP_BASE+0x0000000040ull)
#define AR_PI_PHY_EQUAL_DEN_IP_SIZE                            	0x0000000008ull
#define AR_PI_PHY_EQUAL_DEN_IP_LIMIT                           	AR_PI_PHY_EQUAL_DEN_IP+AR_PI_PHY_EQUAL_DEN_IP_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_0                                	(AR_PI_IP_BASE+0x0000000048ull)
#define AR_PI_PHY_EQUAL_COEFF_0_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_0_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_0+AR_PI_PHY_EQUAL_COEFF_0_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_1                                	(AR_PI_IP_BASE+0x0000000050ull)
#define AR_PI_PHY_EQUAL_COEFF_1_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_1_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_1+AR_PI_PHY_EQUAL_COEFF_1_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_2                                	(AR_PI_IP_BASE+0x0000000058ull)
#define AR_PI_PHY_EQUAL_COEFF_2_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_2_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_2+AR_PI_PHY_EQUAL_COEFF_2_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_3                                	(AR_PI_IP_BASE+0x0000000060ull)
#define AR_PI_PHY_EQUAL_COEFF_3_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_3_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_3+AR_PI_PHY_EQUAL_COEFF_3_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_4                                	(AR_PI_IP_BASE+0x0000000068ull)
#define AR_PI_PHY_EQUAL_COEFF_4_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_4_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_4+AR_PI_PHY_EQUAL_COEFF_4_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_5                                	(AR_PI_IP_BASE+0x0000000070ull)
#define AR_PI_PHY_EQUAL_COEFF_5_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_5_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_5+AR_PI_PHY_EQUAL_COEFF_5_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_6                                	(AR_PI_IP_BASE+0x0000000078ull)
#define AR_PI_PHY_EQUAL_COEFF_6_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_6_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_6+AR_PI_PHY_EQUAL_COEFF_6_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_7                                	(AR_PI_IP_BASE+0x0000000080ull)
#define AR_PI_PHY_EQUAL_COEFF_7_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_7_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_7+AR_PI_PHY_EQUAL_COEFF_7_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_8                                	(AR_PI_IP_BASE+0x0000000088ull)
#define AR_PI_PHY_EQUAL_COEFF_8_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_8_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_8+AR_PI_PHY_EQUAL_COEFF_8_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_9                                	(AR_PI_IP_BASE+0x0000000090ull)
#define AR_PI_PHY_EQUAL_COEFF_9_SIZE                           	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_9_LIMIT                          	AR_PI_PHY_EQUAL_COEFF_9+AR_PI_PHY_EQUAL_COEFF_9_SIZE-1
#define AR_PI_PHY_EQUAL_COEFF_10                               	(AR_PI_IP_BASE+0x0000000098ull)
#define AR_PI_PHY_EQUAL_COEFF_10_SIZE                          	0x0000000008ull
#define AR_PI_PHY_EQUAL_COEFF_10_LIMIT                         	AR_PI_PHY_EQUAL_COEFF_10+AR_PI_PHY_EQUAL_COEFF_10_SIZE-1
#define AR_PI_PMI_PCLK_CFG                                     	(AR_PI_IP_BASE+0x0000000200ull)
#define AR_PI_PMI_PCLK_CFG_SIZE                                	0x0000000008ull
#define AR_PI_PMI_PCLK_CFG_LIMIT                               	AR_PI_PMI_PCLK_CFG+AR_PI_PMI_PCLK_CFG_SIZE-1
#define AR_PI_PMI_DBG_ERRINJ_PREQ                              	(AR_PI_IP_BASE+0x0000000208ull)
#define AR_PI_PMI_DBG_ERRINJ_PREQ_SIZE                         	0x0000000008ull
#define AR_PI_PMI_DBG_ERRINJ_PREQ_LIMIT                        	AR_PI_PMI_DBG_ERRINJ_PREQ+AR_PI_PMI_DBG_ERRINJ_PREQ_SIZE-1
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL                          	(AR_PI_IP_BASE+0x0000000210ull)
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_SIZE                     	0x0000000008ull
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_LIMIT                    	AR_PI_PMI_DBG_ERRINJ_PRSP_HAL+AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_SIZE-1
#define AR_PI_PMI_FIFO2_ERR_FLG                                	(AR_PI_IP_BASE+0x0000000300ull)
#define AR_PI_PMI_FIFO2_ERR_FLG_SIZE                           	0x0000000008ull
#define AR_PI_PMI_FIFO2_ERR_FLG_LIMIT                          	AR_PI_PMI_FIFO2_ERR_FLG+AR_PI_PMI_FIFO2_ERR_FLG_SIZE-1
#define AR_PI_PMI_FIFO2_ERR_CLR                                	(AR_PI_IP_BASE+0x0000000308ull)
#define AR_PI_PMI_FIFO2_ERR_CLR_SIZE                           	0x0000000008ull
#define AR_PI_PMI_FIFO2_ERR_CLR_LIMIT                          	AR_PI_PMI_FIFO2_ERR_CLR+AR_PI_PMI_FIFO2_ERR_CLR_SIZE-1
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK                            	(AR_PI_IP_BASE+0x0000000310ull)
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_SIZE                       	0x0000000008ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_LIMIT                      	AR_PI_PMI_FIFO2_ERR_HSS_MSK+AR_PI_PMI_FIFO2_ERR_HSS_MSK_SIZE-1
#define AR_PI_PMI_FIFO2_ERR_OS_MSK                             	(AR_PI_IP_BASE+0x0000000318ull)
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_SIZE                        	0x0000000008ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_LIMIT                       	AR_PI_PMI_FIFO2_ERR_OS_MSK+AR_PI_PMI_FIFO2_ERR_OS_MSK_SIZE-1
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG                          	(AR_PI_IP_BASE+0x0000000320ull)
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_SIZE                     	0x0000000008ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_LIMIT                    	AR_PI_PMI_FIFO2_ERR_FIRST_FLG+AR_PI_PMI_FIFO2_ERR_FIRST_FLG_SIZE-1
#define AR_PI_PMI_MBE_ERR_INFO2                                	(AR_PI_IP_BASE+0x0000000328ull)
#define AR_PI_PMI_MBE_ERR_INFO2_SIZE                           	0x0000000008ull
#define AR_PI_PMI_MBE_ERR_INFO2_LIMIT                          	AR_PI_PMI_MBE_ERR_INFO2+AR_PI_PMI_MBE_ERR_INFO2_SIZE-1
#define AR_PI_PMI_SBE_ERR_INFO2                                	(AR_PI_IP_BASE+0x0000000330ull)
#define AR_PI_PMI_SBE_ERR_INFO2_SIZE                           	0x0000000008ull
#define AR_PI_PMI_SBE_ERR_INFO2_LIMIT                          	AR_PI_PMI_SBE_ERR_INFO2+AR_PI_PMI_SBE_ERR_INFO2_SIZE-1
#define AR_PI_PMI_PREQ_PTC0_STALL_DURATION                     	(AR_PI_IP_BASE+0x0000000338ull)
#define AR_PI_PMI_PREQ_PTC0_STALL_DURATION_SIZE                	0x0000000008ull
#define AR_PI_PMI_PREQ_PTC0_STALL_DURATION_LIMIT               	AR_PI_PMI_PREQ_PTC0_STALL_DURATION+AR_PI_PMI_PREQ_PTC0_STALL_DURATION_SIZE-1
#define AR_PI_PMI_PREQ_PTC1_STALL_DURATION                     	(AR_PI_IP_BASE+0x0000000340ull)
#define AR_PI_PMI_PREQ_PTC1_STALL_DURATION_SIZE                	0x0000000008ull
#define AR_PI_PMI_PREQ_PTC1_STALL_DURATION_LIMIT               	AR_PI_PMI_PREQ_PTC1_STALL_DURATION+AR_PI_PMI_PREQ_PTC1_STALL_DURATION_SIZE-1
#define AR_PI_PMI_PREQ_PTC2_STALL_DURATION                     	(AR_PI_IP_BASE+0x0000000348ull)
#define AR_PI_PMI_PREQ_PTC2_STALL_DURATION_SIZE                	0x0000000008ull
#define AR_PI_PMI_PREQ_PTC2_STALL_DURATION_LIMIT               	AR_PI_PMI_PREQ_PTC2_STALL_DURATION+AR_PI_PMI_PREQ_PTC2_STALL_DURATION_SIZE-1
#define AR_PI_PMI_PREQ_HAL_STALL_DURATION                      	(AR_PI_IP_BASE+0x0000000350ull)
#define AR_PI_PMI_PREQ_HAL_STALL_DURATION_SIZE                 	0x0000000008ull
#define AR_PI_PMI_PREQ_HAL_STALL_DURATION_LIMIT                	AR_PI_PMI_PREQ_HAL_STALL_DURATION+AR_PI_PMI_PREQ_HAL_STALL_DURATION_SIZE-1
#define AR_PI_PMI_PRSP_HAL_STALL_DURATION                      	(AR_PI_IP_BASE+0x0000000358ull)
#define AR_PI_PMI_PRSP_HAL_STALL_DURATION_SIZE                 	0x0000000008ull
#define AR_PI_PMI_PRSP_HAL_STALL_DURATION_LIMIT                	AR_PI_PMI_PRSP_HAL_STALL_DURATION+AR_PI_PMI_PRSP_HAL_STALL_DURATION_SIZE-1
#define AR_PI_PII_PCLK_CFG                                     	(AR_PI_IP_BASE+0x0000000400ull)
#define AR_PI_PII_PCLK_CFG_SIZE                                	0x0000000008ull
#define AR_PI_PII_PCLK_CFG_LIMIT                               	AR_PI_PII_PCLK_CFG+AR_PI_PII_PCLK_CFG_SIZE-1
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO                         	(AR_PI_IP_BASE+0x0000000408ull)
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SIZE                    	0x0000000008ull
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_LIMIT                   	AR_PI_PII_PCLK_DBG_ERRINJ_FIFO+AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SIZE-1
#define AR_PI_PII_PCLK_ERR_FLG                                 	(AR_PI_IP_BASE+0x0000000500ull)
#define AR_PI_PII_PCLK_ERR_FLG_SIZE                            	0x0000000008ull
#define AR_PI_PII_PCLK_ERR_FLG_LIMIT                           	AR_PI_PII_PCLK_ERR_FLG+AR_PI_PII_PCLK_ERR_FLG_SIZE-1
#define AR_PI_PII_PCLK_ERR_CLR                                 	(AR_PI_IP_BASE+0x0000000508ull)
#define AR_PI_PII_PCLK_ERR_CLR_SIZE                            	0x0000000008ull
#define AR_PI_PII_PCLK_ERR_CLR_LIMIT                           	AR_PI_PII_PCLK_ERR_CLR+AR_PI_PII_PCLK_ERR_CLR_SIZE-1
#define AR_PI_PII_PCLK_ERR_HSS_MSK                             	(AR_PI_IP_BASE+0x0000000510ull)
#define AR_PI_PII_PCLK_ERR_HSS_MSK_SIZE                        	0x0000000008ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_LIMIT                       	AR_PI_PII_PCLK_ERR_HSS_MSK+AR_PI_PII_PCLK_ERR_HSS_MSK_SIZE-1
#define AR_PI_PII_PCLK_ERR_OS_MSK                              	(AR_PI_IP_BASE+0x0000000518ull)
#define AR_PI_PII_PCLK_ERR_OS_MSK_SIZE                         	0x0000000008ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_LIMIT                        	AR_PI_PII_PCLK_ERR_OS_MSK+AR_PI_PII_PCLK_ERR_OS_MSK_SIZE-1
#define AR_PI_PII_PCLK_ERR_FIRST_FLG                           	(AR_PI_IP_BASE+0x0000000520ull)
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_SIZE                      	0x0000000008ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_LIMIT                     	AR_PI_PII_PCLK_ERR_FIRST_FLG+AR_PI_PII_PCLK_ERR_FIRST_FLG_SIZE-1
#define AR_PI_PII_PCLK_ERR_INFO_MBE                            	(AR_PI_IP_BASE+0x0000000528ull)
#define AR_PI_PII_PCLK_ERR_INFO_MBE_SIZE                       	0x0000000008ull
#define AR_PI_PII_PCLK_ERR_INFO_MBE_LIMIT                      	AR_PI_PII_PCLK_ERR_INFO_MBE+AR_PI_PII_PCLK_ERR_INFO_MBE_SIZE-1
#define AR_PI_PII_PCLK_ERR_INFO_SBE                            	(AR_PI_IP_BASE+0x0000000530ull)
#define AR_PI_PII_PCLK_ERR_INFO_SBE_SIZE                       	0x0000000008ull
#define AR_PI_PII_PCLK_ERR_INFO_SBE_LIMIT                      	AR_PI_PII_PCLK_ERR_INFO_SBE+AR_PI_PII_PCLK_ERR_INFO_SBE_SIZE-1
#define AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR                       	(AR_PI_IP_BASE+0x0000000538ull)
#define AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_SIZE                  	0x0000000008ull
#define AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_LIMIT                 	AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR+AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_SIZE-1
#define AR_PI_PII_PCLK_ERR_INFO_MSG_DATA                       	(AR_PI_IP_BASE+0x0000000540ull)
#define AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_SIZE                  	0x0000000008ull
#define AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_LIMIT                 	AR_PI_PII_PCLK_ERR_INFO_MSG_DATA+AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_SIZE-1
#define AR_PI_PII_PCLK_MSG_STALL_DURATION                      	(AR_PI_IP_BASE+0x0000000548ull)
#define AR_PI_PII_PCLK_MSG_STALL_DURATION_SIZE                 	0x0000000008ull
#define AR_PI_PII_PCLK_MSG_STALL_DURATION_LIMIT                	AR_PI_PII_PCLK_MSG_STALL_DURATION+AR_PI_PII_PCLK_MSG_STALL_DURATION_SIZE-1
#define AR_PI_PTI_PCLK_CFG                                     	(AR_PI_IP_BASE+0x0000000600ull)
#define AR_PI_PTI_PCLK_CFG_SIZE                                	0x0000000008ull
#define AR_PI_PTI_PCLK_CFG_LIMIT                               	AR_PI_PTI_PCLK_CFG+AR_PI_PTI_PCLK_CFG_SIZE-1
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO                         	(AR_PI_IP_BASE+0x0000000608ull)
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SIZE                    	0x0000000008ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_LIMIT                   	AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO+AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SIZE-1
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL                          	(AR_PI_IP_BASE+0x0000000610ull)
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SIZE                     	0x0000000008ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_LIMIT                    	AR_PI_PTI_PCLK_DBG_ERRINJ_HAL+AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SIZE-1
#define AR_PI_PTI_PCLK_ERR_FLG                                 	(AR_PI_IP_BASE+0x0000000700ull)
#define AR_PI_PTI_PCLK_ERR_FLG_SIZE                            	0x0000000008ull
#define AR_PI_PTI_PCLK_ERR_FLG_LIMIT                           	AR_PI_PTI_PCLK_ERR_FLG+AR_PI_PTI_PCLK_ERR_FLG_SIZE-1
#define AR_PI_PTI_PCLK_ERR_CLR                                 	(AR_PI_IP_BASE+0x0000000708ull)
#define AR_PI_PTI_PCLK_ERR_CLR_SIZE                            	0x0000000008ull
#define AR_PI_PTI_PCLK_ERR_CLR_LIMIT                           	AR_PI_PTI_PCLK_ERR_CLR+AR_PI_PTI_PCLK_ERR_CLR_SIZE-1
#define AR_PI_PTI_PCLK_ERR_HSS_MSK                             	(AR_PI_IP_BASE+0x0000000710ull)
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_SIZE                        	0x0000000008ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIMIT                       	AR_PI_PTI_PCLK_ERR_HSS_MSK+AR_PI_PTI_PCLK_ERR_HSS_MSK_SIZE-1
#define AR_PI_PTI_PCLK_ERR_OS_MSK                              	(AR_PI_IP_BASE+0x0000000718ull)
#define AR_PI_PTI_PCLK_ERR_OS_MSK_SIZE                         	0x0000000008ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIMIT                        	AR_PI_PTI_PCLK_ERR_OS_MSK+AR_PI_PTI_PCLK_ERR_OS_MSK_SIZE-1
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG                           	(AR_PI_IP_BASE+0x0000000720ull)
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_SIZE                      	0x0000000008ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIMIT                     	AR_PI_PTI_PCLK_ERR_FIRST_FLG+AR_PI_PTI_PCLK_ERR_FIRST_FLG_SIZE-1
#define AR_PI_PTI_PCLK_ERR_INFO_ECC                            	(AR_PI_IP_BASE+0x0000000728ull)
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_SIZE                       	0x0000000008ull
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIMIT                      	AR_PI_PTI_PCLK_ERR_INFO_ECC+AR_PI_PTI_PCLK_ERR_INFO_ECC_SIZE-1
#define AR_PI_PTI_PCLK_ERR_INFO_MISC                           	(AR_PI_IP_BASE+0x0000000730ull)
#define AR_PI_PTI_PCLK_ERR_INFO_MISC_SIZE                      	0x0000000008ull
#define AR_PI_PTI_PCLK_ERR_INFO_MISC_LIMIT                     	AR_PI_PTI_PCLK_ERR_INFO_MISC+AR_PI_PTI_PCLK_ERR_INFO_MISC_SIZE-1
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR                     	(AR_PI_IP_BASE+0x0000000800ull)
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_SIZE                	0x0000000008ull
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_LIMIT               	AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR+AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_SIZE-1
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR                       	(AR_PI_IP_BASE+0x0000000808ull)
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_SIZE                  	0x0000000008ull
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_LIMIT                 	AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR+AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_SIZE-1
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT                   	(AR_PI_IP_BASE+0x0000000900ull)
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_SIZE              	0x0000000008ull
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_LIMIT             	AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT+AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_SIZE-1
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL                          	(AR_PI_IP_BASE+0x0000000908ull)
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_SIZE                     	0x0000000008ull
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_LIMIT                    	AR_PI_PM_PCLK_EVENT_CNTR_CTRL+AR_PI_PM_PCLK_EVENT_CNTR_CTRL_SIZE-1
#define AR_PI_CFG_DIAG_TRANS                                   	(AR_PI_IP_BASE+0x0000001000ull)
#define AR_PI_CFG_DIAG_TRANS_SIZE                              	0x0000000008ull
#define AR_PI_CFG_DIAG_TRANS_LIMIT                             	AR_PI_CFG_DIAG_TRANS+AR_PI_CFG_DIAG_TRANS_SIZE-1
#define AR_PI_STS_DIAG_TRANS                                   	(AR_PI_IP_BASE+0x0000001008ull)
#define AR_PI_STS_DIAG_TRANS_SIZE                              	0x0000000008ull
#define AR_PI_STS_DIAG_TRANS_LIMIT                             	AR_PI_STS_DIAG_TRANS+AR_PI_STS_DIAG_TRANS_SIZE-1
#define AR_PI_DBG_TRANS_CTL_0                                  	(AR_PI_IP_BASE+0x0000001010ull)
#define AR_PI_DBG_TRANS_CTL_0_SIZE                             	0x0000000008ull
#define AR_PI_DBG_TRANS_CTL_0_LIMIT                            	AR_PI_DBG_TRANS_CTL_0+AR_PI_DBG_TRANS_CTL_0_SIZE-1
#define AR_PI_DBG_TRANS_CTL_1                                  	(AR_PI_IP_BASE+0x0000001018ull)
#define AR_PI_DBG_TRANS_CTL_1_SIZE                             	0x0000000008ull
#define AR_PI_DBG_TRANS_CTL_1_LIMIT                            	AR_PI_DBG_TRANS_CTL_1+AR_PI_DBG_TRANS_CTL_1_SIZE-1
#define AR_PI_DBG_TRANS_CTL_2                                  	(AR_PI_IP_BASE+0x0000001020ull)
#define AR_PI_DBG_TRANS_CTL_2_SIZE                             	0x0000000008ull
#define AR_PI_DBG_TRANS_CTL_2_LIMIT                            	AR_PI_DBG_TRANS_CTL_2+AR_PI_DBG_TRANS_CTL_2_SIZE-1
#define AR_PI_DBG_TRANS_CTL_3                                  	(AR_PI_IP_BASE+0x0000001028ull)
#define AR_PI_DBG_TRANS_CTL_3_SIZE                             	0x0000000008ull
#define AR_PI_DBG_TRANS_CTL_3_LIMIT                            	AR_PI_DBG_TRANS_CTL_3+AR_PI_DBG_TRANS_CTL_3_SIZE-1
#define AR_PI_DBG_TRANS_CTL_4                                  	(AR_PI_IP_BASE+0x0000001030ull)
#define AR_PI_DBG_TRANS_CTL_4_SIZE                             	0x0000000008ull
#define AR_PI_DBG_TRANS_CTL_4_LIMIT                            	AR_PI_DBG_TRANS_CTL_4+AR_PI_DBG_TRANS_CTL_4_SIZE-1
#define AR_PI_DBG_TRANS_MASK_0                                 	(AR_PI_IP_BASE+0x0000001040ull)
#define AR_PI_DBG_TRANS_MASK_0_SIZE                            	0x0000000008ull
#define AR_PI_DBG_TRANS_MASK_0_LIMIT                           	AR_PI_DBG_TRANS_MASK_0+AR_PI_DBG_TRANS_MASK_0_SIZE-1
#define AR_PI_DBG_TRANS_MASK_1                                 	(AR_PI_IP_BASE+0x0000001048ull)
#define AR_PI_DBG_TRANS_MASK_1_SIZE                            	0x0000000008ull
#define AR_PI_DBG_TRANS_MASK_1_LIMIT                           	AR_PI_DBG_TRANS_MASK_1+AR_PI_DBG_TRANS_MASK_1_SIZE-1
#define AR_PI_DBG_TRANS_MASK_2                                 	(AR_PI_IP_BASE+0x0000001050ull)
#define AR_PI_DBG_TRANS_MASK_2_SIZE                            	0x0000000008ull
#define AR_PI_DBG_TRANS_MASK_2_LIMIT                           	AR_PI_DBG_TRANS_MASK_2+AR_PI_DBG_TRANS_MASK_2_SIZE-1
#define AR_PI_DBG_TRANS_MASK_3                                 	(AR_PI_IP_BASE+0x0000001058ull)
#define AR_PI_DBG_TRANS_MASK_3_SIZE                            	0x0000000008ull
#define AR_PI_DBG_TRANS_MASK_3_LIMIT                           	AR_PI_DBG_TRANS_MASK_3+AR_PI_DBG_TRANS_MASK_3_SIZE-1
#define AR_PI_DBG_TRANS_MASK_4                                 	(AR_PI_IP_BASE+0x0000001060ull)
#define AR_PI_DBG_TRANS_MASK_4_SIZE                            	0x0000000008ull
#define AR_PI_DBG_TRANS_MASK_4_LIMIT                           	AR_PI_DBG_TRANS_MASK_4+AR_PI_DBG_TRANS_MASK_4_SIZE-1
#define AR_PI_CFG_DIAG_RECV                                    	(AR_PI_IP_BASE+0x0000001080ull)
#define AR_PI_CFG_DIAG_RECV_SIZE                               	0x0000000008ull
#define AR_PI_CFG_DIAG_RECV_LIMIT                              	AR_PI_CFG_DIAG_RECV+AR_PI_CFG_DIAG_RECV_SIZE-1
#define AR_PI_STS_DIAG_RECV                                    	(AR_PI_IP_BASE+0x0000001088ull)
#define AR_PI_STS_DIAG_RECV_SIZE                               	0x0000000008ull
#define AR_PI_STS_DIAG_RECV_LIMIT                              	AR_PI_STS_DIAG_RECV+AR_PI_STS_DIAG_RECV_SIZE-1
#define AR_PI_DBG_RECV_CTL_0                                   	(AR_PI_IP_BASE+0x0000001090ull)
#define AR_PI_DBG_RECV_CTL_0_SIZE                              	0x0000000008ull
#define AR_PI_DBG_RECV_CTL_0_LIMIT                             	AR_PI_DBG_RECV_CTL_0+AR_PI_DBG_RECV_CTL_0_SIZE-1
#define AR_PI_DBG_RECV_CTL_1                                   	(AR_PI_IP_BASE+0x0000001098ull)
#define AR_PI_DBG_RECV_CTL_1_SIZE                              	0x0000000008ull
#define AR_PI_DBG_RECV_CTL_1_LIMIT                             	AR_PI_DBG_RECV_CTL_1+AR_PI_DBG_RECV_CTL_1_SIZE-1
#define AR_PI_DBG_RECV_CTL_2                                   	(AR_PI_IP_BASE+0x00000010a0ull)
#define AR_PI_DBG_RECV_CTL_2_SIZE                              	0x0000000008ull
#define AR_PI_DBG_RECV_CTL_2_LIMIT                             	AR_PI_DBG_RECV_CTL_2+AR_PI_DBG_RECV_CTL_2_SIZE-1
#define AR_PI_DBG_RECV_CTL_3                                   	(AR_PI_IP_BASE+0x00000010a8ull)
#define AR_PI_DBG_RECV_CTL_3_SIZE                              	0x0000000008ull
#define AR_PI_DBG_RECV_CTL_3_LIMIT                             	AR_PI_DBG_RECV_CTL_3+AR_PI_DBG_RECV_CTL_3_SIZE-1
#define AR_PI_DBG_RECV_CTL_4                                   	(AR_PI_IP_BASE+0x00000010b0ull)
#define AR_PI_DBG_RECV_CTL_4_SIZE                              	0x0000000008ull
#define AR_PI_DBG_RECV_CTL_4_LIMIT                             	AR_PI_DBG_RECV_CTL_4+AR_PI_DBG_RECV_CTL_4_SIZE-1
#define AR_PI_DBG_RECV_MASK_0                                  	(AR_PI_IP_BASE+0x00000010c0ull)
#define AR_PI_DBG_RECV_MASK_0_SIZE                             	0x0000000008ull
#define AR_PI_DBG_RECV_MASK_0_LIMIT                            	AR_PI_DBG_RECV_MASK_0+AR_PI_DBG_RECV_MASK_0_SIZE-1
#define AR_PI_DBG_RECV_MASK_1                                  	(AR_PI_IP_BASE+0x00000010c8ull)
#define AR_PI_DBG_RECV_MASK_1_SIZE                             	0x0000000008ull
#define AR_PI_DBG_RECV_MASK_1_LIMIT                            	AR_PI_DBG_RECV_MASK_1+AR_PI_DBG_RECV_MASK_1_SIZE-1
#define AR_PI_DBG_RECV_MASK_2                                  	(AR_PI_IP_BASE+0x00000010d0ull)
#define AR_PI_DBG_RECV_MASK_2_SIZE                             	0x0000000008ull
#define AR_PI_DBG_RECV_MASK_2_LIMIT                            	AR_PI_DBG_RECV_MASK_2+AR_PI_DBG_RECV_MASK_2_SIZE-1
#define AR_PI_DBG_RECV_MASK_3                                  	(AR_PI_IP_BASE+0x00000010d8ull)
#define AR_PI_DBG_RECV_MASK_3_SIZE                             	0x0000000008ull
#define AR_PI_DBG_RECV_MASK_3_LIMIT                            	AR_PI_DBG_RECV_MASK_3+AR_PI_DBG_RECV_MASK_3_SIZE-1
#define AR_PI_DBG_RECV_MASK_4                                  	(AR_PI_IP_BASE+0x00000010e0ull)
#define AR_PI_DBG_RECV_MASK_4_SIZE                             	0x0000000008ull
#define AR_PI_DBG_RECV_MASK_4_LIMIT                            	AR_PI_DBG_RECV_MASK_4+AR_PI_DBG_RECV_MASK_4_SIZE-1
#define AR_PI_DEBUG_DEN_IP                                     	(AR_PI_IP_BASE+0x00000011d0ull)
#define AR_PI_DEBUG_DEN_IP_SIZE                                	0x0000000008ull
#define AR_PI_DEBUG_DEN_IP_LIMIT                               	AR_PI_DEBUG_DEN_IP+AR_PI_DEBUG_DEN_IP_SIZE-1
#define AR_PI_CFG_DIAG_INJ                                     	(AR_PI_IP_BASE+0x0000001200ull)
#define AR_PI_CFG_DIAG_INJ_SIZE                                	0x0000000008ull
#define AR_PI_CFG_DIAG_INJ_LIMIT                               	AR_PI_CFG_DIAG_INJ+AR_PI_CFG_DIAG_INJ_SIZE-1
#define AR_PI_STS_DIAG_INJ                                     	(AR_PI_IP_BASE+0x0000001208ull)
#define AR_PI_STS_DIAG_INJ_SIZE                                	0x0000000008ull
#define AR_PI_STS_DIAG_INJ_LIMIT                               	AR_PI_STS_DIAG_INJ+AR_PI_STS_DIAG_INJ_SIZE-1
#define AR_PI_PCIC_MEMS_DBG_ERRINJ                             	(AR_PI_IP_BASE+0x0000001300ull)
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_SIZE                        	0x0000000008ull
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_LIMIT                       	AR_PI_PCIC_MEMS_DBG_ERRINJ+AR_PI_PCIC_MEMS_DBG_ERRINJ_SIZE-1
#define AR_PI_PHY_CSR_CMU_0                                    	(AR_PI_IP_BASE+0x0000008000ull)
#define AR_PI_PHY_CSR_CMU_0_SIZE                               	0x0000000008ull
#define AR_PI_PHY_CSR_CMU_0_LIMIT                              	AR_PI_PHY_CSR_CMU_0+AR_PI_PHY_CSR_CMU_0_SIZE-1
#define AR_PI_PHY_CSR_LANE1_0                                  	(AR_PI_IP_BASE+0x0000009000ull)
#define AR_PI_PHY_CSR_LANE1_0_SIZE                             	0x0000000008ull
#define AR_PI_PHY_CSR_LANE1_0_LIMIT                            	AR_PI_PHY_CSR_LANE1_0+AR_PI_PHY_CSR_LANE1_0_SIZE-1
#define AR_PI_PHY_CSR_COMLANE_0                                	(AR_PI_IP_BASE+0x000000a800ull)
#define AR_PI_PHY_CSR_COMLANE_0_SIZE                           	0x0000000008ull
#define AR_PI_PHY_CSR_COMLANE_0_LIMIT                          	AR_PI_PHY_CSR_COMLANE_0+AR_PI_PHY_CSR_COMLANE_0_SIZE-1
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE                       	(AR_PI_IP_BASE+0x0000010004ull)
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_SIZE                  	0x0000000008ull
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LIMIT                 	AR_PI_DB_F0_DB_REV_ID_CLASS_CODE+AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_SIZE-1
#define AR_PI_DB_F0_BAR_0_1                                    	(AR_PI_IP_BASE+0x0000010010ull)
#define AR_PI_DB_F0_BAR_0_1_SIZE                               	0x0000000008ull
#define AR_PI_DB_F0_BAR_0_1_LIMIT                              	AR_PI_DB_F0_BAR_0_1+AR_PI_DB_F0_BAR_0_1_SIZE-1
#define AR_PI_DB_MSI_X_CNTL_2C_0                               	(AR_PI_IP_BASE+0x00000100b0ull)
#define AR_PI_DB_MSI_X_CNTL_2C_0_SIZE                          	0x0000000008ull
#define AR_PI_DB_MSI_X_CNTL_2C_0_LIMIT                         	AR_PI_DB_MSI_X_CNTL_2C_0+AR_PI_DB_MSI_X_CNTL_2C_0_SIZE-1
#define AR_PI_DB_MSI_X_PENDI_2E_0                              	(AR_PI_IP_BASE+0x00000100b8ull)
#define AR_PI_DB_MSI_X_PENDI_2E_0_SIZE                         	0x0000000008ull
#define AR_PI_DB_MSI_X_PENDI_2E_0_LIMIT                        	AR_PI_DB_MSI_X_PENDI_2E_0+AR_PI_DB_MSI_X_PENDI_2E_0_SIZE-1
#define AR_PI_DB_PCIE_CNTL_STS_0                               	(AR_PI_IP_BASE+0x00000100c8ull)
#define AR_PI_DB_PCIE_CNTL_STS_0_SIZE                          	0x0000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_0_LIMIT                         	AR_PI_DB_PCIE_CNTL_STS_0+AR_PI_DB_PCIE_CNTL_STS_0_SIZE-1
#define AR_PI_DB_PCIE_CNTL_STS_2_0                             	(AR_PI_IP_BASE+0x00000100e8ull)
#define AR_PI_DB_PCIE_CNTL_STS_2_0_SIZE                        	0x0000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_LIMIT                       	AR_PI_DB_PCIE_CNTL_STS_2_0+AR_PI_DB_PCIE_CNTL_STS_2_0_SIZE-1
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0                           	(AR_PI_IP_BASE+0x0000010278ull)
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_SIZE                      	0x0000000008ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_LIMIT                     	AR_PI_DB_PCIE_TPH_REQ_CNTL_0+AR_PI_DB_PCIE_TPH_REQ_CNTL_0_SIZE-1
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE                       	(AR_PI_IP_BASE+0x0000011004ull)
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_SIZE                  	0x0000000008ull
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LIMIT                 	AR_PI_DB_F1_DB_REV_ID_CLASS_CODE+AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_SIZE-1
#define AR_PI_DB_F1_BAR_0_1                                    	(AR_PI_IP_BASE+0x0000011010ull)
#define AR_PI_DB_F1_BAR_0_1_SIZE                               	0x0000000008ull
#define AR_PI_DB_F1_BAR_0_1_LIMIT                              	AR_PI_DB_F1_BAR_0_1+AR_PI_DB_F1_BAR_0_1_SIZE-1
#define AR_PI_DB_MSI_X_CNTL_2C_1                               	(AR_PI_IP_BASE+0x00000110b0ull)
#define AR_PI_DB_MSI_X_CNTL_2C_1_SIZE                          	0x0000000008ull
#define AR_PI_DB_MSI_X_CNTL_2C_1_LIMIT                         	AR_PI_DB_MSI_X_CNTL_2C_1+AR_PI_DB_MSI_X_CNTL_2C_1_SIZE-1
#define AR_PI_DB_MSI_X_PENDI_2E_1                              	(AR_PI_IP_BASE+0x00000110b8ull)
#define AR_PI_DB_MSI_X_PENDI_2E_1_SIZE                         	0x0000000008ull
#define AR_PI_DB_MSI_X_PENDI_2E_1_LIMIT                        	AR_PI_DB_MSI_X_PENDI_2E_1+AR_PI_DB_MSI_X_PENDI_2E_1_SIZE-1
#define AR_PI_DB_PCIE_CNTL_STS_1                               	(AR_PI_IP_BASE+0x00000110c8ull)
#define AR_PI_DB_PCIE_CNTL_STS_1_SIZE                          	0x0000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_1_LIMIT                         	AR_PI_DB_PCIE_CNTL_STS_1+AR_PI_DB_PCIE_CNTL_STS_1_SIZE-1
#define AR_PI_DB_PCIE_CNTL_STS_2_1                             	(AR_PI_IP_BASE+0x00000110e8ull)
#define AR_PI_DB_PCIE_CNTL_STS_2_1_SIZE                        	0x0000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_LIMIT                       	AR_PI_DB_PCIE_CNTL_STS_2_1+AR_PI_DB_PCIE_CNTL_STS_2_1_SIZE-1
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1                           	(AR_PI_IP_BASE+0x0000011278ull)
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_SIZE                      	0x0000000008ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_LIMIT                     	AR_PI_DB_PCIE_TPH_REQ_CNTL_1+AR_PI_DB_PCIE_TPH_REQ_CNTL_1_SIZE-1
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE                       	(AR_PI_IP_BASE+0x0000012004ull)
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_SIZE                  	0x0000000008ull
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LIMIT                 	AR_PI_DB_F2_DB_REV_ID_CLASS_CODE+AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_SIZE-1
#define AR_PI_DB_F2_BAR_0_1                                    	(AR_PI_IP_BASE+0x0000012010ull)
#define AR_PI_DB_F2_BAR_0_1_SIZE                               	0x0000000008ull
#define AR_PI_DB_F2_BAR_0_1_LIMIT                              	AR_PI_DB_F2_BAR_0_1+AR_PI_DB_F2_BAR_0_1_SIZE-1
#define AR_PI_DB_MSI_X_CNTL_2C_2                               	(AR_PI_IP_BASE+0x00000120b0ull)
#define AR_PI_DB_MSI_X_CNTL_2C_2_SIZE                          	0x0000000008ull
#define AR_PI_DB_MSI_X_CNTL_2C_2_LIMIT                         	AR_PI_DB_MSI_X_CNTL_2C_2+AR_PI_DB_MSI_X_CNTL_2C_2_SIZE-1
#define AR_PI_DB_MSI_X_PENDI_2E_2                              	(AR_PI_IP_BASE+0x00000120b8ull)
#define AR_PI_DB_MSI_X_PENDI_2E_2_SIZE                         	0x0000000008ull
#define AR_PI_DB_MSI_X_PENDI_2E_2_LIMIT                        	AR_PI_DB_MSI_X_PENDI_2E_2+AR_PI_DB_MSI_X_PENDI_2E_2_SIZE-1
#define AR_PI_DB_PCIE_CNTL_STS_2                               	(AR_PI_IP_BASE+0x00000120c8ull)
#define AR_PI_DB_PCIE_CNTL_STS_2_SIZE                          	0x0000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_2_LIMIT                         	AR_PI_DB_PCIE_CNTL_STS_2+AR_PI_DB_PCIE_CNTL_STS_2_SIZE-1
#define AR_PI_DB_PCIE_CNTL_STS_2_2                             	(AR_PI_IP_BASE+0x00000120e8ull)
#define AR_PI_DB_PCIE_CNTL_STS_2_2_SIZE                        	0x0000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_LIMIT                       	AR_PI_DB_PCIE_CNTL_STS_2_2+AR_PI_DB_PCIE_CNTL_STS_2_2_SIZE-1
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2                           	(AR_PI_IP_BASE+0x0000012278ull)
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_SIZE                      	0x0000000008ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_LIMIT                     	AR_PI_DB_PCIE_TPH_REQ_CNTL_2+AR_PI_DB_PCIE_TPH_REQ_CNTL_2_SIZE-1
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE                       	(AR_PI_IP_BASE+0x0000013004ull)
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_SIZE                  	0x0000000008ull
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LIMIT                 	AR_PI_DB_F3_DB_REV_ID_CLASS_CODE+AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_SIZE-1
#define AR_PI_DB_F3_BAR_0_1                                    	(AR_PI_IP_BASE+0x0000013010ull)
#define AR_PI_DB_F3_BAR_0_1_SIZE                               	0x0000000008ull
#define AR_PI_DB_F3_BAR_0_1_LIMIT                              	AR_PI_DB_F3_BAR_0_1+AR_PI_DB_F3_BAR_0_1_SIZE-1
#define AR_PI_DB_MSI_X_CNTL_2C_3                               	(AR_PI_IP_BASE+0x00000130b0ull)
#define AR_PI_DB_MSI_X_CNTL_2C_3_SIZE                          	0x0000000008ull
#define AR_PI_DB_MSI_X_CNTL_2C_3_LIMIT                         	AR_PI_DB_MSI_X_CNTL_2C_3+AR_PI_DB_MSI_X_CNTL_2C_3_SIZE-1
#define AR_PI_DB_MSI_X_PENDI_2E_3                              	(AR_PI_IP_BASE+0x00000130b8ull)
#define AR_PI_DB_MSI_X_PENDI_2E_3_SIZE                         	0x0000000008ull
#define AR_PI_DB_MSI_X_PENDI_2E_3_LIMIT                        	AR_PI_DB_MSI_X_PENDI_2E_3+AR_PI_DB_MSI_X_PENDI_2E_3_SIZE-1
#define AR_PI_DB_PCIE_CNTL_STS_3                               	(AR_PI_IP_BASE+0x00000130c8ull)
#define AR_PI_DB_PCIE_CNTL_STS_3_SIZE                          	0x0000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_3_LIMIT                         	AR_PI_DB_PCIE_CNTL_STS_3+AR_PI_DB_PCIE_CNTL_STS_3_SIZE-1
#define AR_PI_DB_PCIE_CNTL_STS_2_3                             	(AR_PI_IP_BASE+0x00000130e8ull)
#define AR_PI_DB_PCIE_CNTL_STS_2_3_SIZE                        	0x0000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_LIMIT                       	AR_PI_DB_PCIE_CNTL_STS_2_3+AR_PI_DB_PCIE_CNTL_STS_2_3_SIZE-1
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3                           	(AR_PI_IP_BASE+0x0000013278ull)
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_SIZE                      	0x0000000008ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_LIMIT                     	AR_PI_DB_PCIE_TPH_REQ_CNTL_3+AR_PI_DB_PCIE_TPH_REQ_CNTL_3_SIZE-1
#define AR_PI_DB_PHY_LAYER_CFG                                 	(AR_PI_IP_BASE+0x0000014000ull)
#define AR_PI_DB_PHY_LAYER_CFG_SIZE                            	0x0000000008ull
#define AR_PI_DB_PHY_LAYER_CFG_LIMIT                           	AR_PI_DB_PHY_LAYER_CFG+AR_PI_DB_PHY_LAYER_CFG_SIZE-1
#define AR_PI_DB_RECV_CREDIT_0                                 	(AR_PI_IP_BASE+0x0000014008ull)
#define AR_PI_DB_RECV_CREDIT_0_SIZE                            	0x0000000008ull
#define AR_PI_DB_RECV_CREDIT_0_LIMIT                           	AR_PI_DB_RECV_CREDIT_0+AR_PI_DB_RECV_CREDIT_0_SIZE-1
#define AR_PI_DB_RECV_CREDIT_1                                 	(AR_PI_IP_BASE+0x0000014010ull)
#define AR_PI_DB_RECV_CREDIT_1_SIZE                            	0x0000000008ull
#define AR_PI_DB_RECV_CREDIT_1_LIMIT                           	AR_PI_DB_RECV_CREDIT_1+AR_PI_DB_RECV_CREDIT_1_SIZE-1
#define AR_PI_DB_RECV_FTS_COUNT                                	(AR_PI_IP_BASE+0x0000014200ull)
#define AR_PI_DB_RECV_FTS_COUNT_SIZE                           	0x0000000008ull
#define AR_PI_DB_RECV_FTS_COUNT_LIMIT                          	AR_PI_DB_RECV_FTS_COUNT+AR_PI_DB_RECV_FTS_COUNT_SIZE-1
#define AR_PI_DB_PHYSICAL_CFG_REG                              	(AR_PI_IP_BASE+0x00000142c0ull)
#define AR_PI_DB_PHYSICAL_CFG_REG_SIZE                         	0x0000000008ull
#define AR_PI_DB_PHYSICAL_CFG_REG_LIMIT                        	AR_PI_DB_PHYSICAL_CFG_REG+AR_PI_DB_PHYSICAL_CFG_REG_SIZE-1

/*
 *  AR_PI_CFG_DEN_IP DEFINES
 */
#define AR_PI_CFG_DEN_IP_LINK_DOWN_RESET_COUNT_MASK                     	0x0000ffff00000000ull
#define AR_PI_CFG_DEN_IP_PHY_LANE_RESET_PLTRST_ENABLE_MASK              	0x0000000000100000ull
#define AR_PI_CFG_DEN_IP_DEBUG_STATUS_PERF_CNTR_SEL_MASK                	0x0000000000080000ull
#define AR_PI_CFG_DEN_IP_LANE_COUNT_IN_MASK                             	0x0000000000070000ull
#define AR_PI_CFG_DEN_IP_PCIE_DISABLE_GEN3_DC_BALANCE_MASK              	0x0000000000004000ull
#define AR_PI_CFG_DEN_IP_PCIE_GENERATION_SEL_MASK                       	0x0000000000003000ull
#define AR_PI_CFG_DEN_IP_PHANTOM_FUNCTION_MODE_SEL_MASK                 	0x0000000000000300ull
#define AR_PI_CFG_DEN_IP_LINK_DOWN_ENABLE_MASK                          	0x0000000000000020ull
#define AR_PI_CFG_DEN_IP_PLTRST_ENABLE_MASK                             	0x0000000000000010ull
#define AR_PI_CFG_DEN_IP_LINK_TRAINING_ENABLE_MASK                      	0x0000000000000002ull
#define AR_PI_CFG_DEN_IP_CONFIG_ENABLE_MASK                             	0x0000000000000001ull
#define AR_PI_CFG_DEN_IP_LINK_DOWN_RESET_COUNT_BP                       	32
#define AR_PI_CFG_DEN_IP_PHY_LANE_RESET_PLTRST_ENABLE_BP                	20
#define AR_PI_CFG_DEN_IP_DEBUG_STATUS_PERF_CNTR_SEL_BP                  	19
#define AR_PI_CFG_DEN_IP_LANE_COUNT_IN_BP                               	16
#define AR_PI_CFG_DEN_IP_PCIE_DISABLE_GEN3_DC_BALANCE_BP                	14
#define AR_PI_CFG_DEN_IP_PCIE_GENERATION_SEL_BP                         	12
#define AR_PI_CFG_DEN_IP_PHANTOM_FUNCTION_MODE_SEL_BP                   	8
#define AR_PI_CFG_DEN_IP_LINK_DOWN_ENABLE_BP                            	5
#define AR_PI_CFG_DEN_IP_PLTRST_ENABLE_BP                               	4
#define AR_PI_CFG_DEN_IP_LINK_TRAINING_ENABLE_BP                        	1
#define AR_PI_CFG_DEN_IP_CONFIG_ENABLE_BP                               	0
#define AR_PI_CFG_DEN_IP_LINK_DOWN_RESET_COUNT_QW                       	0
#define AR_PI_CFG_DEN_IP_PHY_LANE_RESET_PLTRST_ENABLE_QW                	0
#define AR_PI_CFG_DEN_IP_DEBUG_STATUS_PERF_CNTR_SEL_QW                  	0
#define AR_PI_CFG_DEN_IP_LANE_COUNT_IN_QW                               	0
#define AR_PI_CFG_DEN_IP_PCIE_DISABLE_GEN3_DC_BALANCE_QW                	0
#define AR_PI_CFG_DEN_IP_PCIE_GENERATION_SEL_QW                         	0
#define AR_PI_CFG_DEN_IP_PHANTOM_FUNCTION_MODE_SEL_QW                   	0
#define AR_PI_CFG_DEN_IP_LINK_DOWN_ENABLE_QW                            	0
#define AR_PI_CFG_DEN_IP_PLTRST_ENABLE_QW                               	0
#define AR_PI_CFG_DEN_IP_LINK_TRAINING_ENABLE_QW                        	0
#define AR_PI_CFG_DEN_IP_CONFIG_ENABLE_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_STS_DEN_IP DEFINES
 */
#define AR_PI_STS_DEN_IP_FUNCTION_POWER_STATE_MASK                      	0x0fff000000000000ull
#define AR_PI_STS_DEN_IP_FUNCTION_STATUS_MASK                           	0x0000ffff00000000ull
#define AR_PI_STS_DEN_IP_RCB_STATUS_MASK                                	0x00000000f0000000ull
#define AR_PI_STS_DEN_IP_MAX_PAYLOAD_SIZE_MASK                          	0x0000000007000000ull
#define AR_PI_STS_DEN_IP_LTSSM_STATE_MASK                               	0x00000000003f0000ull
#define AR_PI_STS_DEN_IP_LINK_POWER_STATE_MASK                          	0x000000000000f000ull
#define AR_PI_STS_DEN_IP_MAX_READ_REQ_SIZE_MASK                         	0x0000000000000700ull
#define AR_PI_STS_DEN_IP_LINK_STATUS_MASK                               	0x0000000000000030ull
#define AR_PI_STS_DEN_IP_NEGOTIATED_SPEED_MASK                          	0x000000000000000cull
#define AR_PI_STS_DEN_IP_LINK_DOWN_RESET_OUT_MASK                       	0x0000000000000002ull
#define AR_PI_STS_DEN_IP_HOT_RESET_OUT_MASK                             	0x0000000000000001ull
#define AR_PI_STS_DEN_IP_FUNCTION_POWER_STATE_BP                        	48
#define AR_PI_STS_DEN_IP_FUNCTION_STATUS_BP                             	32
#define AR_PI_STS_DEN_IP_RCB_STATUS_BP                                  	28
#define AR_PI_STS_DEN_IP_MAX_PAYLOAD_SIZE_BP                            	24
#define AR_PI_STS_DEN_IP_LTSSM_STATE_BP                                 	16
#define AR_PI_STS_DEN_IP_LINK_POWER_STATE_BP                            	12
#define AR_PI_STS_DEN_IP_MAX_READ_REQ_SIZE_BP                           	8
#define AR_PI_STS_DEN_IP_LINK_STATUS_BP                                 	4
#define AR_PI_STS_DEN_IP_NEGOTIATED_SPEED_BP                            	2
#define AR_PI_STS_DEN_IP_LINK_DOWN_RESET_OUT_BP                         	1
#define AR_PI_STS_DEN_IP_HOT_RESET_OUT_BP                               	0
#define AR_PI_STS_DEN_IP_FUNCTION_POWER_STATE_QW                        	0
#define AR_PI_STS_DEN_IP_FUNCTION_STATUS_QW                             	0
#define AR_PI_STS_DEN_IP_RCB_STATUS_QW                                  	0
#define AR_PI_STS_DEN_IP_MAX_PAYLOAD_SIZE_QW                            	0
#define AR_PI_STS_DEN_IP_LTSSM_STATE_QW                                 	0
#define AR_PI_STS_DEN_IP_LINK_POWER_STATE_QW                            	0
#define AR_PI_STS_DEN_IP_MAX_READ_REQ_SIZE_QW                           	0
#define AR_PI_STS_DEN_IP_LINK_STATUS_QW                                 	0
#define AR_PI_STS_DEN_IP_NEGOTIATED_SPEED_QW                            	0
#define AR_PI_STS_DEN_IP_LINK_DOWN_RESET_OUT_QW                         	0
#define AR_PI_STS_DEN_IP_HOT_RESET_OUT_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_ERR_FLG_IP DEFINES
 */
#define AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW_MASK                       	0x0000000000002000ull
#define AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW_MASK                       	0x0000000000001000ull
#define AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER_MASK                          	0x0000000000000800ull
#define AR_PI_ERR_FLG_IP_PM_CNTR_PERR_MASK                              	0x0000000000000400ull
#define AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE_MASK                          	0x0000000000000200ull
#define AR_PI_ERR_FLG_IP_DEN_INTR_MASK                                  	0x0000000000000100ull
#define AR_PI_ERR_FLG_IP_DEN_DPA_INTR_MASK                              	0x00000000000000f0ull
#define AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR_MASK                     	0x0000000000000008ull
#define AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR_MASK                       	0x0000000000000004ull
#define AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR_MASK                           	0x0000000000000002ull
#define AR_PI_ERR_FLG_IP_DIAG_ONLY_MASK                                 	0x0000000000000001ull
#define AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW_BP                         	13
#define AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW_BP                         	12
#define AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER_BP                            	11
#define AR_PI_ERR_FLG_IP_PM_CNTR_PERR_BP                                	10
#define AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE_BP                            	9
#define AR_PI_ERR_FLG_IP_DEN_INTR_BP                                    	8
#define AR_PI_ERR_FLG_IP_DEN_DPA_INTR_BP                                	4
#define AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR_BP                       	3
#define AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR_BP                         	2
#define AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR_BP                             	1
#define AR_PI_ERR_FLG_IP_DIAG_ONLY_BP                                   	0
#define AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW_QW                         	0
#define AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW_QW                         	0
#define AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER_QW                            	0
#define AR_PI_ERR_FLG_IP_PM_CNTR_PERR_QW                                	0
#define AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE_QW                            	0
#define AR_PI_ERR_FLG_IP_DEN_INTR_QW                                    	0
#define AR_PI_ERR_FLG_IP_DEN_DPA_INTR_QW                                	0
#define AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR_QW                       	0
#define AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR_QW                         	0
#define AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR_QW                             	0
#define AR_PI_ERR_FLG_IP_DIAG_ONLY_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#define AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW_EC                         	A_EC_CRIT
#define AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW_EC                         	A_EC_CRIT
#define AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER_EC                            	A_EC_INFO
#define AR_PI_ERR_FLG_IP_PM_CNTR_PERR_EC                                	A_EC_INFO
#define AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE_EC                            	A_EC_INFO
#define AR_PI_ERR_FLG_IP_DEN_INTR_EC                                    	A_EC_CRIT
#define AR_PI_ERR_FLG_IP_DEN_DPA_INTR_EC                                	A_EC_INFO
#define AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR_EC                       	A_EC_CORR
#define AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR_EC                         	A_EC_INFO
#define AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR_EC                             	A_EC_CRIT
#define AR_PI_ERR_FLG_IP_DIAG_ONLY_EC                                   	A_EC_DIAG
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_ERR_CLR_IP DEFINES
 */
#define AR_PI_ERR_CLR_IP_LB_RING_PCLK_UNFLOW_MASK                       	0x0000000000002000ull
#define AR_PI_ERR_CLR_IP_LB_RING_PCLK_OVFLOW_MASK                       	0x0000000000001000ull
#define AR_PI_ERR_CLR_IP_PM_CNTR_ROLLOVER_MASK                          	0x0000000000000800ull
#define AR_PI_ERR_CLR_IP_PM_CNTR_PERR_MASK                              	0x0000000000000400ull
#define AR_PI_ERR_CLR_IP_DEN_SPEED_CHANGE_MASK                          	0x0000000000000200ull
#define AR_PI_ERR_CLR_IP_DEN_INTR_MASK                                  	0x0000000000000100ull
#define AR_PI_ERR_CLR_IP_DEN_DPA_INTR_MASK                              	0x00000000000000f0ull
#define AR_PI_ERR_CLR_IP_DEN_CORRECTABLE_ERROR_MASK                     	0x0000000000000008ull
#define AR_PI_ERR_CLR_IP_DEN_NON_FATAL_ERROR_MASK                       	0x0000000000000004ull
#define AR_PI_ERR_CLR_IP_DEN_FATAL_ERROR_MASK                           	0x0000000000000002ull
#define AR_PI_ERR_CLR_IP_DIAG_ONLY_MASK                                 	0x0000000000000001ull
#define AR_PI_ERR_CLR_IP_LB_RING_PCLK_UNFLOW_BP                         	13
#define AR_PI_ERR_CLR_IP_LB_RING_PCLK_OVFLOW_BP                         	12
#define AR_PI_ERR_CLR_IP_PM_CNTR_ROLLOVER_BP                            	11
#define AR_PI_ERR_CLR_IP_PM_CNTR_PERR_BP                                	10
#define AR_PI_ERR_CLR_IP_DEN_SPEED_CHANGE_BP                            	9
#define AR_PI_ERR_CLR_IP_DEN_INTR_BP                                    	8
#define AR_PI_ERR_CLR_IP_DEN_DPA_INTR_BP                                	4
#define AR_PI_ERR_CLR_IP_DEN_CORRECTABLE_ERROR_BP                       	3
#define AR_PI_ERR_CLR_IP_DEN_NON_FATAL_ERROR_BP                         	2
#define AR_PI_ERR_CLR_IP_DEN_FATAL_ERROR_BP                             	1
#define AR_PI_ERR_CLR_IP_DIAG_ONLY_BP                                   	0
#define AR_PI_ERR_CLR_IP_LB_RING_PCLK_UNFLOW_QW                         	0
#define AR_PI_ERR_CLR_IP_LB_RING_PCLK_OVFLOW_QW                         	0
#define AR_PI_ERR_CLR_IP_PM_CNTR_ROLLOVER_QW                            	0
#define AR_PI_ERR_CLR_IP_PM_CNTR_PERR_QW                                	0
#define AR_PI_ERR_CLR_IP_DEN_SPEED_CHANGE_QW                            	0
#define AR_PI_ERR_CLR_IP_DEN_INTR_QW                                    	0
#define AR_PI_ERR_CLR_IP_DEN_DPA_INTR_QW                                	0
#define AR_PI_ERR_CLR_IP_DEN_CORRECTABLE_ERROR_QW                       	0
#define AR_PI_ERR_CLR_IP_DEN_NON_FATAL_ERROR_QW                         	0
#define AR_PI_ERR_CLR_IP_DEN_FATAL_ERROR_QW                             	0
#define AR_PI_ERR_CLR_IP_DIAG_ONLY_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_ERR_HSS_MSK_IP DEFINES
 */
#define AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_UNFLOW_MASK                   	0x0000000000002000ull
#define AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_OVFLOW_MASK                   	0x0000000000001000ull
#define AR_PI_ERR_HSS_MSK_IP_PM_CNTR_ROLLOVER_MASK                      	0x0000000000000800ull
#define AR_PI_ERR_HSS_MSK_IP_PM_CNTR_PERR_MASK                          	0x0000000000000400ull
#define AR_PI_ERR_HSS_MSK_IP_DEN_SPEED_CHANGE_MASK                      	0x0000000000000200ull
#define AR_PI_ERR_HSS_MSK_IP_DEN_INTR_MASK                              	0x0000000000000100ull
#define AR_PI_ERR_HSS_MSK_IP_DEN_DPA_INTR_MASK                          	0x00000000000000f0ull
#define AR_PI_ERR_HSS_MSK_IP_DEN_CORRECTABLE_ERROR_MASK                 	0x0000000000000008ull
#define AR_PI_ERR_HSS_MSK_IP_DEN_NON_FATAL_ERROR_MASK                   	0x0000000000000004ull
#define AR_PI_ERR_HSS_MSK_IP_DEN_FATAL_ERROR_MASK                       	0x0000000000000002ull
#define AR_PI_ERR_HSS_MSK_IP_DIAG_ONLY_MASK                             	0x0000000000000001ull
#define AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_UNFLOW_BP                     	13
#define AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_OVFLOW_BP                     	12
#define AR_PI_ERR_HSS_MSK_IP_PM_CNTR_ROLLOVER_BP                        	11
#define AR_PI_ERR_HSS_MSK_IP_PM_CNTR_PERR_BP                            	10
#define AR_PI_ERR_HSS_MSK_IP_DEN_SPEED_CHANGE_BP                        	9
#define AR_PI_ERR_HSS_MSK_IP_DEN_INTR_BP                                	8
#define AR_PI_ERR_HSS_MSK_IP_DEN_DPA_INTR_BP                            	4
#define AR_PI_ERR_HSS_MSK_IP_DEN_CORRECTABLE_ERROR_BP                   	3
#define AR_PI_ERR_HSS_MSK_IP_DEN_NON_FATAL_ERROR_BP                     	2
#define AR_PI_ERR_HSS_MSK_IP_DEN_FATAL_ERROR_BP                         	1
#define AR_PI_ERR_HSS_MSK_IP_DIAG_ONLY_BP                               	0
#define AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_UNFLOW_QW                     	0
#define AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_OVFLOW_QW                     	0
#define AR_PI_ERR_HSS_MSK_IP_PM_CNTR_ROLLOVER_QW                        	0
#define AR_PI_ERR_HSS_MSK_IP_PM_CNTR_PERR_QW                            	0
#define AR_PI_ERR_HSS_MSK_IP_DEN_SPEED_CHANGE_QW                        	0
#define AR_PI_ERR_HSS_MSK_IP_DEN_INTR_QW                                	0
#define AR_PI_ERR_HSS_MSK_IP_DEN_DPA_INTR_QW                            	0
#define AR_PI_ERR_HSS_MSK_IP_DEN_CORRECTABLE_ERROR_QW                   	0
#define AR_PI_ERR_HSS_MSK_IP_DEN_NON_FATAL_ERROR_QW                     	0
#define AR_PI_ERR_HSS_MSK_IP_DEN_FATAL_ERROR_QW                         	0
#define AR_PI_ERR_HSS_MSK_IP_DIAG_ONLY_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_ERR_OS_MSK_IP DEFINES
 */
#define AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_UNFLOW_MASK                    	0x0000000000002000ull
#define AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_OVFLOW_MASK                    	0x0000000000001000ull
#define AR_PI_ERR_OS_MSK_IP_PM_CNTR_ROLLOVER_MASK                       	0x0000000000000800ull
#define AR_PI_ERR_OS_MSK_IP_PM_CNTR_PERR_MASK                           	0x0000000000000400ull
#define AR_PI_ERR_OS_MSK_IP_DEN_SPEED_CHANGE_MASK                       	0x0000000000000200ull
#define AR_PI_ERR_OS_MSK_IP_DEN_INTR_MASK                               	0x0000000000000100ull
#define AR_PI_ERR_OS_MSK_IP_DEN_DPA_INTR_MASK                           	0x00000000000000f0ull
#define AR_PI_ERR_OS_MSK_IP_DEN_CORRECTABLE_ERROR_MASK                  	0x0000000000000008ull
#define AR_PI_ERR_OS_MSK_IP_DEN_NON_FATAL_ERROR_MASK                    	0x0000000000000004ull
#define AR_PI_ERR_OS_MSK_IP_DEN_FATAL_ERROR_MASK                        	0x0000000000000002ull
#define AR_PI_ERR_OS_MSK_IP_DIAG_ONLY_MASK                              	0x0000000000000001ull
#define AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_UNFLOW_BP                      	13
#define AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_OVFLOW_BP                      	12
#define AR_PI_ERR_OS_MSK_IP_PM_CNTR_ROLLOVER_BP                         	11
#define AR_PI_ERR_OS_MSK_IP_PM_CNTR_PERR_BP                             	10
#define AR_PI_ERR_OS_MSK_IP_DEN_SPEED_CHANGE_BP                         	9
#define AR_PI_ERR_OS_MSK_IP_DEN_INTR_BP                                 	8
#define AR_PI_ERR_OS_MSK_IP_DEN_DPA_INTR_BP                             	4
#define AR_PI_ERR_OS_MSK_IP_DEN_CORRECTABLE_ERROR_BP                    	3
#define AR_PI_ERR_OS_MSK_IP_DEN_NON_FATAL_ERROR_BP                      	2
#define AR_PI_ERR_OS_MSK_IP_DEN_FATAL_ERROR_BP                          	1
#define AR_PI_ERR_OS_MSK_IP_DIAG_ONLY_BP                                	0
#define AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_UNFLOW_QW                      	0
#define AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_OVFLOW_QW                      	0
#define AR_PI_ERR_OS_MSK_IP_PM_CNTR_ROLLOVER_QW                         	0
#define AR_PI_ERR_OS_MSK_IP_PM_CNTR_PERR_QW                             	0
#define AR_PI_ERR_OS_MSK_IP_DEN_SPEED_CHANGE_QW                         	0
#define AR_PI_ERR_OS_MSK_IP_DEN_INTR_QW                                 	0
#define AR_PI_ERR_OS_MSK_IP_DEN_DPA_INTR_QW                             	0
#define AR_PI_ERR_OS_MSK_IP_DEN_CORRECTABLE_ERROR_QW                    	0
#define AR_PI_ERR_OS_MSK_IP_DEN_NON_FATAL_ERROR_QW                      	0
#define AR_PI_ERR_OS_MSK_IP_DEN_FATAL_ERROR_QW                          	0
#define AR_PI_ERR_OS_MSK_IP_DIAG_ONLY_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_ERR_FIRST_FLG_IP DEFINES
 */
#define AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_UNFLOW_MASK                 	0x0000000000002000ull
#define AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_OVFLOW_MASK                 	0x0000000000001000ull
#define AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_ROLLOVER_MASK                    	0x0000000000000800ull
#define AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_PERR_MASK                        	0x0000000000000400ull
#define AR_PI_ERR_FIRST_FLG_IP_DEN_SPEED_CHANGE_MASK                    	0x0000000000000200ull
#define AR_PI_ERR_FIRST_FLG_IP_DEN_INTR_MASK                            	0x0000000000000100ull
#define AR_PI_ERR_FIRST_FLG_IP_DEN_DPA_INTR_MASK                        	0x00000000000000f0ull
#define AR_PI_ERR_FIRST_FLG_IP_DEN_CORRECTABLE_ERROR_MASK               	0x0000000000000008ull
#define AR_PI_ERR_FIRST_FLG_IP_DEN_NON_FATAL_ERROR_MASK                 	0x0000000000000004ull
#define AR_PI_ERR_FIRST_FLG_IP_DEN_FATAL_ERROR_MASK                     	0x0000000000000002ull
#define AR_PI_ERR_FIRST_FLG_IP_DIAG_ONLY_MASK                           	0x0000000000000001ull
#define AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_UNFLOW_BP                   	13
#define AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_OVFLOW_BP                   	12
#define AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_ROLLOVER_BP                      	11
#define AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_PERR_BP                          	10
#define AR_PI_ERR_FIRST_FLG_IP_DEN_SPEED_CHANGE_BP                      	9
#define AR_PI_ERR_FIRST_FLG_IP_DEN_INTR_BP                              	8
#define AR_PI_ERR_FIRST_FLG_IP_DEN_DPA_INTR_BP                          	4
#define AR_PI_ERR_FIRST_FLG_IP_DEN_CORRECTABLE_ERROR_BP                 	3
#define AR_PI_ERR_FIRST_FLG_IP_DEN_NON_FATAL_ERROR_BP                   	2
#define AR_PI_ERR_FIRST_FLG_IP_DEN_FATAL_ERROR_BP                       	1
#define AR_PI_ERR_FIRST_FLG_IP_DIAG_ONLY_BP                             	0
#define AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_UNFLOW_QW                   	0
#define AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_OVFLOW_QW                   	0
#define AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_ROLLOVER_QW                      	0
#define AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_PERR_QW                          	0
#define AR_PI_ERR_FIRST_FLG_IP_DEN_SPEED_CHANGE_QW                      	0
#define AR_PI_ERR_FIRST_FLG_IP_DEN_INTR_QW                              	0
#define AR_PI_ERR_FIRST_FLG_IP_DEN_DPA_INTR_QW                          	0
#define AR_PI_ERR_FIRST_FLG_IP_DEN_CORRECTABLE_ERROR_QW                 	0
#define AR_PI_ERR_FIRST_FLG_IP_DEN_NON_FATAL_ERROR_QW                   	0
#define AR_PI_ERR_FIRST_FLG_IP_DEN_FATAL_ERROR_QW                       	0
#define AR_PI_ERR_FIRST_FLG_IP_DIAG_ONLY_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_STATUS_DEN_IP DEFINES
 */
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_3_MASK                           	0x0008000000000000ull
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_2_MASK                           	0x0004000000000000ull
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_1_MASK                           	0x0002000000000000ull
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_O_MASK                           	0x0001000000000000ull
#define AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_ENABLE_MASK         	0x0000ffff00000000ull
#define AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_MASK                	0x00000000ffff0000ull
#define AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_SAMPLE_MASK                  	0x000000000000ffffull
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_3_BP                             	51
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_2_BP                             	50
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_1_BP                             	49
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_O_BP                             	48
#define AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_ENABLE_BP           	32
#define AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_BP                  	16
#define AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_SAMPLE_BP                    	0
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_3_QW                             	0
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_2_QW                             	0
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_1_QW                             	0
#define AR_PI_PHY_STATUS_DEN_IP_CMU_OK_O_QW                             	0
#define AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_ENABLE_QW           	0
#define AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_QW                  	0
#define AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_SAMPLE_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_DEN_IP DEFINES
 */
#define AR_PI_PHY_EQUAL_DEN_IP_MAX_ADAPT_CYCLES_MASK                    	0x0000003f00000000ull
#define AR_PI_PHY_EQUAL_DEN_IP_MIN_ADAPT_CYCLES_MASK                    	0x000000003f000000ull
#define AR_PI_PHY_EQUAL_DEN_IP_MAX_DELTA_MASK                           	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_LF_MASK                          	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_FS_MASK                          	0x000000000000003full
#define AR_PI_PHY_EQUAL_DEN_IP_MAX_ADAPT_CYCLES_BP                      	32
#define AR_PI_PHY_EQUAL_DEN_IP_MIN_ADAPT_CYCLES_BP                      	24
#define AR_PI_PHY_EQUAL_DEN_IP_MAX_DELTA_BP                             	16
#define AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_LF_BP                            	8
#define AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_FS_BP                            	0
#define AR_PI_PHY_EQUAL_DEN_IP_MAX_ADAPT_CYCLES_QW                      	0
#define AR_PI_PHY_EQUAL_DEN_IP_MIN_ADAPT_CYCLES_QW                      	0
#define AR_PI_PHY_EQUAL_DEN_IP_MAX_DELTA_QW                             	0
#define AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_LF_QW                            	0
#define AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_FS_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_0 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_0_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_0_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_0_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_0_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_0_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_0_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_0_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_0_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_0_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_1 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_1_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_1_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_1_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_1_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_1_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_1_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_1_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_1_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_1_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_2 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_2_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_2_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_2_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_2_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_2_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_2_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_2_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_2_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_2_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_3 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_3_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_3_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_3_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_3_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_3_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_3_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_3_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_3_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_3_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_4 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_4_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_4_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_4_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_4_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_4_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_4_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_4_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_4_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_4_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_5 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_5_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_5_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_5_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_5_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_5_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_5_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_5_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_5_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_5_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_6 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_6_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_6_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_6_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_6_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_6_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_6_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_6_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_6_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_6_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_7 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_7_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_7_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_7_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_7_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_7_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_7_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_7_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_7_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_7_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_8 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_8_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_8_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_8_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_8_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_8_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_8_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_8_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_8_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_8_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_9 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_9_CP1_MASK                                	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_9_C0_MASK                                 	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_9_CM1_MASK                                	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_9_CP1_BP                                  	16
#define AR_PI_PHY_EQUAL_COEFF_9_C0_BP                                   	8
#define AR_PI_PHY_EQUAL_COEFF_9_CM1_BP                                  	0
#define AR_PI_PHY_EQUAL_COEFF_9_CP1_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_9_C0_QW                                   	0
#define AR_PI_PHY_EQUAL_COEFF_9_CM1_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_EQUAL_COEFF_10 DEFINES
 */
#define AR_PI_PHY_EQUAL_COEFF_10_CP1_MASK                               	0x00000000003f0000ull
#define AR_PI_PHY_EQUAL_COEFF_10_C0_MASK                                	0x0000000000003f00ull
#define AR_PI_PHY_EQUAL_COEFF_10_CM1_MASK                               	0x000000000000003full
#define AR_PI_PHY_EQUAL_COEFF_10_CP1_BP                                 	16
#define AR_PI_PHY_EQUAL_COEFF_10_C0_BP                                  	8
#define AR_PI_PHY_EQUAL_COEFF_10_CM1_BP                                 	0
#define AR_PI_PHY_EQUAL_COEFF_10_CP1_QW                                 	0
#define AR_PI_PHY_EQUAL_COEFF_10_C0_QW                                  	0
#define AR_PI_PHY_EQUAL_COEFF_10_CM1_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_PCLK_CFG DEFINES
 */
#define AR_PI_PMI_PCLK_CFG_PRF_PRSP_HAL_BLKD_EN_MASK                    	0x0000000000002000ull
#define AR_PI_PMI_PCLK_CFG_PRF_PREQ_BLKD_EN_MASK                        	0x0000000000001000ull
#define AR_PI_PMI_PCLK_CFG_PRF_PREQ_PTC_BLKD_EN_MASK                    	0x0000000000000700ull
#define AR_PI_PMI_PCLK_CFG_PM_SELECT_MASK                               	0x0000000000000020ull
#define AR_PI_PMI_PCLK_CFG_PNP_ARB_ENA_MASK                             	0x0000000000000010ull
#define AR_PI_PMI_PCLK_CFG_PRSP_FC_THRESH_MASK                          	0x000000000000000full
#define AR_PI_PMI_PCLK_CFG_PRF_PRSP_HAL_BLKD_EN_BP                      	13
#define AR_PI_PMI_PCLK_CFG_PRF_PREQ_BLKD_EN_BP                          	12
#define AR_PI_PMI_PCLK_CFG_PRF_PREQ_PTC_BLKD_EN_BP                      	8
#define AR_PI_PMI_PCLK_CFG_PM_SELECT_BP                                 	5
#define AR_PI_PMI_PCLK_CFG_PNP_ARB_ENA_BP                               	4
#define AR_PI_PMI_PCLK_CFG_PRSP_FC_THRESH_BP                            	0
#define AR_PI_PMI_PCLK_CFG_PRF_PRSP_HAL_BLKD_EN_QW                      	0
#define AR_PI_PMI_PCLK_CFG_PRF_PREQ_BLKD_EN_QW                          	0
#define AR_PI_PMI_PCLK_CFG_PRF_PREQ_PTC_BLKD_EN_QW                      	0
#define AR_PI_PMI_PCLK_CFG_PM_SELECT_QW                                 	0
#define AR_PI_PMI_PCLK_CFG_PNP_ARB_ENA_QW                               	0
#define AR_PI_PMI_PCLK_CFG_PRSP_FC_THRESH_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_DBG_ERRINJ_PREQ DEFINES
 */
#define AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_UP_MASK                     	0x00000001ff000000ull
#define AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_LO_MASK                     	0x0000000000ff0000ull
#define AR_PI_PMI_DBG_ERRINJ_PREQ_TRIGGERED_MASK                        	0x0000000000000100ull
#define AR_PI_PMI_DBG_ERRINJ_PREQ_COUNT_MASK                            	0x0000000000000070ull
#define AR_PI_PMI_DBG_ERRINJ_PREQ_MODE_MASK                             	0x0000000000000008ull
#define AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE2_MASK                          	0x0000000000000004ull
#define AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE1_MASK                          	0x0000000000000002ull
#define AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE0_MASK                          	0x0000000000000001ull
#define AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_UP_BP                       	24
#define AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_LO_BP                       	16
#define AR_PI_PMI_DBG_ERRINJ_PREQ_TRIGGERED_BP                          	8
#define AR_PI_PMI_DBG_ERRINJ_PREQ_COUNT_BP                              	4
#define AR_PI_PMI_DBG_ERRINJ_PREQ_MODE_BP                               	3
#define AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE2_BP                            	2
#define AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE1_BP                            	1
#define AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE0_BP                            	0
#define AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_UP_QW                       	0
#define AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_LO_QW                       	0
#define AR_PI_PMI_DBG_ERRINJ_PREQ_TRIGGERED_QW                          	0
#define AR_PI_PMI_DBG_ERRINJ_PREQ_COUNT_QW                              	0
#define AR_PI_PMI_DBG_ERRINJ_PREQ_MODE_QW                               	0
#define AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE2_QW                            	0
#define AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE1_QW                            	0
#define AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE0_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_DBG_ERRINJ_PRSP_HAL DEFINES
 */
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_PARITY_MASK                       	0x000000ffffffff00ull
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_TRIGGERED_MASK                    	0x0000000000000010ull
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_COUNT_MASK                        	0x000000000000000cull
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_MODE_MASK                         	0x0000000000000002ull
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_ENABLE_MASK                       	0x0000000000000001ull
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_PARITY_BP                         	8
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_TRIGGERED_BP                      	4
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_COUNT_BP                          	2
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_MODE_BP                           	1
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_ENABLE_BP                         	0
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_PARITY_QW                         	0
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_TRIGGERED_QW                      	0
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_COUNT_QW                          	0
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_MODE_QW                           	0
#define AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_ENABLE_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_FIFO2_ERR_FLG DEFINES
 */
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE_MASK                          	0x0000000000080000ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE_MASK                          	0x0000000000040000ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE_MASK                          	0x0000000000020000ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW_MASK                        	0x0000000000010000ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW_MASK                       	0x0000000000008000ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW_MASK                       	0x0000000000004000ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW_MASK                       	0x0000000000002000ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE_MASK                          	0x0000000000001800ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE_MASK                          	0x0000000000000600ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE_MASK                          	0x0000000000000180ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE_MASK                          	0x0000000000000060ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE_MASK                          	0x0000000000000018ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE_MASK                          	0x0000000000000006ull
#define AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY_MASK                          	0x0000000000000001ull
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE_BP                            	19
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE_BP                            	18
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE_BP                            	17
#define AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW_BP                          	16
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW_BP                         	15
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW_BP                         	14
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW_BP                         	13
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE_BP                            	11
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE_BP                            	9
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE_BP                            	7
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE_BP                            	5
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE_BP                            	3
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE_BP                            	1
#define AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY_BP                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW_QW                          	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY_QW                            	0
#ifdef EXCEPTIONS_DEFS
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE_EC                            	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE_EC                            	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE_EC                            	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW_EC                          	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW_EC                         	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW_EC                         	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW_EC                         	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE_EC                            	A_EC_CORR
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE_EC                            	A_EC_CORR
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE_EC                            	A_EC_CORR
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE_EC                            	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE_EC                            	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE_EC                            	A_EC_CRIT
#define AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY_EC                            	A_EC_DIAG
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_FIFO2_ERR_CLR DEFINES
 */
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_TBE_MASK                          	0x0000000000080000ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_TBE_MASK                          	0x0000000000040000ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_TBE_MASK                          	0x0000000000020000ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PRSP_OVFLOW_MASK                        	0x0000000000010000ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_UNFLOW_MASK                       	0x0000000000008000ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_UNFLOW_MASK                       	0x0000000000004000ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_UNFLOW_MASK                       	0x0000000000002000ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_SBE_MASK                          	0x0000000000001800ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_SBE_MASK                          	0x0000000000000600ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_SBE_MASK                          	0x0000000000000180ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_MBE_MASK                          	0x0000000000000060ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_MBE_MASK                          	0x0000000000000018ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_MBE_MASK                          	0x0000000000000006ull
#define AR_PI_PMI_FIFO2_ERR_CLR_DIAG_ONLY_MASK                          	0x0000000000000001ull
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_TBE_BP                            	19
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_TBE_BP                            	18
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_TBE_BP                            	17
#define AR_PI_PMI_FIFO2_ERR_CLR_PRSP_OVFLOW_BP                          	16
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_UNFLOW_BP                         	15
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_UNFLOW_BP                         	14
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_UNFLOW_BP                         	13
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_SBE_BP                            	11
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_SBE_BP                            	9
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_SBE_BP                            	7
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_MBE_BP                            	5
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_MBE_BP                            	3
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_MBE_BP                            	1
#define AR_PI_PMI_FIFO2_ERR_CLR_DIAG_ONLY_BP                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_TBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_TBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_TBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PRSP_OVFLOW_QW                          	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_UNFLOW_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_UNFLOW_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_UNFLOW_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_SBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_SBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_SBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_MBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_MBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_MBE_QW                            	0
#define AR_PI_PMI_FIFO2_ERR_CLR_DIAG_ONLY_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_FIFO2_ERR_HSS_MSK DEFINES
 */
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_TBE_MASK                      	0x0000000000080000ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_TBE_MASK                      	0x0000000000040000ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_TBE_MASK                      	0x0000000000020000ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PRSP_OVFLOW_MASK                    	0x0000000000010000ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_UNFLOW_MASK                   	0x0000000000008000ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_UNFLOW_MASK                   	0x0000000000004000ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_UNFLOW_MASK                   	0x0000000000002000ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_SBE_MASK                      	0x0000000000001800ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_SBE_MASK                      	0x0000000000000600ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_SBE_MASK                      	0x0000000000000180ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_MBE_MASK                      	0x0000000000000060ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_MBE_MASK                      	0x0000000000000018ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_MBE_MASK                      	0x0000000000000006ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_DIAG_ONLY_MASK                      	0x0000000000000001ull
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_TBE_BP                        	19
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_TBE_BP                        	18
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_TBE_BP                        	17
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PRSP_OVFLOW_BP                      	16
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_UNFLOW_BP                     	15
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_UNFLOW_BP                     	14
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_UNFLOW_BP                     	13
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_SBE_BP                        	11
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_SBE_BP                        	9
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_SBE_BP                        	7
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_MBE_BP                        	5
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_MBE_BP                        	3
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_MBE_BP                        	1
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_DIAG_ONLY_BP                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_TBE_QW                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_TBE_QW                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_TBE_QW                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PRSP_OVFLOW_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_UNFLOW_QW                     	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_UNFLOW_QW                     	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_UNFLOW_QW                     	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_SBE_QW                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_SBE_QW                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_SBE_QW                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_MBE_QW                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_MBE_QW                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_MBE_QW                        	0
#define AR_PI_PMI_FIFO2_ERR_HSS_MSK_DIAG_ONLY_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_FIFO2_ERR_OS_MSK DEFINES
 */
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_TBE_MASK                       	0x0000000000080000ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_TBE_MASK                       	0x0000000000040000ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_TBE_MASK                       	0x0000000000020000ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PRSP_OVFLOW_MASK                     	0x0000000000010000ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_UNFLOW_MASK                    	0x0000000000008000ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_UNFLOW_MASK                    	0x0000000000004000ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_UNFLOW_MASK                    	0x0000000000002000ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_SBE_MASK                       	0x0000000000001800ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_SBE_MASK                       	0x0000000000000600ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_SBE_MASK                       	0x0000000000000180ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_MBE_MASK                       	0x0000000000000060ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_MBE_MASK                       	0x0000000000000018ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_MBE_MASK                       	0x0000000000000006ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_DIAG_ONLY_MASK                       	0x0000000000000001ull
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_TBE_BP                         	19
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_TBE_BP                         	18
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_TBE_BP                         	17
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PRSP_OVFLOW_BP                       	16
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_UNFLOW_BP                      	15
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_UNFLOW_BP                      	14
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_UNFLOW_BP                      	13
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_SBE_BP                         	11
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_SBE_BP                         	9
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_SBE_BP                         	7
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_MBE_BP                         	5
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_MBE_BP                         	3
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_MBE_BP                         	1
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_DIAG_ONLY_BP                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_TBE_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_TBE_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_TBE_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PRSP_OVFLOW_QW                       	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_UNFLOW_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_UNFLOW_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_UNFLOW_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_SBE_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_SBE_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_SBE_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_MBE_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_MBE_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_MBE_QW                         	0
#define AR_PI_PMI_FIFO2_ERR_OS_MSK_DIAG_ONLY_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_FIFO2_ERR_FIRST_FLG DEFINES
 */
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_TBE_MASK                    	0x0000000000080000ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_TBE_MASK                    	0x0000000000040000ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_TBE_MASK                    	0x0000000000020000ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PRSP_OVFLOW_MASK                  	0x0000000000010000ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_UNFLOW_MASK                 	0x0000000000008000ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_UNFLOW_MASK                 	0x0000000000004000ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_UNFLOW_MASK                 	0x0000000000002000ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_SBE_MASK                    	0x0000000000001800ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_SBE_MASK                    	0x0000000000000600ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_SBE_MASK                    	0x0000000000000180ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_MBE_MASK                    	0x0000000000000060ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_MBE_MASK                    	0x0000000000000018ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_MBE_MASK                    	0x0000000000000006ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_DIAG_ONLY_MASK                    	0x0000000000000001ull
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_TBE_BP                      	19
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_TBE_BP                      	18
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_TBE_BP                      	17
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PRSP_OVFLOW_BP                    	16
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_UNFLOW_BP                   	15
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_UNFLOW_BP                   	14
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_UNFLOW_BP                   	13
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_SBE_BP                      	11
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_SBE_BP                      	9
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_SBE_BP                      	7
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_MBE_BP                      	5
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_MBE_BP                      	3
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_MBE_BP                      	1
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_DIAG_ONLY_BP                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_TBE_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_TBE_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_TBE_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PRSP_OVFLOW_QW                    	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_UNFLOW_QW                   	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_UNFLOW_QW                   	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_UNFLOW_QW                   	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_SBE_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_SBE_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_SBE_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_MBE_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_MBE_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_MBE_QW                      	0
#define AR_PI_PMI_FIFO2_ERR_FIRST_FLG_DIAG_ONLY_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_MBE_ERR_INFO2 DEFINES
 */
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND1_MASK                        	0x0007fc0000000000ull
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND0_MASK                        	0x000003fc00000000ull
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND1_MASK                        	0x00000003fe000000ull
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND0_MASK                        	0x0000000001fe0000ull
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND1_MASK                        	0x000000000001ff00ull
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND0_MASK                        	0x00000000000000ffull
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND1_BP                          	42
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND0_BP                          	34
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND1_BP                          	25
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND0_BP                          	17
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND1_BP                          	8
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND0_BP                          	0
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND1_QW                          	0
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND0_QW                          	0
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND1_QW                          	0
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND0_QW                          	0
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND1_QW                          	0
#define AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND0_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_SBE_ERR_INFO2 DEFINES
 */
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND1_MASK                        	0x0007fc0000000000ull
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND0_MASK                        	0x000003fc00000000ull
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND1_MASK                        	0x00000003fe000000ull
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND0_MASK                        	0x0000000001fe0000ull
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND1_MASK                        	0x000000000001ff00ull
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND0_MASK                        	0x00000000000000ffull
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND1_BP                          	42
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND0_BP                          	34
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND1_BP                          	25
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND0_BP                          	17
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND1_BP                          	8
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND0_BP                          	0
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND1_QW                          	0
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND0_QW                          	0
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND1_QW                          	0
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND0_QW                          	0
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND1_QW                          	0
#define AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND0_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_PREQ_PTC0_STALL_DURATION DEFINES
 */
#define AR_PI_PMI_PREQ_PTC0_STALL_DURATION_MAX_MASK                     	0x000000ffffffffffull
#define AR_PI_PMI_PREQ_PTC0_STALL_DURATION_MAX_BP                       	0
#define AR_PI_PMI_PREQ_PTC0_STALL_DURATION_MAX_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_PREQ_PTC1_STALL_DURATION DEFINES
 */
#define AR_PI_PMI_PREQ_PTC1_STALL_DURATION_MAX_MASK                     	0x000000ffffffffffull
#define AR_PI_PMI_PREQ_PTC1_STALL_DURATION_MAX_BP                       	0
#define AR_PI_PMI_PREQ_PTC1_STALL_DURATION_MAX_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_PREQ_PTC2_STALL_DURATION DEFINES
 */
#define AR_PI_PMI_PREQ_PTC2_STALL_DURATION_MAX_MASK                     	0x000000ffffffffffull
#define AR_PI_PMI_PREQ_PTC2_STALL_DURATION_MAX_BP                       	0
#define AR_PI_PMI_PREQ_PTC2_STALL_DURATION_MAX_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_PREQ_HAL_STALL_DURATION DEFINES
 */
#define AR_PI_PMI_PREQ_HAL_STALL_DURATION_MAX_MASK                      	0x000000ffffffffffull
#define AR_PI_PMI_PREQ_HAL_STALL_DURATION_MAX_BP                        	0
#define AR_PI_PMI_PREQ_HAL_STALL_DURATION_MAX_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PMI_PRSP_HAL_STALL_DURATION DEFINES
 */
#define AR_PI_PMI_PRSP_HAL_STALL_DURATION_MAX_MASK                      	0x000000ffffffffffull
#define AR_PI_PMI_PRSP_HAL_STALL_DURATION_MAX_BP                        	0
#define AR_PI_PMI_PRSP_HAL_STALL_DURATION_MAX_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_CFG DEFINES
 */
#define AR_PI_PII_PCLK_CFG_MSIX_TPH_ENABLE_MASK                         	0x0000000000000001ull
#define AR_PI_PII_PCLK_CFG_MSIX_TPH_ENABLE_BP                           	0
#define AR_PI_PII_PCLK_CFG_MSIX_TPH_ENABLE_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_DBG_ERRINJ_FIFO DEFINES
 */
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC1_MASK                        	0x00000000ff000000ull
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC0_MASK                        	0x000000000000ff00ull
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_MASK                   	0x0000000000000080ull
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SELECT_MASK                      	0x0000000000000060ull
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_COUNT_MASK                       	0x000000000000001cull
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_MODE_MASK                        	0x0000000000000002ull
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_EN_MASK                          	0x0000000000000001ull
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC1_BP                          	24
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC0_BP                          	8
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_BP                     	7
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SELECT_BP                        	5
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_COUNT_BP                         	2
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_MODE_BP                          	1
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_EN_BP                            	0
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC1_QW                          	0
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC0_QW                          	0
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_QW                     	0
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SELECT_QW                        	0
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_COUNT_QW                         	0
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_MODE_QW                          	0
#define AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_EN_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_ERR_FLG DEFINES
 */
#define AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV_MASK                    	0x0000000001000000ull
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN_MASK                 	0x0000000000800000ull
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN_MASK                 	0x0000000000400000ull
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN_MASK                 	0x0000000000200000ull
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN_MASK                 	0x0000000000100000ull
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE_MASK                    	0x00000000000c0000ull
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE_MASK                    	0x0000000000030000ull
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE_MASK                    	0x000000000000c000ull
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE_MASK                    	0x0000000000003000ull
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE_MASK                    	0x0000000000000c00ull
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE_MASK                    	0x0000000000000300ull
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE_MASK                    	0x00000000000000c0ull
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE_MASK                    	0x0000000000000030ull
#define AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED_MASK                         	0x0000000000000004ull
#define AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD_MASK                         	0x0000000000000002ull
#define AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY_MASK                           	0x0000000000000001ull
#define AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV_BP                      	24
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN_BP                   	23
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN_BP                   	22
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN_BP                   	21
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN_BP                   	20
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE_BP                      	18
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE_BP                      	16
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE_BP                      	14
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE_BP                      	12
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE_BP                      	10
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE_BP                      	8
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE_BP                      	6
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE_BP                      	4
#define AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED_BP                           	2
#define AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD_BP                           	1
#define AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY_BP                             	0
#define AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV_QW                      	0
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN_QW                   	0
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN_QW                   	0
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN_QW                   	0
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN_QW                   	0
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED_QW                           	0
#define AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD_QW                           	0
#define AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY_QW                             	0
#ifdef EXCEPTIONS_DEFS
#define AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV_EC                      	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN_EC                   	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN_EC                   	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN_EC                   	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN_EC                   	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE_EC                      	A_EC_CORR
#define AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE_EC                      	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE_EC                      	A_EC_CORR
#define AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE_EC                      	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE_EC                      	A_EC_CORR
#define AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE_EC                      	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE_EC                      	A_EC_CORR
#define AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE_EC                      	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED_EC                           	A_EC_CRIT
#define AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD_EC                           	A_EC_INFO
#define AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY_EC                             	A_EC_DIAG
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_ERR_CLR DEFINES
 */
#define AR_PI_PII_PCLK_ERR_CLR_IRQ_SYNC_FIFO_OV_MASK                    	0x0000000001000000ull
#define AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_MSG_FIFO_UN_MASK                 	0x0000000000800000ull
#define AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_MSG_FIFO_UN_MASK                 	0x0000000000400000ull
#define AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_MSG_FIFO_UN_MASK                 	0x0000000000200000ull
#define AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_MSG_FIFO_UN_MASK                 	0x0000000000100000ull
#define AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_SBE_MASK                    	0x00000000000c0000ull
#define AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_MBE_MASK                    	0x0000000000030000ull
#define AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_SBE_MASK                    	0x000000000000c000ull
#define AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_MBE_MASK                    	0x0000000000003000ull
#define AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_SBE_MASK                    	0x0000000000000c00ull
#define AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_MBE_MASK                    	0x0000000000000300ull
#define AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_SBE_MASK                    	0x00000000000000c0ull
#define AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_MBE_MASK                    	0x0000000000000030ull
#define AR_PI_PII_PCLK_ERR_CLR_MSG_ABORTED_MASK                         	0x0000000000000004ull
#define AR_PI_PII_PCLK_ERR_CLR_MSG_DISCARD_MASK                         	0x0000000000000002ull
#define AR_PI_PII_PCLK_ERR_CLR_DIAG_ONLY_MASK                           	0x0000000000000001ull
#define AR_PI_PII_PCLK_ERR_CLR_IRQ_SYNC_FIFO_OV_BP                      	24
#define AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_MSG_FIFO_UN_BP                   	23
#define AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_MSG_FIFO_UN_BP                   	22
#define AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_MSG_FIFO_UN_BP                   	21
#define AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_MSG_FIFO_UN_BP                   	20
#define AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_SBE_BP                      	18
#define AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_MBE_BP                      	16
#define AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_SBE_BP                      	14
#define AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_MBE_BP                      	12
#define AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_SBE_BP                      	10
#define AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_MBE_BP                      	8
#define AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_SBE_BP                      	6
#define AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_MBE_BP                      	4
#define AR_PI_PII_PCLK_ERR_CLR_MSG_ABORTED_BP                           	2
#define AR_PI_PII_PCLK_ERR_CLR_MSG_DISCARD_BP                           	1
#define AR_PI_PII_PCLK_ERR_CLR_DIAG_ONLY_BP                             	0
#define AR_PI_PII_PCLK_ERR_CLR_IRQ_SYNC_FIFO_OV_QW                      	0
#define AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_MSG_FIFO_UN_QW                   	0
#define AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_MSG_FIFO_UN_QW                   	0
#define AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_MSG_FIFO_UN_QW                   	0
#define AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_MSG_FIFO_UN_QW                   	0
#define AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_SBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_MBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_SBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_MBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_SBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_MBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_SBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_MBE_QW                      	0
#define AR_PI_PII_PCLK_ERR_CLR_MSG_ABORTED_QW                           	0
#define AR_PI_PII_PCLK_ERR_CLR_MSG_DISCARD_QW                           	0
#define AR_PI_PII_PCLK_ERR_CLR_DIAG_ONLY_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_ERR_HSS_MSK DEFINES
 */
#define AR_PI_PII_PCLK_ERR_HSS_MSK_IRQ_SYNC_FIFO_OV_MASK                	0x0000000001000000ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_MSG_FIFO_UN_MASK             	0x0000000000800000ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_MSG_FIFO_UN_MASK             	0x0000000000400000ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_MSG_FIFO_UN_MASK             	0x0000000000200000ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_MSG_FIFO_UN_MASK             	0x0000000000100000ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_SBE_MASK                	0x00000000000c0000ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_MBE_MASK                	0x0000000000030000ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_SBE_MASK                	0x000000000000c000ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_MBE_MASK                	0x0000000000003000ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_SBE_MASK                	0x0000000000000c00ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_MBE_MASK                	0x0000000000000300ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_SBE_MASK                	0x00000000000000c0ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_MBE_MASK                	0x0000000000000030ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_ABORTED_MASK                     	0x0000000000000004ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_DISCARD_MASK                     	0x0000000000000002ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_DIAG_ONLY_MASK                       	0x0000000000000001ull
#define AR_PI_PII_PCLK_ERR_HSS_MSK_IRQ_SYNC_FIFO_OV_BP                  	24
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_MSG_FIFO_UN_BP               	23
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_MSG_FIFO_UN_BP               	22
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_MSG_FIFO_UN_BP               	21
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_MSG_FIFO_UN_BP               	20
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_SBE_BP                  	18
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_MBE_BP                  	16
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_SBE_BP                  	14
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_MBE_BP                  	12
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_SBE_BP                  	10
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_MBE_BP                  	8
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_SBE_BP                  	6
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_MBE_BP                  	4
#define AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_ABORTED_BP                       	2
#define AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_DISCARD_BP                       	1
#define AR_PI_PII_PCLK_ERR_HSS_MSK_DIAG_ONLY_BP                         	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_IRQ_SYNC_FIFO_OV_QW                  	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_MSG_FIFO_UN_QW               	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_MSG_FIFO_UN_QW               	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_MSG_FIFO_UN_QW               	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_MSG_FIFO_UN_QW               	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_SBE_QW                  	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_MBE_QW                  	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_SBE_QW                  	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_MBE_QW                  	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_SBE_QW                  	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_MBE_QW                  	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_SBE_QW                  	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_MBE_QW                  	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_ABORTED_QW                       	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_DISCARD_QW                       	0
#define AR_PI_PII_PCLK_ERR_HSS_MSK_DIAG_ONLY_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_ERR_OS_MSK DEFINES
 */
#define AR_PI_PII_PCLK_ERR_OS_MSK_IRQ_SYNC_FIFO_OV_MASK                 	0x0000000001000000ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_MSG_FIFO_UN_MASK              	0x0000000000800000ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_MSG_FIFO_UN_MASK              	0x0000000000400000ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_MSG_FIFO_UN_MASK              	0x0000000000200000ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_MSG_FIFO_UN_MASK              	0x0000000000100000ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_SBE_MASK                 	0x00000000000c0000ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_MBE_MASK                 	0x0000000000030000ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_SBE_MASK                 	0x000000000000c000ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_MBE_MASK                 	0x0000000000003000ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_SBE_MASK                 	0x0000000000000c00ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_MBE_MASK                 	0x0000000000000300ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_SBE_MASK                 	0x00000000000000c0ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_MBE_MASK                 	0x0000000000000030ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_MSG_ABORTED_MASK                      	0x0000000000000004ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_MSG_DISCARD_MASK                      	0x0000000000000002ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_DIAG_ONLY_MASK                        	0x0000000000000001ull
#define AR_PI_PII_PCLK_ERR_OS_MSK_IRQ_SYNC_FIFO_OV_BP                   	24
#define AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_MSG_FIFO_UN_BP                	23
#define AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_MSG_FIFO_UN_BP                	22
#define AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_MSG_FIFO_UN_BP                	21
#define AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_MSG_FIFO_UN_BP                	20
#define AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_SBE_BP                   	18
#define AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_MBE_BP                   	16
#define AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_SBE_BP                   	14
#define AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_MBE_BP                   	12
#define AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_SBE_BP                   	10
#define AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_MBE_BP                   	8
#define AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_SBE_BP                   	6
#define AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_MBE_BP                   	4
#define AR_PI_PII_PCLK_ERR_OS_MSK_MSG_ABORTED_BP                        	2
#define AR_PI_PII_PCLK_ERR_OS_MSK_MSG_DISCARD_BP                        	1
#define AR_PI_PII_PCLK_ERR_OS_MSK_DIAG_ONLY_BP                          	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_IRQ_SYNC_FIFO_OV_QW                   	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_MSG_FIFO_UN_QW                	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_MSG_FIFO_UN_QW                	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_MSG_FIFO_UN_QW                	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_MSG_FIFO_UN_QW                	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_SBE_QW                   	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_MBE_QW                   	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_SBE_QW                   	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_MBE_QW                   	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_SBE_QW                   	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_MBE_QW                   	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_SBE_QW                   	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_MBE_QW                   	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_MSG_ABORTED_QW                        	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_MSG_DISCARD_QW                        	0
#define AR_PI_PII_PCLK_ERR_OS_MSK_DIAG_ONLY_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_ERR_FIRST_FLG DEFINES
 */
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_IRQ_SYNC_FIFO_OV_MASK              	0x0000000001000000ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_MSG_FIFO_UN_MASK           	0x0000000000800000ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_MSG_FIFO_UN_MASK           	0x0000000000400000ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_MSG_FIFO_UN_MASK           	0x0000000000200000ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_MSG_FIFO_UN_MASK           	0x0000000000100000ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_SBE_MASK              	0x00000000000c0000ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_MBE_MASK              	0x0000000000030000ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_SBE_MASK              	0x000000000000c000ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_MBE_MASK              	0x0000000000003000ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_SBE_MASK              	0x0000000000000c00ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_MBE_MASK              	0x0000000000000300ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_SBE_MASK              	0x00000000000000c0ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_MBE_MASK              	0x0000000000000030ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_ABORTED_MASK                   	0x0000000000000004ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_DISCARD_MASK                   	0x0000000000000002ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_DIAG_ONLY_MASK                     	0x0000000000000001ull
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_IRQ_SYNC_FIFO_OV_BP                	24
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_MSG_FIFO_UN_BP             	23
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_MSG_FIFO_UN_BP             	22
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_MSG_FIFO_UN_BP             	21
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_MSG_FIFO_UN_BP             	20
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_SBE_BP                	18
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_MBE_BP                	16
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_SBE_BP                	14
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_MBE_BP                	12
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_SBE_BP                	10
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_MBE_BP                	8
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_SBE_BP                	6
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_MBE_BP                	4
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_ABORTED_BP                     	2
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_DISCARD_BP                     	1
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_DIAG_ONLY_BP                       	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_IRQ_SYNC_FIFO_OV_QW                	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_MSG_FIFO_UN_QW             	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_MSG_FIFO_UN_QW             	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_MSG_FIFO_UN_QW             	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_MSG_FIFO_UN_QW             	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_SBE_QW                	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_MBE_QW                	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_SBE_QW                	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_MBE_QW                	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_SBE_QW                	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_MBE_QW                	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_SBE_QW                	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_MBE_QW                	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_ABORTED_QW                     	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_DISCARD_QW                     	0
#define AR_PI_PII_PCLK_ERR_FIRST_FLG_DIAG_ONLY_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_ERR_INFO_MBE DEFINES
 */
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND1_MASK             	0xff00000000000000ull
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND0_MASK             	0x00ff000000000000ull
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND1_MASK             	0x0000ff0000000000ull
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND0_MASK             	0x000000ff00000000ull
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND1_MASK             	0x00000000ff000000ull
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND0_MASK             	0x0000000000ff0000ull
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND1_MASK             	0x000000000000ff00ull
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND0_MASK             	0x00000000000000ffull
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND1_BP               	56
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND0_BP               	48
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND1_BP               	40
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND0_BP               	32
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND1_BP               	24
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND0_BP               	16
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND1_BP               	8
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND0_BP               	0
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND1_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND0_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND1_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND0_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND1_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND0_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND1_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND0_QW               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_ERR_INFO_SBE DEFINES
 */
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND1_MASK             	0xff00000000000000ull
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND0_MASK             	0x00ff000000000000ull
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND1_MASK             	0x0000ff0000000000ull
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND0_MASK             	0x000000ff00000000ull
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND1_MASK             	0x00000000ff000000ull
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND0_MASK             	0x0000000000ff0000ull
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND1_MASK             	0x000000000000ff00ull
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND0_MASK             	0x00000000000000ffull
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND1_BP               	56
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND0_BP               	48
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND1_BP               	40
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND0_BP               	32
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND1_BP               	24
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND0_BP               	16
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND1_BP               	8
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND0_BP               	0
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND1_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND0_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND1_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND0_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND1_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND0_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND1_QW               	0
#define AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND0_QW               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR DEFINES
 */
#define AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_MSG_ADDRESS_MASK               	0xffffffffffffffffull
#define AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_MSG_ADDRESS_BP                 	0
#define AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_MSG_ADDRESS_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_ERR_INFO_MSG_DATA DEFINES
 */
#define AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_MSG_DATA_MASK                  	0x00000000ffffffffull
#define AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_MSG_DATA_BP                    	0
#define AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_MSG_DATA_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PII_PCLK_MSG_STALL_DURATION DEFINES
 */
#define AR_PI_PII_PCLK_MSG_STALL_DURATION_MAX_MASK                      	0x000000ffffffffffull
#define AR_PI_PII_PCLK_MSG_STALL_DURATION_MAX_BP                        	0
#define AR_PI_PII_PCLK_MSG_STALL_DURATION_MAX_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_CFG DEFINES
 */
#define AR_PI_PTI_PCLK_CFG_RSP_HALT_ON_FATAL_ERROR_MASK                 	0x0000000000000100ull
#define AR_PI_PTI_PCLK_CFG_NIF_REQ_IFIFO_AF_THRESH_MASK                 	0x00000000000000f0ull
#define AR_PI_PTI_PCLK_CFG_LIF_REQ_IFIFO_AF_THRESH_MASK                 	0x000000000000000full
#define AR_PI_PTI_PCLK_CFG_RSP_HALT_ON_FATAL_ERROR_BP                   	8
#define AR_PI_PTI_PCLK_CFG_NIF_REQ_IFIFO_AF_THRESH_BP                   	4
#define AR_PI_PTI_PCLK_CFG_LIF_REQ_IFIFO_AF_THRESH_BP                   	0
#define AR_PI_PTI_PCLK_CFG_RSP_HALT_ON_FATAL_ERROR_QW                   	0
#define AR_PI_PTI_PCLK_CFG_NIF_REQ_IFIFO_AF_THRESH_QW                   	0
#define AR_PI_PTI_PCLK_CFG_LIF_REQ_IFIFO_AF_THRESH_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO DEFINES
 */
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC1_MASK                        	0x00000001ff000000ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC0_MASK                        	0x000000000001ff00ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_MASK                   	0x0000000000000080ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SELECT_MASK                      	0x0000000000000060ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_COUNT_MASK                       	0x000000000000001cull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_MODE_MASK                        	0x0000000000000002ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_EN_MASK                          	0x0000000000000001ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC1_BP                          	24
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC0_BP                          	8
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_BP                     	7
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SELECT_BP                        	5
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_COUNT_BP                         	2
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_MODE_BP                          	1
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_EN_BP                            	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC1_QW                          	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC0_QW                          	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_QW                     	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SELECT_QW                        	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_COUNT_QW                         	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_MODE_QW                          	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_EN_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_DBG_ERRINJ_HAL DEFINES
 */
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_PARITY_MASK                       	0x000000ffffffff00ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_TRIGGERED_MASK                    	0x0000000000000080ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SELECT_MASK                       	0x0000000000000060ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_COUNT_MASK                        	0x000000000000001cull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_MODE_MASK                         	0x0000000000000002ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_EN_MASK                           	0x0000000000000001ull
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_PARITY_BP                         	8
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_TRIGGERED_BP                      	7
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SELECT_BP                         	5
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_COUNT_BP                          	2
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_MODE_BP                           	1
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_EN_BP                             	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_PARITY_QW                         	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_TRIGGERED_QW                      	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SELECT_QW                         	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_COUNT_QW                          	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_MODE_QW                           	0
#define AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_EN_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_ERR_FLG DEFINES
 */
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR_MASK               	0x0000000000000800ull
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR_MASK                	0x0000000000000400ull
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR_MASK               	0x0000000000000200ull
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE_MASK                   	0x0000000000000180ull
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE_MASK                   	0x0000000000000060ull
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR_MASK            	0x0000000000000010ull
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN_MASK                    	0x0000000000000008ull
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV_MASK                    	0x0000000000000004ull
#define AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV_MASK                    	0x0000000000000002ull
#define AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY_MASK                           	0x0000000000000001ull
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR_BP                 	11
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR_BP                  	10
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR_BP                 	9
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE_BP                     	7
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE_BP                     	5
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR_BP              	4
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN_BP                      	3
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV_BP                      	2
#define AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV_BP                      	1
#define AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY_BP                             	0
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR_QW                 	0
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR_QW                  	0
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR_QW                 	0
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE_QW                     	0
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE_QW                     	0
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR_QW              	0
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN_QW                      	0
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV_QW                      	0
#define AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV_QW                      	0
#define AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY_QW                             	0
#ifdef EXCEPTIONS_DEFS
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR_EC                 	A_EC_INFO
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR_EC                  	A_EC_CRIT
#define AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR_EC                 	A_EC_CRIT
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE_EC                     	A_EC_CORR
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE_EC                     	A_EC_CRIT
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR_EC              	A_EC_CRIT
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN_EC                      	A_EC_CRIT
#define AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV_EC                      	A_EC_CRIT
#define AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV_EC                      	A_EC_CRIT
#define AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY_EC                             	A_EC_DIAG
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_ERR_CLR DEFINES
 */
#define AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_PARITY_ERROR_MASK               	0x0000000000000800ull
#define AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_TTYPE_ERROR_MASK                	0x0000000000000400ull
#define AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_WR_EOP_ERROR_MASK               	0x0000000000000200ull
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_SBE_MASK                   	0x0000000000000180ull
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_MBE_MASK                   	0x0000000000000060ull
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_TAIL_ERROR_MASK            	0x0000000000000010ull
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_UN_MASK                    	0x0000000000000008ull
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_REQ_IFIFO_OV_MASK                    	0x0000000000000004ull
#define AR_PI_PTI_PCLK_ERR_CLR_NIF_REQ_IFIFO_OV_MASK                    	0x0000000000000002ull
#define AR_PI_PTI_PCLK_ERR_CLR_DIAG_ONLY_MASK                           	0x0000000000000001ull
#define AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_PARITY_ERROR_BP                 	11
#define AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_TTYPE_ERROR_BP                  	10
#define AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_WR_EOP_ERROR_BP                 	9
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_SBE_BP                     	7
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_MBE_BP                     	5
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_TAIL_ERROR_BP              	4
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_UN_BP                      	3
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_REQ_IFIFO_OV_BP                      	2
#define AR_PI_PTI_PCLK_ERR_CLR_NIF_REQ_IFIFO_OV_BP                      	1
#define AR_PI_PTI_PCLK_ERR_CLR_DIAG_ONLY_BP                             	0
#define AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_PARITY_ERROR_QW                 	0
#define AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_TTYPE_ERROR_QW                  	0
#define AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_WR_EOP_ERROR_QW                 	0
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_SBE_QW                     	0
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_MBE_QW                     	0
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_TAIL_ERROR_QW              	0
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_UN_QW                      	0
#define AR_PI_PTI_PCLK_ERR_CLR_LIF_REQ_IFIFO_OV_QW                      	0
#define AR_PI_PTI_PCLK_ERR_CLR_NIF_REQ_IFIFO_OV_QW                      	0
#define AR_PI_PTI_PCLK_ERR_CLR_DIAG_ONLY_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_ERR_HSS_MSK DEFINES
 */
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_PARITY_ERROR_MASK           	0x0000000000000800ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_TTYPE_ERROR_MASK            	0x0000000000000400ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_WR_EOP_ERROR_MASK           	0x0000000000000200ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_SBE_MASK               	0x0000000000000180ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_MBE_MASK               	0x0000000000000060ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_MASK        	0x0000000000000010ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_UN_MASK                	0x0000000000000008ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_REQ_IFIFO_OV_MASK                	0x0000000000000004ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_NIF_REQ_IFIFO_OV_MASK                	0x0000000000000002ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_DIAG_ONLY_MASK                       	0x0000000000000001ull
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_PARITY_ERROR_BP             	11
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_TTYPE_ERROR_BP              	10
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_WR_EOP_ERROR_BP             	9
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_SBE_BP                 	7
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_MBE_BP                 	5
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_BP          	4
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_UN_BP                  	3
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_REQ_IFIFO_OV_BP                  	2
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_NIF_REQ_IFIFO_OV_BP                  	1
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_DIAG_ONLY_BP                         	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_PARITY_ERROR_QW             	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_TTYPE_ERROR_QW              	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_WR_EOP_ERROR_QW             	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_SBE_QW                 	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_MBE_QW                 	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_QW          	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_UN_QW                  	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_REQ_IFIFO_OV_QW                  	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_NIF_REQ_IFIFO_OV_QW                  	0
#define AR_PI_PTI_PCLK_ERR_HSS_MSK_DIAG_ONLY_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_ERR_OS_MSK DEFINES
 */
#define AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_PARITY_ERROR_MASK            	0x0000000000000800ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_TTYPE_ERROR_MASK             	0x0000000000000400ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_WR_EOP_ERROR_MASK            	0x0000000000000200ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_SBE_MASK                	0x0000000000000180ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_MBE_MASK                	0x0000000000000060ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_MASK         	0x0000000000000010ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_UN_MASK                 	0x0000000000000008ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_REQ_IFIFO_OV_MASK                 	0x0000000000000004ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_NIF_REQ_IFIFO_OV_MASK                 	0x0000000000000002ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_DIAG_ONLY_MASK                        	0x0000000000000001ull
#define AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_PARITY_ERROR_BP              	11
#define AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_TTYPE_ERROR_BP               	10
#define AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_WR_EOP_ERROR_BP              	9
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_SBE_BP                  	7
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_MBE_BP                  	5
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_BP           	4
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_UN_BP                   	3
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_REQ_IFIFO_OV_BP                   	2
#define AR_PI_PTI_PCLK_ERR_OS_MSK_NIF_REQ_IFIFO_OV_BP                   	1
#define AR_PI_PTI_PCLK_ERR_OS_MSK_DIAG_ONLY_BP                          	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_PARITY_ERROR_QW              	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_TTYPE_ERROR_QW               	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_WR_EOP_ERROR_QW              	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_SBE_QW                  	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_MBE_QW                  	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_QW           	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_UN_QW                   	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_REQ_IFIFO_OV_QW                   	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_NIF_REQ_IFIFO_OV_QW                   	0
#define AR_PI_PTI_PCLK_ERR_OS_MSK_DIAG_ONLY_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_ERR_FIRST_FLG DEFINES
 */
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_PARITY_ERROR_MASK         	0x0000000000000800ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_TTYPE_ERROR_MASK          	0x0000000000000400ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_WR_EOP_ERROR_MASK         	0x0000000000000200ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_SBE_MASK             	0x0000000000000180ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_MBE_MASK             	0x0000000000000060ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_TAIL_ERROR_MASK      	0x0000000000000010ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_UN_MASK              	0x0000000000000008ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_REQ_IFIFO_OV_MASK              	0x0000000000000004ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_NIF_REQ_IFIFO_OV_MASK              	0x0000000000000002ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_DIAG_ONLY_MASK                     	0x0000000000000001ull
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_PARITY_ERROR_BP           	11
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_TTYPE_ERROR_BP            	10
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_WR_EOP_ERROR_BP           	9
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_SBE_BP               	7
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_MBE_BP               	5
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_TAIL_ERROR_BP        	4
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_UN_BP                	3
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_REQ_IFIFO_OV_BP                	2
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_NIF_REQ_IFIFO_OV_BP                	1
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_DIAG_ONLY_BP                       	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_PARITY_ERROR_QW           	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_TTYPE_ERROR_QW            	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_WR_EOP_ERROR_QW           	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_SBE_QW               	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_MBE_QW               	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_TAIL_ERROR_QW        	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_UN_QW                	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_REQ_IFIFO_OV_QW                	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_NIF_REQ_IFIFO_OV_QW                	0
#define AR_PI_PTI_PCLK_ERR_FIRST_FLG_DIAG_ONLY_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_ERR_INFO_ECC DEFINES
 */
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND1_MASK        	0x01ff000000000000ull
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND0_MASK        	0x000001ff00000000ull
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND1_MASK        	0x0000000001ff0000ull
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND0_MASK        	0x00000000000001ffull
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND1_BP          	48
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND0_BP          	32
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND1_BP          	16
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND0_BP          	0
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND1_QW          	0
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND0_QW          	0
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND1_QW          	0
#define AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND0_QW          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PTI_PCLK_ERR_INFO_MISC DEFINES
 */
#define AR_PI_PTI_PCLK_ERR_INFO_MISC_TREQ_PARITY_ERROR_MASK             	0x00000000ffffffffull
#define AR_PI_PTI_PCLK_ERR_INFO_MISC_TREQ_PARITY_ERROR_BP               	0
#define AR_PI_PTI_PCLK_ERR_INFO_MISC_TREQ_PARITY_ERROR_QW               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR DEFINES
 */
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ADDRESS_MASK                 	0x0000001f00000000ull
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_CHECKBITS_MASK               	0x00000000000f0000ull
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_TRIGGERED_MASK               	0x0000000000000008ull
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_MODE_MASK                    	0x0000000000000006ull
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ENABLE_MASK                  	0x0000000000000001ull
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ADDRESS_BP                   	32
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_CHECKBITS_BP                 	16
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_TRIGGERED_BP                 	3
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_MODE_BP                      	1
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ENABLE_BP                    	0
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ADDRESS_QW                   	0
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_CHECKBITS_QW                 	0
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_TRIGGERED_QW                 	0
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_MODE_QW                      	0
#define AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ENABLE_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR DEFINES
 */
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_ADDRESS_MASK                   	0x000000000001f000ull
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_MASK         	0x0000000000000008ull
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_ADDRESS_BP                     	12
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_BP           	3
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_ADDRESS_QW                     	0
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_QW           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT DEFINES
 */
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_MASK            	0xffffffffffffffffull
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_BP              	0
#define AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_QW              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PM_PCLK_EVENT_CNTR_CTRL DEFINES
 */
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_MASK          	0x0002000000000000ull
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_ENABLE_MASK                       	0x0001000000000000ull
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_CLEAR_MASK                        	0x0000800000000000ull
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_COUNTERS_CLEAR_MASK               	0x0000000000000001ull
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_BP            	49
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_ENABLE_BP                         	48
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_CLEAR_BP                          	47
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_COUNTERS_CLEAR_BP                 	0
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_QW            	0
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_ENABLE_QW                         	0
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_CLEAR_QW                          	0
#define AR_PI_PM_PCLK_EVENT_CNTR_CTRL_COUNTERS_CLEAR_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PM_PCLK_EVENT_CNTR DEFINES
 */
#define AR_PI_PM_PCLK_EVENT_CNTR_CNT_MASK                               	0xffffffffffffffffull
#define AR_PI_PM_PCLK_EVENT_CNTR_CNT_BP                                 	0
#define AR_PI_PM_PCLK_EVENT_CNTR_CNT_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_CFG_DIAG_TRANS DEFINES
 */
#define AR_PI_CFG_DIAG_TRANS_NO_CPU_CAPTURE_MASK                        	0x0000000000008000ull
#define AR_PI_CFG_DIAG_TRANS_CAPTURE_COUNT_MASK                         	0x0000000000007f00ull
#define AR_PI_CFG_DIAG_TRANS_CAPTURE_TYPE_MASK                          	0x00000000000000e0ull
#define AR_PI_CFG_DIAG_TRANS_RESET_CAPTURE_MASK                         	0x0000000000000010ull
#define AR_PI_CFG_DIAG_TRANS_CAPTURE_BUS_MASK                           	0x0000000000000008ull
#define AR_PI_CFG_DIAG_TRANS_WRAP_CAPTURE_MASK                          	0x0000000000000004ull
#define AR_PI_CFG_DIAG_TRANS_STOP_CAPTURE_MASK                          	0x0000000000000002ull
#define AR_PI_CFG_DIAG_TRANS_START_CAPTURE_MASK                         	0x0000000000000001ull
#define AR_PI_CFG_DIAG_TRANS_NO_CPU_CAPTURE_BP                          	15
#define AR_PI_CFG_DIAG_TRANS_CAPTURE_COUNT_BP                           	8
#define AR_PI_CFG_DIAG_TRANS_CAPTURE_TYPE_BP                            	5
#define AR_PI_CFG_DIAG_TRANS_RESET_CAPTURE_BP                           	4
#define AR_PI_CFG_DIAG_TRANS_CAPTURE_BUS_BP                             	3
#define AR_PI_CFG_DIAG_TRANS_WRAP_CAPTURE_BP                            	2
#define AR_PI_CFG_DIAG_TRANS_STOP_CAPTURE_BP                            	1
#define AR_PI_CFG_DIAG_TRANS_START_CAPTURE_BP                           	0
#define AR_PI_CFG_DIAG_TRANS_NO_CPU_CAPTURE_QW                          	0
#define AR_PI_CFG_DIAG_TRANS_CAPTURE_COUNT_QW                           	0
#define AR_PI_CFG_DIAG_TRANS_CAPTURE_TYPE_QW                            	0
#define AR_PI_CFG_DIAG_TRANS_RESET_CAPTURE_QW                           	0
#define AR_PI_CFG_DIAG_TRANS_CAPTURE_BUS_QW                             	0
#define AR_PI_CFG_DIAG_TRANS_WRAP_CAPTURE_QW                            	0
#define AR_PI_CFG_DIAG_TRANS_STOP_CAPTURE_QW                            	0
#define AR_PI_CFG_DIAG_TRANS_START_CAPTURE_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_STS_DIAG_TRANS DEFINES
 */
#define AR_PI_STS_DIAG_TRANS_CAPTURE_COUNT_MASK                         	0x000000000000ff00ull
#define AR_PI_STS_DIAG_TRANS_CAPTURE_FULL_MASK                          	0x0000000000000002ull
#define AR_PI_STS_DIAG_TRANS_IN_PROGRESS_MASK                           	0x0000000000000001ull
#define AR_PI_STS_DIAG_TRANS_CAPTURE_COUNT_BP                           	8
#define AR_PI_STS_DIAG_TRANS_CAPTURE_FULL_BP                            	1
#define AR_PI_STS_DIAG_TRANS_IN_PROGRESS_BP                             	0
#define AR_PI_STS_DIAG_TRANS_CAPTURE_COUNT_QW                           	0
#define AR_PI_STS_DIAG_TRANS_CAPTURE_FULL_QW                            	0
#define AR_PI_STS_DIAG_TRANS_IN_PROGRESS_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_CTL_0 DEFINES
 */
#define AR_PI_DBG_TRANS_CTL_0_CAPTURE_CNTL_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_CTL_0_CAPTURE_CNTL_BP                           	0
#define AR_PI_DBG_TRANS_CTL_0_CAPTURE_CNTL_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_CTL_1 DEFINES
 */
#define AR_PI_DBG_TRANS_CTL_1_CAPTURE_CNTL_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_CTL_1_CAPTURE_CNTL_BP                           	0
#define AR_PI_DBG_TRANS_CTL_1_CAPTURE_CNTL_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_CTL_2 DEFINES
 */
#define AR_PI_DBG_TRANS_CTL_2_CAPTURE_CNTL_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_CTL_2_CAPTURE_CNTL_BP                           	0
#define AR_PI_DBG_TRANS_CTL_2_CAPTURE_CNTL_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_CTL_3 DEFINES
 */
#define AR_PI_DBG_TRANS_CTL_3_CAPTURE_CNTL_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_CTL_3_CAPTURE_CNTL_BP                           	0
#define AR_PI_DBG_TRANS_CTL_3_CAPTURE_CNTL_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_CTL_4 DEFINES
 */
#define AR_PI_DBG_TRANS_CTL_4_CAPTURE_CNTL_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_CTL_4_CAPTURE_CNTL_BP                           	0
#define AR_PI_DBG_TRANS_CTL_4_CAPTURE_CNTL_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_MASK_0 DEFINES
 */
#define AR_PI_DBG_TRANS_MASK_0_CAPTURE_MASK_MASK                        	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_MASK_0_CAPTURE_MASK_BP                          	0
#define AR_PI_DBG_TRANS_MASK_0_CAPTURE_MASK_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_MASK_1 DEFINES
 */
#define AR_PI_DBG_TRANS_MASK_1_CAPTURE_MASK_MASK                        	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_MASK_1_CAPTURE_MASK_BP                          	0
#define AR_PI_DBG_TRANS_MASK_1_CAPTURE_MASK_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_MASK_2 DEFINES
 */
#define AR_PI_DBG_TRANS_MASK_2_CAPTURE_MASK_MASK                        	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_MASK_2_CAPTURE_MASK_BP                          	0
#define AR_PI_DBG_TRANS_MASK_2_CAPTURE_MASK_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_MASK_3 DEFINES
 */
#define AR_PI_DBG_TRANS_MASK_3_CAPTURE_MASK_MASK                        	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_MASK_3_CAPTURE_MASK_BP                          	0
#define AR_PI_DBG_TRANS_MASK_3_CAPTURE_MASK_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_TRANS_MASK_4 DEFINES
 */
#define AR_PI_DBG_TRANS_MASK_4_CAPTURE_MASK_MASK                        	0xffffffffffffffffull
#define AR_PI_DBG_TRANS_MASK_4_CAPTURE_MASK_BP                          	0
#define AR_PI_DBG_TRANS_MASK_4_CAPTURE_MASK_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_CFG_DIAG_RECV DEFINES
 */
#define AR_PI_CFG_DIAG_RECV_CAPTURE_COUNT_MASK                          	0x0000000000007f00ull
#define AR_PI_CFG_DIAG_RECV_CAPTURE_TYPE_MASK                           	0x00000000000000e0ull
#define AR_PI_CFG_DIAG_RECV_RESET_CAPTURE_MASK                          	0x0000000000000010ull
#define AR_PI_CFG_DIAG_RECV_CAPTURE_BUS_MASK                            	0x0000000000000008ull
#define AR_PI_CFG_DIAG_RECV_WRAP_CAPTURE_MASK                           	0x0000000000000004ull
#define AR_PI_CFG_DIAG_RECV_STOP_CAPTURE_MASK                           	0x0000000000000002ull
#define AR_PI_CFG_DIAG_RECV_START_CAPTURE_MASK                          	0x0000000000000001ull
#define AR_PI_CFG_DIAG_RECV_CAPTURE_COUNT_BP                            	8
#define AR_PI_CFG_DIAG_RECV_CAPTURE_TYPE_BP                             	5
#define AR_PI_CFG_DIAG_RECV_RESET_CAPTURE_BP                            	4
#define AR_PI_CFG_DIAG_RECV_CAPTURE_BUS_BP                              	3
#define AR_PI_CFG_DIAG_RECV_WRAP_CAPTURE_BP                             	2
#define AR_PI_CFG_DIAG_RECV_STOP_CAPTURE_BP                             	1
#define AR_PI_CFG_DIAG_RECV_START_CAPTURE_BP                            	0
#define AR_PI_CFG_DIAG_RECV_CAPTURE_COUNT_QW                            	0
#define AR_PI_CFG_DIAG_RECV_CAPTURE_TYPE_QW                             	0
#define AR_PI_CFG_DIAG_RECV_RESET_CAPTURE_QW                            	0
#define AR_PI_CFG_DIAG_RECV_CAPTURE_BUS_QW                              	0
#define AR_PI_CFG_DIAG_RECV_WRAP_CAPTURE_QW                             	0
#define AR_PI_CFG_DIAG_RECV_STOP_CAPTURE_QW                             	0
#define AR_PI_CFG_DIAG_RECV_START_CAPTURE_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_STS_DIAG_RECV DEFINES
 */
#define AR_PI_STS_DIAG_RECV_CAPTURE_COUNT_MASK                          	0x000000000000ff00ull
#define AR_PI_STS_DIAG_RECV_CAPTURE_FULL_MASK                           	0x0000000000000002ull
#define AR_PI_STS_DIAG_RECV_IN_PROGRESS_MASK                            	0x0000000000000001ull
#define AR_PI_STS_DIAG_RECV_CAPTURE_COUNT_BP                            	8
#define AR_PI_STS_DIAG_RECV_CAPTURE_FULL_BP                             	1
#define AR_PI_STS_DIAG_RECV_IN_PROGRESS_BP                              	0
#define AR_PI_STS_DIAG_RECV_CAPTURE_COUNT_QW                            	0
#define AR_PI_STS_DIAG_RECV_CAPTURE_FULL_QW                             	0
#define AR_PI_STS_DIAG_RECV_IN_PROGRESS_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_CTL_0 DEFINES
 */
#define AR_PI_DBG_RECV_CTL_0_CAPTURE_CNTL_MASK                          	0xffffffffffffffffull
#define AR_PI_DBG_RECV_CTL_0_CAPTURE_CNTL_BP                            	0
#define AR_PI_DBG_RECV_CTL_0_CAPTURE_CNTL_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_CTL_1 DEFINES
 */
#define AR_PI_DBG_RECV_CTL_1_CAPTURE_CNTL_MASK                          	0xffffffffffffffffull
#define AR_PI_DBG_RECV_CTL_1_CAPTURE_CNTL_BP                            	0
#define AR_PI_DBG_RECV_CTL_1_CAPTURE_CNTL_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_CTL_2 DEFINES
 */
#define AR_PI_DBG_RECV_CTL_2_CAPTURE_CNTL_MASK                          	0xffffffffffffffffull
#define AR_PI_DBG_RECV_CTL_2_CAPTURE_CNTL_BP                            	0
#define AR_PI_DBG_RECV_CTL_2_CAPTURE_CNTL_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_CTL_3 DEFINES
 */
#define AR_PI_DBG_RECV_CTL_3_CAPTURE_CNTL_MASK                          	0xffffffffffffffffull
#define AR_PI_DBG_RECV_CTL_3_CAPTURE_CNTL_BP                            	0
#define AR_PI_DBG_RECV_CTL_3_CAPTURE_CNTL_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_CTL_4 DEFINES
 */
#define AR_PI_DBG_RECV_CTL_4_CAPTURE_CNTL_MASK                          	0xffffffffffffffffull
#define AR_PI_DBG_RECV_CTL_4_CAPTURE_CNTL_BP                            	0
#define AR_PI_DBG_RECV_CTL_4_CAPTURE_CNTL_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_MASK_0 DEFINES
 */
#define AR_PI_DBG_RECV_MASK_0_CAPTURE_MASK_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_RECV_MASK_0_CAPTURE_MASK_BP                           	0
#define AR_PI_DBG_RECV_MASK_0_CAPTURE_MASK_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_MASK_1 DEFINES
 */
#define AR_PI_DBG_RECV_MASK_1_CAPTURE_MASK_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_RECV_MASK_1_CAPTURE_MASK_BP                           	0
#define AR_PI_DBG_RECV_MASK_1_CAPTURE_MASK_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_MASK_2 DEFINES
 */
#define AR_PI_DBG_RECV_MASK_2_CAPTURE_MASK_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_RECV_MASK_2_CAPTURE_MASK_BP                           	0
#define AR_PI_DBG_RECV_MASK_2_CAPTURE_MASK_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_MASK_3 DEFINES
 */
#define AR_PI_DBG_RECV_MASK_3_CAPTURE_MASK_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_RECV_MASK_3_CAPTURE_MASK_BP                           	0
#define AR_PI_DBG_RECV_MASK_3_CAPTURE_MASK_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_RECV_MASK_4 DEFINES
 */
#define AR_PI_DBG_RECV_MASK_4_CAPTURE_MASK_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_RECV_MASK_4_CAPTURE_MASK_BP                           	0
#define AR_PI_DBG_RECV_MASK_4_CAPTURE_MASK_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DEBUG_DEN_IP DEFINES
 */
#define AR_PI_DEBUG_DEN_IP_DEN_DEBUG_PORTS_MASK                         	0x000000000000ffffull
#define AR_PI_DEBUG_DEN_IP_DEN_DEBUG_PORTS_BP                           	0
#define AR_PI_DEBUG_DEN_IP_DEN_DEBUG_PORTS_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_CFG_DIAG_INJ DEFINES
 */
#define AR_PI_CFG_DIAG_INJ_ONE_TRANS_MASK                               	0x0000000000008000ull
#define AR_PI_CFG_DIAG_INJ_INJECT_COUNT_MASK                            	0x0000000000007f00ull
#define AR_PI_CFG_DIAG_INJ_RESET_INJECT_MASK                            	0x0000000000000010ull
#define AR_PI_CFG_DIAG_INJ_STOP_INJECT_MASK                             	0x0000000000000002ull
#define AR_PI_CFG_DIAG_INJ_START_INJECT_MASK                            	0x0000000000000001ull
#define AR_PI_CFG_DIAG_INJ_ONE_TRANS_BP                                 	15
#define AR_PI_CFG_DIAG_INJ_INJECT_COUNT_BP                              	8
#define AR_PI_CFG_DIAG_INJ_RESET_INJECT_BP                              	4
#define AR_PI_CFG_DIAG_INJ_STOP_INJECT_BP                               	1
#define AR_PI_CFG_DIAG_INJ_START_INJECT_BP                              	0
#define AR_PI_CFG_DIAG_INJ_ONE_TRANS_QW                                 	0
#define AR_PI_CFG_DIAG_INJ_INJECT_COUNT_QW                              	0
#define AR_PI_CFG_DIAG_INJ_RESET_INJECT_QW                              	0
#define AR_PI_CFG_DIAG_INJ_STOP_INJECT_QW                               	0
#define AR_PI_CFG_DIAG_INJ_START_INJECT_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_STS_DIAG_INJ DEFINES
 */
#define AR_PI_STS_DIAG_INJ_INJECT_COUNT_MASK                            	0x000000000000ff00ull
#define AR_PI_STS_DIAG_INJ_INJECT_COMPLETE_MASK                         	0x0000000000000002ull
#define AR_PI_STS_DIAG_INJ_IN_PROGRESS_MASK                             	0x0000000000000001ull
#define AR_PI_STS_DIAG_INJ_INJECT_COUNT_BP                              	8
#define AR_PI_STS_DIAG_INJ_INJECT_COMPLETE_BP                           	1
#define AR_PI_STS_DIAG_INJ_IN_PROGRESS_BP                               	0
#define AR_PI_STS_DIAG_INJ_INJECT_COUNT_QW                              	0
#define AR_PI_STS_DIAG_INJ_INJECT_COMPLETE_QW                           	0
#define AR_PI_STS_DIAG_INJ_IN_PROGRESS_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PCIC_MEMS_DBG_ERRINJ DEFINES
 */
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_ADDRESS_MASK                         	0x000000ff00000000ull
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_CHECKBITS_MASK                       	0x0000000000ff0000ull
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_RAMSELECT_MASK                       	0x00000000000001f0ull
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_TRIGGERED_MASK                       	0x0000000000000008ull
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_MODE_MASK                            	0x0000000000000006ull
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_ENABLE_MASK                          	0x0000000000000001ull
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_ADDRESS_BP                           	32
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_CHECKBITS_BP                         	16
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_RAMSELECT_BP                         	4
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_TRIGGERED_BP                         	3
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_MODE_BP                              	1
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_ENABLE_BP                            	0
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_ADDRESS_QW                           	0
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_CHECKBITS_QW                         	0
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_RAMSELECT_QW                         	0
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_TRIGGERED_QW                         	0
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_MODE_QW                              	0
#define AR_PI_PCIC_MEMS_DBG_ERRINJ_ENABLE_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_CSRS DEFINES
 */
#define AR_PI_PHY_CSRS_CSR_DATA_Q3_A1_MASK                              	0xff00000000000000ull
#define AR_PI_PHY_CSRS_CSR_DATA_Q2_A1_MASK                              	0x00ff000000000000ull
#define AR_PI_PHY_CSRS_CSR_DATA_Q1_A1_MASK                              	0x0000ff0000000000ull
#define AR_PI_PHY_CSRS_CSR_DATA_Q0_A1_MASK                              	0x000000ff00000000ull
#define AR_PI_PHY_CSRS_CSR_DATA_Q3_A0_MASK                              	0x00000000ff000000ull
#define AR_PI_PHY_CSRS_CSR_DATA_Q2_A0_MASK                              	0x0000000000ff0000ull
#define AR_PI_PHY_CSRS_CSR_DATA_Q1_A0_MASK                              	0x000000000000ff00ull
#define AR_PI_PHY_CSRS_CSR_DATA_Q0_A0_MASK                              	0x00000000000000ffull
#define AR_PI_PHY_CSRS_CSR_DATA_Q3_A1_BP                                	56
#define AR_PI_PHY_CSRS_CSR_DATA_Q2_A1_BP                                	48
#define AR_PI_PHY_CSRS_CSR_DATA_Q1_A1_BP                                	40
#define AR_PI_PHY_CSRS_CSR_DATA_Q0_A1_BP                                	32
#define AR_PI_PHY_CSRS_CSR_DATA_Q3_A0_BP                                	24
#define AR_PI_PHY_CSRS_CSR_DATA_Q2_A0_BP                                	16
#define AR_PI_PHY_CSRS_CSR_DATA_Q1_A0_BP                                	8
#define AR_PI_PHY_CSRS_CSR_DATA_Q0_A0_BP                                	0
#define AR_PI_PHY_CSRS_CSR_DATA_Q3_A1_QW                                	0
#define AR_PI_PHY_CSRS_CSR_DATA_Q2_A1_QW                                	0
#define AR_PI_PHY_CSRS_CSR_DATA_Q1_A1_QW                                	0
#define AR_PI_PHY_CSRS_CSR_DATA_Q0_A1_QW                                	0
#define AR_PI_PHY_CSRS_CSR_DATA_Q3_A0_QW                                	0
#define AR_PI_PHY_CSRS_CSR_DATA_Q2_A0_QW                                	0
#define AR_PI_PHY_CSRS_CSR_DATA_Q1_A0_QW                                	0
#define AR_PI_PHY_CSRS_CSR_DATA_Q0_A0_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_CSR_CMU_0 DEFINES
 */
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q3_MASK                         	0xc000000000000000ull
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q3_MASK                       	0x3000000000000000ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q3_MASK             	0x0f00000000000000ull
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q2_MASK                         	0x00c0000000000000ull
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q2_MASK                       	0x0030000000000000ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q2_MASK             	0x000f000000000000ull
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q1_MASK                         	0x0000c00000000000ull
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q1_MASK                       	0x0000300000000000ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q1_MASK             	0x00000f0000000000ull
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q0_MASK                         	0x000000c000000000ull
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q0_MASK                       	0x0000003000000000ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q0_MASK             	0x0000000f00000000ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q3_MASK             	0x00000000fc000000ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q3_MASK                 	0x0000000002000000ull
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q3_MASK                      	0x0000000001000000ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q2_MASK             	0x0000000000fc0000ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q2_MASK                 	0x0000000000020000ull
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q2_MASK                      	0x0000000000010000ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q1_MASK             	0x000000000000fc00ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q1_MASK                 	0x0000000000000200ull
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q1_MASK                      	0x0000000000000100ull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q0_MASK             	0x00000000000000fcull
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q0_MASK                 	0x0000000000000002ull
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q0_MASK                      	0x0000000000000001ull
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q3_BP                           	62
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q3_BP                         	60
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q3_BP               	56
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q2_BP                           	54
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q2_BP                         	52
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q2_BP               	48
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q1_BP                           	46
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q1_BP                         	44
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q1_BP               	40
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q0_BP                           	38
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q0_BP                         	36
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q0_BP               	32
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q3_BP               	26
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q3_BP                   	25
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q3_BP                        	24
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q2_BP               	18
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q2_BP                   	17
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q2_BP                        	16
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q1_BP               	10
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q1_BP                   	9
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q1_BP                        	8
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q0_BP               	2
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q0_BP                   	1
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q0_BP                        	0
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q3_QW                           	0
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q3_QW                         	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q3_QW               	0
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q2_QW                           	0
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q2_QW                         	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q2_QW               	0
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q1_QW                           	0
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q1_QW                         	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q1_QW               	0
#define AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q0_QW                           	0
#define AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q0_QW                         	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q0_QW               	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q3_QW               	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q3_QW                   	0
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q3_QW                        	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q2_QW               	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q2_QW                   	0
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q2_QW                        	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q1_QW               	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q1_QW                   	0
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q1_QW                        	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q0_QW               	0
#define AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q0_QW                   	0
#define AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q0_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_CSR_LANE1_0 DEFINES
 */
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q3_MASK                     	0x8000000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q3_MASK                      	0x4000000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q3_MASK                       	0x2000000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q3_MASK                        	0x1000000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q3_MASK                        	0x0800000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q3_MASK                      	0x0400000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q3_MASK                       	0x0200000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q3_MASK                       	0x0100000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q2_MASK                     	0x0080000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q2_MASK                      	0x0040000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q2_MASK                       	0x0020000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q2_MASK                        	0x0010000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q2_MASK                        	0x0008000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q2_MASK                      	0x0004000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q2_MASK                       	0x0002000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q2_MASK                       	0x0001000000000000ull
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q1_MASK                     	0x0000800000000000ull
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q1_MASK                      	0x0000400000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q1_MASK                       	0x0000200000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q1_MASK                        	0x0000100000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q1_MASK                        	0x0000080000000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q1_MASK                      	0x0000040000000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q1_MASK                       	0x0000020000000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q1_MASK                       	0x0000010000000000ull
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q0_MASK                     	0x0000008000000000ull
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q0_MASK                      	0x0000004000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q0_MASK                       	0x0000002000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q0_MASK                        	0x0000001000000000ull
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q0_MASK                        	0x0000000800000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q0_MASK                      	0x0000000400000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q0_MASK                       	0x0000000200000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q0_MASK                       	0x0000000100000000ull
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q3_MASK                	0x00000000c0000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q3_MASK                      	0x0000000020000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q3_MASK                       	0x0000000010000000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q3_MASK                       	0x0000000008000000ull
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q3_MASK                          	0x0000000004000000ull
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q3_MASK                      	0x0000000002000000ull
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q3_MASK                      	0x0000000001000000ull
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q2_MASK                	0x0000000000c00000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q2_MASK                      	0x0000000000200000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q2_MASK                       	0x0000000000100000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q2_MASK                       	0x0000000000080000ull
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q2_MASK                          	0x0000000000040000ull
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q2_MASK                      	0x0000000000020000ull
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q2_MASK                      	0x0000000000010000ull
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q1_MASK                	0x000000000000c000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q1_MASK                      	0x0000000000002000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q1_MASK                       	0x0000000000001000ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q1_MASK                       	0x0000000000000800ull
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q1_MASK                          	0x0000000000000400ull
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q1_MASK                      	0x0000000000000200ull
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q1_MASK                      	0x0000000000000100ull
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q0_MASK                	0x00000000000000c0ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q0_MASK                      	0x0000000000000020ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q0_MASK                       	0x0000000000000010ull
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q0_MASK                       	0x0000000000000008ull
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q0_MASK                          	0x0000000000000004ull
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q0_MASK                      	0x0000000000000002ull
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q0_MASK                      	0x0000000000000001ull
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q3_BP                       	63
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q3_BP                        	62
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q3_BP                         	61
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q3_BP                          	60
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q3_BP                          	59
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q3_BP                        	58
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q3_BP                         	57
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q3_BP                         	56
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q2_BP                       	55
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q2_BP                        	54
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q2_BP                         	53
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q2_BP                          	52
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q2_BP                          	51
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q2_BP                        	50
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q2_BP                         	49
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q2_BP                         	48
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q1_BP                       	47
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q1_BP                        	46
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q1_BP                         	45
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q1_BP                          	44
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q1_BP                          	43
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q1_BP                        	42
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q1_BP                         	41
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q1_BP                         	40
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q0_BP                       	39
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q0_BP                        	38
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q0_BP                         	37
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q0_BP                          	36
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q0_BP                          	35
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q0_BP                        	34
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q0_BP                         	33
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q0_BP                         	32
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q3_BP                  	30
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q3_BP                        	29
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q3_BP                         	28
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q3_BP                         	27
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q3_BP                            	26
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q3_BP                        	25
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q3_BP                        	24
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q2_BP                  	22
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q2_BP                        	21
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q2_BP                         	20
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q2_BP                         	19
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q2_BP                            	18
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q2_BP                        	17
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q2_BP                        	16
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q1_BP                  	14
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q1_BP                        	13
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q1_BP                         	12
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q1_BP                         	11
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q1_BP                            	10
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q1_BP                        	9
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q1_BP                        	8
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q0_BP                  	6
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q0_BP                        	5
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q0_BP                         	4
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q0_BP                         	3
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q0_BP                            	2
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q0_BP                        	1
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q0_BP                        	0
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q3_QW                       	0
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q3_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q3_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q3_QW                          	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q3_QW                          	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q3_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q3_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q3_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q2_QW                       	0
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q2_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q2_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q2_QW                          	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q2_QW                          	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q2_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q2_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q2_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q1_QW                       	0
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q1_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q1_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q1_QW                          	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q1_QW                          	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q1_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q1_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q1_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q0_QW                       	0
#define AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q0_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q0_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q0_QW                          	0
#define AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q0_QW                          	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q0_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q0_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q0_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q3_QW                  	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q3_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q3_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q3_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q3_QW                            	0
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q3_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q3_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q2_QW                  	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q2_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q2_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q2_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q2_QW                            	0
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q2_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q2_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q1_QW                  	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q1_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q1_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q1_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q1_QW                            	0
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q1_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q1_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q0_QW                  	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q0_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q0_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q0_QW                         	0
#define AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q0_QW                            	0
#define AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q0_QW                        	0
#define AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q0_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_PHY_CSR_COMLANE_0 DEFINES
 */
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q3_MASK                         	0x8000000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q3_MASK                         	0x4000000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q3_MASK                        	0x2000000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q3_MASK                         	0x1000000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q3_MASK          	0x0f00000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q2_MASK                         	0x0080000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q2_MASK                         	0x0040000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q2_MASK                        	0x0020000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q2_MASK                         	0x0010000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q2_MASK          	0x000f000000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q1_MASK                         	0x0000800000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q1_MASK                         	0x0000400000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q1_MASK                        	0x0000200000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q1_MASK                         	0x0000100000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q1_MASK          	0x00000f0000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q0_MASK                         	0x0000008000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q0_MASK                         	0x0000004000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q0_MASK                        	0x0000002000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q0_MASK                         	0x0000001000000000ull
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q0_MASK          	0x0000000f00000000ull
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q3_MASK                          	0x0000000080000000ull
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q3_MASK                          	0x0000000040000000ull
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q3_MASK                          	0x0000000020000000ull
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q3_MASK                   	0x0000000010000000ull
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q3_MASK                   	0x0000000008000000ull
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q3_MASK                   	0x0000000004000000ull
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q3_MASK                   	0x0000000002000000ull
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q3_MASK               	0x0000000001000000ull
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q2_MASK                          	0x0000000000800000ull
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q2_MASK                          	0x0000000000400000ull
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q2_MASK                          	0x0000000000200000ull
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q2_MASK                   	0x0000000000100000ull
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q2_MASK                   	0x0000000000080000ull
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q2_MASK                   	0x0000000000040000ull
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q2_MASK                   	0x0000000000020000ull
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q2_MASK               	0x0000000000010000ull
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q1_MASK                          	0x0000000000008000ull
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q1_MASK                          	0x0000000000004000ull
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q1_MASK                          	0x0000000000002000ull
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q1_MASK                   	0x0000000000001000ull
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q1_MASK                   	0x0000000000000800ull
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q1_MASK                   	0x0000000000000400ull
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q1_MASK                   	0x0000000000000200ull
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q1_MASK               	0x0000000000000100ull
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q0_MASK                          	0x0000000000000080ull
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q0_MASK                          	0x0000000000000040ull
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q0_MASK                          	0x0000000000000020ull
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q0_MASK                   	0x0000000000000010ull
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q0_MASK                   	0x0000000000000008ull
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q0_MASK                   	0x0000000000000004ull
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q0_MASK                   	0x0000000000000002ull
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q0_MASK               	0x0000000000000001ull
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q3_BP                           	63
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q3_BP                           	62
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q3_BP                          	61
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q3_BP                           	60
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q3_BP            	56
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q2_BP                           	55
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q2_BP                           	54
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q2_BP                          	53
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q2_BP                           	52
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q2_BP            	48
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q1_BP                           	47
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q1_BP                           	46
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q1_BP                          	45
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q1_BP                           	44
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q1_BP            	40
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q0_BP                           	39
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q0_BP                           	38
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q0_BP                          	37
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q0_BP                           	36
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q0_BP            	32
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q3_BP                            	31
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q3_BP                            	30
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q3_BP                            	29
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q3_BP                     	28
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q3_BP                     	27
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q3_BP                     	26
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q3_BP                     	25
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q3_BP                 	24
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q2_BP                            	23
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q2_BP                            	22
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q2_BP                            	21
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q2_BP                     	20
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q2_BP                     	19
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q2_BP                     	18
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q2_BP                     	17
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q2_BP                 	16
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q1_BP                            	15
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q1_BP                            	14
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q1_BP                            	13
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q1_BP                     	12
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q1_BP                     	11
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q1_BP                     	10
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q1_BP                     	9
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q1_BP                 	8
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q0_BP                            	7
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q0_BP                            	6
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q0_BP                            	5
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q0_BP                     	4
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q0_BP                     	3
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q0_BP                     	2
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q0_BP                     	1
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q0_BP                 	0
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q3_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q3_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q3_QW                          	0
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q3_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q3_QW            	0
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q2_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q2_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q2_QW                          	0
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q2_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q2_QW            	0
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q1_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q1_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q1_QW                          	0
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q1_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q1_QW            	0
#define AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q0_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q0_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q0_QW                          	0
#define AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q0_QW                           	0
#define AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q0_QW            	0
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q3_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q3_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q3_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q3_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q3_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q3_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q3_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q3_QW                 	0
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q2_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q2_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q2_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q2_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q2_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q2_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q2_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q2_QW                 	0
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q1_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q1_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q1_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q1_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q1_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q1_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q1_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q1_QW                 	0
#define AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q0_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q0_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q0_QW                            	0
#define AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q0_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q0_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q0_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q0_QW                     	0
#define AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q0_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DATABAHN_CSRS DEFINES
 */
#define AR_PI_DATABAHN_CSRS_CSR_DATA_A1_MASK                            	0xffffffff00000000ull
#define AR_PI_DATABAHN_CSRS_CSR_DATA_A0_MASK                            	0x00000000ffffffffull
#define AR_PI_DATABAHN_CSRS_CSR_DATA_A1_BP                              	32
#define AR_PI_DATABAHN_CSRS_CSR_DATA_A0_BP                              	0
#define AR_PI_DATABAHN_CSRS_CSR_DATA_A1_QW                              	0
#define AR_PI_DATABAHN_CSRS_CSR_DATA_A0_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_F0_DB_REV_ID_CLASS_CODE DEFINES
 */
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_BIST_MASK                      	0xff00000000000000ull
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK               	0x00ff000000000000ull
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK             	0x0000ff0000000000ull
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK           	0x000000ff00000000ull
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK                	0x00000000ffffff00ull
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK               	0x00000000000000ffull
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_BIST_BP                        	56
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP                 	48
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP               	40
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP             	32
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP                  	8
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_REVISION_ID_BP                 	0
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_BIST_QW                        	0
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_HEADER_TYPE_QW                 	0
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_QW               	0
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_QW             	0
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CLASS_CODE_QW                  	0
#define AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_REVISION_ID_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_F0_BAR_0_1 DEFINES
 */
#define AR_PI_DB_F0_BAR_0_1_WRITEABLE_128G_MASK                         	0xffffffe000000000ull
#define AR_PI_DB_F0_BAR_0_1_BASE_ADDR_HIGH_MASK                         	0xffffffff00000000ull
#define AR_PI_DB_F0_BAR_0_1_BASE_ADDR_MASK                              	0xffffffffffffff00ull
#define AR_PI_DB_F0_BAR_0_1_READ_ONLY_128G_MASK                         	0x0000001fffffff00ull
#define AR_PI_DB_F0_BAR_0_1_BASE_ADDR_LOW_MASK                          	0x00000000ffffff00ull
#define AR_PI_DB_F0_BAR_0_1_PREFETCHABILITY_MASK                        	0x0000000000000008ull
#define AR_PI_DB_F0_BAR_0_1_SIZE_MASK                                   	0x0000000000000004ull
#define AR_PI_DB_F0_BAR_0_1_MEM_SPACE_MASK                              	0x0000000000000001ull
#define AR_PI_DB_F0_BAR_0_1_WRITEABLE_128G_BP                           	37
#define AR_PI_DB_F0_BAR_0_1_BASE_ADDR_HIGH_BP                           	32
#define AR_PI_DB_F0_BAR_0_1_BASE_ADDR_BP                                	8
#define AR_PI_DB_F0_BAR_0_1_READ_ONLY_128G_BP                           	8
#define AR_PI_DB_F0_BAR_0_1_BASE_ADDR_LOW_BP                            	8
#define AR_PI_DB_F0_BAR_0_1_PREFETCHABILITY_BP                          	3
#define AR_PI_DB_F0_BAR_0_1_SIZE_BP                                     	2
#define AR_PI_DB_F0_BAR_0_1_MEM_SPACE_BP                                	0
#define AR_PI_DB_F0_BAR_0_1_WRITEABLE_128G_QW                           	0
#define AR_PI_DB_F0_BAR_0_1_BASE_ADDR_HIGH_QW                           	0
#define AR_PI_DB_F0_BAR_0_1_BASE_ADDR_QW                                	0
#define AR_PI_DB_F0_BAR_0_1_READ_ONLY_128G_QW                           	0
#define AR_PI_DB_F0_BAR_0_1_BASE_ADDR_LOW_QW                            	0
#define AR_PI_DB_F0_BAR_0_1_PREFETCHABILITY_QW                          	0
#define AR_PI_DB_F0_BAR_0_1_SIZE_QW                                     	0
#define AR_PI_DB_F0_BAR_0_1_MEM_SPACE_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_MSI_X_CNTL_2C_0 DEFINES
 */
#define AR_PI_DB_MSI_X_CNTL_2C_0_TABLE_OFFSET_MASK                      	0xfffffff800000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_0_BAR_INDICATOR_EG_MASK                  	0x0000000700000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_ENABLE_MASK                      	0x0000000080000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_0_FUNCTION_MASK_MASK                     	0x0000000040000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_TABLE_SIZE_MASK                  	0x0000000007ff0000ull
#define AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_PTR_MASK                    	0x000000000000ff00ull
#define AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_ID_MASK                     	0x00000000000000ffull
#define AR_PI_DB_MSI_X_CNTL_2C_0_TABLE_OFFSET_BP                        	35
#define AR_PI_DB_MSI_X_CNTL_2C_0_BAR_INDICATOR_EG_BP                    	32
#define AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_ENABLE_BP                        	31
#define AR_PI_DB_MSI_X_CNTL_2C_0_FUNCTION_MASK_BP                       	30
#define AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_TABLE_SIZE_BP                    	16
#define AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_PTR_BP                      	8
#define AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_ID_BP                       	0
#define AR_PI_DB_MSI_X_CNTL_2C_0_TABLE_OFFSET_QW                        	0
#define AR_PI_DB_MSI_X_CNTL_2C_0_BAR_INDICATOR_EG_QW                    	0
#define AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_ENABLE_QW                        	0
#define AR_PI_DB_MSI_X_CNTL_2C_0_FUNCTION_MASK_QW                       	0
#define AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_TABLE_SIZE_QW                    	0
#define AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_PTR_QW                      	0
#define AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_ID_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_MSI_X_PENDI_2E_0 DEFINES
 */
#define AR_PI_DB_MSI_X_PENDI_2E_0_PBA_OFFSET_MASK                       	0x00000000fffffff8ull
#define AR_PI_DB_MSI_X_PENDI_2E_0_BAR_INDICATOR_REG_MASK                	0x0000000000000007ull
#define AR_PI_DB_MSI_X_PENDI_2E_0_PBA_OFFSET_BP                         	3
#define AR_PI_DB_MSI_X_PENDI_2E_0_BAR_INDICATOR_REG_BP                  	0
#define AR_PI_DB_MSI_X_PENDI_2E_0_PBA_OFFSET_QW                         	0
#define AR_PI_DB_MSI_X_PENDI_2E_0_BAR_INDICATOR_REG_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_CNTL_STS_0 DEFINES
 */
#define AR_PI_DB_PCIE_CNTL_STS_0_PORT_NUMBER_MASK                       	0xff00000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_55_MASK                       	0x0080000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_ASPM_OPTIONALITY_COMPLIANCE_MASK       	0x0040000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_53_MASK                       	0x0020000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_DATA_LINK_REPORT_MASK                  	0x0010000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_SURP_DOWN_REPORT_MASK                  	0x0008000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_CLK_PWR_MNGT_MASK                      	0x0004000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_L1_EXIT_LAT_MASK                       	0x0003800000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_LOS_EXIT_LAT_MASK                      	0x0000700000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_ACTIVE_PWR_STATE_MASK                  	0x00000c0000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_WIDTH_MASK                    	0x000003f000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_SPEED_MASK                    	0x0000000f00000000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_31_22_MASK                    	0x00000000ffc00000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_TRANS_PENDING_MASK                     	0x0000000000200000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_DET_MASK                     	0x0000000000100000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_UNSUP_REQ_DET_MASK                     	0x0000000000080000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_FATAL_ERR_DET_MASK                     	0x0000000000040000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_NON_FATAL_ERR_DET_MASK                 	0x0000000000020000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_CORR_ERR_DET_MASK                      	0x0000000000010000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_FUNC_LEVEL_RESET_MASK                  	0x0000000000008000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_READ_REQ_MASK                      	0x0000000000007000ull
#define AR_PI_DB_PCIE_CNTL_STS_0_NO_SNOOP_EN_MASK                       	0x0000000000000800ull
#define AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_EN_MASK                      	0x0000000000000400ull
#define AR_PI_DB_PCIE_CNTL_STS_0_PHANTOM_FUNC_EN_MASK                   	0x0000000000000200ull
#define AR_PI_DB_PCIE_CNTL_STS_0_TAG_FIELD_EN_MASK                      	0x0000000000000100ull
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_PAYLOAD_MASK                       	0x00000000000000e0ull
#define AR_PI_DB_PCIE_CNTL_STS_0_RELAX_ORD_EN_MASK                      	0x0000000000000010ull
#define AR_PI_DB_PCIE_CNTL_STS_0_UNS_REQ_REP_EN_MASK                    	0x0000000000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_0_FATAL_REP_EN_MASK                      	0x0000000000000004ull
#define AR_PI_DB_PCIE_CNTL_STS_0_NONFATAL_REP_EN_MASK                   	0x0000000000000002ull
#define AR_PI_DB_PCIE_CNTL_STS_0_COR_ERR_REP_EN_MASK                    	0x0000000000000001ull
#define AR_PI_DB_PCIE_CNTL_STS_0_PORT_NUMBER_BP                         	56
#define AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_55_BP                         	55
#define AR_PI_DB_PCIE_CNTL_STS_0_ASPM_OPTIONALITY_COMPLIANCE_BP         	54
#define AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_53_BP                         	53
#define AR_PI_DB_PCIE_CNTL_STS_0_DATA_LINK_REPORT_BP                    	52
#define AR_PI_DB_PCIE_CNTL_STS_0_SURP_DOWN_REPORT_BP                    	51
#define AR_PI_DB_PCIE_CNTL_STS_0_CLK_PWR_MNGT_BP                        	50
#define AR_PI_DB_PCIE_CNTL_STS_0_L1_EXIT_LAT_BP                         	47
#define AR_PI_DB_PCIE_CNTL_STS_0_LOS_EXIT_LAT_BP                        	44
#define AR_PI_DB_PCIE_CNTL_STS_0_ACTIVE_PWR_STATE_BP                    	42
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_WIDTH_BP                      	36
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_SPEED_BP                      	32
#define AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_31_22_BP                      	22
#define AR_PI_DB_PCIE_CNTL_STS_0_TRANS_PENDING_BP                       	21
#define AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_DET_BP                       	20
#define AR_PI_DB_PCIE_CNTL_STS_0_UNSUP_REQ_DET_BP                       	19
#define AR_PI_DB_PCIE_CNTL_STS_0_FATAL_ERR_DET_BP                       	18
#define AR_PI_DB_PCIE_CNTL_STS_0_NON_FATAL_ERR_DET_BP                   	17
#define AR_PI_DB_PCIE_CNTL_STS_0_CORR_ERR_DET_BP                        	16
#define AR_PI_DB_PCIE_CNTL_STS_0_FUNC_LEVEL_RESET_BP                    	15
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_READ_REQ_BP                        	12
#define AR_PI_DB_PCIE_CNTL_STS_0_NO_SNOOP_EN_BP                         	11
#define AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_EN_BP                        	10
#define AR_PI_DB_PCIE_CNTL_STS_0_PHANTOM_FUNC_EN_BP                     	9
#define AR_PI_DB_PCIE_CNTL_STS_0_TAG_FIELD_EN_BP                        	8
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_PAYLOAD_BP                         	5
#define AR_PI_DB_PCIE_CNTL_STS_0_RELAX_ORD_EN_BP                        	4
#define AR_PI_DB_PCIE_CNTL_STS_0_UNS_REQ_REP_EN_BP                      	3
#define AR_PI_DB_PCIE_CNTL_STS_0_FATAL_REP_EN_BP                        	2
#define AR_PI_DB_PCIE_CNTL_STS_0_NONFATAL_REP_EN_BP                     	1
#define AR_PI_DB_PCIE_CNTL_STS_0_COR_ERR_REP_EN_BP                      	0
#define AR_PI_DB_PCIE_CNTL_STS_0_PORT_NUMBER_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_55_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_0_ASPM_OPTIONALITY_COMPLIANCE_QW         	0
#define AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_53_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_0_DATA_LINK_REPORT_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_0_SURP_DOWN_REPORT_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_0_CLK_PWR_MNGT_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_0_L1_EXIT_LAT_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_0_LOS_EXIT_LAT_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_0_ACTIVE_PWR_STATE_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_WIDTH_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_SPEED_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_31_22_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_0_TRANS_PENDING_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_0_UNSUP_REQ_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_0_FATAL_ERR_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_0_NON_FATAL_ERR_DET_QW                   	0
#define AR_PI_DB_PCIE_CNTL_STS_0_CORR_ERR_DET_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_0_FUNC_LEVEL_RESET_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_READ_REQ_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_0_NO_SNOOP_EN_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_0_PHANTOM_FUNC_EN_QW                     	0
#define AR_PI_DB_PCIE_CNTL_STS_0_TAG_FIELD_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_0_MAX_PAYLOAD_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_0_RELAX_ORD_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_0_UNS_REQ_REP_EN_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_0_FATAL_REP_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_0_NONFATAL_REP_EN_QW                     	0
#define AR_PI_DB_PCIE_CNTL_STS_0_COR_ERR_REP_EN_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_CNTL_STS_2_0 DEFINES
 */
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_63_36_MASK                  	0xfffffff000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_SUP_LINK_SPEED_MASK                  	0x0000000e00000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_32_MASK                     	0x0000000100000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_31_15_MASK                  	0x00000000ffff8000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_OBFF_EN_MASK                         	0x0000000000006000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_12_11_MASK                  	0x0000000000001800ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_LTR_MECH_EN_MASK                     	0x0000000000000400ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_COMP_MASK                        	0x0000000000000200ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_REQ_EN_MASK                      	0x0000000000000100ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_7_MASK                      	0x0000000000000080ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_ATOM_OP_REQ_EN_MASK                  	0x0000000000000040ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_5_MASK                      	0x0000000000000020ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_DIS_MASK                 	0x0000000000000010ull
#define AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_MASK                     	0x000000000000000full
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_63_36_BP                    	36
#define AR_PI_DB_PCIE_CNTL_STS_2_0_SUP_LINK_SPEED_BP                    	33
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_32_BP                       	32
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_31_15_BP                    	15
#define AR_PI_DB_PCIE_CNTL_STS_2_0_OBFF_EN_BP                           	13
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_12_11_BP                    	11
#define AR_PI_DB_PCIE_CNTL_STS_2_0_LTR_MECH_EN_BP                       	10
#define AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_COMP_BP                          	9
#define AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_REQ_EN_BP                        	8
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_7_BP                        	7
#define AR_PI_DB_PCIE_CNTL_STS_2_0_ATOM_OP_REQ_EN_BP                    	6
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_5_BP                        	5
#define AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_DIS_BP                   	4
#define AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_BP                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_63_36_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_SUP_LINK_SPEED_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_32_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_31_15_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_OBFF_EN_QW                           	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_12_11_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_LTR_MECH_EN_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_COMP_QW                          	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_REQ_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_7_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_ATOM_OP_REQ_EN_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_5_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_DIS_QW                   	0
#define AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_TPH_REQ_CNTL_0 DEFINES
 */
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_63_41_MASK                	0xfffffe0000000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_TPH_REQ_EN_MASK                    	0x0000010000000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_39_35_MASK                	0x000000f800000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_MODE_MASK                       	0x0000000700000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_31_27_MASK                	0x00000000f8000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_SIZE_MASK                 	0x0000000007ff0000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_15_11_MASK                	0x000000000000f800ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_MASK                  	0x0000000000000600ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_EXT_TPH_REG_SUP_MASK               	0x0000000000000100ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_WA_MASK               	0x0000000000000300ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_7_3_MASK                  	0x00000000000000f8ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_DEV_SPECMODE_SUP_MASK              	0x0000000000000004ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_INT_VECTMODE_SUP_MASK              	0x0000000000000002ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_NO_ST_MODE_SUP_MASK                	0x0000000000000001ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_63_41_BP                  	41
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_TPH_REQ_EN_BP                      	40
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_39_35_BP                  	35
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_MODE_BP                         	32
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_31_27_BP                  	27
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_SIZE_BP                   	16
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_15_11_BP                  	11
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_BP                    	9
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_EXT_TPH_REG_SUP_BP                 	8
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_WA_BP                 	8
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_7_3_BP                    	3
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_DEV_SPECMODE_SUP_BP                	2
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_INT_VECTMODE_SUP_BP                	1
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_NO_ST_MODE_SUP_BP                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_63_41_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_TPH_REQ_EN_QW                      	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_39_35_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_MODE_QW                         	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_31_27_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_SIZE_QW                   	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_15_11_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_QW                    	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_EXT_TPH_REG_SUP_QW                 	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_WA_QW                 	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_7_3_QW                    	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_DEV_SPECMODE_SUP_QW                	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_INT_VECTMODE_SUP_QW                	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_0_NO_ST_MODE_SUP_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_F1_DB_REV_ID_CLASS_CODE DEFINES
 */
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_BIST_MASK                      	0xff00000000000000ull
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK               	0x00ff000000000000ull
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK             	0x0000ff0000000000ull
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK           	0x000000ff00000000ull
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK                	0x00000000ffffff00ull
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK               	0x00000000000000ffull
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_BIST_BP                        	56
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP                 	48
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP               	40
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP             	32
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP                  	8
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_REVISION_ID_BP                 	0
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_BIST_QW                        	0
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_HEADER_TYPE_QW                 	0
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_QW               	0
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_QW             	0
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CLASS_CODE_QW                  	0
#define AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_REVISION_ID_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_F1_BAR_0_1 DEFINES
 */
#define AR_PI_DB_F1_BAR_0_1_BASE_ADDR_HIGH_MASK                         	0xffffffff00000000ull
#define AR_PI_DB_F1_BAR_0_1_WRITEABLE_8K_MASK                           	0xffffffffffffe000ull
#define AR_PI_DB_F1_BAR_0_1_BASE_ADDR_MASK                              	0xffffffffffffff00ull
#define AR_PI_DB_F1_BAR_0_1_READ_ONLY_8K_MASK                           	0x0000000000001f00ull
#define AR_PI_DB_F1_BAR_0_1_BASE_ADDR_LOW_MASK                          	0x00000000ffffff00ull
#define AR_PI_DB_F1_BAR_0_1_PREFETCHABILITY_MASK                        	0x0000000000000008ull
#define AR_PI_DB_F1_BAR_0_1_SIZE_MASK                                   	0x0000000000000004ull
#define AR_PI_DB_F1_BAR_0_1_MEM_SPACE_MASK                              	0x0000000000000001ull
#define AR_PI_DB_F1_BAR_0_1_BASE_ADDR_HIGH_BP                           	32
#define AR_PI_DB_F1_BAR_0_1_WRITEABLE_8K_BP                             	13
#define AR_PI_DB_F1_BAR_0_1_BASE_ADDR_BP                                	8
#define AR_PI_DB_F1_BAR_0_1_READ_ONLY_8K_BP                             	8
#define AR_PI_DB_F1_BAR_0_1_BASE_ADDR_LOW_BP                            	8
#define AR_PI_DB_F1_BAR_0_1_PREFETCHABILITY_BP                          	3
#define AR_PI_DB_F1_BAR_0_1_SIZE_BP                                     	2
#define AR_PI_DB_F1_BAR_0_1_MEM_SPACE_BP                                	0
#define AR_PI_DB_F1_BAR_0_1_BASE_ADDR_HIGH_QW                           	0
#define AR_PI_DB_F1_BAR_0_1_WRITEABLE_8K_QW                             	0
#define AR_PI_DB_F1_BAR_0_1_BASE_ADDR_QW                                	0
#define AR_PI_DB_F1_BAR_0_1_READ_ONLY_8K_QW                             	0
#define AR_PI_DB_F1_BAR_0_1_BASE_ADDR_LOW_QW                            	0
#define AR_PI_DB_F1_BAR_0_1_PREFETCHABILITY_QW                          	0
#define AR_PI_DB_F1_BAR_0_1_SIZE_QW                                     	0
#define AR_PI_DB_F1_BAR_0_1_MEM_SPACE_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_MSI_X_CNTL_2C_1 DEFINES
 */
#define AR_PI_DB_MSI_X_CNTL_2C_1_TABLE_OFFSET_MASK                      	0xfffffff800000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_1_BAR_INDICATOR_EG_MASK                  	0x0000000700000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_ENABLE_MASK                      	0x0000000080000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_1_FUNCTION_MASK_MASK                     	0x0000000040000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_TABLE_SIZE_MASK                  	0x0000000007ff0000ull
#define AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_PTR_MASK                    	0x000000000000ff00ull
#define AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_ID_MASK                     	0x00000000000000ffull
#define AR_PI_DB_MSI_X_CNTL_2C_1_TABLE_OFFSET_BP                        	35
#define AR_PI_DB_MSI_X_CNTL_2C_1_BAR_INDICATOR_EG_BP                    	32
#define AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_ENABLE_BP                        	31
#define AR_PI_DB_MSI_X_CNTL_2C_1_FUNCTION_MASK_BP                       	30
#define AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_TABLE_SIZE_BP                    	16
#define AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_PTR_BP                      	8
#define AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_ID_BP                       	0
#define AR_PI_DB_MSI_X_CNTL_2C_1_TABLE_OFFSET_QW                        	0
#define AR_PI_DB_MSI_X_CNTL_2C_1_BAR_INDICATOR_EG_QW                    	0
#define AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_ENABLE_QW                        	0
#define AR_PI_DB_MSI_X_CNTL_2C_1_FUNCTION_MASK_QW                       	0
#define AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_TABLE_SIZE_QW                    	0
#define AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_PTR_QW                      	0
#define AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_ID_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_MSI_X_PENDI_2E_1 DEFINES
 */
#define AR_PI_DB_MSI_X_PENDI_2E_1_PBA_OFFSET_MASK                       	0x00000000fffffff8ull
#define AR_PI_DB_MSI_X_PENDI_2E_1_BAR_INDICATOR_REG_MASK                	0x0000000000000007ull
#define AR_PI_DB_MSI_X_PENDI_2E_1_PBA_OFFSET_BP                         	3
#define AR_PI_DB_MSI_X_PENDI_2E_1_BAR_INDICATOR_REG_BP                  	0
#define AR_PI_DB_MSI_X_PENDI_2E_1_PBA_OFFSET_QW                         	0
#define AR_PI_DB_MSI_X_PENDI_2E_1_BAR_INDICATOR_REG_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_CNTL_STS_1 DEFINES
 */
#define AR_PI_DB_PCIE_CNTL_STS_1_PORT_NUMBER_MASK                       	0xff00000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_55_MASK                       	0x0080000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_ASPM_OPTIONALITY_COMPLIANCE_MASK       	0x0040000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_53_MASK                       	0x0020000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_DATA_LINK_REPORT_MASK                  	0x0010000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_SURP_DOWN_REPORT_MASK                  	0x0008000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_CLK_PWR_MNGT_MASK                      	0x0004000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_L1_EXIT_LAT_MASK                       	0x0003800000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_LOS_EXIT_LAT_MASK                      	0x0000700000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_ACTIVE_PWR_STATE_MASK                  	0x00000c0000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_WIDTH_MASK                    	0x000003f000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_SPEED_MASK                    	0x0000000f00000000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_31_22_MASK                    	0x00000000ffc00000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_TRANS_PENDING_MASK                     	0x0000000000200000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_DET_MASK                     	0x0000000000100000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_UNSUP_REQ_DET_MASK                     	0x0000000000080000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_FATAL_ERR_DET_MASK                     	0x0000000000040000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_NON_FATAL_ERR_DET_MASK                 	0x0000000000020000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_CORR_ERR_DET_MASK                      	0x0000000000010000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_FUNC_LEVEL_RESET_MASK                  	0x0000000000008000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_READ_REQ_MASK                      	0x0000000000007000ull
#define AR_PI_DB_PCIE_CNTL_STS_1_NO_SNOOP_EN_MASK                       	0x0000000000000800ull
#define AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_EN_MASK                      	0x0000000000000400ull
#define AR_PI_DB_PCIE_CNTL_STS_1_PHANTOM_FUNC_EN_MASK                   	0x0000000000000200ull
#define AR_PI_DB_PCIE_CNTL_STS_1_TAG_FIELD_EN_MASK                      	0x0000000000000100ull
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_PAYLOAD_MASK                       	0x00000000000000e0ull
#define AR_PI_DB_PCIE_CNTL_STS_1_RELAX_ORD_EN_MASK                      	0x0000000000000010ull
#define AR_PI_DB_PCIE_CNTL_STS_1_UNS_REQ_REP_EN_MASK                    	0x0000000000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_1_FATAL_REP_EN_MASK                      	0x0000000000000004ull
#define AR_PI_DB_PCIE_CNTL_STS_1_NONFATAL_REP_EN_MASK                   	0x0000000000000002ull
#define AR_PI_DB_PCIE_CNTL_STS_1_COR_ERR_REP_EN_MASK                    	0x0000000000000001ull
#define AR_PI_DB_PCIE_CNTL_STS_1_PORT_NUMBER_BP                         	56
#define AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_55_BP                         	55
#define AR_PI_DB_PCIE_CNTL_STS_1_ASPM_OPTIONALITY_COMPLIANCE_BP         	54
#define AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_53_BP                         	53
#define AR_PI_DB_PCIE_CNTL_STS_1_DATA_LINK_REPORT_BP                    	52
#define AR_PI_DB_PCIE_CNTL_STS_1_SURP_DOWN_REPORT_BP                    	51
#define AR_PI_DB_PCIE_CNTL_STS_1_CLK_PWR_MNGT_BP                        	50
#define AR_PI_DB_PCIE_CNTL_STS_1_L1_EXIT_LAT_BP                         	47
#define AR_PI_DB_PCIE_CNTL_STS_1_LOS_EXIT_LAT_BP                        	44
#define AR_PI_DB_PCIE_CNTL_STS_1_ACTIVE_PWR_STATE_BP                    	42
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_WIDTH_BP                      	36
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_SPEED_BP                      	32
#define AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_31_22_BP                      	22
#define AR_PI_DB_PCIE_CNTL_STS_1_TRANS_PENDING_BP                       	21
#define AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_DET_BP                       	20
#define AR_PI_DB_PCIE_CNTL_STS_1_UNSUP_REQ_DET_BP                       	19
#define AR_PI_DB_PCIE_CNTL_STS_1_FATAL_ERR_DET_BP                       	18
#define AR_PI_DB_PCIE_CNTL_STS_1_NON_FATAL_ERR_DET_BP                   	17
#define AR_PI_DB_PCIE_CNTL_STS_1_CORR_ERR_DET_BP                        	16
#define AR_PI_DB_PCIE_CNTL_STS_1_FUNC_LEVEL_RESET_BP                    	15
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_READ_REQ_BP                        	12
#define AR_PI_DB_PCIE_CNTL_STS_1_NO_SNOOP_EN_BP                         	11
#define AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_EN_BP                        	10
#define AR_PI_DB_PCIE_CNTL_STS_1_PHANTOM_FUNC_EN_BP                     	9
#define AR_PI_DB_PCIE_CNTL_STS_1_TAG_FIELD_EN_BP                        	8
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_PAYLOAD_BP                         	5
#define AR_PI_DB_PCIE_CNTL_STS_1_RELAX_ORD_EN_BP                        	4
#define AR_PI_DB_PCIE_CNTL_STS_1_UNS_REQ_REP_EN_BP                      	3
#define AR_PI_DB_PCIE_CNTL_STS_1_FATAL_REP_EN_BP                        	2
#define AR_PI_DB_PCIE_CNTL_STS_1_NONFATAL_REP_EN_BP                     	1
#define AR_PI_DB_PCIE_CNTL_STS_1_COR_ERR_REP_EN_BP                      	0
#define AR_PI_DB_PCIE_CNTL_STS_1_PORT_NUMBER_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_55_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_1_ASPM_OPTIONALITY_COMPLIANCE_QW         	0
#define AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_53_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_1_DATA_LINK_REPORT_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_1_SURP_DOWN_REPORT_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_1_CLK_PWR_MNGT_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_1_L1_EXIT_LAT_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_1_LOS_EXIT_LAT_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_1_ACTIVE_PWR_STATE_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_WIDTH_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_SPEED_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_31_22_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_1_TRANS_PENDING_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_1_UNSUP_REQ_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_1_FATAL_ERR_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_1_NON_FATAL_ERR_DET_QW                   	0
#define AR_PI_DB_PCIE_CNTL_STS_1_CORR_ERR_DET_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_1_FUNC_LEVEL_RESET_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_READ_REQ_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_1_NO_SNOOP_EN_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_1_PHANTOM_FUNC_EN_QW                     	0
#define AR_PI_DB_PCIE_CNTL_STS_1_TAG_FIELD_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_1_MAX_PAYLOAD_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_1_RELAX_ORD_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_1_UNS_REQ_REP_EN_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_1_FATAL_REP_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_1_NONFATAL_REP_EN_QW                     	0
#define AR_PI_DB_PCIE_CNTL_STS_1_COR_ERR_REP_EN_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_CNTL_STS_2_1 DEFINES
 */
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_63_36_MASK                  	0xfffffff000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_SUP_LINK_SPEED_MASK                  	0x0000000e00000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_32_MASK                     	0x0000000100000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_31_15_MASK                  	0x00000000ffff8000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_OBFF_EN_MASK                         	0x0000000000006000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_12_11_MASK                  	0x0000000000001800ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_LTR_MECH_EN_MASK                     	0x0000000000000400ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_COMP_MASK                        	0x0000000000000200ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_REQ_EN_MASK                      	0x0000000000000100ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_7_MASK                      	0x0000000000000080ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_ATOM_OP_REQ_EN_MASK                  	0x0000000000000040ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_5_MASK                      	0x0000000000000020ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_DIS_MASK                 	0x0000000000000010ull
#define AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_MASK                     	0x000000000000000full
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_63_36_BP                    	36
#define AR_PI_DB_PCIE_CNTL_STS_2_1_SUP_LINK_SPEED_BP                    	33
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_32_BP                       	32
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_31_15_BP                    	15
#define AR_PI_DB_PCIE_CNTL_STS_2_1_OBFF_EN_BP                           	13
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_12_11_BP                    	11
#define AR_PI_DB_PCIE_CNTL_STS_2_1_LTR_MECH_EN_BP                       	10
#define AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_COMP_BP                          	9
#define AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_REQ_EN_BP                        	8
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_7_BP                        	7
#define AR_PI_DB_PCIE_CNTL_STS_2_1_ATOM_OP_REQ_EN_BP                    	6
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_5_BP                        	5
#define AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_DIS_BP                   	4
#define AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_BP                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_63_36_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_SUP_LINK_SPEED_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_32_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_31_15_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_OBFF_EN_QW                           	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_12_11_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_LTR_MECH_EN_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_COMP_QW                          	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_REQ_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_7_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_ATOM_OP_REQ_EN_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_5_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_DIS_QW                   	0
#define AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_TPH_REQ_CNTL_1 DEFINES
 */
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_63_41_MASK                	0xfffffe0000000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_TPH_REQ_EN_MASK                    	0x0000010000000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_39_35_MASK                	0x000000f800000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_MODE_MASK                       	0x0000000700000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_31_27_MASK                	0x00000000f8000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_SIZE_MASK                 	0x0000000007ff0000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_15_11_MASK                	0x000000000000f800ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_MASK                  	0x0000000000000600ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_EXT_TPH_REG_SUP_MASK               	0x0000000000000100ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_WA_MASK               	0x0000000000000300ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_7_3_MASK                  	0x00000000000000f8ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_DEV_SPECMODE_SUP_MASK              	0x0000000000000004ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_INT_VECTMODE_SUP_MASK              	0x0000000000000002ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_NO_ST_MODE_SUP_MASK                	0x0000000000000001ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_63_41_BP                  	41
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_TPH_REQ_EN_BP                      	40
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_39_35_BP                  	35
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_MODE_BP                         	32
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_31_27_BP                  	27
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_SIZE_BP                   	16
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_15_11_BP                  	11
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_BP                    	9
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_EXT_TPH_REG_SUP_BP                 	8
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_WA_BP                 	8
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_7_3_BP                    	3
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_DEV_SPECMODE_SUP_BP                	2
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_INT_VECTMODE_SUP_BP                	1
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_NO_ST_MODE_SUP_BP                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_63_41_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_TPH_REQ_EN_QW                      	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_39_35_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_MODE_QW                         	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_31_27_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_SIZE_QW                   	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_15_11_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_QW                    	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_EXT_TPH_REG_SUP_QW                 	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_WA_QW                 	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_7_3_QW                    	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_DEV_SPECMODE_SUP_QW                	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_INT_VECTMODE_SUP_QW                	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_1_NO_ST_MODE_SUP_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_F2_DB_REV_ID_CLASS_CODE DEFINES
 */
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_BIST_MASK                      	0xff00000000000000ull
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK               	0x00ff000000000000ull
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK             	0x0000ff0000000000ull
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK           	0x000000ff00000000ull
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK                	0x00000000ffffff00ull
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK               	0x00000000000000ffull
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_BIST_BP                        	56
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP                 	48
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP               	40
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP             	32
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP                  	8
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_REVISION_ID_BP                 	0
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_BIST_QW                        	0
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_HEADER_TYPE_QW                 	0
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_QW               	0
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_QW             	0
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CLASS_CODE_QW                  	0
#define AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_REVISION_ID_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_F2_BAR_0_1 DEFINES
 */
#define AR_PI_DB_F2_BAR_0_1_BASE_ADDR_HIGH_MASK                         	0xffffffff00000000ull
#define AR_PI_DB_F2_BAR_0_1_WRITEABLE_8K_MASK                           	0xffffffffffffe000ull
#define AR_PI_DB_F2_BAR_0_1_BASE_ADDR_MASK                              	0xffffffffffffff00ull
#define AR_PI_DB_F2_BAR_0_1_READ_ONLY_8K_MASK                           	0x0000000000001f00ull
#define AR_PI_DB_F2_BAR_0_1_BASE_ADDR_LOW_MASK                          	0x00000000ffffff00ull
#define AR_PI_DB_F2_BAR_0_1_PREFETCHABILITY_MASK                        	0x0000000000000008ull
#define AR_PI_DB_F2_BAR_0_1_SIZE_MASK                                   	0x0000000000000004ull
#define AR_PI_DB_F2_BAR_0_1_MEM_SPACE_MASK                              	0x0000000000000001ull
#define AR_PI_DB_F2_BAR_0_1_BASE_ADDR_HIGH_BP                           	32
#define AR_PI_DB_F2_BAR_0_1_WRITEABLE_8K_BP                             	13
#define AR_PI_DB_F2_BAR_0_1_BASE_ADDR_BP                                	8
#define AR_PI_DB_F2_BAR_0_1_READ_ONLY_8K_BP                             	8
#define AR_PI_DB_F2_BAR_0_1_BASE_ADDR_LOW_BP                            	8
#define AR_PI_DB_F2_BAR_0_1_PREFETCHABILITY_BP                          	3
#define AR_PI_DB_F2_BAR_0_1_SIZE_BP                                     	2
#define AR_PI_DB_F2_BAR_0_1_MEM_SPACE_BP                                	0
#define AR_PI_DB_F2_BAR_0_1_BASE_ADDR_HIGH_QW                           	0
#define AR_PI_DB_F2_BAR_0_1_WRITEABLE_8K_QW                             	0
#define AR_PI_DB_F2_BAR_0_1_BASE_ADDR_QW                                	0
#define AR_PI_DB_F2_BAR_0_1_READ_ONLY_8K_QW                             	0
#define AR_PI_DB_F2_BAR_0_1_BASE_ADDR_LOW_QW                            	0
#define AR_PI_DB_F2_BAR_0_1_PREFETCHABILITY_QW                          	0
#define AR_PI_DB_F2_BAR_0_1_SIZE_QW                                     	0
#define AR_PI_DB_F2_BAR_0_1_MEM_SPACE_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_MSI_X_CNTL_2C_2 DEFINES
 */
#define AR_PI_DB_MSI_X_CNTL_2C_2_TABLE_OFFSET_MASK                      	0xfffffff800000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_2_BAR_INDICATOR_EG_MASK                  	0x0000000700000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_ENABLE_MASK                      	0x0000000080000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_2_FUNCTION_MASK_MASK                     	0x0000000040000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_TABLE_SIZE_MASK                  	0x0000000007ff0000ull
#define AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_PTR_MASK                    	0x000000000000ff00ull
#define AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_ID_MASK                     	0x00000000000000ffull
#define AR_PI_DB_MSI_X_CNTL_2C_2_TABLE_OFFSET_BP                        	35
#define AR_PI_DB_MSI_X_CNTL_2C_2_BAR_INDICATOR_EG_BP                    	32
#define AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_ENABLE_BP                        	31
#define AR_PI_DB_MSI_X_CNTL_2C_2_FUNCTION_MASK_BP                       	30
#define AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_TABLE_SIZE_BP                    	16
#define AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_PTR_BP                      	8
#define AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_ID_BP                       	0
#define AR_PI_DB_MSI_X_CNTL_2C_2_TABLE_OFFSET_QW                        	0
#define AR_PI_DB_MSI_X_CNTL_2C_2_BAR_INDICATOR_EG_QW                    	0
#define AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_ENABLE_QW                        	0
#define AR_PI_DB_MSI_X_CNTL_2C_2_FUNCTION_MASK_QW                       	0
#define AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_TABLE_SIZE_QW                    	0
#define AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_PTR_QW                      	0
#define AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_ID_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_MSI_X_PENDI_2E_2 DEFINES
 */
#define AR_PI_DB_MSI_X_PENDI_2E_2_PBA_OFFSET_MASK                       	0x00000000fffffff8ull
#define AR_PI_DB_MSI_X_PENDI_2E_2_BAR_INDICATOR_REG_MASK                	0x0000000000000007ull
#define AR_PI_DB_MSI_X_PENDI_2E_2_PBA_OFFSET_BP                         	3
#define AR_PI_DB_MSI_X_PENDI_2E_2_BAR_INDICATOR_REG_BP                  	0
#define AR_PI_DB_MSI_X_PENDI_2E_2_PBA_OFFSET_QW                         	0
#define AR_PI_DB_MSI_X_PENDI_2E_2_BAR_INDICATOR_REG_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_CNTL_STS_2 DEFINES
 */
#define AR_PI_DB_PCIE_CNTL_STS_2_PORT_NUMBER_MASK                       	0xff00000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_55_MASK                       	0x0080000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_ASPM_OPTIONALITY_COMPLIANCE_MASK       	0x0040000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_53_MASK                       	0x0020000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_DATA_LINK_REPORT_MASK                  	0x0010000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_SURP_DOWN_REPORT_MASK                  	0x0008000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_CLK_PWR_MNGT_MASK                      	0x0004000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_L1_EXIT_LAT_MASK                       	0x0003800000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_LOS_EXIT_LAT_MASK                      	0x0000700000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_ACTIVE_PWR_STATE_MASK                  	0x00000c0000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_WIDTH_MASK                    	0x000003f000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_SPEED_MASK                    	0x0000000f00000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_31_22_MASK                    	0x00000000ffc00000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_TRANS_PENDING_MASK                     	0x0000000000200000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_DET_MASK                     	0x0000000000100000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_UNSUP_REQ_DET_MASK                     	0x0000000000080000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_FATAL_ERR_DET_MASK                     	0x0000000000040000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_NON_FATAL_ERR_DET_MASK                 	0x0000000000020000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_CORR_ERR_DET_MASK                      	0x0000000000010000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_FUNC_LEVEL_RESET_MASK                  	0x0000000000008000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_READ_REQ_MASK                      	0x0000000000007000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_NO_SNOOP_EN_MASK                       	0x0000000000000800ull
#define AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_EN_MASK                      	0x0000000000000400ull
#define AR_PI_DB_PCIE_CNTL_STS_2_PHANTOM_FUNC_EN_MASK                   	0x0000000000000200ull
#define AR_PI_DB_PCIE_CNTL_STS_2_TAG_FIELD_EN_MASK                      	0x0000000000000100ull
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_PAYLOAD_MASK                       	0x00000000000000e0ull
#define AR_PI_DB_PCIE_CNTL_STS_2_RELAX_ORD_EN_MASK                      	0x0000000000000010ull
#define AR_PI_DB_PCIE_CNTL_STS_2_UNS_REQ_REP_EN_MASK                    	0x0000000000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_2_FATAL_REP_EN_MASK                      	0x0000000000000004ull
#define AR_PI_DB_PCIE_CNTL_STS_2_NONFATAL_REP_EN_MASK                   	0x0000000000000002ull
#define AR_PI_DB_PCIE_CNTL_STS_2_COR_ERR_REP_EN_MASK                    	0x0000000000000001ull
#define AR_PI_DB_PCIE_CNTL_STS_2_PORT_NUMBER_BP                         	56
#define AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_55_BP                         	55
#define AR_PI_DB_PCIE_CNTL_STS_2_ASPM_OPTIONALITY_COMPLIANCE_BP         	54
#define AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_53_BP                         	53
#define AR_PI_DB_PCIE_CNTL_STS_2_DATA_LINK_REPORT_BP                    	52
#define AR_PI_DB_PCIE_CNTL_STS_2_SURP_DOWN_REPORT_BP                    	51
#define AR_PI_DB_PCIE_CNTL_STS_2_CLK_PWR_MNGT_BP                        	50
#define AR_PI_DB_PCIE_CNTL_STS_2_L1_EXIT_LAT_BP                         	47
#define AR_PI_DB_PCIE_CNTL_STS_2_LOS_EXIT_LAT_BP                        	44
#define AR_PI_DB_PCIE_CNTL_STS_2_ACTIVE_PWR_STATE_BP                    	42
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_WIDTH_BP                      	36
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_SPEED_BP                      	32
#define AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_31_22_BP                      	22
#define AR_PI_DB_PCIE_CNTL_STS_2_TRANS_PENDING_BP                       	21
#define AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_DET_BP                       	20
#define AR_PI_DB_PCIE_CNTL_STS_2_UNSUP_REQ_DET_BP                       	19
#define AR_PI_DB_PCIE_CNTL_STS_2_FATAL_ERR_DET_BP                       	18
#define AR_PI_DB_PCIE_CNTL_STS_2_NON_FATAL_ERR_DET_BP                   	17
#define AR_PI_DB_PCIE_CNTL_STS_2_CORR_ERR_DET_BP                        	16
#define AR_PI_DB_PCIE_CNTL_STS_2_FUNC_LEVEL_RESET_BP                    	15
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_READ_REQ_BP                        	12
#define AR_PI_DB_PCIE_CNTL_STS_2_NO_SNOOP_EN_BP                         	11
#define AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_EN_BP                        	10
#define AR_PI_DB_PCIE_CNTL_STS_2_PHANTOM_FUNC_EN_BP                     	9
#define AR_PI_DB_PCIE_CNTL_STS_2_TAG_FIELD_EN_BP                        	8
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_PAYLOAD_BP                         	5
#define AR_PI_DB_PCIE_CNTL_STS_2_RELAX_ORD_EN_BP                        	4
#define AR_PI_DB_PCIE_CNTL_STS_2_UNS_REQ_REP_EN_BP                      	3
#define AR_PI_DB_PCIE_CNTL_STS_2_FATAL_REP_EN_BP                        	2
#define AR_PI_DB_PCIE_CNTL_STS_2_NONFATAL_REP_EN_BP                     	1
#define AR_PI_DB_PCIE_CNTL_STS_2_COR_ERR_REP_EN_BP                      	0
#define AR_PI_DB_PCIE_CNTL_STS_2_PORT_NUMBER_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_55_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_2_ASPM_OPTIONALITY_COMPLIANCE_QW         	0
#define AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_53_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_2_DATA_LINK_REPORT_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_SURP_DOWN_REPORT_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_CLK_PWR_MNGT_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_L1_EXIT_LAT_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_2_LOS_EXIT_LAT_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_ACTIVE_PWR_STATE_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_WIDTH_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_SPEED_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_31_22_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_2_TRANS_PENDING_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_UNSUP_REQ_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_FATAL_ERR_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_NON_FATAL_ERR_DET_QW                   	0
#define AR_PI_DB_PCIE_CNTL_STS_2_CORR_ERR_DET_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_FUNC_LEVEL_RESET_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_READ_REQ_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_NO_SNOOP_EN_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_PHANTOM_FUNC_EN_QW                     	0
#define AR_PI_DB_PCIE_CNTL_STS_2_TAG_FIELD_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_MAX_PAYLOAD_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_2_RELAX_ORD_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_UNS_REQ_REP_EN_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_2_FATAL_REP_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_NONFATAL_REP_EN_QW                     	0
#define AR_PI_DB_PCIE_CNTL_STS_2_COR_ERR_REP_EN_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_CNTL_STS_2_2 DEFINES
 */
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_63_36_MASK                  	0xfffffff000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_SUP_LINK_SPEED_MASK                  	0x0000000e00000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_32_MASK                     	0x0000000100000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_31_15_MASK                  	0x00000000ffff8000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_OBFF_EN_MASK                         	0x0000000000006000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_12_11_MASK                  	0x0000000000001800ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_LTR_MECH_EN_MASK                     	0x0000000000000400ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_COMP_MASK                        	0x0000000000000200ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_REQ_EN_MASK                      	0x0000000000000100ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_7_MASK                      	0x0000000000000080ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_ATOM_OP_REQ_EN_MASK                  	0x0000000000000040ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_5_MASK                      	0x0000000000000020ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_DIS_MASK                 	0x0000000000000010ull
#define AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_MASK                     	0x000000000000000full
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_63_36_BP                    	36
#define AR_PI_DB_PCIE_CNTL_STS_2_2_SUP_LINK_SPEED_BP                    	33
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_32_BP                       	32
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_31_15_BP                    	15
#define AR_PI_DB_PCIE_CNTL_STS_2_2_OBFF_EN_BP                           	13
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_12_11_BP                    	11
#define AR_PI_DB_PCIE_CNTL_STS_2_2_LTR_MECH_EN_BP                       	10
#define AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_COMP_BP                          	9
#define AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_REQ_EN_BP                        	8
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_7_BP                        	7
#define AR_PI_DB_PCIE_CNTL_STS_2_2_ATOM_OP_REQ_EN_BP                    	6
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_5_BP                        	5
#define AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_DIS_BP                   	4
#define AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_BP                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_63_36_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_SUP_LINK_SPEED_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_32_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_31_15_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_OBFF_EN_QW                           	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_12_11_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_LTR_MECH_EN_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_COMP_QW                          	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_REQ_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_7_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_ATOM_OP_REQ_EN_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_5_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_DIS_QW                   	0
#define AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_TPH_REQ_CNTL_2 DEFINES
 */
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_63_41_MASK                	0xfffffe0000000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_TPH_REQ_EN_MASK                    	0x0000010000000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_39_35_MASK                	0x000000f800000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_MODE_MASK                       	0x0000000700000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_31_27_MASK                	0x00000000f8000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_SIZE_MASK                 	0x0000000007ff0000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_15_11_MASK                	0x000000000000f800ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_MASK                  	0x0000000000000600ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_EXT_TPH_REG_SUP_MASK               	0x0000000000000100ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_WA_MASK               	0x0000000000000300ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_7_3_MASK                  	0x00000000000000f8ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_DEV_SPECMODE_SUP_MASK              	0x0000000000000004ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_INT_VECTMODE_SUP_MASK              	0x0000000000000002ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_NO_ST_MODE_SUP_MASK                	0x0000000000000001ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_63_41_BP                  	41
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_TPH_REQ_EN_BP                      	40
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_39_35_BP                  	35
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_MODE_BP                         	32
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_31_27_BP                  	27
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_SIZE_BP                   	16
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_15_11_BP                  	11
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_BP                    	9
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_EXT_TPH_REG_SUP_BP                 	8
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_WA_BP                 	8
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_7_3_BP                    	3
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_DEV_SPECMODE_SUP_BP                	2
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_INT_VECTMODE_SUP_BP                	1
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_NO_ST_MODE_SUP_BP                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_63_41_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_TPH_REQ_EN_QW                      	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_39_35_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_MODE_QW                         	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_31_27_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_SIZE_QW                   	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_15_11_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_QW                    	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_EXT_TPH_REG_SUP_QW                 	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_WA_QW                 	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_7_3_QW                    	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_DEV_SPECMODE_SUP_QW                	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_INT_VECTMODE_SUP_QW                	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_2_NO_ST_MODE_SUP_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_F3_DB_REV_ID_CLASS_CODE DEFINES
 */
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_BIST_MASK                      	0xff00000000000000ull
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK               	0x00ff000000000000ull
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK             	0x0000ff0000000000ull
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK           	0x000000ff00000000ull
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK                	0x00000000ffffff00ull
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK               	0x00000000000000ffull
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_BIST_BP                        	56
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP                 	48
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP               	40
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP             	32
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP                  	8
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_REVISION_ID_BP                 	0
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_BIST_QW                        	0
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_HEADER_TYPE_QW                 	0
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_QW               	0
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_QW             	0
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CLASS_CODE_QW                  	0
#define AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_REVISION_ID_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_F3_BAR_0_1 DEFINES
 */
#define AR_PI_DB_F3_BAR_0_1_BASE_ADDR_HIGH_MASK                         	0xffffffff00000000ull
#define AR_PI_DB_F3_BAR_0_1_WRITEABLE_8K_MASK                           	0xffffffffffffe000ull
#define AR_PI_DB_F3_BAR_0_1_BASE_ADDR_MASK                              	0xffffffffffffff00ull
#define AR_PI_DB_F3_BAR_0_1_READ_ONLY_8K_MASK                           	0x0000000000001f00ull
#define AR_PI_DB_F3_BAR_0_1_BASE_ADDR_LOW_MASK                          	0x00000000ffffff00ull
#define AR_PI_DB_F3_BAR_0_1_PREFETCHABILITY_MASK                        	0x0000000000000008ull
#define AR_PI_DB_F3_BAR_0_1_SIZE_MASK                                   	0x0000000000000004ull
#define AR_PI_DB_F3_BAR_0_1_MEM_SPACE_MASK                              	0x0000000000000001ull
#define AR_PI_DB_F3_BAR_0_1_BASE_ADDR_HIGH_BP                           	32
#define AR_PI_DB_F3_BAR_0_1_WRITEABLE_8K_BP                             	13
#define AR_PI_DB_F3_BAR_0_1_BASE_ADDR_BP                                	8
#define AR_PI_DB_F3_BAR_0_1_READ_ONLY_8K_BP                             	8
#define AR_PI_DB_F3_BAR_0_1_BASE_ADDR_LOW_BP                            	8
#define AR_PI_DB_F3_BAR_0_1_PREFETCHABILITY_BP                          	3
#define AR_PI_DB_F3_BAR_0_1_SIZE_BP                                     	2
#define AR_PI_DB_F3_BAR_0_1_MEM_SPACE_BP                                	0
#define AR_PI_DB_F3_BAR_0_1_BASE_ADDR_HIGH_QW                           	0
#define AR_PI_DB_F3_BAR_0_1_WRITEABLE_8K_QW                             	0
#define AR_PI_DB_F3_BAR_0_1_BASE_ADDR_QW                                	0
#define AR_PI_DB_F3_BAR_0_1_READ_ONLY_8K_QW                             	0
#define AR_PI_DB_F3_BAR_0_1_BASE_ADDR_LOW_QW                            	0
#define AR_PI_DB_F3_BAR_0_1_PREFETCHABILITY_QW                          	0
#define AR_PI_DB_F3_BAR_0_1_SIZE_QW                                     	0
#define AR_PI_DB_F3_BAR_0_1_MEM_SPACE_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_MSI_X_CNTL_2C_3 DEFINES
 */
#define AR_PI_DB_MSI_X_CNTL_2C_3_TABLE_OFFSET_MASK                      	0xfffffff800000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_3_BAR_INDICATOR_EG_MASK                  	0x0000000700000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_ENABLE_MASK                      	0x0000000080000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_3_FUNCTION_MASK_MASK                     	0x0000000040000000ull
#define AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_TABLE_SIZE_MASK                  	0x0000000007ff0000ull
#define AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_PTR_MASK                    	0x000000000000ff00ull
#define AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_ID_MASK                     	0x00000000000000ffull
#define AR_PI_DB_MSI_X_CNTL_2C_3_TABLE_OFFSET_BP                        	35
#define AR_PI_DB_MSI_X_CNTL_2C_3_BAR_INDICATOR_EG_BP                    	32
#define AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_ENABLE_BP                        	31
#define AR_PI_DB_MSI_X_CNTL_2C_3_FUNCTION_MASK_BP                       	30
#define AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_TABLE_SIZE_BP                    	16
#define AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_PTR_BP                      	8
#define AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_ID_BP                       	0
#define AR_PI_DB_MSI_X_CNTL_2C_3_TABLE_OFFSET_QW                        	0
#define AR_PI_DB_MSI_X_CNTL_2C_3_BAR_INDICATOR_EG_QW                    	0
#define AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_ENABLE_QW                        	0
#define AR_PI_DB_MSI_X_CNTL_2C_3_FUNCTION_MASK_QW                       	0
#define AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_TABLE_SIZE_QW                    	0
#define AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_PTR_QW                      	0
#define AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_ID_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_MSI_X_PENDI_2E_3 DEFINES
 */
#define AR_PI_DB_MSI_X_PENDI_2E_3_PBA_OFFSET_MASK                       	0x00000000fffffff8ull
#define AR_PI_DB_MSI_X_PENDI_2E_3_BAR_INDICATOR_REG_MASK                	0x0000000000000007ull
#define AR_PI_DB_MSI_X_PENDI_2E_3_PBA_OFFSET_BP                         	3
#define AR_PI_DB_MSI_X_PENDI_2E_3_BAR_INDICATOR_REG_BP                  	0
#define AR_PI_DB_MSI_X_PENDI_2E_3_PBA_OFFSET_QW                         	0
#define AR_PI_DB_MSI_X_PENDI_2E_3_BAR_INDICATOR_REG_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_CNTL_STS_3 DEFINES
 */
#define AR_PI_DB_PCIE_CNTL_STS_3_PORT_NUMBER_MASK                       	0xff00000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_55_MASK                       	0x0080000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_ASPM_OPTIONALITY_COMPLIANCE_MASK       	0x0040000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_53_MASK                       	0x0020000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_DATA_LINK_REPORT_MASK                  	0x0010000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_SURP_DOWN_REPORT_MASK                  	0x0008000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_CLK_PWR_MNGT_MASK                      	0x0004000000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_L1_EXIT_LAT_MASK                       	0x0003800000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_LOS_EXIT_LAT_MASK                      	0x0000700000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_ACTIVE_PWR_STATE_MASK                  	0x00000c0000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_WIDTH_MASK                    	0x000003f000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_SPEED_MASK                    	0x0000000f00000000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_31_22_MASK                    	0x00000000ffc00000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_TRANS_PENDING_MASK                     	0x0000000000200000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_DET_MASK                     	0x0000000000100000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_UNSUP_REQ_DET_MASK                     	0x0000000000080000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_FATAL_ERR_DET_MASK                     	0x0000000000040000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_NON_FATAL_ERR_DET_MASK                 	0x0000000000020000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_CORR_ERR_DET_MASK                      	0x0000000000010000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_FUNC_LEVEL_RESET_MASK                  	0x0000000000008000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_READ_REQ_MASK                      	0x0000000000007000ull
#define AR_PI_DB_PCIE_CNTL_STS_3_NO_SNOOP_EN_MASK                       	0x0000000000000800ull
#define AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_EN_MASK                      	0x0000000000000400ull
#define AR_PI_DB_PCIE_CNTL_STS_3_PHANTOM_FUNC_EN_MASK                   	0x0000000000000200ull
#define AR_PI_DB_PCIE_CNTL_STS_3_TAG_FIELD_EN_MASK                      	0x0000000000000100ull
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_PAYLOAD_MASK                       	0x00000000000000e0ull
#define AR_PI_DB_PCIE_CNTL_STS_3_RELAX_ORD_EN_MASK                      	0x0000000000000010ull
#define AR_PI_DB_PCIE_CNTL_STS_3_UNS_REQ_REP_EN_MASK                    	0x0000000000000008ull
#define AR_PI_DB_PCIE_CNTL_STS_3_FATAL_REP_EN_MASK                      	0x0000000000000004ull
#define AR_PI_DB_PCIE_CNTL_STS_3_NONFATAL_REP_EN_MASK                   	0x0000000000000002ull
#define AR_PI_DB_PCIE_CNTL_STS_3_COR_ERR_REP_EN_MASK                    	0x0000000000000001ull
#define AR_PI_DB_PCIE_CNTL_STS_3_PORT_NUMBER_BP                         	56
#define AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_55_BP                         	55
#define AR_PI_DB_PCIE_CNTL_STS_3_ASPM_OPTIONALITY_COMPLIANCE_BP         	54
#define AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_53_BP                         	53
#define AR_PI_DB_PCIE_CNTL_STS_3_DATA_LINK_REPORT_BP                    	52
#define AR_PI_DB_PCIE_CNTL_STS_3_SURP_DOWN_REPORT_BP                    	51
#define AR_PI_DB_PCIE_CNTL_STS_3_CLK_PWR_MNGT_BP                        	50
#define AR_PI_DB_PCIE_CNTL_STS_3_L1_EXIT_LAT_BP                         	47
#define AR_PI_DB_PCIE_CNTL_STS_3_LOS_EXIT_LAT_BP                        	44
#define AR_PI_DB_PCIE_CNTL_STS_3_ACTIVE_PWR_STATE_BP                    	42
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_WIDTH_BP                      	36
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_SPEED_BP                      	32
#define AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_31_22_BP                      	22
#define AR_PI_DB_PCIE_CNTL_STS_3_TRANS_PENDING_BP                       	21
#define AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_DET_BP                       	20
#define AR_PI_DB_PCIE_CNTL_STS_3_UNSUP_REQ_DET_BP                       	19
#define AR_PI_DB_PCIE_CNTL_STS_3_FATAL_ERR_DET_BP                       	18
#define AR_PI_DB_PCIE_CNTL_STS_3_NON_FATAL_ERR_DET_BP                   	17
#define AR_PI_DB_PCIE_CNTL_STS_3_CORR_ERR_DET_BP                        	16
#define AR_PI_DB_PCIE_CNTL_STS_3_FUNC_LEVEL_RESET_BP                    	15
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_READ_REQ_BP                        	12
#define AR_PI_DB_PCIE_CNTL_STS_3_NO_SNOOP_EN_BP                         	11
#define AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_EN_BP                        	10
#define AR_PI_DB_PCIE_CNTL_STS_3_PHANTOM_FUNC_EN_BP                     	9
#define AR_PI_DB_PCIE_CNTL_STS_3_TAG_FIELD_EN_BP                        	8
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_PAYLOAD_BP                         	5
#define AR_PI_DB_PCIE_CNTL_STS_3_RELAX_ORD_EN_BP                        	4
#define AR_PI_DB_PCIE_CNTL_STS_3_UNS_REQ_REP_EN_BP                      	3
#define AR_PI_DB_PCIE_CNTL_STS_3_FATAL_REP_EN_BP                        	2
#define AR_PI_DB_PCIE_CNTL_STS_3_NONFATAL_REP_EN_BP                     	1
#define AR_PI_DB_PCIE_CNTL_STS_3_COR_ERR_REP_EN_BP                      	0
#define AR_PI_DB_PCIE_CNTL_STS_3_PORT_NUMBER_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_55_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_3_ASPM_OPTIONALITY_COMPLIANCE_QW         	0
#define AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_53_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_3_DATA_LINK_REPORT_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_3_SURP_DOWN_REPORT_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_3_CLK_PWR_MNGT_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_3_L1_EXIT_LAT_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_3_LOS_EXIT_LAT_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_3_ACTIVE_PWR_STATE_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_WIDTH_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_SPEED_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_31_22_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_3_TRANS_PENDING_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_3_UNSUP_REQ_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_3_FATAL_ERR_DET_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_3_NON_FATAL_ERR_DET_QW                   	0
#define AR_PI_DB_PCIE_CNTL_STS_3_CORR_ERR_DET_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_3_FUNC_LEVEL_RESET_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_READ_REQ_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_3_NO_SNOOP_EN_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_3_PHANTOM_FUNC_EN_QW                     	0
#define AR_PI_DB_PCIE_CNTL_STS_3_TAG_FIELD_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_3_MAX_PAYLOAD_QW                         	0
#define AR_PI_DB_PCIE_CNTL_STS_3_RELAX_ORD_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_3_UNS_REQ_REP_EN_QW                      	0
#define AR_PI_DB_PCIE_CNTL_STS_3_FATAL_REP_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_3_NONFATAL_REP_EN_QW                     	0
#define AR_PI_DB_PCIE_CNTL_STS_3_COR_ERR_REP_EN_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_CNTL_STS_2_3 DEFINES
 */
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_63_36_MASK                  	0xfffffff000000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_SUP_LINK_SPEED_MASK                  	0x0000000e00000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_32_MASK                     	0x0000000100000000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_31_15_MASK                  	0x00000000ffff8000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_OBFF_EN_MASK                         	0x0000000000006000ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_12_11_MASK                  	0x0000000000001800ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_LTR_MECH_EN_MASK                     	0x0000000000000400ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_COMP_MASK                        	0x0000000000000200ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_REQ_EN_MASK                      	0x0000000000000100ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_7_MASK                      	0x0000000000000080ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_ATOM_OP_REQ_EN_MASK                  	0x0000000000000040ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_5_MASK                      	0x0000000000000020ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_DIS_MASK                 	0x0000000000000010ull
#define AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_MASK                     	0x000000000000000full
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_63_36_BP                    	36
#define AR_PI_DB_PCIE_CNTL_STS_2_3_SUP_LINK_SPEED_BP                    	33
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_32_BP                       	32
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_31_15_BP                    	15
#define AR_PI_DB_PCIE_CNTL_STS_2_3_OBFF_EN_BP                           	13
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_12_11_BP                    	11
#define AR_PI_DB_PCIE_CNTL_STS_2_3_LTR_MECH_EN_BP                       	10
#define AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_COMP_BP                          	9
#define AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_REQ_EN_BP                        	8
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_7_BP                        	7
#define AR_PI_DB_PCIE_CNTL_STS_2_3_ATOM_OP_REQ_EN_BP                    	6
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_5_BP                        	5
#define AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_DIS_BP                   	4
#define AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_BP                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_63_36_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_SUP_LINK_SPEED_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_32_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_31_15_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_OBFF_EN_QW                           	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_12_11_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_LTR_MECH_EN_QW                       	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_COMP_QW                          	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_REQ_EN_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_7_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_ATOM_OP_REQ_EN_QW                    	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_5_QW                        	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_DIS_QW                   	0
#define AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PCIE_TPH_REQ_CNTL_3 DEFINES
 */
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_63_41_MASK                	0xfffffe0000000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_TPH_REQ_EN_MASK                    	0x0000010000000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_39_35_MASK                	0x000000f800000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_MODE_MASK                       	0x0000000700000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_31_27_MASK                	0x00000000f8000000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_SIZE_MASK                 	0x0000000007ff0000ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_15_11_MASK                	0x000000000000f800ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_MASK                  	0x0000000000000600ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_EXT_TPH_REG_SUP_MASK               	0x0000000000000100ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_WA_MASK               	0x0000000000000300ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_7_3_MASK                  	0x00000000000000f8ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_DEV_SPECMODE_SUP_MASK              	0x0000000000000004ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_INT_VECTMODE_SUP_MASK              	0x0000000000000002ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_NO_ST_MODE_SUP_MASK                	0x0000000000000001ull
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_63_41_BP                  	41
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_TPH_REQ_EN_BP                      	40
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_39_35_BP                  	35
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_MODE_BP                         	32
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_31_27_BP                  	27
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_SIZE_BP                   	16
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_15_11_BP                  	11
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_BP                    	9
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_EXT_TPH_REG_SUP_BP                 	8
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_WA_BP                 	8
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_7_3_BP                    	3
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_DEV_SPECMODE_SUP_BP                	2
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_INT_VECTMODE_SUP_BP                	1
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_NO_ST_MODE_SUP_BP                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_63_41_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_TPH_REQ_EN_QW                      	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_39_35_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_MODE_QW                         	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_31_27_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_SIZE_QW                   	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_15_11_QW                  	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_QW                    	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_EXT_TPH_REG_SUP_QW                 	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_WA_QW                 	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_7_3_QW                    	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_DEV_SPECMODE_SUP_QW                	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_INT_VECTMODE_SUP_QW                	0
#define AR_PI_DB_PCIE_TPH_REQ_CNTL_3_NO_ST_MODE_SUP_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PHY_LAYER_CFG DEFINES
 */
#define AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_8_MASK                     	0xff00000000000000ull
#define AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_5_MASK                     	0x00ff000000000000ull
#define AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_2_5_MASK                   	0x0000ff0000000000ull
#define AR_PI_DB_PHY_LAYER_CFG_RESERVED_39_32_MASK                      	0x000000ff00000000ull
#define AR_PI_DB_PHY_LAYER_CFG_MASTER_LB_ENABLE_MASK                    	0x0000000080000000ull
#define AR_PI_DB_PHY_LAYER_CFG_RESERVED_30_MASK                         	0x0000000040000000ull
#define AR_PI_DB_PHY_LAYER_CFG_LTSSM_STATE_MASK                         	0x000000003f000000ull
#define AR_PI_DB_PHY_LAYER_CFG_RECV_LINK_ID_MASK                        	0x0000000000ff0000ull
#define AR_PI_DB_PHY_LAYER_CFG_RECV_FTS_CNT_2_5_MASK                    	0x000000000000ff00ull
#define AR_PI_DB_PHY_LAYER_CFG_TX_SWING_SETTING_MASK                    	0x0000000000000080ull
#define AR_PI_DB_PHY_LAYER_CFG_ALL_PHY_ERR_RPT_MASK                     	0x0000000000000040ull
#define AR_PI_DB_PHY_LAYER_CFG_NEG_SPEED_MASK                           	0x0000000000000030ull
#define AR_PI_DB_PHY_LAYER_CFG_NEG_LANE_COUNT_MASK                      	0x000000000000000eull
#define AR_PI_DB_PHY_LAYER_CFG_LINK_STATUS_MASK                         	0x0000000000000001ull
#define AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_8_BP                       	56
#define AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_5_BP                       	48
#define AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_2_5_BP                     	40
#define AR_PI_DB_PHY_LAYER_CFG_RESERVED_39_32_BP                        	32
#define AR_PI_DB_PHY_LAYER_CFG_MASTER_LB_ENABLE_BP                      	31
#define AR_PI_DB_PHY_LAYER_CFG_RESERVED_30_BP                           	30
#define AR_PI_DB_PHY_LAYER_CFG_LTSSM_STATE_BP                           	24
#define AR_PI_DB_PHY_LAYER_CFG_RECV_LINK_ID_BP                          	16
#define AR_PI_DB_PHY_LAYER_CFG_RECV_FTS_CNT_2_5_BP                      	8
#define AR_PI_DB_PHY_LAYER_CFG_TX_SWING_SETTING_BP                      	7
#define AR_PI_DB_PHY_LAYER_CFG_ALL_PHY_ERR_RPT_BP                       	6
#define AR_PI_DB_PHY_LAYER_CFG_NEG_SPEED_BP                             	4
#define AR_PI_DB_PHY_LAYER_CFG_NEG_LANE_COUNT_BP                        	1
#define AR_PI_DB_PHY_LAYER_CFG_LINK_STATUS_BP                           	0
#define AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_8_QW                       	0
#define AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_5_QW                       	0
#define AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_2_5_QW                     	0
#define AR_PI_DB_PHY_LAYER_CFG_RESERVED_39_32_QW                        	0
#define AR_PI_DB_PHY_LAYER_CFG_MASTER_LB_ENABLE_QW                      	0
#define AR_PI_DB_PHY_LAYER_CFG_RESERVED_30_QW                           	0
#define AR_PI_DB_PHY_LAYER_CFG_LTSSM_STATE_QW                           	0
#define AR_PI_DB_PHY_LAYER_CFG_RECV_LINK_ID_QW                          	0
#define AR_PI_DB_PHY_LAYER_CFG_RECV_FTS_CNT_2_5_QW                      	0
#define AR_PI_DB_PHY_LAYER_CFG_TX_SWING_SETTING_QW                      	0
#define AR_PI_DB_PHY_LAYER_CFG_ALL_PHY_ERR_RPT_QW                       	0
#define AR_PI_DB_PHY_LAYER_CFG_NEG_SPEED_QW                             	0
#define AR_PI_DB_PHY_LAYER_CFG_NEG_LANE_COUNT_QW                        	0
#define AR_PI_DB_PHY_LAYER_CFG_LINK_STATUS_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_RECV_CREDIT_0 DEFINES
 */
#define AR_PI_DB_RECV_CREDIT_0_NONP_PAYL_CRED_MASK                      	0xfff0000000000000ull
#define AR_PI_DB_RECV_CREDIT_0_POST_HEAD_CRED_MASK                      	0x000ff00000000000ull
#define AR_PI_DB_RECV_CREDIT_0_POST_PAYL_CRED_MASK                      	0x00000fff00000000ull
#define AR_PI_DB_RECV_CREDIT_0_RESERVED_31_25_MASK                      	0x00000000fe000000ull
#define AR_PI_DB_RECV_CREDIT_0_RECV_ACK_NAK_TO_MASK                     	0x0000000001ff0000ull
#define AR_PI_DB_RECV_CREDIT_0_RESERVED_15_9_MASK                       	0x000000000000fe00ull
#define AR_PI_DB_RECV_CREDIT_0_TRANS_REPLAY_TO_MASK                     	0x00000000000001ffull
#define AR_PI_DB_RECV_CREDIT_0_NONP_PAYL_CRED_BP                        	52
#define AR_PI_DB_RECV_CREDIT_0_POST_HEAD_CRED_BP                        	44
#define AR_PI_DB_RECV_CREDIT_0_POST_PAYL_CRED_BP                        	32
#define AR_PI_DB_RECV_CREDIT_0_RESERVED_31_25_BP                        	25
#define AR_PI_DB_RECV_CREDIT_0_RECV_ACK_NAK_TO_BP                       	16
#define AR_PI_DB_RECV_CREDIT_0_RESERVED_15_9_BP                         	9
#define AR_PI_DB_RECV_CREDIT_0_TRANS_REPLAY_TO_BP                       	0
#define AR_PI_DB_RECV_CREDIT_0_NONP_PAYL_CRED_QW                        	0
#define AR_PI_DB_RECV_CREDIT_0_POST_HEAD_CRED_QW                        	0
#define AR_PI_DB_RECV_CREDIT_0_POST_PAYL_CRED_QW                        	0
#define AR_PI_DB_RECV_CREDIT_0_RESERVED_31_25_QW                        	0
#define AR_PI_DB_RECV_CREDIT_0_RECV_ACK_NAK_TO_QW                       	0
#define AR_PI_DB_RECV_CREDIT_0_RESERVED_15_9_QW                         	0
#define AR_PI_DB_RECV_CREDIT_0_TRANS_REPLAY_TO_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_RECV_CREDIT_1 DEFINES
 */
#define AR_PI_DB_RECV_CREDIT_1_TRAN_NONP_PAYL_MASK                      	0xfff0000000000000ull
#define AR_PI_DB_RECV_CREDIT_1_TRAN_POST_HEAD_MASK                      	0x000ff00000000000ull
#define AR_PI_DB_RECV_CREDIT_1_TRAN_POST_PAYL_MASK                      	0x00000fff00000000ull
#define AR_PI_DB_RECV_CREDIT_1_RECV_COMP_HEAD_MASK                      	0x00000000ff000000ull
#define AR_PI_DB_RECV_CREDIT_1_RESERVED_23_20_MASK                      	0x0000000000f00000ull
#define AR_PI_DB_RECV_CREDIT_1_RECV_COMP_PAYL_MASK                      	0x00000000000fff00ull
#define AR_PI_DB_RECV_CREDIT_1_RECV_NONP_HEAD_MASK                      	0x00000000000000ffull
#define AR_PI_DB_RECV_CREDIT_1_TRAN_NONP_PAYL_BP                        	52
#define AR_PI_DB_RECV_CREDIT_1_TRAN_POST_HEAD_BP                        	44
#define AR_PI_DB_RECV_CREDIT_1_TRAN_POST_PAYL_BP                        	32
#define AR_PI_DB_RECV_CREDIT_1_RECV_COMP_HEAD_BP                        	24
#define AR_PI_DB_RECV_CREDIT_1_RESERVED_23_20_BP                        	20
#define AR_PI_DB_RECV_CREDIT_1_RECV_COMP_PAYL_BP                        	8
#define AR_PI_DB_RECV_CREDIT_1_RECV_NONP_HEAD_BP                        	0
#define AR_PI_DB_RECV_CREDIT_1_TRAN_NONP_PAYL_QW                        	0
#define AR_PI_DB_RECV_CREDIT_1_TRAN_POST_HEAD_QW                        	0
#define AR_PI_DB_RECV_CREDIT_1_TRAN_POST_PAYL_QW                        	0
#define AR_PI_DB_RECV_CREDIT_1_RECV_COMP_HEAD_QW                        	0
#define AR_PI_DB_RECV_CREDIT_1_RESERVED_23_20_QW                        	0
#define AR_PI_DB_RECV_CREDIT_1_RECV_COMP_PAYL_QW                        	0
#define AR_PI_DB_RECV_CREDIT_1_RECV_NONP_HEAD_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_RECV_FTS_COUNT DEFINES
 */
#define AR_PI_DB_RECV_FTS_COUNT_RESERVED_63_48_MASK                     	0xffff000000000000ull
#define AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_8G_MASK                    	0x0000ff0000000000ull
#define AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_5G_MASK                    	0x000000ff00000000ull
#define AR_PI_DB_RECV_FTS_COUNT_RESERVED_31_17_MASK                     	0x00000000fffe0000ull
#define AR_PI_DB_RECV_FTS_COUNT_LANE_REVERSAL_MASK                      	0x0000000000010000ull
#define AR_PI_DB_RECV_FTS_COUNT_NEG_LANE_MAP_MASK                       	0x000000000000ffffull
#define AR_PI_DB_RECV_FTS_COUNT_RESERVED_63_48_BP                       	48
#define AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_8G_BP                      	40
#define AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_5G_BP                      	32
#define AR_PI_DB_RECV_FTS_COUNT_RESERVED_31_17_BP                       	17
#define AR_PI_DB_RECV_FTS_COUNT_LANE_REVERSAL_BP                        	16
#define AR_PI_DB_RECV_FTS_COUNT_NEG_LANE_MAP_BP                         	0
#define AR_PI_DB_RECV_FTS_COUNT_RESERVED_63_48_QW                       	0
#define AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_8G_QW                      	0
#define AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_5G_QW                      	0
#define AR_PI_DB_RECV_FTS_COUNT_RESERVED_31_17_QW                       	0
#define AR_PI_DB_RECV_FTS_COUNT_LANE_REVERSAL_QW                        	0
#define AR_PI_DB_RECV_FTS_COUNT_NEG_LANE_MAP_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DB_PHYSICAL_CFG_REG DEFINES
 */
#define AR_PI_DB_PHYSICAL_CFG_REG_RESERVED_63_4_MASK                    	0xfffffffffffffff0ull
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_3_ENABLE_MASK                    	0x0000000000000008ull
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_2_ENABLE_MASK                    	0x0000000000000004ull
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_1_ENABLE_MASK                    	0x0000000000000002ull
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_0_ENABLE_MASK                    	0x0000000000000001ull
#define AR_PI_DB_PHYSICAL_CFG_REG_RESERVED_63_4_BP                      	4
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_3_ENABLE_BP                      	3
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_2_ENABLE_BP                      	2
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_1_ENABLE_BP                      	1
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_0_ENABLE_BP                      	0
#define AR_PI_DB_PHYSICAL_CFG_REG_RESERVED_63_4_QW                      	0
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_3_ENABLE_QW                      	0
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_2_ENABLE_QW                      	0
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_1_ENABLE_QW                      	0
#define AR_PI_DB_PHYSICAL_CFG_REG_FUNC_0_ENABLE_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_DIAG_INJ_RAM DEFINES
 */
#define AR_PI_DBG_DIAG_INJ_RAM_ARRAY_DATA_MASK                          	0xffffffffffffffffull
#define AR_PI_DBG_DIAG_INJ_RAM_ARRAY_DATA_BP                            	0
#define AR_PI_DBG_DIAG_INJ_RAM_ARRAY_DATA_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_DIAG_TRANS_RAM DEFINES
 */
#define AR_PI_DBG_DIAG_TRANS_RAM_ARRAY_DATA_MASK                        	0xffffffffffffffffull
#define AR_PI_DBG_DIAG_TRANS_RAM_ARRAY_DATA_BP                          	0
#define AR_PI_DBG_DIAG_TRANS_RAM_ARRAY_DATA_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_DIAG_RECV_RAM DEFINES
 */
#define AR_PI_DBG_DIAG_RECV_RAM_ARRAY_DATA_MASK                         	0xffffffffffffffffull
#define AR_PI_DBG_DIAG_RECV_RAM_ARRAY_DATA_BP                           	0
#define AR_PI_DBG_DIAG_RECV_RAM_ARRAY_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */



/*
 *  AR PI_IP MACROS
 */
#ifndef RD_FIELD
#define RD_FIELD(d, bp, m)	(((d)&(m))>>(bp))
#endif
#ifndef WR_FIELD
#define WR_FIELD(mmr, d, bp, m)	(mmr = (((mmr) & ~(m)) | ((((uint64_t)(d))<<(bp)) & (m))))
#endif
#define RF_AR_PI_CFG_DEN_IP_LINK_DOWN_RESET_COUNT(mmr)          	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_LINK_DOWN_RESET_COUNT_BP,\
									AR_PI_CFG_DEN_IP_LINK_DOWN_RESET_COUNT_MASK)
#define WF_AR_PI_CFG_DEN_IP_LINK_DOWN_RESET_COUNT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_LINK_DOWN_RESET_COUNT_BP,\
									AR_PI_CFG_DEN_IP_LINK_DOWN_RESET_COUNT_MASK)
#define RF_AR_PI_CFG_DEN_IP_PHY_LANE_RESET_PLTRST_ENABLE(mmr)   	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_PHY_LANE_RESET_PLTRST_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_PHY_LANE_RESET_PLTRST_ENABLE_MASK)
#define WF_AR_PI_CFG_DEN_IP_PHY_LANE_RESET_PLTRST_ENABLE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_PHY_LANE_RESET_PLTRST_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_PHY_LANE_RESET_PLTRST_ENABLE_MASK)
#define RF_AR_PI_CFG_DEN_IP_DEBUG_STATUS_PERF_CNTR_SEL(mmr)     	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_DEBUG_STATUS_PERF_CNTR_SEL_BP,\
									AR_PI_CFG_DEN_IP_DEBUG_STATUS_PERF_CNTR_SEL_MASK)
#define WF_AR_PI_CFG_DEN_IP_DEBUG_STATUS_PERF_CNTR_SEL(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_DEBUG_STATUS_PERF_CNTR_SEL_BP,\
									AR_PI_CFG_DEN_IP_DEBUG_STATUS_PERF_CNTR_SEL_MASK)
#define RF_AR_PI_CFG_DEN_IP_LANE_COUNT_IN(mmr)                  	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_LANE_COUNT_IN_BP,\
									AR_PI_CFG_DEN_IP_LANE_COUNT_IN_MASK)
#define WF_AR_PI_CFG_DEN_IP_LANE_COUNT_IN(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_LANE_COUNT_IN_BP,\
									AR_PI_CFG_DEN_IP_LANE_COUNT_IN_MASK)
#define RF_AR_PI_CFG_DEN_IP_PCIE_DISABLE_GEN3_DC_BALANCE(mmr)   	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_PCIE_DISABLE_GEN3_DC_BALANCE_BP,\
									AR_PI_CFG_DEN_IP_PCIE_DISABLE_GEN3_DC_BALANCE_MASK)
#define WF_AR_PI_CFG_DEN_IP_PCIE_DISABLE_GEN3_DC_BALANCE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_PCIE_DISABLE_GEN3_DC_BALANCE_BP,\
									AR_PI_CFG_DEN_IP_PCIE_DISABLE_GEN3_DC_BALANCE_MASK)
#define RF_AR_PI_CFG_DEN_IP_PCIE_GENERATION_SEL(mmr)            	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_PCIE_GENERATION_SEL_BP,\
									AR_PI_CFG_DEN_IP_PCIE_GENERATION_SEL_MASK)
#define WF_AR_PI_CFG_DEN_IP_PCIE_GENERATION_SEL(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_PCIE_GENERATION_SEL_BP,\
									AR_PI_CFG_DEN_IP_PCIE_GENERATION_SEL_MASK)
#define RF_AR_PI_CFG_DEN_IP_PHANTOM_FUNCTION_MODE_SEL(mmr)      	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_PHANTOM_FUNCTION_MODE_SEL_BP,\
									AR_PI_CFG_DEN_IP_PHANTOM_FUNCTION_MODE_SEL_MASK)
#define WF_AR_PI_CFG_DEN_IP_PHANTOM_FUNCTION_MODE_SEL(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_PHANTOM_FUNCTION_MODE_SEL_BP,\
									AR_PI_CFG_DEN_IP_PHANTOM_FUNCTION_MODE_SEL_MASK)
#define RF_AR_PI_CFG_DEN_IP_LINK_DOWN_ENABLE(mmr)               	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_LINK_DOWN_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_LINK_DOWN_ENABLE_MASK)
#define WF_AR_PI_CFG_DEN_IP_LINK_DOWN_ENABLE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_LINK_DOWN_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_LINK_DOWN_ENABLE_MASK)
#define RF_AR_PI_CFG_DEN_IP_PLTRST_ENABLE(mmr)                  	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_PLTRST_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_PLTRST_ENABLE_MASK)
#define WF_AR_PI_CFG_DEN_IP_PLTRST_ENABLE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_PLTRST_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_PLTRST_ENABLE_MASK)
#define RF_AR_PI_CFG_DEN_IP_LINK_TRAINING_ENABLE(mmr)           	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_LINK_TRAINING_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_LINK_TRAINING_ENABLE_MASK)
#define WF_AR_PI_CFG_DEN_IP_LINK_TRAINING_ENABLE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_LINK_TRAINING_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_LINK_TRAINING_ENABLE_MASK)
#define RF_AR_PI_CFG_DEN_IP_CONFIG_ENABLE(mmr)                  	RD_FIELD(mmr,\
									AR_PI_CFG_DEN_IP_CONFIG_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_CONFIG_ENABLE_MASK)
#define WF_AR_PI_CFG_DEN_IP_CONFIG_ENABLE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_CFG_DEN_IP_CONFIG_ENABLE_BP,\
									AR_PI_CFG_DEN_IP_CONFIG_ENABLE_MASK)
#define RF_AR_PI_STS_DEN_IP_FUNCTION_POWER_STATE(mmr)           	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_FUNCTION_POWER_STATE_BP,\
									AR_PI_STS_DEN_IP_FUNCTION_POWER_STATE_MASK)
#define WF_AR_PI_STS_DEN_IP_FUNCTION_POWER_STATE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_FUNCTION_POWER_STATE_BP,\
									AR_PI_STS_DEN_IP_FUNCTION_POWER_STATE_MASK)
#define RF_AR_PI_STS_DEN_IP_FUNCTION_STATUS(mmr)                	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_FUNCTION_STATUS_BP,\
									AR_PI_STS_DEN_IP_FUNCTION_STATUS_MASK)
#define WF_AR_PI_STS_DEN_IP_FUNCTION_STATUS(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_FUNCTION_STATUS_BP,\
									AR_PI_STS_DEN_IP_FUNCTION_STATUS_MASK)
#define RF_AR_PI_STS_DEN_IP_RCB_STATUS(mmr)                     	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_RCB_STATUS_BP,\
									AR_PI_STS_DEN_IP_RCB_STATUS_MASK)
#define WF_AR_PI_STS_DEN_IP_RCB_STATUS(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_RCB_STATUS_BP,\
									AR_PI_STS_DEN_IP_RCB_STATUS_MASK)
#define RF_AR_PI_STS_DEN_IP_MAX_PAYLOAD_SIZE(mmr)               	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_MAX_PAYLOAD_SIZE_BP,\
									AR_PI_STS_DEN_IP_MAX_PAYLOAD_SIZE_MASK)
#define WF_AR_PI_STS_DEN_IP_MAX_PAYLOAD_SIZE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_MAX_PAYLOAD_SIZE_BP,\
									AR_PI_STS_DEN_IP_MAX_PAYLOAD_SIZE_MASK)
#define RF_AR_PI_STS_DEN_IP_LTSSM_STATE(mmr)                    	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_LTSSM_STATE_BP,\
									AR_PI_STS_DEN_IP_LTSSM_STATE_MASK)
#define WF_AR_PI_STS_DEN_IP_LTSSM_STATE(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_LTSSM_STATE_BP,\
									AR_PI_STS_DEN_IP_LTSSM_STATE_MASK)
#define RF_AR_PI_STS_DEN_IP_LINK_POWER_STATE(mmr)               	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_LINK_POWER_STATE_BP,\
									AR_PI_STS_DEN_IP_LINK_POWER_STATE_MASK)
#define WF_AR_PI_STS_DEN_IP_LINK_POWER_STATE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_LINK_POWER_STATE_BP,\
									AR_PI_STS_DEN_IP_LINK_POWER_STATE_MASK)
#define RF_AR_PI_STS_DEN_IP_MAX_READ_REQ_SIZE(mmr)              	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_MAX_READ_REQ_SIZE_BP,\
									AR_PI_STS_DEN_IP_MAX_READ_REQ_SIZE_MASK)
#define WF_AR_PI_STS_DEN_IP_MAX_READ_REQ_SIZE(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_MAX_READ_REQ_SIZE_BP,\
									AR_PI_STS_DEN_IP_MAX_READ_REQ_SIZE_MASK)
#define RF_AR_PI_STS_DEN_IP_LINK_STATUS(mmr)                    	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_LINK_STATUS_BP,\
									AR_PI_STS_DEN_IP_LINK_STATUS_MASK)
#define WF_AR_PI_STS_DEN_IP_LINK_STATUS(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_LINK_STATUS_BP,\
									AR_PI_STS_DEN_IP_LINK_STATUS_MASK)
#define RF_AR_PI_STS_DEN_IP_NEGOTIATED_SPEED(mmr)               	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_NEGOTIATED_SPEED_BP,\
									AR_PI_STS_DEN_IP_NEGOTIATED_SPEED_MASK)
#define WF_AR_PI_STS_DEN_IP_NEGOTIATED_SPEED(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_NEGOTIATED_SPEED_BP,\
									AR_PI_STS_DEN_IP_NEGOTIATED_SPEED_MASK)
#define RF_AR_PI_STS_DEN_IP_LINK_DOWN_RESET_OUT(mmr)            	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_LINK_DOWN_RESET_OUT_BP,\
									AR_PI_STS_DEN_IP_LINK_DOWN_RESET_OUT_MASK)
#define WF_AR_PI_STS_DEN_IP_LINK_DOWN_RESET_OUT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_LINK_DOWN_RESET_OUT_BP,\
									AR_PI_STS_DEN_IP_LINK_DOWN_RESET_OUT_MASK)
#define RF_AR_PI_STS_DEN_IP_HOT_RESET_OUT(mmr)                  	RD_FIELD(mmr,\
									AR_PI_STS_DEN_IP_HOT_RESET_OUT_BP,\
									AR_PI_STS_DEN_IP_HOT_RESET_OUT_MASK)
#define WF_AR_PI_STS_DEN_IP_HOT_RESET_OUT(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_STS_DEN_IP_HOT_RESET_OUT_BP,\
									AR_PI_STS_DEN_IP_HOT_RESET_OUT_MASK)
#define RF_AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW_MASK)
#define WF_AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_FLG_IP_LB_RING_PCLK_UNFLOW_MASK)
#define RF_AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW_MASK)
#define WF_AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_FLG_IP_LB_RING_PCLK_OVFLOW_MASK)
#define RF_AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER(mmr)               	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER_MASK)
#define WF_AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_FLG_IP_PM_CNTR_ROLLOVER_MASK)
#define RF_AR_PI_ERR_FLG_IP_PM_CNTR_PERR(mmr)                   	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_FLG_IP_PM_CNTR_PERR_MASK)
#define WF_AR_PI_ERR_FLG_IP_PM_CNTR_PERR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_FLG_IP_PM_CNTR_PERR_MASK)
#define RF_AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE(mmr)               	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE_MASK)
#define WF_AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_FLG_IP_DEN_SPEED_CHANGE_MASK)
#define RF_AR_PI_ERR_FLG_IP_DEN_INTR(mmr)                       	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_DEN_INTR_BP,\
									AR_PI_ERR_FLG_IP_DEN_INTR_MASK)
#define WF_AR_PI_ERR_FLG_IP_DEN_INTR(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_DEN_INTR_BP,\
									AR_PI_ERR_FLG_IP_DEN_INTR_MASK)
#define RF_AR_PI_ERR_FLG_IP_DEN_DPA_INTR(mmr)                   	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_FLG_IP_DEN_DPA_INTR_MASK)
#define WF_AR_PI_ERR_FLG_IP_DEN_DPA_INTR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_FLG_IP_DEN_DPA_INTR_MASK)
#define RF_AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR(mmr)          	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR_MASK)
#define WF_AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_FLG_IP_DEN_CORRECTABLE_ERROR_MASK)
#define RF_AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR(mmr)            	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_FLG_IP_DEN_NON_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR(mmr)                	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_FLG_IP_DEN_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_FLG_IP_DIAG_ONLY(mmr)                      	RD_FIELD(mmr,\
									AR_PI_ERR_FLG_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_FLG_IP_DIAG_ONLY_MASK)
#define WF_AR_PI_ERR_FLG_IP_DIAG_ONLY(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_ERR_FLG_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_FLG_IP_DIAG_ONLY_MASK)
#define RF_AR_PI_ERR_CLR_IP_LB_RING_PCLK_UNFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_CLR_IP_LB_RING_PCLK_UNFLOW_MASK)
#define WF_AR_PI_ERR_CLR_IP_LB_RING_PCLK_UNFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_CLR_IP_LB_RING_PCLK_UNFLOW_MASK)
#define RF_AR_PI_ERR_CLR_IP_LB_RING_PCLK_OVFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_CLR_IP_LB_RING_PCLK_OVFLOW_MASK)
#define WF_AR_PI_ERR_CLR_IP_LB_RING_PCLK_OVFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_CLR_IP_LB_RING_PCLK_OVFLOW_MASK)
#define RF_AR_PI_ERR_CLR_IP_PM_CNTR_ROLLOVER(mmr)               	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_CLR_IP_PM_CNTR_ROLLOVER_MASK)
#define WF_AR_PI_ERR_CLR_IP_PM_CNTR_ROLLOVER(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_CLR_IP_PM_CNTR_ROLLOVER_MASK)
#define RF_AR_PI_ERR_CLR_IP_PM_CNTR_PERR(mmr)                   	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_CLR_IP_PM_CNTR_PERR_MASK)
#define WF_AR_PI_ERR_CLR_IP_PM_CNTR_PERR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_CLR_IP_PM_CNTR_PERR_MASK)
#define RF_AR_PI_ERR_CLR_IP_DEN_SPEED_CHANGE(mmr)               	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_CLR_IP_DEN_SPEED_CHANGE_MASK)
#define WF_AR_PI_ERR_CLR_IP_DEN_SPEED_CHANGE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_CLR_IP_DEN_SPEED_CHANGE_MASK)
#define RF_AR_PI_ERR_CLR_IP_DEN_INTR(mmr)                       	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_DEN_INTR_BP,\
									AR_PI_ERR_CLR_IP_DEN_INTR_MASK)
#define WF_AR_PI_ERR_CLR_IP_DEN_INTR(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_DEN_INTR_BP,\
									AR_PI_ERR_CLR_IP_DEN_INTR_MASK)
#define RF_AR_PI_ERR_CLR_IP_DEN_DPA_INTR(mmr)                   	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_CLR_IP_DEN_DPA_INTR_MASK)
#define WF_AR_PI_ERR_CLR_IP_DEN_DPA_INTR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_CLR_IP_DEN_DPA_INTR_MASK)
#define RF_AR_PI_ERR_CLR_IP_DEN_CORRECTABLE_ERROR(mmr)          	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_CLR_IP_DEN_CORRECTABLE_ERROR_MASK)
#define WF_AR_PI_ERR_CLR_IP_DEN_CORRECTABLE_ERROR(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_CLR_IP_DEN_CORRECTABLE_ERROR_MASK)
#define RF_AR_PI_ERR_CLR_IP_DEN_NON_FATAL_ERROR(mmr)            	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_CLR_IP_DEN_NON_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_CLR_IP_DEN_NON_FATAL_ERROR(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_CLR_IP_DEN_NON_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_CLR_IP_DEN_FATAL_ERROR(mmr)                	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_CLR_IP_DEN_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_CLR_IP_DEN_FATAL_ERROR(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_CLR_IP_DEN_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_CLR_IP_DIAG_ONLY(mmr)                      	RD_FIELD(mmr,\
									AR_PI_ERR_CLR_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_CLR_IP_DIAG_ONLY_MASK)
#define WF_AR_PI_ERR_CLR_IP_DIAG_ONLY(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_ERR_CLR_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_CLR_IP_DIAG_ONLY_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_UNFLOW(mmr)        	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_UNFLOW_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_UNFLOW(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_UNFLOW_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_OVFLOW(mmr)        	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_OVFLOW_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_OVFLOW(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_HSS_MSK_IP_LB_RING_PCLK_OVFLOW_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_PM_CNTR_ROLLOVER(mmr)           	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_HSS_MSK_IP_PM_CNTR_ROLLOVER_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_PM_CNTR_ROLLOVER(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_HSS_MSK_IP_PM_CNTR_ROLLOVER_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_PM_CNTR_PERR(mmr)               	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_HSS_MSK_IP_PM_CNTR_PERR_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_PM_CNTR_PERR(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_HSS_MSK_IP_PM_CNTR_PERR_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_DEN_SPEED_CHANGE(mmr)           	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_SPEED_CHANGE_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_DEN_SPEED_CHANGE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_SPEED_CHANGE_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_DEN_INTR(mmr)                   	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_DEN_INTR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_INTR_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_DEN_INTR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_DEN_INTR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_INTR_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_DEN_DPA_INTR(mmr)               	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_DPA_INTR_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_DEN_DPA_INTR(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_DPA_INTR_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_DEN_CORRECTABLE_ERROR(mmr)      	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_CORRECTABLE_ERROR_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_DEN_CORRECTABLE_ERROR(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_CORRECTABLE_ERROR_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_DEN_NON_FATAL_ERROR(mmr)        	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_NON_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_DEN_NON_FATAL_ERROR(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_NON_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_DEN_FATAL_ERROR(mmr)            	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_DEN_FATAL_ERROR(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_HSS_MSK_IP_DEN_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_HSS_MSK_IP_DIAG_ONLY(mmr)                  	RD_FIELD(mmr,\
									AR_PI_ERR_HSS_MSK_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_HSS_MSK_IP_DIAG_ONLY_MASK)
#define WF_AR_PI_ERR_HSS_MSK_IP_DIAG_ONLY(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_ERR_HSS_MSK_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_HSS_MSK_IP_DIAG_ONLY_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_UNFLOW(mmr)         	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_UNFLOW_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_UNFLOW(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_UNFLOW_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_OVFLOW(mmr)         	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_OVFLOW_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_OVFLOW(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_OS_MSK_IP_LB_RING_PCLK_OVFLOW_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_PM_CNTR_ROLLOVER(mmr)            	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_OS_MSK_IP_PM_CNTR_ROLLOVER_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_PM_CNTR_ROLLOVER(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_OS_MSK_IP_PM_CNTR_ROLLOVER_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_PM_CNTR_PERR(mmr)                	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_OS_MSK_IP_PM_CNTR_PERR_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_PM_CNTR_PERR(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_OS_MSK_IP_PM_CNTR_PERR_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_DEN_SPEED_CHANGE(mmr)            	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_SPEED_CHANGE_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_DEN_SPEED_CHANGE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_SPEED_CHANGE_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_DEN_INTR(mmr)                    	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_DEN_INTR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_INTR_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_DEN_INTR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_DEN_INTR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_INTR_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_DEN_DPA_INTR(mmr)                	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_DPA_INTR_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_DEN_DPA_INTR(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_DPA_INTR_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_DEN_CORRECTABLE_ERROR(mmr)       	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_CORRECTABLE_ERROR_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_DEN_CORRECTABLE_ERROR(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_CORRECTABLE_ERROR_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_DEN_NON_FATAL_ERROR(mmr)         	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_NON_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_DEN_NON_FATAL_ERROR(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_NON_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_DEN_FATAL_ERROR(mmr)             	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_DEN_FATAL_ERROR(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_OS_MSK_IP_DEN_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_OS_MSK_IP_DIAG_ONLY(mmr)                   	RD_FIELD(mmr,\
									AR_PI_ERR_OS_MSK_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_OS_MSK_IP_DIAG_ONLY_MASK)
#define WF_AR_PI_ERR_OS_MSK_IP_DIAG_ONLY(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_ERR_OS_MSK_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_OS_MSK_IP_DIAG_ONLY_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_UNFLOW(mmr)      	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_UNFLOW_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_UNFLOW(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_UNFLOW_BP,\
									AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_UNFLOW_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_OVFLOW(mmr)      	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_OVFLOW_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_OVFLOW(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_OVFLOW_BP,\
									AR_PI_ERR_FIRST_FLG_IP_LB_RING_PCLK_OVFLOW_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_ROLLOVER(mmr)         	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_ROLLOVER_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_ROLLOVER(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_ROLLOVER_BP,\
									AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_ROLLOVER_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_PERR(mmr)             	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_PERR_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_PERR(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_PERR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_PM_CNTR_PERR_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_DEN_SPEED_CHANGE(mmr)         	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_SPEED_CHANGE_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_DEN_SPEED_CHANGE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_SPEED_CHANGE_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_SPEED_CHANGE_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_DEN_INTR(mmr)                 	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_INTR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_INTR_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_DEN_INTR(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_INTR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_INTR_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_DEN_DPA_INTR(mmr)             	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_DPA_INTR_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_DEN_DPA_INTR(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_DPA_INTR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_DPA_INTR_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_DEN_CORRECTABLE_ERROR(mmr)    	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_CORRECTABLE_ERROR_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_DEN_CORRECTABLE_ERROR(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_CORRECTABLE_ERROR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_CORRECTABLE_ERROR_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_DEN_NON_FATAL_ERROR(mmr)      	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_NON_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_DEN_NON_FATAL_ERROR(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_NON_FATAL_ERROR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_NON_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_DEN_FATAL_ERROR(mmr)          	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_FATAL_ERROR_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_DEN_FATAL_ERROR(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_FATAL_ERROR_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DEN_FATAL_ERROR_MASK)
#define RF_AR_PI_ERR_FIRST_FLG_IP_DIAG_ONLY(mmr)                	RD_FIELD(mmr,\
									AR_PI_ERR_FIRST_FLG_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DIAG_ONLY_MASK)
#define WF_AR_PI_ERR_FIRST_FLG_IP_DIAG_ONLY(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_ERR_FIRST_FLG_IP_DIAG_ONLY_BP,\
									AR_PI_ERR_FIRST_FLG_IP_DIAG_ONLY_MASK)
#define RF_AR_PI_PHY_STATUS_DEN_IP_CMU_OK_3(mmr)                	RD_FIELD(mmr,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_3_BP,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_3_MASK)
#define WF_AR_PI_PHY_STATUS_DEN_IP_CMU_OK_3(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_3_BP,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_3_MASK)
#define RF_AR_PI_PHY_STATUS_DEN_IP_CMU_OK_2(mmr)                	RD_FIELD(mmr,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_2_BP,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_2_MASK)
#define WF_AR_PI_PHY_STATUS_DEN_IP_CMU_OK_2(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_2_BP,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_2_MASK)
#define RF_AR_PI_PHY_STATUS_DEN_IP_CMU_OK_1(mmr)                	RD_FIELD(mmr,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_1_BP,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_1_MASK)
#define WF_AR_PI_PHY_STATUS_DEN_IP_CMU_OK_1(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_1_BP,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_1_MASK)
#define RF_AR_PI_PHY_STATUS_DEN_IP_CMU_OK_O(mmr)                	RD_FIELD(mmr,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_O_BP,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_O_MASK)
#define WF_AR_PI_PHY_STATUS_DEN_IP_CMU_OK_O(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_O_BP,\
									AR_PI_PHY_STATUS_DEN_IP_CMU_OK_O_MASK)
#define RF_AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_ENABLE(mmr)	RD_FIELD(mmr,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_ENABLE_BP,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_ENABLE_MASK)
#define WF_AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_ENABLE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_ENABLE_BP,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_ENABLE_MASK)
#define RF_AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_BP,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_MASK)
#define WF_AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_BP,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_OVERRIDE_MASK)
#define RF_AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_SAMPLE(mmr)       	RD_FIELD(mmr,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_SAMPLE_BP,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_SAMPLE_MASK)
#define WF_AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_SAMPLE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_SAMPLE_BP,\
									AR_PI_PHY_STATUS_DEN_IP_PHY_STATUS_SAMPLE_MASK)
#define RF_AR_PI_PHY_EQUAL_DEN_IP_MAX_ADAPT_CYCLES(mmr)         	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_DEN_IP_MAX_ADAPT_CYCLES_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_MAX_ADAPT_CYCLES_MASK)
#define WF_AR_PI_PHY_EQUAL_DEN_IP_MAX_ADAPT_CYCLES(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_DEN_IP_MAX_ADAPT_CYCLES_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_MAX_ADAPT_CYCLES_MASK)
#define RF_AR_PI_PHY_EQUAL_DEN_IP_MIN_ADAPT_CYCLES(mmr)         	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_DEN_IP_MIN_ADAPT_CYCLES_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_MIN_ADAPT_CYCLES_MASK)
#define WF_AR_PI_PHY_EQUAL_DEN_IP_MIN_ADAPT_CYCLES(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_DEN_IP_MIN_ADAPT_CYCLES_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_MIN_ADAPT_CYCLES_MASK)
#define RF_AR_PI_PHY_EQUAL_DEN_IP_MAX_DELTA(mmr)                	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_DEN_IP_MAX_DELTA_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_MAX_DELTA_MASK)
#define WF_AR_PI_PHY_EQUAL_DEN_IP_MAX_DELTA(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_DEN_IP_MAX_DELTA_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_MAX_DELTA_MASK)
#define RF_AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_LF(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_LF_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_LF_MASK)
#define WF_AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_LF(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_LF_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_LF_MASK)
#define RF_AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_FS(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_FS_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_FS_MASK)
#define WF_AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_FS(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_FS_BP,\
									AR_PI_PHY_EQUAL_DEN_IP_LINK_EQ_FS_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_0_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_0_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_0_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_0_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_0_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_0_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_0_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_0_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_0_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_0_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_0_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_0_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_0_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_0_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_0_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_0_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_0_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_0_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_1_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_1_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_1_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_1_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_1_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_1_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_1_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_1_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_1_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_1_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_1_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_1_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_1_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_1_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_1_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_1_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_1_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_1_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_2_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_2_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_2_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_2_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_2_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_2_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_2_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_2_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_2_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_2_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_2_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_2_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_2_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_2_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_2_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_2_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_2_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_2_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_3_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_3_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_3_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_3_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_3_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_3_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_3_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_3_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_3_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_3_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_3_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_3_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_3_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_3_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_3_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_3_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_3_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_3_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_4_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_4_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_4_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_4_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_4_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_4_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_4_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_4_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_4_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_4_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_4_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_4_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_4_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_4_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_4_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_4_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_4_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_4_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_5_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_5_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_5_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_5_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_5_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_5_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_5_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_5_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_5_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_5_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_5_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_5_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_5_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_5_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_5_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_5_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_5_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_5_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_6_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_6_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_6_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_6_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_6_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_6_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_6_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_6_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_6_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_6_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_6_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_6_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_6_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_6_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_6_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_6_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_6_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_6_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_7_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_7_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_7_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_7_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_7_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_7_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_7_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_7_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_7_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_7_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_7_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_7_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_7_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_7_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_7_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_7_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_7_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_7_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_8_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_8_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_8_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_8_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_8_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_8_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_8_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_8_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_8_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_8_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_8_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_8_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_8_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_8_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_8_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_8_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_8_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_8_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_9_CP1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_9_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_9_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_9_CP1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_9_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_9_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_9_C0(mmr)                      	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_9_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_9_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_9_C0(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_9_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_9_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_9_CM1(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_9_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_9_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_9_CM1(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_9_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_9_CM1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_10_CP1(mmr)                    	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_10_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_10_CP1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_10_CP1(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_10_CP1_BP,\
									AR_PI_PHY_EQUAL_COEFF_10_CP1_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_10_C0(mmr)                     	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_10_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_10_C0_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_10_C0(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_10_C0_BP,\
									AR_PI_PHY_EQUAL_COEFF_10_C0_MASK)
#define RF_AR_PI_PHY_EQUAL_COEFF_10_CM1(mmr)                    	RD_FIELD(mmr,\
									AR_PI_PHY_EQUAL_COEFF_10_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_10_CM1_MASK)
#define WF_AR_PI_PHY_EQUAL_COEFF_10_CM1(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_PHY_EQUAL_COEFF_10_CM1_BP,\
									AR_PI_PHY_EQUAL_COEFF_10_CM1_MASK)
#define RF_AR_PI_PMI_PCLK_CFG_PRF_PRSP_HAL_BLKD_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_PCLK_CFG_PRF_PRSP_HAL_BLKD_EN_BP,\
									AR_PI_PMI_PCLK_CFG_PRF_PRSP_HAL_BLKD_EN_MASK)
#define WF_AR_PI_PMI_PCLK_CFG_PRF_PRSP_HAL_BLKD_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_PCLK_CFG_PRF_PRSP_HAL_BLKD_EN_BP,\
									AR_PI_PMI_PCLK_CFG_PRF_PRSP_HAL_BLKD_EN_MASK)
#define RF_AR_PI_PMI_PCLK_CFG_PRF_PREQ_BLKD_EN(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_PCLK_CFG_PRF_PREQ_BLKD_EN_BP,\
									AR_PI_PMI_PCLK_CFG_PRF_PREQ_BLKD_EN_MASK)
#define WF_AR_PI_PMI_PCLK_CFG_PRF_PREQ_BLKD_EN(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_PCLK_CFG_PRF_PREQ_BLKD_EN_BP,\
									AR_PI_PMI_PCLK_CFG_PRF_PREQ_BLKD_EN_MASK)
#define RF_AR_PI_PMI_PCLK_CFG_PRF_PREQ_PTC_BLKD_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_PCLK_CFG_PRF_PREQ_PTC_BLKD_EN_BP,\
									AR_PI_PMI_PCLK_CFG_PRF_PREQ_PTC_BLKD_EN_MASK)
#define WF_AR_PI_PMI_PCLK_CFG_PRF_PREQ_PTC_BLKD_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_PCLK_CFG_PRF_PREQ_PTC_BLKD_EN_BP,\
									AR_PI_PMI_PCLK_CFG_PRF_PREQ_PTC_BLKD_EN_MASK)
#define RF_AR_PI_PMI_PCLK_CFG_PM_SELECT(mmr)                    	RD_FIELD(mmr,\
									AR_PI_PMI_PCLK_CFG_PM_SELECT_BP,\
									AR_PI_PMI_PCLK_CFG_PM_SELECT_MASK)
#define WF_AR_PI_PMI_PCLK_CFG_PM_SELECT(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_PMI_PCLK_CFG_PM_SELECT_BP,\
									AR_PI_PMI_PCLK_CFG_PM_SELECT_MASK)
#define RF_AR_PI_PMI_PCLK_CFG_PNP_ARB_ENA(mmr)                  	RD_FIELD(mmr,\
									AR_PI_PMI_PCLK_CFG_PNP_ARB_ENA_BP,\
									AR_PI_PMI_PCLK_CFG_PNP_ARB_ENA_MASK)
#define WF_AR_PI_PMI_PCLK_CFG_PNP_ARB_ENA(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_PMI_PCLK_CFG_PNP_ARB_ENA_BP,\
									AR_PI_PMI_PCLK_CFG_PNP_ARB_ENA_MASK)
#define RF_AR_PI_PMI_PCLK_CFG_PRSP_FC_THRESH(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_PCLK_CFG_PRSP_FC_THRESH_BP,\
									AR_PI_PMI_PCLK_CFG_PRSP_FC_THRESH_MASK)
#define WF_AR_PI_PMI_PCLK_CFG_PRSP_FC_THRESH(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_PCLK_CFG_PRSP_FC_THRESH_BP,\
									AR_PI_PMI_PCLK_CFG_PRSP_FC_THRESH_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_UP(mmr)          	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_UP_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_UP_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_UP(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_UP_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_UP_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_LO(mmr)          	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_LO_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_LO_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_LO(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_LO_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_CHECKBITS_LO_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PREQ_TRIGGERED(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_TRIGGERED_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_TRIGGERED_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PREQ_TRIGGERED(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_TRIGGERED_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_TRIGGERED_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PREQ_COUNT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_COUNT_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_COUNT_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PREQ_COUNT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_COUNT_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_COUNT_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PREQ_MODE(mmr)                  	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_MODE_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_MODE_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PREQ_MODE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_MODE_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_MODE_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE2(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE2_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE2_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE2(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE2_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE2_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE1(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE1_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE1_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE1(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE1_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE1_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE0(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE0_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE0_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE0(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE0_BP,\
									AR_PI_PMI_DBG_ERRINJ_PREQ_ENABLE0_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_PARITY(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_PARITY_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_PARITY_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_PARITY(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_PARITY_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_PARITY_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_TRIGGERED(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_TRIGGERED_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_TRIGGERED_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_TRIGGERED(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_TRIGGERED_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_TRIGGERED_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_COUNT(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_COUNT_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_COUNT_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_COUNT(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_COUNT_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_COUNT_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_MODE(mmr)              	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_MODE_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_MODE_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_MODE(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_MODE_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_MODE_MASK)
#define RF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_ENABLE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_ENABLE_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_ENABLE_MASK)
#define WF_AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_ENABLE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_ENABLE_BP,\
									AR_PI_PMI_DBG_ERRINJ_PRSP_HAL_ENABLE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PRSP_OVFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ2_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ1_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_PREQ0_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_FLG_DIAG_ONLY_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_TBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_TBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_TBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_TBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_TBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_TBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PRSP_OVFLOW(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PRSP_OVFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PRSP_OVFLOW(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PRSP_OVFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_UNFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_UNFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_UNFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_UNFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_UNFLOW(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_UNFLOW(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_SBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_SBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_SBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_SBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_SBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_SBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_MBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_MBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ2_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_MBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_MBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ1_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_MBE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_MBE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_PREQ0_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_CLR_DIAG_ONLY(mmr)               	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_CLR_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_DIAG_ONLY_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_CLR_DIAG_ONLY(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_CLR_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_CLR_DIAG_ONLY_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_TBE(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_TBE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_TBE(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_TBE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_TBE(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_TBE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PRSP_OVFLOW(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PRSP_OVFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PRSP_OVFLOW(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PRSP_OVFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_UNFLOW(mmr)        	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_UNFLOW(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_UNFLOW(mmr)        	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_UNFLOW(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_UNFLOW(mmr)        	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_UNFLOW(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_SBE(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_SBE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_SBE(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_SBE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_SBE(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_SBE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_MBE(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_MBE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ2_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_MBE(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_MBE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ1_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_MBE(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_MBE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_PREQ0_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_DIAG_ONLY(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_HSS_MSK_DIAG_ONLY(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_TBE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_TBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_TBE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_TBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_TBE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_TBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PRSP_OVFLOW(mmr)          	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PRSP_OVFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PRSP_OVFLOW(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PRSP_OVFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_UNFLOW(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_UNFLOW(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_UNFLOW(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_UNFLOW(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_UNFLOW(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_UNFLOW(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_SBE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_SBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_SBE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_SBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_SBE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_SBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_MBE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_MBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ2_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_MBE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_MBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ1_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_MBE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_MBE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_PREQ0_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_OS_MSK_DIAG_ONLY(mmr)            	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_DIAG_ONLY_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_OS_MSK_DIAG_ONLY(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_OS_MSK_DIAG_ONLY_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_TBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_TBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_TBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_TBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_TBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_TBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_TBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_TBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_TBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PRSP_OVFLOW(mmr)       	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PRSP_OVFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PRSP_OVFLOW(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PRSP_OVFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PRSP_OVFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_UNFLOW(mmr)      	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_UNFLOW(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_UNFLOW(mmr)      	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_UNFLOW(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_UNFLOW(mmr)      	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_UNFLOW_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_UNFLOW(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_UNFLOW_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_UNFLOW_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_SBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_SBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_SBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ2_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ1_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_MBE_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_MBE_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_PREQ0_MBE_MASK)
#define RF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_DIAG_ONLY(mmr)         	RD_FIELD(mmr,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define WF_AR_PI_PMI_FIFO2_ERR_FIRST_FLG_DIAG_ONLY(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_PI_PMI_FIFO2_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define RF_AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND1_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND1_MASK)
#define WF_AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND1_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND1_MASK)
#define RF_AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND0_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND0_MASK)
#define WF_AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND0_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ2_SYND0_MASK)
#define RF_AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND1_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND1_MASK)
#define WF_AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND1_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND1_MASK)
#define RF_AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND0_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND0_MASK)
#define WF_AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND0_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ1_SYND0_MASK)
#define RF_AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND1_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND1_MASK)
#define WF_AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND1_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND1_MASK)
#define RF_AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND0_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND0_MASK)
#define WF_AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND0_BP,\
									AR_PI_PMI_MBE_ERR_INFO2_PREQ0_SYND0_MASK)
#define RF_AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND1_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND1_MASK)
#define WF_AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND1_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND1_MASK)
#define RF_AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND0_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND0_MASK)
#define WF_AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND0_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ2_SYND0_MASK)
#define RF_AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND1_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND1_MASK)
#define WF_AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND1_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND1_MASK)
#define RF_AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND0_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND0_MASK)
#define WF_AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND0_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ1_SYND0_MASK)
#define RF_AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND1_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND1_MASK)
#define WF_AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND1_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND1_MASK)
#define RF_AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND0_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND0_MASK)
#define WF_AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND0_BP,\
									AR_PI_PMI_SBE_ERR_INFO2_PREQ0_SYND0_MASK)
#define RF_AR_PI_PMI_PREQ_PTC0_STALL_DURATION_MAX(mmr)          	RD_FIELD(mmr,\
									AR_PI_PMI_PREQ_PTC0_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PREQ_PTC0_STALL_DURATION_MAX_MASK)
#define WF_AR_PI_PMI_PREQ_PTC0_STALL_DURATION_MAX(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PMI_PREQ_PTC0_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PREQ_PTC0_STALL_DURATION_MAX_MASK)
#define RF_AR_PI_PMI_PREQ_PTC1_STALL_DURATION_MAX(mmr)          	RD_FIELD(mmr,\
									AR_PI_PMI_PREQ_PTC1_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PREQ_PTC1_STALL_DURATION_MAX_MASK)
#define WF_AR_PI_PMI_PREQ_PTC1_STALL_DURATION_MAX(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PMI_PREQ_PTC1_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PREQ_PTC1_STALL_DURATION_MAX_MASK)
#define RF_AR_PI_PMI_PREQ_PTC2_STALL_DURATION_MAX(mmr)          	RD_FIELD(mmr,\
									AR_PI_PMI_PREQ_PTC2_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PREQ_PTC2_STALL_DURATION_MAX_MASK)
#define WF_AR_PI_PMI_PREQ_PTC2_STALL_DURATION_MAX(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PMI_PREQ_PTC2_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PREQ_PTC2_STALL_DURATION_MAX_MASK)
#define RF_AR_PI_PMI_PREQ_HAL_STALL_DURATION_MAX(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_PREQ_HAL_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PREQ_HAL_STALL_DURATION_MAX_MASK)
#define WF_AR_PI_PMI_PREQ_HAL_STALL_DURATION_MAX(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_PREQ_HAL_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PREQ_HAL_STALL_DURATION_MAX_MASK)
#define RF_AR_PI_PMI_PRSP_HAL_STALL_DURATION_MAX(mmr)           	RD_FIELD(mmr,\
									AR_PI_PMI_PRSP_HAL_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PRSP_HAL_STALL_DURATION_MAX_MASK)
#define WF_AR_PI_PMI_PRSP_HAL_STALL_DURATION_MAX(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PMI_PRSP_HAL_STALL_DURATION_MAX_BP,\
									AR_PI_PMI_PRSP_HAL_STALL_DURATION_MAX_MASK)
#define RF_AR_PI_PII_PCLK_CFG_MSIX_TPH_ENABLE(mmr)              	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_CFG_MSIX_TPH_ENABLE_BP,\
									AR_PI_PII_PCLK_CFG_MSIX_TPH_ENABLE_MASK)
#define WF_AR_PI_PII_PCLK_CFG_MSIX_TPH_ENABLE(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_CFG_MSIX_TPH_ENABLE_BP,\
									AR_PI_PII_PCLK_CFG_MSIX_TPH_ENABLE_MASK)
#define RF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC1_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC1_MASK)
#define WF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC1_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC1_MASK)
#define RF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC0_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC0_MASK)
#define WF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC0_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_ECC0_MASK)
#define RF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_TRIGGERED(mmr)        	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_MASK)
#define WF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_TRIGGERED(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_MASK)
#define RF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SELECT(mmr)           	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SELECT_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SELECT_MASK)
#define WF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SELECT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SELECT_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_SELECT_MASK)
#define RF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_COUNT(mmr)            	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_COUNT_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_COUNT_MASK)
#define WF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_COUNT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_COUNT_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_COUNT_MASK)
#define RF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_MODE(mmr)             	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_MODE_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_MODE_MASK)
#define WF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_MODE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_MODE_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_MODE_MASK)
#define RF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_EN(mmr)               	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_EN_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_EN_MASK)
#define WF_AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_EN(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_EN_BP,\
									AR_PI_PII_PCLK_DBG_ERRINJ_FIFO_EN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_FLG_IRQ_SYNC_FIFO_OV_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F3_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F2_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F1_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FLG_F0_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED(mmr)              	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_FLG_MSG_ABORTED_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD(mmr)              	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_FLG_MSG_DISCARD_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY(mmr)                	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_FLG_DIAG_ONLY_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_IRQ_SYNC_FIFO_OV(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_CLR_IRQ_SYNC_FIFO_OV_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_IRQ_SYNC_FIFO_OV(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_CLR_IRQ_SYNC_FIFO_OV_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_MSG_FIFO_UN(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_MSG_FIFO_UN(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_MSG_FIFO_UN(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_MSG_FIFO_UN(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_MSG_FIFO_UN(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_MSG_FIFO_UN(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_MSG_FIFO_UN(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_MSG_FIFO_UN(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F3_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F2_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F1_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_SBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_SBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_MBE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_MBE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_CLR_F0_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_MSG_ABORTED(mmr)              	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_CLR_MSG_ABORTED_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_MSG_ABORTED(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_CLR_MSG_ABORTED_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_MSG_DISCARD(mmr)              	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_CLR_MSG_DISCARD_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_MSG_DISCARD(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_CLR_MSG_DISCARD_MASK)
#define RF_AR_PI_PII_PCLK_ERR_CLR_DIAG_ONLY(mmr)                	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_CLR_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_CLR_DIAG_ONLY_MASK)
#define WF_AR_PI_PII_PCLK_ERR_CLR_DIAG_ONLY(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_CLR_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_CLR_DIAG_ONLY_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_IRQ_SYNC_FIFO_OV(mmr)     	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_IRQ_SYNC_FIFO_OV_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_IRQ_SYNC_FIFO_OV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_IRQ_SYNC_FIFO_OV_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_MSG_FIFO_UN(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_MSG_FIFO_UN(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_MSG_FIFO_UN(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_MSG_FIFO_UN(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_MSG_FIFO_UN(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_MSG_FIFO_UN(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_MSG_FIFO_UN(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_MSG_FIFO_UN(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_SBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_SBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_MBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_MBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F3_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_SBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_SBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_MBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_MBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F2_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_SBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_SBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_MBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_MBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F1_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_SBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_SBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_MBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_MBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_F0_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_ABORTED(mmr)          	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_ABORTED_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_ABORTED(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_ABORTED_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_DISCARD(mmr)          	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_DISCARD_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_DISCARD(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_MSG_DISCARD_MASK)
#define RF_AR_PI_PII_PCLK_ERR_HSS_MSK_DIAG_ONLY(mmr)            	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define WF_AR_PI_PII_PCLK_ERR_HSS_MSK_DIAG_ONLY(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_IRQ_SYNC_FIFO_OV(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_IRQ_SYNC_FIFO_OV_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_IRQ_SYNC_FIFO_OV(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_IRQ_SYNC_FIFO_OV_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_MSG_FIFO_UN(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_MSG_FIFO_UN(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_MSG_FIFO_UN(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_MSG_FIFO_UN(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_MSG_FIFO_UN(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_MSG_FIFO_UN(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_MSG_FIFO_UN(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_MSG_FIFO_UN(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_SBE(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_SBE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_MBE(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_MBE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F3_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_SBE(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_SBE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_MBE(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_MBE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F2_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_SBE(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_SBE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_MBE(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_MBE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F1_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_SBE(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_SBE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_MBE(mmr)      	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_MBE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_F0_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_MSG_ABORTED(mmr)           	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_MSG_ABORTED_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_MSG_ABORTED(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_MSG_ABORTED_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_MSG_DISCARD(mmr)           	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_MSG_DISCARD_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_MSG_DISCARD(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_MSG_DISCARD_MASK)
#define RF_AR_PI_PII_PCLK_ERR_OS_MSK_DIAG_ONLY(mmr)             	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_DIAG_ONLY_MASK)
#define WF_AR_PI_PII_PCLK_ERR_OS_MSK_DIAG_ONLY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_OS_MSK_DIAG_ONLY_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_IRQ_SYNC_FIFO_OV(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_IRQ_SYNC_FIFO_OV_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_IRQ_SYNC_FIFO_OV(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_IRQ_SYNC_FIFO_OV_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_IRQ_SYNC_FIFO_OV_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_MSG_FIFO_UN(mmr)	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_MSG_FIFO_UN(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_MSG_FIFO_UN(mmr)	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_MSG_FIFO_UN(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_MSG_FIFO_UN(mmr)	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_MSG_FIFO_UN(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_MSG_FIFO_UN(mmr)	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_MSG_FIFO_UN_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_MSG_FIFO_UN(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_MSG_FIFO_UN_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_MSG_FIFO_UN_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_SBE(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_SBE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_MBE(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_MBE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F3_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_SBE(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_SBE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_MBE(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_MBE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F2_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_SBE(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_SBE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_MBE(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_MBE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F1_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_SBE(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_SBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_SBE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_SBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_SBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_MBE(mmr)   	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_MBE_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_MBE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_MBE_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_F0_MSIX_FIFO_MBE_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_ABORTED(mmr)        	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_ABORTED_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_ABORTED(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_ABORTED_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_ABORTED_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_DISCARD(mmr)        	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_DISCARD_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_DISCARD(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_DISCARD_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_MSG_DISCARD_MASK)
#define RF_AR_PI_PII_PCLK_ERR_FIRST_FLG_DIAG_ONLY(mmr)          	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define WF_AR_PI_PII_PCLK_ERR_FIRST_FLG_DIAG_ONLY(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_PI_PII_PCLK_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND1_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND1_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND0_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F3_MSIX_FIFO_SYND0_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND1_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND1_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND0_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F2_MSIX_FIFO_SYND0_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND1_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND1_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND0_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F1_MSIX_FIFO_SYND0_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND1_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND1_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND0_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MBE_F0_MSIX_FIFO_SYND0_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND1_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND1_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND0_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F3_MSIX_FIFO_SYND0_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND1_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND1_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND0_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F2_MSIX_FIFO_SYND0_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND1_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND1_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND0_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F1_MSIX_FIFO_SYND0_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND1_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND1_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND1_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND0_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND0_BP,\
									AR_PI_PII_PCLK_ERR_INFO_SBE_F0_MSIX_FIFO_SYND0_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_MSG_ADDRESS(mmr)    	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_MSG_ADDRESS_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_MSG_ADDRESS_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_MSG_ADDRESS(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_MSG_ADDRESS_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MSG_ADDR_MSG_ADDRESS_MASK)
#define RF_AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_MSG_DATA(mmr)       	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_MSG_DATA_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_MSG_DATA_MASK)
#define WF_AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_MSG_DATA(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_MSG_DATA_BP,\
									AR_PI_PII_PCLK_ERR_INFO_MSG_DATA_MSG_DATA_MASK)
#define RF_AR_PI_PII_PCLK_MSG_STALL_DURATION_MAX(mmr)           	RD_FIELD(mmr,\
									AR_PI_PII_PCLK_MSG_STALL_DURATION_MAX_BP,\
									AR_PI_PII_PCLK_MSG_STALL_DURATION_MAX_MASK)
#define WF_AR_PI_PII_PCLK_MSG_STALL_DURATION_MAX(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PII_PCLK_MSG_STALL_DURATION_MAX_BP,\
									AR_PI_PII_PCLK_MSG_STALL_DURATION_MAX_MASK)
#define RF_AR_PI_PTI_PCLK_CFG_RSP_HALT_ON_FATAL_ERROR(mmr)      	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_CFG_RSP_HALT_ON_FATAL_ERROR_BP,\
									AR_PI_PTI_PCLK_CFG_RSP_HALT_ON_FATAL_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_CFG_RSP_HALT_ON_FATAL_ERROR(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_CFG_RSP_HALT_ON_FATAL_ERROR_BP,\
									AR_PI_PTI_PCLK_CFG_RSP_HALT_ON_FATAL_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_CFG_NIF_REQ_IFIFO_AF_THRESH(mmr)      	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_CFG_NIF_REQ_IFIFO_AF_THRESH_BP,\
									AR_PI_PTI_PCLK_CFG_NIF_REQ_IFIFO_AF_THRESH_MASK)
#define WF_AR_PI_PTI_PCLK_CFG_NIF_REQ_IFIFO_AF_THRESH(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_CFG_NIF_REQ_IFIFO_AF_THRESH_BP,\
									AR_PI_PTI_PCLK_CFG_NIF_REQ_IFIFO_AF_THRESH_MASK)
#define RF_AR_PI_PTI_PCLK_CFG_LIF_REQ_IFIFO_AF_THRESH(mmr)      	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_CFG_LIF_REQ_IFIFO_AF_THRESH_BP,\
									AR_PI_PTI_PCLK_CFG_LIF_REQ_IFIFO_AF_THRESH_MASK)
#define WF_AR_PI_PTI_PCLK_CFG_LIF_REQ_IFIFO_AF_THRESH(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_CFG_LIF_REQ_IFIFO_AF_THRESH_BP,\
									AR_PI_PTI_PCLK_CFG_LIF_REQ_IFIFO_AF_THRESH_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC1_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC1_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC1_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC1_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC0_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC0_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC0_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_ECC0_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_TRIGGERED(mmr)        	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_TRIGGERED(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_TRIGGERED_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SELECT(mmr)           	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SELECT_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SELECT_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SELECT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SELECT_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_SELECT_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_COUNT(mmr)            	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_COUNT_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_COUNT_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_COUNT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_COUNT_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_COUNT_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_MODE(mmr)             	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_MODE_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_MODE_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_MODE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_MODE_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_MODE_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_EN(mmr)               	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_EN_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_EN_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_EN(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_EN_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_FIFO_EN_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_PARITY(mmr)            	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_PARITY_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_PARITY_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_PARITY(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_PARITY_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_PARITY_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_TRIGGERED(mmr)         	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_TRIGGERED_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_TRIGGERED_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_TRIGGERED(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_TRIGGERED_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_TRIGGERED_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SELECT(mmr)            	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SELECT_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SELECT_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SELECT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SELECT_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_SELECT_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_COUNT(mmr)             	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_COUNT_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_COUNT_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_COUNT(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_COUNT_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_COUNT_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_MODE(mmr)              	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_MODE_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_MODE_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_MODE(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_MODE_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_MODE_MASK)
#define RF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_EN(mmr)                	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_EN_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_EN_MASK)
#define WF_AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_EN(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_EN_BP,\
									AR_PI_PTI_PCLK_DBG_ERRINJ_HAL_EN_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR(mmr)    	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_PARITY_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR(mmr)     	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_TTYPE_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR(mmr)    	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_TREQ_HAL_WR_EOP_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE(mmr)        	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_SBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE(mmr)        	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_MBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR(mmr) 	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN(mmr)         	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_RSP_OFIFO_UN_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV(mmr)         	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_LIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV(mmr)         	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_NIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY(mmr)                	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_FLG_DIAG_ONLY_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_PARITY_ERROR(mmr)    	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_PARITY_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_PARITY_ERROR(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_PARITY_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_TTYPE_ERROR(mmr)     	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_TTYPE_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_TTYPE_ERROR(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_TTYPE_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_WR_EOP_ERROR(mmr)    	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_WR_EOP_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_WR_EOP_ERROR(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_TREQ_HAL_WR_EOP_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_SBE(mmr)        	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_SBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_SBE(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_SBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_MBE(mmr)        	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_MBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_MBE(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_MBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_TAIL_ERROR(mmr) 	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_TAIL_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_UN(mmr)         	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_UN_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_UN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_RSP_OFIFO_UN_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_LIF_REQ_IFIFO_OV(mmr)         	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_LIF_REQ_IFIFO_OV(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_LIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_NIF_REQ_IFIFO_OV(mmr)         	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_NIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_NIF_REQ_IFIFO_OV(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_NIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_CLR_DIAG_ONLY(mmr)                	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_CLR_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_DIAG_ONLY_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_CLR_DIAG_ONLY(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_CLR_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_CLR_DIAG_ONLY_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_PARITY_ERROR(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_PARITY_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_PARITY_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_PARITY_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_TTYPE_ERROR(mmr) 	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_TTYPE_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_TTYPE_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_TTYPE_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_WR_EOP_ERROR(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_WR_EOP_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_WR_EOP_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_TREQ_HAL_WR_EOP_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_SBE(mmr)    	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_SBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_SBE(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_SBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_MBE(mmr)    	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_MBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_MBE(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_MBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_TAIL_ERROR(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_TAIL_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_UN(mmr)     	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_UN_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_UN(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_RSP_OFIFO_UN_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_REQ_IFIFO_OV(mmr)     	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_REQ_IFIFO_OV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_LIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_NIF_REQ_IFIFO_OV(mmr)     	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_NIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_NIF_REQ_IFIFO_OV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_NIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_HSS_MSK_DIAG_ONLY(mmr)            	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_HSS_MSK_DIAG_ONLY(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_PARITY_ERROR(mmr) 	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_PARITY_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_PARITY_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_PARITY_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_TTYPE_ERROR(mmr)  	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_TTYPE_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_TTYPE_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_TTYPE_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_WR_EOP_ERROR(mmr) 	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_WR_EOP_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_WR_EOP_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_TREQ_HAL_WR_EOP_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_SBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_SBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_SBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_SBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_MBE(mmr)     	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_MBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_MBE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_MBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_TAIL_ERROR(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_TAIL_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_UN(mmr)      	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_UN_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_UN(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_RSP_OFIFO_UN_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_REQ_IFIFO_OV(mmr)      	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_REQ_IFIFO_OV(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_LIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_NIF_REQ_IFIFO_OV(mmr)      	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_NIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_NIF_REQ_IFIFO_OV(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_NIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_OS_MSK_DIAG_ONLY(mmr)             	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_DIAG_ONLY_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_OS_MSK_DIAG_ONLY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_OS_MSK_DIAG_ONLY_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_PARITY_ERROR(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_PARITY_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_PARITY_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_PARITY_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_TTYPE_ERROR(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_TTYPE_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_TTYPE_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_TTYPE_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_TTYPE_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_WR_EOP_ERROR(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_WR_EOP_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_WR_EOP_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_WR_EOP_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_TREQ_HAL_WR_EOP_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_SBE(mmr)  	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_SBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_SBE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_SBE_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_SBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_MBE(mmr)  	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_MBE_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_MBE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_MBE_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_MBE_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_TAIL_ERROR(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_TAIL_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_TAIL_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_TAIL_ERROR_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_UN(mmr)   	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_UN_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_UN(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_UN_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_RSP_OFIFO_UN_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_REQ_IFIFO_OV(mmr)   	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_REQ_IFIFO_OV(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_LIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_NIF_REQ_IFIFO_OV(mmr)   	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_NIF_REQ_IFIFO_OV_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_NIF_REQ_IFIFO_OV(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_NIF_REQ_IFIFO_OV_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_NIF_REQ_IFIFO_OV_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_DIAG_ONLY(mmr)          	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_FIRST_FLG_DIAG_ONLY(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_PI_PTI_PCLK_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND1(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND1_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND1_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND1_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND1_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND0(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND0_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND0_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND0_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_SBE_SYND0_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND1(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND1_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND1_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND1_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND1_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND0(mmr)	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND0_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND0_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND0_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_ECC_LIF_RSP_OFIFO_MBE_SYND0_MASK)
#define RF_AR_PI_PTI_PCLK_ERR_INFO_MISC_TREQ_PARITY_ERROR(mmr)  	RD_FIELD(mmr,\
									AR_PI_PTI_PCLK_ERR_INFO_MISC_TREQ_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_MISC_TREQ_PARITY_ERROR_MASK)
#define WF_AR_PI_PTI_PCLK_ERR_INFO_MISC_TREQ_PARITY_ERROR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PTI_PCLK_ERR_INFO_MISC_TREQ_PARITY_ERROR_BP,\
									AR_PI_PTI_PCLK_ERR_INFO_MISC_TREQ_PARITY_ERROR_MASK)
#define RF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ADDRESS(mmr)      	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ADDRESS_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ADDRESS_MASK)
#define WF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ADDRESS(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ADDRESS_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ADDRESS_MASK)
#define RF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_CHECKBITS(mmr)    	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_CHECKBITS_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_CHECKBITS_MASK)
#define WF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_CHECKBITS(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_CHECKBITS_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_CHECKBITS_MASK)
#define RF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_TRIGGERED(mmr)    	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_TRIGGERED_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_TRIGGERED_MASK)
#define WF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_TRIGGERED(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_TRIGGERED_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_TRIGGERED_MASK)
#define RF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_MODE(mmr)         	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_MODE_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_MODE_MASK)
#define WF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_MODE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_MODE_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_MODE_MASK)
#define RF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ENABLE(mmr)       	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ENABLE_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ENABLE_MASK)
#define WF_AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ENABLE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ENABLE_BP,\
									AR_PI_PM_PCLK_DBG_ERRINJ_CNTR_PERR_ENABLE_MASK)
#define RF_AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_ADDRESS(mmr)        	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_ADDRESS_BP,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_ADDRESS_MASK)
#define WF_AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_ADDRESS(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_ADDRESS_BP,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_ADDRESS_MASK)
#define RF_AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR(mmr)	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_BP,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_MASK)
#define WF_AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_BP,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_MASK)
#define RF_AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT(mmr) 	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_BP,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_MASK)
#define WF_AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_BP,\
									AR_PI_PM_PCLK_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_MASK)
#define RF_AR_PI_PM_PCLK_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE(mmr)	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_MASK)
#define WF_AR_PI_PM_PCLK_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_MASK)
#define RF_AR_PI_PM_PCLK_EVENT_CNTR_CTRL_ENABLE(mmr)            	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_ENABLE_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_ENABLE_MASK)
#define WF_AR_PI_PM_PCLK_EVENT_CNTR_CTRL_ENABLE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_ENABLE_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_ENABLE_MASK)
#define RF_AR_PI_PM_PCLK_EVENT_CNTR_CTRL_CLEAR(mmr)             	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_CLEAR_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_CLEAR_MASK)
#define WF_AR_PI_PM_PCLK_EVENT_CNTR_CTRL_CLEAR(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_CLEAR_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_CLEAR_MASK)
#define RF_AR_PI_PM_PCLK_EVENT_CNTR_CTRL_COUNTERS_CLEAR(mmr)    	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_COUNTERS_CLEAR_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_COUNTERS_CLEAR_MASK)
#define WF_AR_PI_PM_PCLK_EVENT_CNTR_CTRL_COUNTERS_CLEAR(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_COUNTERS_CLEAR_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CTRL_COUNTERS_CLEAR_MASK)
#define RF_AR_PI_PM_PCLK_EVENT_CNTR_CNT(mmr)                    	RD_FIELD(mmr,\
									AR_PI_PM_PCLK_EVENT_CNTR_CNT_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CNT_MASK)
#define WF_AR_PI_PM_PCLK_EVENT_CNTR_CNT(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_PM_PCLK_EVENT_CNTR_CNT_BP,\
									AR_PI_PM_PCLK_EVENT_CNTR_CNT_MASK)
#define RF_AR_PI_CFG_DIAG_TRANS_NO_CPU_CAPTURE(mmr)             	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_TRANS_NO_CPU_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_NO_CPU_CAPTURE_MASK)
#define WF_AR_PI_CFG_DIAG_TRANS_NO_CPU_CAPTURE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_TRANS_NO_CPU_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_NO_CPU_CAPTURE_MASK)
#define RF_AR_PI_CFG_DIAG_TRANS_CAPTURE_COUNT(mmr)              	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_COUNT_BP,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_COUNT_MASK)
#define WF_AR_PI_CFG_DIAG_TRANS_CAPTURE_COUNT(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_COUNT_BP,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_COUNT_MASK)
#define RF_AR_PI_CFG_DIAG_TRANS_CAPTURE_TYPE(mmr)               	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_TYPE_BP,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_TYPE_MASK)
#define WF_AR_PI_CFG_DIAG_TRANS_CAPTURE_TYPE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_TYPE_BP,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_TYPE_MASK)
#define RF_AR_PI_CFG_DIAG_TRANS_RESET_CAPTURE(mmr)              	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_TRANS_RESET_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_RESET_CAPTURE_MASK)
#define WF_AR_PI_CFG_DIAG_TRANS_RESET_CAPTURE(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_TRANS_RESET_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_RESET_CAPTURE_MASK)
#define RF_AR_PI_CFG_DIAG_TRANS_CAPTURE_BUS(mmr)                	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_BUS_BP,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_BUS_MASK)
#define WF_AR_PI_CFG_DIAG_TRANS_CAPTURE_BUS(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_BUS_BP,\
									AR_PI_CFG_DIAG_TRANS_CAPTURE_BUS_MASK)
#define RF_AR_PI_CFG_DIAG_TRANS_WRAP_CAPTURE(mmr)               	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_TRANS_WRAP_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_WRAP_CAPTURE_MASK)
#define WF_AR_PI_CFG_DIAG_TRANS_WRAP_CAPTURE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_TRANS_WRAP_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_WRAP_CAPTURE_MASK)
#define RF_AR_PI_CFG_DIAG_TRANS_STOP_CAPTURE(mmr)               	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_TRANS_STOP_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_STOP_CAPTURE_MASK)
#define WF_AR_PI_CFG_DIAG_TRANS_STOP_CAPTURE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_TRANS_STOP_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_STOP_CAPTURE_MASK)
#define RF_AR_PI_CFG_DIAG_TRANS_START_CAPTURE(mmr)              	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_TRANS_START_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_START_CAPTURE_MASK)
#define WF_AR_PI_CFG_DIAG_TRANS_START_CAPTURE(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_TRANS_START_CAPTURE_BP,\
									AR_PI_CFG_DIAG_TRANS_START_CAPTURE_MASK)
#define RF_AR_PI_STS_DIAG_TRANS_CAPTURE_COUNT(mmr)              	RD_FIELD(mmr,\
									AR_PI_STS_DIAG_TRANS_CAPTURE_COUNT_BP,\
									AR_PI_STS_DIAG_TRANS_CAPTURE_COUNT_MASK)
#define WF_AR_PI_STS_DIAG_TRANS_CAPTURE_COUNT(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_STS_DIAG_TRANS_CAPTURE_COUNT_BP,\
									AR_PI_STS_DIAG_TRANS_CAPTURE_COUNT_MASK)
#define RF_AR_PI_STS_DIAG_TRANS_CAPTURE_FULL(mmr)               	RD_FIELD(mmr,\
									AR_PI_STS_DIAG_TRANS_CAPTURE_FULL_BP,\
									AR_PI_STS_DIAG_TRANS_CAPTURE_FULL_MASK)
#define WF_AR_PI_STS_DIAG_TRANS_CAPTURE_FULL(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_STS_DIAG_TRANS_CAPTURE_FULL_BP,\
									AR_PI_STS_DIAG_TRANS_CAPTURE_FULL_MASK)
#define RF_AR_PI_STS_DIAG_TRANS_IN_PROGRESS(mmr)                	RD_FIELD(mmr,\
									AR_PI_STS_DIAG_TRANS_IN_PROGRESS_BP,\
									AR_PI_STS_DIAG_TRANS_IN_PROGRESS_MASK)
#define WF_AR_PI_STS_DIAG_TRANS_IN_PROGRESS(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_STS_DIAG_TRANS_IN_PROGRESS_BP,\
									AR_PI_STS_DIAG_TRANS_IN_PROGRESS_MASK)
#define RF_AR_PI_DBG_TRANS_CTL_0_CAPTURE_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_CTL_0_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_0_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_TRANS_CTL_0_CAPTURE_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_CTL_0_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_0_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_TRANS_CTL_1_CAPTURE_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_CTL_1_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_1_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_TRANS_CTL_1_CAPTURE_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_CTL_1_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_1_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_TRANS_CTL_2_CAPTURE_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_CTL_2_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_2_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_TRANS_CTL_2_CAPTURE_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_CTL_2_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_2_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_TRANS_CTL_3_CAPTURE_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_CTL_3_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_3_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_TRANS_CTL_3_CAPTURE_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_CTL_3_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_3_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_TRANS_CTL_4_CAPTURE_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_CTL_4_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_4_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_TRANS_CTL_4_CAPTURE_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_CTL_4_CAPTURE_CNTL_BP,\
									AR_PI_DBG_TRANS_CTL_4_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_TRANS_MASK_0_CAPTURE_MASK(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_MASK_0_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_0_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_TRANS_MASK_0_CAPTURE_MASK(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_MASK_0_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_0_CAPTURE_MASK_MASK)
#define RF_AR_PI_DBG_TRANS_MASK_1_CAPTURE_MASK(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_MASK_1_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_1_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_TRANS_MASK_1_CAPTURE_MASK(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_MASK_1_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_1_CAPTURE_MASK_MASK)
#define RF_AR_PI_DBG_TRANS_MASK_2_CAPTURE_MASK(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_MASK_2_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_2_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_TRANS_MASK_2_CAPTURE_MASK(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_MASK_2_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_2_CAPTURE_MASK_MASK)
#define RF_AR_PI_DBG_TRANS_MASK_3_CAPTURE_MASK(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_MASK_3_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_3_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_TRANS_MASK_3_CAPTURE_MASK(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_MASK_3_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_3_CAPTURE_MASK_MASK)
#define RF_AR_PI_DBG_TRANS_MASK_4_CAPTURE_MASK(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_TRANS_MASK_4_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_4_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_TRANS_MASK_4_CAPTURE_MASK(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_TRANS_MASK_4_CAPTURE_MASK_BP,\
									AR_PI_DBG_TRANS_MASK_4_CAPTURE_MASK_MASK)
#define RF_AR_PI_CFG_DIAG_RECV_CAPTURE_COUNT(mmr)               	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_COUNT_BP,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_COUNT_MASK)
#define WF_AR_PI_CFG_DIAG_RECV_CAPTURE_COUNT(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_COUNT_BP,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_COUNT_MASK)
#define RF_AR_PI_CFG_DIAG_RECV_CAPTURE_TYPE(mmr)                	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_TYPE_BP,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_TYPE_MASK)
#define WF_AR_PI_CFG_DIAG_RECV_CAPTURE_TYPE(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_TYPE_BP,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_TYPE_MASK)
#define RF_AR_PI_CFG_DIAG_RECV_RESET_CAPTURE(mmr)               	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_RECV_RESET_CAPTURE_BP,\
									AR_PI_CFG_DIAG_RECV_RESET_CAPTURE_MASK)
#define WF_AR_PI_CFG_DIAG_RECV_RESET_CAPTURE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_RECV_RESET_CAPTURE_BP,\
									AR_PI_CFG_DIAG_RECV_RESET_CAPTURE_MASK)
#define RF_AR_PI_CFG_DIAG_RECV_CAPTURE_BUS(mmr)                 	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_BUS_BP,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_BUS_MASK)
#define WF_AR_PI_CFG_DIAG_RECV_CAPTURE_BUS(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_BUS_BP,\
									AR_PI_CFG_DIAG_RECV_CAPTURE_BUS_MASK)
#define RF_AR_PI_CFG_DIAG_RECV_WRAP_CAPTURE(mmr)                	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_RECV_WRAP_CAPTURE_BP,\
									AR_PI_CFG_DIAG_RECV_WRAP_CAPTURE_MASK)
#define WF_AR_PI_CFG_DIAG_RECV_WRAP_CAPTURE(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_RECV_WRAP_CAPTURE_BP,\
									AR_PI_CFG_DIAG_RECV_WRAP_CAPTURE_MASK)
#define RF_AR_PI_CFG_DIAG_RECV_STOP_CAPTURE(mmr)                	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_RECV_STOP_CAPTURE_BP,\
									AR_PI_CFG_DIAG_RECV_STOP_CAPTURE_MASK)
#define WF_AR_PI_CFG_DIAG_RECV_STOP_CAPTURE(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_RECV_STOP_CAPTURE_BP,\
									AR_PI_CFG_DIAG_RECV_STOP_CAPTURE_MASK)
#define RF_AR_PI_CFG_DIAG_RECV_START_CAPTURE(mmr)               	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_RECV_START_CAPTURE_BP,\
									AR_PI_CFG_DIAG_RECV_START_CAPTURE_MASK)
#define WF_AR_PI_CFG_DIAG_RECV_START_CAPTURE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_RECV_START_CAPTURE_BP,\
									AR_PI_CFG_DIAG_RECV_START_CAPTURE_MASK)
#define RF_AR_PI_STS_DIAG_RECV_CAPTURE_COUNT(mmr)               	RD_FIELD(mmr,\
									AR_PI_STS_DIAG_RECV_CAPTURE_COUNT_BP,\
									AR_PI_STS_DIAG_RECV_CAPTURE_COUNT_MASK)
#define WF_AR_PI_STS_DIAG_RECV_CAPTURE_COUNT(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_STS_DIAG_RECV_CAPTURE_COUNT_BP,\
									AR_PI_STS_DIAG_RECV_CAPTURE_COUNT_MASK)
#define RF_AR_PI_STS_DIAG_RECV_CAPTURE_FULL(mmr)                	RD_FIELD(mmr,\
									AR_PI_STS_DIAG_RECV_CAPTURE_FULL_BP,\
									AR_PI_STS_DIAG_RECV_CAPTURE_FULL_MASK)
#define WF_AR_PI_STS_DIAG_RECV_CAPTURE_FULL(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_STS_DIAG_RECV_CAPTURE_FULL_BP,\
									AR_PI_STS_DIAG_RECV_CAPTURE_FULL_MASK)
#define RF_AR_PI_STS_DIAG_RECV_IN_PROGRESS(mmr)                 	RD_FIELD(mmr,\
									AR_PI_STS_DIAG_RECV_IN_PROGRESS_BP,\
									AR_PI_STS_DIAG_RECV_IN_PROGRESS_MASK)
#define WF_AR_PI_STS_DIAG_RECV_IN_PROGRESS(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_STS_DIAG_RECV_IN_PROGRESS_BP,\
									AR_PI_STS_DIAG_RECV_IN_PROGRESS_MASK)
#define RF_AR_PI_DBG_RECV_CTL_0_CAPTURE_CNTL(mmr)               	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_CTL_0_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_0_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_RECV_CTL_0_CAPTURE_CNTL(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_CTL_0_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_0_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_RECV_CTL_1_CAPTURE_CNTL(mmr)               	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_CTL_1_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_1_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_RECV_CTL_1_CAPTURE_CNTL(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_CTL_1_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_1_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_RECV_CTL_2_CAPTURE_CNTL(mmr)               	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_CTL_2_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_2_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_RECV_CTL_2_CAPTURE_CNTL(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_CTL_2_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_2_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_RECV_CTL_3_CAPTURE_CNTL(mmr)               	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_CTL_3_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_3_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_RECV_CTL_3_CAPTURE_CNTL(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_CTL_3_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_3_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_RECV_CTL_4_CAPTURE_CNTL(mmr)               	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_CTL_4_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_4_CAPTURE_CNTL_MASK)
#define WF_AR_PI_DBG_RECV_CTL_4_CAPTURE_CNTL(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_CTL_4_CAPTURE_CNTL_BP,\
									AR_PI_DBG_RECV_CTL_4_CAPTURE_CNTL_MASK)
#define RF_AR_PI_DBG_RECV_MASK_0_CAPTURE_MASK(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_MASK_0_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_0_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_RECV_MASK_0_CAPTURE_MASK(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_MASK_0_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_0_CAPTURE_MASK_MASK)
#define RF_AR_PI_DBG_RECV_MASK_1_CAPTURE_MASK(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_MASK_1_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_1_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_RECV_MASK_1_CAPTURE_MASK(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_MASK_1_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_1_CAPTURE_MASK_MASK)
#define RF_AR_PI_DBG_RECV_MASK_2_CAPTURE_MASK(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_MASK_2_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_2_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_RECV_MASK_2_CAPTURE_MASK(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_MASK_2_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_2_CAPTURE_MASK_MASK)
#define RF_AR_PI_DBG_RECV_MASK_3_CAPTURE_MASK(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_MASK_3_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_3_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_RECV_MASK_3_CAPTURE_MASK(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_MASK_3_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_3_CAPTURE_MASK_MASK)
#define RF_AR_PI_DBG_RECV_MASK_4_CAPTURE_MASK(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_RECV_MASK_4_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_4_CAPTURE_MASK_MASK)
#define WF_AR_PI_DBG_RECV_MASK_4_CAPTURE_MASK(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_RECV_MASK_4_CAPTURE_MASK_BP,\
									AR_PI_DBG_RECV_MASK_4_CAPTURE_MASK_MASK)
#define RF_AR_PI_DEBUG_DEN_IP_DEN_DEBUG_PORTS(mmr)              	RD_FIELD(mmr,\
									AR_PI_DEBUG_DEN_IP_DEN_DEBUG_PORTS_BP,\
									AR_PI_DEBUG_DEN_IP_DEN_DEBUG_PORTS_MASK)
#define WF_AR_PI_DEBUG_DEN_IP_DEN_DEBUG_PORTS(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DEBUG_DEN_IP_DEN_DEBUG_PORTS_BP,\
									AR_PI_DEBUG_DEN_IP_DEN_DEBUG_PORTS_MASK)
#define RF_AR_PI_CFG_DIAG_INJ_ONE_TRANS(mmr)                    	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_INJ_ONE_TRANS_BP,\
									AR_PI_CFG_DIAG_INJ_ONE_TRANS_MASK)
#define WF_AR_PI_CFG_DIAG_INJ_ONE_TRANS(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_INJ_ONE_TRANS_BP,\
									AR_PI_CFG_DIAG_INJ_ONE_TRANS_MASK)
#define RF_AR_PI_CFG_DIAG_INJ_INJECT_COUNT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_INJ_INJECT_COUNT_BP,\
									AR_PI_CFG_DIAG_INJ_INJECT_COUNT_MASK)
#define WF_AR_PI_CFG_DIAG_INJ_INJECT_COUNT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_INJ_INJECT_COUNT_BP,\
									AR_PI_CFG_DIAG_INJ_INJECT_COUNT_MASK)
#define RF_AR_PI_CFG_DIAG_INJ_RESET_INJECT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_INJ_RESET_INJECT_BP,\
									AR_PI_CFG_DIAG_INJ_RESET_INJECT_MASK)
#define WF_AR_PI_CFG_DIAG_INJ_RESET_INJECT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_INJ_RESET_INJECT_BP,\
									AR_PI_CFG_DIAG_INJ_RESET_INJECT_MASK)
#define RF_AR_PI_CFG_DIAG_INJ_STOP_INJECT(mmr)                  	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_INJ_STOP_INJECT_BP,\
									AR_PI_CFG_DIAG_INJ_STOP_INJECT_MASK)
#define WF_AR_PI_CFG_DIAG_INJ_STOP_INJECT(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_INJ_STOP_INJECT_BP,\
									AR_PI_CFG_DIAG_INJ_STOP_INJECT_MASK)
#define RF_AR_PI_CFG_DIAG_INJ_START_INJECT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_CFG_DIAG_INJ_START_INJECT_BP,\
									AR_PI_CFG_DIAG_INJ_START_INJECT_MASK)
#define WF_AR_PI_CFG_DIAG_INJ_START_INJECT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_CFG_DIAG_INJ_START_INJECT_BP,\
									AR_PI_CFG_DIAG_INJ_START_INJECT_MASK)
#define RF_AR_PI_STS_DIAG_INJ_INJECT_COUNT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_STS_DIAG_INJ_INJECT_COUNT_BP,\
									AR_PI_STS_DIAG_INJ_INJECT_COUNT_MASK)
#define WF_AR_PI_STS_DIAG_INJ_INJECT_COUNT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_STS_DIAG_INJ_INJECT_COUNT_BP,\
									AR_PI_STS_DIAG_INJ_INJECT_COUNT_MASK)
#define RF_AR_PI_STS_DIAG_INJ_INJECT_COMPLETE(mmr)              	RD_FIELD(mmr,\
									AR_PI_STS_DIAG_INJ_INJECT_COMPLETE_BP,\
									AR_PI_STS_DIAG_INJ_INJECT_COMPLETE_MASK)
#define WF_AR_PI_STS_DIAG_INJ_INJECT_COMPLETE(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_STS_DIAG_INJ_INJECT_COMPLETE_BP,\
									AR_PI_STS_DIAG_INJ_INJECT_COMPLETE_MASK)
#define RF_AR_PI_STS_DIAG_INJ_IN_PROGRESS(mmr)                  	RD_FIELD(mmr,\
									AR_PI_STS_DIAG_INJ_IN_PROGRESS_BP,\
									AR_PI_STS_DIAG_INJ_IN_PROGRESS_MASK)
#define WF_AR_PI_STS_DIAG_INJ_IN_PROGRESS(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_STS_DIAG_INJ_IN_PROGRESS_BP,\
									AR_PI_STS_DIAG_INJ_IN_PROGRESS_MASK)
#define RF_AR_PI_PCIC_MEMS_DBG_ERRINJ_ADDRESS(mmr)              	RD_FIELD(mmr,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_ADDRESS_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_ADDRESS_MASK)
#define WF_AR_PI_PCIC_MEMS_DBG_ERRINJ_ADDRESS(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_ADDRESS_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_ADDRESS_MASK)
#define RF_AR_PI_PCIC_MEMS_DBG_ERRINJ_CHECKBITS(mmr)            	RD_FIELD(mmr,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_CHECKBITS_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_CHECKBITS_MASK)
#define WF_AR_PI_PCIC_MEMS_DBG_ERRINJ_CHECKBITS(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_CHECKBITS_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_CHECKBITS_MASK)
#define RF_AR_PI_PCIC_MEMS_DBG_ERRINJ_RAMSELECT(mmr)            	RD_FIELD(mmr,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_RAMSELECT_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_RAMSELECT_MASK)
#define WF_AR_PI_PCIC_MEMS_DBG_ERRINJ_RAMSELECT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_RAMSELECT_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_RAMSELECT_MASK)
#define RF_AR_PI_PCIC_MEMS_DBG_ERRINJ_TRIGGERED(mmr)            	RD_FIELD(mmr,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_TRIGGERED_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_TRIGGERED_MASK)
#define WF_AR_PI_PCIC_MEMS_DBG_ERRINJ_TRIGGERED(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_TRIGGERED_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_TRIGGERED_MASK)
#define RF_AR_PI_PCIC_MEMS_DBG_ERRINJ_MODE(mmr)                 	RD_FIELD(mmr,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_MODE_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_MODE_MASK)
#define WF_AR_PI_PCIC_MEMS_DBG_ERRINJ_MODE(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_MODE_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_MODE_MASK)
#define RF_AR_PI_PCIC_MEMS_DBG_ERRINJ_ENABLE(mmr)               	RD_FIELD(mmr,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_ENABLE_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_ENABLE_MASK)
#define WF_AR_PI_PCIC_MEMS_DBG_ERRINJ_ENABLE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_ENABLE_BP,\
									AR_PI_PCIC_MEMS_DBG_ERRINJ_ENABLE_MASK)
#define RF_AR_PI_PHY_CSRS_CSR_DATA_Q3_A1(mmr)                   	RD_FIELD(mmr,\
									AR_PI_PHY_CSRS_CSR_DATA_Q3_A1_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q3_A1_MASK)
#define WF_AR_PI_PHY_CSRS_CSR_DATA_Q3_A1(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSRS_CSR_DATA_Q3_A1_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q3_A1_MASK)
#define RF_AR_PI_PHY_CSRS_CSR_DATA_Q2_A1(mmr)                   	RD_FIELD(mmr,\
									AR_PI_PHY_CSRS_CSR_DATA_Q2_A1_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q2_A1_MASK)
#define WF_AR_PI_PHY_CSRS_CSR_DATA_Q2_A1(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSRS_CSR_DATA_Q2_A1_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q2_A1_MASK)
#define RF_AR_PI_PHY_CSRS_CSR_DATA_Q1_A1(mmr)                   	RD_FIELD(mmr,\
									AR_PI_PHY_CSRS_CSR_DATA_Q1_A1_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q1_A1_MASK)
#define WF_AR_PI_PHY_CSRS_CSR_DATA_Q1_A1(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSRS_CSR_DATA_Q1_A1_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q1_A1_MASK)
#define RF_AR_PI_PHY_CSRS_CSR_DATA_Q0_A1(mmr)                   	RD_FIELD(mmr,\
									AR_PI_PHY_CSRS_CSR_DATA_Q0_A1_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q0_A1_MASK)
#define WF_AR_PI_PHY_CSRS_CSR_DATA_Q0_A1(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSRS_CSR_DATA_Q0_A1_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q0_A1_MASK)
#define RF_AR_PI_PHY_CSRS_CSR_DATA_Q3_A0(mmr)                   	RD_FIELD(mmr,\
									AR_PI_PHY_CSRS_CSR_DATA_Q3_A0_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q3_A0_MASK)
#define WF_AR_PI_PHY_CSRS_CSR_DATA_Q3_A0(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSRS_CSR_DATA_Q3_A0_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q3_A0_MASK)
#define RF_AR_PI_PHY_CSRS_CSR_DATA_Q2_A0(mmr)                   	RD_FIELD(mmr,\
									AR_PI_PHY_CSRS_CSR_DATA_Q2_A0_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q2_A0_MASK)
#define WF_AR_PI_PHY_CSRS_CSR_DATA_Q2_A0(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSRS_CSR_DATA_Q2_A0_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q2_A0_MASK)
#define RF_AR_PI_PHY_CSRS_CSR_DATA_Q1_A0(mmr)                   	RD_FIELD(mmr,\
									AR_PI_PHY_CSRS_CSR_DATA_Q1_A0_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q1_A0_MASK)
#define WF_AR_PI_PHY_CSRS_CSR_DATA_Q1_A0(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSRS_CSR_DATA_Q1_A0_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q1_A0_MASK)
#define RF_AR_PI_PHY_CSRS_CSR_DATA_Q0_A0(mmr)                   	RD_FIELD(mmr,\
									AR_PI_PHY_CSRS_CSR_DATA_Q0_A0_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q0_A0_MASK)
#define WF_AR_PI_PHY_CSRS_CSR_DATA_Q0_A0(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSRS_CSR_DATA_Q0_A0_BP,\
									AR_PI_PHY_CSRS_CSR_DATA_Q0_A0_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q3(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q3_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q3(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q3_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q3(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q3_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q3(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q3_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q3(mmr)  	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q3_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q3(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q3_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q2(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q2_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q2(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q2_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q2(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q2_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q2(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q2_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q2(mmr)  	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q2_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q2(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q2_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q1(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q1_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q1(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q1_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q1(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q1_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q1_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q1_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q1_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q0(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q0_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q0(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_SSC_CLK_DIV_Q0_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q0(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q0_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_GCFSM_CLK_DIV_Q0_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q0_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_9_6_Q0_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q3(mmr)  	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q3_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q3(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q3_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q3(mmr)      	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q3_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q3(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q3_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q3(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q3(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q2(mmr)  	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q2_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q2(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q2_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q2(mmr)      	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q2_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q2(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q2_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q2(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q2(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q1(mmr)  	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q1_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q1_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q1(mmr)      	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q1_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q1(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q1_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q1(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q1(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q0(mmr)  	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q0_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_NUM_CYCLES_5_0_Q0_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q0(mmr)      	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q0_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q0(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_PLL_CTRL_GOOD_STATE_Q0_MASK)
#define RF_AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q0(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q0(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_CMU_0_CMU_MASTER_CDN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q3(mmr)          	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q3(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q3(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q3(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q3(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q3(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q3(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q3(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q3(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q3(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q3(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q3(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q3(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q3(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q3(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q3(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q2(mmr)          	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q2(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q2(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q2(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q2(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q2(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q2(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q2(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q2(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q2(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q2(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q2(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q2(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q2(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q2(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q2(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q1(mmr)          	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q1(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q1(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q1(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q1(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q1(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q1(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q1(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q1(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q0(mmr)          	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q0(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_NEIM_LB_ENA_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q0(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q0(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_FES_LB_ENA_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q0(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_WORD_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_BIT_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_REG1_POL_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q0(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q0(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_WORD_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q0(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_BIT_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q0(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG1_POL_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q3(mmr)     	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q3(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q3(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q3(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q3(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q3(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q3(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q3(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q3(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q3(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q3(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q3(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q3(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q3_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q3(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q3_BP,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q3_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q2(mmr)     	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q2(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q2(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q2(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q2(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q2(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q2(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q2(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q2(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q2(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q2(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q2(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q2(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q2_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q2(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q2_BP,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q2_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q1(mmr)     	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q1(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q1(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q1(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q1(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q1(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q1(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q1(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q1(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q1(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q1(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q1_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q1(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q1_BP,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q1_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q0(mmr)     	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q0(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_DMUX_TXA_SEL_O_1_0_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q0(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q0(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_WORD_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q0(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_BIT_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q0(mmr)            	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TREG0_POL_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q0(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q0(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_SRC_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q0(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q0(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_RX_CLK_SRC_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q0(mmr)           	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q0_MASK)
#define WF_AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q0(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q0_BP,\
									AR_PI_PHY_CSR_LANE1_0_TX_CLK_SRC_O_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q3(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q3(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q3(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q3(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q3(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q3(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q3(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q3(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q3(mmr)	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q3(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q2(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q2(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q2(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q2(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q2(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q2(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q2(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q2(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q2(mmr)	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q2(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q1(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q1(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q1(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q1(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q1(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q1(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q1(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q1(mmr)	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q1(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q0(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q0(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_EBUF_EN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q0(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q0(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_QUAD_EN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q0(mmr)             	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_SAPIS_EN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q0(mmr)              	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q0(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_PIPE_EN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q0(mmr)	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q0(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RXEQ_CDR_LOCK_WAIT_3_0_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q3(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q3(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q3(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q3(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q3(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q3(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q3(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q3(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q3(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q3(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q3(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q3(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q3(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q3(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q3(mmr)    	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q3_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q3(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q3_BP,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q3_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q2(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q2(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q2(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q2(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q2(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q2(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q2(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q2(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q2(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q2(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q2(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q2(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q2(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q2(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q2(mmr)    	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q2_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q2(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q2_BP,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q2_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q1(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q1(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q1(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q1(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q1(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q1(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q1(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q1(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q1(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q1(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q1(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q1(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q1(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q1(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q1(mmr)    	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q1_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q1(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q1_BP,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q1_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q0(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q0(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_DEC_EN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q0(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q0(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_ENC_EN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q0(mmr)               	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q0(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_RLD_EN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q0(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q0(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L3_MASTER_CDN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q0(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q0(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L2_MASTER_CDN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q0(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q0(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L1_MASTER_CDN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q0(mmr)        	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q0(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_L0_MASTER_CDN_Q0_MASK)
#define RF_AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q0(mmr)    	RD_FIELD(mmr,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q0_MASK)
#define WF_AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q0(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q0_BP,\
									AR_PI_PHY_CSR_COMLANE_0_LN_MASTER_CDN_OVR_Q0_MASK)
#define RF_AR_PI_DATABAHN_CSRS_CSR_DATA_A1(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DATABAHN_CSRS_CSR_DATA_A1_BP,\
									AR_PI_DATABAHN_CSRS_CSR_DATA_A1_MASK)
#define WF_AR_PI_DATABAHN_CSRS_CSR_DATA_A1(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DATABAHN_CSRS_CSR_DATA_A1_BP,\
									AR_PI_DATABAHN_CSRS_CSR_DATA_A1_MASK)
#define RF_AR_PI_DATABAHN_CSRS_CSR_DATA_A0(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DATABAHN_CSRS_CSR_DATA_A0_BP,\
									AR_PI_DATABAHN_CSRS_CSR_DATA_A0_MASK)
#define WF_AR_PI_DATABAHN_CSRS_CSR_DATA_A0(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DATABAHN_CSRS_CSR_DATA_A0_BP,\
									AR_PI_DATABAHN_CSRS_CSR_DATA_A0_MASK)
#define RF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_BIST(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_BIST_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_BIST_MASK)
#define WF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_BIST(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_BIST_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_BIST_MASK)
#define RF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_HEADER_TYPE(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK)
#define WF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_HEADER_TYPE(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK)
#define RF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LATENCY_TIMER(mmr)  	RD_FIELD(mmr,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK)
#define WF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LATENCY_TIMER(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK)
#define RF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE(mmr)	RD_FIELD(mmr,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK)
#define WF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK)
#define RF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CLASS_CODE(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK)
#define WF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CLASS_CODE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK)
#define RF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_REVISION_ID(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_REVISION_ID_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK)
#define WF_AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_REVISION_ID(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_REVISION_ID_BP,\
									AR_PI_DB_F0_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK)
#define RF_AR_PI_DB_F0_BAR_0_1_WRITEABLE_128G(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_F0_BAR_0_1_WRITEABLE_128G_BP,\
									AR_PI_DB_F0_BAR_0_1_WRITEABLE_128G_MASK)
#define WF_AR_PI_DB_F0_BAR_0_1_WRITEABLE_128G(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_BAR_0_1_WRITEABLE_128G_BP,\
									AR_PI_DB_F0_BAR_0_1_WRITEABLE_128G_MASK)
#define RF_AR_PI_DB_F0_BAR_0_1_BASE_ADDR_HIGH(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_HIGH_BP,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_HIGH_MASK)
#define WF_AR_PI_DB_F0_BAR_0_1_BASE_ADDR_HIGH(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_HIGH_BP,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_HIGH_MASK)
#define RF_AR_PI_DB_F0_BAR_0_1_BASE_ADDR(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_BP,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_MASK)
#define WF_AR_PI_DB_F0_BAR_0_1_BASE_ADDR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_BP,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_MASK)
#define RF_AR_PI_DB_F0_BAR_0_1_READ_ONLY_128G(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_F0_BAR_0_1_READ_ONLY_128G_BP,\
									AR_PI_DB_F0_BAR_0_1_READ_ONLY_128G_MASK)
#define WF_AR_PI_DB_F0_BAR_0_1_READ_ONLY_128G(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_BAR_0_1_READ_ONLY_128G_BP,\
									AR_PI_DB_F0_BAR_0_1_READ_ONLY_128G_MASK)
#define RF_AR_PI_DB_F0_BAR_0_1_BASE_ADDR_LOW(mmr)               	RD_FIELD(mmr,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_LOW_BP,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_LOW_MASK)
#define WF_AR_PI_DB_F0_BAR_0_1_BASE_ADDR_LOW(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_LOW_BP,\
									AR_PI_DB_F0_BAR_0_1_BASE_ADDR_LOW_MASK)
#define RF_AR_PI_DB_F0_BAR_0_1_PREFETCHABILITY(mmr)             	RD_FIELD(mmr,\
									AR_PI_DB_F0_BAR_0_1_PREFETCHABILITY_BP,\
									AR_PI_DB_F0_BAR_0_1_PREFETCHABILITY_MASK)
#define WF_AR_PI_DB_F0_BAR_0_1_PREFETCHABILITY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_BAR_0_1_PREFETCHABILITY_BP,\
									AR_PI_DB_F0_BAR_0_1_PREFETCHABILITY_MASK)
#define RF_AR_PI_DB_F0_BAR_0_1_SIZE(mmr)                        	RD_FIELD(mmr,\
									AR_PI_DB_F0_BAR_0_1_SIZE_BP,\
									AR_PI_DB_F0_BAR_0_1_SIZE_MASK)
#define WF_AR_PI_DB_F0_BAR_0_1_SIZE(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_BAR_0_1_SIZE_BP,\
									AR_PI_DB_F0_BAR_0_1_SIZE_MASK)
#define RF_AR_PI_DB_F0_BAR_0_1_MEM_SPACE(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DB_F0_BAR_0_1_MEM_SPACE_BP,\
									AR_PI_DB_F0_BAR_0_1_MEM_SPACE_MASK)
#define WF_AR_PI_DB_F0_BAR_0_1_MEM_SPACE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DB_F0_BAR_0_1_MEM_SPACE_BP,\
									AR_PI_DB_F0_BAR_0_1_MEM_SPACE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_0_TABLE_OFFSET(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_0_TABLE_OFFSET_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_TABLE_OFFSET_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_0_TABLE_OFFSET(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_0_TABLE_OFFSET_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_TABLE_OFFSET_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_0_BAR_INDICATOR_EG(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_0_BAR_INDICATOR_EG_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_BAR_INDICATOR_EG_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_0_BAR_INDICATOR_EG(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_0_BAR_INDICATOR_EG_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_BAR_INDICATOR_EG_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_ENABLE(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_ENABLE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_ENABLE_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_ENABLE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_ENABLE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_ENABLE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_0_FUNCTION_MASK(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_0_FUNCTION_MASK_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_FUNCTION_MASK_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_0_FUNCTION_MASK(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_0_FUNCTION_MASK_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_FUNCTION_MASK_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_TABLE_SIZE(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_TABLE_SIZE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_TABLE_SIZE_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_TABLE_SIZE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_TABLE_SIZE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_MSI_X_TABLE_SIZE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_PTR(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_PTR_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_PTR_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_PTR(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_PTR_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_PTR_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_ID(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_ID_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_ID_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_ID(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_ID_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_0_CAPABILITY_ID_MASK)
#define RF_AR_PI_DB_MSI_X_PENDI_2E_0_PBA_OFFSET(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_PENDI_2E_0_PBA_OFFSET_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_0_PBA_OFFSET_MASK)
#define WF_AR_PI_DB_MSI_X_PENDI_2E_0_PBA_OFFSET(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_PENDI_2E_0_PBA_OFFSET_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_0_PBA_OFFSET_MASK)
#define RF_AR_PI_DB_MSI_X_PENDI_2E_0_BAR_INDICATOR_REG(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_PENDI_2E_0_BAR_INDICATOR_REG_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_0_BAR_INDICATOR_REG_MASK)
#define WF_AR_PI_DB_MSI_X_PENDI_2E_0_BAR_INDICATOR_REG(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_PENDI_2E_0_BAR_INDICATOR_REG_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_0_BAR_INDICATOR_REG_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_PORT_NUMBER(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_PORT_NUMBER_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_PORT_NUMBER_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_PORT_NUMBER(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_PORT_NUMBER_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_PORT_NUMBER_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_55(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_55_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_55_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_55(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_55_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_55_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_ASPM_OPTIONALITY_COMPLIANCE(mmr)	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_ASPM_OPTIONALITY_COMPLIANCE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_ASPM_OPTIONALITY_COMPLIANCE_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_ASPM_OPTIONALITY_COMPLIANCE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_ASPM_OPTIONALITY_COMPLIANCE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_ASPM_OPTIONALITY_COMPLIANCE_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_53(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_53_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_53_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_53(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_53_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_53_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_DATA_LINK_REPORT(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_DATA_LINK_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_DATA_LINK_REPORT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_DATA_LINK_REPORT(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_DATA_LINK_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_DATA_LINK_REPORT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_SURP_DOWN_REPORT(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_SURP_DOWN_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_SURP_DOWN_REPORT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_SURP_DOWN_REPORT(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_SURP_DOWN_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_SURP_DOWN_REPORT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_CLK_PWR_MNGT(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_CLK_PWR_MNGT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_CLK_PWR_MNGT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_CLK_PWR_MNGT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_CLK_PWR_MNGT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_CLK_PWR_MNGT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_L1_EXIT_LAT(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_L1_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_L1_EXIT_LAT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_L1_EXIT_LAT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_L1_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_L1_EXIT_LAT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_LOS_EXIT_LAT(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_LOS_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_LOS_EXIT_LAT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_LOS_EXIT_LAT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_LOS_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_LOS_EXIT_LAT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_ACTIVE_PWR_STATE(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_ACTIVE_PWR_STATE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_ACTIVE_PWR_STATE_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_ACTIVE_PWR_STATE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_ACTIVE_PWR_STATE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_ACTIVE_PWR_STATE_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_WIDTH(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_WIDTH_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_WIDTH_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_WIDTH(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_WIDTH_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_WIDTH_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_SPEED(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_SPEED_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_SPEED(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_LINK_SPEED_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_31_22(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_31_22_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_31_22_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_31_22(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_31_22_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_RESERVED_31_22_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_TRANS_PENDING(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_TRANS_PENDING_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_TRANS_PENDING_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_TRANS_PENDING(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_TRANS_PENDING_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_TRANS_PENDING_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_UNSUP_REQ_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_UNSUP_REQ_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_UNSUP_REQ_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_UNSUP_REQ_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_UNSUP_REQ_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_UNSUP_REQ_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_FATAL_ERR_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_FATAL_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_FATAL_ERR_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_FATAL_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_NON_FATAL_ERR_DET(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_NON_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_NON_FATAL_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_NON_FATAL_ERR_DET(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_NON_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_NON_FATAL_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_CORR_ERR_DET(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_CORR_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_CORR_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_CORR_ERR_DET(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_CORR_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_CORR_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_FUNC_LEVEL_RESET(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_FUNC_LEVEL_RESET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_FUNC_LEVEL_RESET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_FUNC_LEVEL_RESET(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_FUNC_LEVEL_RESET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_FUNC_LEVEL_RESET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_MAX_READ_REQ(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_READ_REQ_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_READ_REQ_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_MAX_READ_REQ(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_READ_REQ_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_READ_REQ_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_NO_SNOOP_EN(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_NO_SNOOP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_NO_SNOOP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_NO_SNOOP_EN(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_NO_SNOOP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_NO_SNOOP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_AUX_POWER_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_PHANTOM_FUNC_EN(mmr)        	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_PHANTOM_FUNC_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_PHANTOM_FUNC_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_PHANTOM_FUNC_EN(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_PHANTOM_FUNC_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_PHANTOM_FUNC_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_TAG_FIELD_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_TAG_FIELD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_TAG_FIELD_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_TAG_FIELD_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_TAG_FIELD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_TAG_FIELD_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_MAX_PAYLOAD(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_PAYLOAD_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_PAYLOAD_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_MAX_PAYLOAD(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_PAYLOAD_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_MAX_PAYLOAD_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_RELAX_ORD_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_RELAX_ORD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_RELAX_ORD_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_RELAX_ORD_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_RELAX_ORD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_RELAX_ORD_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_UNS_REQ_REP_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_UNS_REQ_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_UNS_REQ_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_UNS_REQ_REP_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_UNS_REQ_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_UNS_REQ_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_FATAL_REP_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_FATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_FATAL_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_FATAL_REP_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_FATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_FATAL_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_NONFATAL_REP_EN(mmr)        	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_NONFATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_NONFATAL_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_NONFATAL_REP_EN(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_NONFATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_NONFATAL_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_0_COR_ERR_REP_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_0_COR_ERR_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_COR_ERR_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_0_COR_ERR_REP_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_0_COR_ERR_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_0_COR_ERR_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_63_36(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_63_36_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_63_36_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_63_36(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_63_36_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_63_36_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_SUP_LINK_SPEED(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_SUP_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_SUP_LINK_SPEED_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_SUP_LINK_SPEED(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_SUP_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_SUP_LINK_SPEED_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_32(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_32_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_32_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_32(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_32_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_32_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_31_15(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_31_15_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_31_15_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_31_15(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_31_15_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_31_15_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_OBFF_EN(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_OBFF_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_OBFF_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_OBFF_EN(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_OBFF_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_OBFF_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_12_11(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_12_11_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_12_11_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_12_11(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_12_11_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_12_11_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_LTR_MECH_EN(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_LTR_MECH_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_LTR_MECH_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_LTR_MECH_EN(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_LTR_MECH_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_LTR_MECH_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_COMP(mmr)             	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_COMP_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_COMP_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_COMP(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_COMP_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_COMP_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_REQ_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_REQ_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_IDO_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_7(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_7_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_7_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_7(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_7_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_7_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_ATOM_OP_REQ_EN(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_ATOM_OP_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_ATOM_OP_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_ATOM_OP_REQ_EN(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_ATOM_OP_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_ATOM_OP_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_5(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_5_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_5_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_5(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_5_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_RESERVED_5_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_DIS(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_DIS_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_DIS_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_DIS(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_DIS_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_DIS_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_0_CMP_TIMEOUT_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_63_41(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_63_41_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_63_41_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_63_41(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_63_41_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_63_41_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_TPH_REQ_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_TPH_REQ_EN_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_TPH_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_TPH_REQ_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_TPH_REQ_EN_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_TPH_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_39_35(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_39_35_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_39_35_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_39_35(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_39_35_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_39_35_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_MODE(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_MODE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_MODE_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_MODE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_MODE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_MODE_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_31_27(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_31_27_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_31_27_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_31_27(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_31_27_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_31_27_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_SIZE(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_SIZE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_SIZE_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_SIZE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_SIZE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_SIZE_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_15_11(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_15_11_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_15_11_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_15_11(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_15_11_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_15_11_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_EXT_TPH_REG_SUP(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_EXT_TPH_REG_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_EXT_TPH_REG_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_EXT_TPH_REG_SUP(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_EXT_TPH_REG_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_EXT_TPH_REG_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_WA(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_WA_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_WA_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_WA(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_WA_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_ST_TABLE_LOC_WA_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_7_3(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_7_3_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_7_3_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_7_3(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_7_3_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_RESERVED_7_3_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_DEV_SPECMODE_SUP(mmr)   	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_DEV_SPECMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_DEV_SPECMODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_DEV_SPECMODE_SUP(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_DEV_SPECMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_DEV_SPECMODE_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_INT_VECTMODE_SUP(mmr)   	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_INT_VECTMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_INT_VECTMODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_INT_VECTMODE_SUP(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_INT_VECTMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_INT_VECTMODE_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_NO_ST_MODE_SUP(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_NO_ST_MODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_NO_ST_MODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_0_NO_ST_MODE_SUP(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_NO_ST_MODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_0_NO_ST_MODE_SUP_MASK)
#define RF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_BIST(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_BIST_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_BIST_MASK)
#define WF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_BIST(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_BIST_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_BIST_MASK)
#define RF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_HEADER_TYPE(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK)
#define WF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_HEADER_TYPE(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK)
#define RF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LATENCY_TIMER(mmr)  	RD_FIELD(mmr,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK)
#define WF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LATENCY_TIMER(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK)
#define RF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE(mmr)	RD_FIELD(mmr,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK)
#define WF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK)
#define RF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CLASS_CODE(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK)
#define WF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CLASS_CODE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK)
#define RF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_REVISION_ID(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_REVISION_ID_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK)
#define WF_AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_REVISION_ID(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_REVISION_ID_BP,\
									AR_PI_DB_F1_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK)
#define RF_AR_PI_DB_F1_BAR_0_1_BASE_ADDR_HIGH(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_HIGH_BP,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_HIGH_MASK)
#define WF_AR_PI_DB_F1_BAR_0_1_BASE_ADDR_HIGH(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_HIGH_BP,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_HIGH_MASK)
#define RF_AR_PI_DB_F1_BAR_0_1_WRITEABLE_8K(mmr)                	RD_FIELD(mmr,\
									AR_PI_DB_F1_BAR_0_1_WRITEABLE_8K_BP,\
									AR_PI_DB_F1_BAR_0_1_WRITEABLE_8K_MASK)
#define WF_AR_PI_DB_F1_BAR_0_1_WRITEABLE_8K(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_BAR_0_1_WRITEABLE_8K_BP,\
									AR_PI_DB_F1_BAR_0_1_WRITEABLE_8K_MASK)
#define RF_AR_PI_DB_F1_BAR_0_1_BASE_ADDR(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_BP,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_MASK)
#define WF_AR_PI_DB_F1_BAR_0_1_BASE_ADDR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_BP,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_MASK)
#define RF_AR_PI_DB_F1_BAR_0_1_READ_ONLY_8K(mmr)                	RD_FIELD(mmr,\
									AR_PI_DB_F1_BAR_0_1_READ_ONLY_8K_BP,\
									AR_PI_DB_F1_BAR_0_1_READ_ONLY_8K_MASK)
#define WF_AR_PI_DB_F1_BAR_0_1_READ_ONLY_8K(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_BAR_0_1_READ_ONLY_8K_BP,\
									AR_PI_DB_F1_BAR_0_1_READ_ONLY_8K_MASK)
#define RF_AR_PI_DB_F1_BAR_0_1_BASE_ADDR_LOW(mmr)               	RD_FIELD(mmr,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_LOW_BP,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_LOW_MASK)
#define WF_AR_PI_DB_F1_BAR_0_1_BASE_ADDR_LOW(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_LOW_BP,\
									AR_PI_DB_F1_BAR_0_1_BASE_ADDR_LOW_MASK)
#define RF_AR_PI_DB_F1_BAR_0_1_PREFETCHABILITY(mmr)             	RD_FIELD(mmr,\
									AR_PI_DB_F1_BAR_0_1_PREFETCHABILITY_BP,\
									AR_PI_DB_F1_BAR_0_1_PREFETCHABILITY_MASK)
#define WF_AR_PI_DB_F1_BAR_0_1_PREFETCHABILITY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_BAR_0_1_PREFETCHABILITY_BP,\
									AR_PI_DB_F1_BAR_0_1_PREFETCHABILITY_MASK)
#define RF_AR_PI_DB_F1_BAR_0_1_SIZE(mmr)                        	RD_FIELD(mmr,\
									AR_PI_DB_F1_BAR_0_1_SIZE_BP,\
									AR_PI_DB_F1_BAR_0_1_SIZE_MASK)
#define WF_AR_PI_DB_F1_BAR_0_1_SIZE(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_BAR_0_1_SIZE_BP,\
									AR_PI_DB_F1_BAR_0_1_SIZE_MASK)
#define RF_AR_PI_DB_F1_BAR_0_1_MEM_SPACE(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DB_F1_BAR_0_1_MEM_SPACE_BP,\
									AR_PI_DB_F1_BAR_0_1_MEM_SPACE_MASK)
#define WF_AR_PI_DB_F1_BAR_0_1_MEM_SPACE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DB_F1_BAR_0_1_MEM_SPACE_BP,\
									AR_PI_DB_F1_BAR_0_1_MEM_SPACE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_1_TABLE_OFFSET(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_1_TABLE_OFFSET_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_TABLE_OFFSET_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_1_TABLE_OFFSET(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_1_TABLE_OFFSET_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_TABLE_OFFSET_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_1_BAR_INDICATOR_EG(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_1_BAR_INDICATOR_EG_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_BAR_INDICATOR_EG_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_1_BAR_INDICATOR_EG(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_1_BAR_INDICATOR_EG_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_BAR_INDICATOR_EG_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_ENABLE(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_ENABLE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_ENABLE_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_ENABLE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_ENABLE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_ENABLE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_1_FUNCTION_MASK(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_1_FUNCTION_MASK_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_FUNCTION_MASK_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_1_FUNCTION_MASK(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_1_FUNCTION_MASK_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_FUNCTION_MASK_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_TABLE_SIZE(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_TABLE_SIZE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_TABLE_SIZE_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_TABLE_SIZE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_TABLE_SIZE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_MSI_X_TABLE_SIZE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_PTR(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_PTR_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_PTR_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_PTR(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_PTR_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_PTR_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_ID(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_ID_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_ID_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_ID(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_ID_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_1_CAPABILITY_ID_MASK)
#define RF_AR_PI_DB_MSI_X_PENDI_2E_1_PBA_OFFSET(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_PENDI_2E_1_PBA_OFFSET_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_1_PBA_OFFSET_MASK)
#define WF_AR_PI_DB_MSI_X_PENDI_2E_1_PBA_OFFSET(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_PENDI_2E_1_PBA_OFFSET_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_1_PBA_OFFSET_MASK)
#define RF_AR_PI_DB_MSI_X_PENDI_2E_1_BAR_INDICATOR_REG(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_PENDI_2E_1_BAR_INDICATOR_REG_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_1_BAR_INDICATOR_REG_MASK)
#define WF_AR_PI_DB_MSI_X_PENDI_2E_1_BAR_INDICATOR_REG(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_PENDI_2E_1_BAR_INDICATOR_REG_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_1_BAR_INDICATOR_REG_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_PORT_NUMBER(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_PORT_NUMBER_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_PORT_NUMBER_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_PORT_NUMBER(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_PORT_NUMBER_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_PORT_NUMBER_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_55(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_55_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_55_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_55(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_55_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_55_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_ASPM_OPTIONALITY_COMPLIANCE(mmr)	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_ASPM_OPTIONALITY_COMPLIANCE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_ASPM_OPTIONALITY_COMPLIANCE_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_ASPM_OPTIONALITY_COMPLIANCE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_ASPM_OPTIONALITY_COMPLIANCE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_ASPM_OPTIONALITY_COMPLIANCE_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_53(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_53_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_53_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_53(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_53_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_53_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_DATA_LINK_REPORT(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_DATA_LINK_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_DATA_LINK_REPORT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_DATA_LINK_REPORT(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_DATA_LINK_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_DATA_LINK_REPORT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_SURP_DOWN_REPORT(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_SURP_DOWN_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_SURP_DOWN_REPORT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_SURP_DOWN_REPORT(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_SURP_DOWN_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_SURP_DOWN_REPORT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_CLK_PWR_MNGT(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_CLK_PWR_MNGT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_CLK_PWR_MNGT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_CLK_PWR_MNGT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_CLK_PWR_MNGT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_CLK_PWR_MNGT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_L1_EXIT_LAT(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_L1_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_L1_EXIT_LAT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_L1_EXIT_LAT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_L1_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_L1_EXIT_LAT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_LOS_EXIT_LAT(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_LOS_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_LOS_EXIT_LAT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_LOS_EXIT_LAT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_LOS_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_LOS_EXIT_LAT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_ACTIVE_PWR_STATE(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_ACTIVE_PWR_STATE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_ACTIVE_PWR_STATE_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_ACTIVE_PWR_STATE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_ACTIVE_PWR_STATE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_ACTIVE_PWR_STATE_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_WIDTH(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_WIDTH_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_WIDTH_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_WIDTH(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_WIDTH_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_WIDTH_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_SPEED(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_SPEED_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_SPEED(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_LINK_SPEED_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_31_22(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_31_22_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_31_22_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_31_22(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_31_22_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_RESERVED_31_22_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_TRANS_PENDING(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_TRANS_PENDING_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_TRANS_PENDING_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_TRANS_PENDING(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_TRANS_PENDING_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_TRANS_PENDING_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_UNSUP_REQ_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_UNSUP_REQ_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_UNSUP_REQ_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_UNSUP_REQ_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_UNSUP_REQ_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_UNSUP_REQ_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_FATAL_ERR_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_FATAL_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_FATAL_ERR_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_FATAL_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_NON_FATAL_ERR_DET(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_NON_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_NON_FATAL_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_NON_FATAL_ERR_DET(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_NON_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_NON_FATAL_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_CORR_ERR_DET(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_CORR_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_CORR_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_CORR_ERR_DET(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_CORR_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_CORR_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_FUNC_LEVEL_RESET(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_FUNC_LEVEL_RESET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_FUNC_LEVEL_RESET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_FUNC_LEVEL_RESET(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_FUNC_LEVEL_RESET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_FUNC_LEVEL_RESET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_MAX_READ_REQ(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_READ_REQ_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_READ_REQ_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_MAX_READ_REQ(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_READ_REQ_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_READ_REQ_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_NO_SNOOP_EN(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_NO_SNOOP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_NO_SNOOP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_NO_SNOOP_EN(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_NO_SNOOP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_NO_SNOOP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_AUX_POWER_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_PHANTOM_FUNC_EN(mmr)        	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_PHANTOM_FUNC_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_PHANTOM_FUNC_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_PHANTOM_FUNC_EN(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_PHANTOM_FUNC_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_PHANTOM_FUNC_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_TAG_FIELD_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_TAG_FIELD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_TAG_FIELD_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_TAG_FIELD_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_TAG_FIELD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_TAG_FIELD_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_MAX_PAYLOAD(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_PAYLOAD_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_PAYLOAD_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_MAX_PAYLOAD(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_PAYLOAD_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_MAX_PAYLOAD_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_RELAX_ORD_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_RELAX_ORD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_RELAX_ORD_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_RELAX_ORD_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_RELAX_ORD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_RELAX_ORD_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_UNS_REQ_REP_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_UNS_REQ_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_UNS_REQ_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_UNS_REQ_REP_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_UNS_REQ_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_UNS_REQ_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_FATAL_REP_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_FATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_FATAL_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_FATAL_REP_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_FATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_FATAL_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_NONFATAL_REP_EN(mmr)        	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_NONFATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_NONFATAL_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_NONFATAL_REP_EN(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_NONFATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_NONFATAL_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_1_COR_ERR_REP_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_1_COR_ERR_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_COR_ERR_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_1_COR_ERR_REP_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_1_COR_ERR_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_1_COR_ERR_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_63_36(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_63_36_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_63_36_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_63_36(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_63_36_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_63_36_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_SUP_LINK_SPEED(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_SUP_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_SUP_LINK_SPEED_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_SUP_LINK_SPEED(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_SUP_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_SUP_LINK_SPEED_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_32(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_32_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_32_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_32(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_32_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_32_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_31_15(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_31_15_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_31_15_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_31_15(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_31_15_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_31_15_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_OBFF_EN(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_OBFF_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_OBFF_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_OBFF_EN(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_OBFF_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_OBFF_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_12_11(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_12_11_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_12_11_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_12_11(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_12_11_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_12_11_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_LTR_MECH_EN(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_LTR_MECH_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_LTR_MECH_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_LTR_MECH_EN(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_LTR_MECH_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_LTR_MECH_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_COMP(mmr)             	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_COMP_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_COMP_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_COMP(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_COMP_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_COMP_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_REQ_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_REQ_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_IDO_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_7(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_7_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_7_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_7(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_7_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_7_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_ATOM_OP_REQ_EN(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_ATOM_OP_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_ATOM_OP_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_ATOM_OP_REQ_EN(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_ATOM_OP_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_ATOM_OP_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_5(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_5_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_5_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_5(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_5_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_RESERVED_5_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_DIS(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_DIS_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_DIS_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_DIS(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_DIS_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_DIS_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_1_CMP_TIMEOUT_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_63_41(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_63_41_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_63_41_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_63_41(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_63_41_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_63_41_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_TPH_REQ_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_TPH_REQ_EN_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_TPH_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_TPH_REQ_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_TPH_REQ_EN_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_TPH_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_39_35(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_39_35_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_39_35_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_39_35(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_39_35_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_39_35_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_MODE(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_MODE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_MODE_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_MODE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_MODE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_MODE_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_31_27(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_31_27_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_31_27_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_31_27(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_31_27_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_31_27_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_SIZE(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_SIZE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_SIZE_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_SIZE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_SIZE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_SIZE_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_15_11(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_15_11_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_15_11_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_15_11(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_15_11_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_15_11_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_EXT_TPH_REG_SUP(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_EXT_TPH_REG_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_EXT_TPH_REG_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_EXT_TPH_REG_SUP(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_EXT_TPH_REG_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_EXT_TPH_REG_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_WA(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_WA_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_WA_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_WA(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_WA_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_ST_TABLE_LOC_WA_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_7_3(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_7_3_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_7_3_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_7_3(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_7_3_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_RESERVED_7_3_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_DEV_SPECMODE_SUP(mmr)   	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_DEV_SPECMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_DEV_SPECMODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_DEV_SPECMODE_SUP(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_DEV_SPECMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_DEV_SPECMODE_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_INT_VECTMODE_SUP(mmr)   	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_INT_VECTMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_INT_VECTMODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_INT_VECTMODE_SUP(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_INT_VECTMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_INT_VECTMODE_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_NO_ST_MODE_SUP(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_NO_ST_MODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_NO_ST_MODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_1_NO_ST_MODE_SUP(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_NO_ST_MODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_1_NO_ST_MODE_SUP_MASK)
#define RF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_BIST(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_BIST_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_BIST_MASK)
#define WF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_BIST(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_BIST_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_BIST_MASK)
#define RF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_HEADER_TYPE(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK)
#define WF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_HEADER_TYPE(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK)
#define RF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LATENCY_TIMER(mmr)  	RD_FIELD(mmr,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK)
#define WF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LATENCY_TIMER(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK)
#define RF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE(mmr)	RD_FIELD(mmr,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK)
#define WF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK)
#define RF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CLASS_CODE(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK)
#define WF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CLASS_CODE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK)
#define RF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_REVISION_ID(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_REVISION_ID_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK)
#define WF_AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_REVISION_ID(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_REVISION_ID_BP,\
									AR_PI_DB_F2_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK)
#define RF_AR_PI_DB_F2_BAR_0_1_BASE_ADDR_HIGH(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_HIGH_BP,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_HIGH_MASK)
#define WF_AR_PI_DB_F2_BAR_0_1_BASE_ADDR_HIGH(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_HIGH_BP,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_HIGH_MASK)
#define RF_AR_PI_DB_F2_BAR_0_1_WRITEABLE_8K(mmr)                	RD_FIELD(mmr,\
									AR_PI_DB_F2_BAR_0_1_WRITEABLE_8K_BP,\
									AR_PI_DB_F2_BAR_0_1_WRITEABLE_8K_MASK)
#define WF_AR_PI_DB_F2_BAR_0_1_WRITEABLE_8K(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_BAR_0_1_WRITEABLE_8K_BP,\
									AR_PI_DB_F2_BAR_0_1_WRITEABLE_8K_MASK)
#define RF_AR_PI_DB_F2_BAR_0_1_BASE_ADDR(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_BP,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_MASK)
#define WF_AR_PI_DB_F2_BAR_0_1_BASE_ADDR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_BP,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_MASK)
#define RF_AR_PI_DB_F2_BAR_0_1_READ_ONLY_8K(mmr)                	RD_FIELD(mmr,\
									AR_PI_DB_F2_BAR_0_1_READ_ONLY_8K_BP,\
									AR_PI_DB_F2_BAR_0_1_READ_ONLY_8K_MASK)
#define WF_AR_PI_DB_F2_BAR_0_1_READ_ONLY_8K(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_BAR_0_1_READ_ONLY_8K_BP,\
									AR_PI_DB_F2_BAR_0_1_READ_ONLY_8K_MASK)
#define RF_AR_PI_DB_F2_BAR_0_1_BASE_ADDR_LOW(mmr)               	RD_FIELD(mmr,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_LOW_BP,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_LOW_MASK)
#define WF_AR_PI_DB_F2_BAR_0_1_BASE_ADDR_LOW(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_LOW_BP,\
									AR_PI_DB_F2_BAR_0_1_BASE_ADDR_LOW_MASK)
#define RF_AR_PI_DB_F2_BAR_0_1_PREFETCHABILITY(mmr)             	RD_FIELD(mmr,\
									AR_PI_DB_F2_BAR_0_1_PREFETCHABILITY_BP,\
									AR_PI_DB_F2_BAR_0_1_PREFETCHABILITY_MASK)
#define WF_AR_PI_DB_F2_BAR_0_1_PREFETCHABILITY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_BAR_0_1_PREFETCHABILITY_BP,\
									AR_PI_DB_F2_BAR_0_1_PREFETCHABILITY_MASK)
#define RF_AR_PI_DB_F2_BAR_0_1_SIZE(mmr)                        	RD_FIELD(mmr,\
									AR_PI_DB_F2_BAR_0_1_SIZE_BP,\
									AR_PI_DB_F2_BAR_0_1_SIZE_MASK)
#define WF_AR_PI_DB_F2_BAR_0_1_SIZE(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_BAR_0_1_SIZE_BP,\
									AR_PI_DB_F2_BAR_0_1_SIZE_MASK)
#define RF_AR_PI_DB_F2_BAR_0_1_MEM_SPACE(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DB_F2_BAR_0_1_MEM_SPACE_BP,\
									AR_PI_DB_F2_BAR_0_1_MEM_SPACE_MASK)
#define WF_AR_PI_DB_F2_BAR_0_1_MEM_SPACE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DB_F2_BAR_0_1_MEM_SPACE_BP,\
									AR_PI_DB_F2_BAR_0_1_MEM_SPACE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_2_TABLE_OFFSET(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_2_TABLE_OFFSET_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_TABLE_OFFSET_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_2_TABLE_OFFSET(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_2_TABLE_OFFSET_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_TABLE_OFFSET_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_2_BAR_INDICATOR_EG(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_2_BAR_INDICATOR_EG_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_BAR_INDICATOR_EG_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_2_BAR_INDICATOR_EG(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_2_BAR_INDICATOR_EG_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_BAR_INDICATOR_EG_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_ENABLE(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_ENABLE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_ENABLE_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_ENABLE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_ENABLE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_ENABLE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_2_FUNCTION_MASK(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_2_FUNCTION_MASK_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_FUNCTION_MASK_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_2_FUNCTION_MASK(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_2_FUNCTION_MASK_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_FUNCTION_MASK_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_TABLE_SIZE(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_TABLE_SIZE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_TABLE_SIZE_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_TABLE_SIZE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_TABLE_SIZE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_MSI_X_TABLE_SIZE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_PTR(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_PTR_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_PTR_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_PTR(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_PTR_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_PTR_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_ID(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_ID_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_ID_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_ID(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_ID_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_2_CAPABILITY_ID_MASK)
#define RF_AR_PI_DB_MSI_X_PENDI_2E_2_PBA_OFFSET(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_PENDI_2E_2_PBA_OFFSET_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_2_PBA_OFFSET_MASK)
#define WF_AR_PI_DB_MSI_X_PENDI_2E_2_PBA_OFFSET(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_PENDI_2E_2_PBA_OFFSET_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_2_PBA_OFFSET_MASK)
#define RF_AR_PI_DB_MSI_X_PENDI_2E_2_BAR_INDICATOR_REG(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_PENDI_2E_2_BAR_INDICATOR_REG_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_2_BAR_INDICATOR_REG_MASK)
#define WF_AR_PI_DB_MSI_X_PENDI_2E_2_BAR_INDICATOR_REG(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_PENDI_2E_2_BAR_INDICATOR_REG_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_2_BAR_INDICATOR_REG_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_PORT_NUMBER(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_PORT_NUMBER_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_PORT_NUMBER_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_PORT_NUMBER(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_PORT_NUMBER_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_PORT_NUMBER_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_55(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_55_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_55_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_55(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_55_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_55_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_ASPM_OPTIONALITY_COMPLIANCE(mmr)	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_ASPM_OPTIONALITY_COMPLIANCE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_ASPM_OPTIONALITY_COMPLIANCE_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_ASPM_OPTIONALITY_COMPLIANCE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_ASPM_OPTIONALITY_COMPLIANCE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_ASPM_OPTIONALITY_COMPLIANCE_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_53(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_53_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_53_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_53(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_53_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_53_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_DATA_LINK_REPORT(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_DATA_LINK_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_DATA_LINK_REPORT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_DATA_LINK_REPORT(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_DATA_LINK_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_DATA_LINK_REPORT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_SURP_DOWN_REPORT(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_SURP_DOWN_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_SURP_DOWN_REPORT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_SURP_DOWN_REPORT(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_SURP_DOWN_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_SURP_DOWN_REPORT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_CLK_PWR_MNGT(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_CLK_PWR_MNGT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_CLK_PWR_MNGT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_CLK_PWR_MNGT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_CLK_PWR_MNGT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_CLK_PWR_MNGT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_L1_EXIT_LAT(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_L1_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_L1_EXIT_LAT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_L1_EXIT_LAT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_L1_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_L1_EXIT_LAT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_LOS_EXIT_LAT(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_LOS_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_LOS_EXIT_LAT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_LOS_EXIT_LAT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_LOS_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_LOS_EXIT_LAT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_ACTIVE_PWR_STATE(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_ACTIVE_PWR_STATE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_ACTIVE_PWR_STATE_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_ACTIVE_PWR_STATE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_ACTIVE_PWR_STATE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_ACTIVE_PWR_STATE_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_WIDTH(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_WIDTH_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_WIDTH_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_WIDTH(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_WIDTH_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_WIDTH_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_SPEED(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_SPEED_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_SPEED(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_LINK_SPEED_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_31_22(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_31_22_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_31_22_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_31_22(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_31_22_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_RESERVED_31_22_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_TRANS_PENDING(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_TRANS_PENDING_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_TRANS_PENDING_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_TRANS_PENDING(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_TRANS_PENDING_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_TRANS_PENDING_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_UNSUP_REQ_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_UNSUP_REQ_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_UNSUP_REQ_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_UNSUP_REQ_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_UNSUP_REQ_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_UNSUP_REQ_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_FATAL_ERR_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_FATAL_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_FATAL_ERR_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_FATAL_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_NON_FATAL_ERR_DET(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_NON_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_NON_FATAL_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_NON_FATAL_ERR_DET(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_NON_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_NON_FATAL_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_CORR_ERR_DET(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_CORR_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_CORR_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_CORR_ERR_DET(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_CORR_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_CORR_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_FUNC_LEVEL_RESET(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_FUNC_LEVEL_RESET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_FUNC_LEVEL_RESET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_FUNC_LEVEL_RESET(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_FUNC_LEVEL_RESET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_FUNC_LEVEL_RESET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_MAX_READ_REQ(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_READ_REQ_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_READ_REQ_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_MAX_READ_REQ(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_READ_REQ_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_READ_REQ_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_NO_SNOOP_EN(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_NO_SNOOP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_NO_SNOOP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_NO_SNOOP_EN(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_NO_SNOOP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_NO_SNOOP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_AUX_POWER_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_PHANTOM_FUNC_EN(mmr)        	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_PHANTOM_FUNC_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_PHANTOM_FUNC_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_PHANTOM_FUNC_EN(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_PHANTOM_FUNC_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_PHANTOM_FUNC_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_TAG_FIELD_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_TAG_FIELD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_TAG_FIELD_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_TAG_FIELD_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_TAG_FIELD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_TAG_FIELD_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_MAX_PAYLOAD(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_PAYLOAD_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_PAYLOAD_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_MAX_PAYLOAD(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_PAYLOAD_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_MAX_PAYLOAD_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_RELAX_ORD_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_RELAX_ORD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_RELAX_ORD_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_RELAX_ORD_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_RELAX_ORD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_RELAX_ORD_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_UNS_REQ_REP_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_UNS_REQ_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_UNS_REQ_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_UNS_REQ_REP_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_UNS_REQ_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_UNS_REQ_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_FATAL_REP_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_FATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_FATAL_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_FATAL_REP_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_FATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_FATAL_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_NONFATAL_REP_EN(mmr)        	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_NONFATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_NONFATAL_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_NONFATAL_REP_EN(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_NONFATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_NONFATAL_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_COR_ERR_REP_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_COR_ERR_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_COR_ERR_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_COR_ERR_REP_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_COR_ERR_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_COR_ERR_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_63_36(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_63_36_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_63_36_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_63_36(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_63_36_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_63_36_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_SUP_LINK_SPEED(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_SUP_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_SUP_LINK_SPEED_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_SUP_LINK_SPEED(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_SUP_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_SUP_LINK_SPEED_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_32(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_32_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_32_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_32(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_32_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_32_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_31_15(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_31_15_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_31_15_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_31_15(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_31_15_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_31_15_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_OBFF_EN(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_OBFF_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_OBFF_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_OBFF_EN(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_OBFF_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_OBFF_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_12_11(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_12_11_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_12_11_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_12_11(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_12_11_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_12_11_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_LTR_MECH_EN(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_LTR_MECH_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_LTR_MECH_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_LTR_MECH_EN(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_LTR_MECH_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_LTR_MECH_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_COMP(mmr)             	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_COMP_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_COMP_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_COMP(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_COMP_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_COMP_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_REQ_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_REQ_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_IDO_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_7(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_7_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_7_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_7(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_7_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_7_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_ATOM_OP_REQ_EN(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_ATOM_OP_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_ATOM_OP_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_ATOM_OP_REQ_EN(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_ATOM_OP_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_ATOM_OP_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_5(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_5_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_5_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_5(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_5_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_RESERVED_5_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_DIS(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_DIS_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_DIS_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_DIS(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_DIS_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_DIS_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_2_CMP_TIMEOUT_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_63_41(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_63_41_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_63_41_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_63_41(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_63_41_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_63_41_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_TPH_REQ_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_TPH_REQ_EN_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_TPH_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_TPH_REQ_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_TPH_REQ_EN_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_TPH_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_39_35(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_39_35_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_39_35_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_39_35(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_39_35_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_39_35_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_MODE(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_MODE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_MODE_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_MODE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_MODE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_MODE_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_31_27(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_31_27_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_31_27_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_31_27(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_31_27_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_31_27_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_SIZE(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_SIZE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_SIZE_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_SIZE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_SIZE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_SIZE_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_15_11(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_15_11_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_15_11_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_15_11(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_15_11_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_15_11_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_EXT_TPH_REG_SUP(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_EXT_TPH_REG_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_EXT_TPH_REG_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_EXT_TPH_REG_SUP(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_EXT_TPH_REG_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_EXT_TPH_REG_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_WA(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_WA_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_WA_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_WA(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_WA_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_ST_TABLE_LOC_WA_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_7_3(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_7_3_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_7_3_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_7_3(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_7_3_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_RESERVED_7_3_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_DEV_SPECMODE_SUP(mmr)   	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_DEV_SPECMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_DEV_SPECMODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_DEV_SPECMODE_SUP(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_DEV_SPECMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_DEV_SPECMODE_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_INT_VECTMODE_SUP(mmr)   	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_INT_VECTMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_INT_VECTMODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_INT_VECTMODE_SUP(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_INT_VECTMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_INT_VECTMODE_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_NO_ST_MODE_SUP(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_NO_ST_MODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_NO_ST_MODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_2_NO_ST_MODE_SUP(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_NO_ST_MODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_2_NO_ST_MODE_SUP_MASK)
#define RF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_BIST(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_BIST_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_BIST_MASK)
#define WF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_BIST(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_BIST_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_BIST_MASK)
#define RF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_HEADER_TYPE(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK)
#define WF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_HEADER_TYPE(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_HEADER_TYPE_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_HEADER_TYPE_MASK)
#define RF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LATENCY_TIMER(mmr)  	RD_FIELD(mmr,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK)
#define WF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LATENCY_TIMER(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_LATENCY_TIMER_MASK)
#define RF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE(mmr)	RD_FIELD(mmr,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK)
#define WF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CACHE_LINE_SIZE_MASK)
#define RF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CLASS_CODE(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK)
#define WF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CLASS_CODE(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CLASS_CODE_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_CLASS_CODE_MASK)
#define RF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_REVISION_ID(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_REVISION_ID_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK)
#define WF_AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_REVISION_ID(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_REVISION_ID_BP,\
									AR_PI_DB_F3_DB_REV_ID_CLASS_CODE_REVISION_ID_MASK)
#define RF_AR_PI_DB_F3_BAR_0_1_BASE_ADDR_HIGH(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_HIGH_BP,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_HIGH_MASK)
#define WF_AR_PI_DB_F3_BAR_0_1_BASE_ADDR_HIGH(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_HIGH_BP,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_HIGH_MASK)
#define RF_AR_PI_DB_F3_BAR_0_1_WRITEABLE_8K(mmr)                	RD_FIELD(mmr,\
									AR_PI_DB_F3_BAR_0_1_WRITEABLE_8K_BP,\
									AR_PI_DB_F3_BAR_0_1_WRITEABLE_8K_MASK)
#define WF_AR_PI_DB_F3_BAR_0_1_WRITEABLE_8K(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_BAR_0_1_WRITEABLE_8K_BP,\
									AR_PI_DB_F3_BAR_0_1_WRITEABLE_8K_MASK)
#define RF_AR_PI_DB_F3_BAR_0_1_BASE_ADDR(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_BP,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_MASK)
#define WF_AR_PI_DB_F3_BAR_0_1_BASE_ADDR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_BP,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_MASK)
#define RF_AR_PI_DB_F3_BAR_0_1_READ_ONLY_8K(mmr)                	RD_FIELD(mmr,\
									AR_PI_DB_F3_BAR_0_1_READ_ONLY_8K_BP,\
									AR_PI_DB_F3_BAR_0_1_READ_ONLY_8K_MASK)
#define WF_AR_PI_DB_F3_BAR_0_1_READ_ONLY_8K(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_BAR_0_1_READ_ONLY_8K_BP,\
									AR_PI_DB_F3_BAR_0_1_READ_ONLY_8K_MASK)
#define RF_AR_PI_DB_F3_BAR_0_1_BASE_ADDR_LOW(mmr)               	RD_FIELD(mmr,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_LOW_BP,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_LOW_MASK)
#define WF_AR_PI_DB_F3_BAR_0_1_BASE_ADDR_LOW(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_LOW_BP,\
									AR_PI_DB_F3_BAR_0_1_BASE_ADDR_LOW_MASK)
#define RF_AR_PI_DB_F3_BAR_0_1_PREFETCHABILITY(mmr)             	RD_FIELD(mmr,\
									AR_PI_DB_F3_BAR_0_1_PREFETCHABILITY_BP,\
									AR_PI_DB_F3_BAR_0_1_PREFETCHABILITY_MASK)
#define WF_AR_PI_DB_F3_BAR_0_1_PREFETCHABILITY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_BAR_0_1_PREFETCHABILITY_BP,\
									AR_PI_DB_F3_BAR_0_1_PREFETCHABILITY_MASK)
#define RF_AR_PI_DB_F3_BAR_0_1_SIZE(mmr)                        	RD_FIELD(mmr,\
									AR_PI_DB_F3_BAR_0_1_SIZE_BP,\
									AR_PI_DB_F3_BAR_0_1_SIZE_MASK)
#define WF_AR_PI_DB_F3_BAR_0_1_SIZE(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_BAR_0_1_SIZE_BP,\
									AR_PI_DB_F3_BAR_0_1_SIZE_MASK)
#define RF_AR_PI_DB_F3_BAR_0_1_MEM_SPACE(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DB_F3_BAR_0_1_MEM_SPACE_BP,\
									AR_PI_DB_F3_BAR_0_1_MEM_SPACE_MASK)
#define WF_AR_PI_DB_F3_BAR_0_1_MEM_SPACE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DB_F3_BAR_0_1_MEM_SPACE_BP,\
									AR_PI_DB_F3_BAR_0_1_MEM_SPACE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_3_TABLE_OFFSET(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_3_TABLE_OFFSET_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_TABLE_OFFSET_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_3_TABLE_OFFSET(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_3_TABLE_OFFSET_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_TABLE_OFFSET_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_3_BAR_INDICATOR_EG(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_3_BAR_INDICATOR_EG_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_BAR_INDICATOR_EG_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_3_BAR_INDICATOR_EG(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_3_BAR_INDICATOR_EG_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_BAR_INDICATOR_EG_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_ENABLE(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_ENABLE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_ENABLE_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_ENABLE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_ENABLE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_ENABLE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_3_FUNCTION_MASK(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_3_FUNCTION_MASK_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_FUNCTION_MASK_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_3_FUNCTION_MASK(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_3_FUNCTION_MASK_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_FUNCTION_MASK_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_TABLE_SIZE(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_TABLE_SIZE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_TABLE_SIZE_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_TABLE_SIZE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_TABLE_SIZE_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_MSI_X_TABLE_SIZE_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_PTR(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_PTR_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_PTR_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_PTR(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_PTR_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_PTR_MASK)
#define RF_AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_ID(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_ID_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_ID_MASK)
#define WF_AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_ID(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_ID_BP,\
									AR_PI_DB_MSI_X_CNTL_2C_3_CAPABILITY_ID_MASK)
#define RF_AR_PI_DB_MSI_X_PENDI_2E_3_PBA_OFFSET(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_PENDI_2E_3_PBA_OFFSET_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_3_PBA_OFFSET_MASK)
#define WF_AR_PI_DB_MSI_X_PENDI_2E_3_PBA_OFFSET(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_PENDI_2E_3_PBA_OFFSET_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_3_PBA_OFFSET_MASK)
#define RF_AR_PI_DB_MSI_X_PENDI_2E_3_BAR_INDICATOR_REG(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_MSI_X_PENDI_2E_3_BAR_INDICATOR_REG_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_3_BAR_INDICATOR_REG_MASK)
#define WF_AR_PI_DB_MSI_X_PENDI_2E_3_BAR_INDICATOR_REG(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_MSI_X_PENDI_2E_3_BAR_INDICATOR_REG_BP,\
									AR_PI_DB_MSI_X_PENDI_2E_3_BAR_INDICATOR_REG_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_PORT_NUMBER(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_PORT_NUMBER_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_PORT_NUMBER_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_PORT_NUMBER(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_PORT_NUMBER_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_PORT_NUMBER_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_55(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_55_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_55_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_55(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_55_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_55_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_ASPM_OPTIONALITY_COMPLIANCE(mmr)	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_ASPM_OPTIONALITY_COMPLIANCE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_ASPM_OPTIONALITY_COMPLIANCE_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_ASPM_OPTIONALITY_COMPLIANCE(mmr,v)	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_ASPM_OPTIONALITY_COMPLIANCE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_ASPM_OPTIONALITY_COMPLIANCE_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_53(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_53_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_53_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_53(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_53_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_53_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_DATA_LINK_REPORT(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_DATA_LINK_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_DATA_LINK_REPORT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_DATA_LINK_REPORT(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_DATA_LINK_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_DATA_LINK_REPORT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_SURP_DOWN_REPORT(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_SURP_DOWN_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_SURP_DOWN_REPORT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_SURP_DOWN_REPORT(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_SURP_DOWN_REPORT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_SURP_DOWN_REPORT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_CLK_PWR_MNGT(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_CLK_PWR_MNGT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_CLK_PWR_MNGT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_CLK_PWR_MNGT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_CLK_PWR_MNGT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_CLK_PWR_MNGT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_L1_EXIT_LAT(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_L1_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_L1_EXIT_LAT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_L1_EXIT_LAT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_L1_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_L1_EXIT_LAT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_LOS_EXIT_LAT(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_LOS_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_LOS_EXIT_LAT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_LOS_EXIT_LAT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_LOS_EXIT_LAT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_LOS_EXIT_LAT_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_ACTIVE_PWR_STATE(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_ACTIVE_PWR_STATE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_ACTIVE_PWR_STATE_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_ACTIVE_PWR_STATE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_ACTIVE_PWR_STATE_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_ACTIVE_PWR_STATE_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_WIDTH(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_WIDTH_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_WIDTH_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_WIDTH(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_WIDTH_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_WIDTH_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_SPEED(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_SPEED_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_SPEED(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_LINK_SPEED_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_31_22(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_31_22_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_31_22_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_31_22(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_31_22_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_RESERVED_31_22_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_TRANS_PENDING(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_TRANS_PENDING_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_TRANS_PENDING_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_TRANS_PENDING(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_TRANS_PENDING_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_TRANS_PENDING_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_UNSUP_REQ_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_UNSUP_REQ_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_UNSUP_REQ_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_UNSUP_REQ_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_UNSUP_REQ_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_UNSUP_REQ_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_FATAL_ERR_DET(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_FATAL_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_FATAL_ERR_DET(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_FATAL_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_NON_FATAL_ERR_DET(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_NON_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_NON_FATAL_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_NON_FATAL_ERR_DET(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_NON_FATAL_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_NON_FATAL_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_CORR_ERR_DET(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_CORR_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_CORR_ERR_DET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_CORR_ERR_DET(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_CORR_ERR_DET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_CORR_ERR_DET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_FUNC_LEVEL_RESET(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_FUNC_LEVEL_RESET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_FUNC_LEVEL_RESET_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_FUNC_LEVEL_RESET(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_FUNC_LEVEL_RESET_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_FUNC_LEVEL_RESET_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_MAX_READ_REQ(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_READ_REQ_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_READ_REQ_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_MAX_READ_REQ(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_READ_REQ_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_READ_REQ_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_NO_SNOOP_EN(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_NO_SNOOP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_NO_SNOOP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_NO_SNOOP_EN(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_NO_SNOOP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_NO_SNOOP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_AUX_POWER_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_PHANTOM_FUNC_EN(mmr)        	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_PHANTOM_FUNC_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_PHANTOM_FUNC_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_PHANTOM_FUNC_EN(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_PHANTOM_FUNC_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_PHANTOM_FUNC_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_TAG_FIELD_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_TAG_FIELD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_TAG_FIELD_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_TAG_FIELD_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_TAG_FIELD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_TAG_FIELD_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_MAX_PAYLOAD(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_PAYLOAD_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_PAYLOAD_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_MAX_PAYLOAD(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_PAYLOAD_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_MAX_PAYLOAD_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_RELAX_ORD_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_RELAX_ORD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_RELAX_ORD_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_RELAX_ORD_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_RELAX_ORD_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_RELAX_ORD_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_UNS_REQ_REP_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_UNS_REQ_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_UNS_REQ_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_UNS_REQ_REP_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_UNS_REQ_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_UNS_REQ_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_FATAL_REP_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_FATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_FATAL_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_FATAL_REP_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_FATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_FATAL_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_NONFATAL_REP_EN(mmr)        	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_NONFATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_NONFATAL_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_NONFATAL_REP_EN(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_NONFATAL_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_NONFATAL_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_3_COR_ERR_REP_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_3_COR_ERR_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_COR_ERR_REP_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_3_COR_ERR_REP_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_3_COR_ERR_REP_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_3_COR_ERR_REP_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_63_36(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_63_36_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_63_36_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_63_36(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_63_36_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_63_36_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_SUP_LINK_SPEED(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_SUP_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_SUP_LINK_SPEED_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_SUP_LINK_SPEED(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_SUP_LINK_SPEED_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_SUP_LINK_SPEED_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_32(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_32_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_32_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_32(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_32_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_32_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_31_15(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_31_15_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_31_15_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_31_15(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_31_15_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_31_15_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_OBFF_EN(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_OBFF_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_OBFF_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_OBFF_EN(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_OBFF_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_OBFF_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_12_11(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_12_11_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_12_11_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_12_11(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_12_11_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_12_11_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_LTR_MECH_EN(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_LTR_MECH_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_LTR_MECH_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_LTR_MECH_EN(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_LTR_MECH_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_LTR_MECH_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_COMP(mmr)             	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_COMP_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_COMP_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_COMP(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_COMP_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_COMP_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_REQ_EN(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_REQ_EN(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_IDO_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_7(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_7_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_7_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_7(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_7_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_7_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_ATOM_OP_REQ_EN(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_ATOM_OP_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_ATOM_OP_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_ATOM_OP_REQ_EN(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_ATOM_OP_REQ_EN_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_ATOM_OP_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_5(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_5_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_5_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_5(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_5_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_RESERVED_5_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_DIS(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_DIS_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_DIS_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_DIS(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_DIS_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_DIS_MASK)
#define RF_AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_MASK)
#define WF_AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_BP,\
									AR_PI_DB_PCIE_CNTL_STS_2_3_CMP_TIMEOUT_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_63_41(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_63_41_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_63_41_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_63_41(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_63_41_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_63_41_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_TPH_REQ_EN(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_TPH_REQ_EN_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_TPH_REQ_EN_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_TPH_REQ_EN(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_TPH_REQ_EN_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_TPH_REQ_EN_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_39_35(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_39_35_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_39_35_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_39_35(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_39_35_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_39_35_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_MODE(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_MODE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_MODE_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_MODE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_MODE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_MODE_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_31_27(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_31_27_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_31_27_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_31_27(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_31_27_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_31_27_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_SIZE(mmr)      	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_SIZE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_SIZE_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_SIZE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_SIZE_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_SIZE_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_15_11(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_15_11_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_15_11_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_15_11(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_15_11_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_15_11_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_EXT_TPH_REG_SUP(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_EXT_TPH_REG_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_EXT_TPH_REG_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_EXT_TPH_REG_SUP(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_EXT_TPH_REG_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_EXT_TPH_REG_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_WA(mmr)    	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_WA_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_WA_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_WA(mmr,v)  	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_WA_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_ST_TABLE_LOC_WA_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_7_3(mmr)       	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_7_3_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_7_3_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_7_3(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_7_3_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_RESERVED_7_3_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_DEV_SPECMODE_SUP(mmr)   	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_DEV_SPECMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_DEV_SPECMODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_DEV_SPECMODE_SUP(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_DEV_SPECMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_DEV_SPECMODE_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_INT_VECTMODE_SUP(mmr)   	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_INT_VECTMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_INT_VECTMODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_INT_VECTMODE_SUP(mmr,v) 	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_INT_VECTMODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_INT_VECTMODE_SUP_MASK)
#define RF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_NO_ST_MODE_SUP(mmr)     	RD_FIELD(mmr,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_NO_ST_MODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_NO_ST_MODE_SUP_MASK)
#define WF_AR_PI_DB_PCIE_TPH_REQ_CNTL_3_NO_ST_MODE_SUP(mmr,v)   	WR_FIELD(mmr,v,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_NO_ST_MODE_SUP_BP,\
									AR_PI_DB_PCIE_TPH_REQ_CNTL_3_NO_ST_MODE_SUP_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_8(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_8_BP,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_8_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_8(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_8_BP,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_8_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_5(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_5_BP,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_5_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_5(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_5_BP,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_5_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_2_5(mmr)        	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_2_5_BP,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_2_5_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_2_5(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_2_5_BP,\
									AR_PI_DB_PHY_LAYER_CFG_TRANS_FTS_CNT_2_5_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_RESERVED_39_32(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_RESERVED_39_32_BP,\
									AR_PI_DB_PHY_LAYER_CFG_RESERVED_39_32_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_RESERVED_39_32(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_RESERVED_39_32_BP,\
									AR_PI_DB_PHY_LAYER_CFG_RESERVED_39_32_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_MASTER_LB_ENABLE(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_MASTER_LB_ENABLE_BP,\
									AR_PI_DB_PHY_LAYER_CFG_MASTER_LB_ENABLE_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_MASTER_LB_ENABLE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_MASTER_LB_ENABLE_BP,\
									AR_PI_DB_PHY_LAYER_CFG_MASTER_LB_ENABLE_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_RESERVED_30(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_RESERVED_30_BP,\
									AR_PI_DB_PHY_LAYER_CFG_RESERVED_30_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_RESERVED_30(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_RESERVED_30_BP,\
									AR_PI_DB_PHY_LAYER_CFG_RESERVED_30_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_LTSSM_STATE(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_LTSSM_STATE_BP,\
									AR_PI_DB_PHY_LAYER_CFG_LTSSM_STATE_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_LTSSM_STATE(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_LTSSM_STATE_BP,\
									AR_PI_DB_PHY_LAYER_CFG_LTSSM_STATE_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_RECV_LINK_ID(mmr)             	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_RECV_LINK_ID_BP,\
									AR_PI_DB_PHY_LAYER_CFG_RECV_LINK_ID_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_RECV_LINK_ID(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_RECV_LINK_ID_BP,\
									AR_PI_DB_PHY_LAYER_CFG_RECV_LINK_ID_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_RECV_FTS_CNT_2_5(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_RECV_FTS_CNT_2_5_BP,\
									AR_PI_DB_PHY_LAYER_CFG_RECV_FTS_CNT_2_5_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_RECV_FTS_CNT_2_5(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_RECV_FTS_CNT_2_5_BP,\
									AR_PI_DB_PHY_LAYER_CFG_RECV_FTS_CNT_2_5_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_TX_SWING_SETTING(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_TX_SWING_SETTING_BP,\
									AR_PI_DB_PHY_LAYER_CFG_TX_SWING_SETTING_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_TX_SWING_SETTING(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_TX_SWING_SETTING_BP,\
									AR_PI_DB_PHY_LAYER_CFG_TX_SWING_SETTING_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_ALL_PHY_ERR_RPT(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_ALL_PHY_ERR_RPT_BP,\
									AR_PI_DB_PHY_LAYER_CFG_ALL_PHY_ERR_RPT_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_ALL_PHY_ERR_RPT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_ALL_PHY_ERR_RPT_BP,\
									AR_PI_DB_PHY_LAYER_CFG_ALL_PHY_ERR_RPT_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_NEG_SPEED(mmr)                	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_NEG_SPEED_BP,\
									AR_PI_DB_PHY_LAYER_CFG_NEG_SPEED_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_NEG_SPEED(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_NEG_SPEED_BP,\
									AR_PI_DB_PHY_LAYER_CFG_NEG_SPEED_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_NEG_LANE_COUNT(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_NEG_LANE_COUNT_BP,\
									AR_PI_DB_PHY_LAYER_CFG_NEG_LANE_COUNT_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_NEG_LANE_COUNT(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_NEG_LANE_COUNT_BP,\
									AR_PI_DB_PHY_LAYER_CFG_NEG_LANE_COUNT_MASK)
#define RF_AR_PI_DB_PHY_LAYER_CFG_LINK_STATUS(mmr)              	RD_FIELD(mmr,\
									AR_PI_DB_PHY_LAYER_CFG_LINK_STATUS_BP,\
									AR_PI_DB_PHY_LAYER_CFG_LINK_STATUS_MASK)
#define WF_AR_PI_DB_PHY_LAYER_CFG_LINK_STATUS(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DB_PHY_LAYER_CFG_LINK_STATUS_BP,\
									AR_PI_DB_PHY_LAYER_CFG_LINK_STATUS_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_0_NONP_PAYL_CRED(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_0_NONP_PAYL_CRED_BP,\
									AR_PI_DB_RECV_CREDIT_0_NONP_PAYL_CRED_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_0_NONP_PAYL_CRED(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_0_NONP_PAYL_CRED_BP,\
									AR_PI_DB_RECV_CREDIT_0_NONP_PAYL_CRED_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_0_POST_HEAD_CRED(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_0_POST_HEAD_CRED_BP,\
									AR_PI_DB_RECV_CREDIT_0_POST_HEAD_CRED_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_0_POST_HEAD_CRED(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_0_POST_HEAD_CRED_BP,\
									AR_PI_DB_RECV_CREDIT_0_POST_HEAD_CRED_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_0_POST_PAYL_CRED(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_0_POST_PAYL_CRED_BP,\
									AR_PI_DB_RECV_CREDIT_0_POST_PAYL_CRED_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_0_POST_PAYL_CRED(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_0_POST_PAYL_CRED_BP,\
									AR_PI_DB_RECV_CREDIT_0_POST_PAYL_CRED_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_0_RESERVED_31_25(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_0_RESERVED_31_25_BP,\
									AR_PI_DB_RECV_CREDIT_0_RESERVED_31_25_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_0_RESERVED_31_25(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_0_RESERVED_31_25_BP,\
									AR_PI_DB_RECV_CREDIT_0_RESERVED_31_25_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_0_RECV_ACK_NAK_TO(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_0_RECV_ACK_NAK_TO_BP,\
									AR_PI_DB_RECV_CREDIT_0_RECV_ACK_NAK_TO_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_0_RECV_ACK_NAK_TO(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_0_RECV_ACK_NAK_TO_BP,\
									AR_PI_DB_RECV_CREDIT_0_RECV_ACK_NAK_TO_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_0_RESERVED_15_9(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_0_RESERVED_15_9_BP,\
									AR_PI_DB_RECV_CREDIT_0_RESERVED_15_9_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_0_RESERVED_15_9(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_0_RESERVED_15_9_BP,\
									AR_PI_DB_RECV_CREDIT_0_RESERVED_15_9_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_0_TRANS_REPLAY_TO(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_0_TRANS_REPLAY_TO_BP,\
									AR_PI_DB_RECV_CREDIT_0_TRANS_REPLAY_TO_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_0_TRANS_REPLAY_TO(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_0_TRANS_REPLAY_TO_BP,\
									AR_PI_DB_RECV_CREDIT_0_TRANS_REPLAY_TO_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_1_TRAN_NONP_PAYL(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_NONP_PAYL_BP,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_NONP_PAYL_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_1_TRAN_NONP_PAYL(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_NONP_PAYL_BP,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_NONP_PAYL_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_1_TRAN_POST_HEAD(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_POST_HEAD_BP,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_POST_HEAD_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_1_TRAN_POST_HEAD(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_POST_HEAD_BP,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_POST_HEAD_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_1_TRAN_POST_PAYL(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_POST_PAYL_BP,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_POST_PAYL_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_1_TRAN_POST_PAYL(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_POST_PAYL_BP,\
									AR_PI_DB_RECV_CREDIT_1_TRAN_POST_PAYL_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_1_RECV_COMP_HEAD(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_1_RECV_COMP_HEAD_BP,\
									AR_PI_DB_RECV_CREDIT_1_RECV_COMP_HEAD_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_1_RECV_COMP_HEAD(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_1_RECV_COMP_HEAD_BP,\
									AR_PI_DB_RECV_CREDIT_1_RECV_COMP_HEAD_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_1_RESERVED_23_20(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_1_RESERVED_23_20_BP,\
									AR_PI_DB_RECV_CREDIT_1_RESERVED_23_20_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_1_RESERVED_23_20(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_1_RESERVED_23_20_BP,\
									AR_PI_DB_RECV_CREDIT_1_RESERVED_23_20_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_1_RECV_COMP_PAYL(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_1_RECV_COMP_PAYL_BP,\
									AR_PI_DB_RECV_CREDIT_1_RECV_COMP_PAYL_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_1_RECV_COMP_PAYL(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_1_RECV_COMP_PAYL_BP,\
									AR_PI_DB_RECV_CREDIT_1_RECV_COMP_PAYL_MASK)
#define RF_AR_PI_DB_RECV_CREDIT_1_RECV_NONP_HEAD(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_CREDIT_1_RECV_NONP_HEAD_BP,\
									AR_PI_DB_RECV_CREDIT_1_RECV_NONP_HEAD_MASK)
#define WF_AR_PI_DB_RECV_CREDIT_1_RECV_NONP_HEAD(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_CREDIT_1_RECV_NONP_HEAD_BP,\
									AR_PI_DB_RECV_CREDIT_1_RECV_NONP_HEAD_MASK)
#define RF_AR_PI_DB_RECV_FTS_COUNT_RESERVED_63_48(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_RECV_FTS_COUNT_RESERVED_63_48_BP,\
									AR_PI_DB_RECV_FTS_COUNT_RESERVED_63_48_MASK)
#define WF_AR_PI_DB_RECV_FTS_COUNT_RESERVED_63_48(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_FTS_COUNT_RESERVED_63_48_BP,\
									AR_PI_DB_RECV_FTS_COUNT_RESERVED_63_48_MASK)
#define RF_AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_8G(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_8G_BP,\
									AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_8G_MASK)
#define WF_AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_8G(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_8G_BP,\
									AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_8G_MASK)
#define RF_AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_5G(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_5G_BP,\
									AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_5G_MASK)
#define WF_AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_5G(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_5G_BP,\
									AR_PI_DB_RECV_FTS_COUNT_RECV_FTS_CNT_5G_MASK)
#define RF_AR_PI_DB_RECV_FTS_COUNT_RESERVED_31_17(mmr)          	RD_FIELD(mmr,\
									AR_PI_DB_RECV_FTS_COUNT_RESERVED_31_17_BP,\
									AR_PI_DB_RECV_FTS_COUNT_RESERVED_31_17_MASK)
#define WF_AR_PI_DB_RECV_FTS_COUNT_RESERVED_31_17(mmr,v)        	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_FTS_COUNT_RESERVED_31_17_BP,\
									AR_PI_DB_RECV_FTS_COUNT_RESERVED_31_17_MASK)
#define RF_AR_PI_DB_RECV_FTS_COUNT_LANE_REVERSAL(mmr)           	RD_FIELD(mmr,\
									AR_PI_DB_RECV_FTS_COUNT_LANE_REVERSAL_BP,\
									AR_PI_DB_RECV_FTS_COUNT_LANE_REVERSAL_MASK)
#define WF_AR_PI_DB_RECV_FTS_COUNT_LANE_REVERSAL(mmr,v)         	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_FTS_COUNT_LANE_REVERSAL_BP,\
									AR_PI_DB_RECV_FTS_COUNT_LANE_REVERSAL_MASK)
#define RF_AR_PI_DB_RECV_FTS_COUNT_NEG_LANE_MAP(mmr)            	RD_FIELD(mmr,\
									AR_PI_DB_RECV_FTS_COUNT_NEG_LANE_MAP_BP,\
									AR_PI_DB_RECV_FTS_COUNT_NEG_LANE_MAP_MASK)
#define WF_AR_PI_DB_RECV_FTS_COUNT_NEG_LANE_MAP(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DB_RECV_FTS_COUNT_NEG_LANE_MAP_BP,\
									AR_PI_DB_RECV_FTS_COUNT_NEG_LANE_MAP_MASK)
#define RF_AR_PI_DB_PHYSICAL_CFG_REG_RESERVED_63_4(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PHYSICAL_CFG_REG_RESERVED_63_4_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_RESERVED_63_4_MASK)
#define WF_AR_PI_DB_PHYSICAL_CFG_REG_RESERVED_63_4(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PHYSICAL_CFG_REG_RESERVED_63_4_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_RESERVED_63_4_MASK)
#define RF_AR_PI_DB_PHYSICAL_CFG_REG_FUNC_3_ENABLE(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_3_ENABLE_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_3_ENABLE_MASK)
#define WF_AR_PI_DB_PHYSICAL_CFG_REG_FUNC_3_ENABLE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_3_ENABLE_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_3_ENABLE_MASK)
#define RF_AR_PI_DB_PHYSICAL_CFG_REG_FUNC_2_ENABLE(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_2_ENABLE_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_2_ENABLE_MASK)
#define WF_AR_PI_DB_PHYSICAL_CFG_REG_FUNC_2_ENABLE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_2_ENABLE_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_2_ENABLE_MASK)
#define RF_AR_PI_DB_PHYSICAL_CFG_REG_FUNC_1_ENABLE(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_1_ENABLE_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_1_ENABLE_MASK)
#define WF_AR_PI_DB_PHYSICAL_CFG_REG_FUNC_1_ENABLE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_1_ENABLE_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_1_ENABLE_MASK)
#define RF_AR_PI_DB_PHYSICAL_CFG_REG_FUNC_0_ENABLE(mmr)         	RD_FIELD(mmr,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_0_ENABLE_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_0_ENABLE_MASK)
#define WF_AR_PI_DB_PHYSICAL_CFG_REG_FUNC_0_ENABLE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_0_ENABLE_BP,\
									AR_PI_DB_PHYSICAL_CFG_REG_FUNC_0_ENABLE_MASK)
#define RF_AR_PI_DBG_DIAG_INJ_RAM_ARRAY_DATA(mmr)               	RD_FIELD(mmr,\
									AR_PI_DBG_DIAG_INJ_RAM_ARRAY_DATA_BP,\
									AR_PI_DBG_DIAG_INJ_RAM_ARRAY_DATA_MASK)
#define WF_AR_PI_DBG_DIAG_INJ_RAM_ARRAY_DATA(mmr,v)             	WR_FIELD(mmr,v,\
									AR_PI_DBG_DIAG_INJ_RAM_ARRAY_DATA_BP,\
									AR_PI_DBG_DIAG_INJ_RAM_ARRAY_DATA_MASK)
#define RF_AR_PI_DBG_DIAG_TRANS_RAM_ARRAY_DATA(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_DIAG_TRANS_RAM_ARRAY_DATA_BP,\
									AR_PI_DBG_DIAG_TRANS_RAM_ARRAY_DATA_MASK)
#define WF_AR_PI_DBG_DIAG_TRANS_RAM_ARRAY_DATA(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_DIAG_TRANS_RAM_ARRAY_DATA_BP,\
									AR_PI_DBG_DIAG_TRANS_RAM_ARRAY_DATA_MASK)
#define RF_AR_PI_DBG_DIAG_RECV_RAM_ARRAY_DATA(mmr)              	RD_FIELD(mmr,\
									AR_PI_DBG_DIAG_RECV_RAM_ARRAY_DATA_BP,\
									AR_PI_DBG_DIAG_RECV_RAM_ARRAY_DATA_MASK)
#define WF_AR_PI_DBG_DIAG_RECV_RAM_ARRAY_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_PI_DBG_DIAG_RECV_RAM_ARRAY_DATA_BP,\
									AR_PI_DBG_DIAG_RECV_RAM_ARRAY_DATA_MASK)

#endif
