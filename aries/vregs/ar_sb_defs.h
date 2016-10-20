/******************************************************************************
 * COPYRIGHT CRAY INC. ar_sb_defs.h
 * FILE: ar_sb_defs.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/

#ifndef _AR_SB_DEFS_H_
#define _AR_SB_DEFS_H_

#define AR_SB_N_MMRS                                           	14
#define AR_SB_N_DESCS                                          	0

/*
 *  AR SB MMR TABLE ADDRESS DEFINES
 */

/*
 *  AR SB MMR ADDRESS DEFINES
 */
#define AR_SB_HPET_CAP                                         	(AR_SB_BASE+0x0000010000ull)
#define AR_SB_HPET_CAP_SIZE                                    	0x0000000008ull
#define AR_SB_HPET_CAP_LIMIT                                   	AR_SB_HPET_CAP+AR_SB_HPET_CAP_SIZE-1
#define AR_SB_HPET_CONFIG                                      	(AR_SB_BASE+0x0000010010ull)
#define AR_SB_HPET_CONFIG_SIZE                                 	0x0000000008ull
#define AR_SB_HPET_CONFIG_LIMIT                                	AR_SB_HPET_CONFIG+AR_SB_HPET_CONFIG_SIZE-1
#define AR_SB_HPET_ISR                                         	(AR_SB_BASE+0x0000010020ull)
#define AR_SB_HPET_ISR_SIZE                                    	0x0000000008ull
#define AR_SB_HPET_ISR_LIMIT                                   	AR_SB_HPET_ISR+AR_SB_HPET_ISR_SIZE-1
#define AR_SB_HPET_MCV                                         	(AR_SB_BASE+0x00000100f0ull)
#define AR_SB_HPET_MCV_SIZE                                    	0x0000000008ull
#define AR_SB_HPET_MCV_LIMIT                                   	AR_SB_HPET_MCV+AR_SB_HPET_MCV_SIZE-1
#define AR_SB_HPET_T0_CONF                                     	(AR_SB_BASE+0x0000010100ull)
#define AR_SB_HPET_T0_CONF_SIZE                                	0x0000000008ull
#define AR_SB_HPET_T0_CONF_LIMIT                               	AR_SB_HPET_T0_CONF+AR_SB_HPET_T0_CONF_SIZE-1
#define AR_SB_HPET_T0_COMP                                     	(AR_SB_BASE+0x0000010108ull)
#define AR_SB_HPET_T0_COMP_SIZE                                	0x0000000008ull
#define AR_SB_HPET_T0_COMP_LIMIT                               	AR_SB_HPET_T0_COMP+AR_SB_HPET_T0_COMP_SIZE-1
#define AR_SB_HPET_T1_CONF                                     	(AR_SB_BASE+0x0000010120ull)
#define AR_SB_HPET_T1_CONF_SIZE                                	0x0000000008ull
#define AR_SB_HPET_T1_CONF_LIMIT                               	AR_SB_HPET_T1_CONF+AR_SB_HPET_T1_CONF_SIZE-1
#define AR_SB_HPET_T1_COMP                                     	(AR_SB_BASE+0x0000010128ull)
#define AR_SB_HPET_T1_COMP_SIZE                                	0x0000000008ull
#define AR_SB_HPET_T1_COMP_LIMIT                               	AR_SB_HPET_T1_COMP+AR_SB_HPET_T1_COMP_SIZE-1
#define AR_SB_HPET_T2_CONF                                     	(AR_SB_BASE+0x0000010140ull)
#define AR_SB_HPET_T2_CONF_SIZE                                	0x0000000008ull
#define AR_SB_HPET_T2_CONF_LIMIT                               	AR_SB_HPET_T2_CONF+AR_SB_HPET_T2_CONF_SIZE-1
#define AR_SB_HPET_T2_COMP                                     	(AR_SB_BASE+0x0000010148ull)
#define AR_SB_HPET_T2_COMP_SIZE                                	0x0000000008ull
#define AR_SB_HPET_T2_COMP_LIMIT                               	AR_SB_HPET_T2_COMP+AR_SB_HPET_T2_COMP_SIZE-1
#define AR_SB_HPET_FREQ1                                       	(AR_SB_BASE+0x00000120a0ull)
#define AR_SB_HPET_FREQ1_SIZE                                  	0x0000000008ull
#define AR_SB_HPET_FREQ1_LIMIT                                 	AR_SB_HPET_FREQ1+AR_SB_HPET_FREQ1_SIZE-1
#define AR_SB_HPET_FREQ2                                       	(AR_SB_BASE+0x00000120a8ull)
#define AR_SB_HPET_FREQ2_SIZE                                  	0x0000000008ull
#define AR_SB_HPET_FREQ2_LIMIT                                 	AR_SB_HPET_FREQ2+AR_SB_HPET_FREQ2_SIZE-1
#define AR_SB_HPET_PLL_ADJ1                                    	(AR_SB_BASE+0x0000012100ull)
#define AR_SB_HPET_PLL_ADJ1_SIZE                               	0x0000000008ull
#define AR_SB_HPET_PLL_ADJ1_LIMIT                              	AR_SB_HPET_PLL_ADJ1+AR_SB_HPET_PLL_ADJ1_SIZE-1
#define AR_SB_HPET_PLL_ADJ2                                    	(AR_SB_BASE+0x0000012108ull)
#define AR_SB_HPET_PLL_ADJ2_SIZE                               	0x0000000008ull
#define AR_SB_HPET_PLL_ADJ2_LIMIT                              	AR_SB_HPET_PLL_ADJ2+AR_SB_HPET_PLL_ADJ2_SIZE-1

/*
 *  AR_SB_HPET_CAP DEFINES
 */
#define AR_SB_HPET_CAP_CLK_PERIOD_MASK                                  	0xffffffff00000000ull
#define AR_SB_HPET_CAP_VENDOR_ID_MASK                                   	0x00000000ffff0000ull
#define AR_SB_HPET_CAP_LEG_RT_CAP_MASK                                  	0x0000000000008000ull
#define AR_SB_HPET_CAP_COUNT_SIZE_CAP_MASK                              	0x0000000000002000ull
#define AR_SB_HPET_CAP_NUM_TIM_CAP_MASK                                 	0x0000000000001f00ull
#define AR_SB_HPET_CAP_REV_ID_MASK                                      	0x00000000000000ffull
#define AR_SB_HPET_CAP_CLK_PERIOD_BP                                    	32
#define AR_SB_HPET_CAP_VENDOR_ID_BP                                     	16
#define AR_SB_HPET_CAP_LEG_RT_CAP_BP                                    	15
#define AR_SB_HPET_CAP_COUNT_SIZE_CAP_BP                                	13
#define AR_SB_HPET_CAP_NUM_TIM_CAP_BP                                   	8
#define AR_SB_HPET_CAP_REV_ID_BP                                        	0
#define AR_SB_HPET_CAP_CLK_PERIOD_QW                                    	0
#define AR_SB_HPET_CAP_VENDOR_ID_QW                                     	0
#define AR_SB_HPET_CAP_LEG_RT_CAP_QW                                    	0
#define AR_SB_HPET_CAP_COUNT_SIZE_CAP_QW                                	0
#define AR_SB_HPET_CAP_NUM_TIM_CAP_QW                                   	0
#define AR_SB_HPET_CAP_REV_ID_QW                                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_CONFIG DEFINES
 */
#define AR_SB_HPET_CONFIG_LEG_RT_CNF_MASK                               	0x0000000000000002ull
#define AR_SB_HPET_CONFIG_ENABLE_CNF_MASK                               	0x0000000000000001ull
#define AR_SB_HPET_CONFIG_LEG_RT_CNF_BP                                 	1
#define AR_SB_HPET_CONFIG_ENABLE_CNF_BP                                 	0
#define AR_SB_HPET_CONFIG_LEG_RT_CNF_QW                                 	0
#define AR_SB_HPET_CONFIG_ENABLE_CNF_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_ISR DEFINES
 */
#define AR_SB_HPET_ISR_T2_INT_STS_MASK                                  	0x0000000000000004ull
#define AR_SB_HPET_ISR_T1_INT_STS_MASK                                  	0x0000000000000002ull
#define AR_SB_HPET_ISR_T0_INT_STS_MASK                                  	0x0000000000000001ull
#define AR_SB_HPET_ISR_T2_INT_STS_BP                                    	2
#define AR_SB_HPET_ISR_T1_INT_STS_BP                                    	1
#define AR_SB_HPET_ISR_T0_INT_STS_BP                                    	0
#define AR_SB_HPET_ISR_T2_INT_STS_QW                                    	0
#define AR_SB_HPET_ISR_T1_INT_STS_QW                                    	0
#define AR_SB_HPET_ISR_T0_INT_STS_QW                                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_MCV DEFINES
 */
#define AR_SB_HPET_MCV_MCV_MASK                                         	0x00000000ffffffffull
#define AR_SB_HPET_MCV_MCV_BP                                           	0
#define AR_SB_HPET_MCV_MCV_QW                                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_T0_CONF DEFINES
 */
#define AR_SB_HPET_T0_CONF_VAL_SET_CNF_MASK                             	0x0000000000000040ull
#define AR_SB_HPET_T0_CONF_SIZE_MASK                                    	0x0000000000000020ull
#define AR_SB_HPET_T0_CONF_PER_INT_CAP_MASK                             	0x0000000000000010ull
#define AR_SB_HPET_T0_CONF_TYPE_MASK                                    	0x0000000000000008ull
#define AR_SB_HPET_T0_CONF_INT_ENB_MASK                                 	0x0000000000000004ull
#define AR_SB_HPET_T0_CONF_INT_TYPE_MASK                                	0x0000000000000002ull
#define AR_SB_HPET_T0_CONF_VAL_SET_CNF_BP                               	6
#define AR_SB_HPET_T0_CONF_SIZE_BP                                      	5
#define AR_SB_HPET_T0_CONF_PER_INT_CAP_BP                               	4
#define AR_SB_HPET_T0_CONF_TYPE_BP                                      	3
#define AR_SB_HPET_T0_CONF_INT_ENB_BP                                   	2
#define AR_SB_HPET_T0_CONF_INT_TYPE_BP                                  	1
#define AR_SB_HPET_T0_CONF_VAL_SET_CNF_QW                               	0
#define AR_SB_HPET_T0_CONF_SIZE_QW                                      	0
#define AR_SB_HPET_T0_CONF_PER_INT_CAP_QW                               	0
#define AR_SB_HPET_T0_CONF_TYPE_QW                                      	0
#define AR_SB_HPET_T0_CONF_INT_ENB_QW                                   	0
#define AR_SB_HPET_T0_CONF_INT_TYPE_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_T0_COMP DEFINES
 */
#define AR_SB_HPET_T0_COMP_COMPARATOR_MASK                              	0x00000000ffffffffull
#define AR_SB_HPET_T0_COMP_COMPARATOR_BP                                	0
#define AR_SB_HPET_T0_COMP_COMPARATOR_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_T1_CONF DEFINES
 */
#define AR_SB_HPET_T1_CONF_VAL_SET_CNF_MASK                             	0x0000000000000040ull
#define AR_SB_HPET_T1_CONF_SIZE_MASK                                    	0x0000000000000020ull
#define AR_SB_HPET_T1_CONF_PER_INT_CAP_MASK                             	0x0000000000000010ull
#define AR_SB_HPET_T1_CONF_TYPE_MASK                                    	0x0000000000000008ull
#define AR_SB_HPET_T1_CONF_INT_ENB_MASK                                 	0x0000000000000004ull
#define AR_SB_HPET_T1_CONF_INT_TYPE_MASK                                	0x0000000000000002ull
#define AR_SB_HPET_T1_CONF_VAL_SET_CNF_BP                               	6
#define AR_SB_HPET_T1_CONF_SIZE_BP                                      	5
#define AR_SB_HPET_T1_CONF_PER_INT_CAP_BP                               	4
#define AR_SB_HPET_T1_CONF_TYPE_BP                                      	3
#define AR_SB_HPET_T1_CONF_INT_ENB_BP                                   	2
#define AR_SB_HPET_T1_CONF_INT_TYPE_BP                                  	1
#define AR_SB_HPET_T1_CONF_VAL_SET_CNF_QW                               	0
#define AR_SB_HPET_T1_CONF_SIZE_QW                                      	0
#define AR_SB_HPET_T1_CONF_PER_INT_CAP_QW                               	0
#define AR_SB_HPET_T1_CONF_TYPE_QW                                      	0
#define AR_SB_HPET_T1_CONF_INT_ENB_QW                                   	0
#define AR_SB_HPET_T1_CONF_INT_TYPE_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_T1_COMP DEFINES
 */
#define AR_SB_HPET_T1_COMP_COMPARATOR_MASK                              	0x00000000ffffffffull
#define AR_SB_HPET_T1_COMP_COMPARATOR_BP                                	0
#define AR_SB_HPET_T1_COMP_COMPARATOR_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_T2_CONF DEFINES
 */
#define AR_SB_HPET_T2_CONF_VAL_SET_CNF_MASK                             	0x0000000000000040ull
#define AR_SB_HPET_T2_CONF_SIZE_MASK                                    	0x0000000000000020ull
#define AR_SB_HPET_T2_CONF_PER_INT_CAP_MASK                             	0x0000000000000010ull
#define AR_SB_HPET_T2_CONF_TYPE_MASK                                    	0x0000000000000008ull
#define AR_SB_HPET_T2_CONF_INT_ENB_MASK                                 	0x0000000000000004ull
#define AR_SB_HPET_T2_CONF_INT_TYPE_MASK                                	0x0000000000000002ull
#define AR_SB_HPET_T2_CONF_VAL_SET_CNF_BP                               	6
#define AR_SB_HPET_T2_CONF_SIZE_BP                                      	5
#define AR_SB_HPET_T2_CONF_PER_INT_CAP_BP                               	4
#define AR_SB_HPET_T2_CONF_TYPE_BP                                      	3
#define AR_SB_HPET_T2_CONF_INT_ENB_BP                                   	2
#define AR_SB_HPET_T2_CONF_INT_TYPE_BP                                  	1
#define AR_SB_HPET_T2_CONF_VAL_SET_CNF_QW                               	0
#define AR_SB_HPET_T2_CONF_SIZE_QW                                      	0
#define AR_SB_HPET_T2_CONF_PER_INT_CAP_QW                               	0
#define AR_SB_HPET_T2_CONF_TYPE_QW                                      	0
#define AR_SB_HPET_T2_CONF_INT_ENB_QW                                   	0
#define AR_SB_HPET_T2_CONF_INT_TYPE_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_T2_COMP DEFINES
 */
#define AR_SB_HPET_T2_COMP_COMPARATOR_MASK                              	0x00000000ffffffffull
#define AR_SB_HPET_T2_COMP_COMPARATOR_BP                                	0
#define AR_SB_HPET_T2_COMP_COMPARATOR_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_FREQ1 DEFINES
 */
#define AR_SB_HPET_FREQ1_GAIN1_MASK                                     	0xff00000000000000ull
#define AR_SB_HPET_FREQ1_GAIN0_MASK                                     	0x00ff000000000000ull
#define AR_SB_HPET_FREQ1_SHIFT1_MASK                                    	0x0000c00000000000ull
#define AR_SB_HPET_FREQ1_SHIFT0_MASK                                    	0x0000300000000000ull
#define AR_SB_HPET_FREQ1_DELAY_MASK                                     	0x00000fff00000000ull
#define AR_SB_HPET_FREQ1_OUTEN_MASK                                     	0x0000000020000000ull
#define AR_SB_HPET_FREQ1_LOCK_MASK                                      	0x0000000010000000ull
#define AR_SB_HPET_FREQ1_COUNT_MASK                                     	0x000000000fffffffull
#define AR_SB_HPET_FREQ1_GAIN1_BP                                       	56
#define AR_SB_HPET_FREQ1_GAIN0_BP                                       	48
#define AR_SB_HPET_FREQ1_SHIFT1_BP                                      	46
#define AR_SB_HPET_FREQ1_SHIFT0_BP                                      	44
#define AR_SB_HPET_FREQ1_DELAY_BP                                       	32
#define AR_SB_HPET_FREQ1_OUTEN_BP                                       	29
#define AR_SB_HPET_FREQ1_LOCK_BP                                        	28
#define AR_SB_HPET_FREQ1_COUNT_BP                                       	0
#define AR_SB_HPET_FREQ1_GAIN1_QW                                       	0
#define AR_SB_HPET_FREQ1_GAIN0_QW                                       	0
#define AR_SB_HPET_FREQ1_SHIFT1_QW                                      	0
#define AR_SB_HPET_FREQ1_SHIFT0_QW                                      	0
#define AR_SB_HPET_FREQ1_DELAY_QW                                       	0
#define AR_SB_HPET_FREQ1_OUTEN_QW                                       	0
#define AR_SB_HPET_FREQ1_LOCK_QW                                        	0
#define AR_SB_HPET_FREQ1_COUNT_QW                                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_FREQ2 DEFINES
 */
#define AR_SB_HPET_FREQ2_WRAP_MASK                                      	0x0fffffff00000000ull
#define AR_SB_HPET_FREQ2_INCR_MASK                                      	0x00000000000fffffull
#define AR_SB_HPET_FREQ2_WRAP_BP                                        	32
#define AR_SB_HPET_FREQ2_INCR_BP                                        	0
#define AR_SB_HPET_FREQ2_WRAP_QW                                        	0
#define AR_SB_HPET_FREQ2_INCR_QW                                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_PLL_ADJ1 DEFINES
 */
#define AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_MASK                            	0x0fffffff00000000ull
#define AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_MASK                            	0x000000000fffffffull
#define AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_BP                              	32
#define AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_BP                              	0
#define AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_QW                              	0
#define AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SB_HPET_PLL_ADJ2 DEFINES
 */
#define AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_MASK                          	0x000003ff00000000ull
#define AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_MASK                           	0x000000000fffffffull
#define AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_BP                            	32
#define AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_BP                             	0
#define AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_QW                            	0
#define AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */



/*
 *  AR SB MACROS
 */
#ifndef RD_FIELD
#define RD_FIELD(d, bp, m)	(((d)&(m))>>(bp))
#endif
#ifndef WR_FIELD
#define WR_FIELD(mmr, d, bp, m)	(mmr = (((mmr) & ~(m)) | ((((uint64_t)(d))<<(bp)) & (m))))
#endif
#define RF_AR_SB_HPET_CAP_CLK_PERIOD(mmr)                       	RD_FIELD(mmr,\
									AR_SB_HPET_CAP_CLK_PERIOD_BP,\
									AR_SB_HPET_CAP_CLK_PERIOD_MASK)
#define WF_AR_SB_HPET_CAP_CLK_PERIOD(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_SB_HPET_CAP_CLK_PERIOD_BP,\
									AR_SB_HPET_CAP_CLK_PERIOD_MASK)
#define RF_AR_SB_HPET_CAP_VENDOR_ID(mmr)                        	RD_FIELD(mmr,\
									AR_SB_HPET_CAP_VENDOR_ID_BP,\
									AR_SB_HPET_CAP_VENDOR_ID_MASK)
#define WF_AR_SB_HPET_CAP_VENDOR_ID(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_SB_HPET_CAP_VENDOR_ID_BP,\
									AR_SB_HPET_CAP_VENDOR_ID_MASK)
#define RF_AR_SB_HPET_CAP_LEG_RT_CAP(mmr)                       	RD_FIELD(mmr,\
									AR_SB_HPET_CAP_LEG_RT_CAP_BP,\
									AR_SB_HPET_CAP_LEG_RT_CAP_MASK)
#define WF_AR_SB_HPET_CAP_LEG_RT_CAP(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_SB_HPET_CAP_LEG_RT_CAP_BP,\
									AR_SB_HPET_CAP_LEG_RT_CAP_MASK)
#define RF_AR_SB_HPET_CAP_COUNT_SIZE_CAP(mmr)                   	RD_FIELD(mmr,\
									AR_SB_HPET_CAP_COUNT_SIZE_CAP_BP,\
									AR_SB_HPET_CAP_COUNT_SIZE_CAP_MASK)
#define WF_AR_SB_HPET_CAP_COUNT_SIZE_CAP(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SB_HPET_CAP_COUNT_SIZE_CAP_BP,\
									AR_SB_HPET_CAP_COUNT_SIZE_CAP_MASK)
#define RF_AR_SB_HPET_CAP_NUM_TIM_CAP(mmr)                      	RD_FIELD(mmr,\
									AR_SB_HPET_CAP_NUM_TIM_CAP_BP,\
									AR_SB_HPET_CAP_NUM_TIM_CAP_MASK)
#define WF_AR_SB_HPET_CAP_NUM_TIM_CAP(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_SB_HPET_CAP_NUM_TIM_CAP_BP,\
									AR_SB_HPET_CAP_NUM_TIM_CAP_MASK)
#define RF_AR_SB_HPET_CAP_REV_ID(mmr)                           	RD_FIELD(mmr,\
									AR_SB_HPET_CAP_REV_ID_BP,\
									AR_SB_HPET_CAP_REV_ID_MASK)
#define WF_AR_SB_HPET_CAP_REV_ID(mmr,v)                         	WR_FIELD(mmr,v,\
									AR_SB_HPET_CAP_REV_ID_BP,\
									AR_SB_HPET_CAP_REV_ID_MASK)
#define RF_AR_SB_HPET_CONFIG_LEG_RT_CNF(mmr)                    	RD_FIELD(mmr,\
									AR_SB_HPET_CONFIG_LEG_RT_CNF_BP,\
									AR_SB_HPET_CONFIG_LEG_RT_CNF_MASK)
#define WF_AR_SB_HPET_CONFIG_LEG_RT_CNF(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SB_HPET_CONFIG_LEG_RT_CNF_BP,\
									AR_SB_HPET_CONFIG_LEG_RT_CNF_MASK)
#define RF_AR_SB_HPET_CONFIG_ENABLE_CNF(mmr)                    	RD_FIELD(mmr,\
									AR_SB_HPET_CONFIG_ENABLE_CNF_BP,\
									AR_SB_HPET_CONFIG_ENABLE_CNF_MASK)
#define WF_AR_SB_HPET_CONFIG_ENABLE_CNF(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SB_HPET_CONFIG_ENABLE_CNF_BP,\
									AR_SB_HPET_CONFIG_ENABLE_CNF_MASK)
#define RF_AR_SB_HPET_ISR_T2_INT_STS(mmr)                       	RD_FIELD(mmr,\
									AR_SB_HPET_ISR_T2_INT_STS_BP,\
									AR_SB_HPET_ISR_T2_INT_STS_MASK)
#define WF_AR_SB_HPET_ISR_T2_INT_STS(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_SB_HPET_ISR_T2_INT_STS_BP,\
									AR_SB_HPET_ISR_T2_INT_STS_MASK)
#define RF_AR_SB_HPET_ISR_T1_INT_STS(mmr)                       	RD_FIELD(mmr,\
									AR_SB_HPET_ISR_T1_INT_STS_BP,\
									AR_SB_HPET_ISR_T1_INT_STS_MASK)
#define WF_AR_SB_HPET_ISR_T1_INT_STS(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_SB_HPET_ISR_T1_INT_STS_BP,\
									AR_SB_HPET_ISR_T1_INT_STS_MASK)
#define RF_AR_SB_HPET_ISR_T0_INT_STS(mmr)                       	RD_FIELD(mmr,\
									AR_SB_HPET_ISR_T0_INT_STS_BP,\
									AR_SB_HPET_ISR_T0_INT_STS_MASK)
#define WF_AR_SB_HPET_ISR_T0_INT_STS(mmr,v)                     	WR_FIELD(mmr,v,\
									AR_SB_HPET_ISR_T0_INT_STS_BP,\
									AR_SB_HPET_ISR_T0_INT_STS_MASK)
#define RF_AR_SB_HPET_MCV_MCV(mmr)                              	RD_FIELD(mmr,\
									AR_SB_HPET_MCV_MCV_BP,\
									AR_SB_HPET_MCV_MCV_MASK)
#define WF_AR_SB_HPET_MCV_MCV(mmr,v)                            	WR_FIELD(mmr,v,\
									AR_SB_HPET_MCV_MCV_BP,\
									AR_SB_HPET_MCV_MCV_MASK)
#define RF_AR_SB_HPET_T0_CONF_VAL_SET_CNF(mmr)                  	RD_FIELD(mmr,\
									AR_SB_HPET_T0_CONF_VAL_SET_CNF_BP,\
									AR_SB_HPET_T0_CONF_VAL_SET_CNF_MASK)
#define WF_AR_SB_HPET_T0_CONF_VAL_SET_CNF(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SB_HPET_T0_CONF_VAL_SET_CNF_BP,\
									AR_SB_HPET_T0_CONF_VAL_SET_CNF_MASK)
#define RF_AR_SB_HPET_T0_CONF_SIZE(mmr)                         	RD_FIELD(mmr,\
									AR_SB_HPET_T0_CONF_SIZE_BP,\
									AR_SB_HPET_T0_CONF_SIZE_MASK)
#define WF_AR_SB_HPET_T0_CONF_SIZE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_SB_HPET_T0_CONF_SIZE_BP,\
									AR_SB_HPET_T0_CONF_SIZE_MASK)
#define RF_AR_SB_HPET_T0_CONF_PER_INT_CAP(mmr)                  	RD_FIELD(mmr,\
									AR_SB_HPET_T0_CONF_PER_INT_CAP_BP,\
									AR_SB_HPET_T0_CONF_PER_INT_CAP_MASK)
#define WF_AR_SB_HPET_T0_CONF_PER_INT_CAP(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SB_HPET_T0_CONF_PER_INT_CAP_BP,\
									AR_SB_HPET_T0_CONF_PER_INT_CAP_MASK)
#define RF_AR_SB_HPET_T0_CONF_TYPE(mmr)                         	RD_FIELD(mmr,\
									AR_SB_HPET_T0_CONF_TYPE_BP,\
									AR_SB_HPET_T0_CONF_TYPE_MASK)
#define WF_AR_SB_HPET_T0_CONF_TYPE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_SB_HPET_T0_CONF_TYPE_BP,\
									AR_SB_HPET_T0_CONF_TYPE_MASK)
#define RF_AR_SB_HPET_T0_CONF_INT_ENB(mmr)                      	RD_FIELD(mmr,\
									AR_SB_HPET_T0_CONF_INT_ENB_BP,\
									AR_SB_HPET_T0_CONF_INT_ENB_MASK)
#define WF_AR_SB_HPET_T0_CONF_INT_ENB(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_SB_HPET_T0_CONF_INT_ENB_BP,\
									AR_SB_HPET_T0_CONF_INT_ENB_MASK)
#define RF_AR_SB_HPET_T0_CONF_INT_TYPE(mmr)                     	RD_FIELD(mmr,\
									AR_SB_HPET_T0_CONF_INT_TYPE_BP,\
									AR_SB_HPET_T0_CONF_INT_TYPE_MASK)
#define WF_AR_SB_HPET_T0_CONF_INT_TYPE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_SB_HPET_T0_CONF_INT_TYPE_BP,\
									AR_SB_HPET_T0_CONF_INT_TYPE_MASK)
#define RF_AR_SB_HPET_T0_COMP_COMPARATOR(mmr)                   	RD_FIELD(mmr,\
									AR_SB_HPET_T0_COMP_COMPARATOR_BP,\
									AR_SB_HPET_T0_COMP_COMPARATOR_MASK)
#define WF_AR_SB_HPET_T0_COMP_COMPARATOR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SB_HPET_T0_COMP_COMPARATOR_BP,\
									AR_SB_HPET_T0_COMP_COMPARATOR_MASK)
#define RF_AR_SB_HPET_T1_CONF_VAL_SET_CNF(mmr)                  	RD_FIELD(mmr,\
									AR_SB_HPET_T1_CONF_VAL_SET_CNF_BP,\
									AR_SB_HPET_T1_CONF_VAL_SET_CNF_MASK)
#define WF_AR_SB_HPET_T1_CONF_VAL_SET_CNF(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SB_HPET_T1_CONF_VAL_SET_CNF_BP,\
									AR_SB_HPET_T1_CONF_VAL_SET_CNF_MASK)
#define RF_AR_SB_HPET_T1_CONF_SIZE(mmr)                         	RD_FIELD(mmr,\
									AR_SB_HPET_T1_CONF_SIZE_BP,\
									AR_SB_HPET_T1_CONF_SIZE_MASK)
#define WF_AR_SB_HPET_T1_CONF_SIZE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_SB_HPET_T1_CONF_SIZE_BP,\
									AR_SB_HPET_T1_CONF_SIZE_MASK)
#define RF_AR_SB_HPET_T1_CONF_PER_INT_CAP(mmr)                  	RD_FIELD(mmr,\
									AR_SB_HPET_T1_CONF_PER_INT_CAP_BP,\
									AR_SB_HPET_T1_CONF_PER_INT_CAP_MASK)
#define WF_AR_SB_HPET_T1_CONF_PER_INT_CAP(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SB_HPET_T1_CONF_PER_INT_CAP_BP,\
									AR_SB_HPET_T1_CONF_PER_INT_CAP_MASK)
#define RF_AR_SB_HPET_T1_CONF_TYPE(mmr)                         	RD_FIELD(mmr,\
									AR_SB_HPET_T1_CONF_TYPE_BP,\
									AR_SB_HPET_T1_CONF_TYPE_MASK)
#define WF_AR_SB_HPET_T1_CONF_TYPE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_SB_HPET_T1_CONF_TYPE_BP,\
									AR_SB_HPET_T1_CONF_TYPE_MASK)
#define RF_AR_SB_HPET_T1_CONF_INT_ENB(mmr)                      	RD_FIELD(mmr,\
									AR_SB_HPET_T1_CONF_INT_ENB_BP,\
									AR_SB_HPET_T1_CONF_INT_ENB_MASK)
#define WF_AR_SB_HPET_T1_CONF_INT_ENB(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_SB_HPET_T1_CONF_INT_ENB_BP,\
									AR_SB_HPET_T1_CONF_INT_ENB_MASK)
#define RF_AR_SB_HPET_T1_CONF_INT_TYPE(mmr)                     	RD_FIELD(mmr,\
									AR_SB_HPET_T1_CONF_INT_TYPE_BP,\
									AR_SB_HPET_T1_CONF_INT_TYPE_MASK)
#define WF_AR_SB_HPET_T1_CONF_INT_TYPE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_SB_HPET_T1_CONF_INT_TYPE_BP,\
									AR_SB_HPET_T1_CONF_INT_TYPE_MASK)
#define RF_AR_SB_HPET_T1_COMP_COMPARATOR(mmr)                   	RD_FIELD(mmr,\
									AR_SB_HPET_T1_COMP_COMPARATOR_BP,\
									AR_SB_HPET_T1_COMP_COMPARATOR_MASK)
#define WF_AR_SB_HPET_T1_COMP_COMPARATOR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SB_HPET_T1_COMP_COMPARATOR_BP,\
									AR_SB_HPET_T1_COMP_COMPARATOR_MASK)
#define RF_AR_SB_HPET_T2_CONF_VAL_SET_CNF(mmr)                  	RD_FIELD(mmr,\
									AR_SB_HPET_T2_CONF_VAL_SET_CNF_BP,\
									AR_SB_HPET_T2_CONF_VAL_SET_CNF_MASK)
#define WF_AR_SB_HPET_T2_CONF_VAL_SET_CNF(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SB_HPET_T2_CONF_VAL_SET_CNF_BP,\
									AR_SB_HPET_T2_CONF_VAL_SET_CNF_MASK)
#define RF_AR_SB_HPET_T2_CONF_SIZE(mmr)                         	RD_FIELD(mmr,\
									AR_SB_HPET_T2_CONF_SIZE_BP,\
									AR_SB_HPET_T2_CONF_SIZE_MASK)
#define WF_AR_SB_HPET_T2_CONF_SIZE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_SB_HPET_T2_CONF_SIZE_BP,\
									AR_SB_HPET_T2_CONF_SIZE_MASK)
#define RF_AR_SB_HPET_T2_CONF_PER_INT_CAP(mmr)                  	RD_FIELD(mmr,\
									AR_SB_HPET_T2_CONF_PER_INT_CAP_BP,\
									AR_SB_HPET_T2_CONF_PER_INT_CAP_MASK)
#define WF_AR_SB_HPET_T2_CONF_PER_INT_CAP(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SB_HPET_T2_CONF_PER_INT_CAP_BP,\
									AR_SB_HPET_T2_CONF_PER_INT_CAP_MASK)
#define RF_AR_SB_HPET_T2_CONF_TYPE(mmr)                         	RD_FIELD(mmr,\
									AR_SB_HPET_T2_CONF_TYPE_BP,\
									AR_SB_HPET_T2_CONF_TYPE_MASK)
#define WF_AR_SB_HPET_T2_CONF_TYPE(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_SB_HPET_T2_CONF_TYPE_BP,\
									AR_SB_HPET_T2_CONF_TYPE_MASK)
#define RF_AR_SB_HPET_T2_CONF_INT_ENB(mmr)                      	RD_FIELD(mmr,\
									AR_SB_HPET_T2_CONF_INT_ENB_BP,\
									AR_SB_HPET_T2_CONF_INT_ENB_MASK)
#define WF_AR_SB_HPET_T2_CONF_INT_ENB(mmr,v)                    	WR_FIELD(mmr,v,\
									AR_SB_HPET_T2_CONF_INT_ENB_BP,\
									AR_SB_HPET_T2_CONF_INT_ENB_MASK)
#define RF_AR_SB_HPET_T2_CONF_INT_TYPE(mmr)                     	RD_FIELD(mmr,\
									AR_SB_HPET_T2_CONF_INT_TYPE_BP,\
									AR_SB_HPET_T2_CONF_INT_TYPE_MASK)
#define WF_AR_SB_HPET_T2_CONF_INT_TYPE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_SB_HPET_T2_CONF_INT_TYPE_BP,\
									AR_SB_HPET_T2_CONF_INT_TYPE_MASK)
#define RF_AR_SB_HPET_T2_COMP_COMPARATOR(mmr)                   	RD_FIELD(mmr,\
									AR_SB_HPET_T2_COMP_COMPARATOR_BP,\
									AR_SB_HPET_T2_COMP_COMPARATOR_MASK)
#define WF_AR_SB_HPET_T2_COMP_COMPARATOR(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SB_HPET_T2_COMP_COMPARATOR_BP,\
									AR_SB_HPET_T2_COMP_COMPARATOR_MASK)
#define RF_AR_SB_HPET_FREQ1_GAIN1(mmr)                          	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ1_GAIN1_BP,\
									AR_SB_HPET_FREQ1_GAIN1_MASK)
#define WF_AR_SB_HPET_FREQ1_GAIN1(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ1_GAIN1_BP,\
									AR_SB_HPET_FREQ1_GAIN1_MASK)
#define RF_AR_SB_HPET_FREQ1_GAIN0(mmr)                          	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ1_GAIN0_BP,\
									AR_SB_HPET_FREQ1_GAIN0_MASK)
#define WF_AR_SB_HPET_FREQ1_GAIN0(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ1_GAIN0_BP,\
									AR_SB_HPET_FREQ1_GAIN0_MASK)
#define RF_AR_SB_HPET_FREQ1_SHIFT1(mmr)                         	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ1_SHIFT1_BP,\
									AR_SB_HPET_FREQ1_SHIFT1_MASK)
#define WF_AR_SB_HPET_FREQ1_SHIFT1(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ1_SHIFT1_BP,\
									AR_SB_HPET_FREQ1_SHIFT1_MASK)
#define RF_AR_SB_HPET_FREQ1_SHIFT0(mmr)                         	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ1_SHIFT0_BP,\
									AR_SB_HPET_FREQ1_SHIFT0_MASK)
#define WF_AR_SB_HPET_FREQ1_SHIFT0(mmr,v)                       	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ1_SHIFT0_BP,\
									AR_SB_HPET_FREQ1_SHIFT0_MASK)
#define RF_AR_SB_HPET_FREQ1_DELAY(mmr)                          	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ1_DELAY_BP,\
									AR_SB_HPET_FREQ1_DELAY_MASK)
#define WF_AR_SB_HPET_FREQ1_DELAY(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ1_DELAY_BP,\
									AR_SB_HPET_FREQ1_DELAY_MASK)
#define RF_AR_SB_HPET_FREQ1_OUTEN(mmr)                          	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ1_OUTEN_BP,\
									AR_SB_HPET_FREQ1_OUTEN_MASK)
#define WF_AR_SB_HPET_FREQ1_OUTEN(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ1_OUTEN_BP,\
									AR_SB_HPET_FREQ1_OUTEN_MASK)
#define RF_AR_SB_HPET_FREQ1_LOCK(mmr)                           	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ1_LOCK_BP,\
									AR_SB_HPET_FREQ1_LOCK_MASK)
#define WF_AR_SB_HPET_FREQ1_LOCK(mmr,v)                         	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ1_LOCK_BP,\
									AR_SB_HPET_FREQ1_LOCK_MASK)
#define RF_AR_SB_HPET_FREQ1_COUNT(mmr)                          	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ1_COUNT_BP,\
									AR_SB_HPET_FREQ1_COUNT_MASK)
#define WF_AR_SB_HPET_FREQ1_COUNT(mmr,v)                        	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ1_COUNT_BP,\
									AR_SB_HPET_FREQ1_COUNT_MASK)
#define RF_AR_SB_HPET_FREQ2_WRAP(mmr)                           	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ2_WRAP_BP,\
									AR_SB_HPET_FREQ2_WRAP_MASK)
#define WF_AR_SB_HPET_FREQ2_WRAP(mmr,v)                         	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ2_WRAP_BP,\
									AR_SB_HPET_FREQ2_WRAP_MASK)
#define RF_AR_SB_HPET_FREQ2_INCR(mmr)                           	RD_FIELD(mmr,\
									AR_SB_HPET_FREQ2_INCR_BP,\
									AR_SB_HPET_FREQ2_INCR_MASK)
#define WF_AR_SB_HPET_FREQ2_INCR(mmr,v)                         	WR_FIELD(mmr,v,\
									AR_SB_HPET_FREQ2_INCR_BP,\
									AR_SB_HPET_FREQ2_INCR_MASK)
#define RF_AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX(mmr)                 	RD_FIELD(mmr,\
									AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_BP,\
									AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_MASK)
#define WF_AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_BP,\
									AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_MASK)
#define RF_AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN(mmr)                 	RD_FIELD(mmr,\
									AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_BP,\
									AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_MASK)
#define WF_AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_BP,\
									AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_MASK)
#define RF_AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE(mmr)               	RD_FIELD(mmr,\
									AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_BP,\
									AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_MASK)
#define WF_AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_BP,\
									AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_MASK)
#define RF_AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX(mmr)                	RD_FIELD(mmr,\
									AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_BP,\
									AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_MASK)
#define WF_AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_BP,\
									AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_MASK)

#endif
