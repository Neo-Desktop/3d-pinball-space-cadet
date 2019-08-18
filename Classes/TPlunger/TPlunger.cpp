#include "TPlunger.h"

//----- (010172F0) --------------------------------------------------------
void TPlunger::BallFeedTimer(int a1, void *a2)
{
void (**v2)(signed int, DWORD); // eax

v2 = *(void (***)(signed int, DWORD))a2;
*(DWORD *)((char *)a2 + 78) = 0;
(*v2)(1015, 0.0);
}

//----- (01017314) --------------------------------------------------------
void TPlunger::PullbackTimer(int a1, void *a2)
{
char *v2; // esi
double v3; // st7
int v4; // ecx
int v5; // eax
float v6; // [esp+20h] [ebp+Ch]

v2 = (char *)a2;
v3 = (double)*(signed int *)((char *)a2 + 90) + *(float *)((char *)a2 + 62);
*(float *)((char *)a2 + 62) = v3;
v6 = (double)*(signed int *)((char *)a2 + 86);
if ( v3 <= v6 )
{
*(DWORD *)(v2 + 78) = timer_set(*(float *)(v2 + 94), (int)v2, (int)TPlunger::PullbackTimer);
}
else
{
*(DWORD *)(v2 + 78) = 0;
*(float *)(v2 + 62) = v6;
}
v4 = 4
* (unsigned __int64)(signed __int64)_floor(
(double)(*(DWORD *)(*(DWORD *)(*(DWORD *)(v2 + 34) + 4) + 4) - 1)
* (*(float *)(v2 + 62)
/ (double)*(signed int *)(v2 + 86)))
+ 8;
v5 = *(DWORD *)(v4 + *(DWORD *)(*(DWORD *)(v2 + 34) + 4));
render_sprite_set(
*(DWORD **)(v2 + 26),
*(DWORD *)(v4 + *(DWORD *)(*(DWORD *)(v2 + 34) + 4)),
*(DWORD *)(*(DWORD *)(*(DWORD *)(v2 + 38) + 4) + v4),
*(DWORD *)(v5 + 29) - *(DWORD *)(*(DWORD *)(v2 + 30) + 234),
*(DWORD *)(v5 + 33) - *(DWORD *)(*(DWORD *)(v2 + 30) + 238));
}

//----- (010173C8) --------------------------------------------------------
void TPlunger::PlungerReleasedTimer(int a1, void *a2)
{
*(float *)((char *)a2 + 66) = 1000000000.0;
*(float *)((char *)a2 + 62) = 0.0;
}

//----- (010185AD) --------------------------------------------------------
int __thiscall TPlunger::Message(TPlunger *this, int a2, float a3)
{
TPlunger *v3; // esi
int v4; // eax
int v5; // ST10_4
int v6; // edi
int v7; // ST10_4
double v8; // st7
int v9; // eax
int v10; // eax
float v11; // ST08_4

v3 = this;
switch ( a2 )
{
case 1004:
if ( !*(DWORD *)((char *)this + 78) )
{
v7 = *(DWORD *)((char *)this + 74);
*(float *)((char *)this + 62) = 0.0;
*(DWORD *)((char *)this + 66) = 1315859240;
loader_play_sound(v7);
TPlunger::PullbackTimer(0, (void *)v3);
}
return 0;
case 1005:
case 1009:
case 1010:
goto LABEL_12;
case 1015:
v6 = *(DWORD *)(*(DWORD *)(*(DWORD *)((char *)this + 30) + 254) + 8);
(**(void (__thiscall ***)(DWORD, signed int, DWORD))v6)(
*(DWORD *)(*(DWORD *)(*(DWORD *)((char *)this + 30) + 254) + 8),
1024,
0.0);
*(DWORD *)(v6 + 42) = *(DWORD *)(*(DWORD *)((char *)v3 + 30) + 286);
*(DWORD *)(v6 + 46) = *(DWORD *)(*(DWORD *)((char *)v3 + 30) + 290);
*(_BYTE *)(v6 + 5) = 1;
*(DWORD *)(*(DWORD *)((char *)v3 + 30) + 78) = 0;
pb_tilt_no_more(a2);
control_handler(a2, v3);
return 0;
case 1016:
if ( *(DWORD *)((char *)this + 82) )
timer_kill(*(DWORD *)((char *)this + 82));
v4 = timer_set(0.95999998, (int)v3, (int)TPlunger::BallFeedTimer);
v5 = *(DWORD *)((char *)v3 + 98);
*(DWORD *)((char *)v3 + 82) = v4;
loader_play_sound(v5);
control_handler(a2, v3);
return 0;
case 1017:
*(float *)((char *)this + 66) = 0.0;
*(float *)((char *)this + 62) = (double)*(signed int *)((char *)this + 86);
v8 = 0.2;
goto LABEL_17;
case 1024:
if ( *(DWORD *)((char *)this + 82) )
timer_kill(*(DWORD *)((char *)this + 82));
*(DWORD *)((char *)v3 + 82) = 0;
LABEL_12:
v9 = *(DWORD *)((char *)v3 + 78);
*(float *)((char *)v3 + 66) = 0.0;
if ( v9 )
timer_kill(v9);
*(DWORD *)((char *)v3 + 78) = 0;
if ( a2 == 1005 )
loader_play_sound(*(DWORD *)((char *)v3 + 102));
v10 = *(DWORD *)(*(DWORD *)(*(DWORD *)((char *)v3 + 34) + 4) + 8);
render_sprite_set(
*(DWORD **)((char *)v3 + 26),
*(DWORD *)(*(DWORD *)(*(DWORD *)((char *)v3 + 34) + 4) + 8),
*(DWORD *)(*(DWORD *)(*(DWORD *)((char *)v3 + 38) + 4) + 8),
*(DWORD *)(v10 + 29) - *(DWORD *)(*(DWORD *)((char *)v3 + 30) + 234),
*(DWORD *)(v10 + 33) - *(DWORD *)(*(DWORD *)((char *)v3 + 30) + 238));
v8 = *(float *)((char *)v3 + 94);
LABEL_17:
v11 = v8;
timer_set(v11, (int)v3, (int)TPlunger::PlungerReleasedTimer);
break;
default:
return 0;
}
return 0;
}

//----- (0101875F) --------------------------------------------------------
void __thiscall TPlunger::Collision(TPlunger *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TPlunger *v6; // esi
float v7; // ST18_4

v6 = this;
if ( *(DWORD *)(*(DWORD *)((char *)this + 30) + 370) )
(**(void (***)(signed int, DWORD))this)(1017, 0.0);
v7 = (double)_rand() * 0.00003051850947599719 * *(float *)((char *)v6 + 62) * 0.1 + *(float *)((char *)v6 + 62);
basic_collision(a2, a3, a4, *(float *)((char *)v6 + 54), *(float *)((char *)v6 + 58), *(float *)((char *)v6 + 66), v7);
}

//----- (0101A4F3) --------------------------------------------------------
TPlunger *__thiscall TPlunger::TPlunger(TPlunger *this, struct TPinballTable *a2, int a3)
{
TPlunger *v3; // esi
int v4; // eax
int v5; // eax
signed __int64 v6; // rax
DWORD *v7; // eax
char v9; // [esp+8h] [ebp-48h]
int v10; // [esp+38h] [ebp-18h]
int v11; // [esp+40h] [ebp-10h]
int v12; // [esp+44h] [ebp-Ch]

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 1);
*(DWORD *)v3 = &TPlunger::vftable;
loader_query_visual(a3, 0, &v9);
v4 = v11;
*(float *)((char *)v3 + 62) = 0.0;
*(DWORD *)((char *)v3 + 82) = 0;
*(DWORD *)((char *)v3 + 78) = 0;
*(DWORD *)((char *)v3 + 98) = v4;
*(DWORD *)((char *)v3 + 102) = v12;
*(DWORD *)((char *)v3 + 74) = v10;
v5 = *(DWORD *)((char *)v3 + 34);
*(DWORD *)((char *)v3 + 66) = 1315859240;
*(DWORD *)((char *)v3 + 86) = 100;
v6 = (signed __int64)(100.0 / ((double)*(signed int *)(*(DWORD *)(v5 + 4) + 4) * 8.0));
*(float *)((char *)v3 + 54) = 0.5;
*(float *)((char *)v3 + 58) = 0.5;
*(DWORD *)((char *)v3 + 90) = v6;
*(DWORD *)((char *)v3 + 94) = 1020054733;
v7 = (DWORD *)loader_query_float_attribute(a3, 0, 601);
*(DWORD *)((char *)a2 + 286) = *v7;
*(DWORD *)((char *)a2 + 290) = v7[1];
return v3;
}
// 1002750: using guessed type void *TPlunger::vftable;
