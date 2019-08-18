#include "../../pinball.h"

//----- (010169A4) --------------------------------------------------------
void THole::TimerExpired(int a1, void *a2)
{
*(DWORD *)((char *)a2 + 86) = 0;
*(DWORD *)((char *)a2 + 82) = 1;
}

//----- (010169C0) --------------------------------------------------------
int __thiscall THole::FieldEffect(THole *this, struct TBall *a2, struct vector_type *a3)
{
THole *v3; // esi
double v4; // st7
double v5; // st7
int v6; // eax
int v7; // eax
int result; // eax
double v9; // st7
double v10; // st6
float v11; // [esp+4h] [ebp-Ch]
float v12; // [esp+8h] [ebp-8h]

v3 = this;
if ( *(DWORD *)((char *)this + 78) )
{
if ( *(DWORD *)((char *)this + 82) )
{
v4 = *(float *)((char *)a2 + 62)
- *(float *)(*(DWORD *)((char *)this + 30) + 270)
* *(float *)((char *)a2 + 74)
* *(float *)((char *)this + 98);
*(float *)((char *)a2 + 62) = v4;
v5 = v4 + *(float *)((char *)a2 + 50);
*(float *)((char *)a2 + 50) = v5;
if ( v5 <= *(float *)((char *)this + 102) )
{
v6 = *(DWORD *)((char *)this + 102);
*(DWORD *)((char *)this + 78) = 0;
*(DWORD *)((char *)this + 82) = 0;
*(DWORD *)((char *)a2 + 50) = v6;
v7 = *(DWORD *)((char *)this + 106);
*(float *)((char *)a2 + 62) = 0.0;
*(DWORD *)((char *)a2 + 110) = v7;
*(float *)((char *)a2 + 58) = 0.0;
*(DWORD *)((char *)a2 + 106) = 0;
*(float *)((char *)a2 + 54) = 0.0;
*(float *)((char *)a2 + 66) = 0.0;
loader_play_sound(*(DWORD *)((char *)this + 70));
control_handler(58, v3);
}
}
result = 0;
}
else
{
v9 = *(float *)((char *)this + 114) - *(float *)((char *)a2 + 42);
v11 = v9;
v10 = *(float *)((char *)this + 118) - *(float *)((char *)a2 + 46);
v12 = v10;
if ( v10 * v10 + v9 * v9 <= *(float *)((char *)this + 126) )
{
normalize_2d(&v11);
*(float *)a3 = v11 * *(float *)((char *)v3 + 110) - *(float *)((char *)a2 + 54) * *(float *)((char *)a2 + 66);
*((float *)a3 + 1) = v12 * *(float *)((char *)v3 + 110)
- *(float *)((char *)a2 + 58) * *(float *)((char *)a2 + 66);
result = 1;
}
else
{
result = 0;
}
}
return result;
}

//----- (01016AB1) --------------------------------------------------------
int __thiscall THole::Message(THole *this, int a2, float a3)
{
THole *v3; // esi

v3 = this;
if ( a2 == 1024 && *(DWORD *)((char *)this + 78) )
{
if ( *(DWORD *)((char *)this + 86) )
timer_kill(*(DWORD *)((char *)this + 86));
*(DWORD *)((char *)v3 + 86) = 0;
*(DWORD *)((char *)v3 + 82) = 1;
}
return 0;
}

//----- (01018476) --------------------------------------------------------
void __thiscall THole::Collision(THole *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
THole *v6; // esi
int v7; // ecx

v6 = this;
if ( !*(DWORD *)((char *)this + 78) )
{
*(DWORD *)((char *)this + 82) = 0;
*(DWORD *)((char *)this + 66) = 1315859240;
*(DWORD *)((char *)this + 78) = 1;
*(DWORD *)((char *)a2 + 106) = this;
*(DWORD *)((char *)a2 + 42) = *(DWORD *)((char *)this + 114);
v7 = *(DWORD *)((char *)this + 118);
*(float *)((char *)a2 + 62) = 0.0;
*(DWORD *)((char *)a2 + 46) = v7;
*(DWORD *)((char *)v6 + 86) = timer_set(0.5, (int)v6, (int)THole::TimerExpired);
if ( !*(DWORD *)(*(DWORD *)((char *)v6 + 30) + 370) )
{
loader_play_sound(*(DWORD *)((char *)v6 + 74));
control_handler(57, v6);
}
}
}

//----- (01019A1C) --------------------------------------------------------
THole *__thiscall THole::THole(THole *this, struct TPinballTable *a2, int a3)
{
THole *v3; // ebx
DWORD *v4; // eax
DWORD *v5; // eax
int v6; // eax
float *v7; // edi
double v8; // st7
TCircle *v9; // eax
float *v10; // eax
unsigned int v11; // ecx
char v13; // [esp+14h] [ebp-5Ch]
DWORD *v14; // [esp+20h] [ebp-50h]
unsigned int v15; // [esp+48h] [ebp-28h]
int v16; // [esp+5Ch] [ebp-14h]
int v17; // [esp+60h] [ebp-10h]
int v18; // [esp+64h] [ebp-Ch]
int v19; // [esp+68h] [ebp-8h]
struct vector_type *v20; // [esp+6Ch] [ebp-4h]
float v21; // [esp+78h] [ebp+8h]
TCircle *v22; // [esp+78h] [ebp+8h]

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 0);
*(DWORD *)v3 = &THole::vftable;
*(DWORD *)((char *)v3 + 94) = 1028443341;
*(DWORD *)((char *)v3 + 6) = 0;
*(DWORD *)((char *)v3 + 86) = 0;
*(DWORD *)((char *)v3 + 78) = 0;
v4 = (DWORD *)loader_query_float_attribute(a3, 0, 407);
if ( v4 )
*(DWORD *)((char *)v3 + 90) = *v4;
else
*(DWORD *)((char *)v3 + 90) = 1048576000;
v5 = (DWORD *)loader_query_float_attribute(a3, 0, 701);
if ( v5 )
*(DWORD *)((char *)v3 + 98) = *v5;
else
*(DWORD *)((char *)v3 + 98) = 1056964608;
v21 = *(float *)loader_query_float_attribute(a3, 0, 306);
*(DWORD *)((char *)v3 + 110) = *(DWORD *)loader_query_float_attribute(a3, 0, 305);
loader_query_visual(a3, 0, &v13);
v6 = (int)v14;
*(DWORD *)((char *)v3 + 114) = *v14;
v7 = (float *)(v6 + 8);
*(DWORD *)((char *)v3 + 118) = *(DWORD *)(v6 + 4);
v8 = v21 * *(float *)(v6 + 8);
v20 = (struct vector_type *)v6;
*(float *)((char *)v3 + 126) = v8;
if ( 0.0 == v8 )
*(DWORD *)((char *)v3 + 126) = 981668463;
v9 = (TCircle *)operator new(0x25u);
if ( v9 )
v22 = TCircle::TCircle(v9, v3, (char *)v3 + 5, v15, v20, *(float *)((char *)v3 + 126));
else
v22 = 0;
if ( v22 )
{
(*(void (**)(void))(*(DWORD *)v22 + 8))();
objlist_class::Add((THole *)((char *)v3 + 42), (void *)v22);
}
*(float *)((char *)v3 + 126) = *v7 * *v7;
*(DWORD *)((char *)v3 + 102) = *(DWORD *)(loader_query_float_attribute(a3, 0, 408) + 8);
v10 = (float *)loader_query_float_attribute(a3, 0, 1304);
*(DWORD *)((char *)v3 + 106) = (signed __int64)_floor(*v10);
v19 = *(DWORD *)((char *)v3 + 126);
v16 = *(DWORD *)((char *)v3 + 114);
v17 = *(DWORD *)((char *)v3 + 118);
*(DWORD *)((char *)v3 + 130) = (char *)v3 + 5;
v11 = v15;
v18 = *(DWORD *)((char *)v3 + 122);
*(DWORD *)((char *)v3 + 138) = v3;
*(DWORD *)((char *)v3 + 134) = v11;
edges_insert_circle((struct circle_type *)&v16, 0, (THole *)((char *)v3 + 130));
return v3;
}
// 10026AC: using guessed type void *THole::vftable;
