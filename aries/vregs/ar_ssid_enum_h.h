/******************************************************************************
 * COPYRIGHT CRAY INC. ar_ssid_enum_h.h
 * FILE: ar_ssid_enum_h.h
 * Created by v2h.c on Wed Oct  8 14:39:03 2014
 ******************************************************************************/

#ifndef _AR_SSID_ENUM_H_H_
#define _AR_SSID_ENUM_H_H_

#define SSID_MEMERRLOC_REQ_FIFO                                     	0x0ull
#define SSID_MEMERRLOC_RSP_FIFO                                     	0x1ull
#define SSID_MEMERRLOC_FLUSHRSP_FIFO                                	0x2ull
#define SSID_MEMERRLOC_FREE_SSID_FIFO                               	0x3ull
#define SSID_MEMERRLOC_PENDING_SEQCMPLT_FIFO                        	0x4ull
#define SSID_MEMERRLOC_PENDING_MRC_FIFO                             	0x5ull
#define SSID_MEMERRLOC_PENDING_RSPCMD_FIFO                          	0x6ull
#define SSID_MEMERRLOC_PENDING_STALESSID_FIFO                       	0x7ull
#define SSID_MEMERRLOC_BYPASSED_REQUEST_FIFO                        	0x8ull
#define SSID_MEMERRLOC_CHANSTATEMEM_PROCREQ                         	0xcull
#define SSID_MEMERRLOC_CHANSTATEMEM_MMR                             	0xdull
#define SSID_MEMERRLOC_REQMEM_PROCREQ                               	0xeull
#define SSID_MEMERRLOC_REQMEM_MMR                                   	0xfull
#define SSID_MEMERRLOC_REQRSPMEM_PROCREQ                            	0x10ull
#define SSID_MEMERRLOC_REQRSPMEM_PROCRSP                            	0x11ull
#define SSID_MEMERRLOC_REQRSPMEM_MMR                                	0x12ull
#define SSID_MEMERRLOC_REQCQMEM_PROCREQ                             	0x13ull
#define SSID_MEMERRLOC_REQCQMEM_PROCSEQCMPLT                        	0x14ull
#define SSID_MEMERRLOC_REQCQMEM_MMR                                 	0x15ull
#define SSID_MEMERRLOC_RSPMEM_PROCRSP                               	0x16ull
#define SSID_MEMERRLOC_RSPMEM_PROCSEQCMPLT                          	0x17ull
#define SSID_MEMERRLOC_RSPMEM_PROCSTALESSID                         	0x18ull
#define SSID_MEMERRLOC_RSPMEM_MMR                                   	0x19ull

#endif
