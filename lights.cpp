#include "pinball.h"

//----- (0100C092) --------------------------------------------------------
BOOL __stdcall light_on(struct component_tag *a1)
{
int v1; // eax

v1 = *((_DWORD *)a1 + 1);
return *(_DWORD *)(v1 + 78) || *(_DWORD *)(v1 + 90) || *(_DWORD *)(v1 + 82);
}

