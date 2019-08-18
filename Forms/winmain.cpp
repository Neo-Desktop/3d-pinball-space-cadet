#include "../pinball.h"

//----- (01007918) --------------------------------------------------------
void winmain_pause(int a1) {
	if (fullscrn_screen_mode)
	{
		if (single_step)
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
void winmain_end_pause(int a1)
{
	if (single_step)
	{
		if (fullscrn_screen_mode)
			fullscrn_set_menu_mode(0);
		pb_pause_continue(a1);
		no_time_loss = 1;
	}
}
// 1024EE4: using guessed type int fullscrn_screen_mode;
// 1024FD8: using guessed type int single_step;
// 1024FF4: using guessed type int no_time_loss;

//----- (01007976) --------------------------------------------------------
HCURSOR winmain_new_game(int a1)
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
void winmain_memalloc_failure()
{
	CHAR* v0; // ST08_4
	CHAR* v1; // eax

	midi_music_stop();
	Sound_Close();
	gdrv_uninit();
	v0 = get_rc_string(170, 0);
	v1 = get_rc_string(179, 0);
	MessageBoxA(0, v1, v0, 0x2030u);
	_exit(1);
}

