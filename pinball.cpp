//
// Created by neo on 2019-08-15.
//

#include <windows.h>
#include <math.h>
#include <defs.h>
#include "pinball.h"

//----- (0101461A) --------------------------------------------------------
signed int __stdcall pb_mode_change(int a1)
{
int v1; // eax
int v2; // eax

switch ( a1 )
{
case 1:
if ( dword_1025570 )
{
options_menu_set(0x191u, 0);
options_menu_set(0x67u, 0);
options_menu_check(0x194u, 1);
if ( MainTable )
{
v2 = *(_DWORD *)((char *)MainTable + 230);
if ( v2 )
*(_BYTE *)(v2 + 5) = 1;
}
}
else
{
options_menu_set(0x67u, 1);
options_menu_set(0x191u, 1);
options_menu_check(0x194u, 0);
if ( MainTable )
{
v1 = *(_DWORD *)((char *)MainTable + 230);
if ( v1 )
*(_BYTE *)(v1 + 5) = 0;
}
}
break;
case 2:
options_menu_set(0x191u, 0);
if ( !dword_1025570 )
{
options_menu_set(0x67u, 1);
options_menu_check(0x194u, 0);
}
if ( MainTable && *(_DWORD *)((char *)MainTable + 266) )
(***(void (__thiscall ****)(_DWORD, signed int, _DWORD))((char *)MainTable + 266))(
*(_DWORD *)((char *)MainTable + 266),
29,
1.4);
break;
case 3:
case 4:
options_menu_set(0x191u, 0);
options_menu_set(0x67u, 0);
dword_1025574 = 5000;
break;
}
dword_1025568 = a1;
return 1;
}
// 1025568: using guessed type int dword_1025568;
// 1025570: using guessed type int dword_1025570;
// 1025574: using guessed type int dword_1025574;

//----- (01014743) --------------------------------------------------------
signed int __stdcall pb_mode_countdown(int a1)
{
if ( !dword_1025568 || dword_1025568 <= 0 )
return 1;
if ( dword_1025568 > 2 )
{
if ( dword_1025568 == 3 )
{
dword_1025574 -= a1;
if ( dword_1025574 < 0 || a1 < 0 )
pb_mode_change(4);
}
else if ( dword_1025568 == 4 )
{
dword_1025574 -= a1;
if ( dword_1025574 < 0 || a1 < 0 )
pb_mode_change(1);
}
return 1;
}
return 0;
}
// 1025568: using guessed type int dword_1025568;
// 1025574: using guessed type int dword_1025574;

//----- (0101479B) --------------------------------------------------------
int __stdcall pb_end_game()
{
struct TPinballTable *v0; // edx
int v1; // esi
int v2; // eax
int **v3; // ecx
int v4; // eax
int *v5; // esi
int v6; // eax
int *v7; // ecx
int v8; // edi
int *v9; // ecx
int *v10; // eax
int v11; // edx
int result; // eax
int v13; // edi
int v14; // ebx
CHAR *v15; // eax
int v16[4]; // [esp+Ch] [ebp-F8h]
int v17[4]; // [esp+1Ch] [ebp-E8h]
int v18; // [esp+2Ch] [ebp-D8h]
int v19; // [esp+30h] [ebp-D4h]
int i; // [esp+34h] [ebp-D0h]
CHAR String1; // [esp+38h] [ebp-CCh]

pb_mode_change(2);
v0 = MainTable;
v2 = 0;
v18 = *(_DWORD *)((char *)MainTable + 214);
v1 = v18;
if ( v18 > 0 )
{
v3 = (int **)((char *)MainTable + 102);
do
{
v16[v2] = **v3;
v17[v2] = v2;
++v2;
v3 += 7;
}
while ( v2 < v1 );
}
v4 = 0;
for ( i = 0; i < v1; ++i )
{
v19 = v4;
if ( v4 < v1 )
{
v5 = &v16[v4];
do
{
v6 = v19;
v7 = &v16[v19];
v8 = *v7;
if ( *v7 > (unsigned int)*v5 )
{
*v7 = *v5;
v9 = &v17[i];
v10 = &v17[v6];
v11 = *v10;
*v5 = v8;
*v10 = *v9;
*v9 = v11;
v0 = MainTable;
}
++v19;
}
while ( v19 < v18 );
v1 = v18;
}
v4 = i + 1;
}
result = 0;
if ( !dword_1025570 && !*(_DWORD *)((char *)v0 + 62) )
{
i = 0;
if ( v1 > 0 )
{
do
{
v13 = v16[i];
v14 = high_score_get_score_position((int)byte_1025578, v16[i]);
if ( v14 >= 0 )
{
v15 = get_rc_string(LOWORD(v17[i]) + 26, 0);
lstrcpyA(&String1, v15);
show_and_set_high_score_dialog(byte_1025578, v13, v14, &String1);
}
result = ++i;
}
while ( i < v18 );
}
}
return result;
}
// 1025570: using guessed type int dword_1025570;
// 101479B: using guessed type int var_F8[4];
// 101479B: using guessed type int var_E8[4];

//----- (01014908) --------------------------------------------------------
signed int __stdcall pb_chk_highscore()
{
int v0; // esi
int v1; // edi

if ( dword_1025570 )
return 0;
v0 = *(_DWORD *)((char *)MainTable + 214) - 1;
if ( v0 < 0 )
return 0;
v1 = 28 * v0;
while ( high_score_get_score_position((int)byte_1025578, **(_DWORD **)((char *)MainTable + v1 + 102)) < 0 )
{
--v0;
v1 -= 28;
if ( v0 < 0 )
return 0;
}
return 1;
}
// 1025570: using guessed type int dword_1025570;

//----- (01014956) --------------------------------------------------------
long double __stdcall pb_collide(struct TEdgeSegment *a1, float a2, struct TBall *a3)
{
struct TBall *v3; // ebx
double v4; // st7
float v5; // eax
double v6; // st6
double v7; // st5
int v8; // eax
double v9; // st7
double v11; // st7
struct vector_type *v12; // ST0C_4
int v13; // [esp+8h] [ebp-40h]
int v14; // [esp+Ch] [ebp-3Ch]
int v15; // [esp+10h] [ebp-38h]
int v16; // [esp+14h] [ebp-34h]
int v17; // [esp+18h] [ebp-30h]
int v18; // [esp+1Ch] [ebp-2Ch]
float v19; // [esp+20h] [ebp-28h]
int v20; // [esp+24h] [ebp-24h]
float v21; // [esp+28h] [ebp-20h]
float v22; // [esp+2Ch] [ebp-1Ch]
int v23; // [esp+30h] [ebp-18h]
float v24; // [esp+34h] [ebp-14h]
float v25; // [esp+38h] [ebp-10h]
float v26; // [esp+3Ch] [ebp-Ch]
struct vector_type *v27; // [esp+40h] [ebp-8h]
float v28; // [esp+44h] [ebp-4h]

v3 = a3;
if ( *((_BYTE *)a3 + 5) && !*(_DWORD *)((char *)a3 + 106) )
{
if ( ball_speed_limit < (double)*(float *)((char *)a3 + 66) )
*(float *)((char *)a3 + 66) = ball_speed_limit;
v4 = a2;
v5 = *(float *)((char *)v3 + 66);
*(float *)((char *)v3 + 74) = a2;
v6 = v4 * *(float *)((char *)v3 + 66);
v27 = (struct TBall *)((char *)v3 + 42);
v13 = *(_DWORD *)((char *)v3 + 42);
*(float *)((char *)v3 + 70) = v6;
v7 = *(float *)&a1;
v14 = *(_DWORD *)((char *)v3 + 46);
*(float *)((char *)v3 + 78) = *(float *)&a1;
v15 = *(_DWORD *)((char *)v3 + 50);
v16 = *(_DWORD *)((char *)v3 + 54);
v17 = *(_DWORD *)((char *)v3 + 58);
v28 = v5;
v8 = *(_DWORD *)((char *)v3 + 110);
v18 = *(_DWORD *)((char *)v3 + 62);
v19 = v6;
v23 = v8;
v21 = v7;
v22 = v4;
v20 = 990057071;
v9 = TEdgeManager::FindCollisionDistance(edge_manager, (struct ray_type *)&v13, v3, &a1);
*(_DWORD *)((char *)v3 + 134) = 0;
*(float *)&a3 = v9;
if ( *(float *)&a3 >= 1000000000.0 )
{
v11 = a2 * *(float *)((char *)v3 + 66);
v12 = v27;
*(float *)((char *)v3 + 70) = v11;
v24 = v11 * *(float *)((char *)v3 + 54);
v25 = v11 * *(float *)((char *)v3 + 58);
v26 = 0.0;
vector_add(v12, (struct vector_type *)&v24);
}
else
{
(**(void (__stdcall ***)(struct TBall *, struct TBall *))a1)(v3, a3);
if ( v28 > 0.000000001 )
return fabs(*(float *)&a3 / v28);
}
}
return a2;
}
// 10253D0: using guessed type float ball_speed_limit;

//----- (01014A68) --------------------------------------------------------
void __stdcall pb_timed_frame(float a1, float a2, int a3)
{
int v3; // eax
int v4; // edi
int v5; // ebx
int v6; // esi
bool v7; // zf
int v8; // ecx
double v9; // st7
double v10; // st7
double v11; // st7
long double v12; // st7
int v13; // esi
char v14; // [esp+18h] [ebp-2Ch]
float v15; // [esp+24h] [ebp-20h]
float v16; // [esp+28h] [ebp-1Ch]
float v17; // [esp+2Ch] [ebp-18h]
int v18; // [esp+30h] [ebp-14h]
int v19; // [esp+34h] [ebp-10h]
int v20; // [esp+38h] [ebp-Ch]
float v21; // [esp+3Ch] [ebp-8h]
float v22; // [esp+40h] [ebp-4h]

v3 = *(_DWORD *)((char *)MainTable + 262);
v18 = *(_DWORD *)(v3 + 4);
v4 = v18;
v5 = v3 + 8;
if ( v18 > 0 )
{
v19 = v18;
do
{
v6 = *(_DWORD *)v5;
v7 = *(_BYTE *)(*(_DWORD *)v5 + 5) == 0;
v22 = a2;
if ( !v7 )
{
v8 = *(_DWORD *)(v6 + 106);
if ( v8 )
{
*(float *)(v6 + 74) = a2;
(*(void (__stdcall **)(int, char *))(*(_DWORD *)v8 + 24))(v6, &v14);
}
else
{
if ( *((_BYTE *)MainTable + 5) )
{
v15 = 0.0;
v16 = 0.0;
v17 = 0.0;
TEdgeManager::FieldEffects(edge_manager, (struct TBall *)v6, (struct vector_type *)&v15);
v15 = v15 * a2;
v16 = v16 * a2;
*(float *)(v6 + 54) = *(float *)(v6 + 66) * *(float *)(v6 + 54);
*(float *)(v6 + 58) = *(float *)(v6 + 66) * *(float *)(v6 + 58);
vector_add((struct vector_type *)(v6 + 54), (struct vector_type *)&v15);
*(float *)(v6 + 66) = normalize_2d((float *)(v6 + 54));
if ( 0.0 == *(float *)(v6 + 54) )
v9 = 1000000000.0;
else
v9 = 1.0 / *(float *)(v6 + 54);
*(float *)(v6 + 82) = v9;
if ( 0.0 == *(float *)(v6 + 58) )
v10 = 1000000000.0;
else
v10 = 1.0 / *(float *)(v6 + 58);
v4 = v18;
*(float *)(v6 + 86) = v10;
}
v11 = a2;
v21 = a1;
v20 = 10;
while ( v11 > 0.000001 && v20 )
{
v12 = pb_collide((struct TEdgeSegment *)LODWORD(v21), v22, (struct TBall *)v6);
--v20;
v22 = v22 - v12;
v21 = v12 + v21;
v11 = v22;
}
}
}
v5 += 4;
--v19;
}
while ( v19 );
}
if ( a3 )
{
v13 = *(_DWORD *)((char *)MainTable + 262) + 8;
if ( v4 > 0 )
{
do
{
if ( *(_BYTE *)(*(_DWORD *)v13 + 5) )
(*(void (**)(void))(**(_DWORD **)v13 + 20))();
v13 += 4;
--v4;
}
while ( v4 );
}
}
}

//----- (01014BF9) --------------------------------------------------------
signed int __userpurge pb_frame@<eax>(int a1@<ebx>, int a2)
{
double v2; // st7
char *v3; // eax
float v5; // [esp+10h] [ebp-4h]

if ( a2 > 100 )
a2 = 100;
v5 = (double)a2 * 0.001;
if ( !pb_mode_countdown(a2) )
{
time_next = time_now + v5;
pb_timed_frame(time_now, v5, 1);
time_now = time_next;
time_ticks += a2;
if ( nudged_left || nudged_right || nudged_up )
{
nudge_count = v5 * 4.0 + nudge_count;
}
else
{
v2 = nudge_count - v5;
if ( v2 <= 0.0 )
v2 = 0.0;
nudge_count = v2;
}
timer_check();
render_update();
score_update(a1, *(int **)((char *)MainTable + 50));
if ( !*(_DWORD *)((char *)MainTable + 370) )
{
if ( nudge_count > 0.5 )
{
v3 = get_rc_string(25, 0);
TTextBox::Display(InfoTextBox, a1, v3, 2.0);
}
if ( nudge_count > 1.0 )
TPinballTable::tilt(MainTable, a1, time_now);
}
}
return 1;
}
// 1024F84: using guessed type int time_ticks;
// 1025630: using guessed type float time_now;
// 1025634: using guessed type float time_next;
// 102563C: using guessed type int nudged_left;
// 1025640: using guessed type int nudged_right;
// 1025644: using guessed type int nudged_up;
// 102564C: using guessed type float nudge_count;

//----- (01014D3D) --------------------------------------------------------
void __stdcall pb_firsttime_setup()
{
render_blit = 0;
render_update();
render_blit = 1;
}
// 1024754: using guessed type int render_blit;

//----- (01014D59) --------------------------------------------------------
struct TPinballTable *__usercall pb_tilt_no_more@<eax>(int a1@<ebx>)
{
struct TPinballTable *result; // eax

if ( *(_DWORD *)((char *)MainTable + 370) )
TTextBox::Clear(InfoTextBox, a1);
result = MainTable;
*(_DWORD *)((char *)MainTable + 370) = 0;
nudge_count = -2.0;
return result;
}
// 102564C: using guessed type float nudge_count;

//----- (01014D8E) --------------------------------------------------------
void __stdcall pb_ballset(signed int a1, signed int a2)
{
int v2; // esi

v2 = *(_DWORD *)(*(_DWORD *)((char *)MainTable + 262) + 8);
*(float *)(v2 + 54) = (double)a1 * 30.0;
*(float *)(v2 + 58) = (double)a2 * 30.0;
*(float *)(v2 + 66) = normalize_2d((float *)(v2 + 54));
}

//----- (01014DCF) --------------------------------------------------------
void __stdcall nudge(float a1, float a2)
{
struct TPinballTable *v2; // eax
int v3; // ecx
int v4; // edx
int v5; // ebx
int v6; // esi
double v7; // st7
double v8; // st7
int v9; // ST18_4
int v10; // ST14_4
int v11; // ST08_4
double v12; // st7
float v13; // [esp+20h] [ebp-10h]
float v14; // [esp+24h] [ebp-Ch]
int v15; // [esp+2Ch] [ebp-4h]

v2 = MainTable;
v3 = *(_DWORD *)((char *)MainTable + 262);
v4 = *(_DWORD *)(v3 + 4);
v13 = a1 * 0.5;
v5 = v3 + 8;
v14 = a2 * 0.5;
if ( v4 > 0 )
{
v15 = v4;
do
{
v6 = *(_DWORD *)v5;
if ( *(_BYTE *)(*(_DWORD *)v5 + 5) && !*(_DWORD *)(v6 + 106) )
{
*(float *)(v6 + 54) = *(float *)(v6 + 54) * *(float *)(v6 + 66);
*(float *)(v6 + 58) = *(float *)(v6 + 58) * *(float *)(v6 + 66);
vector_add((struct vector_type *)(v6 + 54), (struct vector_type *)&v13);
*(float *)(v6 + 66) = normalize_2d((float *)(v6 + 54));
if ( 0.0 == *(float *)(v6 + 54) )
v7 = 1000000000.0;
else
v7 = 1.0 / *(float *)(v6 + 54);
*(float *)(v6 + 82) = v7;
if ( 0.0 == *(float *)(v6 + 58) )
v8 = 1000000000.0;
else
v8 = 1.0 / *(float *)(v6 + 58);
*(float *)(v6 + 86) = v8;
v2 = MainTable;
}
v5 += 4;
--v15;
}
while ( v15 );
}
v9 = *(_DWORD *)((char *)v2 + 246);
v10 = *(_DWORD *)((char *)v2 + 242);
v11 = (signed __int64)_floor(0.5 - a2);
v12 = _floor(a1 + 0.5);
render_shift((signed __int64)v12, v11, 0, 0, v10, v9);
}

//----- (01014EEE) --------------------------------------------------------
void __stdcall un_nudge_left(int a1, void *a2)
{
if ( nudged_left )
nudge(2.0, -1.0);
nudged_left = 0;
}
// 102563C: using guessed type int nudged_left;

//----- (01014F20) --------------------------------------------------------
void __stdcall un_nudge_right(int a1, void *a2)
{
if ( nudged_right )
nudge(-2.0, -1.0);
nudged_right = 0;
}
// 1025640: using guessed type int nudged_right;

//----- (01014F52) --------------------------------------------------------
void __stdcall nudge_left()
{
nudge(-2.0, 1.0);
if ( nudge_timer )
timer_kill(nudge_timer);
nudge_timer = timer_set(0.40000001, 0, (int)un_nudge_left);
nudged_left = 1;
}
// 102563C: using guessed type int nudged_left;
// 1025648: using guessed type int nudge_timer;

//----- (01014FA4) --------------------------------------------------------
void __stdcall nudge_right()
{
nudge(2.0, 1.0);
if ( nudge_timer )
timer_kill(nudge_timer);
nudge_timer = timer_set(0.40000001, 0, (int)un_nudge_right);
nudged_right = 1;
}
// 1025640: using guessed type int nudged_right;
// 1025648: using guessed type int nudge_timer;

//----- (01014FF6) --------------------------------------------------------
void __stdcall un_nudge_up(int a1, void *a2)
{
if ( nudged_up )
nudge(0.0, -1.0);
nudged_up = 0;
}
// 1025644: using guessed type int nudged_up;

//----- (01015024) --------------------------------------------------------
void __stdcall nudge_up()
{
nudge(0.0, 1.0);
if ( nudge_timer )
timer_kill(nudge_timer);
nudge_timer = timer_set(0.40000001, 0, (int)un_nudge_up);
nudged_up = 1;
}
// 1025644: using guessed type int nudged_up;
// 1025648: using guessed type int nudge_timer;

//----- (01015072) --------------------------------------------------------
void __stdcall pb_keydown(HKEY a1)
{
CHAR *v1; // eax
int v2; // eax
int v3; // edx
int v4; // esi
int v5; // ecx
TBall *v6; // eax
TBall *v7; // eax
int v8; // ecx
CHAR String1; // [esp+Ch] [ebp-E0h]
char Dest; // [esp+D4h] [ebp-18h]

if ( single_step || dword_1025570 )
return;
if ( dword_1025568 != 1 )
{
pb_mode_countdown(-1);
return;
}
pbctrl_bdoor_controller(0, (int)a1);
if ( a1 == dword_1028238 )
{
(**(void (__stdcall ***)(signed int, _DWORD))MainTable)(1000, LODWORD(time_now));
return;
}
if ( a1 == dword_102823C )
{
(**(void (__stdcall ***)(signed int, _DWORD))MainTable)(1002, LODWORD(time_now));
}
else
{
if ( a1 == dword_1028240 )
{
(**(void (__stdcall ***)(signed int, _DWORD))MainTable)(1004, LODWORD(time_now));
return;
}
if ( a1 == dword_1028244 )
{
if ( !*(_DWORD *)((char *)MainTable + 370) )
nudge_right();
return;
}
if ( a1 == dword_1028248 )
{
if ( !*(_DWORD *)((char *)MainTable + 370) )
nudge_left();
return;
}
if ( a1 == dword_102824C )
{
if ( !*(_DWORD *)((char *)MainTable + 370) )
nudge_up();
return;
}
}
if ( cheat_mode )
{
if ( a1 == (HKEY)66 )
{
v2 = *(_DWORD *)((char *)MainTable + 262);
v3 = *(_DWORD *)(v2 + 4);
v4 = 0;
v5 = v2 + 8;
if ( v3 <= 0 )
{
LABEL_36:
v7 = (TBall *)TPinballComponent::operator new(0x16Au);
if ( v7 )
v6 = TBall::TBall(v7, MainTable);
else
v6 = 0;
}
else
{
while ( 1 )
{
v6 = *(TBall **)v5;
if ( !*(_BYTE *)(*(_DWORD *)v5 + 5) )
break;
++v4;
v5 += 4;
if ( v4 >= v3 )
goto LABEL_36;
}
}
v8 = *(_DWORD *)((char *)v6 + 154);
*(float *)((char *)v6 + 42) = 1.0;
*((_BYTE *)v6 + 5) = 1;
*(_DWORD *)((char *)v6 + 50) = v8;
*(float *)((char *)v6 + 46) = 1.0;
*(float *)((char *)v6 + 62) = 0.0;
*(float *)((char *)v6 + 58) = 0.0;
*(float *)((char *)v6 + 54) = 0.0;
}
else if ( a1 == (HKEY)72 )
{
v1 = get_rc_string(26, 0);
lstrcpyA(&String1, v1);
show_and_set_high_score_dialog(byte_1025578, 1000000000, 1, &String1);
}
else if ( a1 == (HKEY)77 )
{
_sprintf(&Dest, "%ld", memory_use_total);
MessageBoxA(hwnd_frame, &Dest, "Mem:", 0x2000u);
}
else if ( a1 == (HKEY)82 )
{
cheat_bump_rank(0);
}
else if ( a1 == (HKEY)122 )
{
gdrv_get_focus();
}
else if ( (HKEY)((char *)a1 - 122) == (HKEY)1 )
{
(*(void (**)(void))(*(_DWORD *)MainTable + 4))();
}
}
}
// 1024F00: using guessed type int memory_use_total;
// 1024FD8: using guessed type int single_step;
// 1024FF8: using guessed type int cheat_mode;
// 1025568: using guessed type int dword_1025568;
// 1025570: using guessed type int dword_1025570;
// 1025630: using guessed type float time_now;

//----- (010152E4) --------------------------------------------------------
void __stdcall pb_keyup(HKEY a1)
{
if ( dword_1025568 == 1 && !single_step && !dword_1025570 )
{
if ( a1 == dword_1028238 )
{
(**(void (__stdcall ***)(signed int, _DWORD))MainTable)(1001, LODWORD(time_now));
}
else if ( a1 == dword_102823C )
{
(**(void (__stdcall ***)(signed int, _DWORD))MainTable)(1003, LODWORD(time_now));
}
else if ( a1 == dword_1028240 )
{
(**(void (__stdcall ***)(signed int, _DWORD))MainTable)(1005, LODWORD(time_now));
}
else if ( a1 == dword_1028244 )
{
un_nudge_right(0, 0);
}
else if ( a1 == dword_1028248 )
{
un_nudge_left(0, 0);
}
else if ( a1 == dword_102824C )
{
un_nudge_up(0, 0);
}
}
}
// 1024FD8: using guessed type int single_step;
// 1025568: using guessed type int dword_1025568;
// 1025570: using guessed type int dword_1025570;
// 1025630: using guessed type float time_now;

//----- (010153AE) --------------------------------------------------------
int __stdcall pb_replay_level(int a1)
{
float v1; // ST04_4

dword_1025570 = a1;
pb_mode_change(1);
if ( phkResult )
midi_play_pb_theme(0);
v1 = (double)(signed int)dword_1028234;
return (**(int (__stdcall ***)(signed int, _DWORD))MainTable)(1014, LODWORD(v1));
}
// 1025570: using guessed type int dword_1025570;

//----- (010153F4) --------------------------------------------------------
INT_PTR __stdcall pb_high_scores()
{
return show_high_score_dialog(byte_1025578);
}

//----- (01015404) --------------------------------------------------------
_DWORD *__stdcall pb_window_size(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // eax

*a1 = 600;
result = a2;
*a2 = 416;
return result;
}

//----- (01015424) --------------------------------------------------------
int __stdcall pb_init()
{
int result; // eax
int v1; // eax
signed __int16 *v2; // ebx
_DWORD *v3; // edi
_DWORD *v4; // esi
char *v5; // eax
signed int v6; // ecx
double v7; // st7
double v8; // st5
int v9; // ST1C_4
int v10; // ST18_4
int v11; // ST14_4
int *v12; // esi
TPinballTable *v13; // eax
double v14; // st7
char v15; // [esp+1Ch] [ebp-294h]
float v16; // [esp+4Ch] [ebp-264h]
float v17; // [esp+50h] [ebp-260h]
CHAR String1; // [esp+54h] [ebp-25Ch]
CHAR Filename; // [esp+180h] [ebp-130h]

++memory_critical_allocation;
lstrcpyA(&String1, byte_102543C);
make_path_name(&Filename, &String1, 0x12Cu);
v17 = 0.0;
pb_record_table = (int)partman_load_records(&Filename);
get_rc_int(158, (int *)&v17);
if ( v17 != 0.0 )
score_load_msg_font("pbmsg_ft");
if ( !pb_record_table )
return pb_record_table + 1;
v1 = partman_field_labeled(pb_record_table, "background", 5);
gdrv_display_palette(v1);
v2 = (signed __int16 *)partman_field_labeled(pb_record_table, "table_size", 10);
v3 = (_DWORD *)partman_field_labeled(pb_record_table, "background", 1);
v4 = (_DWORD *)partman_field_labeled(pb_record_table, "camera_info", 11);
if ( v4 )
{
v5 = &v15;
LODWORD(v17) = 3;
do
{
v6 = 4;
do
{
*(_DWORD *)v5 = *v4;
++v4;
v5 += 4;
--v6;
}
while ( v6 );
--LODWORD(v17);
}
while ( v17 != 0.0 );
v7 = *(float *)v4;
LODWORD(v17) = v2[1];
v8 = (double)SLODWORD(v17);
LODWORD(v17) = *v2;
*(float *)&v9 = v8 * 0.5;
*(float *)&v10 = 0.5 * (double)SLODWORD(v17);
*(float *)&v11 = v7;
proj_init((int)&v15, v11, v10, v9);
v12 = v4 + 1;
v16 = *(float *)v12;
v17 = *((float *)v12 + 1);
}
render_init(0, v16, v17, *v2, v2[1]);
gdrv_copy_bitmap(&vscreen, v3[3], v3[4], *(_DWORD *)((char *)v3 + 29), *(_DWORD *)((char *)v3 + 33), v3, 0, 0);
gdrv_destroy_bitmap((int)v3);
loader_loadfrom((_WORD *)pb_record_table);
if ( play_midi_music )
pb_mode_change(1);
else
pb_mode_change(3);
time_ticks = 0;
timer_init(150);
score_init();
v13 = (TPinballTable *)TPinballComponent::operator new(0x176u);
if ( v13 )
MainTable = TPinballTable::TPinballTable(v13);
else
MainTable = 0;
high_score_read((int)byte_1025578, (int)&pb_state);
v14 = *(float *)(*(_DWORD *)(*(_DWORD *)((char *)MainTable + 262) + 8) + 154);
--memory_critical_allocation;
result = 0;
ball_speed_limit = v14 * 200.0;
return result;
}
// 1024F04: using guessed type int memory_critical_allocation;
// 1024F84: using guessed type int time_ticks;
// 10253D0: using guessed type float ball_speed_limit;
// 102556C: using guessed type int play_midi_music;

//----- (0101566E) --------------------------------------------------------
int __stdcall pb_uninit()
{
score_unload_msg_font();
loader_unload();
partman_unload_records((_WORD *)pb_record_table);
high_score_write(byte_1025578, (int)&pb_state);
if ( MainTable )
(*(void (__stdcall **)(signed int))(*(_DWORD *)MainTable + 16))(1);
MainTable = 0;
gdrv_get_focus();
timer_uninit();
render_uninit();
return 0;
}

//----- (010156C1) --------------------------------------------------------
int __stdcall pb_loose_focus()
{
int result; // eax

if ( MainTable )
result = (**(int (__stdcall ***)(signed int, _DWORD))MainTable)(1010, LODWORD(time_now));
return result;
}
// 1025630: using guessed type float time_now;

//----- (010156E4) --------------------------------------------------------
void __usercall pb_pause_continue(int a1@<ebx>)
{
char *v1; // eax
char *v2; // eax
float v3; // [esp+8h] [ebp-8h]

single_step = single_step == 0;
TTextBox::Clear(InfoTextBox, a1);
TTextBox::Clear(MissTextBox, a1);
if ( single_step )
{
if ( MainTable )
(**(void (__stdcall ***)(signed int, _DWORD))MainTable)(1008, LODWORD(time_now));
v1 = get_rc_string(22, 0);
TTextBox::Display(InfoTextBox, a1, v1, -1.0);
midi_music_stop();
}
else
{
if ( MainTable )
(**(void (__stdcall ***)(signed int, _DWORD))MainTable)(1009, 0.0);
if ( !dword_1025570 )
{
if ( dword_1025568 == 2 )
{
v3 = -1.0;
v2 = get_rc_string(24, 0);
}
else
{
v3 = 5.0;
v2 = get_rc_string(23, 0);
}
TTextBox::Display(InfoTextBox, a1, v2, v3);
}
if ( phkResult && !single_step )
midi_play_pb_theme(0);
}
}
// 1024FD8: using guessed type int single_step;
// 1025568: using guessed type int dword_1025568;
// 1025570: using guessed type int dword_1025570;
// 1025630: using guessed type float time_now;

//----- (010157C3) --------------------------------------------------------
int __stdcall pb_launch_ball()
{
return (***(int (__stdcall ****)(signed int, _DWORD))((char *)MainTable + 222))(1017, 0.0);
}

//----- (010157E3) --------------------------------------------------------
int __stdcall pb_reset_table()
{
int result; // eax

if ( MainTable )
result = (**(int (__stdcall ***)(signed int, _DWORD))MainTable)(1024, 0.0);
return result;
}

//----- (01015802) --------------------------------------------------------
void __usercall pb_toggle_demo(int a1@<ebx>)
{
char *v1; // eax

if ( dword_1025570 )
{
dword_1025570 = 0;
(**(void (__stdcall ***)(signed int, _DWORD))MainTable)(1024, 0.0);
pb_mode_change(2);
TTextBox::Clear(MissTextBox, a1);
v1 = get_rc_string(24, 0);
TTextBox::Display(InfoTextBox, a1, v1, -1.0);
}
else
{
pb_replay_level(1);
}
}
// 1025570: using guessed type int dword_1025570;

//----- (010211D0) --------------------------------------------------------
int __stdcall check_expiration_date()
{
return 0;
}

// ALL OK, 648 function(s) have been successfully decompiled

