#include "../pinball.h"

//----- (0101304D) --------------------------------------------------------
void render_repaint(struct render_sprite_type_struct *a1)
{
int *v1; // edi
bool v2; // zf
bool v3; // sf
int v4; // esi
int v5; // [esp+8h] [ebp-10h]
int v6; // [esp+Ch] [ebp-Ch]
int v7; // [esp+10h] [ebp-8h]
int v8; // [esp+14h] [ebp-4h]
struct render_sprite_type_struct *v9; // [esp+20h] [ebp+8h]

v1 = (int *)a1;
if ( *((DWORD *)a1 + 17) )
{
v2 = *((DWORD *)a1 + 18) == 0;
v3 = *((DWORD *)a1 + 18) < 0;
v9 = 0;
if ( !v3 && !v2 )
{
do
{
v4 = *(DWORD *)(v1[17] + 4 * (DWORD)v9);
if ( !*(_BYTE *)(v4 + 24) && *(DWORD *)(v4 + 16) )
{
if ( rectangle_clip((int *)v4, v1 + 13, &v5) )
zdrv_paint(
v7,
v8,
&vscreen,
v5,
v6,
(int)&zscreen,
v5,
v6,
*(DWORD **)(v4 + 16),
v5 - *(DWORD *)v4,
v6 - *(DWORD *)(v4 + 4),
*(DWORD *)(v4 + 20),
v5 + *(DWORD *)(v4 + 44) - *(DWORD *)v4,
v6 + *(DWORD *)(v4 + 48) - *(DWORD *)(v4 + 4));
}
v9 = (struct render_sprite_type_struct *)((char *)v9 + 1);
}
while ( (signed int)v9 < v1[18] );
}
}
}

//----- (010130F3) --------------------------------------------------------
void render_paint_balls()
{
int v0; // ecx
int v1; // edi
int i; // esi
struct render_sprite_type_struct *v3; // edx
struct render_sprite_type_struct **v4; // eax
struct render_sprite_type_struct *v5; // ecx
struct render_sprite_type_struct *v6; // edi
int *v7; // esi
int v8; // ebx
int v9; // ST48_4
int v10; // [esp+Ch] [ebp-10h]
struct render_sprite_type_struct **v11; // [esp+10h] [ebp-Ch]
DWORD *v12; // [esp+14h] [ebp-8h]

v0 = render_many_balls;
if ( render_many_balls > 1 )
{
v1 = 0;
if ( render_many_balls > 0 )
{
do
{
for ( i = v1; i < v0 / 2; ++i )
{
v3 = render_ball_list[i];
v4 = &render_ball_list[v1];
if ( *((WORD *)*v4 + 13) > *((WORD *)v3 + 13) )
{
v5 = *v4;
*v4 = v3;
render_ball_list[i] = v5;
v0 = render_many_balls;
}
}
++v1;
}
while ( v1 < v0 );
}
}
v10 = 0;
v11 = render_ball_list;
if ( v0 > 0 )
{
v12 = &ball_bitmap;
do
{
v6 = *v11;
v7 = (int *)((char *)*v11 + 52);
if ( *((DWORD *)*v11 + 4) && rectangle_clip((int *)v6, (int *)&vscreen_rect, (DWORD *)*v11 + 13) )
{
v8 = *v7;
v9 = v7[1];
gdrv_copy_bitmap(v12, v7[2], v7[3], 0, 0, &vscreen, *v7, v9);
zdrv_paint_flat(
v7[2],
v7[3],
&vscreen,
v8,
v9,
(int)&zscreen,
v8,
v9,
*((DWORD **)v6 + 4),
v8 - *(DWORD *)v6,
v9 - *((DWORD *)v6 + 1),
*((WORD *)v6 + 13));
}
else
{
v7[2] = -1;
}
++v10;
v12 = (DWORD *)((char *)v12 + 37);
++v11;
}
while ( v10 < render_many_balls );
}
}
// 102506C: using guessed type struct render_sprite_type_struct **render_ball_list;
// 1025070: using guessed type int render_many_balls;

//----- (0101320D) --------------------------------------------------------
void render_unpaint_balls()
{
DWORD *v0; // ebx
struct render_sprite_type_struct *v1; // edi
DWORD *v2; // esi
int v3; // eax
DWORD *v4; // edi
DWORD *v5; // esi
bool v6; // zf
int v7; // [esp+0h] [ebp-8h]
struct render_sprite_type_struct **v8; // [esp+4h] [ebp-4h]

v8 = &render_ball_list[render_many_balls - 1];
if ( render_many_balls - 1 >= 0 )
{
v0 = (DWORD *)((char *)&ball_bitmap + 37 * (render_many_balls - 1));
v7 = render_many_balls;
do
{
v1 = *v8;
v2 = (DWORD *)((char *)*v8 + 52);
v3 = *((DWORD *)*v8 + 15);
if ( v3 > 0 )
gdrv_copy_bitmap(&vscreen, v3, *((DWORD *)*v8 + 16), *((DWORD *)*v8 + 13), *((DWORD *)*v8 + 14), v0, 0, 0);
--v8;
v4 = (DWORD *)((char *)v1 + 28);
*v4 = *v2;
v5 = v2 + 1;
++v4;
*v4 = *v5;
++v5;
++v4;
*v4 = *v5;
v0 = (DWORD *)((char *)v0 - 37);
v6 = v7-- == 1;
v4[1] = v5[1];
}
while ( !v6 );
}
}
// 102506C: using guessed type struct render_sprite_type_struct **render_ball_list;
// 1025070: using guessed type int render_many_balls;

//----- (01013283) --------------------------------------------------------
int render_remove_sprite(struct render_sprite_type_struct *a1)
{
int v1; // eax
int v2; // ecx

v1 = render_many_sprites;
v2 = 0;
if ( render_many_sprites <= 0 )
return 0;
while ( render_sprite_list[v2] != a1 )
{
if ( ++v2 >= render_many_sprites )
return 0;
}
while ( v2 < v1 )
{
render_sprite_list[v2] = render_sprite_list[v2 + 1];
v1 = render_many_sprites;
++v2;
}
render_many_sprites = v1 - 1;
if ( *((DWORD *)a1 + 17) )
memoryfree(*((DWORD *)a1 + 17));
memoryfree((int)a1);
return 1;
}
// 1025084: using guessed type struct render_sprite_type_struct **render_sprite_list;
// 10250B4: using guessed type int render_many_sprites;

//----- (010132E8) --------------------------------------------------------
int render_remove_ball(struct render_sprite_type_struct *a1)
{
int v1; // eax
int v2; // ecx

v1 = render_many_balls;
v2 = 0;
if ( render_many_balls <= 0 )
return 0;
while ( render_ball_list[v2] != a1 )
{
if ( ++v2 >= render_many_balls )
return 0;
}
while ( v2 < v1 )
{
render_ball_list[v2] = render_ball_list[v2 + 1];
v1 = render_many_balls;
++v2;
}
render_many_balls = v1 - 1;
memoryfree((int)a1);
return 1;
}
// 102506C: using guessed type struct render_sprite_type_struct **render_ball_list;
// 1025070: using guessed type int render_many_balls;

//----- (010133C7) --------------------------------------------------------
void render_update()
{
int i; // eax
int *v1; // esi
int *v2; // edi
struct render_sprite_type_struct **v3; // esi
int v4; // edi
struct render_sprite_type_struct *v5; // eax
struct render_sprite_type_struct *v6; // edi
int *v7; // esi
int v8; // edx
struct render_sprite_type_struct *v9; // eax
int *v10; // edi
bool v11; // zf
int *v12; // esi
int *v13; // edi
int *v14; // esi
int v15; // eax
unsigned int v16; // ecx
int v17; // edi
int v18; // esi
int v19; // edx
int v20; // edx
int xSrc; // [esp+Ch] [ebp-24h]
int v22; // [esp+10h] [ebp-20h]
int v23; // [esp+14h] [ebp-1Ch]
int v24; // [esp+18h] [ebp-18h]
struct render_sprite_type_struct *v25; // [esp+1Ch] [ebp-14h]
int v26; // [esp+20h] [ebp-10h]
int v27; // [esp+24h] [ebp-Ch]
int v28; // [esp+28h] [ebp-8h]
struct render_sprite_type_struct **j; // [esp+2Ch] [ebp-4h]

v28 = 0;
j = render_dirty_list;
for ( i = render_many_dirty; v28 < render_many_dirty; ++j )
{
v1 = (int *)*j;
if ( *((_BYTE *)*j + 25) )
{
if ( *((_BYTE *)*j + 25) == 1 )
{
if ( v1[9] > 0 )
enclosing_box(v1 + 7, v1, v1 + 13);
v2 = v1 + 13;
if ( rectangle_clip(v1 + 13, (int *)&vscreen_rect, v1 + 13) )
{
LABEL_29:
v15 = v1[14];
v16 = v1[15];
v17 = *v2;
v18 = v1[16];
v27 = v15;
v26 = v16;
zdrv_fill((int)&vscreen, (int)&zscreen, v16, v18, v17, v15, 0xFFFF);
if ( render_background_bitmap )
gdrv_copy_bitmap(&vscreen, v26, v18, v17, v27, (DWORD *)render_background_bitmap, v17, v27);
else
gdrv_fill_bitmap((int)&vscreen, &vscreen, v26, v18, v17, v27, 0);
goto LABEL_8;
}
LABEL_7:
v1[15] = -1;
goto LABEL_8;
}
}
else
{
v2 = v1 + 13;
if ( !rectangle_clip(v1, (int *)&vscreen_rect, v1 + 13) )
goto LABEL_7;
if ( !v1[4] )
goto LABEL_29;
}
LABEL_8:
++v28;
i = render_many_dirty;
}
v3 = render_dirty_list;
v4 = 0;
if ( i > 0 )
{
do
{
v5 = *v3;
if ( *((DWORD *)*v3 + 15) > 0 && (!*((_BYTE *)v5 + 25) || *((_BYTE *)v5 + 25) == 1) )
render_repaint(*v3);
++v4;
++v3;
}
while ( v4 < render_many_dirty );
}
render_paint_balls();
if ( render_blit )
{
gdrv_start_blit_sequence();
v27 = xDest + render_offset_x;
v26 = yDest + render_offset_y;
v28 = 0;
for ( j = render_dirty_list; v28 < render_many_dirty; ++j )
{
v6 = *j;
v7 = (int *)((char *)*j + 52);
v8 = *((DWORD *)*j + 15);
v25 = *j;
if ( v8 > 0 )
gdrv_blit_sequence((int)&vscreen, *v7, v7[1], *v7 + v27, v7[1] + v26, v8, v7[3]);
v9 = v25;
v10 = (int *)((char *)v6 + 28);
v11 = *((_BYTE *)v25 + 24) == 0;
*v10 = *v7;
v12 = v7 + 1;
++v10;
*v10 = *v12;
++v12;
++v10;
*v10 = *v12;
v10[1] = v12[1];
if ( !v11 )
render_remove_sprite(v9);
++v28;
}
v28 = 0;
for ( j = render_ball_list; v28 < render_many_balls; ++j )
{
v13 = (int *)((char *)*j + 28);
v14 = (int *)((char *)*j + 52);
if ( overlapping_box((struct rectangle_type *)v14, (struct rectangle_type *)v13, (struct rectangle_type *)&xSrc)
&& *((DWORD *)*j + 15) > 0 )
{
if ( v23 > 0 )
gdrv_blit_sequence((int)&vscreen, xSrc, v22, xSrc + v27, v22 + v26, v23, v24);
}
else
{
v19 = v14[2];
if ( v19 > 0 )
gdrv_blit_sequence((int)&vscreen, *v14, v14[1], *v14 + v27, v14[1] + v26, v19, v14[3]);
v20 = v13[2];
if ( v20 > 0 )
gdrv_blit_sequence((int)&vscreen, *v13, v13[1], *v13 + v27, v13[1] + v26, v20, v13[3]);
}
++v28;
}
gdrv_end_blit_sequence();
}
render_many_dirty = 0;
render_unpaint_balls();
}
// 1024754: using guessed type int render_blit;
// 1025068: using guessed type struct render_sprite_type_struct **render_dirty_list;
// 102506C: using guessed type struct render_sprite_type_struct **render_ball_list;
// 1025070: using guessed type int render_many_balls;
// 10250C0: using guessed type int render_many_dirty;
// 10253AC: using guessed type int render_offset_x;
// 10253B0: using guessed type int render_offset_y;

//----- (01013670) --------------------------------------------------------
void render_uninit()
{
int i; // esi
int j; // esi

gdrv_destroy_bitmap((int)&vscreen);
zdrv_destroy_zmap(&zscreen);
for ( i = 0; i < render_many_sprites; ++i )
render_remove_sprite(render_sprite_list[i]);
for ( j = 0; j < render_many_balls; ++j )
render_remove_ball(render_ball_list[j]);
memoryfree((int)render_ball_list);
memoryfree((int)render_dirty_list);
memoryfree((int)render_sprite_list);
render_many_sprites = 0;
render_many_dirty = 0;
render_many_balls = 0;
}
// 1025068: using guessed type struct render_sprite_type_struct **render_dirty_list;
// 102506C: using guessed type struct render_sprite_type_struct **render_ball_list;
// 1025070: using guessed type int render_many_balls;
// 1025084: using guessed type struct render_sprite_type_struct **render_sprite_list;
// 10250B4: using guessed type int render_many_sprites;
// 10250C0: using guessed type int render_many_dirty;

//----- (01013705) --------------------------------------------------------
char *render_init(DWORD *a1, float a2, float a3, int a4, int a5)
{
int v5; // edi
char *result; // eax
char *v7; // [esp+18h] [ebp+18h]

++memory_critical_allocation;
render_zscaler = a3;
render_zmin = a2;
render_zmax = 4294967300.0 / a3 + a2;
render_sprite_list = (struct render_sprite_type_struct **)memoryallocate(0xFA0u);
render_dirty_list = (struct render_sprite_type_struct **)memoryallocate(0xFA0u);
render_ball_list = (struct render_sprite_type_struct **)memoryallocate(0x50u);
gdrv_create_bitmap((int)&vscreen, a4, a5);
zdrv_create_zmap((int)&zscreen, a4, a5);
zdrv_fill((int)&vscreen, (int)&zscreen, zscreen, word_102505A, 0, 0, 0xFFFF);
v5 = a5;
dword_1025078 = 0;
vscreen_rect = 0;
dword_102507C = a4;
dword_1025080 = a5;
yDest = 0;
xDest = 0;
v7 = (char *)&ball_bitmap;
do
{
gdrv_create_raw_bitmap((int)v7, 64, 64, 1);
v7 += 37;
}
while ( (signed int)v7 < (signed int)&render_offset_x );
render_background_bitmap = (int)a1;
if ( a1 )
result = gdrv_copy_bitmap(&vscreen, a4, v5, 0, 0, a1, 0, 0);
else
result = (char *)gdrv_fill_bitmap((int)&vscreen, &vscreen, dword_1025094, dword_1025098, 0, 0, 0);
--memory_critical_allocation;
return result;
}
// 1024F04: using guessed type int memory_critical_allocation;
// 102505A: using guessed type int word_102505A;
// 1025068: using guessed type struct render_sprite_type_struct **render_dirty_list;
// 102506C: using guessed type struct render_sprite_type_struct **render_ball_list;
// 1025078: using guessed type int dword_1025078;
// 102507C: using guessed type int dword_102507C;
// 1025080: using guessed type int dword_1025080;
// 1025084: using guessed type struct render_sprite_type_struct **render_sprite_list;
// 1025094: using guessed type int dword_1025094;
// 1025098: using guessed type int dword_1025098;
// 10250B0: using guessed type float render_zscaler;
// 10250B8: using guessed type float render_zmax;
// 10250BC: using guessed type float render_zmin;
// 10253AC: using guessed type int render_offset_x;

//----- (0101382A) --------------------------------------------------------
int render_sprite_modified(int a1)
{
int result; // eax

if ( *(_BYTE *)(a1 + 25) != 2 )
{
result = render_many_dirty;
if ( render_many_dirty < 999 )
render_dirty_list[render_many_dirty++] = (struct render_sprite_type_struct *)a1;
}
return result;
}
// 1025068: using guessed type struct render_sprite_type_struct **render_dirty_list;
// 10250C0: using guessed type int render_many_dirty;

//----- (0101385C) --------------------------------------------------------
int render_create_sprite(int a1, int a2, int a3, int a4, int a5, DWORD *a6)
{
int v6; // ebx
int result; // eax

v6 = memoryallocate(0x5Cu);
result = 0;
if ( v6 )
{
*(DWORD *)(v6 + 4) = a5;
*(DWORD *)(v6 + 16) = a2;
*(DWORD *)v6 = a4;
*(_BYTE *)(v6 + 25) = a1;
*(_BYTE *)(v6 + 24) = 0;
*(DWORD *)(v6 + 68) = 0;
*(DWORD *)(v6 + 72) = 0;
if ( a6 )
{
*(DWORD *)(v6 + 76) = *a6;
*(DWORD *)(v6 + 80) = a6[1];
*(DWORD *)(v6 + 84) = a6[2];
*(DWORD *)(v6 + 88) = a6[3];
}
else
{
*(DWORD *)(v6 + 84) = -1;
*(DWORD *)(v6 + 88) = -1;
*(DWORD *)(v6 + 76) = 0;
*(DWORD *)(v6 + 80) = 0;
}
if ( a2 )
{
*(DWORD *)(v6 + 8) = *(DWORD *)(a2 + 12);
*(DWORD *)(v6 + 12) = *(DWORD *)(a2 + 16);
}
else
{
*(DWORD *)(v6 + 8) = 0;
*(DWORD *)(v6 + 12) = 0;
}
*(DWORD *)(v6 + 20) = a3;
*(DWORD *)(v6 + 48) = 0;
*(DWORD *)(v6 + 44) = 0;
if ( !a3 && a1 != 2 )
{
*(DWORD *)(v6 + 20) = render_background_zmap;
*(DWORD *)(v6 + 44) = a4 - render_zmap_offset;
*(DWORD *)(v6 + 48) = a5 - dword_10253C0;
}
*(DWORD *)(v6 + 28) = *(DWORD *)v6;
*(DWORD *)(v6 + 32) = *(DWORD *)(v6 + 4);
*(DWORD *)(v6 + 36) = *(DWORD *)(v6 + 8);
*(DWORD *)(v6 + 40) = *(DWORD *)(v6 + 12);
if ( a1 == 2 )
{
render_ball_list[render_many_balls++] = (struct render_sprite_type_struct *)v6;
}
else
{
render_sprite_list[render_many_sprites++] = (struct render_sprite_type_struct *)v6;
render_sprite_modified(v6);
}
result = v6;
}
return result;
}
// 102506C: using guessed type struct render_sprite_type_struct **render_ball_list;
// 1025070: using guessed type int render_many_balls;
// 1025084: using guessed type struct render_sprite_type_struct **render_sprite_list;
// 10250B4: using guessed type int render_many_sprites;
// 10253B8: using guessed type struct zmap_header_type *render_background_zmap;
// 10253C0: using guessed type int dword_10253C0;

//----- (0101394E) --------------------------------------------------------
int render_set_background_zmap(struct zmap_header_type *a1, int a2, int a3)
{
int result; // eax

render_background_zmap = a1;
render_zmap_offset = a2;
result = a3;
dword_10253C0 = a3;
return result;
}
// 10253B8: using guessed type struct zmap_header_type *render_background_zmap;
// 10253C0: using guessed type int dword_10253C0;

//----- (01013974) --------------------------------------------------------
int render_sprite_set(DWORD *a1, int a2, int a3, int a4, int a5)
{
int result; // eax

result = (int)a1;
if ( a1 )
{
*a1 = a4;
a1[1] = a5;
a1[4] = a2;
if ( a2 )
{
a1[2] = *(DWORD *)(a2 + 12);
a1[3] = *(DWORD *)(a2 + 16);
}
a1[5] = a3;
result = render_sprite_modified((int)a1);
}
return result;
}

//----- (010139B6) --------------------------------------------------------
void render_sprite_set_bitmap(DWORD *a1, int a2)
{
if ( a1 && a1[4] != a2 )
{
a1[4] = a2;
if ( a2 )
{
a1[2] = *(DWORD *)(a2 + 12);
a1[3] = *(DWORD *)(a2 + 16);
}
render_sprite_modified((int)a1);
}
}

//----- (010139EC) --------------------------------------------------------
void render_ball_set(int a1, int a2, float a3, int a4, int a5)
{
double v5; // st7

if ( a1 )
{
*(DWORD *)(a1 + 16) = a2;
if ( a2 )
{
*(DWORD *)a1 = a4;
*(DWORD *)(a1 + 4) = a5;
*(DWORD *)(a1 + 8) = *(DWORD *)(a2 + 12);
*(DWORD *)(a1 + 12) = *(DWORD *)(a2 + 16);
}
if ( a3 >= (double)render_zmin )
{
v5 = (a3 - render_zmin) * render_zscaler;
if ( v5 <= render_zmax )
*(WORD *)(a1 + 26) = (signed __int64)v5;
else
*(WORD *)(a1 + 26) = -1;
}
else
{
*(WORD *)(a1 + 26) = 0;
}
}
}
// 10250B0: using guessed type float render_zscaler;
// 10250B8: using guessed type float render_zmax;
// 10250BC: using guessed type float render_zmin;

//----- (01013A6A) --------------------------------------------------------
void render_paint()
{
render_paint_balls();
gdrv_blat((int)&vscreen, xDest, yDest);
render_unpaint_balls();
}

//----- (01013A8F) --------------------------------------------------------
void render_shift(int a1, int a2, int xSrc, int a4, int DestWidth, int DestHeight)
{
render_offset_x += a1;
render_offset_y += a2;
render_paint_balls();
gdrv_blit(
(int)&vscreen,
xSrc,
a4,
xSrc + render_offset_x + xDest,
a4 + render_offset_y + yDest,
DestWidth,
DestHeight);
render_unpaint_balls();
}
// 10253AC: using guessed type int render_offset_x;
// 10253B0: using guessed type int render_offset_y;

