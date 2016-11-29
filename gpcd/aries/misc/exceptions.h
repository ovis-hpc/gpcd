/*
 * Exception Defines.
 * Copyright 2012 Cray Inc. All Rights Reserved.
 */
#ifndef EXCEPTIONS_DEFS			// Check to see if these defines are already called
#define EXCEPTIONS_DEFS	 1		// Make sure they are not called again
	#define   EXCEPTIONS_BASE_ADDR              	0x0000000	// Base Loop Address for MMR Verilog
	#define   A_EC_CRIT                         	0x80 	// Critical Error
	#define   A_EC_UXACT                        	0x40 	// Unknown Transaction Error
	#define   A_EC_XACT                         	0x20 	// Transaction Error
	#define   A_EC_XLAT                         	0x10 	// Address Translation Error
	#define   A_EC_XIENT                        	0x08 	// Transient Error
	#define   A_EC_CORR                         	0x04 	// Correctable Error
	#define   A_EC_INFO                         	0x02 	// Informational
	#define   A_EC_DIAG                         	0x01 	// Diagnostic
	#define   A_STATUS_OK                       	0x00 	// Okay
	#define   A_STATUS_REQ_DISABLED             	0x01 	// Operation Disabled
	#define   A_STATUS_REQ_ILLEGAL_CMD          	0x02 	// Illegal Request Command
	#define   A_STATUS_REQ_ILLEGAL_ADDR         	0x03 	// Illegal Request Address
	#define   A_STATUS_REQ_ILLEGAL_SIZE         	0x04 	// Illegal Request Size
	#define   A_STATUS_REQ_INSUFFICIENT_PRIV    	0x05 	// Insufficient Request Privilege
	#define   A_STATUS_PKT_MALFORMED_CMD        	0x06 	// Malformed Packet Command
	#define   A_STATUS_PKT_MALFORMED_ADDR       	0x07 	// Malformed Packet Address
	#define   A_STATUS_PKT_MALFORMED_SIZE       	0x08 	// Malformed Packet Size
	#define   A_STATUS_PKT_MALFORMED_RESERVED   	0x09 	// Malformed Packet Reserved
	#define   A_STATUS_PKT_MISROUTED            	0x0a 	// Misrouted Packet
	#define   A_STATUS_DATA_ERR                 	0x0b 	// Uncorrectable Error in Payload
	#define   A_STATUS_DATA_POISON              	0x0c 	// Poisoned Data
	#define   A_STATUS_AT_VMDHCAM_MALFORMED     	0x0d 	// VMDH CAM Malformed
	#define   A_STATUS_AT_MDD_UNCORRECTABLE     	0x0e 	// Uncorrectable Error Reading MDD
	#define   A_STATUS_AT_MDD_INV               	0x0f 	// MDD Invalid
	#define   A_STATUS_AT_MDD_MALFORMED         	0x10 	// MDD Malformed
	#define   A_STATUS_AT_MDD_WR_PERMISSION_ERR 	0x11 	// Write Permission Error
	#define   A_STATUS_AT_BOUNDS_ERR            	0x12 	// Memory Bounds Error
	#define   A_STATUS_AT_PTT_UNCORRECTABLE     	0x13 	// Uncorrectable Error Reading PTT
	#define   A_STATUS_AT_PROTECTION_ERR        	0x14 	// Protection Error
	#define   A_STATUS_AT_TCE_UNCORRECTABLE     	0x15 	// Uncorrectable Error Reading TCE
	#define   A_STATUS_AT_TCE_INV               	0x16 	// TCE Invalid
	#define   A_STATUS_AT_PF_UNCORRECTABLE      	0x17 	// Page Fault, Uncorrectable Error
	#define   A_STATUS_AT_PF_TIMEOUT            	0x18 	// Page Fault, Timeout
	#define   A_STATUS_AT_PF_INV                	0x19 	// Page Fault, Invalid
	#define   A_STATUS_AT_PF_MALFORMED          	0x1a 	// Page Fault, Malformed
	#define   A_STATUS_AT_PF_RD_PERMISSION_ERR  	0x1b 	// Page Fault, Read Permission Error
	#define   A_STATUS_AT_PF_WR_PERMISSION_ERR  	0x1c 	// Page Fault, Write Permission Error
	#define   A_STATUS_AT_UNCORRECTABLE         	0x1d 	// Uncorrectable Error in Translation Response
	#define   A_STATUS_PE_BOUNDS_ERR            	0x1e 	// Processing Elements Bounds Error
	#define   A_STATUS_FMA_UNCORRECTABLE        	0x1f 	// Uncorrectable FMA State
	#define   A_STATUS_DLA_OVERFLOW             	0x20 	// DLA Allocation Overflow
	#define   A_STATUS_BTE_UNCORRECTABLE        	0x21 	// Uncorrectable BTE State
	#define   A_STATUS_BTE_SEQUENCE_TERMINATE   	0x22 	// Sequence Terminated Prematurely
	#define   A_STATUS_BTE_TIMEOUT              	0x23 	// BTE Timeout
	#define   A_STATUS_MSG_PROTOCOL_ERR         	0x24 	// Message Protocol Error
	#define   A_STATUS_SSID_UNCORRECTABLE       	0x25 	// Uncorrectable SSID State
	#define   A_STATUS_SSID_PKT_MALFORMED_SIZE  	0x26 	// SSID Malformed Packet
	#define   A_STATUS_SSID_TIMEOUT             	0x27 	// Stale SSID Timeout
	#define   A_STATUS_RMT_DESC_UNCORRECTABLE   	0x28 	// Uncorrectable Error Reading Rx Descriptor
	#define   A_STATUS_RMT_DESC_UNAVAILABLE     	0x29 	// Rx Descriptor Unavailable
	#define   A_STATUS_RMT_SEQTBL_UNCORRECTABLE 	0x2a 	// Uncorrectable Error Reading RMT Sequence Table
	#define   A_STATUS_RMT_CAM_UNCORRECTABLE    	0x2b 	// Uncorrectable Error in RMT Rx CAM Tags
	#define   A_STATUS_RMT_SEQTBL_UNAVAILABLE   	0x2c 	// BTE_Send Receive Allocation Error
	#define   A_STATUS_RMT_BUF_OVERRUN          	0x2d 	// BTE_Send Receive Buffer Overrun
	#define   A_STATUS_RMT_TIMEOUT              	0x2e 	// RMT Timeout
	#define   A_STATUS_CQ_OVERRUN               	0x2f 	// CQ Overrun
	#define   A_STATUS_CQ_ERR                   	0x30 	// CQ Error
	#define   A_STATUS_CE_UNCORRECTABLE         	0x31 	// Uncorrectable CE State
	#define   A_STATUS_CE_OPERATION_UNEXPECTED  	0x32 	// CE Operation Unexpected
	#define   A_STATUS_CE_JOIN_DUPLICATE        	0x33 	// CE Duplicate Join
	#define   A_STATUS_CE_JOIN_CHILD_INV        	0x34 	// CE Invalid Join
	#define   A_STATUS_CE_JOIN_INCONSISTENT     	0x35 	// CE Join Inconsistent
	#define   A_STATUS_CE_PROTECTION_ERR        	0x36 	// CE Protection Error
	#define   A_STATUS_CE_REDUCTION_ID_MISMATCH 	0x37 	// CE Reduction ID Mismatch
	#define   A_STATUS_AMO_CACHE_ERR            	0x38 	// AMO Cache Error
	#define   A_STATUS_ORB_TIMEOUT              	0x39 	// ORB Request Timeout
	#define   A_STATUS_PI_ERR                   	0x3a 	// Processor Interface Error
	#define   A_STATUS_PI_TIMEOUT               	0x3b 	// Processor Interface Timeout
	#define   A_STATUS_WC_TAG_UNCORRECTABLE     	0x3c 	// Uncorrectable Error in WC Tags
	#define   A_STATUS_ENDPOINT_UNREACHABLE     	0x3d 	// Endpoint Unreachable
	#define   A_STATUS_RESERVED_3E              	0x3e 	// Reserved for future use.
	#define   A_STATUS_RESERVED_3F              	0x3f 	// Reserved for future use.
	#define   A_NIC_NAT_OK                      	0x0  	// No Error
	#define   A_NIC_NAT_VMDHCAM_MULTIHIT        	0x1  	// Multiple Matching Entries in VMDH CAM
	#define   A_NIC_NAT_PMDH_OVFLW              	0x2  	// Out of Range: Virtual MDH + VMDH CAM Base MDH
	#define   A_NIC_NAT_MDD_MBE                 	0x3  	// MBE on MDD Read
	#define   A_NIC_NAT_MDD_INV                 	0x4  	// MDD Disabled
	#define   A_NIC_NAT_MDD_MAL                 	0x5  	// MDD Malformed
	#define   A_NIC_NAT_WR_PERM                 	0x6  	// Write Permission Error
	#define   A_NIC_NAT_PADDR_OVFLW             	0x7  	// Physical Address Exceeds Maximum Architectural Address
	#define   A_NIC_NAT_PADDR_BOUNDS            	0x8  	// Physical Address Exceeds Maximum Base Address in MDD
	#define   A_NIC_NAT_PTAG_MISMATCH           	0x9  	// PTAG (if available) Mismatch with PTAG in MDD
	#define   A_NIC_NAT_PTT_MBE                 	0xa  	// MBE on PTT Read.
	#define   A_NIC_NAT_PKEY_MISMATCH           	0xb  	// PKEY (if available) Mismatch with PKEY in PTT
	#define   A_NIC_NAT_RESERVED_C              	0xc  	// Reserved for future NAT errors.
	#define   A_NIC_NAT_RESERVED_D              	0xd  	// Reserved for future NAT errors.
	#define   A_NIC_NAT_RESERVED_E              	0xe  	// Reserved for future NAT errors.
	#define   A_NIC_NAT_RESERVED_F              	0xf  	// Reserved for future NAT errors.
	#define   A_NIC_IOMMU_OK                    	0x0  	// No Error. Remapped to A_NIC_NAT_OK when forming the 5-bit error code and hence considered an invalid encoding when creating an error status.
	#define   A_NIC_IOMMU_TCE_MBE               	0x1  	// Translation Context Entry MBE
	#define   A_NIC_IOMMU_TCE_INV               	0x2  	// Translation Context Entry Disabled
	#define   A_NIC_IOMMU_PF_CACHE_MBE          	0x3  	// Page Fault, MBE on Page Table Entry (PTE) Read from Cache
	#define   A_NIC_IOMMU_PF_MEM_MBE            	0x4  	// Page Fault, MBE or unexpected error on PTE Read from Memory
	#define   A_NIC_IOMMU_PF_MEM_TIMEOUT        	0x5  	// Page Fault, PTE Read Timeout
	#define   A_NIC_IOMMU_PF_PR                 	0x6  	// Page Fault, PTE Not Present
	#define   A_NIC_IOMMU_PF_RZ                 	0x7  	// Page Fault, Reserved Fields in PTE Not Zero
	#define   A_NIC_IOMMU_PF_RPE                	0x8  	// Page Fault, Read Permission Error
	#define   A_NIC_IOMMU_PF_WPE                	0x9  	// Page Fault, Write Permission Error
	#define   A_NIC_IOMMU_PF_NPE                	0xa  	// Page Fault, No Permission Error (AMO operation with both read and write permission errors)
	#define   A_NIC_IOMMU_RESERVED_B            	0xb  	// Reserved for future IOMMU errors.
	#define   A_NIC_IOMMU_RESERVED_C            	0xc  	// Reserved for future IOMMU errors.
	#define   A_NIC_IOMMU_RESERVED_D            	0xd  	// Reserved for future IOMMU errors.
	#define   A_NIC_IOMMU_RESERVED_E            	0xe  	// Reserved for future IOMMU errors.
	#define   A_NIC_IOMMU_RESERVED_F            	0xf  	// Reserved for future IOMMU errors.
#endif 			// EXCEPTIONS_DEFS
