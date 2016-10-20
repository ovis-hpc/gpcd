/******************************************************************************
 * COPYRIGHT CRAY INC. ar_cq_descs_h.h
 * FILE: ar_cq_descs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/

#ifndef _AR_CQ_DESCS_H_H_
#define _AR_CQ_DESCS_H_H_

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
 *  AR CQ DESCRIPTOR DETAIL DECLARATIONS
 */
static const generic_descd_t _ar_nic_cq_cfg_desc_tbl_detail[] = {
    { "MDD0_MMU_TC", AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_TC_BP, AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_TC_MASK, 2 },
    { "MDD0_MMU_EN", AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_EN_BP, AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_EN_MASK, 2 },
    { "MDD1_PTAG", AR_NIC_CQ_CFG_DESC_TBL_MDD1_PTAG_BP, AR_NIC_CQ_CFG_DESC_TBL_MDD1_PTAG_MASK, 2 },
    { "MDD0_TPH", AR_NIC_CQ_CFG_DESC_TBL_MDD0_TPH_BP, AR_NIC_CQ_CFG_DESC_TBL_MDD0_TPH_MASK, 2 },
    { "MDD0_MMU_PREFETCH", AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_PREFETCH_BP, AR_NIC_CQ_CFG_DESC_TBL_MDD0_MMU_PREFETCH_MASK, 2 },
    { "MDD1_MDH", AR_NIC_CQ_CFG_DESC_TBL_MDD1_MDH_BP, AR_NIC_CQ_CFG_DESC_TBL_MDD1_MDH_MASK, 2 },
    { "MDD1_BASE_OFFSET_39_12", AR_NIC_CQ_CFG_DESC_TBL_MDD1_BASE_OFFSET_39_12_BP, AR_NIC_CQ_CFG_DESC_TBL_MDD1_BASE_OFFSET_39_12_MASK, 2 },
    { "MDD0_BASE_ADDR_47_12", AR_NIC_CQ_CFG_DESC_TBL_MDD0_BASE_ADDR_47_12_BP, AR_NIC_CQ_CFG_DESC_TBL_MDD0_BASE_ADDR_47_12_MASK, 2 },
    { "MDD_EN", AR_NIC_CQ_CFG_DESC_TBL_MDD_EN_BP, AR_NIC_CQ_CFG_DESC_TBL_MDD_EN_MASK, 1 },
    { "EN", AR_NIC_CQ_CFG_DESC_TBL_EN_BP, AR_NIC_CQ_CFG_DESC_TBL_EN_MASK, 1 },
    { "IRQ_IDX", AR_NIC_CQ_CFG_DESC_TBL_IRQ_IDX_BP, AR_NIC_CQ_CFG_DESC_TBL_IRQ_IDX_MASK, 1 },
    { "IRQ_REQ", AR_NIC_CQ_CFG_DESC_TBL_IRQ_REQ_BP, AR_NIC_CQ_CFG_DESC_TBL_IRQ_REQ_MASK, 1 },
    { "IRQ_THRESH_IDX", AR_NIC_CQ_CFG_DESC_TBL_IRQ_THRESH_IDX_BP, AR_NIC_CQ_CFG_DESC_TBL_IRQ_THRESH_IDX_MASK, 1 },
    { "MAX_IDX", AR_NIC_CQ_CFG_DESC_TBL_MAX_IDX_BP, AR_NIC_CQ_CFG_DESC_TBL_MAX_IDX_MASK, 1 },
    { "IRQ_MASK", AR_NIC_CQ_CFG_DESC_TBL_IRQ_MASK_BP, AR_NIC_CQ_CFG_DESC_TBL_IRQ_MASK_MASK, 0 },
    { "WR_IDX", AR_NIC_CQ_CFG_DESC_TBL_WR_IDX_BP, AR_NIC_CQ_CFG_DESC_TBL_WR_IDX_MASK, 0 },
    { "RD_IDX", AR_NIC_CQ_CFG_DESC_TBL_RD_IDX_BP, AR_NIC_CQ_CFG_DESC_TBL_RD_IDX_MASK, 0 },
    { NULL, 0, 0, 0 }
};

/*
 *  AR CQ DESCRIPTOR DECLARATIONS
 */
static const generic_desc_t _ar_nic_cq_cfg_desc_tbl = {
    "AR_NIC_CQ_CFG_DESC_TBL", AR_NIC_CQ_CFG_DESC_TBL, AR_NIC_CQ_CFG_DESC_TBL_DESC_INCR, AR_NIC_CQ_CFG_DESC_TBL_N_ENTRY, _ar_nic_cq_cfg_desc_tbl_detail
};

/*
 *  INSTALL AR CQ DESCRIPTORS
 */
static const generic_desc_t* _ar_cq_descs[] = {
    &_ar_nic_cq_cfg_desc_tbl,
    NULL
};

#endif
