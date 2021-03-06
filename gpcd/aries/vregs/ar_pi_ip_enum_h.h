/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pi_ip_enum_h.h
 * FILE: ar_pi_ip_enum_h.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_PI_IP_ENUM_H_H_
#define _AR_PI_IP_ENUM_H_H_

#define AR_PI_PMI_PCLK_PRSP_PKTS                                    	0x0ull
#define AR_PI_PMI_PCLK_PRSP_FLITS                                   	0x8ull
#define AR_PI_PMI_PCLK_PRSP_BLKD                                    	0x10ull
#define AR_PI_PMI_PCLK_PREQ_PKTS                                    	0x18ull
#define AR_PI_PMI_PCLK_PREQ_FLITS                                   	0x20ull
#define AR_PI_PMI_PCLK_PREQ_BLKD                                    	0x28ull
#define AR_PI_PMI_PCLK_PREQ_PTC_BLKD0                               	0x30ull
#define AR_PI_PMI_PCLK_PREQ_PTC_BLKD1                               	0x38ull
#define AR_PI_PMI_PCLK_PREQ_PTC_BLKD2                               	0x40ull
#define AR_PI_PTI_PCLK_NIF_RX_PKT_CNT                               	0x48ull
#define AR_PI_PTI_PCLK_LIF_RX_PKT_CNT                               	0x50ull
#define AR_PI_PTI_PCLK_TRSP_TX_PKT_CNT                              	0x58ull
#define AR_PI_PTI_PCLK_TRSP_OFIFO_SBE_CNT                           	0x60ull
#define AR_PI_PII_PCLK_MSIX_MSG_CNT                                 	0x68ull
#define AR_PI_PII_PCLK_MSIX_MSG_STALLED_CNT                         	0x70ull
#define AR_PI_PII_PCLK_MSIX_MSG_FIFO_SBE_CNT                        	0x78ull
#define AR_PI_DEN_PCLK_0                                            	0x80ull
#define AR_PI_DEN_PCLK_1                                            	0x88ull
#define AR_PI_DEN_PCLK_2                                            	0x90ull
#define AR_PI_DEN_PCLK_3                                            	0x98ull
#define AR_PI_DEN_PCLK_4                                            	0xa0ull
#define AR_PI_DEN_PCLK_5                                            	0xa8ull
#define AR_PI_DEN_PCLK_6                                            	0xb0ull
#define AR_PI_DEN_PCLK_7                                            	0xb8ull
#define AR_PI_DEN_PCLK_8                                            	0xc0ull
#define AR_PI_DEN_PCLK_9                                            	0xc8ull
#define AR_PI_DEN_PCLK_10                                           	0xd0ull
#define AR_PI_DEN_PCLK_11                                           	0xd8ull
#define AR_PI_DEN_PCLK_12                                           	0xe0ull
#define AR_PI_DEN_PCLK_13                                           	0xe8ull
#define AR_PI_DEN_PCLK_14                                           	0xf0ull
#define AR_PI_DEN_PCLK_15                                           	0xf8ull
#define SB_CMU_MASTER_CDN_O                                         	0x8000ull
#define SB_PCS_RATE_O                                               	0x8008ull
#define SB_SSC_FCNTL_O_7_0                                          	0x8010ull
#define SB_SSC_FCNTL_O_19_16                                        	0x8018ull
#define SB_SSC_GEN_MATCH_VAL_O_19_12                                	0x8020ull
#define SB_SSC_GEN_INC_VAL_O_15_8                                   	0x8028ull
#define SB_MSM_IN_OVR_O_5_0                                         	0x8030ull
#define SB_MSM_OUT_OVR_O_7_0                                        	0x8038ull
#define SB_CMU_IN_OVR_O_2_0                                         	0x8048ull
#define SB_PMA_CM_CTRL_O_5_0                                        	0x8180ull
#define SB_PMA_CM_CTRL_O_21_14                                      	0x8188ull
#define SB_PMA_CM_CTRL_O_37_30                                      	0x8190ull
#define SB_PMA_CM_CTRL_O_53_46                                      	0x8198ull
#define SB_PMA_CM_CTRL_O_69_62                                      	0x81a0ull
#define SB_PMA_CM_CTRL_O_85_78                                      	0x81a8ull
#define SB_PMA_CM_CTRL_O_99_94                                      	0x81b0ull
#define SB_CK_SOC_DIV_OVR_O_2_0                                     	0x81b8ull
#define SB_PMA_REFCLK_OUTPUT_SEL_O_3_0                              	0x81c8ull
#define SB_PMA_REFCLK_SEL_OVR_O                                     	0x81d0ull
#define SB_GEN3_GCFSM_CLK_DIV_O                                     	0x8230ull
#define SB_GEN3_SSC_FCNTL_O_7_0                                     	0x8238ull
#define SB_GEN3_SSC_FCNTL_O_19_16                                   	0x8240ull
#define SB_GEN3_MSM_FUNC_INFO_O_15_8                                	0x8248ull
#define SB_GEN3_MSM_FUNC_INFO_O_31_24                               	0x8250ull
#define SB_GEN3_MSM_FUNC_INFO_O_47_40                               	0x8258ull
#define SB_GEN3_MSM_FUNC_INFO_O_63_56                               	0x8260ull
#define SB_GEN3_MSM_FUNC_INFO_O_79_72                               	0x8268ull
#define SB_GEN3_MSM_FUNC_INFO_O_95_88                               	0x8270ull
#define SB_GEN3_MSM_FUNC_INFO_O_111_104                             	0x8278ull
#define SB_GEN3_MSM_FUNC_INFO_O_127_120                             	0x8280ull
#define SB_GEN3_MSM_FUNC_INFO_O_143_136                             	0x8288ull
#define SB_GEN3_MSM_FUNC_INFO_O_159_152                             	0x8290ull
#define SB_GEN3_MSM_FUNC_INFO_O_175_168                             	0x8298ull
#define SB_GEN3_MSM_FUNC_INFO_O_191_184                             	0x82a0ull
#define SB_GEN3_MSM_FUNC_DATA_O_15_8                                	0x82a8ull
#define SB_GEN3_MSM_FUNC_DATA_O_31_24                               	0x82b0ull
#define SB_GEN3_MSM_FUNC_DATA_O_47_40                               	0x82b8ull
#define SB_GEN3_MSM_FUNC_DATA_O_63_56                               	0x82c0ull
#define SB_GEN3_MSM_FUNC_DATA_O_79_72                               	0x82c8ull
#define SB_GEN3_MSM_FUNC_DATA_O_95_88                               	0x82d0ull
#define SB_GEN3_MSM_FUNC_DATA_O_111_104                             	0x82d8ull
#define SB_GEN3_MSM_FUNC_DATA_O_127_120                             	0x82e0ull
#define SB_GEN3_MSM_FUNC_DATA_O_143_136                             	0x82e8ull
#define SB_GEN3_MSM_FUNC_DATA_O_159_152                             	0x82f0ull
#define SB_GEN3_MSM_FUNC_DATA_O_175_168                             	0x82f8ull
#define SB_GEN3_MSM_FUNC_DATA_O_191_184                             	0x8300ull
#define SB_GEN3_MSM_FUNC_DATA_O_207_200                             	0x8308ull
#define SB_GEN3_MSM_FUNC_DATA_O_223_216                             	0x8310ull
#define SB_GEN3_MSM_FUNC_DATA_O_239_232                             	0x8318ull
#define SB_GEN3_MSM_FUNC_DATA_O_255_248                             	0x8320ull
#define SB_GEN3_MSM_FUNC_DATA_O_271_264                             	0x8328ull
#define SB_GEN3_MSM_FUNC_DATA_O_287_280                             	0x8330ull
#define SB_GEN3_PMA_CM_CTRL_O_13_6                                  	0x8338ull
#define SB_GEN3_PMA_CM_CTRL_O_29_22                                 	0x8340ull
#define SB_GEN3_PMA_CM_CTRL_O_45_38                                 	0x8348ull
#define SB_GEN3_PMA_CM_CTRL_O_61_54                                 	0x8350ull
#define SB_GEN3_PMA_CM_CTRL_O_77_70                                 	0x8358ull
#define SB_GEN3_PMA_CM_CTRL_O_93_86                                 	0x8360ull
#define SB_GEN3_CK_SOC_DIV_OVR_O_2_0                                	0x8368ull
#define SB_CMU_RATE_IS_GEN3_OVR_EN_O                                	0x8398ull
#define SB_TBUS_DATA_SMPL_7_0                                       	0x83b8ull
#define SB_TBUS_DATA_SMPL_15_8                                      	0x83c0ull
#define SB_TBUS_DATA_SMPL_17_16                                     	0x83f8ull
#define SB_TX_CLK_SRC_O_L0                                          	0x8800ull
#define SB_TX_CLK_SRC_O_L1                                          	0x9000ull
#define SB_TX_CLK_SRC_O_L2                                          	0x9800ull
#define SB_TX_CLK_SRC_O_L3                                          	0xa000ull
#define SB_REG0_POL_O_1_0_L0                                        	0x8808ull
#define SB_REG0_POL_O_1_0_L1                                        	0x9008ull
#define SB_REG0_POL_O_1_0_L2                                        	0x9808ull
#define SB_REG0_POL_O_1_0_L3                                        	0xa008ull
#define SB_SOC_CK_EN_O_L0                                           	0x8810ull
#define SB_SOC_CK_EN_O_L1                                           	0x9010ull
#define SB_SOC_CK_EN_O_L2                                           	0x9810ull
#define SB_SOC_CK_EN_O_L3                                           	0xa010ull
#define SB_RXEQ_SIGDET_1_0_L0                                       	0x8818ull
#define SB_RXEQ_SIGDET_1_0_L1                                       	0x9018ull
#define SB_RXEQ_SIGDET_1_0_L2                                       	0x9818ull
#define SB_RXEQ_SIGDET_1_0_L3                                       	0xa018ull
#define SB_TX_CTRL_O_21_14_L0                                       	0x8820ull
#define SB_TX_CTRL_O_21_14_L1                                       	0x9020ull
#define SB_TX_CTRL_O_21_14_L2                                       	0x9820ull
#define SB_TX_CTRL_O_21_14_L3                                       	0xa020ull
#define SB_SYM_ALIGN_MODE_O_1_0_L0                                  	0x8840ull
#define SB_SYM_ALIGN_MODE_O_1_0_L1                                  	0x9040ull
#define SB_SYM_ALIGN_MODE_O_1_0_L2                                  	0x9840ull
#define SB_SYM_ALIGN_MODE_O_1_0_L3                                  	0xa040ull
#define SB_PMA_LN_CTRL_O_21_14_L0                                   	0x8848ull
#define SB_PMA_LN_CTRL_O_21_14_L1                                   	0x9048ull
#define SB_PMA_LN_CTRL_O_21_14_L2                                   	0x9848ull
#define SB_PMA_LN_CTRL_O_21_14_L3                                   	0xa048ull
#define SB_PMA_LN_CTRL_O_37_30_L0                                   	0x8850ull
#define SB_PMA_LN_CTRL_O_37_30_L1                                   	0x9050ull
#define SB_PMA_LN_CTRL_O_37_30_L2                                   	0x9850ull
#define SB_PMA_LN_CTRL_O_37_30_L3                                   	0xa050ull
#define SB_PMA_LN_CTRL_O_53_46_L0                                   	0x8858ull
#define SB_PMA_LN_CTRL_O_53_46_L1                                   	0x9058ull
#define SB_PMA_LN_CTRL_O_53_46_L2                                   	0x9858ull
#define SB_PMA_LN_CTRL_O_53_46_L3                                   	0xa058ull
#define SB_PMA_LN_CTRL_O_69_62_L0                                   	0x8860ull
#define SB_PMA_LN_CTRL_O_69_62_L1                                   	0x9060ull
#define SB_PMA_LN_CTRL_O_69_62_L2                                   	0x9860ull
#define SB_PMA_LN_CTRL_O_69_62_L3                                   	0xa060ull
#define SB_PMA_LN_CTRL_O_85_78_L0                                   	0x8868ull
#define SB_PMA_LN_CTRL_O_85_78_L1                                   	0x9068ull
#define SB_PMA_LN_CTRL_O_85_78_L2                                   	0x9868ull
#define SB_PMA_LN_CTRL_O_85_78_L3                                   	0xa068ull
#define SB_PMA_LN_CTRL_O_99_94_L0                                   	0x8870ull
#define SB_PMA_LN_CTRL_O_99_94_L1                                   	0x9070ull
#define SB_PMA_LN_CTRL_O_99_94_L2                                   	0x9870ull
#define SB_PMA_LN_CTRL_O_99_94_L3                                   	0xa070ull
#define SB_GCFSM_OVR_O_15_8_L0                                      	0x8878ull
#define SB_GCFSM_OVR_O_15_8_L1                                      	0x9078ull
#define SB_GCFSM_OVR_O_15_8_L2                                      	0x9878ull
#define SB_GCFSM_OVR_O_15_8_L3                                      	0xa078ull
#define SB_GCFSM_OVR_O_27_24_L0                                     	0x8880ull
#define SB_GCFSM_OVR_O_27_24_L1                                     	0x9080ull
#define SB_GCFSM_OVR_O_27_24_L2                                     	0x9880ull
#define SB_GCFSM_OVR_O_27_24_L3                                     	0xa080ull
#define SB_MSM_OUT_OVR_O_13_6_L0                                    	0x8888ull
#define SB_MSM_OUT_OVR_O_13_6_L1                                    	0x9088ull
#define SB_MSM_OUT_OVR_O_13_6_L2                                    	0x9888ull
#define SB_MSM_OUT_OVR_O_13_6_L3                                    	0xa088ull
#define SB_MSM_TERM_OVR_O_3_0_L0                                    	0x8890ull
#define SB_MSM_TERM_OVR_O_3_0_L1                                    	0x9090ull
#define SB_MSM_TERM_OVR_O_3_0_L2                                    	0x9890ull
#define SB_MSM_TERM_OVR_O_3_0_L3                                    	0xa090ull
#define SB_CDR_CTRL_OUT_OVR_O_12_5_L0                               	0x8898ull
#define SB_CDR_CTRL_OUT_OVR_O_12_5_L1                               	0x9098ull
#define SB_CDR_CTRL_OUT_OVR_O_12_5_L2                               	0x9898ull
#define SB_CDR_CTRL_OUT_OVR_O_12_5_L3                               	0xa098ull
#define SB_CDR_CTRL_OUT_OVR_O_28_21_L0                              	0x88a0ull
#define SB_CDR_CTRL_OUT_OVR_O_28_21_L1                              	0x90a0ull
#define SB_CDR_CTRL_OUT_OVR_O_28_21_L2                              	0x98a0ull
#define SB_CDR_CTRL_OUT_OVR_O_28_21_L3                              	0xa0a0ull
#define SB_LN_IN_OVR_O_8_1_L0                                       	0x88a8ull
#define SB_LN_IN_OVR_O_8_1_L1                                       	0x90a8ull
#define SB_LN_IN_OVR_O_8_1_L2                                       	0x98a8ull
#define SB_LN_IN_OVR_O_8_1_L3                                       	0xa0a8ull
#define SB_RXEQ_WAIT_EN_O_L0                                        	0x88b0ull
#define SB_RXEQ_WAIT_EN_O_L1                                        	0x90b0ull
#define SB_RXEQ_WAIT_EN_O_L2                                        	0x98b0ull
#define SB_RXEQ_WAIT_EN_O_L3                                        	0xa0b0ull
#define SB_RXEQ_OVR_LOAD_EN_O_6_4_L0                                	0x88b8ull
#define SB_RXEQ_OVR_LOAD_EN_O_6_4_L1                                	0x90b8ull
#define SB_RXEQ_OVR_LOAD_EN_O_6_4_L2                                	0x98b8ull
#define SB_RXEQ_OVR_LOAD_EN_O_6_4_L3                                	0xa0b8ull
#define SB_PMA_LN_EYE_DLY_O_9_8_L0                                  	0x88c0ull
#define SB_PMA_LN_EYE_DLY_O_9_8_L1                                  	0x90c0ull
#define SB_PMA_LN_EYE_DLY_O_9_8_L2                                  	0x98c0ull
#define SB_PMA_LN_EYE_DLY_O_9_8_L3                                  	0xa0c0ull
#define SB_BIST_CHK_ERROR_7_0_L0                                    	0x8920ull
#define SB_BIST_CHK_ERROR_7_0_L1                                    	0x9120ull
#define SB_BIST_CHK_ERROR_7_0_L2                                    	0x9920ull
#define SB_BIST_CHK_ERROR_7_0_L3                                    	0xa120ull
#define SB_GCFSM_LANE_OUT_OVR_EN_O_L0                               	0x8928ull
#define SB_GCFSM_LANE_OUT_OVR_EN_O_L1                               	0x9128ull
#define SB_GCFSM_LANE_OUT_OVR_EN_O_L2                               	0x9928ull
#define SB_GCFSM_LANE_OUT_OVR_EN_O_L3                               	0xa128ull
#define SB_GCFSM_LANE_PMA_CAL_OVR_O_7_0_L0                          	0x8930ull
#define SB_GCFSM_LANE_PMA_CAL_OVR_O_7_0_L1                          	0x9130ull
#define SB_GCFSM_LANE_PMA_CAL_OVR_O_7_0_L2                          	0x9930ull
#define SB_GCFSM_LANE_PMA_CAL_OVR_O_7_0_L3                          	0xa130ull
#define SB_RX_ATT_BOOST_CAL_O_1_0_L0                                	0x8938ull
#define SB_RX_ATT_BOOST_CAL_O_1_0_L1                                	0x9138ull
#define SB_RX_ATT_BOOST_CAL_O_1_0_L2                                	0x9938ull
#define SB_RX_ATT_BOOST_CAL_O_1_0_L3                                	0xa138ull
#define SB_AHB_BEACON_ENA_OVR_ENA_O_L0                              	0x8940ull
#define SB_AHB_BEACON_ENA_OVR_ENA_O_L1                              	0x9140ull
#define SB_AHB_BEACON_ENA_OVR_ENA_O_L2                              	0x9940ull
#define SB_AHB_BEACON_ENA_OVR_ENA_O_L3                              	0xa140ull
#define SB_BLOCK_ENC_CLR_ERR_O_L0                                   	0x8948ull
#define SB_BLOCK_ENC_CLR_ERR_O_L1                                   	0x9148ull
#define SB_BLOCK_ENC_CLR_ERR_O_L2                                   	0x9948ull
#define SB_BLOCK_ENC_CLR_ERR_O_L3                                   	0xa148ull
#define SB_BLOCK_DEC_CHK_BLK_NMBR_O_3_0_L0                          	0x8950ull
#define SB_BLOCK_DEC_CHK_BLK_NMBR_O_3_0_L1                          	0x9150ull
#define SB_BLOCK_DEC_CHK_BLK_NMBR_O_3_0_L2                          	0x9950ull
#define SB_BLOCK_DEC_CHK_BLK_NMBR_O_3_0_L3                          	0xa150ull
#define SB_PMA_LN_CTRL_GEN3_O_13_6_L0                               	0x8958ull
#define SB_PMA_LN_CTRL_GEN3_O_13_6_L1                               	0x9158ull
#define SB_PMA_LN_CTRL_GEN3_O_13_6_L2                               	0x9958ull
#define SB_PMA_LN_CTRL_GEN3_O_13_6_L3                               	0xa158ull
#define SB_PMA_LN_CTRL_GEN3_O_29_22_L0                              	0x8960ull
#define SB_PMA_LN_CTRL_GEN3_O_29_22_L1                              	0x9160ull
#define SB_PMA_LN_CTRL_GEN3_O_29_22_L2                              	0x9960ull
#define SB_PMA_LN_CTRL_GEN3_O_29_22_L3                              	0xa160ull
#define SB_PMA_LN_CTRL_GEN3_O_45_38_L0                              	0x8968ull
#define SB_PMA_LN_CTRL_GEN3_O_45_38_L1                              	0x9168ull
#define SB_PMA_LN_CTRL_GEN3_O_45_38_L2                              	0x9968ull
#define SB_PMA_LN_CTRL_GEN3_O_45_38_L3                              	0xa168ull
#define SB_PMA_LN_CTRL_GEN3_O_61_54_L0                              	0x8970ull
#define SB_PMA_LN_CTRL_GEN3_O_61_54_L1                              	0x9170ull
#define SB_PMA_LN_CTRL_GEN3_O_61_54_L2                              	0x9970ull
#define SB_PMA_LN_CTRL_GEN3_O_61_54_L3                              	0xa170ull
#define SB_PMA_LN_CTRL_GEN3_O_77_70_L0                              	0x8978ull
#define SB_PMA_LN_CTRL_GEN3_O_77_70_L1                              	0x9178ull
#define SB_PMA_LN_CTRL_GEN3_O_77_70_L2                              	0x9978ull
#define SB_PMA_LN_CTRL_GEN3_O_77_70_L3                              	0xa178ull
#define SB_PMA_LN_CTRL_GEN3_O_93_86_L0                              	0x8980ull
#define SB_PMA_LN_CTRL_GEN3_O_93_86_L1                              	0x9180ull
#define SB_PMA_LN_CTRL_GEN3_O_93_86_L2                              	0x9980ull
#define SB_PMA_LN_CTRL_GEN3_O_93_86_L3                              	0xa180ull
#define SB_MSM_RATE_OVR_O_7_0_L0                                    	0x8988ull
#define SB_MSM_RATE_OVR_O_7_0_L1                                    	0x9188ull
#define SB_MSM_RATE_OVR_O_7_0_L2                                    	0x9988ull
#define SB_MSM_RATE_OVR_O_7_0_L3                                    	0xa188ull
#define SB_EBUF_SKP_ADD_EN_O_L0                                     	0x8990ull
#define SB_EBUF_SKP_ADD_EN_O_L1                                     	0x9190ull
#define SB_EBUF_SKP_ADD_EN_O_L2                                     	0x9990ull
#define SB_EBUF_SKP_ADD_EN_O_L3                                     	0xa190ull
#define SB_ELECIDLE_CTRL_EXIT_TIMER_LEN_O_9_8_L0                    	0x8998ull
#define SB_ELECIDLE_CTRL_EXIT_TIMER_LEN_O_9_8_L1                    	0x9198ull
#define SB_ELECIDLE_CTRL_EXIT_TIMER_LEN_O_9_8_L2                    	0x9998ull
#define SB_ELECIDLE_CTRL_EXIT_TIMER_LEN_O_9_8_L3                    	0xa198ull
#define SB_LN_IN_OVR_O_25_23_L0                                     	0x89a8ull
#define SB_LN_IN_OVR_O_25_23_L1                                     	0x91a8ull
#define SB_LN_IN_OVR_O_25_23_L2                                     	0x99a8ull
#define SB_LN_IN_OVR_O_25_23_L3                                     	0xa1a8ull
#define SB_TX_BIST_GEN_ACTIVE_O_L0                                  	0x89b0ull
#define SB_TX_BIST_GEN_ACTIVE_O_L1                                  	0x91b0ull
#define SB_TX_BIST_GEN_ACTIVE_O_L2                                  	0x99b0ull
#define SB_TX_BIST_GEN_ACTIVE_O_L3                                  	0xa1b0ull
#define SB_LN_IN_OVR2_O_15_8_L0                                     	0x89b8ull
#define SB_LN_IN_OVR2_O_15_8_L1                                     	0x91b8ull
#define SB_LN_IN_OVR2_O_15_8_L2                                     	0x99b8ull
#define SB_LN_IN_OVR2_O_15_8_L3                                     	0xa1b8ull
#define SB_MSM_OUT_OVR_EN_O_5_0_L0                                  	0x89c0ull
#define SB_MSM_OUT_OVR_EN_O_5_0_L1                                  	0x91c0ull
#define SB_MSM_OUT_OVR_EN_O_5_0_L2                                  	0x99c0ull
#define SB_MSM_OUT_OVR_EN_O_5_0_L3                                  	0xa1c0ull
#define SB_MSM_OUT_OVR_EN_O_18_14_L0                                	0x89c8ull
#define SB_MSM_OUT_OVR_EN_O_18_14_L1                                	0x91c8ull
#define SB_MSM_OUT_OVR_EN_O_18_14_L2                                	0x99c8ull
#define SB_MSM_OUT_OVR_EN_O_18_14_L3                                	0xa1c8ull
#define SB_LN_MASTER_CDN_OVR_O                                      	0xa800ull
#define SB_MODE_8B_O_1_0                                            	0xa808ull
#define SB_OOB_DET_BLEN_MAX_O_6_0                                   	0xa810ull
#define SB_OOB_DET_COMINIT_MAX_O_6_2                                	0xa818ull
#define SB_OOB_DET_COMWAKE_MAX_O_6_4                                	0xa820ull
#define SB_CDR_CTRL_DLY_LANE_O_9_6                                  	0xa828ull
#define SB_CDR_CTRL_INT_FIL_O_1_0                                   	0xa830ull
#define SB_RLD_MAXLEN_O_6_4                                         	0xa838ull
#define SB_SYM_LOCK_NUM_O_3                                         	0xa840ull
#define SB_EBUF_SYMB0_O_9_5                                         	0xa848ull
#define SB_EBUF_FIFO_MID_O_4_1                                      	0xa850ull
#define SB_EBUF_SYMB1_N_O_7_0                                       	0xa858ull
#define SB_QUAD_IF_IN_OVR_O_6_0                                     	0xa8c0ull
#define SB_GCFSM_CYCLE_LEN_O_15_8                                   	0xa8c8ull
#define SB_GCFSM_CYCLE_LEN_O_31_24                                  	0xa8d0ull
#define SB_GCFSM_CYCLE_LEN_O_47_40                                  	0xa8d8ull
#define SB_GCFSM_CYCLE_LEN_O_63_56                                  	0xa8e0ull
#define SB_GCFSM_CYCLE_LEN_O_79_72                                  	0xa8e8ull
#define SB_GCFSM_CYCLE_LEN_O_95_88                                  	0xa8f0ull
#define SB_GCFSM_CYCLE_LEN_O_111_104                                	0xa8f8ull
#define SB_GCFSM_CYCLE_LEN_O_127_120                                	0xa900ull
#define SB_START_DELAY_O_5_0                                        	0xa9f8ull
#define SB_START_DELAY_O_13_6                                       	0xaa00ull
#define SB_RX_BIAS_11_O_2                                           	0xaa08ull
#define SB_RXEQ_INIT_CAL_O_0                                        	0xaa10ull
#define SB_RXEQ_CONT_LENGTH_O_10_3                                  	0xaa18ull
#define SB_RXEQ_ATT_CYCLE_LEN_O_7_4                                 	0xaa20ull
#define SB_RXEQ_TAP1_CYCLE_LEN_O_7_4                                	0xaa28ull
#define SB_RXEQ_TAP3_CYCLE_LEN_O_7_4                                	0xaa30ull
#define SB_RXEQ_TAP5_CYCLE_LEN_O_7_4                                	0xaa38ull
#define SB_RXEQ_RATE2_INIT_CAL_O_6_1                                	0xaa40ull
#define SB_RXEQ_RATE2_RECAL_O_6_3                                   	0xaa48ull
#define SB_RXEQ_TAP2_BOUNCE_O_3_0                                   	0xaa50ull
#define SB_JTAG_CTRL_O_7_0                                          	0xaa58ull
#define SB_CDR_CTRL_SIGDET_LOW_MIN_O_8                              	0xaa60ull
#define SB_CDR_CTRL_CAL_MIN_BOUNCE_O_2_0                            	0xaa68ull
#define SB_EBUF_FIFO_ADD_O_3_0                                      	0xaa70ull
#define SB_SKP_END_GEN3_O_7_0                                       	0xaa78ull
#define SB_LB_SYM_4NP2_GEN3_O_7_0                                   	0xaa80ull
#define SB_RXEQ_FIN_HIGH_O_6_0                                      	0xaa88ull
#define SB_RXEQ_ERR_SIGN_O_6_2                                      	0xaa90ull
#define SB_RXEQ_TAP1_TRAINING_PATT_O_8_2                            	0xaa98ull
#define SB_RXEQ_TAP3_TRAINING_PATT_O_7_0                            	0xaaa0ull
#define SB_RXEQ_TAP4_TRAINING_PATT_O_8_7                            	0xaaa8ull
#define SB_RXEQ_DONT_CARE_O_5_5                                     	0xaab0ull
#define SB_RXEQ_CONT_CAL_O_6_5                                      	0xaab8ull
#define SB_RXEQ_RATE2_ATT_START_O_3_0                               	0xaac0ull
#define SB_RXEQ_RATE2_TAP2_START_O_5_1                              	0xaac8ull
#define SB_RXEQ_RATE2_TAP4_START_O_5_5                              	0xaad0ull
#define SB_RXEQ_RATE3_TAP1_START_O_6_1                              	0xaad8ull
#define SB_RXEQ_RATE3_TAP3_START_O_5_4                              	0xaae0ull
#define SB_EYE_SCAN_SHIFT_O                                         	0xaae8ull
#define SB_EYE_SCAN_MASK_O_18_15                                    	0xaaf0ull
#define SB_EYE_SCAN_WAIT_LEN_O_15_12                                	0xaaf8ull
#define SB_RXEQ_RATE2_DFE_TAP_PD_O_4_3                              	0xab00ull
#define SB_EIEOS_HDR_O_15_8                                         	0xab08ull
#define SB_EIEOS_WORD_O_15_8                                        	0xab10ull
#define SB_SDSM_HDR_O_15_8                                          	0xab18ull
#define SB_SDSM_WORD_O_15_8                                         	0xab20ull
#define SB_SKPOS_HDR_O_15_8                                         	0xab28ull
#define SB_SKPOS_WORD_O_15_8                                        	0xab30ull
#define SB_S0_LB_P_O_9_8                                            	0xab38ull
#define SB_CMP_OFFSET_OVR_O_7_0                                     	0xab40ull
#define SB_RESERVED_0_0                                             	0xab48ull
#define SB_BIST_CHK_PREAM0_O_7_0                                    	0xab50ull
#define SB_BIST_CHK_PREAM1_O_7_0                                    	0xab58ull
#define SB_BIST_GEN_CLK_SEL_O_2_0                                   	0xab60ull
#define SB_BIST_CHK_UDP_O_15_8                                      	0xab68ull
#define SB_BIST_CHK_UDP_O_31_24                                     	0xab70ull
#define SB_BIST_CHK_INSERT_WORD_O_7_0                               	0xab78ull
#define SB_BIST_CHK_INSERT_WORD_O_23_16                             	0xab80ull
#define SB_BIST_CHK_INSERT_WORD_O_39_32                             	0xab88ull
#define SB_BIST_GEN_EN_LOW_O_15_8                                   	0xab90ull
#define SB_BIST_GEN_EN_HIGH_O_15_8                                  	0xab98ull
#define SB_BIST_GEN_INSERT_DELAY_O_11_8                             	0xaba0ull
#define SB_BIST_CHK_ALIGN_PATTERN_GEN3_O_15_8                       	0xaba8ull
#define SB_RATE3_RATESWITCH_RXRECAL_CFG_6_0                         	0xabb0ull
#define SB_RATE3_TXEQ_RXRECAL_END_CFG_6_0                           	0xabb8ull
#define SB_TAP1_CM1_TRAINING_PATT_8                                 	0xabc0ull
#define SB_TAP1_C1_TRAINING_PATT_8                                  	0xabc8ull
#define SB_GEN12_ONLY_O                                             	0xabd0ull
#define SB_CDR_CONTROL_DATA_EN_I                                    	0xabd8ull
#define SB_DFE_TAP1_OVR_VAL_O_6_0                                   	0xabe0ull
#define SB_DFE_TAP3_OVR_VAL_O_5_0                                   	0xabe8ull
#define SB_DFE_TAP5_OVR_VAL_O_5_0                                   	0xabf0ull
#define SB_DFE_TAP1_VAL                                             	0xabf8ull
#define SB_DFE_TAP3_VAL                                             	0xac00ull
#define SB_DFE_TAP5_VAL                                             	0xac08ull
#define DB_VENDOR_ID_DEVICE_ID_CMD_STAT_F0                          	0x10000ull
#define DB_VENDOR_ID_DEVICE_ID_CMD_STAT_F1                          	0x11000ull
#define DB_VENDOR_ID_DEVICE_ID_CMD_STAT_F2                          	0x12000ull
#define DB_VENDOR_ID_DEVICE_ID_CMD_STAT_F3                          	0x13000ull
#define DB_REV_ID_CLASS_CODE_BIST_HEAD_TYPE_LAT_TIMER_CLINE_SIZE_F0 	0x10008ull
#define DB_REV_ID_CLASS_CODE_BIST_HEAD_TYPE_LAT_TIMER_CLINE_SIZE_F1 	0x11008ull
#define DB_REV_ID_CLASS_CODE_BIST_HEAD_TYPE_LAT_TIMER_CLINE_SIZE_F2 	0x12008ull
#define DB_REV_ID_CLASS_CODE_BIST_HEAD_TYPE_LAT_TIMER_CLINE_SIZE_F3 	0x13008ull
#define DB_BAR_0_BAR_1_F0                                           	0x10010ull
#define DB_BAR_0_BAR_1_F1                                           	0x11010ull
#define DB_BAR_0_BAR_1_F2                                           	0x12010ull
#define DB_BAR_0_BAR_1_F3                                           	0x13010ull
#define DB_BAR_2_BAR_3_F0                                           	0x10018ull
#define DB_BAR_2_BAR_3_F1                                           	0x11018ull
#define DB_BAR_2_BAR_3_F2                                           	0x12018ull
#define DB_BAR_2_BAR_3_F3                                           	0x13018ull
#define DB_BAR_4_BAR_5_F0                                           	0x10020ull
#define DB_BAR_4_BAR_5_F1                                           	0x11020ull
#define DB_BAR_4_BAR_5_F2                                           	0x12020ull
#define DB_BAR_4_BAR_5_F3                                           	0x13020ull
#define DB_SUBSYS_VENDOR_ID_SUBSYS_ID_F0                            	0x10028ull
#define DB_SUBSYS_VENDOR_ID_SUBSYS_ID_F1                            	0x11028ull
#define DB_SUBSYS_VENDOR_ID_SUBSYS_ID_F2                            	0x12028ull
#define DB_SUBSYS_VENDOR_ID_SUBSYS_ID_F3                            	0x13028ull
#define DB_EXPANSION_ROM_BASE_ADDRESS_CAP_POINTER_F0                	0x10030ull
#define DB_EXPANSION_ROM_BASE_ADDRESS_CAP_POINTER_F1                	0x11030ull
#define DB_EXPANSION_ROM_BASE_ADDRESS_CAP_POINTER_F2                	0x12030ull
#define DB_EXPANSION_ROM_BASE_ADDRESS_CAP_POINTER_F3                	0x13030ull
#define DB_INT_LINE_INT_PIN_F0                                      	0x10038ull
#define DB_INT_LINE_INT_PIN_F1                                      	0x11038ull
#define DB_INT_LINE_INT_PIN_F2                                      	0x12038ull
#define DB_INT_LINE_INT_PIN_F3                                      	0x13038ull
#define DB_POWER_MANAGEMENT_CAP_POWER_MANAGEMENT_CNTL_STAT_F0       	0x10080ull
#define DB_POWER_MANAGEMENT_CAP_POWER_MANAGEMENT_CNTL_STAT_F1       	0x11080ull
#define DB_POWER_MANAGEMENT_CAP_POWER_MANAGEMENT_CNTL_STAT_F2       	0x12080ull
#define DB_POWER_MANAGEMENT_CAP_POWER_MANAGEMENT_CNTL_STAT_F3       	0x13080ull
#define DB_MSI_X_CNTL_MSI_X_TABLE_OFFSET_F0                         	0x100b0ull
#define DB_MSI_X_CNTL_MSI_X_TABLE_OFFSET_F1                         	0x110b0ull
#define DB_MSI_X_CNTL_MSI_X_TABLE_OFFSET_F2                         	0x120b0ull
#define DB_MSI_X_CNTL_MSI_X_TABLE_OFFSET_F3                         	0x130b0ull
#define DB_MSI_X_PBA_OFFSET_F0                                      	0x100b8ull
#define DB_MSI_X_PBA_OFFSET_F1                                      	0x110b8ull
#define DB_MSI_X_PBA_OFFSET_F2                                      	0x120b8ull
#define DB_MSI_X_PBA_OFFSET_F3                                      	0x130b8ull
#define DB_PCI_EXPRESS_CAP_LIST_PCI_EXPRESS_DEVICE_CAP_F0           	0x100c0ull
#define DB_PCI_EXPRESS_CAP_LIST_PCI_EXPRESS_DEVICE_CAP_F1           	0x110c0ull
#define DB_PCI_EXPRESS_CAP_LIST_PCI_EXPRESS_DEVICE_CAP_F2           	0x120c0ull
#define DB_PCI_EXPRESS_CAP_LIST_PCI_EXPRESS_DEVICE_CAP_F3           	0x130c0ull
#define DB_PCI_EXPRESS_DEVICE_CNTL_STAT_LINK_CAP_F0                 	0x100c8ull
#define DB_PCI_EXPRESS_DEVICE_CNTL_STAT_LINK_CAP_F1                 	0x110c8ull
#define DB_PCI_EXPRESS_DEVICE_CNTL_STAT_LINK_CAP_F2                 	0x120c8ull
#define DB_PCI_EXPRESS_DEVICE_CNTL_STAT_LINK_CAP_F3                 	0x130c8ull
#define DB_LINK_CNTL_STAT_F0                                        	0x100d0ull
#define DB_LINK_CNTL_STAT_F1                                        	0x110d0ull
#define DB_LINK_CNTL_STAT_F2                                        	0x120d0ull
#define DB_LINK_CNTL_STAT_F3                                        	0x130d0ull
#define DB_PCI_EXPRESS_DEVICE_CAP2_F0                               	0x100e0ull
#define DB_PCI_EXPRESS_DEVICE_CAP2_F1                               	0x110e0ull
#define DB_PCI_EXPRESS_DEVICE_CAP2_F2                               	0x120e0ull
#define DB_PCI_EXPRESS_DEVICE_CAP2_F3                               	0x130e0ull
#define DB_PCI_EXPRESS_DEVICE_CNTL_STAT_2_PCI_EXPRESS_LINK_CAP2_F0  	0x100e8ull
#define DB_PCI_EXPRESS_DEVICE_CNTL_STAT_2_PCI_EXPRESS_LINK_CAP2_F1  	0x110e8ull
#define DB_PCI_EXPRESS_DEVICE_CNTL_STAT_2_PCI_EXPRESS_LINK_CAP2_F2  	0x120e8ull
#define DB_PCI_EXPRESS_DEVICE_CNTL_STAT_2_PCI_EXPRESS_LINK_CAP2_F3  	0x130e8ull
#define DB_PCI_EXPRESS_LINK_CNTL2_F0                                	0x100f0ull
#define DB_PCI_EXPRESS_LINK_CNTL2_F1                                	0x110f0ull
#define DB_PCI_EXPRESS_LINK_CNTL2_F2                                	0x120f0ull
#define DB_PCI_EXPRESS_LINK_CNTL2_F3                                	0x130f0ull
#define DB_AER_ENHANCED_CAP_HEADER_UNCE_STAT_F0                     	0x10100ull
#define DB_AER_ENHANCED_CAP_HEADER_UNCE_STAT_F1                     	0x11100ull
#define DB_AER_ENHANCED_CAP_HEADER_UNCE_STAT_F2                     	0x12100ull
#define DB_AER_ENHANCED_CAP_HEADER_UNCE_STAT_F3                     	0x13100ull
#define DB_UNCE_MASK_UNCE_SEVERITY_F0                               	0x10108ull
#define DB_UNCE_MASK_UNCE_SEVERITY_F1                               	0x11108ull
#define DB_UNCE_MASK_UNCE_SEVERITY_F2                               	0x12108ull
#define DB_UNCE_MASK_UNCE_SEVERITY_F3                               	0x13108ull
#define DB_CE_STAT_CE_MASK_F0                                       	0x10110ull
#define DB_CE_STAT_CE_MASK_F1                                       	0x11110ull
#define DB_CE_STAT_CE_MASK_F2                                       	0x12110ull
#define DB_CE_STAT_CE_MASK_F3                                       	0x13110ull
#define DB_ADVANCED_ERROR_CAP_CNTL_HEADER_LOG0_F0                   	0x10118ull
#define DB_ADVANCED_ERROR_CAP_CNTL_HEADER_LOG0_F1                   	0x11118ull
#define DB_ADVANCED_ERROR_CAP_CNTL_HEADER_LOG0_F2                   	0x12118ull
#define DB_ADVANCED_ERROR_CAP_CNTL_HEADER_LOG0_F3                   	0x13118ull
#define DB_HEADER_LOG1_HEADER_LOG2_F0                               	0x10120ull
#define DB_HEADER_LOG1_HEADER_LOG2_F1                               	0x11120ull
#define DB_HEADER_LOG1_HEADER_LOG2_F2                               	0x12120ull
#define DB_HEADER_LOG1_HEADER_LOG2_F3                               	0x13120ull
#define DB_HEADER_LOG3_F0                                           	0x10128ull
#define DB_HEADER_LOG3_F1                                           	0x11128ull
#define DB_HEADER_LOG3_F2                                           	0x12128ull
#define DB_HEADER_LOG3_F3                                           	0x13128ull
#define DB_DEVICE_SERIAL_NUM_CAP_HEADER_DEVICE_SERIAL_NUM0_F0       	0x10150ull
#define DB_DEVICE_SERIAL_NUM_CAP_HEADER_DEVICE_SERIAL_NUM0_F1       	0x11150ull
#define DB_DEVICE_SERIAL_NUM_CAP_HEADER_DEVICE_SERIAL_NUM0_F2       	0x12150ull
#define DB_DEVICE_SERIAL_NUM_CAP_HEADER_DEVICE_SERIAL_NUM0_F3       	0x13150ull
#define DB_DEVICE_SERIAL_NUM1_F0                                    	0x10158ull
#define DB_DEVICE_SERIAL_NUM1_F1                                    	0x11158ull
#define DB_DEVICE_SERIAL_NUM1_F2                                    	0x12158ull
#define DB_DEVICE_SERIAL_NUM1_F3                                    	0x13158ull
#define DB_TPH_REQ_EXTENDED_CAP_HEADER_F0                           	0x10270ull
#define DB_TPH_REQ_EXTENDED_CAP_HEADER_F1                           	0x11270ull
#define DB_TPH_REQ_EXTENDED_CAP_HEADER_F2                           	0x12270ull
#define DB_TPH_REQ_EXTENDED_CAP_HEADER_F3                           	0x13270ull
#define DB_TPH_REQ_CAP_TPH_REQ_CNTL_F0                              	0x10278ull
#define DB_TPH_REQ_CAP_TPH_REQ_CNTL_F1                              	0x11278ull
#define DB_TPH_REQ_CAP_TPH_REQ_CNTL_F2                              	0x12278ull
#define DB_TPH_REQ_CAP_TPH_REQ_CNTL_F3                              	0x13278ull
#define DB_TPH_ST_TABLE_ENTRY_0_TPH_ST_TABLE_ENTRY_1_F0             	0x10280ull
#define DB_TPH_ST_TABLE_ENTRY_0_TPH_ST_TABLE_ENTRY_1_F1             	0x11280ull
#define DB_TPH_ST_TABLE_ENTRY_0_TPH_ST_TABLE_ENTRY_1_F2             	0x12280ull
#define DB_TPH_ST_TABLE_ENTRY_0_TPH_ST_TABLE_ENTRY_1_F3             	0x13280ull
#define DB_TPH_ST_TABLE_ENTRY_2_TPH_ST_TABLE_ENTRY_3_F0             	0x10288ull
#define DB_TPH_ST_TABLE_ENTRY_2_TPH_ST_TABLE_ENTRY_3_F1             	0x11288ull
#define DB_TPH_ST_TABLE_ENTRY_2_TPH_ST_TABLE_ENTRY_3_F2             	0x12288ull
#define DB_TPH_ST_TABLE_ENTRY_2_TPH_ST_TABLE_ENTRY_3_F3             	0x13288ull
#define DB_PHY_LAYER_CFG0_PHY_LAYER_CFG1                            	0x14000ull
#define DB_DATA_LINK_LAYER_TIMER_CFG_RX_CREDIT_LIMIT0               	0x14008ull
#define DB_RX_CREDIT_LIMIT1_TX_CREDIT_LIMIT0                        	0x14010ull
#define DB_TX_CREDIT_LIMIT1_CREDIT_UPDATE_INTERVAL_CFG0             	0x14018ull
#define DB_CREDIT_UPDATE_INTERVAL_CFG1_L0S_TIMEOUT_LIMIT            	0x14020ull
#define DB_TX_TLP_COUNT_TX_TLP_PAYLOAD_DWORD_COUNT                  	0x14028ull
#define DB_RX_TLP_COUNT_RX_TLP_PAYLOAD_DWORD_COUNT                  	0x14030ull
#define DB_COMPLETION_TIMEOUT_LIMIT0_COMPLETION_TIMEOUT_LIMIT1      	0x14038ull
#define DB_L1_STATE_RE_ENTRY_DELAY_VENDOR_ID                        	0x14040ull
#define DB_PME_TURNOFF_ACK_DELAY                                    	0x14048ull
#define DB_NEGOTIATED_LANE_MAP_RX_FTS_COUNT                         	0x14200ull
#define DB_DEBUG_MUX_CNTL_LOCAL_ERROR_STAT                          	0x14208ull
#define DB_LOCAL_INT_MASK_LCRC_ERROR_COUNT                          	0x14210ull
#define DB_ECC_CE_COUNT0_ECC_CE_COUNT1                              	0x14218ull
#define DB_PF_0_BAR_CFG                                             	0x14240ull
#define DB_PF_1_BAR_CFG                                             	0x14248ull
#define DB_PF_2_BAR_CFG                                             	0x14250ull
#define DB_PF_3_BAR_CFG                                             	0x14258ull
#define DB_PHY_FUNCTION_CFG                                         	0x142c0ull

#endif
