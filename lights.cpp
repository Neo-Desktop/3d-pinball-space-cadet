#include "pinball.h"

//----- (0100C092) --------------------------------------------------------
BOOL light_on(struct component_tag *a1)
{
int v1; // eax

v1 = *((DWORD *)a1 + 1);
return *(DWORD *)(v1 + 78) || *(DWORD *)(v1 + 90) || *(DWORD *)(v1 + 82);
}

