#include "../../pinball.h"

//----- (010159DC) --------------------------------------------------------
void __stdcall TComponentGroup::NotifyTimerExpired(int a1, struct TPinballComponent *a2)
{
*(_DWORD *)((char *)a2 + 50) = 0;
control_handler(61, a2);
}

//----- (010159F9) --------------------------------------------------------
int __thiscall TComponentGroup::Message(TComponentGroup *this, int a2, float a3)
{
TComponentGroup *v3; // esi
int v4; // eax
int v5; // edi
int v6; // ebx

v3 = this;
if ( a2 == 48 )
{
if ( *(_DWORD *)((char *)this + 50) )
{
timer_kill(*(_DWORD *)((char *)this + 50));
*(_DWORD *)((char *)v3 + 50) = 0;
}
if ( a3 > 0.0 )
*(_DWORD *)((char *)v3 + 50) = timer_set(a3, (int)v3, (int)TComponentGroup::NotifyTimerExpired);
}
else if ( a2 <= 1007 || a2 > 1011 && a2 != 1020 && a2 != 1022 )
{
v4 = *(_DWORD *)(*(_DWORD *)((char *)this + 46) + 4) - 1;
if ( v4 >= 0 )
{
v5 = 4 * v4 + 8;
v6 = *(_DWORD *)(*(_DWORD *)((char *)this + 46) + 4);
do
{
(***(void (__stdcall ****)(int, _DWORD))(v5 + *(_DWORD *)((char *)v3 + 46)))(a2, LODWORD(a3));
v5 -= 4;
--v6;
}
while ( v6 );
}
}
return 0;
}

//----- (0101AA81) --------------------------------------------------------
TComponentGroup *__thiscall TComponentGroup::`scalar deleting destructor`(TComponentGroup *this, char a2)
{
TComponentGroup *v2; // esi

v2 = this;
TComponentGroup::~TComponentGroup(this);
if ( a2 & 1 )
operator delete((void *)v2);
return v2;
}
