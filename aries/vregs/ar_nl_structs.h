/******************************************************************************
 * COPYRIGHT CRAY INC. ar_nl_structs.h
 * FILE: ar_nl_structs.h
 * Created by v2h.c on Wed Oct  8 14:39:01 2014
 ******************************************************************************/

#ifndef _AR_NL_STRUCTS_H_
#define _AR_NL_STRUCTS_H_

/*
 *  ARIES NL STRUCTURES
 */
typedef union ar_nl_cfg_nodeid_desc {
    struct {
        // QW0
        uint64_t node_id                  :16;	/* Node ID number within system */
        uint64_t undefine_63_16           :48;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_cfg_nodeid_desc_t;

typedef union ar_nl_cfg_crdt_desc {
    struct {
        // QW0
        uint64_t ptile_req_credits        : 8;	/* PTile VC0 Buffer Size, min = 'd14 */
        uint64_t ptile_rsp_credits        : 8;	/* PTile VC1 Buffer Size, min = 'd12 */
        uint64_t nic_req_credits          : 8;	/* NIC Request Buffer Size, min = 'd5 */
        uint64_t nic_rsp_credits          :12;	/* NIC Response Buffer Size  12'h0 = no back pressure,  If non-zero, min = 'd5, max = 'd1024 */
        uint64_t phit_req_credits         : 8;	/* F2P converter request buffer size, min = 0x5 */
        uint64_t phit_rsp_credits         : 8;	/* F2P converter response buffer size, min = 0x5 */
        uint64_t undefine_63_52           :12;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_cfg_crdt_desc_t;

typedef union ar_nl_cfg_nl2tile_params_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t ptile_enable_req         : 8;	/* Request PTile 7:0 Enable */
                uint64_t route_ctrl_req           : 3;	/* See Table 459 for an enumeration of router control values */
                uint64_t frc_route_ctrl_req       : 1;	/* If set, use ROUTE_CTRL_REQ MMR */
                uint64_t lb_src_id_0_req          : 1;	/* LB to NW Request SrcId bit 0 */
                uint64_t bubble_tail_type_req     : 1;	/* If set, when a bubble is detected in a NIC request flit, the NW packet will have the b bit set */
                uint64_t hash_on_core_id_req      : 1;	/* Enables hashing on the srcIId for requests */
                uint64_t dis_gen_pkt_tail_req     : 1;	/* Disable generating a tail when a bubble is received from the NIC request path */
                uint64_t dis_chk_spr_pkt_req      : 1;	/* Disable super packet check NIC request path */
                uint64_t dis_squash_par_err_req   : 1;	/* If set, disables the squashing of request packets with header parity errors */
                uint64_t dis_mbe_err_req          : 1;	/* If set, disables setting the b bit in packets with MBE errors in the request F2P converters */
                uint64_t dis_tail_err_req         : 1;	/* If set, disables setting the b bit in packets with Tail Bit errors in the request F2P converters */
                uint64_t max_pkt_len_req          : 8;	/* Maximum length, in NW Flits, of a NW Request packet */
                uint64_t chk_max_pkt_req          : 1;	/* Check overall packet length, set b bit in the NW flit that equals MAX_PKT_LEN_REQ, squash all remaining flits, up to and including, the next valid tail */
                uint64_t en_sf_req                : 1;	/* Enable store and forward in the request F2P converters Note: This must be set if lclk > 2 x cclk */
                uint64_t sf_sel_req               : 1;	/* If set, store and forward waits for packet tail otherwise uses head with a 2 clock cycle delay */
                uint64_t undefine_31_31           : 1;	/* undefined */
                uint64_t ptile_enable_rsp         : 8;	/* Response PTile 7:0 Enable */
                uint64_t route_ctrl_rsp           : 3;	/* See Table 41 on page 193 for an enumeration of router control values */
                uint64_t frc_route_ctrl_rsp       : 1;	/* Not used, responses always use the ROUTE_CTRL_RSP MMR */
                uint64_t lb_src_id_0_rsp          : 1;	/* LB to NW Response SrcId bit 0 */
                uint64_t bubble_tail_type_rsp     : 1;	/* If set, when a bubble is detected in a NIC response flit, the NW packet will have the b bit set */
                uint64_t hash_on_core_id_rsp      : 1;	/* Enables hashing on the srcIId for responses */
                uint64_t dis_gen_pkt_tail_rsp     : 1;	/* Disable generating a tail when a bubble is detected in a NIC to NL response packet */
                uint64_t dis_chk_spr_pkt_rsp      : 1;	/* Disable super packet check NIC response path */
                uint64_t dis_squash_par_err_rsp   : 1;	/* If set, disables the squashing of response packets with header parity errors */
                uint64_t dis_mbe_err_rsp          : 1;	/* If set, disables setting the b bit in packets with MBE errors in the response F2P converters */
                uint64_t dis_tail_err_rsp         : 1;	/* If set, disables setting the b bit in packets with Tail Bit errors in the response F2P converters */
                uint64_t max_pkt_len_rsp          : 8;	/* Maximum length, in NW Flits, of a NW Response packet */
                uint64_t chk_max_pkt_rsp          : 1;	/* Check overall packet length, set b bit in the NW flit that equals MAX_PKT_LEN_RSP, squash all remaining flits, up to and including, the next valid tail */
                uint64_t en_sf_rsp                : 1;	/* Enable store and forward in the response F2P converters */
                uint64_t sf_sel_rsp               : 1;	/* If set, store and forward waits for packet tail otherwise uses head with a 2 clock cycle delay */
                uint64_t undefine_q0_f0_63_63     : 1;	/* undefined */
            };
            struct {
                uint64_t used_req                 :32;	/*  */
                uint64_t used_rsp                 :32;	/*  */
            };
        };
    };
    uint64_t qwords[1];
} ar_nl_cfg_nl2tile_params_desc_t;

typedef union ar_nl_cfg_tile2nl_params_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t squash_bad_tgt_req       : 1;	/* If tgt [15:0] mismatch, squash request packet */
                uint64_t squash_bad_tgtid_req     : 1;	/* If tgtId[1] mismatch, squash request packet */
                uint64_t squash_bad_vc_req        : 1;	/* If vc[2] mismatch, squash request packet */
                uint64_t chk_malformed_r_req      : 1;	/* Check packet for non-zero R bits */
                uint64_t chk_max_pkt_req          : 1;	/* Check overall packet length, set b bit in NW flit that equals MAX_PKT_LEN_REQ, squash all remaining flits, up to and including, the next valid tail */
                uint64_t squash_malformed_r_req   : 1;	/* If CHK_MALFORMED_R_REQ is set and the packet contains non-zero R-bits, squash request packet */
                uint64_t undefine_7_6             : 2;	/* undefined */
                uint64_t max_pkt_len_req          : 8;	/* Maximum length, in NW Flits, of a NW Request packet */
                uint64_t squash_bad_tgt_rsp       : 1;	/* If tgt [15:0] mismatch, squash response packet */
                uint64_t squash_bad_tgtid_rsp     : 1;	/* If tgtId[1] mismatch, squash response packet */
                uint64_t squash_bad_vc_rsp        : 1;	/* If vc[2] mismatch, squash response packet */
                uint64_t chk_malformed_r_rsp      : 1;	/* Check packet for non-zero R bits */
                uint64_t chk_max_pkt_rsp          : 1;	/* Check packet length, set b bit in NW flit that equals MAX_PKT_LEN_RSP, squash all remaining flits, up to and including, the next valid tail */
                uint64_t squash_malformed_r_rsp   : 1;	/* If CHK_MALFORMED_R_RSP is set and the packet contains non-zero R-bits, squash the response packet */
                uint64_t undefine_23_22           : 2;	/* undefined */
                uint64_t max_pkt_len_rsp          : 8;	/* Maximum length, in NW Flits, of a NW Response packet */
                uint64_t undefine_q0_f0_63_32     :32;	/* undefined */
            };
            struct {
                uint64_t used_req                 :16;	/*  */
                uint64_t used_rsp                 :16;	/*  */
                uint64_t undefine_q0_f1_63_32     :32;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nl_cfg_tile2nl_params_desc_t;

typedef union ar_nl_prf_wm_desc {
    struct {
        // QW0
        uint64_t req_watermark_lo         : 8;	/* Request Watermark Low */
        uint64_t req_watermark_med        : 8;	/* Request Watermark Medium */
        uint64_t req_watermark_hi         : 8;	/* Request Watermark High */
        uint64_t rsp_watermark_lo         : 8;	/* Response Watermark Low */
        uint64_t rsp_watermark_med        : 8;	/* Response Watermark Medium */
        uint64_t rsp_watermark_hi         : 8;	/* Response Watermark High */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_prf_wm_desc_t;

typedef union ar_nl_cfg_congestion_ctrl_desc {
    struct {
        // QW0
        uint64_t disable                  : 1;	/* Disable Router Matrix Congestion Control */
        uint64_t undefine_63_1            :63;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_cfg_congestion_ctrl_desc_t;

typedef union ar_nl_err_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t nic_req_bubble           : 1;	/* A bubble was detected from NIC/LB Req to NL */
        uint64_t nic_req_super_pkt        : 1;	/* A superpacket was detected from NIC/LB Req to NL */
        uint64_t nic_req_buf_ovflow       : 1;	/* A NIC Req buffer detected an overflow */
        uint64_t nic_req_buf_unflow       : 1;	/* A NIC Req buffer detected an underflow */
        uint64_t nic_req_wedged           : 1;	/* An NL to NIC Request path is wedgedSee Section 6 */
        uint64_t nic_rsp_bubble           : 1;	/* A bubble was detected from NIC/LB Rsp to NL */
        uint64_t nic_rsp_super_pkt        : 1;	/* A superpacket was detected from NIC/LB Rsp to NL */
        uint64_t nic_rsp_buf_ovflow       : 1;	/* A NIC Rsp buffer detected an overflow */
        uint64_t nic_rsp_buf_unflow       : 1;	/* A NIC to NL Rsp buffer detected an underflow */
        uint64_t nic_rsp_wedged           : 1;	/* An NL to NIC Response path is wedged */
        uint64_t f2p_req_sbe              : 1;	/* A NIC Req Flit to NW Flit converter detected an SBE */
        uint64_t f2p_req_mbe              : 1;	/* A NIC Req Flit to NW Flit converter detected an MBE */
        uint64_t f2p_req_pe               : 1;	/* A NIC Req Flit to NW Flit converter detected a Parity error */
        uint64_t f2p_req_super_pkt        : 1;	/* A NIC Req Flit to NW Flit converter detected a super packet */
        uint64_t f2p_req_bad_bit          : 1;	/* A NIC Req Flit to NW Flit converter set the b bit in an outgoing packet */
        uint64_t f2p_req_bad_tail         : 1;	/* A NIC Req Flit to NW Flit converter detected a bad tail */
        uint64_t f2p_req_buf_ovflow       : 1;	/* A NIC Req Flit to NW Flit converter detected a buffer overflow */
        uint64_t f2p_req_buf_unflow       : 1;	/* A NIC Req Flit to NW Flit converter detected a buffer underflow */
        uint64_t f2p_rsp_sbe              : 1;	/* A NIC Rsp Flit to NW Flit converter detected an SBE */
        uint64_t f2p_rsp_mbe              : 1;	/* A NIC Rsp Flit to NW Flit converter detected an MBE */
        uint64_t f2p_rsp_pe               : 1;	/* A NIC Rsp Flit to NW Flit converter detected a Parity error */
        uint64_t f2p_rsp_super_pkt        : 1;	/* A NIC Rsp Flit to NW Flit converter detected a super packet */
        uint64_t f2p_rsp_bad_bit          : 1;	/* A NIC Rsp Flit to NW Flit converter set the b bit in an outgoing packet */
        uint64_t f2p_rsp_bad_tail         : 1;	/* A NIC Rsp Flit to NW Flit converter detected a bad tail */
        uint64_t f2p_rsp_buf_ovflow       : 1;	/* A NIC Rsp Flit to NW Flit converter detected a buffer overflow */
        uint64_t f2p_rsp_buf_unflow       : 1;	/* A NIC Rsp Flit to NW Flit converter detected a buffer underflow */
        uint64_t p2f_req_bad_tgt          : 1;	/* A request P2F converter detected a packet with a bad tgt */
        uint64_t p2f_req_bad_tgtid        : 1;	/* A request P2F converter detected a packet with a bad tgtId */
        uint64_t p2f_req_bad_vc           : 1;	/* A request P2F converter detected a packet with a bad vc Bit */
        uint64_t p2f_req_malformed        : 1;	/* A request P2F converter detected a malformed packet */
        uint64_t p2f_req_super_pkt        : 1;	/* A request P2F converter detected a super packet */
        uint64_t p2f_req_bad_bit          : 1;	/* A request P2F converter detected a packet with the b bit set */
        uint64_t p2f_req_bad_crc          : 1;	/* A request P2F converter detected a packet with a bad CRC */
        uint64_t p2f_req_sbe              : 1;	/* A request P2F converter detected a packet with an SBE */
        uint64_t p2f_req_mbe              : 1;	/* A request P2F converter detected a packet with an MBE */
        uint64_t p2f_req_squash           : 1;	/* A request P2F converter squashed a packet */
        uint64_t p2f_req_buf_ovflow       : 1;	/* A request P2F converter detected a buffer overflow */
        uint64_t p2f_req_buf_unflow       : 1;	/* A request P2F converter detected a buffer underflow */
        uint64_t p2f_rsp_bad_tgt          : 1;	/* A response P2F converter detected a packet with a bad tgt */
        uint64_t p2f_rsp_bad_tgtid        : 1;	/* A response P2F converter detected a packet with a bad tgtId */
        uint64_t p2f_rsp_bad_vc           : 1;	/* A response P2F converter detected a packet with a bad vc Bit */
        uint64_t p2f_rsp_malformed        : 1;	/* A response P2F converter detected a malformed packet */
        uint64_t p2f_rsp_super_pkt        : 1;	/* A response P2F converter detected a super packet */
        uint64_t p2f_rsp_bad_bit          : 1;	/* A response P2F converter detected a packet with the b bit set */
        uint64_t p2f_rsp_bad_crc          : 1;	/* A response P2F converter detected a packet with a bad CRC */
        uint64_t p2f_rsp_sbe              : 1;	/* A response P2F converter detected a packet with an SBE */
        uint64_t p2f_rsp_mbe              : 1;	/* A response P2F converter detected a packet with an MBE */
        uint64_t p2f_rsp_squash           : 1;	/* A response P2F converter squashed a packet */
        uint64_t p2f_rsp_buf_ovflow       : 1;	/* A response P2F converter detected a buffer overflow */
        uint64_t p2f_rsp_buf_unflow       : 1;	/* A response P2F converter detected a buffer underflow */
        uint64_t cntr_ovflow              : 1;	/* Any 64-bit counter overflow, includes performance and error counters */
        uint64_t perf_cntr_perr_lo        : 1;	/* Performance Counter Parity Error */
        uint64_t perf_cntr_perr_up        : 1;	/* Performance Counter Parity Error */
        uint64_t lm_cclk_perr             : 1;	/* cclk logic monitor parity error */
        uint64_t lm_lclk_perr             : 1;	/* lclk logic monitor parity error */
        uint64_t lm_cclk_trig1_or_0       : 1;	/* cclk logic monitor Trigger 1 or Trigger 0 occurred */
        uint64_t lm_cclk_trig1_and_0      : 1;	/* cclk logic monitor Trigger 1and Trigger 0 occurred simultaneously */
        uint64_t lm_lclk_trig1_or_0       : 1;	/* lclk logic monitor Trigger 1 or Trigger 0 occurred */
        uint64_t lm_lclk_trig1_and_0      : 1;	/* lclk logic monitor Trigger 1 and Trigger 0 occured simultaneously */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_flg_desc_t;

typedef union ar_nl_err_clr_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* Reserved for diagnostics */
        uint64_t nic_req_bubble           : 1;	/* A bubble was detected from NIC/LB Req to NL */
        uint64_t nic_req_super_pkt        : 1;	/* A superpacket was detected from NIC/LB Req to NL */
        uint64_t nic_req_buf_ovflow       : 1;	/* A NIC Req buffer detected an overflow */
        uint64_t nic_req_buf_unflow       : 1;	/* A NIC Req buffer detected an underflow */
        uint64_t nic_req_wedged           : 1;	/* An NL to NIC Request path is wedgedSee Section 6 */
        uint64_t nic_rsp_bubble           : 1;	/* A bubble was detected from NIC/LB Rsp to NL */
        uint64_t nic_rsp_super_pkt        : 1;	/* A superpacket was detected from NIC/LB Rsp to NL */
        uint64_t nic_rsp_buf_ovflow       : 1;	/* A NIC Rsp buffer detected an overflow */
        uint64_t nic_rsp_buf_unflow       : 1;	/* A NIC to NL Rsp buffer detected an underflow */
        uint64_t nic_rsp_wedged           : 1;	/* An NL to NIC Response path is wedged */
        uint64_t f2p_req_sbe              : 1;	/* A NIC Req Flit to NW Flit converter detected an SBE */
        uint64_t f2p_req_mbe              : 1;	/* A NIC Req Flit to NW Flit converter detected an MBE */
        uint64_t f2p_req_pe               : 1;	/* A NIC Req Flit to NW Flit converter detected a Parity error */
        uint64_t f2p_req_super_pkt        : 1;	/* A NIC Req Flit to NW Flit converter detected a super packet */
        uint64_t f2p_req_bad_bit          : 1;	/* A NIC Req Flit to NW Flit converter set the b bit in an outgoing packet */
        uint64_t f2p_req_bad_tail         : 1;	/* A NIC Req Flit to NW Flit converter detected a bad tail */
        uint64_t f2p_req_buf_ovflow       : 1;	/* A NIC Req Flit to NW Flit converter detected a buffer overflow */
        uint64_t f2p_req_buf_unflow       : 1;	/* A NIC Req Flit to NW Flit converter detected a buffer underflow */
        uint64_t f2p_rsp_sbe              : 1;	/* A NIC Rsp Flit to NW Flit converter detected an SBE */
        uint64_t f2p_rsp_mbe              : 1;	/* A NIC Rsp Flit to NW Flit converter detected an MBE */
        uint64_t f2p_rsp_pe               : 1;	/* A NIC Rsp Flit to NW Flit converter detected a Parity error */
        uint64_t f2p_rsp_super_pkt        : 1;	/* A NIC Rsp Flit to NW Flit converter detected a super packet */
        uint64_t f2p_rsp_bad_bit          : 1;	/* A NIC Rsp Flit to NW Flit converter set the b bit in an outgoing packet */
        uint64_t f2p_rsp_bad_tail         : 1;	/* A NIC Rsp Flit to NW Flit converter detected a bad tail */
        uint64_t f2p_rsp_buf_ovflow       : 1;	/* A NIC Rsp Flit to NW Flit converter detected a buffer overflow */
        uint64_t f2p_rsp_buf_unflow       : 1;	/* A NIC Rsp Flit to NW Flit converter detected a buffer underflow */
        uint64_t p2f_req_bad_tgt          : 1;	/* A request P2F converter detected a packet with a bad tgt */
        uint64_t p2f_req_bad_tgtid        : 1;	/* A request P2F converter detected a packet with a bad tgtId */
        uint64_t p2f_req_bad_vc           : 1;	/* A request P2F converter detected a packet with a bad vc Bit */
        uint64_t p2f_req_malformed        : 1;	/* A request P2F converter detected a malformed packet */
        uint64_t p2f_req_super_pkt        : 1;	/* A request P2F converter detected a super packet */
        uint64_t p2f_req_bad_bit          : 1;	/* A request P2F converter detected a packet with the b bit set */
        uint64_t p2f_req_bad_crc          : 1;	/* A request P2F converter detected a packet with a bad CRC */
        uint64_t p2f_req_sbe              : 1;	/* A request P2F converter detected a packet with an SBE */
        uint64_t p2f_req_mbe              : 1;	/* A request P2F converter detected a packet with an MBE */
        uint64_t p2f_req_squash           : 1;	/* A request P2F converter squashed a packet */
        uint64_t p2f_req_buf_ovflow       : 1;	/* A request P2F converter detected a buffer overflow */
        uint64_t p2f_req_buf_unflow       : 1;	/* A request P2F converter detected a buffer underflow */
        uint64_t p2f_rsp_bad_tgt          : 1;	/* A response P2F converter detected a packet with a bad tgt */
        uint64_t p2f_rsp_bad_tgtid        : 1;	/* A response P2F converter detected a packet with a bad tgtId */
        uint64_t p2f_rsp_bad_vc           : 1;	/* A response P2F converter detected a packet with a bad vc Bit */
        uint64_t p2f_rsp_malformed        : 1;	/* A response P2F converter detected a malformed packet */
        uint64_t p2f_rsp_super_pkt        : 1;	/* A response P2F converter detected a super packet */
        uint64_t p2f_rsp_bad_bit          : 1;	/* A response P2F converter detected a packet with the b bit set */
        uint64_t p2f_rsp_bad_crc          : 1;	/* A response P2F converter detected a packet with a bad CRC */
        uint64_t p2f_rsp_sbe              : 1;	/* A response P2F converter detected a packet with an SBE */
        uint64_t p2f_rsp_mbe              : 1;	/* A response P2F converter detected a packet with an MBE */
        uint64_t p2f_rsp_squash           : 1;	/* A response P2F converter squashed a packet */
        uint64_t p2f_rsp_buf_ovflow       : 1;	/* A response P2F converter detected a buffer overflow */
        uint64_t p2f_rsp_buf_unflow       : 1;	/* A response P2F converter detected a buffer underflow */
        uint64_t cntr_ovflow              : 1;	/* Any 64-bit counter overflow, includes performance and error counters */
        uint64_t perf_cntr_perr_lo        : 1;	/* Performance Counter Parity Error */
        uint64_t perf_cntr_perr_up        : 1;	/* Performance Counter Parity Error */
        uint64_t lm_cclk_perr             : 1;	/* cclk logic monitor parity error */
        uint64_t lm_lclk_perr             : 1;	/* lclk logic monitor parity error */
        uint64_t lm_cclk_trig1_or_0       : 1;	/* cclk logic monitor Trigger 1 or Trigger 0 occurred */
        uint64_t lm_cclk_trig1_and_0      : 1;	/* cclk logic monitor Trigger 1and Trigger 0 occurred simultaneously */
        uint64_t lm_lclk_trig1_or_0       : 1;	/* lclk logic monitor Trigger 1 or Trigger 0 occurred */
        uint64_t lm_lclk_trig1_and_0      : 1;	/* lclk logic monitor Trigger 1 and Trigger 0 occured simultaneously */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_clr_desc_t;

typedef union ar_nl_err_hss_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nic_req_bubble           : 1;	/* 1:1 */
        uint64_t nic_req_super_pkt        : 1;	/* 2:2 */
        uint64_t nic_req_buf_ovflow       : 1;	/* 3:3 */
        uint64_t nic_req_buf_unflow       : 1;	/* 4:4 */
        uint64_t nic_req_wedged           : 1;	/* 5:5 */
        uint64_t nic_rsp_bubble           : 1;	/* 6:6 */
        uint64_t nic_rsp_super_pkt        : 1;	/* 7:7 */
        uint64_t nic_rsp_buf_ovflow       : 1;	/* 8:8 */
        uint64_t nic_rsp_buf_unflow       : 1;	/* 9:9 */
        uint64_t nic_rsp_wedged           : 1;	/* 10:10 */
        uint64_t f2p_req_sbe              : 1;	/* 11:11 */
        uint64_t f2p_req_mbe              : 1;	/* 12:12 */
        uint64_t f2p_req_pe               : 1;	/* 13:13 */
        uint64_t f2p_req_super_pkt        : 1;	/* 14:14 */
        uint64_t f2p_req_bad_bit          : 1;	/* 15:15 */
        uint64_t f2p_req_bad_tail         : 1;	/* 16:16 */
        uint64_t f2p_req_buf_ovflow       : 1;	/* 17:17 */
        uint64_t f2p_req_buf_unflow       : 1;	/* 18:18 */
        uint64_t f2p_rsp_sbe              : 1;	/* 19:19 */
        uint64_t f2p_rsp_mbe              : 1;	/* 20:20 */
        uint64_t f2p_rsp_pe               : 1;	/* 21:21 */
        uint64_t f2p_rsp_super_pkt        : 1;	/* 22:22 */
        uint64_t f2p_rsp_bad_bit          : 1;	/* 23:23 */
        uint64_t f2p_rsp_bad_tail         : 1;	/* 24:24 */
        uint64_t f2p_rsp_buf_ovflow       : 1;	/* 25:25 */
        uint64_t f2p_rsp_buf_unflow       : 1;	/* 26:26 */
        uint64_t p2f_req_bad_tgt          : 1;	/* 27:27 */
        uint64_t p2f_req_bad_tgtid        : 1;	/* 28:28 */
        uint64_t p2f_req_bad_vc           : 1;	/* 29:29 */
        uint64_t p2f_req_malformed        : 1;	/* 30:30 */
        uint64_t p2f_req_super_pkt        : 1;	/* 31:31 */
        uint64_t p2f_req_bad_bit          : 1;	/* 32:32 */
        uint64_t p2f_req_bad_crc          : 1;	/* 33:33 */
        uint64_t p2f_req_sbe              : 1;	/* 34:34 */
        uint64_t p2f_req_mbe              : 1;	/* 35:35 */
        uint64_t p2f_req_squash           : 1;	/* 36:36 */
        uint64_t p2f_req_buf_ovflow       : 1;	/* 37:37 */
        uint64_t p2f_req_buf_unflow       : 1;	/* 38:38 */
        uint64_t p2f_rsp_bad_tgt          : 1;	/* 39:39 */
        uint64_t p2f_rsp_bad_tgtid        : 1;	/* 40:40 */
        uint64_t p2f_rsp_bad_vc           : 1;	/* 41:41 */
        uint64_t p2f_rsp_malformed        : 1;	/* 42:42 */
        uint64_t p2f_rsp_super_pkt        : 1;	/* 43:43 */
        uint64_t p2f_rsp_bad_bit          : 1;	/* 44:44 */
        uint64_t p2f_rsp_bad_crc          : 1;	/* 45:45 */
        uint64_t p2f_rsp_sbe              : 1;	/* 46:46 */
        uint64_t p2f_rsp_mbe              : 1;	/* 47:47 */
        uint64_t p2f_rsp_squash           : 1;	/* 48:48 */
        uint64_t p2f_rsp_buf_ovflow       : 1;	/* 49:49 */
        uint64_t p2f_rsp_buf_unflow       : 1;	/* 50:50 */
        uint64_t cntr_ovflow              : 1;	/* 51:51 */
        uint64_t perf_cntr_perr_lo        : 1;	/* 52:52 */
        uint64_t perf_cntr_perr_up        : 1;	/* 53:53 */
        uint64_t lm_cclk_perr             : 1;	/* 54:54 */
        uint64_t lm_lclk_perr             : 1;	/* 55:55 */
        uint64_t lm_cclk_trig1_or_0       : 1;	/* 56:56 */
        uint64_t lm_cclk_trig1_and_0      : 1;	/* 57:57 */
        uint64_t lm_lclk_trig1_or_0       : 1;	/* 58:58 */
        uint64_t lm_lclk_trig1_and_0      : 1;	/* 59:59 */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_hss_msk_desc_t;

typedef union ar_nl_err_os0_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nic_req_bubble           : 1;	/* 1:1 */
        uint64_t nic_req_super_pkt        : 1;	/* 2:2 */
        uint64_t nic_req_buf_ovflow       : 1;	/* 3:3 */
        uint64_t nic_req_buf_unflow       : 1;	/* 4:4 */
        uint64_t nic_req_wedged           : 1;	/* 5:5 */
        uint64_t nic_rsp_bubble           : 1;	/* 6:6 */
        uint64_t nic_rsp_super_pkt        : 1;	/* 7:7 */
        uint64_t nic_rsp_buf_ovflow       : 1;	/* 8:8 */
        uint64_t nic_rsp_buf_unflow       : 1;	/* 9:9 */
        uint64_t nic_rsp_wedged           : 1;	/* 10:10 */
        uint64_t f2p_req_sbe              : 1;	/* 11:11 */
        uint64_t f2p_req_mbe              : 1;	/* 12:12 */
        uint64_t f2p_req_pe               : 1;	/* 13:13 */
        uint64_t f2p_req_super_pkt        : 1;	/* 14:14 */
        uint64_t f2p_req_bad_bit          : 1;	/* 15:15 */
        uint64_t f2p_req_bad_tail         : 1;	/* 16:16 */
        uint64_t f2p_req_buf_ovflow       : 1;	/* 17:17 */
        uint64_t f2p_req_buf_unflow       : 1;	/* 18:18 */
        uint64_t f2p_rsp_sbe              : 1;	/* 19:19 */
        uint64_t f2p_rsp_mbe              : 1;	/* 20:20 */
        uint64_t f2p_rsp_pe               : 1;	/* 21:21 */
        uint64_t f2p_rsp_super_pkt        : 1;	/* 22:22 */
        uint64_t f2p_rsp_bad_bit          : 1;	/* 23:23 */
        uint64_t f2p_rsp_bad_tail         : 1;	/* 24:24 */
        uint64_t f2p_rsp_buf_ovflow       : 1;	/* 25:25 */
        uint64_t f2p_rsp_buf_unflow       : 1;	/* 26:26 */
        uint64_t p2f_req_bad_tgt          : 1;	/* 27:27 */
        uint64_t p2f_req_bad_tgtid        : 1;	/* 28:28 */
        uint64_t p2f_req_bad_vc           : 1;	/* 29:29 */
        uint64_t p2f_req_malformed        : 1;	/* 30:30 */
        uint64_t p2f_req_super_pkt        : 1;	/* 31:31 */
        uint64_t p2f_req_bad_bit          : 1;	/* 32:32 */
        uint64_t p2f_req_bad_crc          : 1;	/* 33:33 */
        uint64_t p2f_req_sbe              : 1;	/* 34:34 */
        uint64_t p2f_req_mbe              : 1;	/* 35:35 */
        uint64_t p2f_req_squash           : 1;	/* 36:36 */
        uint64_t p2f_req_buf_ovflow       : 1;	/* 37:37 */
        uint64_t p2f_req_buf_unflow       : 1;	/* 38:38 */
        uint64_t p2f_rsp_bad_tgt          : 1;	/* 39:39 */
        uint64_t p2f_rsp_bad_tgtid        : 1;	/* 40:40 */
        uint64_t p2f_rsp_bad_vc           : 1;	/* 41:41 */
        uint64_t p2f_rsp_malformed        : 1;	/* 42:42 */
        uint64_t p2f_rsp_super_pkt        : 1;	/* 43:43 */
        uint64_t p2f_rsp_bad_bit          : 1;	/* 44:44 */
        uint64_t p2f_rsp_bad_crc          : 1;	/* 45:45 */
        uint64_t p2f_rsp_sbe              : 1;	/* 46:46 */
        uint64_t p2f_rsp_mbe              : 1;	/* 47:47 */
        uint64_t p2f_rsp_squash           : 1;	/* 48:48 */
        uint64_t p2f_rsp_buf_ovflow       : 1;	/* 49:49 */
        uint64_t p2f_rsp_buf_unflow       : 1;	/* 50:50 */
        uint64_t cntr_ovflow              : 1;	/* 51:51 */
        uint64_t perf_cntr_perr_lo        : 1;	/* 52:52 */
        uint64_t perf_cntr_perr_up        : 1;	/* 53:53 */
        uint64_t lm_cclk_perr             : 1;	/* 54:54 */
        uint64_t lm_lclk_perr             : 1;	/* 55:55 */
        uint64_t lm_cclk_trig1_or_0       : 1;	/* 56:56 */
        uint64_t lm_cclk_trig1_and_0      : 1;	/* 57:57 */
        uint64_t lm_lclk_trig1_or_0       : 1;	/* 58:58 */
        uint64_t lm_lclk_trig1_and_0      : 1;	/* 59:59 */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_os0_msk_desc_t;

typedef union ar_nl_err_os1_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nic_req_bubble           : 1;	/* 1:1 */
        uint64_t nic_req_super_pkt        : 1;	/* 2:2 */
        uint64_t nic_req_buf_ovflow       : 1;	/* 3:3 */
        uint64_t nic_req_buf_unflow       : 1;	/* 4:4 */
        uint64_t nic_req_wedged           : 1;	/* 5:5 */
        uint64_t nic_rsp_bubble           : 1;	/* 6:6 */
        uint64_t nic_rsp_super_pkt        : 1;	/* 7:7 */
        uint64_t nic_rsp_buf_ovflow       : 1;	/* 8:8 */
        uint64_t nic_rsp_buf_unflow       : 1;	/* 9:9 */
        uint64_t nic_rsp_wedged           : 1;	/* 10:10 */
        uint64_t f2p_req_sbe              : 1;	/* 11:11 */
        uint64_t f2p_req_mbe              : 1;	/* 12:12 */
        uint64_t f2p_req_pe               : 1;	/* 13:13 */
        uint64_t f2p_req_super_pkt        : 1;	/* 14:14 */
        uint64_t f2p_req_bad_bit          : 1;	/* 15:15 */
        uint64_t f2p_req_bad_tail         : 1;	/* 16:16 */
        uint64_t f2p_req_buf_ovflow       : 1;	/* 17:17 */
        uint64_t f2p_req_buf_unflow       : 1;	/* 18:18 */
        uint64_t f2p_rsp_sbe              : 1;	/* 19:19 */
        uint64_t f2p_rsp_mbe              : 1;	/* 20:20 */
        uint64_t f2p_rsp_pe               : 1;	/* 21:21 */
        uint64_t f2p_rsp_super_pkt        : 1;	/* 22:22 */
        uint64_t f2p_rsp_bad_bit          : 1;	/* 23:23 */
        uint64_t f2p_rsp_bad_tail         : 1;	/* 24:24 */
        uint64_t f2p_rsp_buf_ovflow       : 1;	/* 25:25 */
        uint64_t f2p_rsp_buf_unflow       : 1;	/* 26:26 */
        uint64_t p2f_req_bad_tgt          : 1;	/* 27:27 */
        uint64_t p2f_req_bad_tgtid        : 1;	/* 28:28 */
        uint64_t p2f_req_bad_vc           : 1;	/* 29:29 */
        uint64_t p2f_req_malformed        : 1;	/* 30:30 */
        uint64_t p2f_req_super_pkt        : 1;	/* 31:31 */
        uint64_t p2f_req_bad_bit          : 1;	/* 32:32 */
        uint64_t p2f_req_bad_crc          : 1;	/* 33:33 */
        uint64_t p2f_req_sbe              : 1;	/* 34:34 */
        uint64_t p2f_req_mbe              : 1;	/* 35:35 */
        uint64_t p2f_req_squash           : 1;	/* 36:36 */
        uint64_t p2f_req_buf_ovflow       : 1;	/* 37:37 */
        uint64_t p2f_req_buf_unflow       : 1;	/* 38:38 */
        uint64_t p2f_rsp_bad_tgt          : 1;	/* 39:39 */
        uint64_t p2f_rsp_bad_tgtid        : 1;	/* 40:40 */
        uint64_t p2f_rsp_bad_vc           : 1;	/* 41:41 */
        uint64_t p2f_rsp_malformed        : 1;	/* 42:42 */
        uint64_t p2f_rsp_super_pkt        : 1;	/* 43:43 */
        uint64_t p2f_rsp_bad_bit          : 1;	/* 44:44 */
        uint64_t p2f_rsp_bad_crc          : 1;	/* 45:45 */
        uint64_t p2f_rsp_sbe              : 1;	/* 46:46 */
        uint64_t p2f_rsp_mbe              : 1;	/* 47:47 */
        uint64_t p2f_rsp_squash           : 1;	/* 48:48 */
        uint64_t p2f_rsp_buf_ovflow       : 1;	/* 49:49 */
        uint64_t p2f_rsp_buf_unflow       : 1;	/* 50:50 */
        uint64_t cntr_ovflow              : 1;	/* 51:51 */
        uint64_t perf_cntr_perr_lo        : 1;	/* 52:52 */
        uint64_t perf_cntr_perr_up        : 1;	/* 53:53 */
        uint64_t lm_cclk_perr             : 1;	/* 54:54 */
        uint64_t lm_lclk_perr             : 1;	/* 55:55 */
        uint64_t lm_cclk_trig1_or_0       : 1;	/* 56:56 */
        uint64_t lm_cclk_trig1_and_0      : 1;	/* 57:57 */
        uint64_t lm_lclk_trig1_or_0       : 1;	/* 58:58 */
        uint64_t lm_lclk_trig1_and_0      : 1;	/* 59:59 */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_os1_msk_desc_t;

typedef union ar_nl_err_os2_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nic_req_bubble           : 1;	/* 1:1 */
        uint64_t nic_req_super_pkt        : 1;	/* 2:2 */
        uint64_t nic_req_buf_ovflow       : 1;	/* 3:3 */
        uint64_t nic_req_buf_unflow       : 1;	/* 4:4 */
        uint64_t nic_req_wedged           : 1;	/* 5:5 */
        uint64_t nic_rsp_bubble           : 1;	/* 6:6 */
        uint64_t nic_rsp_super_pkt        : 1;	/* 7:7 */
        uint64_t nic_rsp_buf_ovflow       : 1;	/* 8:8 */
        uint64_t nic_rsp_buf_unflow       : 1;	/* 9:9 */
        uint64_t nic_rsp_wedged           : 1;	/* 10:10 */
        uint64_t f2p_req_sbe              : 1;	/* 11:11 */
        uint64_t f2p_req_mbe              : 1;	/* 12:12 */
        uint64_t f2p_req_pe               : 1;	/* 13:13 */
        uint64_t f2p_req_super_pkt        : 1;	/* 14:14 */
        uint64_t f2p_req_bad_bit          : 1;	/* 15:15 */
        uint64_t f2p_req_bad_tail         : 1;	/* 16:16 */
        uint64_t f2p_req_buf_ovflow       : 1;	/* 17:17 */
        uint64_t f2p_req_buf_unflow       : 1;	/* 18:18 */
        uint64_t f2p_rsp_sbe              : 1;	/* 19:19 */
        uint64_t f2p_rsp_mbe              : 1;	/* 20:20 */
        uint64_t f2p_rsp_pe               : 1;	/* 21:21 */
        uint64_t f2p_rsp_super_pkt        : 1;	/* 22:22 */
        uint64_t f2p_rsp_bad_bit          : 1;	/* 23:23 */
        uint64_t f2p_rsp_bad_tail         : 1;	/* 24:24 */
        uint64_t f2p_rsp_buf_ovflow       : 1;	/* 25:25 */
        uint64_t f2p_rsp_buf_unflow       : 1;	/* 26:26 */
        uint64_t p2f_req_bad_tgt          : 1;	/* 27:27 */
        uint64_t p2f_req_bad_tgtid        : 1;	/* 28:28 */
        uint64_t p2f_req_bad_vc           : 1;	/* 29:29 */
        uint64_t p2f_req_malformed        : 1;	/* 30:30 */
        uint64_t p2f_req_super_pkt        : 1;	/* 31:31 */
        uint64_t p2f_req_bad_bit          : 1;	/* 32:32 */
        uint64_t p2f_req_bad_crc          : 1;	/* 33:33 */
        uint64_t p2f_req_sbe              : 1;	/* 34:34 */
        uint64_t p2f_req_mbe              : 1;	/* 35:35 */
        uint64_t p2f_req_squash           : 1;	/* 36:36 */
        uint64_t p2f_req_buf_ovflow       : 1;	/* 37:37 */
        uint64_t p2f_req_buf_unflow       : 1;	/* 38:38 */
        uint64_t p2f_rsp_bad_tgt          : 1;	/* 39:39 */
        uint64_t p2f_rsp_bad_tgtid        : 1;	/* 40:40 */
        uint64_t p2f_rsp_bad_vc           : 1;	/* 41:41 */
        uint64_t p2f_rsp_malformed        : 1;	/* 42:42 */
        uint64_t p2f_rsp_super_pkt        : 1;	/* 43:43 */
        uint64_t p2f_rsp_bad_bit          : 1;	/* 44:44 */
        uint64_t p2f_rsp_bad_crc          : 1;	/* 45:45 */
        uint64_t p2f_rsp_sbe              : 1;	/* 46:46 */
        uint64_t p2f_rsp_mbe              : 1;	/* 47:47 */
        uint64_t p2f_rsp_squash           : 1;	/* 48:48 */
        uint64_t p2f_rsp_buf_ovflow       : 1;	/* 49:49 */
        uint64_t p2f_rsp_buf_unflow       : 1;	/* 50:50 */
        uint64_t cntr_ovflow              : 1;	/* 51:51 */
        uint64_t perf_cntr_perr_lo        : 1;	/* 52:52 */
        uint64_t perf_cntr_perr_up        : 1;	/* 53:53 */
        uint64_t lm_cclk_perr             : 1;	/* 54:54 */
        uint64_t lm_lclk_perr             : 1;	/* 55:55 */
        uint64_t lm_cclk_trig1_or_0       : 1;	/* 56:56 */
        uint64_t lm_cclk_trig1_and_0      : 1;	/* 57:57 */
        uint64_t lm_lclk_trig1_or_0       : 1;	/* 58:58 */
        uint64_t lm_lclk_trig1_and_0      : 1;	/* 59:59 */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_os2_msk_desc_t;

typedef union ar_nl_err_os3_msk_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nic_req_bubble           : 1;	/* 1:1 */
        uint64_t nic_req_super_pkt        : 1;	/* 2:2 */
        uint64_t nic_req_buf_ovflow       : 1;	/* 3:3 */
        uint64_t nic_req_buf_unflow       : 1;	/* 4:4 */
        uint64_t nic_req_wedged           : 1;	/* 5:5 */
        uint64_t nic_rsp_bubble           : 1;	/* 6:6 */
        uint64_t nic_rsp_super_pkt        : 1;	/* 7:7 */
        uint64_t nic_rsp_buf_ovflow       : 1;	/* 8:8 */
        uint64_t nic_rsp_buf_unflow       : 1;	/* 9:9 */
        uint64_t nic_rsp_wedged           : 1;	/* 10:10 */
        uint64_t f2p_req_sbe              : 1;	/* 11:11 */
        uint64_t f2p_req_mbe              : 1;	/* 12:12 */
        uint64_t f2p_req_pe               : 1;	/* 13:13 */
        uint64_t f2p_req_super_pkt        : 1;	/* 14:14 */
        uint64_t f2p_req_bad_bit          : 1;	/* 15:15 */
        uint64_t f2p_req_bad_tail         : 1;	/* 16:16 */
        uint64_t f2p_req_buf_ovflow       : 1;	/* 17:17 */
        uint64_t f2p_req_buf_unflow       : 1;	/* 18:18 */
        uint64_t f2p_rsp_sbe              : 1;	/* 19:19 */
        uint64_t f2p_rsp_mbe              : 1;	/* 20:20 */
        uint64_t f2p_rsp_pe               : 1;	/* 21:21 */
        uint64_t f2p_rsp_super_pkt        : 1;	/* 22:22 */
        uint64_t f2p_rsp_bad_bit          : 1;	/* 23:23 */
        uint64_t f2p_rsp_bad_tail         : 1;	/* 24:24 */
        uint64_t f2p_rsp_buf_ovflow       : 1;	/* 25:25 */
        uint64_t f2p_rsp_buf_unflow       : 1;	/* 26:26 */
        uint64_t p2f_req_bad_tgt          : 1;	/* 27:27 */
        uint64_t p2f_req_bad_tgtid        : 1;	/* 28:28 */
        uint64_t p2f_req_bad_vc           : 1;	/* 29:29 */
        uint64_t p2f_req_malformed        : 1;	/* 30:30 */
        uint64_t p2f_req_super_pkt        : 1;	/* 31:31 */
        uint64_t p2f_req_bad_bit          : 1;	/* 32:32 */
        uint64_t p2f_req_bad_crc          : 1;	/* 33:33 */
        uint64_t p2f_req_sbe              : 1;	/* 34:34 */
        uint64_t p2f_req_mbe              : 1;	/* 35:35 */
        uint64_t p2f_req_squash           : 1;	/* 36:36 */
        uint64_t p2f_req_buf_ovflow       : 1;	/* 37:37 */
        uint64_t p2f_req_buf_unflow       : 1;	/* 38:38 */
        uint64_t p2f_rsp_bad_tgt          : 1;	/* 39:39 */
        uint64_t p2f_rsp_bad_tgtid        : 1;	/* 40:40 */
        uint64_t p2f_rsp_bad_vc           : 1;	/* 41:41 */
        uint64_t p2f_rsp_malformed        : 1;	/* 42:42 */
        uint64_t p2f_rsp_super_pkt        : 1;	/* 43:43 */
        uint64_t p2f_rsp_bad_bit          : 1;	/* 44:44 */
        uint64_t p2f_rsp_bad_crc          : 1;	/* 45:45 */
        uint64_t p2f_rsp_sbe              : 1;	/* 46:46 */
        uint64_t p2f_rsp_mbe              : 1;	/* 47:47 */
        uint64_t p2f_rsp_squash           : 1;	/* 48:48 */
        uint64_t p2f_rsp_buf_ovflow       : 1;	/* 49:49 */
        uint64_t p2f_rsp_buf_unflow       : 1;	/* 50:50 */
        uint64_t cntr_ovflow              : 1;	/* 51:51 */
        uint64_t perf_cntr_perr_lo        : 1;	/* 52:52 */
        uint64_t perf_cntr_perr_up        : 1;	/* 53:53 */
        uint64_t lm_cclk_perr             : 1;	/* 54:54 */
        uint64_t lm_lclk_perr             : 1;	/* 55:55 */
        uint64_t lm_cclk_trig1_or_0       : 1;	/* 56:56 */
        uint64_t lm_cclk_trig1_and_0      : 1;	/* 57:57 */
        uint64_t lm_lclk_trig1_or_0       : 1;	/* 58:58 */
        uint64_t lm_lclk_trig1_and_0      : 1;	/* 59:59 */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_os3_msk_desc_t;

typedef union ar_nl_err_first_flg_desc {
    struct {
        // QW0
        uint64_t diag_only                : 1;	/* 0:0 */
        uint64_t nic_req_bubble           : 1;	/* 1:1 */
        uint64_t nic_req_super_pkt        : 1;	/* 2:2 */
        uint64_t nic_req_buf_ovflow       : 1;	/* 3:3 */
        uint64_t nic_req_buf_unflow       : 1;	/* 4:4 */
        uint64_t nic_req_wedged           : 1;	/* 5:5 */
        uint64_t nic_rsp_bubble           : 1;	/* 6:6 */
        uint64_t nic_rsp_super_pkt        : 1;	/* 7:7 */
        uint64_t nic_rsp_buf_ovflow       : 1;	/* 8:8 */
        uint64_t nic_rsp_buf_unflow       : 1;	/* 9:9 */
        uint64_t nic_rsp_wedged           : 1;	/* 10:10 */
        uint64_t f2p_req_sbe              : 1;	/* 11:11 */
        uint64_t f2p_req_mbe              : 1;	/* 12:12 */
        uint64_t f2p_req_pe               : 1;	/* 13:13 */
        uint64_t f2p_req_super_pkt        : 1;	/* 14:14 */
        uint64_t f2p_req_bad_bit          : 1;	/* 15:15 */
        uint64_t f2p_req_bad_tail         : 1;	/* 16:16 */
        uint64_t f2p_req_buf_ovflow       : 1;	/* 17:17 */
        uint64_t f2p_req_buf_unflow       : 1;	/* 18:18 */
        uint64_t f2p_rsp_sbe              : 1;	/* 19:19 */
        uint64_t f2p_rsp_mbe              : 1;	/* 20:20 */
        uint64_t f2p_rsp_pe               : 1;	/* 21:21 */
        uint64_t f2p_rsp_super_pkt        : 1;	/* 22:22 */
        uint64_t f2p_rsp_bad_bit          : 1;	/* 23:23 */
        uint64_t f2p_rsp_bad_tail         : 1;	/* 24:24 */
        uint64_t f2p_rsp_buf_ovflow       : 1;	/* 25:25 */
        uint64_t f2p_rsp_buf_unflow       : 1;	/* 26:26 */
        uint64_t p2f_req_bad_tgt          : 1;	/* 27:27 */
        uint64_t p2f_req_bad_tgtid        : 1;	/* 28:28 */
        uint64_t p2f_req_bad_vc           : 1;	/* 29:29 */
        uint64_t p2f_req_malformed        : 1;	/* 30:30 */
        uint64_t p2f_req_super_pkt        : 1;	/* 31:31 */
        uint64_t p2f_req_bad_bit          : 1;	/* 32:32 */
        uint64_t p2f_req_bad_crc          : 1;	/* 33:33 */
        uint64_t p2f_req_sbe              : 1;	/* 34:34 */
        uint64_t p2f_req_mbe              : 1;	/* 35:35 */
        uint64_t p2f_req_squash           : 1;	/* 36:36 */
        uint64_t p2f_req_buf_ovflow       : 1;	/* 37:37 */
        uint64_t p2f_req_buf_unflow       : 1;	/* 38:38 */
        uint64_t p2f_rsp_bad_tgt          : 1;	/* 39:39 */
        uint64_t p2f_rsp_bad_tgtid        : 1;	/* 40:40 */
        uint64_t p2f_rsp_bad_vc           : 1;	/* 41:41 */
        uint64_t p2f_rsp_malformed        : 1;	/* 42:42 */
        uint64_t p2f_rsp_super_pkt        : 1;	/* 43:43 */
        uint64_t p2f_rsp_bad_bit          : 1;	/* 44:44 */
        uint64_t p2f_rsp_bad_crc          : 1;	/* 45:45 */
        uint64_t p2f_rsp_sbe              : 1;	/* 46:46 */
        uint64_t p2f_rsp_mbe              : 1;	/* 47:47 */
        uint64_t p2f_rsp_squash           : 1;	/* 48:48 */
        uint64_t p2f_rsp_buf_ovflow       : 1;	/* 49:49 */
        uint64_t p2f_rsp_buf_unflow       : 1;	/* 50:50 */
        uint64_t cntr_ovflow              : 1;	/* 51:51 */
        uint64_t perf_cntr_perr_lo        : 1;	/* 52:52 */
        uint64_t perf_cntr_perr_up        : 1;	/* 53:53 */
        uint64_t lm_cclk_perr             : 1;	/* 54:54 */
        uint64_t lm_lclk_perr             : 1;	/* 55:55 */
        uint64_t lm_cclk_trig1_or_0       : 1;	/* 56:56 */
        uint64_t lm_cclk_trig1_and_0      : 1;	/* 57:57 */
        uint64_t lm_lclk_trig1_or_0       : 1;	/* 58:58 */
        uint64_t lm_lclk_trig1_and_0      : 1;	/* 59:59 */
        uint64_t undefine_63_60           : 4;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_first_flg_desc_t;

typedef union ar_nl_err_info_nic_flg_desc {
    struct {
        // QW0
        uint64_t nic0_req_bubble          : 1;	/* Received a bubble from NIC0 Req, inserted tail */
        uint64_t nic1_req_bubble          : 1;	/* Received a bubble from NIC1 Req, inserted tail */
        uint64_t nic2_req_bubble          : 1;	/* Received a bubble from NIC2 Req, inserted tail */
        uint64_t nic3_req_bubble          : 1;	/* Received a bubble from NIC3 Req, inserted tail */
        uint64_t lb_lo_req_bubble         : 1;	/* Received a bubble from LB Req to TILE 0-3, inserted tail */
        uint64_t lb_up_req_bubble         : 1;	/* Received a bubble from LB Req to TILE 4-7, inserted tail */
        uint64_t nic0_req_super_pkt       : 1;	/* Received a super packet from NIC0 Req, inserted tail */
        uint64_t nic1_req_super_pkt       : 1;	/* Received a super packet from NIC1 Req, inserted tail */
        uint64_t nic2_req_super_pkt       : 1;	/* Received a super packet from NIC2 Req, inserted tail */
        uint64_t nic3_req_super_pkt       : 1;	/* Received a super packet from NIC3 Req, inserted tail */
        uint64_t lb_lo_req_super_pkt      : 1;	/* Received a super packet from LB Req to TILE 0-3, inserted tail */
        uint64_t lb_up_req_super_pkt      : 1;	/* Received a super packet from LB Req to TILE 4-7, inserted tail */
        uint64_t nic0_req_buf_ovflow      : 1;	/* NIC0 Req buffer overflow */
        uint64_t nic1_req_buf_ovflow      : 1;	/* NIC1 Req buffer overflow */
        uint64_t nic2_req_buf_ovflow      : 1;	/* NIC2 Req buffer overflow */
        uint64_t nic3_req_buf_ovflow      : 1;	/* NIC3 Req buffer overflow */
        uint64_t lb_lo_req_buf_ovflow     : 1;	/* LB Req to TILE 0-3 buffer overflow */
        uint64_t lb_up_req_buf_ovflow     : 1;	/* LB Req to TILE 4-7 buffer overflow */
        uint64_t nic0_req_buf_unflow      : 1;	/* NIC0 Req buffer underflow */
        uint64_t nic1_req_buf_unflow      : 1;	/* NIC1 Req buffer underflow */
        uint64_t nic2_req_buf_unflow      : 1;	/* NIC2 Req buffer underflow */
        uint64_t nic3_req_buf_unflow      : 1;	/* NIC3 Req buffer underflow */
        uint64_t lb_lo_req_buf_unflow     : 1;	/* LB Req to TILE 0-3 buffer underflow */
        uint64_t lb_up_req_buf_unflow     : 1;	/* LB Req to TILE 4-7 buffer underflow */
        uint64_t nic0_rsp_bubble          : 1;	/* Received a bubble from NIC0 Rsp, inserted tail */
        uint64_t nic1_rsp_bubble          : 1;	/* Received a bubble from NIC1 Rsp, inserted tail */
        uint64_t nic2_rsp_bubble          : 1;	/* Received a bubble from NIC2 Rsp, inserted tail */
        uint64_t nic3_rsp_bubble          : 1;	/* Received a bubble from NIC3 Rsp, inserted tail */
        uint64_t lb_lo_rsp_bubble         : 1;	/* Received a bubble from LB Rsp to TILE 0-3, inserted tail */
        uint64_t lb_up_rsp_bubble         : 1;	/* Received a bubble from LB Rsp to TILE 4-7, inserted tail */
        uint64_t nic0_rsp_super_pkt       : 1;	/* Received a super packet from NIC0 Rsp, inserted tail */
        uint64_t nic1_rsp_super_pkt       : 1;	/* Received a super packet from NIC1 Rsp, inserted tail */
        uint64_t nic2_rsp_super_pkt       : 1;	/* Received a super packet from NIC2 Rsp, inserted tail */
        uint64_t nic3_rsp_super_pkt       : 1;	/* Received a super packet from NIC3 Rsp, inserted tail */
        uint64_t lb_lo_rsp_super_pkt      : 1;	/* Received a super packet from LB Rsp to TILE 0-3, inserted tail */
        uint64_t lb_up_rsp_super_pkt      : 1;	/* Received a super packet from LB Rsp to TILE 4-7, inserted tail */
        uint64_t nic0_rsp_buf_ovflow      : 1;	/* NIC0 Rsp buffer overflow */
        uint64_t nic1_rsp_buf_ovflow      : 1;	/* NIC1 Rsp buffer overflow */
        uint64_t nic2_rsp_buf_ovflow      : 1;	/* NIC2 Rsp buffer overflow */
        uint64_t nic3_rsp_buf_ovflow      : 1;	/* NIC3 Rsp buffer overflow */
        uint64_t lb_lo_rsp_buf_ovflow     : 1;	/* LB Rsp to TILE 0-3 buffer overflow */
        uint64_t lb_up_rsp_buf_ovflow     : 1;	/* LB Rsp to TILE 4-7 buffer overflow */
        uint64_t nic0_rsp_buf_unflow      : 1;	/* NIC0 Rsp buffer underflow */
        uint64_t nic1_rsp_buf_unflow      : 1;	/* NIC1 Rsp buffer underflow */
        uint64_t nic2_rsp_buf_unflow      : 1;	/* NIC2 Rsp buffer underflow */
        uint64_t nic3_rsp_buf_unflow      : 1;	/* NIC3 Rsp buffer underflow */
        uint64_t lb_lo_rsp_buf_unflow     : 1;	/* LB Rsp to TILE 0-3 buffer underflow */
        uint64_t lb_up_rsp_buf_unflow     : 1;	/* LB Rsp to TILE 4-7 buffer underflow */
        uint64_t nic0_req_wedged          : 1;	/* Req packet to NIC0 is wedged */
        uint64_t nic1_req_wedged          : 1;	/* Req packet to NIC1 is wedged */
        uint64_t nic2_req_wedged          : 1;	/* Req packet to NIC2 is wedged */
        uint64_t nic3_req_wedged          : 1;	/* Req packet to NIC3 is wedged */
        uint64_t nic0_rsp_wedged          : 1;	/* Rsp packet to NIC0 is wedged */
        uint64_t nic1_rsp_wedged          : 1;	/* Rsp packet to NIC1 is wedged */
        uint64_t nic2_rsp_wedged          : 1;	/* Rsp packet to NIC2 is wedged */
        uint64_t nic3_rsp_wedged          : 1;	/* Rsp packet to NIC3 wedged */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_nic_flg_desc_t;

typedef union ar_nl_err_info_req_tile2nl_flg_desc {
    struct {
        // QW0
        uint64_t p2f0_bad_tgt_vc          : 1;	/* P2F converter 0 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_REQ_BAD_TGT and P2F_REQ_BAD_TGTID and P2F_REQ_BAD_VC */
        uint64_t p2f1_bad_tgt_vc          : 1;	/* P2F converter 1 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_REQ_BAD_TGT and P2F_REQ_BAD_TGTID and P2F_REQ_BAD_VC */
        uint64_t p2f2_bad_tgt_vc          : 1;	/* P2F converter 2 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_REQ_BAD_TGT and P2F_REQ_BAD_TGTID and P2F_REQ_BAD_VC */
        uint64_t p2f3_bad_tgt_vc          : 1;	/* P2F converter 3 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_REQ_BAD_TGT and P2F_REQ_BAD_TGTID and P2F_REQ_BAD_VC */
        uint64_t p2f4_bad_tgt_vc          : 1;	/* P2F converter 4 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_REQ_BAD_TGT and P2F_REQ_BAD_TGTID and P2F_REQ_BAD_VC */
        uint64_t p2f5_bad_tgt_vc          : 1;	/* P2F converter 5 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_REQ_BAD_TGT and P2F_REQ_BAD_TGTID and P2F_REQ_BAD_VC */
        uint64_t p2f6_bad_tgt_vc          : 1;	/* P2F converter 6 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_REQ_BAD_TGT and P2F_REQ_BAD_TGTID and P2F_REQ_BAD_VC */
        uint64_t p2f7_bad_tgt_vc          : 1;	/* P2F converter 7 detected a packet with a bad Target, bad Target ID, or a bad VC Bit */
        uint64_t p2f0_malformed_pkt       : 1;	/* P2F converter 0 detected a malformed Packet */
        uint64_t p2f1_malformed_pkt       : 1;	/* P2F converter 1 detected a malformed Packet */
        uint64_t p2f2_malformed_pkt       : 1;	/* P2F converter 2 detected a malformed Packet */
        uint64_t p2f3_malformed_pkt       : 1;	/* P2F converter 3 detected a malformed Packet */
        uint64_t p2f4_malformed_pkt       : 1;	/* P2F converter 4 detected a malformed Packet */
        uint64_t p2f5_malformed_pkt       : 1;	/* P2F converter 5 detected a malformed Packet */
        uint64_t p2f6_malformed_pkt       : 1;	/* P2F converter 6 detected a malformed Packet */
        uint64_t p2f7_malformed_pkt       : 1;	/* P2F converter 7 detected a malformed Packet */
        uint64_t p2f0_super_pkt           : 1;	/* P2F converter 0 detected a super packet */
        uint64_t p2f1_super_pkt           : 1;	/* P2F converter 1 detected a super packet */
        uint64_t p2f2_super_pkt           : 1;	/* P2F converter 2 detected a super packet */
        uint64_t p2f3_super_pkt           : 1;	/* P2F converter 3 detected a super packet */
        uint64_t p2f4_super_pkt           : 1;	/* P2F converter 4 detected a super packet */
        uint64_t p2f5_super_pkt           : 1;	/* P2F converter 5 detected a super packet */
        uint64_t p2f6_super_pkt           : 1;	/* P2F converter 6 detected a super packet */
        uint64_t p2f7_super_pkt           : 1;	/* P2F converter 7 detected a super packet */
        uint64_t p2f0_bad_bit             : 1;	/* P2F converter 0 detected a packet with the b bit set */
        uint64_t p2f1_bad_bit             : 1;	/* P2F converter 1 detected a packet with the b bit set */
        uint64_t p2f2_bad_bit             : 1;	/* P2F converter 2 detected a packet with the b bit set */
        uint64_t p2f3_bad_bit             : 1;	/* P2F converter 3 detected a packet with the b bit set */
        uint64_t p2f4_bad_bit             : 1;	/* P2F converter 4 detected a packet with the b bit set */
        uint64_t p2f5_bad_bit             : 1;	/* P2F converter 5 detected a packet with the b bit set */
        uint64_t p2f6_bad_bit             : 1;	/* P2F converter 6 detected a packet with the b bit set */
        uint64_t p2f7_bad_bit             : 1;	/* P2F converter 7 detected a packet with the b bit set */
        uint64_t p2f0_bad_crc             : 1;	/* P2F converter 0 detected a packet with a bad CRC */
        uint64_t p2f1_bad_crc             : 1;	/* P2F converter 1 detected a packet with a bad CRC */
        uint64_t p2f2_bad_crc             : 1;	/* P2F converter 2 detected a packet with a bad CRC */
        uint64_t p2f3_bad_crc             : 1;	/* P2F converter 3 detected a packet with a bad CRC */
        uint64_t p2f4_bad_crc             : 1;	/* P2F converter 4 detected a packet with a bad CRC */
        uint64_t p2f5_bad_crc             : 1;	/* P2F converter 5 detected a packet with a bad CRC */
        uint64_t p2f6_bad_crc             : 1;	/* P2F converter 6 detected a packet with a bad CRC */
        uint64_t p2f7_bad_crc             : 1;	/* P2F converter 7 detected a packet with a bad CRC */
        uint64_t p2f0_buf_ovflow          : 1;	/* P2F converter 0 detected a buffer overflow */
        uint64_t p2f1_buf_ovflow          : 1;	/* P2F converter 1 detected a buffer overflow */
        uint64_t p2f2_buf_ovflow          : 1;	/* P2F converter 2 detected a buffer overflow */
        uint64_t p2f3_buf_ovflow          : 1;	/* P2F converter 3 detected a buffer overflow */
        uint64_t p2f4_buf_ovflow          : 1;	/* P2F converter 4 detected a buffer overflow */
        uint64_t p2f5_buf_ovflow          : 1;	/* P2F converter 5 detected a buffer overflow */
        uint64_t p2f6_buf_ovflow          : 1;	/* P2F converter 6 detected a buffer overflow */
        uint64_t p2f7_buf_ovflow          : 1;	/* P2F converter 7 detected a buffer overflow */
        uint64_t p2f0_buf_unflow          : 1;	/* P2F converter 0 detected a buffer underflow */
        uint64_t p2f1_buf_unflow          : 1;	/* P2F converter 1 detected a buffer underflow */
        uint64_t p2f2_buf_unflow          : 1;	/* P2F converter 2 detected a buffer underflow */
        uint64_t p2f3_buf_unflow          : 1;	/* P2F converter 3 detected a buffer underflow */
        uint64_t p2f4_buf_unflow          : 1;	/* P2F converter 4 detected a buffer underflow */
        uint64_t p2f5_buf_unflow          : 1;	/* P2F converter 5 detected a buffer underflow */
        uint64_t p2f6_buf_unflow          : 1;	/* P2F converter 6 detected a buffer underflow */
        uint64_t p2f7_buf_unflow          : 1;	/* P2F converter 7 detected a buffer underflow */
        uint64_t p2f0_squashed_pkt        : 1;	/* P2F converter 0 squashed a packet */
        uint64_t p2f1_squashed_pkt        : 1;	/* P2F converter 1 squashed a packet */
        uint64_t p2f2_squashed_pkt        : 1;	/* P2F converter 2 squashed a packet */
        uint64_t p2f3_squashed_pkt        : 1;	/* P2F converter 3 squashed a packet */
        uint64_t p2f4_squashed_pkt        : 1;	/* P2F converter 4 squashed a packet */
        uint64_t p2f5_squashed_pkt        : 1;	/* P2F converter 5 squashed a packet */
        uint64_t p2f6_squashed_pkt        : 1;	/* P2F converter 6 squashed a packet */
        uint64_t p2f7_squashed_pkt        : 1;	/* P2F converter 7 squashed a packet */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_tile2nl_flg_desc_t;

typedef union ar_nl_err_info_rsp_tile2nl_flg_desc {
    struct {
        // QW0
        uint64_t p2f0_bad_tgt_vc          : 1;	/* P2F converter 0 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_RSP_BAD_TGT and P2F_RSP_BAD_TGTID and P2F_RSP_BAD_VC */
        uint64_t p2f1_bad_tgt_vc          : 1;	/* P2F converter 1 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_RSP_BAD_TGT and P2F_RSP_BAD_TGTID and P2F_RSP_BAD_VC */
        uint64_t p2f2_bad_tgt_vc          : 1;	/* P2F converter 2 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_RSP_BAD_TGT and P2F_RSP_BAD_TGTID and P2F_RSP_BAD_VC */
        uint64_t p2f3_bad_tgt_vc          : 1;	/* P2F converter 3 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_RSP_BAD_TGT and P2F_RSP_BAD_TGTID and P2F_RSP_BAD_VC */
        uint64_t p2f4_bad_tgt_vc          : 1;	/* P2F converter 4 detected a packet with a bad Target, bad Target ID, or a bad VC Bit */
        uint64_t p2f5_bad_tgt_vc          : 1;	/* P2F converter 5 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_RSP_BAD_TGT and P2F_RSP_BAD_TGTID and P2F_RSP_BAD_VC */
        uint64_t p2f6_bad_tgt_vc          : 1;	/* P2F converter 6 detected a packet with a bad Target, bad Target ID, or a bad VC Bit Corresponds to P2F_RSP_BAD_TGT and P2F_RSP_BAD_TGTID and P2F_RSP_BAD_VC */
        uint64_t p2f7_bad_tgt_vc          : 1;	/* P2F converter 7 detected a packet with a bad Target (16 bit node id), bad Target ID (2 bit NIC id) or a bad VC Bit */
        uint64_t p2f0_malformed_pkt       : 1;	/* P2F converter 0 detected a malformed Packet */
        uint64_t p2f1_malformed_pkt       : 1;	/* P2F converter 1 detected a malformed Packet */
        uint64_t p2f2_malformed_pkt       : 1;	/* P2F converter 2 detected a malformed Packet */
        uint64_t p2f3_malformed_pkt       : 1;	/* P2F converter 3 detected a malformed Packet */
        uint64_t p2f4_malformed_pkt       : 1;	/* P2F converter 4 detected a malformed Packet */
        uint64_t p2f5_malformed_pkt       : 1;	/* P2F converter 5 detected a malformed Packet */
        uint64_t p2f6_malformed_pkt       : 1;	/* P2F converter 6 detected a malformed Packet */
        uint64_t p2f7_malformed_pkt       : 1;	/* P2F converter 7 detected a malformed Packet */
        uint64_t p2f0_super_pkt           : 1;	/* P2F converter 0 detected a super packet */
        uint64_t p2f1_super_pkt           : 1;	/* P2F converter 1 detected a super packet */
        uint64_t p2f2_super_pkt           : 1;	/* P2F converter 2 detected a super packet */
        uint64_t p2f3_super_pkt           : 1;	/* P2F converter 3 detected a super packet */
        uint64_t p2f4_super_pkt           : 1;	/* P2F converter 4 detected a super packet */
        uint64_t p2f5_super_pkt           : 1;	/* P2F converter 5 detected a super packet */
        uint64_t p2f6_super_pkt           : 1;	/* P2F converter 6 detected a super packet */
        uint64_t p2f7_super_pkt           : 1;	/* P2F converter 7 detected a super packet */
        uint64_t p2f0_bad_bit             : 1;	/* P2F converter 0 detected a packet with the b bit set */
        uint64_t p2f1_bad_bit             : 1;	/* P2F converter 1 detected a packet with the b bit set */
        uint64_t p2f2_bad_bit             : 1;	/* P2F converter 2 detected a packet with the b bit set */
        uint64_t p2f3_bad_bit             : 1;	/* P2F converter 3 detected a packet with the b bit set */
        uint64_t p2f4_bad_bit             : 1;	/* P2F converter 4 detected a packet with the b bit set */
        uint64_t p2f5_bad_bit             : 1;	/* P2F converter 5 detected a packet with the b bit set */
        uint64_t p2f6_bad_bit             : 1;	/* P2F converter 6 detected a packet with the b bit set */
        uint64_t p2f7_bad_bit             : 1;	/* P2F converter 7 detected a packet with the b bit set */
        uint64_t p2f0_bad_crc             : 1;	/* P2F converter 0 detected a packet with a bad CRC */
        uint64_t p2f1_bad_crc             : 1;	/* P2F converter 1 detected a packet with a bad CRC */
        uint64_t p2f2_bad_crc             : 1;	/* P2F converter 2 detected a packet with a bad CRC */
        uint64_t p2f3_bad_crc             : 1;	/* P2F converter 3 detected a packet with a bad CRC */
        uint64_t p2f4_bad_crc             : 1;	/* P2F converter 4 detected a packet with a bad CRC */
        uint64_t p2f5_bad_crc             : 1;	/* P2F converter 5 detected a packet with a bad CRC */
        uint64_t p2f6_bad_crc             : 1;	/* P2F converter 6 detected a packet with a bad CRC */
        uint64_t p2f7_bad_crc             : 1;	/* P2F converter 7 detected a packet with a bad CRC */
        uint64_t p2f0_buf_ovflow          : 1;	/* P2F converter 0 detected a buffer overflow */
        uint64_t p2f1_buf_ovflow          : 1;	/* P2F converter 1 detected a buffer overflow */
        uint64_t p2f2_buf_ovflow          : 1;	/* P2F converter 2 detected a buffer overflow */
        uint64_t p2f3_buf_ovflow          : 1;	/* P2F converter 3 detected a buffer overflow */
        uint64_t p2f4_buf_ovflow          : 1;	/* P2F converter 4 detected a buffer overflow */
        uint64_t p2f5_buf_ovflow          : 1;	/* P2F converter 5 detected a buffer overflow */
        uint64_t p2f6_buf_ovflow          : 1;	/* P2F converter 6 detected a buffer overflow */
        uint64_t p2f7_buf_ovflow          : 1;	/* P2F converter 7 detected a buffer overflow */
        uint64_t p2f0_buf_unflow          : 1;	/* P2F converter 0 detected a buffer underflow */
        uint64_t p2f1_buf_unflow          : 1;	/* P2F converter 1 detected a buffer underflow */
        uint64_t p2f2_buf_unflow          : 1;	/* P2F converter 2 detected a buffer underflow */
        uint64_t p2f3_buf_unflow          : 1;	/* P2F converter 3 detected a buffer underflow */
        uint64_t p2f4_buf_unflow          : 1;	/* P2F converter 4 detected a buffer underflow */
        uint64_t p2f5_buf_unflow          : 1;	/* P2F converter 5 detected a buffer underflow */
        uint64_t p2f6_buf_unflow          : 1;	/* P2F converter 6 detected a buffer underflow */
        uint64_t p2f7_buf_unflow          : 1;	/* P2F converter 7 detected a buffer underflow */
        uint64_t p2f0_squashed_pkt        : 1;	/* P2F converter 0 squashed a packet */
        uint64_t p2f1_squashed_pkt        : 1;	/* P2F converter 1 squashed a packet */
        uint64_t p2f2_squashed_pkt        : 1;	/* P2F converter 2 squashed a packet */
        uint64_t p2f3_squashed_pkt        : 1;	/* P2F converter 3 squashed a packet */
        uint64_t p2f4_squashed_pkt        : 1;	/* P2F converter 4 squashed a packet */
        uint64_t p2f5_squashed_pkt        : 1;	/* P2F converter 5 squashed a packet */
        uint64_t p2f6_squashed_pkt        : 1;	/* P2F converter 6 squashed a packet */
        uint64_t p2f7_squashed_pkt        : 1;	/* P2F converter 7 squashed a packet */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_tile2nl_flg_desc_t;

typedef union ar_nl_err_info_req_nl2tile_flg_desc {
    struct {
        // QW0
        uint64_t f2p0_bad_tail            : 1;	/* F2P converter 0 detected a bad tail */
        uint64_t f2p1_bad_tail            : 1;	/* F2P converter 1 detected a bad tail */
        uint64_t f2p2_bad_tail            : 1;	/* F2P converter 2 detected a bad tail */
        uint64_t f2p3_bad_tail            : 1;	/* F2P converter 3 detected a bad tail */
        uint64_t f2p4_bad_tail            : 1;	/* F2P converter 4 detected a bad tail */
        uint64_t f2p5_bad_tail            : 1;	/* F2P converter 5 detected a bad tail */
        uint64_t f2p6_bad_tail            : 1;	/* F2P converter 6 detected a bad tail */
        uint64_t f2p7_bad_tail            : 1;	/* F2P converter 7 detected a bad tail */
        uint64_t f2p0_super_pkt           : 1;	/* F2P converter 0 detected a super packet */
        uint64_t f2p1_super_pkt           : 1;	/* F2P converter 1 detected a super packet */
        uint64_t f2p2_super_pkt           : 1;	/* F2P converter 2 detected a super packet */
        uint64_t f2p3_super_pkt           : 1;	/* F2P converter 3 detected a super packet */
        uint64_t f2p4_super_pkt           : 1;	/* F2P converter 4 detected a super packet */
        uint64_t f2p5_super_pkt           : 1;	/* F2P converter 5 detected a super packet */
        uint64_t f2p6_super_pkt           : 1;	/* F2P converter 6 detected a super packet */
        uint64_t f2p7_super_pkt           : 1;	/* F2P converter 7 detected a super packet */
        uint64_t f2p0_bad_bit             : 1;	/* P2F converter 0 set the b bit in an outgoing packet */
        uint64_t f2p1_bad_bit             : 1;	/* P2F converter 1 set the b bit in an outgoing packet */
        uint64_t f2p2_bad_bit             : 1;	/* P2F converter 2 set the b bit in an outgoing packet */
        uint64_t f2p3_bad_bit             : 1;	/* P2F converter 3 set the b bit in an outgoing packet */
        uint64_t f2p4_bad_bit             : 1;	/* P2F converter 4 set the b bit in an outgoing packet */
        uint64_t f2p5_bad_bit             : 1;	/* P2F converter 5 set the b bit in an outgoing packet */
        uint64_t f2p6_bad_bit             : 1;	/* P2F converter 6 set the b bit in an outgoing packet */
        uint64_t f2p7_bad_bit             : 1;	/* P2F converter 7 set the b bit in an outgoing packet */
        uint64_t f2p0_buf_ovflow          : 1;	/* F2P converter 0 detected a buffer overflow */
        uint64_t f2p1_buf_ovflow          : 1;	/* F2P converter 1 detected a buffer overflow */
        uint64_t f2p2_buf_ovflow          : 1;	/* F2P converter 2 detected a buffer overflow */
        uint64_t f2p3_buf_ovflow          : 1;	/* F2P converter 3 detected a buffer overflow */
        uint64_t f2p4_buf_ovflow          : 1;	/* F2P converter 4 detected a buffer overflow */
        uint64_t f2p5_buf_ovflow          : 1;	/* F2P converter 5 detected a buffer overflow */
        uint64_t f2p6_buf_ovflow          : 1;	/* F2P converter 6 detected a buffer overflow */
        uint64_t f2p7_buf_ovflow          : 1;	/* F2P converter 7 detected a buffer overflow */
        uint64_t f2p0_buf_unflow          : 1;	/* F2P converter 0 detected a buffer underflow */
        uint64_t f2p1_buf_unflow          : 1;	/* F2P converter 1 detected a buffer underflow */
        uint64_t f2p2_buf_unflow          : 1;	/* F2P converter 2 detected a buffer underflow */
        uint64_t f2p3_buf_unflow          : 1;	/* F2P converter 3 detected a buffer underflow */
        uint64_t f2p4_buf_unflow          : 1;	/* F2P converter 4 detected a buffer underflow */
        uint64_t f2p5_buf_unflow          : 1;	/* F2P converter 5 detected a buffer underflow */
        uint64_t f2p6_buf_unflow          : 1;	/* F2P converter 6 detected a buffer underflow */
        uint64_t f2p7_buf_unflow          : 1;	/* F2P converter 7 detected a buffer underflow */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_nl2tile_flg_desc_t;

typedef union ar_nl_err_info_rsp_nl2tile_flg_desc {
    struct {
        // QW0
        uint64_t f2p0_bad_tail            : 1;	/* F2P converter 0 detected a bad tail */
        uint64_t f2p1_bad_tail            : 1;	/* F2P converter 1 detected a bad tail */
        uint64_t f2p2_bad_tail            : 1;	/* F2P converter 2 detected a bad tail */
        uint64_t f2p3_bad_tail            : 1;	/* F2P converter 3 detected a bad tail */
        uint64_t f2p4_bad_tail            : 1;	/* F2P converter 4 detected a bad tail */
        uint64_t f2p5_bad_tail            : 1;	/* F2P converter 5 detected a bad tail */
        uint64_t f2p6_bad_tail            : 1;	/* F2P converter 6 detected a bad tail */
        uint64_t f2p7_bad_tail            : 1;	/* F2P converter 7 detected a bad tail */
        uint64_t f2p0_super_pkt           : 1;	/* F2P converter 0 detected a super packet */
        uint64_t f2p1_super_pkt           : 1;	/* F2P converter 1 detected a super packet */
        uint64_t f2p2_super_pkt           : 1;	/* F2P converter 2 detected a super packet */
        uint64_t f2p3_super_pkt           : 1;	/* F2P converter 3 detected a super packet */
        uint64_t f2p4_super_pkt           : 1;	/* F2P converter 4 detected a super packet */
        uint64_t f2p5_super_pkt           : 1;	/* F2P converter 5 detected a super packet */
        uint64_t f2p6_super_pkt           : 1;	/* F2P converter 6 detected a super packet */
        uint64_t f2p7_super_pkt           : 1;	/* F2P converter 7 detected a super packet */
        uint64_t f2p0_bad_bit             : 1;	/* P2F converter 0 set the b bit in an outgoing packet */
        uint64_t f2p1_bad_bit             : 1;	/* P2F converter 1 set the b bit in an outgoing packet */
        uint64_t f2p2_bad_bit             : 1;	/* P2F converter 2 set the b bit in an outgoing packet */
        uint64_t f2p3_bad_bit             : 1;	/* P2F converter 3 set the b bit in an outgoing packet */
        uint64_t f2p4_bad_bit             : 1;	/* P2F converter 4 set the b bit in an outgoing packet */
        uint64_t f2p5_bad_bit             : 1;	/* P2F converter 5 set the b bit in an outgoing packet */
        uint64_t f2p6_bad_bit             : 1;	/* P2F converter 6 set the b bit in an outgoing packet */
        uint64_t f2p7_bad_bit             : 1;	/* P2F converter 7 set the b bit in an outgoing packet */
        uint64_t f2p0_buf_ovflow          : 1;	/* F2P converter 0 detected a buffer overflow */
        uint64_t f2p1_buf_ovflow          : 1;	/* F2P converter 1 detected a buffer overflow */
        uint64_t f2p2_buf_ovflow          : 1;	/* F2P converter 2 detected a buffer overflow */
        uint64_t f2p3_buf_ovflow          : 1;	/* F2P converter 3 detected a buffer overflow */
        uint64_t f2p4_buf_ovflow          : 1;	/* F2P converter 4 detected a buffer overflow */
        uint64_t f2p5_buf_ovflow          : 1;	/* F2P converter 5 detected a buffer overflow */
        uint64_t f2p6_buf_ovflow          : 1;	/* F2P converter 6 detected a buffer overflow */
        uint64_t f2p7_buf_ovflow          : 1;	/* F2P converter 7 detected a buffer overflow */
        uint64_t f2p0_buf_unflow          : 1;	/* F2P converter 0 detected a buffer underflow */
        uint64_t f2p1_buf_unflow          : 1;	/* F2P converter 1 detected a buffer underflow */
        uint64_t f2p2_buf_unflow          : 1;	/* F2P converter 2 detected a buffer underflow */
        uint64_t f2p3_buf_unflow          : 1;	/* F2P converter 3 detected a buffer underflow */
        uint64_t f2p4_buf_unflow          : 1;	/* F2P converter 4 detected a buffer underflow */
        uint64_t f2p5_buf_unflow          : 1;	/* F2P converter 5 detected a buffer underflow */
        uint64_t f2p6_buf_unflow          : 1;	/* F2P converter 6 detected a buffer underflow */
        uint64_t f2p7_buf_unflow          : 1;	/* F2P converter 7 detected a buffer underflow */
        uint64_t undefine_63_40           :24;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_nl2tile_flg_desc_t;

typedef union ar_nl_nic_buffer_status_desc {
    struct {
        // QW0
        uint64_t nic0_req_buf_empty       : 1;	/* NIC 0 Input Request buffer is empty */
        uint64_t nic1_req_buf_empty       : 1;	/* NIC 1 Input Request buffer is empty */
        uint64_t nic2_req_buf_empty       : 1;	/* NIC 2 Input Request buffer is empty */
        uint64_t nic3_req_buf_empty       : 1;	/* NIC 3 Input Request buffer is empty */
        uint64_t nic0_rsp_buf_empty       : 1;	/* NIC 0 Input Response buffer is empty */
        uint64_t nic1_rsp_buf_empty       : 1;	/* NIC 1 Input Response buffer is empty */
        uint64_t nic2_rsp_buf_empty       : 1;	/* NIC 2 Input Response buffer is empty */
        uint64_t nic3_rsp_buf_empty       : 1;	/* NIC 3 Input Response buffer is empty */
        uint64_t undefine_63_8            :56;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_nic_buffer_status_desc_t;

typedef union ar_nl_err_info_req_f2p_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t pe_syndrome              : 4;	/* Quadrant in which the parity error occurred */
        uint64_t sbe_syndrome             : 8;	/* SBE syndrome */
        uint64_t mbe_syndrome             : 8;	/* MBE syndrome */
        uint64_t sbe_upper                : 1;	/* If set, the SBE error occurred in the upper 72 bits of the NIC Flit */
        uint64_t mbe_upper                : 1;	/* If set, the MBE error occurred in the upper 72 bits of the NIC Flit */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t pe_port                  : 8;	/* Request F2P converter in which the parity error has occurred */
        uint64_t sbe_port                 : 8;	/* Request F2P converter in which the single bit error has occurred */
        uint64_t mbe_port                 : 8;	/* Request F2P converter in which the multiple bit error has occurred */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_f2p_desc_t;

typedef union ar_nl_err_info_req_cnt_pe_f2p_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Parity Errors that have occurred in the F2P converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_cnt_pe_f2p_desc_t;

typedef union ar_nl_err_info_req_cnt_sbe_f2p_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Single Bit Errors that have occurred in the F2P converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_cnt_sbe_f2p_desc_t;

typedef union ar_nl_err_info_req_cnt_mbe_f2p_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Multiple Bit Errors that have occurred in the F2P converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_cnt_mbe_f2p_desc_t;

typedef union ar_nl_err_info_rsp_f2p_desc {
    struct {
        // QW0
        uint64_t undefine_3_0             : 4;	/* undefined */
        uint64_t pe_syndrome              : 4;	/* Quadrant in which the parity error occurred */
        uint64_t sbe_syndrome             : 8;	/* SBE syndrome */
        uint64_t mbe_syndrome             : 8;	/* MBE syndrome */
        uint64_t sbe_upper                : 1;	/* If set, the SBE error occurred in the upper 72 bits of the NIC Flit */
        uint64_t mbe_upper                : 1;	/* If set, the MBE error occurred in the upper 72 bits of the NIC Flit */
        uint64_t undefine_31_26           : 6;	/* undefined */
        uint64_t pe_port                  : 8;	/* Response F2P converter in which the parity error has occurred */
        uint64_t sbe_port                 : 8;	/* Response F2P converter in which the single bit error has occurred */
        uint64_t mbe_port                 : 8;	/* Response F2P converter in which the multiple bit error has occurred */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_f2p_desc_t;

typedef union ar_nl_err_info_rsp_cnt_pe_f2p_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Parity Errors that have occurred in the F2P converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_cnt_pe_f2p_desc_t;

typedef union ar_nl_err_info_rsp_cnt_sbe_f2p_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Single Bit Errors that have occurred in the F2P converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_cnt_sbe_f2p_desc_t;

typedef union ar_nl_err_info_rsp_cnt_mbe_f2p_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Multiple Bit Errors that have occurred in the F2P converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_cnt_mbe_f2p_desc_t;

typedef union ar_nl_dbg_errinj_f2p_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t enable                   : 1;	/* Enable Error Injection */
                uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error in Nth flit of one packet Mode 3: Inject error in Nth flit of all packets */
                uint64_t triggered                : 1;	/* This status bit should be clear when the MMR is written by software */
                uint64_t cnt                      : 6;	/* Flit in which to inject the error */
                uint64_t undefine_11_10           : 2;	/* undefined */
                uint64_t parity                   : 4;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the parity in the header to be inverted */
                uint64_t checkbytelo              : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 63:0 to be inverted */
                uint64_t checkbyteup              : 8;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 135:72 to be inverted */
                uint64_t port_sel                 : 3;	/* Specifies which F2P converter the error is injected on */
                uint64_t req_rsp_sel              : 1;	/* Specifies which group of F2P converters the error is injected on */
                uint64_t undefine_q0_f0_63_36     :28;	/* undefined */
            };
            struct {
                uint64_t used                     :36;	/*  */
                uint64_t undefine_q0_f1_63_36     :28;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nl_dbg_errinj_f2p_desc_t;

typedef union ar_nl_err_info_req_p2f_desc {
    struct {
        // QW0
        uint64_t undefine_7_0             : 8;	/* undefined */
        uint64_t sbe_syndrome             : 8;	/* SBE syndrome */
        uint64_t mbe_syndrome             : 8;	/* MBE syndrome */
        uint64_t undefine_39_24           :16;	/* undefined */
        uint64_t sbe_port                 : 8;	/* Request P2F converter in which the single bit error has occurred */
        uint64_t mbe_port                 : 8;	/* Request P2F converter in which the multiple bit error has occurred */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_p2f_desc_t;

typedef union ar_nl_err_info_req_cnt_sbe_p2f_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Single Bit Errors that have occurred in the P2F converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_cnt_sbe_p2f_desc_t;

typedef union ar_nl_err_info_req_cnt_mbe_p2f_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Multiple Bit Errors that have occurred in the P2F converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_cnt_mbe_p2f_desc_t;

typedef union ar_nl_err_info_rsp_p2f_desc {
    struct {
        // QW0
        uint64_t undefine_7_0             : 8;	/* undefined */
        uint64_t sbe_syndrome             : 8;	/* SBE syndrome */
        uint64_t mbe_syndrome             : 8;	/* MBE syndrome */
        uint64_t undefine_39_24           :16;	/* undefined */
        uint64_t sbe_port                 : 8;	/* Response P2F converter in which the single bit error has occurred */
        uint64_t mbe_port                 : 8;	/* Response P2F converter in which the multiple bit error has occurred */
        uint64_t undefine_63_56           : 8;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_p2f_desc_t;

typedef union ar_nl_err_info_rsp_cnt_sbe_p2f_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Single Bit Errors that have occurred in the P2F converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_cnt_sbe_p2f_desc_t;

typedef union ar_nl_err_info_rsp_cnt_mbe_p2f_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Multiple Bit Errors that have occurred in the P2F converters */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_cnt_mbe_p2f_desc_t;

typedef union ar_nl_dbg_errinj_p2f_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t enable                   : 1;	/* Enable Error Injection */
                uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error in Nth flit of one packet Mode 3: Inject error in Nth flit of all packets */
                uint64_t triggered                : 1;	/* This status bit should be clear when the MMR is written by software */
                uint64_t cnt                      : 6;	/* Flit in which to inject the error */
                uint64_t undefine_15_10           : 6;	/* undefined */
                uint64_t checkbyte                : 7;	/* When an error is injected, each bit that is set to one in this field causes the corresponding bit of the error detection syndrome for data bits 63:0 to be inverted */
                uint64_t undefine_31_23           : 9;	/* undefined */
                uint64_t port_sel                 : 3;	/* Specifies which P2F converter the error is injected on */
                uint64_t req_rsp_sel              : 1;	/* Specifies which group of P2F converter the error is injected on */
                uint64_t undefine_q0_f0_63_36     :28;	/* undefined */
            };
            struct {
                uint64_t used                     :36;	/*  */
                uint64_t undefine_q0_f1_63_36     :28;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nl_dbg_errinj_p2f_desc_t;

typedef union ar_nl_err_info_pc_desc {
    struct {
        // QW0
        uint64_t perr_lo                  : 1;	/* Parity Error occurred in PC lower */
        uint64_t perr_up                  : 1;	/* Parity Error occurred in PC upper */
        uint64_t mmr_detected_perr_lo     : 1;	/* The PE was observed during an MMR read of PC Lower */
        uint64_t mmr_detected_perr_up     : 1;	/* The PE was observed during an MMR read of PC upper */
        uint64_t undefine_7_4             : 4;	/* undefined */
        uint64_t perr_addr_lo             : 8;	/* Parity Error Address PC lower */
        uint64_t perr_addr_up             : 8;	/* Parity Error Address PC upper */
        uint64_t undefine_63_24           :40;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_pc_desc_t;

typedef union ar_nl_err_info_cnt_perr_pc_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Number of Parity Errors that have occurred */
    };
    uint64_t qwords[1];
} ar_nl_err_info_cnt_perr_pc_desc_t;

typedef union ar_nl_dbg_errinj_pc_desc {
    struct {
        // QW0 - OVERLOADED FIELDS
        union {
            struct {
                uint64_t enable                   : 1;	/* Enable Error Injection */
                uint64_t mode                     : 2;	/* Mode 0: Inject error once Mode 1: Inject error always Mode 2: Inject error once if address matches Mode 3: Inject error always if address matches */
                uint64_t triggered                : 1;	/* This status bit should be clear when the MMR is written by software */
                uint64_t undefine_11_4            : 8;	/* undefined */
                uint64_t parity                   : 4;	/* When an error is injected, each bit that is set to one in this field causes the corresponding parity bit to be inverted */
                uint64_t undefine_31_16           :16;	/* undefined */
                uint64_t address                  : 8;	/* RAM Address */
                uint64_t undefine_q0_f0_63_40     :24;	/* undefined */
            };
            struct {
                uint64_t used                     :40;	/*  */
                uint64_t undefine_q0_f1_63_40     :24;	/* undefined */
            };
        };
    };
    uint64_t qwords[1];
} ar_nl_dbg_errinj_pc_desc_t;

typedef union ar_nl_err_info_req_bad_bit_cnt_desc {
    struct {
        // QW0
        uint64_t p2f0_cnt                 : 8;	/* Number of packets received by the request P2F converter 0 with the b bit set */
        uint64_t p2f1_cnt                 : 8;	/* Number of packets received by the request P2F converter 1 with the b bit set */
        uint64_t p2f2_cnt                 : 8;	/* Number of packets received by the request P2F converter 2 with the b bit set */
        uint64_t p2f3_cnt                 : 8;	/* Number of packets received by the request P2F converter 3 with the b bit set */
        uint64_t p2f4_cnt                 : 8;	/* Number of packets received by the request P2F converter 4 with the b bit set */
        uint64_t p2f5_cnt                 : 8;	/* Number of packets received by the request P2F converter 5 with the b bit set */
        uint64_t p2f6_cnt                 : 8;	/* Number of packets received by the request P2F converter 6 with the b bit set */
        uint64_t p2f7_cnt                 : 8;	/* Number of packets received by the request P2F converter 7 with the b bit set */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_bad_bit_cnt_desc_t;

typedef union ar_nl_err_info_rsp_bad_bit_cnt_desc {
    struct {
        // QW0
        uint64_t p2f0_cnt                 : 8;	/* Number of packets received by the response P2F converter 0 with the b bit set */
        uint64_t p2f1_cnt                 : 8;	/* Number of packets received by the response P2F converter 1 with the b bit set */
        uint64_t p2f2_cnt                 : 8;	/* Number of packets received by the response P2F converter 2 with the b bit set */
        uint64_t p2f3_cnt                 : 8;	/* Number of packets received by the response P2F converter 3 with the b bit set */
        uint64_t p2f4_cnt                 : 8;	/* Number of packets received by the response P2F converter 4 with the b bit set */
        uint64_t p2f5_cnt                 : 8;	/* Number of packets received by the response P2F converter 5 with the b bit set */
        uint64_t p2f6_cnt                 : 8;	/* Number of packets received by the response P2F converter 6 with the b bit set */
        uint64_t p2f7_cnt                 : 8;	/* Number of packets received by the response P2F converter 7 with the b bit set */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_bad_bit_cnt_desc_t;

typedef union ar_nl_err_info_req_bad_crc_cnt_desc {
    struct {
        // QW0
        uint64_t p2f0_cnt                 : 8;	/* Number of packets received by the request P2F converter 0 with bad CRC */
        uint64_t p2f1_cnt                 : 8;	/* Number of packets received by the request P2F converter 1 with bad CRC */
        uint64_t p2f2_cnt                 : 8;	/* Number of packets received by the request P2F converter 2 with bad CRC */
        uint64_t p2f3_cnt                 : 8;	/* Number of packets received by the request P2F converter 3 with bad CRC */
        uint64_t p2f4_cnt                 : 8;	/* Number of packets received by the request P2F converter 4 with bad CRC */
        uint64_t p2f5_cnt                 : 8;	/* Number of packets received by the request P2F converter 5 with bad CRC */
        uint64_t p2f6_cnt                 : 8;	/* Number of packets received by the request P2F converter 6 with bad CRC */
        uint64_t p2f7_cnt                 : 8;	/* Number of packets received by the request P2F converter 7 with bad CRC */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_bad_crc_cnt_desc_t;

typedef union ar_nl_err_info_rsp_bad_crc_cnt_desc {
    struct {
        // QW0
        uint64_t p2f0_cnt                 : 8;	/* Number of packets received by the response P2F converter 0 with bad CRC */
        uint64_t p2f1_cnt                 : 8;	/* Number of packets received by the response P2F converter 1 with bad CRC */
        uint64_t p2f2_cnt                 : 8;	/* Number of packets received by the response P2F converter 2 with bad CRC */
        uint64_t p2f3_cnt                 : 8;	/* Number of packets received by the response P2F converter 3 with bad CRC */
        uint64_t p2f4_cnt                 : 8;	/* Number of packets received by the response P2F converter 4 with bad CRC */
        uint64_t p2f5_cnt                 : 8;	/* Number of packets received by the response P2F converter 5 with bad CRC */
        uint64_t p2f6_cnt                 : 8;	/* Number of packets received by the response P2F converter 6 with bad CRC */
        uint64_t p2f7_cnt                 : 8;	/* Number of packets received by the response P2F converter 7 with bad CRC */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_bad_crc_cnt_desc_t;

typedef union ar_nl_err_info_req_squash_cnt_desc {
    struct {
        // QW0
        uint64_t p2f0_cnt                 : 8;	/* Number of packets received by the request P2F converter 0 that have been squashed */
        uint64_t p2f1_cnt                 : 8;	/* Number of packets received by the request P2F converter 1 that have been squashed */
        uint64_t p2f2_cnt                 : 8;	/* Number of packets received by the request P2F converter 2 that have been squashed */
        uint64_t p2f3_cnt                 : 8;	/* Number of packets received by the request P2F converter 3 that have been squashed */
        uint64_t p2f4_cnt                 : 8;	/* Number of packets received by the request P2F converter 4 that have been squashed */
        uint64_t p2f5_cnt                 : 8;	/* Number of packets received by the request P2F converter 5 that have been squashed */
        uint64_t p2f6_cnt                 : 8;	/* Number of packets received by the request P2F converter 6 that have been squashed */
        uint64_t p2f7_cnt                 : 8;	/* Number of packets received by the request P2F converter 7 that have been squashed */
    };
    uint64_t qwords[1];
} ar_nl_err_info_req_squash_cnt_desc_t;

typedef union ar_nl_err_info_rsp_squash_cnt_desc {
    struct {
        // QW0
        uint64_t p2f0_cnt                 : 8;	/* Number of packets received by the response P2F converter 0 that have been squashed */
        uint64_t p2f1_cnt                 : 8;	/* Number of packets received by the response P2F converter 1 that have been squashed */
        uint64_t p2f2_cnt                 : 8;	/* Number of packets received by the response P2F converter 2 that have been squashed */
        uint64_t p2f3_cnt                 : 8;	/* Number of packets received by the response P2F converter 3 that have been squashed */
        uint64_t p2f4_cnt                 : 8;	/* Number of packets received by the response P2F converter 4 that have been squashed */
        uint64_t p2f5_cnt                 : 8;	/* Number of packets received by the response P2F converter 5 that have been squashed */
        uint64_t p2f6_cnt                 : 8;	/* Number of packets received by the response P2F converter 6 that have been squashed */
        uint64_t p2f7_cnt                 : 8;	/* Number of packets received by the response P2F converter 7 that have been squashed */
    };
    uint64_t qwords[1];
} ar_nl_err_info_rsp_squash_cnt_desc_t;

typedef union ar_nl_err_info_cnt_clr_desc {
    struct {
        // QW0
        uint64_t req_bad_bit_byte_0       : 1;	/* When written as a one, clears byte 0 in the NW Req Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t req_bad_bit_byte_1       : 1;	/* When written as a one, clears byte 1 in the NW Req Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t req_bad_bit_byte_2       : 1;	/* When written as a one, clears byte 2 in the NW Req Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t req_bad_bit_byte_3       : 1;	/* When written as a one, clears byte 3 in the NW Req Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t req_bad_bit_byte_4       : 1;	/* When written as a one, clears byte 4 in the NW Req Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t req_bad_bit_byte_5       : 1;	/* When written as a one, clears byte 5 in the NW Req Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t req_bad_bit_byte_6       : 1;	/* When written as a one, clears byte 6 in the NW Req Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t req_bad_bit_byte_7       : 1;	/* When written as a one, clears byte 7 in the NW Req Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t rsp_bad_bit_byte_0       : 1;	/* When written as a one, clears byte 0 in the NW Rsp Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t rsp_bad_bit_byte_1       : 1;	/* When written as a one, clears byte 1 in the NW Rsp Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t rsp_bad_bit_byte_2       : 1;	/* When written as a one, clears byte 2 in the NW Rsp Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t rsp_bad_bit_byte_3       : 1;	/* When written as a one, clears byte 3 in the NW Rsp Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t rsp_bad_bit_byte_4       : 1;	/* When written as a one, clears byte 4 in the NW Rsp Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t rsp_bad_bit_byte_5       : 1;	/* When written as a one, clears byte 5 in the NW Rsp Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t rsp_bad_bit_byte_6       : 1;	/* When written as a one, clears byte 6 in the NW Rsp Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t rsp_bad_bit_byte_7       : 1;	/* When written as a one, clears byte 7 in the NW Rsp Flit to NIC Flit Bad Bit Counter MMR */
        uint64_t req_bad_crc_byte_0       : 1;	/* When written as a one, clears byte 0 in the NW Req Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t req_bad_crc_byte_1       : 1;	/* When written as a one, clears byte 1 in the NW Req Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t req_bad_crc_byte_2       : 1;	/* When written as a one, clears byte 2 in the NW Req Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t req_bad_crc_byte_3       : 1;	/* When written as a one, clears byte 3 in the NW Req Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t req_bad_crc_byte_4       : 1;	/* When written as a one, clears byte 4 in the NW Req Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t req_bad_crc_byte_5       : 1;	/* When written as a one, clears byte 5 in the NW Req Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t req_bad_crc_byte_6       : 1;	/* When written as a one, clears byte 6 in the NW Req Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t req_bad_crc_byte_7       : 1;	/* When written as a one, clears byte 7 in the NW Req Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t rsp_bad_crc_byte_0       : 1;	/* When written as a one, clears byte 0 in the NW Rsp Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t rsp_bad_crc_byte_1       : 1;	/* When written as a one, clears byte 1 in the NW Rsp Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t rsp_bad_crc_byte_2       : 1;	/* When written as a one, clears byte 2 in the NW Rsp Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t rsp_bad_crc_byte_3       : 1;	/* When written as a one, clears byte 3 in the NW Rsp Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t rsp_bad_crc_byte_4       : 1;	/* When written as a one, clears byte 4 in the NW Rsp Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t rsp_bad_crc_byte_5       : 1;	/* When written as a one, clears byte 5 in the NW Rsp Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t rsp_bad_crc_byte_6       : 1;	/* When written as a one, clears byte 6 in the NW Rsp Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t rsp_bad_crc_byte_7       : 1;	/* When written as a one, clears byte 7 in the NW Rsp Flit to NIC Flit Bad CRC Counter MMR */
        uint64_t req_squash_byte_0        : 1;	/* When written as a one, clears byte 0 in the NW Req Flit to NIC Flit Squash Counter MMR */
        uint64_t req_squash_byte_1        : 1;	/* When written as a one, clears byte 1 in the NW Req Flit to NIC Flit Squash Counter MMR */
        uint64_t req_squash_byte_2        : 1;	/* When written as a one, clears byte 2 in the NW Req Flit to NIC Flit Squash Counter MMR */
        uint64_t req_squash_byte_3        : 1;	/* When written as a one, clears byte 3 in the NW Req Flit to NIC Flit Squash Counter MMR */
        uint64_t req_squash_byte_4        : 1;	/* When written as a one, clears byte 4 in the NW Req Flit to NIC Flit Squash Counter MMR */
        uint64_t req_squash_byte_5        : 1;	/* When written as a one, clears byte 5 in the NW Req Flit to NIC Flit Squash Counter MMR */
        uint64_t req_squash_byte_6        : 1;	/* When written as a one, clears byte 6 in the NW Req Flit to NIC Flit Squash Counter MMR */
        uint64_t req_squash_byte_7        : 1;	/* When written as a one, clears byte 7 in the NW Req Flit to NIC Flit Squash Counter MMR */
        uint64_t rsp_squash_byte_0        : 1;	/* When written as a one, clears byte 0 in the NW Rsp Flit to NIC Flit Squash Counter MMR */
        uint64_t rsp_squash_byte_1        : 1;	/* When written as a one, clears byte 1 in the NW Rsp Flit to NIC Flit Squash Counter MMR */
        uint64_t rsp_squash_byte_2        : 1;	/* When written as a one, clears byte 2 in the NW Rsp Flit to NIC Flit Squash Counter MMR */
        uint64_t rsp_squash_byte_3        : 1;	/* When written as a one, clears byte 3 in the NW Rsp Flit to NIC Flit Squash Counter MMR */
        uint64_t rsp_squash_byte_4        : 1;	/* When written as a one, clears byte 4 in the NW Rsp Flit to NIC Flit Squash Counter MMR */
        uint64_t rsp_squash_byte_5        : 1;	/* When written as a one, clears byte 5 in the NW Rsp Flit to NIC Flit Squash Counter MMR */
        uint64_t rsp_squash_byte_6        : 1;	/* When written as a one, clears byte 6 in the NW Rsp Flit to NIC Flit Squash Counter MMR */
        uint64_t rsp_squash_byte_7        : 1;	/* When written as a one, clears byte 7 in the NW Rsp Flit to NIC Flit Squash Counter MMR */
        uint64_t undefine_63_48           :16;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_err_info_cnt_clr_desc_t;

typedef union ar_nl_prf_cntr_desc {
    struct {
        // QW0
        uint64_t cnt                      ;	/* Performance Counters and Scratch Registers */
    };
    uint64_t qwords[1];
} ar_nl_prf_cntr_desc_t;

typedef union ar_nl_prf_cntr_lower_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Performance Counter */
    };
    uint64_t qwords[1];
} ar_nl_prf_cntr_lower_desc_t;

typedef union ar_nl_prf_scratch_0_desc {
    struct {
        // QW0
        uint64_t scratch                  ;	/* Scratch register */
    };
    uint64_t qwords[1];
} ar_nl_prf_scratch_0_desc_t;

typedef union ar_nl_prf_cntr_upper_desc {
    struct {
        // QW0
        uint64_t count                    ;	/* Performance Counter */
    };
    uint64_t qwords[1];
} ar_nl_prf_cntr_upper_desc_t;

typedef union ar_nl_prf_scratch_1_desc {
    struct {
        // QW0
        uint64_t scratch                  ;	/* Scratch register */
    };
    uint64_t qwords[1];
} ar_nl_prf_scratch_1_desc_t;

typedef union ar_nl_prf_ctrl_desc {
    struct {
        // QW0
        uint64_t counters_clear           : 1;	/* This bit becomes set upon the completion of the clear sequence */
        uint64_t sel_lm_triggers          : 1;	/* Select logic monitor triggers */
        uint64_t undefine_46_2            :45;	/* undefined */
        uint64_t clear                    : 1;	/* Initiates the clear sequence which clears al l performance counters, read returns zero */
        uint64_t enable                   : 1;	/* Writing a 1'b1 enables performance counters, writing 1'b0 disable counting */
        uint64_t disable_auto_update      : 1;	/* Disables the auto-updating of the performance counters, turns off widget */
        uint64_t undefine_63_50           :14;	/* undefined */
    };
    uint64_t qwords[1];
} ar_nl_prf_ctrl_desc_t;


#endif
