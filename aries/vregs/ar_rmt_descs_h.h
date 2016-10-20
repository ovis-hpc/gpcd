/******************************************************************************
 * COPYRIGHT CRAY INC. ar_rmt_descs_h.h
 * FILE: ar_rmt_descs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_RMT_DESCS_H_H_
#define _AR_RMT_DESCS_H_H_

#ifndef _GENERIC_DESCD_T_
#define _GENERIC_DESCD_T_
typedef struct {
	char* _name;		/* Field's name */
	uint32_t _bpos;		/* Field's bit postion in quad word */
	uint64_t _mask;		/* Field's bit mask in quad word */
	int _index;		/* Field's quad word index */
} generic_descd_t;
#endif

#ifndef _GENERIC_DESC_T_
#define _GENERIC_DESC_T_
typedef struct {
	char* _name;		/* Descriptor name */
	uint64_t _addr;		/* Descriptor address */
	int _size;		/* Size in bytes of Descriptor */
	int _depth;		/* Number of Descriptor instances */
	const generic_descd_t *_info;	/* Descriptor detail */
} generic_desc_t;
#endif

/*
 *  AR RMT DESCRIPTOR DETAIL DECLARATIONS
 */
static const generic_descd_t _ar_nic_rmt_cfg_bte_rx_desc_detail[] = {
    { "IRQ_EN", AR_NIC_RMT_CFG_BTE_RX_DESC_IRQ_EN_BP, AR_NIC_RMT_CFG_BTE_RX_DESC_IRQ_EN_MASK, 0 },
    { "DELAYED_IRQ_EN", AR_NIC_RMT_CFG_BTE_RX_DESC_DELAYED_IRQ_EN_BP, AR_NIC_RMT_CFG_BTE_RX_DESC_DELAYED_IRQ_EN_MASK, 0 },
    { "PI_HINTS", AR_NIC_RMT_CFG_BTE_RX_DESC_PI_HINTS_BP, AR_NIC_RMT_CFG_BTE_RX_DESC_PI_HINTS_MASK, 0 },
    { "BASE_ADDR", AR_NIC_RMT_CFG_BTE_RX_DESC_BASE_ADDR_BP, AR_NIC_RMT_CFG_BTE_RX_DESC_BASE_ADDR_MASK, 0 },
    { NULL, 0, 0, 0 }
};
static const generic_descd_t _ar_nic_rmt_cfg_bte_rx_chan_desc_detail[] = {
    { "RX_WR_IDX", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_WR_IDX_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_WR_IDX_MASK, 3 },
    { "ACTIVE_RMT_ENTRIES", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_ACTIVE_RMT_ENTRIES_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_ACTIVE_RMT_ENTRIES_MASK, 2 },
    { "RX_RD_IDX", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RD_IDX_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RD_IDX_MASK, 2 },
    { "CPU_RX_BASE_ADDR", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_CPU_RX_BASE_ADDR_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_CPU_RX_BASE_ADDR_MASK, 1 },
    { "RX_INTR_EN", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_INTR_EN_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_INTR_EN_MASK, 0 },
    { "RX_EN", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_EN_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_EN_MASK, 0 },
    { "RX_RST", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RST_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_RST_MASK, 0 },
    { "IRQ_IDX", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_IRQ_IDX_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_IRQ_IDX_MASK, 0 },
    { "TPH_WB", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_WB_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_WB_MASK, 0 },
    { "TPH", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TPH_MASK, 0 },
    { "TC_WB", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_WB_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_WB_MASK, 0 },
    { "TC", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_TC_MASK, 0 },
    { "RX_IDV", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_IDV_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_IDV_MASK, 0 },
    { "RX_LIMIT", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_LIMIT_BP, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_RX_LIMIT_MASK, 0 },
    { NULL, 0, 0, 0 }
};

/*
 *  AR RMT DESCRIPTOR DECLARATIONS
 */
static const generic_desc_t _ar_nic_rmt_cfg_bte_rx_desc = {
    "AR_NIC_RMT_CFG_BTE_RX_DESC", AR_NIC_RMT_CFG_BTE_RX_DESC, AR_NIC_RMT_CFG_BTE_RX_DESC_DESC_INCR, AR_NIC_RMT_CFG_BTE_RX_DESC_N_ENTRY, _ar_nic_rmt_cfg_bte_rx_desc_detail
};
static const generic_desc_t _ar_nic_rmt_cfg_bte_rx_chan_desc = {
    "AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC", AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_DESC_INCR, AR_NIC_RMT_CFG_BTE_RX_CHAN_DESC_N_ENTRY, _ar_nic_rmt_cfg_bte_rx_chan_desc_detail
};

/*
 *  INSTALL AR RMT DESCRIPTORS
 */
static const generic_desc_t* _ar_rmt_descs[] = {
    &_ar_nic_rmt_cfg_bte_rx_desc,
    &_ar_nic_rmt_cfg_bte_rx_chan_desc,
    NULL
};

#endif
