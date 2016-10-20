/******************************************************************************
 * COPYRIGHT CRAY INC. ar_ce_structs.h
 * FILE: ar_ce_structs.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/

#ifndef _AR_CE_STRUCTS_H_
#define _AR_CE_STRUCTS_H_

/*
 *  ARIES CE STRUCTURES
 */
typedef union ar_nic_ce_cfg_in_base_desc {
    struct {
        // QW0
        uint64_t vc_reset                 : 1;	/* If written to a one, resets the logic unique to a virtual channel and sets it to a disabled condition */
        uint64_t number_of_children       : 6;	/* The total number of inner and/or leaf joins expected to participate in a reduction */
        uint64_t fp_rounding_mode         : 2;	/* floating point rounding modes: 0 = Round to nearest 1 = Round down 2 = Round up 3 = Round to zero */
        uint64_t undefine_47_9            :39;	/* undefined */
        uint64_t pkey                     :16;	/* The Protection Key is used to validate the request */
    };
    uint64_t qwords[1];
} ar_nic_ce_cfg_in_base_desc_t;

typedef union ar_nic_ce_cfg_out_base_desc {
    struct {
        // QW0
        uint64_t child_id                 : 5;	/* Identifies this as a specific child for the inner_join */
        uint64_t undefine_7_5             : 3;	/* undefined */
        uint64_t ce_id                    : 2;	/* Defines the virtual CE to use at its parent location */
        uint64_t undefine_15_10           : 6;	/* undefined */
        uint64_t rc_2_0                   : 3;	/* Routing control */
        uint64_t undefine_20_19           : 2;	/* undefined */
        uint64_t ssid_nsrc                : 2;	/* Notify Source (Reference: 9 */
        uint64_t ssid_lcqh                :11;	/* Completion queue handle to which the local CQE notification is to be sent (Reference: 9 */
        uint64_t undefine_35_34           : 2;	/* undefined */
        uint64_t ntt                      : 1;	/* Set to enable a Node Translation Table lookup (Reference: 9 */
        uint64_t dstid                    : 2;	/* Identifies a particular NIC on the endpoint */
        uint64_t dst                      :16;	/* Destination endpoint */
        uint64_t ptag                     : 8;	/* Destination Memory protection tag(Translated by the PTAG Translation Table (PTT) to a PKEY which is used in remote address translation at the destination endpoint */
        uint64_t is_root                  : 1;	/* Defines this virtual CE as the collective root */
    };
    uint64_t qwords[1];
} ar_nic_ce_cfg_out_base_desc_t;

typedef union ar_nic_ce_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Not used by CE logic, for diagnostic use only */
        uint64_t jl_reg_pc                : 4;	/* An internal parity error detected in the joinlist register */
        uint64_t op_indx_reg_pc           : 4;	/* An internal parity error was detected in operand/index register */
        uint64_t mismatch_err             : 4;	/* Received a join, but the reduction id did not match the one received by the first child that joined this reduction */
        uint64_t first_cnt_not_match      : 4;	/* Received a join, but the cnt_bm field did not match the one received by the first child that entered this reduction */
        uint64_t first_op_not_match       : 4;	/* Received a join, but the operation did not match operation received from the first child that joined the collective for this reduction */
        uint64_t duplicate_join           : 4;	/* Indicates the child_id for a new request has previously joined a reduction on this virtual CE and the results of that reduction have not been sent via a scatter or PUT */
        uint64_t unexpected_join          : 4;	/* The type of join for this child_id is checked against the type defined for this child in the configuration MMRs */
        uint64_t protection_violation     : 4;	/* A new request was received in which it's pkey did not match the pkey configured for this virtual CE */
        uint64_t dflit_mbe                : 2;	/* Multi bit error while performing SECDED of data flit */
        uint64_t dflit_sbe                : 2;	/* Data flit SECDED detected single bit error */
        uint64_t unexpected_scatter       : 4;	/* A scatter command was received before the reduction has completed or receipt of a scatter while executing a scatter ( */
        uint64_t bad_operands             : 1;	/* A min or max operation was defined in the reqcmd field of the header, which requires two data flits to follow the header and a cnt_bm value of 5 */
        uint64_t inv_cnt_bm               : 1;	/* cnt_bm header field specifies a count of the number of 32 bit words of data will follow the header */
        uint64_t inv_alu_op               : 1;	/* The reqcmd header field is not a valid CE ALU operation or the ce_op_mod bit in the Collective Control Word is active and op code is not a min or max operation (Table 466 in the AIS and Table 452 in the AIS) */
        uint64_t inv_ce_cmd               : 1;	/* A header was received with a reqcmd not valid for the CE (9 */
        uint64_t header_with_tail         : 1;	/* A header was received with a tail bit active */
        uint64_t header_lstatus           : 1;	/* Indicates a header was received with the Local Node Error Status (lstatus) field other than zero, indicating an error was detected in the path to this CE */
        uint64_t header_pc                : 1;	/* Parity error was detected on a header */
        uint64_t operation_disabled       : 4;	/* The request virtual CE (ce_id) had it's VC_RESET bit active indicating the virtual channel is disabled */
        uint64_t mmr_reg_mbe              : 4;	/* multi-bit error detected from mmr register space, each position represents the virtual CE associated with the error */
        uint64_t mmr_reg_sbe              : 4;	/* single bit error detected from mmr register space, each position represents the virtual CE associated with the error */
        uint64_t address_err              : 1;	/* Request address bits [5:2] plus the cnt_bm field do not cross a cache line */
        uint64_t rat_fifo_ovrflo          : 1;	/* The RAT sent additional requests even though the input FIFO was full */
        uint64_t redengn_ovrflo           : 1;	/* One of the 12 reduction engine FIFO's indicated an overfow condition */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_flg_desc_t;

typedef union ar_nic_ce_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Not used by CE logic, for diagnostic use only */
        uint64_t jl_reg_pc                : 4;	/* An internal parity error detected in the joinlist register */
        uint64_t op_indx_reg_pc           : 4;	/* An internal parity error was detected in operand/index register */
        uint64_t mismatch_err             : 4;	/* Received a join, but the reduction id did not match the one received by the first child that joined this reduction */
        uint64_t first_cnt_not_match      : 4;	/* Received a join, but the cnt_bm field did not match the one received by the first child that entered this reduction */
        uint64_t first_op_not_match       : 4;	/* Received a join, but the operation did not match operation received from the first child that joined the collective for this reduction */
        uint64_t duplicate_join           : 4;	/* Indicates the child_id for a new request has previously joined a reduction on this virtual CE and the results of that reduction have not been sent via a scatter or PUT */
        uint64_t unexpected_join          : 4;	/* The type of join for this child_id is checked against the type defined for this child in the configuration MMRs */
        uint64_t protection_violation     : 4;	/* A new request was received in which it's pkey did not match the pkey configured for this virtual CE */
        uint64_t dflit_mbe                : 2;	/* Multi bit error while performing SECDED of data flit */
        uint64_t dflit_sbe                : 2;	/* Data flit SECDED detected single bit error */
        uint64_t unexpected_scatter       : 4;	/* A scatter command was received before the reduction has completed or receipt of a scatter while executing a scatter ( */
        uint64_t bad_operands             : 1;	/* A min or max operation was defined in the reqcmd field of the header, which requires two data flits to follow the header and a cnt_bm value of 5 */
        uint64_t inv_cnt_bm               : 1;	/* cnt_bm header field specifies a count of the number of 32 bit words of data will follow the header */
        uint64_t inv_alu_op               : 1;	/* The reqcmd header field is not a valid CE ALU operation or the ce_op_mod bit in the Collective Control Word is active and op code is not a min or max operation (Table 466 in the AIS and Table 452 in the AIS) */
        uint64_t inv_ce_cmd               : 1;	/* A header was received with a reqcmd not valid for the CE (9 */
        uint64_t header_with_tail         : 1;	/* A header was received with a tail bit active */
        uint64_t header_lstatus           : 1;	/* Indicates a header was received with the Local Node Error Status (lstatus) field other than zero, indicating an error was detected in the path to this CE */
        uint64_t header_pc                : 1;	/* Parity error was detected on a header */
        uint64_t operation_disabled       : 4;	/* The request virtual CE (ce_id) had it's VC_RESET bit active indicating the virtual channel is disabled */
        uint64_t mmr_reg_mbe              : 4;	/* multi-bit error detected from mmr register space, each position represents the virtual CE associated with the error */
        uint64_t mmr_reg_sbe              : 4;	/* single bit error detected from mmr register space, each position represents the virtual CE associated with the error */
        uint64_t address_err              : 1;	/* Request address bits [5:2] plus the cnt_bm field do not cross a cache line */
        uint64_t rat_fifo_ovrflo          : 1;	/* The RAT sent additional requests even though the input FIFO was full */
        uint64_t redengn_ovrflo           : 1;	/* One of the 12 reduction engine FIFO's indicated an overfow condition */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_clr_desc_t;

typedef union ar_nic_ce_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t jl_reg_pc                : 4;	/* 4:1 */
        uint64_t op_indx_reg_pc           : 4;	/* 8:5 */
        uint64_t mismatch_err             : 4;	/* 12:9 */
        uint64_t first_cnt_not_match      : 4;	/* 16:13 */
        uint64_t first_op_not_match       : 4;	/* 20:17 */
        uint64_t duplicate_join           : 4;	/* 24:21 */
        uint64_t unexpected_join          : 4;	/* 28:25 */
        uint64_t protection_violation     : 4;	/* 32:29 */
        uint64_t dflit_mbe                : 2;	/* 34:33 */
        uint64_t dflit_sbe                : 2;	/* 36:35 */
        uint64_t unexpected_scatter       : 4;	/* 40:37 */
        uint64_t bad_operands             : 1;	/* 41:41 */
        uint64_t inv_cnt_bm               : 1;	/* 42:42 */
        uint64_t inv_alu_op               : 1;	/* 43:43 */
        uint64_t inv_ce_cmd               : 1;	/* 44:44 */
        uint64_t header_with_tail         : 1;	/* 45:45 */
        uint64_t header_lstatus           : 1;	/* 46:46 */
        uint64_t header_pc                : 1;	/* 47:47 */
        uint64_t operation_disabled       : 4;	/* 51:48 */
        uint64_t mmr_reg_mbe              : 4;	/* 55:52 */
        uint64_t mmr_reg_sbe              : 4;	/* 59:56 */
        uint64_t address_err              : 1;	/* 60:60 */
        uint64_t rat_fifo_ovrflo          : 1;	/* 61:61 */
        uint64_t redengn_ovrflo           : 1;	/* 62:62 */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_hss_msk_desc_t;

typedef union ar_nic_ce_err_os_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t jl_reg_pc                : 4;	/* 4:1 */
        uint64_t op_indx_reg_pc           : 4;	/* 8:5 */
        uint64_t mismatch_err             : 4;	/* 12:9 */
        uint64_t first_cnt_not_match      : 4;	/* 16:13 */
        uint64_t first_op_not_match       : 4;	/* 20:17 */
        uint64_t duplicate_join           : 4;	/* 24:21 */
        uint64_t unexpected_join          : 4;	/* 28:25 */
        uint64_t protection_violation     : 4;	/* 32:29 */
        uint64_t dflit_mbe                : 2;	/* 34:33 */
        uint64_t dflit_sbe                : 2;	/* 36:35 */
        uint64_t unexpected_scatter       : 4;	/* 40:37 */
        uint64_t bad_operands             : 1;	/* 41:41 */
        uint64_t inv_cnt_bm               : 1;	/* 42:42 */
        uint64_t inv_alu_op               : 1;	/* 43:43 */
        uint64_t inv_ce_cmd               : 1;	/* 44:44 */
        uint64_t header_with_tail         : 1;	/* 45:45 */
        uint64_t header_lstatus           : 1;	/* 46:46 */
        uint64_t header_pc                : 1;	/* 47:47 */
        uint64_t operation_disabled       : 4;	/* 51:48 */
        uint64_t mmr_reg_mbe              : 4;	/* 55:52 */
        uint64_t mmr_reg_sbe              : 4;	/* 59:56 */
        uint64_t address_err              : 1;	/* 60:60 */
        uint64_t rat_fifo_ovrflo          : 1;	/* 61:61 */
        uint64_t redengn_ovrflo           : 1;	/* 62:62 */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_os_msk_desc_t;

typedef union ar_nic_ce_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t jl_reg_pc                : 4;	/* 4:1 */
        uint64_t op_indx_reg_pc           : 4;	/* 8:5 */
        uint64_t mismatch_err             : 4;	/* 12:9 */
        uint64_t first_cnt_not_match      : 4;	/* 16:13 */
        uint64_t first_op_not_match       : 4;	/* 20:17 */
        uint64_t duplicate_join           : 4;	/* 24:21 */
        uint64_t unexpected_join          : 4;	/* 28:25 */
        uint64_t protection_violation     : 4;	/* 32:29 */
        uint64_t dflit_mbe                : 2;	/* 34:33 */
        uint64_t dflit_sbe                : 2;	/* 36:35 */
        uint64_t unexpected_scatter       : 4;	/* 40:37 */
        uint64_t bad_operands             : 1;	/* 41:41 */
        uint64_t inv_cnt_bm               : 1;	/* 42:42 */
        uint64_t inv_alu_op               : 1;	/* 43:43 */
        uint64_t inv_ce_cmd               : 1;	/* 44:44 */
        uint64_t header_with_tail         : 1;	/* 45:45 */
        uint64_t header_lstatus           : 1;	/* 46:46 */
        uint64_t header_pc                : 1;	/* 47:47 */
        uint64_t operation_disabled       : 4;	/* 51:48 */
        uint64_t mmr_reg_mbe              : 4;	/* 55:52 */
        uint64_t mmr_reg_sbe              : 4;	/* 59:56 */
        uint64_t address_err              : 1;	/* 60:60 */
        uint64_t rat_fifo_ovrflo          : 1;	/* 61:61 */
        uint64_t redengn_ovrflo           : 1;	/* 62:62 */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_first_flg_desc_t;

typedef union ar_nic_ce_err_req_info_desc {
    struct {
        // QW0
        uint64_t sbe_source               :18;	/* srcid and src of first detected SBE */
        uint64_t sbe_syndrome             : 8;	/* Syndrome for first detected SBE */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t mbe_source               :18;	/* srcid and src of first detected MBE */
        uint64_t mbe_syndrome             : 8;	/* Syndrome for first detected MBE */
        uint64_t undefine_63_58           : 6;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_req_info_desc_t;

typedef union ar_nic_ce_err_op_info_desc {
    struct {
        // QW0
        uint64_t op_disable_source        :18;	/* srcid and src on first detected OPERATION_DISABLED */
        uint64_t bad_op_source            :18;	/* srcid and src on first detected BAD_OPERAND */
        uint64_t unxpct_scat_source       :18;	/* srcid and src on first detected UNEXPECTED_SCATTER */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_op_info_desc_t;

typedef union ar_nic_ce_err_inv_info_desc {
    struct {
        // QW0
        uint64_t inv_cmd_source           :18;	/* srcid and src on first detected INV_CE_CMD */
        uint64_t inv_alu_source           :18;	/* srcid and src on first detected INV_ALU_OP */
        uint64_t inv_cnt_source           :18;	/* srcid and src on first detected INV_CNT_BM */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_inv_info_desc_t;

typedef union ar_nic_ce_err_reject_info_desc {
    struct {
        // QW0
        uint64_t dup_join_source          :18;	/* srcid and src on first detected DUPLICATE_JOIN */
        uint64_t unexpct_join_source      :18;	/* srcid and src on first detected UNEXPECTED_JOIN */
        uint64_t bad_pkey_source          :18;	/* srcid and src on first detected PROTECTION_VIOLATION */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_reject_info_desc_t;

typedef union ar_nic_ce_err_match_info_desc {
    struct {
        // QW0
        uint64_t redid_mis_source         :18;	/* srcid and src on first detected MISMATCH_ERR */
        uint64_t cnt_mis_source           :18;	/* srcid and src on first detected FIRST_CNT_NOT_MATCH */
        uint64_t cmd_mis_source           :18;	/* srcid and src on first detected FIRST_OP_NOT_MATCH */
        uint64_t undefine_63_54           :10;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_match_info_desc_t;

typedef union ar_nic_ce_err_chk_info_desc {
    struct {
        // QW0
        uint64_t hdr_wtail_source         :18;	/* srcid and src on first detected HEADER_WITH_TAIL */
        uint64_t lstatus_source           :18;	/* srcid and src on first detected HEADER_LSTATUS */
        uint64_t mbe_discptor_addr        : 4;	/* The first detected MMR_REG_MBE address */
        uint64_t mbe_discptor_syndrome    : 7;	/* Syndrome on first detected MMR_REG_MBE */
        uint64_t undefine_47_47           : 1;	/* undefined */
        uint64_t sbe_discptor_addr        : 4;	/* The first detected MMR_REG_SBE address */
        uint64_t sbe_discptor_syndrome    : 7;	/* Syndrome on first detected MMR_REG_SBE */
        uint64_t undefine_63_59           : 5;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_chk_info_desc_t;

typedef union ar_nic_ce_err_adderr_info_desc {
    struct {
        // QW0
        uint64_t address_err_source       :18;	/* srcid and src on first detected ADDRESS_ERR */
        uint64_t redengn_ovrflo_source    :12;	/* Which of the 12 FIFO's indicated an overflow condition: [29:26] = which virtual channel joinlist fifo [25:22] = which virtual channel operand fifo [21:18] = which virtual channel index fifo */
        uint64_t undefine_63_30           :34;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_err_adderr_info_desc_t;

typedef union ar_nic_ce_sts_chnl_0_info_desc {
    struct {
        // QW0
        uint64_t wait4reduction           : 1;	/* Virtual CE waiting for reduction to start */
        uint64_t wait4scatter             : 1;	/* Virtual CE waiting for scatter to start */
        uint64_t undefine_3_2             : 2;	/* undefined */
        uint64_t join_count               : 6;	/* A count of the number of children joined */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t whos_in                  :32;	/* Each bit position indicates the comparable child_number that has entered the reduction */
        uint64_t undefine_63_44           :20;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_sts_chnl_0_info_desc_t;

typedef union ar_nic_ce_sts_chnl_1_info_desc {
    struct {
        // QW0
        uint64_t wait4reduction           : 1;	/* Virtual CE waiting for reduction to start */
        uint64_t wait4scatter             : 1;	/* Virtual CE waiting for scatter to start */
        uint64_t undefine_3_2             : 2;	/* undefined */
        uint64_t join_count               : 6;	/* A count of the number of children joined */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t whos_in                  :32;	/* Each bit position indicates the comparable child_number that has entered the reduction */
        uint64_t undefine_63_44           :20;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_sts_chnl_1_info_desc_t;

typedef union ar_nic_ce_sts_chnl_2_info_desc {
    struct {
        // QW0
        uint64_t wait4reduction           : 1;	/* Virtual CE waiting for reduction to start */
        uint64_t wait4scatter             : 1;	/* Virtual CE waiting for scatter to start */
        uint64_t undefine_3_2             : 2;	/* undefined */
        uint64_t join_count               : 6;	/* A count of the number of children joined */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t whos_in                  :32;	/* Each bit position indicates the comparable child_number that has entered the reduction */
        uint64_t undefine_63_44           :20;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_sts_chnl_2_info_desc_t;

typedef union ar_nic_ce_sts_chnl_3_info_desc {
    struct {
        // QW0
        uint64_t wait4reduction           : 1;	/* Virtual CE waiting for reduction to start */
        uint64_t wait4scatter             : 1;	/* Virtual CE waiting for scatter to start */
        uint64_t undefine_3_2             : 2;	/* undefined */
        uint64_t join_count               : 6;	/* A count of the number of children joined */
        uint64_t undefine_11_10           : 2;	/* undefined */
        uint64_t whos_in                  :32;	/* Each bit position indicates the comparable child_number that has entered the reduction */
        uint64_t undefine_63_44           :20;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_sts_chnl_3_info_desc_t;

typedef union ar_nic_ce_dbg_errinj_input_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error in Nth flit of one packet Mode 1: Inject error in Nth flit of all packets */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* Status indicating if the injection occured, software write to reset */
        uint64_t count                    : 2;	/* Flit in which to inject the error */
        uint64_t tail                     : 1;	/* Flip the tail bit */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t parity                   : 4;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted */
        uint64_t checkbytelo              : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 63:0 to be inverted */
        uint64_t checkbyteup              : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 135:72 to be inverted */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_dbg_errinj_input_desc_t;

typedef union ar_nic_ce_dbg_errinj_redengn_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error once Mode 1: Inject error always */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/* Status to indicate if injection occured, software write to reset */
        uint64_t virtual_ce_reg           : 4;	/* Select the virtual CE regfiles: [4] = 0 [5] = 1 [6] = 2 [7[ = 3 */
        uint64_t regselect                : 3;	/* Select which of the three register types [8] = joinlist [9] = operand [10] = index/operand2 */
        uint64_t undefine_15_11           : 5;	/* undefined */
        uint64_t jl_checkbyte             :10;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the joinlist regfile being read, to be inverted */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t op_checkbyte             : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the operand regfile being read, to be inverted */
        uint64_t ix_checkbyte             : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the index regfile being read, to be inverted */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_dbg_errinj_redengn_desc_t;

typedef union ar_nic_ce_dbg_errinj_child_cfg_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
        uint64_t triggered                : 1;	/* Status to indicate if injection occured, software write to reset */
        uint64_t regselect                : 4;	/* This field identifies the joinlit regfile: [4] = config0 [5] = config1 [6] = config2 [7[= config3 */
        uint64_t undefine_15_8            : 8;	/* undefined */
        uint64_t checkbyte                : 7;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the regfile address read to be inverted */
        uint64_t undefine_23_23           : 1;	/* undefined */
        uint64_t address                  : 4;	/* This field indicates the address within the regfile for which error injection is to occur */
        uint64_t undefine_63_28           :36;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_dbg_errinj_child_cfg_desc_t;

typedef union ar_nic_ce_dbg_crdts_desc {
    struct {
        // QW0
        uint64_t max_npt_crdts            : 8;	/* Maximum number of outstanding flits the CE can send to the NPT */
        uint64_t max_tarb_credits         : 8;	/* Maximum number of outstanding flits the CE can send to the TARB */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_dbg_crdts_desc_t;

typedef union ar_nic_ce_sts_crdts_desc {
    struct {
        // QW0
        uint64_t npt_fcnt                 : 4;	/* Current number of flits outstanding to the NPT */
        uint64_t undefine_7_4             : 4;	/* undefined */
        uint64_t tarb_fcnt                : 5;	/* Current number of flits outstanding to the TARB */
        uint64_t undefine_63_13           :51;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_sts_crdts_desc_t;

typedef union ar_nic_ce_cfg_chnl_0_desc {
    struct {
        // QW0
        uint64_t dst_0                    :16;	/* Destination endpoint */
        uint64_t dstid_0                  : 2;	/* The endpoint NIC for child 0 */
        uint64_t ntt_0                    : 1;	/* Node translation enable for child 0 */
        uint64_t ce_id_0                  : 2;	/* destination virtual CE number for child 0 */
        uint64_t child0_type              : 2;	/* 0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent */
        uint64_t undefine_31_23           : 9;	/* undefined */
        uint64_t dst_1                    :16;	/* Destination endpoint */
        uint64_t dstid_1                  : 2;	/* The endpoint NIC for child 1 */
        uint64_t ntt_1                    : 1;	/* Node translation enable for child 1 */
        uint64_t ce_id_1                  : 2;	/* child 1's destination (parent) virtual CE number */
        uint64_t child1_type              : 2;	/* 0 = child 1 not expected, 1 = child 1 is a leaf,  2 = child 1 is a lower level parent */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_cfg_chnl_0_desc_t;

typedef union ar_nic_ce_cfg_chnl_1_desc {
    struct {
        // QW0
        uint64_t dst_0                    :16;	/* Destination endpoint */
        uint64_t dstid_0                  : 2;	/* The endpoint NIC for child 0 */
        uint64_t ntt_0                    : 1;	/* Node translation enable for child 0 */
        uint64_t ce_id_0                  : 2;	/* child 0's destination virtual CE number */
        uint64_t child0_type              : 2;	/* 0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent */
        uint64_t undefine_31_23           : 9;	/* undefined */
        uint64_t dst_1                    :16;	/* Destination endpoint */
        uint64_t dstid_1                  : 2;	/* The endpoint NIC for child 1 */
        uint64_t ntt_1                    : 1;	/* Node translation enable for child 1 */
        uint64_t ce_id_1                  : 2;	/* child 1's destination virtual CE number */
        uint64_t child1_type              : 2;	/* 0 = child 1 not expected, 1 = child 1 is a leaf,  2 = child 1 is a lower level parent */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_cfg_chnl_1_desc_t;

typedef union ar_nic_ce_cfg_chnl_2_desc {
    struct {
        // QW0
        uint64_t dst_0                    :16;	/* Destination endpoint */
        uint64_t dstid_0                  : 2;	/* The endpoint NIC for child 0 */
        uint64_t ntt_0                    : 1;	/* Node translation enable for child 0 */
        uint64_t ce_id_0                  : 2;	/* child 0's destination virtual CE number */
        uint64_t child0_type              : 2;	/* 0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent */
        uint64_t undefine_31_23           : 9;	/* undefined */
        uint64_t dst_1                    :16;	/* Destination endpoint */
        uint64_t dstid_1                  : 2;	/* The endpoint NIC for child 1 */
        uint64_t ntt_1                    : 1;	/* Node translation enable for child 1 */
        uint64_t ce_id_1                  : 2;	/* child 1's destination virtual CE number */
        uint64_t child1_type              : 2;	/* 0 = child 1 not expected, 1 = child 1 is a leaf,  2 = child 1 is a lower level parent */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_cfg_chnl_2_desc_t;

typedef union ar_nic_ce_cfg_chnl_3_desc {
    struct {
        // QW0
        uint64_t dst_0                    :16;	/* Destination endpoint */
        uint64_t dstid_0                  : 2;	/* The endpoint NIC for child 0 */
        uint64_t ntt_0                    : 1;	/* Node translation enable for child 0 */
        uint64_t ce_id_0                  : 2;	/* child 0's destination virtual CE number */
        uint64_t child0_type              : 2;	/* 0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent */
        uint64_t undefine_31_23           : 9;	/* undefined */
        uint64_t dst_1                    :16;	/* Destination endpoint */
        uint64_t dstid_1                  : 2;	/* The endpoint NIC for child 1 */
        uint64_t ntt_1                    : 1;	/* Node translation enable for child 1 */
        uint64_t ce_id_1                  : 2;	/* child 1's destination virtual CE number */
        uint64_t child1_type              : 2;	/* 0 = child 0 not expected, 1 = child 0 is a leaf,  2 = child 0 is a lower level parent */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nic_ce_cfg_chnl_3_desc_t;


#endif
