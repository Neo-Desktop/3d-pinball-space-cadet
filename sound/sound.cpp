//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (010068F7) --------------------------------------------------------
LRESULT __stdcall SoundCallBackWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    signed int v5; // eax
    int v6; // esi
    int v7; // edi

    if ( Msg != 957 )
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    v5 = -1;
    v6 = 0;
    if ( num_channels > 0 )
    {
        v7 = 0;
        do
        {
            if ( dword_1024F1C[v7 + 8] == lParam && (v5 < 0 || dword_1024F1C[v7] < (unsigned int)dword_1024F1C[v5]) )
                v5 = v6;
            ++v6;
            ++v7;
        }
        while ( v6 < num_channels );
        if ( v5 >= 0 )
        {
            dword_1024F1C[v5] = 0;
            dword_1024F3C[v5] = 0;
        }
    }
    dword_1024F68(2, lParam, v5);
    return 0;
}
// 1024F68: using guessed type int (__stdcall *dword_1024F68)(_DWORD, _DWORD, _DWORD);
// 1028208: using guessed type int num_channels;


//----- (01006973) --------------------------------------------------------
int __stdcall Sound_Init(HINSTANCE hInstance, int a2, int a3)
{
    int v3; // ecx
    int i; // eax
    FILE *v5; // eax
    CHAR *v6; // eax
    _WORD *v7; // eax
    WNDCLASSA WndClass; // [esp+8h] [ebp-158h]
    char Filename; // [esp+30h] [ebp-130h]

    v3 = a2;
    if ( a2 > 8 )
        v3 = 8;
    num_channels = v3;
    if ( dword_1024F64 || pMem )
        return 0;
    word_1024F18 = -1;
    for ( i = 0; i < v3; ++i )
    {
        dword_1024F1C[i] = 0;
        dword_1024F3C[i] = 0;
    }
    dword_1024F68 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))a3;
    if ( !a3 )
        dword_1024F68 = nullsub_1;
    make_path_name(&Filename, "wavemix.inf", 0x12Cu);
    v5 = _fopen(&Filename, "r");
    if ( v5 )
    {
        _fclose(v5);
    }
    else
    {
        v6 = get_rc_string(42, 0);
        MessageBoxA(hwnd_frame, v6, WindowName, 0x2000u);
    }
    WndClass.style = 0;
    WndClass.lpfnWndProc = SoundCallBackWndProc;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hInstance = hInstance;
    WndClass.hIcon = 0;
    WndClass.hCursor = 0;
    WndClass.hbrBackground = 0;
    WndClass.lpszMenuName = 0;
    WndClass.lpszClassName = "WaveMixSoundGuy";
    RegisterClassA(&WndClass);
    dword_1024F64 = CreateWindowExA(0, "WaveMixSoundGuy", 0, 0x80000000, 2147483648, 0, 2147483648, 0, 0, 0, hInstance, 0);
    if ( !dword_1024F64 )
        return 0;
    dword_1024F60 = hInstance;
    v7 = (_WORD *)WaveMixInit();
    pMem = v7;
    if ( !v7 )
        return 0;
    WaveMixOpenChannel(v7, num_channels, 2u);
    return 1;
}
// 10068EF: using guessed type int __stdcall nullsub_1(int, int, int);
// 1024F18: using guessed type __int16 word_1024F18;
// 1024F68: using guessed type int (__stdcall *dword_1024F68)(_DWORD, _DWORD, _DWORD);
// 1028208: using guessed type int num_channels;

//----- (010076BF) --------------------------------------------------------
int __stdcall make_path_name(LPSTR lpFilename, LPCSTR lpString2, DWORD nSize)
{
	CHAR* i; // ecx

	DWORD ModuleFileName = GetModuleFileNameA(hinst, lpFilename, nSize);
	if (ModuleFileName && ModuleFileName != nSize)
	{
		for (i = &lpFilename[ModuleFileName]; i > lpFilename; --i)
		{
			if (*i == 92 || *i == 58)
			{
				i[1] = 0;
				break;
			}
			--ModuleFileName;
		}
		if ((ModuleFileName + 13) < nSize)
		{
			lstrcatA(lpFilename, lpString2);
			return 0;
		}
		lstrcatA(lpFilename, "?");
	}
	return 1;
}

//----- (01006AF6) --------------------------------------------------------
HLOCAL __stdcall Sound_Close()
{
    HLOCAL result; // eax

    if ( dword_1024F64 )
    {
        DestroyWindow(dword_1024F64);
        dword_1024F64 = 0;
    }
    result = (HLOCAL)pMem;
    if ( pMem )
    {
        WaveMixCloseChannel(pMem, 0, 1);
        result = WaveMixCloseSession((HLOCAL)pMem);
        pMem = 0;
    }
    return result;
}

//----- (01006B38) --------------------------------------------------------
CHAR *__stdcall Sound_LoadWaveFile(LPCSTR lpName)
{
    CHAR *result; // eax

    if ( pMem )
        result = WaveMixOpenWave(pMem, lpName, dword_1024F60, 1);
    else
        result = 0;
    return result;
}

//----- (01006B64) --------------------------------------------------------
LPCVOID __stdcall Sound_FreeSound(LPCVOID pMem)
{
    LPCVOID result; // eax

    if ( pMem )
    {
        result = ::pMem;
        if ( ::pMem )
            result = (LPCVOID)WaveMixFreeWave((int)::pMem, pMem);
    }
    return result;
}

//----- (01006B8A) --------------------------------------------------------
LPCVOID __stdcall Sound_Deactivate()
{
    LPCVOID result; // eax

    result = pMem;
    if ( pMem )
        result = (LPCVOID)WaveMixActivate(pMem, 0);
    return result;
}

//----- (01006BA1) --------------------------------------------------------
LPCVOID __stdcall Sound_Activate()
{
    LPCVOID result; // eax

    result = pMem;
    if ( pMem )
        result = (LPCVOID)WaveMixActivate(pMem, 1);
    return result;
}

//----- (01006BB8) --------------------------------------------------------
int __stdcall Sound_Idle()
{
    int result; // eax

    if ( pMem )
        result = WaveMixPump();
    return result;
}

//----- (01006BCC) --------------------------------------------------------
signed int __stdcall Sound_Flush(signed int a1, int a2)
{
    signed int result; // eax
    int v3; // edi
    signed int v4; // esi

    if ( pMem )
    {
        result = num_channels;
        v3 = a2;
        if ( a2 >= num_channels )
            v3 = num_channels - 1;
        v4 = a1;
        if ( a1 >= 0 && v3 < num_channels )
        {
            while ( v4 <= v3 )
            {
                result = WaveMixFlushChannel(pMem, v4, 0);
                dword_1024F1C[v4] = 0;
                dword_1024F3C[v4++] = 0;
            }
        }
    }
    return result;
}
// 1028208: using guessed type int num_channels;

//----- (01006C26) --------------------------------------------------------
void __stdcall Sound_PlaySound(int a1, int a2, int a3, unsigned __int16 a4, __int16 a5)
{
    int v5; // ecx
    int v6; // edx
    int v7; // esi
    int v8; // edx
    int v9; // esi
    __int16 v10; // [esp+4h] [ebp-1Ch]
    LPCVOID v11; // [esp+6h] [ebp-1Ah]
    int v12; // [esp+Ah] [ebp-16h]
    int v13; // [esp+Eh] [ebp-12h]
    HWND v14; // [esp+12h] [ebp-Eh]
    int v15; // [esp+16h] [ebp-Ah]
    __int16 v16; // [esp+1Ah] [ebp-6h]

    v5 = a2;
    v6 = 0;
    v7 = a2;
    if ( pMem )
    {
        if ( a3 >= num_channels )
            a3 = num_channels - 1;
        if ( a1 && a2 >= 0 && a3 < num_channels )
        {
            if ( (a4 & 0x8000u) == 0 || num_channels <= 0 )
            {
                LABEL_11:
                if ( a2 < a3 )
                {
                    v8 = a2;
                    do
                    {
                        if ( (1 << ++v5) & (unsigned __int16)word_1024F18 && dword_1024F1C[v5] < (unsigned int)dword_1024F1C[v8] )
                        {
                            v7 = v5;
                            v8 = v5;
                        }
                    }
                    while ( v5 < a3 );
                }
                if ( (1 << v7) & (unsigned __int16)word_1024F18 )
                {
                    v11 = pMem;
                    v14 = dword_1024F64;
                    v15 = a4;
                    v10 = 28;
                    v16 = a5;
                    v12 = v7;
                    v13 = a1;
                    dword_1024F68(1, a1, v7);
                    v9 = v7;
                    dword_1024F1C[v9] = timeGetTime();
                    dword_1024F3C[v9] = a1;
                    WaveMixPlay((int)&v10);
                }
            }
            else
            {
                while ( dword_1024F3C[v6] != a1 )
                {
                    if ( ++v6 >= num_channels )
                        goto LABEL_11;
                }
            }
        }
    }
}
// 1024F18: using guessed type __int16 word_1024F18;
// 1024F68: using guessed type int (__stdcall *dword_1024F68)(_DWORD, _DWORD, _DWORD);
// 1028208: using guessed type int num_channels;

//----- (01006D34) --------------------------------------------------------
void __stdcall Sound_Enable(signed int a1, int a2, int a3)
{
    int v3; // edi
    signed int v4; // esi
    signed int v5; // eax

    if ( pMem )
    {
        v3 = a2;
        if ( a2 >= num_channels )
            v3 = num_channels - 1;
        v4 = a1;
        if ( a1 >= 0 && v3 < num_channels )
        {
            while ( v4 <= v3 )
            {
                v5 = 1 << v4;
                if ( a3 )
                {
                    word_1024F18 |= v5;
                }
                else
                {
                    word_1024F18 &= ~(_WORD)v5;
                    Sound_Flush(v4, v4);
                }
                ++v4;
            }
        }
    }
}
// 1024F18: using guessed type __int16 word_1024F18;
// 1028208: using guessed type int num_channels;
