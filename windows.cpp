//
// Created by neo on 2019-08-15.
//

#include "pinball.h"

//----- (0100833A) --------------------------------------------------------
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    CHAR *v4; // eax
    CHAR *v5; // eax
    int v6; // eax
    CHAR *v7; // ST24_4
    CHAR *v8; // eax
    signed int v9; // edi
    CHAR *v10; // eax
    CHAR *v11; // eax
    CHAR *v12; // ST2C_4
    CHAR *v13; // eax
    CHAR *v14; // eax
    CHAR *v15; // eax
    CHAR *v16; // eax
    HINSTANCE v17; // edi
    CHAR *v18; // ST28_4
    CHAR *v19; // eax
    CHAR *v20; // eax
    HWND v21; // eax
    CHAR *v22; // eax
    CHAR *v23; // eax
    HWND v24; // eax
    HMENU v26; // eax
    DWORD (__stdcall *v27)(); // edi
    DWORD v28; // eax
    HINSTANCE v29; // eax
    char *v30; // esi
    signed int v31; // edx
    signed int v32; // edi
    _BYTE *v33; // eax
    char v34; // cl
    char v35; // cl
    DWORD v36; // eax
    int v37; // eax
    HINSTANCE v38; // ST2C_4
    CHAR *v39; // eax
    WNDCLASSA WndClass; // [esp+14h] [ebp-13Ch]
    INITCOMMONCONTROLSEX picce; // [esp+3Ch] [ebp-114h]
    HINSTANCE v42; // [esp+44h] [ebp-10Ch]
    LPCSTR lpString1; // [esp+48h] [ebp-108h]
    int v44; // [esp+4Ch] [ebp-104h]
    HINSTANCE v45; // [esp+50h] [ebp-100h]
    char *Str; // [esp+54h] [ebp-FCh]
    int v47; // [esp+58h] [ebp-F8h]
    struct tagPOINT Point; // [esp+5Ch] [ebp-F4h]
    CHAR String1; // [esp+64h] [ebp-ECh]
    struct tagMSG Dest; // [esp+12Ch] [ebp-24h]

    v42 = hInstance;
    Str = lpCmdLine;
    v47 = 300;
    v45 = 0;
    memory_init((int)winmain_memalloc_failure);
    ++memory_critical_allocation;
    v4 = get_rc_string(165, 0);
    options_path_init(v4);
    v5 = get_rc_string(166, 0);
    if ( (signed int)options_get_int((DWORD)v5, "Table Version", (HKEY)1) <= 1 )
    {
        Point.y = memoryallocate(0x1F4u);
        if ( !Point.y )
        {
            LABEL_3:
            options_path_uninit();
            return 0;
        }
        v10 = get_rc_string(166, 0);
        options_set_int((HKEY)v10, "Table Version", 1u);
        GetModuleFileNameA(hinst, (LPSTR)Point.y, 0x1F4u);
        v11 = get_rc_string(166, 0);
        options_set_string((HKEY)v11, "Table Exe", (LPCSTR)Point.y);
        v12 = get_rc_string(169, 0);
        v13 = get_rc_string(166, 0);
        options_set_string((HKEY)v13, "Table Name", v12);
        v14 = get_rc_string(166, 0);
        options_set_string(0, "Last Table Played", v14);
        memoryfree(Point.y);
        Point.y = memoryallocate(0x1F4u);
        if ( Point.y )
        {
            lpString1 = (LPCSTR)memoryallocate(0x1F4u);
            if ( lpString1 )
            {
                v44 = 0;
                do
                {
                    _sprintf((char *)&Dest, "Table%d", v44);
                    options_get_string(0, (LPCSTR)&Dest, (LPSTR)Point.y, WindowName, 500);
                    if ( !*(_BYTE *)Point.y )
                        break;
                    options_get_string(Point.y, "Table Name", (LPSTR)lpString1, WindowName, 500);
                    v15 = get_rc_string(169, 0);
                    if ( !lstrcmpA(lpString1, v15) )
                        goto LABEL_15;
                    if ( !*lpString1 )
                        break;
                    ++v44;
                }
                while ( v44 < 32700 );
                v16 = get_rc_string(166, 0);
                options_set_string(0, (LPCSTR)&Dest, v16);
                LABEL_15:
                memoryfree((int)lpString1);
            }
            memoryfree(Point.y);
        }
    }
    else
    {
        v6 = memoryallocate(0x1F4u);
        Point.y = v6;
        if ( !v6 )
            goto LABEL_3;
        v7 = (CHAR *)v6;
        v8 = get_rc_string(166, 0);
        options_get_string((DWORD)v8, "Shell Exe", v7, WindowName, 500);
        v9 = WinExec((LPCSTR)Point.y, 5u);
        memoryfree(Point.y);
        if ( v9 >= 32 )
            goto LABEL_3;
    }
    --memory_critical_allocation;
    v17 = v42;
    dword_102556C = _strstr(Str, "-quick") != 0;
    hinst = v42;
    v18 = get_rc_string(168, 0);
    v19 = get_rc_string(166, 0);
    options_get_string((DWORD)v19, "Pinball Data", byte_102543C, v18, 300);
    iFrostUniqueMsg = RegisterWindowMessageA("PinballThemeSwitcherUniqueMsgString");
    v20 = get_rc_string(167, 0);
    v21 = FindWindowA(v20, 0);
    if ( v21 )
    {
        SendMessageA(v21, iFrostUniqueMsg, 0, 0);
        return 0;
    }
    if ( check_expiration_date() )
        return 0;
    picce.dwSize = 8;
    picce.dwICC = 5885;
    InitCommonControlsEx(&picce);
    WndClass.style = 4104;
    WndClass.lpfnWndProc = message_handler;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hInstance = v17;
    WndClass.hIcon = LoadIconA(v17, "ICON_1");
    WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
    WndClass.hbrBackground = (HBRUSH)16;
    WndClass.lpszMenuName = "MENU_1";
    WndClass.lpszClassName = get_rc_string(167, 0);
    Point.y = splash_screen((int)v17, "splash_bitmap", "splash_bitmap");
    RegisterClassA(&WndClass);
    FindShiftKeys();
    v22 = get_rc_string(38, 0);
    lstrcpyA(&String1, v22);
    v23 = get_rc_string(167, 0);
    v24 = CreateWindowExA(0, v23, &String1, 0x3CA0000u, 0, 0, 640, 480, 0, 0, v17, 0);
    hwnd_frame = v24;
    if ( !v24 )
    {
        PostQuitMessage(0);
        return 0;
    }
    v26 = GetMenu(v24);
    options_init(v26);
    pb_reset_table();
    pb_firsttime_setup();
    if ( _strstr(Str, "-fullscreen") )
    {
        dword_102822C = (HKEY)1;
        options_menu_check(0x193u, 1);
    }
    ShowWindow(hwnd_frame, nShowCmd);
    fullscrn_set_screen_mode((int)dword_102822C);
    UpdateWindow(hwnd_frame);
    if ( Point.y )
    {
        splash_hide(Point.y);
        splash_destroy(Point.y);
    }
    adjust_priority((int)dword_1028230);
    v27 = timeGetTime;
    Point.y = timeGetTime();
    while ( timeGetTime() >= Point.y && timeGetTime() - Point.y < 0x7D0 )
        PeekMessageA(&Dest, hwnd_frame, 0, 0, 1u);
    if ( _strstr(Str, "-demo") )
        pb_toggle_demo(0);
    else
        pb_replay_level(0);
    v28 = timeGetTime();
    LABEL_35:
    then = v28;
    while ( 1 )
    {
        if ( !v47 )
        {
            v47 = 300;
            if ( DispFrameRate )
            {
                v29 = (HINSTANCE)v27();
                v42 = v29;
                if ( v45 )
                {
                    Str = (char *)((char *)v29 - (char *)v45);
                    _sprintf(::Dest, "Frames/sec = %02.02f", 300.0 / ((double)(unsigned int)((char *)v29 - (char *)v45) * 0.001));
                    SetWindowTextA(hwnd_frame, ::Dest);
                    if ( DispGRhistory )
                    {
                        if ( !dword_10281C8 )
                        {
                            v30 = (char *)_malloc(0x400u);
                            v31 = 0;
                            v32 = 0;
                            v33 = v30 + 41;
                            do
                            {
                                if ( v31 + 10 >= 256 )
                                    break;
                                v34 = v32;
                                if ( v32 > 255 )
                                    v34 = -1;
                                v33[1] = v34;
                                v35 = v32;
                                if ( v32 > 255 )
                                    v35 = v31;
                                *v33 = v35;
                                *(v33 - 1) = v35;
                                v32 += 8;
                                v33 += 4;
                                ++v31;
                            }
                            while ( v31 < 256 );
                            gdrv_display_palette((int)v30);
                            _free(v30);
                            gdrv_create_bitmap((int)&gfr_display, 400, 15);
                            v27 = timeGetTime;
                        }
                        gdrv_blit((int)&gfr_display, 0, 0, 0, 0, 300, 10);
                        gdrv_fill_bitmap(0, &gfr_display, 0x12Cu, 10, 0, 0, 0);
                    }
                }
                v45 = v42;
            }
            else
            {
                v45 = 0;
            }
        }
        Sound_Idle();
        if ( !sub_10082A9() || bQuit )
            break;
        if ( has_focus )
        {
            if ( mouse_down )
            {
                now = v27();
                if ( now - then >= 2 )
                {
                    GetCursorPos(&Point);
                    pb_ballset(last_mouse_x - Point.x, Point.y - last_mouse_y);
                    SetCursorPos(last_mouse_x, last_mouse_y);
                }
            }
            if ( !single_step )
            {
                v36 = v27();
                now = v36;
                if ( no_time_loss )
                {
                    then = v36;
                    no_time_loss = 0;
                }
                if ( v36 == then )
                {
                    Sleep(8u);
                }
                else if ( pb_frame(0, v36 - then) )
                {
                    if ( dword_10281C8 )
                    {
                        v37 = now - then + 10;
                        if ( v37 > 236 )
                            LOBYTE(v37) = -7;
                        gdrv_fill_bitmap(0, &gfr_display, 1u, 10, 299 - v47, 0, v37);
                    }
                    --v47;
                    v28 = now;
                    goto LABEL_35;
                }
            }
        }
    }
    gdrv_destroy_bitmap((int)&gfr_display);
    options_uninit();
    midi_music_shutdown();
    pb_uninit();
    Sound_Close();
    gdrv_uninit();
    DestroyWindow(hwnd_frame);
    options_path_uninit();
    v38 = hinst;
    v39 = get_rc_string(167, 0);
    UnregisterClassA(v39, v38);
    return return_value;
}
// 1024F04: using guessed type int memory_critical_allocation;
// 1024FD8: using guessed type int single_step;
// 1024FDC: using guessed type int bQuit;
// 1024FE0: using guessed type int DispFrameRate;
// 1024FE4: using guessed type int DispGRhistory;
// 1024FE8: using guessed type int mouse_down;
// 1024FEC: using guessed type int has_focus;
// 1024FF4: using guessed type int no_time_loss;
// 102556C: using guessed type int dword_102556C;
// 10281A0: using guessed type int then;
// 10281C8: using guessed type int dword_10281C8;
// 10281F0: using guessed type int now;
// 1028200: using guessed type int return_value;

//----- (010076BF) --------------------------------------------------------
int __stdcall make_path_name(LPSTR lpFilename, LPCSTR lpString2, DWORD nSize)
{
    DWORD v3; // eax
    CHAR *i; // ecx

    v3 = GetModuleFileNameA(hinst, lpFilename, nSize);
    if ( v3 && v3 != nSize )
    {
        for ( i = &lpFilename[v3]; i > lpFilename; --i )
        {
            if ( *i == 92 || *i == 58 )
            {
                i[1] = 0;
                break;
            }
            --v3;
        }
        if ( (signed int)(v3 + 13) < (signed int)nSize )
        {
            lstrcatA(lpFilename, lpString2);
            return 0;
        }
        lstrcatA(lpFilename, "?");
    }
    return 1;
}

//----- (01007918) --------------------------------------------------------
void __usercall winmain_pause(int a1) {
if ( fullscrn_screen_mode )
{
if ( single_step )
fullscrn_set_menu_mode(0);
else
fullscrn_set_menu_mode(1);
}
pb_pause_continue(a1);
no_time_loss = 1;
}
// 1024EE4: using guessed type int fullscrn_screen_mode;
// 1024FD8: using guessed type int single_step;
// 1024FF4: using guessed type int no_time_loss;

//----- (01007949) --------------------------------------------------------
void __usercall winmain_end_pause(int a1)
{
if ( single_step )
{
if ( fullscrn_screen_mode )
fullscrn_set_menu_mode(0);
pb_pause_continue(a1);
no_time_loss = 1;
}
}
// 1024EE4: using guessed type int fullscrn_screen_mode;
// 1024FD8: using guessed type int single_step;
// 1024FF4: using guessed type int no_time_loss;

//----- (01007976) --------------------------------------------------------
HCURSOR __usercall winmain_new_game(int a1)
{
HCURSOR v1; // eax
HCURSOR v2; // edi

winmain_end_pause(a1);
v1 = LoadCursorA(0, (LPCSTR)0x7F02);
v2 = SetCursor(v1);
pb_replay_level(0);
return SetCursor(v2);
}

//----- (010079A9) --------------------------------------------------------
void __stdcall __noreturn winmain_memalloc_failure()
{
    CHAR *v0; // ST08_4
    CHAR *v1; // eax

    midi_music_stop();
    Sound_Close();
    gdrv_uninit();
    v0 = get_rc_string(170, 0);
    v1 = get_rc_string(179, 0);
    MessageBoxA(0, v1, v0, 0x2030u);
    _exit(1);
}

//----- (010079ED) --------------------------------------------------------
HANDLE __stdcall adjust_priority(int a1)
{
    HANDLE result; // eax

    result = GetCurrentThread();
    switch ( a1 )
    {
        case -2:
            return (HANDLE)SetThreadPriority(result, -2);
        case -1:
            return (HANDLE)SetThreadPriority(result, -1);
        case 0:
            return (HANDLE)SetThreadPriority(result, 0);
        case 1:
            return (HANDLE)SetThreadPriority(result, 1);
        case 2:
            return (HANDLE)SetThreadPriority(result, 2);
        case 3:
            result = (HANDLE)SetThreadPriority(result, 15);
            break;
    }
    return result;
}

//----- (01007A3E) --------------------------------------------------------
LRESULT __stdcall message_handler(HWND hWnd, UINT Msg, WPARAM wParam, int a4)
{
    WPARAM v5; // ebx
    HWND v6; // eax
    HCURSOR v7; // eax
    HCURSOR v8; // ebx
    HKEY v9; // eax
    HKEY v10; // ST18_4
    HMENU v11; // eax
    HANDLE v12; // eax
    bool v13; // zf
    char *v14; // ebx
    CHAR *v15; // ST14_4
    CHAR *v16; // eax
    struct tagRECT Rect; // [esp+8h] [ebp-64h]
    int v18; // [esp+18h] [ebp-54h]
    LPARAM lParam; // [esp+1Ch] [ebp-50h]
    LPSTR lpString1; // [esp+20h] [ebp-4Ch]
    HWND v21; // [esp+24h] [ebp-48h]
    PAINTSTRUCT Paint; // [esp+28h] [ebp-44h]

    v21 = hWnd;
    lParam = a4;
    if ( Msg != iFrostUniqueMsg )
    {
        v5 = wParam;
        if ( Msg <= 0x1C )
        {
            if ( Msg == 28 )
            {
                if ( wParam )
                {
                    activated = 1;
                    Sound_Activate();
                    if ( phkResult && !single_step )
                        midi_play_pb_theme(0);
                    no_time_loss = 1;
                    adjust_priority((int)dword_1028230);
                }
                else
                {
                    activated = 0;
                    fullscrn_activate(0);
                    options_menu_check(0x193u, 0);
                    dword_102822C = 0;
                    v12 = GetCurrentThread();
                    SetThreadPriority(v12, 0);
                    Sound_Deactivate();
                    midi_music_stop();
                }
                return DefWindowProcA(v21, Msg, v5, lParam);
            }
            if ( Msg <= 8 )
            {
                if ( Msg != 8 )
                {
                    if ( Msg == 1 )
                    {
                        ++memory_critical_allocation;
                        v6 = GetDesktopWindow();
                        GetWindowRect(v6, &Rect);
                        v18 = Rect.right - Rect.left;
                        lpString1 = (LPSTR)(Rect.bottom - Rect.top);
                        pb_window_size(&v18, &lpString1);
                        v7 = LoadCursorA(0, (LPCSTR)0x7F02);
                        v8 = SetCursor(v7);
                        gdrv_init((int)hinst, v21);
                        v9 = options_get_int(0, "Voices", (HKEY)8);
                        if ( !Sound_Init(hinst, (int)v9, 0) )
                            options_menu_set(0xC9u, 0);
                        Sound_Activate();
                        if ( !dword_102556C && !midi_music_init(v21) )
                            options_menu_set(0xCAu, 0);
                        if ( pb_init() )
                            _exit(0);
                        SetCursor(v8);
                        v10 = options_get_int(0, "Change Display", (HKEY)1);
                        v11 = GetMenu(v21);
                        fullscrn_init(v18, (int)lpString1, (int)dword_102822C, v21, (int)v11, (int)v10);
                        --memory_critical_allocation;
                        v5 = wParam;
                        return DefWindowProcA(v21, Msg, v5, lParam);
                    }
                    if ( Msg != 2 )
                    {
                        if ( Msg != 3 )
                        {
                            if ( Msg == 7 )
                            {
                                has_focus = 1;
                                no_time_loss = 1;
                                gdrv_get_focus();
                                fullscrn_force_redraw();
                                pb_paint();
                            }
                            return DefWindowProcA(v21, Msg, v5, lParam);
                        }
                        goto LABEL_70;
                    }
                    goto LABEL_28;
                }
                has_focus = 0;
                gdrv_get_focus();
                pb_loose_focus();
                return DefWindowProcA(v21, Msg, v5, lParam);
            }
            switch ( Msg )
            {
                case 0xFu:
                    _BeginPaint(hWnd, &Paint);
                    fullscrn_paint();
                    EndPaint(hWnd, &Paint);
                    break;
                case 0x10u:
                case 0x12u:
                LABEL_28:
                    winmain_end_pause(wParam);
                    bQuit = 1;
                    PostQuitMessage(0);
                    fullscrn_shutdown();
                    return DefWindowProcA(v21, Msg, v5, lParam);
                case 0x14u:
                    break;
                default:
                    return DefWindowProcA(v21, Msg, v5, lParam);
            }
            return 0;
        }
        if ( Msg <= 0x11F )
        {
            if ( Msg == 287 )
            {
                if ( a4 )
                    return DefWindowProcA(v21, Msg, v5, lParam);
                if ( fullscrn_screen_mode )
                    fullscrn_set_menu_mode(0);
                return 0;
            }
            if ( Msg <= 0x104 )
            {
                switch ( Msg )
                {
                    case 0x104u:
                        no_time_loss = 1;
                        if ( fullscrn_screen_mode )
                            fullscrn_set_menu_mode(1);
                        return DefWindowProcA(v21, Msg, v5, lParam);
                    case 0x24u:
                        fullscrn_getminmaxinfo((_DWORD *)a4);
                        return DefWindowProcA(v21, Msg, v5, lParam);
                    case 0x7Eu:
                        if ( fullscrn_displaychange() )
                        {
                            dword_102822C = 0;
                            options_menu_check(0x193u, 0);
                        }
                        return DefWindowProcA(v21, Msg, v5, lParam);
                }
                if ( Msg != 256 )
                {
                    if ( Msg == 257 )
                        pb_keyup((HKEY)wParam);
                    return DefWindowProcA(v21, Msg, v5, lParam);
                }
                if ( !(a4 & 0x40000000) )
                    pb_keydown((HKEY)wParam);
                switch ( wParam )
                {
                    case 0x1Bu:
                        if ( dword_102822C )
                            options_toggle(0x193u);
                        SendMessageA(hwnd_frame, 0x112u, 0xF020u, 0);
                        break;
                    case 0x70u:
                        help_introduction((int)hinst, (int)v21);
                        break;
                    case 0x71u:
                        winmain_new_game(113);
                        break;
                    case 0x72u:
                        winmain_pause(114);
                        break;
                    case 0x73u:
                        options_toggle(0x193u);
                        break;
                    case 0x77u:
                        if ( !single_step )
                            winmain_pause(wParam);
                        options_keyboard();
                        break;
                }
                if ( !cheat_mode )
                    return DefWindowProcA(v21, Msg, v5, lParam);
                switch ( wParam )
                {
                    case 0x48u:
                        DispGRhistory = 1;
                        return DefWindowProcA(v21, Msg, v5, lParam);
                    case 0x59u:
                        SetWindowTextA(v21, "Pinball");
                        DispFrameRate = DispFrameRate == 0;
                        return DefWindowProcA(v21, Msg, v5, lParam);
                    case 0x70u:
                        pb_frame(112, 10);
                        return DefWindowProcA(v21, Msg, v5, lParam);
                }
                if ( wParam != 126 )
                    return DefWindowProcA(v21, Msg, v5, lParam);
                single_step = single_step == 0;
                v13 = single_step == 0;
                goto LABEL_69;
            }
            if ( Msg != 273 )
            {
                if ( Msg == 274 )
                {
                    if ( (wParam & 0xFFF0) == 61456 )
                    {
                        if ( fullscrn_screen_mode )
                            return 0;
                    }
                    else
                    {
                        if ( (wParam & 0xFFF0) == 61472 )
                        {
                            if ( !single_step )
                                winmain_pause(wParam);
                            return DefWindowProcA(v21, Msg, v5, lParam);
                        }
                        if ( (wParam & 0xFFF0) != 61728 )
                        {
                            if ( (wParam & 0xFFF0) == 61760 )
                                fullscrn_activate(0);
                            return DefWindowProcA(v21, Msg, v5, lParam);
                        }
                    }
                    winmain_end_pause(wParam);
                    return DefWindowProcA(v21, Msg, v5, lParam);
                }
                v13 = Msg == 278;
                LABEL_69:
                if ( v13 )
                {
                    LABEL_70:
                    no_time_loss = 1;
                    return DefWindowProcA(v21, Msg, v5, lParam);
                }
                return DefWindowProcA(v21, Msg, v5, lParam);
            }
            no_time_loss = 1;
            if ( wParam > 0x12D )
            {
                switch ( wParam )
                {
                    case 0x191u:
                        winmain_end_pause(wParam);
                        pb_launch_ball();
                        break;
                    case 0x192u:
                        winmain_pause(wParam);
                        break;
                    case 0x193u:
                        goto LABEL_130;
                    case 0x194u:
                        winmain_end_pause(wParam);
                        pb_toggle_demo(wParam);
                        break;
                    case 0x195u:
                        if ( !single_step )
                            winmain_pause(wParam);
                        lpString1 = (LPSTR)memoryallocate(0x1F4u);
                        if ( lpString1 )
                        {
                            v14 = (char *)memoryallocate(0x1F4u);
                            if ( v14 )
                            {
                                options_get_string(0, "Shell Exe", lpString1, WindowName, 500);
                                _sprintf(
                                        v14,
                                        "%s %s%lX  %s%lX",
                                        lpString1,
                                        "select=",
                                        hwnd_frame,
                                        "confirm=",
                                        (_DWORD)hwnd_frame
                                        * (_DWORD)hwnd_frame
                                        * (_DWORD)hwnd_frame
                                        * (_DWORD)hwnd_frame
                                        * (_DWORD)hwnd_frame
                                        * (_DWORD)hwnd_frame
                                        * (_DWORD)hwnd_frame);
                                if ( (signed int)WinExec(v14, 5u) < 32 )
                                {
                                    v15 = get_rc_string(170, 0);
                                    v16 = get_rc_string(171, 0);
                                    MessageBoxA(hwnd_frame, v16, v15, 0x2010u);
                                }
                                memoryfree((int)lpString1);
                                memoryfree((int)v14);
                            }
                            else
                            {
                                memoryfree((int)lpString1);
                            }
                            v5 = wParam;
                        }
                        break;
                    case 0x196u:
                        goto LABEL_110;
                    case 0x198u:
                    case 0x199u:
                    case 0x19Au:
                    case 0x19Bu:
                        options_toggle(wParam);
                        winmain_new_game(wParam);
                        break;
                    default:
                        break;
                }
            }
            else
            {
                if ( wParam == 301 )
                {
                    if ( !single_step )
                        winmain_pause(301);
                    help_introduction((int)hinst, (int)hWnd);
                    return DefWindowProcA(v21, Msg, v5, lParam);
                }
                if ( wParam > 0x69 )
                {
                    if ( wParam == 106 )
                    {
                        pb_end_game();
                        return DefWindowProcA(v21, Msg, v5, lParam);
                    }
                    if ( wParam > 0xC8 )
                    {
                        if ( wParam <= 0xCA )
                        {
                            LABEL_130:
                            if ( !single_step )
                                winmain_pause(wParam);
                            options_toggle(wParam);
                        }
                        else if ( wParam == 204 )
                        {
                            LABEL_110:
                            if ( !single_step )
                                winmain_pause(wParam);
                            options_keyboard();
                        }
                    }
                }
                else
                {
                    switch ( wParam )
                    {
                        case 0x69u:
                            PostMessageA(v21, 0x12u, 0, 0);
                            return DefWindowProcA(v21, Msg, v5, lParam);
                        case 0x65u:
                            winmain_new_game(101);
                            return DefWindowProcA(v21, Msg, v5, lParam);
                        case 0x66u:
                            if ( !single_step )
                                winmain_pause(102);
                            a_dialog(hinst, hWnd, (int)"DIALOG_1");
                            return DefWindowProcA(v21, Msg, v5, lParam);
                        case 0x67u:
                            if ( !single_step )
                                winmain_pause(wParam);
                            pb_high_scores();
                            return DefWindowProcA(v21, Msg, v5, lParam);
                    }
                }
            }
            LABEL_144:
            if ( v5 == 1 )
                restart_midi_seq(lParam);
            return DefWindowProcA(v21, Msg, v5, lParam);
        }
        switch ( Msg )
        {
            case 0x201u:
                if ( dword_1025568 )
                {
                    if ( cheat_mode )
                    {
                        mouse_down = 1;
                        mouse_hsave = SetCursor(0);
                        lParam = fullscrn_convert_mouse_pos(a4);
                        last_mouse_x = (unsigned __int16)lParam;
                        last_mouse_y = (unsigned int)lParam >> 16;
                        SetCapture(v21);
                    }
                    return DefWindowProcA(v21, Msg, v5, lParam);
                }
                break;
            case 0x202u:
                if ( mouse_down )
                {
                    mouse_down = 0;
                    SetCursor(mouse_hsave);
                    ReleaseCapture();
                }
                return DefWindowProcA(v21, Msg, v5, lParam);
            case 0x204u:
            case 0x207u:
                if ( dword_1025568 )
                    return DefWindowProcA(v21, Msg, v5, lParam);
                break;
            case 0x218u:
                if ( wParam == 4 && dword_102822C )
                {
                    dword_102822C = 0;
                    options_menu_check(0x193u, 0);
                    fullscrn_set_screen_mode((int)dword_102822C);
                }
                return DefWindowProcA(v21, Msg, v5, lParam);
            case 0x311u:
                InvalidateRect(v21, 0, 0);
                return DefWindowProcA(v21, Msg, v5, lParam);
            case 0x3B9u:
                goto LABEL_144;
            default:
                return DefWindowProcA(v21, Msg, v5, lParam);
        }
        pb_mode_countdown(-1);
        return DefWindowProcA(v21, Msg, v5, lParam);
    }
    if ( IsIconic(hWnd) )
        ShowWindow(hWnd, 9);
    SetForegroundWindow(hWnd);
    return 0;
}
// 1024EE4: using guessed type int fullscrn_screen_mode;
// 1024F04: using guessed type int memory_critical_allocation;
// 1024FD8: using guessed type int single_step;
// 1024FDC: using guessed type int bQuit;
// 1024FE0: using guessed type int DispFrameRate;
// 1024FE4: using guessed type int DispGRhistory;
// 1024FE8: using guessed type int mouse_down;
// 1024FEC: using guessed type int has_focus;
// 1024FF0: using guessed type int activated;
// 1024FF4: using guessed type int no_time_loss;
// 1024FF8: using guessed type int cheat_mode;
// 1025568: using guessed type int dword_1025568;
// 102556C: using guessed type int dword_102556C;

//----- (010082A9) --------------------------------------------------------
signed int sub_10082A9()
{
    MSG Msg; // [esp+8h] [ebp-1Ch]

    if ( has_focus && !single_step )
    {
        while ( PeekMessageA(&Msg, 0, 0, 0, 1u) )
        {
            TranslateMessage(&Msg);
            DispatchMessageA(&Msg);
            if ( Msg.message == 18 )
                goto LABEL_9;
        }
        return 1;
    }
    GetMessageA(&Msg, hwnd_frame, 0, 0);
    TranslateMessage(&Msg);
    DispatchMessageA(&Msg);
    if ( Msg.message != 18 )
        return 1;
    LABEL_9:
    return_value = Msg.wParam;
    return 0;
}
// 1024FD8: using guessed type int single_step;
// 1024FEC: using guessed type int has_focus;
// 1028200: using guessed type int return_value;
