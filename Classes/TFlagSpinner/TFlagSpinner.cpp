#include "TFlagSpinner.h"

//----- (01015F34) --------------------------------------------------------
void TFlagSpinner::SpinTimer(int a1, void *a2)
{
*(DWORD *)((char *)a2 + 102) = 0;
TFlagSpinner::NextFrame((TFlagSpinner *)a2);
}

//----- (01015F4E) --------------------------------------------------------
void __thiscall TFlagSpinner::NextFrame(TFlagSpinner *this)
{
TFlagSpinner *v1; // esi
int v2; // eax
int v3; // edx
int v4; // ecx
int v5; // edi
double v6; // st7
int v7; // et1
char v9; // c0
float v10; // ST0C_4

v1 = this;
*(DWORD *)((char *)v1 + 98) += *(DWORD *)((char *)this + 94);
v2 = *(DWORD *)((char *)this + 34);
v3 = *(DWORD *)((char *)this + 98);
v4 = *(DWORD *)(*(DWORD *)(v2 + 4) + 4);
if ( v3 < v4 )
{
if ( v3 < 0 )
*(DWORD *)((char *)v1 + 98) = v4 - 1;
}
else
{
*(DWORD *)((char *)v1 + 98) = 0;
}
v5 = *(DWORD *)(*(DWORD *)(v2 + 4) + 4 * *(DWORD *)((char *)v1 + 98) + 8);
if ( !*(DWORD *)(*(DWORD *)((char *)v1 + 30) + 370) )
{
control_handler(63, v1);
if ( *(DWORD *)((char *)v1 + 70) )
loader_play_sound(*(DWORD *)((char *)v1 + 70));
if ( !*(DWORD *)((char *)v1 + 98) )
control_handler(62, v1);
}
render_sprite_set(
*(DWORD **)((char *)v1 + 26),
v5,
*(DWORD *)(*(DWORD *)(*(DWORD *)((char *)v1 + 38) + 4) + 4 * *(DWORD *)((char *)v1 + 98) + 8),
*(DWORD *)(v5 + 29) - *(DWORD *)(*(DWORD *)((char *)v1 + 30) + 234),
*(DWORD *)(v5 + 33) - *(DWORD *)(*(DWORD *)((char *)v1 + 30) + 238));
v6 = *(float *)((char *)v1 + 90) * *(float *)((char *)v1 + 78);
v7 = *(DWORD *)((char *)v1 + 86);
*(float *)((char *)v1 + 78) = v6;
if ( !v9 )
{
v10 = 1.0 / v6;
timer_set(v10, (int)v1, (int)TFlagSpinner::SpinTimer);
}
}

//----- (01016014) --------------------------------------------------------
int __thiscall TFlagSpinner::Message(TFlagSpinner *this, int a2, float a3)
{
TFlagSpinner *v3; // esi
int v4; // eax

v3 = this;
if ( a2 == 1024 )
{
if ( *(DWORD *)((char *)this + 102) )
{
timer_kill(*(DWORD *)((char *)this + 102));
*(DWORD *)((char *)v3 + 102) = 0;
}
*(DWORD *)((char *)v3 + 98) = 0;
v4 = *(DWORD *)(*(DWORD *)(*(DWORD *)((char *)v3 + 34) + 4) + 8);
render_sprite_set(
*(DWORD **)((char *)v3 + 26),
*(DWORD *)(*(DWORD *)(*(DWORD *)((char *)v3 + 34) + 4) + 8),
*(DWORD *)(*(DWORD *)(*(DWORD *)((char *)v3 + 38) + 4) + 8),
*(DWORD *)(v4 + 29) - *(DWORD *)(*(DWORD *)((char *)v3 + 30) + 234),
*(DWORD *)(v4 + 33) - *(DWORD *)(*(DWORD *)((char *)v3 + 30) + 238));
}
return 0;
}

//----- (01016078) --------------------------------------------------------
int __thiscall TFlagSpinner::get_scoring(TFlagSpinner *this, int a2)
{
int result; // eax

if ( a2 >= 2 )
result = 0;
else
result = *(DWORD *)((char *)this + 4 * a2 + 110);
return result;
}

//----- (01016096) --------------------------------------------------------
void __thiscall TFlagSpinner::put_scoring(TFlagSpinner *this, int a2, int a3)
{
if ( a2 < 2 )
*(DWORD *)((char *)this + 4 * a2 + 110) = a3;
}

//----- (01018150) --------------------------------------------------------
void __thiscall TFlagSpinner::Collision(TFlagSpinner *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
int v6; // eax
TFlagSpinner *v7; // edi

*(float *)((char *)a2 + 42) = *(float *)a3;
v6 = *((DWORD *)a3 + 1);
v7 = this;
*(float *)((char *)a2 + 70) = *(float *)((char *)a2 + 70) - a5;
*(DWORD *)((char *)a2 + 46) = v6;
TBall::not_again(a2, a6);
*(DWORD *)((char *)v7 + 94) = 2 * (*(DWORD *)((char *)v7 + 106) != (DWORD)a6) - 1;
if ( *(float *)((char *)a2 + 66) == 0.0 )
*(DWORD *)((char *)v7 + 78) = *(DWORD *)((char *)v7 + 86);
else
*(float *)((char *)v7 + 78) = *(float *)((char *)a2 + 66) * 20.0;
if ( *(float *)((char *)v7 + 78) < (double)*(float *)((char *)v7 + 86) )
*(DWORD *)((char *)v7 + 78) = *(DWORD *)((char *)v7 + 86);
if ( *(float *)((char *)v7 + 78) > (double)*(float *)((char *)v7 + 82) )
*(DWORD *)((char *)v7 + 78) = *(DWORD *)((char *)v7 + 82);
TFlagSpinner::NextFrame(v7);
}

//----- (010194B0) --------------------------------------------------------
TFlagSpinner *__thiscall TFlagSpinner::TFlagSpinner(TFlagSpinner *this, struct TPinballTable *a2, int a3)
{
TFlagSpinner *v3; // esi
TLine *v4; // eax
TLine *v5; // edi
TLine *v6; // eax
TLine *v7; // eax
DWORD *v8; // eax
DWORD *v9; // eax
DWORD *v10; // eax
char v12; // [esp+Ch] [ebp-60h]
int *v13; // [esp+18h] [ebp-54h]
unsigned int v14; // [esp+40h] [ebp-2Ch]
int v15; // [esp+54h] [ebp-18h]
int v16; // [esp+58h] [ebp-14h]
int v17; // [esp+60h] [ebp-Ch]
int v18; // [esp+64h] [ebp-8h]

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 0);
*(DWORD *)v3 = &TFlagSpinner::vftable;
*(DWORD *)((char *)v3 + 102) = 0;
loader_query_visual(a3, 0, &v12);
v15 = *v13;
v16 = v13[1];
v17 = v13[2];
v18 = v13[3];
v4 = (TLine *)component_create(0x55u);
if ( v4 )
v5 = TLine::TLine(v4, v3, (char *)v3 + 5, v14, (struct vector_type *)&v17, (struct vector_type *)&v15);
else
v5 = 0;
if ( v5 )
{
(*(void (__thiscall **)(TLine *))(*(DWORD *)v5 + 8))(v5);
objlist_class::Add((TFlagSpinner *)((char *)v3 + 42), (void *)v5);
}
v6 = (TLine *)component_create(0x55u);
if ( v6 )
v7 = TLine::TLine(v6, v3, (char *)v3 + 5, v14, (struct vector_type *)&v15, (struct vector_type *)&v17);
else
v7 = 0;
*(DWORD *)((char *)v3 + 106) = v7;
if ( v7 )
{
(*(void (__thiscall **)(TLine *))(*(DWORD *)v7 + 8))(v7);
objlist_class::Add((TFlagSpinner *)((char *)v3 + 42), *(void **)((char *)v3 + 106));
}
*(DWORD *)((char *)v3 + 90) = 1059481190;
*(DWORD *)((char *)v3 + 82) = 1195593728;
*(DWORD *)((char *)v3 + 86) = 1084227584;
v8 = (DWORD *)loader_query_float_attribute(a3, 0, 1202);
if ( v8 )
*(DWORD *)((char *)v3 + 90) = *v8;
v9 = (DWORD *)loader_query_float_attribute(a3, 0, 1200);
if ( v9 )
*(DWORD *)((char *)v3 + 82) = *v9;
v10 = (DWORD *)loader_query_float_attribute(a3, 0, 1201);
if ( v10 )
*(DWORD *)((char *)v3 + 86) = *v10;
return v3;
}
// 1002588: using guessed type void *TFlagSpinner::vftable;
