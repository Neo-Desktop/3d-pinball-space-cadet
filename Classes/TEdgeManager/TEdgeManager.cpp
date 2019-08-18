//
// Created by neo on 2019-08-15.
//

#include "TEdgeManager.h"

//----- (0100B0F4) --------------------------------------------------------
signed __int64 __thiscall TEdgeManager::box_x(TEdgeManager *this, float a2)
{
TEdgeManager *v2; // esi
double v3; // st7
double v4; // st7
double v6; // [esp+Ch] [ebp-8h]
double v7; // [esp+Ch] [ebp-8h]

v2 = this;
v6 = (double)(*((DWORD *)this + 4) - 1);
if ( _floor((a2 - *((float *)this + 6)) * *((float *)this + 2)) >= v6 )
v3 = v6;
else
v3 = _floor((a2 - *((float *)v2 + 6)) * *((float *)v2 + 2));
if ( v3 <= 0.0 )
{
v4 = 0.0;
}
else
{
v7 = (double)(*((DWORD *)v2 + 4) - 1);
if ( _floor((a2 - *((float *)v2 + 6)) * *((float *)v2 + 2)) >= v7 )
v4 = v7;
else
v4 = _floor((a2 - *((float *)v2 + 6)) * *((float *)v2 + 2));
}
return (signed __int64)v4;
}

//----- (0100B1AE) --------------------------------------------------------
signed __int64 __thiscall TEdgeManager::box_y(TEdgeManager *this, float a2)
{
TEdgeManager *v2; // esi
double v3; // st7
double v4; // st7
double v6; // [esp+Ch] [ebp-8h]
double v7; // [esp+Ch] [ebp-8h]

v2 = this;
v6 = (double)(*((DWORD *)this + 5) - 1);
if ( _floor((a2 - *((float *)this + 7)) * *((float *)this + 3)) >= v6 )
v3 = v6;
else
v3 = _floor((a2 - *((float *)v2 + 7)) * *((float *)v2 + 3));
if ( v3 <= 0.0 )
{
v4 = 0.0;
}
else
{
v7 = (double)(*((DWORD *)v2 + 5) - 1);
if ( _floor((a2 - *((float *)v2 + 7)) * *((float *)v2 + 3)) >= v7 )
v4 = v7;
else
v4 = _floor((a2 - *((float *)v2 + 7)) * *((float *)v2 + 3));
}
return (signed __int64)v4;
}

//----- (0100B268) --------------------------------------------------------
int __thiscall TEdgeManager::increment_box_x(TEdgeManager *this, int a2)
{
int result; // eax

result = *((DWORD *)this + 4) - 1;
if ( a2 + 1 < result )
result = a2 + 1;
return result;
}

//----- (0100B284) --------------------------------------------------------
int __thiscall TEdgeManager::increment_box_y(TEdgeManager *this, int a2)
{
int result; // eax

result = *((DWORD *)this + 5) - 1;
if ( a2 + 1 < result )
result = a2 + 1;
return result;
}


//----- (0100B2A0) --------------------------------------------------------
void create(void *a1, unsigned int a2, int a3, void *(__thiscall *a4)(void *))
{
char *v4; // esi
int v5; // edi

if ( a3 - 1 >= 0 )
{
v4 = (char *)a1;
v5 = a3;
do
{
a4(v4);
v4 += a2;
--v5;
}
while ( v5 );
}
}

//----- (0100B2E5) --------------------------------------------------------
void destroy(void *a1, unsigned int a2, int a3, void (__thiscall *a4)(void *))
{
char *v4; // edi
int v5; // esi

v4 = (char *)a1 + a3 * a2;
if ( a3 - 1 >= 0 )
{
v5 = a3;
do
{
v4 -= a2;
a4(v4);
--v5;
}
while ( v5 );
}
}

//----- (0100B316) --------------------------------------------------------
void __thiscall TEdgeManager::FieldEffects(TEdgeManager *this, struct TBall *a2, struct vector_type *a3)
{
struct TBall *v3; // ebx
TEdgeManager *v4; // edi
int v5; // eax
int v6; // esi
int v7; // eax
int v8; // edi
int v9; // eax
char v10; // [esp+10h] [ebp-Ch]
struct TBall *v11; // [esp+24h] [ebp+8h]

v3 = a2;
v4 = this;
v5 = TEdgeManager::box_x(this, *(float *)((char *)a2 + 42));
v6 = *((DWORD *)v4 + 8)
     + 16 * (v5 + (unsigned __int64)TEdgeManager::box_y(v4, *(float *)((char *)a2 + 46)) * *((DWORD *)v4 + 4));
v7 = *(DWORD *)(*(DWORD *)(v6 + 12) + 4) - 1;
if ( v7 >= 0 )
{
v8 = 4 * v7 + 8;
v11 = *(struct TBall **)(*(DWORD *)(v6 + 12) + 4);
do
{
v9 = *(DWORD *)(v8 + *(DWORD *)(v6 + 12));
if ( **(_BYTE **)v9 && *(DWORD *)((_BYTE *)v3 + 110) & *(DWORD *)(v9 + 4) )
{
if ( (*(int (__thiscall **)(DWORD, struct TBall *, char *))(**(DWORD **)(v9 + 8) + 24))(
*(DWORD *)(v9 + 8),
v3,
&v10) )
{
vector_add(a3, (struct vector_type *)&v10);
}
}
v8 -= 4;
v11 = (struct TBall *)((char *)v11 - 1);
}
while ( v11 );
}
}

//----- (0100B3AE) --------------------------------------------------------
int TEdgeManager::TestGridBox(TEdgeManager *this, double a2@<st0>, int a3, int a4, float *a5, struct TEdgeSegment **a6, struct ray_type *a7, struct TBall *a8, int a9)
{
int v9; // edi
int v10; // eax
int **v11; // ebx
int *v12; // esi
int v13; // eax
int v14; // eax
int v16; // [esp+8h] [ebp+8h]
int v17; // [esp+Ch] [ebp+Ch]

if ( a3 >= 0 && a3 < 10 && a4 >= 0 && a4 < 15 )
{
v9 = *((DWORD *)this + 8) + 16 * (a3 + a4 * *((DWORD *)this + 4));
v10 = *(DWORD *)(*(DWORD *)(v9 + 4) + 4) - 1;
if ( v10 >= 0 )
{
v17 = 4 * v10 + 8;
v11 = (int **)((char *)this + 4 * a9 + 36);
v16 = *(DWORD *)(*(DWORD *)(v9 + 4) + 4);
do
{
v12 = *(int **)(v17 + *(DWORD *)(v9 + 4));
if ( !*((_BYTE *)v12 + 12) )
{
if ( *(_BYTE *)v12[2] )
{
if ( *(int *)((char *)v12 + 17) & *((DWORD *)a7 + 10) )
{
LOBYTE(v13) = TBall::already_hit(a8, (struct TEdgeSegment *)v12);
if ( !v13 )
{
++a9;
*v11 = v12;
v14 = *v12;
++v11;
*((_BYTE *)v12 + 12) = 1;
(*(void (__thiscall **)(int *, struct ray_type *))(v14 + 12))(v12, a7);
if ( a2 < *a5 )
{
*a5 = a2;
*a6 = (struct TEdgeSegment *)v12;
}
}
}
}
}
v17 -= 4;
--v16;
}
while ( v16 );
}
}
return a9;
}

//----- (0100B486) --------------------------------------------------------
double __thiscall TEdgeManager::FindCollisionDistance(TEdgeManager *this, struct ray_type *a2, struct TBall *a3, struct TEdgeSegment **a4)
{
struct ray_type *v4; // esi
float *v5; // edi
int v6; // ebx
double v7; // st7
float v8; // ST18_4
double v9; // st7
float v10; // ST18_4
double v11; // st7
int v12; // eax
int v13; // eax
int v14; // eax
int v15; // ecx
int v16; // eax
int v17; // eax
double v18; // st7
double v19; // st7
double v20; // st7
double v21; // st7
double v22; // st6
double v23; // st7
double v24; // st6
double v25; // st7
double v26; // st6
double v27; // st7
double v28; // st6
int *v29; // eax
int v30; // ecx
signed int v32; // [esp+10h] [ebp-28h]
float v33; // [esp+14h] [ebp-24h]
float v34; // [esp+14h] [ebp-24h]
signed int v35; // [esp+18h] [ebp-20h]
float v36; // [esp+1Ch] [ebp-1Ch]
float v37; // [esp+1Ch] [ebp-1Ch]
int v38; // [esp+20h] [ebp-18h]
int v39; // [esp+20h] [ebp-18h]
int v40; // [esp+20h] [ebp-18h]
int v41; // [esp+20h] [ebp-18h]
int v42; // [esp+24h] [ebp-14h]
int v43; // [esp+24h] [ebp-14h]
int v44; // [esp+28h] [ebp-10h]
int v45; // [esp+2Ch] [ebp-Ch]
float v46; // [esp+30h] [ebp-8h]
int v47; // [esp+34h] [ebp-4h]
float v48; // [esp+40h] [ebp+8h]
struct ray_type *v49; // [esp+40h] [ebp+8h]
struct ray_type *v50; // [esp+40h] [ebp+8h]
struct ray_type *v51; // [esp+40h] [ebp+8h]

v4 = a2;
v48 = *(float *)a2;
v5 = (float *)this;
v46 = 1000000000.0;
v6 = 0;
v42 = TEdgeManager::box_x(this, v48);
v47 = *((int *)v4 + 1);
v38 = TEdgeManager::box_y((TEdgeManager *)v5, *(float *)&v47);
v7 = *((float *)v4 + 3) * *((float *)v4 + 6) + *(float *)v4;
v36 = v7;
v8 = v7;
v45 = TEdgeManager::box_x((TEdgeManager *)v5, v8);
v9 = *((float *)v4 + 4) * *((float *)v4 + 6) + *((float *)v4 + 1);
v33 = v9;
v10 = v9;
v44 = TEdgeManager::box_y((TEdgeManager *)v5, v10);
if ( v48 >= (double)v36 )
v32 = -1;
else
v32 = 1;
v11 = *(float *)&v47;
if ( *(float *)&v47 >= (double)v33 )
v35 = -1;
else
v35 = 1;
v12 = v38;
if ( v38 == v44 )
{
v49 = (struct ray_type *)v42;
if ( v32 == 1 )
{
if ( v42 <= v45 )
{
while ( 1 )
{
v13 = TEdgeManager::TestGridBox((TEdgeManager *)v5, v11, (int)v49, v12, &v46, a4, v4, a3, v6);
v49 = (struct ray_type *)((char *)v49 + 1);
v6 = v13;
if ( (signed int)v49 > v45 )
break;
v12 = v38;
}
}
}
else if ( v42 >= v45 )
{
while ( 1 )
{
v14 = TEdgeManager::TestGridBox((TEdgeManager *)v5, v11, (int)v49, v12, &v46, a4, v4, a3, v6);
v49 = (struct ray_type *)((char *)v49 - 1);
v6 = v14;
if ( (signed int)v49 < v45 )
break;
v12 = v38;
}
}
}
else
{
v15 = v42;
if ( v42 == v45 )
{
v50 = (struct ray_type *)v38;
if ( v35 == 1 )
{
if ( v38 <= v44 )
{
while ( 1 )
{
v16 = TEdgeManager::TestGridBox((TEdgeManager *)v5, v11, v15, (int)v50, &v46, a4, v4, a3, v6);
v50 = (struct ray_type *)((char *)v50 + 1);
v6 = v16;
if ( (signed int)v50 > v44 )
break;
v15 = v42;
}
}
}
else if ( v38 >= v44 )
{
while ( 1 )
{
v17 = TEdgeManager::TestGridBox((TEdgeManager *)v5, v11, v15, (int)v50, &v46, a4, v4, a3, v6);
v50 = (struct ray_type *)((char *)v50 - 1);
v6 = v17;
if ( (signed int)v50 < v44 )
break;
v15 = v42;
}
}
}
else
{
v18 = (*(float *)&v47 - v33) / (v48 - v36);
v37 = v18;
v19 = v18 * v48;
v51 = (struct ray_type *)v42;
v20 = *(float *)&v47 - v19;
v47 = v38;
v34 = v20;
v6 = TEdgeManager::TestGridBox((TEdgeManager *)v5, v20, v42, v38, &v46, a4, v4, a3, 0);
if ( v32 == 1 )
{
if ( v35 == 1 )
{
v43 = v42 + 1;
v39 = v38 + 1;
do
{
v21 = (double)v39 * v5[1] + v5[7];
v22 = ((double)v43 * *v5 + v5[6]) * v37 + v34;
if ( v22 >= v21 )
{
if ( v22 == v21 )
{
v51 = (struct ray_type *)((char *)v51 + 1);
++v43;
}
++v47;
++v39;
}
else
{
v51 = (struct ray_type *)((char *)v51 + 1);
++v43;
}
v6 = TEdgeManager::TestGridBox((TEdgeManager *)v5, v21, (int)v51, v47, &v46, a4, v4, a3, v6);
}
while ( (signed int)v51 < v45 || v47 < v44 );
}
else
{
v40 = v42 + 1;
do
{
v23 = (double)v47 * v5[1] + v5[7];
v24 = ((double)v40 * *v5 + v5[6]) * v37 + v34;
if ( v24 <= v23 )
{
if ( v24 == v23 )
{
v51 = (struct ray_type *)((char *)v51 + 1);
++v40;
}
--v47;
}
else
{
v51 = (struct ray_type *)((char *)v51 + 1);
++v40;
}
v6 = TEdgeManager::TestGridBox((TEdgeManager *)v5, v23, (int)v51, v47, &v46, a4, v4, a3, v6);
}
while ( (signed int)v51 < v45 || v47 > v44 );
}
}
else if ( v35 == 1 )
{
v41 = v38 + 1;
do
{
v25 = (double)v41 * v5[1] + v5[7];
v26 = ((double)(signed int)v51 * *v5 + v5[6]) * v37 + v34;
if ( v26 >= v25 )
{
if ( v26 == v25 )
v51 = (struct ray_type *)((char *)v51 - 1);
++v47;
++v41;
}
else
{
v51 = (struct ray_type *)((char *)v51 - 1);
}
v6 = TEdgeManager::TestGridBox((TEdgeManager *)v5, v25, (int)v51, v47, &v46, a4, v4, a3, v6);
}
while ( (signed int)v51 > v45 || v47 < v44 );
}
else
{
do
{
v27 = (double)v47 * v5[1] + v5[7];
v28 = ((double)(signed int)v51 * *v5 + v5[6]) * v37 + v34;
if ( v28 <= v27 )
{
if ( v28 == v27 )
v51 = (struct ray_type *)((char *)v51 - 1);
--v47;
}
else
{
v51 = (struct ray_type *)((char *)v51 - 1);
}
v6 = TEdgeManager::TestGridBox((TEdgeManager *)v5, v27, (int)v51, v47, &v46, a4, v4, a3, v6);
}
while ( (signed int)v51 > v45 || v47 > v44 );
}
}
}
if ( v6 > 0 )
{
v29 = (int *)(v5 + 9);
do
{
v30 = *v29;
++v29;
--v6;
*(_BYTE *)(v30 + 12) = 0;
}
while ( v6 );
}
return v46;
}

//----- (0100B883) --------------------------------------------------------
TEdgeManager *__thiscall TEdgeManager::TEdgeManager(TEdgeManager *this, float a2, float a3, float a4, float a5)
{
double v5; // st7
TEdgeManager *v6; // esi
double v7; // st6
DWORD *v8; // eax
int v9; // edi

v5 = a4 * 0.1;
v6 = this;
*((float *)this + 6) = a2;
*(float *)this = v5;
v7 = a5 * 0.06666667;
*((float *)this + 7) = a3;
*((DWORD *)this + 4) = 10;
*((float *)this + 1) = v7;
*((DWORD *)this + 5) = 15;
*((float *)this + 2) = 1.0 / v5;
*((float *)this + 3) = 1.0 / v7;
v8 = operator new(0x964u);
if ( v8 )
{
v9 = (int)(v8 + 1);
*v8 = 150;
create(v8 + 1, 0x10u, 150, (void *(__thiscall *)(void *))TEdgeBox::TEdgeBox);
}
else
{
v9 = 0;
}
*((DWORD *)v6 + 8) = v9;
return v6;
}

//----- (01017441) --------------------------------------------------------
TEdgeManager *__thiscall TEdgeManager::destroy(TEdgeManager *this, char a2)
{
TEdgeManager *v2; // esi

v2 = this;
TEdgeManager::~TEdgeManager(this);
if ( a2 & 1 )
operator delete((void *)v2);
return v2;
}
