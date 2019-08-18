//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (01006D96) --------------------------------------------------------
HPALETTE splash_init_palette(LOGPALETTE *plpal)
{
    LOGPALETTE *v1; // edi
    HWND v2; // eax
    HDC v3; // ebx
    HWND v4; // eax
    HPALETTE result; // eax
    HPALETTE hPal; // ST1C_4
    HWND v7; // eax
    BYTE *v8; // eax
    signed int v9; // ecx
    signed int v10; // ecx
    BYTE *v11; // eax
    HPALETTE plpala; // [esp+18h] [ebp+8h]

    v1 = plpal;
    plpal->palVersion = 768;
    plpal->palNumEntries = 256;
    plpala = CreatePalette(plpal);
    v2 = GetDesktopWindow();
    v3 = _GetDC(v2);
    GetDeviceCaps(v3, 38);
    if ( GetDeviceCaps(v3, 104) == 256 )
    {
        SetSystemPaletteUse(v3, 2u);
        SetSystemPaletteUse(v3, 1u);
        hPal = SelectPalette(v3, plpala, 0);
        RealizePalette(v3);
        SelectPalette(v3, hPal, 0);
        RealizePalette(v3);
        GetSystemPaletteEntries(v3, 0, 0x100u, v1->palPalEntry);
        v7 = GetDesktopWindow();
        ReleaseDC(v7, v3);
        v8 = &v1->palPalEntry[0].peFlags;
        v9 = 256;
        do
        {
            *v8 = 0;
            v8 += 4;
            --v9;
        }
        while ( v9 );
        v10 = 10;
        v11 = &v1[5].palPalEntry[0].peGreen;
        do
        {
            *(v11 - 1) = v10;
            *v11 = v10;
            v11[1] = v10;
            v11[2] = 4;
            ++v10;
            v11 += 4;
        }
        while ( v10 < 246 );
        ResizePalette(plpala, 0x100u);
        SetPaletteEntries(plpala, 0, 0x100u, v1->palPalEntry);
        result = plpala;
    }
    else
    {
        if ( plpala )
            DeleteObject(plpala);
        v4 = GetDesktopWindow();
        ReleaseDC(v4, v3);
        result = 0;
    }
    return result;
}

//----- (01006EB9) --------------------------------------------------------
HBITMAP load_title_bitmap(HMODULE hModule, HDC hdc, LPCSTR lpName, UINT iStart, int a5, int a6)
{
    HRSRC v6; // eax
    HGLOBAL v7; // eax
    const BITMAPINFO *v9; // eax
    const BITMAPINFO *v10; // esi
    signed int v11; // edi
    bool v12; // cf
    bool v13; // zf
    BYTE *v14; // ecx
    BYTE *v15; // edx
    HBITMAP v16; // esi
    LOGPALETTE plpal; // [esp+0h] [ebp-40Ch]
    void *pjBits; // [esp+404h] [ebp-8h]
    HGLOBAL hResData; // [esp+408h] [ebp-4h]
    HMODULE hModulea; // [esp+414h] [ebp+8h]
    HPALETTE lpNamea; // [esp+41Ch] [ebp+10h]

    v6 = FindResourceA(hModule, lpName, (LPCSTR)2);
    if ( !v6 )
        return 0;
    v7 = LoadResource(hModule, v6);
    hResData = v7;
    if ( !v7 )
        return 0;
    v9 = (const BITMAPINFO *)LockResource(v7);
    v10 = v9;
    v11 = v9->bmiHeader.biClrUsed;
    if ( !v11 )
        v11 = 1 << LOBYTE(v9->bmiHeader.biBitCount);
    v12 = v9->bmiHeader.biBitCount < 4u;
    v13 = v9->bmiHeader.biBitCount == 4;
    pjBits = &v9->bmiColors[v11];
    if ( !v12 && !v13 )
    {
        lpNamea = splash_init_palette(&plpal);
        *(DWORD *)a6 = lpNamea;
        if ( lpNamea )
        {
            hModulea = 0;
            if ( a5 > 0 )
            {
                v14 = &plpal.palPalEntry[iStart].peGreen;
                v15 = &v10->bmiColors[0].rgbGreen;
                do
                {
                    if ( (signed int)hModulea >= v11 )
                        break;
                    hModulea = (HMODULE)((char *)hModulea + 1);
                    *(v14 - 1) = v15[1];
                    *v14 = *v15;
                    v14[1] = *(v15 - 1);
                    v14[2] = 4;
                    v15 += 4;
                    v14 += 4;
                }
                while ( (signed int)hModulea < a5 );
            }
            SetPaletteEntries(lpNamea, iStart, (UINT)hModulea, &plpal.palPalEntry[iStart]);
            SelectPalette(hdc, *(HPALETTE *)a6, 0);
            RealizePalette(hdc);
        }
    }
    v16 = CreateDIBitmap(hdc, &v10->bmiHeader, 4u, pjBits, v10, 0);
    FreeResource(hResData);
    return v16;
}

//----- (01006FCB) --------------------------------------------------------
int splash_bitmap_setup(int a1)
{
    HWND v1; // eax
    HDC v2; // eax
    HDC v3; // edi
    HBITMAP v4; // eax
    HWND v5; // ST14_4
    HDC v6; // eax
    HBITMAP v7; // eax
    int result; // eax
    char pv; // [esp+8h] [ebp-1Ch]
    int v10; // [esp+Ch] [ebp-18h]
    int v11; // [esp+10h] [ebp-14h]
    HGDIOBJ h; // [esp+20h] [ebp-4h]

    h = 0;
    v1 = GetDesktopWindow();
    v2 = _GetDC(v1);
    v3 = v2;
    if ( v2 )
    {
        *(DWORD *)(a1 + 12) = CreateCompatibleDC(v2);
        v4 = CreateCompatibleBitmap(v3, 10, 10);
        v5 = *(HWND *)a1;
        h = v4;
        ReleaseDC(v5, v3);
        if ( h )
        {
            v6 = *(HDC *)(a1 + 12);
            if ( v6 )
            {
                SelectObject(v6, h);
                if ( GetDeviceCaps(*(HDC *)(a1 + 12), 38) & 0x100 || GetDeviceCaps(*(HDC *)(a1 + 12), 24) >= 256 )
                    v7 = load_title_bitmap(hInstance, *(HDC *)(a1 + 12), (LPCSTR)(a1 + 32), 0xAu, 236, a1 + 4);
                else
                    v7 = LoadBitmapA(hInstance, (LPCSTR)(a1 + 232));
                *(DWORD *)(a1 + 8) = v7;
                if ( v7 )
                {
                    SelectObject(*(HDC *)(a1 + 12), v7);
                    DeleteObject(h);
                    GetObjectA(*(HANDLE *)(a1 + 8), 24, &pv);
                    *(DWORD *)(a1 + 16) = v10;
                    result = v11;
                    *(DWORD *)(a1 + 20) = v11;
                    return result;
                }
            }
        }
        else
        {
            GetLastError();
        }
    }
    if ( *(DWORD *)(a1 + 4) )
        DeleteObject(*(HGDIOBJ *)(a1 + 4));
    if ( *(DWORD *)a1 )
        DestroyWindow(*(HWND *)a1);
    if ( h )
        DeleteObject(h);
    result = *(DWORD *)(a1 + 12);
    if ( result )
        result = DeleteDC(*(HDC *)(a1 + 12));
    *(DWORD *)(a1 + 8) = 0;
    return result;
}

//----- (01007103) --------------------------------------------------------
void splash_paint(int a1, HDC hdc)
{
    HWND v2; // eax
    HPALETTE v3; // ST1C_4
    struct tagRECT Rect; // [esp+4h] [ebp-10h]

    if ( *(DWORD *)(a1 + 8) )
    {
        v2 = GetDesktopWindow();
        GetWindowRect(v2, &Rect);
        v3 = *(HPALETTE *)(a1 + 4);
        *(DWORD *)(a1 + 24) = (Rect.right - Rect.left - *(DWORD *)(a1 + 16)) / 2;
        *(DWORD *)(a1 + 28) = (Rect.bottom - Rect.top - *(DWORD *)(a1 + 20)) / 2;
        SelectPalette(hdc, v3, 0);
        RealizePalette(hdc);
        SelectPalette(*(HDC *)(a1 + 12), *(HPALETTE *)(a1 + 4), 0);
        RealizePalette(*(HDC *)(a1 + 12));
        BitBlt(
                hdc,
                *(DWORD *)(a1 + 24),
                *(DWORD *)(a1 + 28),
                *(DWORD *)(a1 + 16),
                *(DWORD *)(a1 + 20),
                *(HDC *)(a1 + 12),
                0,
                0,
                0xCC0020u);
    }
}

//----- (010071A5) --------------------------------------------------------
void splash_hide(int a1)
{
    HDC v1; // edi

    if ( a1 )
    {
        if ( *(DWORD *)a1 )
        {
            v1 = _GetDC(*(HWND *)a1);
            BitBlt(v1, 0, 0, *(DWORD *)(a1 + 24), *(DWORD *)(a1 + 28), v1, 0, 0, 0x42u);
            ReleaseDC(*(HWND *)a1, v1);
        }
    }
}

//----- (010071ED) --------------------------------------------------------
HINSTANCE splash_destroy(int a1)
{
    void *v1; // eax
    HDC v2; // eax
    HINSTANCE result; // eax

    if ( a1 )
    {
        if ( *(DWORD *)a1 )
        {
            DestroyWindow(*(HWND *)a1);
            v1 = *(void **)(a1 + 4);
            *(DWORD *)a1 = 0;
            if ( v1 )
                DeleteObject(v1);
            v2 = *(HDC *)(a1 + 12);
            *(DWORD *)(a1 + 4) = 0;
            if ( v2 )
                DeleteDC(v2);
            if ( *(DWORD *)(a1 + 8) )
                DeleteObject(*(HGDIOBJ *)(a1 + 8));
        }
        memoryfree(a1);
    }
    result = hInstance;
    if ( hInstance )
    {
        result = (HINSTANCE)UnregisterClassA("3DPB_SPLASH_CLASS", hInstance);
        hInstance = 0;
    }
    return result;
}

//----- (01007264) --------------------------------------------------------
LRESULT splash_message_handler(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    HDC v5; // eax
    HDC v6; // esi
    LONG v7; // [esp+4h] [ebp-48h]
    struct tagPAINTSTRUCT Paint; // [esp+8h] [ebp-44h]

    if ( Msg == 15 )
    {
        v7 = GetWindowLongA(hWnd, 0);
        BeginPaint(hWnd, &Paint);
        EndPaint(hWnd, &Paint);
        v5 = _GetDC(hWnd);
        v6 = v5;
        if ( v5 )
        {
            if ( v7 )
            {
                BitBlt(v5, 0, 0, 10000, 10000, v5, 0, 0, 0x42u);
                splash_paint(v7, v6);
            }
        }
        ReleaseDC(hWnd, v6);
    }
    else if ( Msg != 20 )
    {
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    return 0;
}

//----- (01007308) --------------------------------------------------------
int splash_screen(int a1, LPCSTR lpString2, LPCSTR a3)
{
    int v3; // esi
    HINSTANCE v4; // ST28_4
    HWND v5; // eax
    HWND v7; // eax
    WNDCLASSA WndClass; // [esp+8h] [ebp-38h]
    struct tagRECT Rect; // [esp+30h] [ebp-10h]

    v3 = memoryallocate(0x1B0u);
    if ( !v3 )
        return 0;
    lstrcpyA((LPSTR)(v3 + 32), lpString2);
    lstrcpyA((LPSTR)(v3 + 232), a3);
    if ( !hInstance )
    {
        hInstance = (HINSTANCE)a1;
        WndClass.style = 0;
        WndClass.lpfnWndProc = splash_message_handler;
        WndClass.cbClsExtra = 0;
        WndClass.cbWndExtra = 4;
        WndClass.hInstance = (HINSTANCE)a1;
        WndClass.hIcon = 0;
        WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
        WndClass.hbrBackground = 0;
        WndClass.lpszMenuName = WindowName;
        WndClass.lpszClassName = "3DPB_SPLASH_CLASS";
        RegisterClassA(&WndClass);
    }
    v4 = hInstance;
    *(DWORD *)(v3 + 8) = 0;
    v5 = CreateWindowExA(0, "3DPB_SPLASH_CLASS", WindowName, 0x80000000, -10, -10, 1, 1, 0, 0, v4, 0);
    *(DWORD *)v3 = v5;
    if ( !v5 )
    {
        memoryfree(v3);
        return 0;
    }
    SetWindowLongA(v5, 0, v3);
    v7 = GetDesktopWindow();
    GetWindowRect(v7, &Rect);
    splash_bitmap_setup(v3);
    MoveWindow(*(HWND *)v3, 0, 0, Rect.right - Rect.left, Rect.bottom - Rect.top, 0);
    ShowWindow(*(HWND *)v3, 8);
    SetFocus(*(HWND *)v3);
    UpdateWindow(*(HWND *)v3);
    return v3;
}