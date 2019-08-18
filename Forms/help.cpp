#include "../pinball.h"

//----- (0100772D) --------------------------------------------------------
void help_introduction(int a1, int a2)
{
    CHAR *v2; // ebx
    CHAR *v3; // eax
    CHAR *v4; // eax
    HWND v5; // eax
    CHAR *lpString1; // [esp+8h] [ebp-4h]

    v2 = (CHAR *)memoryallocate(0x1F4u);
    if ( v2 )
    {
        lpString1 = (CHAR *)memoryallocate(0x1F4u);
        if ( lpString1 )
        {
            v3 = get_rc_string(178, 0);
            options_get_string(0, "HelpFile", v2, v3, 500);
            v4 = get_rc_string(166, 0);
            options_get_string((DWORD)v4, "HelpFile", v2, v2, 500);
            lstrcpyA(lpString1, v2);
            memoryfree((int)v2);
            v5 = GetDesktopWindow();
            HtmlHelpA(v5, lpString1, 0, 0);
            memoryfree((int)lpString1);
        }
        else
        {
            memoryfree((int)v2);
        }
    }
}

//----- (0101CF1A) --------------------------------------------------------
HWND HtmlHelpA(HWND hwndCaller, LPCSTR pszFile, UINT uCommand, DWORD_PTR dwData)
{
HMODULE v4; // ecx
FARPROC v5; // eax
CHAR LibFileName; // [esp+Ch] [ebp-108h]

v4 = hModule;
if ( hModule || (HMODULE)dword_1025728 != hModule )
goto LABEL_13;
if ( sub_101CEB6((LPBYTE)&LibFileName) )
hModule = LoadLibraryA(&LibFileName);
v4 = hModule;
if ( hModule || (v4 = LoadLibraryA("hhctrl.ocx"), (hModule = v4) != 0) )
{
LABEL_13:
v5 = (FARPROC)pHtmlHelpA;
if ( pHtmlHelpA )
return (HWND)((int (*)(HWND, LPCSTR, UINT, DWORD_PTR))v5)(hwndCaller, pszFile, uCommand, dwData);
v5 = GetProcAddress(v4, (LPCSTR)0xE);
pHtmlHelpA = (HWND (*)(HWND, const char *, unsigned int, unsigned int))v5;
if ( v5 )
return (HWND)((int (*)(HWND, LPCSTR, UINT, DWORD_PTR))v5)(hwndCaller, pszFile, uCommand, dwData);
}
dword_1025728 = 1;
return 0;
}
// 1025720: using guessed type HWND (*pHtmlHelpA)(HWND, const char *, unsigned int, unsigned int);
// 1025728: using guessed type int dword_1025728;

//----- (0101CEB6) --------------------------------------------------------
int sub_101CEB6(LPBYTE lpData)
{
	signed int v1; // esi
	DWORD cbData; // [esp+4h] [ebp-8h]
	HKEY phkResult; // [esp+8h] [ebp-4h]

	v1 = 0;
	if (RegOpenKeyExA(
		HKEY_CLASSES_ROOT,
		"CLSID\\{ADB880A6-D8FF-11CF-9377-00AA003B7A11}\\InprocServer32",
		0,
		0x20019u,
		&phkResult))
	{
		return 0;
	}
	cbData = 260;
	if (!RegQueryValueExA(phkResult, WindowName, 0, 0, lpData, &cbData))
		v1 = 1;
	RegCloseKey(phkResult);
	return v1;
}
