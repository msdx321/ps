#include <ps_plat.h>

__attribute__((weak)) void *
ps_plat_alloc(size_t sz, coreid_t coreid)
{
    (void)sz;
    (void)coreid;

    return NULL;
}