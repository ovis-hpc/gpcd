/******************************************************************************
 * COPYRIGHT CRAY INC. ar_niclm_defs.h
 * FILE: ar_niclm_defs.h
 * Created by v2h.c on Wed Oct  8 14:39:01 2014
 ******************************************************************************/

#ifndef _AR_NICLM_DEFS_H_
#define _AR_NICLM_DEFS_H_

#define AR_NICLM_N_MMRS                                        	30
#define AR_NICLM_N_DESCS                                       	0

/*
 *  AR NICLM MMR TABLE ADDRESS DEFINES
 */

/*
 *  AR NICLM MMR ADDRESS DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_CTL                               	(AR_NICLM_BASE+0x0000000000ull)
#define AR_NIC_NICLM_DBG_LM0_CTL_SIZE                          	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM0_CTL_LIMIT                         	AR_NIC_NICLM_DBG_LM0_CTL+AR_NIC_NICLM_DBG_LM0_CTL_SIZE-1
#define AR_NIC_NICLM_DBG_LM0_PTRS                              	(AR_NICLM_BASE+0x0000000008ull)
#define AR_NIC_NICLM_DBG_LM0_PTRS_SIZE                         	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM0_PTRS_LIMIT                        	AR_NIC_NICLM_DBG_LM0_PTRS+AR_NIC_NICLM_DBG_LM0_PTRS_SIZE-1
#define AR_NIC_NICLM_DBG_LM0_READ_LO                           	(AR_NICLM_BASE+0x0000000010ull)
#define AR_NIC_NICLM_DBG_LM0_READ_LO_SIZE                      	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM0_READ_LO_LIMIT                     	AR_NIC_NICLM_DBG_LM0_READ_LO+AR_NIC_NICLM_DBG_LM0_READ_LO_SIZE-1
#define AR_NIC_NICLM_DBG_LM0_READ_MID                          	(AR_NICLM_BASE+0x0000000018ull)
#define AR_NIC_NICLM_DBG_LM0_READ_MID_SIZE                     	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM0_READ_MID_LIMIT                    	AR_NIC_NICLM_DBG_LM0_READ_MID+AR_NIC_NICLM_DBG_LM0_READ_MID_SIZE-1
#define AR_NIC_NICLM_DBG_LM0_READ_HI                           	(AR_NICLM_BASE+0x0000000020ull)
#define AR_NIC_NICLM_DBG_LM0_READ_HI_SIZE                      	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM0_READ_HI_LIMIT                     	AR_NIC_NICLM_DBG_LM0_READ_HI+AR_NIC_NICLM_DBG_LM0_READ_HI_SIZE-1
#define AR_NIC_NICLM_DBG_LM0_SNAP_SEL                          	(AR_NICLM_BASE+0x0000000030ull)
#define AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SIZE                     	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM0_SNAP_SEL_LIMIT                    	AR_NIC_NICLM_DBG_LM0_SNAP_SEL+AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SIZE-1
#define AR_NIC_NICLM_DBG_LM0_SNAP_DLO                          	(AR_NICLM_BASE+0x0000000040ull)
#define AR_NIC_NICLM_DBG_LM0_SNAP_DLO_SIZE                     	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM0_SNAP_DLO_LIMIT                    	AR_NIC_NICLM_DBG_LM0_SNAP_DLO+AR_NIC_NICLM_DBG_LM0_SNAP_DLO_SIZE-1
#define AR_NIC_NICLM_DBG_LM0_SNAP_DMID                         	(AR_NICLM_BASE+0x0000000048ull)
#define AR_NIC_NICLM_DBG_LM0_SNAP_DMID_SIZE                    	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM0_SNAP_DMID_LIMIT                   	AR_NIC_NICLM_DBG_LM0_SNAP_DMID+AR_NIC_NICLM_DBG_LM0_SNAP_DMID_SIZE-1
#define AR_NIC_NICLM_DBG_LM0_SNAP_DHI                          	(AR_NICLM_BASE+0x0000000050ull)
#define AR_NIC_NICLM_DBG_LM0_SNAP_DHI_SIZE                     	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM0_SNAP_DHI_LIMIT                    	AR_NIC_NICLM_DBG_LM0_SNAP_DHI+AR_NIC_NICLM_DBG_LM0_SNAP_DHI_SIZE-1
#define AR_NIC_NICLM_DBG_LM1_CTL                               	(AR_NICLM_BASE+0x0000000100ull)
#define AR_NIC_NICLM_DBG_LM1_CTL_SIZE                          	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM1_CTL_LIMIT                         	AR_NIC_NICLM_DBG_LM1_CTL+AR_NIC_NICLM_DBG_LM1_CTL_SIZE-1
#define AR_NIC_NICLM_DBG_LM1_PTRS                              	(AR_NICLM_BASE+0x0000000108ull)
#define AR_NIC_NICLM_DBG_LM1_PTRS_SIZE                         	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM1_PTRS_LIMIT                        	AR_NIC_NICLM_DBG_LM1_PTRS+AR_NIC_NICLM_DBG_LM1_PTRS_SIZE-1
#define AR_NIC_NICLM_DBG_LM1_READ_LO                           	(AR_NICLM_BASE+0x0000000110ull)
#define AR_NIC_NICLM_DBG_LM1_READ_LO_SIZE                      	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM1_READ_LO_LIMIT                     	AR_NIC_NICLM_DBG_LM1_READ_LO+AR_NIC_NICLM_DBG_LM1_READ_LO_SIZE-1
#define AR_NIC_NICLM_DBG_LM1_READ_MID                          	(AR_NICLM_BASE+0x0000000118ull)
#define AR_NIC_NICLM_DBG_LM1_READ_MID_SIZE                     	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM1_READ_MID_LIMIT                    	AR_NIC_NICLM_DBG_LM1_READ_MID+AR_NIC_NICLM_DBG_LM1_READ_MID_SIZE-1
#define AR_NIC_NICLM_DBG_LM1_READ_HI                           	(AR_NICLM_BASE+0x0000000120ull)
#define AR_NIC_NICLM_DBG_LM1_READ_HI_SIZE                      	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM1_READ_HI_LIMIT                     	AR_NIC_NICLM_DBG_LM1_READ_HI+AR_NIC_NICLM_DBG_LM1_READ_HI_SIZE-1
#define AR_NIC_NICLM_DBG_LM1_SNAP_SEL                          	(AR_NICLM_BASE+0x0000000130ull)
#define AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SIZE                     	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM1_SNAP_SEL_LIMIT                    	AR_NIC_NICLM_DBG_LM1_SNAP_SEL+AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SIZE-1
#define AR_NIC_NICLM_DBG_LM1_SNAP_DLO                          	(AR_NICLM_BASE+0x0000000140ull)
#define AR_NIC_NICLM_DBG_LM1_SNAP_DLO_SIZE                     	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM1_SNAP_DLO_LIMIT                    	AR_NIC_NICLM_DBG_LM1_SNAP_DLO+AR_NIC_NICLM_DBG_LM1_SNAP_DLO_SIZE-1
#define AR_NIC_NICLM_DBG_LM1_SNAP_DMID                         	(AR_NICLM_BASE+0x0000000148ull)
#define AR_NIC_NICLM_DBG_LM1_SNAP_DMID_SIZE                    	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM1_SNAP_DMID_LIMIT                   	AR_NIC_NICLM_DBG_LM1_SNAP_DMID+AR_NIC_NICLM_DBG_LM1_SNAP_DMID_SIZE-1
#define AR_NIC_NICLM_DBG_LM1_SNAP_DHI                          	(AR_NICLM_BASE+0x0000000150ull)
#define AR_NIC_NICLM_DBG_LM1_SNAP_DHI_SIZE                     	0x0000000008ull
#define AR_NIC_NICLM_DBG_LM1_SNAP_DHI_LIMIT                    	AR_NIC_NICLM_DBG_LM1_SNAP_DHI+AR_NIC_NICLM_DBG_LM1_SNAP_DHI_SIZE-1
#define AR_NIC_NICLM_DBG_REM_TRIG                              	(AR_NICLM_BASE+0x0000000200ull)
#define AR_NIC_NICLM_DBG_REM_TRIG_SIZE                         	0x0000000008ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LIMIT                        	AR_NIC_NICLM_DBG_REM_TRIG+AR_NIC_NICLM_DBG_REM_TRIG_SIZE-1
#define AR_NIC_NICLM_DBG_TRIG_STS                              	(AR_NICLM_BASE+0x0000000208ull)
#define AR_NIC_NICLM_DBG_TRIG_STS_SIZE                         	0x0000000008ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LIMIT                        	AR_NIC_NICLM_DBG_TRIG_STS+AR_NIC_NICLM_DBG_TRIG_STS_SIZE-1
#define AR_NIC_NICLM_ERR_FLG                                   	(AR_NICLM_BASE+0x0000000300ull)
#define AR_NIC_NICLM_ERR_FLG_SIZE                              	0x0000000008ull
#define AR_NIC_NICLM_ERR_FLG_LIMIT                             	AR_NIC_NICLM_ERR_FLG+AR_NIC_NICLM_ERR_FLG_SIZE-1
#define AR_NIC_NICLM_ERR_CLR                                   	(AR_NICLM_BASE+0x0000000308ull)
#define AR_NIC_NICLM_ERR_CLR_SIZE                              	0x0000000008ull
#define AR_NIC_NICLM_ERR_CLR_LIMIT                             	AR_NIC_NICLM_ERR_CLR+AR_NIC_NICLM_ERR_CLR_SIZE-1
#define AR_NIC_NICLM_ERR_HSS_MSK                               	(AR_NICLM_BASE+0x0000000310ull)
#define AR_NIC_NICLM_ERR_HSS_MSK_SIZE                          	0x0000000008ull
#define AR_NIC_NICLM_ERR_HSS_MSK_LIMIT                         	AR_NIC_NICLM_ERR_HSS_MSK+AR_NIC_NICLM_ERR_HSS_MSK_SIZE-1
#define AR_NIC_NICLM_ERR_OS_MSK                                	(AR_NICLM_BASE+0x0000000318ull)
#define AR_NIC_NICLM_ERR_OS_MSK_SIZE                           	0x0000000008ull
#define AR_NIC_NICLM_ERR_OS_MSK_LIMIT                          	AR_NIC_NICLM_ERR_OS_MSK+AR_NIC_NICLM_ERR_OS_MSK_SIZE-1
#define AR_NIC_NICLM_ERR_FIRST_FLG                             	(AR_NICLM_BASE+0x0000000320ull)
#define AR_NIC_NICLM_ERR_FIRST_FLG_SIZE                        	0x0000000008ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_LIMIT                       	AR_NIC_NICLM_ERR_FIRST_FLG+AR_NIC_NICLM_ERR_FIRST_FLG_SIZE-1
#define AR_NIC_NICLM_DBG_ERRINJ_PERR                           	(AR_NICLM_BASE+0x0000000330ull)
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_SIZE                      	0x0000000008ull
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_LIMIT                     	AR_NIC_NICLM_DBG_ERRINJ_PERR+AR_NIC_NICLM_DBG_ERRINJ_PERR_SIZE-1
#define AR_NIC_NICLM_ERR_INFO_PERR                             	(AR_NICLM_BASE+0x0000000338ull)
#define AR_NIC_NICLM_ERR_INFO_PERR_SIZE                        	0x0000000008ull
#define AR_NIC_NICLM_ERR_INFO_PERR_LIMIT                       	AR_NIC_NICLM_ERR_INFO_PERR+AR_NIC_NICLM_ERR_INFO_PERR_SIZE-1
#define AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT                     	(AR_NICLM_BASE+0x0000000340ull)
#define AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_SIZE                	0x0000000008ull
#define AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_LIMIT               	AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT+AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_SIZE-1
#define AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT                     	(AR_NICLM_BASE+0x0000000348ull)
#define AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_SIZE                	0x0000000008ull
#define AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_LIMIT               	AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT+AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_SIZE-1
#define AR_NIC_NICLM_ERR_FRC_HSS_IRQ                           	(AR_NICLM_BASE+0x0000000350ull)
#define AR_NIC_NICLM_ERR_FRC_HSS_IRQ_SIZE                      	0x0000000008ull
#define AR_NIC_NICLM_ERR_FRC_HSS_IRQ_LIMIT                     	AR_NIC_NICLM_ERR_FRC_HSS_IRQ+AR_NIC_NICLM_ERR_FRC_HSS_IRQ_SIZE-1

/*
 *  AR_NIC_NICLM_DBG_LM0_CTL DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_MASK                            	0x8000000000000000ull
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_MASK                     	0x001c000000000000ull
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_MASK                      	0x0003000000000000ull
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK                     	0x000003ff00000000ull
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK                     	0x0000000003ff0000ull
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_MASK                        	0x0000000000000070ull
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_MASK                       	0x000000000000000full
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_BP                              	63
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_BP                       	50
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_BP                        	48
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_BP                       	32
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_BP                       	16
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_BP                          	4
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_BP                         	0
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_QW                              	0
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_QW                       	0
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_QW                        	0
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_QW                       	0
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_QW                       	0
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_QW                          	0
#define AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM0_PTRS DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_MASK                       	0x0000000800000000ull
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_MASK                      	0x0000000400000000ull
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_MASK                    	0x0000000200000000ull
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK                    	0x0000000100000000ull
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_MASK                        	0x0000000001ff0000ull
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_MASK                        	0x00000000000001ffull
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_BP                         	35
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_BP                        	34
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_BP                      	33
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_BP                      	32
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_BP                          	16
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_BP                          	0
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_QW                         	0
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_QW                        	0
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_QW                      	0
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_QW                      	0
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_QW                          	0
#define AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM0_READ_LO DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_MASK                          	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_BP                            	0
#define AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM0_READ_MID DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_BP                           	0
#define AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM0_READ_HI DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_MASK                          	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_BP                            	0
#define AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM0_SNAP_SEL DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_MASK                          	0x0000000000000003ull
#define AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_BP                            	0
#define AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM0_SNAP_DLO DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_BP                           	0
#define AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM0_SNAP_DMID DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_MASK                        	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_BP                          	0
#define AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM0_SNAP_DHI DEFINES
 */
#define AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_BP                           	0
#define AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM1_CTL DEFINES
 */
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_MASK                            	0x8000000000000000ull
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_MASK                     	0x001c000000000000ull
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_MASK                      	0x0003000000000000ull
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK                     	0x000003ff00000000ull
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK                     	0x0000000003ff0000ull
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_MASK                        	0x0000000000000070ull
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_MASK                       	0x000000000000000full
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_BP                              	63
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_BP                       	50
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_BP                        	48
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_BP                       	32
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_BP                       	16
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_BP                          	4
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_BP                         	0
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_QW                              	0
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_QW                       	0
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_QW                        	0
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_QW                       	0
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_QW                       	0
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_QW                          	0
#define AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM1_PTRS DEFINES
 */
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_MASK                       	0x0000000800000000ull
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_MASK                      	0x0000000400000000ull
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_MASK                    	0x0000000200000000ull
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK                    	0x0000000100000000ull
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_MASK                        	0x0000000001ff0000ull
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_MASK                        	0x00000000000001ffull
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_BP                         	35
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_BP                        	34
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_BP                      	33
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_BP                      	32
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_BP                          	16
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_BP                          	0
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_QW                         	0
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_QW                        	0
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_QW                      	0
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_QW                      	0
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_QW                          	0
#define AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM1_READ_LO DEFINES
 */
#define AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_MASK                          	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_BP                            	0
#define AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM1_READ_MID DEFINES
 */
#define AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_BP                           	0
#define AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM1_READ_HI DEFINES
 */
#define AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_MASK                          	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_BP                            	0
#define AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM1_SNAP_SEL DEFINES
 */
#define AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_MASK                          	0x0000000000000003ull
#define AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_BP                            	0
#define AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM1_SNAP_DLO DEFINES
 */
#define AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_BP                           	0
#define AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM1_SNAP_DMID DEFINES
 */
#define AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_MASK                        	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_BP                          	0
#define AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_LM1_SNAP_DHI DEFINES
 */
#define AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_BP                           	0
#define AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_REM_TRIG DEFINES
 */
#define AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_MASK                    	0x0000002000000000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_MASK                    	0x0000001000000000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_MASK                   	0x0000000800000000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_MASK                   	0x0000000400000000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_MASK                   	0x0000000200000000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_MASK                   	0x0000000100000000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_MASK       	0x0000000000800000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_MASK       	0x0000000000400000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_MASK       	0x0000000000200000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_MASK       	0x0000000000100000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_MASK       	0x0000000000080000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_MASK       	0x0000000000040000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_MASK           	0x0000000000038000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_MASK           	0x0000000000007000ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_MASK               	0x0000000000000e00ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_MASK               	0x00000000000001c0ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_MASK               	0x0000000000000038ull
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_MASK               	0x0000000000000007ull
#define AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_BP                      	37
#define AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_BP                      	36
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_BP                     	35
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_BP                     	34
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_BP                     	33
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_BP                     	32
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_BP         	23
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_BP         	22
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_BP         	21
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_BP         	20
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_BP         	19
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_BP         	18
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_BP             	15
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_BP             	12
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_BP                 	9
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_BP                 	6
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_BP                 	3
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_BP                 	0
#define AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_QW                      	0
#define AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_QW                      	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_QW                     	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_QW                     	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_QW                     	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_QW                     	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_QW         	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_QW         	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_QW         	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_QW         	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_QW         	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_QW         	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_QW             	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_QW             	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_QW                 	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_QW                 	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_QW                 	0
#define AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_TRIG_STS DEFINES
 */
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_MASK           	0x0000008000000000ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_MASK           	0x0000004000000000ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_MASK          	0x0000002000000000ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_MASK          	0x0000001000000000ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_MASK                	0x0000000800000000ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_MASK                	0x0000000400000000ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_MASK                	0x0000000200000000ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_MASK                	0x0000000100000000ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_MASK           	0x0000000000000080ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_MASK           	0x0000000000000040ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_MASK          	0x0000000000000020ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_MASK          	0x0000000000000010ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_MASK                	0x0000000000000008ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_MASK                	0x0000000000000004ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_MASK                	0x0000000000000002ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_MASK                	0x0000000000000001ull
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_BP             	39
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_BP             	38
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_BP            	37
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_BP            	36
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_BP                  	35
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_BP                  	34
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_BP                  	33
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_BP                  	32
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_BP             	7
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_BP             	6
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_BP            	5
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_BP            	4
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_BP                  	3
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_BP                  	2
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_BP                  	1
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_BP                  	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_QW             	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_QW             	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_QW            	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_QW            	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_QW                  	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_QW                  	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_QW                  	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_QW                  	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_QW             	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_QW             	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_QW            	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_QW            	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_QW                  	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_QW                  	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_QW                  	0
#define AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_ERR_FLG DEFINES
 */
#define AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_MASK                           	0x0000000000001000ull
#define AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_MASK                           	0x0000000000000800ull
#define AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_MASK                           	0x0000000000000400ull
#define AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_MASK                           	0x0000000000000200ull
#define AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_MASK                       	0x0000000000000100ull
#define AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_MASK                       	0x0000000000000080ull
#define AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_MASK                       	0x0000000000000040ull
#define AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_MASK                       	0x0000000000000020ull
#define AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_MASK                       	0x0000000000000010ull
#define AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_MASK                       	0x0000000000000008ull
#define AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_MASK                        	0x0000000000000004ull
#define AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_MASK                        	0x0000000000000002ull
#define AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_MASK                             	0x0000000000000001ull
#define AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_BP                             	12
#define AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_BP                             	11
#define AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_BP                             	10
#define AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_BP                             	9
#define AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_BP                         	8
#define AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_BP                         	7
#define AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_BP                         	6
#define AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_BP                         	5
#define AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_BP                         	4
#define AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_BP                         	3
#define AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_BP                          	2
#define AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_BP                          	1
#define AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_BP                               	0
#define AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_QW                             	0
#define AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_QW                             	0
#define AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_QW                             	0
#define AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_QW                             	0
#define AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_QW                         	0
#define AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_QW                         	0
#define AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_QW                         	0
#define AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_QW                         	0
#define AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_QW                         	0
#define AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_QW                         	0
#define AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_QW                          	0
#define AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_QW                          	0
#define AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_QW                               	0
#ifdef EXCEPTIONS_DEFS
#define AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_EC                             	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_EC                             	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_EC                             	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_EC                             	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_EC                         	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_EC                         	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_EC                         	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_EC                         	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_EC                         	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_EC                         	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_EC                          	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_EC                          	A_EC_INFO
#define AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_EC                               	A_EC_DIAG
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_ERR_CLR DEFINES
 */
#define AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_MASK                           	0x0000000000001000ull
#define AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_MASK                           	0x0000000000000800ull
#define AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_MASK                           	0x0000000000000400ull
#define AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_MASK                           	0x0000000000000200ull
#define AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_MASK                       	0x0000000000000100ull
#define AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_MASK                       	0x0000000000000080ull
#define AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_MASK                       	0x0000000000000040ull
#define AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_MASK                       	0x0000000000000020ull
#define AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_MASK                       	0x0000000000000010ull
#define AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_MASK                       	0x0000000000000008ull
#define AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_MASK                        	0x0000000000000004ull
#define AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_MASK                        	0x0000000000000002ull
#define AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_MASK                             	0x0000000000000001ull
#define AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_BP                             	12
#define AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_BP                             	11
#define AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_BP                             	10
#define AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_BP                             	9
#define AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_BP                         	8
#define AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_BP                         	7
#define AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_BP                         	6
#define AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_BP                         	5
#define AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_BP                         	4
#define AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_BP                         	3
#define AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_BP                          	2
#define AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_BP                          	1
#define AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_BP                               	0
#define AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_QW                             	0
#define AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_QW                             	0
#define AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_QW                             	0
#define AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_QW                             	0
#define AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_QW                         	0
#define AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_QW                         	0
#define AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_QW                         	0
#define AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_QW                         	0
#define AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_QW                         	0
#define AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_QW                         	0
#define AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_QW                          	0
#define AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_QW                          	0
#define AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_ERR_HSS_MSK DEFINES
 */
#define AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_MASK                       	0x0000000000001000ull
#define AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_MASK                       	0x0000000000000800ull
#define AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_MASK                       	0x0000000000000400ull
#define AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_MASK                       	0x0000000000000200ull
#define AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_MASK                   	0x0000000000000100ull
#define AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_MASK                   	0x0000000000000080ull
#define AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_MASK                   	0x0000000000000040ull
#define AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_MASK                   	0x0000000000000020ull
#define AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_MASK                   	0x0000000000000010ull
#define AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_MASK                   	0x0000000000000008ull
#define AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_MASK                    	0x0000000000000004ull
#define AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_MASK                    	0x0000000000000002ull
#define AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_MASK                         	0x0000000000000001ull
#define AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_BP                         	12
#define AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_BP                         	11
#define AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_BP                         	10
#define AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_BP                         	9
#define AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_BP                     	8
#define AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_BP                     	7
#define AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_BP                     	6
#define AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_BP                     	5
#define AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_BP                     	4
#define AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_BP                     	3
#define AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_BP                      	2
#define AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_BP                      	1
#define AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_BP                           	0
#define AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_QW                         	0
#define AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_QW                         	0
#define AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_QW                         	0
#define AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_QW                         	0
#define AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_QW                     	0
#define AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_QW                     	0
#define AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_QW                     	0
#define AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_QW                     	0
#define AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_QW                     	0
#define AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_QW                     	0
#define AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_QW                      	0
#define AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_QW                      	0
#define AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_ERR_OS_MSK DEFINES
 */
#define AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_MASK                        	0x0000000000001000ull
#define AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_MASK                        	0x0000000000000800ull
#define AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_MASK                        	0x0000000000000400ull
#define AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_MASK                        	0x0000000000000200ull
#define AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_MASK                    	0x0000000000000100ull
#define AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_MASK                    	0x0000000000000080ull
#define AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_MASK                    	0x0000000000000040ull
#define AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_MASK                    	0x0000000000000020ull
#define AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_MASK                    	0x0000000000000010ull
#define AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_MASK                    	0x0000000000000008ull
#define AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_MASK                     	0x0000000000000004ull
#define AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_MASK                     	0x0000000000000002ull
#define AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_MASK                          	0x0000000000000001ull
#define AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_BP                          	12
#define AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_BP                          	11
#define AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_BP                          	10
#define AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_BP                          	9
#define AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_BP                      	8
#define AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_BP                      	7
#define AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_BP                      	6
#define AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_BP                      	5
#define AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_BP                      	4
#define AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_BP                      	3
#define AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_BP                       	2
#define AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_BP                       	1
#define AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_BP                            	0
#define AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_QW                          	0
#define AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_QW                          	0
#define AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_QW                          	0
#define AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_QW                          	0
#define AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_QW                      	0
#define AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_QW                      	0
#define AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_QW                      	0
#define AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_QW                      	0
#define AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_QW                      	0
#define AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_QW                      	0
#define AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_QW                       	0
#define AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_QW                       	0
#define AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_ERR_FIRST_FLG DEFINES
 */
#define AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_MASK                     	0x0000000000001000ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_MASK                     	0x0000000000000800ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_MASK                     	0x0000000000000400ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_MASK                     	0x0000000000000200ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_MASK                 	0x0000000000000100ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_MASK                 	0x0000000000000080ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_MASK                 	0x0000000000000040ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_MASK                 	0x0000000000000020ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_MASK                 	0x0000000000000010ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_MASK                 	0x0000000000000008ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_MASK                  	0x0000000000000004ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_MASK                  	0x0000000000000002ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_MASK                       	0x0000000000000001ull
#define AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_BP                       	12
#define AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_BP                       	11
#define AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_BP                       	10
#define AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_BP                       	9
#define AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_BP                   	8
#define AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_BP                   	7
#define AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_BP                   	6
#define AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_BP                   	5
#define AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_BP                   	4
#define AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_BP                   	3
#define AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_BP                    	2
#define AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_BP                    	1
#define AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_BP                         	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_QW                       	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_QW                       	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_QW                       	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_QW                       	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_QW                   	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_QW                   	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_QW                   	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_QW                   	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_QW                   	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_QW                   	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_QW                    	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_QW                    	0
#define AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_DBG_ERRINJ_PERR DEFINES
 */
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_MASK                       	0x000001ff00000000ull
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_MASK                     	0x0000000000ff0000ull
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_MASK                 	0x0000000000000080ull
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_MASK                 	0x0000000000000040ull
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_MASK                    	0x0000000000000030ull
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_MASK                          	0x0000000000000006ull
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_MASK                        	0x0000000000000001ull
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_BP                         	32
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_BP                       	16
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_BP                   	7
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_BP                   	6
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_BP                      	4
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_BP                            	1
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_BP                          	0
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_QW                         	0
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_QW                       	0
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_QW                   	0
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_QW                   	0
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_QW                      	0
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_QW                            	0
#define AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_ERR_INFO_PERR DEFINES
 */
#define AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_MASK                     	0x000001ff00000000ull
#define AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_MASK                     	0x00000000001ff000ull
#define AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_MASK           	0x0000000000000008ull
#define AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_MASK           	0x0000000000000004ull
#define AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_BP                       	32
#define AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_BP                       	12
#define AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_BP             	3
#define AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_BP             	2
#define AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_QW                       	0
#define AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_QW                       	0
#define AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_QW             	0
#define AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_QW             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT DEFINES
 */
#define AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_MASK                     	0xffffffffffffffffull
#define AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_BP                       	0
#define AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT DEFINES
 */
#define AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_MASK                     	0xffffffffffffffffull
#define AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_BP                       	0
#define AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NICLM_ERR_FRC_HSS_IRQ DEFINES
 */
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */



/*
 *  AR NICLM MACROS
 */
#ifndef RD_FIELD
#define RD_FIELD(d, bp, m)	(((d)&(m))>>(bp))
#endif
#ifndef WR_FIELD
#define WR_FIELD(mmr, d, bp, m)	(mmr = (((mmr) & ~(m)) | ((((uint64_t)(d))<<(bp)) & (m))))
#endif
#define RF_AR_NIC_NICLM_DBG_LM0_CTL_LM_RST(mmr)                 	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_CTL_LM_RST(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_RST_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_STATE_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE(mmr)           	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CAP_STATE_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T0_CNT_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_T1_CNT_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_TRIG_EN_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_BP,\
									AR_NIC_NICLM_DBG_LM0_CTL_LM_CTL_MODE_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_ACT_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE(mmr)           	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_REC_DONE_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_MULT_EVENT_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_AD_WRAP_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_RD_PTR_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_BP,\
									AR_NIC_NICLM_DBG_LM0_PTRS_LM_WR_PTR_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_READ_LO_DATA(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_READ_LO_DATA(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_READ_LO_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_READ_MID_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_READ_MID_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_READ_MID_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_READ_HI_DATA(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_READ_HI_DATA(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_READ_HI_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_BP,\
									AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_BP,\
									AR_NIC_NICLM_DBG_LM0_SNAP_SEL_SEL_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DLO_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DMID_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_BP,\
									AR_NIC_NICLM_DBG_LM0_SNAP_DHI_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_CTL_LM_RST(mmr)                 	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_CTL_LM_RST(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_RST_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_STATE_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE(mmr)           	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CAP_STATE_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T0_CNT_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_T1_CNT_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_TRIG_EN_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_BP,\
									AR_NIC_NICLM_DBG_LM1_CTL_LM_CTL_MODE_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_ACT_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE(mmr)           	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_REC_DONE_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_MULT_EVENT_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_AD_WRAP_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_RD_PTR_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_BP,\
									AR_NIC_NICLM_DBG_LM1_PTRS_LM_WR_PTR_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_READ_LO_DATA(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_READ_LO_DATA(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_READ_LO_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_READ_MID_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_READ_MID_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_READ_MID_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_READ_HI_DATA(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_READ_HI_DATA(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_READ_HI_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_BP,\
									AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_BP,\
									AR_NIC_NICLM_DBG_LM1_SNAP_SEL_SEL_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DLO_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DMID_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_MASK)
#define WF_AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_BP,\
									AR_NIC_NICLM_DBG_LM1_SNAP_DHI_DATA_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_NL_PROP_TO_PI_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_PI_PROP_TO_NL_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_NL_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_NL_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_PROP_TO_PI_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_PROP_TO_PI_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_RSP_HSS_IRQ_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_REQ_HSS_IRQ_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_NET_HSS_IRQ_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_RSP_HSS_IRQ_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_REQ_HSS_IRQ_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_NET_HSS_IRQ_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_NIC_HSS_IRQ_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_NIC_HSS_IRQ_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL(mmr)    	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_NL_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL(mmr)    	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_NL_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI(mmr)    	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM1_ENABLE_FROM_PI_MASK)
#define RF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI(mmr)    	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_MASK)
#define WF_AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_BP,\
									AR_NIC_NICLM_DBG_REM_TRIG_LM0_ENABLE_FROM_PI_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_LAST_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_LAST_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_FIRST_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_FIRST_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV(mmr)     	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG1_RCV_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV(mmr)     	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_REM_TRIG0_RCV_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV(mmr)     	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG1_RCV_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV(mmr)     	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM1_LCL_TRIG0_RCV_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_LAST_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_LAST_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_FIRST_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_FIRST_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV(mmr)     	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG1_RCV_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV(mmr)     	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_REM_TRIG0_RCV_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV(mmr)     	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG1_RCV_MASK)
#define RF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV(mmr)     	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_MASK)
#define WF_AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV(mmr,v)   	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_BP,\
									AR_NIC_NICLM_DBG_TRIG_STS_LM0_LCL_TRIG0_RCV_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_PI_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_PI_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_NL_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_NL_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_RSPMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_REQMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FLG_NETMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_FLG_LM1_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_FLG_LM0_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_FLG_DIAG_ONLY(mmr)                  	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_MASK)
#define WF_AR_NIC_NICLM_ERR_FLG_DIAG_ONLY(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_FLG_DIAG_ONLY_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_PI_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_PI_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_NL_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_NL_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_RSPMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_REQMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_CLR_NETMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_CLR_LM1_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_CLR_LM0_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_CLR_DIAG_ONLY(mmr)                  	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_MASK)
#define WF_AR_NIC_NICLM_ERR_CLR_DIAG_ONLY(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_CLR_DIAG_ONLY_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_PI_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_NL_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_RSPMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_REQMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_NETMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_LM1_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_LM0_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define WF_AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_PI_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_NL_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_RSPMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_REQMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_NETMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_LM1_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_LM0_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_MASK)
#define WF_AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_OS_MSK_DIAG_ONLY_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_PI_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NL_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_RSPMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_REQMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER1_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_NETMON_TRIGGER0_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY(mmr)       	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY(mmr,v)     	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_LM1_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY(mmr)       	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY(mmr,v)     	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_LM0_RAM_PARITY_MASK)
#define RF_AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define WF_AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_NIC_NICLM_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define RF_AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_MASK)
#define WF_AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_ADDRESS_MASK)
#define RF_AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_MASK)
#define WF_AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_CHECKBITS_MASK)
#define RF_AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_MASK)
#define WF_AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_LM1_TRIGGERED_MASK)
#define RF_AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_MASK)
#define WF_AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_LM0_TRIGGERED_MASK)
#define RF_AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_MASK)
#define WF_AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_RAM_SELECT_MASK)
#define RF_AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_MASK)
#define WF_AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_MODE_MASK)
#define RF_AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_MASK)
#define WF_AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_BP,\
									AR_NIC_NICLM_DBG_ERRINJ_PERR_ENABLE_MASK)
#define RF_AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_BP,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_MASK)
#define WF_AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_BP,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM1_ADDRESS_MASK)
#define RF_AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_BP,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_MASK)
#define WF_AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_BP,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM0_ADDRESS_MASK)
#define RF_AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_BP,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_MASK)
#define WF_AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_BP,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM1_MMR_DETECTED_PERR_MASK)
#define RF_AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR(mmr)	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_BP,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_MASK)
#define WF_AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_BP,\
									AR_NIC_NICLM_ERR_INFO_PERR_LM0_MMR_DETECTED_PERR_MASK)
#define RF_AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_BP,\
									AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_MASK)
#define WF_AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_BP,\
									AR_NIC_NICLM_ERR_INFO_LM0_PERR_CNT_CNT_MASK)
#define RF_AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_BP,\
									AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_MASK)
#define WF_AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_BP,\
									AR_NIC_NICLM_ERR_INFO_LM1_PERR_CNT_CNT_MASK)

#endif
