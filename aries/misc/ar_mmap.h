/******************************************************************************
 * Copyright  2006 Cray Inc. All Rights Reserved.
 * ar_mmap.h: Aries Memory Map
 *
 * Header file includes the following definition blocks:
 *
 *
 ******************************************************************************/

#ifndef _AR_MMAP_H_
#define _AR_MMAP_H_

/*******************************************************************************
 * MEMORY MAP DEFINES - WINDOWS/DESCRIPTORS
 ******************************************************************************/
// CQ User Space
#define AR_UC_CQ_USER_BASE		0x0020000000ull
#define AR_UC_CQ_USER_SIZE		0x0000800000ull
#define AR_UC_CQ_USER_LIMIT		(AR_UC_CQ_USER_BASE \
					+ AR_UC_CQ_USER_SIZE-1)
#define AR_UC_CQ_USER_INCR		0x0000001000ull
#define AR_UC_CQ_USER_ADDR(didx)	(((didx)*AR_UC_CQ_USER_INCR)\
					+ AR_UC_CQ_USER_BASE )
// FMA User Space
#define AR_UC_FMA_DESC_USER_BASE	0x0020801000ull
#define AR_UC_FMA_DESC_USER_SIZE	0x000007f000ull
#define AR_UC_FMA_DESC_USER_LIMIT	(AR_UC_FMA_DESC_USER_BASE \
					+ AR_UC_FMA_DESC_USER_SIZE-1)
#define AR_UC_FMA_DESC_USER_INCR	0x0000001000ull
#define AR_UC_FMA_DESC_USER_ADDR(didx)	(((didx-1)*AR_UC_FMA_DESC_USER_INCR)\
					+ AR_UC_FMA_DESC_USER_BASE )
// FMA Descriptors
#define AR_UC_FMA_DESC_SYS_BASE		0x0020881000ull
#define AR_UC_FMA_DESC_SYS_SIZE		0x000007f000ull
#define AR_UC_FMA_DESC_SYS_LIMIT	(AR_UC_FMA_DESC_SYS_BASE \
					+ AR_UC_FMA_DESC_SYS_SIZE-1)
#define AR_UC_FMA_DESC_SYS_INCR		0x0000001000ull
#define AR_UC_FMA_DESC_SYS_ADDR(didx)	(((didx-1)*AR_UC_FMA_DESC_SYS_INCR)\
					+ AR_UC_FMA_DESC_SYS_BASE )
// FMA (PUT and GET)
#define AR_UC_FMA_BASE			0x0040000000ull
#define AR_UC_FMA_SIZE			0x1fc0000000ull
#define AR_UC_FMA_LIMIT			(AR_UC_FMA_BASE \
					+ AR_UC_FMA_SIZE-1)
#define AR_UC_FMA_INCR			0x0040000000ull
#define AR_UC_FMA_ADDR(didx)		(((didx-1)*AR_UC_FMA_INCR)\
					+ AR_UC_FMA_BASE )
// FMA PUT
#define AR_UC_FMA_PUT_BASE		0x0040000000ull
#define AR_UC_FMA_PUT_SIZE		0x1fc0000000ull
#define AR_UC_FMA_PUT_LIMIT		(AR_UC_FMA_PUT_BASE \
					+ AR_UC_FMA_PUT_SIZE-1)
#define AR_UC_FMA_PUT_INCR		0x0040000000ull
#define AR_UC_FMA_PUT_ADDR(didx)	(((didx-1)*AR_UC_FMA_PUT_INCR)\
					+ AR_UC_FMA_PUT_BASE )
// FMA GET
#define AR_UC_FMA_GET_BASE		0x0060000000ull
#define AR_UC_FMA_GET_SIZE		0x1fc0000000ull
#define AR_UC_FMA_GET_LIMIT		(AR_UC_FMA_PUT_BASE \
					+ AR_UC_FMA_PUT_SIZE-1)
#define AR_UC_FMA_GET_INCR		0x0040000000ull
#define AR_UC_FMA_GET_ADDR(didx)	(((didx-1)*AR_UC_FMA_GET_INCR)\
					+ AR_UC_FMA_GET_BASE )

/*******************************************************************************
 * MEMORY MAP DEFINES - LOCAL BLOCK ADDRESS SPACE
 ******************************************************************************/
// Processor Interface MMR SPACE (PI)
#define AR_PI_BASE			0x0000400000ull
#define AR_PI_SIZE			0x0000080000ull
#define AR_PI_LIMIT			(AR_PI_BASE+AR_PI_SIZE-1)

// Processor Interface MMR SPACE (PI_IP)
#define AR_PI_IP_BASE			0x0000480000ull
#define AR_PI_IP_SIZE			0x0000080000ull
#define AR_PI_IP_LIMIT			(AR_PI_IP_BASE+AR_PI_IP_SIZE-1)

// Processor Interface Logic Montior MMR SPACE (PI_LM)
#define AR_PI_LM_BASE			0x0000500000ull
#define AR_PI_LM_SIZE			0x0000080000ull
#define AR_PI_LM_LIMIT			(AR_PI_LM_BASE+AR_PI_LM_SIZE-1)

// Processor Interface Logic Montior MMR SPACE (PI_LM)
#define AR_PI_LM1_BASE			0x0000580000ull
#define AR_PI_LM1_SIZE			0x0000080000ull
#define AR_PI_LM1_LIMIT			(AR_PI_LM1_BASE+AR_PI_LM1_SIZE-1)

// Southbride MMR SPACE (SB)
#define AR_SB_BASE			0x0000080000ull
#define AR_SB_SIZE			0x0000080000ull
#define AR_SB_LIMIT			(AR_SB_BASE+AR_SB_SIZE-1)

// BOOT RAM
#define AR_BOOTRAM_BASE			0x0000100000ull
#define AR_BOOTRAM_SIZE			0x0000010000ull
#define AR_BOOTRAM_LIMIT		(AR_BOOTRAM_BASE+AR_BOOTRAM_SIZE-1)

// NET TILE MMR SPACE (NT)
#define AR_NT_BASE			0x0002000000ull
#define AR_NT_SIZE			0x0001800000ull
#define AR_NT_LIMIT			(AR_NT_BASE+AR_NT_SIZE-1)

// NET TILE MMR SPACE (PT)
#define AR_PT_BASE			0x0002000000ull
#define AR_PT_SIZE			0x0001800000ull
#define AR_PT_LIMIT			(AR_PT_BASE+AR_PT_SIZE-1)

// RTR0 MMR SPACE (TILE Ring 0)
#define AR_RTR0_BASE			0x0002000000ull
#define AR_RTR0_SIZE			0x0000400000ull
#define AR_RTR0_LIMIT			(AR_RTR0_BASE+AR_RTR0_SIZE-1)

// RTR1 MMR SPACE (TILE Ring 1)
#define AR_RTR1_BASE			0x0002400000ull
#define AR_RTR1_SIZE			0x0000400000ull
#define AR_RTR1_LIMIT			(AR_RTR1_BASE+AR_RTR1_SIZE-1)

// RTR2 MMR SPACE (TILE Ring 2)
#define AR_RTR2_BASE			0x0002800000ull
#define AR_RTR2_SIZE			0x0000400000ull
#define AR_RTR2_LIMIT			(AR_RTR2_BASE+AR_RTR2_SIZE-1)

// RTR3 MMR SPACE (TILE Ring 3)
#define AR_RTR3_BASE			0x0002c00000ull
#define AR_RTR3_SIZE			0x0000400000ull
#define AR_RTR3_LIMIT			(AR_RTR3_BASE+AR_RTR3_SIZE-1)

// RTR4 MMR SPACE (TILE Ring 4)
#define AR_RTR4_BASE			0x0003000000ull
#define AR_RTR4_SIZE			0x0000400000ull
#define AR_RTR4_LIMIT			(AR_RTR4_BASE+AR_RTR4_SIZE-1)

// RTR5 MMR SPACE (TILE Ring 5)
#define AR_RTR5_BASE			0x0003400000ull
#define AR_RTR5_SIZE			0x0000400000ull
#define AR_RTR5_LIMIT			(AR_RTR5_BASE+AR_RTR5_SIZE-1)

// RTR0 MMR SPACE (TILE Ring 0)
#define AR_BC_RTR0_BASE			0x0003d00000ull
#define AR_BC_RTR0_SIZE			0x0000080000ull
#define AR_BC_RTR0_LIMIT		(AR_BC_RTR0_BASE+AR_BC_RTR0_SIZE-1)

// BC_RTR1 MMR SPACE (TILE Ring 1)
#define AR_BC_RTR1_BASE			0x0003d80000ull
#define AR_BC_RTR1_SIZE			0x0000080000ull
#define AR_BC_RTR1_LIMIT		(AR_BC_RTR1_BASE+AR_BC_RTR1_SIZE-1)

// BC_RTR2 MMR SPACE (TILE Ring 2)
#define AR_BC_RTR2_BASE			0x0003e00000ull
#define AR_BC_RTR2_SIZE			0x0000080000ull
#define AR_BC_RTR2_LIMIT		(AR_BC_RTR2_BASE+AR_BC_RTR2_SIZE-1)

// BC_RTR3 MMR SPACE (TILE Ring 3)
#define AR_BC_RTR3_BASE			0x0003e80000ull
#define AR_BC_RTR3_SIZE			0x0000080000ull
#define AR_BC_RTR3_LIMIT		(AR_BC_RTR3_BASE+AR_BC_RTR3_SIZE-1)

// BC_RTR4 MMR SPACE (TILE Ring 4)
#define AR_BC_RTR4_BASE			0x0003f00000ull
#define AR_BC_RTR4_SIZE			0x0000080000ull
#define AR_BC_RTR4_LIMIT		(AR_BC_RTR4_BASE+AR_BC_RTR4_SIZE-1)

// BC_RTR5 MMR SPACE (TILE Ring 5)
#define AR_BC_RTR5_BASE			0x0003f80000ull
#define AR_BC_RTR5_SIZE			0x0000080000ull
#define AR_BC_RTR5_LIMIT		(AR_BC_RTR5_BASE+AR_BC_RTR5_SIZE-1)

// Link Control Block MMR SPACE (SLB,LCB)
#define AR_SLB_BASE			0x0006000000ull
#define AR_SLB_SIZE			0x0001400000ull
#define AR_SLB_LIMIT			(AR_SLB_BASE+AR_SLB_SIZE-1)
#define AR_LCB_BASE			0x0006000000ull
#define AR_LCB_SIZE			0x0001400000ull
#define AR_LCB_LIMIT			(AR_LCB_BASE+AR_LCB_SIZE-1)

// LCB BCAST SPACE (BCAST)
#define AR_BC_SLB_BASE			0x0007f80000ull
#define AR_BC_SLB_SIZE			0x0000080000ull
#define AR_BC_SLB_LIMIT			(AR_BC_SLB_BASE+AR_BC_SLB_SIZE-1)
#define AR_BC_LCB_BASE			0x0007f80000ull
#define AR_BC_LCB_SIZE			0x0000080000ull
#define AR_BC_LCB_LIMIT			(AR_BC_LCB_BASE+AR_BC_LCB_SIZE-1)

// NP MMR SPACE (NP)
#define AR_NP_BASE			0x0003c00000ull
#define AR_NP_SIZE			0x0000100000ull
#define AR_NP_LIMIT			(AR_NP_BASE+AR_NP_SIZE-1)

// Netlink MMR SPACE (NL)
#define AR_NL_BASE			0x0000200000ull
#define AR_NL_SIZE			0x0000080000ull
#define AR_NL_LIMIT			(AR_NL_BASE+AR_NL_SIZE-1)

// Netlink Logic Monitor MMR SPACE (NLLM)
#define AR_NLLM_BASE			0x0000280000ull
#define AR_NLLM_SIZE			0x0000080000ull
#define AR_NLLM_LIMIT			(AR_NLLM_BASE+AR_NLLM_SIZE-1)

// Netlink Logic Monitor LCLK MMR Space (NL_LCLK)
#define AR_NL_LCLK_BASE			0x0003900000ull
#define AR_NL_LCLK_SIZE			0x0000080000ull
#define AR_NL_LCLK_LIMIT		(AR_NL_LCLK_BASE+AR_NL_LCLK_SIZE-1)

// Netlink Logic Monitor CCLK MMR Space (NL_CCLK)
#define AR_NL_CCLK_BASE			0x0000280000ull
#define AR_NL_CCLK_SIZE			0x0000080000ull
#define AR_NL_CCLK_LIMIT		(AR_NL_CCLK_BASE+AR_NL_CCLK_SIZE-1)

// Local Block MMR SPACE (LB)
#define AR_LB_BASE			0x0000180000ull
#define AR_LB_SIZE			0x0000080000ull
#define AR_LB_LIMIT			(AR_LB_BASE+AR_LB_SIZE-1)

// Block Transfer Engine MMR SPACE (BTE)
#define AR_BTE_BASE			0x0004000000ull
#define AR_BTE_SIZE			0x0000100000ull
#define AR_BTE_LIMIT			(AR_BTE_BASE+AR_BTE_SIZE-1)

// Deadlock Avoidance MMR SPACE (DLA)
#define AR_DLA_BASE			0x0004200000ull
#define AR_DLA_SIZE			0x0000100000ull
#define AR_DLA_LIMIT			(AR_DLA_BASE+AR_DLA_SIZE-1)

// NAT MMR SPACE (NAT)
#define AR_NAT_BASE			0x0004400000ull
#define AR_NAT_SIZE			0x0000100000ull
#define AR_NAT_LIMIT			(AR_NAT_BASE+AR_NAT_SIZE-1)

// IOMMU MMR SPACE (IOMMU)
#define AR_IOMMU_BASE			0x0004600000ull
#define AR_IOMMU_SIZE			0x0000100000ull
#define AR_IOMMU_LIMIT			(AR_IOMMU_BASE+AR_IOMMU_SIZE-1)

// CQ MMR SPACE (CQ)
#define AR_CQ_BASE			0x0004800000ull
#define AR_CQ_SIZE			0x0000080000ull
#define AR_CQ_LIMIT			(AR_CQ_BASE+AR_CQ_SIZE-1)

// CE MMR SPACE (CE)
#define AR_CE_BASE			0x0004a00000ull
#define AR_CE_SIZE			0x0000100000ull
#define AR_CE_LIMIT			(AR_CE_BASE+AR_CE_SIZE-1)

// RMT MMR SPACE (RMT)
#define AR_RMT_BASE			0x0004c00000ull
#define AR_RMT_SIZE			0x0000100000ull
#define AR_RMT_LIMIT			(AR_RMT_BASE+AR_RMT_SIZE-1)

// ORB MMR SPACE (ORB)
#define AR_ORB_BASE			0x0005000000ull
#define AR_ORB_SIZE			0x0000100000ull
#define AR_ORB_LIMIT			(AR_ORB_BASE+AR_ORB_SIZE-1)

// Write Combining Cache MMR SPACE (WC)
#define AR_WC_BASE			0x0005200000ull
#define AR_WC_SIZE			0x0000100000ull
#define AR_WC_LIMIT			(AR_WC_BASE+AR_WC_SIZE-1)

// FMA MMR SPACE (FMA)
#define AR_FMA_BASE			0x0005400000ull
#define AR_FMA_SIZE			0x0000100000ull
#define AR_FMA_LIMIT			(AR_FMA_BASE+AR_FMA_SIZE-1)

// SSID MMR SPACE (SSID)
#define AR_SSID_BASE			0x0005600000ull
#define AR_SSID_SIZE			0x0000100000ull
#define AR_SSID_LIMIT			(AR_SSID_BASE+AR_SSID_SIZE-1)

// TARB MMR SPACE (TARB)
#define AR_TARB_BASE			0x0005800000ull
#define AR_TARB_SIZE			0x0000100000ull
#define AR_TARB_LIMIT			(AR_TARB_BASE+AR_TARB_SIZE-1)

// PARB MMR SPACE (PARB)
#define AR_PARB_BASE			0x0005900000ull
#define AR_PARB_SIZE			0x0000080000ull
#define AR_PARB_LIMIT			(AR_PARB_BASE+AR_PARB_SIZE-1)

// RAT MMR SPACE (RAT)
#define AR_RAT_BASE			0x0005980000ull
#define AR_RAT_SIZE			0x0000080000ull
#define AR_RAT_LIMIT			(AR_RAT_BASE+AR_RAT_SIZE-1)

// NSLM MMR SPACE (NSLM)
#define AR_NSLM_BASE			0x0005a00000ull
#define AR_NSLM_SIZE			0x0000180000ull
#define AR_NSLM_LIMIT			(AR_NSLM_BASE+AR_NSLM_SIZE-1)

// NETMON MMR SPACE (NETMON) - Part of the NSLM
#define AR_NETMON_BASE			0x0005a00000ull
#define AR_NETMON_SIZE			0x0000080000ull
#define AR_NETMON_LIMIT			(AR_NETMON_BASE+AR_NETMON_SIZE-1)

// REQMON MMR SPACE (REQMON) - Part of the NSLM
#define AR_REQMON_BASE			0x0005a80000ull
#define AR_REQMON_SIZE			0x0000080000ull
#define AR_REQMON_LIMIT			(AR_REQMON_BASE+AR_REQMON_SIZE-1)

// RSPMON MMR SPACE (RSPMON) - Part of the NSLM
#define AR_RSPMON_BASE			0x0005b00000ull
#define AR_RSPMON_SIZE			0x0000080000ull
#define AR_RSPMON_LIMIT			(AR_RSPMON_BASE+AR_RSPMON_SIZE-1)

// NICLM MMR SPACE (NICLM)
#define AR_NICLM_BASE			0x0005b80000ull
#define AR_NICLM_SIZE			0x0000080000ull
#define AR_NICLM_LIMIT			(AR_NICLM_BASE+AR_NICLM_SIZE-1)

// AMO MMR SPACE (AMO)
#define AR_AMO_BASE			0x0005c00000ull
#define AR_AMO_SIZE			0x0000100000ull
#define AR_AMO_LIMIT			(AR_AMO_BASE+AR_AMO_SIZE-1)

// NPT MMR SPACE (NPT)
#define AR_NPT_BASE			0x0005e00000ull
#define AR_NPT_SIZE			0x0000100000ull
#define AR_NPT_LIMIT			(AR_NPT_BASE+AR_NPT_SIZE-1)

// SBUS MMR SPACE (SBUS)
#define AR_SBUS_BASE			0x0000000000ull
#define AR_SBUS_SIZE			0x0000000001ull
#define AR_SBUS_LIMIT			(AR_SBUS_BASE+AR_SBUS_SIZE-1)

// CBUS MMR SPACE (CBUS)
#define AR_CBUS_BASE			0x0000000000ull
#define AR_CBUS_SIZE			0x0000000001ull
#define AR_CBUS_LIMIT			(AR_CBUS_BASE+AR_CBUS_SIZE-1)

#ifndef __AR_NO_VHDRS__
/*******************************************************************************
 * AUTO GENERATED HEADERS
 ******************************************************************************/
#include "ar_bte_defs.h"
#include "ar_ce_defs.h"
#include "ar_cq_defs.h"
#include "ar_iommu_defs.h"
#include "ar_lcb_defs.h"
#include "ar_sb_defs.h"
#include "ar_lb_defs.h"
#include "ar_fma_defs.h"
#include "ar_wc_defs.h"
#include "ar_nat_defs.h"
#include "ar_nllm_defs.h"
#include "ar_nl_cclk_defs.h"
#include "ar_nl_lclk_defs.h"
#include "ar_nl_defs.h"
#include "ar_niclm_defs.h"
#include "ar_np_defs.h"
#include "ar_npt_defs.h"
#include "ar_nslm_defs.h"
#include "ar_netmon_defs.h"
#include "ar_reqmon_defs.h"
#include "ar_rspmon_defs.h"
#include "ar_orb_defs.h"
#include "ar_parb_defs.h"
#include "ar_pi_defs.h"
#include "ar_pi_ip_defs.h"
#include "ar_pi_lm_defs.h"
#include "ar_rat_defs.h"
#include "ar_rmt_defs.h"
#include "ar_tarb_defs.h"
#include "ar_nt_defs.h"
#include "ar_pt_defs.h"
#include "ar_ssid_defs.h"
#include "ar_amo_defs.h"
#include "ar_dla_defs.h"
#include "ar_sbus_defs.h"
#include "ar_cbus_defs.h"


/*******************************************************************************
 * AUTO GENERATED HEADERS FOR GEMINI BLOCKS BEING ADDED TO SIMULATOR
 ******************************************************************************/

#endif	/* __AR_NO_VHDRS__ */
#endif	/* _AR_MMAP_H_ */
