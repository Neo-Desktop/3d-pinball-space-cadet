#include "../../pinball.h"

//----- (0101663F) --------------------------------------------------------
void __stdcall TKickback::TimerExpired(int a1, struct TPinballComponent *a2)
{
int v2; // eax
int v3; // ST10_4
int v4; // eax
int v5; // eax

if ( *(_DWORD *)((char *)a2 + 90) )
{
*(float *)((char *)a2 + 66) = 0.0;
v2 = timer_set(*(float *)((char *)a2 + 82), (int)a2, (int)TKickback::TimerExpired);
v3 = *(_DWORD *)((char *)a2 + 74);
*(_DWORD *)((char *)a2 + 86) = v2;
loader_play_sound(v3);
v4 = *(_DWORD *)((char *)a2 + 34);
if ( v4 )
render_sprite_set(
*(_DWORD **)((char *)a2 + 26),
*(_DWORD *)(*(_DWORD *)(v4 + 4) + 12),
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)a2 + 38) + 4) + 12),
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 12) + 29) - *(_DWORD *)(*(_DWORD *)((char *)a2 + 30) + 234),
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 12) + 33) - *(_DWORD *)(*(_DWORD *)((char *)a2 + 30) + 238));
}
else
{
v5 = *(_DWORD *)((char *)a2 + 34);
if ( v5 )
render_sprite_set(
*(_DWORD **)((char *)a2 + 26),
*(_DWORD *)(*(_DWORD *)(v5 + 4) + 8),
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)a2 + 38) + 4) + 8),
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 4) + 8) + 29) - *(_DWORD *)(*(_DWORD *)((char *)a2 + 30) + 234),
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 4) + 8) + 33) - *(_DWORD *)(*(_DWORD *)((char *)a2 + 30) + 238));
*(_DWORD *)((char *)a2 + 86) = 0;
control_handler(60, a2);
}
}

//----- (010166F6) --------------------------------------------------------
int __thiscall TKickback::Message(TKickback *this, int a2, float a3)
{
TKickback *v3; // esi

v3 = this;
if ( (a2 == 1011 || a2 == 1024) && *(_DWORD *)((char *)this + 86) )
{
timer_kill(*(_DWORD *)((char *)this + 86));
if ( *(_DWORD *)((char *)v3 + 34) )
render_sprite_set_bitmap(*(_DWORD **)((char *)v3 + 26), 0);
*(_DWORD *)((char *)v3 + 86) = 0;
*(_DWORD *)((char *)v3 + 90) = 0;
*(_DWORD *)((char *)v3 + 66) = 1315859240;
}
return 0;
}

//----- (010183E8) --------------------------------------------------------
void __thiscall TKickback::Collision(TKickback *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TKickback *v6; // esi
float v7; // ST10_4

v6 = this;
if ( *(_DWORD *)(*(_DWORD *)((char *)this + 30) + 370) )
{
basic_collision(
a2,
a3,
a4,
*(float *)((char *)this + 54),
*(float *)((char *)this + 58),
0.0,
*(float *)((char *)this + 62));
}
else
{
if ( !*(_DWORD *)((char *)this + 90) )
{
v7 = *(float *)((char *)this + 78);
*(_DWORD *)((char *)this + 66) = 1315859240;
*(_DWORD *)((char *)this + 90) = 1;
*(_DWORD *)((char *)this + 86) = timer_set(v7, (int)this, (int)TKickback::TimerExpired);
}
if ( TCollisionComponent::DefaultCollision(v6, a2, a3, a4) )
*(_DWORD *)((char *)v6 + 90) = 0;
}
}

//----- (0101983D) --------------------------------------------------------
TKickback *__thiscall TKickback::TKickback(TKickback *this, struct TPinballTable *a2, int a3)
{
TKickback *v3; // esi

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 1);
*(_DWORD *)((char *)v3 + 6) = 0;
*(_DWORD *)((char *)v3 + 86) = 0;
*(_DWORD *)((char *)v3 + 90) = 0;
*(_DWORD *)v3 = &TKickback::`vftable';
*(_DWORD *)((char *)v3 + 78) = 1060320051;
*(_DWORD *)((char *)v3 + 82) = 1036831949;
*(_DWORD *)((char *)v3 + 66) = 1315859240;
return v3;
}
// 1002668: using guessed type void *TKickback::`vftable';
