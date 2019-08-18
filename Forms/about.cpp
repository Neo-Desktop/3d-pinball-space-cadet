//
// Created by neo on 2019-08-15.


#include "../pinball.h"

//----- (0100789A) --------------------------------------------------------
INT a_dialog(HINSTANCE hInstance, HWND hWnd, int a3)
{
    CHAR *v3; // eax
    CHAR *v4; // eax
    HICON v5; // eax
    CHAR String1; // [esp+Ch] [ebp-194h]
    CHAR szOtherStuff; // [esp+D4h] [ebp-CCh]

    v3 = get_rc_string(38, 0);
    lstrcpyA(&String1, v3);
    v4 = get_rc_string(102, 0);
    lstrcpyA(&szOtherStuff, v4);
    v5 = LoadIconA(hInstance, "ICON_1");
    return ShellAboutA(hWnd, &String1, &szOtherStuff, v5);
}

