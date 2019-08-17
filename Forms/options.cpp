//
// Created by neo on 2019-08-15.
//

#include "pinball.h"

//----- (010034B6) --------------------------------------------------------
CHAR *__stdcall options_path_init(LPCSTR lpString)
{
    int v1; // eax
    CHAR *result; // eax

    v1 = lstrlenA(lpString);
    result = (CHAR *)memoryallocate(v1 + 1);
    lpString2 = result;
    if ( result )
        result = lstrcpyA(result, lpString);
    return result;
}

//----- (010034E7) --------------------------------------------------------
void __stdcall options_path_uninit()
{
    if ( lpString2 )
        memoryfree((int)lpString2);
    lpString2 = 0;
}

//----- (01003503) --------------------------------------------------------
LPCSTR __stdcall options_path(LPCSTR lpString2)
{
    CHAR *v1; // eax

    v1 = lpString1;
    if ( !lpString1 )
    {
        v1 = (CHAR *)memoryallocate(0x7D0u);
        lpString1 = v1;
        if ( !v1 )
            return ::lpString2;
    }
    lstrcpyA(v1, ::lpString2);
    if ( lpString2 )
    {
        lstrcatA(lpString1, "\\");
        lstrcatA(lpString1, lpString2);
    }
    return lpString1;
}

//----- (0100356C) --------------------------------------------------------
void __stdcall options_path_free()
{
    if ( lpString1 )
        memoryfree((int)lpString1);
    lpString1 = 0;
}

//----- (01003588) --------------------------------------------------------
HKEY __stdcall options_get_int(DWORD cbData, LPCSTR lpValueName, HKEY phkResult)
{
    HKEY result; // eax
    const CHAR *v4; // eax
    DWORD dwDisposition; // [esp+4h] [ebp-8h]
    BYTE Data[4]; // [esp+8h] [ebp-4h]

    result = phkResult;
    *(_DWORD *)Data = phkResult;
    if ( lpString2 )
    {
        v4 = options_path((LPCSTR)cbData);
        if ( !RegCreateKeyExA(HKEY_CURRENT_USER, v4, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
        {
            cbData = 4;
            RegQueryValueExA(phkResult, lpValueName, 0, 0, Data, &cbData);
            RegCloseKey(phkResult);
        }
        options_path_free();
        result = *(HKEY *)Data;
    }
    return result;
}

//----- (01003601) --------------------------------------------------------
void __stdcall options_get_string(DWORD dwDisposition, LPCSTR lpValueName, LPSTR lpString1, LPCSTR lpString2, int iMaxLength)
{
    const CHAR *v5; // edi
    const CHAR *v6; // eax

    v5 = (const CHAR *)iMaxLength;
    lstrcpynA(lpString1, lpString2, iMaxLength);
    if ( ::lpString2 )
    {
        v6 = options_path((LPCSTR)dwDisposition);
        if ( !RegCreateKeyExA(HKEY_CURRENT_USER, v6, 0, 0, 0, 0xF003Fu, 0, (PHKEY)&iMaxLength, &dwDisposition) )
        {
            lpString2 = v5;
            RegQueryValueExA((HKEY)iMaxLength, lpValueName, 0, 0, (LPBYTE)lpString1, (LPDWORD)&lpString2);
            RegCloseKey((HKEY)iMaxLength);
        }
        options_path_free();
    }
}

//----- (0100367C) --------------------------------------------------------
void __stdcall options_set_int(HKEY phkResult, LPCSTR lpValueName, BYTE Data)
{
    const CHAR *v3; // eax
    DWORD dwDisposition; // [esp+4h] [ebp-4h]

    if ( lpString2 )
    {
        v3 = options_path((LPCSTR)phkResult);
        if ( !RegCreateKeyExA(HKEY_CURRENT_USER, v3, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
        {
            RegSetValueExA(phkResult, lpValueName, 0, 4u, &Data, 4u);
            RegCloseKey(phkResult);
        }
        options_path_free();
    }
}

//----- (010036E3) --------------------------------------------------------
void __stdcall options_set_string(HKEY phkResult, LPCSTR lpValueName, LPCSTR lpString)
{
    const CHAR *v3; // eax
    int v4; // eax
    DWORD dwDisposition; // [esp+4h] [ebp-4h]

    if ( lpString2 )
    {
        v3 = options_path((LPCSTR)phkResult);
        if ( !RegCreateKeyExA(HKEY_CURRENT_USER, v3, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
        {
            v4 = lstrlenA(lpString);
            RegSetValueExA(phkResult, lpValueName, 0, 1u, (const BYTE *)lpString, v4 + 1);
            RegCloseKey(phkResult);
        }
        options_path_free();
    }
}

//----- (010055F3) --------------------------------------------------------
void __stdcall options_uninit()
{
    options_set_int(0, "Sounds", (BYTE)options);
    options_set_int(0, "Music", (BYTE)phkResult);
    options_set_int(0, "FullScreen", (BYTE)dword_102822C);
    options_set_int(0, "Players", (BYTE)dword_1028234);
    options_set_int(0, "Left Flippper key", (BYTE)dword_1028238);
    options_set_int(0, "Right Flipper key", (BYTE)dword_102823C);
    options_set_int(0, "Plunger key", (BYTE)dword_1028240);
    options_set_int(0, "Left Table Bump key", (BYTE)dword_1028244);
    options_set_int(0, "Right Table Bump key", (BYTE)dword_1028248);
    options_set_int(0, "Bottom Table Bump key", (BYTE)dword_102824C);
}

//----- (010056A9) --------------------------------------------------------
HMENU __stdcall options_menu_set(UINT uIDEnableItem, int a2)
{
    HMENU result; // eax

    result = hMenu;
    if ( hMenu )
        result = (HMENU)EnableMenuItem(hMenu, uIDEnableItem, a2 == 0);
    return result;
}

//----- (010056D3) --------------------------------------------------------
HMENU __stdcall options_menu_check(UINT uIDCheckItem, int a2)
{
    HMENU result; // eax

    result = hMenu;
    if ( hMenu )
        result = (HMENU)CheckMenuItem(hMenu, uIDCheckItem, a2 != 0 ? 8 : 0);
    return result;
}

//----- (010056FF) --------------------------------------------------------
HMENU __stdcall options_toggle(UINT uIDCheckItem)
{
    HMENU result; // eax
    int v2; // ST08_4
    int v3; // esi
    bool v4; // zf
    int v5; // ST08_4

    switch ( uIDCheckItem )
    {
        case 0xC9u:
            v3 = options == 0;
            v5 = options == 0;
            options = (HKEY)(options == 0);
            Sound_Enable(0, 7, v5);
            return options_menu_check(uIDCheckItem, v3);
        case 0xCAu:
            v3 = phkResult == 0;
            v4 = phkResult != 0;
            phkResult = (HKEY)(phkResult == 0);
            if ( v4 )
                midi_music_stop();
            else
                midi_play_pb_theme(0);
            return options_menu_check(uIDCheckItem, v3);
        case 0x193u:
            v2 = dword_102822C == 0;
            dword_102822C = (HKEY)(dword_102822C == 0);
            v3 = v2;
            fullscrn_set_screen_mode(v2);
            return options_menu_check(uIDCheckItem, v3);
    }
    if ( (signed int)uIDCheckItem > 407 && (signed int)uIDCheckItem <= 411 )
    {
        dword_1028234 = (HKEY)(uIDCheckItem - 407);
        options_menu_check(0x198u, uIDCheckItem == 408);
        options_menu_check(0x199u, dword_1028234 == (HKEY)2);
        options_menu_check(0x19Au, dword_1028234 == (HKEY)3);
        result = options_menu_check(0x19Bu, dword_1028234 == (HKEY)4);
    }
    return result;
}

//----- (0100580C) --------------------------------------------------------
unsigned int __stdcall get_vk_key_name(__int16 a1, LPSTR lpString)
{
    LONG v2; // eax

    v2 = MapVirtualKeyA((unsigned __int16)a1, 0) << 16;
    if ( (unsigned __int16)a1 >= 0x21u && (unsigned __int16)a1 <= 0x2Eu )
        v2 |= 0x1000000u;
    return GetKeyNameTextA(v2, lpString, 19) != 0 ? (unsigned int)lpString : 0;
}

//----- (01005850) --------------------------------------------------------
BOOL __stdcall KeyMapDlgProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
    unsigned int v5; // eax
    LRESULT v6; // eax
    unsigned int v7; // eax
    LRESULT v8; // eax
    unsigned int v9; // eax
    LRESULT v10; // eax
    unsigned int v11; // eax
    LRESULT v12; // eax
    unsigned int v13; // eax
    LRESULT v14; // eax
    unsigned int v15; // eax
    LRESULT v16; // eax
    unsigned __int16 v17; // ax
    unsigned __int16 v18; // ax
    unsigned __int16 v19; // ax
    unsigned __int16 v20; // ax
    unsigned __int16 v21; // ax
    unsigned __int16 v22; // ax
    HKEY v23; // ebx
    __int16 *v24; // edi
    HKEY *v25; // esi
    CHAR *v26; // eax
    CHAR *v27; // eax
    __int16 v28; // cx
    __int16 v29; // dx
    INT_PTR v30; // eax
    __int16 v31; // [esp+Ch] [ebp-B0h]
    HKEY v32; // [esp+10h] [ebp-ACh]
    HKEY v33; // [esp+14h] [ebp-A8h]
    HKEY v34; // [esp+18h] [ebp-A4h]
    HKEY v35; // [esp+1Ch] [ebp-A0h]
    HKEY v36; // [esp+20h] [ebp-9Ch]
    HKEY v37; // [esp+24h] [ebp-98h]
    INT_PTR nResult; // [esp+28h] [ebp-94h]
    WPARAM v39; // [esp+2Ch] [ebp-90h]
    __int16 *i; // [esp+30h] [ebp-8Ch]
    LPARAM v41; // [esp+34h] [ebp-88h]
    WPARAM wParam; // [esp+38h] [ebp-84h]
    HWND hDlg; // [esp+3Ch] [ebp-80h]
    CHAR String1; // [esp+40h] [ebp-7Ch]
    CHAR lParam[20]; // [esp+A4h] [ebp-18h]

    hDlg = a1;
    switch ( a2 )
    {
        case 0x53u:
            WinHelpA(*(HWND *)(a4 + 12), "pinball.hlp", 0xCu, (ULONG_PTR)&unk_1023540);
            return 1;
        case 0x7Bu:
            WinHelpA((HWND)a3, "pinball.hlp", 0xAu, (ULONG_PTR)&unk_1023540);
            return 1;
        case 0x110u:
            i = &vk_list;
            if ( vk_list == -1 )
                return 1;
            while ( 1 )
            {
                v28 = *i;
                v29 = *i & 0x4000;
                v30 = (unsigned __int8)*i;
                v39 = (unsigned __int8)*i;
                v31 = v29;
                if ( v29 )
                {
                    wParam = 128;
                    nResult = (unsigned __int16)v30;
                    do
                    {
                        if ( nResult == MapVirtualKeyA((unsigned __int16)wParam, 2u) )
                            break;
                        ++wParam;
                    }
                    while ( (unsigned __int16)wParam < 0x100u );
                    LOWORD(v30) = wParam;
                    if ( (_WORD)wParam != 256 )
                    {
                        *(_WORD *)lParam = (unsigned __int8)v39;
                        v39 = wParam;
                        nResult = wParam;
                        LABEL_32:
                        v41 = (unsigned __int16)v30;
                        while ( 1 )
                        {
                            if ( v31 || get_vk_key_name(v30, lParam) )
                            {
                                wParam = (unsigned __int16)SendDlgItemMessageA(hDlg, 401, 0x14Au, 0xFFFFFFFF, (LPARAM)lParam);
                                SendDlgItemMessageA(hDlg, 401, 0x151u, wParam, v41);
                                if ( (HKEY)v41 == dword_1028238 )
                                    SendDlgItemMessageA(hDlg, 401, 0x14Eu, wParam, 0);
                                wParam = (unsigned __int16)SendDlgItemMessageA(hDlg, 402, 0x14Au, 0xFFFFFFFF, (LPARAM)lParam);
                                SendDlgItemMessageA(hDlg, 402, 0x151u, wParam, v41);
                                if ( (HKEY)v41 == dword_102823C )
                                    SendDlgItemMessageA(hDlg, 402, 0x14Eu, wParam, 0);
                                wParam = (unsigned __int16)SendDlgItemMessageA(hDlg, 403, 0x14Au, 0xFFFFFFFF, (LPARAM)lParam);
                                SendDlgItemMessageA(hDlg, 403, 0x151u, wParam, v41);
                                if ( (HKEY)v41 == dword_1028240 )
                                    SendDlgItemMessageA(hDlg, 403, 0x14Eu, wParam, 0);
                                wParam = (unsigned __int16)SendDlgItemMessageA(hDlg, 404, 0x14Au, 0xFFFFFFFF, (LPARAM)lParam);
                                SendDlgItemMessageA(hDlg, 404, 0x151u, wParam, v41);
                                if ( (HKEY)v41 == dword_1028244 )
                                    SendDlgItemMessageA(hDlg, 404, 0x14Eu, wParam, 0);
                                wParam = (unsigned __int16)SendDlgItemMessageA(hDlg, 405, 0x14Au, 0xFFFFFFFF, (LPARAM)lParam);
                                SendDlgItemMessageA(hDlg, 405, 0x151u, wParam, v41);
                                if ( (HKEY)v41 == dword_1028248 )
                                    SendDlgItemMessageA(hDlg, 405, 0x14Eu, wParam, 0);
                                wParam = (unsigned __int16)SendDlgItemMessageA(hDlg, 406, 0x14Au, 0xFFFFFFFF, (LPARAM)lParam);
                                SendDlgItemMessageA(hDlg, 406, 0x151u, wParam, v41);
                                if ( (HKEY)v41 == dword_102824C )
                                    SendDlgItemMessageA(hDlg, 406, 0x14Eu, wParam, 0);
                            }
                            ++v39;
                            ++v41;
                            if ( (unsigned __int16)v39 > (unsigned __int16)nResult )
                                break;
                            LOWORD(v30) = v39;
                        }
                        goto LABEL_49;
                    }
                }
                else
                {
                    if ( v28 >= 0 )
                    {
                        nResult = v30;
                    }
                    else
                    {
                        ++i;
                        LOWORD(nResult) = *i;
                    }
                    if ( (unsigned __int16)v30 <= (unsigned __int16)nResult )
                        goto LABEL_32;
                }
                LABEL_49:
                ++i;
                if ( *i == -1 )
                    return 1;
            }
    }
    if ( a2 != 273 )
        return 0;
    nResult = (unsigned __int16)a3;
    switch ( (unsigned __int16)a3 )
    {
        case 1u:
            v39 = 0;
            v17 = SendDlgItemMessageA(a1, 401, 0x147u, 0, 0);
            v32 = (HKEY)SendDlgItemMessageA(hDlg, 401, 0x150u, v17, 0);
            v18 = SendDlgItemMessageA(hDlg, 402, 0x147u, 0, 0);
            v33 = (HKEY)SendDlgItemMessageA(hDlg, 402, 0x150u, v18, 0);
            v19 = SendDlgItemMessageA(hDlg, 403, 0x147u, 0, 0);
            v34 = (HKEY)SendDlgItemMessageA(hDlg, 403, 0x150u, v19, 0);
            v20 = SendDlgItemMessageA(hDlg, 404, 0x147u, 0, 0);
            v35 = (HKEY)SendDlgItemMessageA(hDlg, 404, 0x150u, v20, 0);
            v21 = SendDlgItemMessageA(hDlg, 405, 0x147u, 0, 0);
            v36 = (HKEY)SendDlgItemMessageA(hDlg, 405, 0x150u, v21, 0);
            v22 = SendDlgItemMessageA(hDlg, 406, 0x147u, 0, 0);
            v23 = (HKEY)SendDlgItemMessageA(hDlg, 406, 0x150u, v22, 0);
            v37 = v23;
            v24 = (__int16 *)1;
            v25 = &v32;
            while ( !v39 )
            {
                for ( i = v24; (signed int)i < 6; i = (__int16 *)((char *)i + 1) )
                {
                    if ( v39 )
                        break;
                    if ( *v25 == *(&v32 + (_DWORD)i) )
                    {
                        v26 = get_rc_string(43, 0);
                        lstrcpyA(&String1, v26);
                        v27 = get_rc_string(39, 0);
                        MessageBoxA(hDlg, v27, &String1, 0x2000u);
                        v39 = 1;
                    }
                }
                v24 = (__int16 *)((char *)v24 + 1);
                ++v25;
                if ( (signed int)v24 - 1 >= 5 )
                {
                    if ( v39 )
                        return 1;
                    dword_1028238 = v32;
                    dword_102823C = v33;
                    dword_1028240 = v34;
                    dword_1028244 = v35;
                    dword_1028248 = v36;
                    dword_102824C = v23;
                    goto LABEL_20;
                }
            }
            break;
        case 2u:
        LABEL_20:
            EndDialog(hDlg, nResult);
            break;
        case 0x1F5u:
            v5 = get_vk_key_name(dword_1028250, lParam);
            v6 = SendDlgItemMessageA(hDlg, 401, 0x158u, 0, v5);
            SendDlgItemMessageA(hDlg, 401, 0x14Eu, v6, 0);
            v7 = get_vk_key_name(dword_1028254, lParam);
            v8 = SendDlgItemMessageA(hDlg, 402, 0x158u, 0, v7);
            SendDlgItemMessageA(hDlg, 402, 0x14Eu, v8, 0);
            v9 = get_vk_key_name(dword_1028258, lParam);
            v10 = SendDlgItemMessageA(hDlg, 403, 0x158u, 0, v9);
            SendDlgItemMessageA(hDlg, 403, 0x14Eu, v10, 0);
            v11 = get_vk_key_name(dword_102825C, lParam);
            v12 = SendDlgItemMessageA(hDlg, 404, 0x158u, 0, v11);
            SendDlgItemMessageA(hDlg, 404, 0x14Eu, v12, 0);
            v13 = get_vk_key_name(dword_1028260, lParam);
            v14 = SendDlgItemMessageA(hDlg, 405, 0x158u, 0, v13);
            SendDlgItemMessageA(hDlg, 405, 0x14Eu, v14, 0);
            v15 = get_vk_key_name(dword_1028264, lParam);
            v16 = SendDlgItemMessageA(hDlg, 406, 0x158u, 0, v15);
            SendDlgItemMessageA(hDlg, 406, 0x14Eu, v16, 0);
            break;
        default:
            return 0;
    }
    return 1;
}
// 1023508: using guessed type __int16 vk_list;

//----- (01005F45) --------------------------------------------------------
INT_PTR __stdcall options_keyboard()
{
    return DialogBoxParamA(hinst, "KEYMAPPER", hwnd_frame, KeyMapDlgProc, 0);
}

//----- (01005F69) --------------------------------------------------------
void __stdcall options_init(HMENU a1)
{
    CHAR *v1; // eax
    CHAR *v2; // edi

    hMenu = a1;
    options = (HKEY)1;
    phkResult = 0;
    dword_102822C = 0;
    dword_1028228 = (HKEY)5;
    dword_1028230 = (HKEY)2;
    *(_DWORD *)&dword_1028250 = 90;
    *(_DWORD *)&dword_1028254 = 191;
    *(_DWORD *)&dword_1028258 = 32;
    *(_DWORD *)&dword_102825C = 88;
    *(_DWORD *)&dword_1028260 = 190;
    *(_DWORD *)&dword_1028264 = 38;
    get_rc_int(159, (int *)&dword_1028250);
    get_rc_int(160, (int *)&dword_1028254);
    get_rc_int(161, (int *)&dword_1028258);
    get_rc_int(162, (int *)&dword_102825C);
    get_rc_int(163, (int *)&dword_1028260);
    get_rc_int(164, (int *)&dword_1028264);
    dword_1028238 = *(HKEY *)&dword_1028250;
    dword_102823C = *(HKEY *)&dword_1028254;
    dword_1028240 = *(HKEY *)&dword_1028258;
    dword_1028244 = *(HKEY *)&dword_102825C;
    dword_1028248 = *(HKEY *)&dword_1028260;
    dword_1028234 = (HKEY)1;
    dword_102824C = *(HKEY *)&dword_1028264;
    options = options_get_int(0, "Sounds", options);
    phkResult = options_get_int(0, "Music", phkResult);
    dword_1028228 = options_get_int(0, "Average", dword_1028228);
    dword_102822C = options_get_int(0, "FullScreen", dword_102822C);
    dword_1028230 = options_get_int(0, "Priority_Adjustment", dword_1028230);
    dword_1028234 = options_get_int(0, "Players", dword_1028234);
    dword_1028238 = options_get_int(0, "Left Flippper key", dword_1028238);
    dword_102823C = options_get_int(0, "Right Flipper key", dword_102823C);
    dword_1028240 = options_get_int(0, "Plunger key", dword_1028240);
    dword_1028244 = options_get_int(0, "Left Table Bump key", dword_1028244);
    dword_1028248 = options_get_int(0, "Right Table Bump key", dword_1028248);
    dword_102824C = options_get_int(0, "Bottom Table Bump key", dword_102824C);
    options_menu_check(0xC9u, (int)options);
    Sound_Enable(0, 7, (int)options);
    options_menu_check(0xCAu, (int)phkResult);
    options_menu_check(0x193u, (int)dword_102822C);
    options_menu_check(0x198u, dword_1028234 == (HKEY)1);
    options_menu_check(0x199u, dword_1028234 == (HKEY)2);
    options_menu_check(0x19Au, dword_1028234 == (HKEY)3);
    options_menu_check(0x19Bu, dword_1028234 == (HKEY)4);
    v1 = (CHAR *)memoryallocate(0x1F4u);
    v2 = v1;
    if ( v1 )
    {
        options_get_string(0, "Shell Exe", v1, WindowName, 500);
        if ( !*v2 )
        {
            if ( hMenu )
            {
                DeleteMenu(hMenu, 0x195u, 0);
                DrawMenuBar(hwnd_frame);
            }
        }
    }
}

//----- (010067F3) --------------------------------------------------------
int __stdcall FindShiftKeys()
{
    signed int v0; // esi
    int v1; // eax
    int result; // eax
    CHAR String; // [esp+Ch] [ebp-18h]

    RightShift = -1;
    LeftShift = -1;
    v0 = 0;
    do
    {
        if ( MapVirtualKeyA(v0, 1u) == 16 )
        {
            LeftShift = v0;
            break;
        }
        ++v0;
    }
    while ( v0 < 256 );
    while ( ++v0 < 256 )
    {
        if ( MapVirtualKeyA(v0, 1u) == 16 )
        {
            RightShift = v0;
            break;
        }
    }
    if ( !GetKeyNameTextA(LeftShift << 16, &String, 19) || !__strnicmp(&String, "right", 5u) )
    {
        v1 = RightShift;
    }
    else
    {
        v1 = LeftShift;
        LeftShift = RightShift;
        RightShift = v1;
    }
    result = GetKeyNameTextA(v1 << 16, &String, 19);
    if ( result )
    {
        result = __strnicmp(&String, "left", 4u);
        if ( result )
        {
            result = LeftShift;
            LeftShift = RightShift;
            RightShift = result;
        }
    }
    return result;
}
// 10235EC: using guessed type int LeftShift;
// 10235F0: using guessed type int RightShift;
