// startup.h

#ifndef STARTUP_H
#define STARTUP_H

#include "tube-defs.h"

/* Found in the *start.S file, implemented in assembler */

extern void _start( void );

extern void _enable_interrupts( void );

extern void _disable_interrupts( void );

extern unsigned int _get_cpsr();

extern unsigned int _get_stack_pointer();

extern void _enable_unaligned_access();

extern void _enable_l1_cache();

extern void _invalidate_icache();

extern void _invalidate_dcache();

extern void _clean_invalidate_dcache();

extern void _invalidate_dcache_mva(void *address);

extern void _clean_invalidate_dcache_mva(void *address);

extern unsigned int _get_core();

extern void _init_core();

extern void _spin_core();

#ifdef HAS_40PINS
extern void _toggle_test_pin(int count);
#endif

#endif
