#include "lib9.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winnt.h>

int
_tas(int *la)
{
	int v;
	v = InterlockedExchange(la, 1);
	return v;
}

void
_atomic_clr(int *la)
{
	InterlockedExchange(la, 0);
}
