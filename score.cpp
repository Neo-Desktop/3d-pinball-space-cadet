#include "pinball.h"

//----- (0100C335) --------------------------------------------------------
int SpecialAddScore(int a1)
{
TPinballTable *v1; // ecx
int v2; // esi
int v3; // edi
int v4; // ebx
int result; // eax
TPinballTable *v6; // ecx

v1 = dword_1025040;
v2 = *(DWORD *)((char *)dword_1025040 + 318);
*(DWORD *)((char *)dword_1025040 + 318) = 0;
v3 = *(DWORD *)((char *)v1 + 310);
*(DWORD *)((char *)v1 + 310) = 0;
v4 = *(DWORD *)((char *)v1 + 294);
*(DWORD *)((char *)v1 + 294) = 0;
result = TPinballTable::AddScore(v1, a1);
v6 = dword_1025040;
*(DWORD *)((char *)dword_1025040 + 310) = v3;
*(DWORD *)((char *)v6 + 294) = v4;
*(DWORD *)((char *)v6 + 318) = v2;
return result;
}

//----- (0100E50B) --------------------------------------------------------
int AddRankProgress(int a1)
{
signed int v1; // ebx
int v2; // edi
void (__thiscall ***v3)(DWORD, signed int, DWORD); // esi
signed int v4; // edi
int v5; // eax
int (__thiscall ***v6)(DWORD, signed int, DWORD); // esi
int v7; // edi
CHAR *v8; // ST40_4
CHAR *v9; // eax
__int64 v10; // rax
int v11; // edx
signed __int64 v12; // rt2
char Dest; // [esp+50h] [ebp-44h]

v1 = 0;
(**(void (***)(signed int, DWORD))dword_10238F0)(19, 0.0);
v2 = a1;
v3 = (void (__thiscall ***)(DWORD, signed int, DWORD))dword_1023CFC;
if ( a1 > 0 )
{
do
{
(**v3)(v3, 41, 2.0);
--v2;
}
while ( v2 );
}
v4 = ((int (__thiscall *)(DWORD, signed int, DWORD))**v3)(v3, 37, 0.0);
v5 = ((int (__thiscall *)(DWORD, signed int, DWORD))**v3)(v3, 38, 0.0);
if ( v4 == v5 )
{
v1 = 1;
(**v3)(v3, 16, 5.0);
v6 = (int (__thiscall ***)(DWORD, signed int, DWORD))dword_1023CF4;
(**(void (***)(signed int, DWORD))dword_1023CF4)(34, 0.0);
v7 = (**v6)(v6, 37, 0.0);
if ( v7 < 9 )
{
(**v6)(v6, 41, 5.0);
v8 = get_rc_string(word_10246EC[2 * v7], 1);
v9 = get_rc_string(83, 0);
_sprintf(&Dest, v9, v8);
TTextBox::Display(tTextBox, 1, &Dest, 8.0);
(*(void (**)(void))(*(DWORD *)dword_1023D1C + 20))();
}
}
else
{
v10 = 3 * v5;
v12 = v10 % 4;
LODWORD(v10) = v10 / 4;
v11 = v12;
if ( v4 >= (signed int)v10 )
(**(void (__fastcall ***)(int, int, signed int, DWORD))dword_1023CF4)(dword_1023CF4, v11, 27, -1.0);
}
return v1;
}
// 10238F0: using guessed type int dword_10238F0;
// 1023CF4: using guessed type int dword_1023CF4;
// 1023CFC: using guessed type int dword_1023CFC;
// 1023D1C: using guessed type int dword_1023D1C;
// 10246EC: using guessed type int word_10246EC[];


//----- (01013BB3) --------------------------------------------------------
DWORD *score_create(LPCSTR lpString, int a2)
{
DWORD *v2; // esi
int *v3; // eax
int v5; // cx
signed int *v6; // eax
int v7; // edx
int v8; // edx
int v9; // ebx
int *v10; // edi
int v11; // [esp+10h] [ebp+Ch]

v2 = (DWORD *)memoryallocate(0x44u);
if ( !v2 )
return 0;
*v2 = -9999;
v2[2] = a2;
v3 = (int *)partman_field_labeled(loader_table, lpString, 10);
if ( !v3 )
{
memoryfree((int)v2);
return 0;
}
v5 = *v3;
v6 = v3 + 1;
v7 = *v6;
++v6;
v2[3] = v7;
v8 = *v6;
++v6;
v2[4] = v8;
v2[5] = *v6;
v2[6] = v6[1];
v9 = v5;
v10 = v2 + 7;
v11 = 10;
do
{
*v10 = partman_field(loader_table, v9, 1);
++v10;
++v9;
--v11;
}
while ( v11 );
return v2;
}

//----- (01013C48) --------------------------------------------------------
void *score_dup(const void *a1, int a2)
{
void *result; // eax

result = (void *)memoryallocate(0x44u);
if ( result )
qmemcpy(result, a1, 0x44u);
return result;
}


//----- (01013C89) --------------------------------------------------------
DWORD *score_set(DWORD *a1, int a2)
{
DWORD *result; // eax

result = a1;
if ( a1 )
{
*a1 = a2;
a1[1] = 1;
}
return result;
}

//----- (01013CAA) --------------------------------------------------------
void *score_erase(int a1, DWORD *a2, int a3)
{
DWORD *v3; // edx
void *result; // eax

if ( a2 )
{
v3 = (DWORD *)a2[2];
if ( v3 )
result = gdrv_copy_bitmap(&vscreen, a2[5], a2[6], a2[3], a2[4], v3, a2[3], a2[4]);
else
result = (void *)gdrv_fill_bitmap(a1, &vscreen, a2[5], a2[6], a2[3], a2[4], 0);
if ( a3 )
result = gdrv_blit((int)&vscreen, a2[3], a2[4], a2[3] + xDest, a2[4] + yDest, a2[5], a2[6]);
}
return result;
}

//----- (01013D2D) --------------------------------------------------------
HDC score_update(int a1, int *a2)
{
HDC result; // eax
int v3; // ecx
int v4; // edi
unsigned int v5; // kr00_4
int v6; // eax
char *v7; // eax
int v8; // [esp-24h] [ebp-40h]
int v9; // [esp-20h] [ebp-3Ch]
DWORD *v10; // [esp-14h] [ebp-30h]
int v11; // [esp+4h] [ebp-18h]
int v12; // [esp+8h] [ebp-14h]
char DstBuf[12]; // [esp+Ch] [ebp-10h]

result = 0;
if ( a2 && a2[1] && *a2 <= 1000000000 )
{
v3 = a2[4];
v4 = a2[5] + a2[3];
a2[1] = 0;
v11 = v3;
score_erase(a1, a2, 0);
if ( *a2 >= 0 )
{
__ltoa(*a2, DstBuf, 10);
v5 = strlen(DstBuf);
v6 = v5 - 1;
v12 = v5 - 1;
if ( (signed int)(v5 - 1) >= 0 )
{
while ( 1 )
{
v7 = &DstBuf[v6];
*v7 -= 48;
v10 = (DWORD *)a2[*v7 + 7];
v4 -= v10[3];
v9 = v10[4];
v8 = v10[3];
if ( render_background_bitmap )
gdrv_copy_bitmap_w_transparency(&vscreen, v8, v9, v4, v11, v10, 0, 0);
else
gdrv_copy_bitmap(&vscreen, v8, v9, v4, v11, v10, 0, 0);
if ( --v12 < 0 )
break;
v6 = v12;
}
}
}
result = gdrv_blit((int)&vscreen, a2[3], a2[4], a2[3] + xDest, a2[4] + yDest, a2[5], a2[6]);
}
return result;
}
// 1013D2D: using guessed type char DstBuf[12];

//----- (01013E25) --------------------------------------------------------
signed int score_init()
{
return 1;
}

//----- (01013E2E) --------------------------------------------------------
void score_unload_msg_font()
{
signed int v0; // esi

if ( score_msg_fontp )
{
v0 = 8;
do
{
if ( *(DWORD *)((char *)score_msg_fontp + v0) )
{
gdrv_destroy_bitmap(*(DWORD *)((char *)score_msg_fontp + v0));
memoryfree(*(DWORD *)((char *)score_msg_fontp + v0));
}
v0 += 4;
}
while ( v0 < 520 );
score_msg_fontp = 0;
}
}
// 10253C4: using guessed type struct score_msg_font_type *score_msg_fontp;

//----- (01013E73) --------------------------------------------------------
HRSRC score_load_msg_font(LPCSTR lpName)
{
HRSRC result; // eax
HRSRC v2; // esi
signed int *v3; // ebx
int v4; // edx
signed int v5; // esi
signed int v6; // ecx
char *v7; // eax
_BYTE *v8; // esi
int v9; // eax
unsigned int v10; // eax
const void *v11; // esi
DWORD *v12; // eax
int v13; // edx
char *v14; // eax
int v15; // esi
HRSRC hResData; // [esp+0h] [ebp-20h]
unsigned int v17; // [esp+4h] [ebp-1Ch]
char *i; // [esp+8h] [ebp-18h]
int v19; // [esp+Ch] [ebp-14h]
signed int v20; // [esp+10h] [ebp-10h]
char *v21; // [esp+14h] [ebp-Ch]
int v22; // [esp+18h] [ebp-8h]
int v23; // [esp+1Ch] [ebp-4h]
LPCSTR lpNamea; // [esp+28h] [ebp+8h]

result = FindResourceA(hinst, lpName, (LPCSTR)0xA);
if ( !result )
return result;
result = (HRSRC)LoadResource(hinst, result);
v2 = result;
hResData = result;
if ( !result )
return result;
v3 = (signed int *)LockResource(result);
v22 = (int)(v3 + 67);
v4 = memoryallocate(0x208u);
score_msg_fontp = (struct score_msg_font_type *)v4;
if ( !v4 )
return (HRSRC)FreeResource(v2);
v5 = 128;
memset((void *)(v4 + 8), 0, 0x200u);
v6 = 0;
v7 = (char *)(v3 + 3);
do
{
if ( *v7 > v6 )
v6 = *v7;
++v7;
--v5;
}
while ( v5 );
v19 = memoryallocate(v6 * v3[2] + 4);
if ( !v19 )
{
memoryfree((int)score_msg_fontp);
score_msg_fontp = 0;
return (HRSRC)FreeResource(hResData);
}
v23 = 0;
*(DWORD *)score_msg_fontp = *v3;
*((DWORD *)score_msg_fontp + 1) = v3[2];
lpNamea = (LPCSTR)8;
while ( 1 )
{
v8 = (char *)v3 + v23 + 6;
if ( *v8 )
break;
LABEL_16:
lpNamea += 4;
++v23;
if ( (signed int)lpNamea >= 520 )
goto LABEL_19;
}
*(DWORD *)((char *)score_msg_fontp + (DWORD)lpNamea) = memoryallocate(0x25u);
v9 = *(DWORD *)((char *)score_msg_fontp + (DWORD)lpNamea);
if ( !v9 )
goto LABEL_19;
if ( !gdrv_create_raw_bitmap(v9, (char)*v8, v3[2], 0) )
{
v10 = v3[2] * (char)*v8;
v11 = (const void *)v22;
v22 += ++v10;
qmemcpy((void *)(v19 + 3), v11, v10);
v20 = 0;
v17 = *((char *)v3 + v23 + 6);
v21 = (char *)(v19 + 4);
v12 = *(DWORD **)((char *)score_msg_fontp + (DWORD)lpNamea);
v13 = -v12[5];
v14 = (char *)(v12[2] - v13 * (v12[4] - 1));
for ( i = v14; v20 < v3[2]; i += v13 )
{
qmemcpy(v14, v21, v17);
++v20;
v21 += v17;
v14 = &i[v13];
}
goto LABEL_16;
}
v15 = 4 * v23 + 8;
memoryfree(*(DWORD *)((char *)score_msg_fontp + v15));
*(DWORD *)((char *)score_msg_fontp + v15) = 0;
LABEL_19:
if ( v23 != 128 )
score_unload_msg_font();
return (HRSRC)FreeResource(hResData);
}
// 10253C4: using guessed type struct score_msg_font_type *score_msg_fontp;
