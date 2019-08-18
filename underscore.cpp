//
// Created by neo on 2019-08-15.
//

#include "pinball.h"

//----- (01003445) --------------------------------------------------------
HDC _GetDC(HWND hWnd)
{
    HDC v1; // eax
    HDC v2; // esi

    v1 = GetDC(hWnd);
    v2 = v1;
    if ( hWnd && GetLayout(v1) & 1 )
        SetLayout(v2, 0);
    return v2;
}

//----- (0100347C) --------------------------------------------------------
HDC _BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
{
    HDC v2; // eax
    HDC v3; // esi

    v2 = BeginPaint(hWnd, lpPaint);
    v3 = v2;
    if ( hWnd && GetLayout(v2) & 1 )
        SetLayout(v3, 0);
    return v3;
}

//----- (01006498) --------------------------------------------------------
char _lread_char(HFILE hFile)
{
    char Buffer; // [esp+1h] [ebp-1h]

    Buffer = 0;
    _lread(hFile, &Buffer, 1u);
    return Buffer;
}

//----- (010064BD) --------------------------------------------------------
int _lread_long(HFILE hFile)
{
    int Buffer; // [esp+0h] [ebp-4h]

    Buffer = 0;
    _lread(hFile, &Buffer, 4u);
    return Buffer;
}


//----- (01003752) --------------------------------------------------------
CHAR *get_rc_string(int a1, int a2)
{
    CHAR *v2; // esi

    v2 = &byte_10248A8[256 * rc_string_slot];
    if ( !LoadStringA(hinst, a1, &byte_10248A8[256 * rc_string_slot], 255) )
        *v2 = 0;
    if ( ++rc_string_slot >= 6 )
        rc_string_slot = 0;
    return v2;
}
// 1024EA8: using guessed type int rc_string_slot;

//----- (010037A6) --------------------------------------------------------
int get_rc_int(int a1, int *a2)
{
    int result; // eax
    CHAR Buffer; // [esp+4h] [ebp-104h]

    result = LoadStringA(hinst, a1, &Buffer, 255);
    if ( result )
    {
        *a2 = _atoi(&Buffer);
        result = 1;
    }
    return result;
}

//----- (01012F2A) --------------------------------------------------------
void build_occlude_list()
{
struct render_sprite_type_struct *v0; // esi
signed int v1; // edi
struct render_sprite_type_struct *v2; // ebx
int v3; // [esp+4h] [ebp-14h]
struct render_sprite_type_struct **v4; // [esp+8h] [ebp-10h]
int i; // [esp+Ch] [ebp-Ch]
struct render_sprite_type_struct **v6; // [esp+10h] [ebp-8h]
int v7; // [esp+14h] [ebp-4h]

++memory_critical_allocation;
v7 = 0;
v4 = render_sprite_list;
v3 = 0;
if ( render_many_sprites > 0 )
{
do
{
v0 = *v4;
if ( *((DWORD *)*v4 + 17) )
{
memoryfree(*((DWORD *)*v4 + 17));
*((DWORD *)v0 + 17) = 0;
*((DWORD *)v0 + 18) = 0;
}
if ( !*((_BYTE *)v0 + 24) && *((DWORD *)v0 + 21) != -1 )
{
if ( !v7 )
v7 = memoryallocate(0xFA0u);
v1 = 0;
v6 = render_sprite_list;
for ( i = 0; i < render_many_sprites; ++v6 )
{
v2 = *v6;
if ( !*((_BYTE *)*v6 + 24)
&& *((DWORD *)v2 + 21) != -1
&& rectangle_clip((int *)v0 + 19, (int *)v2 + 19, 0)
&& v7 )
{
*(DWORD *)(v7 + 4 * v1++) = v2;
}
++i;
}
if ( !*((_BYTE *)v0 + 24) && *((DWORD *)v0 + 4) && v1 < 2 )
v1 = 0;
if ( v1 )
{
*((DWORD *)v0 + 17) = memoryrealloc(v7, 4 * v1);
*((DWORD *)v0 + 18) = v1;
v7 = 0;
}
}
++v3;
++v4;
}
while ( v3 < render_many_sprites );
if ( v7 )
memoryfree(v7);
}
--memory_critical_allocation;
}
// 1024F04: using guessed type int memory_critical_allocation;
// 1025084: using guessed type struct render_sprite_type_struct **render_sprite_list;
// 10250B4: using guessed type int render_many_sprites;

//----- (010211B9) --------------------------------------------------------
unsigned int _setdefaultprecision()
{
return _controlfp(0x10000u, 0x30000u);
}
