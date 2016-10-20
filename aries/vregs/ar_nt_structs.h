/******************************************************************************
 * COPYRIGHT CRAY INC. ar_nt_structs.h
 * FILE: ar_nt_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:04 2014
 ******************************************************************************/

#ifndef _AR_NT_STRUCTS_H_
#define _AR_NT_STRUCTS_H_

/*
 *  ARIES NT STRUCTURES
 */
typedef union ar_rtr_inq_cfg_degrade_diag_desc {
    struct {
        // QW0
        uint64_t err_inj_enable           : 1;	/* Enable Error Injection to DAMQ access */
        uint64_t err_inj_mode             : 3;	/* Mode 0: Inject error once to the next header flit */
        uint64_t triggered                : 1;	/*  */
        uint64_t checkbyte                : 7;	/*  */
        uint64_t inq_error_pause_damq     : 1;	/* Pauses the DAMQ if any type of catastrophic parity or linked list error is encountered */
        uint64_t static_link_list_mode    : 1;	/* This sets the DAMQ logic into static linked list mode */
        uint64_t reset_inq                : 1;	/* One-shot trigger that resets all DFIFO, OFIFO, and RFIFO counters */
        uint64_t stop_damq_accept         : 1;	/* Stop both the DAMQ and the bypass path from accepting flits */
        uint64_t stop_damq_send           : 1;	/* Stop DAMQ from sending flits */
        uint64_t first_flit_release_damq  : 1;	/* This must be used in conjunction with STOP_DAMQ_SEND */
        uint64_t single_step_dfifo_absorb : 1;	/* One-shot trigger that allows one flit to be pulled out and dropped from the DFIFO for the VC_UNDER_TEST when SINGLE_STEP_DFIFO_MODE is set active */
        uint64_t single_step_dfifo_a_flit : 1;	/* One-shot trigger that allows one flit to go from the DFIFO to the RFIFO and OFIFO for the VC_UNDER_TEST when SINGLE_STEP_DFIFO_MODE is set active */
        uint64_t single_step_dfifo_mode   : 1;	/* This mode halts all flits going from the DFIFOs to the RFIFOs and OFIFOs for VC_UNDER_TEST */
        uint64_t vc_under_test            : 3;	/* Set up a diagnostic test for one of the eight VCs, where only one VC can be tested at a time */
        uint64_t any_vc_under_test        : 1;	/* Set up a diagnostic test for any VC (only applies to error injection to the DAMQ) */
        uint64_t disable_bypass           : 1;	/* Disable bypass path */
        uint64_t enable_vc_signature      : 1;	/* Turn-on VC signature ECC stamping and checking logic */
        uint64_t link_alive_disc_ch_cnt   :12;	/* Link alive discovery counter for clearing and signature recognition */
        uint64_t disable_link_alive_discovery: 1;	/* Disable link alive discovery */
        uint64_t start_link_alive_discovery: 1;	/* One-shot trigger that kicks start a link alive discovery sequence if DISABLE_LINK_ALIVE_DISCOVERY is not set */
        uint64_t colbuf_gc_mode           : 1;	/* Pass on global clock mode enable */
        uint64_t colbuf_crdt_reset        : 1;	/* One-shot trigger that resets the DAMQ block usage credit counters inside the column buffer */
        uint64_t lmon_sel                 : 2;	/* Select for putting logic monitor data on Logic Monitor bus: */
        uint64_t lmon_en                  : 1;	/* Logic monitor enable */
        uint64_t lmon_inq_sel             : 4;	/* Logic monitor mux select for InQ data points */
        uint64_t lmon_colbuf_sel          : 4;	/* Logic monitor mux select for Column Buffers */
        uint64_t lmon_subswitch_sel       : 9;	/* Logic monitor mux select for Subswitch */
        uint64_t undefine_63_63           : 1;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_degrade_diag_desc_t;

typedef union ar_rtr_inq_cfg_fifo_rowbuf_crdt_limit_desc {
    struct {
        // QW0
        uint64_t rowbuf_vc0_crdt_limit    : 4;	/* row buffer credit limit for VC0 */
        uint64_t rowbuf_vc1_crdt_limit    : 4;	/* row buffer credit limit for VC1 */
        uint64_t rowbuf_vc2_crdt_limit    : 4;	/* row buffer credit limit for VC2 */
        uint64_t rowbuf_vc3_crdt_limit    : 4;	/* row buffer credit limit for VC3 */
        uint64_t rowbuf_vc4_crdt_limit    : 4;	/* row buffer credit limit for VC4 */
        uint64_t rowbuf_vc5_crdt_limit    : 4;	/* row buffer credit limit for VC5 */
        uint64_t rowbuf_vc6_crdt_limit    : 4;	/* row buffer credit limit for VC6 */
        uint64_t rowbuf_vc7_crdt_limit    : 4;	/* row buffer credit limit for VC7 */
        uint64_t rfifo_crdt_limit         : 4;	/* Credit limit for the RFIFOs */
        uint64_t ofifo_crdt_limit         : 4;	/* Credit limit for the OFIFOs */
        uint64_t dfifo_crdt_limit         : 3;	/* Credit limit for the DFIFOs */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_fifo_rowbuf_crdt_limit_desc_t;

typedef union ar_rtr_inq_cfg_fifo_rowbuf_crdts_desc {
    struct {
        // QW0
        uint64_t rowbuf_vc0_crdts         : 4;	/* row buffer credits of column 0 for VC_UNDER_TEST */
        uint64_t rowbuf_vc1_crdts         : 4;	/* row buffer credits of column 1 for VC_UNDER_TEST */
        uint64_t rowbuf_vc2_crdts         : 4;	/* row buffer credits of column 2 for VC_UNDER_TEST */
        uint64_t rowbuf_vc3_crdts         : 4;	/* row buffer credits of column 3 for VC_UNDER_TEST */
        uint64_t rowbuf_vc4_crdts         : 4;	/* row buffer credits of column 4 for VC_UNDER_TEST */
        uint64_t rowbuf_vc5_crdts         : 4;	/* row buffer credits of column 5 for VC_UNDER_TEST */
        uint64_t rowbuf_vc6_crdts         : 4;	/* row buffer credits of column 6 for VC_UNDER_TEST */
        uint64_t rowbuf_vc7_crdts         : 4;	/* row buffer credits of column 7 for VC_UNDER_TEST */
        uint64_t rfifo_crdts              : 4;	/* FIFO credits of the RFIFO for VC_UNDER_TEST */
        uint64_t ofifo_crdts              : 4;	/* FIFO credits of the OFIFO for VC_UNDER_TEST */
        uint64_t dfifo_crdts              : 3;	/* FIFO credits of the DFIFO for VC_UNDER_TEST */
        uint64_t undefine_63_43           :21;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_fifo_rowbuf_crdts_desc_t;

typedef union ar_rtr_inq_cfg_damq_vc04_desc {
    struct {
        // QW0
        uint64_t head_blk_ptr_vc0         : 7;	/* Head block pointer for VC0 */
        uint64_t head_blk_ptr_vc4         : 7;	/* Head block pointer for VC4 */
        uint64_t tail_blk_ptr_vc0         : 7;	/* Tail block pointer for VC0 */
        uint64_t tail_blk_ptr_vc4         : 7;	/* Tail block pointer for VC4 */
        uint64_t valid_blk_cnt_vc0        : 8;	/* Valid block count for VC0 */
        uint64_t valid_blk_cnt_vc4        : 8;	/* Valid block count for VC4 */
        uint64_t head_flit_idx_vc0        : 3;	/* Head flit index for VC0 */
        uint64_t head_flit_idx_vc4        : 3;	/* Head flit index for VC4 */
        uint64_t tail_flit_idx_vc0        : 3;	/* Tail flit index for VC0 */
        uint64_t tail_flit_idx_vc4        : 3;	/* Tail flit index for VC4 */
        uint64_t head_blk_ptr_par_vc0     : 1;	/* Odd parity for the VC0 head block pointer */
        uint64_t head_blk_ptr_par_vc4     : 1;	/* Odd parity for the VC4 head block pointer */
        uint64_t tail_blk_ptr_par_vc0     : 1;	/* Odd parity for the VC0 tail block pointer */
        uint64_t tail_blk_ptr_par_vc4     : 1;	/* Odd parity for the VC4 tail block pointer */
        uint64_t valid_blk_cnt_par_vc0    : 1;	/* Odd parity for the VC0 valid block counter */
        uint64_t valid_blk_cnt_par_vc4    : 1;	/* Odd parity for the VC4 valid block counter */
        uint64_t flit_idx_par_vc0         : 1;	/* Odd parity for the VC0 head and tail indexes */
        uint64_t flit_idx_par_vc4         : 1;	/* Odd parity for the VC4 head and tail indexes */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_damq_vc04_desc_t;

typedef union ar_rtr_inq_cfg_damq_vc15_desc {
    struct {
        // QW0
        uint64_t head_blk_ptr_vc1         : 7;	/* Head block pointer for VC1 */
        uint64_t head_blk_ptr_vc5         : 7;	/* Head block pointer for VC5 */
        uint64_t tail_blk_ptr_vc1         : 7;	/* Tail block pointer for VC1 */
        uint64_t tail_blk_ptr_vc5         : 7;	/* Tail block pointer for VC5 */
        uint64_t valid_blk_cnt_vc1        : 8;	/* Valid block count for VC1 */
        uint64_t valid_blk_cnt_vc5        : 8;	/* Valid block count for VC5 */
        uint64_t head_flit_idx_vc1        : 3;	/* Head flit index for VC1 */
        uint64_t head_flit_idx_vc5        : 3;	/* Head flit index for VC5 */
        uint64_t tail_flit_idx_vc1        : 3;	/* Tail flit index for VC1 */
        uint64_t tail_flit_idx_vc5        : 3;	/* Tail flit index for VC5 */
        uint64_t head_blk_ptr_par_vc1     : 1;	/* Odd parity for the VC1 head block pointer */
        uint64_t head_blk_ptr_par_vc5     : 1;	/* Odd parity for the VC5 head block pointer */
        uint64_t tail_blk_ptr_par_vc1     : 1;	/* Odd parity for the VC1 tail block pointer */
        uint64_t tail_blk_ptr_par_vc5     : 1;	/* Odd parity for the VC5 tail block pointer */
        uint64_t valid_blk_cnt_par_vc1    : 1;	/* Odd parity for the VC1 valid block counter */
        uint64_t valid_blk_cnt_par_vc5    : 1;	/* Odd parity for the VC5 valid block counter */
        uint64_t flit_idx_par_vc1         : 1;	/* Odd parity for the VC1 head and tail indexes */
        uint64_t flit_idx_par_vc5         : 1;	/* Odd parity for the VC5 head and tail indexes */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_damq_vc15_desc_t;

typedef union ar_rtr_inq_cfg_damq_vc26_desc {
    struct {
        // QW0
        uint64_t head_blk_ptr_vc2         : 7;	/* Head block pointer for VC2 */
        uint64_t head_blk_ptr_vc6         : 7;	/* Head block pointer for VC6 */
        uint64_t tail_blk_ptr_vc2         : 7;	/* Tail block pointer for VC2 */
        uint64_t tail_blk_ptr_vc6         : 7;	/* Tail block pointer for VC6 */
        uint64_t valid_blk_cnt_vc2        : 8;	/* Valid block count for VC2 */
        uint64_t valid_blk_cnt_vc6        : 8;	/* Valid block count for VC6 */
        uint64_t head_flit_idx_vc2        : 3;	/* Head flit index for VC2 */
        uint64_t head_flit_idx_vc6        : 3;	/* Head flit index for VC6 */
        uint64_t tail_flit_idx_vc2        : 3;	/* Tail flit index for VC2 */
        uint64_t tail_flit_idx_vc6        : 3;	/* Tail flit index for VC6 */
        uint64_t head_blk_ptr_par_vc2     : 1;	/* Odd parity for the VC2 head block pointer */
        uint64_t head_blk_ptr_par_vc6     : 1;	/* Odd parity for the VC6 head block pointer */
        uint64_t tail_blk_ptr_par_vc2     : 1;	/* Odd parity for the VC2 tail block pointer */
        uint64_t tail_blk_ptr_par_vc6     : 1;	/* Odd parity for the VC6 tail block pointer */
        uint64_t valid_blk_cnt_par_vc2    : 1;	/* Odd parity for the VC2 valid block counter */
        uint64_t valid_blk_cnt_par_vc6    : 1;	/* Odd parity for the VC6 valid block counter */
        uint64_t flit_idx_par_vc2         : 1;	/* Odd parity for the VC2 head and tail indexes */
        uint64_t flit_idx_par_vc6         : 1;	/* Odd parity for the VC6 head and tail indexes */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_damq_vc26_desc_t;

typedef union ar_rtr_inq_cfg_damq_vc37_desc {
    struct {
        // QW0
        uint64_t head_blk_ptr_vc3         : 7;	/* Head block pointer for VC3 */
        uint64_t head_blk_ptr_vc7         : 7;	/* Head block pointer for VC7 */
        uint64_t tail_blk_ptr_vc3         : 7;	/* Tail block pointer for VC3 */
        uint64_t tail_blk_ptr_vc7         : 7;	/* Tail block pointer for VC7 */
        uint64_t valid_blk_cnt_vc3        : 8;	/* Valid block count for VC3 */
        uint64_t valid_blk_cnt_vc7        : 8;	/* Valid block count for VC7 */
        uint64_t head_flit_idx_vc3        : 3;	/* Head flit index for VC3 */
        uint64_t head_flit_idx_vc7        : 3;	/* Head flit index for VC7 */
        uint64_t tail_flit_idx_vc3        : 3;	/* Tail flit index for VC3 */
        uint64_t tail_flit_idx_vc7        : 3;	/* Tail flit index for VC7 */
        uint64_t head_blk_ptr_par_vc3     : 1;	/* Odd parity for the VC3 head block pointer */
        uint64_t head_blk_ptr_par_vc7     : 1;	/* Odd parity for the VC7 head block pointer */
        uint64_t tail_blk_ptr_par_vc3     : 1;	/* Odd parity for the VC3 tail block pointer */
        uint64_t tail_blk_ptr_par_vc7     : 1;	/* Odd parity for the VC7 tail block pointer */
        uint64_t valid_blk_cnt_par_vc3    : 1;	/* Odd parity for the VC3 valid block counter */
        uint64_t valid_blk_cnt_par_vc7    : 1;	/* Odd parity for the VC7 valid block counter */
        uint64_t flit_idx_par_vc3         : 1;	/* Odd parity for the VC3 head and tail indexes */
        uint64_t flit_idx_par_vc7         : 1;	/* Odd parity for the VC7 head and tail indexes */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_damq_vc37_desc_t;

typedef union ar_rtr_inq_cfg_damq_free_desc {
    struct {
        // QW0
        uint64_t head_blk_ptr_free        : 7;	/* Head block pointer for the free-list */
        uint64_t tail_blk_ptr_free        : 7;	/* Tail block pointer for the free-list */
        uint64_t valid_blk_cnt_free       : 8;	/* Valid block count for the free-list */
        uint64_t head_blk_ptr_par_free    : 1;	/* Odd parity for the free-list head block pointer */
        uint64_t tail_blk_ptr_par_free    : 1;	/* Odd parity for the free-list tail block pointer */
        uint64_t valid_blk_cnt_par_free   : 1;	/* Odd parity for the free-list valid block counter */
        uint64_t undefine_63_25           :39;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_damq_free_desc_t;

typedef union ar_rtr_inq_cfg_damq_next_desc {
    struct {
        // QW0
        uint64_t nxt_blk_ptr_addr         : 7;	/* Block address of the next-block pointer being access */
        uint64_t nxt_blk_ptr_data         : 7;	/* During write mode, the content of this register is written to the block-pointer specified by NXT_BLK_PTR_ADDR */
        uint64_t nxt_blk_ptr_par          : 1;	/* Odd parity protection for NXT_BLK_PTR_DATA */
        uint64_t nxt_blk_ptr_rd_wr        : 1;	/* Read/write mode for the next-block pointer access */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_damq_next_desc_t;

typedef union ar_rtr_inq_cfg_damq_blk_in_used0_desc {
    struct {
        // QW0
        uint64_t in_used                  ;	/* Each bit represent whether block 63 to 0 is allocated */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_damq_blk_in_used0_desc_t;

typedef union ar_rtr_inq_cfg_damq_blk_in_used1_desc {
    struct {
        // QW0
        uint64_t in_used                  ;	/* Each bit represent whether block 127 to 64 is allocated */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_damq_blk_in_used1_desc_t;

typedef union ar_rtr_inq_cfg_dfifo_data_desc {
    struct {
        // QW0
        uint64_t single_step_dfifo_data   :56;	/* Data at the front of the DFIFOs selected by VC_UNDER_TEST during the single step mode */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_dfifo_data_desc_t;

typedef union ar_rtr_inq_cfg_route_pipe_desc {
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
        uint64_t route_err_type_enable    : 5;	/* This enables logic testing of the five different route error types */
        uint64_t read_all_rtables         : 1;	/* By default, only the route tables that are needed are being accessed to conserve power */
        uint64_t reset_lfsr               : 1;	/* HSS reset the LFSR random number generator */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_route_pipe_desc_t;

typedef union ar_rtr_inq_cfg_vc_table_desc {
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
} ar_rtr_inq_cfg_vc_table_desc_t;

typedef union ar_rtr_inq_cfg_link_alive_bits_desc {
    struct {
        // QW0
        uint64_t link_alive               :48;	/* Link alive status of all 48 Tiles */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_link_alive_bits_desc_t;

typedef union ar_rtr_inq_cfg_congest_ctrl_desc {
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
} ar_rtr_inq_cfg_congest_ctrl_desc_t;

typedef union ar_rtr_inq_cfg_damq_data_desc {
    struct {
        // QW0
        uint64_t ramdata                  :56;	/* Flit data */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_damq_data_desc_t;

typedef union ar_rtr_inq_cfg_grn_nm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                :55;	/* The port list breaks down to the following fields: */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_grn_nm_rt_tab_desc_t;

typedef union ar_rtr_inq_cfg_blk_nm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                :55;	/* The port list breaks down to the following fields: */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_blk_nm_rt_tab_desc_t;

typedef union ar_rtr_inq_cfg_blu_nm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                :55;	/* The port list breaks down to the following fields: */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_blu_nm_rt_tab_desc_t;

typedef union ar_rtr_inq_cfg_locm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                :59;	/* The port list breaks down to the following fields: */
        uint64_t undefine_63_59           : 5;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_locm_rt_tab_desc_t;

typedef union ar_rtr_inq_cfg_glbm_rt_tab_desc {
    struct {
        // QW0
        uint64_t port_list                ;	/* The RAM and the port lists that it contains is actually 85 bits wide */
    };
    uint64_t qwords[1];
} ar_rtr_inq_cfg_glbm_rt_tab_desc_t;

typedef union ar_rtr_inq_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diag purposes */
        uint64_t oflw_err_damq            : 1;	/* Overflow error in one of the DAMQ's linked lists */
        uint64_t uflw_err_damq            : 1;	/* Underflow error in one of the DAMQ's linked lists */
        uint64_t sbe_damq                 : 1;	/* SBE on payload or header flit coming out of the DAMQ */
        uint64_t mbe_damq                 : 1;	/* MBE on payload or header flit coming out of the DAMQ */
        uint64_t pbe_ptr_damq             : 1;	/* Parity error when accessing a next pointer for one of the linked lists */
        uint64_t pbe_cnt_damq             : 1;	/* Parity error in either the block count, head block ptr, tail block ptr, head flit ptr, and tail flit ptr for one of the linked lists */
        uint64_t err_rd_non_alloc_blk_damq: 1;	/* Error in attempting to read from a non-allocated block by a VC */
        uint64_t err_wr_non_alloc_blk_damq: 1;	/* Error in attempting to write to a non-allocated block by a VC */
        uint64_t err_alloc_inuse_blk_damq : 1;	/* Error in attempting to allocate an already allocated block to a VC from the Free-list */
        uint64_t err_dealloc_idle_blk_damq: 1;	/* Error in attempting to deallocated an already deallocated block to the Free-list by a VC */
        uint64_t err_rd_wrong_vc_blk_damq : 1;	/* Error in attempting to read from a block that is belong to a different VC */
        uint64_t oflw_err_dfifo           : 1;	/* Overflow error in one of the DFIFOs */
        uint64_t oflw_err_ofifo           : 1;	/* Overflow error in one of the OFIFOs */
        uint64_t oflw_err_rfifo           : 1;	/* Overflow error in one of the RFIFOs */
        uint64_t uflw_err_dfifo           : 1;	/* Underflow error in one of the DFIFOs */
        uint64_t uflw_err_ofifo           : 1;	/* Underflow error in one of the OFIFOs */
        uint64_t uflw_err_rfifo           : 1;	/* Underflow error in one of the RFIFOs */
        uint64_t incorrect_access_dfifo   : 1;	/* Access error in one of the DFIFOs */
        uint64_t pbe_dfifo_count          : 1;	/* Parity error in the flit count of a DFIFO */
        uint64_t pbe_ofifo_count          : 1;	/* Parity error in the flit count of a OFIFO */
        uint64_t pbe_rfifo_count          : 1;	/* Parity error in the flit count of a RFIFO */
        uint64_t pbe_rfifo_data           : 1;	/* Parity error in the routing header of a RFIFO */
        uint64_t pbe_vc_table             : 1;	/* Pairty error in the VC table MMR A_RTR_INQ_VC_TABLE */
        uint64_t route_error              : 1;	/* A routing error has occured due to either incorrect logic or the routing tables not being programmed properly */
        uint64_t sbe_rtable               : 1;	/* SBE in one of the routing tables */
        uint64_t mbe_rtable               : 1;	/* MBE in one of the routing tables */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t prf_cnt_rollovr_err      : 1;	/* This flag is set whenever one of the performance counters withing the InQ is rolled over */
        uint64_t link_alive_channel_err   : 1;	/* This flag is set when the link alive interface experiences a channel error where the link_alive_ctl signal is incorrectly set high before the link alive data capture sequence is finished */
        uint64_t link_alive_timeout_err   : 1;	/* This flag is set when the link alive interface experiences a channel timeout either during the WAIT_SYNC or the MONITOR_CH states within the master state machine */
        uint64_t subswitch_err            : 8;	/* The Subswitch encountered an error on Sections 7-0 */
        uint64_t colbuf_oflw_err          : 1;	/* This flag sets when a input fifo encounters a overflow condition */
        uint64_t colbuf_uflw_err          : 1;	/* This flag sets when a input fifo encounters a underflow condition */
        uint64_t colbuf_max_pkt_err       : 1;	/* This flag sets when the column buffer encounters a packet longer then max packet length */
        uint64_t colbuf_crc_err           : 1;	/* This flag sets when the column buffer encounters a packet crc error */
        uint64_t colbuf_sbe_err           : 1;	/* This flag sets when the column buffer encounters a single bit error */
        uint64_t colbuf_sbe_on_tail       : 1;	/* This flag sets when a single bit error ocurres on the tail bit */
        uint64_t colbuf_mbe_err           : 1;	/* This flag indicates that the column buffer encountered a multi bit error */
        uint64_t colbuf_fpt_vc0           : 1;	/* This flag is set when VC0 does not make forward progress */
        uint64_t colbuf_fpt_vc1           : 1;	/* This flag is set when VC1 does not make forward progress */
        uint64_t colbuf_fpt_vc2           : 1;	/* This flag is set when VC2 does not make forward progress */
        uint64_t colbuf_fpt_vc3           : 1;	/* This flag is set when VC3 does not make forward progress */
        uint64_t colbuf_fpt_vc4           : 1;	/* This flag is set when VC4 does not make forward progress */
        uint64_t colbuf_fpt_vc5           : 1;	/* This flag is set when VC5 does not make forward progress */
        uint64_t colbuf_fpt_vc6           : 1;	/* This flag is set when VC6 does not make forward progress */
        uint64_t colbuf_fpt_vc7           : 1;	/* This flag is set when VC7 does not make forward progress */
        uint64_t lcb_err                  : 1;	/* Router Input Queue saw SLB/LCB error */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_flg_desc_t;

typedef union ar_rtr_inq_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Diag purposes */
        uint64_t oflw_err_damq            : 1;	/* Overflow error in one of the DAMQ's linked lists */
        uint64_t uflw_err_damq            : 1;	/* Underflow error in one of the DAMQ's linked lists */
        uint64_t sbe_damq                 : 1;	/* SBE on payload or header flit coming out of the DAMQ */
        uint64_t mbe_damq                 : 1;	/* MBE on payload or header flit coming out of the DAMQ */
        uint64_t pbe_ptr_damq             : 1;	/* Parity error when accessing a next pointer for one of the linked lists */
        uint64_t pbe_cnt_damq             : 1;	/* Parity error in either the block count, head block ptr, tail block ptr, head flit ptr, and tail flit ptr for one of the linked lists */
        uint64_t err_rd_non_alloc_blk_damq: 1;	/* Error in attempting to read from a non-allocated block by a VC */
        uint64_t err_wr_non_alloc_blk_damq: 1;	/* Error in attempting to write to a non-allocated block by a VC */
        uint64_t err_alloc_inuse_blk_damq : 1;	/* Error in attempting to allocate an already allocated block to a VC from the Free-list */
        uint64_t err_dealloc_idle_blk_damq: 1;	/* Error in attempting to deallocated an already deallocated block to the Free-list by a VC */
        uint64_t err_rd_wrong_vc_blk_damq : 1;	/* Error in attempting to read from a block that is belong to a different VC */
        uint64_t oflw_err_dfifo           : 1;	/* Overflow error in one of the DFIFOs */
        uint64_t oflw_err_ofifo           : 1;	/* Overflow error in one of the OFIFOs */
        uint64_t oflw_err_rfifo           : 1;	/* Overflow error in one of the RFIFOs */
        uint64_t uflw_err_dfifo           : 1;	/* Underflow error in one of the DFIFOs */
        uint64_t uflw_err_ofifo           : 1;	/* Underflow error in one of the OFIFOs */
        uint64_t uflw_err_rfifo           : 1;	/* Underflow error in one of the RFIFOs */
        uint64_t incorrect_access_dfifo   : 1;	/* Access error in one of the DFIFOs */
        uint64_t pbe_dfifo_count          : 1;	/* Parity error in the flit count of a DFIFO */
        uint64_t pbe_ofifo_count          : 1;	/* Parity error in the flit count of a OFIFO */
        uint64_t pbe_rfifo_count          : 1;	/* Parity error in the flit count of a RFIFO */
        uint64_t pbe_rfifo_data           : 1;	/* Parity error in the routing header of a RFIFO */
        uint64_t pbe_vc_table             : 1;	/* Pairty error in the VC table MMR A_RTR_INQ_VC_TABLE */
        uint64_t route_error              : 1;	/* A routing error has occured due to either incorrect logic or the routing tables not being programmed properly */
        uint64_t sbe_rtable               : 1;	/* SBE in one of the routing tables */
        uint64_t mbe_rtable               : 1;	/* MBE in one of the routing tables */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t prf_cnt_rollovr_err      : 1;	/* This flag is set whenever one of the performance counters withing the InQ is rolled over */
        uint64_t link_alive_channel_err   : 1;	/* This flag is set when the link alive interface experiences a channel error where the link_alive_ctl signal is incorrectly set high before the link alive data capture sequence is finished */
        uint64_t link_alive_timeout_err   : 1;	/* This flag is set when the link alive interface experiences a channel timeout either during the WAIT_SYNC or the MONITOR_CH states within the master state machine */
        uint64_t subswitch_err            : 8;	/* The Subswitch encountered an error on Sections 7-0 */
        uint64_t colbuf_oflw_err          : 1;	/* This flag sets when a input fifo encounters a overflow condition */
        uint64_t colbuf_uflw_err          : 1;	/* This flag sets when a input fifo encounters a underflow condition */
        uint64_t colbuf_max_pkt_err       : 1;	/* This flag sets when the column buffer encounters a packet longer then max packet length */
        uint64_t colbuf_crc_err           : 1;	/* This flag sets when the column buffer encounters a packet crc error */
        uint64_t colbuf_sbe_err           : 1;	/* This flag sets when the column buffer encounters a single bit error */
        uint64_t colbuf_sbe_on_tail       : 1;	/* This flag sets when a single bit error ocurres on the tail bit */
        uint64_t colbuf_mbe_err           : 1;	/* This flag indicates that the column buffer encountered a multi bit error */
        uint64_t colbuf_fpt_vc0           : 1;	/* This flag is set when VC0 does not make forward progress */
        uint64_t colbuf_fpt_vc1           : 1;	/* This flag is set when VC1 does not make forward progress */
        uint64_t colbuf_fpt_vc2           : 1;	/* This flag is set when VC2 does not make forward progress */
        uint64_t colbuf_fpt_vc3           : 1;	/* This flag is set when VC3 does not make forward progress */
        uint64_t colbuf_fpt_vc4           : 1;	/* This flag is set when VC4 does not make forward progress */
        uint64_t colbuf_fpt_vc5           : 1;	/* This flag is set when VC5 does not make forward progress */
        uint64_t colbuf_fpt_vc6           : 1;	/* This flag is set when VC6 does not make forward progress */
        uint64_t colbuf_fpt_vc7           : 1;	/* This flag is set when VC7 does not make forward progress */
        uint64_t lcb_err                  : 1;	/* Router Input Queue saw SLB/LCB error */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_clr_desc_t;

typedef union ar_rtr_inq_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t oflw_err_damq            : 1;	/* 1:1 */
        uint64_t uflw_err_damq            : 1;	/* 2:2 */
        uint64_t sbe_damq                 : 1;	/* 3:3 */
        uint64_t mbe_damq                 : 1;	/* 4:4 */
        uint64_t pbe_ptr_damq             : 1;	/* 5:5 */
        uint64_t pbe_cnt_damq             : 1;	/* 6:6 */
        uint64_t err_rd_non_alloc_blk_damq: 1;	/* 7:7 */
        uint64_t err_wr_non_alloc_blk_damq: 1;	/* 8:8 */
        uint64_t err_alloc_inuse_blk_damq : 1;	/* 9:9 */
        uint64_t err_dealloc_idle_blk_damq: 1;	/* 10:10 */
        uint64_t err_rd_wrong_vc_blk_damq : 1;	/* 11:11 */
        uint64_t oflw_err_dfifo           : 1;	/* 12:12 */
        uint64_t oflw_err_ofifo           : 1;	/* 13:13 */
        uint64_t oflw_err_rfifo           : 1;	/* 14:14 */
        uint64_t uflw_err_dfifo           : 1;	/* 15:15 */
        uint64_t uflw_err_ofifo           : 1;	/* 16:16 */
        uint64_t uflw_err_rfifo           : 1;	/* 17:17 */
        uint64_t incorrect_access_dfifo   : 1;	/* 18:18 */
        uint64_t pbe_dfifo_count          : 1;	/* 19:19 */
        uint64_t pbe_ofifo_count          : 1;	/* 20:20 */
        uint64_t pbe_rfifo_count          : 1;	/* 21:21 */
        uint64_t pbe_rfifo_data           : 1;	/* 22:22 */
        uint64_t pbe_vc_table             : 1;	/* 23:23 */
        uint64_t route_error              : 1;	/* 24:24 */
        uint64_t sbe_rtable               : 1;	/* 25:25 */
        uint64_t mbe_rtable               : 1;	/* 26:26 */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t prf_cnt_rollovr_err      : 1;	/* 27:27 */
        uint64_t link_alive_channel_err   : 1;	/* 28:28 */
        uint64_t link_alive_timeout_err   : 1;	/* 29:29 */
        uint64_t subswitch_err            : 8;	/* 37:30 */
        uint64_t colbuf_oflw_err          : 1;	/* 38:38 */
        uint64_t colbuf_uflw_err          : 1;	/* 39:39 */
        uint64_t colbuf_max_pkt_err       : 1;	/* 40:40 */
        uint64_t colbuf_crc_err           : 1;	/* 41:41 */
        uint64_t colbuf_sbe_err           : 1;	/* 42:42 */
        uint64_t colbuf_sbe_on_tail       : 1;	/* 43:43 */
        uint64_t colbuf_mbe_err           : 1;	/* 44:44 */
        uint64_t colbuf_fpt_vc0           : 1;	/* 45:45 */
        uint64_t colbuf_fpt_vc1           : 1;	/* 46:46 */
        uint64_t colbuf_fpt_vc2           : 1;	/* 47:47 */
        uint64_t colbuf_fpt_vc3           : 1;	/* 48:48 */
        uint64_t colbuf_fpt_vc4           : 1;	/* 49:49 */
        uint64_t colbuf_fpt_vc5           : 1;	/* 50:50 */
        uint64_t colbuf_fpt_vc6           : 1;	/* 51:51 */
        uint64_t colbuf_fpt_vc7           : 1;	/* 52:52 */
        uint64_t lcb_err                  : 1;	/* 53:53 */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_hss_msk_desc_t;

typedef union ar_rtr_inq_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t oflw_err_damq            : 1;	/* 1:1 */
        uint64_t uflw_err_damq            : 1;	/* 2:2 */
        uint64_t sbe_damq                 : 1;	/* 3:3 */
        uint64_t mbe_damq                 : 1;	/* 4:4 */
        uint64_t pbe_ptr_damq             : 1;	/* 5:5 */
        uint64_t pbe_cnt_damq             : 1;	/* 6:6 */
        uint64_t err_rd_non_alloc_blk_damq: 1;	/* 7:7 */
        uint64_t err_wr_non_alloc_blk_damq: 1;	/* 8:8 */
        uint64_t err_alloc_inuse_blk_damq : 1;	/* 9:9 */
        uint64_t err_dealloc_idle_blk_damq: 1;	/* 10:10 */
        uint64_t err_rd_wrong_vc_blk_damq : 1;	/* 11:11 */
        uint64_t oflw_err_dfifo           : 1;	/* 12:12 */
        uint64_t oflw_err_ofifo           : 1;	/* 13:13 */
        uint64_t oflw_err_rfifo           : 1;	/* 14:14 */
        uint64_t uflw_err_dfifo           : 1;	/* 15:15 */
        uint64_t uflw_err_ofifo           : 1;	/* 16:16 */
        uint64_t uflw_err_rfifo           : 1;	/* 17:17 */
        uint64_t incorrect_access_dfifo   : 1;	/* 18:18 */
        uint64_t pbe_dfifo_count          : 1;	/* 19:19 */
        uint64_t pbe_ofifo_count          : 1;	/* 20:20 */
        uint64_t pbe_rfifo_count          : 1;	/* 21:21 */
        uint64_t pbe_rfifo_data           : 1;	/* 22:22 */
        uint64_t pbe_vc_table             : 1;	/* 23:23 */
        uint64_t route_error              : 1;	/* 24:24 */
        uint64_t sbe_rtable               : 1;	/* 25:25 */
        uint64_t mbe_rtable               : 1;	/* 26:26 */
        uint64_t undefine_27_27           : 1;	/* undefined */
        uint64_t prf_cnt_rollovr_err      : 1;	/* 27:27 */
        uint64_t link_alive_channel_err   : 1;	/* 28:28 */
        uint64_t link_alive_timeout_err   : 1;	/* 29:29 */
        uint64_t subswitch_err            : 8;	/* 37:30 */
        uint64_t colbuf_oflw_err          : 1;	/* 38:38 */
        uint64_t colbuf_uflw_err          : 1;	/* 39:39 */
        uint64_t colbuf_max_pkt_err       : 1;	/* 40:40 */
        uint64_t colbuf_crc_err           : 1;	/* 41:41 */
        uint64_t colbuf_sbe_err           : 1;	/* 42:42 */
        uint64_t colbuf_sbe_on_tail       : 1;	/* 43:43 */
        uint64_t colbuf_mbe_err           : 1;	/* 44:44 */
        uint64_t colbuf_fpt_vc0           : 1;	/* 45:45 */
        uint64_t colbuf_fpt_vc1           : 1;	/* 46:46 */
        uint64_t colbuf_fpt_vc2           : 1;	/* 47:47 */
        uint64_t colbuf_fpt_vc3           : 1;	/* 48:48 */
        uint64_t colbuf_fpt_vc4           : 1;	/* 49:49 */
        uint64_t colbuf_fpt_vc5           : 1;	/* 50:50 */
        uint64_t colbuf_fpt_vc6           : 1;	/* 51:51 */
        uint64_t colbuf_fpt_vc7           : 1;	/* 52:52 */
        uint64_t lcb_err                  : 1;	/* 53:53 */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_first_flg_desc_t;

typedef union ar_rtr_inq_dbg_errinj_rtable_desc {
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
} ar_rtr_inq_dbg_errinj_rtable_desc_t;

typedef union ar_rtr_inq_err_info_rtable_desc {
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
} ar_rtr_inq_err_info_rtable_desc_t;

typedef union ar_rtr_inq_err_info_cnt_sbe_rtable_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* SBE count when reading the routing tables */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_info_cnt_sbe_rtable_desc_t;

typedef union ar_rtr_inq_err_info_cnt_mbe_rtable_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* MBE count when reading the routing tables */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_info_cnt_mbe_rtable_desc_t;

typedef union ar_rtr_inq_err_info_routing_desc {
    struct {
        // QW0
        uint64_t route_head               :48;	/* Routing header [47:0] when a routing error has occurred */
        uint64_t route_table              : 3;	/* The routing table that was selected when the error is due to the chosen entry being invalid */
        uint64_t rtable_address           : 8;	/* The address of the routing table that was selected when the error is due to the chosen entry being invalid */
        uint64_t route_err_type           : 5;	/* The five types of routing errors are: */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_info_routing_desc_t;

typedef union ar_rtr_inq_err_info_damq_desc {
    struct {
        // QW0
        uint64_t mmr_detected_sbe         : 1;	/* A MMR read causing the first SBE Error */
        uint64_t mmr_detected_mbe         : 1;	/* A MMR read causing the first MBE Error */
        uint64_t sbe_syndrome             : 7;	/* Syndrome of the first SBE Error */
        uint64_t sbe_address              : 8;	/* Address of the first SBE Error */
        uint64_t sbe_ram_num              : 2;	/* RAM number where the first SBE Error occured */
        uint64_t mbe_syndrome             : 7;	/* Syndrome of the first MBE Error */
        uint64_t mbe_address              : 8;	/* Address of the first MBE Error */
        uint64_t mbe_ram_num              : 2;	/* RAM number where the first MBE Error occured */
        uint64_t sbe_vc                   : 3;	/* VC of the first SBE Error */
        uint64_t mbe_vc                   : 3;	/* VC of the first MBE Error */
        uint64_t header_mbe               : 1;	/* First MBE occured in a header flit */
        uint64_t vc_with_err              : 3;	/* The VC number that has encountered one of the InQ related errors described in the Tile Error Flag Register */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_info_damq_desc_t;

typedef union ar_rtr_inq_err_info_cnt_sbe_damq_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* SBE count when reading the DAMQ */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_info_cnt_sbe_damq_desc_t;

typedef union ar_rtr_inq_err_info_cnt_mbe_damq_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* MBE count when reading the DAMQ */
    };
    uint64_t qwords[1];
} ar_rtr_inq_err_info_cnt_mbe_damq_desc_t;

typedef union ar_rtr_inq_prf_incoming_flit_vc0_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC0 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_flit_vc0_desc_t;

typedef union ar_rtr_inq_prf_incoming_flit_vc1_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC1 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_flit_vc1_desc_t;

typedef union ar_rtr_inq_prf_incoming_flit_vc2_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC2 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_flit_vc2_desc_t;

typedef union ar_rtr_inq_prf_incoming_flit_vc3_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC3 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_flit_vc3_desc_t;

typedef union ar_rtr_inq_prf_incoming_flit_vc4_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC4 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_flit_vc4_desc_t;

typedef union ar_rtr_inq_prf_incoming_flit_vc5_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC5 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_flit_vc5_desc_t;

typedef union ar_rtr_inq_prf_incoming_flit_vc6_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC6 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_flit_vc6_desc_t;

typedef union ar_rtr_inq_prf_incoming_flit_vc7_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Flit count coming into InQ for VC7 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_flit_vc7_desc_t;

typedef union ar_rtr_inq_prf_flit0_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* During mode 0 operation, this is set to 0 to match the VC field of the header flit to 0 */
        uint64_t flit_ptr                 : 5;	/* For mode 0 operation, the counter is programmed to count the number of incoming VC0 packets, this pointer is set to point to the header flit, or 5'h0 */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_INQ_PRF_INCOMING_PKT_VC0_FILTER_FLIT0_CNT is enabled */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit0_filtering_setup_desc_t;

typedef union ar_rtr_inq_prf_flit0_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare in mode 0 and mode 1 operations */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit0_filtering_mask_desc_t;

typedef union ar_rtr_inq_prf_flit1_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* During mode 0 operation, this is set to 1 to match the VC field of the header flit to 1 */
        uint64_t flit_ptr                 : 5;	/* For mode 0 operation, the counter is programmed to count the number of incoming VC1 packets, this pointer is set to point to the header flit, or 5'h0 */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_INQ_PRF_INCOMING_PKT_VC1_FILTER_FLIT1_CNT is enabled */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit1_filtering_setup_desc_t;

typedef union ar_rtr_inq_prf_flit1_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare in mode 0 and mode 1 operations */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit1_filtering_mask_desc_t;

typedef union ar_rtr_inq_prf_flit2_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* During mode 0 operation, this is set to 2 to match the VC field of the header flit to 2 */
        uint64_t flit_ptr                 : 5;	/* For mode 0 operation, the counter is programmed to count the number of incoming VC2 packets, this pointer is set to point to the header flit, or 5'h0 */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_INQ_PRF_INCOMING_PKT_VC2_FILTER_FLIT2_CNT is enabled */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit2_filtering_setup_desc_t;

typedef union ar_rtr_inq_prf_flit2_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare in mode 0 and mode 1 operations */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit2_filtering_mask_desc_t;

typedef union ar_rtr_inq_prf_flit3_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* During mode 0 operation, this is set to 3 to match the VC field of the header flit to 3 */
        uint64_t flit_ptr                 : 5;	/* For mode 0 operation, the counter is programmed to count the number of incoming VC3 packets, this pointer is set to point to the header flit, or 5'h0 */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_INQ_PRF_INCOMING_PKT_VC3_FILTER_FLIT3_CNT is enabled */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit3_filtering_setup_desc_t;

typedef union ar_rtr_inq_prf_flit3_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare in mode 0 and mode 1 operations */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit3_filtering_mask_desc_t;

typedef union ar_rtr_inq_prf_flit4_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* During mode 0 operation, this is set to 4 to match the VC field of the header flit to 4 */
        uint64_t flit_ptr                 : 5;	/* For mode 0 operation, the counter is programmed to count the number of incoming VC4 packets, this pointer is set to point to the header flit, or 5'h0 */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_INQ_PRF_INCOMING_PKT_VC4_FILTER_FLIT4_CNT is enabled */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit4_filtering_setup_desc_t;

typedef union ar_rtr_inq_prf_flit4_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare in mode 0 and mode 1 operations */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit4_filtering_mask_desc_t;

typedef union ar_rtr_inq_prf_flit5_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* During mode 0 operation, this is set to 5 to match the VC field of the header flit to 5 */
        uint64_t flit_ptr                 : 5;	/* For mode 0 operation, the counter is programmed to count the number of incoming VC5 packets, this pointer is set to point to the header flit, or 5'h0 */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_INQ_PRF_INCOMING_PKT_VC5_FILTER_FLIT5_CNT is enabled */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit5_filtering_setup_desc_t;

typedef union ar_rtr_inq_prf_flit5_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare in mode 0 and mode 1 operations */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit5_filtering_mask_desc_t;

typedef union ar_rtr_inq_prf_flit6_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* During mode 0 operation, this is set to 6 to match the VC field of the header flit to 6 */
        uint64_t flit_ptr                 : 5;	/* For mode 0 operation, the counter is programmed to count the number of incoming VC6 packets, this pointer is set to point to the header flit, or 5'h0 */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_INQ_PRF_INCOMING_PKT_VC6_FILTER_FLIT6_CNT is enabled */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit6_filtering_setup_desc_t;

typedef union ar_rtr_inq_prf_flit6_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare in mode 0 and mode 1 operations */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit6_filtering_mask_desc_t;

typedef union ar_rtr_inq_prf_flit7_filtering_setup_desc {
    struct {
        // QW0
        uint64_t compare_pattern          :49;	/* During mode 0 operation, this is set to 7 to match the VC field of the header flit to 7 */
        uint64_t flit_ptr                 : 5;	/* For mode 0 operation, the counter is programmed to count the number of incoming VC7 packets, this pointer is set to point to the header flit, or 5'h0 */
        uint64_t enable                   : 1;	/* When this is set, performance counter A_RTR_INQ_PRF_INCOMING_PKT_VC7_FILTER_FLIT7_CNT is enabled */
        uint64_t undefine_63_55           : 9;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit7_filtering_setup_desc_t;

typedef union ar_rtr_inq_prf_flit7_filtering_mask_desc {
    struct {
        // QW0
        uint64_t mask                     :49;	/* Mask the bits during the pattern compare in mode 0 and mode 1 operations */
        uint64_t undefine_63_49           :15;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_flit7_filtering_mask_desc_t;

typedef union ar_rtr_inq_prf_incoming_pkt_vc0_filter_flit0_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It counts in one of three modes based on the settings in MMR A_RTR_INQ_PRF_FLIT0_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_pkt_vc0_filter_flit0_cnt_desc_t;

typedef union ar_rtr_inq_prf_incoming_pkt_vc1_filter_flit1_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It counts in one of three modes based on the settings in MMR A_RTR_INQ_PRF_FLIT1_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_pkt_vc1_filter_flit1_cnt_desc_t;

typedef union ar_rtr_inq_prf_incoming_pkt_vc2_filter_flit2_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It counts in one of three modes based on the settings in MMR A_RTR_INQ_PRF_FLIT2_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_pkt_vc2_filter_flit2_cnt_desc_t;

typedef union ar_rtr_inq_prf_incoming_pkt_vc3_filter_flit3_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It counts in one of three modes based on the settings in MMR A_RTR_INQ_PRF_FLIT3_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_pkt_vc3_filter_flit3_cnt_desc_t;

typedef union ar_rtr_inq_prf_incoming_pkt_vc4_filter_flit4_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It counts in one of three modes based on the settings in MMR A_RTR_INQ_PRF_FLIT4_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_pkt_vc4_filter_flit4_cnt_desc_t;

typedef union ar_rtr_inq_prf_incoming_pkt_vc5_filter_flit5_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It counts in one of three modes based on the settings in MMR A_RTR_INQ_PRF_FLIT5_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_pkt_vc5_filter_flit5_cnt_desc_t;

typedef union ar_rtr_inq_prf_incoming_pkt_vc6_filter_flit6_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It counts in one of three modes based on the settings in MMR A_RTR_INQ_PRF_FLIT6_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_pkt_vc6_filter_flit6_cnt_desc_t;

typedef union ar_rtr_inq_prf_incoming_pkt_vc7_filter_flit7_cnt_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* It counts in one of three modes based on the settings in MMR A_RTR_INQ_PRF_FLIT7_FILTERING_SETUP */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_incoming_pkt_vc7_filter_flit7_cnt_desc_t;

typedef union ar_rtr_inq_prf_match_flit_3_to_0_filtering_cnt_desc {
    struct {
        // QW0
        uint64_t flit_cnt                 ;	/* Increments when an incoming flit matches flit filtering setup registers 3 to 0 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_match_flit_3_to_0_filtering_cnt_desc_t;

typedef union ar_rtr_inq_prf_match_flit_7_to_4_filtering_cnt_desc {
    struct {
        // QW0
        uint64_t flit_cnt                 ;	/* Increments when an incoming flit matches flit filtering setup registers 7to 4 */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_match_flit_7_to_4_filtering_cnt_desc_t;

typedef union ar_rtr_inq_prf_rowbus_stall_cnt_desc {
    struct {
        // QW0
        uint64_t rowbus_stall_cnt         ;	/* Counts the occurrences when a row bus is not being used even when valid flits are sitting at the front of the OFIFOs but cannot be sent to the row buffers due to resource conflict */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_rowbus_stall_cnt_desc_t;

typedef union ar_rtr_inq_prf_rowbus_2x_usage_cnt_desc {
    struct {
        // QW0
        uint64_t rowbus_2x_usage_cnt      ;	/* Counts the occurrences where both paths of the row-bus are used simultaneously for delivering flits to the row buffers */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_rowbus_2x_usage_cnt_desc_t;

typedef union ar_rtr_inq_prf_pkt_to_dead_link_cnt_desc {
    struct {
        // QW0
        uint64_t pkt_to_dead_link_cnt     ;	/* Counts the occurrences where packets are being routed toward a dead link */
    };
    uint64_t qwords[1];
} ar_rtr_inq_prf_pkt_to_dead_link_cnt_desc_t;

typedef union ar_rtr_subswitch_cfg_colbuf_crdts_desc {
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
} ar_rtr_subswitch_cfg_colbuf_crdts_desc_t;

typedef union ar_rtr_subswitch_err_info_desc {
    struct {
        // QW0
        uint64_t vc_sect0                 : 3;	/* Virtual Channel within input/output that reported the error */
        uint64_t err_type_sect0           : 4;	/* Error Type */
        uint64_t err_multiple_sect0       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT0 */
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
        uint64_t err_multiple_sect6       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT6  */
        uint64_t vc_sect7                 : 3;	/* Virtual Channel within input that reported the error */
        uint64_t err_type_sect7           : 4;	/* Error Type */
        uint64_t err_multiple_sect7       : 1;	/* Another error happened simultaneous to the error being reported in ERR_TYPE_SECT7 */
    };
    uint64_t qwords[1];
} ar_rtr_subswitch_err_info_desc_t;

typedef union ar_rtr_subswitch_err_mask_desc {
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
} ar_rtr_subswitch_err_mask_desc_t;

typedef union ar_rtr_colbuf_cfg_crdts_channel_desc {
    struct {
        // QW0
        uint64_t private_crdt_limit       : 8;	/* Number of blocks dedicated to a single virtual channel */
        uint64_t shared_crdt_limit        : 8;	/* Number of blocks that are shared amongst all virtual channels */
        uint64_t alloc_to_shared_crdt_limit: 8;	/* This field is used to limit the number of blocks a single vc can allocate to shared space */
        uint64_t private_blks_used        : 8;	/* Number of blocks allocated to private space */
        uint64_t shared_blks_used         : 8;	/* Total number of blocks allocated to the shared space */
        uint64_t allocated_to_shared_used : 8;	/* Number of blocks per VC, allocated to the shared space */
        uint64_t flits_sent               : 3;	/* This field will contain the number of flits that have been sent */
        uint64_t vc_ptr                   : 3;	/* Virtual channel pointer for updating and reading out credit info */
        uint64_t update_crdt_limit        : 1;	/* Credit update control */
        uint64_t lcb_crdt_limit           : 5;	/* Number of flits that can be sent to the LCB */
        uint64_t max_packet_sz            : 4;	/* Size in flits of largest packet size */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_cfg_crdts_channel_desc_t;

typedef union ar_rtr_colbuf_cfg_fpt_desc {
    struct {
        // QW0
        uint64_t fpt_timer                :36;	/* TImer used to detected lack of forward progress */
        uint64_t fpt_cntrl                : 1;	/* 0: Leave in current state */
        uint64_t undefine_63_37           :27;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_cfg_fpt_desc_t;

typedef union ar_rtr_colbuf_cfg_congest_cntl_desc {
    struct {
        // QW0
        uint64_t lower_threshold          :10;	/* Down stream congestion calculations are compared against UPPER,MIDDLE and LOWER threshold values to indicated the level of congestion */
        uint64_t middle_threshold         :10;	/* See LOWER_THRESHOLD description */
        uint64_t upper_threshold          :10;	/* See LOWER_THRESHOLD description */
        uint64_t undefine_30_30           : 1;	/* undefined */
        uint64_t delay_pipe_shift         : 5;	/* DELAY_PIPE_SHIFT value is used to emulate different channel latencies */
        uint64_t undefine_38_36           : 3;	/* undefined */
        uint64_t delay_pipe_tap           : 5;	/* Each port uses a delay pipe to emulate the channel latency */
        uint64_t step_far_end_link_delay  : 1;	/* This field is used by diags only, It is used to control the delay calculations emulating link delays */
        uint64_t diag_mode                : 1;	/* This filed is used in conjucntion with STEP_FAR_END_LINK_DELAY, When this field is set the oustanding credit counters will not reset when link alive is deasserted */
        uint64_t undefine_63_46           :18;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_cfg_congest_cntl_desc_t;

typedef union ar_rtr_colbuf_cfg_congest_port_en_desc {
    struct {
        // QW0
        uint64_t congest_port_en          :48;	/* Ports selects for down stream congestion calculations */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_cfg_congest_port_en_desc_t;

typedef union ar_rtr_colbuf_cfg_congest_far_table_desc {
    struct {
        // QW0
        uint64_t far_table                ;	/* Congestion levels for final calculation before being sent to all other local ports */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_cfg_congest_far_table_desc_t;

typedef union ar_rtr_colbuf_cfg_congest_near_table_desc {
    struct {
        // QW0
        uint64_t near_table               ;	/* Congestion levels for final calculation before being sent to all other local ports */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_cfg_congest_near_table_desc_t;

typedef union ar_rtr_colbuf_cfg_congest_dnstrm_table_desc {
    struct {
        // QW0
        uint64_t dnstrm_table             :16;	/* Congestion levels for final calculation before being sent to all other local ports */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_cfg_congest_dnstrm_table_desc_t;

typedef union ar_rtr_colbuf_dbg_errinj_desc {
    struct {
        // QW0
        uint64_t enable                   : 1;	/* Enable Error Injection */
        uint64_t mode                     : 1;	/* Mode0: Inject error in flit specified by */
        uint64_t undefine_2_2             : 1;	/* undefined */
        uint64_t triggered                : 1;	/*  */
        uint64_t count                    : 6;	/*  */
        uint64_t undefine_15_10           : 6;	/* undefined */
        uint64_t checkbits                : 7;	/*  */
        uint64_t undefine_63_23           :41;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_dbg_errinj_desc_t;

typedef union ar_rtr_colbuf_err_info_desc {
    struct {
        // QW0
        uint64_t src_port_in              : 3;	/* This field indicates which tile in the column is generating the error */
        uint64_t undefine_3_3             : 1;	/* undefined */
        uint64_t vc                       : 4;	/* Virtual channel reporting the error */
        uint64_t undefine_9_8             : 2;	/* undefined */
        uint64_t pkt_length               : 6;	/* This filed reports the number for flits of the violating packet */
        uint64_t undefine_18_16           : 3;	/* undefined */
        uint64_t sbe_syndrome             : 7;	/* Syndrome code for single bit error */
        uint64_t undefine_35_26           :10;	/* undefined */
        uint64_t mbe_src_vc               : 4;	/* This value indicates which virtual channel received the error */
        uint64_t mbe_src_port             : 4;	/* This value indicates which input port the error flit was received on */
        uint64_t mbe_tail_flit            : 1;	/* Bit indicating the MBE occurred on the tail flit */
        uint64_t mbe_head_flit            : 1;	/* Bit indicating the MBE occurred on a head flit */
        uint64_t mbe_syndrome             : 7;	/* Syndrome code for mutli bit error */
        uint64_t undefine_63_53           :11;	/* undefined */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_err_info_desc_t;

typedef union ar_rtr_colbuf_err_info_cnt_mbe_desc {
    struct {
        // QW0
        uint64_t mbe_count                ;	/* Number of Multiple Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_err_info_cnt_mbe_desc_t;

typedef union ar_rtr_colbuf_err_info_cnt_sbe_desc {
    struct {
        // QW0
        uint64_t sbe_count                ;	/* Number of Single Bit Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_err_info_cnt_sbe_desc_t;

typedef union ar_rtr_colbuf_perf_stall_rq_desc {
    struct {
        // QW0
        uint64_t col_buf_perf_stall_rq    :61;	/* The number of Lclks a valid request is stalled because of lack of credits */
        uint64_t vc_ptr                   : 3;	/* Pointer indicating which vc should be monitored */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_perf_stall_rq_desc_t;

typedef union ar_rtr_colbuf_perf_stall_rs_desc {
    struct {
        // QW0
        uint64_t col_buf_perf_stall_rs    :61;	/* The number of Lclks a valid request is stalled because of lack of credits */
        uint64_t vc_ptr                   : 3;	/* Pointer indicating which vc should be monitored */
    };
    uint64_t qwords[1];
} ar_rtr_colbuf_perf_stall_rs_desc_t;


#endif
