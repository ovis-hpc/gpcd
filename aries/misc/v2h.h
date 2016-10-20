/*
 * v2h header file.
 * Copyright 2012 Cray Inc. All Rights Reserved.
 */
// Defines
#define MAX_OL		16
#define MAX_FLDS	256
#define MAX_REGS	1024
#define MAX_DEFS	2048
#define MAX_NAME_LEN	128
#define MAX_LINE_LEN	1024
#define AR_HDRS		0x1
#define LEO_HDRS	0x2
#define LEGACY_SB_OFFSET	0xfdfc000000ull

// TYPE BIT MASKS
#define PAWR		0x000001ull
#define OL		0x000002ull
#define OT		0x000004ull
#define HG		0x000008ull
#define ERR		0x000010ull
#define CLR		0x000020ull
#define HSS		0x000040ull
#define OS		0x000080ull
#define HINF		0x000100ull
#define OINF		0x000200ull
#define FF		0x000400ull
#define JOIN		0x000800ull
#define CNTL		0x001000ull
#define BW		0x002000ull
#define EC_CORR		0x004000ull
#define EC_CRIT		0x008000ull
#define EC_XACT		0x010000ull
#define EC_XLAT		0x020000ull
#define EC_XIENT	0x040000ull
#define EC_INFO		0x080000ull
#define EC_DIAG		0x100000ull
#define EC_UXACT        0x200000ull
#define CROSS_FLD_MSK	0x003ffcull
#define EC_FL_MSK	0x3fc000ull

typedef struct {
    char name[MAX_NAME_LEN];		// Name
    uint64_t val;			// Value
    uint64_t mask;			// Mask of valid bits
    int	width;				// Width in bits
    char comments[MAX_LINE_LEN];	// Comment
} def;

// Global data structure declarations
typedef struct {
    char name[MAX_NAME_LEN];		// name
    char name_lwr[MAX_NAME_LEN];	// name in lower case
    int bpos;				// starting bit position in register
    int epos;;				// ending bit position in register
    int didx;				// descriptor index
    int depth;				// depth of field
    uint64_t mask;			// bitmask - QW Aligned
    uint64_t rset_dat;			// reset data - QW Aligned
    uint64_t rset_msk;			// reset mask - QW Aligned
    uint64_t xrst_msk;			// X reset mask - QW Aligned
    uint64_t wr_msk;			// Write mask - QW Aligned
    uint64_t rd_msk;			// Read mask - QW Aligned
    uint64_t w1s_msk;			// Write 1 set mask - QW Aligned
    uint64_t w1c_msk;			// Write 1 clear mask - QW Aligned
    uint64_t wse_msk;			// Write side effect mask - QW Aligned
    uint64_t rse_msk;			// Read side effect mask - QW Aligned
    uint64_t wrst_msk;			// Warm Reset mask - QW Aligned
    uint64_t hwr_msk;			// Hardware read mask - QW Aligned
    uint64_t hww_msk;			// Hardware write mask - QW Aligned
    char mode[12];			// Access mode - QW Aligned
    uint64_t tbitmsk;			// Type bit mask - QW Aligned
    char comments[MAX_LINE_LEN];	// Field comments - QW Aligned
}   reg_field;

typedef struct {
    char name[MAX_NAME_LEN];		// name
    char name_lwr[MAX_NAME_LEN];	// name in lower case
    char type[10];                      // type is ENCODING for an encoding table, else NULL
    int bsize;				// size in bytes
    int depth;				// depth (Greater than 0 means a table)
    uint64_t addr;			// address
    uint64_t incr;			// spacing between entries in the table
    int nqw;				// Number of quad words per entry
    int nfields;			// Number of fields
    uint64_t tbitmsk;			// Type bit mask
    reg_field field[MAX_FLDS];		// Fields defined within a register
}   reg;

// Function prototypes
int findFirstWord(FILE *Fptr, char *line, int *ln, char *kw, char *ch);
int findKeyword(FILE *Fptr, char *line, int *ln, char *kw, char *ch);
int readLine(FILE *Fptr, char *line, int *lineNum, char *cch);
int get_byte_count_ht(uint64_t addr, char *name);
int get_byte_count_sb(uint64_t addr, char *name);
uint64_t get_reset_value(char * reset_str);
int is_legacy_sb( char * name );
void sort_fields( reg * Reg );
int parse_vregs_file(char * file_name, reg ** Reg, int *ri);
int parse_vregs_def_file(char * file_name, def ** Def, int *ri);
void free_regs( reg  * Reg );
void free_defs( def * Def );
