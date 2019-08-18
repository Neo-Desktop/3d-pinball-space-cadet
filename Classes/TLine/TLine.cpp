#include "TLine.h"

//----- (0101C6FD) --------------------------------------------------------
TLine *__thiscall TLine::TLine(TLine *this, struct TCollisionComponent *a2, char *a3, unsigned int a4, float a5, float a6, float a7, float a8)
{
TLine *v8; // esi

v8 = this;
TEdgeSegment::TEdgeSegment(this, a2, a3, a4);
*(float *)((char *)v8 + 69) = a5;
*(float *)((char *)v8 + 73) = a6;
*(float *)((char *)v8 + 77) = a7;
*(float *)((char *)v8 + 81) = a8;
*(DWORD *)v8 = &TLine::vftable;
line_init((int)v8 + 21, a5, a6, a7, a8);
return v8;
}
// 1002864: using guessed type void *TLine::vftable;

//----- (0101C764) --------------------------------------------------------
double __thiscall TLine::FindCollisionDistance(TLine *this, struct ray_type *a2)
{
return ray_intersect_line((float *)a2, (float *)((char *)this + 21));
}

//----- (0101C77E) --------------------------------------------------------
TLine *__thiscall TLine::TLine(TLine *this, struct TCollisionComponent *a2, char *a3, unsigned int a4, struct vector_type *a5, struct vector_type *a6)
{
TLine *v6; // esi
double v7; // st7
float v8; // ST10_4

v6 = this;
TEdgeSegment::TEdgeSegment(this, a2, a3, a4);
*(DWORD *)v6 = &TLine::vftable;
*(DWORD *)((char *)v6 + 69) = *(DWORD *)a5;
*(DWORD *)((char *)v6 + 73) = *((DWORD *)a5 + 1);
*(DWORD *)((char *)v6 + 77) = *(DWORD *)a6;
v7 = *((float *)a6 + 1);
*(float *)((char *)v6 + 81) = *((float *)a6 + 1);
v8 = v7;
line_init((int)v6 + 21, *(float *)((char *)v6 + 69), *(float *)((char *)v6 + 73), *(float *)((char *)v6 + 77), v8);
return v6;
}
// 1002864: using guessed type void *TLine::vftable;

//----- (0101C7E6) --------------------------------------------------------
void __thiscall TLine::EdgeCollision(TLine *this, struct TBall *a2, float a3)
{
(*(void (**)(struct TBall *, char *, char *, DWORD, TLine *))(**((DWORD **)this + 1) + 20))(
a2,
(char *)this + 57,
(char *)this + 21,
LODWORD(a3),
this);
}

//----- (0101C813) --------------------------------------------------------
void __thiscall TLine::Offset(TLine *this, float a2)
{
double v2; // st7
double v3; // st6
float v4; // ST14_4
float v5; // ST18_4
double v6; // st6
float v7; // ST10_4
float v8; // [esp+20h] [ebp+8h]

v2 = a2 * *(float *)((char *)this + 21);
v3 = a2 * *(float *)((char *)this + 25);
v4 = v2 + *(float *)((char *)this + 69);
*(float *)((char *)this + 69) = v4;
v5 = v3 + *(float *)((char *)this + 73);
*(float *)((char *)this + 73) = v5;
v8 = v2 + *(float *)((char *)this + 77);
*(float *)((char *)this + 77) = v8;
v6 = v3 + *(float *)((char *)this + 81);
*(float *)((char *)this + 81) = v6;
v7 = v6;
line_init((int)this + 21, v4, v5, v8, v7);
}

//----- (0101C87B) --------------------------------------------------------
void __thiscall TLine::place_in_grid(TLine *this)
{
TLine *v1; // esi
int v2; // edi
int v3; // ebx
int v4; // ecx
double v5; // st7
int v6; // edi
int v7; // edi
double v8; // st7
double v9; // st6
int v10; // edi
double v11; // st7
double v12; // st6
int v13; // edi
double v14; // st7
double v15; // st6
double v16; // st7
double v17; // st6
float v18; // [esp+10h] [ebp-20h]
float v19; // [esp+14h] [ebp-1Ch]
signed int v20; // [esp+18h] [ebp-18h]
int v21; // [esp+18h] [ebp-18h]
signed int v22; // [esp+18h] [ebp-18h]
int v23; // [esp+18h] [ebp-18h]
signed int v24; // [esp+1Ch] [ebp-14h]
signed int v25; // [esp+1Ch] [ebp-14h]
int v26; // [esp+20h] [ebp-10h]
int v27; // [esp+24h] [ebp-Ch]
signed int v28; // [esp+28h] [ebp-8h]
signed int v29; // [esp+2Ch] [ebp-4h]

v1 = this;
v2 = TEdgeManager::box_x(edge_manager, *(float *)((char *)this + 69));
v3 = TEdgeManager::box_y(edge_manager, *(float *)((char *)v1 + 73));
v27 = TEdgeManager::box_x(edge_manager, *(float *)((char *)v1 + 77));
v4 = TEdgeManager::box_y(edge_manager, *(float *)((char *)v1 + 81));
v26 = v4;
if ( *(float *)((char *)v1 + 69) >= (double)*(float *)((char *)v1 + 77) )
v24 = -1;
else
v24 = 1;
if ( *(float *)((char *)v1 + 73) >= (double)*(float *)((char *)v1 + 81) )
v20 = -1;
else
v20 = 1;
if ( v3 == v4 )
{
if ( v24 == 1 )
{
while ( v2 <= v27 )
TEdgeManager::add_edge_to_box(edge_manager, v2++, v3, v1);
}
else
{
while ( v2 >= v27 )
TEdgeManager::add_edge_to_box(edge_manager, v2--, v3, v1);
}
}
else if ( v2 == v27 )
{
if ( v20 == 1 )
{
if ( v3 <= v4 )
{
do
TEdgeManager::add_edge_to_box(edge_manager, v2, v3++, v1);
while ( v3 <= v26 );
}
}
else if ( v3 >= v4 )
{
do
TEdgeManager::add_edge_to_box(edge_manager, v2, v3--, v1);
while ( v3 >= v26 );
}
}
else
{
v28 = v2;
v5 = (*(float *)((char *)v1 + 73) - *(float *)((char *)v1 + 81))
/ (*(float *)((char *)v1 + 69) - *(float *)((char *)v1 + 77));
v29 = v3;
v19 = v5;
v18 = *(float *)((char *)v1 + 73) - v5 * *(float *)((char *)v1 + 69);
TEdgeManager::add_edge_to_box(edge_manager, v2, v3, v1);
if ( v24 == 1 )
{
v6 = v2 + 1;
if ( v20 == 1 )
{
v25 = v6;
v7 = v28;
v21 = v3 + 1;
do
{
v8 = (double)v21 * *((float *)edge_manager + 1) + *((float *)edge_manager + 7);
v9 = ((double)v25 * *(float *)edge_manager + *((float *)edge_manager + 6)) * v19 + v18;
if ( v9 >= v8 )
{
if ( v9 == v8 )
{
++v7;
++v25;
}
++v3;
++v21;
}
else
{
++v7;
++v25;
}
TEdgeManager::add_edge_to_box(edge_manager, v7, v3, v1);
}
while ( v7 != v27 || v3 != v26 );
}
else
{
v22 = v6;
v10 = v28;
do
{
v11 = (double)v29 * *((float *)edge_manager + 1) + *((float *)edge_manager + 7);
v12 = ((double)v22 * *(float *)edge_manager + *((float *)edge_manager + 6)) * v19 + v18;
if ( v12 <= v11 )
{
if ( v12 == v11 )
{
++v10;
++v22;
}
--v29;
}
else
{
++v10;
++v22;
}
TEdgeManager::add_edge_to_box(edge_manager, v10, v29, v1);
}
while ( v10 != v27 || v29 != v26 );
}
}
else if ( v20 == 1 )
{
v13 = v3;
v23 = v3 + 1;
do
{
v14 = (double)v23 * *((float *)edge_manager + 1) + *((float *)edge_manager + 7);
v15 = ((double)v28 * *(float *)edge_manager + *((float *)edge_manager + 6)) * v19 + v18;
if ( v15 >= v14 )
{
if ( v15 == v14 )
--v28;
++v13;
++v23;
}
else
{
--v28;
}
TEdgeManager::add_edge_to_box(edge_manager, v28, v13, v1);
}
while ( v28 != v27 || v13 != v26 );
}
else
{
do
{
v16 = (double)v29 * *((float *)edge_manager + 1) + *((float *)edge_manager + 7);
v17 = ((double)v28 * *(float *)edge_manager + *((float *)edge_manager + 6)) * v19 + v18;
if ( v17 <= v16 )
{
if ( v17 == v16 )
--v28;
--v29;
}
else
{
--v28;
}
TEdgeManager::add_edge_to_box(edge_manager, v28, v29, v1);
}
while ( v28 != v27 || v29 != v26 );
}
}
}
