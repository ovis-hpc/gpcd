/******************************************************************************
 * COPYRIGHT CRAY INC. ar_sb_detailed_mmrs_h.h
 * FILE: ar_sb_detailed_mmrs_h.h
 * Created by v2h.c on Wed Oct  8 14:38:58 2014
 ******************************************************************************/
/**
 * @file ar_sb_detailed_mmrs_h.h
 * @author v2h.c on Wed Oct  8 14:38:58 2014
 * @section overview Overview:
 *	    Sets up ar_detailed_mmr_t and ar_detailed_mmrd_t structs for each MMR/MMR subfield with constants
 *	    found in ar_sb_mmr_values.h and ar_sb_defs.h. Then puts each ar_detailed_mmr_t set up
 *	    into an array. Used by the Cray MMR Access Library.
 */

#include "ar_sb_mmr_values.h"

#ifndef _AR_SB_DETAILED_MMRS_H_H_
#define _AR_SB_DETAILED_MMRS_H_H_

#ifndef _CMMR_FR_T_
#define _CMMR_FR_T_
/**
 * @struct cmmr_fr_s
 * Gemini Detailed MMR Field Descriptor
 * @see cmmr_br_s
 *
 * The Detailed MMR Field Descriptor contains information about individual
 * fields of a MMR in an ASIC. Used by the Cray MMR Access Library.
 *
 */
typedef struct cmmr_fr_s{
	char* _name;		/**< Field name */
	uint32_t _bpos;		/**< Field bit postion relative to QW */
	uint64_t _mask;		/**< Field bit mask relative to QW */
	uint64_t _rval;		/**< Reset data relative to QW */
	uint64_t _type_bitmsk;	/**< Field Type Bit Mask */
	int _index;		/**< QW Index */
	char* _desc;		/**< Field Description */
	char* _access;		/**< Field Access */
} cmmr_fr_t; /**< cmmr_fr_s */
#endif

#ifndef _CMMR_BR_T_
#define _CMMR_BR_T_
/**
 * @struct cmmr_br_s
 * Gemini Detailed MMR Descriptor
 * @see cmmr_fr_s
 *
 * The Detailed MMR contains information about a individual MMR in an ASIC.
 * Used by the Cray MMR Access Library.
 *
 */
typedef struct cmmr_br_s{
	char* _name;			/**< MMR name */
	uint64_t _addr;			/**< MMR address */
	uint64_t _type_bitmsk;		/**< MMR Type Bit Mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _rval;	/**< Reset data */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _rmsk;	/**< Reset mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _wrmsk;	/**< Write mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _rdmsk;	/**< Read mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _xsmsk;	/**< XState mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _wsemsk;	/**< Write only with side effects */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _rsemsk;	/**< Read only with side effects */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _w1smsk;	/**< Write okay but only 1's stick */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _w1cmsk;	/**< Write of 1 clears bit */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _wrstmsk;	/**< Warm Reset Mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _hwwmsk;	/**< Hardware Write Mask */
	union{
		uint64_t val;
		uint64_t *ptr;
	} _hwrmsk;	/**< Hardware Read Mask */
	int _nqw;			/**< Number of QW */
	int _size;			/**< Size in bytes of MMR */
	int _incr;			/**< Increment between table entries */
	int _depth;			/**< Number of MMR instances */
	const cmmr_fr_t *_info;	/**< MMR detail */
} cmmr_br_t; /**< cmmr_br_s */
#endif

static const cmmr_br_t* __ar_sb_mmrs[];	/* SB Array */

/*
 *  AR SB MMR DETAIL DECLARATIONS
 */
static const cmmr_fr_t __ar_sb_hpet_cap_detail[] = {
    { ._name = "CLK_PERIOD",
      ._bpos = AR_SB_HPET_CAP_CLK_PERIOD_BP,
      ._mask = AR_SB_HPET_CAP_CLK_PERIOD_MASK,
      ._rval = AR_SB_HPET_CAP_RSTDATA & AR_SB_HPET_CAP_CLK_PERIOD_MASK,
      ._index = AR_SB_HPET_CAP_CLK_PERIOD_QW,
      ._desc = "Main Counter Tick Period: This read-only field indicates the period at which the counter increments in femtoseconds (10^-15 seconds)",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = "VENDOR_ID",
      ._bpos = AR_SB_HPET_CAP_VENDOR_ID_BP,
      ._mask = AR_SB_HPET_CAP_VENDOR_ID_MASK,
      ._rval = AR_SB_HPET_CAP_RSTDATA & AR_SB_HPET_CAP_VENDOR_ID_MASK,
      ._index = AR_SB_HPET_CAP_VENDOR_ID_QW,
      ._desc = "This read-only field will be the same as what would be assigned if this logic was a PCI function",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = "LEG_RT_CAP",
      ._bpos = AR_SB_HPET_CAP_LEG_RT_CAP_BP,
      ._mask = AR_SB_HPET_CAP_LEG_RT_CAP_MASK,
      ._rval = AR_SB_HPET_CAP_RSTDATA & AR_SB_HPET_CAP_LEG_RT_CAP_MASK,
      ._index = AR_SB_HPET_CAP_LEG_RT_CAP_QW,
      ._desc = "Legacy Replacement Route Capable: If this bit is a 1, it indicates that the hardware supports the Legacy Replacement Interrupt Route option",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = "COUNT_SIZE_CAP",
      ._bpos = AR_SB_HPET_CAP_COUNT_SIZE_CAP_BP,
      ._mask = AR_SB_HPET_CAP_COUNT_SIZE_CAP_MASK,
      ._rval = AR_SB_HPET_CAP_RSTDATA & AR_SB_HPET_CAP_COUNT_SIZE_CAP_MASK,
      ._index = AR_SB_HPET_CAP_COUNT_SIZE_CAP_QW,
      ._desc = "Counter Size: This bit is a 0 to indicate that the main counter is 32 bits wide (and cannot operate in 64-bit mode)",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = "NUM_TIM_CAP",
      ._bpos = AR_SB_HPET_CAP_NUM_TIM_CAP_BP,
      ._mask = AR_SB_HPET_CAP_NUM_TIM_CAP_MASK,
      ._rval = AR_SB_HPET_CAP_RSTDATA & AR_SB_HPET_CAP_NUM_TIM_CAP_MASK,
      ._index = AR_SB_HPET_CAP_NUM_TIM_CAP_QW,
      ._desc = "Number of Timers: This indicates the number of timers in this block",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = "REV_ID",
      ._bpos = AR_SB_HPET_CAP_REV_ID_BP,
      ._mask = AR_SB_HPET_CAP_REV_ID_MASK,
      ._rval = AR_SB_HPET_CAP_RSTDATA & AR_SB_HPET_CAP_REV_ID_MASK,
      ._index = AR_SB_HPET_CAP_REV_ID_QW,
      ._desc = "This indicates which revision of the function is implemented",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_config_detail[] = {
    { ._name = "LEG_RT_CNF",
      ._bpos = AR_SB_HPET_CONFIG_LEG_RT_CNF_BP,
      ._mask = AR_SB_HPET_CONFIG_LEG_RT_CNF_MASK,
      ._rval = AR_SB_HPET_CONFIG_RSTDATA & AR_SB_HPET_CONFIG_LEG_RT_CNF_MASK,
      ._index = AR_SB_HPET_CONFIG_LEG_RT_CNF_QW,
      ._desc = "Legacy Replacement Route",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HNA"
    },
    { ._name = "ENABLE_CNF",
      ._bpos = AR_SB_HPET_CONFIG_ENABLE_CNF_BP,
      ._mask = AR_SB_HPET_CONFIG_ENABLE_CNF_MASK,
      ._rval = AR_SB_HPET_CONFIG_RSTDATA & AR_SB_HPET_CONFIG_ENABLE_CNF_MASK,
      ._index = AR_SB_HPET_CONFIG_ENABLE_CNF_QW,
      ._desc = "Overall Enable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_isr_detail[] = {
    { ._name = "T2_INT_STS",
      ._bpos = AR_SB_HPET_ISR_T2_INT_STS_BP,
      ._mask = AR_SB_HPET_ISR_T2_INT_STS_MASK,
      ._rval = AR_SB_HPET_ISR_RSTDATA & AR_SB_HPET_ISR_T2_INT_STS_MASK,
      ._index = AR_SB_HPET_ISR_T2_INT_STS_QW,
      ._desc = "Timer 2 Interrupt Active",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW1C,HWO"
    },
    { ._name = "T1_INT_STS",
      ._bpos = AR_SB_HPET_ISR_T1_INT_STS_BP,
      ._mask = AR_SB_HPET_ISR_T1_INT_STS_MASK,
      ._rval = AR_SB_HPET_ISR_RSTDATA & AR_SB_HPET_ISR_T1_INT_STS_MASK,
      ._index = AR_SB_HPET_ISR_T1_INT_STS_QW,
      ._desc = "Timer 1 Interrupt Active",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW1C,HWO"
    },
    { ._name = "T0_INT_STS",
      ._bpos = AR_SB_HPET_ISR_T0_INT_STS_BP,
      ._mask = AR_SB_HPET_ISR_T0_INT_STS_MASK,
      ._rval = AR_SB_HPET_ISR_RSTDATA & AR_SB_HPET_ISR_T0_INT_STS_MASK,
      ._index = AR_SB_HPET_ISR_T0_INT_STS_QW,
      ._desc = "Timer 0 Interrupt Active",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW1C,HWO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_mcv_detail[] = {
    { ._name = "MCV",
      ._bpos = AR_SB_HPET_MCV_MCV_BP,
      ._mask = AR_SB_HPET_MCV_MCV_MASK,
      ._rval = AR_SB_HPET_MCV_RSTDATA & AR_SB_HPET_MCV_MCV_MASK,
      ._index = AR_SB_HPET_MCV_MCV_QW,
      ._desc = "Main Counter",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_t0_conf_detail[] = {
    { ._name = "VAL_SET_CNF",
      ._bpos = AR_SB_HPET_T0_CONF_VAL_SET_CNF_BP,
      ._mask = AR_SB_HPET_T0_CONF_VAL_SET_CNF_MASK,
      ._rval = AR_SB_HPET_T0_CONF_RSTDATA & AR_SB_HPET_T0_CONF_VAL_SET_CNF_MASK,
      ._index = AR_SB_HPET_T0_CONF_VAL_SET_CNF_QW,
      ._desc = "Value Set",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "SIZE",
      ._bpos = AR_SB_HPET_T0_CONF_SIZE_BP,
      ._mask = AR_SB_HPET_T0_CONF_SIZE_MASK,
      ._rval = AR_SB_HPET_T0_CONF_RSTDATA & AR_SB_HPET_T0_CONF_SIZE_MASK,
      ._index = AR_SB_HPET_T0_CONF_SIZE_QW,
      ._desc = "Timer Size = 32 bit",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = "PER_INT_CAP",
      ._bpos = AR_SB_HPET_T0_CONF_PER_INT_CAP_BP,
      ._mask = AR_SB_HPET_T0_CONF_PER_INT_CAP_MASK,
      ._rval = AR_SB_HPET_T0_CONF_RSTDATA & AR_SB_HPET_T0_CONF_PER_INT_CAP_MASK,
      ._index = AR_SB_HPET_T0_CONF_PER_INT_CAP_QW,
      ._desc = "Periodic Interrupt Capable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = "TYPE",
      ._bpos = AR_SB_HPET_T0_CONF_TYPE_BP,
      ._mask = AR_SB_HPET_T0_CONF_TYPE_MASK,
      ._rval = AR_SB_HPET_T0_CONF_RSTDATA & AR_SB_HPET_T0_CONF_TYPE_MASK,
      ._index = AR_SB_HPET_T0_CONF_TYPE_QW,
      ._desc = "Timer Type",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "INT_ENB",
      ._bpos = AR_SB_HPET_T0_CONF_INT_ENB_BP,
      ._mask = AR_SB_HPET_T0_CONF_INT_ENB_MASK,
      ._rval = AR_SB_HPET_T0_CONF_RSTDATA & AR_SB_HPET_T0_CONF_INT_ENB_MASK,
      ._index = AR_SB_HPET_T0_CONF_INT_ENB_QW,
      ._desc = "Timer Interrupt Enable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "INT_TYPE",
      ._bpos = AR_SB_HPET_T0_CONF_INT_TYPE_BP,
      ._mask = AR_SB_HPET_T0_CONF_INT_TYPE_MASK,
      ._rval = AR_SB_HPET_T0_CONF_RSTDATA & AR_SB_HPET_T0_CONF_INT_TYPE_MASK,
      ._index = AR_SB_HPET_T0_CONF_INT_TYPE_QW,
      ._desc = "Timer Interrupt Type, is always edge triggered because we are using an MSI-X controller for interrupts",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_t0_comp_detail[] = {
    { ._name = "COMPARATOR",
      ._bpos = AR_SB_HPET_T0_COMP_COMPARATOR_BP,
      ._mask = AR_SB_HPET_T0_COMP_COMPARATOR_MASK,
      ._rval = AR_SB_HPET_T0_COMP_RSTDATA & AR_SB_HPET_T0_COMP_COMPARATOR_MASK,
      ._index = AR_SB_HPET_T0_COMP_COMPARATOR_QW,
      ._desc = "Comparator Value",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_t1_conf_detail[] = {
    { ._name = "VAL_SET_CNF",
      ._bpos = AR_SB_HPET_T1_CONF_VAL_SET_CNF_BP,
      ._mask = AR_SB_HPET_T1_CONF_VAL_SET_CNF_MASK,
      ._rval = AR_SB_HPET_T1_CONF_RSTDATA & AR_SB_HPET_T1_CONF_VAL_SET_CNF_MASK,
      ._index = AR_SB_HPET_T1_CONF_VAL_SET_CNF_QW,
      ._desc = "Value Set",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "SIZE",
      ._bpos = AR_SB_HPET_T1_CONF_SIZE_BP,
      ._mask = AR_SB_HPET_T1_CONF_SIZE_MASK,
      ._rval = AR_SB_HPET_T1_CONF_RSTDATA & AR_SB_HPET_T1_CONF_SIZE_MASK,
      ._index = AR_SB_HPET_T1_CONF_SIZE_QW,
      ._desc = "Timer Size",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HNA"
    },
    { ._name = "PER_INT_CAP",
      ._bpos = AR_SB_HPET_T1_CONF_PER_INT_CAP_BP,
      ._mask = AR_SB_HPET_T1_CONF_PER_INT_CAP_MASK,
      ._rval = AR_SB_HPET_T1_CONF_RSTDATA & AR_SB_HPET_T1_CONF_PER_INT_CAP_MASK,
      ._index = AR_SB_HPET_T1_CONF_PER_INT_CAP_QW,
      ._desc = "Periodic Interrupt Capable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HNA"
    },
    { ._name = "TYPE",
      ._bpos = AR_SB_HPET_T1_CONF_TYPE_BP,
      ._mask = AR_SB_HPET_T1_CONF_TYPE_MASK,
      ._rval = AR_SB_HPET_T1_CONF_RSTDATA & AR_SB_HPET_T1_CONF_TYPE_MASK,
      ._index = AR_SB_HPET_T1_CONF_TYPE_QW,
      ._desc = "Timer Type",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "INT_ENB",
      ._bpos = AR_SB_HPET_T1_CONF_INT_ENB_BP,
      ._mask = AR_SB_HPET_T1_CONF_INT_ENB_MASK,
      ._rval = AR_SB_HPET_T1_CONF_RSTDATA & AR_SB_HPET_T1_CONF_INT_ENB_MASK,
      ._index = AR_SB_HPET_T1_CONF_INT_ENB_QW,
      ._desc = "Timer Interrupt Enable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "INT_TYPE",
      ._bpos = AR_SB_HPET_T1_CONF_INT_TYPE_BP,
      ._mask = AR_SB_HPET_T1_CONF_INT_TYPE_MASK,
      ._rval = AR_SB_HPET_T1_CONF_RSTDATA & AR_SB_HPET_T1_CONF_INT_TYPE_MASK,
      ._index = AR_SB_HPET_T1_CONF_INT_TYPE_QW,
      ._desc = "Timer Interrupt Type, is always edge triggered because we are using an MSI-X controller for interrupts",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_t1_comp_detail[] = {
    { ._name = "COMPARATOR",
      ._bpos = AR_SB_HPET_T1_COMP_COMPARATOR_BP,
      ._mask = AR_SB_HPET_T1_COMP_COMPARATOR_MASK,
      ._rval = AR_SB_HPET_T1_COMP_RSTDATA & AR_SB_HPET_T1_COMP_COMPARATOR_MASK,
      ._index = AR_SB_HPET_T1_COMP_COMPARATOR_QW,
      ._desc = "Comparator Value",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_t2_conf_detail[] = {
    { ._name = "VAL_SET_CNF",
      ._bpos = AR_SB_HPET_T2_CONF_VAL_SET_CNF_BP,
      ._mask = AR_SB_HPET_T2_CONF_VAL_SET_CNF_MASK,
      ._rval = AR_SB_HPET_T2_CONF_RSTDATA & AR_SB_HPET_T2_CONF_VAL_SET_CNF_MASK,
      ._index = AR_SB_HPET_T2_CONF_VAL_SET_CNF_QW,
      ._desc = "Value Set",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "SIZE",
      ._bpos = AR_SB_HPET_T2_CONF_SIZE_BP,
      ._mask = AR_SB_HPET_T2_CONF_SIZE_MASK,
      ._rval = AR_SB_HPET_T2_CONF_RSTDATA & AR_SB_HPET_T2_CONF_SIZE_MASK,
      ._index = AR_SB_HPET_T2_CONF_SIZE_QW,
      ._desc = "Timer Size",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = "PER_INT_CAP",
      ._bpos = AR_SB_HPET_T2_CONF_PER_INT_CAP_BP,
      ._mask = AR_SB_HPET_T2_CONF_PER_INT_CAP_MASK,
      ._rval = AR_SB_HPET_T2_CONF_RSTDATA & AR_SB_HPET_T2_CONF_PER_INT_CAP_MASK,
      ._index = AR_SB_HPET_T2_CONF_PER_INT_CAP_QW,
      ._desc = "Periodic Interrupt Capable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HNA"
    },
    { ._name = "TYPE",
      ._bpos = AR_SB_HPET_T2_CONF_TYPE_BP,
      ._mask = AR_SB_HPET_T2_CONF_TYPE_MASK,
      ._rval = AR_SB_HPET_T2_CONF_RSTDATA & AR_SB_HPET_T2_CONF_TYPE_MASK,
      ._index = AR_SB_HPET_T2_CONF_TYPE_QW,
      ._desc = "Timer Type",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "INT_ENB",
      ._bpos = AR_SB_HPET_T2_CONF_INT_ENB_BP,
      ._mask = AR_SB_HPET_T2_CONF_INT_ENB_MASK,
      ._rval = AR_SB_HPET_T2_CONF_RSTDATA & AR_SB_HPET_T2_CONF_INT_ENB_MASK,
      ._index = AR_SB_HPET_T2_CONF_INT_ENB_QW,
      ._desc = "Timer Interrupt Enable",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "INT_TYPE",
      ._bpos = AR_SB_HPET_T2_CONF_INT_TYPE_BP,
      ._mask = AR_SB_HPET_T2_CONF_INT_TYPE_MASK,
      ._rval = AR_SB_HPET_T2_CONF_RSTDATA & AR_SB_HPET_T2_CONF_INT_TYPE_MASK,
      ._index = AR_SB_HPET_T2_CONF_INT_TYPE_QW,
      ._desc = "Timer Interrupt Type, is always edge triggered because we are using an MSI-X controller for interrupts",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RO,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_t2_comp_detail[] = {
    { ._name = "COMPARATOR",
      ._bpos = AR_SB_HPET_T2_COMP_COMPARATOR_BP,
      ._mask = AR_SB_HPET_T2_COMP_COMPARATOR_MASK,
      ._rval = AR_SB_HPET_T2_COMP_RSTDATA & AR_SB_HPET_T2_COMP_COMPARATOR_MASK,
      ._index = AR_SB_HPET_T2_COMP_COMPARATOR_QW,
      ._desc = "Comparator Value",
      ._type_bitmsk = 0x0000000000000008ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_freq1_detail[] = {
    { ._name = "GAIN1",
      ._bpos = AR_SB_HPET_FREQ1_GAIN1_BP,
      ._mask = AR_SB_HPET_FREQ1_GAIN1_MASK,
      ._rval = AR_SB_HPET_FREQ1_RSTDATA & AR_SB_HPET_FREQ1_GAIN1_MASK,
      ._index = AR_SB_HPET_FREQ1_GAIN1_QW,
      ._desc = "Phase 1 gain coefficient",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "GAIN0",
      ._bpos = AR_SB_HPET_FREQ1_GAIN0_BP,
      ._mask = AR_SB_HPET_FREQ1_GAIN0_MASK,
      ._rval = AR_SB_HPET_FREQ1_RSTDATA & AR_SB_HPET_FREQ1_GAIN0_MASK,
      ._index = AR_SB_HPET_FREQ1_GAIN0_QW,
      ._desc = "Phase 0 gain coefficient",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "SHIFT1",
      ._bpos = AR_SB_HPET_FREQ1_SHIFT1_BP,
      ._mask = AR_SB_HPET_FREQ1_SHIFT1_MASK,
      ._rval = AR_SB_HPET_FREQ1_RSTDATA & AR_SB_HPET_FREQ1_SHIFT1_MASK,
      ._index = AR_SB_HPET_FREQ1_SHIFT1_QW,
      ._desc = "Phase 1 gain Shift",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "SHIFT0",
      ._bpos = AR_SB_HPET_FREQ1_SHIFT0_BP,
      ._mask = AR_SB_HPET_FREQ1_SHIFT0_MASK,
      ._rval = AR_SB_HPET_FREQ1_RSTDATA & AR_SB_HPET_FREQ1_SHIFT0_MASK,
      ._index = AR_SB_HPET_FREQ1_SHIFT0_QW,
      ._desc = "Phase 0 gain shift",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "DELAY",
      ._bpos = AR_SB_HPET_FREQ1_DELAY_BP,
      ._mask = AR_SB_HPET_FREQ1_DELAY_MASK,
      ._rval = AR_SB_HPET_FREQ1_RSTDATA & AR_SB_HPET_FREQ1_DELAY_MASK,
      ._index = AR_SB_HPET_FREQ1_DELAY_QW,
      ._desc = "Delay pulse after timer 0 receipt",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "OUTEN",
      ._bpos = AR_SB_HPET_FREQ1_OUTEN_BP,
      ._mask = AR_SB_HPET_FREQ1_OUTEN_MASK,
      ._rval = AR_SB_HPET_FREQ1_RSTDATA & AR_SB_HPET_FREQ1_OUTEN_MASK,
      ._index = AR_SB_HPET_FREQ1_OUTEN_QW,
      ._desc = "Enable Timer 0 to local block",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "LOCK",
      ._bpos = AR_SB_HPET_FREQ1_LOCK_BP,
      ._mask = AR_SB_HPET_FREQ1_LOCK_MASK,
      ._rval = AR_SB_HPET_FREQ1_RSTDATA & AR_SB_HPET_FREQ1_LOCK_MASK,
      ._index = AR_SB_HPET_FREQ1_LOCK_QW,
      ._desc = "PLL Lock Indicator",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "R,HWO"
    },
    { ._name = "COUNT",
      ._bpos = AR_SB_HPET_FREQ1_COUNT_BP,
      ._mask = AR_SB_HPET_FREQ1_COUNT_MASK,
      ._rval = AR_SB_HPET_FREQ1_RSTDATA & AR_SB_HPET_FREQ1_COUNT_MASK,
      ._index = AR_SB_HPET_FREQ1_COUNT_QW,
      ._desc = "Current Divider Count",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_freq2_detail[] = {
    { ._name = "WRAP",
      ._bpos = AR_SB_HPET_FREQ2_WRAP_BP,
      ._mask = AR_SB_HPET_FREQ2_WRAP_MASK,
      ._rval = AR_SB_HPET_FREQ2_RSTDATA & AR_SB_HPET_FREQ2_WRAP_MASK,
      ._index = AR_SB_HPET_FREQ2_WRAP_QW,
      ._desc = "Counter Wrap Control Reg",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW"
    },
    { ._name = "INCR",
      ._bpos = AR_SB_HPET_FREQ2_INCR_BP,
      ._mask = AR_SB_HPET_FREQ2_INCR_MASK,
      ._rval = AR_SB_HPET_FREQ2_RSTDATA & AR_SB_HPET_FREQ2_INCR_MASK,
      ._index = AR_SB_HPET_FREQ2_INCR_QW,
      ._desc = "Phase Delta Increment for count",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_pll_adj1_detail[] = {
    { ._name = "PLL_ADJ_MAX",
      ._bpos = AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_BP,
      ._mask = AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_MASK,
      ._rval = AR_SB_HPET_PLL_ADJ1_RSTDATA & AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_MASK,
      ._index = AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MAX_QW,
      ._desc = "PLL adjust max value",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "PLL_ADJ_MIN",
      ._bpos = AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_BP,
      ._mask = AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_MASK,
      ._rval = AR_SB_HPET_PLL_ADJ1_RSTDATA & AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_MASK,
      ._index = AR_SB_HPET_PLL_ADJ1_PLL_ADJ_MIN_QW,
      ._desc = "PLL adjust min value",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};
static const cmmr_fr_t __ar_sb_hpet_pll_adj2_detail[] = {
    { ._name = "DIVIDER_VALUE",
      ._bpos = AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_BP,
      ._mask = AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_MASK,
      ._rval = AR_SB_HPET_PLL_ADJ2_RSTDATA & AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_MASK,
      ._index = AR_SB_HPET_PLL_ADJ2_DIVIDER_VALUE_QW,
      ._desc = "Divider value",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = "PLL_LOCK_MAX",
      ._bpos = AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_BP,
      ._mask = AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_MASK,
      ._rval = AR_SB_HPET_PLL_ADJ2_RSTDATA & AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_MASK,
      ._index = AR_SB_HPET_PLL_ADJ2_PLL_LOCK_MAX_QW,
      ._desc = "Max value required for lock",
      ._type_bitmsk = 0x0000000000000000ull,
      ._access = "RW,HRO"
    },
    { ._name = NULL, ._bpos = 0, ._mask = 0, ._rval = 0, ._index = 0, ._desc = NULL, ._access = NULL }
};

/*
 *  AR SB DESC MASK ARRAYS DECLARATIONS
 */

/*
 *  AR SB MMR DECLARATIONS
 */
static const cmmr_br_t __ar_sb_hpet_cap = {
    ._name = "AR_SB_HPET_CAP",
    ._addr = AR_SB_HPET_CAP,
    ._rval.val = AR_SB_HPET_CAP_RSTDATA,
    ._rmsk.val = AR_SB_HPET_CAP_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_CAP_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_CAP_RDMASK,
    ._xsmsk.val = AR_SB_HPET_CAP_XSMASK,
    ._wsemsk.val = AR_SB_HPET_CAP_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_CAP_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_CAP_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_CAP_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_CAP_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_CAP_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_CAP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_cap_detail
};
static const cmmr_br_t __ar_sb_hpet_config = {
    ._name = "AR_SB_HPET_CONFIG",
    ._addr = AR_SB_HPET_CONFIG,
    ._rval.val = AR_SB_HPET_CONFIG_RSTDATA,
    ._rmsk.val = AR_SB_HPET_CONFIG_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_CONFIG_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_CONFIG_RDMASK,
    ._xsmsk.val = AR_SB_HPET_CONFIG_XSMASK,
    ._wsemsk.val = AR_SB_HPET_CONFIG_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_CONFIG_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_CONFIG_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_CONFIG_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_CONFIG_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_CONFIG_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_CONFIG_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_config_detail
};
static const cmmr_br_t __ar_sb_hpet_isr = {
    ._name = "AR_SB_HPET_ISR",
    ._addr = AR_SB_HPET_ISR,
    ._rval.val = AR_SB_HPET_ISR_RSTDATA,
    ._rmsk.val = AR_SB_HPET_ISR_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_ISR_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_ISR_RDMASK,
    ._xsmsk.val = AR_SB_HPET_ISR_XSMASK,
    ._wsemsk.val = AR_SB_HPET_ISR_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_ISR_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_ISR_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_ISR_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_ISR_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_ISR_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_ISR_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_isr_detail
};
static const cmmr_br_t __ar_sb_hpet_mcv = {
    ._name = "AR_SB_HPET_MCV",
    ._addr = AR_SB_HPET_MCV,
    ._rval.val = AR_SB_HPET_MCV_RSTDATA,
    ._rmsk.val = AR_SB_HPET_MCV_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_MCV_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_MCV_RDMASK,
    ._xsmsk.val = AR_SB_HPET_MCV_XSMASK,
    ._wsemsk.val = AR_SB_HPET_MCV_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_MCV_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_MCV_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_MCV_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_MCV_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_MCV_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_MCV_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_mcv_detail
};
static const cmmr_br_t __ar_sb_hpet_t0_conf = {
    ._name = "AR_SB_HPET_T0_CONF",
    ._addr = AR_SB_HPET_T0_CONF,
    ._rval.val = AR_SB_HPET_T0_CONF_RSTDATA,
    ._rmsk.val = AR_SB_HPET_T0_CONF_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_T0_CONF_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_T0_CONF_RDMASK,
    ._xsmsk.val = AR_SB_HPET_T0_CONF_XSMASK,
    ._wsemsk.val = AR_SB_HPET_T0_CONF_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_T0_CONF_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_T0_CONF_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_T0_CONF_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_T0_CONF_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_T0_CONF_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_T0_CONF_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_t0_conf_detail
};
static const cmmr_br_t __ar_sb_hpet_t0_comp = {
    ._name = "AR_SB_HPET_T0_COMP",
    ._addr = AR_SB_HPET_T0_COMP,
    ._rval.val = AR_SB_HPET_T0_COMP_RSTDATA,
    ._rmsk.val = AR_SB_HPET_T0_COMP_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_T0_COMP_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_T0_COMP_RDMASK,
    ._xsmsk.val = AR_SB_HPET_T0_COMP_XSMASK,
    ._wsemsk.val = AR_SB_HPET_T0_COMP_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_T0_COMP_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_T0_COMP_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_T0_COMP_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_T0_COMP_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_T0_COMP_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_T0_COMP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_sb_hpet_t0_comp_detail
};
static const cmmr_br_t __ar_sb_hpet_t1_conf = {
    ._name = "AR_SB_HPET_T1_CONF",
    ._addr = AR_SB_HPET_T1_CONF,
    ._rval.val = AR_SB_HPET_T1_CONF_RSTDATA,
    ._rmsk.val = AR_SB_HPET_T1_CONF_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_T1_CONF_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_T1_CONF_RDMASK,
    ._xsmsk.val = AR_SB_HPET_T1_CONF_XSMASK,
    ._wsemsk.val = AR_SB_HPET_T1_CONF_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_T1_CONF_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_T1_CONF_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_T1_CONF_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_T1_CONF_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_T1_CONF_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_T1_CONF_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_t1_conf_detail
};
static const cmmr_br_t __ar_sb_hpet_t1_comp = {
    ._name = "AR_SB_HPET_T1_COMP",
    ._addr = AR_SB_HPET_T1_COMP,
    ._rval.val = AR_SB_HPET_T1_COMP_RSTDATA,
    ._rmsk.val = AR_SB_HPET_T1_COMP_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_T1_COMP_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_T1_COMP_RDMASK,
    ._xsmsk.val = AR_SB_HPET_T1_COMP_XSMASK,
    ._wsemsk.val = AR_SB_HPET_T1_COMP_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_T1_COMP_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_T1_COMP_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_T1_COMP_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_T1_COMP_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_T1_COMP_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_T1_COMP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_sb_hpet_t1_comp_detail
};
static const cmmr_br_t __ar_sb_hpet_t2_conf = {
    ._name = "AR_SB_HPET_T2_CONF",
    ._addr = AR_SB_HPET_T2_CONF,
    ._rval.val = AR_SB_HPET_T2_CONF_RSTDATA,
    ._rmsk.val = AR_SB_HPET_T2_CONF_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_T2_CONF_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_T2_CONF_RDMASK,
    ._xsmsk.val = AR_SB_HPET_T2_CONF_XSMASK,
    ._wsemsk.val = AR_SB_HPET_T2_CONF_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_T2_CONF_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_T2_CONF_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_T2_CONF_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_T2_CONF_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_T2_CONF_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_T2_CONF_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_t2_conf_detail
};
static const cmmr_br_t __ar_sb_hpet_t2_comp = {
    ._name = "AR_SB_HPET_T2_COMP",
    ._addr = AR_SB_HPET_T2_COMP,
    ._rval.val = AR_SB_HPET_T2_COMP_RSTDATA,
    ._rmsk.val = AR_SB_HPET_T2_COMP_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_T2_COMP_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_T2_COMP_RDMASK,
    ._xsmsk.val = AR_SB_HPET_T2_COMP_XSMASK,
    ._wsemsk.val = AR_SB_HPET_T2_COMP_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_T2_COMP_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_T2_COMP_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_T2_COMP_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_T2_COMP_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_T2_COMP_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_T2_COMP_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000008ull,
    ._info = __ar_sb_hpet_t2_comp_detail
};
static const cmmr_br_t __ar_sb_hpet_freq1 = {
    ._name = "AR_SB_HPET_FREQ1",
    ._addr = AR_SB_HPET_FREQ1,
    ._rval.val = AR_SB_HPET_FREQ1_RSTDATA,
    ._rmsk.val = AR_SB_HPET_FREQ1_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_FREQ1_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_FREQ1_RDMASK,
    ._xsmsk.val = AR_SB_HPET_FREQ1_XSMASK,
    ._wsemsk.val = AR_SB_HPET_FREQ1_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_FREQ1_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_FREQ1_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_FREQ1_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_FREQ1_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_FREQ1_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_FREQ1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_freq1_detail
};
static const cmmr_br_t __ar_sb_hpet_freq2 = {
    ._name = "AR_SB_HPET_FREQ2",
    ._addr = AR_SB_HPET_FREQ2,
    ._rval.val = AR_SB_HPET_FREQ2_RSTDATA,
    ._rmsk.val = AR_SB_HPET_FREQ2_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_FREQ2_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_FREQ2_RDMASK,
    ._xsmsk.val = AR_SB_HPET_FREQ2_XSMASK,
    ._wsemsk.val = AR_SB_HPET_FREQ2_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_FREQ2_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_FREQ2_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_FREQ2_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_FREQ2_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_FREQ2_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_FREQ2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_freq2_detail
};
static const cmmr_br_t __ar_sb_hpet_pll_adj1 = {
    ._name = "AR_SB_HPET_PLL_ADJ1",
    ._addr = AR_SB_HPET_PLL_ADJ1,
    ._rval.val = AR_SB_HPET_PLL_ADJ1_RSTDATA,
    ._rmsk.val = AR_SB_HPET_PLL_ADJ1_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_PLL_ADJ1_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_PLL_ADJ1_RDMASK,
    ._xsmsk.val = AR_SB_HPET_PLL_ADJ1_XSMASK,
    ._wsemsk.val = AR_SB_HPET_PLL_ADJ1_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_PLL_ADJ1_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_PLL_ADJ1_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_PLL_ADJ1_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_PLL_ADJ1_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_PLL_ADJ1_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_PLL_ADJ1_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_pll_adj1_detail
};
static const cmmr_br_t __ar_sb_hpet_pll_adj2 = {
    ._name = "AR_SB_HPET_PLL_ADJ2",
    ._addr = AR_SB_HPET_PLL_ADJ2,
    ._rval.val = AR_SB_HPET_PLL_ADJ2_RSTDATA,
    ._rmsk.val = AR_SB_HPET_PLL_ADJ2_RSTMASK,
    ._wrmsk.val = AR_SB_HPET_PLL_ADJ2_WRTMASK,
    ._rdmsk.val = AR_SB_HPET_PLL_ADJ2_RDMASK,
    ._xsmsk.val = AR_SB_HPET_PLL_ADJ2_XSMASK,
    ._wsemsk.val = AR_SB_HPET_PLL_ADJ2_WSEMASK,
    ._rsemsk.val = AR_SB_HPET_PLL_ADJ2_RSEMASK,
    ._w1smsk.val = AR_SB_HPET_PLL_ADJ2_W1SMASK,
    ._w1cmsk.val = AR_SB_HPET_PLL_ADJ2_W1CMASK,
    ._wrstmsk.val = AR_SB_HPET_PLL_ADJ2_WRSTMASK,
    ._hwwmsk.val = AR_SB_HPET_PLL_ADJ2_HWWMASK,
    ._hwrmsk.val = AR_SB_HPET_PLL_ADJ2_HWRMASK,
    ._nqw = 1,
    ._size = 8,
    ._incr = 0,
    ._depth = 1,
      ._type_bitmsk = 0x0000000000000000ull,
    ._info = __ar_sb_hpet_pll_adj2_detail
};

/*
 *  INSTALL AR SB MMRS
 */
static const cmmr_br_t* __ar_sb_mmrs[] = {
    &__ar_sb_hpet_cap,
    &__ar_sb_hpet_config,
    &__ar_sb_hpet_isr,
    &__ar_sb_hpet_mcv,
    &__ar_sb_hpet_t0_conf,
    &__ar_sb_hpet_t0_comp,
    &__ar_sb_hpet_t1_conf,
    &__ar_sb_hpet_t1_comp,
    &__ar_sb_hpet_t2_conf,
    &__ar_sb_hpet_t2_comp,
    &__ar_sb_hpet_freq1,
    &__ar_sb_hpet_freq2,
    &__ar_sb_hpet_pll_adj1,
    &__ar_sb_hpet_pll_adj2,
    NULL
};

/*
 *  INSTALL AR SB LM MUX SELECT ENCODINGS
 */
static const cmmr_br_t* __ar_sb_enc_mmrs[] = {
    NULL
};

#endif
