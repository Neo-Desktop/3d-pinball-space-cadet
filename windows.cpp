//
// Created by neo on 2019-08-15.
//

#include "pinball.h"

//----- (0100833A) --------------------------------------------------------
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	WNDCLASSA WndClass; // [esp+14h] [ebp-13Ch]
	INITCOMMONCONTROLSEX picce; // [esp+3Ch] [ebp-114h]
	HINSTANCE debugThen = hInstance; // [esp+44h] [ebp-10Ch]
	LPCSTR lpString1; // [esp+48h] [ebp-108h]
	int v44; // [esp+4Ch] [ebp-104h]
	HINSTANCE debugFrameStart = 0; // [esp+50h] [ebp-100h]
	char* Str = lpCmdLine; // [esp+54h] [ebp-FCh]
	int splash_screen_timer = 300; // [esp+58h] [ebp-F8h]
	struct tagPOINT Point; // [esp+5Ch] [ebp-F4h]
	CHAR String1; // [esp+64h] [ebp-ECh]
	struct tagMSG Dest; // [esp+12Ch] [ebp-24h]

	memory_init((int)winmain_memalloc_failure);
	++memory_critical_allocation;
	options_path_init(get_rc_string(165, 0));

	Point.y = memoryallocate(500);
	if (!Point.y)
	{
		options_path_uninit();
		return 0;
	}

	if ((signed int)options_get_int((DWORD)get_rc_string(166, 0), "Table Version", (HKEY)1) <= 1)
	{
		options_set_int((HKEY)get_rc_string(166, 0), "Table Version", 1);
		GetModuleFileNameA(hinst, (LPSTR)Point.y, 0x1F4u);
		options_set_string((HKEY)get_rc_string(166, 0), "Table Exe", (LPCSTR)Point.y);
		options_set_string((HKEY)get_rc_string(166, 0), "Table Name", get_rc_string(169, 0));
		options_set_string(0, "Last Table Played", get_rc_string(166, 0));

		lpString1 = (LPCSTR)memoryallocate(500);
		if (lpString1)
		{
			for (int i = 0; i < 32700; i++)
			{
				_sprintf((char*)& Dest, "Table%d", i);
				options_get_string(0, (LPCSTR)& Dest, (LPSTR)Point.y, WindowName, 500);
				if (!*(_BYTE*)Point.y)
					break;
				options_get_string(Point.y, "Table Name", (LPSTR)lpString1, WindowName, 500);
				if (!lstrcmpA(lpString1, get_rc_string(169, 0)))
					goto SKIP_SET;
				if (!*lpString1)
					break;
			}
			options_set_string(0, (LPCSTR)& Dest, get_rc_string(166, 0));
		SKIP_SET:
			memoryfree((int)lpString1);
		}
		memoryfree(Point.y);
	}
	else
	{
		options_get_string((DWORD)get_rc_string(166, 0), "Shell Exe", Point.y, WindowName, 500);

		UINT retval = WinExec((LPCSTR)Point.y, 5u);
		memoryfree(Point.y);

		if (retval >= 32) {
			options_path_uninit();
			return 0;
		}
	}
	--memory_critical_allocation;

	play_midi_music = _strstr(Str, "-quick") != 0;
	hinst = hInstance;
	options_get_string((DWORD)get_rc_string(166, 0), "Pinball Data", byte_102543C, get_rc_string(168, 0), 300);
	iFrostUniqueMsg = RegisterWindowMessageA("PinballThemeSwitcherUniqueMsgString");

	HWIND window = FindWindowA(get_rc_string(167, 0), 0);
	if (window)
	{
		SendMessageA(window, iFrostUniqueMsg, 0, 0);
		return 0;
	}
	if (check_expiration_date())
		return 0;

	picce.dwSize = 8;
	picce.dwICC = 5885;
	InitCommonControlsEx(&picce);
	WndClass.style = 4104;
	WndClass.lpfnWndProc = message_handler;
	WndClass.cbClsExtra = 0;
	WndClass.cbWndExtra = 0;
	WndClass.hInstance = hInstance;
	WndClass.hIcon = LoadIconA(hInstance, "ICON_1");
	WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
	WndClass.hbrBackground = (HBRUSH)16;
	WndClass.lpszMenuName = "MENU_1";
	WndClass.lpszClassName = get_rc_string(167, 0);
	Point.y = splash_screen((int)hInstance, "splash_bitmap", "splash_bitmap");
	RegisterClassA(&WndClass);

	FindShiftKeys();

	lstrcpyA(&String1, get_rc_string(38, 0));
	hwnd_frame = CreateWindowExA(0, get_rc_string(167, 0), &String1, 0x3CA0000u, 0, 0, 640, 480, 0, 0, hInstance, 0);
	if (!hwnd_frame)
	{
		PostQuitMessage(0);
		return 0;
	}

	options_init(GetMenu(hwnd_frame));
	pb_reset_table();
	pb_firsttime_setup();

	if (_strstr(Str, "-fullscreen"))
	{
		fullscreen_toggle = (HKEY)1;
		options_menu_check(403, 1);
	}

	ShowWindow(hwnd_frame, nShowCmd);

	fullscrn_set_screen_mode((int)fullscreen_toggle);
	UpdateWindow(hwnd_frame);

	if (Point.y)
	{
		splash_hide(Point.y);
		splash_destroy(Point.y);
	}

	adjust_priority((int)application_priority);

	DWORD now = timeGetTime;
	Point.y = timeGetTime();
	while (timeGetTime() >= Point.y && timeGetTime() - Point.y < 0x7D0)
		PeekMessageA(&Dest, hwnd_frame, 0, 0, 1u);

	if (_strstr(Str, "-demo"))
		pb_toggle_demo(0);
	else
		pb_replay_level(0);

	then = timeGetTime();

	while (true)
	{
		if (!splash_screen_timer)
		{
			splash_screen_timer = 300;
			if (DispFrameRate)
			{
				HINSTANCE debugNow = (HINSTANCE)timeGetTime();
				debugThen = debugNow;
				if (debugFrameStart)
				{
					_sprintf((char*)& Dest, "Frames/sec = %02.02f", 300.0 / ((double)(unsigned int)((char*)debugNow - (char*)debugFrameStart) * 0.001));
					SetWindowTextA(hwnd_frame, (char*)& Dest);
					if (DispGRhistory)
					{
						if (!displaying_splashscreen)
						{
							char* pallette_array = (char*)_malloc(1024);
							int red, green, blue = 0;
							BYTE* current_color = pallette_array + 41; // eax

							for (int i = 0; i < 256; i++)
							{
								if (i + 10 >= 256)
									break;

								green = red;
								if (red > 255)
									green = -1;
								current_color[1] = green;
								blue = red;
								if (red > 255)
									blue = i;
								*current_color = blue;
								*(current_color - 1) = blue;
								red += 8;
								current_color += 4;
							}

							gdrv_display_palette((int)pallette_array);
							_free(pallette_array);
							gdrv_create_bitmap((int)& gfr_display, 400, 15);
							ticks = timeGetTime;
						}
						gdrv_blit((int)& gfr_display, 0, 0, 0, 0, 300, 10);
						gdrv_fill_bitmap(0, &gfr_display, 0x12Cu, 10, 0, 0, 0);
					}
				}
				debugFrameStart = debugThen;
			}
			else
			{
				debugFrameStart = 0;
			}
		}
		Sound_Idle();
		if (!message_loop() || bQuit)
			break;
		if (has_focus)
		{
			if (mouse_down)
			{
				now = ticks();
				if (now - then >= 2)
				{
					GetCursorPos(&Point);
					pb_ballset(last_mouse_x - Point.x, Point.y - last_mouse_y);
					SetCursorPos(last_mouse_x, last_mouse_y);
				}
			}
			if (!single_step)
			{
				int v36 = ;
				now = ticks();
				if (no_time_loss)
				{
					then = now;
					no_time_loss = 0;
				}
				if (v36 == then)
				{
					Sleep(8u);
				}
				else if (pb_frame(0, v36 - then))
				{
					if (displaying_splashscreen)
					{
						int diff = now - then + 10;
						if (diff > 236)
							LOBYTE(diff) = -7;
						gdrv_fill_bitmap(0, &gfr_display, 1u, 10, 299 - splash_screen_timer, 0, v37);
					}
					--splash_screen_timer;
					then = now;
					then = timeGetTime();
					continue;
				}
			}
		}
	}
	gdrv_destroy_bitmap((int)& gfr_display);
	options_uninit();
	midi_music_shutdown();
	pb_uninit();
	Sound_Close();
	gdrv_uninit();
	DestroyWindow(hwnd_frame);
	options_path_uninit();
	UnregisterClassA(get_rc_string(167, 0), hinst);
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
// 102556C: using guessed type int play_midi_music;
// 10281A0: using guessed type int then;
// 10281C8: using guessed type int displaying_splashscreen;
// 10281F0: using guessed type int now;
// 1028200: using guessed type int return_value;


//----- (010079ED) --------------------------------------------------------
HANDLE __stdcall adjust_priority(int a1)
{
	HANDLE result = GetCurrentThread();

	switch (a1)
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
LRESULT __stdcall message_handler(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	struct tagRECT Rect; // [esp+8h] [ebp-64h]
	int window_size; // [esp+18h] [ebp-54h]
	LPSTR window_size_string; // [esp+20h] [ebp-4Ch]
	PAINTSTRUCT Paint; // [esp+28h] [ebp-44h]

	if (Msg != iFrostUniqueMsg && Msg <= 0x1C)
	{
		if (Msg == 28)
		{
			if (wParam)
			{
				activated = 1;
				Sound_Activate();
				if (phkResult && !single_step)
					midi_play_pb_theme(0);
				no_time_loss = 1;
				adjust_priority((int)application_priority);
			}
			else
			{
				activated = 0;
				fullscrn_activate(0);
				options_menu_check(0x193u, 0);
				fullscreen_toggle = 0;
				SetThreadPriority(GetCurrentThread(), 0);
				Sound_Deactivate();
				midi_music_stop();
			}
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
		if (Msg <= 8)
		{
			if (Msg != 8)
			{
				if (Msg == 1)
				{
					++memory_critical_allocation;
					GetWindowRect(GetDesktopWindow(), &Rect);
					window_size = Rect.right - Rect.left;
					window_size_string = (LPSTR)(Rect.bottom - Rect.top);
					pb_window_size(&window_size, &window_size_string);
					HCURSOR window_cursor = SetCursor(LoadCursorA(0, (LPCSTR)0x7F02));
					gdrv_init((int)hinst, hWnd);
					if (!Sound_Init(hinst, (int)options_get_int(0, "Voices", (HKEY)8), 0)) {
						options_menu_set(0xC9u, 0);
					}
					Sound_Activate();
					if (!play_midi_music && !midi_music_init(hWnd)) {
						options_menu_set(0xCAu, 0);
					}
					if (pb_init()) {
						_exit(0);
					}
					SetCursor(window_cursor);
					fullscrn_init(window_size, (int)window_size_string, (int)fullscreen_toggle, hWnd, (int)GetMenu(hWnd), (int)options_get_int(0, "Change Display", (HKEY)1));
					--memory_critical_allocation;
					return DefWindowProcA(hWnd, Msg, wParam, lParam);
				}
				if (Msg != 2)
				{
					if (Msg != 3)
					{
						if (Msg == 7)
						{
							has_focus = 1;
							no_time_loss = 1;
							gdrv_get_focus();
							fullscrn_force_redraw();
							pb_paint();
						}
						return DefWindowProcA(hWnd, Msg, wParam, lParam);
					}
					no_time_loss = 1;
					return DefWindowProcA(hWnd, Msg, wParam, lParam);
				}
				winmain_end_pause(wParam);
				bQuit = 1;
				PostQuitMessage(0);
				fullscrn_shutdown();
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			has_focus = 0;
			gdrv_get_focus();
			pb_loose_focus();
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
		switch (Msg)
		{
		case 0xFu:
			_BeginPaint(hWnd, &Paint);
			fullscrn_paint();
			EndPaint(hWnd, &Paint);
			break;
		case 0x10u:
		case 0x12u:
			winmain_end_pause(wParam);
			bQuit = 1;
			PostQuitMessage(0);
			fullscrn_shutdown();
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		case 0x14u:
			break;
		default:
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
		return 0;
	}
	if (Msg != iFrostUniqueMsg && Msg <= 0x11F)
	{
		if (Msg == 287)
		{
			if (lParam) {
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			if (fullscrn_screen_mode) {
				fullscrn_set_menu_mode(0);
			}
			return 0;
		}
		if (Msg <= 0x104)
		{
			switch (Msg)
			{
			case 0x104u:
				no_time_loss = 1;
				if (fullscrn_screen_mode) {
					fullscrn_set_menu_mode(1);
				}
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			case 0x24u:
				fullscrn_getminmaxinfo((_DWORD*)lParam);
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			case 0x7Eu:
				if (fullscrn_displaychange())
				{
					fullscreen_toggle = 0;
					options_menu_check(0x193u, 0);
				}
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			if (Msg != 256)
			{
				if (Msg == 257) {
					pb_keyup((HKEY)wParam);
				}
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			if (!(lParam & 0x40000000)) {
				pb_keydown((HKEY)wParam);
			}
			switch (wParam)
			{
			case 0x1Bu:
				if (fullscreen_toggle)
					options_toggle(0x193u);
				SendMessageA(hwnd_frame, 0x112u, 0xF020u, 0);
				break;
			case 0x70u:
				help_introduction((int)hinst, (int)hWnd);
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
				if (!single_step)
					winmain_pause(wParam);
				options_keyboard();
				break;
			}
			if (!cheat_mode)
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			switch (wParam)
			{
			case 0x48u:
				DispGRhistory = 1;
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			case 0x59u:
				SetWindowTextA(hWnd, "Pinball");
				DispFrameRate = DispFrameRate == 0;
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			case 0x70u:
				pb_frame(112, 10);
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			if (wParam != 126)
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			single_step = single_step == 0;
			if (single_step)
			{
				no_time_loss = 1;
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
		if (Msg != 273)
		{
			if (Msg == 274)
			{
				if ((wParam & 0xFFF0) == 61456)
				{
					if (fullscrn_screen_mode)
						return 0;
				}
				else
				{
					if ((wParam & 0xFFF0) == 61472)
					{
						if (!single_step)
							winmain_pause(wParam);
						return DefWindowProcA(hWnd, Msg, wParam, lParam);
					}
					if ((wParam & 0xFFF0) != 61728)
					{
						if ((wParam & 0xFFF0) == 61760)
							fullscrn_activate(0);
						return DefWindowProcA(hWnd, Msg, wParam, lParam);
					}
				}
				winmain_end_pause(wParam);
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			if (Msg == 278)
			{
				no_time_loss = 1;
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
		no_time_loss = 1;
		if (wParam > 0x12D)
		{
			switch (wParam)
			{
			case 0x191u:
				winmain_end_pause(wParam);
				pb_launch_ball();
				break;
			case 0x192u:
				winmain_pause(wParam);
				break;
			case 0x193u:
				if (!single_step)
					winmain_pause(wParam);
				options_toggle(wParam);
				break;
			case 0x194u:
				winmain_end_pause(wParam);
				pb_toggle_demo(wParam);
				break;
			case 0x195u:
				if (!single_step)
					winmain_pause(wParam);
				window_size_string = (LPSTR)memoryallocate(0x1F4u);
				if (window_size_string)
				{
					char* window_resize_string = (char*)memoryallocate(0x1F4u);
					if (window_resize_string)
					{
						options_get_string(0, "Shell Exe", window_size_string, WindowName, 500);
						_sprintf(
							window_resize_string,
							"%s %s%lX  %s%lX",
							window_size_string,
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
						if ((signed int)WinExec(window_resize_string, 5u) < 32)
						{
							MessageBoxA(hwnd_frame, get_rc_string(171, 0), get_rc_string(170, 0), 0x2010u);
						}
						memoryfree((int)window_size_string);
						memoryfree((int)window_resize_string);
					}
					else
					{
						memoryfree((int)window_size_string);
					}
					wParam = wParam;
				}
				break;
			case 0x196u:
				if (!single_step)
					winmain_pause(wParam);
				options_keyboard();
				break;
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
			if (wParam == 301)
			{
				if (!single_step)
					winmain_pause(301);
				help_introduction((int)hinst, (int)hWnd);
				return DefWindowProcA(hWnd, Msg, wParam, lParam);
			}
			if (wParam > 0x69)
			{
				if (wParam == 106)
				{
					pb_end_game();
					return DefWindowProcA(hWnd, Msg, wParam, lParam);
				}
				if (wParam > 0xC8)
				{
					if (wParam <= 0xCA)
					{
						if (!single_step)
							winmain_pause(wParam);
						options_toggle(wParam);
					}
					else if (wParam == 204)
					{
						if (!single_step)
							winmain_pause(wParam);
						options_keyboard();
					}
				}
			}
			else
			{
				switch (wParam)
				{
				case 0x69u:
					PostMessageA(hWnd, 0x12u, 0, 0);
					return DefWindowProcA(hWnd, Msg, wParam, lParam);
				case 0x65u:
					winmain_new_game(101);
					return DefWindowProcA(hWnd, Msg, wParam, lParam);
				case 0x66u:
					if (!single_step)
						winmain_pause(102);
					a_dialog(hinst, hWnd, (int)"DIALOG_1");
					return DefWindowProcA(hWnd, Msg, wParam, lParam);
				case 0x67u:
					if (!single_step)
						winmain_pause(wParam);
					pb_high_scores();
					return DefWindowProcA(hWnd, Msg, wParam, lParam);
				}
			}
		}
		if (wParam == 1)
			restart_midi_seq(lParam);
		return DefWindowProcA(hWnd, Msg, wParam, lParam);
	}
	switch (Msg)
	{
	case 0x201u:
		if (dword_1025568)
		{
			if (cheat_mode)
			{
				mouse_down = 1;
				mouse_hsave = SetCursor(0);
				lParam = fullscrn_convert_mouse_pos(lParam);
				last_mouse_x = (unsigned __int16)lParam;
				last_mouse_y = (unsigned int)lParam >> 16;
				SetCapture(hWnd);
			}
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
		break;
	case 0x202u:
		if (mouse_down)
		{
			mouse_down = 0;
			SetCursor(mouse_hsave);
			ReleaseCapture();
		}
		return DefWindowProcA(hWnd, Msg, wParam, lParam);
	case 0x204u:
	case 0x207u:
		if (dword_1025568)
			return DefWindowProcA(hWnd, Msg, wParam, lParam);
		break;
	case 0x218u:
		if (wParam == 4 && fullscreen_toggle)
		{
			fullscreen_toggle = 0;
			options_menu_check(0x193u, 0);
			fullscrn_set_screen_mode((int)fullscreen_toggle);
		}
		return DefWindowProcA(hWnd, Msg, wParam, lParam);
	case 0x311u:
		InvalidateRect(hWnd, 0, 0);
		return DefWindowProcA(hWnd, Msg, wParam, lParam);
	case 0x3B9u:
		if (wParam == 1)
			restart_midi_seq(lParam);
		return DefWindowProcA(hWnd, Msg, wParam, lParam);
	default:
		return DefWindowProcA(hWnd, Msg, wParam, lParam);
	}
	pb_mode_countdown(-1);
	return DefWindowProcA(hWnd, Msg, wParam, lParam);

	if (IsIconic(hWnd)) {
		ShowWindow(hWnd, 9);
	}

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
// 102556C: using guessed type int play_midi_music;

//----- (010082A9) --------------------------------------------------------
signed int message_loop()
{
	MSG Msg; // [esp+8h] [ebp-1Ch]

	if (has_focus && !single_step)
	{
		while (PeekMessageA(&Msg, 0, 0, 0, 1u))
		{
			TranslateMessage(&Msg);
			DispatchMessageA(&Msg);
			if (Msg.message == 18) {
				return_value = Msg.wParam;
				return 0;
			}
		}
		return 1;
	}
	GetMessageA(&Msg, hwnd_frame, 0, 0);
	TranslateMessage(&Msg);
	DispatchMessageA(&Msg);
	if (Msg.message != 18) {
		return 1;
	}
}
// 1024FD8: using guessed type int single_step;
// 1024FEC: using guessed type int has_focus;
// 1028200: using guessed type int return_value;
