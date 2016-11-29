/******************************************************************************
 * COPYRIGHT CRAY INC. ar_nl_cclk_mmrs_h.h
 * FILE: ar_nl_cclk_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:59 2014
 ******************************************************************************/

#ifndef _AR_NL_CCLK_MMRS_H_H_
#define _AR_NL_CCLK_MMRS_H_H_

#ifdef __GNUC__
#define _unused __attribute__((unused))
#else
#define _unused
#endif

#ifndef _GENERIC_MMRD_T_
#define _GENERIC_MMRD_T_
typedef struct {
	char* _name;		/* Field name */
	uint32_t _bpos;		/* Field bit postion */
	uint64_t _mask;		/* Field bit mask */
} generic_mmrd_t;
#endif

#ifndef _ERRCAT_MMRD_T_
#define _ERRCAT_MMRD_T_
typedef struct {
	char* _name;		/* Field name */
	uint32_t _bpos;		/* Field bit postion */
	uint32_t _ec;		/* Field error category */
} errcat_mmrd_t;
#endif

#ifndef _GENERIC_MMR_T_
#define _GENERIC_MMR_T_
typedef struct {
	char* _name;		/* MMR name */
	uint64_t _addr;		/* MMR address */
	int _size;		/* Size in bytes of MMR */
	int _depth;		/* Number of MMR instances */
	const generic_mmrd_t *_info;	/* MMR detail */
} generic_mmr_t;
#endif

static const generic_mmr_t* _ar_nl_cclk_mmrs[] _unused;	/* NL_CCLK Array */

/*
 *  AR NL_CCLK MMR DETAIL DECLARATIONS
 */
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_ctl_detail[] = {
    { "LM_RST", AR_NL_CCLK_DBG_LM_CTL_LM_RST_BP, AR_NL_CCLK_DBG_LM_CTL_LM_RST_MASK },
    { "LM_TRIG_STATE", AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_STATE_BP, AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_STATE_MASK },
    { "LM_CTL_T0_CNT", AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T0_CNT_BP, AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T0_CNT_MASK },
    { "LM_CTL_T1_CNT", AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T1_CNT_BP, AR_NL_CCLK_DBG_LM_CTL_LM_CTL_T1_CNT_MASK },
    { "LM_TRIG_EN", AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_EN_BP, AR_NL_CCLK_DBG_LM_CTL_LM_TRIG_EN_MASK },
    { "LM_CTL_MODE", AR_NL_CCLK_DBG_LM_CTL_LM_CTL_MODE_BP, AR_NL_CCLK_DBG_LM_CTL_LM_CTL_MODE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_detail[] = {
    { "NIC_FULL", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_FULL_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_FULL_MASK },
    { "HALT_REQ", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HALT_REQ_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_HALT_REQ_MASK },
    { "NIC_CREDITS_11_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_CREDITS_11_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_CREDITS_11_0_MASK },
    { "Q_EN_LB_SB_3_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_LB_SB_3_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_LB_SB_3_0_MASK },
    { "Q_EN_NIC_SB_3_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_NIC_SB_3_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_EN_NIC_SB_3_0_MASK },
    { "Q_ENABLE_3_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_ENABLE_3_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_ENABLE_3_0_MASK },
    { "KILL_PKT_1", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_1_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_1_MASK },
    { "KILL_PKT_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_KILL_PKT_0_MASK },
    { "LB_SB_3_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_0_MASK },
    { "NIC_SB_3_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_SB_3_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_NIC_SB_3_0_MASK },
    { "Q_DATA", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_DATA_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_DATA_MASK },
    { "Q_HEAD", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_HEAD_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_HEAD_MASK },
    { "Q_FLIT_CNTR_6_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_FLIT_CNTR_6_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_Q_FLIT_CNTR_6_0_MASK },
    { "LB_SB_3_OR_REQ_SB_3", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_MASK },
    { "LB_SB_2_OR_REQ_SB_2", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_MASK },
    { "LB_SB_1_OR_REQ_SB_1", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_MASK },
    { "LB_SB_0_OR_REQ_SB_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_MASK },
    { "PARITY_3", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PARITY_3_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PARITY_3_MASK },
    { "RC_1", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RC_1_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_RC_1_MASK },
    { "LSTATUS_5_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LSTATUS_5_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LSTATUS_5_0_MASK },
    { "LB", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_LB_MASK },
    { "PORTID_2_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PORTID_2_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_PORTID_2_0_MASK },
    { "TGTID_1_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_TGTID_1_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_TGTID_1_0_MASK },
    { "UNUSED_129_125", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_UNUSED_129_125_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK_UNUSED_129_125_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_detail[] = {
    { "UNUSED_129_125", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UNUSED_129_125_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UNUSED_129_125_MASK },
    { "SSID_8_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_SSID_8_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_SSID_8_0_MASK },
    { "ADDR_5_2", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_5_2_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_5_2_MASK },
    { "CNT_BM_3_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_CNT_BM_3_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_CNT_BM_3_0_MASK },
    { "PARITY_2", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_2_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_2_MASK },
    { "RC_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_0_MASK },
    { "PKTID_11_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PKTID_11_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PKTID_11_0_MASK },
    { "MDH_11_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_MDH_11_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_MDH_11_0_MASK },
    { "RC_2", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_2_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_RC_2_MASK },
    { "REQCMD_8_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_REQCMD_8_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_REQCMD_8_0_MASK },
    { "PARITY_1", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_1_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_PARITY_1_MASK },
    { "UV", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UV_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_UV_MASK },
    { "ADDR_39_6", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_39_6_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK_ADDR_39_6_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_req_tiletonic0_lb_cclk_0_lo_netlink_detail[] = {
    { "ADDR_39_6", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_ADDR_39_6_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_ADDR_39_6_MASK },
    { "PARITY_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PARITY_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PARITY_0_MASK },
    { "UNUSUED", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_UNUSUED_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_UNUSUED_MASK },
    { "PKEY_15_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PKEY_15_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_PKEY_15_0_MASK },
    { "DSTID_1_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DSTID_1_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DSTID_1_0_MASK },
    { "DST_15_0", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DST_15_0_BP, AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK_DST_15_0_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_detail[] = {
    { "NIC_FULL", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_FULL_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_FULL_MASK },
    { "HALT_REQ", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HALT_REQ_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_HALT_REQ_MASK },
    { "NIC_CREDITS_11_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_CREDITS_11_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_CREDITS_11_0_MASK },
    { "Q_EN_LB_SB_3_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_LB_SB_3_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_LB_SB_3_0_MASK },
    { "Q_EN_NIC_SB_3_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_NIC_SB_3_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_EN_NIC_SB_3_0_MASK },
    { "Q_ENABLE_3_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_ENABLE_3_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_ENABLE_3_0_MASK },
    { "KILL_PKT_1", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_1_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_1_MASK },
    { "KILL_PKT_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_KILL_PKT_0_MASK },
    { "LB_SB_3_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_0_MASK },
    { "NIC_SB_3_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_SB_3_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_NIC_SB_3_0_MASK },
    { "Q_DATA", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_DATA_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_DATA_MASK },
    { "Q_HEAD", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_HEAD_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_HEAD_MASK },
    { "Q_FLIT_CNTR_6_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_FLIT_CNTR_6_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_Q_FLIT_CNTR_6_0_MASK },
    { "LB_SB_3_OR_REQ_SB_3", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_3_OR_REQ_SB_3_MASK },
    { "LB_SB_2_OR_REQ_SB_2", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_2_OR_REQ_SB_2_MASK },
    { "LB_SB_1_OR_REQ_SB_1", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_1_OR_REQ_SB_1_MASK },
    { "LB_SB_0_OR_REQ_SB_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_SB_0_OR_REQ_SB_0_MASK },
    { "PARITY_3", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PARITY_3_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PARITY_3_MASK },
    { "RC_1", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RC_1_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_RC_1_MASK },
    { "LSTATUS_5_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LSTATUS_5_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LSTATUS_5_0_MASK },
    { "LB", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_LB_MASK },
    { "PORTID_2_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PORTID_2_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_PORTID_2_0_MASK },
    { "TGTID_1_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_TGTID_1_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_TGTID_1_0_MASK },
    { "UNUSED_129_125", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_UNUSED_129_125_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK_UNUSED_129_125_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_detail[] = {
    { "UNUSED_129_125", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UNUSED_129_125_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UNUSED_129_125_MASK },
    { "SSID_8_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_SSID_8_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_SSID_8_0_MASK },
    { "ADDR_5_2", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_5_2_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_5_2_MASK },
    { "CNT_BM_3_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_CNT_BM_3_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_CNT_BM_3_0_MASK },
    { "PARITY_2", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_2_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_2_MASK },
    { "RC_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_0_MASK },
    { "PKTID_11_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PKTID_11_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PKTID_11_0_MASK },
    { "MDH_11_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_MDH_11_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_MDH_11_0_MASK },
    { "RC_2", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_2_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_RC_2_MASK },
    { "REQCMD_8_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_REQCMD_8_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_REQCMD_8_0_MASK },
    { "PARITY_1", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_1_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_PARITY_1_MASK },
    { "UV", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UV_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_UV_MASK },
    { "ADDR_39_6", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_39_6_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK_ADDR_39_6_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_req_tiletonic1_cclk_1_lo_netlink_detail[] = {
    { "ADDR_39_6", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_ADDR_39_6_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_ADDR_39_6_MASK },
    { "PARITY_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PARITY_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PARITY_0_MASK },
    { "UNUSUED", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_UNUSUED_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_UNUSUED_MASK },
    { "PKEY_15_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PKEY_15_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_PKEY_15_0_MASK },
    { "DSTID_1_0", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_DSTID_1_0_BP, AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK_DSTID_1_0_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_ptrs_detail[] = {
    { "LM_TRIG_DELAY", AR_NL_CCLK_DBG_LM_PTRS_LM_TRIG_DELAY_BP, AR_NL_CCLK_DBG_LM_PTRS_LM_TRIG_DELAY_MASK },
    { "LM_REC_ACT", AR_NL_CCLK_DBG_LM_PTRS_LM_REC_ACT_BP, AR_NL_CCLK_DBG_LM_PTRS_LM_REC_ACT_MASK },
    { "LM_REC_DONE", AR_NL_CCLK_DBG_LM_PTRS_LM_REC_DONE_BP, AR_NL_CCLK_DBG_LM_PTRS_LM_REC_DONE_MASK },
    { "LM_MULT_EVENT", AR_NL_CCLK_DBG_LM_PTRS_LM_MULT_EVENT_BP, AR_NL_CCLK_DBG_LM_PTRS_LM_MULT_EVENT_MASK },
    { "LM_WR_AD_WRAP", AR_NL_CCLK_DBG_LM_PTRS_LM_WR_AD_WRAP_BP, AR_NL_CCLK_DBG_LM_PTRS_LM_WR_AD_WRAP_MASK },
    { "LM_RD_PTR", AR_NL_CCLK_DBG_LM_PTRS_LM_RD_PTR_BP, AR_NL_CCLK_DBG_LM_PTRS_LM_RD_PTR_MASK },
    { "LM_WR_PTR", AR_NL_CCLK_DBG_LM_PTRS_LM_WR_PTR_BP, AR_NL_CCLK_DBG_LM_PTRS_LM_WR_PTR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_read_lo_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_READ_LO_DATA_BP, AR_NL_CCLK_DBG_LM_READ_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_read_mid_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_READ_MID_DATA_BP, AR_NL_CCLK_DBG_LM_READ_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_read_hi_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_READ_HI_DATA_BP, AR_NL_CCLK_DBG_LM_READ_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_snap_sel_detail[] = {
    { "SEL", AR_NL_CCLK_DBG_LM_SNAP_SEL_SEL_BP, AR_NL_CCLK_DBG_LM_SNAP_SEL_SEL_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_snap_dlo_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_SNAP_DLO_DATA_BP, AR_NL_CCLK_DBG_LM_SNAP_DLO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_snap_dmid_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_SNAP_DMID_DATA_BP, AR_NL_CCLK_DBG_LM_SNAP_DMID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_snap_dhi_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_SNAP_DHI_DATA_BP, AR_NL_CCLK_DBG_LM_SNAP_DHI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_rem_trig_detail[] = {
    { "LM_PROP_TO_NL", AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NL_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NL_MASK },
    { "LM_ENABLE_FROM_MMR", AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_MMR_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_MMR_MASK },
    { "LM_ENABLE_FROM_NL", AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NL_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NL_MASK },
    { "NIC_PROP_TO_NIC3", AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC3_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC3_MASK },
    { "NIC_PROP_TO_NIC2", AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC2_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC2_MASK },
    { "NIC_PROP_TO_NIC1", AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC1_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC1_MASK },
    { "NIC_PROP_TO_NIC0", AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC0_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_NIC_PROP_TO_NIC0_MASK },
    { "LM_PROP_TO_NIC", AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NIC_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_LM_PROP_TO_NIC_MASK },
    { "LM_ENABLE_FROM_NIC3", AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC3_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC3_MASK },
    { "LM_ENABLE_FROM_NIC2", AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC2_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC2_MASK },
    { "LM_ENABLE_FROM_NIC1", AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC1_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC1_MASK },
    { "LM_ENABLE_FROM_NIC0", AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC0_BP, AR_NL_CCLK_DBG_LM_REM_TRIG_LM_ENABLE_FROM_NIC0_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_trig_sts_detail[] = {
    { "REM_TRIG1_RCV_LAST", AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_LAST_BP, AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_LAST_MASK },
    { "REM_TRIG0_RCV_LAST", AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_LAST_BP, AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_LAST_MASK },
    { "REM_TRIG1_RCV_FIRST", AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_FIRST_BP, AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_FIRST_MASK },
    { "REM_TRIG0_RCV_FIRST", AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_FIRST_BP, AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_FIRST_MASK },
    { "REM_TRIG1_RCV", AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_BP, AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG1_RCV_MASK },
    { "REM_TRIG0_RCV", AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_BP, AR_NL_CCLK_DBG_LM_TRIG_STS_REM_TRIG0_RCV_MASK },
    { "LCL_TRIG1_RCV", AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG1_RCV_BP, AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG1_RCV_MASK },
    { "LCL_TRIG0_RCV", AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG0_RCV_BP, AR_NL_CCLK_DBG_LM_TRIG_STS_LCL_TRIG0_RCV_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_errinj_lm_detail[] = {
    { "ADDRESS", AR_NL_CCLK_DBG_ERRINJ_LM_ADDRESS_BP, AR_NL_CCLK_DBG_ERRINJ_LM_ADDRESS_MASK },
    { "PARITY", AR_NL_CCLK_DBG_ERRINJ_LM_PARITY_BP, AR_NL_CCLK_DBG_ERRINJ_LM_PARITY_MASK },
    { "TRIGGERED", AR_NL_CCLK_DBG_ERRINJ_LM_TRIGGERED_BP, AR_NL_CCLK_DBG_ERRINJ_LM_TRIGGERED_MASK },
    { "MODE", AR_NL_CCLK_DBG_ERRINJ_LM_MODE_BP, AR_NL_CCLK_DBG_ERRINJ_LM_MODE_MASK },
    { "ENABLE", AR_NL_CCLK_DBG_ERRINJ_LM_ENABLE_BP, AR_NL_CCLK_DBG_ERRINJ_LM_ENABLE_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_err_info_lm_perr_detail[] = {
    { "ADDRESS", AR_NL_CCLK_ERR_INFO_LM_PERR_ADDRESS_BP, AR_NL_CCLK_ERR_INFO_LM_PERR_ADDRESS_MASK },
    { "MMR_DETECTED_PERR", AR_NL_CCLK_ERR_INFO_LM_PERR_MMR_DETECTED_PERR_BP, AR_NL_CCLK_ERR_INFO_LM_PERR_MMR_DETECTED_PERR_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_err_info_lm_perr_cnt_detail[] = {
    { "CNT", AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_CNT_BP, AR_NL_CCLK_ERR_INFO_LM_PERR_CNT_CNT_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_cap_sel_detail[] = {
    { "DATA_SEL", AR_NL_CCLK_DBG_LM_CAP_SEL_DATA_SEL_BP, AR_NL_CCLK_DBG_LM_CAP_SEL_DATA_SEL_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t0_cmp_lo_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T0_CMP_LO_DATA_BP, AR_NL_CCLK_DBG_LM_T0_CMP_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t0_cmp_mid_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T0_CMP_MID_DATA_BP, AR_NL_CCLK_DBG_LM_T0_CMP_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t0_cmp_hi_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T0_CMP_HI_DATA_BP, AR_NL_CCLK_DBG_LM_T0_CMP_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t0_mode_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T0_MODE_DATA_BP, AR_NL_CCLK_DBG_LM_T0_MODE_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t0_mask_lo_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T0_MASK_LO_DATA_BP, AR_NL_CCLK_DBG_LM_T0_MASK_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t0_mask_mid_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T0_MASK_MID_DATA_BP, AR_NL_CCLK_DBG_LM_T0_MASK_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t0_mask_hi_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T0_MASK_HI_DATA_BP, AR_NL_CCLK_DBG_LM_T0_MASK_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_trig_sel_detail[] = {
    { "DATA7_SEL", AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA7_SEL_BP, AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA7_SEL_MASK },
    { "DATA6_SEL", AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA6_SEL_BP, AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA6_SEL_MASK },
    { "DATA5_SEL", AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA5_SEL_BP, AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA5_SEL_MASK },
    { "DATA4_SEL", AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA4_SEL_BP, AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA4_SEL_MASK },
    { "DATA3_SEL", AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA3_SEL_BP, AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA3_SEL_MASK },
    { "DATA2_SEL", AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA2_SEL_BP, AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA2_SEL_MASK },
    { "DATA1_SEL", AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA1_SEL_BP, AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA1_SEL_MASK },
    { "DATA0_SEL", AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA0_SEL_BP, AR_NL_CCLK_DBG_LM_TRIG_SEL_DATA0_SEL_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t1_cmp_lo_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T1_CMP_LO_DATA_BP, AR_NL_CCLK_DBG_LM_T1_CMP_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t1_cmp_mid_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T1_CMP_MID_DATA_BP, AR_NL_CCLK_DBG_LM_T1_CMP_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t1_cmp_hi_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T1_CMP_HI_DATA_BP, AR_NL_CCLK_DBG_LM_T1_CMP_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t1_mode_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T1_MODE_DATA_BP, AR_NL_CCLK_DBG_LM_T1_MODE_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t1_mask_lo_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T1_MASK_LO_DATA_BP, AR_NL_CCLK_DBG_LM_T1_MASK_LO_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t1_mask_mid_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T1_MASK_MID_DATA_BP, AR_NL_CCLK_DBG_LM_T1_MASK_MID_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_t1_mask_hi_detail[] = {
    { "DATA", AR_NL_CCLK_DBG_LM_T1_MASK_HI_DATA_BP, AR_NL_CCLK_DBG_LM_T1_MASK_HI_DATA_MASK },
    { NULL, 0, 0 }
};
static const generic_mmrd_t _ar_nl_cclk_dbg_lm_mux_sel_detail[] = {
    { "CAP_SEL", AR_NL_CCLK_DBG_LM_MUX_SEL_CAP_SEL_BP, AR_NL_CCLK_DBG_LM_MUX_SEL_CAP_SEL_MASK },
    { "TRIG1_SEL", AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG1_SEL_BP, AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG1_SEL_MASK },
    { "TRIG0_SEL", AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG0_SEL_BP, AR_NL_CCLK_DBG_LM_MUX_SEL_TRIG0_SEL_MASK },
    { NULL, 0, 0 }
};

/*
 *  AR NL_CCLK MMR DECLARATIONS
 */
static const generic_mmr_t _ar_nl_cclk_dbg_lm_ctl = {
    "AR_NL_CCLK_DBG_LM_CTL", AR_NL_CCLK_DBG_LM_CTL, 8, 1, _ar_nl_cclk_dbg_lm_ctl_detail
};
static const generic_mmr_t _ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink = {
    "AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_HI_NETLINK, 8, 1, _ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink_detail
};
static const generic_mmr_t _ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink = {
    "AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_MID_NETLINK, 8, 1, _ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink_detail
};
static const generic_mmr_t _ar_nl_cclk_req_tiletonic0_lb_cclk_0_lo_netlink = {
    "AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK", AR_NL_CCLK_REQ_TILETONIC0_LB_CCLK_0_LO_NETLINK, 8, 1, _ar_nl_cclk_req_tiletonic0_lb_cclk_0_lo_netlink_detail
};
static const generic_mmr_t _ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink = {
    "AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_HI_NETLINK, 8, 1, _ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink_detail
};
static const generic_mmr_t _ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink = {
    "AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_MID_NETLINK, 8, 1, _ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink_detail
};
static const generic_mmr_t _ar_nl_cclk_req_tiletonic1_cclk_1_lo_netlink = {
    "AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK", AR_NL_CCLK_REQ_TILETONIC1_CCLK_1_LO_NETLINK, 8, 1, _ar_nl_cclk_req_tiletonic1_cclk_1_lo_netlink_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_ptrs = {
    "AR_NL_CCLK_DBG_LM_PTRS", AR_NL_CCLK_DBG_LM_PTRS, 8, 1, _ar_nl_cclk_dbg_lm_ptrs_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_read_lo = {
    "AR_NL_CCLK_DBG_LM_READ_LO", AR_NL_CCLK_DBG_LM_READ_LO, 8, 1, _ar_nl_cclk_dbg_lm_read_lo_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_read_mid = {
    "AR_NL_CCLK_DBG_LM_READ_MID", AR_NL_CCLK_DBG_LM_READ_MID, 8, 1, _ar_nl_cclk_dbg_lm_read_mid_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_read_hi = {
    "AR_NL_CCLK_DBG_LM_READ_HI", AR_NL_CCLK_DBG_LM_READ_HI, 8, 1, _ar_nl_cclk_dbg_lm_read_hi_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_snap_sel = {
    "AR_NL_CCLK_DBG_LM_SNAP_SEL", AR_NL_CCLK_DBG_LM_SNAP_SEL, 8, 1, _ar_nl_cclk_dbg_lm_snap_sel_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_snap_dlo = {
    "AR_NL_CCLK_DBG_LM_SNAP_DLO", AR_NL_CCLK_DBG_LM_SNAP_DLO, 8, 1, _ar_nl_cclk_dbg_lm_snap_dlo_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_snap_dmid = {
    "AR_NL_CCLK_DBG_LM_SNAP_DMID", AR_NL_CCLK_DBG_LM_SNAP_DMID, 8, 1, _ar_nl_cclk_dbg_lm_snap_dmid_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_snap_dhi = {
    "AR_NL_CCLK_DBG_LM_SNAP_DHI", AR_NL_CCLK_DBG_LM_SNAP_DHI, 8, 1, _ar_nl_cclk_dbg_lm_snap_dhi_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_rem_trig = {
    "AR_NL_CCLK_DBG_LM_REM_TRIG", AR_NL_CCLK_DBG_LM_REM_TRIG, 8, 1, _ar_nl_cclk_dbg_lm_rem_trig_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_trig_sts = {
    "AR_NL_CCLK_DBG_LM_TRIG_STS", AR_NL_CCLK_DBG_LM_TRIG_STS, 8, 1, _ar_nl_cclk_dbg_lm_trig_sts_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_errinj_lm = {
    "AR_NL_CCLK_DBG_ERRINJ_LM", AR_NL_CCLK_DBG_ERRINJ_LM, 8, 1, _ar_nl_cclk_dbg_errinj_lm_detail
};
static const generic_mmr_t _ar_nl_cclk_err_info_lm_perr = {
    "AR_NL_CCLK_ERR_INFO_LM_PERR", AR_NL_CCLK_ERR_INFO_LM_PERR, 8, 1, _ar_nl_cclk_err_info_lm_perr_detail
};
static const generic_mmr_t _ar_nl_cclk_err_info_lm_perr_cnt = {
    "AR_NL_CCLK_ERR_INFO_LM_PERR_CNT", AR_NL_CCLK_ERR_INFO_LM_PERR_CNT, 8, 1, _ar_nl_cclk_err_info_lm_perr_cnt_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_cap_sel = {
    "AR_NL_CCLK_DBG_LM_CAP_SEL", AR_NL_CCLK_DBG_LM_CAP_SEL, 8, 1, _ar_nl_cclk_dbg_lm_cap_sel_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t0_cmp_lo = {
    "AR_NL_CCLK_DBG_LM_T0_CMP_LO", AR_NL_CCLK_DBG_LM_T0_CMP_LO, 8, 1, _ar_nl_cclk_dbg_lm_t0_cmp_lo_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t0_cmp_mid = {
    "AR_NL_CCLK_DBG_LM_T0_CMP_MID", AR_NL_CCLK_DBG_LM_T0_CMP_MID, 8, 1, _ar_nl_cclk_dbg_lm_t0_cmp_mid_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t0_cmp_hi = {
    "AR_NL_CCLK_DBG_LM_T0_CMP_HI", AR_NL_CCLK_DBG_LM_T0_CMP_HI, 8, 1, _ar_nl_cclk_dbg_lm_t0_cmp_hi_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t0_mode = {
    "AR_NL_CCLK_DBG_LM_T0_MODE", AR_NL_CCLK_DBG_LM_T0_MODE, 8, 1, _ar_nl_cclk_dbg_lm_t0_mode_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t0_mask_lo = {
    "AR_NL_CCLK_DBG_LM_T0_MASK_LO", AR_NL_CCLK_DBG_LM_T0_MASK_LO, 8, 1, _ar_nl_cclk_dbg_lm_t0_mask_lo_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t0_mask_mid = {
    "AR_NL_CCLK_DBG_LM_T0_MASK_MID", AR_NL_CCLK_DBG_LM_T0_MASK_MID, 8, 1, _ar_nl_cclk_dbg_lm_t0_mask_mid_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t0_mask_hi = {
    "AR_NL_CCLK_DBG_LM_T0_MASK_HI", AR_NL_CCLK_DBG_LM_T0_MASK_HI, 8, 1, _ar_nl_cclk_dbg_lm_t0_mask_hi_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_trig_sel = {
    "AR_NL_CCLK_DBG_LM_TRIG_SEL", AR_NL_CCLK_DBG_LM_TRIG_SEL, 8, 1, _ar_nl_cclk_dbg_lm_trig_sel_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t1_cmp_lo = {
    "AR_NL_CCLK_DBG_LM_T1_CMP_LO", AR_NL_CCLK_DBG_LM_T1_CMP_LO, 8, 1, _ar_nl_cclk_dbg_lm_t1_cmp_lo_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t1_cmp_mid = {
    "AR_NL_CCLK_DBG_LM_T1_CMP_MID", AR_NL_CCLK_DBG_LM_T1_CMP_MID, 8, 1, _ar_nl_cclk_dbg_lm_t1_cmp_mid_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t1_cmp_hi = {
    "AR_NL_CCLK_DBG_LM_T1_CMP_HI", AR_NL_CCLK_DBG_LM_T1_CMP_HI, 8, 1, _ar_nl_cclk_dbg_lm_t1_cmp_hi_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t1_mode = {
    "AR_NL_CCLK_DBG_LM_T1_MODE", AR_NL_CCLK_DBG_LM_T1_MODE, 8, 1, _ar_nl_cclk_dbg_lm_t1_mode_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t1_mask_lo = {
    "AR_NL_CCLK_DBG_LM_T1_MASK_LO", AR_NL_CCLK_DBG_LM_T1_MASK_LO, 8, 1, _ar_nl_cclk_dbg_lm_t1_mask_lo_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t1_mask_mid = {
    "AR_NL_CCLK_DBG_LM_T1_MASK_MID", AR_NL_CCLK_DBG_LM_T1_MASK_MID, 8, 1, _ar_nl_cclk_dbg_lm_t1_mask_mid_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_t1_mask_hi = {
    "AR_NL_CCLK_DBG_LM_T1_MASK_HI", AR_NL_CCLK_DBG_LM_T1_MASK_HI, 8, 1, _ar_nl_cclk_dbg_lm_t1_mask_hi_detail
};
static const generic_mmr_t _ar_nl_cclk_dbg_lm_mux_sel = {
    "AR_NL_CCLK_DBG_LM_MUX_SEL", AR_NL_CCLK_DBG_LM_MUX_SEL, 8, 1, _ar_nl_cclk_dbg_lm_mux_sel_detail
};

/*
 *  INSTALL AR NL_CCLK MMRS
 */
static const generic_mmr_t* _ar_nl_cclk_mmrs[] _unused = {
    &_ar_nl_cclk_dbg_lm_ctl,
    &_ar_nl_cclk_req_tiletonic0_lb_cclk_0_hi_netlink,
    &_ar_nl_cclk_req_tiletonic0_lb_cclk_0_mid_netlink,
    &_ar_nl_cclk_req_tiletonic0_lb_cclk_0_lo_netlink,
    &_ar_nl_cclk_req_tiletonic1_cclk_1_hi_netlink,
    &_ar_nl_cclk_req_tiletonic1_cclk_1_mid_netlink,
    &_ar_nl_cclk_req_tiletonic1_cclk_1_lo_netlink,
    &_ar_nl_cclk_dbg_lm_ptrs,
    &_ar_nl_cclk_dbg_lm_read_lo,
    &_ar_nl_cclk_dbg_lm_read_mid,
    &_ar_nl_cclk_dbg_lm_read_hi,
    &_ar_nl_cclk_dbg_lm_snap_sel,
    &_ar_nl_cclk_dbg_lm_snap_dlo,
    &_ar_nl_cclk_dbg_lm_snap_dmid,
    &_ar_nl_cclk_dbg_lm_snap_dhi,
    &_ar_nl_cclk_dbg_lm_rem_trig,
    &_ar_nl_cclk_dbg_lm_trig_sts,
    &_ar_nl_cclk_dbg_errinj_lm,
    &_ar_nl_cclk_err_info_lm_perr,
    &_ar_nl_cclk_err_info_lm_perr_cnt,
    &_ar_nl_cclk_dbg_lm_cap_sel,
    &_ar_nl_cclk_dbg_lm_t0_cmp_lo,
    &_ar_nl_cclk_dbg_lm_t0_cmp_mid,
    &_ar_nl_cclk_dbg_lm_t0_cmp_hi,
    &_ar_nl_cclk_dbg_lm_t0_mode,
    &_ar_nl_cclk_dbg_lm_t0_mask_lo,
    &_ar_nl_cclk_dbg_lm_t0_mask_mid,
    &_ar_nl_cclk_dbg_lm_t0_mask_hi,
    &_ar_nl_cclk_dbg_lm_trig_sel,
    &_ar_nl_cclk_dbg_lm_t1_cmp_lo,
    &_ar_nl_cclk_dbg_lm_t1_cmp_mid,
    &_ar_nl_cclk_dbg_lm_t1_cmp_hi,
    &_ar_nl_cclk_dbg_lm_t1_mode,
    &_ar_nl_cclk_dbg_lm_t1_mask_lo,
    &_ar_nl_cclk_dbg_lm_t1_mask_mid,
    &_ar_nl_cclk_dbg_lm_t1_mask_hi,
    &_ar_nl_cclk_dbg_lm_mux_sel,
    NULL
};

#endif
