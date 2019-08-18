#include "TRamp.h"

//----- (01016AEC) --------------------------------------------------------
int __thiscall TRamp::get_scoring(TRamp *this, int a2)
{
int result; // eax

if ( a2 >= 4 )
result = 0;
else
result = *(DWORD *)((char *)this + 4 * a2 + 78);
return result;
}

//----- (01016B0A) --------------------------------------------------------
void __thiscall TRamp::put_scoring(TRamp *this, int a2, int a3)
{
if ( a2 < 4 )
*(DWORD *)((char *)this + 4 * a2 + 78) = a3;
}

//----- (01016C24) --------------------------------------------------------
void __thiscall TRamp::Collision(TRamp *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TRamp *v6; // edi
double v7; // st7
int v8; // eax
DWORD *v9; // eax
double v10; // st7
double v11; // st6
double v12; // st6
double v13; // st7

v6 = this;
TBall::not_again(a2, a6);
v7 = *(float *)((char *)a2 + 70) - a5;
*(DWORD *)((char *)a2 + 42) = *(DWORD *)a3;
v8 = *((DWORD *)a3 + 1);
*(float *)((char *)a2 + 70) = v7;
*(DWORD *)((char *)a2 + 46) = v8;
v9 = *(DWORD **)((char *)a6 + 13);
if ( v9 )
{
*(DWORD *)((char *)a2 + 150) = 1;
*(DWORD *)((char *)a2 + 138) = *v9;
v10 = *(float *)((char *)a2 + 138) * *(float *)((char *)a2 + 42);
v11 = *(float *)((char *)a2 + 46);
*(DWORD *)((char *)a2 + 142) = v9[1];
v12 = v11 * *(float *)((char *)a2 + 142);
*(DWORD *)((char *)a2 + 146) = v9[2];
*(DWORD *)((char *)a2 + 94) = v9[11];
*(DWORD *)((char *)a2 + 98) = v9[12];
*(float *)((char *)a2 + 50) = v10 + v12 + *(float *)((char *)a2 + 154) + *(float *)((char *)a2 + 146);
*(DWORD *)((char *)a2 + 110) = *(DWORD *)((char *)v6 + 106);
return;
}
if ( a6 == *(struct TEdgeSegment **)((char *)v6 + 134) )
{
if ( !*(DWORD *)(*(DWORD *)((char *)v6 + 30) + 370) )
{
loader_play_sound(*(DWORD *)((char *)v6 + 70));
control_handler(63, v6);
}
}
else
{
*(DWORD *)((char *)a2 + 150) = 0;
if ( a6 == *(struct TEdgeSegment **)((char *)v6 + 126) )
{
*(DWORD *)((char *)a2 + 110) = *(DWORD *)((char *)v6 + 138);
if ( !*(DWORD *)((char *)v6 + 110) )
return;
v13 = *(float *)((char *)a2 + 154) + *(float *)((char *)v6 + 146);
}
else
{
*(DWORD *)((char *)a2 + 110) = *(DWORD *)((char *)v6 + 142);
if ( !*(DWORD *)((char *)v6 + 110) )
return;
v13 = *(float *)((char *)a2 + 154) + *(float *)((char *)v6 + 150);
}
*(float *)((char *)a2 + 50) = v13;
}
}

//----- (01016D2E) --------------------------------------------------------
int __thiscall TRamp::FieldEffect(TRamp *this, struct TBall *a2, struct vector_type *a3)
{
int result; // eax

*(float *)a3 = *(float *)((char *)a2 + 94)
- *(float *)((char *)a2 + 54) * *(float *)((char *)a2 + 66) * *(float *)((char *)this + 118);
result = 1;
*((float *)a3 + 1) = *(float *)((char *)a2 + 98)
- *(float *)((char *)a2 + 58) * *(float *)((char *)a2 + 66) * *(float *)((char *)this + 118);
return result;
}

//----- (01019BB8) --------------------------------------------------------
TRamp *__thiscall TRamp::TRamp(TRamp *this, struct TPinballTable *a2, void *a3)
{
void *v3; // ebx
TRamp *v4; // esi
DWORD *v5; // eax
float *v6; // eax
float *v7; // edi
signed __int64 v8; // rax
void *v9; // ST0C_4
int v10; // edi
double v11; // st7
TLine *v12; // eax
TLine *v13; // edi
int v14; // eax
int v15; // edi
double v16; // st7
int v17; // ecx
TLine *v18; // eax
TLine *v19; // edi
int v20; // eax
int v21; // edi
double v22; // st7
int v23; // ecx
TLine *v24; // eax
TLine *v25; // edi
int v26; // eax
bool v27; // zf
bool v28; // sf
int v29; // ecx
int v30; // eax
int v31; // ebx
int v32; // edi
int v33; // ecx
double v34; // st7
double v35; // st7
double v36; // st7
double v37; // st7
float v38; // eax
double v39; // st7
double v40; // st7
float v41; // eax
double v42; // st7
double v43; // st7
double v44; // st7
double v45; // st7
float v46; // eax
double v47; // st7
double v48; // st7
double v49; // st7
double v50; // st7
float v51; // eax
double v52; // st7
void *v53; // eax
TLine *v54; // eax
void *v55; // ecx
void *v56; // eax
TLine *v57; // eax
void *v58; // ecx
void *v59; // eax
TLine *v60; // eax
TLine *v61; // edi
int v62; // ecx
float *v63; // eax
int v64; // ecx
long double v65; // st7
float v66; // ST0C_4
double v67; // st7
int v68; // ecx
float v69; // ST08_4
double v70; // st7
float v71; // ST04_4
char v73; // [esp+24h] [ebp-84h]
void *v74; // [esp+58h] [ebp-50h]
int v75; // [esp+6Ch] [ebp-3Ch]
int v76; // [esp+70h] [ebp-38h]
int v77; // [esp+78h] [ebp-30h]
int v78; // [esp+7Ch] [ebp-2Ch]
struct vector_type *v79; // [esp+80h] [ebp-28h]
struct vector_type *v80; // [esp+84h] [ebp-24h]
struct vector_type *v81; // [esp+88h] [ebp-20h]
int v82; // [esp+8Ch] [ebp-1Ch]
int v83; // [esp+90h] [ebp-18h]
struct vector_type *v84; // [esp+94h] [ebp-14h]
float v85; // [esp+98h] [ebp-10h]
float v86; // [esp+9Ch] [ebp-Ch]
float v87; // [esp+A0h] [ebp-8h]
float v88; // [esp+A4h] [ebp-4h]

v3 = a3;
v4 = this;
TCollisionComponent::TCollisionComponent(this, a2, (int)a3, 0);
*(DWORD *)v4 = &TRamp::vftable;
*(DWORD *)((char *)v4 + 6) = 0;
*((_BYTE *)v4 + 4) = 1;
loader_query_visual((int)v3, 0, &v73);
*(DWORD *)((char *)v4 + 106) = v74;
v5 = (DWORD *)loader_query_float_attribute((int)v3, 0, 701);
if ( v5 )
*(DWORD *)((char *)v4 + 118) = *v5;
else
*(DWORD *)((char *)v4 + 118) = 1045220557;
v6 = (float *)loader_query_float_attribute((int)v3, 0, 1305);
if ( v6 )
*(DWORD *)((char *)v4 + 110) = (signed __int64)_floor(*v6);
else
*(DWORD *)((char *)v4 + 110) = 0;
v7 = (float *)loader_query_float_attribute((int)a3, 0, 1300);
v8 = (signed __int64)_floor(*v7);
v9 = a3;
*(DWORD *)((char *)v4 + 114) = v8;
*(DWORD *)((char *)v4 + 122) = v7 + 1;
v10 = loader_query_float_attribute((int)v9, 0, 1303);
v11 = _floor(*(float *)v10);
v75 = *(DWORD *)(v10 + 8);
v76 = *(DWORD *)(v10 + 12);
v86 = *(float *)(v10 + 16);
v87 = *(float *)(v10 + 20);
v12 = (TLine *)operator new(0x55u);
if ( v12 )
v13 = TLine::TLine(
v12,
v4,
(char *)v4 + 5,
1 << (signed __int64)v11,
(struct vector_type *)&v86,
(struct vector_type *)&v75);
else
v13 = 0;
*(DWORD *)((char *)v4 + 134) = v13;
objlist_class::Add((TRamp *)((char *)v4 + 42), (void *)v13);
if ( v13 )
{
v14 = *(DWORD *)v13;
*(DWORD *)((char *)v13 + 13) = 0;
(*(void (__thiscall **)(TLine *))(v14 + 8))(v13);
}
v15 = loader_query_float_attribute((int)a3, 0, 1301);
*(DWORD *)((char *)v4 + 138) = (signed __int64)_floor(*(float *)v15);
v16 = _floor(*(float *)(v15 + 4));
v17 = *(DWORD *)((char *)v4 + 138);
v78 = (signed __int64)v16;
v15 += 12;
*(DWORD *)((char *)v4 + 138) = 1 << v17;
*(DWORD *)((char *)v4 + 146) = *(DWORD *)(v15 + 16);
find_closest_edge(
*(struct ramp_plane_type **)((char *)v4 + 122),
*(DWORD *)((char *)v4 + 114),
(struct wall_point_type *)v15,
&a2,
&v80);
v18 = (TLine *)operator new(0x55u);
if ( v18 )
v19 = TLine::TLine(v18, v4, (char *)v4 + 5, *(DWORD *)((char *)v4 + 106), v80, a2);
else
v19 = 0;
*(DWORD *)((char *)v4 + 126) = v19;
objlist_class::Add((TRamp *)((char *)v4 + 42), (void *)v19);
if ( v19 )
{
v20 = *(DWORD *)v19;
*(DWORD *)((char *)v19 + 13) = 0;
(*(void (__thiscall **)(TLine *))(v20 + 8))(v19);
}
v21 = loader_query_float_attribute((int)a3, 0, 1302);
*(DWORD *)((char *)v4 + 142) = (signed __int64)_floor(*(float *)v21);
v22 = _floor(*(float *)(v21 + 4));
v23 = *(DWORD *)((char *)v4 + 142);
v77 = (signed __int64)v22;
v21 += 12;
*(DWORD *)((char *)v4 + 142) = 1 << v23;
*(DWORD *)((char *)v4 + 150) = *(DWORD *)(v21 + 16);
find_closest_edge(
*(struct ramp_plane_type **)((char *)v4 + 122),
*(DWORD *)((char *)v4 + 114),
(struct wall_point_type *)v21,
&v81,
&v84);
v24 = (TLine *)operator new(0x55u);
if ( v24 )
v25 = TLine::TLine(v24, v4, (char *)v4 + 5, *(DWORD *)((char *)v4 + 106), v84, v81);
else
v25 = 0;
*(DWORD *)((char *)v4 + 130) = v25;
objlist_class::Add((TRamp *)((char *)v4 + 42), (void *)v25);
if ( v25 )
{
v26 = *(DWORD *)v25;
*(DWORD *)((char *)v25 + 13) = 0;
(*(void (__thiscall **)(TLine *))(v26 + 8))(v25);
}
v27 = *(DWORD *)((char *)v4 + 114) == 0;
v28 = *(DWORD *)((char *)v4 + 114) < 0;
v86 = 1000000000.0;
v82 = 0;
v85 = 1000000000.0;
v88 = -1000000000.0;
v87 = -1000000000.0;
if ( !v28 && !v27 )
{
do
{
v29 = *(DWORD *)((char *)v4 + 122);
v83 = 52 * v82;
v30 = v29 + 52 * v82;
v31 = v30 + 28;
v32 = v30 + 12;
v33 = v30 + 20;
v34 = *(float *)(v30 + 28);
v79 = (struct vector_type *)(v30 + 20);
if ( v34 >= *(float *)(v30 + 12) )
v35 = *(float *)v32;
else
v35 = *(float *)v31;
if ( v35 <= *(float *)v33 )
{
if ( *(float *)v31 >= (double)*(float *)v32 )
v36 = *(float *)v32;
else
v36 = *(float *)v31;
}
else
{
v36 = *(float *)v33;
}
if ( v85 >= v36 )
{
if ( *(float *)v31 >= (double)*(float *)v32 )
v37 = *(float *)v32;
else
v37 = *(float *)v31;
if ( v37 <= *(float *)v33 )
{
if ( *(float *)v31 >= (double)*(float *)v32 )
v38 = *(float *)v32;
else
v38 = *(float *)v31;
}
else
{
v38 = *(float *)v33;
}
v85 = v38;
}
if ( *(float *)(v31 + 4) >= (double)*(float *)(v32 + 4) )
v39 = *(float *)(v32 + 4);
else
v39 = *(float *)(v31 + 4);
if ( v39 <= *(float *)(v33 + 4) )
{
if ( *(float *)(v31 + 4) >= (double)*(float *)(v32 + 4) )
v40 = *(float *)(v32 + 4);
else
v40 = *(float *)(v31 + 4);
}
else
{
v40 = *(float *)(v33 + 4);
}
if ( v85 >= v40 )
{
if ( *(float *)(v31 + 4) >= (double)*(float *)(v32 + 4) )
v42 = *(float *)(v32 + 4);
else
v42 = *(float *)(v31 + 4);
if ( v42 <= *(float *)(v33 + 4) )
{
if ( *(float *)(v31 + 4) >= (double)*(float *)(v32 + 4) )
v41 = *(float *)(v32 + 4);
else
v41 = *(float *)(v31 + 4);
}
else
{
v41 = *(float *)(v33 + 4);
}
}
else
{
v41 = v85;
}
v43 = *(float *)v31;
v86 = v41;
if ( v43 <= *(float *)v32 )
v44 = *(float *)v32;
else
v44 = *(float *)v31;
if ( v44 >= *(float *)v33 )
{
if ( *(float *)v31 <= (double)*(float *)v32 )
v45 = *(float *)v32;
else
v45 = *(float *)v31;
}
else
{
v45 = *(float *)v33;
}
if ( v85 <= v45 )
{
if ( *(float *)v31 <= (double)*(float *)v32 )
v47 = *(float *)v32;
else
v47 = *(float *)v31;
if ( v47 >= *(float *)v33 )
{
if ( *(float *)v31 <= (double)*(float *)v32 )
v46 = *(float *)v32;
else
v46 = *(float *)v31;
}
else
{
v46 = *(float *)v33;
}
}
else
{
v46 = v85;
}
v48 = *(float *)(v31 + 4);
v87 = v46;
if ( v48 <= *(float *)(v32 + 4) )
v49 = *(float *)(v32 + 4);
else
v49 = *(float *)(v31 + 4);
if ( v49 >= *(float *)(v33 + 4) )
{
if ( *(float *)(v31 + 4) <= (double)*(float *)(v32 + 4) )
v50 = *(float *)(v32 + 4);
else
v50 = *(float *)(v31 + 4);
}
else
{
v50 = *(float *)(v33 + 4);
}
if ( v85 <= v50 )
{
if ( *(float *)(v31 + 4) <= (double)*(float *)(v32 + 4) )
v52 = *(float *)(v32 + 4);
else
v52 = *(float *)(v31 + 4);
if ( v52 >= *(float *)(v33 + 4) )
{
if ( *(float *)(v31 + 4) <= (double)*(float *)(v32 + 4) )
v51 = *(float *)(v32 + 4);
else
v51 = *(float *)(v31 + 4);
}
else
{
v51 = *(float *)(v33 + 4);
}
}
else
{
v51 = v85;
}
v88 = v51;
if ( (struct TPinballTable *)v32 != a2 || (struct vector_type *)v33 != v80 )
{
if ( (struct vector_type *)v32 != v81 || (struct vector_type *)v33 != v84 )
{
v53 = v74;
goto LABEL_105;
}
if ( v77 )
{
v53 = *(void **)((char *)v4 + 142);
goto LABEL_105;
}
}
else if ( v78 )
{
v53 = *(void **)((char *)v4 + 138);
LABEL_105:
a3 = v53;
goto LABEL_106;
}
a3 = 0;
LABEL_106:
if ( a3 )
{
v54 = (TLine *)operator new(0x55u);
a3 = (void *)(v54 ? TLine::TLine(v54, v4, (char *)v4 + 5, (unsigned int)a3, (struct vector_type *)v32, v79) : 0);
objlist_class::Add((TRamp *)((char *)v4 + 42), a3);
if ( a3 )
{
v55 = a3;
*(DWORD *)((char *)a3 + 13) = v83 + *(DWORD *)((char *)v4 + 122);
(*(void (**)(void))(*(DWORD *)v55 + 8))();
}
}
if ( v79 != a2 || (struct vector_type *)v31 != v80 )
{
if ( v79 != v81 || (struct vector_type *)v31 != v84 )
{
v56 = v74;
goto LABEL_122;
}
if ( v77 )
{
v56 = *(void **)((char *)v4 + 142);
goto LABEL_122;
}
}
else if ( v78 )
{
v56 = *(void **)((char *)v4 + 138);
LABEL_122:
a3 = v56;
goto LABEL_123;
}
a3 = 0;
LABEL_123:
if ( a3 )
{
v57 = (TLine *)operator new(0x55u);
a3 = (void *)(v57 ? TLine::TLine(v57, v4, (char *)v4 + 5, (unsigned int)a3, v79, (struct vector_type *)v31) : 0);
objlist_class::Add((TRamp *)((char *)v4 + 42), a3);
if ( a3 )
{
v58 = a3;
*(DWORD *)((char *)a3 + 13) = v83 + *(DWORD *)((char *)v4 + 122);
(*(void (**)(void))(*(DWORD *)v58 + 8))();
}
}
if ( (struct TPinballTable *)v31 != a2 || (struct vector_type *)v32 != v80 )
{
if ( (struct vector_type *)v31 != v81 || (struct vector_type *)v32 != v84 )
{
v59 = v74;
goto LABEL_139;
}
if ( v77 )
{
v59 = *(void **)((char *)v4 + 142);
goto LABEL_139;
}
}
else if ( v78 )
{
v59 = *(void **)((char *)v4 + 138);
LABEL_139:
a3 = v59;
goto LABEL_140;
}
a3 = 0;
LABEL_140:
if ( a3 )
{
v60 = (TLine *)operator new(0x55u);
if ( v60 )
v61 = TLine::TLine(
v60,
v4,
(char *)v4 + 5,
(unsigned int)a3,
(struct vector_type *)v31,
(struct vector_type *)v32);
else
v61 = 0;
objlist_class::Add((TRamp *)((char *)v4 + 42), (void *)v61);
if ( v61 )
{
*(DWORD *)((char *)v61 + 13) = v83 + *(DWORD *)((char *)v4 + 122);
(*(void (__thiscall **)(TLine *))(*(DWORD *)v61 + 8))(v61);
}
}
v62 = v83;
*(float *)(v83 + *(DWORD *)((char *)v4 + 122) + 44) = cos(*(float *)(v83 + *(DWORD *)((char *)v4 + 122) + 40))
* sin(*(float *)(v83 + *(DWORD *)((char *)v4 + 122) + 36))
* *(float *)(*(DWORD *)((char *)v4 + 30) + 270);
v63 = (float *)(v62 + *(DWORD *)((char *)v4 + 122));
v64 = *(DWORD *)((char *)v4 + 30);
v65 = sin(v63[10]);
++v82;
v63[12] = v65 * sin(v63[9]) * *(float *)(v64 + 270);
}
while ( v82 < *(DWORD *)((char *)v4 + 114) );
}
v66 = v87;
v67 = v88;
*(DWORD *)((char *)v4 + 94) = (char *)v4 + 5;
v68 = (int)v74;
v69 = v67;
v70 = v85;
*(DWORD *)((char *)v4 + 102) = v4;
v71 = v70;
*(DWORD *)((char *)v4 + 98) = v68;
edges_insert_square(v86, v71, v69, v66, 0, (TRamp *)((char *)v4 + 94));
return v4;
}
// 10026CC: using guessed type void *TRamp::vftable;
