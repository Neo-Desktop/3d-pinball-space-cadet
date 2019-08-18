//
// Created by neo on 2019-08-15.
//

#include "TBall.h"

//----- (0100B072) --------------------------------------------------------
bool __thiscall TBall::already_hit(TBall *this, struct TEdgeSegment *a2)
{
int v2; // esi
bool result; // al

v2 = *(DWORD *)((char *)this + 134);
if ( !v2 )
return 0;
result = 1;
if ( *(struct TEdgeSegment **)((char *)this + 114) != a2 )
{
if ( v2 == 1 )
return 0;
if ( *(struct TEdgeSegment **)((char *)this + 118) == a2 )
return result;
if ( v2 == 2 )
return 0;
if ( *(struct TEdgeSegment **)((char *)this + 122) == a2 )
return result;
if ( v2 == 3 )
return 0;
if ( *(struct TEdgeSegment **)((char *)this + 126) == a2 )
return result;
if ( v2 == 4 )
return 0;
if ( *(struct TEdgeSegment **)((char *)this + 130) != a2 )
{
result = 0;
if ( v2 != 5 )
result = v2 == (DWORD)a2;
}
}
return result;
}

//----- (0101590F) --------------------------------------------------------
void __thiscall TBall::not_again(TBall *this, struct TEdgeSegment *a2)
{
signed int v2; // edx

v2 = *(DWORD *)((char *)this + 134);
if ( v2 < 5 )
{
*(DWORD *)((char *)this + 4 * v2 + 114) = a2;
++*(DWORD *)((char *)this + 134);
}
}

//----- (01015B9C) --------------------------------------------------------
int __thiscall TBall::Message(TBall *this, int a2, float a3)
{
TBall *v3; // esi
int v4; // eax

v3 = this;
if ( a2 == 1024 )
{
render_ball_set(*(DWORD *)((char *)this + 26), 0, 0.0, 0, 0);
v4 = *(DWORD *)((char *)v3 + 154);
*(float *)((char *)v3 + 42) = 0.0;
*(DWORD *)((char *)v3 + 106) = 0;
*(float *)((char *)v3 + 46) = 0.0;
*((_BYTE *)v3 + 5) = 0;
*(DWORD *)((char *)v3 + 150) = 0;
*(DWORD *)((char *)v3 + 110) = 1;
*(float *)((char *)v3 + 58) = 0.0;
*(DWORD *)((char *)v3 + 50) = v4;
*(float *)((char *)v3 + 54) = 0.0;
*(float *)((char *)v3 + 66) = 0.0;
*(float *)((char *)v3 + 70) = 0.0;
}
return 0;
}

//----- (01015C08) --------------------------------------------------------
void __thiscall TBall::Repaint(TBall *this)
{
TBall *v1; // esi
double v2; // st7
int v3; // edx
int v4; // edi
float *v5; // ebx
int v6; // ecx
float v7; // ST08_4
int v8; // [esp+14h] [ebp-8h]
int v9; // [esp+18h] [ebp-4h]

v1 = this;
if ( *(DWORD *)((char *)this + 150) )
*(float *)((char *)this + 50) = *(float *)((char *)this + 142) * *(float *)((char *)this + 46)
+ *(float *)((char *)this + 138) * *(float *)((char *)this + 42)
+ *(float *)((char *)this + 154)
+ *(float *)((char *)this + 146);
proj_xform_to_2d((float *)((char *)this + 42), &v8);
v2 = proj_z_distance((char *)v1 + 42);
v3 = *(DWORD *)(*(DWORD *)((char *)v1 + 34) + 4);
v4 = 0;
if ( *(DWORD *)(v3 + 4) - 1 > 0 )
{
v5 = (float *)((char *)v1 + 162);
do
{
if ( v2 >= *v5 )
break;
++v4;
++v5;
}
while ( v4 < *(DWORD *)(v3 + 4) - 1 );
}
v6 = *(DWORD *)(v3 + 4 * v4 + 8);
v8 += *(DWORD *)(v6 + 12) / -2;
v9 += *(DWORD *)(v6 + 16) / -2;
v7 = v2;
render_ball_set(*(DWORD *)((char *)v1 + 26), v6, v7, v8, v9);
}
// 1008ED8: using guessed type double proj_z_distance(DWORD);

//----- (01019309) --------------------------------------------------------
TBall *__thiscall TBall::TBall(TBall *this, struct TPinballTable *a2)
{
TBall *v2; // esi
objlist_class *v3; // eax
objlist_class *v4; // ebx
objlist_class *v5; // eax
int v6; // ebx
objlist_class *v7; // ecx
int v8; // eax
double v9; // st7
int v10; // eax
int v11; // ecx
char v13; // [esp+Ch] [ebp-50h]
void *v14; // [esp+4Ch] [ebp-10h]
int v15; // [esp+54h] [ebp-8h]
float *v16; // [esp+58h] [ebp-4h]
struct TPinballTable *v17; // [esp+64h] [ebp+8h]

v2 = this;
TPinballComponent::TPinballComponent(this, a2, -1, 0);
*(float *)((char *)v2 + 78) = 0.0;
*(DWORD *)v2 = &TBall::vftable;
*(float *)((char *)v2 + 70) = 0.0;
*((_BYTE *)v2 + 5) = 1;
*(DWORD *)((char *)v2 + 106) = 0;
*(DWORD *)((char *)v2 + 134) = 0;
*(float *)((char *)v2 + 74) = 0.0;
*(DWORD *)((char *)v2 + 110) = 1;
*(DWORD *)((char *)v2 + 150) = 0;
*(float *)((char *)v2 + 66) = 0.0;
*(float *)((char *)v2 + 58) = 0.0;
*(float *)((char *)v2 + 54) = 0.0;
*(float *)((char *)v2 + 86) = 1000000000.0;
*(float *)((char *)v2 + 82) = 1000000000.0;
*(float *)((char *)v2 + 42) = 0.0;
*(float *)((char *)v2 + 46) = 0.0;
v3 = (objlist_class *)operator new(8u);
v4 = v3;
if ( v3 )
{
objlist_class::objlist_class(v3, 0, 4);
v5 = v4;
}
else
{
v5 = 0;
}
*(DWORD *)((char *)v2 + 34) = v5;
v6 = loader_query_handle("ball");
*(DWORD *)((char *)v2 + 154) = *(DWORD *)loader_query_float_attribute(v6, 0, 500);
v15 = loader_query_visual_states(v6);
v17 = 0;
if ( v15 > 0 )
{
v16 = (float *)((char *)v2 + 162);
do
{
loader_query_visual(v6, (signed int)v17, &v13);
v7 = *(objlist_class **)((char *)v2 + 34);
if ( v7 )
objlist_class::Add(v7, v14);
v8 = loader_query_float_attribute(v6, (signed int)v17, 501);
v9 = proj_z_distance(v8);
v17 = (struct TPinballTable *)((char *)v17 + 1);
*v16 = v9;
++v16;
}
while ( (signed int)v17 < v15 );
}
v10 = render_create_sprite(2, 0, 0, 0, 0, 0);
v11 = *(DWORD *)((char *)v2 + 154);
*(DWORD *)((char *)v2 + 26) = v10;
*(DWORD *)(*(DWORD *)((char *)v2 + 30) + 282) = v11;
*(DWORD *)((char *)v2 + 50) = *(DWORD *)((char *)v2 + 154);
return v2;
}
// 1002554: using guessed type void *TBall::vftable;
// 1008ED8: using guessed type double proj_z_distance(DWORD);
