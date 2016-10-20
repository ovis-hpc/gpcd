/**
 *  The Gemini Performance Counter driver.
 *
 *  Copyright (C) 2009 Cray Inc. All Rights Reserved.
 *  Written by Andrew Barry <abarry@cray.com>
 *
 */

#ifndef _GPCD_PUB_H_
#define _GPCD_PUB_H_

#define GPCD_DEV_PATH "/dev/gpcd0"

#define GPC_OLD_READ_REG 	0x1	
#define GPC_OLD_WRITE_REG 	0x2	
#define GPC_OLD_SET_PERMS	0x3	
#define GPC_OLD_VERBOSE		0x4
#define GPC_OLD_IGNORE_PERMS	0x5
#define GPC_OLD_LIST_PERMS	0x6

#define GPC_IOC_READ_REG  	_IO('g', 0x01)
#define GPC_IOC_WRITE_REG 	_IO('g', 0x02)
#define GPC_IOC_SET_PERMS 	_IO('g', 0x03)
#define GPC_IOC_VERBOSE 	_IO('g', 0x04)
#define GPC_IOC_IGNORE_PERMS 	_IO('g', 0x05) 
#define GPC_IOC_LIST_PERMS 	_IO('g', 0x06)

#define GPC_PERMS_NONE  0
#define GPC_PERMS_NIC   1
#define GPC_PERMS_LOCAL 2
#define GPC_PERMS_ALL   3

#define MAX_NUM_MMRS 1552 /*All of the performance counter on a gemini*/

#define GPC_TILE_BASE    0x2000000
#define GPC_TILE_ROW     0x0020000
#define GPC_TILE_COL     0x0002000
#define GPC_TILE_NONLCB  0x0001000
#define GPC_FPC_SETUP    0x0000200
#define GPC_FPC          0x0000220
#define GPC_TILE_PCOFF   0x0000380
#define GPC_SPC          0x0000380
#define GPC_VC1          0x0000048
#define GPC_TILE_MAX_ROW 6
#define GPC_TILE_MAX_COL 8
#define GPC_TILE_MAX_X   4
#define GPC_TILE_MAX_SPC 5
#define GPC_TILE(r,c) \
    (GPC_TILE_BASE + ((r) * GPC_TILE_ROW) + \
    ((c) * GPC_TILE_COL) + GPC_TILE_NONLCB)
#define GPC_TILE_SPC(r, c, x)\
    (GPC_TILE(r,c) + GPC_SPC + ((x) * 0x8ull))
#define GPC_TILE_FPC(r,c, vc, x)\
    (GPC_TILE(r,c) + ((vc) ? GPC_VC1 : 0) + ((x) * 0x8ull) + GPC_FPC)
#define GPC_TILE_FPC_SETUP(r,c, vc, x)\
    (GPC_TILE(r,c) + ((vc) ? GPC_VC1 : 0) + ((x) * 0x8ull) + GPC_FPC_SETUP)
#define QM(x) #x
#define GPC_STR_TILE_RCVX(row, column, vc, x)\
    "GM_"QM(row)"_"QM(column)"_TILE_FILTERING_PERFORMANCE_COUNTER_VC"\
    QM(vc)"_"QM(x)
#define GPC_STR_TILE_SETUP_RCVX(row, column, vc, x)\
    "GM_"QM(row)"_"QM(column)"_TILE_FILTERING_PERFORMANCE_COUNTER_SETUP_VC"\
    QM(vc)"_"QM(x)
#define GPC_STR_TILE_S_RCX(row, column, x)\
    "GM_"QM(row)"_"QM(column)"_TILE_PERFORMANCE_COUNTERS_"QM(x)

#define AR_TILE_BASE 0x2000000ull
#define AR_TILE_ROW  0x0400000ull
#define AR_TILE_COL  0x0080000ull
#define AR_TILE(row, column)\
	(row * AR_TILE_ROW + column * AR_TILE_COL)
	



typedef struct gpcd_args {
    uint32_t    num_mmrs; /*Max value of MAX_NUM_MMRS*/
    uint32_t    nic_addr;
    uint64_t    *mmr_addrs;
    uint64_t    *mmr_data;
} gpcd_args_t;

typedef gpcd_args_t gpcd_read_args_t;
typedef gpcd_args_t gpcd_write_args_t;

typedef struct gpcd_perms {
    uint64_t    perms;
    uint64_t    job_id;
} gpcd_perms_t;

#endif
