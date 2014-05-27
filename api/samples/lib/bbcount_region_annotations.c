#include "bbcount_region_annotations.h"

#pragma auto_inline(off)

#ifdef _MSC_VER
void
bb_region_annotate_init_counter(unsigned int id, const char *label)
{
}

void
bb_region_annotate_start_counter(unsigned int id)
{
}

void
bb_region_annotate_stop_counter(unsigned int id)
{
}

void
bb_region_get_basic_block_stats(unsigned int id, unsigned int *commit_count,
    unsigned int *bb_count)
{
    *commit_count = 0;
    *bb_count = 0;
}

void
bb_region_test_many_args(unsigned int a, unsigned int b,
    unsigned int c, unsigned int d, unsigned int e, unsigned int f,
    unsigned int g, unsigned int h, unsigned int i, unsigned int j)
{
}
#else
#ifndef __LP64__
__attribute__ ((fastcall))
#endif
void
bb_region_annotate_init_counter(unsigned int id, const char *label)
{
}

#ifndef __LP64__
__attribute__ ((fastcall))
#endif
void
bb_region_annotate_start_counter(unsigned int id)
{
}

#ifndef __LP64__
__attribute__ ((fastcall))
#endif
void
bb_region_annotate_stop_counter(unsigned int id)
{
}

#ifndef __LP64__
__attribute__ ((fastcall))
#endif
void
bb_region_get_basic_block_stats(unsigned int id, unsigned int *commit_count,
    unsigned int *bb_count)
{
    *commit_count = 0;
    *bb_count = 0;
}

#ifndef __LP64__
__attribute__ ((fastcall))
#endif
void
bb_region_test_many_args(unsigned int a, unsigned int b,
    unsigned int c, unsigned int d, unsigned int e, unsigned int f,
    unsigned int g, unsigned int h, unsigned int i, unsigned int j)
{
}
#endif

#pragma auto_inline(on)
