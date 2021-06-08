#include <ps_plat.h>
#include <memmgr.h>

void *
ps_plat_alloc(size_t sz, coreid_t coreid)
{
	(void)sz;
	(void)coreid;

	return (void *)memmgr_heap_page_allocn(sz / 4096);
}