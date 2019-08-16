//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (010038F8) --------------------------------------------------------
int sub_10038F8()
{
    int result; // eax
    HWND v1; // eax
    struct tagRECT Rect; // [esp+4h] [ebp-10h]

    if ( fullscrn_screen_mode )
    {
        v1 = GetDesktopWindow();
        GetWindowRect(v1, &Rect);
        xDest = (Rect.right - dword_1025094 - Rect.left) / 2;
        result = (Rect.bottom - dword_1025098 - Rect.top) / 2;
    }
    else
    {
        xDest = 0;
        result = GetSystemMetrics(15);
    }
    yDest = result;
    if ( dword_1024EE8 )
    {
        result = GetSystemMetrics(15);
        yDest -= result;
    }
    return result;
}
// 1024EE4: using guessed type int fullscrn_screen_mode;
// 1024EE8: using guessed type int dword_1024EE8;
// 1025094: using guessed type int dword_1025094;
// 1025098: using guessed type int dword_1025098;

//----- (01003975) --------------------------------------------------------
LONG sub_1003975()
{
    LONG v0; // eax

    v0 = GetWindowLongA(hWnd, -16);
    return SetWindowLongA(hWnd, -16, v0 | 0xC00000);
}

//----- (0100399D) --------------------------------------------------------
LONG sub_100399D()
{
    LONG v0; // eax

    v0 = GetWindowLongA(hWnd, -16);
    return SetWindowLongA(hWnd, -16, v0 & 0xFF3FFFFF);
}

//----- (010039C5) --------------------------------------------------------
BOOL __stdcall fullscrn_set_menu_mode(int a1)
{
    BOOL result; // eax

    dword_1024EE8 = a1;
    sub_10038F8();
    if ( dword_1024EE8 )
    {
        dword_1024EEC |= 2u;
        InvalidateRect(hWnd, 0, 1);
        result = SetMenu(hWnd, (HMENU)dword_1024EC0);
    }
    else
    {
        dword_1024EEC |= 1u;
        InvalidateRect(hWnd, 0, 1);
        result = SetMenu(hWnd, 0);
    }
    return result;
}
// 1024EC0: using guessed type int dword_1024EC0;
// 1024EE8: using guessed type int dword_1024EE8;
// 1024EEC: using guessed type int dword_1024EEC;

//----- (01003A23) --------------------------------------------------------
signed int sub_1003A23()
{
    HWND v0; // eax
    LONG v1; // eax
    HWND v3; // eax
    struct tagRECT Rect; // [esp+Ch] [ebp-B0h]
    DEVMODEA DevMode; // [esp+1Ch] [ebp-A0h]

    if ( dword_1024EF8 && !fullscrn_display_changed )
    {
        DevMode.dmSize = 156;
        DevMode.dmFields = 1835008;
        DevMode.dmPelsWidth = 640;
        DevMode.dmPelsHeight = 480;
        DevMode.dmBitsPerPel = 8;
        sub_100399D();
        if ( trick )
        {
            v0 = GetDesktopWindow();
            GetWindowRect(v0, &Rect);
            SetWindowPos(hWnd, HWND_MESSAGE|0x2, 0, 0, Rect.right - Rect.left + 1, Rect.bottom - Rect.top + 1, 8u);
        }
        dword_1024EF0 = 1;
        v1 = ChangeDisplaySettingsA(&DevMode, 4u);
        if ( v1 == 1 )
        {
            BYTE2(DevMode.dmFields) &= 0xFBu;
            dword_1024EF0 = 1;
            v1 = ChangeDisplaySettingsA(&DevMode, 4u);
        }
        fullscrn_display_changed = v1 == 0;
        if ( v1 == 0 )
            return 1;
    }
    v3 = GetDesktopWindow();
    GetWindowRect(v3, &Rect);
    sub_100399D();
    SetWindowPos(hWnd, (HWND)0xFFFFFFFE, 0, 0, Rect.right - Rect.left + 1, Rect.bottom - Rect.top + 1, 8u);
    return 0;
}
// 1023054: using guessed type int trick;
// 1024EF0: using guessed type int dword_1024EF0;
// 1024EF4: using guessed type int fullscrn_display_changed;
// 1024EF8: using guessed type int dword_1024EF8;

//----- (01003B66) --------------------------------------------------------
int sub_1003B66()
{
    if ( fullscrn_display_changed )
    {
        fullscrn_display_changed = 0;
        dword_1024EF0 = 1;
        ChangeDisplaySettingsA(0, 4u);
        if ( trick )
            SetWindowPos(hWnd, (HWND)0xFFFFFFFE, 0, 0, 0, 0, 0x13u);
    }
    sub_1003975();
    SetWindowPos(hWnd, 0, X.left, X.top, X.right - X.left, X.bottom - X.top, 0x14u);
    return 0;
}
// 1023054: using guessed type int trick;
// 1024EF0: using guessed type int dword_1024EF0;
// 1024EF4: using guessed type int fullscrn_display_changed;

//----- (01003BE4) --------------------------------------------------------
LONG __stdcall fullscrn_set_screen_mode(int a1)
{
    LONG result; // eax

    result = a1;
    if ( a1 != fullscrn_screen_mode )
    {
        fullscrn_screen_mode = a1;
        if ( a1 )
        {
            if ( IsWindowVisible(hWnd) )
                GetWindowRect(hWnd, &X);
            sub_1003A23();
            BYTE1(dword_1024EEC) |= 0x80u;
            InvalidateRect(hWnd, 0, 1);
            fullscrn_set_menu_mode(0);
            result = sub_100399D();
        }
        else
        {
            sub_1003B66();
            BYTE1(dword_1024EEC) |= 0x80u;
            InvalidateRect(hWnd, 0, 1);
            fullscrn_set_menu_mode(1);
            result = RedrawWindow(0, 0, 0, 0x185u);
        }
    }
    return result;
}
// 1024EE4: using guessed type int fullscrn_screen_mode;
// 1024EEC: using guessed type int dword_1024EEC;

//----- (01003C87) --------------------------------------------------------
void __stdcall fullscrn_force_redraw()
{
    BYTE1(dword_1024EEC) |= 0x80u;
}
// 1024EEC: using guessed type int dword_1024EEC;

//----- (01003C94) --------------------------------------------------------
signed int __stdcall fullscrn_displaychange()
{
    signed int v0; // esi
    signed int result; // eax
    HWND v2; // ST18_4
    HWND v3; // eax

    v0 = 0;
    if ( dword_1024EF0 )
    {
        dword_1024EF0 = 0;
        result = 0;
    }
    else
    {
        if ( fullscrn_screen_mode && fullscrn_display_changed )
        {
            fullscrn_display_changed = 0;
            fullscrn_screen_mode = 0;
            sub_1003975();
            BYTE1(dword_1024EEC) |= 0x80u;
            InvalidateRect(hWnd, 0, 1);
            fullscrn_set_menu_mode(1);
            SetWindowPos(hWnd, 0, X.left, X.top, X.right - X.left, X.bottom - X.top, 0x1Cu);
            v0 = 1;
        }
        else
        {
            SetWindowPos(hWnd, 0, X.left, X.top, X.right - X.left, X.bottom - X.top, 0x14u);
        }
        v2 = hWnd;
        v3 = GetDesktopWindow();
        center_in(v3, v2);
        result = v0;
    }
    return result;
}
// 1024EE4: using guessed type int fullscrn_screen_mode;
// 1024EEC: using guessed type int dword_1024EEC;
// 1024EF0: using guessed type int dword_1024EF0;
// 1024EF4: using guessed type int fullscrn_display_changed;

//----- (01003D65) --------------------------------------------------------
BOOL __stdcall fullscrn_init(int a1, int a2, int a3, HWND a4, int a5, int a6)
{
    HWND v6; // eax
    int v7; // ebx
    int v8; // edi
    int v9; // eax
    int v10; // kr00_4
    BOOL result; // eax
    int v12; // [esp+18h] [ebp+Ch]

    dword_1024ED4 = 0;
    dword_1024ED8 = 0;
    dword_1024EF8 = a6;
    hWnd = a4;
    dword_1024EC0 = a5;
    dword_1024EDC = a1;
    dword_1024EE0 = a2;
    v6 = GetDesktopWindow();
    GetWindowRect(v6, &Rect);
    v7 = a1 + 2 * GetSystemMetrics(5);
    v12 = a2 + 2 * GetSystemMetrics(6);
    v8 = GetSystemMetrics(15);
    v9 = GetSystemMetrics(4);
    v10 = Rect.bottom - Rect.top - v12;
    X.bottom = v10 / 2 - 2 + v12 + 4;
    X.right = (Rect.right - Rect.left - v7) / 2 - 2 + v7 + 4;
    X.left = (Rect.right - Rect.left - v7) / 2 - 2;
    X.top = v10 / 2 - (v9 + v8) - 2;
    result = MoveWindow(hWnd, (Rect.right - Rect.left - v7) / 2 - 2, X.top, v7 + 4, X.bottom - X.top, 0);
    dword_1024EEC = 0;
    return result;
}
// 1024EC0: using guessed type int dword_1024EC0;
// 1024ED4: using guessed type int dword_1024ED4;
// 1024ED8: using guessed type int dword_1024ED8;
// 1024EDC: using guessed type int dword_1024EDC;
// 1024EE0: using guessed type int dword_1024EE0;
// 1024EEC: using guessed type int dword_1024EEC;
// 1024EF8: using guessed type int dword_1024EF8;

//----- (01003E53) --------------------------------------------------------
LONG __stdcall fullscrn_shutdown()
{
    LONG result; // eax

    if ( fullscrn_display_changed )
        result = fullscrn_set_screen_mode(0);
    return result;
}
// 1024EF4: using guessed type int fullscrn_display_changed;

//----- (01003E69) --------------------------------------------------------
BOOL __stdcall fullscrn_activate(int a1)
{
    BOOL result; // eax

    if ( fullscrn_screen_mode )
    {
        if ( !a1 )
        {
            fullscrn_set_screen_mode(0);
            result = SetWindowPos(hWnd, (HWND)1, 0, 0, 0, 0, 0x13u);
        }
    }
    return result;
}
// 1024EE4: using guessed type int fullscrn_screen_mode;

//----- (01003EA2) --------------------------------------------------------
int __stdcall fullscrn_convert_mouse_pos(int a1)
{
    return (unsigned __int16)(a1 - xDest) | ((unsigned __int16)(HIWORD(a1) - yDest) << 16);
}

//----- (01003ECF) --------------------------------------------------------
_DWORD *__stdcall fullscrn_getminmaxinfo(_DWORD *a1)
{
    _DWORD *result; // eax

    result = a1;
    a1[2] = X.right - X.left;
    a1[3] = X.bottom - X.top;
    a1[4] = X.left;
    a1[5] = X.top;
    return result;
}

//----- (01003F98) --------------------------------------------------------
void __stdcall fullscrn_paint()
{
    int v0; // ST04_4
    int v1; // eax

    if ( fullscrn_screen_mode )
    {
        if ( (dword_1024EEC & 0x8000) == 0 && dword_1024EEC )
        {
            if ( dword_1024EEC & 1 )
            {
                v0 = GetSystemMetrics(15);
                sub_1003F10(0, 0, Rect.right - 1, v0);
            }
        }
        else
        {
            if ( dword_1024EE8 )
                v1 = GetSystemMetrics(15);
            else
                v1 = 0;
            sub_1003F10(0, -v1, Rect.right, v1 + Rect.bottom);
        }
    }
    render_paint();
    dword_1024EEC = 0;
}
// 1024EE4: using guessed type int fullscrn_screen_mode;
// 1024EE8: using guessed type int dword_1024EE8;
// 1024EEC: using guessed type int dword_1024EEC;
