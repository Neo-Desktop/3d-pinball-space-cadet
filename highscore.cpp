//
// Created by neo on 2019-08-15.
//

#include "pinball.h"

//----- (01004C3C) --------------------------------------------------------
int __stdcall high_score_clear_table(int a1)
{
    int result; // eax
    signed int v2; // ecx

    result = a1;
    v2 = 5;
    do
    {
        *(_DWORD *)(result + 32) = -999;
        *(_BYTE *)result = 0;
        result += 36;
        --v2;
    }
    while ( v2 );
    return result;
}

//----- (01004C60) --------------------------------------------------------
signed int __stdcall high_score_get_score_position(int a1, int a2)
{
    signed int result; // eax
    _DWORD *v3; // ecx

    if ( a2 <= 0 )
        return -1;
    result = 0;
    v3 = (_DWORD *)(a1 + 32);
    while ( a2 <= *v3 )
    {
        ++result;
        v3 += 9;
        if ( result >= 5 )
            return -1;
    }
    return result;
}

//----- (01004C8D) --------------------------------------------------------
int __stdcall high_score_place_new_score_into(int a1, int a2, LPCSTR lpString, int a4)
{
    char *v4; // edi
    int v5; // eax
    int v6; // esi

    if ( a4 >= 0 )
    {
        if ( a4 <= 4 )
        {
            v4 = (char *)(a1 + 144);
            v5 = 5 - a4;
            do
            {
                --v5;
                qmemcpy(v4, v4 - 36, 0x24u);
                v4 -= 36;
            }
            while ( v5 );
        }
        v6 = a1 + 36 * a4;
        *(_DWORD *)(v6 + 32) = a2;
        if ( lstrlenA(lpString) >= 31 )
            *((_BYTE *)lpString + 31) = 0;
        lstrcpyA((LPSTR)v6, lpString);
        *(_BYTE *)(v6 + 31) = 0;
    }
    return a4;
}

//----- (01004CF9) --------------------------------------------------------
char *__stdcall scramble_number_string(int Val, char *DstBuf)
{
    return __ltoa(Val, DstBuf, 10);
}

//----- (01004D18) --------------------------------------------------------
signed int __stdcall high_score_read(int a1, int a2)
{
    int i; // eax
    CHAR *dwDisposition; // [esp+10h] [ebp-30h]
    CHAR *v5; // [esp+14h] [ebp-2Ch]
    signed int Val; // [esp+18h] [ebp-28h]
    int v7; // [esp+1Ch] [ebp-24h]
    LPSTR lpString1; // [esp+20h] [ebp-20h]
    CHAR *lpString2; // [esp+24h] [ebp-1Ch]
    char DstBuf; // [esp+28h] [ebp-18h]

    v7 = 0;
    high_score_clear_table(a1);
    lpString2 = (CHAR *)memoryallocate(0x12Cu);
    if ( !lpString2 )
        return 1;
    v5 = (CHAR *)memoryallocate(0x12Cu);
    Val = 0;
    lpString1 = (LPSTR)a1;
    dwDisposition = get_rc_string(166, 0);
    do
    {
        __itoa(Val, &DstBuf, 10);
        lstrcatA(&DstBuf, ".Name");
        options_get_string((DWORD)dwDisposition, &DstBuf, lpString2, WindowName, 32);
        lpString2[32] = 0;
        lstrcpyA(lpString1, lpString2);
        __itoa(Val, &DstBuf, 10);
        lstrcatA(&DstBuf, ".Score");
        options_get_string((DWORD)dwDisposition, &DstBuf, lpString2, WindowName, 300);
        *((_DWORD *)lpString1 + 8) = _atol(lpString2);
        for ( i = lstrlenA(lpString1); --i >= 0; v7 += lpString1[i] )
            ;
        v7 += *((_DWORD *)lpString1 + 8);
        ++Val;
        lpString1 += 36;
    }
    while ( Val < 5 );
    scramble_number_string(v7, lpString2);
    options_get_string((DWORD)dwDisposition, "Verification", v5, WindowName, 300);
    if ( lstrcmpA(lpString2, v5) )
        high_score_clear_table(a1);
    memoryfree((int)lpString2);
    memoryfree((int)v5);
    return 0;
}

//----- (01004E87) --------------------------------------------------------
int __stdcall high_score_write(LPCSTR lpString, int a2)
{
    LPCSTR v2; // ebx
    int i; // eax
    HKEY phkResult; // [esp+8h] [ebp-28h]
    signed int Val; // [esp+Ch] [ebp-24h]
    int v7; // [esp+10h] [ebp-20h]
    char *v8; // [esp+14h] [ebp-1Ch]
    char DstBuf; // [esp+18h] [ebp-18h]

    v2 = lpString;
    v7 = 0;
    v8 = (char *)memoryallocate(0x12Cu);
    if ( !v8 )
        return 1;
    Val = 0;
    phkResult = (HKEY)get_rc_string(166, 0);
    do
    {
        __itoa(Val, &DstBuf, 10);
        lstrcatA(&DstBuf, ".Name");
        options_set_string(phkResult, &DstBuf, v2);
        __itoa(Val, &DstBuf, 10);
        lstrcatA(&DstBuf, ".Score");
        __ltoa(*((_DWORD *)v2 + 8), v8, 10);
        options_set_string(phkResult, &DstBuf, v8);
        for ( i = lstrlenA(v2); --i >= 0; v7 += v2[i] )
            ;
        v7 += *((_DWORD *)v2 + 8);
        ++Val;
        v2 += 36;
    }
    while ( Val < 5 );
    scramble_number_string(v7, v8);
    options_set_string(phkResult, "Verification", v8);
    memoryfree((int)v8);
    return 0;
}

//----- (01004F99) --------------------------------------------------------
char *__stdcall score_string_format(int a1, char *a2)
{
    char *result; // eax
    DWORD dwDisposition; // [esp+4h] [ebp-20h]
    DWORD cbData; // [esp+8h] [ebp-1Ch]
    char *Dest; // [esp+Ch] [ebp-18h]
    HKEY phkResult; // [esp+10h] [ebp-14h]
    CHAR String1; // [esp+14h] [ebp-10h]

    result = a2;
    Dest = a2;
    if ( a1 == -999 )
    {
        *a2 = 0;
    }
    else
    {
        lstrcpyA(&String1, ",");
        if ( !RegCreateKeyExA(
                HKEY_CURRENT_USER,
                "Control Panel\\International",
                0,
                0,
                0,
                0xF003Fu,
                0,
                &phkResult,
                &dwDisposition) )
        {
            cbData = 10;
            RegQueryValueExA(phkResult, "sThousand", 0, 0, (LPBYTE)&String1, &cbData);
            RegCloseKey(phkResult);
        }
        phkResult = (HKEY)(a1 % 1000000000 / 1000000);
        if ( a1 / 1000000000 <= 0 )
        {
            if ( (signed int)phkResult <= 0 )
            {
                if ( a1 % 1000000 / 1000 <= 0 )
                    _sprintf(Dest, "%ld", a1);
                else
                    _sprintf(Dest, "%ld%s%03ld", a1 % 1000000 / 1000, &String1, a1 % 1000);
            }
            else
            {
                _sprintf(Dest, "%ld%s%03ld%s%03ld", phkResult, &String1, a1 % 1000000 / 1000, &String1, a1 % 1000);
            }
        }
        else
        {
            _sprintf(
                    Dest,
                    "%ld%s%03ld%s%03ld%s%03ld",
                    a1 / 1000000000,
                    &String1,
                    phkResult,
                    &String1,
                    a1 % 1000000 / 1000,
                    &String1,
                    a1 % 1000);
        }
        result = Dest;
    }
    return result;
}

//----- (010050E2) --------------------------------------------------------
void __stdcall hsdlg_show_score(HWND hDlg, LPCSTR lpString, int a3, int a4)
{
    HWND v4; // eax
    HWND v5; // eax
    CHAR String; // [esp+10h] [ebp-28h]

    if ( a4 < 5 )
    {
        score_string_format(a3, &String);
        if ( String )
        {
            v4 = GetDlgItem(hDlg, a4 + 401);
            SetWindowTextA(v4, lpString);
            v5 = GetDlgItem(hDlg, a4 + 501);
            SetWindowTextA(v5, &String);
        }
    }
}

//----- (01005159) --------------------------------------------------------
void __stdcall show_high_scores(HWND hDlg, LPCSTR lpString)
{
    LPCSTR v2; // edi
    signed int v3; // ebx
    int v4; // esi

    v2 = lpString;
    v3 = 0;
    v4 = 0;
    do
    {
        if ( high_score_dlg_enter_name == 1 && high_score_position == v4 )
        {
            hsdlg_show_score(hDlg, " ", high_score_dlg_score, v4);
            v3 = 1;
        }
        hsdlg_show_score(hDlg, v2, *((_DWORD *)v2 + 8), v4++ + v3);
        v2 += 36;
    }
    while ( v4 < 5 );
}
// 1028270: using guessed type int high_score_dlg_enter_name;

//----- (010051B5) --------------------------------------------------------
BOOL __stdcall HighScore(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
    CHAR *v4; // eax
    CHAR *v5; // eax
    HWND v7; // eax
    HWND v8; // edi
    HWND v9; // eax
    signed int nIDDlgItem; // [esp+Ch] [ebp-1D4h]
    CHAR String1; // [esp+14h] [ebp-1CCh]
    CHAR String; // [esp+DCh] [ebp-104h]
    char v13; // [esp+FBh] [ebp-E5h]

    switch ( a2 )
    {
        case 0x10u:
            SendMessageA(hWnd, 0x111u, 2u, 0);
            break;
        case 0x53u:
            WinHelpA(*(HWND *)(a4 + 12), "pinball.hlp", 0xCu, (ULONG_PTR)&unk_1023460);
            break;
        case 0x7Bu:
            WinHelpA((HWND)a3, "pinball.hlp", 0xAu, (ULONG_PTR)&unk_1023460);
            break;
        case 0x110u:
            show_high_scores(hWnd, high_score_dlg_hst);
            nIDDlgItem = 601;
            do
            {
                v7 = GetDlgItem(hWnd, nIDDlgItem);
                ShowWindow(v7, 0);
                ++nIDDlgItem;
            }
            while ( nIDDlgItem < 611 );
            if ( high_score_dlg_enter_name == 1 )
            {
                if ( high_score_position == -1 )
                {
                    high_score_dlg_enter_name = 0;
                    return 1;
                }
                v8 = GetDlgItem(hWnd, high_score_position + 601);
                ShowWindow(v8, 5);
                EnableWindow(v8, 1);
                SetFocus(v8);
                if ( high_score_default_name )
                {
                    SetWindowTextA(v8, high_score_default_name);
                    SendMessageA(v8, 0xB1u, 0, -1);
                }
                SendMessageA(v8, 0xC5u, 0x1Fu, 0);
            }
            else
            {
                SetFocus(hWnd);
            }
            v9 = GetParent(hWnd);
            if ( v9 )
                center_in(v9, hWnd);
            return 0;
        case 0x111u:
            if ( a3 == 1 )
            {
                if ( high_score_dlg_enter_name != 1 )
                    goto LABEL_15;
                GetDlgItemTextA(hWnd, high_score_position + 601, &String, 32);
                v13 = 0;
                high_score_place_new_score_into((int)high_score_dlg_hst, high_score_dlg_score, &String, high_score_position);
            }
            else if ( a3 != 2 )
            {
                if ( a3 == 112 )
                {
                    v4 = get_rc_string(41, 0);
                    lstrcpyA(&String1, v4);
                    v5 = get_rc_string(40, 0);
                    if ( MessageBoxA(hWnd, v5, &String1, 0x101u) == 1 )
                    {
                        high_score_clear_table((int)high_score_dlg_hst);
                        if ( high_score_dlg_enter_name )
                            EndDialog(hWnd, 1);
                        else
                            EndDialog(hWnd, 0);
                    }
                }
                return 0;
            }
            high_score_dlg_enter_name = 0;
        LABEL_15:
            EndDialog(hWnd, 0);
            return 1;
    }
    return 0;
}
// 1028270: using guessed type int high_score_dlg_enter_name;

//----- (01005412) --------------------------------------------------------
INT_PTR __stdcall show_high_score_dialog(const CHAR *a1)
{
    high_score_dlg_enter_name = 0;
    high_score_dlg_score = 0;
    high_score_dlg_hst = a1;
    return DialogBoxParamA(hinst, "dlg_highscores", hwnd_frame, HighScore, 0);
}
// 1028270: using guessed type int high_score_dlg_enter_name;

//----- (01005452) --------------------------------------------------------
INT_PTR __stdcall show_and_set_high_score_dialog(const CHAR *a1, int a2, int a3, const CHAR *a4)
{
    INT_PTR result; // eax

    high_score_position = a3;
    high_score_dlg_score = a2;
    high_score_dlg_hst = a1;
    high_score_dlg_enter_name = 1;
    high_score_default_name = a4;
    do
        result = DialogBoxParamA(hinst, "dlg_highscores", hwnd_frame, HighScore, 0);
    while ( result );
    return result;
}
// 1028270: using guessed type int high_score_dlg_enter_name;


