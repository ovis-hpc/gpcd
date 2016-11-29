/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pi_enum_h.h
 * FILE: ar_pi_enum_h.h
 * Created by v2h.c on Wed Oct  8 14:39:02 2014
 ******************************************************************************/

#ifndef _AR_PI_ENUM_H_H_
#define _AR_PI_ENUM_H_H_

#define AR_PI_PMI_NREQ_GET_PKTS                                     	0x0ull
#define AR_PI_PMI_NREQ_PUT_PKTS                                     	0x8ull
#define AR_PI_PMI_NREQ_AMO_PKTS                                     	0x10ull
#define AR_PI_PMI_NREQ_OTHER_PKTS                                   	0x18ull
#define AR_PI_PMI_NREQ_NIC_FLITS                                    	0x20ull
#define AR_PI_PMI_NREQ_RR_BLKD                                      	0x28ull
#define AR_PI_PMI_NREQ_IRSP_BLKD                                    	0x30ull
#define AR_PI_PMI_NREQ_PTC_BLKD0                                    	0x38ull
#define AR_PI_PMI_NREQ_PTC_BLKD1                                    	0x40ull
#define AR_PI_PMI_NREQ_PTC_BLKD2                                    	0x48ull
#define AR_PI_PMI_NREQ_TCG_BLKD0                                    	0x50ull
#define AR_PI_PMI_NREQ_TCG_BLKD1                                    	0x58ull
#define AR_PI_PMI_NREQ_TCG_BLKD2                                    	0x60ull
#define AR_PI_PMI_IRSP_PKTS                                         	0x68ull
#define AR_PI_PMI_IRSP_PKTS_BLKD                                    	0x70ull
#define AR_PI_PMI_NRSP_PKTS                                         	0x78ull
#define AR_PI_PMI_NRSP_PKTS_BLKD                                    	0x80ull
#define AR_PI_PMI_NRSP_FLITS                                        	0x88ull
#define AR_PI_PMI_NRSP_HWM                                          	0x90ull
#define AR_PI_PMI_NRSP_BP                                           	0x98ull
#define AR_PI_PMI_REQTRANS_BLKD                                     	0xa0ull
#define AR_PI_PRF_SCRATCH_0A8                                       	0xa8ull
#define AR_PI_PRF_SCRATCH_0B0                                       	0xb0ull
#define AR_PI_PRF_SCRATCH_0B8                                       	0xb8ull
#define AR_PI_PRF_SCRATCH_0C0                                       	0xc0ull
#define AR_PI_PRF_SCRATCH_0C8                                       	0xc8ull
#define AR_PI_PRF_SCRATCH_0D0                                       	0xd0ull
#define AR_PI_PRF_SCRATCH_0D8                                       	0xd8ull
#define AR_PI_PRF_SCRATCH_0E0                                       	0xe0ull
#define AR_PI_PRF_SCRATCH_0E8                                       	0xe8ull
#define AR_PI_PRF_SCRATCH_0F0                                       	0xf0ull
#define AR_PI_PRF_SCRATCH_0F8                                       	0xf8ull
#define AR_PI_PTI_NIF_RX_PKT_CNT                                    	0x100ull
#define AR_PI_PTI_NIF_TX_PKT_CNT                                    	0x108ull
#define AR_PI_PTI_NIF_PKT_DISCARD_CNT                               	0x110ull
#define AR_PI_PTI_NIF_IFIFO_MBE_CNT                                 	0x118ull
#define AR_PI_PTI_NIF_IFIFO_SBE_CNT                                 	0x120ull
#define AR_PI_PTI_NIF_NIC_STALLED_CNT                               	0x128ull
#define AR_PI_PTI_NIF_NIC_DATA_QW_CNT                               	0x130ull
#define AR_PI_PTI_NIF_NIC_DATA_BYTE_CNT                             	0x138ull
#define AR_PI_PTI_LIF_REQ_RX_PKT_CNT                                	0x140ull
#define AR_PI_PTI_LIF_REQ_TX_PKT_CNT                                	0x148ull
#define AR_PI_PTI_LIF_REQ_PKT_DISCARD_CNT                           	0x150ull
#define AR_PI_PTI_LIF_REQ_IFIFO_MBE_CNT                             	0x158ull
#define AR_PI_PTI_LIF_REQ_IFIFO_SBE_CNT                             	0x160ull
#define AR_PI_PTI_LIF_REQ_LB_STALLED_CNT                            	0x168ull
#define AR_PI_PTI_LIF_REQ_ORF_STALLED_CNT                           	0x170ull
#define AR_PI_PTI_LIF_RSP_RX_PKT_CNT                                	0x178ull
#define AR_PI_PTI_LIF_RSP_TX_PKT_CNT                                	0x180ull
#define AR_PI_PTI_LIF_RSP_TX_ABORT_CNT                              	0x188ull
#define AR_PI_PTI_LIF_RSP_TX_UR_CNT                                 	0x190ull
#define AR_PI_PTI_LIF_RSP_HAL_STALLED_CNT                           	0x198ull
#define AR_PI_PRF_SCRATCH_1A0                                       	0x1a0ull
#define AR_PI_PRF_SCRATCH_1A8                                       	0x1a8ull
#define AR_PI_PRF_SCRATCH_1B0                                       	0x1b0ull
#define AR_PI_PRF_SCRATCH_1B8                                       	0x1b8ull
#define AR_PI_PRF_SCRATCH_1C0                                       	0x1c0ull
#define AR_PI_PRF_SCRATCH_1C8                                       	0x1c8ull
#define AR_PI_PRF_SCRATCH_1D0                                       	0x1d0ull
#define AR_PI_PRF_SCRATCH_1D8                                       	0x1d8ull
#define AR_PI_PRF_SCRATCH_1E0                                       	0x1e0ull
#define AR_PI_PRF_SCRATCH_1E8                                       	0x1e8ull
#define AR_PI_PRF_SCRATCH_1F0                                       	0x1f0ull
#define AR_PI_PRF_SCRATCH_1F8                                       	0x1f8ull
#define AR_PI_PII_F0_MSIX_MSG_CNT                                   	0x200ull
#define AR_PI_PII_F1_MSIX_MSG_CNT                                   	0x208ull
#define AR_PI_PII_F2_MSIX_MSG_CNT                                   	0x210ull
#define AR_PI_PII_F3_MSIX_MSG_CNT                                   	0x218ull
#define AR_PI_PII_F0_MSIX_TABLE_MBE_CNT                             	0x220ull
#define AR_PI_PII_F1_MSIX_TABLE_MBE_CNT                             	0x228ull
#define AR_PI_PII_F2_MSIX_TABLE_MBE_CNT                             	0x230ull
#define AR_PI_PII_F3_MSIX_TABLE_MBE_CNT                             	0x238ull
#define AR_PI_PII_F0_MSIX_TABLE_SBE_CNT                             	0x240ull
#define AR_PI_PII_F1_MSIX_TABLE_SBE_CNT                             	0x248ull
#define AR_PI_PII_F2_MSIX_TABLE_SBE_CNT                             	0x250ull
#define AR_PI_PII_F3_MSIX_TABLE_SBE_CNT                             	0x258ull
#define AR_PI_PRF_SCRATCH_260                                       	0x260ull
#define AR_PI_PRF_SCRATCH_268                                       	0x268ull
#define AR_PI_PRF_SCRATCH_270                                       	0x270ull
#define AR_PI_PRF_SCRATCH_278                                       	0x278ull
#define AR_PI_PRF_SCRATCH_280                                       	0x280ull
#define AR_PI_PRF_SCRATCH_288                                       	0x288ull
#define AR_PI_PRF_SCRATCH_290                                       	0x290ull
#define AR_PI_PRF_SCRATCH_298                                       	0x298ull
#define AR_PI_PRF_SCRATCH_2A0                                       	0x2a0ull
#define AR_PI_PRF_SCRATCH_2A8                                       	0x2a8ull
#define AR_PI_PRF_SCRATCH_2B0                                       	0x2b0ull
#define AR_PI_PRF_SCRATCH_2B8                                       	0x2b8ull
#define AR_PI_PRF_SCRATCH_2C0                                       	0x2c0ull
#define AR_PI_PRF_SCRATCH_2C8                                       	0x2c8ull
#define AR_PI_PRF_SCRATCH_2D0                                       	0x2d0ull
#define AR_PI_PRF_SCRATCH_2D8                                       	0x2d8ull
#define AR_PI_PRF_SCRATCH_2E0                                       	0x2e0ull
#define AR_PI_PRF_SCRATCH_2E8                                       	0x2e8ull
#define AR_PI_PRF_SCRATCH_2F0                                       	0x2f0ull
#define AR_PI_PRF_SCRATCH_2F8                                       	0x2f8ull
#define AR_PI_LM0_LM1_TRIGGER0_CNT                                  	0x300ull
#define AR_PI_LM0_LM1_TRIGGER1_CNT                                  	0x308ull
#define AR_PI_LM1_LM0_TRIGGER0_CNT                                  	0x310ull
#define AR_PI_LM1_LM0_TRIGGER1_CNT                                  	0x318ull
#define AR_PI_PRF_SCRATCH_320                                       	0x320ull
#define AR_PI_PRF_SCRATCH_328                                       	0x328ull
#define AR_PI_PRF_SCRATCH_330                                       	0x330ull
#define AR_PI_PRF_SCRATCH_338                                       	0x338ull
#define AR_PI_PRF_SCRATCH_340                                       	0x340ull
#define AR_PI_PRF_SCRATCH_348                                       	0x348ull
#define AR_PI_PRF_SCRATCH_350                                       	0x350ull
#define AR_PI_PRF_SCRATCH_358                                       	0x358ull
#define AR_PI_PRF_SCRATCH_360                                       	0x360ull
#define AR_PI_PRF_SCRATCH_368                                       	0x368ull
#define AR_PI_PRF_SCRATCH_370                                       	0x370ull
#define AR_PI_PRF_SCRATCH_378                                       	0x378ull
#define AR_PI_PRF_SCRATCH_380                                       	0x380ull
#define AR_PI_PRF_SCRATCH_388                                       	0x388ull
#define AR_PI_PRF_SCRATCH_390                                       	0x390ull
#define AR_PI_PRF_SCRATCH_398                                       	0x398ull
#define AR_PI_PRF_SCRATCH_3A0                                       	0x3a0ull
#define AR_PI_PRF_SCRATCH_3A8                                       	0x3a8ull
#define AR_PI_PRF_SCRATCH_3B0                                       	0x3b0ull
#define AR_PI_PRF_SCRATCH_3B8                                       	0x3b8ull
#define AR_PI_PRF_SCRATCH_3C0                                       	0x3c0ull
#define AR_PI_PRF_SCRATCH_3C8                                       	0x3c8ull
#define AR_PI_PRF_SCRATCH_3D0                                       	0x3d0ull
#define AR_PI_PRF_SCRATCH_3D8                                       	0x3d8ull
#define AR_PI_PRF_SCRATCH_3E0                                       	0x3e0ull
#define AR_PI_PRF_SCRATCH_3E8                                       	0x3e8ull
#define AR_PI_PRF_SCRATCH_3F0                                       	0x3f0ull
#define AR_PI_PRF_SCRATCH_3F8                                       	0x3f8ull

#endif