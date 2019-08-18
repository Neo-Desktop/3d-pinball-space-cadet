#include "TLightRollover.h"

//----- (010164D1) --------------------------------------------------------
void TLightRollover::delay_expired(int a1, void *a2)
{
render_sprite_set_bitmap(*(DWORD **)((char *)a2 + 26), 0);
*(DWORD *)((char *)a2 + 91) = 0;
}

//----- (010164F2) --------------------------------------------------------
void __thiscall TLightRollover::Collision(TLightRollover *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TLightRollover *v6; // esi
double v7; // st7
bool v8; // zf
bool v9; // al
int v10; // eax

v6 = this;
*(float *)((char *)a2 + 42) = *(float *)a3;
v7 = *(float *)((char *)a2 + 70);
*(DWORD *)((char *)a2 + 46) = *((DWORD *)a3 + 1);
*(float *)((char *)a2 + 70) = v7 - a5;
TBall::not_again(a2, a6);
if ( !*(DWORD *)(*(DWORD *)((char *)v6 + 30) + 370) )
{
if ( *((_BYTE *)v6 + 78) )
{
timer_set(0.1, (int)v6, (int)TRollover::TimerExpired);
v8 = *((_BYTE *)v6 + 78) == 0;
*((_BYTE *)v6 + 5) = 0;
v9 = v8;
v8 = *(DWORD *)((char *)v6 + 91) == 0;
*((_BYTE *)v6 + 78) = v9;
if ( v8 )
*(DWORD *)((char *)v6 + 91) = timer_set(
*(float *)((char *)v6 + 87),
(int)v6,
(int)TLightRollover::delay_expired);
}
else
{
loader_play_sound(*(DWORD *)((char *)v6 + 70));
control_handler(63, v6);
*((_BYTE *)v6 + 78) = *((_BYTE *)v6 + 78) == 0;
v10 = *(DWORD *)((char *)v6 + 34);
if ( v10 )
render_sprite_set_bitmap(*(DWORD **)((char *)v6 + 26), *(DWORD *)(*(DWORD *)(v10 + 4) + 8));
}
}
}

//----- (010165A7) --------------------------------------------------------
int __thiscall TLightRollover::Message(TLightRollover *this, int a2, float a3)
{
TLightRollover *v3; // esi
int v4; // eax

v3 = this;
if ( a2 == 1024 )
{
v4 = *(DWORD *)((char *)this + 91);
*((_BYTE *)this + 5) = 1;
*((_BYTE *)this + 78) = 0;
if ( v4 )
timer_kill(v4);
*(DWORD *)((char *)v3 + 91) = 0;
if ( *(DWORD *)((char *)v3 + 34) )
render_sprite_set_bitmap(*(DWORD **)((char *)v3 + 26), 0);
}
return 0;
}

//----- (010197BB) --------------------------------------------------------
TLightRollover *__thiscall TLightRollover::TLightRollover(TLightRollover *this, struct TPinballTable *a2, int a3)
{
TLightRollover *v3; // esi
bool v4; // zf

v3 = this;
TRollover::TRollover(this, a2, a3, 0);
v4 = *(DWORD *)((char *)v3 + 34) == 0;
*(DWORD *)v3 = &TLightRollover::vftable;
*((_BYTE *)v3 + 78) = 0;
*(DWORD *)((char *)v3 + 91) = 0;
if ( !v4 )
render_sprite_set_bitmap(*(DWORD **)((char *)v3 + 26), 0);
TRollover::build_walls(v3, a3);
*(DWORD *)((char *)v3 + 87) = *(DWORD *)loader_query_float_attribute(a3, 0, 407);
return v3;
}
// 1002630: using guessed type void *TLightRollover::vftable;
