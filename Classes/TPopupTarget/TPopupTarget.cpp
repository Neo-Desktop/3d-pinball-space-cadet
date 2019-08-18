#include "TPopupTarget.h"

//----- (010160B3) --------------------------------------------------------
void TPopupTarget::TimerExpired(int a1, void *a2)
{
int v2; // eax
int v3; // esi

*(DWORD *)((char *)a2 + 78) = 0;
v2 = *(DWORD *)((char *)a2 + 34);
*((_BYTE *)a2 + 5) = 1;
render_sprite_set_bitmap(*(DWORD **)((char *)a2 + 26), *(DWORD *)(*(DWORD *)(v2 + 4) + 8));
if ( a1 )
{
v3 = *(DWORD *)((char *)a2 + 70);
if ( v3 )
loader_play_sound(v3);
}
}

//----- (010160F4) --------------------------------------------------------
int __thiscall TPopupTarget::Message(TPopupTarget *this, int a2, float a3)
{
TPopupTarget *v3; // esi
int v4; // eax
int v5; // ecx
DWORD *v6; // eax
int v7; // eax
__int64 v8; // ST04_8

v3 = this;
switch ( a2 )
{
case 49:
v8 = *(unsigned int *)((char *)this + 26);
*((_BYTE *)this + 5) = 0;
render_sprite_set_bitmap((DWORD *)v8, SHIDWORD(v8));
break;
case 50:
*(DWORD *)((char *)this + 78) = timer_set(
*(float *)((char *)this + 82),
(int)this,
(int)TPopupTarget::TimerExpired);
break;
case 1020:
*(DWORD *)((char *)this + 4 * *(DWORD *)(*(DWORD *)((char *)this + 30) + 218) + 98) = *(DWORD *)((char *)this + 6);
v7 = *(DWORD *)((char *)this + 4 * (unsigned __int64)(signed __int64)_floor(a3) + 98);
*(DWORD *)((char *)v3 + 6) = v7;
TPopupTarget::Message(v3, 50 - (v7 != 0), 0.0);
break;
case 1024:
v4 = *(DWORD *)((char *)this + 30);
*(DWORD *)((char *)this + 6) = 0;
v5 = 0;
if ( *(DWORD *)(v4 + 214) > 0 )
{
v6 = (DWORD *)((char *)v3 + 98);
do
{
*v6 = 0;
++v5;
++v6;
}
while ( v5 < *(DWORD *)(*(DWORD *)((char *)v3 + 30) + 214) );
}
if ( *(DWORD *)((char *)v3 + 78) )
timer_kill(*(DWORD *)((char *)v3 + 78));
TPopupTarget::TimerExpired(0, (void *)v3);
break;
}
return 0;
}

//----- (010161D0) --------------------------------------------------------
int __thiscall TPopupTarget::get_scoring(TPopupTarget *this, int a2)
{
int result; // eax

if ( a2 >= 3 )
result = 0;
else
result = *(DWORD *)((char *)this + 4 * a2 + 86);
return result;
}

//----- (010161EE) --------------------------------------------------------
void __thiscall TPopupTarget::put_scoring(TPopupTarget *this, int a2, int a3)
{
if ( a2 < 3 )
*(DWORD *)((char *)this + 4 * a2 + 86) = a3;
}

//----- (010181ED) --------------------------------------------------------
void __thiscall TPopupTarget::Collision(TPopupTarget *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TPopupTarget *v6; // esi

v6 = this;
if ( *(DWORD *)(*(DWORD *)((char *)this + 30) + 370) )
{
basic_collision(a2, a3, a4, *(float *)((char *)this + 54), *(float *)((char *)this + 58), 1000000000.0, 0.0);
}
else if ( basic_collision(
a2,
a3,
a4,
*(float *)((char *)this + 54),
*(float *)((char *)this + 58),
*(float *)((char *)this + 66),
*(float *)((char *)this + 62)) > *(float *)((char *)this + 66) )
{
if ( *(DWORD *)((char *)v6 + 74) )
loader_play_sound(*(DWORD *)((char *)v6 + 74));
(**(void (__thiscall ***)(TPopupTarget *, signed int, DWORD))v6)(v6, 49, 0.0);
control_handler(63, v6);
}
}

//----- (010195E0) --------------------------------------------------------
TPopupTarget *__thiscall TPopupTarget::TPopupTarget(TPopupTarget *this, struct TPinballTable *a2, int a3)
{
TPopupTarget *v3; // esi
int v4; // eax

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 1);
*(DWORD *)v3 = &TPopupTarget::vftable;
v4 = *(DWORD *)loader_query_float_attribute(a3, 0, 407);
*(DWORD *)((char *)v3 + 78) = 0;
*(DWORD *)((char *)v3 + 82) = v4;
return v3;
}
// 10025A4: using guessed type void *TPopupTarget::vftable;
