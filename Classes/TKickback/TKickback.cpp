#include "../../pinball.h"

//----- (0101663F) --------------------------------------------------------
void TKickback::TimerExpired(int a1, struct TPinballComponent *a2)
{
int v2; // eax
int v3; // ST10_4
int v4; // eax
int v5; // eax

if ( *(DWORD *)((char *)a2 + 90) )
{
*(float *)((char *)a2 + 66) = 0.0;
v2 = timer_set(*(float *)((char *)a2 + 82), (int)a2, (int)TKickback::TimerExpired);
v3 = *(DWORD *)((char *)a2 + 74);
*(DWORD *)((char *)a2 + 86) = v2;
loader_play_sound(v3);
v4 = *(DWORD *)((char *)a2 + 34);
if ( v4 )
render_sprite_set(
*(DWORD **)((char *)a2 + 26),
*(DWORD *)(*(DWORD *)(v4 + 4) + 12),
*(DWORD *)(*(DWORD *)(*(DWORD *)((char *)a2 + 38) + 4) + 12),
*(DWORD *)(*(DWORD *)(*(DWORD *)(v4 + 4) + 12) + 29) - *(DWORD *)(*(DWORD *)((char *)a2 + 30) + 234),
*(DWORD *)(*(DWORD *)(*(DWORD *)(v4 + 4) + 12) + 33) - *(DWORD *)(*(DWORD *)((char *)a2 + 30) + 238));
}
else
{
v5 = *(DWORD *)((char *)a2 + 34);
if ( v5 )
render_sprite_set(
*(DWORD **)((char *)a2 + 26),
*(DWORD *)(*(DWORD *)(v5 + 4) + 8),
*(DWORD *)(*(DWORD *)(*(DWORD *)((char *)a2 + 38) + 4) + 8),
*(DWORD *)(*(DWORD *)(*(DWORD *)(v5 + 4) + 8) + 29) - *(DWORD *)(*(DWORD *)((char *)a2 + 30) + 234),
*(DWORD *)(*(DWORD *)(*(DWORD *)(v5 + 4) + 8) + 33) - *(DWORD *)(*(DWORD *)((char *)a2 + 30) + 238));
*(DWORD *)((char *)a2 + 86) = 0;
control_handler(60, a2);
}
}

//----- (010166F6) --------------------------------------------------------
int __thiscall TKickback::Message(TKickback *this, int a2, float a3)
{
TKickback *v3; // esi

v3 = this;
if ( (a2 == 1011 || a2 == 1024) && *(DWORD *)((char *)this + 86) )
{
timer_kill(*(DWORD *)((char *)this + 86));
if ( *(DWORD *)((char *)v3 + 34) )
render_sprite_set_bitmap(*(DWORD **)((char *)v3 + 26), 0);
*(DWORD *)((char *)v3 + 86) = 0;
*(DWORD *)((char *)v3 + 90) = 0;
*(DWORD *)((char *)v3 + 66) = 1315859240;
}
return 0;
}

//----- (010183E8) --------------------------------------------------------
void __thiscall TKickback::Collision(TKickback *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TKickback *v6; // esi
float v7; // ST10_4

v6 = this;
if ( *(DWORD *)(*(DWORD *)((char *)this + 30) + 370) )
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
if ( !*(DWORD *)((char *)this + 90) )
{
v7 = *(float *)((char *)this + 78);
*(DWORD *)((char *)this + 66) = 1315859240;
*(DWORD *)((char *)this + 90) = 1;
*(DWORD *)((char *)this + 86) = timer_set(v7, (int)this, (int)TKickback::TimerExpired);
}
if ( TCollisionComponent::DefaultCollision(v6, a2, a3, a4) )
*(DWORD *)((char *)v6 + 90) = 0;
}
}

//----- (0101983D) --------------------------------------------------------
TKickback *__thiscall TKickback::TKickback(TKickback *this, struct TPinballTable *a2, int a3)
{
TKickback *v3; // esi

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 1);
*(DWORD *)((char *)v3 + 6) = 0;
*(DWORD *)((char *)v3 + 86) = 0;
*(DWORD *)((char *)v3 + 90) = 0;
*(DWORD *)v3 = &TKickback::vftable;
*(DWORD *)((char *)v3 + 78) = 1060320051;
*(DWORD *)((char *)v3 + 82) = 1036831949;
*(DWORD *)((char *)v3 + 66) = 1315859240;
return v3;
}
// 1002668: using guessed type void *TKickback::vftable;
