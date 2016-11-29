/******************************************************************************
 * COPYRIGHT CRAY INC. ar_dla_descs_h.h
 * FILE: ar_dla_descs_h.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_DLA_DESCS_H_H_
#define _AR_DLA_DESCS_H_H_

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
 *  AR DLA DESCRIPTOR DETAIL DECLARATIONS
 */
static const generic_descd_t _ar_nic_dla_desc_status_detail[] = {
    { "MARKER_OVERFLOW", AR_NIC_DLA_DESC_STATUS_MARKER_OVERFLOW_BP, AR_NIC_DLA_DESC_STATUS_MARKER_OVERFLOW_MASK, 2 },
    { "MARKER_CQH", AR_NIC_DLA_DESC_STATUS_MARKER_CQH_BP, AR_NIC_DLA_DESC_STATUS_MARKER_CQH_MASK, 2 },
    { "MARKER_ID", AR_NIC_DLA_DESC_STATUS_MARKER_ID_BP, AR_NIC_DLA_DESC_STATUS_MARKER_ID_MASK, 2 },
    { "ALLOC_CQH", AR_NIC_DLA_DESC_STATUS_ALLOC_CQH_BP, AR_NIC_DLA_DESC_STATUS_ALLOC_CQH_MASK, 1 },
    { "BLOCK_ID", AR_NIC_DLA_DESC_STATUS_BLOCK_ID_BP, AR_NIC_DLA_DESC_STATUS_BLOCK_ID_MASK, 1 },
    { "DISCARD", AR_NIC_DLA_DESC_STATUS_DISCARD_BP, AR_NIC_DLA_DESC_STATUS_DISCARD_MASK, 0 },
    { "ALLOC_OVERFLOW", AR_NIC_DLA_DESC_STATUS_ALLOC_OVERFLOW_BP, AR_NIC_DLA_DESC_STATUS_ALLOC_OVERFLOW_MASK, 0 },
    { "TRANS_OVERFLOW", AR_NIC_DLA_DESC_STATUS_TRANS_OVERFLOW_BP, AR_NIC_DLA_DESC_STATUS_TRANS_OVERFLOW_MASK, 0 },
    { "CD_ACTIVE", AR_NIC_DLA_DESC_STATUS_CD_ACTIVE_BP, AR_NIC_DLA_DESC_STATUS_CD_ACTIVE_MASK, 0 },
    { "PR_ACTIVE", AR_NIC_DLA_DESC_STATUS_PR_ACTIVE_BP, AR_NIC_DLA_DESC_STATUS_PR_ACTIVE_MASK, 0 },
    { "HP_ACTIVE", AR_NIC_DLA_DESC_STATUS_HP_ACTIVE_BP, AR_NIC_DLA_DESC_STATUS_HP_ACTIVE_MASK, 0 },
    { "PR_RELEASE_PENDING", AR_NIC_DLA_DESC_STATUS_PR_RELEASE_PENDING_BP, AR_NIC_DLA_DESC_STATUS_PR_RELEASE_PENDING_MASK, 0 },
    { "RESVD_CREDITS", AR_NIC_DLA_DESC_STATUS_RESVD_CREDITS_BP, AR_NIC_DLA_DESC_STATUS_RESVD_CREDITS_MASK, 0 },
    { "CONSUMED_PR_CREDITS", AR_NIC_DLA_DESC_STATUS_CONSUMED_PR_CREDITS_BP, AR_NIC_DLA_DESC_STATUS_CONSUMED_PR_CREDITS_MASK, 0 },
    { NULL, 0, 0, 0 }
};

/*
 *  AR DLA DESCRIPTOR DECLARATIONS
 */
static const generic_desc_t _ar_nic_dla_desc_status = {
    "AR_NIC_DLA_DESC_STATUS", AR_NIC_DLA_DESC_STATUS, AR_NIC_DLA_DESC_STATUS_DESC_INCR, AR_NIC_DLA_DESC_STATUS_N_ENTRY, _ar_nic_dla_desc_status_detail
};

/*
 *  INSTALL AR DLA DESCRIPTORS
 */
static const generic_desc_t* _ar_dla_descs[] = {
    &_ar_nic_dla_desc_status,
    NULL
};

#endif
