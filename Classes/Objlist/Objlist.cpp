#include "pinball.h"

//----- (01012E51) --------------------------------------------------------
int objlist_add_object(DWORD *a1, int a2)
{
int v2; // ecx

v2 = a1[1];
if ( v2 >= *a1 )
return 0;
a1[v2 + 2] = a2;
return ++a1[1];
}

//----- (01012E7A) --------------------------------------------------------
signed int objlist_delete_object(int a1, int a2)
{
int v2; // edx
int v3; // ecx
DWORD *v4; // esi

v2 = *(DWORD *)(a1 + 4);
v3 = v2 - 1;
if ( v2 - 1 < 0 )
return 0;
v4 = (DWORD *)(a1 + 4 * v3 + 8);
while ( *v4 != a2 )
{
--v3;
--v4;
if ( v3 < 0 )
return 0;
}
*(DWORD *)(a1 + 4 * v3 + 8) = *(DWORD *)(a1 + 4 * v2 + 4);
--*(DWORD *)(a1 + 4);
return 1;
}

//----- (01012EBE) --------------------------------------------------------
DWORD *objlist_new(int a1)
{
DWORD *result; // eax

result = (DWORD *)memoryallocate(4 * a1 + 12);
if ( result )
{
result[1] = 0;
*result = a1;
}
return result;
}

//----- (01012EE8) --------------------------------------------------------
int *objlist_grow(int *a1, int a2)
{
int *v2; // esi
int v3; // eax
int *v4; // eax

v2 = a1;
if ( a1 )
{
v3 = a2 + a1[1];
if ( v3 > *a1 )
{
v4 = (int *)memoryrealloc((int)a1, 4 * v3 + 12);
if ( v4 )
{
v2 = v4;
*v4 = a2 + v4[1];
}
}
}
return v2;
}

//----- (01013C6F) --------------------------------------------------------
void objlist_destroy(int a1)
{
if ( a1 )
memoryfree(a1);
}
