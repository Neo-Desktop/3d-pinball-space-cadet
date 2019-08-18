//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (01003803) --------------------------------------------------------
int grtext_draw_ttext_in_box(LPCSTR lpString, int mode, int a3, COLORREF color, int a5, int a6)
{
    HDC v6; // ebx
    CHAR *v7; // eax
    unsigned int v8; // ax
    int v9; // eax
    struct tagRECT rc; // [esp+Ch] [ebp-10h]
    int modea; // [esp+28h] [ebp+Ch]
    COLORREF colora; // [esp+30h] [ebp+14h]

    v6 = _GetDC(gdrv_hwnd);
    rc.left = mode;
    rc.right = color + mode;
    rc.top = a3;
    rc.bottom = a5 + a3;
    if ( grtext_red < 0 )
    {
        grtext_blue = 255;
        grtext_green = 255;
        grtext_red = 255;
        v7 = get_rc_string(189, 0);
        if ( v7 )
            _sscanf(v7, "%d %d %d", &grtext_red, &grtext_green, &grtext_blue);
    }
    modea = SetBkMode(v6, 1);
    HIBYTE(v8) = grtext_blue;
    LOBYTE(v8) = grtext_green;
    colora = SetTextColor(v6, (unsigned __int8)grtext_red | (v8 << 8));
    v9 = lstrlenA(lpString);
    DrawTextA(v6, lpString, v9, &rc, 0x810u);
    SetBkMode(v6, modea);
    SetTextColor(v6, colora);
    return ReleaseDC(gdrv_hwnd, v6);
}
// 1023050: using guessed type int grtext_red;
// 1028290: using guessed type int grtext_blue;
// 1028294: using guessed type int grtext_green;



//----- (01004154) --------------------------------------------------------
int DibSetUsage(int a1, HPALETTE hpal, int a3)
{
    signed int v4; // edi
    unsigned int v5; // cx
    char *v6; // esi
    signed int i; // eax
    _BYTE *v8; // eax
    BYTE v9; // bl
    struct tagPALETTEENTRY pPalEntries[256]; // [esp+4h] [ebp-400h]
    HPALETTE hpala; // [esp+410h] [ebp+Ch]

    if ( !hpal )
        hpal = (HPALETTE)GetStockObject(15);
    if ( !a1 )
        return 0;
    v4 = *(DWORD *)(a1 + 32);
    if ( !v4 )
    {
        v5 = *(WORD *)(a1 + 14);
        if ( v5 <= 8u )
            v4 = 1 << v5;
    }
    if ( v4 == 3 )
    {
        if ( *(DWORD *)(a1 + 16) != 3 )
        {
            LABEL_12:
            v6 = (char *)(a1 + *(DWORD *)a1);
            if ( (unsigned int)a3 <= 0 || (unsigned int)a3 > 2 )
            {
                if ( v4 >= 256 )
                    v4 = 256;
                GetPaletteEntries(hpal, 0, v4, pPalEntries);
                hpala = 0;
                if ( v4 > 0 )
                {
                    v8 = v6 + 1;
                    do
                    {
                        v9 = pPalEntries[(DWORD)hpala].peRed;
                        hpala = (HPALETTE)((char *)hpala + 1);
                        v8[1] = v9;
                        *v8 = v8[(char *)pPalEntries - v6];
                        *(v8 - 1) = v8[&pPalEntries[0].peGreen - (BYTE *)v6];
                        v8[2] = 0;
                        v8 += 4;
                    }
                    while ( (signed int)hpala < v4 );
                }
            }
            else
            {
                for ( i = 0; i < v4; v6 += 2 )
                    *(WORD *)v6 = i++;
            }
            return 1;
        }
        v4 = 0;
    }
    if ( v4 > 0 )
        goto LABEL_12;
    return 1;
}
// 1004154: using guessed type struct tagPALETTEENTRY pPalEntries[256];

//----- (0100423A) --------------------------------------------------------
DWORD *DibCreate(int a1, int a2, int a3)
{
    unsigned int v3; // edi
    HGLOBAL v4; // eax
    DWORD *v5; // esi
    DWORD *result; // eax
    DWORD *i; // ecx
    DWORD *v8; // ecx
    int v9; // [esp+18h] [ebp+Ch]

    v3 = a3 * ((a2 * a1 / 8 + 3) & 0xFFFFFFFC);
    v4 = GlobalAlloc(0x42u, v3 + 1064);
    v5 = GlobalLock(v4);
    result = 0;
    if ( v5 )
    {
        v5[5] = v3;
        v5[1] = a2;
        *v5 = 40;
        v5[2] = a3;
        *((WORD *)v5 + 6) = 1;
        *((WORD *)v5 + 7) = a1;
        v5[4] = 0;
        v5[6] = 0;
        v5[7] = 0;
        v5[8] = 0;
        v5[9] = 0;
        if ( a1 == 4 )
        {
            v5[8] = 16;
        }
        else if ( a1 == 8 )
        {
            v5[8] = 256;
        }
        v9 = 0;
        for ( i = v5 + 10; v9 < v5[8] / 16; ++v9 )
        {
            *i = 0;
            v8 = i + 1;
            *v8 = 0x800000;
            ++v8;
            *v8 = 0x8000;
            ++v8;
            *v8 = 8421376;
            ++v8;
            *v8 = 128;
            ++v8;
            *v8 = 8388736;
            ++v8;
            *v8 = 32896;
            ++v8;
            *v8 = 12632256;
            ++v8;
            *v8 = 8421504;
            ++v8;
            *v8 = 16711680;
            ++v8;
            *v8 = 65280;
            ++v8;
            *v8 = 16776960;
            ++v8;
            *v8 = 255;
            ++v8;
            *v8 = 16711935;
            ++v8;
            *v8 = 0xFFFF;
            ++v8;
            *v8 = 0xFFFFFF;
            i = v8 + 1;
        }
        result = v5;
    }
    return result;
}

//----- (01004380) --------------------------------------------------------
int gdrv_init(int a1, HWND a2)
{
    gdrv_hinst = a1;
    gdrv_hwnd = a2;
    if ( !gdrv_palette_handle )
        gdrv_palette_handle = CreatePalette(&current_palette);
    return 0;
}
// 1028284: using guessed type int gdrv_hinst;

//----- (010043B9) --------------------------------------------------------
int gdrv_display_palette(int a1)
{
    HWND v1; // eax
    HDC v2; // eax
    HDC v3; // ebx
    HPALETTE v4; // edi
    BYTE *v5; // eax
    int v6; // ecx
    BYTE *v7; // eax
    HWND v8; // eax
    HDC v10; // [esp+0h] [ebp-14h]
    signed int v11; // [esp+4h] [ebp-10h]
    char *v12; // [esp+1Ch] [ebp+8h]

    if ( gdrv_palette_handle )
        DeleteObject(gdrv_palette_handle);
    gdrv_palette_handle = CreatePalette(&current_palette);
    v1 = GetDesktopWindow();
    v2 = _GetDC(v1);
    v3 = v2;
    v10 = v2;
    SetSystemPaletteUse(v2, 2u);
    SetSystemPaletteUse(v3, 1u);
    v4 = SelectPalette(v3, (HPALETTE)gdrv_palette_handle, 0);
    RealizePalette(v3);
    SelectPalette(v3, v4, 0);
    GetSystemPaletteEntries(v3, 0, 0x100u, &pPalEntries);
    v5 = &pPalEntries.peFlags;
    do
    {
        *v5 = 0;
        v5 += 4;
    }
    while ( (signed int)v5 < (signed int)&unk_102345F );
    v6 = a1;
    v12 = (char *)&unk_102305B - a1;
    v7 = (BYTE *)(v6 + 41);
    v11 = 236;
    do
    {
        if ( v6 )
        {
            v7[(DWORD)v12] = v7[1];
            v7[(DWORD)&pPalEntries - v6] = *v7;
            v7[(DWORD)((char *)&pPalEntries - v6 + 1)] = *(v7 - 1);
            v3 = v10;
        }
        v7[(DWORD)((char *)&pPalEntries - v6 + 2)] = 4;
        v7 += 4;
        --v11;
    }
    while ( v11 );
    if ( !(GetDeviceCaps(v3, 38) & 0x100) )
    {
        byte_102345A = -1;
        byte_1023459 = -1;
        byte_1023458 = -1;
    }
    ResizePalette((HPALETTE)gdrv_palette_handle, 0x100u);
    SetPaletteEntries((HPALETTE)gdrv_palette_handle, 0, 0x100u, &pPalEntries);
    v8 = GetDesktopWindow();
    ReleaseDC(v8, v3);
    return 0;
}
// 1023458: using guessed type char byte_1023458;
// 1023459: using guessed type char byte_1023459;
// 102345A: using guessed type char byte_102345A;

//----- (01004508) --------------------------------------------------------
int gdrv_uninit()
{
    if ( gdrv_palette_handle )
        DeleteObject(gdrv_palette_handle);
    return 0;
}

//----- (01004520) --------------------------------------------------------
int gdrv_create_bitmap_dib(int a1, int a2, int a3)
{
    int v3; // edi
    DWORD *v4; // eax
    DWORD *v5; // eax
    int v6; // ecx

    v3 = a2;
    v4 = DibCreate(8, a2, a3);
    *(DWORD *)a1 = v4;
    DibSetUsage((int)v4, (HPALETTE)gdrv_palette_handle, 1);
    *(DWORD *)(a1 + 12) = a2;
    *(DWORD *)(a1 + 20) = a2;
    if ( a2 % 4 )
        v3 = 4 - a2 % 4 + a2;
    v5 = *(DWORD **)a1;
    *(DWORD *)(a1 + 20) = v3;
    *(DWORD *)(a1 + 16) = a3;
    *(_BYTE *)(a1 + 24) = 2;
    if ( v5[4] == 3 )
        v6 = (int)v5 + *v5 + 12;
    else
        v6 = (int)&v5[v5[8]] + *v5;
    *(DWORD *)(a1 + 8) = v6;
    *(DWORD *)(a1 + 4) = v6;
    return 0;
}

//----- (0100459A) --------------------------------------------------------
int gdrv_create_bitmap(int a1, int a2, int a3)
{
    return gdrv_create_bitmap_dib(a1, a2, a3);
}

//----- (010045AA) --------------------------------------------------------
signed int gdrv_create_raw_bitmap(int a1, int a2, int a3, int a4)
{
    unsigned int v4; // ST04_4
    int v5; // eax

    *(DWORD *)a1 = 0;
    *(DWORD *)(a1 + 12) = a2;
    *(DWORD *)(a1 + 20) = a2;
    if ( a4 && a2 % 4 )
        *(DWORD *)(a1 + 20) = a2 - a2 % 4 + 4;
    v4 = a3 * *(DWORD *)(a1 + 20);
    *(DWORD *)(a1 + 16) = a3;
    *(_BYTE *)(a1 + 24) = 1;
    v5 = memoryallocate(v4);
    *(DWORD *)(a1 + 8) = v5;
    if ( !v5 )
        return -1;
    *(DWORD *)(a1 + 4) = v5;
    return 0;
}

//----- (0100460C) --------------------------------------------------------
signed int gdrv_destroy_bitmap(int a1)
{
    HGLOBAL v2; // eax
    HGLOBAL v3; // eax

    if ( !a1 )
        return -1;
    if ( *(_BYTE *)(a1 + 24) == 1 )
    {
        memoryfree(*(DWORD *)(a1 + 8));
    }
    else if ( *(_BYTE *)(a1 + 24) == 2 )
    {
        v2 = GlobalHandle(*(LPCVOID *)a1);
        GlobalUnlock(v2);
        v3 = GlobalHandle(*(LPCVOID *)a1);
        GlobalFree(v3);
    }
    memset((void *)a1, 0, 0x24u);
    *(_BYTE *)(a1 + 36) = 0;
    return 0;
}

//----- (01004664) --------------------------------------------------------
UINT gdrv_start_blit_sequence()
{
    HDC v0; // eax

    v0 = _GetDC(gdrv_hwnd);
    gdrv_sequence_handle = 0;
    gdrv_sequence_hdc = v0;
    SelectPalette(v0, (HPALETTE)gdrv_palette_handle, 0);
    return RealizePalette(gdrv_sequence_hdc);
}
// 102828C: using guessed type int gdrv_sequence_handle;

//----- (0100469C) --------------------------------------------------------
int gdrv_blit_sequence(int a1, int xSrc, int a3, int xDest, int yDest, int DestWidth, int DestHeight)
{
    int result; // eax

    if ( !gdrv_use_wing )
        result = StretchDIBits(
                gdrv_sequence_hdc,
                xDest,
                yDest,
                DestWidth,
                DestHeight,
                xSrc,
                *(DWORD *)(a1 + 16) - a3 - DestHeight,
                DestWidth,
                DestHeight,
                *(const void **)(a1 + 8),
                *(const BITMAPINFO **)a1,
                1u,
                0xCC0020u);
    return result;
}
// 1024EFC: using guessed type int gdrv_use_wing;

//----- (010046ED) --------------------------------------------------------
int gdrv_end_blit_sequence()
{
    return ReleaseDC(gdrv_hwnd, gdrv_sequence_hdc);
}

//----- (01004705) --------------------------------------------------------
HDC gdrv_blit(int a1, int xSrc, int a3, int xDest, int yDest, int DestWidth, int DestHeight)
{
    HDC result; // eax
    HDC v8; // esi

    result = _GetDC(gdrv_hwnd);
    v8 = result;
    if ( result )
    {
        SelectPalette(result, (HPALETTE)gdrv_palette_handle, 0);
        RealizePalette(v8);
        if ( !gdrv_use_wing )
            StretchDIBits(
                    v8,
                    xDest,
                    yDest,
                    DestWidth,
                    DestHeight,
                    xSrc,
                    *(DWORD *)(a1 + 16) - a3 - DestHeight,
                    DestWidth,
                    DestHeight,
                    *(const void **)(a1 + 8),
                    *(const BITMAPINFO **)a1,
                    1u,
                    0xCC0020u);
        result = (HDC)ReleaseDC(gdrv_hwnd, v8);
    }
    return result;
}
// 1024EFC: using guessed type int gdrv_use_wing;

//----- (01004787) --------------------------------------------------------
int gdrv_blat(int a1, int xDest, int yDest)
{
    HDC v3; // edi

    v3 = _GetDC(gdrv_hwnd);
    SelectPalette(v3, (HPALETTE)gdrv_palette_handle, 0);
    RealizePalette(v3);
    if ( !gdrv_use_wing )
        StretchDIBits(
                v3,
                xDest,
                yDest,
                *(DWORD *)(a1 + 12),
                *(DWORD *)(a1 + 16),
                0,
                0,
                *(DWORD *)(a1 + 12),
                *(DWORD *)(a1 + 16),
                *(const void **)(a1 + 8),
                *(const BITMAPINFO **)a1,
                1u,
                0xCC0020u);
    return ReleaseDC(gdrv_hwnd, v3);
}
// 1024EFC: using guessed type int gdrv_use_wing;

//----- (010047FA) --------------------------------------------------------
int gdrv_fill_bitmap(int a1, DWORD *a2, unsigned int a3, int a4, int a5, int a6, char a7)
{
DWORD *v7; // esi
int v8; // eax
int result; // eax
unsigned int v10; // ecx
char v11; // dl
unsigned int v12; // ecx
int v13; // eax
char *v14; // [esp+Ch] [ebp+8h]

v7 = a2;
v8 = a2[4];
if ( v8 < 0 )
v8 = -v8;
result = a5 + a2[2] + a2[3] * (v8 - a4 - a6);
v14 = (char *)result;
if ( a4 > 0 )
{
v10 = a3;
do
{
if ( (signed int)v10 > 0 )
{
LOBYTE(a1) = a7;
BYTE1(a1) = a7;
v11 = v10;
v12 = v10 >> 2;
v13 = a1 << 16;
LOWORD(v13) = a1;
memset32(v14, v13, v12);
memset(&v14[4 * v12], a7, v11 & 3);
v10 = a3;
v14 += a3;
}
result = v7[5] - v10;
v14 += result;
--a4;
}
while ( a4 );
}
return result;
}

//----- (01004870) --------------------------------------------------------
char *gdrv_copy_bitmap(DWORD *a1, int a2, int a3, int a4, int a5, DWORD *a6, int a7, int a8)
{
    DWORD *v8; // edx
    int v9; // ecx
    DWORD *v10; // esi
    int v11; // eax
    char *result; // eax
    _BYTE *v13; // ecx
    char v14; // bl
    int v15; // [esp+10h] [ebp+8h]
    int v16; // [esp+24h] [ebp+1Ch]

    v8 = a1;
    v9 = a1[4];
    v10 = a6;
    v11 = a6[4];
    if ( v11 < 0 )
        v11 = -v11;
    if ( v9 < 0 )
        v9 = -v9;
    result = (char *)(a7 + a6[2] + a6[5] * (v11 - a3 - a8));
    v13 = (_BYTE *)(a4 + a1[2] + a1[5] * (v9 - a3 - a5));
    if ( a3 > 0 )
    {
        v16 = a3;
        do
        {
            if ( a2 > 0 )
            {
                v15 = a2;
                do
                {
                    v14 = *result++;
                    *v13++ = v14;
                    --v15;
                }
                while ( v15 );
            }
            result += v10[5] - a2;
            v13 += v8[5] - a2;
            --v16;
        }
        while ( v16 );
    }
    return result;
}

//----- (010048EC) --------------------------------------------------------
_BYTE *gdrv_copy_bitmap_w_transparency(DWORD *a1, int a2, int a3, int a4, int a5, DWORD *a6, int a7, int a8)
{
    DWORD *v8; // edx
    int v9; // ecx
    DWORD *v10; // esi
    int v11; // eax
    _BYTE *result; // eax
    _BYTE *v13; // ecx
    int v14; // [esp+10h] [ebp+8h]
    int v15; // [esp+24h] [ebp+1Ch]

    v8 = a1;
    v9 = a1[4];
    v10 = a6;
    v11 = a6[4];
    if ( v11 < 0 )
        v11 = -v11;
    if ( v9 < 0 )
        v9 = -v9;
    result = (_BYTE *)(a7 + a6[2] + a6[5] * (v11 - a3 - a8));
    v13 = (_BYTE *)(a4 + a1[2] + a1[5] * (v9 - a3 - a5));
    if ( a3 > 0 )
    {
        v15 = a3;
        do
        {
            if ( a2 > 0 )
            {
                v14 = a2;
                do
                {
                    if ( *result )
                        *v13 = *result;
                    ++result;
                    ++v13;
                    --v14;
                }
                while ( v14 );
            }
            result += v10[5] - a2;
            v13 += v8[5] - a2;
            --v15;
        }
        while ( v15 );
    }
    return result;
}


//----- (01003F10) --------------------------------------------------------
HBRUSH sub_1003F10(LONG a1, LONG a2, int a3, int a4)
{
HBRUSH result; // eax
HDC v5; // esi
RECT rc; // [esp+0h] [ebp-18h]
HGDIOBJ v7; // [esp+10h] [ebp-8h]
HGDIOBJ h; // [esp+14h] [ebp-4h]

result = CreateSolidBrush(0);
h = result;
if ( result )
{
v5 = _GetDC(hWnd);
v7 = SelectObject(v5, h);
if ( v5 )
{
rc.right = a3 + a1 + 1;
rc.bottom = a4 + a2 + 1;
rc.left = a1;
rc.top = a2;
FillRect(v5, &rc, (HBRUSH)h);
ReleaseDC(hWnd, v5);
}
SelectObject(v5, v7);
result = (HBRUSH)DeleteObject(h);
}
return result;
}

//----- (0100496C) --------------------------------------------------------
int zdrv_pad(int a1)
{
    int result; // eax

    result = a1;
    if ( a1 & 3 )
        result = a1 - (a1 & 3) + 4;
    return result;
}

//----- (01004989) --------------------------------------------------------
signed int zdrv_create_zmap(int a1, int a2, int a3)
{
    int v3; // ax
    int v4; // eax

    v3 = zdrv_pad(a2);
    *(WORD *)(a1 + 4) = v3;
    v4 = memoryallocate(2 * a3 * v3);
    *(DWORD *)(a1 + 6) = v4;
    if ( !v4 )
        return -1;
    *(DWORD *)(a1 + 10) = v4;
    *(WORD *)a1 = a2;
    *(WORD *)(a1 + 2) = a3;
    return 0;
}

//----- (010049D6) --------------------------------------------------------
signed int zdrv_destroy_zmap(DWORD *a1)
{
    int v2; // edi

    if ( !a1 )
        return -1;
    if ( *(DWORD *)((char *)a1 + 6) )
        memoryfree(*(DWORD *)((char *)a1 + 6));
    *a1 = 0;
    a1[1] = 0;
    v2 = (int)(a1 + 2);
    *(DWORD *)v2 = 0;
    *(WORD *)(v2 + 4) = 0;
    return 0;
}

//----- (01004A08) --------------------------------------------------------
int zdrv_fill(int a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
int result; // eax
int v8; // esi
char *v9; // edx
unsigned int v10; // ecx
unsigned __int8 v11; // cf
unsigned int v12; // ecx
char *v13; // edi
int i; // ecx
bool v15; // zf
int v16; // [esp+Ch] [ebp+8h]

result = a4;
v8 = a2;
v9 = (char *)(*(DWORD *)(a2 + 6) + 2 * (a5 + *(signed int *)(a2 + 4) * (*(signed int *)(a2 + 2) - a4 - a6)));
if ( a4 > 0 )
{
v10 = a3;
v16 = a4;
do
{
if ( (signed int)v10 > 0 )
{
LOWORD(a1) = a7;
a1 <<= 16;
LOWORD(a1) = a7;
v11 = v10 & 1;
v12 = v10 >> 1;
memset32(v9, a1, v12);
v13 = &v9[4 * v12];
for ( i = v11; i; --i )
{
*(WORD *)v13 = a7;
v13 += 2;
}
v10 = a3;
v9 += 2 * a3;
}
result = *(signed int *)(v8 + 4) - v10;
v15 = v16-- == 1;
v9 += 2 * result;
}
while ( !v15 );
}
return result;
}

//----- (01004A76) --------------------------------------------------------
WORD *zdrv_paint(int a1, int a2, DWORD *a3, int a4, int a5, int a6, int a7, int a8, DWORD *a9, int a10, int a11, int a12, int a13, int a14)
{
    int v14; // ecx
    DWORD *v15; // ebx
    int v16; // eax
    WORD *v17; // edi
    WORD *result; // eax
    bool v19; // zf
    int v20; // [esp+18h] [ebp+Ch]
    int v21; // [esp+24h] [ebp+18h]
    _BYTE *v22; // [esp+38h] [ebp+2Ch]
    _BYTE *v23; // [esp+3Ch] [ebp+30h]

    v14 = a3[4];
    v15 = a9;
    v16 = a9[4];
    if ( v16 < 0 )
        v16 = -v16;
    if ( v14 < 0 )
        v14 = -v14;
    v23 = (_BYTE *)(a10 + a9[2] + a9[5] * (v16 - a2 - a11));
    v22 = (_BYTE *)(a4 + a3[2] + a3[5] * (v14 - a2 - a5));
    v17 = (WORD *)(*(DWORD *)(a12 + 6)
                    + 2 * (a13 + *(signed int *)(a12 + 4) * (*(signed int *)(a12 + 2) - a2 - a14)));
    result = (WORD *)(*(DWORD *)(a6 + 6)
                       + 2 * (a7 + *(signed int *)(a6 + 4) * (*(signed int *)(a6 + 2) - a2 - a8)));
    if ( a2 )
    {
        v21 = a2;
        while ( 1 )
        {
            if ( a1 )
            {
                v20 = a1;
                do
                {
                    if ( *result >= *v17 )
                    {
                        *v22 = *v23;
                        v15 = a9;
                        *result = *v17;
                    }
                    ++v23;
                    ++v22;
                    ++v17;
                    ++result;
                    --v20;
                }
                while ( v20 );
            }
            v23 += v15[5] - a1;
            v22 += a3[5] - a1;
            v17 += *(signed int *)(a12 + 4) - a1;
            v19 = v21-- == 1;
            result += *(signed int *)(a6 + 4) - a1;
            if ( v19 )
                break;
            v15 = a9;
        }
    }
    return result;
}

//----- (01004B75) --------------------------------------------------------
unsigned int *zdrv_paint_flat(int a1, int a2, DWORD *a3, int a4, int a5, int a6, int a7, int a8, DWORD *a9, int a10, int a11, unsigned int a12)
{
    DWORD *v12; // esi
    int v13; // ecx
    DWORD *v14; // edi
    int v15; // eax
    int v16; // ecx
    unsigned int *result; // eax
    bool v18; // zf
    int v19; // [esp+18h] [ebp+Ch]
    _BYTE *v20; // [esp+1Ch] [ebp+10h]
    _BYTE *v21; // [esp+34h] [ebp+28h]
    int v22; // [esp+3Ch] [ebp+30h]

    v12 = a3;
    v13 = a3[4];
    v14 = a9;
    v15 = a9[4];
    if ( v15 < 0 )
        v15 = -v15;
    if ( v13 < 0 )
        v13 = -v13;
    v16 = a3[2] + a3[5] * (v13 - a2 - a5);
    v20 = (_BYTE *)(a10 + a9[2] + a9[5] * (v15 - a2 - a11));
    v21 = (_BYTE *)(a4 + v16);
    result = (unsigned int *)(*(DWORD *)(a6 + 6)
                                  + 2 * (a7 + *(signed int *)(a6 + 4) * (*(signed int *)(a6 + 2) - a2 - a8)));
    if ( a2 > 0 )
    {
        v22 = a2;
        do
        {
            if ( a1 > 0 )
            {
                v19 = a1;
                do
                {
                    if ( *v20 )
                    {
                        if ( *result > a12 )
                            *v21 = *v20;
                    }
                    ++v20;
                    ++v21;
                    ++result;
                    --v19;
                }
                while ( v19 );
            }
            v20 += v14[5] - a1;
            v21 += v12[5] - a1;
            v18 = v22-- == 1;
            result += *(signed int *)(a6 + 4) - a1;
        }
        while ( !v18 );
    }
    return result;
}
