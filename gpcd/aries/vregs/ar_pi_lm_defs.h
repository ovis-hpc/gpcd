/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pi_lm_defs.h
 * FILE: ar_pi_lm_defs.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_PI_LM_DEFS_H_
#define _AR_PI_LM_DEFS_H_

#define AR_PI_LM_N_MMRS                                        	62
#define AR_PI_LM_N_DESCS                                       	0

/*
 *  AR PI_LM MMR TABLE ADDRESS DEFINES
 */

/*
 *  AR PI_LM MMR ADDRESS DEFINES
 */
#define AR_PI_DBG_LM0_CTL                                      	(AR_PI_LM_BASE+0x0000000000ull)
#define AR_PI_DBG_LM0_CTL_SIZE                                 	0x0000000008ull
#define AR_PI_DBG_LM0_CTL_LIMIT                                	AR_PI_DBG_LM0_CTL+AR_PI_DBG_LM0_CTL_SIZE-1
#define AR_PI_DBG_LM0_PTRS                                     	(AR_PI_LM_BASE+0x0000000008ull)
#define AR_PI_DBG_LM0_PTRS_SIZE                                	0x0000000008ull
#define AR_PI_DBG_LM0_PTRS_LIMIT                               	AR_PI_DBG_LM0_PTRS+AR_PI_DBG_LM0_PTRS_SIZE-1
#define AR_PI_DBG_LM0_READ_LO                                  	(AR_PI_LM_BASE+0x0000000010ull)
#define AR_PI_DBG_LM0_READ_LO_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM0_READ_LO_LIMIT                            	AR_PI_DBG_LM0_READ_LO+AR_PI_DBG_LM0_READ_LO_SIZE-1
#define AR_PI_DBG_LM0_READ_MID                                 	(AR_PI_LM_BASE+0x0000000018ull)
#define AR_PI_DBG_LM0_READ_MID_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM0_READ_MID_LIMIT                           	AR_PI_DBG_LM0_READ_MID+AR_PI_DBG_LM0_READ_MID_SIZE-1
#define AR_PI_DBG_LM0_READ_HI                                  	(AR_PI_LM_BASE+0x0000000020ull)
#define AR_PI_DBG_LM0_READ_HI_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM0_READ_HI_LIMIT                            	AR_PI_DBG_LM0_READ_HI+AR_PI_DBG_LM0_READ_HI_SIZE-1
#define AR_PI_DBG_LM0_SNAP_SEL                                 	(AR_PI_LM_BASE+0x0000000030ull)
#define AR_PI_DBG_LM0_SNAP_SEL_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM0_SNAP_SEL_LIMIT                           	AR_PI_DBG_LM0_SNAP_SEL+AR_PI_DBG_LM0_SNAP_SEL_SIZE-1
#define AR_PI_DBG_LM0_SNAP_DLO                                 	(AR_PI_LM_BASE+0x0000000038ull)
#define AR_PI_DBG_LM0_SNAP_DLO_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM0_SNAP_DLO_LIMIT                           	AR_PI_DBG_LM0_SNAP_DLO+AR_PI_DBG_LM0_SNAP_DLO_SIZE-1
#define AR_PI_DBG_LM0_SNAP_DMID                                	(AR_PI_LM_BASE+0x0000000040ull)
#define AR_PI_DBG_LM0_SNAP_DMID_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM0_SNAP_DMID_LIMIT                          	AR_PI_DBG_LM0_SNAP_DMID+AR_PI_DBG_LM0_SNAP_DMID_SIZE-1
#define AR_PI_DBG_LM0_SNAP_DHI                                 	(AR_PI_LM_BASE+0x0000000048ull)
#define AR_PI_DBG_LM0_SNAP_DHI_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM0_SNAP_DHI_LIMIT                           	AR_PI_DBG_LM0_SNAP_DHI+AR_PI_DBG_LM0_SNAP_DHI_SIZE-1
#define AR_PI_DBG_LM0_REM_TRIG                                 	(AR_PI_LM_BASE+0x0000000050ull)
#define AR_PI_DBG_LM0_REM_TRIG_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM0_REM_TRIG_LIMIT                           	AR_PI_DBG_LM0_REM_TRIG+AR_PI_DBG_LM0_REM_TRIG_SIZE-1
#define AR_PI_DBG_LM0_TRIG_STS                                 	(AR_PI_LM_BASE+0x0000000058ull)
#define AR_PI_DBG_LM0_TRIG_STS_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM0_TRIG_STS_LIMIT                           	AR_PI_DBG_LM0_TRIG_STS+AR_PI_DBG_LM0_TRIG_STS_SIZE-1
#define AR_PI_DBG_ERRINJ_LM0                                   	(AR_PI_LM_BASE+0x0000000060ull)
#define AR_PI_DBG_ERRINJ_LM0_SIZE                              	0x0000000008ull
#define AR_PI_DBG_ERRINJ_LM0_LIMIT                             	AR_PI_DBG_ERRINJ_LM0+AR_PI_DBG_ERRINJ_LM0_SIZE-1
#define AR_PI_ERR_INFO_LM0_PERR                                	(AR_PI_LM_BASE+0x0000000068ull)
#define AR_PI_ERR_INFO_LM0_PERR_SIZE                           	0x0000000008ull
#define AR_PI_ERR_INFO_LM0_PERR_LIMIT                          	AR_PI_ERR_INFO_LM0_PERR+AR_PI_ERR_INFO_LM0_PERR_SIZE-1
#define AR_PI_ERR_INFO_LM0_PERR_CNT                            	(AR_PI_LM_BASE+0x0000000070ull)
#define AR_PI_ERR_INFO_LM0_PERR_CNT_SIZE                       	0x0000000008ull
#define AR_PI_ERR_INFO_LM0_PERR_CNT_LIMIT                      	AR_PI_ERR_INFO_LM0_PERR_CNT+AR_PI_ERR_INFO_LM0_PERR_CNT_SIZE-1
#define AR_PI_DBG_LM0_CAP_SEL                                  	(AR_PI_LM_BASE+0x0000000078ull)
#define AR_PI_DBG_LM0_CAP_SEL_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM0_CAP_SEL_LIMIT                            	AR_PI_DBG_LM0_CAP_SEL+AR_PI_DBG_LM0_CAP_SEL_SIZE-1
#define AR_PI_DBG_LM0_T0_CMP_LO                                	(AR_PI_LM_BASE+0x0000000080ull)
#define AR_PI_DBG_LM0_T0_CMP_LO_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM0_T0_CMP_LO_LIMIT                          	AR_PI_DBG_LM0_T0_CMP_LO+AR_PI_DBG_LM0_T0_CMP_LO_SIZE-1
#define AR_PI_DBG_LM0_T0_CMP_MID                               	(AR_PI_LM_BASE+0x0000000088ull)
#define AR_PI_DBG_LM0_T0_CMP_MID_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM0_T0_CMP_MID_LIMIT                         	AR_PI_DBG_LM0_T0_CMP_MID+AR_PI_DBG_LM0_T0_CMP_MID_SIZE-1
#define AR_PI_DBG_LM0_T0_CMP_HI                                	(AR_PI_LM_BASE+0x0000000090ull)
#define AR_PI_DBG_LM0_T0_CMP_HI_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM0_T0_CMP_HI_LIMIT                          	AR_PI_DBG_LM0_T0_CMP_HI+AR_PI_DBG_LM0_T0_CMP_HI_SIZE-1
#define AR_PI_DBG_LM0_T0_MODE                                  	(AR_PI_LM_BASE+0x0000000098ull)
#define AR_PI_DBG_LM0_T0_MODE_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM0_T0_MODE_LIMIT                            	AR_PI_DBG_LM0_T0_MODE+AR_PI_DBG_LM0_T0_MODE_SIZE-1
#define AR_PI_DBG_LM0_T0_MASK_LO                               	(AR_PI_LM_BASE+0x00000000a0ull)
#define AR_PI_DBG_LM0_T0_MASK_LO_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM0_T0_MASK_LO_LIMIT                         	AR_PI_DBG_LM0_T0_MASK_LO+AR_PI_DBG_LM0_T0_MASK_LO_SIZE-1
#define AR_PI_DBG_LM0_T0_MASK_MID                              	(AR_PI_LM_BASE+0x00000000a8ull)
#define AR_PI_DBG_LM0_T0_MASK_MID_SIZE                         	0x0000000008ull
#define AR_PI_DBG_LM0_T0_MASK_MID_LIMIT                        	AR_PI_DBG_LM0_T0_MASK_MID+AR_PI_DBG_LM0_T0_MASK_MID_SIZE-1
#define AR_PI_DBG_LM0_T0_MASK_HI                               	(AR_PI_LM_BASE+0x00000000b0ull)
#define AR_PI_DBG_LM0_T0_MASK_HI_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM0_T0_MASK_HI_LIMIT                         	AR_PI_DBG_LM0_T0_MASK_HI+AR_PI_DBG_LM0_T0_MASK_HI_SIZE-1
#define AR_PI_DBG_LM0_TRIG_SEL                                 	(AR_PI_LM_BASE+0x00000000b8ull)
#define AR_PI_DBG_LM0_TRIG_SEL_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM0_TRIG_SEL_LIMIT                           	AR_PI_DBG_LM0_TRIG_SEL+AR_PI_DBG_LM0_TRIG_SEL_SIZE-1
#define AR_PI_DBG_LM0_T1_CMP_LO                                	(AR_PI_LM_BASE+0x00000000c0ull)
#define AR_PI_DBG_LM0_T1_CMP_LO_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM0_T1_CMP_LO_LIMIT                          	AR_PI_DBG_LM0_T1_CMP_LO+AR_PI_DBG_LM0_T1_CMP_LO_SIZE-1
#define AR_PI_DBG_LM0_T1_CMP_MID                               	(AR_PI_LM_BASE+0x00000000c8ull)
#define AR_PI_DBG_LM0_T1_CMP_MID_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM0_T1_CMP_MID_LIMIT                         	AR_PI_DBG_LM0_T1_CMP_MID+AR_PI_DBG_LM0_T1_CMP_MID_SIZE-1
#define AR_PI_DBG_LM0_T1_CMP_HI                                	(AR_PI_LM_BASE+0x00000000d0ull)
#define AR_PI_DBG_LM0_T1_CMP_HI_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM0_T1_CMP_HI_LIMIT                          	AR_PI_DBG_LM0_T1_CMP_HI+AR_PI_DBG_LM0_T1_CMP_HI_SIZE-1
#define AR_PI_DBG_LM0_T1_MODE                                  	(AR_PI_LM_BASE+0x00000000d8ull)
#define AR_PI_DBG_LM0_T1_MODE_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM0_T1_MODE_LIMIT                            	AR_PI_DBG_LM0_T1_MODE+AR_PI_DBG_LM0_T1_MODE_SIZE-1
#define AR_PI_DBG_LM0_T1_MASK_LO                               	(AR_PI_LM_BASE+0x00000000e0ull)
#define AR_PI_DBG_LM0_T1_MASK_LO_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM0_T1_MASK_LO_LIMIT                         	AR_PI_DBG_LM0_T1_MASK_LO+AR_PI_DBG_LM0_T1_MASK_LO_SIZE-1
#define AR_PI_DBG_LM0_T1_MASK_MID                              	(AR_PI_LM_BASE+0x00000000e8ull)
#define AR_PI_DBG_LM0_T1_MASK_MID_SIZE                         	0x0000000008ull
#define AR_PI_DBG_LM0_T1_MASK_MID_LIMIT                        	AR_PI_DBG_LM0_T1_MASK_MID+AR_PI_DBG_LM0_T1_MASK_MID_SIZE-1
#define AR_PI_DBG_LM0_T1_MASK_HI                               	(AR_PI_LM_BASE+0x00000000f0ull)
#define AR_PI_DBG_LM0_T1_MASK_HI_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM0_T1_MASK_HI_LIMIT                         	AR_PI_DBG_LM0_T1_MASK_HI+AR_PI_DBG_LM0_T1_MASK_HI_SIZE-1
#define AR_PI_DBG_LM0_MUX_SEL                                  	(AR_PI_LM_BASE+0x00000000f8ull)
#define AR_PI_DBG_LM0_MUX_SEL_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM0_MUX_SEL_LIMIT                            	AR_PI_DBG_LM0_MUX_SEL+AR_PI_DBG_LM0_MUX_SEL_SIZE-1
#define AR_PI_DBG_LM1_CTL                                      	(AR_PI_LM_BASE+0x0000080000ull)
#define AR_PI_DBG_LM1_CTL_SIZE                                 	0x0000000008ull
#define AR_PI_DBG_LM1_CTL_LIMIT                                	AR_PI_DBG_LM1_CTL+AR_PI_DBG_LM1_CTL_SIZE-1
#define AR_PI_DBG_LM1_PTRS                                     	(AR_PI_LM_BASE+0x0000080008ull)
#define AR_PI_DBG_LM1_PTRS_SIZE                                	0x0000000008ull
#define AR_PI_DBG_LM1_PTRS_LIMIT                               	AR_PI_DBG_LM1_PTRS+AR_PI_DBG_LM1_PTRS_SIZE-1
#define AR_PI_DBG_LM1_READ_LO                                  	(AR_PI_LM_BASE+0x0000080010ull)
#define AR_PI_DBG_LM1_READ_LO_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM1_READ_LO_LIMIT                            	AR_PI_DBG_LM1_READ_LO+AR_PI_DBG_LM1_READ_LO_SIZE-1
#define AR_PI_DBG_LM1_READ_MID                                 	(AR_PI_LM_BASE+0x0000080018ull)
#define AR_PI_DBG_LM1_READ_MID_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM1_READ_MID_LIMIT                           	AR_PI_DBG_LM1_READ_MID+AR_PI_DBG_LM1_READ_MID_SIZE-1
#define AR_PI_DBG_LM1_READ_HI                                  	(AR_PI_LM_BASE+0x0000080020ull)
#define AR_PI_DBG_LM1_READ_HI_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM1_READ_HI_LIMIT                            	AR_PI_DBG_LM1_READ_HI+AR_PI_DBG_LM1_READ_HI_SIZE-1
#define AR_PI_DBG_LM1_SNAP_SEL                                 	(AR_PI_LM_BASE+0x0000080030ull)
#define AR_PI_DBG_LM1_SNAP_SEL_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM1_SNAP_SEL_LIMIT                           	AR_PI_DBG_LM1_SNAP_SEL+AR_PI_DBG_LM1_SNAP_SEL_SIZE-1
#define AR_PI_DBG_LM1_SNAP_DLO                                 	(AR_PI_LM_BASE+0x0000080038ull)
#define AR_PI_DBG_LM1_SNAP_DLO_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM1_SNAP_DLO_LIMIT                           	AR_PI_DBG_LM1_SNAP_DLO+AR_PI_DBG_LM1_SNAP_DLO_SIZE-1
#define AR_PI_DBG_LM1_SNAP_DMID                                	(AR_PI_LM_BASE+0x0000080040ull)
#define AR_PI_DBG_LM1_SNAP_DMID_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM1_SNAP_DMID_LIMIT                          	AR_PI_DBG_LM1_SNAP_DMID+AR_PI_DBG_LM1_SNAP_DMID_SIZE-1
#define AR_PI_DBG_LM1_SNAP_DHI                                 	(AR_PI_LM_BASE+0x0000080048ull)
#define AR_PI_DBG_LM1_SNAP_DHI_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM1_SNAP_DHI_LIMIT                           	AR_PI_DBG_LM1_SNAP_DHI+AR_PI_DBG_LM1_SNAP_DHI_SIZE-1
#define AR_PI_DBG_LM1_REM_TRIG                                 	(AR_PI_LM_BASE+0x0000080050ull)
#define AR_PI_DBG_LM1_REM_TRIG_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM1_REM_TRIG_LIMIT                           	AR_PI_DBG_LM1_REM_TRIG+AR_PI_DBG_LM1_REM_TRIG_SIZE-1
#define AR_PI_DBG_LM1_TRIG_STS                                 	(AR_PI_LM_BASE+0x0000080058ull)
#define AR_PI_DBG_LM1_TRIG_STS_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM1_TRIG_STS_LIMIT                           	AR_PI_DBG_LM1_TRIG_STS+AR_PI_DBG_LM1_TRIG_STS_SIZE-1
#define AR_PI_DBG_ERRINJ_LM1                                   	(AR_PI_LM_BASE+0x0000080060ull)
#define AR_PI_DBG_ERRINJ_LM1_SIZE                              	0x0000000008ull
#define AR_PI_DBG_ERRINJ_LM1_LIMIT                             	AR_PI_DBG_ERRINJ_LM1+AR_PI_DBG_ERRINJ_LM1_SIZE-1
#define AR_PI_ERR_INFO_LM1_PERR                                	(AR_PI_LM_BASE+0x0000080068ull)
#define AR_PI_ERR_INFO_LM1_PERR_SIZE                           	0x0000000008ull
#define AR_PI_ERR_INFO_LM1_PERR_LIMIT                          	AR_PI_ERR_INFO_LM1_PERR+AR_PI_ERR_INFO_LM1_PERR_SIZE-1
#define AR_PI_ERR_INFO_LM1_PERR_CNT                            	(AR_PI_LM_BASE+0x0000080070ull)
#define AR_PI_ERR_INFO_LM1_PERR_CNT_SIZE                       	0x0000000008ull
#define AR_PI_ERR_INFO_LM1_PERR_CNT_LIMIT                      	AR_PI_ERR_INFO_LM1_PERR_CNT+AR_PI_ERR_INFO_LM1_PERR_CNT_SIZE-1
#define AR_PI_DBG_LM1_CAP_SEL                                  	(AR_PI_LM_BASE+0x0000080078ull)
#define AR_PI_DBG_LM1_CAP_SEL_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM1_CAP_SEL_LIMIT                            	AR_PI_DBG_LM1_CAP_SEL+AR_PI_DBG_LM1_CAP_SEL_SIZE-1
#define AR_PI_DBG_LM1_T0_CMP_LO                                	(AR_PI_LM_BASE+0x0000080080ull)
#define AR_PI_DBG_LM1_T0_CMP_LO_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM1_T0_CMP_LO_LIMIT                          	AR_PI_DBG_LM1_T0_CMP_LO+AR_PI_DBG_LM1_T0_CMP_LO_SIZE-1
#define AR_PI_DBG_LM1_T0_CMP_MID                               	(AR_PI_LM_BASE+0x0000080088ull)
#define AR_PI_DBG_LM1_T0_CMP_MID_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM1_T0_CMP_MID_LIMIT                         	AR_PI_DBG_LM1_T0_CMP_MID+AR_PI_DBG_LM1_T0_CMP_MID_SIZE-1
#define AR_PI_DBG_LM1_T0_CMP_HI                                	(AR_PI_LM_BASE+0x0000080090ull)
#define AR_PI_DBG_LM1_T0_CMP_HI_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM1_T0_CMP_HI_LIMIT                          	AR_PI_DBG_LM1_T0_CMP_HI+AR_PI_DBG_LM1_T0_CMP_HI_SIZE-1
#define AR_PI_DBG_LM1_T0_MODE                                  	(AR_PI_LM_BASE+0x0000080098ull)
#define AR_PI_DBG_LM1_T0_MODE_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM1_T0_MODE_LIMIT                            	AR_PI_DBG_LM1_T0_MODE+AR_PI_DBG_LM1_T0_MODE_SIZE-1
#define AR_PI_DBG_LM1_T0_MASK_LO                               	(AR_PI_LM_BASE+0x00000800a0ull)
#define AR_PI_DBG_LM1_T0_MASK_LO_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM1_T0_MASK_LO_LIMIT                         	AR_PI_DBG_LM1_T0_MASK_LO+AR_PI_DBG_LM1_T0_MASK_LO_SIZE-1
#define AR_PI_DBG_LM1_T0_MASK_MID                              	(AR_PI_LM_BASE+0x00000800a8ull)
#define AR_PI_DBG_LM1_T0_MASK_MID_SIZE                         	0x0000000008ull
#define AR_PI_DBG_LM1_T0_MASK_MID_LIMIT                        	AR_PI_DBG_LM1_T0_MASK_MID+AR_PI_DBG_LM1_T0_MASK_MID_SIZE-1
#define AR_PI_DBG_LM1_T0_MASK_HI                               	(AR_PI_LM_BASE+0x00000800b0ull)
#define AR_PI_DBG_LM1_T0_MASK_HI_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM1_T0_MASK_HI_LIMIT                         	AR_PI_DBG_LM1_T0_MASK_HI+AR_PI_DBG_LM1_T0_MASK_HI_SIZE-1
#define AR_PI_DBG_LM1_TRIG_SEL                                 	(AR_PI_LM_BASE+0x00000800b8ull)
#define AR_PI_DBG_LM1_TRIG_SEL_SIZE                            	0x0000000008ull
#define AR_PI_DBG_LM1_TRIG_SEL_LIMIT                           	AR_PI_DBG_LM1_TRIG_SEL+AR_PI_DBG_LM1_TRIG_SEL_SIZE-1
#define AR_PI_DBG_LM1_T1_CMP_LO                                	(AR_PI_LM_BASE+0x00000800c0ull)
#define AR_PI_DBG_LM1_T1_CMP_LO_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM1_T1_CMP_LO_LIMIT                          	AR_PI_DBG_LM1_T1_CMP_LO+AR_PI_DBG_LM1_T1_CMP_LO_SIZE-1
#define AR_PI_DBG_LM1_T1_CMP_MID                               	(AR_PI_LM_BASE+0x00000800c8ull)
#define AR_PI_DBG_LM1_T1_CMP_MID_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM1_T1_CMP_MID_LIMIT                         	AR_PI_DBG_LM1_T1_CMP_MID+AR_PI_DBG_LM1_T1_CMP_MID_SIZE-1
#define AR_PI_DBG_LM1_T1_CMP_HI                                	(AR_PI_LM_BASE+0x00000800d0ull)
#define AR_PI_DBG_LM1_T1_CMP_HI_SIZE                           	0x0000000008ull
#define AR_PI_DBG_LM1_T1_CMP_HI_LIMIT                          	AR_PI_DBG_LM1_T1_CMP_HI+AR_PI_DBG_LM1_T1_CMP_HI_SIZE-1
#define AR_PI_DBG_LM1_T1_MODE                                  	(AR_PI_LM_BASE+0x00000800d8ull)
#define AR_PI_DBG_LM1_T1_MODE_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM1_T1_MODE_LIMIT                            	AR_PI_DBG_LM1_T1_MODE+AR_PI_DBG_LM1_T1_MODE_SIZE-1
#define AR_PI_DBG_LM1_T1_MASK_LO                               	(AR_PI_LM_BASE+0x00000800e0ull)
#define AR_PI_DBG_LM1_T1_MASK_LO_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM1_T1_MASK_LO_LIMIT                         	AR_PI_DBG_LM1_T1_MASK_LO+AR_PI_DBG_LM1_T1_MASK_LO_SIZE-1
#define AR_PI_DBG_LM1_T1_MASK_MID                              	(AR_PI_LM_BASE+0x00000800e8ull)
#define AR_PI_DBG_LM1_T1_MASK_MID_SIZE                         	0x0000000008ull
#define AR_PI_DBG_LM1_T1_MASK_MID_LIMIT                        	AR_PI_DBG_LM1_T1_MASK_MID+AR_PI_DBG_LM1_T1_MASK_MID_SIZE-1
#define AR_PI_DBG_LM1_T1_MASK_HI                               	(AR_PI_LM_BASE+0x00000800f0ull)
#define AR_PI_DBG_LM1_T1_MASK_HI_SIZE                          	0x0000000008ull
#define AR_PI_DBG_LM1_T1_MASK_HI_LIMIT                         	AR_PI_DBG_LM1_T1_MASK_HI+AR_PI_DBG_LM1_T1_MASK_HI_SIZE-1
#define AR_PI_DBG_LM1_MUX_SEL                                  	(AR_PI_LM_BASE+0x00000800f8ull)
#define AR_PI_DBG_LM1_MUX_SEL_SIZE                             	0x0000000008ull
#define AR_PI_DBG_LM1_MUX_SEL_LIMIT                            	AR_PI_DBG_LM1_MUX_SEL+AR_PI_DBG_LM1_MUX_SEL_SIZE-1

/*
 *  AR_PI_DBG_LM0_CTL DEFINES
 */
#define AR_PI_DBG_LM0_CTL_LM_RST_MASK                                   	0x8000000000000000ull
#define AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_MASK                       	0x0010000000000000ull
#define AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_MASK                        	0x0008000000000000ull
#define AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_MASK                        	0x0004000000000000ull
#define AR_PI_DBG_LM0_CTL_LM_CAP_STATE_MASK                             	0x0003000000000000ull
#define AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK                            	0x000003ff00000000ull
#define AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK                            	0x0000000003ff0000ull
#define AR_PI_DBG_LM0_CTL_LM_CTL_MODE_MASK                              	0x000000000000000full
#define AR_PI_DBG_LM0_CTL_LM_RST_BP                                     	63
#define AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_BP                         	52
#define AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_BP                          	51
#define AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_BP                          	50
#define AR_PI_DBG_LM0_CTL_LM_CAP_STATE_BP                               	48
#define AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_BP                              	32
#define AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_BP                              	16
#define AR_PI_DBG_LM0_CTL_LM_CTL_MODE_BP                                	0
#define AR_PI_DBG_LM0_CTL_LM_RST_QW                                     	0
#define AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_QW                         	0
#define AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_QW                          	0
#define AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_QW                          	0
#define AR_PI_DBG_LM0_CTL_LM_CAP_STATE_QW                               	0
#define AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_QW                              	0
#define AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_QW                              	0
#define AR_PI_DBG_LM0_CTL_LM_CTL_MODE_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_PTRS DEFINES
 */
#define AR_PI_DBG_LM0_PTRS_LM_REC_ACT_MASK                              	0x0000000800000000ull
#define AR_PI_DBG_LM0_PTRS_LM_REC_DONE_MASK                             	0x0000000400000000ull
#define AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_MASK                           	0x0000000200000000ull
#define AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK                           	0x0000000100000000ull
#define AR_PI_DBG_LM0_PTRS_LM_RD_PTR_MASK                               	0x0000000001ff0000ull
#define AR_PI_DBG_LM0_PTRS_LM_WR_PTR_MASK                               	0x00000000000001ffull
#define AR_PI_DBG_LM0_PTRS_LM_REC_ACT_BP                                	35
#define AR_PI_DBG_LM0_PTRS_LM_REC_DONE_BP                               	34
#define AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_BP                             	33
#define AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_BP                             	32
#define AR_PI_DBG_LM0_PTRS_LM_RD_PTR_BP                                 	16
#define AR_PI_DBG_LM0_PTRS_LM_WR_PTR_BP                                 	0
#define AR_PI_DBG_LM0_PTRS_LM_REC_ACT_QW                                	0
#define AR_PI_DBG_LM0_PTRS_LM_REC_DONE_QW                               	0
#define AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_QW                             	0
#define AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_QW                             	0
#define AR_PI_DBG_LM0_PTRS_LM_RD_PTR_QW                                 	0
#define AR_PI_DBG_LM0_PTRS_LM_WR_PTR_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_READ_LO DEFINES
 */
#define AR_PI_DBG_LM0_READ_LO_DATA_MASK                                 	0xffffffffffffffffull
#define AR_PI_DBG_LM0_READ_LO_DATA_BP                                   	0
#define AR_PI_DBG_LM0_READ_LO_DATA_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_READ_MID DEFINES
 */
#define AR_PI_DBG_LM0_READ_MID_DATA_MASK                                	0xffffffffffffffffull
#define AR_PI_DBG_LM0_READ_MID_DATA_BP                                  	0
#define AR_PI_DBG_LM0_READ_MID_DATA_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_READ_HI DEFINES
 */
#define AR_PI_DBG_LM0_READ_HI_DATA_MASK                                 	0xffffffffffffffffull
#define AR_PI_DBG_LM0_READ_HI_DATA_BP                                   	0
#define AR_PI_DBG_LM0_READ_HI_DATA_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_SNAP_SEL DEFINES
 */
#define AR_PI_DBG_LM0_SNAP_SEL_SEL_MASK                                 	0x0000000000000007ull
#define AR_PI_DBG_LM0_SNAP_SEL_SEL_BP                                   	0
#define AR_PI_DBG_LM0_SNAP_SEL_SEL_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_SNAP_DLO DEFINES
 */
#define AR_PI_DBG_LM0_SNAP_DLO_DATA_MASK                                	0xffffffffffffffffull
#define AR_PI_DBG_LM0_SNAP_DLO_DATA_BP                                  	0
#define AR_PI_DBG_LM0_SNAP_DLO_DATA_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_SNAP_DMID DEFINES
 */
#define AR_PI_DBG_LM0_SNAP_DMID_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM0_SNAP_DMID_DATA_BP                                 	0
#define AR_PI_DBG_LM0_SNAP_DMID_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_SNAP_DHI DEFINES
 */
#define AR_PI_DBG_LM0_SNAP_DHI_DATA_MASK                                	0xffffffffffffffffull
#define AR_PI_DBG_LM0_SNAP_DHI_DATA_BP                                  	0
#define AR_PI_DBG_LM0_SNAP_DHI_DATA_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_REM_TRIG DEFINES
 */
#define AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_MASK                  	0x0000000000000004ull
#define AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_MASK                   	0x0000000000000002ull
#define AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_MASK                  	0x0000000000000001ull
#define AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_BP                    	2
#define AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_BP                     	1
#define AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_BP                    	0
#define AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_QW                    	0
#define AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_QW                     	0
#define AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_TRIG_STS DEFINES
 */
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_MASK                  	0x0000000000000080ull
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_MASK                  	0x0000000000000040ull
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK                 	0x0000000000000020ull
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK                 	0x0000000000000010ull
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_MASK                       	0x0000000000000008ull
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_MASK                       	0x0000000000000004ull
#define AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_MASK                       	0x0000000000000002ull
#define AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_MASK                       	0x0000000000000001ull
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_BP                    	7
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_BP                    	6
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_BP                   	5
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_BP                   	4
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_BP                         	3
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_BP                         	2
#define AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_BP                         	1
#define AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_BP                         	0
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_QW                    	0
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_QW                    	0
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_QW                   	0
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_QW                   	0
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_QW                         	0
#define AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_QW                         	0
#define AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_QW                         	0
#define AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_ERRINJ_LM0 DEFINES
 */
#define AR_PI_DBG_ERRINJ_LM0_ADDRESS_MASK                               	0x000001ff00000000ull
#define AR_PI_DBG_ERRINJ_LM0_PARITY_MASK                                	0x0000000000ff0000ull
#define AR_PI_DBG_ERRINJ_LM0_TRIGGERED_MASK                             	0x0000000000000008ull
#define AR_PI_DBG_ERRINJ_LM0_MODE_MASK                                  	0x0000000000000006ull
#define AR_PI_DBG_ERRINJ_LM0_ENABLE_MASK                                	0x0000000000000001ull
#define AR_PI_DBG_ERRINJ_LM0_ADDRESS_BP                                 	32
#define AR_PI_DBG_ERRINJ_LM0_PARITY_BP                                  	16
#define AR_PI_DBG_ERRINJ_LM0_TRIGGERED_BP                               	3
#define AR_PI_DBG_ERRINJ_LM0_MODE_BP                                    	1
#define AR_PI_DBG_ERRINJ_LM0_ENABLE_BP                                  	0
#define AR_PI_DBG_ERRINJ_LM0_ADDRESS_QW                                 	0
#define AR_PI_DBG_ERRINJ_LM0_PARITY_QW                                  	0
#define AR_PI_DBG_ERRINJ_LM0_TRIGGERED_QW                               	0
#define AR_PI_DBG_ERRINJ_LM0_MODE_QW                                    	0
#define AR_PI_DBG_ERRINJ_LM0_ENABLE_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_ERR_INFO_LM0_PERR DEFINES
 */
#define AR_PI_ERR_INFO_LM0_PERR_ADDRESS_MASK                            	0x00000000001ff000ull
#define AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_MASK                  	0x0000000000000008ull
#define AR_PI_ERR_INFO_LM0_PERR_ADDRESS_BP                              	12
#define AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_BP                    	3
#define AR_PI_ERR_INFO_LM0_PERR_ADDRESS_QW                              	0
#define AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_ERR_INFO_LM0_PERR_CNT DEFINES
 */
#define AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_MASK                            	0xffffffffffffffffull
#define AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_BP                              	0
#define AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_CAP_SEL DEFINES
 */
#define AR_PI_DBG_LM0_CAP_SEL_DEN_MASK                                  	0x00000000000f0000ull
#define AR_PI_DBG_LM0_CAP_SEL_PII_MASK                                  	0x000000000000f000ull
#define AR_PI_DBG_LM0_CAP_SEL_PMI_MASK                                  	0x00000000000001f0ull
#define AR_PI_DBG_LM0_CAP_SEL_PTI_MASK                                  	0x000000000000000full
#define AR_PI_DBG_LM0_CAP_SEL_DEN_BP                                    	16
#define AR_PI_DBG_LM0_CAP_SEL_PII_BP                                    	12
#define AR_PI_DBG_LM0_CAP_SEL_PMI_BP                                    	4
#define AR_PI_DBG_LM0_CAP_SEL_PTI_BP                                    	0
#define AR_PI_DBG_LM0_CAP_SEL_DEN_QW                                    	0
#define AR_PI_DBG_LM0_CAP_SEL_PII_QW                                    	0
#define AR_PI_DBG_LM0_CAP_SEL_PMI_QW                                    	0
#define AR_PI_DBG_LM0_CAP_SEL_PTI_QW                                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T0_CMP_LO DEFINES
 */
#define AR_PI_DBG_LM0_T0_CMP_LO_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T0_CMP_LO_DATA_BP                                 	0
#define AR_PI_DBG_LM0_T0_CMP_LO_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T0_CMP_MID DEFINES
 */
#define AR_PI_DBG_LM0_T0_CMP_MID_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T0_CMP_MID_DATA_BP                                	0
#define AR_PI_DBG_LM0_T0_CMP_MID_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T0_CMP_HI DEFINES
 */
#define AR_PI_DBG_LM0_T0_CMP_HI_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T0_CMP_HI_DATA_BP                                 	0
#define AR_PI_DBG_LM0_T0_CMP_HI_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T0_MODE DEFINES
 */
#define AR_PI_DBG_LM0_T0_MODE_DATA_MASK                                 	0x0000000000000003ull
#define AR_PI_DBG_LM0_T0_MODE_DATA_BP                                   	0
#define AR_PI_DBG_LM0_T0_MODE_DATA_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T0_MASK_LO DEFINES
 */
#define AR_PI_DBG_LM0_T0_MASK_LO_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T0_MASK_LO_DATA_BP                                	0
#define AR_PI_DBG_LM0_T0_MASK_LO_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T0_MASK_MID DEFINES
 */
#define AR_PI_DBG_LM0_T0_MASK_MID_DATA_MASK                             	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T0_MASK_MID_DATA_BP                               	0
#define AR_PI_DBG_LM0_T0_MASK_MID_DATA_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T0_MASK_HI DEFINES
 */
#define AR_PI_DBG_LM0_T0_MASK_HI_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T0_MASK_HI_DATA_BP                                	0
#define AR_PI_DBG_LM0_T0_MASK_HI_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_TRIG_SEL DEFINES
 */
#define AR_PI_DBG_LM0_TRIG_SEL_DEN_MASK                                 	0x00000000000f0000ull
#define AR_PI_DBG_LM0_TRIG_SEL_PII_MASK                                 	0x000000000000f000ull
#define AR_PI_DBG_LM0_TRIG_SEL_PMI_MASK                                 	0x00000000000001f0ull
#define AR_PI_DBG_LM0_TRIG_SEL_PTI_MASK                                 	0x000000000000000full
#define AR_PI_DBG_LM0_TRIG_SEL_DEN_BP                                   	16
#define AR_PI_DBG_LM0_TRIG_SEL_PII_BP                                   	12
#define AR_PI_DBG_LM0_TRIG_SEL_PMI_BP                                   	4
#define AR_PI_DBG_LM0_TRIG_SEL_PTI_BP                                   	0
#define AR_PI_DBG_LM0_TRIG_SEL_DEN_QW                                   	0
#define AR_PI_DBG_LM0_TRIG_SEL_PII_QW                                   	0
#define AR_PI_DBG_LM0_TRIG_SEL_PMI_QW                                   	0
#define AR_PI_DBG_LM0_TRIG_SEL_PTI_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T1_CMP_LO DEFINES
 */
#define AR_PI_DBG_LM0_T1_CMP_LO_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T1_CMP_LO_DATA_BP                                 	0
#define AR_PI_DBG_LM0_T1_CMP_LO_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T1_CMP_MID DEFINES
 */
#define AR_PI_DBG_LM0_T1_CMP_MID_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T1_CMP_MID_DATA_BP                                	0
#define AR_PI_DBG_LM0_T1_CMP_MID_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T1_CMP_HI DEFINES
 */
#define AR_PI_DBG_LM0_T1_CMP_HI_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T1_CMP_HI_DATA_BP                                 	0
#define AR_PI_DBG_LM0_T1_CMP_HI_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T1_MODE DEFINES
 */
#define AR_PI_DBG_LM0_T1_MODE_DATA_MASK                                 	0x0000000000000003ull
#define AR_PI_DBG_LM0_T1_MODE_DATA_BP                                   	0
#define AR_PI_DBG_LM0_T1_MODE_DATA_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T1_MASK_LO DEFINES
 */
#define AR_PI_DBG_LM0_T1_MASK_LO_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T1_MASK_LO_DATA_BP                                	0
#define AR_PI_DBG_LM0_T1_MASK_LO_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T1_MASK_MID DEFINES
 */
#define AR_PI_DBG_LM0_T1_MASK_MID_DATA_MASK                             	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T1_MASK_MID_DATA_BP                               	0
#define AR_PI_DBG_LM0_T1_MASK_MID_DATA_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_T1_MASK_HI DEFINES
 */
#define AR_PI_DBG_LM0_T1_MASK_HI_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM0_T1_MASK_HI_DATA_BP                                	0
#define AR_PI_DBG_LM0_T1_MASK_HI_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM0_MUX_SEL DEFINES
 */
#define AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_MASK                            	0x0000000000070000ull
#define AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_MASK                            	0x0000000000007000ull
#define AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_MASK                              	0x0000000000000700ull
#define AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_MASK                            	0x0000000000000070ull
#define AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_MASK                            	0x0000000000000007ull
#define AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_BP                              	16
#define AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_BP                              	12
#define AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_BP                                	8
#define AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_BP                              	4
#define AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_BP                              	0
#define AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_QW                              	0
#define AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_QW                              	0
#define AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_QW                                	0
#define AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_QW                              	0
#define AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_CTL DEFINES
 */
#define AR_PI_DBG_LM1_CTL_LM_RST_MASK                                   	0x8000000000000000ull
#define AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_MASK                       	0x0010000000000000ull
#define AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_MASK                        	0x0008000000000000ull
#define AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_MASK                        	0x0004000000000000ull
#define AR_PI_DBG_LM1_CTL_LM_CAP_STATE_MASK                             	0x0003000000000000ull
#define AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK                            	0x000003ff00000000ull
#define AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK                            	0x0000000003ff0000ull
#define AR_PI_DBG_LM1_CTL_LM_CTL_MODE_MASK                              	0x000000000000000full
#define AR_PI_DBG_LM1_CTL_LM_RST_BP                                     	63
#define AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_BP                         	52
#define AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_BP                          	51
#define AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_BP                          	50
#define AR_PI_DBG_LM1_CTL_LM_CAP_STATE_BP                               	48
#define AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_BP                              	32
#define AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_BP                              	16
#define AR_PI_DBG_LM1_CTL_LM_CTL_MODE_BP                                	0
#define AR_PI_DBG_LM1_CTL_LM_RST_QW                                     	0
#define AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_QW                         	0
#define AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_QW                          	0
#define AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_QW                          	0
#define AR_PI_DBG_LM1_CTL_LM_CAP_STATE_QW                               	0
#define AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_QW                              	0
#define AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_QW                              	0
#define AR_PI_DBG_LM1_CTL_LM_CTL_MODE_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_PTRS DEFINES
 */
#define AR_PI_DBG_LM1_PTRS_LM_REC_ACT_MASK                              	0x0000000800000000ull
#define AR_PI_DBG_LM1_PTRS_LM_REC_DONE_MASK                             	0x0000000400000000ull
#define AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_MASK                           	0x0000000200000000ull
#define AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK                           	0x0000000100000000ull
#define AR_PI_DBG_LM1_PTRS_LM_RD_PTR_MASK                               	0x0000000001ff0000ull
#define AR_PI_DBG_LM1_PTRS_LM_WR_PTR_MASK                               	0x00000000000001ffull
#define AR_PI_DBG_LM1_PTRS_LM_REC_ACT_BP                                	35
#define AR_PI_DBG_LM1_PTRS_LM_REC_DONE_BP                               	34
#define AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_BP                             	33
#define AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_BP                             	32
#define AR_PI_DBG_LM1_PTRS_LM_RD_PTR_BP                                 	16
#define AR_PI_DBG_LM1_PTRS_LM_WR_PTR_BP                                 	0
#define AR_PI_DBG_LM1_PTRS_LM_REC_ACT_QW                                	0
#define AR_PI_DBG_LM1_PTRS_LM_REC_DONE_QW                               	0
#define AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_QW                             	0
#define AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_QW                             	0
#define AR_PI_DBG_LM1_PTRS_LM_RD_PTR_QW                                 	0
#define AR_PI_DBG_LM1_PTRS_LM_WR_PTR_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_READ_LO DEFINES
 */
#define AR_PI_DBG_LM1_READ_LO_DATA_MASK                                 	0xffffffffffffffffull
#define AR_PI_DBG_LM1_READ_LO_DATA_BP                                   	0
#define AR_PI_DBG_LM1_READ_LO_DATA_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_READ_MID DEFINES
 */
#define AR_PI_DBG_LM1_READ_MID_DATA_MASK                                	0xffffffffffffffffull
#define AR_PI_DBG_LM1_READ_MID_DATA_BP                                  	0
#define AR_PI_DBG_LM1_READ_MID_DATA_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_READ_HI DEFINES
 */
#define AR_PI_DBG_LM1_READ_HI_DATA_MASK                                 	0xffffffffffffffffull
#define AR_PI_DBG_LM1_READ_HI_DATA_BP                                   	0
#define AR_PI_DBG_LM1_READ_HI_DATA_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_SNAP_SEL DEFINES
 */
#define AR_PI_DBG_LM1_SNAP_SEL_SEL_MASK                                 	0x0000000000000007ull
#define AR_PI_DBG_LM1_SNAP_SEL_SEL_BP                                   	0
#define AR_PI_DBG_LM1_SNAP_SEL_SEL_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_SNAP_DLO DEFINES
 */
#define AR_PI_DBG_LM1_SNAP_DLO_DATA_MASK                                	0xffffffffffffffffull
#define AR_PI_DBG_LM1_SNAP_DLO_DATA_BP                                  	0
#define AR_PI_DBG_LM1_SNAP_DLO_DATA_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_SNAP_DMID DEFINES
 */
#define AR_PI_DBG_LM1_SNAP_DMID_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM1_SNAP_DMID_DATA_BP                                 	0
#define AR_PI_DBG_LM1_SNAP_DMID_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_SNAP_DHI DEFINES
 */
#define AR_PI_DBG_LM1_SNAP_DHI_DATA_MASK                                	0xffffffffffffffffull
#define AR_PI_DBG_LM1_SNAP_DHI_DATA_BP                                  	0
#define AR_PI_DBG_LM1_SNAP_DHI_DATA_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_REM_TRIG DEFINES
 */
#define AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_MASK                  	0x0000000000000004ull
#define AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_MASK                   	0x0000000000000002ull
#define AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_MASK                  	0x0000000000000001ull
#define AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_BP                    	2
#define AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_BP                     	1
#define AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_BP                    	0
#define AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_QW                    	0
#define AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_QW                     	0
#define AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_TRIG_STS DEFINES
 */
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_MASK                  	0x0000000000000080ull
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_MASK                  	0x0000000000000040ull
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK                 	0x0000000000000020ull
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK                 	0x0000000000000010ull
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_MASK                       	0x0000000000000008ull
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_MASK                       	0x0000000000000004ull
#define AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_MASK                       	0x0000000000000002ull
#define AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_MASK                       	0x0000000000000001ull
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_BP                    	7
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_BP                    	6
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_BP                   	5
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_BP                   	4
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_BP                         	3
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_BP                         	2
#define AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_BP                         	1
#define AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_BP                         	0
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_QW                    	0
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_QW                    	0
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_QW                   	0
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_QW                   	0
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_QW                         	0
#define AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_QW                         	0
#define AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_QW                         	0
#define AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_ERRINJ_LM1 DEFINES
 */
#define AR_PI_DBG_ERRINJ_LM1_ADDRESS_MASK                               	0x000001ff00000000ull
#define AR_PI_DBG_ERRINJ_LM1_PARITY_MASK                                	0x0000000000ff0000ull
#define AR_PI_DBG_ERRINJ_LM1_TRIGGERED_MASK                             	0x0000000000000008ull
#define AR_PI_DBG_ERRINJ_LM1_MODE_MASK                                  	0x0000000000000006ull
#define AR_PI_DBG_ERRINJ_LM1_ENABLE_MASK                                	0x0000000000000001ull
#define AR_PI_DBG_ERRINJ_LM1_ADDRESS_BP                                 	32
#define AR_PI_DBG_ERRINJ_LM1_PARITY_BP                                  	16
#define AR_PI_DBG_ERRINJ_LM1_TRIGGERED_BP                               	3
#define AR_PI_DBG_ERRINJ_LM1_MODE_BP                                    	1
#define AR_PI_DBG_ERRINJ_LM1_ENABLE_BP                                  	0
#define AR_PI_DBG_ERRINJ_LM1_ADDRESS_QW                                 	0
#define AR_PI_DBG_ERRINJ_LM1_PARITY_QW                                  	0
#define AR_PI_DBG_ERRINJ_LM1_TRIGGERED_QW                               	0
#define AR_PI_DBG_ERRINJ_LM1_MODE_QW                                    	0
#define AR_PI_DBG_ERRINJ_LM1_ENABLE_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_ERR_INFO_LM1_PERR DEFINES
 */
#define AR_PI_ERR_INFO_LM1_PERR_ADDRESS_MASK                            	0x00000000001ff000ull
#define AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_MASK                  	0x0000000000000008ull
#define AR_PI_ERR_INFO_LM1_PERR_ADDRESS_BP                              	12
#define AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_BP                    	3
#define AR_PI_ERR_INFO_LM1_PERR_ADDRESS_QW                              	0
#define AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_ERR_INFO_LM1_PERR_CNT DEFINES
 */
#define AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_MASK                            	0xffffffffffffffffull
#define AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_BP                              	0
#define AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_CAP_SEL DEFINES
 */
#define AR_PI_DBG_LM1_CAP_SEL_DEN_MASK                                  	0x00000000000f0000ull
#define AR_PI_DBG_LM1_CAP_SEL_PII_MASK                                  	0x000000000000f000ull
#define AR_PI_DBG_LM1_CAP_SEL_PMI_MASK                                  	0x00000000000001f0ull
#define AR_PI_DBG_LM1_CAP_SEL_PTI_MASK                                  	0x000000000000000full
#define AR_PI_DBG_LM1_CAP_SEL_DEN_BP                                    	16
#define AR_PI_DBG_LM1_CAP_SEL_PII_BP                                    	12
#define AR_PI_DBG_LM1_CAP_SEL_PMI_BP                                    	4
#define AR_PI_DBG_LM1_CAP_SEL_PTI_BP                                    	0
#define AR_PI_DBG_LM1_CAP_SEL_DEN_QW                                    	0
#define AR_PI_DBG_LM1_CAP_SEL_PII_QW                                    	0
#define AR_PI_DBG_LM1_CAP_SEL_PMI_QW                                    	0
#define AR_PI_DBG_LM1_CAP_SEL_PTI_QW                                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T0_CMP_LO DEFINES
 */
#define AR_PI_DBG_LM1_T0_CMP_LO_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T0_CMP_LO_DATA_BP                                 	0
#define AR_PI_DBG_LM1_T0_CMP_LO_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T0_CMP_MID DEFINES
 */
#define AR_PI_DBG_LM1_T0_CMP_MID_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T0_CMP_MID_DATA_BP                                	0
#define AR_PI_DBG_LM1_T0_CMP_MID_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T0_CMP_HI DEFINES
 */
#define AR_PI_DBG_LM1_T0_CMP_HI_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T0_CMP_HI_DATA_BP                                 	0
#define AR_PI_DBG_LM1_T0_CMP_HI_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T0_MODE DEFINES
 */
#define AR_PI_DBG_LM1_T0_MODE_DATA_MASK                                 	0x0000000000000003ull
#define AR_PI_DBG_LM1_T0_MODE_DATA_BP                                   	0
#define AR_PI_DBG_LM1_T0_MODE_DATA_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T0_MASK_LO DEFINES
 */
#define AR_PI_DBG_LM1_T0_MASK_LO_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T0_MASK_LO_DATA_BP                                	0
#define AR_PI_DBG_LM1_T0_MASK_LO_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T0_MASK_MID DEFINES
 */
#define AR_PI_DBG_LM1_T0_MASK_MID_DATA_MASK                             	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T0_MASK_MID_DATA_BP                               	0
#define AR_PI_DBG_LM1_T0_MASK_MID_DATA_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T0_MASK_HI DEFINES
 */
#define AR_PI_DBG_LM1_T0_MASK_HI_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T0_MASK_HI_DATA_BP                                	0
#define AR_PI_DBG_LM1_T0_MASK_HI_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_TRIG_SEL DEFINES
 */
#define AR_PI_DBG_LM1_TRIG_SEL_DEN_MASK                                 	0x00000000000f0000ull
#define AR_PI_DBG_LM1_TRIG_SEL_PII_MASK                                 	0x000000000000f000ull
#define AR_PI_DBG_LM1_TRIG_SEL_PMI_MASK                                 	0x00000000000001f0ull
#define AR_PI_DBG_LM1_TRIG_SEL_PTI_MASK                                 	0x000000000000000full
#define AR_PI_DBG_LM1_TRIG_SEL_DEN_BP                                   	16
#define AR_PI_DBG_LM1_TRIG_SEL_PII_BP                                   	12
#define AR_PI_DBG_LM1_TRIG_SEL_PMI_BP                                   	4
#define AR_PI_DBG_LM1_TRIG_SEL_PTI_BP                                   	0
#define AR_PI_DBG_LM1_TRIG_SEL_DEN_QW                                   	0
#define AR_PI_DBG_LM1_TRIG_SEL_PII_QW                                   	0
#define AR_PI_DBG_LM1_TRIG_SEL_PMI_QW                                   	0
#define AR_PI_DBG_LM1_TRIG_SEL_PTI_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T1_CMP_LO DEFINES
 */
#define AR_PI_DBG_LM1_T1_CMP_LO_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T1_CMP_LO_DATA_BP                                 	0
#define AR_PI_DBG_LM1_T1_CMP_LO_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T1_CMP_MID DEFINES
 */
#define AR_PI_DBG_LM1_T1_CMP_MID_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T1_CMP_MID_DATA_BP                                	0
#define AR_PI_DBG_LM1_T1_CMP_MID_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T1_CMP_HI DEFINES
 */
#define AR_PI_DBG_LM1_T1_CMP_HI_DATA_MASK                               	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T1_CMP_HI_DATA_BP                                 	0
#define AR_PI_DBG_LM1_T1_CMP_HI_DATA_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T1_MODE DEFINES
 */
#define AR_PI_DBG_LM1_T1_MODE_DATA_MASK                                 	0x0000000000000003ull
#define AR_PI_DBG_LM1_T1_MODE_DATA_BP                                   	0
#define AR_PI_DBG_LM1_T1_MODE_DATA_QW                                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T1_MASK_LO DEFINES
 */
#define AR_PI_DBG_LM1_T1_MASK_LO_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T1_MASK_LO_DATA_BP                                	0
#define AR_PI_DBG_LM1_T1_MASK_LO_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T1_MASK_MID DEFINES
 */
#define AR_PI_DBG_LM1_T1_MASK_MID_DATA_MASK                             	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T1_MASK_MID_DATA_BP                               	0
#define AR_PI_DBG_LM1_T1_MASK_MID_DATA_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_T1_MASK_HI DEFINES
 */
#define AR_PI_DBG_LM1_T1_MASK_HI_DATA_MASK                              	0xffffffffffffffffull
#define AR_PI_DBG_LM1_T1_MASK_HI_DATA_BP                                	0
#define AR_PI_DBG_LM1_T1_MASK_HI_DATA_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_PI_DBG_LM1_MUX_SEL DEFINES
 */
#define AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_MASK                            	0x0000000000070000ull
#define AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_MASK                            	0x0000000000007000ull
#define AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_MASK                              	0x0000000000000700ull
#define AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_MASK                            	0x0000000000000070ull
#define AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_MASK                            	0x0000000000000007ull
#define AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_BP                              	16
#define AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_BP                              	12
#define AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_BP                                	8
#define AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_BP                              	4
#define AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_BP                              	0
#define AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_QW                              	0
#define AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_QW                              	0
#define AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_QW                                	0
#define AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_QW                              	0
#define AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */



/*
 *  AR PI_LM MACROS
 */
#ifndef RD_FIELD
#define RD_FIELD(d, bp, m)	(((d)&(m))>>(bp))
#endif
#ifndef WR_FIELD
#define WR_FIELD(mmr, d, bp, m)	(mmr = (((mmr) & ~(m)) | ((((uint64_t)(d))<<(bp)) & (m))))
#endif
#define RF_AR_PI_DBG_LM0_CTL_LM_RST(mmr)                        	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CTL_LM_RST_BP,\
									AR_PI_DBG_LM0_CTL_LM_RST_MASK)
#define WF_AR_PI_DBG_LM0_CTL_LM_RST(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CTL_LM_RST_BP,\
									AR_PI_DBG_LM0_CTL_LM_RST_MASK)
#define RF_AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_BP,\
									AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_MASK)
#define WF_AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_BP,\
									AR_PI_DBG_LM0_CTL_LM_TRIG01_OCCURRED_MASK)
#define RF_AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_BP,\
									AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_MASK)
#define WF_AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_BP,\
									AR_PI_DBG_LM0_CTL_LM_TRIG1_OCCURRED_MASK)
#define RF_AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_BP,\
									AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_MASK)
#define WF_AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_BP,\
									AR_PI_DBG_LM0_CTL_LM_TRIG0_OCCURRED_MASK)
#define RF_AR_PI_DBG_LM0_CTL_LM_CAP_STATE(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CTL_LM_CAP_STATE_BP,\
									AR_PI_DBG_LM0_CTL_LM_CAP_STATE_MASK)
#define WF_AR_PI_DBG_LM0_CTL_LM_CAP_STATE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CTL_LM_CAP_STATE_BP,\
									AR_PI_DBG_LM0_CTL_LM_CAP_STATE_MASK)
#define RF_AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_BP,\
									AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK)
#define WF_AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_BP,\
									AR_PI_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK)
#define RF_AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_BP,\
									AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK)
#define WF_AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_BP,\
									AR_PI_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK)
#define RF_AR_PI_DBG_LM0_CTL_LM_CTL_MODE(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CTL_LM_CTL_MODE_BP,\
									AR_PI_DBG_LM0_CTL_LM_CTL_MODE_MASK)
#define WF_AR_PI_DBG_LM0_CTL_LM_CTL_MODE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CTL_LM_CTL_MODE_BP,\
									AR_PI_DBG_LM0_CTL_LM_CTL_MODE_MASK)
#define RF_AR_PI_DBG_LM0_PTRS_LM_REC_ACT(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_PTRS_LM_REC_ACT_BP,\
									AR_PI_DBG_LM0_PTRS_LM_REC_ACT_MASK)
#define WF_AR_PI_DBG_LM0_PTRS_LM_REC_ACT(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_PTRS_LM_REC_ACT_BP,\
									AR_PI_DBG_LM0_PTRS_LM_REC_ACT_MASK)
#define RF_AR_PI_DBG_LM0_PTRS_LM_REC_DONE(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_PTRS_LM_REC_DONE_BP,\
									AR_PI_DBG_LM0_PTRS_LM_REC_DONE_MASK)
#define WF_AR_PI_DBG_LM0_PTRS_LM_REC_DONE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_PTRS_LM_REC_DONE_BP,\
									AR_PI_DBG_LM0_PTRS_LM_REC_DONE_MASK)
#define RF_AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT(mmr)                	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_BP,\
									AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_MASK)
#define WF_AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_BP,\
									AR_PI_DBG_LM0_PTRS_LM_MULT_EVENT_MASK)
#define RF_AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP(mmr)                	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_BP,\
									AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK)
#define WF_AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_BP,\
									AR_PI_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK)
#define RF_AR_PI_DBG_LM0_PTRS_LM_RD_PTR(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_PTRS_LM_RD_PTR_BP,\
									AR_PI_DBG_LM0_PTRS_LM_RD_PTR_MASK)
#define WF_AR_PI_DBG_LM0_PTRS_LM_RD_PTR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_PTRS_LM_RD_PTR_BP,\
									AR_PI_DBG_LM0_PTRS_LM_RD_PTR_MASK)
#define RF_AR_PI_DBG_LM0_PTRS_LM_WR_PTR(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_PTRS_LM_WR_PTR_BP,\
									AR_PI_DBG_LM0_PTRS_LM_WR_PTR_MASK)
#define WF_AR_PI_DBG_LM0_PTRS_LM_WR_PTR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_PTRS_LM_WR_PTR_BP,\
									AR_PI_DBG_LM0_PTRS_LM_WR_PTR_MASK)
#define RF_AR_PI_DBG_LM0_READ_LO_DATA(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_READ_LO_DATA_BP,\
									AR_PI_DBG_LM0_READ_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM0_READ_LO_DATA(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_READ_LO_DATA_BP,\
									AR_PI_DBG_LM0_READ_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM0_READ_MID_DATA(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_READ_MID_DATA_BP,\
									AR_PI_DBG_LM0_READ_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM0_READ_MID_DATA(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_READ_MID_DATA_BP,\
									AR_PI_DBG_LM0_READ_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM0_READ_HI_DATA(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_READ_HI_DATA_BP,\
									AR_PI_DBG_LM0_READ_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM0_READ_HI_DATA(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_READ_HI_DATA_BP,\
									AR_PI_DBG_LM0_READ_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM0_SNAP_SEL_SEL(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_SNAP_SEL_SEL_BP,\
									AR_PI_DBG_LM0_SNAP_SEL_SEL_MASK)
#define WF_AR_PI_DBG_LM0_SNAP_SEL_SEL(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_SNAP_SEL_SEL_BP,\
									AR_PI_DBG_LM0_SNAP_SEL_SEL_MASK)
#define RF_AR_PI_DBG_LM0_SNAP_DLO_DATA(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_SNAP_DLO_DATA_BP,\
									AR_PI_DBG_LM0_SNAP_DLO_DATA_MASK)
#define WF_AR_PI_DBG_LM0_SNAP_DLO_DATA(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_SNAP_DLO_DATA_BP,\
									AR_PI_DBG_LM0_SNAP_DLO_DATA_MASK)
#define RF_AR_PI_DBG_LM0_SNAP_DMID_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_SNAP_DMID_DATA_BP,\
									AR_PI_DBG_LM0_SNAP_DMID_DATA_MASK)
#define WF_AR_PI_DBG_LM0_SNAP_DMID_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_SNAP_DMID_DATA_BP,\
									AR_PI_DBG_LM0_SNAP_DMID_DATA_MASK)
#define RF_AR_PI_DBG_LM0_SNAP_DHI_DATA(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_SNAP_DHI_DATA_BP,\
									AR_PI_DBG_LM0_SNAP_DHI_DATA_MASK)
#define WF_AR_PI_DBG_LM0_SNAP_DHI_DATA(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_SNAP_DHI_DATA_BP,\
									AR_PI_DBG_LM0_SNAP_DHI_DATA_MASK)
#define RF_AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR(mmr)       	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_BP,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_MASK)
#define WF_AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_BP,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_MMR_MASK)
#define RF_AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI(mmr)        	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_BP,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_MASK)
#define WF_AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_BP,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_PI_MASK)
#define RF_AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC(mmr)       	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_BP,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_MASK)
#define WF_AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_BP,\
									AR_PI_DBG_LM0_REM_TRIG_LM_ENABLE_FROM_NIC_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST(mmr)       	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_LAST_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST(mmr)       	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_LAST_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST(mmr)      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST(mmr)      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG1_RCV_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_BP,\
									AR_PI_DBG_LM0_TRIG_STS_REM_TRIG0_RCV_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_BP,\
									AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_BP,\
									AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG1_RCV_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_BP,\
									AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_BP,\
									AR_PI_DBG_LM0_TRIG_STS_LCL_TRIG0_RCV_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM0_ADDRESS(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM0_ADDRESS_BP,\
									AR_PI_DBG_ERRINJ_LM0_ADDRESS_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM0_ADDRESS(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM0_ADDRESS_BP,\
									AR_PI_DBG_ERRINJ_LM0_ADDRESS_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM0_PARITY(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM0_PARITY_BP,\
									AR_PI_DBG_ERRINJ_LM0_PARITY_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM0_PARITY(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM0_PARITY_BP,\
									AR_PI_DBG_ERRINJ_LM0_PARITY_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM0_TRIGGERED(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM0_TRIGGERED_BP,\
									AR_PI_DBG_ERRINJ_LM0_TRIGGERED_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM0_TRIGGERED(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM0_TRIGGERED_BP,\
									AR_PI_DBG_ERRINJ_LM0_TRIGGERED_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM0_MODE(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM0_MODE_BP,\
									AR_PI_DBG_ERRINJ_LM0_MODE_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM0_MODE(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM0_MODE_BP,\
									AR_PI_DBG_ERRINJ_LM0_MODE_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM0_ENABLE(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM0_ENABLE_BP,\
									AR_PI_DBG_ERRINJ_LM0_ENABLE_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM0_ENABLE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM0_ENABLE_BP,\
									AR_PI_DBG_ERRINJ_LM0_ENABLE_MASK)
#define RF_AR_PI_ERR_INFO_LM0_PERR_ADDRESS(mmr)                 	RD_FIELD(mmr,\
									AR_PI_ERR_INFO_LM0_PERR_ADDRESS_BP,\
									AR_PI_ERR_INFO_LM0_PERR_ADDRESS_MASK)
#define WF_AR_PI_ERR_INFO_LM0_PERR_ADDRESS(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_ERR_INFO_LM0_PERR_ADDRESS_BP,\
									AR_PI_ERR_INFO_LM0_PERR_ADDRESS_MASK)
#define RF_AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR(mmr)       	RD_FIELD(mmr,\
									AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_BP,\
									AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_MASK)
#define WF_AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_BP,\
									AR_PI_ERR_INFO_LM0_PERR_MMR_DETECTED_PERR_MASK)
#define RF_AR_PI_ERR_INFO_LM0_PERR_CNT_CNT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_BP,\
									AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_MASK)
#define WF_AR_PI_ERR_INFO_LM0_PERR_CNT_CNT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_BP,\
									AR_PI_ERR_INFO_LM0_PERR_CNT_CNT_MASK)
#define RF_AR_PI_DBG_LM0_CAP_SEL_DEN(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CAP_SEL_DEN_BP,\
									AR_PI_DBG_LM0_CAP_SEL_DEN_MASK)
#define WF_AR_PI_DBG_LM0_CAP_SEL_DEN(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CAP_SEL_DEN_BP,\
									AR_PI_DBG_LM0_CAP_SEL_DEN_MASK)
#define RF_AR_PI_DBG_LM0_CAP_SEL_PII(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CAP_SEL_PII_BP,\
									AR_PI_DBG_LM0_CAP_SEL_PII_MASK)
#define WF_AR_PI_DBG_LM0_CAP_SEL_PII(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CAP_SEL_PII_BP,\
									AR_PI_DBG_LM0_CAP_SEL_PII_MASK)
#define RF_AR_PI_DBG_LM0_CAP_SEL_PMI(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CAP_SEL_PMI_BP,\
									AR_PI_DBG_LM0_CAP_SEL_PMI_MASK)
#define WF_AR_PI_DBG_LM0_CAP_SEL_PMI(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CAP_SEL_PMI_BP,\
									AR_PI_DBG_LM0_CAP_SEL_PMI_MASK)
#define RF_AR_PI_DBG_LM0_CAP_SEL_PTI(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_CAP_SEL_PTI_BP,\
									AR_PI_DBG_LM0_CAP_SEL_PTI_MASK)
#define WF_AR_PI_DBG_LM0_CAP_SEL_PTI(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_CAP_SEL_PTI_BP,\
									AR_PI_DBG_LM0_CAP_SEL_PTI_MASK)
#define RF_AR_PI_DBG_LM0_T0_CMP_LO_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T0_CMP_LO_DATA_BP,\
									AR_PI_DBG_LM0_T0_CMP_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T0_CMP_LO_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T0_CMP_LO_DATA_BP,\
									AR_PI_DBG_LM0_T0_CMP_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T0_CMP_MID_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T0_CMP_MID_DATA_BP,\
									AR_PI_DBG_LM0_T0_CMP_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T0_CMP_MID_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T0_CMP_MID_DATA_BP,\
									AR_PI_DBG_LM0_T0_CMP_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T0_CMP_HI_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T0_CMP_HI_DATA_BP,\
									AR_PI_DBG_LM0_T0_CMP_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T0_CMP_HI_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T0_CMP_HI_DATA_BP,\
									AR_PI_DBG_LM0_T0_CMP_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T0_MODE_DATA(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T0_MODE_DATA_BP,\
									AR_PI_DBG_LM0_T0_MODE_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T0_MODE_DATA(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T0_MODE_DATA_BP,\
									AR_PI_DBG_LM0_T0_MODE_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T0_MASK_LO_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T0_MASK_LO_DATA_BP,\
									AR_PI_DBG_LM0_T0_MASK_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T0_MASK_LO_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T0_MASK_LO_DATA_BP,\
									AR_PI_DBG_LM0_T0_MASK_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T0_MASK_MID_DATA(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T0_MASK_MID_DATA_BP,\
									AR_PI_DBG_LM0_T0_MASK_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T0_MASK_MID_DATA(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T0_MASK_MID_DATA_BP,\
									AR_PI_DBG_LM0_T0_MASK_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T0_MASK_HI_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T0_MASK_HI_DATA_BP,\
									AR_PI_DBG_LM0_T0_MASK_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T0_MASK_HI_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T0_MASK_HI_DATA_BP,\
									AR_PI_DBG_LM0_T0_MASK_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_SEL_DEN(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_SEL_DEN_BP,\
									AR_PI_DBG_LM0_TRIG_SEL_DEN_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_SEL_DEN(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_SEL_DEN_BP,\
									AR_PI_DBG_LM0_TRIG_SEL_DEN_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_SEL_PII(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_SEL_PII_BP,\
									AR_PI_DBG_LM0_TRIG_SEL_PII_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_SEL_PII(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_SEL_PII_BP,\
									AR_PI_DBG_LM0_TRIG_SEL_PII_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_SEL_PMI(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_SEL_PMI_BP,\
									AR_PI_DBG_LM0_TRIG_SEL_PMI_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_SEL_PMI(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_SEL_PMI_BP,\
									AR_PI_DBG_LM0_TRIG_SEL_PMI_MASK)
#define RF_AR_PI_DBG_LM0_TRIG_SEL_PTI(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_TRIG_SEL_PTI_BP,\
									AR_PI_DBG_LM0_TRIG_SEL_PTI_MASK)
#define WF_AR_PI_DBG_LM0_TRIG_SEL_PTI(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_TRIG_SEL_PTI_BP,\
									AR_PI_DBG_LM0_TRIG_SEL_PTI_MASK)
#define RF_AR_PI_DBG_LM0_T1_CMP_LO_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T1_CMP_LO_DATA_BP,\
									AR_PI_DBG_LM0_T1_CMP_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T1_CMP_LO_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T1_CMP_LO_DATA_BP,\
									AR_PI_DBG_LM0_T1_CMP_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T1_CMP_MID_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T1_CMP_MID_DATA_BP,\
									AR_PI_DBG_LM0_T1_CMP_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T1_CMP_MID_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T1_CMP_MID_DATA_BP,\
									AR_PI_DBG_LM0_T1_CMP_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T1_CMP_HI_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T1_CMP_HI_DATA_BP,\
									AR_PI_DBG_LM0_T1_CMP_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T1_CMP_HI_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T1_CMP_HI_DATA_BP,\
									AR_PI_DBG_LM0_T1_CMP_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T1_MODE_DATA(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T1_MODE_DATA_BP,\
									AR_PI_DBG_LM0_T1_MODE_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T1_MODE_DATA(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T1_MODE_DATA_BP,\
									AR_PI_DBG_LM0_T1_MODE_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T1_MASK_LO_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T1_MASK_LO_DATA_BP,\
									AR_PI_DBG_LM0_T1_MASK_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T1_MASK_LO_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T1_MASK_LO_DATA_BP,\
									AR_PI_DBG_LM0_T1_MASK_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T1_MASK_MID_DATA(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T1_MASK_MID_DATA_BP,\
									AR_PI_DBG_LM0_T1_MASK_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T1_MASK_MID_DATA(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T1_MASK_MID_DATA_BP,\
									AR_PI_DBG_LM0_T1_MASK_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM0_T1_MASK_HI_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_T1_MASK_HI_DATA_BP,\
									AR_PI_DBG_LM0_T1_MASK_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM0_T1_MASK_HI_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_T1_MASK_HI_DATA_BP,\
									AR_PI_DBG_LM0_T1_MASK_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_BP,\
									AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_MASK)
#define WF_AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_BP,\
									AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL1_MASK)
#define RF_AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_BP,\
									AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_MASK)
#define WF_AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_BP,\
									AR_PI_DBG_LM0_MUX_SEL_PCLK_SEL0_MASK)
#define RF_AR_PI_DBG_LM0_MUX_SEL_CAP_SEL(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_BP,\
									AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_MASK)
#define WF_AR_PI_DBG_LM0_MUX_SEL_CAP_SEL(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_BP,\
									AR_PI_DBG_LM0_MUX_SEL_CAP_SEL_MASK)
#define RF_AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_BP,\
									AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_MASK)
#define WF_AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_BP,\
									AR_PI_DBG_LM0_MUX_SEL_TRIG1_SEL_MASK)
#define RF_AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_BP,\
									AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_MASK)
#define WF_AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_BP,\
									AR_PI_DBG_LM0_MUX_SEL_TRIG0_SEL_MASK)
#define RF_AR_PI_DBG_LM1_CTL_LM_RST(mmr)                        	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CTL_LM_RST_BP,\
									AR_PI_DBG_LM1_CTL_LM_RST_MASK)
#define WF_AR_PI_DBG_LM1_CTL_LM_RST(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CTL_LM_RST_BP,\
									AR_PI_DBG_LM1_CTL_LM_RST_MASK)
#define RF_AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_BP,\
									AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_MASK)
#define WF_AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_BP,\
									AR_PI_DBG_LM1_CTL_LM_TRIG01_OCCURRED_MASK)
#define RF_AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_BP,\
									AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_MASK)
#define WF_AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_BP,\
									AR_PI_DBG_LM1_CTL_LM_TRIG1_OCCURRED_MASK)
#define RF_AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED(mmr)             	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_BP,\
									AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_MASK)
#define WF_AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED(mmr,v)           	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_BP,\
									AR_PI_DBG_LM1_CTL_LM_TRIG0_OCCURRED_MASK)
#define RF_AR_PI_DBG_LM1_CTL_LM_CAP_STATE(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CTL_LM_CAP_STATE_BP,\
									AR_PI_DBG_LM1_CTL_LM_CAP_STATE_MASK)
#define WF_AR_PI_DBG_LM1_CTL_LM_CAP_STATE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CTL_LM_CAP_STATE_BP,\
									AR_PI_DBG_LM1_CTL_LM_CAP_STATE_MASK)
#define RF_AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_BP,\
									AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK)
#define WF_AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_BP,\
									AR_PI_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK)
#define RF_AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_BP,\
									AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK)
#define WF_AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_BP,\
									AR_PI_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK)
#define RF_AR_PI_DBG_LM1_CTL_LM_CTL_MODE(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CTL_LM_CTL_MODE_BP,\
									AR_PI_DBG_LM1_CTL_LM_CTL_MODE_MASK)
#define WF_AR_PI_DBG_LM1_CTL_LM_CTL_MODE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CTL_LM_CTL_MODE_BP,\
									AR_PI_DBG_LM1_CTL_LM_CTL_MODE_MASK)
#define RF_AR_PI_DBG_LM1_PTRS_LM_REC_ACT(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_PTRS_LM_REC_ACT_BP,\
									AR_PI_DBG_LM1_PTRS_LM_REC_ACT_MASK)
#define WF_AR_PI_DBG_LM1_PTRS_LM_REC_ACT(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_PTRS_LM_REC_ACT_BP,\
									AR_PI_DBG_LM1_PTRS_LM_REC_ACT_MASK)
#define RF_AR_PI_DBG_LM1_PTRS_LM_REC_DONE(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_PTRS_LM_REC_DONE_BP,\
									AR_PI_DBG_LM1_PTRS_LM_REC_DONE_MASK)
#define WF_AR_PI_DBG_LM1_PTRS_LM_REC_DONE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_PTRS_LM_REC_DONE_BP,\
									AR_PI_DBG_LM1_PTRS_LM_REC_DONE_MASK)
#define RF_AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT(mmr)                	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_BP,\
									AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_MASK)
#define WF_AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_BP,\
									AR_PI_DBG_LM1_PTRS_LM_MULT_EVENT_MASK)
#define RF_AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP(mmr)                	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_BP,\
									AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK)
#define WF_AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP(mmr,v)              	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_BP,\
									AR_PI_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK)
#define RF_AR_PI_DBG_LM1_PTRS_LM_RD_PTR(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_PTRS_LM_RD_PTR_BP,\
									AR_PI_DBG_LM1_PTRS_LM_RD_PTR_MASK)
#define WF_AR_PI_DBG_LM1_PTRS_LM_RD_PTR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_PTRS_LM_RD_PTR_BP,\
									AR_PI_DBG_LM1_PTRS_LM_RD_PTR_MASK)
#define RF_AR_PI_DBG_LM1_PTRS_LM_WR_PTR(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_PTRS_LM_WR_PTR_BP,\
									AR_PI_DBG_LM1_PTRS_LM_WR_PTR_MASK)
#define WF_AR_PI_DBG_LM1_PTRS_LM_WR_PTR(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_PTRS_LM_WR_PTR_BP,\
									AR_PI_DBG_LM1_PTRS_LM_WR_PTR_MASK)
#define RF_AR_PI_DBG_LM1_READ_LO_DATA(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_READ_LO_DATA_BP,\
									AR_PI_DBG_LM1_READ_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM1_READ_LO_DATA(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_READ_LO_DATA_BP,\
									AR_PI_DBG_LM1_READ_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM1_READ_MID_DATA(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_READ_MID_DATA_BP,\
									AR_PI_DBG_LM1_READ_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM1_READ_MID_DATA(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_READ_MID_DATA_BP,\
									AR_PI_DBG_LM1_READ_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM1_READ_HI_DATA(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_READ_HI_DATA_BP,\
									AR_PI_DBG_LM1_READ_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM1_READ_HI_DATA(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_READ_HI_DATA_BP,\
									AR_PI_DBG_LM1_READ_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM1_SNAP_SEL_SEL(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_SNAP_SEL_SEL_BP,\
									AR_PI_DBG_LM1_SNAP_SEL_SEL_MASK)
#define WF_AR_PI_DBG_LM1_SNAP_SEL_SEL(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_SNAP_SEL_SEL_BP,\
									AR_PI_DBG_LM1_SNAP_SEL_SEL_MASK)
#define RF_AR_PI_DBG_LM1_SNAP_DLO_DATA(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_SNAP_DLO_DATA_BP,\
									AR_PI_DBG_LM1_SNAP_DLO_DATA_MASK)
#define WF_AR_PI_DBG_LM1_SNAP_DLO_DATA(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_SNAP_DLO_DATA_BP,\
									AR_PI_DBG_LM1_SNAP_DLO_DATA_MASK)
#define RF_AR_PI_DBG_LM1_SNAP_DMID_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_SNAP_DMID_DATA_BP,\
									AR_PI_DBG_LM1_SNAP_DMID_DATA_MASK)
#define WF_AR_PI_DBG_LM1_SNAP_DMID_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_SNAP_DMID_DATA_BP,\
									AR_PI_DBG_LM1_SNAP_DMID_DATA_MASK)
#define RF_AR_PI_DBG_LM1_SNAP_DHI_DATA(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_SNAP_DHI_DATA_BP,\
									AR_PI_DBG_LM1_SNAP_DHI_DATA_MASK)
#define WF_AR_PI_DBG_LM1_SNAP_DHI_DATA(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_SNAP_DHI_DATA_BP,\
									AR_PI_DBG_LM1_SNAP_DHI_DATA_MASK)
#define RF_AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR(mmr)       	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_BP,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_MASK)
#define WF_AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_BP,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_MMR_MASK)
#define RF_AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI(mmr)        	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_BP,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_MASK)
#define WF_AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI(mmr,v)      	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_BP,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_PI_MASK)
#define RF_AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC(mmr)       	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_BP,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_MASK)
#define WF_AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_BP,\
									AR_PI_DBG_LM1_REM_TRIG_LM_ENABLE_FROM_NIC_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST(mmr)       	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_LAST_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST(mmr)       	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_LAST_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST(mmr)      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST(mmr)      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST(mmr,v)    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG1_RCV_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_BP,\
									AR_PI_DBG_LM1_TRIG_STS_REM_TRIG0_RCV_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_BP,\
									AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_BP,\
									AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG1_RCV_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV(mmr)            	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_BP,\
									AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV(mmr,v)          	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_BP,\
									AR_PI_DBG_LM1_TRIG_STS_LCL_TRIG0_RCV_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM1_ADDRESS(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM1_ADDRESS_BP,\
									AR_PI_DBG_ERRINJ_LM1_ADDRESS_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM1_ADDRESS(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM1_ADDRESS_BP,\
									AR_PI_DBG_ERRINJ_LM1_ADDRESS_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM1_PARITY(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM1_PARITY_BP,\
									AR_PI_DBG_ERRINJ_LM1_PARITY_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM1_PARITY(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM1_PARITY_BP,\
									AR_PI_DBG_ERRINJ_LM1_PARITY_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM1_TRIGGERED(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM1_TRIGGERED_BP,\
									AR_PI_DBG_ERRINJ_LM1_TRIGGERED_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM1_TRIGGERED(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM1_TRIGGERED_BP,\
									AR_PI_DBG_ERRINJ_LM1_TRIGGERED_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM1_MODE(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM1_MODE_BP,\
									AR_PI_DBG_ERRINJ_LM1_MODE_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM1_MODE(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM1_MODE_BP,\
									AR_PI_DBG_ERRINJ_LM1_MODE_MASK)
#define RF_AR_PI_DBG_ERRINJ_LM1_ENABLE(mmr)                     	RD_FIELD(mmr,\
									AR_PI_DBG_ERRINJ_LM1_ENABLE_BP,\
									AR_PI_DBG_ERRINJ_LM1_ENABLE_MASK)
#define WF_AR_PI_DBG_ERRINJ_LM1_ENABLE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_PI_DBG_ERRINJ_LM1_ENABLE_BP,\
									AR_PI_DBG_ERRINJ_LM1_ENABLE_MASK)
#define RF_AR_PI_ERR_INFO_LM1_PERR_ADDRESS(mmr)                 	RD_FIELD(mmr,\
									AR_PI_ERR_INFO_LM1_PERR_ADDRESS_BP,\
									AR_PI_ERR_INFO_LM1_PERR_ADDRESS_MASK)
#define WF_AR_PI_ERR_INFO_LM1_PERR_ADDRESS(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_ERR_INFO_LM1_PERR_ADDRESS_BP,\
									AR_PI_ERR_INFO_LM1_PERR_ADDRESS_MASK)
#define RF_AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR(mmr)       	RD_FIELD(mmr,\
									AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_BP,\
									AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_MASK)
#define WF_AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR(mmr,v)     	WR_FIELD(mmr,v,\
									AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_BP,\
									AR_PI_ERR_INFO_LM1_PERR_MMR_DETECTED_PERR_MASK)
#define RF_AR_PI_ERR_INFO_LM1_PERR_CNT_CNT(mmr)                 	RD_FIELD(mmr,\
									AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_BP,\
									AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_MASK)
#define WF_AR_PI_ERR_INFO_LM1_PERR_CNT_CNT(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_BP,\
									AR_PI_ERR_INFO_LM1_PERR_CNT_CNT_MASK)
#define RF_AR_PI_DBG_LM1_CAP_SEL_DEN(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CAP_SEL_DEN_BP,\
									AR_PI_DBG_LM1_CAP_SEL_DEN_MASK)
#define WF_AR_PI_DBG_LM1_CAP_SEL_DEN(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CAP_SEL_DEN_BP,\
									AR_PI_DBG_LM1_CAP_SEL_DEN_MASK)
#define RF_AR_PI_DBG_LM1_CAP_SEL_PII(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CAP_SEL_PII_BP,\
									AR_PI_DBG_LM1_CAP_SEL_PII_MASK)
#define WF_AR_PI_DBG_LM1_CAP_SEL_PII(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CAP_SEL_PII_BP,\
									AR_PI_DBG_LM1_CAP_SEL_PII_MASK)
#define RF_AR_PI_DBG_LM1_CAP_SEL_PMI(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CAP_SEL_PMI_BP,\
									AR_PI_DBG_LM1_CAP_SEL_PMI_MASK)
#define WF_AR_PI_DBG_LM1_CAP_SEL_PMI(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CAP_SEL_PMI_BP,\
									AR_PI_DBG_LM1_CAP_SEL_PMI_MASK)
#define RF_AR_PI_DBG_LM1_CAP_SEL_PTI(mmr)                       	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_CAP_SEL_PTI_BP,\
									AR_PI_DBG_LM1_CAP_SEL_PTI_MASK)
#define WF_AR_PI_DBG_LM1_CAP_SEL_PTI(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_CAP_SEL_PTI_BP,\
									AR_PI_DBG_LM1_CAP_SEL_PTI_MASK)
#define RF_AR_PI_DBG_LM1_T0_CMP_LO_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T0_CMP_LO_DATA_BP,\
									AR_PI_DBG_LM1_T0_CMP_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T0_CMP_LO_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T0_CMP_LO_DATA_BP,\
									AR_PI_DBG_LM1_T0_CMP_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T0_CMP_MID_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T0_CMP_MID_DATA_BP,\
									AR_PI_DBG_LM1_T0_CMP_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T0_CMP_MID_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T0_CMP_MID_DATA_BP,\
									AR_PI_DBG_LM1_T0_CMP_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T0_CMP_HI_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T0_CMP_HI_DATA_BP,\
									AR_PI_DBG_LM1_T0_CMP_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T0_CMP_HI_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T0_CMP_HI_DATA_BP,\
									AR_PI_DBG_LM1_T0_CMP_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T0_MODE_DATA(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T0_MODE_DATA_BP,\
									AR_PI_DBG_LM1_T0_MODE_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T0_MODE_DATA(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T0_MODE_DATA_BP,\
									AR_PI_DBG_LM1_T0_MODE_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T0_MASK_LO_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T0_MASK_LO_DATA_BP,\
									AR_PI_DBG_LM1_T0_MASK_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T0_MASK_LO_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T0_MASK_LO_DATA_BP,\
									AR_PI_DBG_LM1_T0_MASK_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T0_MASK_MID_DATA(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T0_MASK_MID_DATA_BP,\
									AR_PI_DBG_LM1_T0_MASK_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T0_MASK_MID_DATA(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T0_MASK_MID_DATA_BP,\
									AR_PI_DBG_LM1_T0_MASK_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T0_MASK_HI_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T0_MASK_HI_DATA_BP,\
									AR_PI_DBG_LM1_T0_MASK_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T0_MASK_HI_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T0_MASK_HI_DATA_BP,\
									AR_PI_DBG_LM1_T0_MASK_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_SEL_DEN(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_SEL_DEN_BP,\
									AR_PI_DBG_LM1_TRIG_SEL_DEN_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_SEL_DEN(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_SEL_DEN_BP,\
									AR_PI_DBG_LM1_TRIG_SEL_DEN_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_SEL_PII(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_SEL_PII_BP,\
									AR_PI_DBG_LM1_TRIG_SEL_PII_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_SEL_PII(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_SEL_PII_BP,\
									AR_PI_DBG_LM1_TRIG_SEL_PII_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_SEL_PMI(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_SEL_PMI_BP,\
									AR_PI_DBG_LM1_TRIG_SEL_PMI_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_SEL_PMI(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_SEL_PMI_BP,\
									AR_PI_DBG_LM1_TRIG_SEL_PMI_MASK)
#define RF_AR_PI_DBG_LM1_TRIG_SEL_PTI(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_TRIG_SEL_PTI_BP,\
									AR_PI_DBG_LM1_TRIG_SEL_PTI_MASK)
#define WF_AR_PI_DBG_LM1_TRIG_SEL_PTI(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_TRIG_SEL_PTI_BP,\
									AR_PI_DBG_LM1_TRIG_SEL_PTI_MASK)
#define RF_AR_PI_DBG_LM1_T1_CMP_LO_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T1_CMP_LO_DATA_BP,\
									AR_PI_DBG_LM1_T1_CMP_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T1_CMP_LO_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T1_CMP_LO_DATA_BP,\
									AR_PI_DBG_LM1_T1_CMP_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T1_CMP_MID_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T1_CMP_MID_DATA_BP,\
									AR_PI_DBG_LM1_T1_CMP_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T1_CMP_MID_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T1_CMP_MID_DATA_BP,\
									AR_PI_DBG_LM1_T1_CMP_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T1_CMP_HI_DATA(mmr)                    	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T1_CMP_HI_DATA_BP,\
									AR_PI_DBG_LM1_T1_CMP_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T1_CMP_HI_DATA(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T1_CMP_HI_DATA_BP,\
									AR_PI_DBG_LM1_T1_CMP_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T1_MODE_DATA(mmr)                      	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T1_MODE_DATA_BP,\
									AR_PI_DBG_LM1_T1_MODE_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T1_MODE_DATA(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T1_MODE_DATA_BP,\
									AR_PI_DBG_LM1_T1_MODE_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T1_MASK_LO_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T1_MASK_LO_DATA_BP,\
									AR_PI_DBG_LM1_T1_MASK_LO_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T1_MASK_LO_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T1_MASK_LO_DATA_BP,\
									AR_PI_DBG_LM1_T1_MASK_LO_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T1_MASK_MID_DATA(mmr)                  	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T1_MASK_MID_DATA_BP,\
									AR_PI_DBG_LM1_T1_MASK_MID_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T1_MASK_MID_DATA(mmr,v)                	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T1_MASK_MID_DATA_BP,\
									AR_PI_DBG_LM1_T1_MASK_MID_DATA_MASK)
#define RF_AR_PI_DBG_LM1_T1_MASK_HI_DATA(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_T1_MASK_HI_DATA_BP,\
									AR_PI_DBG_LM1_T1_MASK_HI_DATA_MASK)
#define WF_AR_PI_DBG_LM1_T1_MASK_HI_DATA(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_T1_MASK_HI_DATA_BP,\
									AR_PI_DBG_LM1_T1_MASK_HI_DATA_MASK)
#define RF_AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_BP,\
									AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_MASK)
#define WF_AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_BP,\
									AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL1_MASK)
#define RF_AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_BP,\
									AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_MASK)
#define WF_AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_BP,\
									AR_PI_DBG_LM1_MUX_SEL_PCLK_SEL0_MASK)
#define RF_AR_PI_DBG_LM1_MUX_SEL_CAP_SEL(mmr)                   	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_BP,\
									AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_MASK)
#define WF_AR_PI_DBG_LM1_MUX_SEL_CAP_SEL(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_BP,\
									AR_PI_DBG_LM1_MUX_SEL_CAP_SEL_MASK)
#define RF_AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_BP,\
									AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_MASK)
#define WF_AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_BP,\
									AR_PI_DBG_LM1_MUX_SEL_TRIG1_SEL_MASK)
#define RF_AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL(mmr)                 	RD_FIELD(mmr,\
									AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_BP,\
									AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_MASK)
#define WF_AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL(mmr,v)               	WR_FIELD(mmr,v,\
									AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_BP,\
									AR_PI_DBG_LM1_MUX_SEL_TRIG0_SEL_MASK)

#endif
