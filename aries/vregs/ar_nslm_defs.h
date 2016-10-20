/******************************************************************************
 * COPYRIGHT CRAY INC. ar_nslm_defs.h
 * FILE: ar_nslm_defs.h
 * Created by v2h.c on Wed Oct  8 14:39:02 2014
 ******************************************************************************/

#ifndef _AR_NSLM_DEFS_H_
#define _AR_NSLM_DEFS_H_

#define AR_NSLM_N_MMRS                                         	32
#define AR_NSLM_N_DESCS                                        	0

/*
 *  AR NSLM MMR TABLE ADDRESS DEFINES
 */
#define AR_NIC_NSLM_PRF_EVENT_CNTR                             	(AR_NSLM_BASE+0x0000000400ull)
#define AR_NIC_NSLM_PRF_EVENT_CNTR_BASE                        	(AR_NSLM_BASE+0x0000000400ull)
#define AR_NIC_NSLM_PRF_EVENT_CNTR_SIZE                        	0x0000000400ull
#define AR_NIC_NSLM_PRF_EVENT_CNTR_LIMIT                       	AR_NIC_NSLM_PRF_EVENT_CNTR_BASE+AR_NIC_NSLM_PRF_EVENT_CNTR_SIZE-1
#define AR_NIC_NSLM_PRF_EVENT_CNTR_N_ENTRY                     	128
#define AR_NIC_NSLM_PRF_EVENT_CNTR_DESC_INCR                   	0x00000008ull
#define AR_NIC_NSLM_PRF_EVENT_CNTR_DESC_N_QUADWORDS            	1
#define AR_NIC_NSLM_PRF_EVENT_CNTR_ADDR(didx)                  	(((didx)*AR_NIC_NSLM_PRF_EVENT_CNTR_DESC_INCR)\
								+ AR_NIC_NSLM_PRF_EVENT_CNTR_BASE)

/*
 *  AR NSLM MMR ADDRESS DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T0_CMP_LO                           	(AR_NSLM_BASE+0x0000000000ull)
#define AR_NIC_NSLM_DBG_LM_T0_CMP_LO_SIZE                      	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T0_CMP_LO_LIMIT                     	AR_NIC_NSLM_DBG_LM_T0_CMP_LO+AR_NIC_NSLM_DBG_LM_T0_CMP_LO_SIZE-1
#define AR_NIC_NSLM_MMR_RING_0_HI_NSLM                         	(AR_NSLM_BASE+0x0000000000ull)
#define AR_NIC_NSLM_MMR_RING_0_HI_NSLM_SIZE                    	0x0000000018ull
#define AR_NIC_NSLM_MMR_RING_0_HI_NSLM_LIMIT                   	AR_NIC_NSLM_MMR_RING_0_HI_NSLM+AR_NIC_NSLM_MMR_RING_0_HI_NSLM_SIZE-1
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM                        	(AR_NSLM_BASE+0x0000000000ull)
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_SIZE                   	0x0000000010ull
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_LIMIT                  	AR_NIC_NSLM_MMR_RING_0_MID_NSLM+AR_NIC_NSLM_MMR_RING_0_MID_NSLM_SIZE-1
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM                         	(AR_NSLM_BASE+0x0000000000ull)
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_SIZE                    	0x0000000008ull
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_LIMIT                   	AR_NIC_NSLM_MMR_RING_0_LO_NSLM+AR_NIC_NSLM_MMR_RING_0_LO_NSLM_SIZE-1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM                    	(AR_NSLM_BASE+0x0000000000ull)
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_SIZE               	0x0000000018ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_LIMIT              	AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM+AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_SIZE-1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM                   	(AR_NSLM_BASE+0x0000000000ull)
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_SIZE              	0x0000000010ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_LIMIT             	AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM+AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_SIZE-1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM                    	(AR_NSLM_BASE+0x0000000000ull)
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_SIZE               	0x0000000008ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_LIMIT              	AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM+AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T0_CMP_MID                          	(AR_NSLM_BASE+0x0000000008ull)
#define AR_NIC_NSLM_DBG_LM_T0_CMP_MID_SIZE                     	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T0_CMP_MID_LIMIT                    	AR_NIC_NSLM_DBG_LM_T0_CMP_MID+AR_NIC_NSLM_DBG_LM_T0_CMP_MID_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T0_CMP_HI                           	(AR_NSLM_BASE+0x0000000010ull)
#define AR_NIC_NSLM_DBG_LM_T0_CMP_HI_SIZE                      	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T0_CMP_HI_LIMIT                     	AR_NIC_NSLM_DBG_LM_T0_CMP_HI+AR_NIC_NSLM_DBG_LM_T0_CMP_HI_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T0_MODE                             	(AR_NSLM_BASE+0x0000000018ull)
#define AR_NIC_NSLM_DBG_LM_T0_MODE_SIZE                        	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T0_MODE_LIMIT                       	AR_NIC_NSLM_DBG_LM_T0_MODE+AR_NIC_NSLM_DBG_LM_T0_MODE_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T0_MASK_LO                          	(AR_NSLM_BASE+0x0000000020ull)
#define AR_NIC_NSLM_DBG_LM_T0_MASK_LO_SIZE                     	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T0_MASK_LO_LIMIT                    	AR_NIC_NSLM_DBG_LM_T0_MASK_LO+AR_NIC_NSLM_DBG_LM_T0_MASK_LO_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T0_MASK_MID                         	(AR_NSLM_BASE+0x0000000028ull)
#define AR_NIC_NSLM_DBG_LM_T0_MASK_MID_SIZE                    	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T0_MASK_MID_LIMIT                   	AR_NIC_NSLM_DBG_LM_T0_MASK_MID+AR_NIC_NSLM_DBG_LM_T0_MASK_MID_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T0_MASK_HI                          	(AR_NSLM_BASE+0x0000000030ull)
#define AR_NIC_NSLM_DBG_LM_T0_MASK_HI_SIZE                     	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T0_MASK_HI_LIMIT                    	AR_NIC_NSLM_DBG_LM_T0_MASK_HI+AR_NIC_NSLM_DBG_LM_T0_MASK_HI_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T1_CMP_LO                           	(AR_NSLM_BASE+0x0000000040ull)
#define AR_NIC_NSLM_DBG_LM_T1_CMP_LO_SIZE                      	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T1_CMP_LO_LIMIT                     	AR_NIC_NSLM_DBG_LM_T1_CMP_LO+AR_NIC_NSLM_DBG_LM_T1_CMP_LO_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T1_CMP_MID                          	(AR_NSLM_BASE+0x0000000048ull)
#define AR_NIC_NSLM_DBG_LM_T1_CMP_MID_SIZE                     	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T1_CMP_MID_LIMIT                    	AR_NIC_NSLM_DBG_LM_T1_CMP_MID+AR_NIC_NSLM_DBG_LM_T1_CMP_MID_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T1_CMP_HI                           	(AR_NSLM_BASE+0x0000000050ull)
#define AR_NIC_NSLM_DBG_LM_T1_CMP_HI_SIZE                      	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T1_CMP_HI_LIMIT                     	AR_NIC_NSLM_DBG_LM_T1_CMP_HI+AR_NIC_NSLM_DBG_LM_T1_CMP_HI_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T1_MODE                             	(AR_NSLM_BASE+0x0000000058ull)
#define AR_NIC_NSLM_DBG_LM_T1_MODE_SIZE                        	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T1_MODE_LIMIT                       	AR_NIC_NSLM_DBG_LM_T1_MODE+AR_NIC_NSLM_DBG_LM_T1_MODE_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T1_MASK_LO                          	(AR_NSLM_BASE+0x0000000060ull)
#define AR_NIC_NSLM_DBG_LM_T1_MASK_LO_SIZE                     	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T1_MASK_LO_LIMIT                    	AR_NIC_NSLM_DBG_LM_T1_MASK_LO+AR_NIC_NSLM_DBG_LM_T1_MASK_LO_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T1_MASK_MID                         	(AR_NSLM_BASE+0x0000000068ull)
#define AR_NIC_NSLM_DBG_LM_T1_MASK_MID_SIZE                    	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T1_MASK_MID_LIMIT                   	AR_NIC_NSLM_DBG_LM_T1_MASK_MID+AR_NIC_NSLM_DBG_LM_T1_MASK_MID_SIZE-1
#define AR_NIC_NSLM_DBG_LM_T1_MASK_HI                          	(AR_NSLM_BASE+0x0000000070ull)
#define AR_NIC_NSLM_DBG_LM_T1_MASK_HI_SIZE                     	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_T1_MASK_HI_LIMIT                    	AR_NIC_NSLM_DBG_LM_T1_MASK_HI+AR_NIC_NSLM_DBG_LM_T1_MASK_HI_SIZE-1
#define AR_NIC_NSLM_DBG_LM_MUX_SEL                             	(AR_NSLM_BASE+0x0000000080ull)
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_SIZE                        	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LIMIT                       	AR_NIC_NSLM_DBG_LM_MUX_SEL+AR_NIC_NSLM_DBG_LM_MUX_SEL_SIZE-1
#define AR_NIC_NSLM_DBG_LM_BLK_SEL                             	(AR_NSLM_BASE+0x0000000088ull)
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_SIZE                        	0x0000000008ull
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LIMIT                       	AR_NIC_NSLM_DBG_LM_BLK_SEL+AR_NIC_NSLM_DBG_LM_BLK_SEL_SIZE-1
#define AR_NIC_NSLM_ERR_FLG                                    	(AR_NSLM_BASE+0x0000000100ull)
#define AR_NIC_NSLM_ERR_FLG_SIZE                               	0x0000000008ull
#define AR_NIC_NSLM_ERR_FLG_LIMIT                              	AR_NIC_NSLM_ERR_FLG+AR_NIC_NSLM_ERR_FLG_SIZE-1
#define AR_NIC_NSLM_ERR_CLR                                    	(AR_NSLM_BASE+0x0000000108ull)
#define AR_NIC_NSLM_ERR_CLR_SIZE                               	0x0000000008ull
#define AR_NIC_NSLM_ERR_CLR_LIMIT                              	AR_NIC_NSLM_ERR_CLR+AR_NIC_NSLM_ERR_CLR_SIZE-1
#define AR_NIC_NSLM_ERR_HSS_MSK                                	(AR_NSLM_BASE+0x0000000110ull)
#define AR_NIC_NSLM_ERR_HSS_MSK_SIZE                           	0x0000000008ull
#define AR_NIC_NSLM_ERR_HSS_MSK_LIMIT                          	AR_NIC_NSLM_ERR_HSS_MSK+AR_NIC_NSLM_ERR_HSS_MSK_SIZE-1
#define AR_NIC_NSLM_ERR_OS_MSK                                 	(AR_NSLM_BASE+0x0000000118ull)
#define AR_NIC_NSLM_ERR_OS_MSK_SIZE                            	0x0000000008ull
#define AR_NIC_NSLM_ERR_OS_MSK_LIMIT                           	AR_NIC_NSLM_ERR_OS_MSK+AR_NIC_NSLM_ERR_OS_MSK_SIZE-1
#define AR_NIC_NSLM_ERR_FIRST_FLG                              	(AR_NSLM_BASE+0x0000000120ull)
#define AR_NIC_NSLM_ERR_FIRST_FLG_SIZE                         	0x0000000008ull
#define AR_NIC_NSLM_ERR_FIRST_FLG_LIMIT                        	AR_NIC_NSLM_ERR_FIRST_FLG+AR_NIC_NSLM_ERR_FIRST_FLG_SIZE-1
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR                       	(AR_NSLM_BASE+0x0000000130ull)
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_SIZE                  	0x0000000008ull
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_LIMIT                 	AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR+AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_SIZE-1
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR                         	(AR_NSLM_BASE+0x0000000138ull)
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_SIZE                    	0x0000000008ull
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_LIMIT                   	AR_NIC_NSLM_ERR_INFO_CNTR_PERR+AR_NIC_NSLM_ERR_INFO_CNTR_PERR_SIZE-1
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT                     	(AR_NSLM_BASE+0x0000000140ull)
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_SIZE                	0x0000000008ull
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_LIMIT               	AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT+AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_SIZE-1
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL                        	(AR_NSLM_BASE+0x0000000200ull)
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_SIZE                   	0x0000000008ull
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_LIMIT                  	AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL+AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_SIZE-1

/*
 *  AR_NIC_NSLM_DBG_LM_T0_CMP_LO DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T0_CMP_LO_DATA_MASK                          	0xffffffffffffffffull
#define AR_NIC_NSLM_DBG_LM_T0_CMP_LO_DATA_BP                            	0
#define AR_NIC_NSLM_DBG_LM_T0_CMP_LO_DATA_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_MMR_RING_0_HI_NSLM DEFINES
 */
#define AR_NIC_NSLM_MMR_RING_0_HI_NSLM_UNUSED_145_84_MASK               	0x000000000003ffffull
#define AR_NIC_NSLM_MMR_RING_0_HI_NSLM_UNUSED_145_84_BP                 	0
#define AR_NIC_NSLM_MMR_RING_0_HI_NSLM_UNUSED_145_84_QW                 	2
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_MMR_RING_0_MID_NSLM DEFINES
 */
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_145_84_MASK              	0xfffffffffff00000ull
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER1_MASK               	0x0000000000080000ull
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER0_MASK               	0x0000000000040000ull
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_81_36_MASK               	0x000000000003ffffull
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_145_84_BP                	20
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER1_BP                 	19
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER0_BP                 	18
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_81_36_BP                 	0
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_145_84_QW                	1
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER1_QW                 	1
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER0_QW                 	1
#define AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_81_36_QW                 	1
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_MMR_RING_0_LO_NSLM DEFINES
 */
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_UNUSED_81_36_MASK                	0xfffffff000000000ull
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_OS_IRQ_MASK       	0x0000000400000000ull
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_HSS_IRQ_MASK      	0x0000000200000000ull
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_WRACK_MASK   	0x0000000100000000ull
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_15_0_MASK    	0x00000000ffff0000ull
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_I_NICLM_NSLM_RING_15_0_MASK      	0x000000000000ffffull
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_UNUSED_81_36_BP                  	36
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_OS_IRQ_BP         	34
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_HSS_IRQ_BP        	33
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_WRACK_BP     	32
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_15_0_BP      	16
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_I_NICLM_NSLM_RING_15_0_BP        	0
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_UNUSED_81_36_QW                  	0
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_OS_IRQ_QW         	0
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_HSS_IRQ_QW        	0
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_WRACK_QW     	0
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_15_0_QW      	0
#define AR_NIC_NSLM_MMR_RING_0_LO_NSLM_I_NICLM_NSLM_RING_15_0_QW        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM DEFINES
 */
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_UNUSED_145_69_MASK          	0x000000000003ffffull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_UNUSED_145_69_BP            	0
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_UNUSED_145_69_QW            	2
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM DEFINES
 */
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_UNUSED_145_69_MASK         	0xffffffffffffffe0ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER1_MASK      	0x0000000000000010ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER0_MASK      	0x0000000000000008ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_PERR_MASK          	0x0000000000000004ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_CNTR_ROLLOVER_MASK 	0x0000000000000002ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_DIAG_ONLY_MASK     	0x0000000000000001ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_UNUSED_145_69_BP           	5
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER1_BP        	4
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER0_BP        	3
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_PERR_BP            	2
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_CNTR_ROLLOVER_BP   	1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_DIAG_ONLY_BP       	0
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_UNUSED_145_69_QW           	1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER1_QW        	1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER0_QW        	1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_PERR_QW            	1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_CNTR_ROLLOVER_QW   	1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_DIAG_ONLY_QW       	1
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM DEFINES
 */
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_63_5_MASK            	0xffffffffffffffe0ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER1_MASK        	0x0000000000000010ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER0_MASK        	0x0000000000000008ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_PERR_MASK            	0x0000000000000004ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_CNTR_ROLLOVER_MASK   	0x0000000000000002ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_0_MASK               	0x0000000000000001ull
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_63_5_BP              	5
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER1_BP          	4
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER0_BP          	3
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_PERR_BP              	2
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_CNTR_ROLLOVER_BP     	1
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_0_BP                 	0
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_63_5_QW              	0
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER1_QW          	0
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER0_QW          	0
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_PERR_QW              	0
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_CNTR_ROLLOVER_QW     	0
#define AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_0_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T0_CMP_MID DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T0_CMP_MID_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NSLM_DBG_LM_T0_CMP_MID_DATA_BP                           	0
#define AR_NIC_NSLM_DBG_LM_T0_CMP_MID_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T0_CMP_HI DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T0_CMP_HI_DATA_MASK                          	0x00000000003fffffull
#define AR_NIC_NSLM_DBG_LM_T0_CMP_HI_DATA_BP                            	0
#define AR_NIC_NSLM_DBG_LM_T0_CMP_HI_DATA_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T0_MODE DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T0_MODE_MODE_MASK                            	0x0000000000000003ull
#define AR_NIC_NSLM_DBG_LM_T0_MODE_MODE_BP                              	0
#define AR_NIC_NSLM_DBG_LM_T0_MODE_MODE_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T0_MASK_LO DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T0_MASK_LO_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NSLM_DBG_LM_T0_MASK_LO_DATA_BP                           	0
#define AR_NIC_NSLM_DBG_LM_T0_MASK_LO_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T0_MASK_MID DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T0_MASK_MID_DATA_MASK                        	0xffffffffffffffffull
#define AR_NIC_NSLM_DBG_LM_T0_MASK_MID_DATA_BP                          	0
#define AR_NIC_NSLM_DBG_LM_T0_MASK_MID_DATA_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T0_MASK_HI DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T0_MASK_HI_DATA_MASK                         	0x00000000003fffffull
#define AR_NIC_NSLM_DBG_LM_T0_MASK_HI_DATA_BP                           	0
#define AR_NIC_NSLM_DBG_LM_T0_MASK_HI_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T1_CMP_LO DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T1_CMP_LO_DATA_MASK                          	0xffffffffffffffffull
#define AR_NIC_NSLM_DBG_LM_T1_CMP_LO_DATA_BP                            	0
#define AR_NIC_NSLM_DBG_LM_T1_CMP_LO_DATA_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T1_CMP_MID DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T1_CMP_MID_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NSLM_DBG_LM_T1_CMP_MID_DATA_BP                           	0
#define AR_NIC_NSLM_DBG_LM_T1_CMP_MID_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T1_CMP_HI DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T1_CMP_HI_DATA_MASK                          	0x00000000003fffffull
#define AR_NIC_NSLM_DBG_LM_T1_CMP_HI_DATA_BP                            	0
#define AR_NIC_NSLM_DBG_LM_T1_CMP_HI_DATA_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T1_MODE DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T1_MODE_MODE_MASK                            	0x0000000000000003ull
#define AR_NIC_NSLM_DBG_LM_T1_MODE_MODE_BP                              	0
#define AR_NIC_NSLM_DBG_LM_T1_MODE_MODE_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T1_MASK_LO DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T1_MASK_LO_DATA_MASK                         	0xffffffffffffffffull
#define AR_NIC_NSLM_DBG_LM_T1_MASK_LO_DATA_BP                           	0
#define AR_NIC_NSLM_DBG_LM_T1_MASK_LO_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T1_MASK_MID DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T1_MASK_MID_DATA_MASK                        	0xffffffffffffffffull
#define AR_NIC_NSLM_DBG_LM_T1_MASK_MID_DATA_BP                          	0
#define AR_NIC_NSLM_DBG_LM_T1_MASK_MID_DATA_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_T1_MASK_HI DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_T1_MASK_HI_DATA_MASK                         	0x00000000003fffffull
#define AR_NIC_NSLM_DBG_LM_T1_MASK_HI_DATA_BP                           	0
#define AR_NIC_NSLM_DBG_LM_T1_MASK_HI_DATA_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_MUX_SEL DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP1_SEL_MASK                     	0x00000000ff000000ull
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP0_SEL_MASK                     	0x0000000000ff0000ull
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG1_SEL_MASK                    	0x000000000000ff00ull
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG0_SEL_MASK                    	0x00000000000000ffull
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP1_SEL_BP                       	24
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP0_SEL_BP                       	16
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG1_SEL_BP                      	8
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG0_SEL_BP                      	0
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP1_SEL_QW                       	0
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP0_SEL_QW                       	0
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG1_SEL_QW                      	0
#define AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG0_SEL_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_LM_BLK_SEL DEFINES
 */
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BUS_MASK                     	0x0000000008000000ull
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BLK_MASK                     	0x0000000007000000ull
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BUS_MASK                     	0x0000000000080000ull
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BLK_MASK                     	0x0000000000070000ull
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BUS_MASK                    	0x0000000000000800ull
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BLK_MASK                    	0x0000000000000700ull
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BUS_MASK                    	0x0000000000000008ull
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BLK_MASK                    	0x0000000000000007ull
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BUS_BP                       	27
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BLK_BP                       	24
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BUS_BP                       	19
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BLK_BP                       	16
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BUS_BP                      	11
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BLK_BP                      	8
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BUS_BP                      	3
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BLK_BP                      	0
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BUS_QW                       	0
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BLK_QW                       	0
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BUS_QW                       	0
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BLK_QW                       	0
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BUS_QW                      	0
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BLK_QW                      	0
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BUS_QW                      	0
#define AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BLK_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_ERR_FLG DEFINES
 */
#define AR_NIC_NSLM_ERR_FLG_TRIGGER1_MASK                               	0x0000000000000010ull
#define AR_NIC_NSLM_ERR_FLG_TRIGGER0_MASK                               	0x0000000000000008ull
#define AR_NIC_NSLM_ERR_FLG_CNTR_PERR_MASK                              	0x0000000000000004ull
#define AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER_MASK                          	0x0000000000000002ull
#define AR_NIC_NSLM_ERR_FLG_DIAG_ONLY_MASK                              	0x0000000000000001ull
#define AR_NIC_NSLM_ERR_FLG_TRIGGER1_BP                                 	4
#define AR_NIC_NSLM_ERR_FLG_TRIGGER0_BP                                 	3
#define AR_NIC_NSLM_ERR_FLG_CNTR_PERR_BP                                	2
#define AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER_BP                            	1
#define AR_NIC_NSLM_ERR_FLG_DIAG_ONLY_BP                                	0
#define AR_NIC_NSLM_ERR_FLG_TRIGGER1_QW                                 	0
#define AR_NIC_NSLM_ERR_FLG_TRIGGER0_QW                                 	0
#define AR_NIC_NSLM_ERR_FLG_CNTR_PERR_QW                                	0
#define AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER_QW                            	0
#define AR_NIC_NSLM_ERR_FLG_DIAG_ONLY_QW                                	0
#ifdef EXCEPTIONS_DEFS
#define AR_NIC_NSLM_ERR_FLG_TRIGGER1_EC                                 	A_EC_INFO
#define AR_NIC_NSLM_ERR_FLG_TRIGGER0_EC                                 	A_EC_INFO
#define AR_NIC_NSLM_ERR_FLG_CNTR_PERR_EC                                	A_EC_INFO
#define AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER_EC                            	A_EC_INFO
#define AR_NIC_NSLM_ERR_FLG_DIAG_ONLY_EC                                	A_EC_DIAG
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_ERR_CLR DEFINES
 */
#define AR_NIC_NSLM_ERR_CLR_TRIGGER1_MASK                               	0x0000000000000010ull
#define AR_NIC_NSLM_ERR_CLR_TRIGGER0_MASK                               	0x0000000000000008ull
#define AR_NIC_NSLM_ERR_CLR_CNTR_PERR_MASK                              	0x0000000000000004ull
#define AR_NIC_NSLM_ERR_CLR_CNTR_ROLLOVER_MASK                          	0x0000000000000002ull
#define AR_NIC_NSLM_ERR_CLR_DIAG_ONLY_MASK                              	0x0000000000000001ull
#define AR_NIC_NSLM_ERR_CLR_TRIGGER1_BP                                 	4
#define AR_NIC_NSLM_ERR_CLR_TRIGGER0_BP                                 	3
#define AR_NIC_NSLM_ERR_CLR_CNTR_PERR_BP                                	2
#define AR_NIC_NSLM_ERR_CLR_CNTR_ROLLOVER_BP                            	1
#define AR_NIC_NSLM_ERR_CLR_DIAG_ONLY_BP                                	0
#define AR_NIC_NSLM_ERR_CLR_TRIGGER1_QW                                 	0
#define AR_NIC_NSLM_ERR_CLR_TRIGGER0_QW                                 	0
#define AR_NIC_NSLM_ERR_CLR_CNTR_PERR_QW                                	0
#define AR_NIC_NSLM_ERR_CLR_CNTR_ROLLOVER_QW                            	0
#define AR_NIC_NSLM_ERR_CLR_DIAG_ONLY_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_ERR_HSS_MSK DEFINES
 */
#define AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER1_MASK                           	0x0000000000000010ull
#define AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER0_MASK                           	0x0000000000000008ull
#define AR_NIC_NSLM_ERR_HSS_MSK_CNTR_PERR_MASK                          	0x0000000000000004ull
#define AR_NIC_NSLM_ERR_HSS_MSK_CNTR_ROLLOVER_MASK                      	0x0000000000000002ull
#define AR_NIC_NSLM_ERR_HSS_MSK_DIAG_ONLY_MASK                          	0x0000000000000001ull
#define AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER1_BP                             	4
#define AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER0_BP                             	3
#define AR_NIC_NSLM_ERR_HSS_MSK_CNTR_PERR_BP                            	2
#define AR_NIC_NSLM_ERR_HSS_MSK_CNTR_ROLLOVER_BP                        	1
#define AR_NIC_NSLM_ERR_HSS_MSK_DIAG_ONLY_BP                            	0
#define AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER1_QW                             	0
#define AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER0_QW                             	0
#define AR_NIC_NSLM_ERR_HSS_MSK_CNTR_PERR_QW                            	0
#define AR_NIC_NSLM_ERR_HSS_MSK_CNTR_ROLLOVER_QW                        	0
#define AR_NIC_NSLM_ERR_HSS_MSK_DIAG_ONLY_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_ERR_OS_MSK DEFINES
 */
#define AR_NIC_NSLM_ERR_OS_MSK_TRIGGER1_MASK                            	0x0000000000000010ull
#define AR_NIC_NSLM_ERR_OS_MSK_TRIGGER0_MASK                            	0x0000000000000008ull
#define AR_NIC_NSLM_ERR_OS_MSK_CNTR_PERR_MASK                           	0x0000000000000004ull
#define AR_NIC_NSLM_ERR_OS_MSK_CNTR_ROLLOVER_MASK                       	0x0000000000000002ull
#define AR_NIC_NSLM_ERR_OS_MSK_DIAG_ONLY_MASK                           	0x0000000000000001ull
#define AR_NIC_NSLM_ERR_OS_MSK_TRIGGER1_BP                              	4
#define AR_NIC_NSLM_ERR_OS_MSK_TRIGGER0_BP                              	3
#define AR_NIC_NSLM_ERR_OS_MSK_CNTR_PERR_BP                             	2
#define AR_NIC_NSLM_ERR_OS_MSK_CNTR_ROLLOVER_BP                         	1
#define AR_NIC_NSLM_ERR_OS_MSK_DIAG_ONLY_BP                             	0
#define AR_NIC_NSLM_ERR_OS_MSK_TRIGGER1_QW                              	0
#define AR_NIC_NSLM_ERR_OS_MSK_TRIGGER0_QW                              	0
#define AR_NIC_NSLM_ERR_OS_MSK_CNTR_PERR_QW                             	0
#define AR_NIC_NSLM_ERR_OS_MSK_CNTR_ROLLOVER_QW                         	0
#define AR_NIC_NSLM_ERR_OS_MSK_DIAG_ONLY_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_ERR_FIRST_FLG DEFINES
 */
#define AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER1_MASK                         	0x0000000000000010ull
#define AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER0_MASK                         	0x0000000000000008ull
#define AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_PERR_MASK                        	0x0000000000000004ull
#define AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_ROLLOVER_MASK                    	0x0000000000000002ull
#define AR_NIC_NSLM_ERR_FIRST_FLG_DIAG_ONLY_MASK                        	0x0000000000000001ull
#define AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER1_BP                           	4
#define AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER0_BP                           	3
#define AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_PERR_BP                          	2
#define AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_ROLLOVER_BP                      	1
#define AR_NIC_NSLM_ERR_FIRST_FLG_DIAG_ONLY_BP                          	0
#define AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER1_QW                           	0
#define AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER0_QW                           	0
#define AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_PERR_QW                          	0
#define AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_ROLLOVER_QW                      	0
#define AR_NIC_NSLM_ERR_FIRST_FLG_DIAG_ONLY_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR DEFINES
 */
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ADDRESS_MASK                   	0x0000007f00000000ull
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_CHECKBITS_MASK                 	0x00000000000f0000ull
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_TRIGGERED_MASK                 	0x0000000000000008ull
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_MODE_MASK                      	0x0000000000000006ull
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ENABLE_MASK                    	0x0000000000000001ull
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ADDRESS_BP                     	32
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_CHECKBITS_BP                   	16
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_TRIGGERED_BP                   	3
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_MODE_BP                        	1
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ENABLE_BP                      	0
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ADDRESS_QW                     	0
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_CHECKBITS_QW                   	0
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_TRIGGERED_QW                   	0
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_MODE_QW                        	0
#define AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ENABLE_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_ERR_INFO_CNTR_PERR DEFINES
 */
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_ADDRESS_MASK                     	0x000000000007f000ull
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_MASK           	0x0000000000000008ull
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_ADDRESS_BP                       	12
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_BP             	3
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_ADDRESS_QW                       	0
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_QW             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT DEFINES
 */
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_MASK              	0xffffffffffffffffull
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_BP                	0
#define AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_QW                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL DEFINES
 */
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_MASK        	0x0002000000000000ull
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_ENABLE_MASK                     	0x0001000000000000ull
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_CLEAR_MASK                      	0x0000800000000000ull
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_MASK             	0x0000000000000001ull
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_BP          	49
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_ENABLE_BP                       	48
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_CLEAR_BP                        	47
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_BP               	0
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_QW          	0
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_ENABLE_QW                       	0
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_CLEAR_QW                        	0
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_QW               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_NIC_NSLM_PRF_EVENT_CNTR DEFINES
 */
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CNT_MASK                             	0xffffffffffffffffull
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CNT_BP                               	0
#define AR_NIC_NSLM_PRF_EVENT_CNTR_CNT_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */



/*
 *  AR NSLM MACROS
 */
#ifndef RD_FIELD
#define RD_FIELD(d, bp, m)	(((d)&(m))>>(bp))
#endif
#ifndef WR_FIELD
#define WR_FIELD(mmr, d, bp, m)	(mmr = (((mmr) & ~(m)) | ((((uint64_t)(d))<<(bp)) & (m))))
#endif
#define RF_AR_NIC_NSLM_DBG_LM_T0_CMP_LO_DATA(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_LO_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_LO_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T0_CMP_LO_DATA(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_LO_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_LO_DATA_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_HI_NSLM_UNUSED_145_84(mmr)    	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_HI_NSLM_UNUSED_145_84_BP,\
									AR_NIC_NSLM_MMR_RING_0_HI_NSLM_UNUSED_145_84_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_HI_NSLM_UNUSED_145_84(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_HI_NSLM_UNUSED_145_84_BP,\
									AR_NIC_NSLM_MMR_RING_0_HI_NSLM_UNUSED_145_84_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_145_84(mmr)   	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_145_84_BP,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_145_84_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_145_84(mmr,v) 	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_145_84_BP,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_145_84_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER1(mmr)    	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER1_BP,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER1_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER1(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER1_BP,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER1_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER0(mmr)    	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER0_BP,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER0_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER0(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER0_BP,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_INC_TRIGGER0_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_81_36(mmr)    	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_81_36_BP,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_81_36_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_81_36(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_81_36_BP,\
									AR_NIC_NSLM_MMR_RING_0_MID_NSLM_UNUSED_81_36_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_UNUSED_81_36(mmr)     	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_UNUSED_81_36_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_UNUSED_81_36_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_UNUSED_81_36(mmr,v)   	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_UNUSED_81_36_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_UNUSED_81_36_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_OS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_OS_IRQ_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_OS_IRQ_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_OS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_OS_IRQ_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_OS_IRQ_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_HSS_IRQ(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_HSS_IRQ_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_HSS_IRQ_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_HSS_IRQ(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_HSS_IRQ_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_HSS_IRQ_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_WRACK(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_WRACK_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_WRACK_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_WRACK(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_WRACK_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_WRACK_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_15_0(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_15_0_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_15_0_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_15_0(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_15_0_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_R_Q_NSLM_NICLM_RING_15_0_MASK)
#define RF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_I_NICLM_NSLM_RING_15_0(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_I_NICLM_NSLM_RING_15_0_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_I_NICLM_NSLM_RING_15_0_MASK)
#define WF_AR_NIC_NSLM_MMR_RING_0_LO_NSLM_I_NICLM_NSLM_RING_15_0(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_I_NICLM_NSLM_RING_15_0_BP,\
									AR_NIC_NSLM_MMR_RING_0_LO_NSLM_I_NICLM_NSLM_RING_15_0_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_UNUSED_145_69(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_UNUSED_145_69_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_UNUSED_145_69_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_UNUSED_145_69(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_UNUSED_145_69_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_HI_NSLM_UNUSED_145_69_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_UNUSED_145_69(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_UNUSED_145_69_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_UNUSED_145_69_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_UNUSED_145_69(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_UNUSED_145_69_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_UNUSED_145_69_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER1(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER1_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER1_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER1(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER1_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER1_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER0(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER0_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER0_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER0(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER0_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_TRIGGER0_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_PERR(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_PERR_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_PERR_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_PERR(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_PERR_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_PERR_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_CNTR_ROLLOVER(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_CNTR_ROLLOVER_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_CNTR_ROLLOVER(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_CNTR_ROLLOVER_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_DIAG_ONLY(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_DIAG_ONLY_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_DIAG_ONLY_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_DIAG_ONLY(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_DIAG_ONLY_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_MID_NSLM_ERR_REG_DIAG_ONLY_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_63_5(mmr) 	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_63_5_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_63_5_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_63_5(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_63_5_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_63_5_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER1(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER1_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER1_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER1(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER1_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER1_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER0(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER0_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER0_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER0(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER0_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_TRIGGER0_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_PERR(mmr) 	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_PERR_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_PERR_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_PERR(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_PERR_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_PERR_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_CNTR_ROLLOVER(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_CNTR_ROLLOVER_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_CNTR_ROLLOVER(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_ERR_IN_CNTR_ROLLOVER_MASK)
#define RF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_0(mmr)    	RD_FIELD(mmr,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_0_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_0_MASK)
#define WF_AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_0(mmr,v)  	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_0_BP,\
									AR_NIC_NSLM_MMR_ERR_FLAGS_1_LO_NSLM_UNUSED_0_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T0_CMP_MID_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_MID_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_MID_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T0_CMP_MID_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_MID_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_MID_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T0_CMP_HI_DATA(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_HI_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_HI_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T0_CMP_HI_DATA(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_HI_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_CMP_HI_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T0_MODE_MODE(mmr)                 	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T0_MODE_MODE_BP,\
									AR_NIC_NSLM_DBG_LM_T0_MODE_MODE_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T0_MODE_MODE(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T0_MODE_MODE_BP,\
									AR_NIC_NSLM_DBG_LM_T0_MODE_MODE_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T0_MASK_LO_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_LO_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_LO_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T0_MASK_LO_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_LO_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_LO_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T0_MASK_MID_DATA(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_MID_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_MID_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T0_MASK_MID_DATA(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_MID_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_MID_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T0_MASK_HI_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_HI_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_HI_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T0_MASK_HI_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_HI_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T0_MASK_HI_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T1_CMP_LO_DATA(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_LO_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_LO_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T1_CMP_LO_DATA(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_LO_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_LO_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T1_CMP_MID_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_MID_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_MID_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T1_CMP_MID_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_MID_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_MID_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T1_CMP_HI_DATA(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_HI_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_HI_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T1_CMP_HI_DATA(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_HI_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_CMP_HI_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T1_MODE_MODE(mmr)                 	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T1_MODE_MODE_BP,\
									AR_NIC_NSLM_DBG_LM_T1_MODE_MODE_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T1_MODE_MODE(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T1_MODE_MODE_BP,\
									AR_NIC_NSLM_DBG_LM_T1_MODE_MODE_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T1_MASK_LO_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_LO_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_LO_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T1_MASK_LO_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_LO_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_LO_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T1_MASK_MID_DATA(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_MID_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_MID_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T1_MASK_MID_DATA(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_MID_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_MID_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_T1_MASK_HI_DATA(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_HI_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_HI_DATA_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_T1_MASK_HI_DATA(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_HI_DATA_BP,\
									AR_NIC_NSLM_DBG_LM_T1_MASK_HI_DATA_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP1_SEL(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP1_SEL_BP,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP1_SEL_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP1_SEL(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP1_SEL_BP,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP1_SEL_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP0_SEL(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP0_SEL_BP,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP0_SEL_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP0_SEL(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP0_SEL_BP,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_CAP0_SEL_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG1_SEL(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG1_SEL_BP,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG1_SEL_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG1_SEL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG1_SEL_BP,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG1_SEL_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG0_SEL(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG0_SEL_BP,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG0_SEL_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG0_SEL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG0_SEL_BP,\
									AR_NIC_NSLM_DBG_LM_MUX_SEL_LM_TRIG0_SEL_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BUS(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BUS_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BUS_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BUS(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BUS_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BUS_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BLK(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BLK_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BLK_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BLK(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BLK_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP1_BLK_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BUS(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BUS_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BUS_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BUS(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BUS_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BUS_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BLK(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BLK_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BLK_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BLK(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BLK_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_CAP0_BLK_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BUS(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BUS_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BUS_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BUS(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BUS_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BUS_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BLK(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BLK_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BLK_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BLK(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BLK_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG1_BLK_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BUS(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BUS_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BUS_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BUS(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BUS_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BUS_MASK)
#define RF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BLK(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BLK_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BLK_MASK)
#define WF_AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BLK(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BLK_BP,\
									AR_NIC_NSLM_DBG_LM_BLK_SEL_LM_TRIG0_BLK_MASK)
#define RF_AR_NIC_NSLM_ERR_FLG_TRIGGER1(mmr)                    	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FLG_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_FLG_TRIGGER1_MASK)
#define WF_AR_NIC_NSLM_ERR_FLG_TRIGGER1(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FLG_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_FLG_TRIGGER1_MASK)
#define RF_AR_NIC_NSLM_ERR_FLG_TRIGGER0(mmr)                    	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FLG_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_FLG_TRIGGER0_MASK)
#define WF_AR_NIC_NSLM_ERR_FLG_TRIGGER0(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FLG_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_FLG_TRIGGER0_MASK)
#define RF_AR_NIC_NSLM_ERR_FLG_CNTR_PERR(mmr)                   	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FLG_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_FLG_CNTR_PERR_MASK)
#define WF_AR_NIC_NSLM_ERR_FLG_CNTR_PERR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FLG_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_FLG_CNTR_PERR_MASK)
#define RF_AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER_MASK)
#define WF_AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_FLG_CNTR_ROLLOVER_MASK)
#define RF_AR_NIC_NSLM_ERR_FLG_DIAG_ONLY(mmr)                   	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FLG_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_FLG_DIAG_ONLY_MASK)
#define WF_AR_NIC_NSLM_ERR_FLG_DIAG_ONLY(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FLG_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_FLG_DIAG_ONLY_MASK)
#define RF_AR_NIC_NSLM_ERR_CLR_TRIGGER1(mmr)                    	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_CLR_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_CLR_TRIGGER1_MASK)
#define WF_AR_NIC_NSLM_ERR_CLR_TRIGGER1(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_CLR_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_CLR_TRIGGER1_MASK)
#define RF_AR_NIC_NSLM_ERR_CLR_TRIGGER0(mmr)                    	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_CLR_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_CLR_TRIGGER0_MASK)
#define WF_AR_NIC_NSLM_ERR_CLR_TRIGGER0(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_CLR_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_CLR_TRIGGER0_MASK)
#define RF_AR_NIC_NSLM_ERR_CLR_CNTR_PERR(mmr)                   	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_CLR_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_CLR_CNTR_PERR_MASK)
#define WF_AR_NIC_NSLM_ERR_CLR_CNTR_PERR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_CLR_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_CLR_CNTR_PERR_MASK)
#define RF_AR_NIC_NSLM_ERR_CLR_CNTR_ROLLOVER(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_CLR_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_CLR_CNTR_ROLLOVER_MASK)
#define WF_AR_NIC_NSLM_ERR_CLR_CNTR_ROLLOVER(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_CLR_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_CLR_CNTR_ROLLOVER_MASK)
#define RF_AR_NIC_NSLM_ERR_CLR_DIAG_ONLY(mmr)                   	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_CLR_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_CLR_DIAG_ONLY_MASK)
#define WF_AR_NIC_NSLM_ERR_CLR_DIAG_ONLY(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_CLR_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_CLR_DIAG_ONLY_MASK)
#define RF_AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER1(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER1_MASK)
#define WF_AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER1(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER1_MASK)
#define RF_AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER0(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER0_MASK)
#define WF_AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER0(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_TRIGGER0_MASK)
#define RF_AR_NIC_NSLM_ERR_HSS_MSK_CNTR_PERR(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_HSS_MSK_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_CNTR_PERR_MASK)
#define WF_AR_NIC_NSLM_ERR_HSS_MSK_CNTR_PERR(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_HSS_MSK_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_CNTR_PERR_MASK)
#define RF_AR_NIC_NSLM_ERR_HSS_MSK_CNTR_ROLLOVER(mmr)           	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_HSS_MSK_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_CNTR_ROLLOVER_MASK)
#define WF_AR_NIC_NSLM_ERR_HSS_MSK_CNTR_ROLLOVER(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_HSS_MSK_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_CNTR_ROLLOVER_MASK)
#define RF_AR_NIC_NSLM_ERR_HSS_MSK_DIAG_ONLY(mmr)               	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define WF_AR_NIC_NSLM_ERR_HSS_MSK_DIAG_ONLY(mmr,v)             	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_HSS_MSK_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_HSS_MSK_DIAG_ONLY_MASK)
#define RF_AR_NIC_NSLM_ERR_OS_MSK_TRIGGER1(mmr)                 	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_OS_MSK_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_TRIGGER1_MASK)
#define WF_AR_NIC_NSLM_ERR_OS_MSK_TRIGGER1(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_OS_MSK_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_TRIGGER1_MASK)
#define RF_AR_NIC_NSLM_ERR_OS_MSK_TRIGGER0(mmr)                 	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_OS_MSK_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_TRIGGER0_MASK)
#define WF_AR_NIC_NSLM_ERR_OS_MSK_TRIGGER0(mmr,v)               	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_OS_MSK_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_TRIGGER0_MASK)
#define RF_AR_NIC_NSLM_ERR_OS_MSK_CNTR_PERR(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_OS_MSK_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_CNTR_PERR_MASK)
#define WF_AR_NIC_NSLM_ERR_OS_MSK_CNTR_PERR(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_OS_MSK_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_CNTR_PERR_MASK)
#define RF_AR_NIC_NSLM_ERR_OS_MSK_CNTR_ROLLOVER(mmr)            	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_OS_MSK_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_CNTR_ROLLOVER_MASK)
#define WF_AR_NIC_NSLM_ERR_OS_MSK_CNTR_ROLLOVER(mmr,v)          	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_OS_MSK_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_CNTR_ROLLOVER_MASK)
#define RF_AR_NIC_NSLM_ERR_OS_MSK_DIAG_ONLY(mmr)                	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_DIAG_ONLY_MASK)
#define WF_AR_NIC_NSLM_ERR_OS_MSK_DIAG_ONLY(mmr,v)              	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_OS_MSK_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_OS_MSK_DIAG_ONLY_MASK)
#define RF_AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER1(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER1_MASK)
#define WF_AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER1(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER1_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER1_MASK)
#define RF_AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER0(mmr)              	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER0_MASK)
#define WF_AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER0(mmr,v)            	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER0_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_TRIGGER0_MASK)
#define RF_AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_PERR(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_PERR_MASK)
#define WF_AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_PERR(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_PERR_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_PERR_MASK)
#define RF_AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_ROLLOVER(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_ROLLOVER_MASK)
#define WF_AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_ROLLOVER(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_ROLLOVER_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_CNTR_ROLLOVER_MASK)
#define RF_AR_NIC_NSLM_ERR_FIRST_FLG_DIAG_ONLY(mmr)             	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define WF_AR_NIC_NSLM_ERR_FIRST_FLG_DIAG_ONLY(mmr,v)           	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_FIRST_FLG_DIAG_ONLY_BP,\
									AR_NIC_NSLM_ERR_FIRST_FLG_DIAG_ONLY_MASK)
#define RF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ADDRESS(mmr)        	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ADDRESS_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ADDRESS_MASK)
#define WF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ADDRESS(mmr,v)      	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ADDRESS_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ADDRESS_MASK)
#define RF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_CHECKBITS(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_CHECKBITS_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_CHECKBITS_MASK)
#define WF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_CHECKBITS(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_CHECKBITS_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_CHECKBITS_MASK)
#define RF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_TRIGGERED(mmr)      	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_TRIGGERED_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_TRIGGERED_MASK)
#define WF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_TRIGGERED(mmr,v)    	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_TRIGGERED_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_TRIGGERED_MASK)
#define RF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_MODE(mmr)           	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_MODE_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_MODE_MASK)
#define WF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_MODE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_MODE_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_MODE_MASK)
#define RF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ENABLE(mmr)         	RD_FIELD(mmr,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ENABLE_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ENABLE_MASK)
#define WF_AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ENABLE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ENABLE_BP,\
									AR_NIC_NSLM_DBG_ERRINJ_CNTR_PERR_ENABLE_MASK)
#define RF_AR_NIC_NSLM_ERR_INFO_CNTR_PERR_ADDRESS(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_ADDRESS_BP,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_ADDRESS_MASK)
#define WF_AR_NIC_NSLM_ERR_INFO_CNTR_PERR_ADDRESS(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_ADDRESS_BP,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_ADDRESS_MASK)
#define RF_AR_NIC_NSLM_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_BP,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_MASK)
#define WF_AR_NIC_NSLM_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_BP,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_MMR_DETECTED_PERR_MASK)
#define RF_AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT(mmr)   	RD_FIELD(mmr,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_BP,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_MASK)
#define WF_AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT(mmr,v) 	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_BP,\
									AR_NIC_NSLM_ERR_INFO_CNTR_PERR_CNT_PERR_COUNT_MASK)
#define RF_AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE(mmr)	RD_FIELD(mmr,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_MASK)
#define WF_AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_DISABLE_AUTO_UPDATE_MASK)
#define RF_AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_ENABLE(mmr)          	RD_FIELD(mmr,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_ENABLE_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_ENABLE_MASK)
#define WF_AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_ENABLE(mmr,v)        	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_ENABLE_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_ENABLE_MASK)
#define RF_AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_CLEAR(mmr)           	RD_FIELD(mmr,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_CLEAR_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_CLEAR_MASK)
#define WF_AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_CLEAR(mmr,v)         	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_CLEAR_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_CLEAR_MASK)
#define RF_AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR(mmr)  	RD_FIELD(mmr,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_MASK)
#define WF_AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR(mmr,v)	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CTRL_COUNTERS_CLEAR_MASK)
#define RF_AR_NIC_NSLM_PRF_EVENT_CNTR_CNT(mmr)                  	RD_FIELD(mmr,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CNT_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CNT_MASK)
#define WF_AR_NIC_NSLM_PRF_EVENT_CNTR_CNT(mmr,v)                	WR_FIELD(mmr,v,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CNT_BP,\
									AR_NIC_NSLM_PRF_EVENT_CNTR_CNT_MASK)

#endif
