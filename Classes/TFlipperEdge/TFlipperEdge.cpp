#include "TFlipperEdge.h"

//----- (0101B0D4) --------------------------------------------------------
void __thiscall TFlipperEdge::place_in_grid(TFlipperEdge *this)
{
double v1; // st7
double v2; // st6
double v3; // st6
double v4; // st6
double v5; // st6
float v6; // ST18_4
double v7; // st6
double v8; // st6
double v9; // st6
double v10; // st6
float v11; // ST18_4
float v12; // ST08_4
float v13; // [esp+1Ch] [ebp-Ch]
float v14; // [esp+20h] [ebp-8h]
float v15; // [esp+24h] [ebp-4h]

v14 = *(float *)((char *)this + 33) - *(float *)((char *)this + 45);
v13 = *(float *)((char *)this + 37) - *(float *)((char *)this + 45);
v15 = *(float *)((char *)this + 45) + *(float *)((char *)this + 33);
v1 = *(float *)((char *)this + 37) + *(float *)((char *)this + 45);
v2 = *(float *)((char *)this + 153) - *(float *)((char *)this + 49);
if ( v2 < v14 )
v14 = v2;
v3 = *(float *)((char *)this + 157) - *(float *)((char *)this + 49);
if ( v3 < v13 )
v13 = v3;
v4 = *(float *)((char *)this + 49) + *(float *)((char *)this + 153);
if ( v4 > v15 )
v15 = v4;
v5 = *(float *)((char *)this + 157) + *(float *)((char *)this + 49);
if ( v5 > v1 )
{
v6 = v5;
v1 = v6;
}
v7 = *(float *)((char *)this + 165) - *(float *)((char *)this + 49);
if ( v7 < v14 )
v14 = v7;
v8 = *(float *)((char *)this + 169) - *(float *)((char *)this + 49);
if ( v8 < v13 )
v13 = v8;
v9 = *(float *)((char *)this + 165) + *(float *)((char *)this + 49);
if ( v9 > v15 )
v15 = v9;
v10 = *(float *)((char *)this + 49) + *(float *)((char *)this + 169);
if ( v10 > v1 )
{
v11 = v10;
v1 = v11;
}
v12 = v1;
edges_insert_square(v13, v14, v12, v15, this, 0);
}

//----- (0101B1F7) --------------------------------------------------------
double __thiscall TFlipperEdge::flipper_angle(TFlipperEdge *this, float a2)
{
int v2; // edx
double v4; // st7
double v5; // st7

v2 = *(DWORD *)((char *)this + 21);
if ( !v2 )
return *(float *)((char *)this + 77);
v4 = (*(float *)((char *)this + 77) - *(float *)((char *)this + 73))
/ *(float *)((char *)this + 69)
* *(float *)((char *)this + 209);
if ( v4 < 0.0 )
v4 = -v4;
if ( v4 >= 0.0000001 )
v5 = (a2 - *(float *)((char *)this + 201)) / v4;
else
v5 = 1.0;
if ( v5 < 0.0 )
v5 = 0.0;
if ( v5 > 1.0 )
v5 = 1.0;
if ( v2 == 2 )
v5 = 1.0 - v5;
return v5 * *(float *)((char *)this + 69);
}

//----- (0101B281) --------------------------------------------------------
void __thiscall TFlipperEdge::build_edges_in_motion(TFlipperEdge *this)
{
TFlipperEdge *v1; // esi

v1 = this;
line_init((int)&lineA, A1, flt_1025718, A2, flt_10256B8);
line_init((int)&lineB, B1, flt_10256F4, B2, flt_1025700);
dword_102566C = *(DWORD *)((char *)v1 + 53);
circlebase = *(DWORD *)((char *)v1 + 33);
dword_1025664 = *(DWORD *)((char *)v1 + 37);
dword_102567C = *(DWORD *)((char *)v1 + 57);
circleT1 = T1;
dword_1025674 = dword_102570C;
}
// 1025664: using guessed type int dword_1025664;
// 102566C: using guessed type int dword_102566C;
// 1025674: using guessed type int dword_1025674;
// 102567C: using guessed type int dword_102567C;
// 10256B8: using guessed type float flt_10256B8;
// 10256F4: using guessed type float flt_10256F4;
// 1025700: using guessed type float flt_1025700;
// 102570C: using guessed type int dword_102570C;
// 1025718: using guessed type float flt_1025718;

//----- (0101B327) --------------------------------------------------------
void __thiscall TFlipperEdge::set_control_points(TFlipperEdge *this, float a2)
{
TFlipperEdge *v2; // ebx
float v3; // ST04_4
double v4; // st7
float v5; // ST08_4

v2 = this;
v3 = TFlipperEdge::flipper_angle(this, a2);
SinCos(v3, &flipper_sin_angle, &flipper_cos_angle);
v4 = flipper_cos_angle;
A1 = *(DWORD *)((char *)v2 + 101);
*((DWORD *)&A1 + 1) = *(DWORD *)((char *)v2 + 105);
*((DWORD *)&A1 + 2) = *(DWORD *)((char *)v2 + 109);
A2 = *(DWORD *)((char *)v2 + 113);
*((DWORD *)&A2 + 1) = *(DWORD *)((char *)v2 + 117);
*((DWORD *)&A2 + 2) = *(DWORD *)((char *)v2 + 121);
B1 = *(DWORD *)((char *)v2 + 125);
*((DWORD *)&B1 + 1) = *(DWORD *)((char *)v2 + 129);
*((DWORD *)&B1 + 2) = *(DWORD *)((char *)v2 + 133);
B2 = *(DWORD *)((char *)v2 + 137);
*((DWORD *)&B2 + 1) = *(DWORD *)((char *)v2 + 141);
*((DWORD *)&B2 + 2) = *(DWORD *)((char *)v2 + 145);
T1 = *(DWORD *)((char *)v2 + 153);
*((DWORD *)&T1 + 1) = *(DWORD *)((char *)v2 + 157);
*((DWORD *)&T1 + 2) = *(DWORD *)((char *)v2 + 161);
v5 = v4;
RotatePt((struct vector_type *)&A1, flipper_sin_angle, v5, (TFlipperEdge *)((char *)v2 + 33));
RotatePt((struct vector_type *)&A2, flipper_sin_angle, flipper_cos_angle, (TFlipperEdge *)((char *)v2 + 33));
RotatePt((struct vector_type *)&T1, flipper_sin_angle, flipper_cos_angle, (TFlipperEdge *)((char *)v2 + 33));
RotatePt((struct vector_type *)&B1, flipper_sin_angle, flipper_cos_angle, (TFlipperEdge *)((char *)v2 + 33));
RotatePt((struct vector_type *)&B2, flipper_sin_angle, flipper_cos_angle, (TFlipperEdge *)((char *)v2 + 33));
}

//----- (0101B5A8) --------------------------------------------------------
int __thiscall TFlipperEdge::is_ball_inside(TFlipperEdge *this, float a2, float a3)
{
float v3; // ST08_4
float v4; // ST04_4
double v5; // st6
double v7; // st5
char v8; // c0
double v9; // st4
double v10; // st3
int v11; // eax
int v12; // eax
double v13; // st6
double v14; // st6
double v15; // st5
double v16; // st4
double v17; // st5
int v19; // eax
double v20; // st6
double v21; // st6
double v22; // st5
double v23; // st4
bool v24; // c0
double v25; // st4

v5 = flt_10256F4;
v7 = B1;
if ( !v8
&& (v7 - A2) * (a3 - flt_10256B8) - (v5 - flt_10256B8) * (a2 - A2) >= 0.0
&& (B2 - v7) * (a3 - v5) - (flt_1025700 - v5) * (a2 - v7) >= 0.0
&& (A1 - B2) * (a3 - flt_1025700) - (flt_1025718 - flt_1025700) * (a2 - B2) >= 0.0
|| (v9 = *(float *)((char *)this + 33) - a2,
v10 = *(float *)((char *)this + 37) - a3,
v10 * v10 + v9 * v9 <= *(float *)((char *)this + 53))
|| (*(float *)&dword_102570C - a3) * (*(float *)&dword_102570C - a3) + (T1 - a2) * (T1 - a2) < *(float *)((char *)this + 57) )
{
v11 = *(DWORD *)((char *)this + 21);
if ( *(float *)((char *)this + 69) < 0.0 )
{
v19 = v11 - 1;
if ( v19 )
{
v20 = *(float *)((char *)this + 33);
if ( v19 == 1 )
{
v21 = (v20 - A2) * (a3 - flt_10256B8);
v22 = *(float *)((char *)this + 37) - flt_10256B8;
v23 = a2 - A2;
}
else
{
v21 = (v20 - T1) * (a3 - *(float *)&dword_102570C);
v22 = *(float *)((char *)this + 37) - *(float *)&dword_102570C;
v23 = a2 - T1;
}
v24 = v21 - v22 * v23 < 0.0;
}
else
{
v25 = (*(float *)((char *)this + 33) - v7) * (a3 - v5) - (*(float *)((char *)this + 37) - v5) * (a2 - v7);
}
if ( v24 )
return 5;
return 4;
}
v12 = v11 - 1;
v13 = *(float *)((char *)this + 33);
if ( v12 )
{
if ( v12 == 1 )
{
v3 = a3 - flt_1025718;
v14 = (v13 - A1) * v3;
v4 = a2 - A1;
v17 = (*(float *)((char *)this + 37) - flt_1025718) * v4;
LABEL_12:
if ( v14 - v17 >= 0.0 )
return 5;
return 4;
}
v14 = (v13 - T1) * (a3 - *(float *)&dword_102570C);
v15 = *(float *)((char *)this + 37) - *(float *)&dword_102570C;
v16 = a2 - T1;
}
else
{
v14 = (v13 - B2) * (a3 - flt_1025700);
v15 = *(float *)((char *)this + 37) - flt_1025700;
v16 = a2 - B2;
}
v17 = v15 * v16;
goto LABEL_12;
}
return 0;
}
// 10256B8: using guessed type float flt_10256B8;
// 10256F4: using guessed type float flt_10256F4;
// 1025700: using guessed type float flt_1025700;
// 102570C: using guessed type int dword_102570C;
// 1025718: using guessed type float flt_1025718;

//----- (0101B825) --------------------------------------------------------
double __thiscall TFlipperEdge::FindCollisionDistance(TFlipperEdge *this, struct ray_type *a2)
{
struct ray_type *v2; // esi
TFlipperEdge *v3; // ebx
DWORD *v4; // eax
double result; // st7
int v6; // eax
int v7; // ecx
float *v8; // esi
double v9; // st7
float *v10; // eax
DWORD *v11; // edi
char *v12; // esi
float v13; // eax
char *v14; // esi
DWORD *v15; // edi
DWORD *v16; // edi
DWORD *v17; // esi
double v18; // st7
float v19; // eax
double v20; // st7
int v21; // eax
int v22; // esi
int v23; // eax
int v24; // edx
DWORD *v25; // esi
double v26; // st7
DWORD *v27; // esi
double v28; // st7
DWORD *v29; // edi
DWORD *v30; // esi
double v31; // st7
double v32; // st7
float v33; // eax
double v34; // st7
double v35; // st6
double v36; // st5
double v37; // st4
int v38; // fps
double v39; // st6
char v40; // ah
bool v41; // c0
bool v42; // c3
signed int v43; // eax
char v44; // [esp+14h] [ebp-70h]
int v45; // [esp+18h] [ebp-6Ch]
int v46; // [esp+1Ch] [ebp-68h]
char v47; // [esp+20h] [ebp-64h]
int v48; // [esp+24h] [ebp-60h]
int v49; // [esp+28h] [ebp-5Ch]
float v50; // [esp+40h] [ebp-44h]
float v51; // [esp+44h] [ebp-40h]
int v52; // [esp+48h] [ebp-3Ch]
float v53; // [esp+4Ch] [ebp-38h]
float v54; // [esp+50h] [ebp-34h]
int v55; // [esp+54h] [ebp-30h]
float v56; // [esp+58h] [ebp-2Ch]
int v57; // [esp+5Ch] [ebp-28h]
float v58; // [esp+6Ch] [ebp-18h]
float v59; // [esp+70h] [ebp-14h]
float v60; // [esp+74h] [ebp-10h]
float v61; // [esp+78h] [ebp-Ch]
float v62; // [esp+7Ch] [ebp-8h]
float v63; // [esp+80h] [ebp-4h]

v2 = a2;
v3 = this;
if ( *((float *)a2 + 8) > (double)*(float *)((char *)this + 205) )
*(DWORD *)((char *)this + 21) = 0;
v4 = (DWORD *)((char *)this + 197);
if ( *(DWORD *)((char *)this + 197) )
{
*v4 = 0;
return 1000000000.0;
}
if ( *(DWORD *)((char *)this + 21) )
{
v18 = *(float *)((char *)this + 181) * *((float *)a2 + 6);
v63 = *(float *)a2;
v62 = *((float *)a2 + 1);
v19 = *((float *)a2 + 8);
v60 = v18;
v20 = *(float *)((char *)this + 181);
v61 = v19;
v59 = v20 * *((float *)a2 + 3);
v58 = *((float *)a2 + 4) * *(float *)((char *)this + 181);
if ( *((float *)a2 + 9) + *((float *)a2 + 8) <= v19 )
return 1000000000.0;
while ( 1 )
{
TFlipperEdge::set_control_points(v3, v61);
TFlipperEdge::build_edges_in_motion(v3);
v21 = TFlipperEdge::is_ball_inside(v3, v63, v62);
if ( v21 )
break;
v22 = (int)v2 + 12;
v53 = *(float *)v22;
v22 += 4;
v54 = *(float *)v22;
v55 = *(DWORD *)(v22 + 4);
v23 = *((DWORD *)a2 + 7);
v50 = *(float *)a2;
v51 = *((float *)a2 + 1);
v52 = *((DWORD *)a2 + 2);
v57 = v23;
v56 = v60;
result = distance_to_flipper((struct ray_type *)&v50, (struct ray_type *)&v44);
if ( result < 1000000000.0 )
{
*(DWORD *)((char *)v3 + 221) = *(DWORD *)&v44;
*(DWORD *)((char *)v3 + 225) = v45;
*(DWORD *)((char *)v3 + 229) = v46;
v35 = *(float *)((char *)v3 + 221) - v53 * 0.00001;
*(float *)((char *)v3 + 221) = v35;
v36 = *(float *)((char *)v3 + 225) - v54 * 0.00001;
*(float *)((char *)v3 + 225) = v36;
v37 = (*(float *)((char *)v3 + 33) - T1) * (v36 - *(float *)&dword_102570C)
- (*(float *)((char *)v3 + 37) - *(float *)&dword_102570C) * (v35 - T1);
v39 = *(float *)((char *)v3 + 69);
v40 = HIBYTE(v38);
v41 = v39 < 0.0;
v42 = v39 == 0.0;
if ( v40 & 1 )
{
if ( v41 || v42 )
goto LABEL_49;
LABEL_47:
v43 = 1;
}
else
{
if ( v41 || v42 )
goto LABEL_47;
LABEL_49:
v43 = 0;
}
v15 = (DWORD *)((char *)v3 + 89);
if ( *(DWORD *)((char *)v3 + 21) == 2 )
{
v14 = (char *)&lineB;
*(DWORD *)((char *)v3 + 81) = v43 == 0;
}
else
{
*(DWORD *)((char *)v3 + 81) = v43;
v14 = (char *)&lineA;
}
goto LABEL_25;
}
v61 = v61 + *(float *)((char *)v3 + 181);
v63 = v63 + v59;
v62 = v62 + v58;
if ( *((float *)a2 + 9) + *((float *)a2 + 8) <= v61 )
return 1000000000.0;
v2 = a2;
}
v24 = *(DWORD *)((char *)v3 + 21);
if ( v24 != 1 || v21 == 5 )
{
if ( v24 != 2 || v21 == 4 )
{
v31 = *(float *)((char *)v3 + 33) - v63;
*(DWORD *)((char *)v3 + 81) = 0;
*(DWORD *)((char *)v3 + 85) = 1;
v53 = v31;
v54 = *(float *)((char *)v3 + 37) - v62;
normalize_2d(&v53);
v50 = v63 - v53 * 5.0;
v51 = v62 - v54 * 5.0;
v56 = *((float *)v2 + 6) + 10.0;
if ( distance_to_flipper((struct ray_type *)&v50, (struct ray_type *)&v44) < 1000000000.0 )
goto LABEL_20;
v32 = -v53;
*(float *)((char *)v3 + 221) = v63;
v33 = v62;
*(float *)((char *)v3 + 185) = v32;
v34 = v54;
*(float *)((char *)v3 + 225) = v33;
*(float *)((char *)v3 + 189) = -v34;
return 0.0;
}
v25 = &lineB;
v53 = -lineB;
v26 = flt_10256C4;
}
else
{
v25 = &lineA;
v53 = -lineA;
v26 = flt_1025684;
}
v54 = -v26;
*(DWORD *)((char *)v3 + 89) = *v25;
v27 = v25 + 1;
*(DWORD *)((char *)v3 + 93) = *v27;
*(DWORD *)((char *)v3 + 97) = v27[1];
*(DWORD *)((char *)v3 + 85) = 0;
*(DWORD *)((char *)v3 + 81) = 1;
v57 = 990057071;
v50 = *(float *)a2 - v53 * 5.0;
v51 = *((float *)a2 + 1) - v54 * 5.0;
v56 = *((float *)a2 + 6) + 10.0;
v28 = distance_to_flipper((struct ray_type *)&v50, (struct ray_type *)&v44);
*(DWORD *)((char *)v3 + 185) = *(DWORD *)&v47;
*(DWORD *)((char *)v3 + 189) = v48;
*(DWORD *)((char *)v3 + 193) = v49;
if ( v28 >= 1000000000.0 )
return 1000000000.0;
v10 = (float *)((char *)v3 + 221);
v12 = &v44;
v11 = (DWORD *)((char *)v3 + 221);
LABEL_41:
*v11 = *(DWORD *)v12;
v30 = v12 + 4;
v29 = v11 + 1;
*v29 = *v30;
v29[1] = v30[1];
*v10 = *v10 - v53 * 0.00001;
*(float *)((char *)v3 + 225) = *(float *)((char *)v3 + 225) - v54 * 0.00001;
return 0.0;
}
*v4 = 0;
*(DWORD *)((char *)this + 81) = 0;
*(DWORD *)((char *)this + 85) = 0;
TFlipperEdge::set_control_points(this, *((float *)a2 + 8));
TFlipperEdge::build_edges_in_motion(v3);
*(float *)&v6 = COERCE_FLOAT(TFlipperEdge::is_ball_inside(v3, *(float *)a2, *((float *)a2 + 1)));
v7 = *((DWORD *)a2 + 7);
v61 = *(float *)&v6;
v57 = v7;
if ( *(float *)&v6 != 0.0 )
{
if ( Distance_Squared(
*(float *)a2,
*((float *)a2 + 1),
*((DWORD *)a2 + 2),
*(float *)((char *)v3 + 33),
*(float *)((char *)v3 + 37),
*(DWORD *)((char *)v3 + 41)) >= *(float *)((char *)v3 + 61) )
{
if ( Distance_Squared(
*(float *)a2,
*((float *)a2 + 1),
*((DWORD *)a2 + 2),
T1,
*((float *)&T1 + 1),
*((DWORD *)&T1 + 2)) >= *(float *)((char *)v3 + 65) )
{
if ( LODWORD(v61) == 4 )
{
v53 = -lineA;
v9 = flt_1025684;
}
else
{
v53 = -lineB;
v9 = flt_10256C4;
}
v54 = -v9;
}
else
{
v53 = T1 - *(float *)a2;
v54 = *(float *)&dword_102570C - *((float *)a2 + 1);
normalize_2d(&v53);
}
v8 = (float *)a2;
}
else
{
v8 = (float *)a2;
v53 = *(float *)((char *)v3 + 33) - *(float *)a2;
v54 = *(float *)((char *)v3 + 37) - *((float *)a2 + 1);
normalize_2d(&v53);
}
v50 = *v8 - v53 * 5.0;
v51 = v8[1] - v54 * 5.0;
v56 = v8[6] + 10.0;
if ( distance_to_flipper((struct ray_type *)&v50, (struct ray_type *)&v44) >= 1000000000.0 )
{
v53 = *(float *)((char *)v3 + 33) - *v8;
v54 = *(float *)((char *)v3 + 37) - v8[1];
normalize_2d(&v53);
v50 = *v8 - v53 * 5.0;
v51 = v8[1] - v54 * 5.0;
if ( distance_to_flipper((struct ray_type *)&v50, (struct ray_type *)&v44) >= 1000000000.0 )
return 1000000000.0;
}
LABEL_20:
v10 = (float *)((char *)v3 + 221);
*(DWORD *)((char *)v3 + 221) = *(DWORD *)&v44;
*(DWORD *)((char *)v3 + 225) = v45;
*(DWORD *)((char *)v3 + 229) = v46;
v11 = (DWORD *)((char *)v3 + 185);
v12 = &v47;
goto LABEL_41;
}
v53 = *((float *)a2 + 3);
v54 = *((float *)a2 + 4);
v55 = *((DWORD *)a2 + 5);
v13 = *((float *)a2 + 6);
v50 = *(float *)a2;
v51 = *((float *)a2 + 1);
v52 = *((DWORD *)a2 + 2);
v56 = v13;
result = distance_to_flipper((struct ray_type *)&v50, (struct ray_type *)&v44);
v14 = &v44;
if ( result == 0.0 )
{
*(DWORD *)((char *)v3 + 221) = *(DWORD *)&v44;
*(DWORD *)((char *)v3 + 225) = v45;
*(DWORD *)((char *)v3 + 229) = v46;
*(float *)((char *)v3 + 221) = *(float *)((char *)v3 + 221) - v53 * 0.00001;
*(float *)((char *)v3 + 225) = *(float *)((char *)v3 + 225) - v54 * 0.00001;
}
else
{
v15 = (DWORD *)((char *)v3 + 221);
LABEL_25:
*v15 = *(DWORD *)v14;
v17 = v14 + 4;
v16 = v15 + 1;
*v16 = *v17;
v16[1] = v17[1];
}
*(DWORD *)((char *)v3 + 185) = *(DWORD *)&v47;
*(DWORD *)((char *)v3 + 189) = v48;
*(DWORD *)((char *)v3 + 193) = v49;
return result;
}
// 1025684: using guessed type float flt_1025684;
// 10256C4: using guessed type float flt_10256C4;
// 102570C: using guessed type int dword_102570C;

//----- (0101BE06) --------------------------------------------------------
void __thiscall TFlipperEdge::EdgeCollision(TFlipperEdge *this, struct TBall *a2, float a3)
{
TFlipperEdge *v3; // esi
int v4; // eax
double v5; // st7
double v6; // st6
double v7; // st7
double v8; // st7
double v9; // st6
double v10; // st7
double v11; // st7
struct vector_type *v12; // ecx
double v13; // st7
double v14; // st6
double v15; // st7
long double v16; // st7
float v17; // ST0C_4
float v18; // ST18_4
float v19; // ST14_4
float v20; // [esp+14h] [ebp-4h]

v3 = this;
v4 = *(DWORD *)((char *)this + 21);
*(DWORD *)((char *)this + 197) = 1;
if ( !v4 )
goto LABEL_4;
if ( *(DWORD *)((char *)this + 81) )
{
v5 = *(float *)((char *)this + 221) - *(float *)((char *)this + 33);
v6 = *(float *)((char *)this + 225) - *(float *)((char *)this + 37);
v7 = v6 * v6 + v5 * v5;
if ( *(float *)&dword_102566C * 1.01 < v7 )
{
v20 = sqrt(v7 / *(float *)((char *)this + 177))
* (fabs(*(float *)((char *)this + 69))
/ *(float *)((char *)this + 209));
v10 = DotProduct((TFlipperEdge *)((char *)this + 89), (TFlipperEdge *)((char *)this + 185));
if ( v10 >= 0.0 )
v11 = v10 * v20;
else
v11 = 0.0;
v8 = v11 * *(float *)((char *)v3 + 149);
goto LABEL_5;
}
LABEL_4:
v8 = 0.0;
LABEL_5:
if ( v8 <= 0.0 )
v9 = 1000000000.0;
else
v9 = -1.0;
v18 = v8;
v19 = v9;
basic_collision(
a2,
(TFlipperEdge *)((char *)v3 + 221),
(TFlipperEdge *)((char *)v3 + 185),
*(float *)((char *)v3 + 25),
*(float *)((char *)v3 + 29),
v19,
v18);
return;
}
if ( !v4 || !*(DWORD *)((char *)this + 85) )
goto LABEL_4;
v12 = (TFlipperEdge *)((char *)this + 221);
v13 = *(float *)((char *)v3 + 221) - *(float *)((char *)v3 + 33);
v14 = *(float *)((char *)v3 + 225) - *(float *)((char *)v3 + 37);
v15 = v14 * v14 + v13 * v13;
if ( *(float *)&dword_102566C * 1.01 < v15 )
v16 = (1.0 - sqrt(v15 / *(float *)((char *)v3 + 177))) * *(float *)((char *)v3 + 25);
else
v16 = *(float *)((char *)v3 + 25);
v17 = v16;
basic_collision(a2, v12, (TFlipperEdge *)((char *)v3 + 185), v17, *(float *)((char *)v3 + 29), 1000000000.0, 0.0);
}
// 102566C: using guessed type int dword_102566C;

//----- (0101BF98) --------------------------------------------------------
void __thiscall TFlipperEdge::SetMotion(TFlipperEdge *this, int a2, float a3)
{
double v3; // st7
int v4; // eax
double v5; // st7
int v6; // eax
double v7; // st7

switch ( a2 )
{
case 1:
v5 = TFlipperEdge::flipper_angle(this, a3);
v6 = *(DWORD *)((char *)this + 69);
*(float *)((char *)this + 73) = v5;
*(DWORD *)((char *)this + 77) = v6;
v4 = *(DWORD *)((char *)this + 213);
goto LABEL_7;
case 2:
v3 = TFlipperEdge::flipper_angle(this, a3);
v4 = *(DWORD *)((char *)this + 217);
*(float *)((char *)this + 73) = v3;
*(float *)((char *)this + 77) = 0.0;
LABEL_7:
*(DWORD *)((char *)this + 209) = v4;
break;
case 1024:
*(DWORD *)((char *)this + 21) = 0;
*(float *)((char *)this + 77) = 0.0;
return;
}
if ( !*(DWORD *)((char *)this + 21) )
*(float *)((char *)this + 201) = a3;
v7 = *(float *)((char *)this + 209);
*(DWORD *)((char *)this + 21) = a2;
*(float *)((char *)this + 205) = v7 + *(float *)((char *)this + 201);
}

//----- (0101C026) --------------------------------------------------------
void __thiscall TFlipperEdge::port_draw(TFlipperEdge *this)
{
TFlipperEdge *v1; // esi

v1 = this;
TFlipperEdge::set_control_points(this, *(float *)((char *)this + 201));
TFlipperEdge::build_edges_in_motion(v1);
}

//----- (0101C2BA) --------------------------------------------------------
TFlipperEdge *__thiscall TFlipperEdge::TFlipperEdge(TFlipperEdge *this, struct TCollisionComponent *a2, char *a3, unsigned int a4, struct TPinballTable *a5, struct vector_type *a6, struct vector_type *a7, struct vector_type *a8, float a9, float a10, float a11, float a12, float a13)
{
TFlipperEdge *v13; // ebx
double v14; // st7
double v15; // st7
float v16; // eax
double v17; // st7
float v18; // eax
double v19; // st7
double v20; // st7
double v21; // st7
double v22; // st7
double v23; // st6
double v24; // st7
double v25; // st6
struct vector_type *v26; // ecx
double v27; // st7
double v28; // st6
long double v29; // st5
double v30; // st7
long double v31; // st7
TFlipperEdge *result; // eax
float v33; // [esp+Ch] [ebp-54h]
float v34; // [esp+10h] [ebp-50h]
float v35; // [esp+14h] [ebp-4Ch]
float v36; // [esp+18h] [ebp-48h]
float v37; // [esp+1Ch] [ebp-44h]
float v38; // [esp+20h] [ebp-40h]
float v39; // [esp+24h] [ebp-3Ch]
double v40; // [esp+28h] [ebp-38h]
float v41; // [esp+30h] [ebp-30h]
float v42; // [esp+34h] [ebp-2Ch]
float v43; // [esp+38h] [ebp-28h]
float v44; // [esp+3Ch] [ebp-24h]
float v45; // [esp+40h] [ebp-20h]
float v46; // [esp+48h] [ebp-18h]
float v47; // [esp+4Ch] [ebp-14h]
float v48; // [esp+50h] [ebp-10h]
float v49; // [esp+54h] [ebp-Ch]
double v50; // [esp+58h] [ebp-8h]
float v51; // [esp+6Ch] [ebp+Ch]
float v52; // [esp+70h] [ebp+10h]
float v53; // [esp+70h] [ebp+10h]
float v54; // [esp+70h] [ebp+10h]

v13 = this;
TEdgeSegment::TEdgeSegment(this, a2, a3, a4);
*(float *)((char *)v13 + 25) = a12;
*(float *)((char *)v13 + 29) = a13;
*(DWORD *)v13 = &TFlipperEdge::vftable;
v46 = *(float *)a6;
v47 = *((float *)a6 + 1);
v48 = *((float *)a6 + 2);
v49 = *(float *)a7;
v50 = *(double *)((char *)a7 + 4);
v14 = *((float *)&v50 + 1);
v36 = *(float *)a8;
v37 = *((float *)a8 + 1);
v38 = *((float *)a8 + 2);
*(float *)((char *)v13 + 213) = a9;
*(float *)((char *)v13 + 217) = a10;
*(float *)((char *)v13 + 149) = a11;
*(float *)((char *)v13 + 49) = v14 + *(float *)((char *)a5 + 282);
v15 = v48 + *(float *)((char *)a5 + 282);
v16 = v46;
*(float *)((char *)v13 + 153) = v49;
v52 = v15;
*(DWORD *)((char *)v13 + 157) = LODWORD(v50);
*(float *)((char *)v13 + 45) = v15;
v17 = *(float *)((char *)v13 + 49) * 1.01;
*(DWORD *)((char *)v13 + 161) = HIDWORD(v50);
*(float *)((char *)v13 + 65) = v17 * v17;
*(float *)((char *)v13 + 165) = v36;
*(float *)((char *)v13 + 169) = v37;
*(float *)((char *)v13 + 61) = v52 * 1.01 * (v52 * 1.01);
*(float *)((char *)v13 + 33) = v16;
v18 = v47;
v19 = *(float *)((char *)v13 + 49);
*(float *)((char *)v13 + 173) = v38;
*(float *)((char *)v13 + 37) = v18;
*(float *)((char *)v13 + 57) = v19 * v19;
*(float *)((char *)v13 + 53) = *(float *)((char *)v13 + 45) * *(float *)((char *)v13 + 45);
v20 = v49 - v46;
v53 = v20;
v39 = v20;
v21 = *(float *)&v50 - v47;
v51 = v21;
*(float *)&v40 = v21;
normalize_2d(&v39);
v41 = v36 - v46;
v42 = v37 - v47;
normalize_2d(&v41);
v43 = 0.0;
*((float *)&v40 + 1) = 0.0;
*(float *)((char *)v13 + 69) = acos(DotProduct((const struct vector_type *)&v39, (const struct vector_type *)&v41));
cross(&v39, &v41, &v33);
if ( v35 < 0.0 )
*(float *)((char *)v13 + 69) = -*(float *)((char *)v13 + 69);
*(DWORD *)((char *)v13 + 21) = 0;
*(float *)((char *)v13 + 77) = 0.0;
v44 = v53;
v45 = v51;
normalize_2d(&v44);
v22 = v44;
v23 = -v45;
*(float *)((char *)v13 + 113) = v23 * *(float *)((char *)v13 + 45) + v46;
*(float *)((char *)v13 + 117) = v22 * *(float *)((char *)v13 + 45) + v47;
*(float *)((char *)v13 + 101) = v23 * *(float *)((char *)v13 + 49) + v49;
*(float *)((char *)v13 + 105) = v22 * *(float *)((char *)v13 + 49) + *(float *)&v50;
v54 = v23;
v24 = -v22;
v25 = -v54;
v44 = v25;
v45 = v24;
*(float *)((char *)v13 + 125) = v25 * *(float *)((char *)v13 + 45) + v46;
*(float *)((char *)v13 + 129) = v24 * *(float *)((char *)v13 + 45) + v47;
*(float *)((char *)v13 + 137) = v25 * *(float *)((char *)v13 + 49) + v49;
*(float *)((char *)v13 + 141) = v24 * *(float *)((char *)v13 + 49) + *(float *)&v50;
if ( *(float *)((char *)v13 + 69) < 0.0 )
{
vswap((TFlipperEdge *)((char *)v13 + 101), (TFlipperEdge *)((char *)v13 + 125));
vswap(v26, (TFlipperEdge *)((char *)v13 + 137));
}
v27 = v49 - *(float *)((char *)v13 + 33);
v28 = *(float *)&v50 - *(float *)((char *)v13 + 37);
v39 = v49;
v40 = v50;
v33 = v36;
v34 = v37;
v35 = v38;
v29 = sqrt(v28 * v28 + v27 * v27) + *(float *)((char *)a5 + 282) + *((float *)&v50 + 1);
*(float *)((char *)v13 + 177) = v29 * v29;
if ( *(float *)((char *)v13 + 213) >= (double)*(float *)((char *)v13 + 217) )
v30 = *(float *)((char *)v13 + 217);
else
v30 = *(float *)((char *)v13 + 213);
v50 = v30;
v31 = Distance((struct vector_type *)&v39, (struct vector_type *)&v33);
*(float *)((char *)v13 + 181) = v50 / (v31 / *(float *)((char *)v13 + 49) + v31 / *(float *)((char *)v13 + 49));
TFlipperEdge::place_in_grid(v13);
*(DWORD *)((char *)v13 + 197) = 0;
*(float *)((char *)v13 + 201) = 0.0;
*(DWORD *)((char *)v13 + 81) = 0;
*(float *)((char *)v13 + 205) = 0.0;
result = v13;
*(float *)((char *)v13 + 209) = 0.0;
return result;
}
// 1002854: using guessed type void *TFlipperEdge::vftable;
