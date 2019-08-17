#include "TFlipper.h"


//----- (0101C047) --------------------------------------------------------
TZmapList *__thiscall TFlipper::~TFlipper(TFlipper *this)
{
TCollisionComponent *v1; // esi
void *v2; // ST00_4

v1 = this;
v2 = *(void **)((char *)this + 82);
*(_DWORD *)this = &TFlipper::`vftable';
operator delete(v2);
return TCollisionComponent::~TCollisionComponent(v1);
}
// 1002838: using guessed type void *TFlipper::`vftable';

//----- (0101C070) --------------------------------------------------------
void __stdcall TFlipper::TimerExpired(int a1, void *a2)
{
char *v2; // esi
double v3; // st7
int v4; // edi
signed __int64 v5; // rax
int v6; // ebx
int v7; // ecx
int v8; // eax
int v9; // ecx
int v10; // edx
int v11; // ecx
int v12; // eax
signed int v13; // [esp+14h] [ebp-4h]
float v14; // [esp+24h] [ebp+Ch]

v2 = (char *)a2;
v13 = 0;
v3 = _floor((time_now - *(float *)((char *)a2 + 102)) / *(float *)((char *)a2 + 98) + 0.5);
v4 = *(_DWORD *)((char *)a2 + 34);
v14 = (double)*(signed int *)(*(_DWORD *)(v4 + 4) + 4);
if ( v3 > v14 )
v3 = v14;
if ( v3 < 0.0 )
v3 = 0.0;
v5 = (signed __int64)v3;
if ( !(unsigned int)(signed __int64)v3 )
LODWORD(v5) = 1;
v6 = *(_DWORD *)(v2 + 6);
if ( v6 == 1 )
{
*(_DWORD *)(v2 + 78) += v5;
v7 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4) - 1;
if ( *(_DWORD *)(v2 + 78) >= v7 )
{
*(_DWORD *)(v2 + 78) = v7;
v13 = 1;
}
}
if ( v6 == 2 )
{
*(_DWORD *)(v2 + 78) -= v5;
v8 = 0;
if ( *(_DWORD *)(v2 + 78) <= 0 )
{
*(_DWORD *)(v2 + 78) = 0;
v13 = 1;
}
}
else
{
v8 = 0;
}
if ( v13 )
*(_DWORD *)(v2 + 6) = 0;
else
v8 = timer_set(*(float *)(v2 + 98), (int)v2, (int)TFlipper::TimerExpired);
v9 = *(_DWORD *)(v2 + 78);
v10 = *(_DWORD *)(v2 + 30);
*(_DWORD *)(v2 + 86) = v8;
v11 = 4 * v9 + 8;
v12 = *(_DWORD *)(v11 + *(_DWORD *)(*(_DWORD *)(v2 + 34) + 4));
render_sprite_set(
*(_DWORD **)(v2 + 26),
*(_DWORD *)(v11 + *(_DWORD *)(*(_DWORD *)(v2 + 34) + 4)),
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 38) + 4) + v11),
*(_DWORD *)(v12 + 29) - *(_DWORD *)(v10 + 234),
*(_DWORD *)(v12 + 33) - *(_DWORD *)(v10 + 238));
}
// 1025630: using guessed type float time_now;

//----- (0101C178) --------------------------------------------------------
int __thiscall TFlipper::Message(TFlipper *this, int a2, float a3)
{
signed int v3; // ebx
TFlipper *v4; // esi
int v5; // ST04_4
int v6; // eax
double v7; // st7
double v8; // ST14_8
float v9; // ST00_4

v3 = a2;
v4 = this;
if ( a2 == 1 )
{
control_handler(1, this);
*(_DWORD *)((char *)v4 + 98) = *(_DWORD *)((char *)v4 + 90);
v6 = *(_DWORD *)((char *)v4 + 74);
LABEL_15:
if ( v6 )
loader_play_sound(v6);
goto LABEL_17;
}
if ( a2 == 2 )
{
*(_DWORD *)((char *)this + 98) = *(_DWORD *)((char *)this + 94);
v6 = *(_DWORD *)((char *)this + 70);
goto LABEL_15;
}
if ( a2 <= 1008 )
return 0;
if ( a2 <= 1011 )
{
LABEL_12:
v3 = 2;
*(_DWORD *)((char *)this + 98) = *(_DWORD *)((char *)this + 94);
LABEL_17:
if ( *(_DWORD *)((char *)v4 + 86) )
{
timer_kill(*(_DWORD *)((char *)v4 + 86));
*(_DWORD *)((char *)v4 + 86) = 0;
}
if ( *(_DWORD *)((char *)v4 + 6) )
{
v8 = a3 - *(float *)(*(_DWORD *)((char *)v4 + 82) + 201);
v7 = v8 - _floor(v8 / *(float *)((char *)v4 + 98)) * *(float *)((char *)v4 + 98);
if ( v7 < 0.0 )
v7 = 0.0;
}
else
{
v7 = *(float *)((char *)v4 + 98);
}
v9 = v7;
*(_DWORD *)((char *)v4 + 6) = v3;
*(float *)((char *)v4 + 102) = a3;
*(_DWORD *)((char *)v4 + 86) = timer_set(v9, (int)v4, (int)TFlipper::TimerExpired);
goto LABEL_24;
}
if ( a2 != 1020 )
{
if ( a2 != 1022 )
{
if ( a2 != 1024 )
return 0;
goto LABEL_8;
}
goto LABEL_12;
}
LABEL_8:
if ( *(_DWORD *)((char *)this + 6) )
{
if ( *(_DWORD *)((char *)this + 86) )
timer_kill(*(_DWORD *)((char *)this + 86));
*(_DWORD *)((char *)v4 + 78) = -1;
v5 = *(_DWORD *)((char *)v4 + 86);
*(_DWORD *)((char *)v4 + 6) = 2;
TFlipper::TimerExpired(v5, (void *)v4);
LABEL_24:
TFlipperEdge::SetMotion(*(TFlipperEdge **)((char *)v4 + 82), v3, a3);
}
return 0;
}

//----- (0101C2AD) --------------------------------------------------------
void __thiscall TFlipper::port_draw(TFlipper *this)
{
(*(void (**)(void))(**(_DWORD **)((char *)this + 82) + 4))();
}

//----- (0101C59D) --------------------------------------------------------
TFlipper *__thiscall TFlipper::TFlipper(TFlipper *this, struct TPinballTable *a2, int a3)
{
int v3; // ebx
TFlipper *v4; // esi
int v5; // eax
float *v6; // eax
float v7; // ST2C_4
float v8; // ST28_4
float v9; // ST24_4
float v10; // ST20_4
float v11; // ST1C_4
struct vector_type *v12; // ST18_4
struct vector_type *v13; // ST14_4
struct vector_type *v14; // eax
TFlipperEdge *v15; // eax
int v16; // ecx
int v18; // [esp+20h] [ebp-50h]
int v19; // [esp+24h] [ebp-4Ch]
unsigned int v20; // [esp+54h] [ebp-1Ch]
int v21; // [esp+58h] [ebp-18h]
int v22; // [esp+5Ch] [ebp-14h]
TFlipperEdge *v23; // [esp+68h] [ebp-8h]
float *v24; // [esp+6Ch] [ebp-4h]
float *v25; // [esp+7Ch] [ebp+Ch]

v3 = a3;
v4 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 0);
*(_DWORD *)v4 = &TFlipper::`vftable';
loader_query_visual(a3, 0, &v18);
*(_DWORD *)((char *)v4 + 74) = v21;
*(_DWORD *)((char *)v4 + 70) = v22;
*(_DWORD *)((char *)v4 + 54) = v19;
v5 = v18;
*(_DWORD *)((char *)v4 + 86) = 0;
*(_DWORD *)((char *)v4 + 58) = v5;
v23 = (TFlipperEdge *)operator new(0xE9u);
if ( v23 )
{
v25 = (float *)loader_query_float_attribute(a3, 0, 803);
v24 = (float *)loader_query_float_attribute(v3, 0, 805);
v6 = (float *)loader_query_float_attribute(v3, 0, 804);
v7 = *(float *)((char *)v4 + 58);
v8 = *(float *)((char *)v4 + 54);
v9 = *v25;
v10 = *v24;
v11 = *v6;
v12 = (struct vector_type *)loader_query_float_attribute(v3, 0, 802);
v13 = (struct vector_type *)loader_query_float_attribute(v3, 0, 801);
v14 = (struct vector_type *)loader_query_float_attribute(v3, 0, 800);
v15 = TFlipperEdge::TFlipperEdge(v23, v4, (char *)v4 + 5, v20, a2, v14, v13, v12, v11, v10, v9, v8, v7);
}
else
{
v15 = 0;
}
*(_DWORD *)((char *)v4 + 82) = v15;
if ( v15 )
{
v16 = *(_DWORD *)((char *)v4 + 34);
*(float *)((char *)v4 + 90) = *(float *)((char *)v15 + 213) / (double)(*(_DWORD *)(*(_DWORD *)(v16 + 4) + 4) - 1);
*(float *)((char *)v4 + 94) = *(float *)((char *)v15 + 217) / (double)(*(_DWORD *)(*(_DWORD *)(v16 + 4) + 4) - 1);
}
*(_DWORD *)((char *)v4 + 78) = 0;
*(float *)((char *)v4 + 102) = 0.0;
return v4;
}
// 1002838: using guessed type void *TFlipper::`vftable';

//----- (0101C6D7) --------------------------------------------------------
TFlipper *__thiscall TFlipper::`vector deleting destructor`(TFlipper *this, char a2)
{
TFlipper *v2; // esi

v2 = this;
TFlipper::~TFlipper(this);
if ( a2 & 1 )
operator delete((void *)v2);
return v2;
}

