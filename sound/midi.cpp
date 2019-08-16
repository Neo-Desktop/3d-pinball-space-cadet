//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (0100AF1F) --------------------------------------------------------
int __stdcall midi_music_init(HWND a1)
{
    CHAR *v1; // eax

    mciId = 0;
    midi_notify_hwnd = a1;
    v1 = get_rc_string(156, 0);
    lstrcpyA(byte_1025020, v1);
    dword_1025018 = 0;
    dword_1025014 = (int)byte_1025020;
    if ( !mciSendCommandA(0, 0x803u, 0x2002u, (DWORD_PTR)&mci_open_info) )
        midi_seq1_open = 1;
    return midi_seq1_open;
}
// 1025000: using guessed type int midi_seq1_open;
// 1025008: using guessed type HWND midi_notify_hwnd;
// 1025014: using guessed type int dword_1025014;
// 1025018: using guessed type int dword_1025018;

//----- (0100AF8E) --------------------------------------------------------
MCIERROR __stdcall midi_music_shutdown()
{
    MCIERROR result; // eax

    if ( midi_seq1_open )
        result = mciSendCommandA(mciId, 0x804u, 0, 0);
    midi_seq1_open = 0;
    return result;
}
// 1025000: using guessed type int midi_seq1_open;

//----- (0100AFB9) --------------------------------------------------------
MCIERROR __stdcall midi_music_stop()
{
    MCIERROR result; // eax

    result = 0;
    if ( midi_seq1_playing )
        result = mciSendCommandA(mciId, 0x808u, 0, 0);
    return result;
}
// 1025004: using guessed type int midi_seq1_playing;

//----- (0100AFDC) --------------------------------------------------------
MCIERROR __stdcall midi_play_pb_theme(int a1)
{
    MCIERROR v1; // esi
    DWORD_PTR dwParam2; // [esp+4h] [ebp-Ch]
    int v4; // [esp+8h] [ebp-8h]

    v1 = 0;
    midi_music_stop();
    v4 = 0;
    dwParam2 = (DWORD_PTR)midi_notify_hwnd;
    if ( !a1 && midi_seq1_open )
    {
        v1 = mciSendCommandA(mciId, 0x806u, 5u, (DWORD_PTR)&dwParam2);
        midi_seq1_playing = v1 == 0;
    }
    return v1;
}
// 1025000: using guessed type int midi_seq1_open;
// 1025004: using guessed type int midi_seq1_playing;
// 1025008: using guessed type HWND midi_notify_hwnd;

//----- (0100B035) --------------------------------------------------------
HWND __stdcall restart_midi_seq(int a1)
{
    HWND result; // eax
    DWORD_PTR dwParam2; // [esp+0h] [ebp-Ch]
    int v3; // [esp+4h] [ebp-8h]

    v3 = 0;
    result = midi_notify_hwnd;
    dwParam2 = (DWORD_PTR)midi_notify_hwnd;
    if ( midi_seq1_playing )
        result = (HWND)mciSendCommandA(mciId, 0x806u, 5u, (DWORD_PTR)&dwParam2);
    return result;
}
// 1025004: using guessed type int midi_seq1_playing;
// 1025008: using guessed type HWND midi_notify_hwnd;
