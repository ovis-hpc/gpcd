/******************************************************************************
 * Copyright  2009 Cray nc. All Rights Reserved.
 * leo_mmap.h: Leo Memory Map
 *
 * Header file includes the following definition blocks:
 *
 *
 ******************************************************************************/

#ifndef _LEO_MMAP_H_
#define _LEO_MMAP_H_

/*******************************************************************************
 * MEMORY MAP DEFINES
 ******************************************************************************/

// LOCAL BLOCK ADDRESS SPACE

// Link Control Block MMR SPACE (SLB,LCB)
#define LEO_SLB_BASE			0x0006000000ull
#define LEO_SLB_SIZE			0x0001400000ull
#define LEO_SLB_LIMIT			(LEO_SLB_BASE+LEO_SLB_SIZE-1)
#define LEO_LCB_BASE			0x0006000000ull
#define LEO_LCB_SIZE			0x0001400000ull
#define LEO_LCB_LIMIT			(LEO_LCB_BASE+LEO_LCB_SIZE-1)

// Link Control Block 0 MMR SPACE (SLB0,LCB0)
#define LEO_LCB0_BASE			0x0006000000ull
#define LEO_LCB0_SIZE			0x0000080000ull
#define LEO_LCB0_LIMIT			(LEO_LCB0_BASE+LEO_LCB0_SIZE-1)

// Link Control Block 1 MMR SPACE (SLB1,LCB1)
#define LEO_LCB1_BASE			0x0006080000ull
#define LEO_LCB1_SIZE			0x0000080000ull
#define LEO_LCB1_LIMIT			(LEO_LCB1_BASE+LEO_LCB1_SIZE-1)

// Link Control Block 2 MMR SPACE (SLB2,LCB2)
#define LEO_LCB2_BASE			0x0006100000ull
#define LEO_LCB2_SIZE			0x0000080000ull
#define LEO_LCB2_LIMIT			(LEO_LCB2_BASE+LEO_LCB2_SIZE-1)

// Link Control Block 3 MMR SPACE (SLB3,LCB3)
#define LEO_LCB3_BASE			0x0006180000ull
#define LEO_LCB3_SIZE			0x0000080000ull
#define LEO_LCB3_LIMIT			(LEO_LCB3_BASE+LEO_LCB3_SIZE-1)

// Local Block MMR SPACE (LB)
#define LEO_LB_BASE			0x0000180000ull
#define LEO_LB_SIZE			0x0000080000ull
#define LEO_LB_LIMIT			(LEO_LB_BASE+LEO_LB_SIZE-1)

// PG MMR SPACE (PG)
#define LEO_PG_BASE			0x0002000000ull
#define LEO_PG_SIZE			0x0001800000ull
#define LEO_PG_LIMIT			(LEO_PG_BASE+LEO_PG_SIZE-1)

// PG3 MMR SPACE (PG3)
#define LEO_PG3_BASE			0x0002c00000ull
#define LEO_PG3_SIZE			0x0000400000ull
#define LEO_PG3_LIMIT			(LEO_PG3_BASE+LEO_PG3_SIZE-1)

// PG2 MMR SPACE (PG2)
#define LEO_PG2_BASE			0x0002800000ull
#define LEO_PG2_SIZE			0x0000400000ull
#define LEO_PG2_LIMIT			(LEO_PG2_BASE+LEO_PG2_SIZE-1)

// PG1 MMR SPACE (PG1)
#define LEO_PG1_BASE			0x0002400000ull
#define LEO_PG1_SIZE			0x0000400000ull
#define LEO_PG1_LIMIT			(LEO_PG1_BASE+LEO_PG1_SIZE-1)

// PG0 MMR SPACE (PG0)
#define LEO_PG0_BASE			0x0002000000ull
#define LEO_PG0_SIZE			0x0000400000ull
#define LEO_PG0_LIMIT			(LEO_PG0_BASE+LEO_PG0_SIZE-1)

// NP MMR SPACE (NP)
#define LEO_NP_BASE			0x0003c00000ull
#define LEO_NP_SIZE			0x0000100000ull
#define LEO_NP_LIMIT			(LEO_NP_BASE+LEO_NP_SIZE-1)

/*******************************************************************************
 * AUTO GENERATED HEADERS
 ******************************************************************************/
#include "leo_lcb_defs.h"
#include "leo_lb_defs.h"
#include "leo_np_defs.h"
#include "leo_pg_defs.h"
#include "leo_pg0_defs.h"
#include "leo_pg1_defs.h"
#include "leo_pg2_defs.h"
#include "leo_pg3_defs.h"

#endif
