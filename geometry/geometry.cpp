//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (0100400B) --------------------------------------------------------
signed int __stdcall rectangle_clip(int *a1, int *a2, _DWORD *a3)
{
    int v3; // edi
    int v4; // edx
    int v5; // esi
    int v6; // ebx
    int v7; // edx
    int v9; // [esp+Ch] [ebp-8h]
    int v10; // [esp+10h] [ebp-4h]
    int v11; // [esp+1Ch] [ebp+8h]

    v3 = *a1;
    v9 = a1[1];
    v10 = a1[3];
    v4 = *a2 + a2[2];
    v11 = a1[2];
    v5 = a2[1] + a2[3];
    if ( v3 + v11 < *a2 )
        return 0;
    if ( v3 >= v4 )
        return 0;
    v6 = v9;
    if ( v9 + v10 < a2[1] || v9 >= v5 )
        return 0;
    if ( v3 < *a2 )
    {
        v11 += v3 - *a2;
        v3 = *a2;
    }
    if ( v3 + v11 > v4 )
        v11 = v4 - v3;
    v7 = v10;
    if ( v9 < a2[1] )
    {
        v7 = v9 - a2[1] + v10;
        v6 = a2[1];
    }
    if ( v7 + v6 > v5 )
        v7 = v5 - v6;
    if ( !v11 || !v7 )
        return 0;
    if ( a3 )
    {
        *a3 = v3;
        a3[1] = v6;
        a3[2] = v11;
        a3[3] = v7;
    }
    return 1;
}

//----- (010040C2) --------------------------------------------------------
int __stdcall enclosing_box(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
    int v3; // esi
    int v4; // edi
    int v5; // eax
    bool v6; // sf
    unsigned __int8 v7; // of
    int v8; // edx
    int v9; // ecx
    int v10; // eax
    int result; // eax
    int v12; // [esp+8h] [ebp-8h]
    int v13; // [esp+Ch] [ebp-4h]
    int v14; // [esp+18h] [ebp+8h]
    int v15; // [esp+1Ch] [ebp+Ch]

    v3 = *a1;
    v4 = a1[1];
    v13 = a1[2];
    v12 = a1[3];
    v5 = *a2;
    v7 = __OFSUB__(*a2, *a1);
    v6 = *a2 - *a1 < 0;
    v14 = a2[1];
    v8 = a2[2];
    v9 = a2[3];
    v15 = *a2;
    if ( v6 ^ v7 )
    {
        v13 += v3 - v5;
        v3 = v5;
    }
    if ( v14 < v4 )
    {
        v12 += v4 - v14;
        v4 = v14;
    }
    if ( v8 + v5 > v3 + v13 )
        v13 = v15 + v8 - v3;
    v10 = v12;
    if ( v9 + v14 > v12 + v4 )
        v10 = v14 + v9 - v4;
    a3[1] = v4;
    a3[3] = v10;
    result = v13;
    *a3 = v3;
    a3[2] = v13;
    return result;
}

//----- (010077C4) --------------------------------------------------------
BOOL __stdcall center_in(HWND hWnd, HWND a2)
{
    HWND v2; // eax
    LONG v3; // ebx
    int v4; // edi
    int v5; // ecx
    int v6; // eax
    struct tagRECT v8; // [esp+Ch] [ebp-30h]
    struct tagRECT Rect; // [esp+1Ch] [ebp-20h]
    struct tagRECT v10; // [esp+2Ch] [ebp-10h]

    GetWindowRect(hWnd, &Rect);
    GetWindowRect(a2, &v8);
    v2 = GetDesktopWindow();
    GetWindowRect(v2, &v10);
    if ( fullscrn_display_changed )
    {
        v10.bottom = 480;
        v10.left = 0;
        v10.top = 0;
        v3 = 640;
        v10.right = 640;
        Rect.left = 0;
        Rect.top = 0;
        Rect.right = 640;
        Rect.bottom = 480;
    }
    else
    {
        v3 = v10.right;
    }
    v4 = v8.bottom - v8.top;
    v5 = Rect.left + (Rect.right + v8.left - v8.right - Rect.left) / 2;
    v6 = Rect.top + (Rect.bottom + v8.top - v8.bottom - Rect.top) / 2;
    if ( v8.right - v8.left + v5 > v3 )
        v5 = v3 - (v8.right - v8.left);
    if ( v4 + v6 > v10.bottom )
        v6 = v10.bottom - v4;
    if ( v5 < v10.left )
        v5 = v10.left;
    if ( v6 < v10.top )
        v6 = v10.top;
    return MoveWindow(a2, v5, v6, v8.right - v8.left, v8.bottom - v8.top, 0);
}
// 1024EF4: using guessed type int fullscrn_display_changed;

//----- (01008AE9) --------------------------------------------------------
double __stdcall normalize_2d(float *a1)
{
    double result; // st7

    result = sqrt(*a1 * *a1 + a1[1] * a1[1]);
    if ( 0.0 != result )
    {
        *a1 = 1.0 / result * *a1;
        a1[1] = 1.0 / result * a1[1];
    }
    return result;
}

//----- (01008B34) --------------------------------------------------------
double __stdcall ray_intersect_circle(float *a1, float *a2)
{
    double v2; // st7
    double v3; // st7
    double v4; // st6
    double result; // st7
    long double v6; // st5
    float v7; // [esp+0h] [ebp-Ch]
    float v8; // [esp+4h] [ebp-8h]

    v7 = *a2 - *a1;
    v2 = a2[1] - a1[1];
    v8 = v2;
    v3 = v2 * a1[4] + v7 * a1[3];
    if ( v3 < 0.0 )
        return 1000000000.0;
    v4 = v8 * v8 + v7 * v7;
    if ( v4 < a2[3] )
        return v3 - sqrt(a2[3] - v4 + v3 * v3);
    v6 = a2[3] - v4 + v3 * v3;
    if ( v6 < 0.0 )
        return 1000000000.0;
    result = v3 - sqrt(v6);
    if ( result < 0.0 || result > a1[6] )
        return 1000000000.0;
    return result;
}

//----- (01008BEB) --------------------------------------------------------
int __stdcall line_init(int a1, float a2, float a3, float a4, float a5)
{
    float *v5; // esi
    int v6; // edx
    double v7; // st7
    double v8; // st6
    double v9; // st7
    bool v10; // pf
    int result; // eax

    v5 = (float *)(a1 + 12);
    *(float *)(a1 + 12) = a4 - a2;
    *(float *)(a1 + 16) = a5 - a3;
    normalize_2d((float *)(a1 + 12));
    v7 = *(float *)(v6 + 16);
    *(float *)v6 = *(float *)(v6 + 16);
    v8 = -*(float *)(a1 + 12);
    *(float *)(v6 + 4) = v8;
    *(float *)(v6 + 24) = -(v7 * a2) - v8 * a3;
    if ( *(float *)(a1 + 12) >= 0.000000001 || *v5 <= -0.000000001 )
    {
        v9 = a4;
        v10 = a2 >= (double)a4;
        result = LODWORD(a2);
    }
    else
    {
        *v5 = 0.0;
        v9 = a5;
        v10 = a3 >= (double)a5;
        result = LODWORD(a3);
    }
    if ( v10 )
    {
        *(float *)(v6 + 28) = v9;
        *(_DWORD *)(v6 + 32) = result;
    }
    else
    {
        *(float *)(v6 + 32) = v9;
        *(_DWORD *)(v6 + 28) = result;
    }
    return result;
}

//----- (01008C8F) --------------------------------------------------------
double __stdcall ray_intersect_line(float *a1, float *a2)
{
    double v2; // st7
    double result; // st7
    double v4; // st6
    bool v5; // c0
    bool v6; // c3
    double v7; // st6

    v2 = a2[1] * a1[4] + a1[3] * *a2;
    if ( v2 < 0.0 )
    {
        result = -((*a1 * *a2 + a1[1] * a2[1] + a2[6]) / v2);
        if ( result >= -a1[7] && result <= a1[6] )
        {
            a2[9] = result * a1[3] + *a1;
            v4 = result * a1[4] + a1[1];
            a2[10] = v4;
            if ( 0.0 == a2[3] )
            {
                if ( v4 >= a2[7] )
                {
                    v5 = v4 < a2[8];
                    v6 = v4 == a2[8];
                    goto LABEL_9;
                }
            }
            else if ( a2[7] <= (double)a2[9] )
            {
                v7 = a2[9];
                v5 = v7 < a2[8];
                v6 = v7 == a2[8];
                LABEL_9:
                if ( v5 || v6 )
                    return result;
                return 1000000000.0;
            }
        }
    }
    return 1000000000.0;
}

//----- (01008D4E) --------------------------------------------------------
float *__stdcall proj_matrix_vector_multiply(float *a1, float *a2, float *a3)
{
    double v3; // st7
    double v4; // st6
    double v5; // st5
    float *result; // eax

    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    result = a1;
    *a3 = v5 * a1[2] + v4 * a1[1] + v3 * *a1 + a1[3];
    a3[1] = v5 * result[6] + v4 * result[5] + v3 * result[4] + result[7];
    a3[2] = v5 * result[10] + v4 * result[9] + v3 * result[8] + result[11];
    return result;
}

//----- (01008DB8) --------------------------------------------------------
float *__stdcall cross(float *a1, float *a2, float *a3)
{
    float *v3; // ecx
    float *result; // eax

    v3 = a2;
    result = a1;
    *a3 = a2[2] * a1[1] - a2[1] * a1[2];
    a3[1] = -(*result * v3[2] - *v3 * result[2]);
    a3[2] = *result * v3[1] - *v3 * result[1];
    return result;
}

//----- (01008DFF) --------------------------------------------------------
double __stdcall magnitude(float *a1)
{
    long double v1; // st7
    double result; // st7

    v1 = *a1 * *a1 + a1[1] * a1[1] + a1[2] * a1[2];
    if ( v1 == 0.0 )
        result = 0.0;
    else
        result = sqrt(v1);
    return result;
}

//----- (01008E4B) --------------------------------------------------------
int __stdcall proj_init(int a1, int a2, int a3, int a4)
{
    float *v4; // edx
    float *v5; // eax
    signed int v6; // esi
    int result; // eax

    v4 = (float *)&proj_matrix;
    do
    {
        v5 = v4;
        v6 = 4;
        do
        {
            *v5 = *(float *)((char *)v5 + a1 - (_DWORD)&proj_matrix);
            v5 += 4;
            --v6;
        }
        while ( v6 );
        ++v4;
    }
    while ( (signed int)v4 < (signed int)&unk_1028170 );
    flt_1028198 = 0.0;
    proj_d = a2;
    flt_1028194 = 0.0;
    proj_centerx = a3;
    result = a4;
    proj_centery = a4;
    flt_1028190 = 0.0;
    flt_102819C = 1.0;
    return result;
}
// 1028138: using guessed type int proj_centery;
// 102813C: using guessed type int proj_centerx;
// 1028140: using guessed type int proj_d;
// 1028190: using guessed type float flt_1028190;
// 1028194: using guessed type float flt_1028194;
// 1028198: using guessed type float flt_1028198;
// 102819C: using guessed type float flt_102819C;

//----- (01008EBA) --------------------------------------------------------
int __stdcall proj_recenter(int a1, int a2)
{
    int result; // eax

    proj_centerx = a1;
    result = a2;
    proj_centery = a2;
    return result;
}
// 1028138: using guessed type int proj_centery;
// 102813C: using guessed type int proj_centerx;

//----- (01008ED8) --------------------------------------------------------
void __stdcall proj_z_distance(float *a1)
{
    char v1; // [esp+0h] [ebp-Ch]

    proj_matrix_vector_multiply((float *)&proj_matrix, a1, (float *)&v1);
    magnitude((float *)&v1);
}

//----- (01008F03) --------------------------------------------------------
double __stdcall proj_xform_to_2d(float *a1, _DWORD *a2)
{
    double v2; // st7
    double v3; // st6
    double result; // st7
    float v5; // [esp+0h] [ebp-Ch]
    float v6; // [esp+4h] [ebp-8h]
    float v7; // [esp+8h] [ebp-4h]

    proj_matrix_vector_multiply((float *)&proj_matrix, a1, &v5);
    if ( 0.0 == v7 )
        v2 = 999999.88;
    else
        v2 = *(float *)&proj_d / v7;
    v3 = v6 * v2;
    *a2 = (signed __int64)(v5 * v2 + *(float *)&proj_centerx);
    result = 1.0;
    a2[1] = (signed __int64)(v3 + *(float *)&proj_centery);
    return result;
}
// 1028138: using guessed type int proj_centery;
// 102813C: using guessed type int proj_centerx;
// 1028140: using guessed type int proj_d;


//----- (01013340) --------------------------------------------------------
BOOL __stdcall overlapping_box(struct rectangle_type *a1, struct rectangle_type *a2, struct rectangle_type *a3)
{
int v3; // esi
int v4; // edi
int v5; // esi
int v6; // esi
int v7; // edi

if ( *(_DWORD *)a1 >= *(_DWORD *)a2 )
{
*(_DWORD *)a3 = *(_DWORD *)a2;
v3 = *((_DWORD *)a1 + 2) - *(_DWORD *)a2;
v4 = *(_DWORD *)a1;
}
else
{
*(_DWORD *)a3 = *(_DWORD *)a1;
v3 = *((_DWORD *)a2 + 2) - *(_DWORD *)a1;
v4 = *(_DWORD *)a2;
}
*((_DWORD *)a3 + 2) = v3 + v4 + 1;
v5 = *((_DWORD *)a1 + 1);
if ( v5 >= *((_DWORD *)a2 + 1) )
{
*((_DWORD *)a3 + 1) = *((_DWORD *)a2 + 1);
v6 = *((_DWORD *)a1 + 3) - *((_DWORD *)a2 + 1);
v7 = *((_DWORD *)a1 + 1);
}
else
{
*((_DWORD *)a3 + 1) = v5;
v6 = *((_DWORD *)a2 + 3) - *((_DWORD *)a1 + 1);
v7 = *((_DWORD *)a2 + 1);
}
*((_DWORD *)a3 + 3) = v6 + v7 + 1;
return *((_DWORD *)a3 + 2) <= *((_DWORD *)a2 + 2) + *((_DWORD *)a1 + 2)
&& *((_DWORD *)a3 + 3) <= *((_DWORD *)a2 + 3) + *((_DWORD *)a1 + 3);
}

//----- (01015935) --------------------------------------------------------
void __stdcall throw_ball(struct TBall *a1, struct vector_type *a2, float a3, float a4, float a5)
{
struct TBall *v5; // ebx
int v6; // eax
float v7; // ST04_4
struct TBall *v8; // [esp+18h] [ebp+8h]

v5 = a1;
*(_DWORD *)((char *)a1 + 106) = 0;
*(_DWORD *)((char *)a1 + 54) = *(_DWORD *)a2;
*(_DWORD *)((char *)a1 + 58) = *((_DWORD *)a2 + 1);
*(_DWORD *)((char *)a1 + 62) = *((_DWORD *)a2 + 2);
v6 = _rand();
v7 = (1.0 - ((double)v6 * 0.00003051850947599719 + (double)v6 * 0.00003051850947599719)) * a3;
RotateVector((struct TBall *)((char *)a1 + 54), v7);
v8 = (struct TBall *)_rand();
*(float *)((char *)v5 + 66) = (1.0
- ((double)(signed int)v8 * 0.00003051850947599719
+ (double)(signed int)v8 * 0.00003051850947599719))
* (a4
* a5)
+ a4;
}

//----- (0101B43A) --------------------------------------------------------
double __stdcall distance_to_flipper(struct ray_type *a1, struct ray_type *a2)
{
signed int v2; // edi
double v3; // st7
double v4; // st7
double v5; // st7
double v6; // st7
float *v7; // eax
double v8; // st7
_DWORD *v10; // esi
_DWORD *v11; // esi
float v12; // [esp+8h] [ebp-4h]

v12 = 1000000000.0;
v2 = -1;
v3 = ray_intersect_line((float *)a1, (float *)&lineA);
if ( v3 < 1000000000.0 )
{
v12 = v3;
v2 = 0;
}
v4 = ray_intersect_circle((float *)a1, (float *)&circlebase);
if ( v4 < v12 )
{
v12 = v4;
v2 = 2;
}
v5 = ray_intersect_circle((float *)a1, (float *)&circleT1);
if ( v5 < v12 )
{
v12 = v5;
v2 = 3;
}
v6 = ray_intersect_line((float *)a1, (float *)&lineB);
if ( v6 < v12 )
{
v12 = v6;
v2 = 1;
}
if ( !a2 || v12 >= 1000000000.0 )
return v12;
if ( v2 != -1 )
{
if ( v2 )
{
if ( v2 != 1 )
{
if ( v2 == 2 )
{
v7 = (float *)((char *)a2 + 12);
*(float *)a2 = v12 * *((float *)a1 + 3) + *(float *)a1;
*((float *)a2 + 1) = v12 * *((float *)a1 + 4) + *((float *)a1 + 1);
*((float *)a2 + 3) = *(float *)a2 - circlebase;
v8 = *((float *)a2 + 1) - *(float *)&dword_1025664;
}
else
{
if ( v2 != 3 )
return v12;
v7 = (float *)((char *)a2 + 12);
*(float *)a2 = v12 * *((float *)a1 + 3) + *(float *)a1;
*((float *)a2 + 1) = v12 * *((float *)a1 + 4) + *((float *)a1 + 1);
*((float *)a2 + 3) = *(float *)a2 - circleT1;
v8 = *((float *)a2 + 1) - *(float *)&dword_1025674;
}
*((float *)a2 + 4) = v8;
normalize_2d(v7);
return v12;
}
*((_DWORD *)a2 + 3) = lineB;
*((_DWORD *)a2 + 4) = *((_DWORD *)&lineB + 1);
*((_DWORD *)a2 + 5) = *((_DWORD *)&lineB + 2);
v10 = &unk_10256E4;
}
else
{
*((_DWORD *)a2 + 3) = lineA;
*((_DWORD *)a2 + 4) = *((_DWORD *)&lineA + 1);
*((_DWORD *)a2 + 5) = *((_DWORD *)&lineA + 2);
v10 = &unk_10256A4;
}
*(_DWORD *)a2 = *v10;
v11 = v10 + 1;
*((_DWORD *)a2 + 1) = *v11;
*((_DWORD *)a2 + 2) = v11[1];
return v12;
}
return 1000000000.0;
}
// 1025664: using guessed type int dword_1025664;
// 1025674: using guessed type int dword_1025674;

//----- (0101CBB1) --------------------------------------------------------
void __stdcall RotatePt(struct vector_type *a1, float a2, float a3, struct vector_type *a4)
{
double v4; // st7
double v5; // st6

v4 = *(float *)a1 - *(float *)a4;
v5 = *((float *)a1 + 1) - *((float *)a4 + 1);
*(float *)a1 = v4 * a3 - v5 * a2 + *(float *)a4;
*((float *)a1 + 1) = v4 * a2 + v5 * a3 + *((float *)a4 + 1);
}

//----- (0101CBF5) --------------------------------------------------------
long double __stdcall Distance(struct vector_type *a1, struct vector_type *a2)
{
double v2; // st7
double v3; // st6

v2 = *(float *)a1 - *(float *)a2;
v3 = *((float *)a1 + 1) - *((float *)a2 + 1);
return sqrt(v3 * v3 + v2 * v2);
}

//----- (0101CC23) --------------------------------------------------------
double __stdcall Distance_Squared(float a1, float a2, int a3, float a4, float a5, int a6)
{
return (a2 - a5) * (a2 - a5) + (a1 - a4) * (a1 - a4);
}

//----- (0101CC4B) --------------------------------------------------------
double __stdcall DotProduct(const struct vector_type *a1, const struct vector_type *a2)
{
return *((float *)a1 + 1) * *((float *)a2 + 1) + *(float *)a1 * *(float *)a2;
}

//----- (0101CC6B) --------------------------------------------------------
void __stdcall SinCos(float a1, float *a2, float *a3)
{
*a2 = sin(a1);
*a3 = cos(a1);
}
