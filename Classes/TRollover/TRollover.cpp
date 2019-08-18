#include "TRollover.h"

//----- (0101644B) --------------------------------------------------------
void TRollover::TimerExpired(int a1, void *a2)
{
*((_BYTE *)a2 + 5) = 1;
}

//----- (01016460) --------------------------------------------------------
int __thiscall TRollover::Message(TRollover *this, int a2, float a3)
{
int v3; // eax

if ( a2 == 1024 )
{
v3 = *(DWORD *)((char *)this + 34);
*((_BYTE *)this + 5) = 1;
*((_BYTE *)this + 78) = 0;
if ( v3 )
render_sprite_set_bitmap(*(DWORD **)((char *)this + 26), *(DWORD *)(*(DWORD *)(v3 + 4) + 8));
}
return 0;
}

//----- (01016496) --------------------------------------------------------
int __thiscall TRollover::get_scoring(TRollover *this, int a2)
{
int result; // eax

if ( a2 >= 2 )
result = 0;
else
result = *(DWORD *)((char *)this + 4 * a2 + 79);
return result;
}

//----- (010164B4) --------------------------------------------------------
void __thiscall TRollover::put_scoring(TRollover *this, int a2, int a3)
{
if ( a2 < 2 )
*(DWORD *)((char *)this + 4 * a2 + 79) = a3;
}

//----- (010182E4) --------------------------------------------------------
void __thiscall TRollover::build_walls(TRollover *this, int a2)
{
char *v2; // esi
unsigned int v3; // ST14_4
float *v4; // eax
unsigned int v5; // ST14_4
float *v6; // eax
char v7; // [esp+Ch] [ebp-48h]
unsigned int v8; // [esp+40h] [ebp-14h]

v2 = (char *)this;
loader_query_visual(a2, 0, &v7);
v3 = v8;
v4 = (float *)loader_query_float_attribute(a2, 0, 600);
install_wall(v4, (struct TCollisionComponent *)v2, v2 + 5, v3, 0.0, (void *)0x258);
v5 = v8;
v6 = (float *)loader_query_float_attribute(a2, 0, 603);
install_wall(v6, (struct TCollisionComponent *)v2, v2 + 78, v5, 0.0, (void *)0x25B);
}

//----- (01018351) --------------------------------------------------------
void __thiscall TRollover::Collision(TRollover *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TRollover *v6; // esi
double v7; // st7
int v8; // ebx
int v9; // eax
bool v10; // cl

v6 = this;
*(float *)((char *)a2 + 42) = *(float *)a3;
v7 = *(float *)((char *)a2 + 70);
*(DWORD *)((char *)a2 + 46) = *((DWORD *)a3 + 1);
*(float *)((char *)a2 + 70) = v7 - a5;
TBall::not_again(a2, a6);
v8 = 0;
if ( !*(DWORD *)(*(DWORD *)((char *)v6 + 30) + 370) )
{
if ( *((_BYTE *)v6 + 78) )
{
timer_set(0.1, (int)v6, (int)TRollover::TimerExpired);
*((_BYTE *)v6 + 5) = 0;
}
else
{
loader_play_sound(*(DWORD *)((char *)v6 + 70));
control_handler(63, v6);
}
v9 = *(DWORD *)((char *)v6 + 34);
v10 = *((_BYTE *)v6 + 78) == 0;
*((_BYTE *)v6 + 78) = v10;
if ( v9 )
{
if ( !v10 )
v8 = *(DWORD *)(*(DWORD *)(v9 + 4) + 8);
render_sprite_set_bitmap(*(DWORD **)((char *)v6 + 26), v8);
}
}
}

//----- (01019749) --------------------------------------------------------
TRollover *__thiscall TRollover::TRollover(TRollover *this, struct TPinballTable *a2, int a3, int a4)
{
TRollover *v4; // esi

v4 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, a4);
*(DWORD *)v4 = &TRollover::vftable;
return v4;
}
// 1002614: using guessed type void *TRollover::vftable;

//----- (01019771) --------------------------------------------------------
TRollover *__thiscall TRollover::TRollover(TRollover *this, struct TPinballTable *a2, int a3)
{
TRollover *v3; // esi
int v4; // eax

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 0);
v4 = *(DWORD *)((char *)v3 + 34);
*(DWORD *)v3 = &TRollover::vftable;
*((_BYTE *)v3 + 78) = 0;
if ( v4 )
render_sprite_set_bitmap(*(DWORD **)((char *)v3 + 26), *(DWORD *)(*(DWORD *)(v4 + 4) + 8));
TRollover::build_walls(v3, a3);
return v3;
}
// 1002614: using guessed type void *TRollover::vftable;
