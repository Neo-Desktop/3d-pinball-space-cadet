#include "pinball.h"

//----- (0101CD2B) --------------------------------------------------------
int __security_init_cookie()
{
signed int v0; // eax
DWORD v1; // esi
DWORD v2; // esi
DWORD v3; // esi
int result; // eax
LARGE_INTEGER PerformanceCount; // [esp+0h] [ebp-10h]
struct _FILETIME SystemTimeAsFileTime; // [esp+8h] [ebp-8h]

v0 = __security_cookie;
if ( !__security_cookie || __security_cookie == 47936 )
{
GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
v1 = SystemTimeAsFileTime.dwLowDateTime ^ SystemTimeAsFileTime.dwHighDateTime;
v2 = GetCurrentProcessId() ^ v1;
v3 = GetCurrentThreadId() ^ v2;
LOWORD(v3) = GetTickCount() ^ v3;
QueryPerformanceCounter(&PerformanceCount);
v0 = (unsigned __int16)(v3 ^ LOWORD(PerformanceCount.LowPart) ^ WORD2(PerformanceCount.QuadPart));
if ( !((unsigned __int16)v3 ^ (unsigned __int16)(LOWORD(PerformanceCount.LowPart) ^ WORD2(PerformanceCount.QuadPart))) )
v0 = 47936;
__security_cookie = v0;
}
result = ~v0;
__security_cookie_complement = result;
return result;
}
// 1024774: using guessed type int __security_cookie_complement;

//----- (0101CDB9) --------------------------------------------------------
BOOL __usercall __noreturn __report_gsfailure@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5@<edi>, int a6@<esi>)
{
unsigned int v6; // et0
HANDLE v7; // eax
int v9; // [esp+4h] [ebp-330h]
int v10; // [esp+10h] [ebp-324h]
int v11; // [esp+58h] [ebp-2DCh]
int v12; // [esp+5Ch] [ebp-2D8h]
__int16 v13; // [esp+E8h] [ebp-24Ch]
__int16 v14; // [esp+ECh] [ebp-248h]
__int16 v15; // [esp+F0h] [ebp-244h]
__int16 v16; // [esp+F4h] [ebp-240h]
int v17; // [esp+F8h] [ebp-23Ch]
int v18; // [esp+FCh] [ebp-238h]
int v19; // [esp+100h] [ebp-234h]
int v20; // [esp+104h] [ebp-230h]
int v21; // [esp+108h] [ebp-22Ch]
int v22; // [esp+10Ch] [ebp-228h]
int v23; // [esp+110h] [ebp-224h]
int v24; // [esp+114h] [ebp-220h]
__int16 v25; // [esp+118h] [ebp-21Ch]
unsigned int v26; // [esp+11Ch] [ebp-218h]
int *v27; // [esp+120h] [ebp-214h]
__int16 v28; // [esp+124h] [ebp-210h]
struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+32Ch] [ebp-8h]
int savedregs; // [esp+334h] [ebp+0h]
int retaddr; // [esp+338h] [ebp+4h]

v22 = a1;
v21 = a3;
v20 = a2;
v19 = a4;
v18 = a6;
v17 = a5;
v28 = __SS__;
v25 = __CS__;
v16 = __DS__;
v15 = __ES__;
v14 = __FS__;
v13 = __GS__;
v6 = __readeflags();
v26 = v6;
v12 = 65537;
v24 = retaddr;
v27 = &retaddr;
v23 = savedregs;
memset(&v9, 0, 0x50u);
v9 = -1073740791;
v10 = retaddr;
ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)&v9;
ExceptionInfo.ContextRecord = (PCONTEXT)&v12;
v11 = __security_cookie_complement;
SetUnhandledExceptionFilter(0);
UnhandledExceptionFilter(&ExceptionInfo);
v7 = GetCurrentProcess();
return TerminateProcess(v7, 0x502u);
}
// 1024774: using guessed type int __security_cookie_complement;
