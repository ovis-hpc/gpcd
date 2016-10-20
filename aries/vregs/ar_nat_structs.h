/******************************************************************************
 * COPYRIGHT CRAY INC. ar_nat_structs.h
 * FILE: ar_nat_structs.h
 * Created by v2h.c on Wed Oct  8 14:38:59 2014
 ******************************************************************************/

#ifndef _AR_NAT_STRUCTS_H_
#define _AR_NAT_STRUCTS_H_

/*
 *  ARIES NAT STRUCTURES
 */
typedef union ar_nic_nat_cfg_tbl_mdd_desc {
    struct {
        // QW0
        uint64_t cqh                      :11;	/* Completion Queue Handle */
        uint64_t undefine_11_11           : 1;	/* undefined */
        uint64_t mem_base                 :36;	/* Bits [47:12] of the memory domain base address within a translation context */
        uint64_t undefine_55_48           : 8;	/* undefined */
        uint64_t valid                    : 1;	/* Set to 1 to indicate this entry is valid */
        uint64_t writable                 : 1;	/* Set to 1 to enable writes to this memory domain */
        uint64_t mmu_prefetch             : 1;	/* Setting to 1 indicates that prefetching of I/O page table entries for this memory domain may improve performance */
        uint64_t mmu_en                   : 1;	/* Setting to 1 indicates that the IO MMU is used to translate requests/responses targeting the memory domain */
        uint64_t mmu_tc                   : 4;	/* Translation context to be used by the IO MMU or PI MMU to handle requests/responses targeting the memory domain */
        // QW1
        uint64_t no_snoop                 : 1;	/* When cleared, PI must insure that requests targeting the memory domain are kept coherent with respect to caching entities in the local host */
        uint64_t use_rc                   : 1;	/* When set, indicates that the relaxed ordering PI hint for received network requests and responses is based on the value of the RC (Routing Control) bits in the corresponding incoming request or response */
        uint64_t wr_ro                    : 1;	/* When set, a hint that PI may use relaxed ordering rules for write requests targeting the memory domain */
        uint64_t rd_ro                    : 1;	/* When set, a hint that PI may used relaxed ordering rules for read requests targeting the memory domain */
        uint64_t resp_ro                  : 1;	/* When set, a hint that PI may used relaxed ordering rules for writing the data contained in responses returned from the network */
        uint64_t resp_gv                  : 1;	/* When set, indicates that PI should respond when actions of request are globally visible */
        uint64_t flush_complete           : 1;	/* Requires PI to ensure that requests targeting this memory domain be globally visibleat the local node prior to sending the final network response of a DSMN transaction targeting this memory domain and prior to sending the network response of a CQWrite request targeting this memory domain */
        uint64_t tph                      : 3;	/* Value of Transaction Processing Hints to send towards the Processor Interface */
        uint64_t wildcard                 : 1;	/* Disable PTAG/PKEY validation on this entry */
        uint64_t undefine_75_75           : 1;	/* undefined */
        uint64_t mem_max                  :36;	/* Bits [47:12] of the maximum valid address of the memory domain within a translation context */
        uint64_t undefine_119_112         : 8;	/* undefined */
        uint64_t ptag                     : 8;	/* Index into the Protection Key table to be used for Protection Key validation for requests/responses targeting the memory domain */
    };
    uint64_t qwords[2];
} ar_nic_nat_cfg_tbl_mdd_desc_t;

typedef union ar_nic_nat_cfg_tbl_ptt_desc {
    struct {
        // QW0
        uint64_t pkey_0                   :16;	/* PKey N+0 */
        uint64_t pkey_1                   :16;	/* PKey N+1 */
        uint64_t pkey_2                   :16;	/* PKey N+2 */
        uint64_t pkey_3                   :16;	/* PKey N+3 */
    };
    uint64_t qwords[1];
} ar_nic_nat_cfg_tbl_ptt_desc_t;

typedef union ar_nic_nat_cfg_tbl_vmdhcam_desc {
    struct {
        // QW0
        uint64_t mdh_base                 :12;	/* MDH Base entry */
        uint64_t en                       : 1;	/* Setting this bit to 1 enables use of this vMDH entry */
        uint64_t undefine_31_13           :19;	/* undefined */
        uint64_t pkey                     :16;	/* PKey for this entry */
        uint64_t ptag                     : 8;	/* Ptag for this entry */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_cfg_tbl_vmdhcam_desc_t;

typedef union ar_nic_nat_cfg_params_desc {
    struct {
        // QW0
        uint64_t iommu_crdts_max          : 8;	/* Credits to flow control translation requests to the IOMMU */
        uint64_t bypass_crdts_max         : 8;	/* Credits to flow control translation requests that bypass the IOMMU */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_cfg_params_desc_t;

typedef union ar_nic_nat_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic */
        uint64_t rat_fifo_oflw            : 1;	/* Overflow detected on RAT fifo */
        uint64_t cq_fifo_oflw             : 1;	/* Overflow detected on CQ fifo */
        uint64_t bte_fifo_oflw            : 1;	/* Overflow detected on BTE fifo */
        uint64_t bypass_fifo_oflw         : 1;	/* Overflow detected on BYPASS fifo */
        uint64_t iommu_fifo_oflw          : 1;	/* Overflow detected on IOMMU fifo */
        uint64_t rat_fifo_uflw            : 1;	/* Underflow detected on RAT fifo */
        uint64_t cq_fifo_uflw             : 1;	/* Underflow detected on CQ fifo */
        uint64_t bte_fifo_uflw            : 1;	/* Underflow detected on BTE fifo */
        uint64_t bypass_fifo_uflw         : 1;	/* Underflow detected on BYPASS fifo */
        uint64_t iommu_fifo_uflw          : 1;	/* Underflow detected on IOMMU fifo */
        uint64_t vmdhcam_multihit         : 1;	/* VMDH CAM configuration error */
        uint64_t malformed_mdd            : 1;	/* MDD configuration error */
        uint64_t mddt_mbe0                : 1;	/* MBE on MDD table 0 */
        uint64_t mddt_mbe1                : 1;	/* MBE on MDD table 1 */
        uint64_t ptt_mbe                  : 1;	/* MBE on PTT table */
        uint64_t mddt_sbe0                : 1;	/* SBE on MDD table 0 */
        uint64_t mddt_sbe1                : 1;	/* SBE on MDD table 1 */
        uint64_t ptt_sbe                  : 1;	/* SBE on PTT table */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_err_flg_desc_t;

typedef union ar_nic_nat_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diagnostic */
        uint64_t rat_fifo_oflw            : 1;	/* Overflow detected on RAT fifo */
        uint64_t cq_fifo_oflw             : 1;	/* Overflow detected on CQ fifo */
        uint64_t bte_fifo_oflw            : 1;	/* Overflow detected on BTE fifo */
        uint64_t bypass_fifo_oflw         : 1;	/* Overflow detected on BYPASS fifo */
        uint64_t iommu_fifo_oflw          : 1;	/* Overflow detected on IOMMU fifo */
        uint64_t rat_fifo_uflw            : 1;	/* Underflow detected on RAT fifo */
        uint64_t cq_fifo_uflw             : 1;	/* Underflow detected on CQ fifo */
        uint64_t bte_fifo_uflw            : 1;	/* Underflow detected on BTE fifo */
        uint64_t bypass_fifo_uflw         : 1;	/* Underflow detected on BYPASS fifo */
        uint64_t iommu_fifo_uflw          : 1;	/* Underflow detected on IOMMU fifo */
        uint64_t vmdhcam_multihit         : 1;	/* VMDH CAM configuration error */
        uint64_t malformed_mdd            : 1;	/* MDD configuration error */
        uint64_t mddt_mbe0                : 1;	/* MBE on MDD table 0 */
        uint64_t mddt_mbe1                : 1;	/* MBE on MDD table 1 */
        uint64_t ptt_mbe                  : 1;	/* MBE on PTT table */
        uint64_t mddt_sbe0                : 1;	/* SBE on MDD table 0 */
        uint64_t mddt_sbe1                : 1;	/* SBE on MDD table 1 */
        uint64_t ptt_sbe                  : 1;	/* SBE on PTT table */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_err_clr_desc_t;

typedef union ar_nic_nat_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t rat_fifo_oflw            : 1;	/* 1:1 */
        uint64_t cq_fifo_oflw             : 1;	/* 2:2 */
        uint64_t bte_fifo_oflw            : 1;	/* 3:3 */
        uint64_t bypass_fifo_oflw         : 1;	/* 4:4 */
        uint64_t iommu_fifo_oflw          : 1;	/* 5:5 */
        uint64_t rat_fifo_uflw            : 1;	/* 6:6 */
        uint64_t cq_fifo_uflw             : 1;	/* 7:7 */
        uint64_t bte_fifo_uflw            : 1;	/* 8:8 */
        uint64_t bypass_fifo_uflw         : 1;	/* 9:9 */
        uint64_t iommu_fifo_uflw          : 1;	/* 10:10 */
        uint64_t vmdhcam_multihit         : 1;	/* 11:11 */
        uint64_t malformed_mdd            : 1;	/* 12:12 */
        uint64_t mddt_mbe0                : 1;	/* 13:13 */
        uint64_t mddt_mbe1                : 1;	/* 14:14 */
        uint64_t ptt_mbe                  : 1;	/* 15:15 */
        uint64_t mddt_sbe0                : 1;	/* 16:16 */
        uint64_t mddt_sbe1                : 1;	/* 17:17 */
        uint64_t ptt_sbe                  : 1;	/* 18:18 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_err_hss_msk_desc_t;

typedef union ar_nic_nat_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t rat_fifo_oflw            : 1;	/* 1:1 */
        uint64_t cq_fifo_oflw             : 1;	/* 2:2 */
        uint64_t bte_fifo_oflw            : 1;	/* 3:3 */
        uint64_t bypass_fifo_oflw         : 1;	/* 4:4 */
        uint64_t iommu_fifo_oflw          : 1;	/* 5:5 */
        uint64_t rat_fifo_uflw            : 1;	/* 6:6 */
        uint64_t cq_fifo_uflw             : 1;	/* 7:7 */
        uint64_t bte_fifo_uflw            : 1;	/* 8:8 */
        uint64_t bypass_fifo_uflw         : 1;	/* 9:9 */
        uint64_t iommu_fifo_uflw          : 1;	/* 10:10 */
        uint64_t vmdhcam_multihit         : 1;	/* 11:11 */
        uint64_t malformed_mdd            : 1;	/* 12:12 */
        uint64_t mddt_mbe0                : 1;	/* 13:13 */
        uint64_t mddt_mbe1                : 1;	/* 14:14 */
        uint64_t ptt_mbe                  : 1;	/* 15:15 */
        uint64_t mddt_sbe0                : 1;	/* 16:16 */
        uint64_t mddt_sbe1                : 1;	/* 17:17 */
        uint64_t ptt_sbe                  : 1;	/* 18:18 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_err_os_msk_desc_t;

typedef union ar_nic_nat_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t rat_fifo_oflw            : 1;	/* 1:1 */
        uint64_t cq_fifo_oflw             : 1;	/* 2:2 */
        uint64_t bte_fifo_oflw            : 1;	/* 3:3 */
        uint64_t bypass_fifo_oflw         : 1;	/* 4:4 */
        uint64_t iommu_fifo_oflw          : 1;	/* 5:5 */
        uint64_t rat_fifo_uflw            : 1;	/* 6:6 */
        uint64_t cq_fifo_uflw             : 1;	/* 7:7 */
        uint64_t bte_fifo_uflw            : 1;	/* 8:8 */
        uint64_t bypass_fifo_uflw         : 1;	/* 9:9 */
        uint64_t iommu_fifo_uflw          : 1;	/* 10:10 */
        uint64_t vmdhcam_multihit         : 1;	/* 11:11 */
        uint64_t malformed_mdd            : 1;	/* 12:12 */
        uint64_t mddt_mbe0                : 1;	/* 13:13 */
        uint64_t mddt_mbe1                : 1;	/* 14:14 */
        uint64_t ptt_mbe                  : 1;	/* 15:15 */
        uint64_t mddt_sbe0                : 1;	/* 16:16 */
        uint64_t mddt_sbe1                : 1;	/* 17:17 */
        uint64_t ptt_sbe                  : 1;	/* 18:18 */
        uint64_t undefine_63_19           :45;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_err_first_flg_desc_t;

typedef union ar_nic_nat_err_info_mddt0_desc {
    struct {
        // QW0
        uint64_t mmr_created_error        : 1;	/* MMR read created the MBE Error */
        uint64_t sbe_syndrome             : 7;	/* SBE syndrome */
        uint64_t sbe_address              :12;	/* SBE Address */
        uint64_t mbe_syndrome             : 7;	/* MBE syndrome */
        uint64_t mbe_address              :12;	/* MBE Address */
        uint64_t undefine_63_39           :25;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_err_info_mddt0_desc_t;

typedef union ar_nic_nat_err_info_mddt1_desc {
    struct {
        // QW0
        uint64_t mmr_created_error        : 1;	/* MMR read created the MBE Error */
        uint64_t sbe_syndrome             : 7;	/* SBE syndrome */
        uint64_t sbe_address              :12;	/* SBE Address */
        uint64_t mbe_syndrome             : 7;	/* MBE syndrome */
        uint64_t mbe_address              :12;	/* MBE Address */
        uint64_t undefine_63_39           :25;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_err_info_mddt1_desc_t;

typedef union ar_nic_nat_err_info_ptt_desc {
    struct {
        // QW0
        uint64_t mmr_created_error        : 1;	/* MMR read created the MBE Error */
        uint64_t sbe_syndrome             : 8;	/* SBE syndrome */
        uint64_t sbe_address              : 6;	/* SBE Address */
        uint64_t mbe_syndrome             : 8;	/* MBE syndrome */
        uint64_t mbe_address              : 6;	/* MBE Address */
        uint64_t undefine_63_29           :35;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_err_info_ptt_desc_t;

typedef union ar_nic_nat_err_info_malformed_mdd_desc {
    struct {
        // QW0
        uint64_t mdh                      :12;	/* Memory Domain Handle of offending descriptor */
        uint64_t undefine_63_12           :52;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_err_info_malformed_mdd_desc_t;

typedef union ar_nic_nat_dbg_errinj_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* Error has been injected */
        uint64_t ramselect                : 3;	/* This field identifies the memory in which errors will be injected */
        uint64_t undefine_15_7            : 9;	/* undefined */
        uint64_t checkbyte                : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  :12;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_44           :20;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_dbg_errinj_desc_t;

typedef union ar_nic_nat_dbg_crdts_desc {
    struct {
        // QW0
        uint64_t bypass_crdts             : 8;	/* Number of credits in use on the BYPASS path */
        uint64_t iommu_crdts              : 8;	/* Number of credits in use on the IOMMU path */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_nat_dbg_crdts_desc_t;

typedef union ar_nic_nat_dbg_trans_errs_desc {
    struct {
        // QW0
        uint64_t err0                     : 4;	/* The most recent NAT translation error */
        uint64_t err1                     : 4;	/* NAT translation error */
        uint64_t err2                     : 4;	/* NAT translation error */
        uint64_t err3                     : 4;	/* NAT translation error */
        uint64_t err4                     : 4;	/* NAT translation error */
        uint64_t err5                     : 4;	/* NAT translation error */
        uint64_t err6                     : 4;	/* NAT translation error */
        uint64_t err7                     : 4;	/* NAT translation error */
        uint64_t err8                     : 4;	/* NAT translation error */
        uint64_t err9                     : 4;	/* NAT translation error */
        uint64_t err10                    : 4;	/* NAT translation error */
        uint64_t err11                    : 4;	/* NAT translation error */
        uint64_t err12                    : 4;	/* NAT translation error */
        uint64_t err13                    : 4;	/* NAT translation error */
        uint64_t err14                    : 4;	/* NAT translation error */
        uint64_t err15                    : 4;	/* The least recent NAT translation error */
    };
    uint64_t qwords[1];
} ar_nic_nat_dbg_trans_errs_desc_t;


#endif
