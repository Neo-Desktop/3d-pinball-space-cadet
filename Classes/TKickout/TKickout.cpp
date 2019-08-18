#include "../../pinball.h"

//----- (01016745) --------------------------------------------------------
void __thiscall TKickout::Collision(TKickout *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
struct TPinballComponent *v6; // esi

v6 = this;
if ( !*(DWORD *)((char *)this + 78) )
{
*(DWORD *)((char *)this + 102) = a2;
*(DWORD *)((char *)this + 66) = 1315859240;
*(DWORD *)((char *)this + 78) = 1;
*(DWORD *)((char *)a2 + 106) = this;
*(DWORD *)((char *)a2 + 42) = *(DWORD *)((char *)this + 110);
*(DWORD *)((char *)a2 + 46) = *(DWORD *)((char *)this + 114);
*(DWORD *)((char *)this + 126) = *(DWORD *)((char *)a2 + 50);
*(DWORD *)((char *)a2 + 50) = *(DWORD *)((char *)this + 98);
if ( *(DWORD *)(*(DWORD *)((char *)this + 30) + 370) )
{
(**(void (__thiscall ***)(TKickout *, signed int, DWORD))this)(this, 55, 0.1);
}
else
{
loader_play_sound(*(DWORD *)((char *)this + 70));
control_handler(63, v6);
}
}
}

//----- (010167BE) --------------------------------------------------------
void TKickout::ResetTimerExpired(int a1, void *a2)
{
if ( !*(DWORD *)((char *)a2 + 82) )
*((_BYTE *)a2 + 5) = 1;
*(DWORD *)((char *)a2 + 86) = 0;
}

//----- (010167DD) --------------------------------------------------------
void TKickout::TimerExpired(int a1, void *a2)
{
double v2; // st7
float v3; // ST08_4
int v4; // eax
int v5; // ecx
int v6; // ST10_4

if ( *(DWORD *)((char *)a2 + 78) )
{
v2 = *(float *)((char *)a2 + 94);
*(DWORD *)((char *)a2 + 78) = 0;
v3 = v2;
*(DWORD *)((char *)a2 + 86) = timer_set(v3, (int)a2, (int)TKickout::ResetTimerExpired);
v4 = *(DWORD *)((char *)a2 + 102);
if ( v4 )
{
v5 = *(DWORD *)((char *)a2 + 126);
*(DWORD *)((char *)a2 + 102) = 0;
*(DWORD *)(v4 + 50) = v5;
throw_ball(
(struct TBall *)v4,
(struct vector_type *)((char *)a2 + 130),
*(float *)((char *)a2 + 142),
*(float *)((char *)a2 + 146),
*(float *)((char *)a2 + 150));
v6 = *(DWORD *)((char *)a2 + 74);
*((_BYTE *)a2 + 5) = 0;
loader_play_sound(v6);
}
}
}

//----- (0101685B) --------------------------------------------------------
int __thiscall TKickout::FieldEffect(TKickout *this, struct TBall *a2, struct vector_type *a3)
{
TKickout *v3; // edi
double v5; // st7
double v6; // st6
float v7; // [esp+4h] [ebp-Ch]
float v8; // [esp+8h] [ebp-8h]

v3 = this;
if ( *(DWORD *)((char *)this + 78) )
return 0;
v5 = *(float *)((char *)this + 110) - *(float *)((char *)a2 + 42);
v7 = v5;
v6 = *(float *)((char *)this + 114) - *(float *)((char *)a2 + 46);
v8 = v6;
if ( v6 * v6 + v5 * v5 > *(float *)((char *)this + 122) )
return 0;
normalize_2d(&v7);
*(float *)a3 = v7 * *(float *)((char *)v3 + 106) - *(float *)((char *)a2 + 54) * *(float *)((char *)a2 + 66);
*((float *)a3 + 1) = v8 * *(float *)((char *)v3 + 106) - *(float *)((char *)a2 + 58) * *(float *)((char *)a2 + 66);
return 1;
}

//----- (010168E3) --------------------------------------------------------
int __thiscall TKickout::Message(TKickout *this, int a2, float a3)
{
TKickout *v3; // esi

v3 = this;
if ( a2 == 55 )
{
if ( *(DWORD *)((char *)this + 78) )
{
if ( a3 < 0.0 )
a3 = *(float *)((char *)this + 90);
*(DWORD *)((char *)this + 86) = timer_set(a3, (int)this, (int)TKickout::TimerExpired);
}
}
else
{
if ( a2 != 1011 )
{
if ( a2 != 1024 )
return 0;
if ( *(DWORD *)((char *)this + 78) )
{
if ( *(DWORD *)((char *)this + 86) )
timer_kill(*(DWORD *)((char *)this + 86));
TKickout::TimerExpired(0, (void *)v3);
}
}
if ( *(DWORD *)((char *)v3 + 82) )
*((_BYTE *)v3 + 5) = 0;
}
return 0;
}

//----- (01016963) --------------------------------------------------------
int __thiscall TKickout::get_scoring(TKickout *this, int a2)
{
int result; // eax

if ( a2 >= 5 )
result = 0;
else
result = *(DWORD *)((char *)this + 4 * a2 + 166);
return result;
}

//----- (01016984) --------------------------------------------------------
void __thiscall TKickout::put_scoring(TKickout *this, int a2, int a3)
{
if ( a2 < 5 )
*(DWORD *)((char *)this + 4 * a2 + 166) = a3;
}

//----- (01019884) --------------------------------------------------------
TKickout *__thiscall TKickout::TKickout(TKickout *this, struct TPinballTable *a2, int a3, struct vector_type *a4)
{
TKickout *v4; // ebx
float *v5; // eax
float *v6; // esi
double v7; // st7
TCircle *v8; // eax
int v9; // eax
double v10; // st7
int v11; // eax
int v12; // eax
unsigned int v13; // ecx
char v15; // [esp+10h] [ebp-58h]
float *v16; // [esp+1Ch] [ebp-4Ch]
int v17; // [esp+20h] [ebp-48h]
int v18; // [esp+28h] [ebp-40h]
float v19; // [esp+2Ch] [ebp-3Ch]
int v20; // [esp+30h] [ebp-38h]
int v21; // [esp+34h] [ebp-34h]
int v22; // [esp+38h] [ebp-30h]
int v23; // [esp+3Ch] [ebp-2Ch]
int v24; // [esp+40h] [ebp-28h]
unsigned int v25; // [esp+44h] [ebp-24h]
int v26; // [esp+58h] [ebp-10h]
int v27; // [esp+5Ch] [ebp-Ch]
int v28; // [esp+60h] [ebp-8h]
int v29; // [esp+64h] [ebp-4h]
float v30; // [esp+70h] [ebp+8h]
TCircle *v31; // [esp+70h] [ebp+8h]
struct vector_type *v32; // [esp+78h] [ebp+10h]

v4 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 0);
*(DWORD *)v4 = &TKickout::vftable;
*(DWORD *)((char *)v4 + 82) = a4 == 0;
if ( !a4 )
*((_BYTE *)v4 + 5) = 0;
*(DWORD *)((char *)v4 + 90) = 1069547520;
*(DWORD *)((char *)v4 + 94) = 1028443341;
*(DWORD *)((char *)v4 + 6) = 0;
*(DWORD *)((char *)v4 + 86) = 0;
*(DWORD *)((char *)v4 + 78) = 0;
v30 = *(float *)loader_query_float_attribute(a3, 0, 306);
*(DWORD *)((char *)v4 + 106) = *(DWORD *)loader_query_float_attribute(a3, 0, 305);
loader_query_visual(a3, 0, &v15);
*(DWORD *)((char *)v4 + 70) = v17;
*(DWORD *)((char *)v4 + 74) = v24;
v5 = v16;
*(float *)((char *)v4 + 110) = *v16;
v6 = v5 + 2;
*(float *)((char *)v4 + 114) = v5[1];
v7 = v30 * v5[2];
v32 = (struct vector_type *)v5;
*(float *)((char *)v4 + 122) = v7;
if ( 0.0 == v7 )
*(DWORD *)((char *)v4 + 122) = 981668463;
v8 = (TCircle *)operator new(0x25u);
if ( v8 )
v31 = TCircle::TCircle(v8, v4, (char *)v4 + 5, v25, v32, *(float *)((char *)v4 + 122));
else
v31 = 0;
if ( v31 )
{
(*(void (**)(void))(*(DWORD *)v31 + 8))();
objlist_class::Add((TKickout *)((char *)v4 + 42), (void *)v31);
}
*(float *)((char *)v4 + 122) = *v6 * *v6;
v9 = loader_query_float_attribute(a3, 0, 408);
v10 = v19 * 0.01;
*(DWORD *)((char *)v4 + 98) = *(DWORD *)(v9 + 8);
v11 = v23;
*(float *)((char *)v4 + 150) = v10;
*(DWORD *)((char *)v4 + 130) = v20;
*(DWORD *)((char *)v4 + 134) = v21;
*(DWORD *)((char *)v4 + 142) = v11;
v12 = v18;
*(DWORD *)((char *)v4 + 138) = v22;
*(DWORD *)((char *)v4 + 146) = v12;
v29 = *(DWORD *)((char *)v4 + 122);
v26 = *(DWORD *)((char *)v4 + 110);
v27 = *(DWORD *)((char *)v4 + 114);
*(DWORD *)((char *)v4 + 154) = (char *)v4 + 5;
v13 = v25;
v28 = *(DWORD *)((char *)v4 + 118);
*(DWORD *)((char *)v4 + 162) = v4;
*(DWORD *)((char *)v4 + 158) = v13;
edges_insert_circle((struct circle_type *)&v26, 0, (TKickout *)((char *)v4 + 154));
return v4;
}
// 1002690: using guessed type void *TKickout::vftable;
