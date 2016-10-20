/**
 *  The Gemini Performance Counter driver.A
 *    Userspace interface library
 * 
 *  Copyright (C) 2009 Cray Inc. All Rights Reserved.
 *  Written by Andrew Barry <abarry@cray.com>
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include "gpcd_pub.h"
#include "gpcd_lib_gem_mmrs.h"

typedef struct gpcd_mmr_desc {
	uint64_t	addr;
	char*		name;
} gpcd_mmr_desc_t;

typedef struct gpcd_mmr_list {
	struct gpcd_mmr_desc	*item;
	struct gpcd_mmr_list 	*next;
	uint64_t				 value;
} gpcd_mmr_list_t ;

typedef struct gpcd_context {
	gpcd_mmr_list_t	*list;
	int	count;
	uint32_t	nic_addr;
} gpcd_context_t;

int 		gpcd_print_valid_tile_mmrs(void);
int 		gpcd_print_valid_nic_mmrs(void);
int 		gpcd_print_valid_tile_filtering_mmrs(void);
int			gpcd_print_valid_tile_static_mmrs(void);
int			gpcd_read_mmr_val_byname(char *mmr_name, uint64_t *val, 
				uint32_t nic_addr);
int 		gpcd_read_mmr_val(const gpcd_mmr_desc_t   *mmrd, 
				uint64_t *val, uint32_t nic_addr);
int 		gpcd_write_mmr_val_byname(char* mmr_name, uint64_t *val, 
				uint32_t nic_addr);
int gpcd_write_mmr_val(const gpcd_mmr_desc_t *mmrd, uint64_t *val, 
				uint32_t nic_addr);
int gpcd_disable_perms(void);
int gpcd_add_perms_entry(uint64_t job_id, uint64_t perms);
const gpcd_mmr_desc_t* gpcd_lookup_mmr_byname(char *mmr_name);
gpcd_context_t* gpcd_create_context();
int 		gpcd_remove_context(gpcd_context_t *context);
int 		gpcd_context_add_mmr(gpcd_context_t *context, 
				gpcd_mmr_desc_t *item);
int 		gpcd_context_remove_mmr(gpcd_context_t *context, 
					gpcd_mmr_desc_t *item);
int			gpcd_context_read_mmr_vals(gpcd_context_t *context);
int			gpcd_context_write_mmr_vals(gpcd_context_t *context);
int			gpcd_context_print(gpcd_context_t *context);
int			gpcd_clone_context(gpcd_context_t *in, gpcd_context_t *out);
void 		gpcd_context_set_nic_addr(gpcd_context_t *cp, uint32_t nic_addr);
gpcd_mmr_list_t* gpcd_context_find_list_byname(
    gpcd_context_t *context, char* mmr_name);
int			gpcd_verbose_debug(int state);
#define 	gpcd_set_verbose_debug() gpcd_verbose_debug(1)
#define		gpcd_clear_verbose_debug() gpcd_verbose_debug(-1)

