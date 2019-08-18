#include "../../pinball.h"

//----- (0101798C) --------------------------------------------------------
void TTimer::TimerExpired(int a1, struct TPinballComponent *a2)
{
*(DWORD *)((char *)a2 + 42) = 0;
control_handler(60, a2);
}

//----- (01018F5B) --------------------------------------------------------
int __thiscall TTimer::Message(TTimer *this, int a2, float a3)
{
TTimer *v3; // esi

v3 = this;
if ( a2 == 59 )
{
if ( *(DWORD *)((char *)this + 42) )
timer_kill(*(DWORD *)((char *)this + 42));
*(DWORD *)((char *)v3 + 42) = timer_set(a3, (int)v3, (int)TTimer::TimerExpired);
}
else if ( a2 == 1011 || a2 == 1022 || a2 == 1024 )
{
if ( *(DWORD *)((char *)this + 42) )
{
timer_kill(*(DWORD *)((char *)this + 42));
*(DWORD *)((char *)v3 + 42) = 0;
}
}
return 0;
}

//----- (0101AA56) --------------------------------------------------------
TTimer *__thiscall TTimer::TTimer(TTimer *this, struct TPinballTable *a2, int a3)
{
TTimer *v3; // esi

v3 = this;
TPinballComponent::TPinballComponent(this, a2, a3, 1);
*(DWORD *)((char *)v3 + 42) = 0;
*(DWORD *)v3 = &TTimer::vftable;
return v3;
}
// 10027BC: using guessed type void *TTimer::vftable;
