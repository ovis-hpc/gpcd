/******************************************************************************
 * COPYRIGHT CRAY INC. ar_sbus_defs.h
 * FILE: ar_sbus_defs.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_SBUS_DEFS_H_
#define _AR_SBUS_DEFS_H_

#define AR_SBUS_N_MMRS                                         	85
#define AR_SBUS_N_DESCS                                        	0

/*
 *  AR SBUS MMR TABLE ADDRESS DEFINES
 */

/*
 *  AR SBUS MMR ADDRESS DEFINES
 */
#define AR_SERDES_SBUS_00                                      	(AR_SBUS_BASE+0x0000000000ull)
#define AR_SERDES_SBUS_00_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_00_LIMIT                                	AR_SERDES_SBUS_00+AR_SERDES_SBUS_00_SIZE-1
#define AR_SERDES_SBUS_01                                      	(AR_SBUS_BASE+0x0000000001ull)
#define AR_SERDES_SBUS_01_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_01_LIMIT                                	AR_SERDES_SBUS_01+AR_SERDES_SBUS_01_SIZE-1
#define AR_SERDES_SBUS_02                                      	(AR_SBUS_BASE+0x0000000002ull)
#define AR_SERDES_SBUS_02_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_02_LIMIT                                	AR_SERDES_SBUS_02+AR_SERDES_SBUS_02_SIZE-1
#define AR_SERDES_SBUS_03                                      	(AR_SBUS_BASE+0x0000000003ull)
#define AR_SERDES_SBUS_03_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_03_LIMIT                                	AR_SERDES_SBUS_03+AR_SERDES_SBUS_03_SIZE-1
#define AR_SERDES_SBUS_05                                      	(AR_SBUS_BASE+0x0000000005ull)
#define AR_SERDES_SBUS_05_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_05_LIMIT                                	AR_SERDES_SBUS_05+AR_SERDES_SBUS_05_SIZE-1
#define AR_SERDES_SBUS_06                                      	(AR_SBUS_BASE+0x0000000006ull)
#define AR_SERDES_SBUS_06_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_06_LIMIT                                	AR_SERDES_SBUS_06+AR_SERDES_SBUS_06_SIZE-1
#define AR_SERDES_SBUS_07                                      	(AR_SBUS_BASE+0x0000000007ull)
#define AR_SERDES_SBUS_07_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_07_LIMIT                                	AR_SERDES_SBUS_07+AR_SERDES_SBUS_07_SIZE-1
#define AR_SERDES_SBUS_0B                                      	(AR_SBUS_BASE+0x000000000bull)
#define AR_SERDES_SBUS_0B_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_0B_LIMIT                                	AR_SERDES_SBUS_0B+AR_SERDES_SBUS_0B_SIZE-1
#define AR_SERDES_SBUS_3C                                      	(AR_SBUS_BASE+0x000000003cull)
#define AR_SERDES_SBUS_3C_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_3C_LIMIT                                	AR_SERDES_SBUS_3C+AR_SERDES_SBUS_3C_SIZE-1
#define AR_SERDES_SBUS_3D                                      	(AR_SBUS_BASE+0x000000003dull)
#define AR_SERDES_SBUS_3D_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_3D_LIMIT                                	AR_SERDES_SBUS_3D+AR_SERDES_SBUS_3D_SIZE-1
#define AR_SERDES_SBUS_3E                                      	(AR_SBUS_BASE+0x000000003eull)
#define AR_SERDES_SBUS_3E_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_3E_LIMIT                                	AR_SERDES_SBUS_3E+AR_SERDES_SBUS_3E_SIZE-1
#define AR_SERDES_SBUS_3F                                      	(AR_SBUS_BASE+0x000000003full)
#define AR_SERDES_SBUS_3F_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_3F_LIMIT                                	AR_SERDES_SBUS_3F+AR_SERDES_SBUS_3F_SIZE-1
#define AR_SERDES_SBUS_40                                      	(AR_SBUS_BASE+0x0000000040ull)
#define AR_SERDES_SBUS_40_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_40_LIMIT                                	AR_SERDES_SBUS_40+AR_SERDES_SBUS_40_SIZE-1
#define AR_SERDES_SBUS_41                                      	(AR_SBUS_BASE+0x0000000041ull)
#define AR_SERDES_SBUS_41_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_41_LIMIT                                	AR_SERDES_SBUS_41+AR_SERDES_SBUS_41_SIZE-1
#define AR_SERDES_SBUS_50                                      	(AR_SBUS_BASE+0x0000000050ull)
#define AR_SERDES_SBUS_50_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_50_LIMIT                                	AR_SERDES_SBUS_50+AR_SERDES_SBUS_50_SIZE-1
#define AR_SERDES_SBUS_51                                      	(AR_SBUS_BASE+0x0000000051ull)
#define AR_SERDES_SBUS_51_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_51_LIMIT                                	AR_SERDES_SBUS_51+AR_SERDES_SBUS_51_SIZE-1
#define AR_SERDES_SBUS_52                                      	(AR_SBUS_BASE+0x0000000052ull)
#define AR_SERDES_SBUS_52_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_52_LIMIT                                	AR_SERDES_SBUS_52+AR_SERDES_SBUS_52_SIZE-1
#define AR_SERDES_SBUS_53                                      	(AR_SBUS_BASE+0x0000000053ull)
#define AR_SERDES_SBUS_53_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_53_LIMIT                                	AR_SERDES_SBUS_53+AR_SERDES_SBUS_53_SIZE-1
#define AR_SERDES_SBUS_54                                      	(AR_SBUS_BASE+0x0000000054ull)
#define AR_SERDES_SBUS_54_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_54_LIMIT                                	AR_SERDES_SBUS_54+AR_SERDES_SBUS_54_SIZE-1
#define AR_SERDES_SBUS_55                                      	(AR_SBUS_BASE+0x0000000055ull)
#define AR_SERDES_SBUS_55_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_55_LIMIT                                	AR_SERDES_SBUS_55+AR_SERDES_SBUS_55_SIZE-1
#define AR_SERDES_SBUS_56                                      	(AR_SBUS_BASE+0x0000000056ull)
#define AR_SERDES_SBUS_56_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_56_LIMIT                                	AR_SERDES_SBUS_56+AR_SERDES_SBUS_56_SIZE-1
#define AR_SERDES_SBUS_57                                      	(AR_SBUS_BASE+0x0000000057ull)
#define AR_SERDES_SBUS_57_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_57_LIMIT                                	AR_SERDES_SBUS_57+AR_SERDES_SBUS_57_SIZE-1
#define AR_SERDES_SBUS_58                                      	(AR_SBUS_BASE+0x0000000058ull)
#define AR_SERDES_SBUS_58_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_58_LIMIT                                	AR_SERDES_SBUS_58+AR_SERDES_SBUS_58_SIZE-1
#define AR_SERDES_SBUS_59                                      	(AR_SBUS_BASE+0x0000000059ull)
#define AR_SERDES_SBUS_59_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_59_LIMIT                                	AR_SERDES_SBUS_59+AR_SERDES_SBUS_59_SIZE-1
#define AR_SERDES_SBUS_5A                                      	(AR_SBUS_BASE+0x000000005aull)
#define AR_SERDES_SBUS_5A_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_5A_LIMIT                                	AR_SERDES_SBUS_5A+AR_SERDES_SBUS_5A_SIZE-1
#define AR_SERDES_SBUS_5B                                      	(AR_SBUS_BASE+0x000000005bull)
#define AR_SERDES_SBUS_5B_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_5B_LIMIT                                	AR_SERDES_SBUS_5B+AR_SERDES_SBUS_5B_SIZE-1
#define AR_SERDES_SBUS_64                                      	(AR_SBUS_BASE+0x0000000064ull)
#define AR_SERDES_SBUS_64_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_64_LIMIT                                	AR_SERDES_SBUS_64+AR_SERDES_SBUS_64_SIZE-1
#define AR_SERDES_SBUS_65                                      	(AR_SBUS_BASE+0x0000000065ull)
#define AR_SERDES_SBUS_65_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_65_LIMIT                                	AR_SERDES_SBUS_65+AR_SERDES_SBUS_65_SIZE-1
#define AR_SERDES_SBUS_67                                      	(AR_SBUS_BASE+0x0000000067ull)
#define AR_SERDES_SBUS_67_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_67_LIMIT                                	AR_SERDES_SBUS_67+AR_SERDES_SBUS_67_SIZE-1
#define AR_SERDES_SBUS_68                                      	(AR_SBUS_BASE+0x0000000068ull)
#define AR_SERDES_SBUS_68_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_68_LIMIT                                	AR_SERDES_SBUS_68+AR_SERDES_SBUS_68_SIZE-1
#define AR_SERDES_SBUS_69                                      	(AR_SBUS_BASE+0x0000000069ull)
#define AR_SERDES_SBUS_69_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_69_LIMIT                                	AR_SERDES_SBUS_69+AR_SERDES_SBUS_69_SIZE-1
#define AR_SERDES_SBUS_6A                                      	(AR_SBUS_BASE+0x000000006aull)
#define AR_SERDES_SBUS_6A_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_6A_LIMIT                                	AR_SERDES_SBUS_6A+AR_SERDES_SBUS_6A_SIZE-1
#define AR_SERDES_SBUS_6B                                      	(AR_SBUS_BASE+0x000000006bull)
#define AR_SERDES_SBUS_6B_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_6B_LIMIT                                	AR_SERDES_SBUS_6B+AR_SERDES_SBUS_6B_SIZE-1
#define AR_SERDES_SBUS_81                                      	(AR_SBUS_BASE+0x0000000081ull)
#define AR_SERDES_SBUS_81_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_81_LIMIT                                	AR_SERDES_SBUS_81+AR_SERDES_SBUS_81_SIZE-1
#define AR_SERDES_SBUS_82                                      	(AR_SBUS_BASE+0x0000000082ull)
#define AR_SERDES_SBUS_82_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_82_LIMIT                                	AR_SERDES_SBUS_82+AR_SERDES_SBUS_82_SIZE-1
#define AR_SERDES_SBUS_8C                                      	(AR_SBUS_BASE+0x000000008cull)
#define AR_SERDES_SBUS_8C_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_8C_LIMIT                                	AR_SERDES_SBUS_8C+AR_SERDES_SBUS_8C_SIZE-1
#define AR_SERDES_SBUS_8E                                      	(AR_SBUS_BASE+0x000000008eull)
#define AR_SERDES_SBUS_8E_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_8E_LIMIT                                	AR_SERDES_SBUS_8E+AR_SERDES_SBUS_8E_SIZE-1
#define AR_SERDES_SBUS_8F                                      	(AR_SBUS_BASE+0x000000008full)
#define AR_SERDES_SBUS_8F_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_8F_LIMIT                                	AR_SERDES_SBUS_8F+AR_SERDES_SBUS_8F_SIZE-1
#define AR_SERDES_SBUS_90                                      	(AR_SBUS_BASE+0x0000000090ull)
#define AR_SERDES_SBUS_90_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_90_LIMIT                                	AR_SERDES_SBUS_90+AR_SERDES_SBUS_90_SIZE-1
#define AR_SERDES_SBUS_92                                      	(AR_SBUS_BASE+0x0000000092ull)
#define AR_SERDES_SBUS_92_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_92_LIMIT                                	AR_SERDES_SBUS_92+AR_SERDES_SBUS_92_SIZE-1
#define AR_SERDES_SBUS_93                                      	(AR_SBUS_BASE+0x0000000093ull)
#define AR_SERDES_SBUS_93_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_93_LIMIT                                	AR_SERDES_SBUS_93+AR_SERDES_SBUS_93_SIZE-1
#define AR_SERDES_SBUS_95                                      	(AR_SBUS_BASE+0x0000000095ull)
#define AR_SERDES_SBUS_95_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_95_LIMIT                                	AR_SERDES_SBUS_95+AR_SERDES_SBUS_95_SIZE-1
#define AR_SERDES_SBUS_AD                                      	(AR_SBUS_BASE+0x00000000adull)
#define AR_SERDES_SBUS_AD_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_AD_LIMIT                                	AR_SERDES_SBUS_AD+AR_SERDES_SBUS_AD_SIZE-1
#define AR_SERDES_SBUS_AE                                      	(AR_SBUS_BASE+0x00000000aeull)
#define AR_SERDES_SBUS_AE_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_AE_LIMIT                                	AR_SERDES_SBUS_AE+AR_SERDES_SBUS_AE_SIZE-1
#define AR_SERDES_SBUS_AF                                      	(AR_SBUS_BASE+0x00000000afull)
#define AR_SERDES_SBUS_AF_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_AF_LIMIT                                	AR_SERDES_SBUS_AF+AR_SERDES_SBUS_AF_SIZE-1
#define AR_SERDES_SBUS_B3                                      	(AR_SBUS_BASE+0x00000000b3ull)
#define AR_SERDES_SBUS_B3_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_B3_LIMIT                                	AR_SERDES_SBUS_B3+AR_SERDES_SBUS_B3_SIZE-1
#define AR_SERDES_SBUS_FC                                      	(AR_SBUS_BASE+0x00000000fcull)
#define AR_SERDES_SBUS_FC_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_FC_LIMIT                                	AR_SERDES_SBUS_FC+AR_SERDES_SBUS_FC_SIZE-1
#define AR_SERDES_SBUS_FD                                      	(AR_SBUS_BASE+0x00000000fdull)
#define AR_SERDES_SBUS_FD_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_FD_LIMIT                                	AR_SERDES_SBUS_FD+AR_SERDES_SBUS_FD_SIZE-1
#define AR_SERDES_SBUS_FE                                      	(AR_SBUS_BASE+0x00000000feull)
#define AR_SERDES_SBUS_FE_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_FE_LIMIT                                	AR_SERDES_SBUS_FE+AR_SERDES_SBUS_FE_SIZE-1
#define AR_SERDES_SBUS_FF                                      	(AR_SBUS_BASE+0x00000000ffull)
#define AR_SERDES_SBUS_FF_SIZE                                 	0x0000000008ull
#define AR_SERDES_SBUS_FF_LIMIT                                	AR_SERDES_SBUS_FF+AR_SERDES_SBUS_FF_SIZE-1
#define AR_SERDES_PMRO_CTRL                                    	(AR_SBUS_BASE+0x000000f500ull)
#define AR_SERDES_PMRO_CTRL_SIZE                               	0x0000000008ull
#define AR_SERDES_PMRO_CTRL_LIMIT                              	AR_SERDES_PMRO_CTRL+AR_SERDES_PMRO_CTRL_SIZE-1
#define AR_SERDES_PMRO_STD_VT_CONFIG                           	(AR_SBUS_BASE+0x000000f501ull)
#define AR_SERDES_PMRO_STD_VT_CONFIG_SIZE                      	0x0000000008ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_LIMIT                     	AR_SERDES_PMRO_STD_VT_CONFIG+AR_SERDES_PMRO_STD_VT_CONFIG_SIZE-1
#define AR_SERDES_PMRO_HI_VT_CONFIG                            	(AR_SBUS_BASE+0x000000f502ull)
#define AR_SERDES_PMRO_HI_VT_CONFIG_SIZE                       	0x0000000008ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_LIMIT                      	AR_SERDES_PMRO_HI_VT_CONFIG+AR_SERDES_PMRO_HI_VT_CONFIG_SIZE-1
#define AR_SERDES_PMRO_LO_VT_CONFIG                            	(AR_SBUS_BASE+0x000000f503ull)
#define AR_SERDES_PMRO_LO_VT_CONFIG_SIZE                       	0x0000000008ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_LIMIT                      	AR_SERDES_PMRO_LO_VT_CONFIG+AR_SERDES_PMRO_LO_VT_CONFIG_SIZE-1
#define AR_SERDES_PMRO_REF_CLK_CNTR                            	(AR_SBUS_BASE+0x000000f504ull)
#define AR_SERDES_PMRO_REF_CLK_CNTR_SIZE                       	0x0000000008ull
#define AR_SERDES_PMRO_REF_CLK_CNTR_LIMIT                      	AR_SERDES_PMRO_REF_CLK_CNTR+AR_SERDES_PMRO_REF_CLK_CNTR_SIZE-1
#define AR_SERDES_PMRO_OSC_CNTR                                	(AR_SBUS_BASE+0x000000f505ull)
#define AR_SERDES_PMRO_OSC_CNTR_SIZE                           	0x0000000008ull
#define AR_SERDES_PMRO_OSC_CNTR_LIMIT                          	AR_SERDES_PMRO_OSC_CNTR+AR_SERDES_PMRO_OSC_CNTR_SIZE-1
#define AR_SERDES_PMRO_UNIMPLEMENTED                           	(AR_SBUS_BASE+0x000000f506ull)
#define AR_SERDES_PMRO_UNIMPLEMENTED_SIZE                      	0x0000000008ull
#define AR_SERDES_PMRO_UNIMPLEMENTED_LIMIT                     	AR_SERDES_PMRO_UNIMPLEMENTED+AR_SERDES_PMRO_UNIMPLEMENTED_SIZE-1
#define AR_SERDES_PMRO_SBUS_ID                                 	(AR_SBUS_BASE+0x000000f507ull)
#define AR_SERDES_PMRO_SBUS_ID_SIZE                            	0x0000000008ull
#define AR_SERDES_PMRO_SBUS_ID_LIMIT                           	AR_SERDES_PMRO_SBUS_ID+AR_SERDES_PMRO_SBUS_ID_SIZE-1
#define AR_SERDES_SBUS_CTRL_00                                 	(AR_SBUS_BASE+0x000000fe00ull)
#define AR_SERDES_SBUS_CTRL_00_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_00_LIMIT                           	AR_SERDES_SBUS_CTRL_00+AR_SERDES_SBUS_CTRL_00_SIZE-1
#define AR_SERDES_SBUS_CTRL_01                                 	(AR_SBUS_BASE+0x000000fe01ull)
#define AR_SERDES_SBUS_CTRL_01_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_01_LIMIT                           	AR_SERDES_SBUS_CTRL_01+AR_SERDES_SBUS_CTRL_01_SIZE-1
#define AR_SERDES_SBUS_CTRL_02                                 	(AR_SBUS_BASE+0x000000fe02ull)
#define AR_SERDES_SBUS_CTRL_02_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_02_LIMIT                           	AR_SERDES_SBUS_CTRL_02+AR_SERDES_SBUS_CTRL_02_SIZE-1
#define AR_SERDES_SBUS_CTRL_0A                                 	(AR_SBUS_BASE+0x000000fe0aull)
#define AR_SERDES_SBUS_CTRL_0A_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_0A_LIMIT                           	AR_SERDES_SBUS_CTRL_0A+AR_SERDES_SBUS_CTRL_0A_SIZE-1
#define AR_SERDES_SBUS_CTRL_0B                                 	(AR_SBUS_BASE+0x000000fe0bull)
#define AR_SERDES_SBUS_CTRL_0B_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_0B_LIMIT                           	AR_SERDES_SBUS_CTRL_0B+AR_SERDES_SBUS_CTRL_0B_SIZE-1
#define AR_SERDES_SBUS_CTRL_0C                                 	(AR_SBUS_BASE+0x000000fe0cull)
#define AR_SERDES_SBUS_CTRL_0C_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_0C_LIMIT                           	AR_SERDES_SBUS_CTRL_0C+AR_SERDES_SBUS_CTRL_0C_SIZE-1
#define AR_SERDES_SBUS_CTRL_0D                                 	(AR_SBUS_BASE+0x000000fe0dull)
#define AR_SERDES_SBUS_CTRL_0D_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_0D_LIMIT                           	AR_SERDES_SBUS_CTRL_0D+AR_SERDES_SBUS_CTRL_0D_SIZE-1
#define AR_SERDES_SBUS_CTRL_10                                 	(AR_SBUS_BASE+0x000000fe10ull)
#define AR_SERDES_SBUS_CTRL_10_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_10_LIMIT                           	AR_SERDES_SBUS_CTRL_10+AR_SERDES_SBUS_CTRL_10_SIZE-1
#define AR_SERDES_SBUS_CTRL_11                                 	(AR_SBUS_BASE+0x000000fe11ull)
#define AR_SERDES_SBUS_CTRL_11_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_11_LIMIT                           	AR_SERDES_SBUS_CTRL_11+AR_SERDES_SBUS_CTRL_11_SIZE-1
#define AR_SERDES_SBUS_CTRL_12                                 	(AR_SBUS_BASE+0x000000fe12ull)
#define AR_SERDES_SBUS_CTRL_12_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_12_LIMIT                           	AR_SERDES_SBUS_CTRL_12+AR_SERDES_SBUS_CTRL_12_SIZE-1
#define AR_SERDES_SBUS_CTRL_13                                 	(AR_SBUS_BASE+0x000000fe13ull)
#define AR_SERDES_SBUS_CTRL_13_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_13_LIMIT                           	AR_SERDES_SBUS_CTRL_13+AR_SERDES_SBUS_CTRL_13_SIZE-1
#define AR_SERDES_SBUS_CTRL_14                                 	(AR_SBUS_BASE+0x000000fe14ull)
#define AR_SERDES_SBUS_CTRL_14_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_14_LIMIT                           	AR_SERDES_SBUS_CTRL_14+AR_SERDES_SBUS_CTRL_14_SIZE-1
#define AR_SERDES_SBUS_CTRL_15                                 	(AR_SBUS_BASE+0x000000fe15ull)
#define AR_SERDES_SBUS_CTRL_15_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_15_LIMIT                           	AR_SERDES_SBUS_CTRL_15+AR_SERDES_SBUS_CTRL_15_SIZE-1
#define AR_SERDES_SBUS_CTRL_16                                 	(AR_SBUS_BASE+0x000000fe16ull)
#define AR_SERDES_SBUS_CTRL_16_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_16_LIMIT                           	AR_SERDES_SBUS_CTRL_16+AR_SERDES_SBUS_CTRL_16_SIZE-1
#define AR_SERDES_SBUS_CTRL_20                                 	(AR_SBUS_BASE+0x000000fe20ull)
#define AR_SERDES_SBUS_CTRL_20_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_20_LIMIT                           	AR_SERDES_SBUS_CTRL_20+AR_SERDES_SBUS_CTRL_20_SIZE-1
#define AR_SERDES_SBUS_CTRL_80                                 	(AR_SBUS_BASE+0x000000fe80ull)
#define AR_SERDES_SBUS_CTRL_80_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_80_LIMIT                           	AR_SERDES_SBUS_CTRL_80+AR_SERDES_SBUS_CTRL_80_SIZE-1
#define AR_SERDES_SBUS_CTRL_81                                 	(AR_SBUS_BASE+0x000000fe81ull)
#define AR_SERDES_SBUS_CTRL_81_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_81_LIMIT                           	AR_SERDES_SBUS_CTRL_81+AR_SERDES_SBUS_CTRL_81_SIZE-1
#define AR_SERDES_SBUS_CTRL_82                                 	(AR_SBUS_BASE+0x000000fe82ull)
#define AR_SERDES_SBUS_CTRL_82_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_82_LIMIT                           	AR_SERDES_SBUS_CTRL_82+AR_SERDES_SBUS_CTRL_82_SIZE-1
#define AR_SERDES_SBUS_CTRL_83                                 	(AR_SBUS_BASE+0x000000fe83ull)
#define AR_SERDES_SBUS_CTRL_83_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_83_LIMIT                           	AR_SERDES_SBUS_CTRL_83+AR_SERDES_SBUS_CTRL_83_SIZE-1
#define AR_SERDES_SBUS_CTRL_84                                 	(AR_SBUS_BASE+0x000000fe84ull)
#define AR_SERDES_SBUS_CTRL_84_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_84_LIMIT                           	AR_SERDES_SBUS_CTRL_84+AR_SERDES_SBUS_CTRL_84_SIZE-1
#define AR_SERDES_SBUS_CTRL_85                                 	(AR_SBUS_BASE+0x000000fe85ull)
#define AR_SERDES_SBUS_CTRL_85_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_85_LIMIT                           	AR_SERDES_SBUS_CTRL_85+AR_SERDES_SBUS_CTRL_85_SIZE-1
#define AR_SERDES_SBUS_CTRL_86                                 	(AR_SBUS_BASE+0x000000fe86ull)
#define AR_SERDES_SBUS_CTRL_86_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_86_LIMIT                           	AR_SERDES_SBUS_CTRL_86+AR_SERDES_SBUS_CTRL_86_SIZE-1
#define AR_SERDES_SBUS_CTRL_87                                 	(AR_SBUS_BASE+0x000000fe87ull)
#define AR_SERDES_SBUS_CTRL_87_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_87_LIMIT                           	AR_SERDES_SBUS_CTRL_87+AR_SERDES_SBUS_CTRL_87_SIZE-1
#define AR_SERDES_SBUS_CTRL_88                                 	(AR_SBUS_BASE+0x000000fe88ull)
#define AR_SERDES_SBUS_CTRL_88_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_88_LIMIT                           	AR_SERDES_SBUS_CTRL_88+AR_SERDES_SBUS_CTRL_88_SIZE-1
#define AR_SERDES_SBUS_CTRL_89                                 	(AR_SBUS_BASE+0x000000fe89ull)
#define AR_SERDES_SBUS_CTRL_89_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_89_LIMIT                           	AR_SERDES_SBUS_CTRL_89+AR_SERDES_SBUS_CTRL_89_SIZE-1
#define AR_SERDES_SBUS_CTRL_FE                                 	(AR_SBUS_BASE+0x000000fefeull)
#define AR_SERDES_SBUS_CTRL_FE_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_FE_LIMIT                           	AR_SERDES_SBUS_CTRL_FE+AR_SERDES_SBUS_CTRL_FE_SIZE-1
#define AR_SERDES_SBUS_CTRL_FF                                 	(AR_SBUS_BASE+0x000000feffull)
#define AR_SERDES_SBUS_CTRL_FF_SIZE                            	0x0000000008ull
#define AR_SERDES_SBUS_CTRL_FF_LIMIT                           	AR_SERDES_SBUS_CTRL_FF+AR_SERDES_SBUS_CTRL_FF_SIZE-1

/*
 *  AR_SERDES_SBUS_00 DEFINES
 */
#define AR_SERDES_SBUS_00_RESERVED_31_15_MASK                           	0x00000000ffff8000ull
#define AR_SERDES_SBUS_00_TX_PHASE_SLIP_CNTL_MASK                       	0x0000000000004000ull
#define AR_SERDES_SBUS_00_TX_PHASE_CAL_EN_CNTL_MASK                     	0x0000000000002000ull
#define AR_SERDES_SBUS_00_TX_PHASE_MASTER_CNTL_MASK                     	0x0000000000001000ull
#define AR_SERDES_SBUS_00_REF_SEL_CNTL_MASK                             	0x0000000000000ff0ull
#define AR_SERDES_SBUS_00_PLL_RECAL_EN_CNTL_MASK                        	0x0000000000000008ull
#define AR_SERDES_SBUS_00_RX_EN_CNTL_MASK                               	0x0000000000000004ull
#define AR_SERDES_SBUS_00_TX_EN_CNTL_MASK                               	0x0000000000000002ull
#define AR_SERDES_SBUS_00_SBUS_CLK_GATE_MASK                            	0x0000000000000001ull
#define AR_SERDES_SBUS_00_RESERVED_31_15_BP                             	15
#define AR_SERDES_SBUS_00_TX_PHASE_SLIP_CNTL_BP                         	14
#define AR_SERDES_SBUS_00_TX_PHASE_CAL_EN_CNTL_BP                       	13
#define AR_SERDES_SBUS_00_TX_PHASE_MASTER_CNTL_BP                       	12
#define AR_SERDES_SBUS_00_REF_SEL_CNTL_BP                               	4
#define AR_SERDES_SBUS_00_PLL_RECAL_EN_CNTL_BP                          	3
#define AR_SERDES_SBUS_00_RX_EN_CNTL_BP                                 	2
#define AR_SERDES_SBUS_00_TX_EN_CNTL_BP                                 	1
#define AR_SERDES_SBUS_00_SBUS_CLK_GATE_BP                              	0
#define AR_SERDES_SBUS_00_RESERVED_31_15_QW                             	0
#define AR_SERDES_SBUS_00_TX_PHASE_SLIP_CNTL_QW                         	0
#define AR_SERDES_SBUS_00_TX_PHASE_CAL_EN_CNTL_QW                       	0
#define AR_SERDES_SBUS_00_TX_PHASE_MASTER_CNTL_QW                       	0
#define AR_SERDES_SBUS_00_REF_SEL_CNTL_QW                               	0
#define AR_SERDES_SBUS_00_PLL_RECAL_EN_CNTL_QW                          	0
#define AR_SERDES_SBUS_00_RX_EN_CNTL_QW                                 	0
#define AR_SERDES_SBUS_00_TX_EN_CNTL_QW                                 	0
#define AR_SERDES_SBUS_00_SBUS_CLK_GATE_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_01 DEFINES
 */
#define AR_SERDES_SBUS_01_RESERVED_31_25_MASK                           	0x00000000fe000000ull
#define AR_SERDES_SBUS_01_RX_RATE_SEL_CNTL_MASK                         	0x0000000001ff0000ull
#define AR_SERDES_SBUS_01_RESERVED_15_9_MASK                            	0x000000000000fe00ull
#define AR_SERDES_SBUS_01_TX_RATE_SEL_CNTL_MASK                         	0x00000000000001ffull
#define AR_SERDES_SBUS_01_RESERVED_31_25_BP                             	25
#define AR_SERDES_SBUS_01_RX_RATE_SEL_CNTL_BP                           	16
#define AR_SERDES_SBUS_01_RESERVED_15_9_BP                              	9
#define AR_SERDES_SBUS_01_TX_RATE_SEL_CNTL_BP                           	0
#define AR_SERDES_SBUS_01_RESERVED_31_25_QW                             	0
#define AR_SERDES_SBUS_01_RX_RATE_SEL_CNTL_QW                           	0
#define AR_SERDES_SBUS_01_RESERVED_15_9_QW                              	0
#define AR_SERDES_SBUS_01_TX_RATE_SEL_CNTL_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_02 DEFINES
 */
#define AR_SERDES_SBUS_02_RESERVED_31_3_MASK                            	0x00000000fffffff8ull
#define AR_SERDES_SBUS_02_RX_RDY_OBS_MASK                               	0x0000000000000004ull
#define AR_SERDES_SBUS_02_TX_RDY_OBS_MASK                               	0x0000000000000002ull
#define AR_SERDES_SBUS_02_RESERVED_0_MASK                               	0x0000000000000001ull
#define AR_SERDES_SBUS_02_RESERVED_31_3_BP                              	3
#define AR_SERDES_SBUS_02_RX_RDY_OBS_BP                                 	2
#define AR_SERDES_SBUS_02_TX_RDY_OBS_BP                                 	1
#define AR_SERDES_SBUS_02_RESERVED_0_BP                                 	0
#define AR_SERDES_SBUS_02_RESERVED_31_3_QW                              	0
#define AR_SERDES_SBUS_02_RX_RDY_OBS_QW                                 	0
#define AR_SERDES_SBUS_02_TX_RDY_OBS_QW                                 	0
#define AR_SERDES_SBUS_02_RESERVED_0_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_03 DEFINES
 */
#define AR_SERDES_SBUS_03_RESERVED_31_4_MASK                            	0x00000000fffffff0ull
#define AR_SERDES_SBUS_03_RX_WIDTH_MODE_CNTL_MASK                       	0x000000000000000cull
#define AR_SERDES_SBUS_03_TX_WIDTH_MODE_CNTL_MASK                       	0x0000000000000003ull
#define AR_SERDES_SBUS_03_RESERVED_31_4_BP                              	4
#define AR_SERDES_SBUS_03_RX_WIDTH_MODE_CNTL_BP                         	2
#define AR_SERDES_SBUS_03_TX_WIDTH_MODE_CNTL_BP                         	0
#define AR_SERDES_SBUS_03_RESERVED_31_4_QW                              	0
#define AR_SERDES_SBUS_03_RX_WIDTH_MODE_CNTL_QW                         	0
#define AR_SERDES_SBUS_03_TX_WIDTH_MODE_CNTL_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_05 DEFINES
 */
#define AR_SERDES_SBUS_05_RESERVED_31_8_MASK                            	0x00000000ffffff00ull
#define AR_SERDES_SBUS_05_TX_PHASE_OUT_OBS_MASK                         	0x00000000000000f8ull
#define AR_SERDES_SBUS_05_RESERVED_2_0_MASK                             	0x0000000000000007ull
#define AR_SERDES_SBUS_05_RESERVED_31_8_BP                              	8
#define AR_SERDES_SBUS_05_TX_PHASE_OUT_OBS_BP                           	3
#define AR_SERDES_SBUS_05_RESERVED_2_0_BP                               	0
#define AR_SERDES_SBUS_05_RESERVED_31_8_QW                              	0
#define AR_SERDES_SBUS_05_TX_PHASE_OUT_OBS_QW                           	0
#define AR_SERDES_SBUS_05_RESERVED_2_0_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_06 DEFINES
 */
#define AR_SERDES_SBUS_06_RESERVED_31_6_MASK                            	0x00000000ffffffc0ull
#define AR_SERDES_SBUS_06_TX_PHASE_IN_CNTL_MASK                         	0x000000000000003eull
#define AR_SERDES_SBUS_06_TX_PHASE_IN_GATE_MASK                         	0x0000000000000001ull
#define AR_SERDES_SBUS_06_RESERVED_31_6_BP                              	6
#define AR_SERDES_SBUS_06_TX_PHASE_IN_CNTL_BP                           	1
#define AR_SERDES_SBUS_06_TX_PHASE_IN_GATE_BP                           	0
#define AR_SERDES_SBUS_06_RESERVED_31_6_QW                              	0
#define AR_SERDES_SBUS_06_TX_PHASE_IN_CNTL_QW                           	0
#define AR_SERDES_SBUS_06_TX_PHASE_IN_GATE_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_07 DEFINES
 */
#define AR_SERDES_SBUS_07_RESERVED_31_13_MASK                           	0x00000000ffffe000ull
#define AR_SERDES_SBUS_07_HALT_CNTL_MASK                                	0x0000000000001fe0ull
#define AR_SERDES_SBUS_07_ALLOW_CORE_HALT_CNTL_MASK                     	0x0000000000000010ull
#define AR_SERDES_SBUS_07_RESERVED_3_0_MASK                             	0x000000000000000full
#define AR_SERDES_SBUS_07_RESERVED_31_13_BP                             	13
#define AR_SERDES_SBUS_07_HALT_CNTL_BP                                  	5
#define AR_SERDES_SBUS_07_ALLOW_CORE_HALT_CNTL_BP                       	4
#define AR_SERDES_SBUS_07_RESERVED_3_0_BP                               	0
#define AR_SERDES_SBUS_07_RESERVED_31_13_QW                             	0
#define AR_SERDES_SBUS_07_HALT_CNTL_QW                                  	0
#define AR_SERDES_SBUS_07_ALLOW_CORE_HALT_CNTL_QW                       	0
#define AR_SERDES_SBUS_07_RESERVED_3_0_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_0B DEFINES
 */
#define AR_SERDES_SBUS_0B_RESERVED_31_3_MASK                            	0x00000000fffffff8ull
#define AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_CTRL_MASK                      	0x0000000000000004ull
#define AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_GATE_MASK                      	0x0000000000000002ull
#define AR_SERDES_SBUS_0B_RESERVED_0_MASK                               	0x0000000000000001ull
#define AR_SERDES_SBUS_0B_RESERVED_31_3_BP                              	3
#define AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_CTRL_BP                        	2
#define AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_GATE_BP                        	1
#define AR_SERDES_SBUS_0B_RESERVED_0_BP                                 	0
#define AR_SERDES_SBUS_0B_RESERVED_31_3_QW                              	0
#define AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_CTRL_QW                        	0
#define AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_GATE_QW                        	0
#define AR_SERDES_SBUS_0B_RESERVED_0_QW                                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_3C DEFINES
 */
#define AR_SERDES_SBUS_3C_RESERVED_31_13_MASK                           	0x00000000ffffe000ull
#define AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_POST_CNTL_MASK                   	0x0000000000001fe0ull
#define AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_PRE_CNTL_MASK                    	0x000000000000001eull
#define AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_GATE_MASK                        	0x0000000000000001ull
#define AR_SERDES_SBUS_3C_RESERVED_31_13_BP                             	13
#define AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_POST_CNTL_BP                     	5
#define AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_PRE_CNTL_BP                      	1
#define AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_GATE_BP                          	0
#define AR_SERDES_SBUS_3C_RESERVED_31_13_QW                             	0
#define AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_POST_CNTL_QW                     	0
#define AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_PRE_CNTL_QW                      	0
#define AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_GATE_QW                          	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_3D DEFINES
 */
#define AR_SERDES_SBUS_3D_RESERVED_31_15_MASK                           	0x00000000ffff8000ull
#define AR_SERDES_SBUS_3D_TX_IMPEDANCE_GATE_MASK                        	0x0000000000004000ull
#define AR_SERDES_SBUS_3D_TX_IMPEDANCE_CNTL_MASK                        	0x0000000000003000ull
#define AR_SERDES_SBUS_3D_TX_OUTPUT_ATTENUATION_CNTL_MASK               	0x0000000000000ff0ull
#define AR_SERDES_SBUS_3D_TX_LND_DISABLE_CNTL_MASK                      	0x0000000000000008ull
#define AR_SERDES_SBUS_3D_TX_OUTPUT_SLEW_CNTL_MASK                      	0x0000000000000006ull
#define AR_SERDES_SBUS_3D_TX_ATTENUATION_GATE_MASK                      	0x0000000000000001ull
#define AR_SERDES_SBUS_3D_RESERVED_31_15_BP                             	15
#define AR_SERDES_SBUS_3D_TX_IMPEDANCE_GATE_BP                          	14
#define AR_SERDES_SBUS_3D_TX_IMPEDANCE_CNTL_BP                          	12
#define AR_SERDES_SBUS_3D_TX_OUTPUT_ATTENUATION_CNTL_BP                 	4
#define AR_SERDES_SBUS_3D_TX_LND_DISABLE_CNTL_BP                        	3
#define AR_SERDES_SBUS_3D_TX_OUTPUT_SLEW_CNTL_BP                        	1
#define AR_SERDES_SBUS_3D_TX_ATTENUATION_GATE_BP                        	0
#define AR_SERDES_SBUS_3D_RESERVED_31_15_QW                             	0
#define AR_SERDES_SBUS_3D_TX_IMPEDANCE_GATE_QW                          	0
#define AR_SERDES_SBUS_3D_TX_IMPEDANCE_CNTL_QW                          	0
#define AR_SERDES_SBUS_3D_TX_OUTPUT_ATTENUATION_CNTL_QW                 	0
#define AR_SERDES_SBUS_3D_TX_LND_DISABLE_CNTL_QW                        	0
#define AR_SERDES_SBUS_3D_TX_OUTPUT_SLEW_CNTL_QW                        	0
#define AR_SERDES_SBUS_3D_TX_ATTENUATION_GATE_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_3E DEFINES
 */
#define AR_SERDES_SBUS_3E_RESERVED_31_3_MASK                            	0x00000000fffffff8ull
#define AR_SERDES_SBUS_3E_NEAR_LOOPBACK_EN_CNTL_MASK                    	0x0000000000000004ull
#define AR_SERDES_SBUS_3E_TX_OUTPUT_EN_CNTL_MASK                        	0x0000000000000002ull
#define AR_SERDES_SBUS_3E_TX_OUTPUT_GATE_MASK                           	0x0000000000000001ull
#define AR_SERDES_SBUS_3E_RESERVED_31_3_BP                              	3
#define AR_SERDES_SBUS_3E_NEAR_LOOPBACK_EN_CNTL_BP                      	2
#define AR_SERDES_SBUS_3E_TX_OUTPUT_EN_CNTL_BP                          	1
#define AR_SERDES_SBUS_3E_TX_OUTPUT_GATE_BP                             	0
#define AR_SERDES_SBUS_3E_RESERVED_31_3_QW                              	0
#define AR_SERDES_SBUS_3E_NEAR_LOOPBACK_EN_CNTL_QW                      	0
#define AR_SERDES_SBUS_3E_TX_OUTPUT_EN_CNTL_QW                          	0
#define AR_SERDES_SBUS_3E_TX_OUTPUT_GATE_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_3F DEFINES
 */
#define AR_SERDES_SBUS_3F_RESERVED_31_13_MASK                           	0x00000000ffffe000ull
#define AR_SERDES_SBUS_3F_TX_ALT_PATTERN_EN_CNTL_MASK                   	0x0000000000001000ull
#define AR_SERDES_SBUS_3F_TX_ELEC_IDLE_CNTL_MASK                        	0x0000000000000800ull
#define AR_SERDES_SBUS_3F_TX_POLARITY_INV_EN_CNTL_MASK                  	0x0000000000000400ull
#define AR_SERDES_SBUS_3F_TX_INVERT_ONE_WORD_CNTL_MASK                  	0x0000000000000200ull
#define AR_SERDES_SBUS_3F_TX_SEL_CORE_DATA_CNTL_MASK                    	0x0000000000000100ull
#define AR_SERDES_SBUS_3F_TX_PATTERN_GEN_EN_CNTL_MASK                   	0x0000000000000080ull
#define AR_SERDES_SBUS_3F_TX_PATTERN_GEN_SEL_CNTL_MASK                  	0x0000000000000070ull
#define AR_SERDES_SBUS_3F_TX_PATTERN_GEN_CTL_CNTL_MASK                  	0x0000000000000008ull
#define AR_SERDES_SBUS_3F_TX_DATA_SEL_CNTL_MASK                         	0x0000000000000006ull
#define AR_SERDES_SBUS_3F_TX_DATA_GATE_MASK                             	0x0000000000000001ull
#define AR_SERDES_SBUS_3F_RESERVED_31_13_BP                             	13
#define AR_SERDES_SBUS_3F_TX_ALT_PATTERN_EN_CNTL_BP                     	12
#define AR_SERDES_SBUS_3F_TX_ELEC_IDLE_CNTL_BP                          	11
#define AR_SERDES_SBUS_3F_TX_POLARITY_INV_EN_CNTL_BP                    	10
#define AR_SERDES_SBUS_3F_TX_INVERT_ONE_WORD_CNTL_BP                    	9
#define AR_SERDES_SBUS_3F_TX_SEL_CORE_DATA_CNTL_BP                      	8
#define AR_SERDES_SBUS_3F_TX_PATTERN_GEN_EN_CNTL_BP                     	7
#define AR_SERDES_SBUS_3F_TX_PATTERN_GEN_SEL_CNTL_BP                    	4
#define AR_SERDES_SBUS_3F_TX_PATTERN_GEN_CTL_CNTL_BP                    	3
#define AR_SERDES_SBUS_3F_TX_DATA_SEL_CNTL_BP                           	1
#define AR_SERDES_SBUS_3F_TX_DATA_GATE_BP                               	0
#define AR_SERDES_SBUS_3F_RESERVED_31_13_QW                             	0
#define AR_SERDES_SBUS_3F_TX_ALT_PATTERN_EN_CNTL_QW                     	0
#define AR_SERDES_SBUS_3F_TX_ELEC_IDLE_CNTL_QW                          	0
#define AR_SERDES_SBUS_3F_TX_POLARITY_INV_EN_CNTL_QW                    	0
#define AR_SERDES_SBUS_3F_TX_INVERT_ONE_WORD_CNTL_QW                    	0
#define AR_SERDES_SBUS_3F_TX_SEL_CORE_DATA_CNTL_QW                      	0
#define AR_SERDES_SBUS_3F_TX_PATTERN_GEN_EN_CNTL_QW                     	0
#define AR_SERDES_SBUS_3F_TX_PATTERN_GEN_SEL_CNTL_QW                    	0
#define AR_SERDES_SBUS_3F_TX_PATTERN_GEN_CTL_CNTL_QW                    	0
#define AR_SERDES_SBUS_3F_TX_DATA_SEL_CNTL_QW                           	0
#define AR_SERDES_SBUS_3F_TX_DATA_GATE_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_40 DEFINES
 */
#define AR_SERDES_SBUS_40_RESERVED_31_20_MASK                           	0x00000000fff00000ull
#define AR_SERDES_SBUS_40_TX_USER_REG_CNTL_MASK                         	0x00000000000fffffull
#define AR_SERDES_SBUS_40_RESERVED_31_20_BP                             	20
#define AR_SERDES_SBUS_40_TX_USER_REG_CNTL_BP                           	0
#define AR_SERDES_SBUS_40_RESERVED_31_20_QW                             	0
#define AR_SERDES_SBUS_40_TX_USER_REG_CNTL_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_41 DEFINES
 */
#define AR_SERDES_SBUS_41_RESERVED_31_1_MASK                            	0x00000000fffffffeull
#define AR_SERDES_SBUS_41_RX_K30_7_ERR_EN_CNTL_MASK                     	0x0000000000000001ull
#define AR_SERDES_SBUS_41_RESERVED_31_1_BP                              	1
#define AR_SERDES_SBUS_41_RX_K30_7_ERR_EN_CNTL_BP                       	0
#define AR_SERDES_SBUS_41_RESERVED_31_1_QW                              	0
#define AR_SERDES_SBUS_41_RX_K30_7_ERR_EN_CNTL_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_50 DEFINES
 */
#define AR_SERDES_SBUS_50_RESERVED_31_21_MASK                           	0x00000000ffe00000ull
#define AR_SERDES_SBUS_50_RX_OFFSET_DATA_SEL_CNTL_MASK                  	0x0000000000100000ull
#define AR_SERDES_SBUS_50_RESERVED_19_18_MASK                           	0x00000000000c0000ull
#define AR_SERDES_SBUS_50_SIG_STRENGTH_STRONG_EN_CNTL_MASK              	0x0000000000020000ull
#define AR_SERDES_SBUS_50_RX_SIG_STRENGTH_EN_CNTL_MASK                  	0x0000000000010000ull
#define AR_SERDES_SBUS_50_RX_DROPOUT_CHAR_EN_CNTL_MASK                  	0x0000000000008000ull
#define AR_SERDES_SBUS_50_RX_INVERT_ONE_WORD_CNTL_MASK                  	0x0000000000004000ull
#define AR_SERDES_SBUS_50_RX_PATTERN_CMP_EN_CNTL_MASK                   	0x0000000000002000ull
#define AR_SERDES_SBUS_50_RX_PATTERN_CMP_SEL_CNTL_MASK                  	0x0000000000001c00ull
#define AR_SERDES_SBUS_50_RX_PATTERN_CTL_CNTL_MASK                      	0x0000000000000300ull
#define AR_SERDES_SBUS_50_RX_SEL_CNTL_MASK                              	0x00000000000000c0ull
#define AR_SERDES_SBUS_50_RX_K28_7_COMMA_DET_EN_CNTL_MASK               	0x0000000000000020ull
#define AR_SERDES_SBUS_50_RX_DATA_HALT_LOAD_CNTL_MASK                   	0x0000000000000010ull
#define AR_SERDES_SBUS_50_RX_POLARITY_INV_EN_CNTL_MASK                  	0x0000000000000008ull
#define AR_SERDES_SBUS_50_RX_BIT_SLIP_CNTL_MASK                         	0x0000000000000004ull
#define AR_SERDES_SBUS_50_RX_8B10B_ALIGN_EN_CNTL_MASK                   	0x0000000000000002ull
#define AR_SERDES_SBUS_50_RX_DATA_GATE_MASK                             	0x0000000000000001ull
#define AR_SERDES_SBUS_50_RESERVED_31_21_BP                             	21
#define AR_SERDES_SBUS_50_RX_OFFSET_DATA_SEL_CNTL_BP                    	20
#define AR_SERDES_SBUS_50_RESERVED_19_18_BP                             	18
#define AR_SERDES_SBUS_50_SIG_STRENGTH_STRONG_EN_CNTL_BP                	17
#define AR_SERDES_SBUS_50_RX_SIG_STRENGTH_EN_CNTL_BP                    	16
#define AR_SERDES_SBUS_50_RX_DROPOUT_CHAR_EN_CNTL_BP                    	15
#define AR_SERDES_SBUS_50_RX_INVERT_ONE_WORD_CNTL_BP                    	14
#define AR_SERDES_SBUS_50_RX_PATTERN_CMP_EN_CNTL_BP                     	13
#define AR_SERDES_SBUS_50_RX_PATTERN_CMP_SEL_CNTL_BP                    	10
#define AR_SERDES_SBUS_50_RX_PATTERN_CTL_CNTL_BP                        	8
#define AR_SERDES_SBUS_50_RX_SEL_CNTL_BP                                	6
#define AR_SERDES_SBUS_50_RX_K28_7_COMMA_DET_EN_CNTL_BP                 	5
#define AR_SERDES_SBUS_50_RX_DATA_HALT_LOAD_CNTL_BP                     	4
#define AR_SERDES_SBUS_50_RX_POLARITY_INV_EN_CNTL_BP                    	3
#define AR_SERDES_SBUS_50_RX_BIT_SLIP_CNTL_BP                           	2
#define AR_SERDES_SBUS_50_RX_8B10B_ALIGN_EN_CNTL_BP                     	1
#define AR_SERDES_SBUS_50_RX_DATA_GATE_BP                               	0
#define AR_SERDES_SBUS_50_RESERVED_31_21_QW                             	0
#define AR_SERDES_SBUS_50_RX_OFFSET_DATA_SEL_CNTL_QW                    	0
#define AR_SERDES_SBUS_50_RESERVED_19_18_QW                             	0
#define AR_SERDES_SBUS_50_SIG_STRENGTH_STRONG_EN_CNTL_QW                	0
#define AR_SERDES_SBUS_50_RX_SIG_STRENGTH_EN_CNTL_QW                    	0
#define AR_SERDES_SBUS_50_RX_DROPOUT_CHAR_EN_CNTL_QW                    	0
#define AR_SERDES_SBUS_50_RX_INVERT_ONE_WORD_CNTL_QW                    	0
#define AR_SERDES_SBUS_50_RX_PATTERN_CMP_EN_CNTL_QW                     	0
#define AR_SERDES_SBUS_50_RX_PATTERN_CMP_SEL_CNTL_QW                    	0
#define AR_SERDES_SBUS_50_RX_PATTERN_CTL_CNTL_QW                        	0
#define AR_SERDES_SBUS_50_RX_SEL_CNTL_QW                                	0
#define AR_SERDES_SBUS_50_RX_K28_7_COMMA_DET_EN_CNTL_QW                 	0
#define AR_SERDES_SBUS_50_RX_DATA_HALT_LOAD_CNTL_QW                     	0
#define AR_SERDES_SBUS_50_RX_POLARITY_INV_EN_CNTL_QW                    	0
#define AR_SERDES_SBUS_50_RX_BIT_SLIP_CNTL_QW                           	0
#define AR_SERDES_SBUS_50_RX_8B10B_ALIGN_EN_CNTL_QW                     	0
#define AR_SERDES_SBUS_50_RX_DATA_GATE_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_51 DEFINES
 */
#define AR_SERDES_SBUS_51_RESERVED_31_3_MASK                            	0x00000000fffffff8ull
#define AR_SERDES_SBUS_51_RX_ALT_PATTERN_EN_CNTL_MASK                   	0x0000000000000004ull
#define AR_SERDES_SBUS_51_RESERVED_1_0_MASK                             	0x0000000000000003ull
#define AR_SERDES_SBUS_51_RESERVED_31_3_BP                              	3
#define AR_SERDES_SBUS_51_RX_ALT_PATTERN_EN_CNTL_BP                     	2
#define AR_SERDES_SBUS_51_RESERVED_1_0_BP                               	0
#define AR_SERDES_SBUS_51_RESERVED_31_3_QW                              	0
#define AR_SERDES_SBUS_51_RX_ALT_PATTERN_EN_CNTL_QW                     	0
#define AR_SERDES_SBUS_51_RESERVED_1_0_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_52 DEFINES
 */
#define AR_SERDES_SBUS_52_RESERVED_31_20_MASK                           	0x00000000fff00000ull
#define AR_SERDES_SBUS_52_RX_USER_REG_CNTL_MASK                         	0x00000000000fffffull
#define AR_SERDES_SBUS_52_RESERVED_31_20_BP                             	20
#define AR_SERDES_SBUS_52_RX_USER_REG_CNTL_BP                           	0
#define AR_SERDES_SBUS_52_RESERVED_31_20_QW                             	0
#define AR_SERDES_SBUS_52_RX_USER_REG_CNTL_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_53 DEFINES
 */
#define AR_SERDES_SBUS_53_RESERVED_31_8_MASK                            	0x00000000ffffff00ull
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_EN_CNTL_MASK                 	0x0000000000000080ull
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_RESET_CNTL_MASK              	0x0000000000000040ull
#define AR_SERDES_SBUS_53_RX_ERROR_EDGE_DETECT_CNTL_MASK                	0x0000000000000020ull
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_SEL_CNTL_MASK                	0x000000000000001eull
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_GATE_MASK                    	0x0000000000000001ull
#define AR_SERDES_SBUS_53_RESERVED_31_8_BP                              	8
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_EN_CNTL_BP                   	7
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_RESET_CNTL_BP                	6
#define AR_SERDES_SBUS_53_RX_ERROR_EDGE_DETECT_CNTL_BP                  	5
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_SEL_CNTL_BP                  	1
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_GATE_BP                      	0
#define AR_SERDES_SBUS_53_RESERVED_31_8_QW                              	0
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_EN_CNTL_QW                   	0
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_RESET_CNTL_QW                	0
#define AR_SERDES_SBUS_53_RX_ERROR_EDGE_DETECT_CNTL_QW                  	0
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_SEL_CNTL_QW                  	0
#define AR_SERDES_SBUS_53_RX_ERROR_MONITOR_GATE_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_54 DEFINES
 */
#define AR_SERDES_SBUS_54_RESERVED_31_9_MASK                            	0x00000000fffffe00ull
#define AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_MSB_MASK           	0x0000000000000100ull
#define AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_LSB_MASK           	0x0000000000000080ull
#define AR_SERDES_SBUS_54_RX_PATTERN_CMP_PASS_MASK                      	0x0000000000000040ull
#define AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_MSB_MASK                   	0x0000000000000020ull
#define AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_LSB_MASK                   	0x0000000000000010ull
#define AR_SERDES_SBUS_54_RX_8B10B_SLIP_IN_PROGRESS_DET_MASK            	0x0000000000000008ull
#define AR_SERDES_SBUS_54_RESERVED_2_MASK                               	0x0000000000000004ull
#define AR_SERDES_SBUS_54_RX_PRBS_FAILURE_MASK                          	0x0000000000000002ull
#define AR_SERDES_SBUS_54_RX_ERROR_OCCURED_MASK                         	0x0000000000000001ull
#define AR_SERDES_SBUS_54_RESERVED_31_9_BP                              	9
#define AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_MSB_BP             	8
#define AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_LSB_BP             	7
#define AR_SERDES_SBUS_54_RX_PATTERN_CMP_PASS_BP                        	6
#define AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_MSB_BP                     	5
#define AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_LSB_BP                     	4
#define AR_SERDES_SBUS_54_RX_8B10B_SLIP_IN_PROGRESS_DET_BP              	3
#define AR_SERDES_SBUS_54_RESERVED_2_BP                                 	2
#define AR_SERDES_SBUS_54_RX_PRBS_FAILURE_BP                            	1
#define AR_SERDES_SBUS_54_RX_ERROR_OCCURED_BP                           	0
#define AR_SERDES_SBUS_54_RESERVED_31_9_QW                              	0
#define AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_MSB_QW             	0
#define AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_LSB_QW             	0
#define AR_SERDES_SBUS_54_RX_PATTERN_CMP_PASS_QW                        	0
#define AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_MSB_QW                     	0
#define AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_LSB_QW                     	0
#define AR_SERDES_SBUS_54_RX_8B10B_SLIP_IN_PROGRESS_DET_QW              	0
#define AR_SERDES_SBUS_54_RESERVED_2_QW                                 	0
#define AR_SERDES_SBUS_54_RX_PRBS_FAILURE_QW                            	0
#define AR_SERDES_SBUS_54_RX_ERROR_OCCURED_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_55 DEFINES
 */
#define AR_SERDES_SBUS_55_RX_ERROR_COUNT_OBS_MASK                       	0x00000000ffffffffull
#define AR_SERDES_SBUS_55_RX_ERROR_COUNT_OBS_BP                         	0
#define AR_SERDES_SBUS_55_RX_ERROR_COUNT_OBS_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_56 DEFINES
 */
#define AR_SERDES_SBUS_56_RESERVED_31_8_MASK                            	0x00000000ffffff00ull
#define AR_SERDES_SBUS_56_RX_PRBS_DATA_MSB_OBS_39_32_MASK               	0x00000000000000ffull
#define AR_SERDES_SBUS_56_RESERVED_31_8_BP                              	8
#define AR_SERDES_SBUS_56_RX_PRBS_DATA_MSB_OBS_39_32_BP                 	0
#define AR_SERDES_SBUS_56_RESERVED_31_8_QW                              	0
#define AR_SERDES_SBUS_56_RX_PRBS_DATA_MSB_OBS_39_32_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_57 DEFINES
 */
#define AR_SERDES_SBUS_57_RX_PRBS_DATA_MSB_OBS_31_0_MASK                	0x00000000ffffffffull
#define AR_SERDES_SBUS_57_RX_PRBS_DATA_MSB_OBS_31_0_BP                  	0
#define AR_SERDES_SBUS_57_RX_PRBS_DATA_MSB_OBS_31_0_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_58 DEFINES
 */
#define AR_SERDES_SBUS_58_RESERVED_31_8_MASK                            	0x00000000ffffff00ull
#define AR_SERDES_SBUS_58_RX_PRBS_DATA_LSB_OBS_39_32_MASK               	0x00000000000000ffull
#define AR_SERDES_SBUS_58_RESERVED_31_8_BP                              	8
#define AR_SERDES_SBUS_58_RX_PRBS_DATA_LSB_OBS_39_32_BP                 	0
#define AR_SERDES_SBUS_58_RESERVED_31_8_QW                              	0
#define AR_SERDES_SBUS_58_RX_PRBS_DATA_LSB_OBS_39_32_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_59 DEFINES
 */
#define AR_SERDES_SBUS_59_RX_PRBS_DATA_LSB_OBS_31_0_MASK                	0x00000000ffffffffull
#define AR_SERDES_SBUS_59_RX_PRBS_DATA_LSB_OBS_31_0_BP                  	0
#define AR_SERDES_SBUS_59_RX_PRBS_DATA_LSB_OBS_31_0_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_5A DEFINES
 */
#define AR_SERDES_SBUS_5A_RESERVED_31_8_MASK                            	0x00000000ffffff00ull
#define AR_SERDES_SBUS_5A_RX_SIG_STRENGTH_OBS_MASK                      	0x00000000000000c0ull
#define AR_SERDES_SBUS_5A_RESERVED_5_0_MASK                             	0x000000000000003full
#define AR_SERDES_SBUS_5A_RESERVED_31_8_BP                              	8
#define AR_SERDES_SBUS_5A_RX_SIG_STRENGTH_OBS_BP                        	6
#define AR_SERDES_SBUS_5A_RESERVED_5_0_BP                               	0
#define AR_SERDES_SBUS_5A_RESERVED_31_8_QW                              	0
#define AR_SERDES_SBUS_5A_RX_SIG_STRENGTH_OBS_QW                        	0
#define AR_SERDES_SBUS_5A_RESERVED_5_0_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_5B DEFINES
 */
#define AR_SERDES_SBUS_5B_RESERVED_31_2_MASK                            	0x00000000fffffffcull
#define AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_EN_CNTL_MASK                  	0x0000000000000002ull
#define AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_GATE_MASK                     	0x0000000000000001ull
#define AR_SERDES_SBUS_5B_RESERVED_31_2_BP                              	2
#define AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_EN_CNTL_BP                    	1
#define AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_GATE_BP                       	0
#define AR_SERDES_SBUS_5B_RESERVED_31_2_QW                              	0
#define AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_EN_CNTL_QW                    	0
#define AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_GATE_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_64 DEFINES
 */
#define AR_SERDES_SBUS_64_RESERVED_31_9_MASK                            	0x00000000fffffe00ull
#define AR_SERDES_SBUS_64_RX_DFE_B_DATA_PD_CNTL_MASK                    	0x0000000000000100ull
#define AR_SERDES_SBUS_64_RX_DFE_B_OFFSET_PD_CNTL_MASK                  	0x0000000000000080ull
#define AR_SERDES_SBUS_64_RX_DFE_A_DATA_PD_CNTL_MASK                    	0x0000000000000040ull
#define AR_SERDES_SBUS_64_RX_DFE_A_OFFSET_PD_CNTL_MASK                  	0x0000000000000020ull
#define AR_SERDES_SBUS_64_RX_SEL_DFE_A_DATA_CNTL_MASK                   	0x0000000000000010ull
#define AR_SERDES_SBUS_64_RX_SEL_DFE_A_OFFSET_CNTL_MASK                 	0x0000000000000008ull
#define AR_SERDES_SBUS_64_RX_PHASE_INTERPOLATOR_GATE_MASK               	0x0000000000000004ull
#define AR_SERDES_SBUS_64_RX_DFE_PD_GATE_MASK                           	0x0000000000000002ull
#define AR_SERDES_SBUS_64_RX_DFE_GATE_MASK                              	0x0000000000000001ull
#define AR_SERDES_SBUS_64_RESERVED_31_9_BP                              	9
#define AR_SERDES_SBUS_64_RX_DFE_B_DATA_PD_CNTL_BP                      	8
#define AR_SERDES_SBUS_64_RX_DFE_B_OFFSET_PD_CNTL_BP                    	7
#define AR_SERDES_SBUS_64_RX_DFE_A_DATA_PD_CNTL_BP                      	6
#define AR_SERDES_SBUS_64_RX_DFE_A_OFFSET_PD_CNTL_BP                    	5
#define AR_SERDES_SBUS_64_RX_SEL_DFE_A_DATA_CNTL_BP                     	4
#define AR_SERDES_SBUS_64_RX_SEL_DFE_A_OFFSET_CNTL_BP                   	3
#define AR_SERDES_SBUS_64_RX_PHASE_INTERPOLATOR_GATE_BP                 	2
#define AR_SERDES_SBUS_64_RX_DFE_PD_GATE_BP                             	1
#define AR_SERDES_SBUS_64_RX_DFE_GATE_BP                                	0
#define AR_SERDES_SBUS_64_RESERVED_31_9_QW                              	0
#define AR_SERDES_SBUS_64_RX_DFE_B_DATA_PD_CNTL_QW                      	0
#define AR_SERDES_SBUS_64_RX_DFE_B_OFFSET_PD_CNTL_QW                    	0
#define AR_SERDES_SBUS_64_RX_DFE_A_DATA_PD_CNTL_QW                      	0
#define AR_SERDES_SBUS_64_RX_DFE_A_OFFSET_PD_CNTL_QW                    	0
#define AR_SERDES_SBUS_64_RX_SEL_DFE_A_DATA_CNTL_QW                     	0
#define AR_SERDES_SBUS_64_RX_SEL_DFE_A_OFFSET_CNTL_QW                   	0
#define AR_SERDES_SBUS_64_RX_PHASE_INTERPOLATOR_GATE_QW                 	0
#define AR_SERDES_SBUS_64_RX_DFE_PD_GATE_QW                             	0
#define AR_SERDES_SBUS_64_RX_DFE_GATE_QW                                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_65 DEFINES
 */
#define AR_SERDES_SBUS_65_RESERVED_31_7_MASK                            	0x00000000ffffff80ull
#define AR_SERDES_SBUS_65_RX_PHASE_INTERPOLATOR_CNTL_MASK               	0x000000000000007full
#define AR_SERDES_SBUS_65_RESERVED_31_7_BP                              	7
#define AR_SERDES_SBUS_65_RX_PHASE_INTERPOLATOR_CNTL_BP                 	0
#define AR_SERDES_SBUS_65_RESERVED_31_7_QW                              	0
#define AR_SERDES_SBUS_65_RX_PHASE_INTERPOLATOR_CNTL_QW                 	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_67 DEFINES
 */
#define AR_SERDES_SBUS_67_RESERVED_31_30_MASK                           	0x00000000c0000000ull
#define AR_SERDES_SBUS_67_RX_DFE_A_CNTL_29_0__MASK                      	0x000000003fffffffull
#define AR_SERDES_SBUS_67_RESERVED_31_30_BP                             	30
#define AR_SERDES_SBUS_67_RX_DFE_A_CNTL_29_0__BP                        	0
#define AR_SERDES_SBUS_67_RESERVED_31_30_QW                             	0
#define AR_SERDES_SBUS_67_RX_DFE_A_CNTL_29_0__QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_68 DEFINES
 */
#define AR_SERDES_SBUS_68_RESERVED_31_10_MASK                           	0x00000000fffffc00ull
#define AR_SERDES_SBUS_68_RX_DFE_A_CNTL_39_30__MASK                     	0x00000000000003ffull
#define AR_SERDES_SBUS_68_RESERVED_31_10_BP                             	10
#define AR_SERDES_SBUS_68_RX_DFE_A_CNTL_39_30__BP                       	0
#define AR_SERDES_SBUS_68_RESERVED_31_10_QW                             	0
#define AR_SERDES_SBUS_68_RX_DFE_A_CNTL_39_30__QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_69 DEFINES
 */
#define AR_SERDES_SBUS_69_RESERVED_31_30_MASK                           	0x00000000c0000000ull
#define AR_SERDES_SBUS_69_RX_DFE_B_CNTL_29_0__MASK                      	0x000000003fffffffull
#define AR_SERDES_SBUS_69_RESERVED_31_30_BP                             	30
#define AR_SERDES_SBUS_69_RX_DFE_B_CNTL_29_0__BP                        	0
#define AR_SERDES_SBUS_69_RESERVED_31_30_QW                             	0
#define AR_SERDES_SBUS_69_RX_DFE_B_CNTL_29_0__QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_6A DEFINES
 */
#define AR_SERDES_SBUS_6A_RESERVED_31_10_MASK                           	0x00000000fffffc00ull
#define AR_SERDES_SBUS_6A_RX_DFE_B_CNTL_39_30__MASK                     	0x00000000000003ffull
#define AR_SERDES_SBUS_6A_RESERVED_31_10_BP                             	10
#define AR_SERDES_SBUS_6A_RX_DFE_B_CNTL_39_30__BP                       	0
#define AR_SERDES_SBUS_6A_RESERVED_31_10_QW                             	0
#define AR_SERDES_SBUS_6A_RX_DFE_B_CNTL_39_30__QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_6B DEFINES
 */
#define AR_SERDES_SBUS_6B_RESERVED_31_24_MASK                           	0x00000000ff000000ull
#define AR_SERDES_SBUS_6B_RX_DFE_B_EBERT_DAC_CNTL_MASK                  	0x0000000000ff0000ull
#define AR_SERDES_SBUS_6B_RESERVED_15_8_MASK                            	0x000000000000ff00ull
#define AR_SERDES_SBUS_6B_RX_DFE_A_EBERT_DAC_CNTL_MASK                  	0x00000000000000ffull
#define AR_SERDES_SBUS_6B_RESERVED_31_24_BP                             	24
#define AR_SERDES_SBUS_6B_RX_DFE_B_EBERT_DAC_CNTL_BP                    	16
#define AR_SERDES_SBUS_6B_RESERVED_15_8_BP                              	8
#define AR_SERDES_SBUS_6B_RX_DFE_A_EBERT_DAC_CNTL_BP                    	0
#define AR_SERDES_SBUS_6B_RESERVED_31_24_QW                             	0
#define AR_SERDES_SBUS_6B_RX_DFE_B_EBERT_DAC_CNTL_QW                    	0
#define AR_SERDES_SBUS_6B_RESERVED_15_8_QW                              	0
#define AR_SERDES_SBUS_6B_RX_DFE_A_EBERT_DAC_CNTL_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_81 DEFINES
 */
#define AR_SERDES_SBUS_81_RESERVED_31_16_MASK                           	0x00000000ffff0000ull
#define AR_SERDES_SBUS_81_DFE_SCRATCH_PAD_CNTL_MASK                     	0x000000000000ffffull
#define AR_SERDES_SBUS_81_RESERVED_31_16_BP                             	16
#define AR_SERDES_SBUS_81_DFE_SCRATCH_PAD_CNTL_BP                       	0
#define AR_SERDES_SBUS_81_RESERVED_31_16_QW                             	0
#define AR_SERDES_SBUS_81_DFE_SCRATCH_PAD_CNTL_QW                       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_82 DEFINES
 */
#define AR_SERDES_SBUS_82_RESERVED_31_16_MASK                           	0x00000000ffff0000ull
#define AR_SERDES_SBUS_82_DFE_USER_CONFIG_MASK                          	0x000000000000ffffull
#define AR_SERDES_SBUS_82_RESERVED_31_16_BP                             	16
#define AR_SERDES_SBUS_82_DFE_USER_CONFIG_BP                            	0
#define AR_SERDES_SBUS_82_RESERVED_31_16_QW                             	0
#define AR_SERDES_SBUS_82_DFE_USER_CONFIG_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_8C DEFINES
 */
#define AR_SERDES_SBUS_8C_RESERVED_31_MASK                              	0x0000000080000000ull
#define AR_SERDES_SBUS_8C_TX_OVERRIDE_IN_OBS_MASK                       	0x0000000040000000ull
#define AR_SERDES_SBUS_8C_TX_OVERRIDE_EN_OBS_MASK                       	0x0000000020000000ull
#define AR_SERDES_SBUS_8C_RESERVED_28_0_MASK                            	0x000000001fffffffull
#define AR_SERDES_SBUS_8C_RESERVED_31_BP                                	31
#define AR_SERDES_SBUS_8C_TX_OVERRIDE_IN_OBS_BP                         	30
#define AR_SERDES_SBUS_8C_TX_OVERRIDE_EN_OBS_BP                         	29
#define AR_SERDES_SBUS_8C_RESERVED_28_0_BP                              	0
#define AR_SERDES_SBUS_8C_RESERVED_31_QW                                	0
#define AR_SERDES_SBUS_8C_TX_OVERRIDE_IN_OBS_QW                         	0
#define AR_SERDES_SBUS_8C_TX_OVERRIDE_EN_OBS_QW                         	0
#define AR_SERDES_SBUS_8C_RESERVED_28_0_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_8E DEFINES
 */
#define AR_SERDES_SBUS_8E_RESERVED_31_20_MASK                           	0x00000000fff00000ull
#define AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_CNTL_MASK          	0x00000000000ffff0ull
#define AR_SERDES_SBUS_8E_RESERVED_3_1_MASK                             	0x000000000000000eull
#define AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_GATE_MASK          	0x0000000000000001ull
#define AR_SERDES_SBUS_8E_RESERVED_31_20_BP                             	20
#define AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_CNTL_BP            	4
#define AR_SERDES_SBUS_8E_RESERVED_3_1_BP                               	1
#define AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_GATE_BP            	0
#define AR_SERDES_SBUS_8E_RESERVED_31_20_QW                             	0
#define AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_CNTL_QW            	0
#define AR_SERDES_SBUS_8E_RESERVED_3_1_QW                               	0
#define AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_GATE_QW            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_8F DEFINES
 */
#define AR_SERDES_SBUS_8F_RESERVED_31_20_MASK                           	0x00000000fff00000ull
#define AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_CNTL_MASK          	0x00000000000ffff0ull
#define AR_SERDES_SBUS_8F_RESERVED_3_1_MASK                             	0x000000000000000eull
#define AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_GATE_MASK          	0x0000000000000001ull
#define AR_SERDES_SBUS_8F_RESERVED_31_20_BP                             	20
#define AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_CNTL_BP            	4
#define AR_SERDES_SBUS_8F_RESERVED_3_1_BP                               	1
#define AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_GATE_BP            	0
#define AR_SERDES_SBUS_8F_RESERVED_31_20_QW                             	0
#define AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_CNTL_QW            	0
#define AR_SERDES_SBUS_8F_RESERVED_3_1_QW                               	0
#define AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_GATE_QW            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_90 DEFINES
 */
#define AR_SERDES_SBUS_90_LINK_LOOPBACK_EN_CNTL_MASK                    	0x0000000080000000ull
#define AR_SERDES_SBUS_90_RESERVED_30_0_MASK                            	0x000000007fffffffull
#define AR_SERDES_SBUS_90_LINK_LOOPBACK_EN_CNTL_BP                      	31
#define AR_SERDES_SBUS_90_RESERVED_30_0_BP                              	0
#define AR_SERDES_SBUS_90_LINK_LOOPBACK_EN_CNTL_QW                      	0
#define AR_SERDES_SBUS_90_RESERVED_30_0_QW                              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_92 DEFINES
 */
#define AR_SERDES_SBUS_92_RESERVED_31_9_MASK                            	0x00000000fffffe00ull
#define AR_SERDES_SBUS_92_PCIE_RX_POWER_DOWN_CNTL_MASK                  	0x0000000000000100ull
#define AR_SERDES_SBUS_92_PCIE_TX_POWER_DOWN_CNTL_MASK                  	0x00000000000000c0ull
#define AR_SERDES_SBUS_92_PCIE_TX_DETECT_RX_CNTL_MASK                   	0x0000000000000020ull
#define AR_SERDES_SBUS_92_PCIE_RX_ELEC_IDLE_THRESHOLD_CNTL_MASK         	0x000000000000001eull
#define AR_SERDES_SBUS_92_PCIE_GATE_MASK                                	0x0000000000000001ull
#define AR_SERDES_SBUS_92_RESERVED_31_9_BP                              	9
#define AR_SERDES_SBUS_92_PCIE_RX_POWER_DOWN_CNTL_BP                    	8
#define AR_SERDES_SBUS_92_PCIE_TX_POWER_DOWN_CNTL_BP                    	6
#define AR_SERDES_SBUS_92_PCIE_TX_DETECT_RX_CNTL_BP                     	5
#define AR_SERDES_SBUS_92_PCIE_RX_ELEC_IDLE_THRESHOLD_CNTL_BP           	1
#define AR_SERDES_SBUS_92_PCIE_GATE_BP                                  	0
#define AR_SERDES_SBUS_92_RESERVED_31_9_QW                              	0
#define AR_SERDES_SBUS_92_PCIE_RX_POWER_DOWN_CNTL_QW                    	0
#define AR_SERDES_SBUS_92_PCIE_TX_POWER_DOWN_CNTL_QW                    	0
#define AR_SERDES_SBUS_92_PCIE_TX_DETECT_RX_CNTL_QW                     	0
#define AR_SERDES_SBUS_92_PCIE_RX_ELEC_IDLE_THRESHOLD_CNTL_QW           	0
#define AR_SERDES_SBUS_92_PCIE_GATE_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_93 DEFINES
 */
#define AR_SERDES_SBUS_93_RESERVED_31_2_MASK                            	0x00000000fffffffcull
#define AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_CNTL_MASK            	0x0000000000000002ull
#define AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_GATE_MASK            	0x0000000000000001ull
#define AR_SERDES_SBUS_93_RESERVED_31_2_BP                              	2
#define AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_CNTL_BP              	1
#define AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_GATE_BP              	0
#define AR_SERDES_SBUS_93_RESERVED_31_2_QW                              	0
#define AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_CNTL_QW              	0
#define AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_GATE_QW              	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_95 DEFINES
 */
#define AR_SERDES_SBUS_95_RESERVED_31_23_MASK                           	0x00000000ff800000ull
#define AR_SERDES_SBUS_95_SIG_OK_PFD_COUNTER_CNTL_MASK                  	0x0000000000700000ull
#define AR_SERDES_SBUS_95_SIG_OK_USE_SEL_PFD_CNTL_MASK                  	0x0000000000080000ull
#define AR_SERDES_SBUS_95_SIG_OK_COMMA_COUNT_LIMIT_CNTL_MASK            	0x0000000000078000ull
#define AR_SERDES_SBUS_95_SIG_OK_USE_KR_CNTL_MASK                       	0x0000000000004000ull
#define AR_SERDES_SBUS_95_PROGRAMMABLE_SIG_OK_OBS_MASK                  	0x0000000000002000ull
#define AR_SERDES_SBUS_95_SIG_OK_OBS_MASK                               	0x0000000000001000ull
#define AR_SERDES_SBUS_95_SIG_OK_OUTPUT_CNTL_MASK                       	0x0000000000000c00ull
#define AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT3_EN_CNTL_MASK          	0x0000000000000200ull
#define AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT2_EN_CNTL_MASK          	0x0000000000000100ull
#define AR_SERDES_SBUS_95_SIG_OK_USE_FINE_FLOCK_CNTR_CNTL_MASK          	0x0000000000000080ull
#define AR_SERDES_SBUS_95_SIG_OK_USE_SLIP_IN_PROGRESS_CNTL_MASK         	0x0000000000000040ull
#define AR_SERDES_SBUS_95_SIG_OK_USE_RX_RDY_CNTL_MASK                   	0x0000000000000020ull
#define AR_SERDES_SBUS_95_SIG_OK_USE_COMMA_DET_CNTL_MASK                	0x0000000000000010ull
#define AR_SERDES_SBUS_95_SIG_OK_USE_SIGNAL_STRENGTH_CNTL_MASK          	0x0000000000000008ull
#define AR_SERDES_SBUS_95_SIG_OK_USE_ELEC_IDLE_CNTL_MASK                	0x0000000000000004ull
#define AR_SERDES_SBUS_95_SIG_OK_USE_RX_FINE_FLOCK_CNT_MASK             	0x0000000000000002ull
#define AR_SERDES_SBUS_95_SIG_OK_EN_PRGRMBLE_INPUTS_GATE_MASK           	0x0000000000000001ull
#define AR_SERDES_SBUS_95_RESERVED_31_23_BP                             	23
#define AR_SERDES_SBUS_95_SIG_OK_PFD_COUNTER_CNTL_BP                    	20
#define AR_SERDES_SBUS_95_SIG_OK_USE_SEL_PFD_CNTL_BP                    	19
#define AR_SERDES_SBUS_95_SIG_OK_COMMA_COUNT_LIMIT_CNTL_BP              	15
#define AR_SERDES_SBUS_95_SIG_OK_USE_KR_CNTL_BP                         	14
#define AR_SERDES_SBUS_95_PROGRAMMABLE_SIG_OK_OBS_BP                    	13
#define AR_SERDES_SBUS_95_SIG_OK_OBS_BP                                 	12
#define AR_SERDES_SBUS_95_SIG_OK_OUTPUT_CNTL_BP                         	10
#define AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT3_EN_CNTL_BP            	9
#define AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT2_EN_CNTL_BP            	8
#define AR_SERDES_SBUS_95_SIG_OK_USE_FINE_FLOCK_CNTR_CNTL_BP            	7
#define AR_SERDES_SBUS_95_SIG_OK_USE_SLIP_IN_PROGRESS_CNTL_BP           	6
#define AR_SERDES_SBUS_95_SIG_OK_USE_RX_RDY_CNTL_BP                     	5
#define AR_SERDES_SBUS_95_SIG_OK_USE_COMMA_DET_CNTL_BP                  	4
#define AR_SERDES_SBUS_95_SIG_OK_USE_SIGNAL_STRENGTH_CNTL_BP            	3
#define AR_SERDES_SBUS_95_SIG_OK_USE_ELEC_IDLE_CNTL_BP                  	2
#define AR_SERDES_SBUS_95_SIG_OK_USE_RX_FINE_FLOCK_CNT_BP               	1
#define AR_SERDES_SBUS_95_SIG_OK_EN_PRGRMBLE_INPUTS_GATE_BP             	0
#define AR_SERDES_SBUS_95_RESERVED_31_23_QW                             	0
#define AR_SERDES_SBUS_95_SIG_OK_PFD_COUNTER_CNTL_QW                    	0
#define AR_SERDES_SBUS_95_SIG_OK_USE_SEL_PFD_CNTL_QW                    	0
#define AR_SERDES_SBUS_95_SIG_OK_COMMA_COUNT_LIMIT_CNTL_QW              	0
#define AR_SERDES_SBUS_95_SIG_OK_USE_KR_CNTL_QW                         	0
#define AR_SERDES_SBUS_95_PROGRAMMABLE_SIG_OK_OBS_QW                    	0
#define AR_SERDES_SBUS_95_SIG_OK_OBS_QW                                 	0
#define AR_SERDES_SBUS_95_SIG_OK_OUTPUT_CNTL_QW                         	0
#define AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT3_EN_CNTL_QW            	0
#define AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT2_EN_CNTL_QW            	0
#define AR_SERDES_SBUS_95_SIG_OK_USE_FINE_FLOCK_CNTR_CNTL_QW            	0
#define AR_SERDES_SBUS_95_SIG_OK_USE_SLIP_IN_PROGRESS_CNTL_QW           	0
#define AR_SERDES_SBUS_95_SIG_OK_USE_RX_RDY_CNTL_QW                     	0
#define AR_SERDES_SBUS_95_SIG_OK_USE_COMMA_DET_CNTL_QW                  	0
#define AR_SERDES_SBUS_95_SIG_OK_USE_SIGNAL_STRENGTH_CNTL_QW            	0
#define AR_SERDES_SBUS_95_SIG_OK_USE_ELEC_IDLE_CNTL_QW                  	0
#define AR_SERDES_SBUS_95_SIG_OK_USE_RX_FINE_FLOCK_CNT_QW               	0
#define AR_SERDES_SBUS_95_SIG_OK_EN_PRGRMBLE_INPUTS_GATE_QW             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_AD DEFINES
 */
#define AR_SERDES_SBUS_AD_RESERVED_31_2_MASK                            	0x00000000fffffffcull
#define AR_SERDES_SBUS_AD_KR_TRAINING_EN_MASK                           	0x0000000000000002ull
#define AR_SERDES_SBUS_AD_KR_TRAINING_EN_GATE_MASK                      	0x0000000000000001ull
#define AR_SERDES_SBUS_AD_RESERVED_31_2_BP                              	2
#define AR_SERDES_SBUS_AD_KR_TRAINING_EN_BP                             	1
#define AR_SERDES_SBUS_AD_KR_TRAINING_EN_GATE_BP                        	0
#define AR_SERDES_SBUS_AD_RESERVED_31_2_QW                              	0
#define AR_SERDES_SBUS_AD_KR_TRAINING_EN_QW                             	0
#define AR_SERDES_SBUS_AD_KR_TRAINING_EN_GATE_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_AE DEFINES
 */
#define AR_SERDES_SBUS_AE_RESERVED_31_2_MASK                            	0x00000000fffffffcull
#define AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_MASK                      	0x0000000000000002ull
#define AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_GATE_MASK                 	0x0000000000000001ull
#define AR_SERDES_SBUS_AE_RESERVED_31_2_BP                              	2
#define AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_BP                        	1
#define AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_GATE_BP                   	0
#define AR_SERDES_SBUS_AE_RESERVED_31_2_QW                              	0
#define AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_QW                        	0
#define AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_GATE_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_AF DEFINES
 */
#define AR_SERDES_SBUS_AF_RESERVED_31_19_MASK                           	0x00000000fff80000ull
#define AR_SERDES_SBUS_AF_KR_TRAINING_STATE_MASK                        	0x0000000000070000ull
#define AR_SERDES_SBUS_AF_RESERVED_15_9_MASK                            	0x000000000000fe00ull
#define AR_SERDES_SBUS_AF_KR_TRAINING_MASK                              	0x0000000000000100ull
#define AR_SERDES_SBUS_AF_KR_FRAME_LOCK_MASK                            	0x0000000000000080ull
#define AR_SERDES_SBUS_AF_KR_RX_FAULT_MASK                              	0x0000000000000040ull
#define AR_SERDES_SBUS_AF_KR_TX_FAULT_MASK                              	0x0000000000000020ull
#define AR_SERDES_SBUS_AF_KR_PMD_FAULT_MASK                             	0x0000000000000010ull
#define AR_SERDES_SBUS_AF_KR_SIGNAL_DETECT_MASK                         	0x0000000000000008ull
#define AR_SERDES_SBUS_AF_KR_TRAINING_FAILURE_MASK                      	0x0000000000000004ull
#define AR_SERDES_SBUS_AF_KR_RX_TRAINED_MASK                            	0x0000000000000002ull
#define AR_SERDES_SBUS_AF_KR_RX_TRAINED_GATE_MASK                       	0x0000000000000001ull
#define AR_SERDES_SBUS_AF_RESERVED_31_19_BP                             	19
#define AR_SERDES_SBUS_AF_KR_TRAINING_STATE_BP                          	16
#define AR_SERDES_SBUS_AF_RESERVED_15_9_BP                              	9
#define AR_SERDES_SBUS_AF_KR_TRAINING_BP                                	8
#define AR_SERDES_SBUS_AF_KR_FRAME_LOCK_BP                              	7
#define AR_SERDES_SBUS_AF_KR_RX_FAULT_BP                                	6
#define AR_SERDES_SBUS_AF_KR_TX_FAULT_BP                                	5
#define AR_SERDES_SBUS_AF_KR_PMD_FAULT_BP                               	4
#define AR_SERDES_SBUS_AF_KR_SIGNAL_DETECT_BP                           	3
#define AR_SERDES_SBUS_AF_KR_TRAINING_FAILURE_BP                        	2
#define AR_SERDES_SBUS_AF_KR_RX_TRAINED_BP                              	1
#define AR_SERDES_SBUS_AF_KR_RX_TRAINED_GATE_BP                         	0
#define AR_SERDES_SBUS_AF_RESERVED_31_19_QW                             	0
#define AR_SERDES_SBUS_AF_KR_TRAINING_STATE_QW                          	0
#define AR_SERDES_SBUS_AF_RESERVED_15_9_QW                              	0
#define AR_SERDES_SBUS_AF_KR_TRAINING_QW                                	0
#define AR_SERDES_SBUS_AF_KR_FRAME_LOCK_QW                              	0
#define AR_SERDES_SBUS_AF_KR_RX_FAULT_QW                                	0
#define AR_SERDES_SBUS_AF_KR_TX_FAULT_QW                                	0
#define AR_SERDES_SBUS_AF_KR_PMD_FAULT_QW                               	0
#define AR_SERDES_SBUS_AF_KR_SIGNAL_DETECT_QW                           	0
#define AR_SERDES_SBUS_AF_KR_TRAINING_FAILURE_QW                        	0
#define AR_SERDES_SBUS_AF_KR_RX_TRAINED_QW                              	0
#define AR_SERDES_SBUS_AF_KR_RX_TRAINED_GATE_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_B3 DEFINES
 */
#define AR_SERDES_SBUS_B3_RESERVED_31_2_MASK                            	0x00000000fffffffcull
#define AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_MASK                         	0x0000000000000002ull
#define AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_GATE_MASK                    	0x0000000000000001ull
#define AR_SERDES_SBUS_B3_RESERVED_31_2_BP                              	2
#define AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_BP                           	1
#define AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_GATE_BP                      	0
#define AR_SERDES_SBUS_B3_RESERVED_31_2_QW                              	0
#define AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_QW                           	0
#define AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_GATE_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_FC DEFINES
 */
#define AR_SERDES_SBUS_FC_RESERVED_31_24_MASK                           	0x00000000ff000000ull
#define AR_SERDES_SBUS_FC_BROADCAST_INV_2_CNTL_MASK                     	0x0000000000ff0000ull
#define AR_SERDES_SBUS_FC_RESERVED_15_12_MASK                           	0x000000000000f000ull
#define AR_SERDES_SBUS_FC_BROADCAST_INV_CNT_MASK                        	0x0000000000000ff0ull
#define AR_SERDES_SBUS_FC_RESERVED_3_1_MASK                             	0x000000000000000eull
#define AR_SERDES_SBUS_FC_IGNORE_BROADCAST_CNTL_MASK                    	0x0000000000000001ull
#define AR_SERDES_SBUS_FC_RESERVED_31_24_BP                             	24
#define AR_SERDES_SBUS_FC_BROADCAST_INV_2_CNTL_BP                       	16
#define AR_SERDES_SBUS_FC_RESERVED_15_12_BP                             	12
#define AR_SERDES_SBUS_FC_BROADCAST_INV_CNT_BP                          	4
#define AR_SERDES_SBUS_FC_RESERVED_3_1_BP                               	1
#define AR_SERDES_SBUS_FC_IGNORE_BROADCAST_CNTL_BP                      	0
#define AR_SERDES_SBUS_FC_RESERVED_31_24_QW                             	0
#define AR_SERDES_SBUS_FC_BROADCAST_INV_2_CNTL_QW                       	0
#define AR_SERDES_SBUS_FC_RESERVED_15_12_QW                             	0
#define AR_SERDES_SBUS_FC_BROADCAST_INV_CNT_QW                          	0
#define AR_SERDES_SBUS_FC_RESERVED_3_1_QW                               	0
#define AR_SERDES_SBUS_FC_IGNORE_BROADCAST_CNTL_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_FD DEFINES
 */
#define AR_SERDES_SBUS_FD_RESERVED_31_8_MASK                            	0x00000000ffffff00ull
#define AR_SERDES_SBUS_FD_SERDES_SBUS_TEST_READ_WRITE_MASK              	0x00000000000000ffull
#define AR_SERDES_SBUS_FD_RESERVED_31_8_BP                              	8
#define AR_SERDES_SBUS_FD_SERDES_SBUS_TEST_READ_WRITE_BP                	0
#define AR_SERDES_SBUS_FD_RESERVED_31_8_QW                              	0
#define AR_SERDES_SBUS_FD_SERDES_SBUS_TEST_READ_WRITE_QW                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_FE DEFINES
 */
#define AR_SERDES_SBUS_FE_RESERVED_31_8_MASK                            	0x00000000ffffff00ull
#define AR_SERDES_SBUS_FE_SERDES_VARIANT_IDCODE_OBS_MASK                	0x00000000000000ffull
#define AR_SERDES_SBUS_FE_RESERVED_31_8_BP                              	8
#define AR_SERDES_SBUS_FE_SERDES_VARIANT_IDCODE_OBS_BP                  	0
#define AR_SERDES_SBUS_FE_RESERVED_31_8_QW                              	0
#define AR_SERDES_SBUS_FE_SERDES_VARIANT_IDCODE_OBS_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_FF DEFINES
 */
#define AR_SERDES_SBUS_FF_RESERVED_31_8_MASK                            	0x00000000ffffff00ull
#define AR_SERDES_SBUS_FF_IDCODE_MASK                                   	0x00000000000000ffull
#define AR_SERDES_SBUS_FF_RESERVED_31_8_BP                              	8
#define AR_SERDES_SBUS_FF_IDCODE_BP                                     	0
#define AR_SERDES_SBUS_FF_RESERVED_31_8_QW                              	0
#define AR_SERDES_SBUS_FF_IDCODE_QW                                     	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_PMRO_CTRL DEFINES
 */
#define AR_SERDES_PMRO_CTRL_RESERVED_31_8_MASK                          	0x00000000ffffff00ull
#define AR_SERDES_PMRO_CTRL_OSC_RUN_DELAY_MASK                          	0x0000000000000080ull
#define AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_DELAY_MASK                      	0x0000000000000040ull
#define AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_MASK                            	0x0000000000000020ull
#define AR_SERDES_PMRO_CTRL_STATE_BIT_3_MASK                            	0x0000000000000010ull
#define AR_SERDES_PMRO_CTRL_STATE_BIT_2_MASK                            	0x0000000000000008ull
#define AR_SERDES_PMRO_CTRL_STATE_BIT_1_MASK                            	0x0000000000000004ull
#define AR_SERDES_PMRO_CTRL_STATE_BIT_0_MASK                            	0x0000000000000002ull
#define AR_SERDES_PMRO_CTRL_OSC_RUN_MASK                                	0x0000000000000001ull
#define AR_SERDES_PMRO_CTRL_RESERVED_31_8_BP                            	8
#define AR_SERDES_PMRO_CTRL_OSC_RUN_DELAY_BP                            	7
#define AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_DELAY_BP                        	6
#define AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_BP                              	5
#define AR_SERDES_PMRO_CTRL_STATE_BIT_3_BP                              	4
#define AR_SERDES_PMRO_CTRL_STATE_BIT_2_BP                              	3
#define AR_SERDES_PMRO_CTRL_STATE_BIT_1_BP                              	2
#define AR_SERDES_PMRO_CTRL_STATE_BIT_0_BP                              	1
#define AR_SERDES_PMRO_CTRL_OSC_RUN_BP                                  	0
#define AR_SERDES_PMRO_CTRL_RESERVED_31_8_QW                            	0
#define AR_SERDES_PMRO_CTRL_OSC_RUN_DELAY_QW                            	0
#define AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_DELAY_QW                        	0
#define AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_QW                              	0
#define AR_SERDES_PMRO_CTRL_STATE_BIT_3_QW                              	0
#define AR_SERDES_PMRO_CTRL_STATE_BIT_2_QW                              	0
#define AR_SERDES_PMRO_CTRL_STATE_BIT_1_QW                              	0
#define AR_SERDES_PMRO_CTRL_STATE_BIT_0_QW                              	0
#define AR_SERDES_PMRO_CTRL_OSC_RUN_QW                                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_PMRO_STD_VT_CONFIG DEFINES
 */
#define AR_SERDES_PMRO_STD_VT_CONFIG_RESERVED_31_16_MASK                	0x00000000ffff0000ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_BUFFER_MASK                        	0x0000000000008000ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_MASK       	0x0000000000004000ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_MASK       	0x0000000000002000ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_MASK       	0x0000000000001000ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_FAST_AND_MASK       	0x0000000000000800ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_NOR_THREE_SLOW_IN_MASK             	0x0000000000000400ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_NAND_THREE_SLOW_IN_MASK            	0x0000000000000200ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_MASK           	0x0000000000000100ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_NIM_MASK           	0x0000000000000080ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_IM_MASK            	0x0000000000000040ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_IM_MASK            	0x0000000000000020ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_SLOW_IN_MASK               	0x0000000000000010ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_FAST_IN_MASK               	0x0000000000000008ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_SLOW_IN_MASK              	0x0000000000000004ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_FAST_IN_MASK              	0x0000000000000002ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_INVERTER_MASK                      	0x0000000000000001ull
#define AR_SERDES_PMRO_STD_VT_CONFIG_RESERVED_31_16_BP                  	16
#define AR_SERDES_PMRO_STD_VT_CONFIG_BUFFER_BP                          	15
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_BP         	14
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_BP         	13
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_BP         	12
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_FAST_AND_BP         	11
#define AR_SERDES_PMRO_STD_VT_CONFIG_NOR_THREE_SLOW_IN_BP               	10
#define AR_SERDES_PMRO_STD_VT_CONFIG_NAND_THREE_SLOW_IN_BP              	9
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_BP             	8
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_NIM_BP             	7
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_IM_BP              	6
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_IM_BP              	5
#define AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_SLOW_IN_BP                 	4
#define AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_FAST_IN_BP                 	3
#define AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_SLOW_IN_BP                	2
#define AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_FAST_IN_BP                	1
#define AR_SERDES_PMRO_STD_VT_CONFIG_INVERTER_BP                        	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_RESERVED_31_16_QW                  	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_BUFFER_QW                          	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_QW         	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_QW         	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_QW         	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_FAST_AND_QW         	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_NOR_THREE_SLOW_IN_QW               	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_NAND_THREE_SLOW_IN_QW              	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_QW             	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_NIM_QW             	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_IM_QW              	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_IM_QW              	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_SLOW_IN_QW                 	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_FAST_IN_QW                 	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_SLOW_IN_QW                	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_FAST_IN_QW                	0
#define AR_SERDES_PMRO_STD_VT_CONFIG_INVERTER_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_PMRO_HI_VT_CONFIG DEFINES
 */
#define AR_SERDES_PMRO_HI_VT_CONFIG_RESERVED_31_16_MASK                 	0x00000000ffff0000ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_BUFFER_MASK                         	0x0000000000008000ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_MASK        	0x0000000000004000ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_MASK        	0x0000000000002000ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_MASK        	0x0000000000001000ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_FAST_AND_MASK        	0x0000000000000800ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_NOR_THREE_SLOW_IN_MASK              	0x0000000000000400ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_NAND_THREE_SLOW_IN_MASK             	0x0000000000000200ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_MASK            	0x0000000000000100ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_NIM_MASK            	0x0000000000000080ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_IM_MASK             	0x0000000000000040ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_IM_MASK             	0x0000000000000020ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_SLOW_IN_MASK                	0x0000000000000010ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_FAST_IN_MASK                	0x0000000000000008ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_SLOW_IN_MASK               	0x0000000000000004ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_FAST_IN_MASK               	0x0000000000000002ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_INVERTER_MASK                       	0x0000000000000001ull
#define AR_SERDES_PMRO_HI_VT_CONFIG_RESERVED_31_16_BP                   	16
#define AR_SERDES_PMRO_HI_VT_CONFIG_BUFFER_BP                           	15
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_BP          	14
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_BP          	13
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_BP          	12
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_FAST_AND_BP          	11
#define AR_SERDES_PMRO_HI_VT_CONFIG_NOR_THREE_SLOW_IN_BP                	10
#define AR_SERDES_PMRO_HI_VT_CONFIG_NAND_THREE_SLOW_IN_BP               	9
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_BP              	8
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_NIM_BP              	7
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_IM_BP               	6
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_IM_BP               	5
#define AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_SLOW_IN_BP                  	4
#define AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_FAST_IN_BP                  	3
#define AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_SLOW_IN_BP                 	2
#define AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_FAST_IN_BP                 	1
#define AR_SERDES_PMRO_HI_VT_CONFIG_INVERTER_BP                         	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_RESERVED_31_16_QW                   	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_BUFFER_QW                           	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_QW          	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_QW          	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_QW          	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_FAST_AND_QW          	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_NOR_THREE_SLOW_IN_QW                	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_NAND_THREE_SLOW_IN_QW               	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_QW              	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_NIM_QW              	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_IM_QW               	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_IM_QW               	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_SLOW_IN_QW                  	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_FAST_IN_QW                  	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_SLOW_IN_QW                 	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_FAST_IN_QW                 	0
#define AR_SERDES_PMRO_HI_VT_CONFIG_INVERTER_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_PMRO_LO_VT_CONFIG DEFINES
 */
#define AR_SERDES_PMRO_LO_VT_CONFIG_RESERVED_31_16_MASK                 	0x00000000ffff0000ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_BUFFER_MASK                         	0x0000000000008000ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_MASK        	0x0000000000004000ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_MASK        	0x0000000000002000ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_MASK        	0x0000000000001000ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_FAST_AND_MASK        	0x0000000000000800ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_NOR_THREE_SLOW_IN_MASK              	0x0000000000000400ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_NAND_THREE_SLOW_IN_MASK             	0x0000000000000200ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_MASK            	0x0000000000000100ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_NIM_MASK            	0x0000000000000080ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_IM_MASK             	0x0000000000000040ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_IM_MASK             	0x0000000000000020ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_SLOW_IN_MASK                	0x0000000000000010ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_FAST_IN_MASK                	0x0000000000000008ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_SLOW_IN_MASK               	0x0000000000000004ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_FAST_IN_MASK               	0x0000000000000002ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_INVERTER_MASK                       	0x0000000000000001ull
#define AR_SERDES_PMRO_LO_VT_CONFIG_RESERVED_31_16_BP                   	16
#define AR_SERDES_PMRO_LO_VT_CONFIG_BUFFER_BP                           	15
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_BP          	14
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_BP          	13
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_BP          	12
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_FAST_AND_BP          	11
#define AR_SERDES_PMRO_LO_VT_CONFIG_NOR_THREE_SLOW_IN_BP                	10
#define AR_SERDES_PMRO_LO_VT_CONFIG_NAND_THREE_SLOW_IN_BP               	9
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_BP              	8
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_NIM_BP              	7
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_IM_BP               	6
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_IM_BP               	5
#define AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_SLOW_IN_BP                  	4
#define AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_FAST_IN_BP                  	3
#define AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_SLOW_IN_BP                 	2
#define AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_FAST_IN_BP                 	1
#define AR_SERDES_PMRO_LO_VT_CONFIG_INVERTER_BP                         	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_RESERVED_31_16_QW                   	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_BUFFER_QW                           	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_QW          	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_QW          	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_QW          	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_FAST_AND_QW          	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_NOR_THREE_SLOW_IN_QW                	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_NAND_THREE_SLOW_IN_QW               	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_QW              	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_NIM_QW              	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_IM_QW               	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_IM_QW               	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_SLOW_IN_QW                  	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_FAST_IN_QW                  	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_SLOW_IN_QW                 	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_FAST_IN_QW                 	0
#define AR_SERDES_PMRO_LO_VT_CONFIG_INVERTER_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_PMRO_REF_CLK_CNTR DEFINES
 */
#define AR_SERDES_PMRO_REF_CLK_CNTR_RESERVED_31_16_MASK                 	0x00000000ffff0000ull
#define AR_SERDES_PMRO_REF_CLK_CNTR_COUNTER_VALUE_MASK                  	0x000000000000ffffull
#define AR_SERDES_PMRO_REF_CLK_CNTR_RESERVED_31_16_BP                   	16
#define AR_SERDES_PMRO_REF_CLK_CNTR_COUNTER_VALUE_BP                    	0
#define AR_SERDES_PMRO_REF_CLK_CNTR_RESERVED_31_16_QW                   	0
#define AR_SERDES_PMRO_REF_CLK_CNTR_COUNTER_VALUE_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_PMRO_OSC_CNTR DEFINES
 */
#define AR_SERDES_PMRO_OSC_CNTR_RESERVED_31_16_MASK                     	0x00000000ffff0000ull
#define AR_SERDES_PMRO_OSC_CNTR_OSC_COUNT_MASK                          	0x000000000000ffffull
#define AR_SERDES_PMRO_OSC_CNTR_RESERVED_31_16_BP                       	16
#define AR_SERDES_PMRO_OSC_CNTR_OSC_COUNT_BP                            	0
#define AR_SERDES_PMRO_OSC_CNTR_RESERVED_31_16_QW                       	0
#define AR_SERDES_PMRO_OSC_CNTR_OSC_COUNT_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_PMRO_UNIMPLEMENTED DEFINES
 */
#define AR_SERDES_PMRO_UNIMPLEMENTED_RESERVED_31_0_MASK                 	0x00000000ffffffffull
#define AR_SERDES_PMRO_UNIMPLEMENTED_RESERVED_31_0_BP                   	0
#define AR_SERDES_PMRO_UNIMPLEMENTED_RESERVED_31_0_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_PMRO_SBUS_ID DEFINES
 */
#define AR_SERDES_PMRO_SBUS_ID_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_PMRO_SBUS_ID_SBUS_ID_MASK                             	0x00000000000000ffull
#define AR_SERDES_PMRO_SBUS_ID_RESERVED_31_8_BP                         	8
#define AR_SERDES_PMRO_SBUS_ID_SBUS_ID_BP                               	0
#define AR_SERDES_PMRO_SBUS_ID_RESERVED_31_8_QW                         	0
#define AR_SERDES_PMRO_SBUS_ID_SBUS_ID_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_00 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_00_RESERVED_31_2_MASK                       	0x00000000fffffffcull
#define AR_SERDES_SBUS_CTRL_00_CISM_LOOP_MASK                           	0x0000000000000002ull
#define AR_SERDES_SBUS_CTRL_00_CISM_START_MASK                          	0x0000000000000001ull
#define AR_SERDES_SBUS_CTRL_00_RESERVED_31_2_BP                         	2
#define AR_SERDES_SBUS_CTRL_00_CISM_LOOP_BP                             	1
#define AR_SERDES_SBUS_CTRL_00_CISM_START_BP                            	0
#define AR_SERDES_SBUS_CTRL_00_RESERVED_31_2_QW                         	0
#define AR_SERDES_SBUS_CTRL_00_CISM_LOOP_QW                             	0
#define AR_SERDES_SBUS_CTRL_00_CISM_START_QW                            	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_01 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_01_RESERVED_31_5_MASK                       	0x00000000ffffffe0ull
#define AR_SERDES_SBUS_CTRL_01_CISM_TIMER_VALUE_MASK                    	0x000000000000001full
#define AR_SERDES_SBUS_CTRL_01_RESERVED_31_5_BP                         	5
#define AR_SERDES_SBUS_CTRL_01_CISM_TIMER_VALUE_BP                      	0
#define AR_SERDES_SBUS_CTRL_01_RESERVED_31_5_QW                         	0
#define AR_SERDES_SBUS_CTRL_01_CISM_TIMER_VALUE_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_02 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_02_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_02_LAST_SBUS_ADDRESS_MASK                   	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_02_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_02_LAST_SBUS_ADDRESS_BP                     	0
#define AR_SERDES_SBUS_CTRL_02_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_02_LAST_SBUS_ADDRESS_QW                     	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_0A DEFINES
 */
#define AR_SERDES_SBUS_CTRL_0A_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING0_MASK              	0x0000000000000080ull
#define AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING1_MASK              	0x000000000000000full
#define AR_SERDES_SBUS_CTRL_0A_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING0_BP                	7
#define AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING1_BP                	0
#define AR_SERDES_SBUS_CTRL_0A_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING0_QW                	0
#define AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING1_QW                	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_0B DEFINES
 */
#define AR_SERDES_SBUS_CTRL_0B_RESERVED_31_12_MASK                      	0x00000000fffff000ull
#define AR_SERDES_SBUS_CTRL_0B_CLOCK_DIVIDER_RESET_VALUE_MASK           	0x0000000000000fffull
#define AR_SERDES_SBUS_CTRL_0B_RESERVED_31_12_BP                        	12
#define AR_SERDES_SBUS_CTRL_0B_CLOCK_DIVIDER_RESET_VALUE_BP             	0
#define AR_SERDES_SBUS_CTRL_0B_RESERVED_31_12_QW                        	0
#define AR_SERDES_SBUS_CTRL_0B_CLOCK_DIVIDER_RESET_VALUE_QW             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_0C DEFINES
 */
#define AR_SERDES_SBUS_CTRL_0C_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_0C_CISM_LOOP_MASK                           	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_0C_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_0C_CISM_LOOP_BP                             	0
#define AR_SERDES_SBUS_CTRL_0C_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_0C_CISM_LOOP_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_0D DEFINES
 */
#define AR_SERDES_SBUS_CTRL_0D_RESERVED_31_4_MASK                       	0x00000000fffffff0ull
#define AR_SERDES_SBUS_CTRL_0D_CLOCK_DIVIDER_RESET_VALUE_PAGE1_MASK     	0x000000000000000full
#define AR_SERDES_SBUS_CTRL_0D_RESERVED_31_4_BP                         	4
#define AR_SERDES_SBUS_CTRL_0D_CLOCK_DIVIDER_RESET_VALUE_PAGE1_BP       	0
#define AR_SERDES_SBUS_CTRL_0D_RESERVED_31_4_QW                         	0
#define AR_SERDES_SBUS_CTRL_0D_CLOCK_DIVIDER_RESET_VALUE_PAGE1_QW       	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_10 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_10_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_10_CISM_SBUS_RX_ADDRESS_MASK                	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_10_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_10_CISM_SBUS_RX_ADDRESS_BP                  	0
#define AR_SERDES_SBUS_CTRL_10_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_10_CISM_SBUS_RX_ADDRESS_QW                  	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_11 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_11_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_11_CISM_COMMAND_1_MASK                      	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_11_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_11_CISM_COMMAND_1_BP                        	0
#define AR_SERDES_SBUS_CTRL_11_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_11_CISM_COMMAND_1_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_12 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_12_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_12_CISM_DATA_ADDRESS_1_MASK                 	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_12_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_12_CISM_DATA_ADDRESS_1_BP                   	0
#define AR_SERDES_SBUS_CTRL_12_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_12_CISM_DATA_ADDRESS_1_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_13 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_13_CISM_DATA_WORD_1_MASK                    	0x00000000ffffffffull
#define AR_SERDES_SBUS_CTRL_13_CISM_DATA_WORD_1_BP                      	0
#define AR_SERDES_SBUS_CTRL_13_CISM_DATA_WORD_1_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_14 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_14_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_14_CISM_COMMAND_2_MASK                      	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_14_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_14_CISM_COMMAND_2_BP                        	0
#define AR_SERDES_SBUS_CTRL_14_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_14_CISM_COMMAND_2_QW                        	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_15 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_15_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_15_CISM_DATA_ADDRESS_2_MASK                 	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_15_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_15_CISM_DATA_ADDRESS_2_BP                   	0
#define AR_SERDES_SBUS_CTRL_15_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_15_CISM_DATA_ADDRESS_2_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_16 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_16_CISM_DATA_WORD_2_MASK                    	0x00000000ffffffffull
#define AR_SERDES_SBUS_CTRL_16_CISM_DATA_WORD_2_BP                      	0
#define AR_SERDES_SBUS_CTRL_16_CISM_DATA_WORD_2_QW                      	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_20 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_20_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_20_BSB_SELECT_MASK                          	0x0000000000000080ull
#define AR_SERDES_SBUS_CTRL_20_BSB_CONTROL_MASK                         	0x000000000000001full
#define AR_SERDES_SBUS_CTRL_20_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_20_BSB_SELECT_BP                            	7
#define AR_SERDES_SBUS_CTRL_20_BSB_CONTROL_BP                           	0
#define AR_SERDES_SBUS_CTRL_20_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_20_BSB_SELECT_QW                            	0
#define AR_SERDES_SBUS_CTRL_20_BSB_CONTROL_QW                           	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_80 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_80_GENERIC_WRITE_MASK                       	0x00000000ffffffffull
#define AR_SERDES_SBUS_CTRL_80_GENERIC_WRITE_BP                         	0
#define AR_SERDES_SBUS_CTRL_80_GENERIC_WRITE_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_81 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_81_RESERVED_31_0_MASK                       	0x00000000ffffffffull
#define AR_SERDES_SBUS_CTRL_81_RESERVED_31_0_BP                         	0
#define AR_SERDES_SBUS_CTRL_81_RESERVED_31_0_QW                         	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_82 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_82_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_82_GENERIC_WRITE_PAGE0_MASK                 	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_82_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_82_GENERIC_WRITE_PAGE0_BP                   	0
#define AR_SERDES_SBUS_CTRL_82_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_82_GENERIC_WRITE_PAGE0_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_83 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_83_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_83_GENERIC_WRITE_PAGE1_MASK                 	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_83_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_83_GENERIC_WRITE_PAGE1_BP                   	0
#define AR_SERDES_SBUS_CTRL_83_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_83_GENERIC_WRITE_PAGE1_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_84 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_84_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_84_GENERIC_WRITE_PAGE2_MASK                 	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_84_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_84_GENERIC_WRITE_PAGE2_BP                   	0
#define AR_SERDES_SBUS_CTRL_84_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_84_GENERIC_WRITE_PAGE2_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_85 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_85_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_85_GENERIC_WRITE_PAGE3_MASK                 	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_85_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_85_GENERIC_WRITE_PAGE3_BP                   	0
#define AR_SERDES_SBUS_CTRL_85_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_85_GENERIC_WRITE_PAGE3_QW                   	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_86 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_86_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_86_GENERIC_READ_PAGE0_MASK                  	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_86_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_86_GENERIC_READ_PAGE0_BP                    	0
#define AR_SERDES_SBUS_CTRL_86_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_86_GENERIC_READ_PAGE0_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_87 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_87_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_87_GENERIC_READ_PAGE1_MASK                  	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_87_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_87_GENERIC_READ_PAGE1_BP                    	0
#define AR_SERDES_SBUS_CTRL_87_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_87_GENERIC_READ_PAGE1_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_88 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_88_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_88_GENERIC_READ_PAGE2_MASK                  	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_88_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_88_GENERIC_READ_PAGE2_BP                    	0
#define AR_SERDES_SBUS_CTRL_88_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_88_GENERIC_READ_PAGE2_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_89 DEFINES
 */
#define AR_SERDES_SBUS_CTRL_89_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_89_GENERIC_READ_PAGE3_MASK                  	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_89_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_89_GENERIC_READ_PAGE3_BP                    	0
#define AR_SERDES_SBUS_CTRL_89_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_89_GENERIC_READ_PAGE3_QW                    	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_FE DEFINES
 */
#define AR_SERDES_SBUS_CTRL_FE_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_FE_SBUS_ID_MASK                             	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_FE_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_FE_SBUS_ID_BP                               	0
#define AR_SERDES_SBUS_CTRL_FE_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_FE_SBUS_ID_QW                               	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */


/*
 *  AR_SERDES_SBUS_CTRL_FF DEFINES
 */
#define AR_SERDES_SBUS_CTRL_FF_RESERVED_31_8_MASK                       	0x00000000ffffff00ull
#define AR_SERDES_SBUS_CTRL_FF_IP_IDCODE_MASK                           	0x00000000000000ffull
#define AR_SERDES_SBUS_CTRL_FF_RESERVED_31_8_BP                         	8
#define AR_SERDES_SBUS_CTRL_FF_IP_IDCODE_BP                             	0
#define AR_SERDES_SBUS_CTRL_FF_RESERVED_31_8_QW                         	0
#define AR_SERDES_SBUS_CTRL_FF_IP_IDCODE_QW                             	0
#ifdef EXCEPTIONS_DEFS
#endif /* EXCEPTIONS_DEFS */



/*
 *  AR SBUS MACROS
 */
#ifndef RD_FIELD
#define RD_FIELD(d, bp, m)	(((d)&(m))>>(bp))
#endif
#ifndef WR_FIELD
#define WR_FIELD(mmr, d, bp, m)	(mmr = (((mmr) & ~(m)) | ((((uint64_t)(d))<<(bp)) & (m))))
#endif
#define RF_AR_SERDES_SBUS_00_RESERVED_31_15(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_00_RESERVED_31_15_BP,\
									AR_SERDES_SBUS_00_RESERVED_31_15_MASK)
#define WF_AR_SERDES_SBUS_00_RESERVED_31_15(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_00_RESERVED_31_15_BP,\
									AR_SERDES_SBUS_00_RESERVED_31_15_MASK)
#define RF_AR_SERDES_SBUS_00_TX_PHASE_SLIP_CNTL(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_00_TX_PHASE_SLIP_CNTL_BP,\
									AR_SERDES_SBUS_00_TX_PHASE_SLIP_CNTL_MASK)
#define WF_AR_SERDES_SBUS_00_TX_PHASE_SLIP_CNTL(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_00_TX_PHASE_SLIP_CNTL_BP,\
									AR_SERDES_SBUS_00_TX_PHASE_SLIP_CNTL_MASK)
#define RF_AR_SERDES_SBUS_00_TX_PHASE_CAL_EN_CNTL(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_SBUS_00_TX_PHASE_CAL_EN_CNTL_BP,\
									AR_SERDES_SBUS_00_TX_PHASE_CAL_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_00_TX_PHASE_CAL_EN_CNTL(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_00_TX_PHASE_CAL_EN_CNTL_BP,\
									AR_SERDES_SBUS_00_TX_PHASE_CAL_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_00_TX_PHASE_MASTER_CNTL(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_SBUS_00_TX_PHASE_MASTER_CNTL_BP,\
									AR_SERDES_SBUS_00_TX_PHASE_MASTER_CNTL_MASK)
#define WF_AR_SERDES_SBUS_00_TX_PHASE_MASTER_CNTL(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_00_TX_PHASE_MASTER_CNTL_BP,\
									AR_SERDES_SBUS_00_TX_PHASE_MASTER_CNTL_MASK)
#define RF_AR_SERDES_SBUS_00_REF_SEL_CNTL(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_00_REF_SEL_CNTL_BP,\
									AR_SERDES_SBUS_00_REF_SEL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_00_REF_SEL_CNTL(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_00_REF_SEL_CNTL_BP,\
									AR_SERDES_SBUS_00_REF_SEL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_00_PLL_RECAL_EN_CNTL(mmr)             	RD_FIELD(mmr,\
									AR_SERDES_SBUS_00_PLL_RECAL_EN_CNTL_BP,\
									AR_SERDES_SBUS_00_PLL_RECAL_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_00_PLL_RECAL_EN_CNTL(mmr,v)           	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_00_PLL_RECAL_EN_CNTL_BP,\
									AR_SERDES_SBUS_00_PLL_RECAL_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_00_RX_EN_CNTL(mmr)                    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_00_RX_EN_CNTL_BP,\
									AR_SERDES_SBUS_00_RX_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_00_RX_EN_CNTL(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_00_RX_EN_CNTL_BP,\
									AR_SERDES_SBUS_00_RX_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_00_TX_EN_CNTL(mmr)                    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_00_TX_EN_CNTL_BP,\
									AR_SERDES_SBUS_00_TX_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_00_TX_EN_CNTL(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_00_TX_EN_CNTL_BP,\
									AR_SERDES_SBUS_00_TX_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_00_SBUS_CLK_GATE(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_00_SBUS_CLK_GATE_BP,\
									AR_SERDES_SBUS_00_SBUS_CLK_GATE_MASK)
#define WF_AR_SERDES_SBUS_00_SBUS_CLK_GATE(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_00_SBUS_CLK_GATE_BP,\
									AR_SERDES_SBUS_00_SBUS_CLK_GATE_MASK)
#define RF_AR_SERDES_SBUS_01_RESERVED_31_25(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_01_RESERVED_31_25_BP,\
									AR_SERDES_SBUS_01_RESERVED_31_25_MASK)
#define WF_AR_SERDES_SBUS_01_RESERVED_31_25(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_01_RESERVED_31_25_BP,\
									AR_SERDES_SBUS_01_RESERVED_31_25_MASK)
#define RF_AR_SERDES_SBUS_01_RX_RATE_SEL_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_01_RX_RATE_SEL_CNTL_BP,\
									AR_SERDES_SBUS_01_RX_RATE_SEL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_01_RX_RATE_SEL_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_01_RX_RATE_SEL_CNTL_BP,\
									AR_SERDES_SBUS_01_RX_RATE_SEL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_01_RESERVED_15_9(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_01_RESERVED_15_9_BP,\
									AR_SERDES_SBUS_01_RESERVED_15_9_MASK)
#define WF_AR_SERDES_SBUS_01_RESERVED_15_9(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_01_RESERVED_15_9_BP,\
									AR_SERDES_SBUS_01_RESERVED_15_9_MASK)
#define RF_AR_SERDES_SBUS_01_TX_RATE_SEL_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_01_TX_RATE_SEL_CNTL_BP,\
									AR_SERDES_SBUS_01_TX_RATE_SEL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_01_TX_RATE_SEL_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_01_TX_RATE_SEL_CNTL_BP,\
									AR_SERDES_SBUS_01_TX_RATE_SEL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_02_RESERVED_31_3(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_02_RESERVED_31_3_BP,\
									AR_SERDES_SBUS_02_RESERVED_31_3_MASK)
#define WF_AR_SERDES_SBUS_02_RESERVED_31_3(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_02_RESERVED_31_3_BP,\
									AR_SERDES_SBUS_02_RESERVED_31_3_MASK)
#define RF_AR_SERDES_SBUS_02_RX_RDY_OBS(mmr)                    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_02_RX_RDY_OBS_BP,\
									AR_SERDES_SBUS_02_RX_RDY_OBS_MASK)
#define WF_AR_SERDES_SBUS_02_RX_RDY_OBS(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_02_RX_RDY_OBS_BP,\
									AR_SERDES_SBUS_02_RX_RDY_OBS_MASK)
#define RF_AR_SERDES_SBUS_02_TX_RDY_OBS(mmr)                    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_02_TX_RDY_OBS_BP,\
									AR_SERDES_SBUS_02_TX_RDY_OBS_MASK)
#define WF_AR_SERDES_SBUS_02_TX_RDY_OBS(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_02_TX_RDY_OBS_BP,\
									AR_SERDES_SBUS_02_TX_RDY_OBS_MASK)
#define RF_AR_SERDES_SBUS_02_RESERVED_0(mmr)                    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_02_RESERVED_0_BP,\
									AR_SERDES_SBUS_02_RESERVED_0_MASK)
#define WF_AR_SERDES_SBUS_02_RESERVED_0(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_02_RESERVED_0_BP,\
									AR_SERDES_SBUS_02_RESERVED_0_MASK)
#define RF_AR_SERDES_SBUS_03_RESERVED_31_4(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_03_RESERVED_31_4_BP,\
									AR_SERDES_SBUS_03_RESERVED_31_4_MASK)
#define WF_AR_SERDES_SBUS_03_RESERVED_31_4(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_03_RESERVED_31_4_BP,\
									AR_SERDES_SBUS_03_RESERVED_31_4_MASK)
#define RF_AR_SERDES_SBUS_03_RX_WIDTH_MODE_CNTL(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_03_RX_WIDTH_MODE_CNTL_BP,\
									AR_SERDES_SBUS_03_RX_WIDTH_MODE_CNTL_MASK)
#define WF_AR_SERDES_SBUS_03_RX_WIDTH_MODE_CNTL(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_03_RX_WIDTH_MODE_CNTL_BP,\
									AR_SERDES_SBUS_03_RX_WIDTH_MODE_CNTL_MASK)
#define RF_AR_SERDES_SBUS_03_TX_WIDTH_MODE_CNTL(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_03_TX_WIDTH_MODE_CNTL_BP,\
									AR_SERDES_SBUS_03_TX_WIDTH_MODE_CNTL_MASK)
#define WF_AR_SERDES_SBUS_03_TX_WIDTH_MODE_CNTL(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_03_TX_WIDTH_MODE_CNTL_BP,\
									AR_SERDES_SBUS_03_TX_WIDTH_MODE_CNTL_MASK)
#define RF_AR_SERDES_SBUS_05_RESERVED_31_8(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_05_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_05_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_05_RESERVED_31_8(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_05_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_05_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_05_TX_PHASE_OUT_OBS(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_05_TX_PHASE_OUT_OBS_BP,\
									AR_SERDES_SBUS_05_TX_PHASE_OUT_OBS_MASK)
#define WF_AR_SERDES_SBUS_05_TX_PHASE_OUT_OBS(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_05_TX_PHASE_OUT_OBS_BP,\
									AR_SERDES_SBUS_05_TX_PHASE_OUT_OBS_MASK)
#define RF_AR_SERDES_SBUS_05_RESERVED_2_0(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_05_RESERVED_2_0_BP,\
									AR_SERDES_SBUS_05_RESERVED_2_0_MASK)
#define WF_AR_SERDES_SBUS_05_RESERVED_2_0(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_05_RESERVED_2_0_BP,\
									AR_SERDES_SBUS_05_RESERVED_2_0_MASK)
#define RF_AR_SERDES_SBUS_06_RESERVED_31_6(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_06_RESERVED_31_6_BP,\
									AR_SERDES_SBUS_06_RESERVED_31_6_MASK)
#define WF_AR_SERDES_SBUS_06_RESERVED_31_6(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_06_RESERVED_31_6_BP,\
									AR_SERDES_SBUS_06_RESERVED_31_6_MASK)
#define RF_AR_SERDES_SBUS_06_TX_PHASE_IN_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_06_TX_PHASE_IN_CNTL_BP,\
									AR_SERDES_SBUS_06_TX_PHASE_IN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_06_TX_PHASE_IN_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_06_TX_PHASE_IN_CNTL_BP,\
									AR_SERDES_SBUS_06_TX_PHASE_IN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_06_TX_PHASE_IN_GATE(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_06_TX_PHASE_IN_GATE_BP,\
									AR_SERDES_SBUS_06_TX_PHASE_IN_GATE_MASK)
#define WF_AR_SERDES_SBUS_06_TX_PHASE_IN_GATE(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_06_TX_PHASE_IN_GATE_BP,\
									AR_SERDES_SBUS_06_TX_PHASE_IN_GATE_MASK)
#define RF_AR_SERDES_SBUS_07_RESERVED_31_13(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_07_RESERVED_31_13_BP,\
									AR_SERDES_SBUS_07_RESERVED_31_13_MASK)
#define WF_AR_SERDES_SBUS_07_RESERVED_31_13(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_07_RESERVED_31_13_BP,\
									AR_SERDES_SBUS_07_RESERVED_31_13_MASK)
#define RF_AR_SERDES_SBUS_07_HALT_CNTL(mmr)                     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_07_HALT_CNTL_BP,\
									AR_SERDES_SBUS_07_HALT_CNTL_MASK)
#define WF_AR_SERDES_SBUS_07_HALT_CNTL(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_07_HALT_CNTL_BP,\
									AR_SERDES_SBUS_07_HALT_CNTL_MASK)
#define RF_AR_SERDES_SBUS_07_ALLOW_CORE_HALT_CNTL(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_SBUS_07_ALLOW_CORE_HALT_CNTL_BP,\
									AR_SERDES_SBUS_07_ALLOW_CORE_HALT_CNTL_MASK)
#define WF_AR_SERDES_SBUS_07_ALLOW_CORE_HALT_CNTL(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_07_ALLOW_CORE_HALT_CNTL_BP,\
									AR_SERDES_SBUS_07_ALLOW_CORE_HALT_CNTL_MASK)
#define RF_AR_SERDES_SBUS_07_RESERVED_3_0(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_07_RESERVED_3_0_BP,\
									AR_SERDES_SBUS_07_RESERVED_3_0_MASK)
#define WF_AR_SERDES_SBUS_07_RESERVED_3_0(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_07_RESERVED_3_0_BP,\
									AR_SERDES_SBUS_07_RESERVED_3_0_MASK)
#define RF_AR_SERDES_SBUS_0B_RESERVED_31_3(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_0B_RESERVED_31_3_BP,\
									AR_SERDES_SBUS_0B_RESERVED_31_3_MASK)
#define WF_AR_SERDES_SBUS_0B_RESERVED_31_3(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_0B_RESERVED_31_3_BP,\
									AR_SERDES_SBUS_0B_RESERVED_31_3_MASK)
#define RF_AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_CTRL(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_CTRL_BP,\
									AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_CTRL_MASK)
#define WF_AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_CTRL(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_CTRL_BP,\
									AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_CTRL_MASK)
#define RF_AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_GATE(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_GATE_BP,\
									AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_GATE_MASK)
#define WF_AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_GATE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_GATE_BP,\
									AR_SERDES_SBUS_0B_TX_REFCLK_SYNC_GATE_MASK)
#define RF_AR_SERDES_SBUS_0B_RESERVED_0(mmr)                    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_0B_RESERVED_0_BP,\
									AR_SERDES_SBUS_0B_RESERVED_0_MASK)
#define WF_AR_SERDES_SBUS_0B_RESERVED_0(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_0B_RESERVED_0_BP,\
									AR_SERDES_SBUS_0B_RESERVED_0_MASK)
#define RF_AR_SERDES_SBUS_3C_RESERVED_31_13(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3C_RESERVED_31_13_BP,\
									AR_SERDES_SBUS_3C_RESERVED_31_13_MASK)
#define WF_AR_SERDES_SBUS_3C_RESERVED_31_13(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3C_RESERVED_31_13_BP,\
									AR_SERDES_SBUS_3C_RESERVED_31_13_MASK)
#define RF_AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_POST_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_POST_CNTL_BP,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_POST_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_POST_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_POST_CNTL_BP,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_POST_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_PRE_CNTL(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_PRE_CNTL_BP,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_PRE_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_PRE_CNTL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_PRE_CNTL_BP,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_PRE_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_GATE(mmr)             	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_GATE_BP,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_GATE_MASK)
#define WF_AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_GATE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_GATE_BP,\
									AR_SERDES_SBUS_3C_TX_OUTPUT_EQ_GATE_MASK)
#define RF_AR_SERDES_SBUS_3D_RESERVED_31_15(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3D_RESERVED_31_15_BP,\
									AR_SERDES_SBUS_3D_RESERVED_31_15_MASK)
#define WF_AR_SERDES_SBUS_3D_RESERVED_31_15(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3D_RESERVED_31_15_BP,\
									AR_SERDES_SBUS_3D_RESERVED_31_15_MASK)
#define RF_AR_SERDES_SBUS_3D_TX_IMPEDANCE_GATE(mmr)             	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3D_TX_IMPEDANCE_GATE_BP,\
									AR_SERDES_SBUS_3D_TX_IMPEDANCE_GATE_MASK)
#define WF_AR_SERDES_SBUS_3D_TX_IMPEDANCE_GATE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3D_TX_IMPEDANCE_GATE_BP,\
									AR_SERDES_SBUS_3D_TX_IMPEDANCE_GATE_MASK)
#define RF_AR_SERDES_SBUS_3D_TX_IMPEDANCE_CNTL(mmr)             	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3D_TX_IMPEDANCE_CNTL_BP,\
									AR_SERDES_SBUS_3D_TX_IMPEDANCE_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3D_TX_IMPEDANCE_CNTL(mmr,v)           	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3D_TX_IMPEDANCE_CNTL_BP,\
									AR_SERDES_SBUS_3D_TX_IMPEDANCE_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3D_TX_OUTPUT_ATTENUATION_CNTL(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3D_TX_OUTPUT_ATTENUATION_CNTL_BP,\
									AR_SERDES_SBUS_3D_TX_OUTPUT_ATTENUATION_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3D_TX_OUTPUT_ATTENUATION_CNTL(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3D_TX_OUTPUT_ATTENUATION_CNTL_BP,\
									AR_SERDES_SBUS_3D_TX_OUTPUT_ATTENUATION_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3D_TX_LND_DISABLE_CNTL(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3D_TX_LND_DISABLE_CNTL_BP,\
									AR_SERDES_SBUS_3D_TX_LND_DISABLE_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3D_TX_LND_DISABLE_CNTL(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3D_TX_LND_DISABLE_CNTL_BP,\
									AR_SERDES_SBUS_3D_TX_LND_DISABLE_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3D_TX_OUTPUT_SLEW_CNTL(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3D_TX_OUTPUT_SLEW_CNTL_BP,\
									AR_SERDES_SBUS_3D_TX_OUTPUT_SLEW_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3D_TX_OUTPUT_SLEW_CNTL(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3D_TX_OUTPUT_SLEW_CNTL_BP,\
									AR_SERDES_SBUS_3D_TX_OUTPUT_SLEW_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3D_TX_ATTENUATION_GATE(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3D_TX_ATTENUATION_GATE_BP,\
									AR_SERDES_SBUS_3D_TX_ATTENUATION_GATE_MASK)
#define WF_AR_SERDES_SBUS_3D_TX_ATTENUATION_GATE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3D_TX_ATTENUATION_GATE_BP,\
									AR_SERDES_SBUS_3D_TX_ATTENUATION_GATE_MASK)
#define RF_AR_SERDES_SBUS_3E_RESERVED_31_3(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3E_RESERVED_31_3_BP,\
									AR_SERDES_SBUS_3E_RESERVED_31_3_MASK)
#define WF_AR_SERDES_SBUS_3E_RESERVED_31_3(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3E_RESERVED_31_3_BP,\
									AR_SERDES_SBUS_3E_RESERVED_31_3_MASK)
#define RF_AR_SERDES_SBUS_3E_NEAR_LOOPBACK_EN_CNTL(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3E_NEAR_LOOPBACK_EN_CNTL_BP,\
									AR_SERDES_SBUS_3E_NEAR_LOOPBACK_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3E_NEAR_LOOPBACK_EN_CNTL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3E_NEAR_LOOPBACK_EN_CNTL_BP,\
									AR_SERDES_SBUS_3E_NEAR_LOOPBACK_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3E_TX_OUTPUT_EN_CNTL(mmr)             	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3E_TX_OUTPUT_EN_CNTL_BP,\
									AR_SERDES_SBUS_3E_TX_OUTPUT_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3E_TX_OUTPUT_EN_CNTL(mmr,v)           	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3E_TX_OUTPUT_EN_CNTL_BP,\
									AR_SERDES_SBUS_3E_TX_OUTPUT_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3E_TX_OUTPUT_GATE(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3E_TX_OUTPUT_GATE_BP,\
									AR_SERDES_SBUS_3E_TX_OUTPUT_GATE_MASK)
#define WF_AR_SERDES_SBUS_3E_TX_OUTPUT_GATE(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3E_TX_OUTPUT_GATE_BP,\
									AR_SERDES_SBUS_3E_TX_OUTPUT_GATE_MASK)
#define RF_AR_SERDES_SBUS_3F_RESERVED_31_13(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_RESERVED_31_13_BP,\
									AR_SERDES_SBUS_3F_RESERVED_31_13_MASK)
#define WF_AR_SERDES_SBUS_3F_RESERVED_31_13(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_RESERVED_31_13_BP,\
									AR_SERDES_SBUS_3F_RESERVED_31_13_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_ALT_PATTERN_EN_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_ALT_PATTERN_EN_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_ALT_PATTERN_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_ALT_PATTERN_EN_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_ALT_PATTERN_EN_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_ALT_PATTERN_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_ELEC_IDLE_CNTL(mmr)             	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_ELEC_IDLE_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_ELEC_IDLE_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_ELEC_IDLE_CNTL(mmr,v)           	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_ELEC_IDLE_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_ELEC_IDLE_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_POLARITY_INV_EN_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_POLARITY_INV_EN_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_POLARITY_INV_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_POLARITY_INV_EN_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_POLARITY_INV_EN_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_POLARITY_INV_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_INVERT_ONE_WORD_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_INVERT_ONE_WORD_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_INVERT_ONE_WORD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_INVERT_ONE_WORD_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_INVERT_ONE_WORD_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_INVERT_ONE_WORD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_SEL_CORE_DATA_CNTL(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_SEL_CORE_DATA_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_SEL_CORE_DATA_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_SEL_CORE_DATA_CNTL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_SEL_CORE_DATA_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_SEL_CORE_DATA_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_PATTERN_GEN_EN_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_EN_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_PATTERN_GEN_EN_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_EN_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_PATTERN_GEN_SEL_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_SEL_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_SEL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_PATTERN_GEN_SEL_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_SEL_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_SEL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_PATTERN_GEN_CTL_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_CTL_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_CTL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_PATTERN_GEN_CTL_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_CTL_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_PATTERN_GEN_CTL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_DATA_SEL_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_DATA_SEL_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_DATA_SEL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_DATA_SEL_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_DATA_SEL_CNTL_BP,\
									AR_SERDES_SBUS_3F_TX_DATA_SEL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_3F_TX_DATA_GATE(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_3F_TX_DATA_GATE_BP,\
									AR_SERDES_SBUS_3F_TX_DATA_GATE_MASK)
#define WF_AR_SERDES_SBUS_3F_TX_DATA_GATE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_3F_TX_DATA_GATE_BP,\
									AR_SERDES_SBUS_3F_TX_DATA_GATE_MASK)
#define RF_AR_SERDES_SBUS_40_RESERVED_31_20(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_40_RESERVED_31_20_BP,\
									AR_SERDES_SBUS_40_RESERVED_31_20_MASK)
#define WF_AR_SERDES_SBUS_40_RESERVED_31_20(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_40_RESERVED_31_20_BP,\
									AR_SERDES_SBUS_40_RESERVED_31_20_MASK)
#define RF_AR_SERDES_SBUS_40_TX_USER_REG_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_40_TX_USER_REG_CNTL_BP,\
									AR_SERDES_SBUS_40_TX_USER_REG_CNTL_MASK)
#define WF_AR_SERDES_SBUS_40_TX_USER_REG_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_40_TX_USER_REG_CNTL_BP,\
									AR_SERDES_SBUS_40_TX_USER_REG_CNTL_MASK)
#define RF_AR_SERDES_SBUS_41_RESERVED_31_1(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_41_RESERVED_31_1_BP,\
									AR_SERDES_SBUS_41_RESERVED_31_1_MASK)
#define WF_AR_SERDES_SBUS_41_RESERVED_31_1(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_41_RESERVED_31_1_BP,\
									AR_SERDES_SBUS_41_RESERVED_31_1_MASK)
#define RF_AR_SERDES_SBUS_41_RX_K30_7_ERR_EN_CNTL(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_SBUS_41_RX_K30_7_ERR_EN_CNTL_BP,\
									AR_SERDES_SBUS_41_RX_K30_7_ERR_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_41_RX_K30_7_ERR_EN_CNTL(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_41_RX_K30_7_ERR_EN_CNTL_BP,\
									AR_SERDES_SBUS_41_RX_K30_7_ERR_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RESERVED_31_21(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RESERVED_31_21_BP,\
									AR_SERDES_SBUS_50_RESERVED_31_21_MASK)
#define WF_AR_SERDES_SBUS_50_RESERVED_31_21(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RESERVED_31_21_BP,\
									AR_SERDES_SBUS_50_RESERVED_31_21_MASK)
#define RF_AR_SERDES_SBUS_50_RX_OFFSET_DATA_SEL_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_OFFSET_DATA_SEL_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_OFFSET_DATA_SEL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_OFFSET_DATA_SEL_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_OFFSET_DATA_SEL_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_OFFSET_DATA_SEL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RESERVED_19_18(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RESERVED_19_18_BP,\
									AR_SERDES_SBUS_50_RESERVED_19_18_MASK)
#define WF_AR_SERDES_SBUS_50_RESERVED_19_18(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RESERVED_19_18_BP,\
									AR_SERDES_SBUS_50_RESERVED_19_18_MASK)
#define RF_AR_SERDES_SBUS_50_SIG_STRENGTH_STRONG_EN_CNTL(mmr)   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_SIG_STRENGTH_STRONG_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_SIG_STRENGTH_STRONG_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_SIG_STRENGTH_STRONG_EN_CNTL(mmr,v) 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_SIG_STRENGTH_STRONG_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_SIG_STRENGTH_STRONG_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_SIG_STRENGTH_EN_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_SIG_STRENGTH_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_SIG_STRENGTH_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_SIG_STRENGTH_EN_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_SIG_STRENGTH_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_SIG_STRENGTH_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_DROPOUT_CHAR_EN_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_DROPOUT_CHAR_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_DROPOUT_CHAR_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_DROPOUT_CHAR_EN_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_DROPOUT_CHAR_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_DROPOUT_CHAR_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_INVERT_ONE_WORD_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_INVERT_ONE_WORD_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_INVERT_ONE_WORD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_INVERT_ONE_WORD_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_INVERT_ONE_WORD_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_INVERT_ONE_WORD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_PATTERN_CMP_EN_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_PATTERN_CMP_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_PATTERN_CMP_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_PATTERN_CMP_EN_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_PATTERN_CMP_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_PATTERN_CMP_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_PATTERN_CMP_SEL_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_PATTERN_CMP_SEL_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_PATTERN_CMP_SEL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_PATTERN_CMP_SEL_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_PATTERN_CMP_SEL_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_PATTERN_CMP_SEL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_PATTERN_CTL_CNTL(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_PATTERN_CTL_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_PATTERN_CTL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_PATTERN_CTL_CNTL(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_PATTERN_CTL_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_PATTERN_CTL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_SEL_CNTL(mmr)                   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_SEL_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_SEL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_SEL_CNTL(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_SEL_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_SEL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_K28_7_COMMA_DET_EN_CNTL(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_K28_7_COMMA_DET_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_K28_7_COMMA_DET_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_K28_7_COMMA_DET_EN_CNTL(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_K28_7_COMMA_DET_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_K28_7_COMMA_DET_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_DATA_HALT_LOAD_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_DATA_HALT_LOAD_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_DATA_HALT_LOAD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_DATA_HALT_LOAD_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_DATA_HALT_LOAD_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_DATA_HALT_LOAD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_POLARITY_INV_EN_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_POLARITY_INV_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_POLARITY_INV_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_POLARITY_INV_EN_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_POLARITY_INV_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_POLARITY_INV_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_BIT_SLIP_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_BIT_SLIP_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_BIT_SLIP_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_BIT_SLIP_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_BIT_SLIP_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_BIT_SLIP_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_8B10B_ALIGN_EN_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_8B10B_ALIGN_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_8B10B_ALIGN_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_50_RX_8B10B_ALIGN_EN_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_8B10B_ALIGN_EN_CNTL_BP,\
									AR_SERDES_SBUS_50_RX_8B10B_ALIGN_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_50_RX_DATA_GATE(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_50_RX_DATA_GATE_BP,\
									AR_SERDES_SBUS_50_RX_DATA_GATE_MASK)
#define WF_AR_SERDES_SBUS_50_RX_DATA_GATE(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_50_RX_DATA_GATE_BP,\
									AR_SERDES_SBUS_50_RX_DATA_GATE_MASK)
#define RF_AR_SERDES_SBUS_51_RESERVED_31_3(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_51_RESERVED_31_3_BP,\
									AR_SERDES_SBUS_51_RESERVED_31_3_MASK)
#define WF_AR_SERDES_SBUS_51_RESERVED_31_3(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_51_RESERVED_31_3_BP,\
									AR_SERDES_SBUS_51_RESERVED_31_3_MASK)
#define RF_AR_SERDES_SBUS_51_RX_ALT_PATTERN_EN_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_51_RX_ALT_PATTERN_EN_CNTL_BP,\
									AR_SERDES_SBUS_51_RX_ALT_PATTERN_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_51_RX_ALT_PATTERN_EN_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_51_RX_ALT_PATTERN_EN_CNTL_BP,\
									AR_SERDES_SBUS_51_RX_ALT_PATTERN_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_51_RESERVED_1_0(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_51_RESERVED_1_0_BP,\
									AR_SERDES_SBUS_51_RESERVED_1_0_MASK)
#define WF_AR_SERDES_SBUS_51_RESERVED_1_0(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_51_RESERVED_1_0_BP,\
									AR_SERDES_SBUS_51_RESERVED_1_0_MASK)
#define RF_AR_SERDES_SBUS_52_RESERVED_31_20(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_52_RESERVED_31_20_BP,\
									AR_SERDES_SBUS_52_RESERVED_31_20_MASK)
#define WF_AR_SERDES_SBUS_52_RESERVED_31_20(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_52_RESERVED_31_20_BP,\
									AR_SERDES_SBUS_52_RESERVED_31_20_MASK)
#define RF_AR_SERDES_SBUS_52_RX_USER_REG_CNTL(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_52_RX_USER_REG_CNTL_BP,\
									AR_SERDES_SBUS_52_RX_USER_REG_CNTL_MASK)
#define WF_AR_SERDES_SBUS_52_RX_USER_REG_CNTL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_52_RX_USER_REG_CNTL_BP,\
									AR_SERDES_SBUS_52_RX_USER_REG_CNTL_MASK)
#define RF_AR_SERDES_SBUS_53_RESERVED_31_8(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_53_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_53_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_53_RESERVED_31_8(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_53_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_53_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_53_RX_ERROR_MONITOR_EN_CNTL(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_EN_CNTL_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_53_RX_ERROR_MONITOR_EN_CNTL(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_EN_CNTL_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_53_RX_ERROR_MONITOR_RESET_CNTL(mmr)   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_RESET_CNTL_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_RESET_CNTL_MASK)
#define WF_AR_SERDES_SBUS_53_RX_ERROR_MONITOR_RESET_CNTL(mmr,v) 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_RESET_CNTL_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_RESET_CNTL_MASK)
#define RF_AR_SERDES_SBUS_53_RX_ERROR_EDGE_DETECT_CNTL(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_53_RX_ERROR_EDGE_DETECT_CNTL_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_EDGE_DETECT_CNTL_MASK)
#define WF_AR_SERDES_SBUS_53_RX_ERROR_EDGE_DETECT_CNTL(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_53_RX_ERROR_EDGE_DETECT_CNTL_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_EDGE_DETECT_CNTL_MASK)
#define RF_AR_SERDES_SBUS_53_RX_ERROR_MONITOR_SEL_CNTL(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_SEL_CNTL_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_SEL_CNTL_MASK)
#define WF_AR_SERDES_SBUS_53_RX_ERROR_MONITOR_SEL_CNTL(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_SEL_CNTL_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_SEL_CNTL_MASK)
#define RF_AR_SERDES_SBUS_53_RX_ERROR_MONITOR_GATE(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_GATE_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_GATE_MASK)
#define WF_AR_SERDES_SBUS_53_RX_ERROR_MONITOR_GATE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_GATE_BP,\
									AR_SERDES_SBUS_53_RX_ERROR_MONITOR_GATE_MASK)
#define RF_AR_SERDES_SBUS_54_RESERVED_31_9(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RESERVED_31_9_BP,\
									AR_SERDES_SBUS_54_RESERVED_31_9_MASK)
#define WF_AR_SERDES_SBUS_54_RESERVED_31_9(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RESERVED_31_9_BP,\
									AR_SERDES_SBUS_54_RESERVED_31_9_MASK)
#define RF_AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_MSB(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_MSB_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_MSB_MASK)
#define WF_AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_MSB(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_MSB_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_MSB_MASK)
#define RF_AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_LSB(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_LSB_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_LSB_MASK)
#define WF_AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_LSB(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_LSB_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_ALIGNED_COMMA_DET_LSB_MASK)
#define RF_AR_SERDES_SBUS_54_RX_PATTERN_CMP_PASS(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RX_PATTERN_CMP_PASS_BP,\
									AR_SERDES_SBUS_54_RX_PATTERN_CMP_PASS_MASK)
#define WF_AR_SERDES_SBUS_54_RX_PATTERN_CMP_PASS(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RX_PATTERN_CMP_PASS_BP,\
									AR_SERDES_SBUS_54_RX_PATTERN_CMP_PASS_MASK)
#define RF_AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_MSB(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_MSB_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_MSB_MASK)
#define WF_AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_MSB(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_MSB_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_MSB_MASK)
#define RF_AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_LSB(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_LSB_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_LSB_MASK)
#define WF_AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_LSB(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_LSB_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_COMMA_DET_LSB_MASK)
#define RF_AR_SERDES_SBUS_54_RX_8B10B_SLIP_IN_PROGRESS_DET(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RX_8B10B_SLIP_IN_PROGRESS_DET_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_SLIP_IN_PROGRESS_DET_MASK)
#define WF_AR_SERDES_SBUS_54_RX_8B10B_SLIP_IN_PROGRESS_DET(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RX_8B10B_SLIP_IN_PROGRESS_DET_BP,\
									AR_SERDES_SBUS_54_RX_8B10B_SLIP_IN_PROGRESS_DET_MASK)
#define RF_AR_SERDES_SBUS_54_RESERVED_2(mmr)                    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RESERVED_2_BP,\
									AR_SERDES_SBUS_54_RESERVED_2_MASK)
#define WF_AR_SERDES_SBUS_54_RESERVED_2(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RESERVED_2_BP,\
									AR_SERDES_SBUS_54_RESERVED_2_MASK)
#define RF_AR_SERDES_SBUS_54_RX_PRBS_FAILURE(mmr)               	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RX_PRBS_FAILURE_BP,\
									AR_SERDES_SBUS_54_RX_PRBS_FAILURE_MASK)
#define WF_AR_SERDES_SBUS_54_RX_PRBS_FAILURE(mmr,v)             	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RX_PRBS_FAILURE_BP,\
									AR_SERDES_SBUS_54_RX_PRBS_FAILURE_MASK)
#define RF_AR_SERDES_SBUS_54_RX_ERROR_OCCURED(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_54_RX_ERROR_OCCURED_BP,\
									AR_SERDES_SBUS_54_RX_ERROR_OCCURED_MASK)
#define WF_AR_SERDES_SBUS_54_RX_ERROR_OCCURED(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_54_RX_ERROR_OCCURED_BP,\
									AR_SERDES_SBUS_54_RX_ERROR_OCCURED_MASK)
#define RF_AR_SERDES_SBUS_55_RX_ERROR_COUNT_OBS(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_55_RX_ERROR_COUNT_OBS_BP,\
									AR_SERDES_SBUS_55_RX_ERROR_COUNT_OBS_MASK)
#define WF_AR_SERDES_SBUS_55_RX_ERROR_COUNT_OBS(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_55_RX_ERROR_COUNT_OBS_BP,\
									AR_SERDES_SBUS_55_RX_ERROR_COUNT_OBS_MASK)
#define RF_AR_SERDES_SBUS_56_RESERVED_31_8(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_56_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_56_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_56_RESERVED_31_8(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_56_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_56_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_56_RX_PRBS_DATA_MSB_OBS_39_32(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_56_RX_PRBS_DATA_MSB_OBS_39_32_BP,\
									AR_SERDES_SBUS_56_RX_PRBS_DATA_MSB_OBS_39_32_MASK)
#define WF_AR_SERDES_SBUS_56_RX_PRBS_DATA_MSB_OBS_39_32(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_56_RX_PRBS_DATA_MSB_OBS_39_32_BP,\
									AR_SERDES_SBUS_56_RX_PRBS_DATA_MSB_OBS_39_32_MASK)
#define RF_AR_SERDES_SBUS_57_RX_PRBS_DATA_MSB_OBS_31_0(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_57_RX_PRBS_DATA_MSB_OBS_31_0_BP,\
									AR_SERDES_SBUS_57_RX_PRBS_DATA_MSB_OBS_31_0_MASK)
#define WF_AR_SERDES_SBUS_57_RX_PRBS_DATA_MSB_OBS_31_0(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_57_RX_PRBS_DATA_MSB_OBS_31_0_BP,\
									AR_SERDES_SBUS_57_RX_PRBS_DATA_MSB_OBS_31_0_MASK)
#define RF_AR_SERDES_SBUS_58_RESERVED_31_8(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_58_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_58_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_58_RESERVED_31_8(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_58_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_58_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_58_RX_PRBS_DATA_LSB_OBS_39_32(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_58_RX_PRBS_DATA_LSB_OBS_39_32_BP,\
									AR_SERDES_SBUS_58_RX_PRBS_DATA_LSB_OBS_39_32_MASK)
#define WF_AR_SERDES_SBUS_58_RX_PRBS_DATA_LSB_OBS_39_32(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_58_RX_PRBS_DATA_LSB_OBS_39_32_BP,\
									AR_SERDES_SBUS_58_RX_PRBS_DATA_LSB_OBS_39_32_MASK)
#define RF_AR_SERDES_SBUS_59_RX_PRBS_DATA_LSB_OBS_31_0(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_59_RX_PRBS_DATA_LSB_OBS_31_0_BP,\
									AR_SERDES_SBUS_59_RX_PRBS_DATA_LSB_OBS_31_0_MASK)
#define WF_AR_SERDES_SBUS_59_RX_PRBS_DATA_LSB_OBS_31_0(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_59_RX_PRBS_DATA_LSB_OBS_31_0_BP,\
									AR_SERDES_SBUS_59_RX_PRBS_DATA_LSB_OBS_31_0_MASK)
#define RF_AR_SERDES_SBUS_5A_RESERVED_31_8(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_5A_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_5A_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_5A_RESERVED_31_8(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_5A_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_5A_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_5A_RX_SIG_STRENGTH_OBS(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_5A_RX_SIG_STRENGTH_OBS_BP,\
									AR_SERDES_SBUS_5A_RX_SIG_STRENGTH_OBS_MASK)
#define WF_AR_SERDES_SBUS_5A_RX_SIG_STRENGTH_OBS(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_5A_RX_SIG_STRENGTH_OBS_BP,\
									AR_SERDES_SBUS_5A_RX_SIG_STRENGTH_OBS_MASK)
#define RF_AR_SERDES_SBUS_5A_RESERVED_5_0(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_5A_RESERVED_5_0_BP,\
									AR_SERDES_SBUS_5A_RESERVED_5_0_MASK)
#define WF_AR_SERDES_SBUS_5A_RESERVED_5_0(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_5A_RESERVED_5_0_BP,\
									AR_SERDES_SBUS_5A_RESERVED_5_0_MASK)
#define RF_AR_SERDES_SBUS_5B_RESERVED_31_2(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_5B_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_5B_RESERVED_31_2_MASK)
#define WF_AR_SERDES_SBUS_5B_RESERVED_31_2(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_5B_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_5B_RESERVED_31_2_MASK)
#define RF_AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_EN_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_EN_CNTL_BP,\
									AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_EN_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_EN_CNTL_BP,\
									AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_GATE(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_GATE_BP,\
									AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_GATE_MASK)
#define WF_AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_GATE(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_GATE_BP,\
									AR_SERDES_SBUS_5B_RX_FAR_LOOPBACK_GATE_MASK)
#define RF_AR_SERDES_SBUS_64_RESERVED_31_9(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RESERVED_31_9_BP,\
									AR_SERDES_SBUS_64_RESERVED_31_9_MASK)
#define WF_AR_SERDES_SBUS_64_RESERVED_31_9(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RESERVED_31_9_BP,\
									AR_SERDES_SBUS_64_RESERVED_31_9_MASK)
#define RF_AR_SERDES_SBUS_64_RX_DFE_B_DATA_PD_CNTL(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RX_DFE_B_DATA_PD_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_DFE_B_DATA_PD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_64_RX_DFE_B_DATA_PD_CNTL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RX_DFE_B_DATA_PD_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_DFE_B_DATA_PD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_64_RX_DFE_B_OFFSET_PD_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RX_DFE_B_OFFSET_PD_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_DFE_B_OFFSET_PD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_64_RX_DFE_B_OFFSET_PD_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RX_DFE_B_OFFSET_PD_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_DFE_B_OFFSET_PD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_64_RX_DFE_A_DATA_PD_CNTL(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RX_DFE_A_DATA_PD_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_DFE_A_DATA_PD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_64_RX_DFE_A_DATA_PD_CNTL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RX_DFE_A_DATA_PD_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_DFE_A_DATA_PD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_64_RX_DFE_A_OFFSET_PD_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RX_DFE_A_OFFSET_PD_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_DFE_A_OFFSET_PD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_64_RX_DFE_A_OFFSET_PD_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RX_DFE_A_OFFSET_PD_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_DFE_A_OFFSET_PD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_64_RX_SEL_DFE_A_DATA_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RX_SEL_DFE_A_DATA_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_SEL_DFE_A_DATA_CNTL_MASK)
#define WF_AR_SERDES_SBUS_64_RX_SEL_DFE_A_DATA_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RX_SEL_DFE_A_DATA_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_SEL_DFE_A_DATA_CNTL_MASK)
#define RF_AR_SERDES_SBUS_64_RX_SEL_DFE_A_OFFSET_CNTL(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RX_SEL_DFE_A_OFFSET_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_SEL_DFE_A_OFFSET_CNTL_MASK)
#define WF_AR_SERDES_SBUS_64_RX_SEL_DFE_A_OFFSET_CNTL(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RX_SEL_DFE_A_OFFSET_CNTL_BP,\
									AR_SERDES_SBUS_64_RX_SEL_DFE_A_OFFSET_CNTL_MASK)
#define RF_AR_SERDES_SBUS_64_RX_PHASE_INTERPOLATOR_GATE(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RX_PHASE_INTERPOLATOR_GATE_BP,\
									AR_SERDES_SBUS_64_RX_PHASE_INTERPOLATOR_GATE_MASK)
#define WF_AR_SERDES_SBUS_64_RX_PHASE_INTERPOLATOR_GATE(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RX_PHASE_INTERPOLATOR_GATE_BP,\
									AR_SERDES_SBUS_64_RX_PHASE_INTERPOLATOR_GATE_MASK)
#define RF_AR_SERDES_SBUS_64_RX_DFE_PD_GATE(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RX_DFE_PD_GATE_BP,\
									AR_SERDES_SBUS_64_RX_DFE_PD_GATE_MASK)
#define WF_AR_SERDES_SBUS_64_RX_DFE_PD_GATE(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RX_DFE_PD_GATE_BP,\
									AR_SERDES_SBUS_64_RX_DFE_PD_GATE_MASK)
#define RF_AR_SERDES_SBUS_64_RX_DFE_GATE(mmr)                   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_64_RX_DFE_GATE_BP,\
									AR_SERDES_SBUS_64_RX_DFE_GATE_MASK)
#define WF_AR_SERDES_SBUS_64_RX_DFE_GATE(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_64_RX_DFE_GATE_BP,\
									AR_SERDES_SBUS_64_RX_DFE_GATE_MASK)
#define RF_AR_SERDES_SBUS_65_RESERVED_31_7(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_65_RESERVED_31_7_BP,\
									AR_SERDES_SBUS_65_RESERVED_31_7_MASK)
#define WF_AR_SERDES_SBUS_65_RESERVED_31_7(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_65_RESERVED_31_7_BP,\
									AR_SERDES_SBUS_65_RESERVED_31_7_MASK)
#define RF_AR_SERDES_SBUS_65_RX_PHASE_INTERPOLATOR_CNTL(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_65_RX_PHASE_INTERPOLATOR_CNTL_BP,\
									AR_SERDES_SBUS_65_RX_PHASE_INTERPOLATOR_CNTL_MASK)
#define WF_AR_SERDES_SBUS_65_RX_PHASE_INTERPOLATOR_CNTL(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_65_RX_PHASE_INTERPOLATOR_CNTL_BP,\
									AR_SERDES_SBUS_65_RX_PHASE_INTERPOLATOR_CNTL_MASK)
#define RF_AR_SERDES_SBUS_67_RESERVED_31_30(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_67_RESERVED_31_30_BP,\
									AR_SERDES_SBUS_67_RESERVED_31_30_MASK)
#define WF_AR_SERDES_SBUS_67_RESERVED_31_30(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_67_RESERVED_31_30_BP,\
									AR_SERDES_SBUS_67_RESERVED_31_30_MASK)
#define RF_AR_SERDES_SBUS_67_RX_DFE_A_CNTL_29_0_(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_67_RX_DFE_A_CNTL_29_0__BP,\
									AR_SERDES_SBUS_67_RX_DFE_A_CNTL_29_0__MASK)
#define WF_AR_SERDES_SBUS_67_RX_DFE_A_CNTL_29_0_(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_67_RX_DFE_A_CNTL_29_0__BP,\
									AR_SERDES_SBUS_67_RX_DFE_A_CNTL_29_0__MASK)
#define RF_AR_SERDES_SBUS_68_RESERVED_31_10(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_68_RESERVED_31_10_BP,\
									AR_SERDES_SBUS_68_RESERVED_31_10_MASK)
#define WF_AR_SERDES_SBUS_68_RESERVED_31_10(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_68_RESERVED_31_10_BP,\
									AR_SERDES_SBUS_68_RESERVED_31_10_MASK)
#define RF_AR_SERDES_SBUS_68_RX_DFE_A_CNTL_39_30_(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_SBUS_68_RX_DFE_A_CNTL_39_30__BP,\
									AR_SERDES_SBUS_68_RX_DFE_A_CNTL_39_30__MASK)
#define WF_AR_SERDES_SBUS_68_RX_DFE_A_CNTL_39_30_(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_68_RX_DFE_A_CNTL_39_30__BP,\
									AR_SERDES_SBUS_68_RX_DFE_A_CNTL_39_30__MASK)
#define RF_AR_SERDES_SBUS_69_RESERVED_31_30(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_69_RESERVED_31_30_BP,\
									AR_SERDES_SBUS_69_RESERVED_31_30_MASK)
#define WF_AR_SERDES_SBUS_69_RESERVED_31_30(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_69_RESERVED_31_30_BP,\
									AR_SERDES_SBUS_69_RESERVED_31_30_MASK)
#define RF_AR_SERDES_SBUS_69_RX_DFE_B_CNTL_29_0_(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_69_RX_DFE_B_CNTL_29_0__BP,\
									AR_SERDES_SBUS_69_RX_DFE_B_CNTL_29_0__MASK)
#define WF_AR_SERDES_SBUS_69_RX_DFE_B_CNTL_29_0_(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_69_RX_DFE_B_CNTL_29_0__BP,\
									AR_SERDES_SBUS_69_RX_DFE_B_CNTL_29_0__MASK)
#define RF_AR_SERDES_SBUS_6A_RESERVED_31_10(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_6A_RESERVED_31_10_BP,\
									AR_SERDES_SBUS_6A_RESERVED_31_10_MASK)
#define WF_AR_SERDES_SBUS_6A_RESERVED_31_10(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_6A_RESERVED_31_10_BP,\
									AR_SERDES_SBUS_6A_RESERVED_31_10_MASK)
#define RF_AR_SERDES_SBUS_6A_RX_DFE_B_CNTL_39_30_(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_SBUS_6A_RX_DFE_B_CNTL_39_30__BP,\
									AR_SERDES_SBUS_6A_RX_DFE_B_CNTL_39_30__MASK)
#define WF_AR_SERDES_SBUS_6A_RX_DFE_B_CNTL_39_30_(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_6A_RX_DFE_B_CNTL_39_30__BP,\
									AR_SERDES_SBUS_6A_RX_DFE_B_CNTL_39_30__MASK)
#define RF_AR_SERDES_SBUS_6B_RESERVED_31_24(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_6B_RESERVED_31_24_BP,\
									AR_SERDES_SBUS_6B_RESERVED_31_24_MASK)
#define WF_AR_SERDES_SBUS_6B_RESERVED_31_24(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_6B_RESERVED_31_24_BP,\
									AR_SERDES_SBUS_6B_RESERVED_31_24_MASK)
#define RF_AR_SERDES_SBUS_6B_RX_DFE_B_EBERT_DAC_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_6B_RX_DFE_B_EBERT_DAC_CNTL_BP,\
									AR_SERDES_SBUS_6B_RX_DFE_B_EBERT_DAC_CNTL_MASK)
#define WF_AR_SERDES_SBUS_6B_RX_DFE_B_EBERT_DAC_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_6B_RX_DFE_B_EBERT_DAC_CNTL_BP,\
									AR_SERDES_SBUS_6B_RX_DFE_B_EBERT_DAC_CNTL_MASK)
#define RF_AR_SERDES_SBUS_6B_RESERVED_15_8(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_6B_RESERVED_15_8_BP,\
									AR_SERDES_SBUS_6B_RESERVED_15_8_MASK)
#define WF_AR_SERDES_SBUS_6B_RESERVED_15_8(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_6B_RESERVED_15_8_BP,\
									AR_SERDES_SBUS_6B_RESERVED_15_8_MASK)
#define RF_AR_SERDES_SBUS_6B_RX_DFE_A_EBERT_DAC_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_6B_RX_DFE_A_EBERT_DAC_CNTL_BP,\
									AR_SERDES_SBUS_6B_RX_DFE_A_EBERT_DAC_CNTL_MASK)
#define WF_AR_SERDES_SBUS_6B_RX_DFE_A_EBERT_DAC_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_6B_RX_DFE_A_EBERT_DAC_CNTL_BP,\
									AR_SERDES_SBUS_6B_RX_DFE_A_EBERT_DAC_CNTL_MASK)
#define RF_AR_SERDES_SBUS_81_RESERVED_31_16(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_81_RESERVED_31_16_BP,\
									AR_SERDES_SBUS_81_RESERVED_31_16_MASK)
#define WF_AR_SERDES_SBUS_81_RESERVED_31_16(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_81_RESERVED_31_16_BP,\
									AR_SERDES_SBUS_81_RESERVED_31_16_MASK)
#define RF_AR_SERDES_SBUS_81_DFE_SCRATCH_PAD_CNTL(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_SBUS_81_DFE_SCRATCH_PAD_CNTL_BP,\
									AR_SERDES_SBUS_81_DFE_SCRATCH_PAD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_81_DFE_SCRATCH_PAD_CNTL(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_81_DFE_SCRATCH_PAD_CNTL_BP,\
									AR_SERDES_SBUS_81_DFE_SCRATCH_PAD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_82_RESERVED_31_16(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_82_RESERVED_31_16_BP,\
									AR_SERDES_SBUS_82_RESERVED_31_16_MASK)
#define WF_AR_SERDES_SBUS_82_RESERVED_31_16(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_82_RESERVED_31_16_BP,\
									AR_SERDES_SBUS_82_RESERVED_31_16_MASK)
#define RF_AR_SERDES_SBUS_82_DFE_USER_CONFIG(mmr)               	RD_FIELD(mmr,\
									AR_SERDES_SBUS_82_DFE_USER_CONFIG_BP,\
									AR_SERDES_SBUS_82_DFE_USER_CONFIG_MASK)
#define WF_AR_SERDES_SBUS_82_DFE_USER_CONFIG(mmr,v)             	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_82_DFE_USER_CONFIG_BP,\
									AR_SERDES_SBUS_82_DFE_USER_CONFIG_MASK)
#define RF_AR_SERDES_SBUS_8C_RESERVED_31(mmr)                   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8C_RESERVED_31_BP,\
									AR_SERDES_SBUS_8C_RESERVED_31_MASK)
#define WF_AR_SERDES_SBUS_8C_RESERVED_31(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8C_RESERVED_31_BP,\
									AR_SERDES_SBUS_8C_RESERVED_31_MASK)
#define RF_AR_SERDES_SBUS_8C_TX_OVERRIDE_IN_OBS(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8C_TX_OVERRIDE_IN_OBS_BP,\
									AR_SERDES_SBUS_8C_TX_OVERRIDE_IN_OBS_MASK)
#define WF_AR_SERDES_SBUS_8C_TX_OVERRIDE_IN_OBS(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8C_TX_OVERRIDE_IN_OBS_BP,\
									AR_SERDES_SBUS_8C_TX_OVERRIDE_IN_OBS_MASK)
#define RF_AR_SERDES_SBUS_8C_TX_OVERRIDE_EN_OBS(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8C_TX_OVERRIDE_EN_OBS_BP,\
									AR_SERDES_SBUS_8C_TX_OVERRIDE_EN_OBS_MASK)
#define WF_AR_SERDES_SBUS_8C_TX_OVERRIDE_EN_OBS(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8C_TX_OVERRIDE_EN_OBS_BP,\
									AR_SERDES_SBUS_8C_TX_OVERRIDE_EN_OBS_MASK)
#define RF_AR_SERDES_SBUS_8C_RESERVED_28_0(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8C_RESERVED_28_0_BP,\
									AR_SERDES_SBUS_8C_RESERVED_28_0_MASK)
#define WF_AR_SERDES_SBUS_8C_RESERVED_28_0(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8C_RESERVED_28_0_BP,\
									AR_SERDES_SBUS_8C_RESERVED_28_0_MASK)
#define RF_AR_SERDES_SBUS_8E_RESERVED_31_20(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8E_RESERVED_31_20_BP,\
									AR_SERDES_SBUS_8E_RESERVED_31_20_MASK)
#define WF_AR_SERDES_SBUS_8E_RESERVED_31_20(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8E_RESERVED_31_20_BP,\
									AR_SERDES_SBUS_8E_RESERVED_31_20_MASK)
#define RF_AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_CNTL(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_CNTL_BP,\
									AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_CNTL_MASK)
#define WF_AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_CNTL_BP,\
									AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_CNTL_MASK)
#define RF_AR_SERDES_SBUS_8E_RESERVED_3_1(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8E_RESERVED_3_1_BP,\
									AR_SERDES_SBUS_8E_RESERVED_3_1_MASK)
#define WF_AR_SERDES_SBUS_8E_RESERVED_3_1(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8E_RESERVED_3_1_BP,\
									AR_SERDES_SBUS_8E_RESERVED_3_1_MASK)
#define RF_AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_GATE(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_GATE_BP,\
									AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_GATE_MASK)
#define WF_AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_GATE(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_GATE_BP,\
									AR_SERDES_SBUS_8E_SBUS_OVERRIDE_CORE_TO_ANLG_GATE_MASK)
#define RF_AR_SERDES_SBUS_8F_RESERVED_31_20(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8F_RESERVED_31_20_BP,\
									AR_SERDES_SBUS_8F_RESERVED_31_20_MASK)
#define WF_AR_SERDES_SBUS_8F_RESERVED_31_20(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8F_RESERVED_31_20_BP,\
									AR_SERDES_SBUS_8F_RESERVED_31_20_MASK)
#define RF_AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_CNTL(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_CNTL_BP,\
									AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_CNTL_MASK)
#define WF_AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_CNTL_BP,\
									AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_CNTL_MASK)
#define RF_AR_SERDES_SBUS_8F_RESERVED_3_1(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8F_RESERVED_3_1_BP,\
									AR_SERDES_SBUS_8F_RESERVED_3_1_MASK)
#define WF_AR_SERDES_SBUS_8F_RESERVED_3_1(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8F_RESERVED_3_1_BP,\
									AR_SERDES_SBUS_8F_RESERVED_3_1_MASK)
#define RF_AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_GATE(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_GATE_BP,\
									AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_GATE_MASK)
#define WF_AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_GATE(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_GATE_BP,\
									AR_SERDES_SBUS_8F_SBUS_OVERRIDE_ANLG_TO_CORE_GATE_MASK)
#define RF_AR_SERDES_SBUS_90_LINK_LOOPBACK_EN_CNTL(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_90_LINK_LOOPBACK_EN_CNTL_BP,\
									AR_SERDES_SBUS_90_LINK_LOOPBACK_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_90_LINK_LOOPBACK_EN_CNTL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_90_LINK_LOOPBACK_EN_CNTL_BP,\
									AR_SERDES_SBUS_90_LINK_LOOPBACK_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_90_RESERVED_30_0(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_90_RESERVED_30_0_BP,\
									AR_SERDES_SBUS_90_RESERVED_30_0_MASK)
#define WF_AR_SERDES_SBUS_90_RESERVED_30_0(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_90_RESERVED_30_0_BP,\
									AR_SERDES_SBUS_90_RESERVED_30_0_MASK)
#define RF_AR_SERDES_SBUS_92_RESERVED_31_9(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_92_RESERVED_31_9_BP,\
									AR_SERDES_SBUS_92_RESERVED_31_9_MASK)
#define WF_AR_SERDES_SBUS_92_RESERVED_31_9(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_92_RESERVED_31_9_BP,\
									AR_SERDES_SBUS_92_RESERVED_31_9_MASK)
#define RF_AR_SERDES_SBUS_92_PCIE_RX_POWER_DOWN_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_92_PCIE_RX_POWER_DOWN_CNTL_BP,\
									AR_SERDES_SBUS_92_PCIE_RX_POWER_DOWN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_92_PCIE_RX_POWER_DOWN_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_92_PCIE_RX_POWER_DOWN_CNTL_BP,\
									AR_SERDES_SBUS_92_PCIE_RX_POWER_DOWN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_92_PCIE_TX_POWER_DOWN_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_92_PCIE_TX_POWER_DOWN_CNTL_BP,\
									AR_SERDES_SBUS_92_PCIE_TX_POWER_DOWN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_92_PCIE_TX_POWER_DOWN_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_92_PCIE_TX_POWER_DOWN_CNTL_BP,\
									AR_SERDES_SBUS_92_PCIE_TX_POWER_DOWN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_92_PCIE_TX_DETECT_RX_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_92_PCIE_TX_DETECT_RX_CNTL_BP,\
									AR_SERDES_SBUS_92_PCIE_TX_DETECT_RX_CNTL_MASK)
#define WF_AR_SERDES_SBUS_92_PCIE_TX_DETECT_RX_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_92_PCIE_TX_DETECT_RX_CNTL_BP,\
									AR_SERDES_SBUS_92_PCIE_TX_DETECT_RX_CNTL_MASK)
#define RF_AR_SERDES_SBUS_92_PCIE_RX_ELEC_IDLE_THRESHOLD_CNTL(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_92_PCIE_RX_ELEC_IDLE_THRESHOLD_CNTL_BP,\
									AR_SERDES_SBUS_92_PCIE_RX_ELEC_IDLE_THRESHOLD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_92_PCIE_RX_ELEC_IDLE_THRESHOLD_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_92_PCIE_RX_ELEC_IDLE_THRESHOLD_CNTL_BP,\
									AR_SERDES_SBUS_92_PCIE_RX_ELEC_IDLE_THRESHOLD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_92_PCIE_GATE(mmr)                     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_92_PCIE_GATE_BP,\
									AR_SERDES_SBUS_92_PCIE_GATE_MASK)
#define WF_AR_SERDES_SBUS_92_PCIE_GATE(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_92_PCIE_GATE_BP,\
									AR_SERDES_SBUS_92_PCIE_GATE_MASK)
#define RF_AR_SERDES_SBUS_93_RESERVED_31_2(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_93_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_93_RESERVED_31_2_MASK)
#define WF_AR_SERDES_SBUS_93_RESERVED_31_2(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_93_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_93_RESERVED_31_2_MASK)
#define RF_AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_CNTL(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_CNTL_BP,\
									AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_CNTL_MASK)
#define WF_AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_CNTL_BP,\
									AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_CNTL_MASK)
#define RF_AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_GATE(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_GATE_BP,\
									AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_GATE_MASK)
#define WF_AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_GATE(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_GATE_BP,\
									AR_SERDES_SBUS_93_PCIE_RX_ELEC_IDLE_DETECT_GATE_MASK)
#define RF_AR_SERDES_SBUS_95_RESERVED_31_23(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_RESERVED_31_23_BP,\
									AR_SERDES_SBUS_95_RESERVED_31_23_MASK)
#define WF_AR_SERDES_SBUS_95_RESERVED_31_23(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_RESERVED_31_23_BP,\
									AR_SERDES_SBUS_95_RESERVED_31_23_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_PFD_COUNTER_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_PFD_COUNTER_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_PFD_COUNTER_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_PFD_COUNTER_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_PFD_COUNTER_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_PFD_COUNTER_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_USE_SEL_PFD_CNTL(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SEL_PFD_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SEL_PFD_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_USE_SEL_PFD_CNTL(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SEL_PFD_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SEL_PFD_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_COMMA_COUNT_LIMIT_CNTL(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_COMMA_COUNT_LIMIT_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_COMMA_COUNT_LIMIT_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_COMMA_COUNT_LIMIT_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_COMMA_COUNT_LIMIT_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_COMMA_COUNT_LIMIT_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_USE_KR_CNTL(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_USE_KR_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_KR_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_USE_KR_CNTL(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_USE_KR_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_KR_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_PROGRAMMABLE_SIG_OK_OBS(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_PROGRAMMABLE_SIG_OK_OBS_BP,\
									AR_SERDES_SBUS_95_PROGRAMMABLE_SIG_OK_OBS_MASK)
#define WF_AR_SERDES_SBUS_95_PROGRAMMABLE_SIG_OK_OBS(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_PROGRAMMABLE_SIG_OK_OBS_BP,\
									AR_SERDES_SBUS_95_PROGRAMMABLE_SIG_OK_OBS_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_OBS(mmr)                    	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_OBS_BP,\
									AR_SERDES_SBUS_95_SIG_OK_OBS_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_OBS(mmr,v)                  	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_OBS_BP,\
									AR_SERDES_SBUS_95_SIG_OK_OBS_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_OUTPUT_CNTL(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_OUTPUT_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_OUTPUT_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_OUTPUT_CNTL(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_OUTPUT_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_OUTPUT_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT3_EN_CNTL(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT3_EN_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT3_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT3_EN_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT3_EN_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT3_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT2_EN_CNTL(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT2_EN_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT2_EN_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT2_EN_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT2_EN_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_FFL_COUNTER_BIT2_EN_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_USE_FINE_FLOCK_CNTR_CNTL(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_USE_FINE_FLOCK_CNTR_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_FINE_FLOCK_CNTR_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_USE_FINE_FLOCK_CNTR_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_USE_FINE_FLOCK_CNTR_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_FINE_FLOCK_CNTR_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_USE_SLIP_IN_PROGRESS_CNTL(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SLIP_IN_PROGRESS_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SLIP_IN_PROGRESS_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_USE_SLIP_IN_PROGRESS_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SLIP_IN_PROGRESS_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SLIP_IN_PROGRESS_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_USE_RX_RDY_CNTL(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_USE_RX_RDY_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_RX_RDY_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_USE_RX_RDY_CNTL(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_USE_RX_RDY_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_RX_RDY_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_USE_COMMA_DET_CNTL(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_USE_COMMA_DET_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_COMMA_DET_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_USE_COMMA_DET_CNTL(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_USE_COMMA_DET_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_COMMA_DET_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_USE_SIGNAL_STRENGTH_CNTL(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SIGNAL_STRENGTH_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SIGNAL_STRENGTH_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_USE_SIGNAL_STRENGTH_CNTL(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SIGNAL_STRENGTH_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_SIGNAL_STRENGTH_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_USE_ELEC_IDLE_CNTL(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_USE_ELEC_IDLE_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_ELEC_IDLE_CNTL_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_USE_ELEC_IDLE_CNTL(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_USE_ELEC_IDLE_CNTL_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_ELEC_IDLE_CNTL_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_USE_RX_FINE_FLOCK_CNT(mmr)  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_USE_RX_FINE_FLOCK_CNT_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_RX_FINE_FLOCK_CNT_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_USE_RX_FINE_FLOCK_CNT(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_USE_RX_FINE_FLOCK_CNT_BP,\
									AR_SERDES_SBUS_95_SIG_OK_USE_RX_FINE_FLOCK_CNT_MASK)
#define RF_AR_SERDES_SBUS_95_SIG_OK_EN_PRGRMBLE_INPUTS_GATE(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_95_SIG_OK_EN_PRGRMBLE_INPUTS_GATE_BP,\
									AR_SERDES_SBUS_95_SIG_OK_EN_PRGRMBLE_INPUTS_GATE_MASK)
#define WF_AR_SERDES_SBUS_95_SIG_OK_EN_PRGRMBLE_INPUTS_GATE(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_95_SIG_OK_EN_PRGRMBLE_INPUTS_GATE_BP,\
									AR_SERDES_SBUS_95_SIG_OK_EN_PRGRMBLE_INPUTS_GATE_MASK)
#define RF_AR_SERDES_SBUS_AD_RESERVED_31_2(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AD_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_AD_RESERVED_31_2_MASK)
#define WF_AR_SERDES_SBUS_AD_RESERVED_31_2(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AD_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_AD_RESERVED_31_2_MASK)
#define RF_AR_SERDES_SBUS_AD_KR_TRAINING_EN(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AD_KR_TRAINING_EN_BP,\
									AR_SERDES_SBUS_AD_KR_TRAINING_EN_MASK)
#define WF_AR_SERDES_SBUS_AD_KR_TRAINING_EN(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AD_KR_TRAINING_EN_BP,\
									AR_SERDES_SBUS_AD_KR_TRAINING_EN_MASK)
#define RF_AR_SERDES_SBUS_AD_KR_TRAINING_EN_GATE(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AD_KR_TRAINING_EN_GATE_BP,\
									AR_SERDES_SBUS_AD_KR_TRAINING_EN_GATE_MASK)
#define WF_AR_SERDES_SBUS_AD_KR_TRAINING_EN_GATE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AD_KR_TRAINING_EN_GATE_BP,\
									AR_SERDES_SBUS_AD_KR_TRAINING_EN_GATE_MASK)
#define RF_AR_SERDES_SBUS_AE_RESERVED_31_2(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AE_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_AE_RESERVED_31_2_MASK)
#define WF_AR_SERDES_SBUS_AE_RESERVED_31_2(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AE_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_AE_RESERVED_31_2_MASK)
#define RF_AR_SERDES_SBUS_AE_KR_RESTART_TRAINING(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_BP,\
									AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_MASK)
#define WF_AR_SERDES_SBUS_AE_KR_RESTART_TRAINING(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_BP,\
									AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_MASK)
#define RF_AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_GATE(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_GATE_BP,\
									AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_GATE_MASK)
#define WF_AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_GATE(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_GATE_BP,\
									AR_SERDES_SBUS_AE_KR_RESTART_TRAINING_GATE_MASK)
#define RF_AR_SERDES_SBUS_AF_RESERVED_31_19(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_RESERVED_31_19_BP,\
									AR_SERDES_SBUS_AF_RESERVED_31_19_MASK)
#define WF_AR_SERDES_SBUS_AF_RESERVED_31_19(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_RESERVED_31_19_BP,\
									AR_SERDES_SBUS_AF_RESERVED_31_19_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_TRAINING_STATE(mmr)             	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_TRAINING_STATE_BP,\
									AR_SERDES_SBUS_AF_KR_TRAINING_STATE_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_TRAINING_STATE(mmr,v)           	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_TRAINING_STATE_BP,\
									AR_SERDES_SBUS_AF_KR_TRAINING_STATE_MASK)
#define RF_AR_SERDES_SBUS_AF_RESERVED_15_9(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_RESERVED_15_9_BP,\
									AR_SERDES_SBUS_AF_RESERVED_15_9_MASK)
#define WF_AR_SERDES_SBUS_AF_RESERVED_15_9(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_RESERVED_15_9_BP,\
									AR_SERDES_SBUS_AF_RESERVED_15_9_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_TRAINING(mmr)                   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_TRAINING_BP,\
									AR_SERDES_SBUS_AF_KR_TRAINING_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_TRAINING(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_TRAINING_BP,\
									AR_SERDES_SBUS_AF_KR_TRAINING_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_FRAME_LOCK(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_FRAME_LOCK_BP,\
									AR_SERDES_SBUS_AF_KR_FRAME_LOCK_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_FRAME_LOCK(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_FRAME_LOCK_BP,\
									AR_SERDES_SBUS_AF_KR_FRAME_LOCK_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_RX_FAULT(mmr)                   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_RX_FAULT_BP,\
									AR_SERDES_SBUS_AF_KR_RX_FAULT_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_RX_FAULT(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_RX_FAULT_BP,\
									AR_SERDES_SBUS_AF_KR_RX_FAULT_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_TX_FAULT(mmr)                   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_TX_FAULT_BP,\
									AR_SERDES_SBUS_AF_KR_TX_FAULT_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_TX_FAULT(mmr,v)                 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_TX_FAULT_BP,\
									AR_SERDES_SBUS_AF_KR_TX_FAULT_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_PMD_FAULT(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_PMD_FAULT_BP,\
									AR_SERDES_SBUS_AF_KR_PMD_FAULT_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_PMD_FAULT(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_PMD_FAULT_BP,\
									AR_SERDES_SBUS_AF_KR_PMD_FAULT_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_SIGNAL_DETECT(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_SIGNAL_DETECT_BP,\
									AR_SERDES_SBUS_AF_KR_SIGNAL_DETECT_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_SIGNAL_DETECT(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_SIGNAL_DETECT_BP,\
									AR_SERDES_SBUS_AF_KR_SIGNAL_DETECT_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_TRAINING_FAILURE(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_TRAINING_FAILURE_BP,\
									AR_SERDES_SBUS_AF_KR_TRAINING_FAILURE_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_TRAINING_FAILURE(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_TRAINING_FAILURE_BP,\
									AR_SERDES_SBUS_AF_KR_TRAINING_FAILURE_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_RX_TRAINED(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_RX_TRAINED_BP,\
									AR_SERDES_SBUS_AF_KR_RX_TRAINED_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_RX_TRAINED(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_RX_TRAINED_BP,\
									AR_SERDES_SBUS_AF_KR_RX_TRAINED_MASK)
#define RF_AR_SERDES_SBUS_AF_KR_RX_TRAINED_GATE(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_AF_KR_RX_TRAINED_GATE_BP,\
									AR_SERDES_SBUS_AF_KR_RX_TRAINED_GATE_MASK)
#define WF_AR_SERDES_SBUS_AF_KR_RX_TRAINED_GATE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_AF_KR_RX_TRAINED_GATE_BP,\
									AR_SERDES_SBUS_AF_KR_RX_TRAINED_GATE_MASK)
#define RF_AR_SERDES_SBUS_B3_RESERVED_31_2(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_B3_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_B3_RESERVED_31_2_MASK)
#define WF_AR_SERDES_SBUS_B3_RESERVED_31_2(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_B3_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_B3_RESERVED_31_2_MASK)
#define RF_AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_BP,\
									AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_MASK)
#define WF_AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_BP,\
									AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_MASK)
#define RF_AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_GATE(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_GATE_BP,\
									AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_GATE_MASK)
#define WF_AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_GATE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_GATE_BP,\
									AR_SERDES_SBUS_B3_KR_REMOTE_RX_RDY_GATE_MASK)
#define RF_AR_SERDES_SBUS_FC_RESERVED_31_24(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FC_RESERVED_31_24_BP,\
									AR_SERDES_SBUS_FC_RESERVED_31_24_MASK)
#define WF_AR_SERDES_SBUS_FC_RESERVED_31_24(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FC_RESERVED_31_24_BP,\
									AR_SERDES_SBUS_FC_RESERVED_31_24_MASK)
#define RF_AR_SERDES_SBUS_FC_BROADCAST_INV_2_CNTL(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FC_BROADCAST_INV_2_CNTL_BP,\
									AR_SERDES_SBUS_FC_BROADCAST_INV_2_CNTL_MASK)
#define WF_AR_SERDES_SBUS_FC_BROADCAST_INV_2_CNTL(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FC_BROADCAST_INV_2_CNTL_BP,\
									AR_SERDES_SBUS_FC_BROADCAST_INV_2_CNTL_MASK)
#define RF_AR_SERDES_SBUS_FC_RESERVED_15_12(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FC_RESERVED_15_12_BP,\
									AR_SERDES_SBUS_FC_RESERVED_15_12_MASK)
#define WF_AR_SERDES_SBUS_FC_RESERVED_15_12(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FC_RESERVED_15_12_BP,\
									AR_SERDES_SBUS_FC_RESERVED_15_12_MASK)
#define RF_AR_SERDES_SBUS_FC_BROADCAST_INV_CNT(mmr)             	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FC_BROADCAST_INV_CNT_BP,\
									AR_SERDES_SBUS_FC_BROADCAST_INV_CNT_MASK)
#define WF_AR_SERDES_SBUS_FC_BROADCAST_INV_CNT(mmr,v)           	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FC_BROADCAST_INV_CNT_BP,\
									AR_SERDES_SBUS_FC_BROADCAST_INV_CNT_MASK)
#define RF_AR_SERDES_SBUS_FC_RESERVED_3_1(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FC_RESERVED_3_1_BP,\
									AR_SERDES_SBUS_FC_RESERVED_3_1_MASK)
#define WF_AR_SERDES_SBUS_FC_RESERVED_3_1(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FC_RESERVED_3_1_BP,\
									AR_SERDES_SBUS_FC_RESERVED_3_1_MASK)
#define RF_AR_SERDES_SBUS_FC_IGNORE_BROADCAST_CNTL(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FC_IGNORE_BROADCAST_CNTL_BP,\
									AR_SERDES_SBUS_FC_IGNORE_BROADCAST_CNTL_MASK)
#define WF_AR_SERDES_SBUS_FC_IGNORE_BROADCAST_CNTL(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FC_IGNORE_BROADCAST_CNTL_BP,\
									AR_SERDES_SBUS_FC_IGNORE_BROADCAST_CNTL_MASK)
#define RF_AR_SERDES_SBUS_FD_RESERVED_31_8(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FD_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_FD_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_FD_RESERVED_31_8(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FD_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_FD_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_FD_SERDES_SBUS_TEST_READ_WRITE(mmr)   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FD_SERDES_SBUS_TEST_READ_WRITE_BP,\
									AR_SERDES_SBUS_FD_SERDES_SBUS_TEST_READ_WRITE_MASK)
#define WF_AR_SERDES_SBUS_FD_SERDES_SBUS_TEST_READ_WRITE(mmr,v) 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FD_SERDES_SBUS_TEST_READ_WRITE_BP,\
									AR_SERDES_SBUS_FD_SERDES_SBUS_TEST_READ_WRITE_MASK)
#define RF_AR_SERDES_SBUS_FE_RESERVED_31_8(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FE_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_FE_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_FE_RESERVED_31_8(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FE_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_FE_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_FE_SERDES_VARIANT_IDCODE_OBS(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FE_SERDES_VARIANT_IDCODE_OBS_BP,\
									AR_SERDES_SBUS_FE_SERDES_VARIANT_IDCODE_OBS_MASK)
#define WF_AR_SERDES_SBUS_FE_SERDES_VARIANT_IDCODE_OBS(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FE_SERDES_VARIANT_IDCODE_OBS_BP,\
									AR_SERDES_SBUS_FE_SERDES_VARIANT_IDCODE_OBS_MASK)
#define RF_AR_SERDES_SBUS_FF_RESERVED_31_8(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FF_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_FF_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_FF_RESERVED_31_8(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FF_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_FF_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_FF_IDCODE(mmr)                        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_FF_IDCODE_BP,\
									AR_SERDES_SBUS_FF_IDCODE_MASK)
#define WF_AR_SERDES_SBUS_FF_IDCODE(mmr,v)                      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_FF_IDCODE_BP,\
									AR_SERDES_SBUS_FF_IDCODE_MASK)
#define RF_AR_SERDES_PMRO_CTRL_RESERVED_31_8(mmr)               	RD_FIELD(mmr,\
									AR_SERDES_PMRO_CTRL_RESERVED_31_8_BP,\
									AR_SERDES_PMRO_CTRL_RESERVED_31_8_MASK)
#define WF_AR_SERDES_PMRO_CTRL_RESERVED_31_8(mmr,v)             	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_CTRL_RESERVED_31_8_BP,\
									AR_SERDES_PMRO_CTRL_RESERVED_31_8_MASK)
#define RF_AR_SERDES_PMRO_CTRL_OSC_RUN_DELAY(mmr)               	RD_FIELD(mmr,\
									AR_SERDES_PMRO_CTRL_OSC_RUN_DELAY_BP,\
									AR_SERDES_PMRO_CTRL_OSC_RUN_DELAY_MASK)
#define WF_AR_SERDES_PMRO_CTRL_OSC_RUN_DELAY(mmr,v)             	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_CTRL_OSC_RUN_DELAY_BP,\
									AR_SERDES_PMRO_CTRL_OSC_RUN_DELAY_MASK)
#define RF_AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_DELAY(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_DELAY_BP,\
									AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_DELAY_MASK)
#define WF_AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_DELAY(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_DELAY_BP,\
									AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_DELAY_MASK)
#define RF_AR_SERDES_PMRO_CTRL_PMRO_ACTIVE(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_BP,\
									AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_MASK)
#define WF_AR_SERDES_PMRO_CTRL_PMRO_ACTIVE(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_BP,\
									AR_SERDES_PMRO_CTRL_PMRO_ACTIVE_MASK)
#define RF_AR_SERDES_PMRO_CTRL_STATE_BIT_3(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_3_BP,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_3_MASK)
#define WF_AR_SERDES_PMRO_CTRL_STATE_BIT_3(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_3_BP,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_3_MASK)
#define RF_AR_SERDES_PMRO_CTRL_STATE_BIT_2(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_2_BP,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_2_MASK)
#define WF_AR_SERDES_PMRO_CTRL_STATE_BIT_2(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_2_BP,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_2_MASK)
#define RF_AR_SERDES_PMRO_CTRL_STATE_BIT_1(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_1_BP,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_1_MASK)
#define WF_AR_SERDES_PMRO_CTRL_STATE_BIT_1(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_1_BP,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_1_MASK)
#define RF_AR_SERDES_PMRO_CTRL_STATE_BIT_0(mmr)                 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_0_BP,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_0_MASK)
#define WF_AR_SERDES_PMRO_CTRL_STATE_BIT_0(mmr,v)               	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_0_BP,\
									AR_SERDES_PMRO_CTRL_STATE_BIT_0_MASK)
#define RF_AR_SERDES_PMRO_CTRL_OSC_RUN(mmr)                     	RD_FIELD(mmr,\
									AR_SERDES_PMRO_CTRL_OSC_RUN_BP,\
									AR_SERDES_PMRO_CTRL_OSC_RUN_MASK)
#define WF_AR_SERDES_PMRO_CTRL_OSC_RUN(mmr,v)                   	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_CTRL_OSC_RUN_BP,\
									AR_SERDES_PMRO_CTRL_OSC_RUN_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_RESERVED_31_16(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_RESERVED_31_16_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_RESERVED_31_16(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_RESERVED_31_16_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_BUFFER(mmr)             	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_BUFFER_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_BUFFER_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_BUFFER(mmr,v)           	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_BUFFER_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_BUFFER_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_SLOW_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_SLOW_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_FAST_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_FAST_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_FAST_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_FAST_AND_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_FAST_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_AOI221_FAST_IN_FAST_AND_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_NOR_THREE_SLOW_IN(mmr)  	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_THREE_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_NOR_THREE_SLOW_IN(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_THREE_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_NAND_THREE_SLOW_IN(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_THREE_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_NAND_THREE_SLOW_IN(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_THREE_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_NIM(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_NIM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_NIM(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_NIM_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_NIM_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_NIM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_NIM_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_NIM_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_IM(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_IM_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_IM_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_IM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_IM_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_SLOW_IN_IM_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_IM(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_IM_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_IM_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_IM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_IM_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_XOR_TWO_FAST_IN_IM_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_SLOW_IN(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_SLOW_IN(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_FAST_IN(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_FAST_IN_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_FAST_IN(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NOR_TWO_FAST_IN_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_SLOW_IN(mmr)   	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_SLOW_IN(mmr,v) 	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_FAST_IN(mmr)   	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_FAST_IN_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_FAST_IN(mmr,v) 	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_NAND_TWO_FAST_IN_MASK)
#define RF_AR_SERDES_PMRO_STD_VT_CONFIG_INVERTER(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_PMRO_STD_VT_CONFIG_INVERTER_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_INVERTER_MASK)
#define WF_AR_SERDES_PMRO_STD_VT_CONFIG_INVERTER(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_STD_VT_CONFIG_INVERTER_BP,\
									AR_SERDES_PMRO_STD_VT_CONFIG_INVERTER_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_RESERVED_31_16(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_RESERVED_31_16_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_RESERVED_31_16(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_RESERVED_31_16_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_BUFFER(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_BUFFER_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_BUFFER_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_BUFFER(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_BUFFER_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_BUFFER_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_SLOW_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_SLOW_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_FAST_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_FAST_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_FAST_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_FAST_AND_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_FAST_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_AOI221_FAST_IN_FAST_AND_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_NOR_THREE_SLOW_IN(mmr)   	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_THREE_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_NOR_THREE_SLOW_IN(mmr,v) 	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_THREE_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_NAND_THREE_SLOW_IN(mmr)  	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_THREE_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_NAND_THREE_SLOW_IN(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_THREE_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_NIM(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_NIM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_NIM(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_NIM_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_NIM_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_NIM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_NIM_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_NIM_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_IM(mmr)  	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_IM_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_IM_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_IM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_IM_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_SLOW_IN_IM_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_IM(mmr)  	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_IM_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_IM_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_IM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_IM_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_XOR_TWO_FAST_IN_IM_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_SLOW_IN(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_SLOW_IN(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_FAST_IN(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_FAST_IN_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_FAST_IN(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NOR_TWO_FAST_IN_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_SLOW_IN(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_SLOW_IN(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_FAST_IN(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_FAST_IN_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_FAST_IN(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_NAND_TWO_FAST_IN_MASK)
#define RF_AR_SERDES_PMRO_HI_VT_CONFIG_INVERTER(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_PMRO_HI_VT_CONFIG_INVERTER_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_INVERTER_MASK)
#define WF_AR_SERDES_PMRO_HI_VT_CONFIG_INVERTER(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_HI_VT_CONFIG_INVERTER_BP,\
									AR_SERDES_PMRO_HI_VT_CONFIG_INVERTER_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_RESERVED_31_16(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_RESERVED_31_16_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_RESERVED_31_16(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_RESERVED_31_16_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_BUFFER(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_BUFFER_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_BUFFER_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_BUFFER(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_BUFFER_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_BUFFER_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_SLOW_AND_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_SLOW_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_SLOW_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_SLOW_AND_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_FAST_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_FAST_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_SLOW_IN_FAST_AND_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_FAST_AND(mmr)	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_FAST_AND_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_FAST_AND(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_FAST_AND_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_AOI221_FAST_IN_FAST_AND_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_NOR_THREE_SLOW_IN(mmr)   	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_THREE_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_NOR_THREE_SLOW_IN(mmr,v) 	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_THREE_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_NAND_THREE_SLOW_IN(mmr)  	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_THREE_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_NAND_THREE_SLOW_IN(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_THREE_SLOW_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_THREE_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_NIM(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_NIM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_NIM_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_NIM(mmr) 	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_NIM_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_NIM_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_NIM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_NIM_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_NIM_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_IM(mmr)  	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_IM_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_IM_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_IM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_IM_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_SLOW_IN_IM_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_IM(mmr)  	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_IM_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_IM_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_IM(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_IM_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_XOR_TWO_FAST_IN_IM_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_SLOW_IN(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_SLOW_IN(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_FAST_IN(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_FAST_IN_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_FAST_IN(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NOR_TWO_FAST_IN_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_SLOW_IN(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_SLOW_IN_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_SLOW_IN(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_SLOW_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_SLOW_IN_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_FAST_IN(mmr)    	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_FAST_IN_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_FAST_IN(mmr,v)  	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_FAST_IN_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_NAND_TWO_FAST_IN_MASK)
#define RF_AR_SERDES_PMRO_LO_VT_CONFIG_INVERTER(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_PMRO_LO_VT_CONFIG_INVERTER_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_INVERTER_MASK)
#define WF_AR_SERDES_PMRO_LO_VT_CONFIG_INVERTER(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_LO_VT_CONFIG_INVERTER_BP,\
									AR_SERDES_PMRO_LO_VT_CONFIG_INVERTER_MASK)
#define RF_AR_SERDES_PMRO_REF_CLK_CNTR_RESERVED_31_16(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_PMRO_REF_CLK_CNTR_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_REF_CLK_CNTR_RESERVED_31_16_MASK)
#define WF_AR_SERDES_PMRO_REF_CLK_CNTR_RESERVED_31_16(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_REF_CLK_CNTR_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_REF_CLK_CNTR_RESERVED_31_16_MASK)
#define RF_AR_SERDES_PMRO_REF_CLK_CNTR_COUNTER_VALUE(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_PMRO_REF_CLK_CNTR_COUNTER_VALUE_BP,\
									AR_SERDES_PMRO_REF_CLK_CNTR_COUNTER_VALUE_MASK)
#define WF_AR_SERDES_PMRO_REF_CLK_CNTR_COUNTER_VALUE(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_REF_CLK_CNTR_COUNTER_VALUE_BP,\
									AR_SERDES_PMRO_REF_CLK_CNTR_COUNTER_VALUE_MASK)
#define RF_AR_SERDES_PMRO_OSC_CNTR_RESERVED_31_16(mmr)          	RD_FIELD(mmr,\
									AR_SERDES_PMRO_OSC_CNTR_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_OSC_CNTR_RESERVED_31_16_MASK)
#define WF_AR_SERDES_PMRO_OSC_CNTR_RESERVED_31_16(mmr,v)        	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_OSC_CNTR_RESERVED_31_16_BP,\
									AR_SERDES_PMRO_OSC_CNTR_RESERVED_31_16_MASK)
#define RF_AR_SERDES_PMRO_OSC_CNTR_OSC_COUNT(mmr)               	RD_FIELD(mmr,\
									AR_SERDES_PMRO_OSC_CNTR_OSC_COUNT_BP,\
									AR_SERDES_PMRO_OSC_CNTR_OSC_COUNT_MASK)
#define WF_AR_SERDES_PMRO_OSC_CNTR_OSC_COUNT(mmr,v)             	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_OSC_CNTR_OSC_COUNT_BP,\
									AR_SERDES_PMRO_OSC_CNTR_OSC_COUNT_MASK)
#define RF_AR_SERDES_PMRO_UNIMPLEMENTED_RESERVED_31_0(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_PMRO_UNIMPLEMENTED_RESERVED_31_0_BP,\
									AR_SERDES_PMRO_UNIMPLEMENTED_RESERVED_31_0_MASK)
#define WF_AR_SERDES_PMRO_UNIMPLEMENTED_RESERVED_31_0(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_UNIMPLEMENTED_RESERVED_31_0_BP,\
									AR_SERDES_PMRO_UNIMPLEMENTED_RESERVED_31_0_MASK)
#define RF_AR_SERDES_PMRO_SBUS_ID_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_PMRO_SBUS_ID_RESERVED_31_8_BP,\
									AR_SERDES_PMRO_SBUS_ID_RESERVED_31_8_MASK)
#define WF_AR_SERDES_PMRO_SBUS_ID_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_SBUS_ID_RESERVED_31_8_BP,\
									AR_SERDES_PMRO_SBUS_ID_RESERVED_31_8_MASK)
#define RF_AR_SERDES_PMRO_SBUS_ID_SBUS_ID(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_PMRO_SBUS_ID_SBUS_ID_BP,\
									AR_SERDES_PMRO_SBUS_ID_SBUS_ID_MASK)
#define WF_AR_SERDES_PMRO_SBUS_ID_SBUS_ID(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_PMRO_SBUS_ID_SBUS_ID_BP,\
									AR_SERDES_PMRO_SBUS_ID_SBUS_ID_MASK)
#define RF_AR_SERDES_SBUS_CTRL_00_RESERVED_31_2(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_00_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_CTRL_00_RESERVED_31_2_MASK)
#define WF_AR_SERDES_SBUS_CTRL_00_RESERVED_31_2(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_00_RESERVED_31_2_BP,\
									AR_SERDES_SBUS_CTRL_00_RESERVED_31_2_MASK)
#define RF_AR_SERDES_SBUS_CTRL_00_CISM_LOOP(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_00_CISM_LOOP_BP,\
									AR_SERDES_SBUS_CTRL_00_CISM_LOOP_MASK)
#define WF_AR_SERDES_SBUS_CTRL_00_CISM_LOOP(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_00_CISM_LOOP_BP,\
									AR_SERDES_SBUS_CTRL_00_CISM_LOOP_MASK)
#define RF_AR_SERDES_SBUS_CTRL_00_CISM_START(mmr)               	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_00_CISM_START_BP,\
									AR_SERDES_SBUS_CTRL_00_CISM_START_MASK)
#define WF_AR_SERDES_SBUS_CTRL_00_CISM_START(mmr,v)             	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_00_CISM_START_BP,\
									AR_SERDES_SBUS_CTRL_00_CISM_START_MASK)
#define RF_AR_SERDES_SBUS_CTRL_01_RESERVED_31_5(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_01_RESERVED_31_5_BP,\
									AR_SERDES_SBUS_CTRL_01_RESERVED_31_5_MASK)
#define WF_AR_SERDES_SBUS_CTRL_01_RESERVED_31_5(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_01_RESERVED_31_5_BP,\
									AR_SERDES_SBUS_CTRL_01_RESERVED_31_5_MASK)
#define RF_AR_SERDES_SBUS_CTRL_01_CISM_TIMER_VALUE(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_01_CISM_TIMER_VALUE_BP,\
									AR_SERDES_SBUS_CTRL_01_CISM_TIMER_VALUE_MASK)
#define WF_AR_SERDES_SBUS_CTRL_01_CISM_TIMER_VALUE(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_01_CISM_TIMER_VALUE_BP,\
									AR_SERDES_SBUS_CTRL_01_CISM_TIMER_VALUE_MASK)
#define RF_AR_SERDES_SBUS_CTRL_02_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_02_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_02_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_02_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_02_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_02_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_02_LAST_SBUS_ADDRESS(mmr)        	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_02_LAST_SBUS_ADDRESS_BP,\
									AR_SERDES_SBUS_CTRL_02_LAST_SBUS_ADDRESS_MASK)
#define WF_AR_SERDES_SBUS_CTRL_02_LAST_SBUS_ADDRESS(mmr,v)      	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_02_LAST_SBUS_ADDRESS_BP,\
									AR_SERDES_SBUS_CTRL_02_LAST_SBUS_ADDRESS_MASK)
#define RF_AR_SERDES_SBUS_CTRL_0A_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_0A_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_0A_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_0A_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_0A_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_0A_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING0(mmr)   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING0_BP,\
									AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING0_MASK)
#define WF_AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING0(mmr,v) 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING0_BP,\
									AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING0_MASK)
#define RF_AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING1(mmr)   	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING1_BP,\
									AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING1_MASK)
#define WF_AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING1(mmr,v) 	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING1_BP,\
									AR_SERDES_SBUS_CTRL_0A_CLOCK_DIVIDER_SETTING1_MASK)
#define RF_AR_SERDES_SBUS_CTRL_0B_RESERVED_31_12(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_0B_RESERVED_31_12_BP,\
									AR_SERDES_SBUS_CTRL_0B_RESERVED_31_12_MASK)
#define WF_AR_SERDES_SBUS_CTRL_0B_RESERVED_31_12(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_0B_RESERVED_31_12_BP,\
									AR_SERDES_SBUS_CTRL_0B_RESERVED_31_12_MASK)
#define RF_AR_SERDES_SBUS_CTRL_0B_CLOCK_DIVIDER_RESET_VALUE(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_0B_CLOCK_DIVIDER_RESET_VALUE_BP,\
									AR_SERDES_SBUS_CTRL_0B_CLOCK_DIVIDER_RESET_VALUE_MASK)
#define WF_AR_SERDES_SBUS_CTRL_0B_CLOCK_DIVIDER_RESET_VALUE(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_0B_CLOCK_DIVIDER_RESET_VALUE_BP,\
									AR_SERDES_SBUS_CTRL_0B_CLOCK_DIVIDER_RESET_VALUE_MASK)
#define RF_AR_SERDES_SBUS_CTRL_0C_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_0C_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_0C_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_0C_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_0C_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_0C_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_0C_CISM_LOOP(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_0C_CISM_LOOP_BP,\
									AR_SERDES_SBUS_CTRL_0C_CISM_LOOP_MASK)
#define WF_AR_SERDES_SBUS_CTRL_0C_CISM_LOOP(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_0C_CISM_LOOP_BP,\
									AR_SERDES_SBUS_CTRL_0C_CISM_LOOP_MASK)
#define RF_AR_SERDES_SBUS_CTRL_0D_RESERVED_31_4(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_0D_RESERVED_31_4_BP,\
									AR_SERDES_SBUS_CTRL_0D_RESERVED_31_4_MASK)
#define WF_AR_SERDES_SBUS_CTRL_0D_RESERVED_31_4(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_0D_RESERVED_31_4_BP,\
									AR_SERDES_SBUS_CTRL_0D_RESERVED_31_4_MASK)
#define RF_AR_SERDES_SBUS_CTRL_0D_CLOCK_DIVIDER_RESET_VALUE_PAGE1(mmr)	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_0D_CLOCK_DIVIDER_RESET_VALUE_PAGE1_BP,\
									AR_SERDES_SBUS_CTRL_0D_CLOCK_DIVIDER_RESET_VALUE_PAGE1_MASK)
#define WF_AR_SERDES_SBUS_CTRL_0D_CLOCK_DIVIDER_RESET_VALUE_PAGE1(mmr,v)	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_0D_CLOCK_DIVIDER_RESET_VALUE_PAGE1_BP,\
									AR_SERDES_SBUS_CTRL_0D_CLOCK_DIVIDER_RESET_VALUE_PAGE1_MASK)
#define RF_AR_SERDES_SBUS_CTRL_10_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_10_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_10_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_10_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_10_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_10_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_10_CISM_SBUS_RX_ADDRESS(mmr)     	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_10_CISM_SBUS_RX_ADDRESS_BP,\
									AR_SERDES_SBUS_CTRL_10_CISM_SBUS_RX_ADDRESS_MASK)
#define WF_AR_SERDES_SBUS_CTRL_10_CISM_SBUS_RX_ADDRESS(mmr,v)   	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_10_CISM_SBUS_RX_ADDRESS_BP,\
									AR_SERDES_SBUS_CTRL_10_CISM_SBUS_RX_ADDRESS_MASK)
#define RF_AR_SERDES_SBUS_CTRL_11_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_11_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_11_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_11_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_11_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_11_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_11_CISM_COMMAND_1(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_11_CISM_COMMAND_1_BP,\
									AR_SERDES_SBUS_CTRL_11_CISM_COMMAND_1_MASK)
#define WF_AR_SERDES_SBUS_CTRL_11_CISM_COMMAND_1(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_11_CISM_COMMAND_1_BP,\
									AR_SERDES_SBUS_CTRL_11_CISM_COMMAND_1_MASK)
#define RF_AR_SERDES_SBUS_CTRL_12_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_12_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_12_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_12_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_12_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_12_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_12_CISM_DATA_ADDRESS_1(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_12_CISM_DATA_ADDRESS_1_BP,\
									AR_SERDES_SBUS_CTRL_12_CISM_DATA_ADDRESS_1_MASK)
#define WF_AR_SERDES_SBUS_CTRL_12_CISM_DATA_ADDRESS_1(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_12_CISM_DATA_ADDRESS_1_BP,\
									AR_SERDES_SBUS_CTRL_12_CISM_DATA_ADDRESS_1_MASK)
#define RF_AR_SERDES_SBUS_CTRL_13_CISM_DATA_WORD_1(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_13_CISM_DATA_WORD_1_BP,\
									AR_SERDES_SBUS_CTRL_13_CISM_DATA_WORD_1_MASK)
#define WF_AR_SERDES_SBUS_CTRL_13_CISM_DATA_WORD_1(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_13_CISM_DATA_WORD_1_BP,\
									AR_SERDES_SBUS_CTRL_13_CISM_DATA_WORD_1_MASK)
#define RF_AR_SERDES_SBUS_CTRL_14_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_14_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_14_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_14_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_14_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_14_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_14_CISM_COMMAND_2(mmr)           	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_14_CISM_COMMAND_2_BP,\
									AR_SERDES_SBUS_CTRL_14_CISM_COMMAND_2_MASK)
#define WF_AR_SERDES_SBUS_CTRL_14_CISM_COMMAND_2(mmr,v)         	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_14_CISM_COMMAND_2_BP,\
									AR_SERDES_SBUS_CTRL_14_CISM_COMMAND_2_MASK)
#define RF_AR_SERDES_SBUS_CTRL_15_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_15_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_15_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_15_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_15_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_15_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_15_CISM_DATA_ADDRESS_2(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_15_CISM_DATA_ADDRESS_2_BP,\
									AR_SERDES_SBUS_CTRL_15_CISM_DATA_ADDRESS_2_MASK)
#define WF_AR_SERDES_SBUS_CTRL_15_CISM_DATA_ADDRESS_2(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_15_CISM_DATA_ADDRESS_2_BP,\
									AR_SERDES_SBUS_CTRL_15_CISM_DATA_ADDRESS_2_MASK)
#define RF_AR_SERDES_SBUS_CTRL_16_CISM_DATA_WORD_2(mmr)         	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_16_CISM_DATA_WORD_2_BP,\
									AR_SERDES_SBUS_CTRL_16_CISM_DATA_WORD_2_MASK)
#define WF_AR_SERDES_SBUS_CTRL_16_CISM_DATA_WORD_2(mmr,v)       	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_16_CISM_DATA_WORD_2_BP,\
									AR_SERDES_SBUS_CTRL_16_CISM_DATA_WORD_2_MASK)
#define RF_AR_SERDES_SBUS_CTRL_20_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_20_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_20_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_20_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_20_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_20_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_20_BSB_SELECT(mmr)               	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_20_BSB_SELECT_BP,\
									AR_SERDES_SBUS_CTRL_20_BSB_SELECT_MASK)
#define WF_AR_SERDES_SBUS_CTRL_20_BSB_SELECT(mmr,v)             	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_20_BSB_SELECT_BP,\
									AR_SERDES_SBUS_CTRL_20_BSB_SELECT_MASK)
#define RF_AR_SERDES_SBUS_CTRL_20_BSB_CONTROL(mmr)              	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_20_BSB_CONTROL_BP,\
									AR_SERDES_SBUS_CTRL_20_BSB_CONTROL_MASK)
#define WF_AR_SERDES_SBUS_CTRL_20_BSB_CONTROL(mmr,v)            	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_20_BSB_CONTROL_BP,\
									AR_SERDES_SBUS_CTRL_20_BSB_CONTROL_MASK)
#define RF_AR_SERDES_SBUS_CTRL_80_GENERIC_WRITE(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_80_GENERIC_WRITE_BP,\
									AR_SERDES_SBUS_CTRL_80_GENERIC_WRITE_MASK)
#define WF_AR_SERDES_SBUS_CTRL_80_GENERIC_WRITE(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_80_GENERIC_WRITE_BP,\
									AR_SERDES_SBUS_CTRL_80_GENERIC_WRITE_MASK)
#define RF_AR_SERDES_SBUS_CTRL_81_RESERVED_31_0(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_81_RESERVED_31_0_BP,\
									AR_SERDES_SBUS_CTRL_81_RESERVED_31_0_MASK)
#define WF_AR_SERDES_SBUS_CTRL_81_RESERVED_31_0(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_81_RESERVED_31_0_BP,\
									AR_SERDES_SBUS_CTRL_81_RESERVED_31_0_MASK)
#define RF_AR_SERDES_SBUS_CTRL_82_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_82_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_82_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_82_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_82_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_82_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_82_GENERIC_WRITE_PAGE0(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_82_GENERIC_WRITE_PAGE0_BP,\
									AR_SERDES_SBUS_CTRL_82_GENERIC_WRITE_PAGE0_MASK)
#define WF_AR_SERDES_SBUS_CTRL_82_GENERIC_WRITE_PAGE0(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_82_GENERIC_WRITE_PAGE0_BP,\
									AR_SERDES_SBUS_CTRL_82_GENERIC_WRITE_PAGE0_MASK)
#define RF_AR_SERDES_SBUS_CTRL_83_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_83_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_83_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_83_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_83_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_83_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_83_GENERIC_WRITE_PAGE1(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_83_GENERIC_WRITE_PAGE1_BP,\
									AR_SERDES_SBUS_CTRL_83_GENERIC_WRITE_PAGE1_MASK)
#define WF_AR_SERDES_SBUS_CTRL_83_GENERIC_WRITE_PAGE1(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_83_GENERIC_WRITE_PAGE1_BP,\
									AR_SERDES_SBUS_CTRL_83_GENERIC_WRITE_PAGE1_MASK)
#define RF_AR_SERDES_SBUS_CTRL_84_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_84_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_84_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_84_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_84_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_84_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_84_GENERIC_WRITE_PAGE2(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_84_GENERIC_WRITE_PAGE2_BP,\
									AR_SERDES_SBUS_CTRL_84_GENERIC_WRITE_PAGE2_MASK)
#define WF_AR_SERDES_SBUS_CTRL_84_GENERIC_WRITE_PAGE2(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_84_GENERIC_WRITE_PAGE2_BP,\
									AR_SERDES_SBUS_CTRL_84_GENERIC_WRITE_PAGE2_MASK)
#define RF_AR_SERDES_SBUS_CTRL_85_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_85_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_85_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_85_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_85_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_85_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_85_GENERIC_WRITE_PAGE3(mmr)      	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_85_GENERIC_WRITE_PAGE3_BP,\
									AR_SERDES_SBUS_CTRL_85_GENERIC_WRITE_PAGE3_MASK)
#define WF_AR_SERDES_SBUS_CTRL_85_GENERIC_WRITE_PAGE3(mmr,v)    	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_85_GENERIC_WRITE_PAGE3_BP,\
									AR_SERDES_SBUS_CTRL_85_GENERIC_WRITE_PAGE3_MASK)
#define RF_AR_SERDES_SBUS_CTRL_86_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_86_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_86_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_86_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_86_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_86_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_86_GENERIC_READ_PAGE0(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_86_GENERIC_READ_PAGE0_BP,\
									AR_SERDES_SBUS_CTRL_86_GENERIC_READ_PAGE0_MASK)
#define WF_AR_SERDES_SBUS_CTRL_86_GENERIC_READ_PAGE0(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_86_GENERIC_READ_PAGE0_BP,\
									AR_SERDES_SBUS_CTRL_86_GENERIC_READ_PAGE0_MASK)
#define RF_AR_SERDES_SBUS_CTRL_87_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_87_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_87_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_87_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_87_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_87_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_87_GENERIC_READ_PAGE1(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_87_GENERIC_READ_PAGE1_BP,\
									AR_SERDES_SBUS_CTRL_87_GENERIC_READ_PAGE1_MASK)
#define WF_AR_SERDES_SBUS_CTRL_87_GENERIC_READ_PAGE1(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_87_GENERIC_READ_PAGE1_BP,\
									AR_SERDES_SBUS_CTRL_87_GENERIC_READ_PAGE1_MASK)
#define RF_AR_SERDES_SBUS_CTRL_88_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_88_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_88_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_88_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_88_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_88_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_88_GENERIC_READ_PAGE2(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_88_GENERIC_READ_PAGE2_BP,\
									AR_SERDES_SBUS_CTRL_88_GENERIC_READ_PAGE2_MASK)
#define WF_AR_SERDES_SBUS_CTRL_88_GENERIC_READ_PAGE2(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_88_GENERIC_READ_PAGE2_BP,\
									AR_SERDES_SBUS_CTRL_88_GENERIC_READ_PAGE2_MASK)
#define RF_AR_SERDES_SBUS_CTRL_89_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_89_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_89_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_89_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_89_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_89_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_89_GENERIC_READ_PAGE3(mmr)       	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_89_GENERIC_READ_PAGE3_BP,\
									AR_SERDES_SBUS_CTRL_89_GENERIC_READ_PAGE3_MASK)
#define WF_AR_SERDES_SBUS_CTRL_89_GENERIC_READ_PAGE3(mmr,v)     	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_89_GENERIC_READ_PAGE3_BP,\
									AR_SERDES_SBUS_CTRL_89_GENERIC_READ_PAGE3_MASK)
#define RF_AR_SERDES_SBUS_CTRL_FE_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_FE_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_FE_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_FE_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_FE_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_FE_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_FE_SBUS_ID(mmr)                  	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_FE_SBUS_ID_BP,\
									AR_SERDES_SBUS_CTRL_FE_SBUS_ID_MASK)
#define WF_AR_SERDES_SBUS_CTRL_FE_SBUS_ID(mmr,v)                	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_FE_SBUS_ID_BP,\
									AR_SERDES_SBUS_CTRL_FE_SBUS_ID_MASK)
#define RF_AR_SERDES_SBUS_CTRL_FF_RESERVED_31_8(mmr)            	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_FF_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_FF_RESERVED_31_8_MASK)
#define WF_AR_SERDES_SBUS_CTRL_FF_RESERVED_31_8(mmr,v)          	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_FF_RESERVED_31_8_BP,\
									AR_SERDES_SBUS_CTRL_FF_RESERVED_31_8_MASK)
#define RF_AR_SERDES_SBUS_CTRL_FF_IP_IDCODE(mmr)                	RD_FIELD(mmr,\
									AR_SERDES_SBUS_CTRL_FF_IP_IDCODE_BP,\
									AR_SERDES_SBUS_CTRL_FF_IP_IDCODE_MASK)
#define WF_AR_SERDES_SBUS_CTRL_FF_IP_IDCODE(mmr,v)              	WR_FIELD(mmr,v,\
									AR_SERDES_SBUS_CTRL_FF_IP_IDCODE_BP,\
									AR_SERDES_SBUS_CTRL_FF_IP_IDCODE_MASK)

#endif
