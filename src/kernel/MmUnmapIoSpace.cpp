#include "common.h"

/*
 * MmUnmapIoSpace
 *
 * Import Number:      183
 * Calling Convention: stdcall
 * Parameter 0:        PVOID  BaseAddress
 * Parameter 1:        SIZE_T NumberOfBytes
 * Return Type:        PVOID
 */
int Xbox::MmUnmapIoSpace()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(PVOID,  BaseAddress);
	K_INIT_ARG(SIZE_T, NumberOfBytes);
	PVOID rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}