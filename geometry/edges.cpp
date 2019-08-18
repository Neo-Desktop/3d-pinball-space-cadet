//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (0100B9C7) --------------------------------------------------------
void edges_insert_circle(struct circle_type *a1, struct TEdgeSegment *a2, struct field_effect_type *a3)
{
    struct circle_type *v3; // ebx
    long double v4; // st7
    int v5; // esi
    int v6; // edi
    float *v7; // esi
    int v8; // eax
    int v9; // eax
    double v10; // st7
    double v11; // st7
    float v12; // ST0C_4
    double v13; // st7
    float v14; // ST0C_4
    double v15; // st7
    float v16; // ST0C_4
    double v17; // st7
    double v18; // st7
    float v19; // [esp+10h] [ebp-70h]
    float v20; // [esp+14h] [ebp-6Ch]
    int v21; // [esp+18h] [ebp-68h]
    float v22; // [esp+1Ch] [ebp-64h]
    float v23; // [esp+20h] [ebp-60h]
    int v24; // [esp+28h] [ebp-58h]
    float v25; // [esp+3Ch] [ebp-44h]
    float v26; // [esp+40h] [ebp-40h]
    int v27; // [esp+44h] [ebp-3Ch]
    float v28; // [esp+48h] [ebp-38h]
    float v29; // [esp+4Ch] [ebp-34h]
    int v30; // [esp+50h] [ebp-30h]
    float v31; // [esp+54h] [ebp-2Ch]
    float v32; // [esp+58h] [ebp-28h]
    float v33; // [esp+5Ch] [ebp-24h]
    float v34; // [esp+60h] [ebp-20h]
    float v35; // [esp+64h] [ebp-1Ch]
    float v36; // [esp+68h] [ebp-18h]
    struct circle_type *v37; // [esp+6Ch] [ebp-14h]
    int v38; // [esp+70h] [ebp-10h]
    int v39; // [esp+74h] [ebp-Ch]
    float v40; // [esp+78h] [ebp-8h]
    int v41; // [esp+7Ch] [ebp-4h]
    struct circle_type *v42; // [esp+88h] [ebp+8h]
    struct circle_type *v43; // [esp+88h] [ebp+8h]

    v3 = a1;
    v4 = sqrt(*((float *)a1 + 3)) + *(float *)edge_manager * 0.001;
    v40 = v4 * v4;
    v35 = *(float *)a1 - v4;
    v33 = *((float *)a1 + 1) - v4;
    v36 = v4 + *(float *)a1;
    v34 = v4 + *((float *)a1 + 1);
    v5 = TEdgeManager::box_x(edge_manager, v35);
    v6 = TEdgeManager::box_y(edge_manager, v33);
    v38 = TEdgeManager::box_x(edge_manager, v36);
    v39 = TEdgeManager::box_y(edge_manager, v34);
    if ( v5 - 1 <= 0 )
        v42 = 0;
    else
        v42 = (struct circle_type *)(v5 - 1);
    if ( v6 - 1 <= 0 )
        v37 = 0;
    else
        v37 = (struct circle_type *)(v6 - 1);
    v7 = (float *)edge_manager;
    v38 = TEdgeManager::increment_box_x(edge_manager, v38);
    v39 = TEdgeManager::increment_box_y((TEdgeManager *)v7, v39);
    v28 = (double)(signed int)v42 * *v7 + v7[6];
    v29 = (double)(signed int)v37 * v7[1] + v7[7];
    v31 = v29;
    v8 = (int)v42;
    v41 = (int)v42;
    LABEL_38:
    if ( v8 <= v38 )
    {
        v9 = (int)v37;
        v43 = v37;
        while ( 1 )
        {
            if ( v9 > v39 )
            {
                v18 = v28 + *v7;
                ++v41;
                v29 = v31;
                v8 = v41;
                v28 = v18;
                goto LABEL_38;
            }
            if ( v36 >= (double)v28 )
            {
                v32 = v28 + *v7;
                if ( v35 <= (double)v32 && v34 >= (double)v29 )
                {
                    v10 = v29 + v7[1];
                    if ( v33 <= v10 )
                    {
                        if ( *(float *)v3 > (double)v32
                             || *(float *)v3 < (double)v28
                             || v10 < *((float *)v3 + 1)
                             || *((float *)v3 + 1) < (double)v29 )
                        {
                            v25 = v28;
                            v26 = v29;
                            v27 = v30;
                            v11 = Distance_Squared(v28, v29, v30, *(float *)v3, *((float *)v3 + 1), *((DWORD *)v3 + 2));
                            if ( v11 > v40 )
                            {
                                v12 = *(float *)v3;
                                v25 = v25 + *(float *)edge_manager;
                                v13 = Distance_Squared(v25, v26, v27, v12, *((float *)v3 + 1), *((DWORD *)v3 + 2));
                                if ( v13 > v40 )
                                {
                                    v14 = *(float *)v3;
                                    v26 = v26 + *((float *)edge_manager + 1);
                                    v15 = Distance_Squared(v25, v26, v27, v14, *((float *)v3 + 1), *((DWORD *)v3 + 2));
                                    if ( v15 > v40 )
                                    {
                                        v16 = *(float *)v3;
                                        v25 = v25 - *(float *)edge_manager;
                                        v17 = Distance_Squared(v25, v26, v27, v16, *((float *)v3 + 1), *((DWORD *)v3 + 2));
                                        if ( v17 > v40 )
                                        {
                                            v19 = v28;
                                            v20 = v29;
                                            v21 = v30;
                                            v22 = 1.0;
                                            v23 = 0.0;
                                            v24 = *(DWORD *)edge_manager;
                                            if ( ray_intersect_circle(&v19, (float *)v3) >= 1000000000.0 )
                                            {
                                                v22 = -1.0;
                                                v19 = v19 + *(float *)edge_manager;
                                                if ( ray_intersect_circle(&v19, (float *)v3) >= 1000000000.0 )
                                                {
                                                    v22 = 0.0;
                                                    v23 = 1.0;
                                                    v24 = *((DWORD *)edge_manager + 1);
                                                    if ( ray_intersect_circle(&v19, (float *)v3) >= 1000000000.0 )
                                                    {
                                                        v23 = -1.0;
                                                        v20 = v20 + *((float *)edge_manager + 1);
                                                        if ( ray_intersect_circle(&v19, (float *)v3) >= 1000000000.0 )
                                                        {
                                                            v23 = 0.0;
                                                            v22 = -1.0;
                                                            v24 = *(DWORD *)edge_manager;
                                                            if ( ray_intersect_circle(&v19, (float *)v3) >= 1000000000.0 )
                                                            {
                                                                v22 = 1.0;
                                                                v19 = v19 - *(float *)edge_manager;
                                                                if ( ray_intersect_circle(&v19, (float *)v3) >= 1000000000.0 )
                                                                {
                                                                    v22 = 0.0;
                                                                    v23 = -1.0;
                                                                    v24 = *((DWORD *)edge_manager + 1);
                                                                    if ( ray_intersect_circle(&v19, (float *)v3) >= 1000000000.0 )
                                                                    {
                                                                        v23 = 1.0;
                                                                        v20 = v20 - *((float *)edge_manager + 1);
                                                                        if ( ray_intersect_circle(&v19, (float *)v3) >= 1000000000.0 )
                                                                            goto LABEL_34;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            v7 = (float *)edge_manager;
                        }
                        if ( a2 )
                        {
                            TEdgeManager::add_edge_to_box((TEdgeManager *)v7, v41, (int)v43, a2);
                            v7 = (float *)edge_manager;
                        }
                        if ( a3 )
                        {
                            TEdgeManager::add_field_to_box((TEdgeManager *)v7, v41, (int)v43, a3);
                            LABEL_34:
                            v7 = (float *)edge_manager;
                            goto LABEL_35;
                        }
                    }
                }
            }
            LABEL_35:
            v43 = (struct circle_type *)((char *)v43 + 1);
            v9 = (int)v43;
            v29 = v29 + v7[1];
        }
    }
}

//----- (0100BE21) --------------------------------------------------------
void edges_insert_square(float a1, float a2, float a3, float a4, struct TEdgeSegment *a5, struct field_effect_type *a6)
{
    double v6; // st7
    double v7; // st7
    int v8; // eax
    int v9; // edi
    signed int v10; // ST28_4
    int v11; // ebx
    int v12; // eax
    float *v13; // ecx
    int v14; // esi
    float v15; // [esp+10h] [ebp-18h]
    float v16; // [esp+14h] [ebp-14h]
    int v17; // [esp+1Ch] [ebp-Ch]
    float v18; // [esp+20h] [ebp-8h]
    int v19; // [esp+24h] [ebp-4h]
    float v20; // [esp+30h] [ebp+8h]
    float v21; // [esp+34h] [ebp+Ch]
    float v22; // [esp+38h] [ebp+10h]
    float v23; // [esp+3Ch] [ebp+14h]

    v6 = (double)(signed int)(signed __int64)(*(float *)edge_manager * 0.001);
    v21 = a2 - v6;
    v23 = v6 + a4;
    v7 = (double)(signed int)(signed __int64)(*((float *)edge_manager + 1) * 0.001);
    v20 = a1 - v7;
    v22 = v7 + a3;
    v8 = TEdgeManager::box_x(edge_manager, v21);
    v9 = v8;
    v10 = v8;
    v19 = TEdgeManager::box_y(edge_manager, v20);
    v11 = TEdgeManager::box_x(edge_manager, v23);
    v12 = TEdgeManager::box_y(edge_manager, v22);
    v13 = (float *)edge_manager;
    v17 = v12;
    v15 = (double)v10 * *(float *)edge_manager + *((float *)edge_manager + 6);
    v16 = (double)v19 * *((float *)edge_manager + 1) + *((float *)edge_manager + 7);
    v18 = v16;
    while ( v9 <= v11 )
    {
        v14 = v19;
        if ( v19 <= v12 )
        {
            do
            {
                if ( v23 >= (double)v15 && v15 + *v13 >= v21 && v22 >= (double)v16 && v16 + v13[1] >= v20 )
                {
                    if ( a5 )
                    {
                        TEdgeManager::add_edge_to_box((TEdgeManager *)v13, v9, v14, a5);
                        v13 = (float *)edge_manager;
                    }
                    if ( a6 )
                    {
                        TEdgeManager::add_field_to_box((TEdgeManager *)v13, v9, v14, a6);
                        v13 = (float *)edge_manager;
                    }
                }
                v12 = v17;
                ++v14;
                v16 = v16 + v13[1];
            }
            while ( v14 <= v17 );
        }
        ++v9;
        v16 = v18;
        v15 = v15 + *v13;
    }
}

//----- (01016B27) --------------------------------------------------------
void find_closest_edge(struct ramp_plane_type *a1, int a2, struct wall_point_type *a3, struct vector_type **a4, struct vector_type **a5)
{
int v5; // ecx
char *v6; // esi
struct vector_type *v7; // ebx
long double v8; // st7
struct vector_type *v9; // edi
long double v10; // st7
long double v11; // st7
int v12; // [esp+0h] [ebp-1Ch]
int v13; // [esp+4h] [ebp-18h]
int v14; // [esp+Ch] [ebp-10h]
int v15; // [esp+10h] [ebp-Ch]
float v16; // [esp+18h] [ebp-4h]
float v17; // [esp+28h] [ebp+Ch]
float v18; // [esp+28h] [ebp+Ch]
float v19; // [esp+28h] [ebp+Ch]
struct wall_point_type *v20; // [esp+2Ch] [ebp+10h]

v14 = *(DWORD *)a3;
v15 = *((DWORD *)a3 + 1);
v5 = *((DWORD *)a3 + 2);
v13 = *((DWORD *)a3 + 3);
v16 = 1000000000.0;
v12 = v5;
if ( a2 > 0 )
{
v6 = (char *)a1 + 20;
v20 = (struct wall_point_type *)a2;
do
{
v7 = (struct vector_type *)(v6 - 8);
v17 = Distance((struct vector_type *)&v14, (struct vector_type *)(v6 - 8));
v8 = Distance((struct vector_type *)&v12, (struct vector_type *)v6) + v17;
if ( v8 < v16 )
{
v16 = v8;
*a4 = v7;
*a5 = (struct vector_type *)v6;
}
v9 = (struct vector_type *)(v6 + 8);
v18 = Distance((struct vector_type *)&v12, (struct vector_type *)(v6 + 8));
v10 = Distance((struct vector_type *)&v14, (struct vector_type *)v6) + v18;
if ( v10 < v16 )
{
v16 = v10;
*a4 = (struct vector_type *)v6;
*a5 = v9;
}
v19 = Distance((struct vector_type *)&v14, (struct vector_type *)(v6 + 8));
v11 = Distance((struct vector_type *)&v12, (struct vector_type *)(v6 - 8)) + v19;
if ( v11 < v16 )
{
v16 = v11;
*a4 = v9;
*a5 = v7;
}
v6 += 52;
v20 = (struct wall_point_type *)((char *)v20 - 1);
}
while ( v20 );
}
}
