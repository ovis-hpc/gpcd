/******************************************************************************
 * COPYRIGHT CRAY INC. ar_pt_structs.h
 * FILE: ar_pt_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_PT_STRUCTS_H_
#define _AR_PT_STRUCTS_H_

/*
 *  ARIES PT STRUCTURES
 */
typedef union ar_rtr_pt_inq_cfg_degrade_diag_desc {
    struct {
        // QW0
        uint64_t undefine_20_0            :21;	/* undefined */
        uint64_t vc_under_test            : 3;	/* Set up a diagnostic test for one of the eight VCs */
        uint64_t undefine_38_24           :15;	/* undefined */
        uint64_t disable_link_alive_discovery: 1;	/* Disable link alive discovery */
        uint64_t undefine_40_40           : 1;	/* undefined */
        uint64_t colbuf_gc_mode           : 1;	/* Pass on global clock mode enable */
        uint64_t undefine_42_42           : 1;	/* undefined */
        uint64_t lmon_sel                 : 2;	/* Select for putting logic monitor data on Logic Monitor bus: */
        uint64_t lmon_en                  : 1;	/* Logic monitor enable */
        uint64_t lmon_inq_sel             : 4;	/* Logic monitor mux select for Input Q Buffers */
        uint64_t lmon_colbuf_sel          : 4;	/* Logic monitor mux select for Column Buffers */
        uint64_t lmon_subswitch_sel       : 9;	/* Logic monitor mux select for Subswitch */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_degrade_diag_desc_t;

typedef union ar_rtr_pt_inq_cfg_fifo_rowbuf_crdt_limit_desc {
    struct {
        // QW0
        uint64_t rowbuf_req_crdt_limit    : 4;	/* row buffer credit limit for REQ */
        uint64_t rowbuf_rsp_crdt_limit    : 4;	/* row buffer credit limit for RSP */
        uint64_t ofifo_req_crdt_limit     : 4;	/* Credit limit for the Request OFIFOs */
        uint64_t ofifo_rsp_crdt_limit     : 4;	/* Credit limit for the Response OFIFOs */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_fifo_rowbuf_crdt_limit_desc_t;

typedef union ar_rtr_pt_inq_cfg_fifo_rowbuf_crdts_desc {
    struct {
        // QW0
        uint64_t rowbuf_req_crdts         : 4;	/* Current credit value for the request rowbuffers in column(N) */
        uint64_t rowbuf_rsp_crdts         : 4;	/* Current credit value for the response rowbuffers in column(N) */
        uint64_t ofifo_req_crdts          : 4;	/* Current credit value for the Request OFIFO */
        uint64_t ofifo_rsp_crdts          : 4;	/* Current credit value for the Response OFIFO */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_fifo_rowbuf_crdts_desc_t;

typedef union ar_rtr_pt_inq_cfg_route_pipe_desc {
    struct {
        // QW0
        uint64_t disable_congestion       : 1;	/* Setting this register will cause the routing pipe to ignore all congestion information */
        uint64_t gmin_tbl_addr_shift      : 3;	/* When accessing the global minimal table, the address is determined by the destination group number of the system */
        uint64_t lmin_tbl_addr_shift      : 3;	/* When accessing the local minimal table, the address is determined by the destination Aries number within the final destination group */
        uint64_t hash_id                  : 8;	/* Each Tile in the system is unique */
        uint64_t at_a_ptile               : 1;	/* This bit is set when this Tile is a PTile */
        uint64_t at_a_blue_tile           : 1;	/* This bit is set when this Tile is a  */
        uint64_t incr_incoming_vc         : 1;	/* When this is set, the effective incoming VC is equal to the actual incoming VC in the packet plus one */
        uint64_t aries_number             : 7;	/* This is the current Aries number where this Tile resides */
        uint64_t group_number             : 8;	/* This is the current group number in which this Tile resides */
        uint64_t route_err_type_enable    : 5;	/* This enables logic testing of the four different route error types */
        uint64_t read_all_rtables         : 1;	/* By default, only the route tables that are needed are being accessed to conserve power */
        uint64_t reset_lfsr               : 1;	/* HSS reset the LFSR random number generator */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_route_pipe_desc_t;

typedef union ar_rtr_pt_inq_cfg_vc_table_desc {
    struct {
        // QW0
        uint64_t trgt_vc0                 : 3;	/* Target VC for VC0 */
        uint64_t trgt_vc0_root            : 3;	/* Target VC for VC0 if this packet has reached root */
        uint64_t trgt_vc0_par             : 1;	/* Odd parity for TRGT_VC0 and TRGT_VC0_ROOT */
        uint64_t trgt_vc1                 : 3;	/* Target VC for VC1 */
        uint64_t trgt_vc1_root            : 3;	/* Target VC for VC1 if this packet has reached root */
        uint64_t trgt_vc1_par             : 1;	/* Odd parity for TRGT_VC1 and TRGT_VC1_ROOT */
        uint64_t trgt_vc2                 : 3;	/* Target VC for VC2 */
        uint64_t trgt_vc2_root            : 3;	/* Target VC for VC2 if this packet has reached root */
        uint64_t trgt_vc2_par             : 1;	/* Odd parity for TRGT_VC2 and TRGT_VC2_ROOT */
        uint64_t trgt_vc3                 : 3;	/* Target VC for VC3 */
        uint64_t trgt_vc3_root            : 3;	/* Target VC for VC3 if this packet has reached root */
        uint64_t trgt_vc3_par             : 1;	/* Odd parity for TRGT_VC3 and TRGT_VC3_ROOT */
        uint64_t trgt_vc4                 : 3;	/* Target VC for VC4 */
        uint64_t trgt_vc4_root            : 3;	/* Target VC for VC4 if this packet has reached root */
        uint64_t trgt_vc4_par             : 1;	/* Odd parity for TRGT_VC4 and TRGT_VC4_ROOT */
        uint64_t trgt_vc5                 : 3;	/* Target VC for VC5 */
        uint64_t trgt_vc5_root            : 3;	/* Target VC for VC5 if this packet has reached root */
        uint64_t trgt_vc5_par             : 1;	/* Odd parity for TRGT_VC5 and TRGT_VC5_ROOT */
        uint64_t trgt_vc6                 : 3;	/* Target VC for VC6 */
        uint64_t trgt_vc6_root            : 3;	/* Target VC for VC6 if this packet has reached root */
        uint64_t trgt_vc6_par             : 1;	/* Odd parity for TRGT_VC6 and TRGT_VC6_ROOT */
        uint64_t trgt_vc7                 : 3;	/* Target VC for VC7 */
        uint64_t trgt_vc7_root            : 3;	/* Target VC for VC7 if this packet has reached root */
        uint64_t trgt_vc7_par             : 1;	/* Odd parity for TRGT_VC7 and TRGT_VC7_ROOT */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_vc_table_desc_t;

typedef union ar_rtr_pt_inq_cfg_link_alive_bits_desc {
    struct {
        // QW0
        uint64_t link_alive               :48;	/* Link alive status of all 48 Tiles */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_link_alive_bits_desc_t;

typedef union ar_rtr_pt_inq_cfg_congest_ctrl_desc {
    struct {
        // QW0
        uint64_t adapt0_min_congest_shift : 2;	/* Left shift the 4-bit congestion value of the minimal path during adaptive mode 0 by either 0, 1, or 2 bits */
        uint64_t adapt0_min_congest_add   : 6;	/* Add a 6-bit congestion bias to the post-shifted 6-bit number for the minimal path during adaptive mode 0 */
        uint64_t adapt0_nonmin_congest_shift: 2;	/* Left shift the 4-bit congestion value of the non-minimal path during adaptive mode 0 by either 0, 1, or 2 bits */
        uint64_t adapt0_nonmin_congest_add: 6;	/* Add a 6-bit congestion bias to the post-shifted 6-bit number for the non-minimal path during adaptive mode 0 */
        uint64_t adapt1_min_congest_shift : 2;	/* Left shift the 4-bit congestion value of the minimal path during adaptive mode 1 by either 0, 1, or 2 bits */
        uint64_t adapt1_min_congest_add   : 6;	/* Add a 6-bit congestion bias to the post-shifted 6-bit number for the minimal path during adaptive mode 1 */
        uint64_t adapt1_nonmin_congest_shift: 2;	/* Left shift the 4-bit congestion value of the non-minimal path during adaptive mode 1 by either 0, 1, or 2 bits */
        uint64_t adapt1_nonmin_congest_add: 6;	/* Add a 6-bit congestion bias to the post-shifted 6-bit number for the non-minimal path during adaptive mode 1 */
        uint64_t adapt2_min_congest_shift : 2;	/* Left shift the 4-bit congestion value of the minimal path during adaptive mode 2 by either 0, 1, or 2 bits */
        uint64_t adapt2_min_congest_add   : 6;	/* Add a 6-bit congestion bias to the post-shifted 6-bit number for the minimal path during adaptive mode 2 */
        uint64_t adapt2_nonmin_congest_shift: 2;	/* Left shift the 4-bit congestion value of the non-minimal path during adaptive mode 2 by either 0, 1, or 2 bits */
        uint64_t adapt2_nonmin_congest_add: 6;	/* Add a 6-bit congestion bias to the post-shifted 6-bit number for the non-minimal path during adaptive mode 2 */
        uint64_t adapt3_min_congest_shift : 2;	/* Left shift the 4-bit congestion value of the minimal path during adaptive mode 3 by either 0, 1, or 2 bits */
        uint64_t adapt3_min_congest_add   : 6;	/* Add a 6-bit congestion bias to the post-shifted 6-bit number for the minimal path during adaptive mode 3 */
        uint64_t adapt3_nonmin_congest_shift: 2;	/* Left shift the 4-bit congestion value of the non-minimal path during adaptive mode 3 by either 0, 1, or 2 bits */
        uint64_t adapt3_nonmin_congest_add: 6;	/* Add a 6-bit congestion bias to the post-shifted 6-bit number for the non-minimal path during adaptive mode 3 */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_congest_ctrl_desc_t;

typedef union ar_rtr_pt_inq_cfg_init_vc_inject_desc {
    struct {
        // QW0
        uint64_t ingrp_req_vc_non_min_hashed: 2;	/* Vc assigned when my group == traget group and route type is Non Minimal Hashed */
        uint64_t ingrp_req_vc_min_hashed  : 2;	/* Vc assigned when my group == traget group and route type is Minimal Hashed */
        uint64_t reserved_5_4             : 2;	/* Reserved */
        uint64_t ingrp_req_vc_min_non_hashed: 2;	/* Vc assigned when my_group == traget_group and route type is Minimal Non Hashed */
        uint64_t ingrp_req_vc_adaptive0   : 2;	/* Vc assigned when my_group == traget_group and route type Adaptive0 */
        uint64_t ingrp_req_vc_adaptive1   : 2;	/* Vc assigned when my_group == traget_group and route type Adaptive1 */
        uint64_t ingrp_req_vc_adaptive2   : 2;	/* Vc assigned when my_group == traget_group and route type Adaptive2 */
        uint64_t ingrp_req_vc_adaptive3   : 2;	/* Vc assigned when my_group == traget_group and route type Adaptive3 */
        uint64_t outgrp_req_vc_non_min_hashed: 2;	/* Vc assigned when my group != traget group and route type is Non Minimal Hashed */
        uint64_t outgrp_req_vc_min_hashed : 2;	/* Vc assigned when my group != traget group and route type is Minimal Hashed */
        uint64_t reserved_21_20           : 2;	/* Reserved */
        uint64_t outgrp_req_vc_min_non_hashed: 2;	/* Vc assigned when my_group != traget_group and route type is Minimal Non Hashed */
        uint64_t outgrp_req_vc_adaptive0  : 2;	/* Vc assigned when my_group != traget_group and route type Adaptive0 */
        uint64_t outgrp_req_vc_adaptive1  : 2;	/* Vc assigned when my_group != traget_group and route type Adaptive1 */
        uint64_t outgrp_req_vc_adaptive2  : 2;	/* Vc assigned when my_group != traget_group and route type Adaptive2 */
        uint64_t outgrp_req_vc_adaptive3  : 2;	/* Vc assigned when my_group != traget_group and route type Adaptive3 */
        uint64_t ingrp_rsp_vc_non_min_hashed: 2;	/* Vc assigned when my group == traget group and route type is Non Minimal Hashed */
        uint64_t ingrp_rsp_vc_min_hashed  : 2;	/* Vc assigned when my group == traget group and route type is Minimal Hashed */
        uint64_t reserved_37_36           : 2;	/* Reserved */
        uint64_t ingrp_rsp_vc_min_non_hashed: 2;	/* Vc assigned when my_group == traget_group and route type is Minimal Non Hashed */
        uint64_t ingrp_rsp_vc_adaptive0   : 2;	/* Vc assigned when my_group == traget_group and route type Adaptive0 */
        uint64_t ingrp_rsp_vc_adaptive1   : 2;	/* Vc assigned when my_group == traget_group and route type Adaptive1 */
        uint64_t ingrp_rsp_vc_adaptive2   : 2;	/* Vc assigned when my_group == traget_group and route type Adaptive2 */
        uint64_t ingrp_rsp_vc_adaptive3   : 2;	/* Vc assigned when my_group == traget_group and route type Adaptive3 */
        uint64_t outgrp_rsp_vc_non_min_hashed: 2;	/* Vc assigned when my group != traget group and route type is Non Minimal Hashed */
        uint64_t outgrp_rsp_vc_min_hashed : 2;	/* Vc assigned when my group != traget group and route type is Minimal Hashed */
        uint64_t reserved_53_52           : 2;	/* Reserved */
        uint64_t outgrp_rsp_vc_min_non_hashed: 2;	/* Vc assigned when my_group != traget_group and route type is Minimal Non Hashed */
        uint64_t outgrp_rsp_vc_adaptive0  : 2;	/* Vc assigned when my_group != traget_group and route type Adaptive0 */
        uint64_t outgrp_rsp_vc_adaptive1  : 2;	/* Vc assigned when my_group != traget_group and route type Adaptive1 */
        uint64_t outgrp_rsp_vc_adaptive2  : 2;	/* Vc assigned when my_group != traget_group and route type Adaptive2 */
        uint64_t outgrp_rsp_vc_adaptive3  : 2;	/* Vc assigned when my_group != traget_group and route type Adaptive3 */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_init_vc_inject_desc_t;

typedef union ar_rtr_pt_inq_cfg_grn_nm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                :55;	/* The port list breaks down to the following fields: */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_grn_nm_rt_tab_desc_t;

typedef union ar_rtr_pt_inq_cfg_blk_nm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                :55;	/* The port list breaks down to the following fields: */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_blk_nm_rt_tab_desc_t;

typedef union ar_rtr_pt_inq_cfg_blu_nm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                :55;	/* The port list breaks down to the following fields: */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_blu_nm_rt_tab_desc_t;

typedef union ar_rtr_pt_inq_cfg_locm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                :59;	/* The port list breaks down to the following fields: */
        uint64_t undefine_63_59           : 5;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_locm_rt_tab_desc_t;

typedef union ar_rtr_pt_inq_cfg_glbm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                ;	/* The RAM and the port lists that it contains is actually 85 bits wide */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_cfg_glbm_rt_tab_desc_t;

typedef union ar_rtr_pt_inq_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diag purposes */
        uint64_t sbe_rq_dfifo             : 1;	/* Single Bit error occurred when reading request DFIFO */
        uint64_t mbe_rq_dfifo             : 1;	/* Multi Bit error occurred when reading request DFIFO */
        uint64_t sbe_rs_dfifo             : 1;	/* Single Bit error occurred when reading response DFIFO */
        uint64_t mbe_rs_dfifo             : 1;	/* Multi Bit error occurred when reading response DFIFO */
        uint64_t oflw_err_rq_dfifo        : 1;	/* Overflow error in the request DFIFO */
        uint64_t oflw_err_rs_dfifo        : 1;	/* Overflow error in the response DFIFO */
        uint64_t oflw_err_rq_ofifo        : 1;	/* Overflow error in the request OFIFO */
        uint64_t oflw_err_rs_ofifo        : 1;	/* Overflow error in the response OFIFO */
        uint64_t oflw_err_rq_rfifo        : 1;	/* Overflow error in the request RFIFO */
        uint64_t oflw_err_rs_rfifo        : 1;	/* Overflow error in the response RFIFO */
        uint64_t uflw_err_rq_dfifo        : 1;	/* Underflow error in the request DFIFO */
        uint64_t uflw_err_rs_dfifo        : 1;	/* Underflow error in the response DFIFO */
        uint64_t uflw_err_rq_ofifo        : 1;	/* Underflow error in the request OFIFO */
        uint64_t uflw_err_rs_ofifo        : 1;	/* Underflow error in the response OFIFO */
        uint64_t uflw_err_rq_rfifo        : 1;	/* Underflow error in the request RFIFO */
        uint64_t uflw_err_rs_rfifo        : 1;	/* Underflow error in the response RFIFO */
        uint64_t undefine_20_17           : 4;	/* undefined */
        uint64_t pbe_rfifo_rq             : 1;	/* Parity error in the request RFIFO */
        uint64_t pbe_rfifo_rs             : 1;	/* Parity error in the response RFIFO */
        uint64_t pbe_vc_table             : 1;	/* Pairty error in the VC table MMR A_RTR_PT_INQ_VC_TABLE */
        uint64_t route_error              : 1;	/* A routing error has occured due to either incorrect logic, the routing tables not being programmed properly, or because a routing header has encountered a parity error when it is pulled out of the RFIFO */
        uint64_t sbe_rtable               : 1;	/* SBE in one of the routing tables */
        uint64_t mbe_rtable               : 1;	/* MBE in one of the routing tables */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t prf_cnt_rollovr_err      : 1;	/* This flag is set whenever one of the performance counters withing the InQ is rolled over */
        uint64_t link_alive_channel_err   : 1;	/* This flag is set when the link alive interface experiences a channel error where the link_alive_ctl signal is incorrectly set high before the link alive data capture sequence is finished */
        uint64_t link_alive_timeout_err   : 1;	/* This flag is set when the link alive interface experiences a channel timeout either during the WAIT_SYNC or the MONITOR_CH states within the master state machine */
        uint64_t subswitch_err            : 8;	/* The Subswitch encountered an error on sections 7-0 */
        uint64_t colbuf_oflw_uflw_err_input0: 1;	/* The Column buffer encountered overflow/underfow error on input0  */
        uint64_t colbuf_oflw_uflw_err_input1: 1;	/* The Column buffer encountered overflow/underfow error on input1  */
        uint64_t colbuf_oflw_uflw_err_input2: 1;	/* The Column buffer encountered overflow/underfow error on input2  */
        uint64_t colbuf_oflw_uflw_err_input3: 1;	/* The Column buffer encountered overflow/underfow error on input3  */
        uint64_t colbuf_oflw_uflw_err_input4: 1;	/* The Column buffer encountered overflow/underfow error on input4  */
        uint64_t colbuf_oflw_uflw_err_input5: 1;	/* The Column buffer encountered overflow/underfow error on input5  */
        uint64_t colbuf_max_pkt_err       : 1;	/* This flag sets when the column buffer encounters a packet longer then max packet length */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_flg_desc_t;

typedef union ar_rtr_pt_inq_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diag purposes */
        uint64_t sbe_rq_dfifo             : 1;	/* Single Bit error occurred when reading request DFIFO */
        uint64_t mbe_rq_dfifo             : 1;	/* Multi Bit error occurred when reading request DFIFO */
        uint64_t sbe_rs_dfifo             : 1;	/* Single Bit error occurred when reading response DFIFO */
        uint64_t mbe_rs_dfifo             : 1;	/* Multi Bit error occurred when reading response DFIFO */
        uint64_t oflw_err_rq_dfifo        : 1;	/* Overflow error in the request DFIFO */
        uint64_t oflw_err_rs_dfifo        : 1;	/* Overflow error in the response DFIFO */
        uint64_t oflw_err_rq_ofifo        : 1;	/* Overflow error in the request OFIFO */
        uint64_t oflw_err_rs_ofifo        : 1;	/* Overflow error in the response OFIFO */
        uint64_t oflw_err_rq_rfifo        : 1;	/* Overflow error in the request RFIFO */
        uint64_t oflw_err_rs_rfifo        : 1;	/* Overflow error in the response RFIFO */
        uint64_t uflw_err_rq_dfifo        : 1;	/* Underflow error in the request DFIFO */
        uint64_t uflw_err_rs_dfifo        : 1;	/* Underflow error in the response DFIFO */
        uint64_t uflw_err_rq_ofifo        : 1;	/* Underflow error in the request OFIFO */
        uint64_t uflw_err_rs_ofifo        : 1;	/* Underflow error in the response OFIFO */
        uint64_t uflw_err_rq_rfifo        : 1;	/* Underflow error in the request RFIFO */
        uint64_t uflw_err_rs_rfifo        : 1;	/* Underflow error in the response RFIFO */
        uint64_t undefine_20_17           : 4;	/* undefined */
        uint64_t pbe_rfifo_rq             : 1;	/* Parity error in the request RFIFO */
        uint64_t pbe_rfifo_rs             : 1;	/* Parity error in the response RFIFO */
        uint64_t pbe_vc_table             : 1;	/* Pairty error in the VC table MMR A_RTR_PT_INQ_VC_TABLE */
        uint64_t route_error              : 1;	/* A routing error has occured due to either incorrect logic, the routing tables not being programmed properly, or because a routing header has encountered a parity error when it is pulled out of the RFIFO */
        uint64_t sbe_rtable               : 1;	/* SBE in one of the routing tables */
        uint64_t mbe_rtable               : 1;	/* MBE in one of the routing tables */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t prf_cnt_rollovr_err      : 1;	/* This flag is set whenever one of the performance counters withing the InQ is rolled over */
        uint64_t link_alive_channel_err   : 1;	/* This flag is set when the link alive interface experiences a channel error where the link_alive_ctl signal is incorrectly set high before the link alive data capture sequence is finished */
        uint64_t link_alive_timeout_err   : 1;	/* This flag is set when the link alive interface experiences a channel timeout either during the WAIT_SYNC or the MONITOR_CH states within the master state machine */
        uint64_t subswitch_err            : 8;	/* The Subswitch encountered an error on sections 7-0 */
        uint64_t colbuf_oflw_uflw_err_input0: 1;	/* The Column buffer encountered overflow/underfow error on input0  */
        uint64_t colbuf_oflw_uflw_err_input1: 1;	/* The Column buffer encountered overflow/underfow error on input1  */
        uint64_t colbuf_oflw_uflw_err_input2: 1;	/* The Column buffer encountered overflow/underfow error on input2  */
        uint64_t colbuf_oflw_uflw_err_input3: 1;	/* The Column buffer encountered overflow/underfow error on input3  */
        uint64_t colbuf_oflw_uflw_err_input4: 1;	/* The Column buffer encountered overflow/underfow error on input4  */
        uint64_t colbuf_oflw_uflw_err_input5: 1;	/* The Column buffer encountered overflow/underfow error on input5  */
        uint64_t colbuf_max_pkt_err       : 1;	/* This flag sets when the column buffer encounters a packet longer then max packet length */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_clr_desc_t;

typedef union ar_rtr_pt_inq_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t sbe_rq_dfifo             : 1;	/* 1:1 */
        uint64_t mbe_rq_dfifo             : 1;	/* 2:2 */
        uint64_t sbe_rs_dfifo             : 1;	/* 3:3 */
        uint64_t mbe_rs_dfifo             : 1;	/* 4:4 */
        uint64_t oflw_err_rq_dfifo        : 1;	/* 5:5 */
        uint64_t oflw_err_rs_dfifo        : 1;	/* 6:6 */
        uint64_t oflw_err_rq_ofifo        : 1;	/* 7:7 */
        uint64_t oflw_err_rs_ofifo        : 1;	/* 8:8 */
        uint64_t oflw_err_rq_rfifo        : 1;	/* 9:9 */
        uint64_t oflw_err_rs_rfifo        : 1;	/* 10:10 */
        uint64_t uflw_err_rq_dfifo        : 1;	/* 11:11 */
        uint64_t uflw_err_rs_dfifo        : 1;	/* 12:12 */
        uint64_t uflw_err_rq_ofifo        : 1;	/* 13:13 */
        uint64_t uflw_err_rs_ofifo        : 1;	/* 14:14 */
        uint64_t uflw_err_rq_rfifo        : 1;	/* 15:15 */
        uint64_t uflw_err_rs_rfifo        : 1;	/* 16:16 */
        uint64_t undefine_20_17           : 4;	/* undefined */
        uint64_t pbe_rfifo_rq             : 1;	/* 17:17 */
        uint64_t pbe_rfifo_rs             : 1;	/* 18:18 */
        uint64_t pbe_vc_table             : 1;	/* 19:19 */
        uint64_t route_error              : 1;	/* 20:20 */
        uint64_t sbe_rtable               : 1;	/* 21:21 */
        uint64_t mbe_rtable               : 1;	/* 22:22 */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t prf_cnt_rollovr_err      : 1;	/* 23:23 */
        uint64_t link_alive_channel_err   : 1;	/* 24:24 */
        uint64_t link_alive_timeout_err   : 1;	/* 25:25 */
        uint64_t subswitch_err            : 8;	/* 33:26 */
        uint64_t colbuf_oflw_uflw_err_input0: 1;	/* 34:34 */
        uint64_t colbuf_oflw_uflw_err_input1: 1;	/* 35:35 */
        uint64_t colbuf_oflw_uflw_err_input2: 1;	/* 36:36 */
        uint64_t colbuf_oflw_uflw_err_input3: 1;	/* 37:37 */
        uint64_t colbuf_oflw_uflw_err_input4: 1;	/* 38:38 */
        uint64_t colbuf_oflw_uflw_err_input5: 1;	/* 39:39 */
        uint64_t colbuf_max_pkt_err       : 1;	/* 40:40 */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_hss_msk_desc_t;

typedef union ar_rtr_pt_inq_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t sbe_rq_dfifo             : 1;	/* 1:1 */
        uint64_t mbe_rq_dfifo             : 1;	/* 2:2 */
        uint64_t sbe_rs_dfifo             : 1;	/* 3:3 */
        uint64_t mbe_rs_dfifo             : 1;	/* 4:4 */
        uint64_t oflw_err_rq_dfifo        : 1;	/* 5:5 */
        uint64_t oflw_err_rs_dfifo        : 1;	/* 6:6 */
        uint64_t oflw_err_rq_ofifo        : 1;	/* 7:7 */
        uint64_t oflw_err_rs_ofifo        : 1;	/* 8:8 */
        uint64_t oflw_err_rq_rfifo        : 1;	/* 9:9 */
        uint64_t oflw_err_rs_rfifo        : 1;	/* 10:10 */
        uint64_t uflw_err_rq_dfifo        : 1;	/* 11:11 */
        uint64_t uflw_err_rs_dfifo        : 1;	/* 12:12 */
        uint64_t uflw_err_rq_ofifo        : 1;	/* 13:13 */
        uint64_t uflw_err_rs_ofifo        : 1;	/* 14:14 */
        uint64_t uflw_err_rq_rfifo        : 1;	/* 15:15 */
        uint64_t uflw_err_rs_rfifo        : 1;	/* 16:16 */
        uint64_t undefine_20_17           : 4;	/* undefined */
        uint64_t pbe_rfifo_rq             : 1;	/* 17:17 */
        uint64_t pbe_rfifo_rs             : 1;	/* 18:18 */
        uint64_t pbe_vc_table             : 1;	/* 19:19 */
        uint64_t route_error              : 1;	/* 20:20 */
        uint64_t sbe_rtable               : 1;	/* 21:21 */
        uint64_t mbe_rtable               : 1;	/* 22:22 */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t prf_cnt_rollovr_err      : 1;	/* 23:23 */
        uint64_t link_alive_channel_err   : 1;	/* 24:24 */
        uint64_t link_alive_timeout_err   : 1;	/* 25:25 */
        uint64_t subswitch_err            : 8;	/* 33:26 */
        uint64_t colbuf_oflw_uflw_err_input0: 1;	/* 34:34 */
        uint64_t colbuf_oflw_uflw_err_input1: 1;	/* 35:35 */
        uint64_t colbuf_oflw_uflw_err_input2: 1;	/* 36:36 */
        uint64_t colbuf_oflw_uflw_err_input3: 1;	/* 37:37 */
        uint64_t colbuf_oflw_uflw_err_input4: 1;	/* 38:38 */
        uint64_t colbuf_oflw_uflw_err_input5: 1;	/* 39:39 */
        uint64_t colbuf_max_pkt_err       : 1;	/* 40:40 */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_first_flg_desc_t;

typedef union ar_rtr_pt_inq_dbg_errinj_rtable_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 2;	/* Mode 0: Inject error once */
        uint64_t triggered                : 1;	/*  */
        uint64_t ramselect                : 5;	/* This field identifies the memory in which errors will be injected */
        uint64_t undefine_15_9            : 7;	/* undefined */
        uint64_t checkbyte                : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for the memory address read to be inverted */
        uint64_t undefine_31_24           : 8;	/* undefined */
        uint64_t address                  : 8;	/* This field indicates the address within the memory for which error injection is to occur */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_dbg_errinj_rtable_desc_t;

typedef union ar_rtr_pt_inq_err_info_rtable_desc {
    struct {
        // QW0
        uint64_t undefine_1_0             : 2;	/* undefined */
        uint64_t mmr_detected_sbe         : 1;	/* A MMR read causing the first SBE Error */
        uint64_t mmr_detected_mbe         : 1;	/* A MMR read causing the first MBE Error */
        uint64_t sbe_syndrome             : 8;	/* Syndrome of the first SBE Error */
        uint64_t sbe_address              : 8;	/* Address of the first SBE Error */
        uint64_t sbe_ram_num              : 3;	/* RAM number where the first SBE Error occurred */
        uint64_t mbe_syndrome             : 8;	/* Syndrome of the first MBE Error */
        uint64_t mbe_address              : 8;	/* Address of the first MBE Error */
        uint64_t mbe_ram_num              : 3;	/* RAM number where the first MBE Error occurred */
        uint64_t undefine_63_42           :22;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_info_rtable_desc_t;

typedef union ar_rtr_pt_inq_err_info_cnt_sbe_rtable_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* SBE count when reading the routing tables */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_info_cnt_sbe_rtable_desc_t;

typedef union ar_rtr_pt_inq_err_info_cnt_mbe_rtable_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* MBE count when reading the routing tables */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_info_cnt_mbe_rtable_desc_t;

typedef union ar_rtr_pt_inq_err_info_routing_desc {
    struct {
        // QW0
        uint64_t route_head               :48;	/* Routing header [47:0] when a routing error has occurred */
        uint64_t route_table              : 3;	/* The routing table that was selected when the error is due to the chosen entry being invalid */
        uint64_t rtable_address           : 8;	/* The address of the routing table that was selected when the error is due to the chosen entry being invalid */
        uint64_t route_err_type           : 5;	/* The four types of routing errors are: */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_info_routing_desc_t;

typedef union ar_rtr_pt_inq_dbg_errinj_req_rsp_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 1;	/* Mode 0: Inject error once */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/*  */
        uint64_t count                    : 6;	/* This filed is used to determine which flit in the packet the error will be injected on */
        uint64_t path                     : 1;	/* This field identifies the path in which errors will be injected */
        uint64_t undefine_15_11           : 5;	/* undefined */
        uint64_t checkbyte                : 7;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome to be inverted */
        uint64_t undefine_63_23           :41;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_dbg_errinj_req_rsp_desc_t;

typedef union ar_rtr_pt_inq_err_info_cnt_sbe_req_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* SBE count when reading the routing tables */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_info_cnt_sbe_req_desc_t;

typedef union ar_rtr_pt_inq_err_info_cnt_mbe_req_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* MBE count when reading the routing tables */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_info_cnt_mbe_req_desc_t;

typedef union ar_rtr_pt_inq_err_info_cnt_sbe_rsp_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* SBE count when reading the routing tables */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_info_cnt_sbe_rsp_desc_t;

typedef union ar_rtr_pt_inq_err_info_cnt_mbe_rsp_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* MBE count when reading the routing tables */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_err_info_cnt_mbe_rsp_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_flit_vc0_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC0 */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_flit_vc0_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_flit_vc4_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC4 */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_flit_vc4_desc_t;

typedef union ar_rtr_pt_inq_prf_flit0_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* Compare pattern with the flit specified by FLIT_PTR */
        uint64_t flit_ptr                 : 5;	/* Pointer indicating which flit in the packet should be compared against this signature */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_PT_NQ_INCOMING_PKT_VC0_FILTER_FLIT0_CNT counts on the number of matching flits based on this setup register */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit0_filtering_setup_desc_t;

typedef union ar_rtr_pt_inq_prf_flit0_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the patter compare */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit0_filtering_mask_desc_t;

typedef union ar_rtr_pt_inq_prf_flit1_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* Compare pattern with the flit specified by FLIT_PTR */
        uint64_t flit_ptr                 : 5;	/* Pointer indicating which flit in the packet should be compared against this signature */
        uint64_t enable                   : 1;	/* Enable this compare */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit1_filtering_setup_desc_t;

typedef union ar_rtr_pt_inq_prf_flit1_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the patter compare */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit1_filtering_mask_desc_t;

typedef union ar_rtr_pt_inq_prf_flit2_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* Compare pattern with the flit specified by FLIT_PTR */
        uint64_t flit_ptr                 : 5;	/* Pointer indicating which flit in the packet should be compared against this signature */
        uint64_t enable                   : 1;	/* Enable this compare */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit2_filtering_setup_desc_t;

typedef union ar_rtr_pt_inq_prf_flit2_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit2_filtering_mask_desc_t;

typedef union ar_rtr_pt_inq_prf_flit3_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* Compare pattern with the flit specified by FLIT_PTR */
        uint64_t flit_ptr                 : 5;	/* Pointer indicating which flit in the packet should be compared against this signature */
        uint64_t enable                   : 1;	/* Enable this compare */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit3_filtering_setup_desc_t;

typedef union ar_rtr_pt_inq_prf_flit3_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the patter compare */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit3_filtering_mask_desc_t;

typedef union ar_rtr_pt_inq_prf_flit4_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* Compare pattern with the flit specified by FLIT_PTR */
        uint64_t flit_ptr                 : 5;	/* Pointer indicating which flit in the packet should be compared against this signature */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_PT_INQ_INCOMING_PKT_VC4_FILTER_FLIT4_CNT counts on the number of matching flits based on this setup register */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit4_filtering_setup_desc_t;

typedef union ar_rtr_pt_inq_prf_flit4_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during pattern compare */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit4_filtering_mask_desc_t;

typedef union ar_rtr_pt_inq_prf_flit5_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* Compare pattern with the flit specified by FLIT_PTR */
        uint64_t flit_ptr                 : 5;	/* Pointer indicating which flit in the packet should be compared against this signature */
        uint64_t enable                   : 1;	/* Enable this compare */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit5_filtering_setup_desc_t;

typedef union ar_rtr_pt_inq_prf_flit5_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit5_filtering_mask_desc_t;

typedef union ar_rtr_pt_inq_prf_flit6_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* Compare pattern with the flit specified by FLIT_PTR */
        uint64_t flit_ptr                 : 5;	/* Pointer indicating which flit in the packet should be compared against this signature */
        uint64_t enable                   : 1;	/* Enable this compare */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit6_filtering_setup_desc_t;

typedef union ar_rtr_pt_inq_prf_flit6_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the patter compare */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit6_filtering_mask_desc_t;

typedef union ar_rtr_pt_inq_prf_flit7_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* Compare pattern with the flit specified by FLIT_PTR */
        uint64_t flit_ptr                 : 5;	/* Pointer indicating which flit in the packet should be compared against this signature */
        uint64_t enable                   : 1;	/* Enable this compare */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit7_filtering_setup_desc_t;

typedef union ar_rtr_pt_inq_prf_flit7_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the patter compare */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_flit7_filtering_mask_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_pkt_vc0_filter_flit0_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It either counts the number of incoming packets for VC0 or it counts the incoming flits that match A_RTR_PT_INQ_PRF_FLIT0_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_pkt_vc0_filter_flit0_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_pkt_vc1_filter_flit1_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It either counts the number of incoming packets for VC1 or it counts the incoming flits that match A_RTR_PT_INQ_PRF_FLIT1_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_pkt_vc1_filter_flit1_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_pkt_vc2_filter_flit2_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It either counts the number of incoming packets for VC2 or it counts the incoming flits that match A_RTR_PT_INQ_PRF_FLIT2_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_pkt_vc2_filter_flit2_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_pkt_vc3_filter_flit3_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It either counts the number of incoming packets for VC3 or it counts the incoming flits that match A_RTR_PT_INQ_PRF_FLIT3_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_pkt_vc3_filter_flit3_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_pkt_vc4_filter_flit4_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It either counts the number of incoming packets for VC4 or it counts the incoming flits that match A_RTR_PT_INQ_PRF_FLIT4_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_pkt_vc4_filter_flit4_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_pkt_vc5_filter_flit5_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It either counts the number of incoming packets for VC5 or it counts the incoming flits that match A_RTR_PT_INQ_PRF_FLIT5_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_pkt_vc5_filter_flit5_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_pkt_vc6_filter_flit6_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It either counts the number of incoming packets for VC6 or it counts the incoming flits that match A_RTR_PT_INQ_PRF_FLIT6_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_pkt_vc6_filter_flit6_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_incoming_pkt_vc7_filter_flit7_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It either counts the number of incoming packets for VC7 or it counts the incoming flits that match A_RTR_PT_INQ_PRF_FLIT7_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_incoming_pkt_vc7_filter_flit7_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_match_flit_3_to_0_filtering_cnt_desc {
    struct {
        // QW0
        uint64_t flit_cnt                 ;	/* Increments when an incoming flit matches flit filtering setup registers 3 to 0 */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_match_flit_3_to_0_filtering_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_match_flit_7_to_4_filtering_cnt_desc {
    struct {
        // QW0
        uint64_t flit_cnt                 ;	/* Increments when an incoming flit matches flit filtering setup registers 7to 4 */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_match_flit_7_to_4_filtering_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_req_rowbus_stall_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Counts the occurrences when a row bus is not being used even when valid flits are sitting at the front of the OFIFOs but cannot be sent to the row buffers due to resource conflict */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_req_rowbus_stall_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_rsp_rowbus_stall_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Counts the occurrences when a row bus is not being used even when valid flits are sitting at the front of the OFIFOs but cannot be sent to the row buffers due to resource conflict */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_rsp_rowbus_stall_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_rowbus_2x_usage_cnt_desc {
    struct {
        // QW0
        uint64_t rowbus_2x_usage_cnt      ;	/* Counts the occurrences where both paths are used simultaneously for delivering flits to the row buffers */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_rowbus_2x_usage_cnt_desc_t;

typedef union ar_rtr_pt_inq_prf_pkt_to_dead_link_cnt_desc {
    struct {
        // QW0
        uint64_t pkt_to_dead_link_cnt     ;	/* Counts the occurrences where packets are being routed toward a dead link */
    };
    uint64_t qwords[1];
} ar_rtr_pt_inq_prf_pkt_to_dead_link_cnt_desc_t;

typedef union ar_rtr_pt_subswitch_cfg_colbuf_crdts_desc {
    struct {
        // QW0
        uint64_t column_number            : 3;	/* Column number to be read or written to */
        uint64_t vc_number                : 3;	/* VC number used when writing to max_flit_credits */
        uint64_t wr_max_flit_credits      : 6;	/* Credit count to write to max_flit_credits */
        uint64_t wr_max_flit_credits_en   : 1;	/* Write 0x1 to here to write WR_MAX_FLIT_CREDITS to VC pointed to by VC_NUMBER within column pointed to by COLUMN_NUMBER */
        uint64_t rd_crdt_used_cnt_vc0     : 6;	/* flit_credits_used for VC0 of the column specified in COLUMN_NUMBER */
        uint64_t rd_crdt_used_cnt_vc1     : 6;	/* flit_credits_used for VC1 of the column specified in COLUMN_NUMBER */
        uint64_t rd_crdt_used_cnt_vc2     : 6;	/* flit_credits_used for VC2 of the column specified in COLUMN_NUMBER */
        uint64_t rd_crdt_used_cnt_vc3     : 6;	/* flit_credits_used for VC3 of the column specified in COLUMN_NUMBER */
        uint64_t rd_crdt_used_cnt_vc4     : 6;	/* flit_credits_used for VC4 of the column specified in COLUMN_NUMBER */
        uint64_t rd_crdt_used_cnt_vc5     : 6;	/* flit_credits_used for VC5 of the column specified in COLUMN_NUMBER */
        uint64_t rd_crdt_used_cnt_vc6     : 6;	/* flit_credits_used for VC6 of the column specified in COLUMN_NUMBER */
        uint64_t rd_crdt_used_cnt_vc7     : 6;	/* flit_credits_used for VC7 of the column specified in COLUMN_NUMBER */
        uint64_t undefine_63_61           : 3;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_subswitch_cfg_colbuf_crdts_desc_t;

typedef union ar_rtr_pt_subswitch_err_info_desc {
    struct {
        // QW0
        uint64_t vc_sect0                 : 3;	/* Virtual Channel within input/output that reported the error */
        uint64_t err_type_sect0           : 4;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT0 */
        uint64_t err_multiple_sect0       : 1;	/* Another error happened on this input/output after the first one was reported */
        uint64_t vc_sect1                 : 3;	/* Virtual Channel within input/output that reported the error */
        uint64_t err_type_sect1           : 4;	/* Error Type */
        uint64_t err_multiple_sect1       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT1 */
        uint64_t vc_sect2                 : 3;	/* Virtual Channel within input/output that reported the error */
        uint64_t err_type_sect2           : 4;	/* Error Type */
        uint64_t err_multiple_sect2       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT2 */
        uint64_t vc_sect3                 : 3;	/* Virtual Channel within input/output that reported the error */
        uint64_t err_type_sect3           : 4;	/* Error Type */
        uint64_t err_multiple_sect3       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT3 */
        uint64_t vc_sect4                 : 3;	/* Virtual Channel within input/output that reported the error */
        uint64_t err_type_sect4           : 4;	/* Error Type */
        uint64_t err_multiple_sect4       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT4 */
        uint64_t vc_sect5                 : 3;	/* Virtual Channel within input/output that reported the error */
        uint64_t err_type_sect5           : 4;	/* Error Type */
        uint64_t err_multiple_sect5       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT5 */
        uint64_t vc_sect6                 : 3;	/* Virtual Channel within input that reported the error */
        uint64_t err_type_sect6           : 4;	/* Error Type */
        uint64_t err_multiple_sect6       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT6 */
        uint64_t vc_sect7                 : 3;	/* Virtual Channel within input that reported the error */
        uint64_t err_type_sect7           : 4;	/* Error Type */
        uint64_t err_multiple_sect7       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT7 */
    };
    uint64_t qwords[1];
} ar_rtr_pt_subswitch_err_info_desc_t;

typedef union ar_rtr_pt_subswitch_err_mask_desc {
    struct {
        // QW0
        uint64_t mask_flit_route_in_parity_err: 1;	/* Mask all flit_route_in_parity_errors */
        uint64_t mask_flit_route_head_parity_err: 1;	/* Mask all flit_route_head_parity_errors */
        uint64_t mask_invalid_route_err   : 1;	/* Mask all invalid_route_errors */
        uint64_t mask_empty_route_err     : 1;	/* Mask all empty_route_errors */
        uint64_t mask_bad_tvc_err         : 1;	/* Mask all bad_tvc_errors */
        uint64_t mask_bad_tvc_pt_err      : 1;	/* Mask all bad_tvc_pt_errors */
        uint64_t mask_buffer_oflow        : 1;	/* Mask all buffer_overflow errors */
        uint64_t mask_buffer_uflow        : 1;	/* Mask all buffer_underflow errors */
        uint64_t mask_credit_uflow        : 1;	/* Mask all credit_underflow errors */
        uint64_t undefine_63_9            :55;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_subswitch_err_mask_desc_t;

typedef union ar_rtr_pt_colbuf_cfg_crdts_channel_desc {
    struct {
        // QW0
        uint64_t req_crdt_limit           : 7;	/* Request virtual channel limit */
        uint64_t undefine_7_7             : 1;	/* undefined */
        uint64_t rsp_crdt_limit           : 7;	/* Response vitual channel limit */
        uint64_t undefine_31_15           :17;	/* undefined */
        uint64_t req_max_pkt_length       : 6;	/* number of flits associated with the largest packet type */
        uint64_t undefine_39_38           : 2;	/* undefined */
        uint64_t rsp_max_pkt_length       : 6;	/* number of flits associated with the largest packet type */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_colbuf_cfg_crdts_channel_desc_t;

typedef union ar_rtr_pt_colbuf_err_info_desc {
    struct {
        // QW0
        uint64_t input0_vc_ptr            : 3;	/* Virtual channel pointer for input0 */
        uint64_t overflow_input0          : 1;	/* overflow condition on input fifo 0 */
        uint64_t underflow_input0         : 1;	/* underflow condition on input fifo 0 */
        uint64_t input1_vc_ptr            : 3;	/* Virtual channel pointer for input1 */
        uint64_t overflow_input1          : 1;	/* overflow condition on input fifo 1 */
        uint64_t underflow_input1         : 1;	/* underflow condition on input fifo 1 */
        uint64_t input2_vc_ptr            : 3;	/* Virtual channel pointer for input2 */
        uint64_t overflow_input2          : 1;	/* overflow condition on input fifo 2 */
        uint64_t underflow_input2         : 1;	/* underflow condition on input fifo 2 */
        uint64_t input3_vc_ptr            : 3;	/* Virtual channel pointer for input3 */
        uint64_t overflow_input3          : 1;	/* overflow condition on input fifo 3 */
        uint64_t underflow_input3         : 1;	/* underflow condition on input fifo 3 */
        uint64_t input4_vc_ptr            : 3;	/* Virtual channel pointer for input4 */
        uint64_t overflow_input4          : 1;	/* overflow condition on input fifo 4 */
        uint64_t underflow_input4         : 1;	/* underflow condition on input fifo 4 */
        uint64_t input5_vc_ptr            : 3;	/* Virtual channel pointer for input5 */
        uint64_t overflow_input5          : 1;	/* overflow condition on input fifo 5 */
        uint64_t underflow_input5         : 1;	/* underflow condition on input fifo 5 */
        uint64_t super_packet_flit_cnt    : 6;	/* This reports the number of flits that triggered COLBUF_MAX_PKT_ERR */
        uint64_t super_packet_req         : 1;	/* Packet length violation on the request virtual channel */
        uint64_t super_packet_rsp         : 1;	/* Packet length violation on the response virtual channel */
        uint64_t undefine_63_38           :26;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_pt_colbuf_err_info_desc_t;

typedef union ar_rtr_pt_colbuf_perf_stall_rq_desc {
    struct {
        // QW0
        uint64_t col_buf_perf_stall_rq    ;	/* The number of Lclks a valid request is stalled because of lack of credits */
    };
    uint64_t qwords[1];
} ar_rtr_pt_colbuf_perf_stall_rq_desc_t;

typedef union ar_rtr_pt_colbuf_perf_stall_rs_desc {
    struct {
        // QW0
        uint64_t col_buf_perf_stall_rs    ;	/* The number of Lclks a valid request is stalled because of lack of credits */
    };
    uint64_t qwords[1];
} ar_rtr_pt_colbuf_perf_stall_rs_desc_t;


#endif
