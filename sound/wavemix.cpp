#include "../pinball.h"

//----- (0101CFD0) --------------------------------------------------------
WORD* SessionToGlobalDataPtr(WORD* a1)
{
	if (a1 && *a1 == 21554 && a1[222] == 21554)
		return a1;
	MessageBeep(0xFFFFFFFF);
	_wsprintfA(aWavemixV23ByAn, "Invalid session handle 0x%04X passed to WaveMix API", a1);
	MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x30u);
	return 0;
}

//----- (0101D02C) --------------------------------------------------------
BOOL IsValidLPMIXWAVE(int a1)
{
	BOOL result; // eax

	result = a1;
	if (a1)
		result = *(WORD*)(a1 + 64) == 21554;
	return result;
}

//----- (0101D04E) --------------------------------------------------------
bool HasCurrentOutputFormat(const void* a1)
{
	return memcmp(a1, (const void*)(hMem + 380), 0x10u) == 0;
}

//----- (0101D079) --------------------------------------------------------
int DefaultPauseBlocks(int a1)
{
	int result; // eax

	if (GetVersion() < 0x80000000 || (unsigned __int8)GetVersion() < 4u)
		result = a1;
	else
		result = 0;
	return result;
}

//----- (0101D0A5) --------------------------------------------------------
unsigned int DefaultGoodWavePos(UINT_PTR uDeviceID)
{
	signed int v1; // eax
	unsigned int result; // eax
	struct tagWAVEOUTCAPSA pwoc; // [esp+0h] [ebp-38h]

	v1 = waveOutGetNumDevs();
	if ((signed int)uDeviceID > v1 || (uDeviceID & 0x80000000) != 0 || !v1 || waveOutGetDevCapsA(uDeviceID, &pwoc, 0x34u))
		result = 0;
	else
		result = ((unsigned int)LOBYTE(pwoc.dwSupport) >> 5) & 1;
	return result;
}

//----- (0101D0FC) --------------------------------------------------------
DWORD MyWaveOutGetPosition(HWAVEOUT hwo, int a2)
{
	struct mmtime_tag pmmt; // [esp+0h] [ebp-10h]

	if (!a2)
		return (timeGetTime() - *(DWORD*)(hMem + 416)) * *(DWORD*)(hMem + 388) / 0x3E8 & 0xFFFFFFF8;
	pmmt.wType = 4;
	waveOutGetPosition(hwo, &pmmt, 0xCu);
	return (*(int (**)(DWORD, DWORD))(hMem + 436))(pmmt.u.ms, *(DWORD*)(hMem + 424));
}

//----- (0101D178) --------------------------------------------------------
int AddFactor(int a1, int a2)
{
	return a1 + a2;
}

//----- (0101D18E) --------------------------------------------------------
int SubFactor(int a1, int a2)
{
	return a1 - a2;
}

//----- (0101D1A2) --------------------------------------------------------
unsigned int SetWaveOutPosition(unsigned int a1)
{
	LPARAM v1; // eax
	HWAVEOUT v2; // ecx
	DWORD v3; // ecx
	DWORD v4; // eax
	LPARAM v5; // ecx
	DWORD v6; // edi
	unsigned int result; // eax
	struct mmtime_tag pmmt; // [esp+0h] [ebp-10h]

	v1 = hMem;
	v2 = *(HWAVEOUT*)(hMem + 12);
	pmmt.wType = 4;
	if (v2)
	{
		waveOutGetPosition(v2, &pmmt, 0xCu);
		v3 = pmmt.u.ms;
		v1 = hMem;
	}
	else
	{
		v3 = 0;
		pmmt.u.ms = 0;
	}
	if (v3 < a1)
	{
		*(DWORD*)(v1 + 424) = a1 - v3;
		*(DWORD*)(v1 + 436) = AddFactor;
	}
	else
	{
		*(DWORD*)(v1 + 424) = v3 - a1;
		*(DWORD*)(v1 + 436) = SubFactor;
	}
	v4 = timeGetTime();
	v5 = hMem;
	v6 = v4;
	result = 1000 * a1 / *(DWORD*)(hMem + 388);
	*(DWORD*)(hMem + 412) = a1;
	*(DWORD*)(v5 + 416) = v6 - result;
	return result;
}

//----- (0101D251) --------------------------------------------------------
unsigned int MyWaveOutReset(HWAVEOUT hwo)
{
	unsigned int v1; // esi

	v1 = MyWaveOutGetPosition(hwo, *(DWORD*)(hMem + 420));
	waveOutReset(hwo);
	return SetWaveOutPosition(v1);
}

//----- (0101D285) --------------------------------------------------------
int cmixit(_BYTE* a1, char* a2, char* a3, int a4, unsigned int a5)
{
	int v5; // eax
	unsigned __int8* v6; // esi
	_BYTE* v7; // edi
	int v8; // ecx
	int v9; // edx
	_BYTE* v10; // edi
	unsigned __int8* v11; // esi
	int v12; // edx
	int v13; // ebx
	unsigned int* v14; // eax
	int v15; // ecx
	unsigned __int8* v16; // ecx
	int v17; // ecx
	bool v18; // zf
	unsigned __int8* v19; // esi
	int v20; // edi
	_BYTE* v21; // ecx
	int v22; // ebx
	unsigned int* v23; // ecx
	int v24; // eax
	int v26; // [esp+10h] [ebp-8h]
	int v27; // [esp+10h] [ebp-8h]
	unsigned int v28; // [esp+14h] [ebp-4h]
	unsigned int v29; // [esp+14h] [ebp-4h]
	int v30; // [esp+30h] [ebp+18h]
	int v31; // [esp+30h] [ebp+18h]

	LOWORD(v5) = hMem;
	if (*(WORD*)(hMem + 382) == 2)
	{
		if (a4 == 1)
		{
			v6 = *(unsigned __int8**)a2;
			LOWORD(v5) = (WORD)a3;
			if (a5)
			{
				v7 = a1;
				v5 = *(unsigned int*)a3 << 8;
				v8 = *((unsigned int*)a3 + 1) << 8;
				v9 = (unsigned int)(((unsigned int)(a5 - 1) >> 1) + 1);
				do
				{
					*v7 = byte_1025970[*v6 + v5];
					v10 = v7 + 1;
					v11 = v6 + 1;
					*v10 = byte_1025970[*v11 + v8];
					v7 = v10 + 1;
					v6 = v11 + 1;
					--v9;
				} while (v9);
			}
		}
		else
		{
			v28 = 0;
			LOWORD(v5) = a5;
			if (a5)
			{
				v26 = (unsigned int)(((unsigned int)(a5 - 1) >> 1) + 1);
				do
				{
					v12 = 128;
					v13 = 128;
					if (a4 > 0)
					{
						v14 = (unsigned int*)a3;
						v15 = a2 - a3;
						v30 = a4;
						while (1)
						{
							v16 = (unsigned __int8*)(*(DWORD*)((char*)v14 + v15) + v28);
							v13 = v13 + (unsigned __int8)byte_1025970[256 * *v14 + *v16] - 128;
							v17 = (unsigned __int8)byte_1025970[256 * v14[1] + v16[1]];
							v14 += 2;
							v18 = v30-- == 1;
							v12 = v12 + v17 - 128;
							if (v18)
								break;
							v15 = a2 - a3;
						}
						if (v13 >= 0)
						{
							if (v13 > 255)
								LOBYTE(v13) = -1;
						}
						else
						{
							LOBYTE(v13) = 0;
						}
						if (v12 >= 0)
						{
							if (v12 > 255)
								LOBYTE(v12) = -1;
						}
						else
						{
							LOBYTE(v12) = 0;
						}
					}
					v28 += 2;
					*a1 = v13;
					a1[1] = v12;
					LOWORD(v5) = (WORD)a1 + 2;
					v18 = v26-- == 1;
					a1 += 2;
				} while (!v18);
			}
		}
	}
	else if (a4 == 1)
	{
		v19 = *(unsigned __int8**)a2;
		v5 = (*(unsigned int*)a3 + *((unsigned int*)a3 + 1)) / 2;
		if (a5)
		{
			v20 = a5;
			v21 = a1;
			v5 = (unsigned int)v5 << 8;
			do
			{
				*v21++ = byte_1025970[*v19++ + v5];
				--v20;
			} while (v20);
		}
	}
	else
	{
		v29 = 0;
		if (a5)
		{
			v27 = a5;
			do
			{
				v22 = 128;
				if (a4 > 0)
				{
					v23 = (unsigned int*)a3;
					v31 = a4;
					do
					{
						v24 = (unsigned __int8)byte_1025970[256 * (unsigned int)((*v23 + v23[1]) / 2)
							+ *(unsigned __int8*)(*(DWORD*)((char*)v23 + a2 - a3) + v29)];
						v23 += 2;
						v18 = v31-- == 1;
						v22 = v22 + v24 - 128;
					} while (!v18);
					if (v22 >= 0)
					{
						if (v22 > 255)
							LOBYTE(v22) = -1;
					}
					else
					{
						LOBYTE(v22) = 0;
					}
				}
				v5 = (int)a1++;
				++v29;
				v18 = v27-- == 1;
				*(_BYTE*)v5 = v22;
			} while (!v18);
		}
	}
	return v5;
}

//----- (0101D491) --------------------------------------------------------
DWORD* InitChannelNodes()
{
	DWORD* result; // eax

	result = &unk_1026470;
	do
	{
		*result = result + 15;
		result += 15;
	} while ((signed int)result < (signed int)& unk_1027B68);
	dword_1027BA4 = 0;
	dword_1025964 = (int)& unk_1026470;
	return result;
}
// 1025964: using guessed type int dword_1025964;
// 1027BA4: using guessed type int dword_1027BA4;

//----- (0101D4B9) --------------------------------------------------------
int GetChannelNode()
{
	int result; // eax
	int v1; // ecx

	result = dword_1025964;
	if (dword_1025964)
	{
		v1 = *(DWORD*)dword_1025964;
		*(DWORD*)dword_1025964 = 0;
		dword_1025964 = v1;
	}
	return result;
}
// 1025964: using guessed type int dword_1025964;

//----- (0101D4D4) --------------------------------------------------------
DWORD* FreeChannelNode(DWORD* a1)
{
	DWORD* result; // eax

	result = a1;
	if (a1)
	{
		*a1 = dword_1025964;
		dword_1025964 = (int)a1;
	}
	return result;
}
// 1025964: using guessed type int dword_1025964;

//----- (0101D4F6) --------------------------------------------------------
struct wavehdr_tag* FreeWaveBlocks(HWAVEOUT hwo, int a2)
{
	signed int v2; // ebx
	LPCVOID* v3; // esi
	struct wavehdr_tag* result; // eax
	HGLOBAL v5; // eax
	HGLOBAL v6; // eax

	v2 = 0;
	do
	{
		v3 = (LPCVOID*)(a2 + 4 * v2);
		result = (struct wavehdr_tag*) * v3;
		if (*v3)
		{
			waveOutUnprepareHeader(hwo, result, 0x20u);
			v5 = GlobalHandle(*v3);
			GlobalUnlock(v5);
			v6 = GlobalHandle(*v3);
			result = (struct wavehdr_tag*)GlobalFree(v6);
			*v3 = 0;
		}
		++v2;
	} while (v2 < 10);
	return result;
}

//----- (0101D549) --------------------------------------------------------
int AllocWaveBlocks(HWAVEOUT hwo, int a2)
{
	signed int v2; // edi
	HGLOBAL v3; // eax
	DWORD* v4; // eax
	int v5; // ecx
	signed int v6; // edi
	int i; // edi
	HGLOBAL v9; // eax
	HGLOBAL v10; // eax

	v2 = 0;
	do
	{
		v3 = GlobalAlloc(0x2000u, 0x2B41u);
		v4 = GlobalLock(v3);
		v5 = a2 + 4 * v2;
		*(DWORD*)v5 = v4;
		if (!v4)
		{
			if (dword_1027BE4)
				MessageBoxA(
					0,
					"Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.",
					"WavMix32",
					0x30u);
			for (i = v2 - 1; i >= 0; --i)
			{
				v9 = GlobalHandle(*(LPCVOID*)(a2 + 4 * i));
				GlobalUnlock(v9);
				v10 = GlobalHandle(*(LPCVOID*)(a2 + 4 * i));
				GlobalFree(v10);
				*(DWORD*)(a2 + 4 * i) = 0;
			}
			return 0;
		}
		*v4 = v4 + 12;
		*(DWORD*)(*(DWORD*)v5 + 4) = *(DWORD*)(hMem + 396);
		*(DWORD*)(*(DWORD*)v5 + 16) = 0;
		*(DWORD*)(*(DWORD*)v5 + 20) = 0;
		*(DWORD*)(*(DWORD*)v5 + 32) = 1;
		++v2;
		*(DWORD*)(*(DWORD*)v5 + 36) = 0;
	} while (v2 < 10);
	v6 = 0;
	while (!waveOutPrepareHeader(hwo, *(LPWAVEHDR*)(a2 + 4 * v6), 0x20u))
	{
		*(DWORD*)(*(DWORD*)(a2 + 4 * v6++) + 16) |= 1u;
		if (v6 >= 10)
			return 1;
	}
	if (dword_1027BE4)
		MessageBoxA(0, "Unable to prepare wave header.", "WavMix32", 0x30u);
	FreeWaveBlocks(hwo, a2);
	return 0;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (0101D649) --------------------------------------------------------
DWORD* SwapWaveBlocks()
{
	DWORD* result; // eax

	result = (DWORD*)(hMem + 408);
	if (*(_UNKNOWN * *)(hMem + 408) == &unk_10257E4)
		* result = &unk_1025770;
	else
		*result = &unk_10257E4;
	return result;
}

//----- (0101D66B) --------------------------------------------------------
DWORD* GetWaveBlock()
{
	int v0; // edx
	int v1; // eax
	int v2; // esi
	DWORD* result; // eax
	int v4; // ecx

	v0 = *(DWORD*)(hMem + 400);
	v1 = 0;
	if (v0 > 0)
	{
		v2 = *(DWORD*)(hMem + 408);
		do
		{
			if (*(DWORD*)(*(DWORD*)v2 + 32))
				break;
			++v1;
			v2 += 4;
		} while (v1 < v0);
	}
	if (v1 >= v0)
		return 0;
	v4 = *(DWORD*)(hMem + 396);
	result = *(DWORD * *)(*(DWORD*)(hMem + 408) + 4 * v1);
	result[8] = 0;
	result[1] = v4;
	*result = result + 12;
	result[10] = dword_1025798;
	return result;
}
// 1025798: using guessed type int dword_1025798;

//----- (0101D6C8) --------------------------------------------------------
struct wavehdr_tag* RemoveFromPlayingQueue(struct wavehdr_tag* a1)
{
	struct wavehdr_tag* result; // eax
	LPWAVEHDR v2; // edx
	DWORD v3; // ecx
	bool v4; // zf

	if (!pwh)
		return 0;
	result = a1;
	if (a1 != pwh)
	{
		v2 = pwh;
		v3 = pwh[1].dwUser;
		if (v3)
		{
			do
			{
				if ((struct wavehdr_tag*)v3 == a1)
					break;
				v2 = (LPWAVEHDR)v3;
				v3 = *(DWORD*)(v3 + 44);
			} while (v3);
			if (v3)
			{
				v4 = v3 == dword_1027BF0;
				v2[1].dwUser = *(DWORD*)(v3 + 44);
				if (v4)
					dword_1027BF0 = (int)v2;
				goto LABEL_12;
			}
		}
		return 0;
	}
	pwh = (LPWAVEHDR)a1[1].dwUser;
	if (!pwh)
		dword_1027BF0 = 0;
LABEL_12:
	a1[1].dwUser = 0;
	return result;
}
// 1027BF0: using guessed type int dword_1027BF0;

//----- (0101D734) --------------------------------------------------------
LPWAVEHDR DestroyPlayQueue()
{
	struct wavehdr_tag* v0; // ST00_4
	LPWAVEHDR result; // eax

	while (1)
	{
		result = pwh;
		if (!pwh)
			break;
		v0 = pwh;
		pwh[1].lpData = (LPSTR)1;
		RemoveFromPlayingQueue(v0);
	}
	return result;
}

//----- (0101D752) --------------------------------------------------------
int ReleaseWaveDevice(int a1)
{
	int result; // eax
	HWND v2; // ST04_4

	if (*(DWORD*)(a1 + 16))
	{
		result = *(DWORD*)(a1 + 12);
		if (result)
		{
			MyWaveOutReset(*(HWAVEOUT*)(a1 + 12));
			DestroyPlayQueue();
			FreeWaveBlocks(*(HWAVEOUT*)(a1 + 12), (int)& unk_10257E4);
			FreeWaveBlocks(*(HWAVEOUT*)(a1 + 12), (int)& unk_1025770);
			waveOutClose(*(HWAVEOUT*)(a1 + 12));
			v2 = *(HWND*)(a1 + 4);
			*(DWORD*)(a1 + 12) = 0;
			result = DestroyWindow(v2);
			*(DWORD*)(a1 + 4) = 0;
		}
	}
	return result;
}

//----- (0101D7B1) --------------------------------------------------------
signed int GetWaveDevice()
{
	HWND v0; // eax
	LPARAM v1; // ecx
	MMRESULT v2; // edi
	HWND v4; // ST2C_4
	WAVEFORMATEX pwfx; // [esp+Ch] [ebp-14h]

	if (*(DWORD*)(hMem + 12))
		return 0;
	v0 = CreateWindowExA(0, "WavMix32", WindowName, 0x8000000u, 0, 0, 0, 0, 0, 0, dword_10257E0, 0);
	v1 = hMem;
	*(DWORD*)(hMem + 4) = v0;
	if (!v0)
	{
		if (dword_1027BE4)
			MessageBoxA(0, "Failed to create callback window.", "WavMix32", 0x30u);
		return 1;
	}
	pwfx.wFormatTag = *(WORD*)(v1 + 380);
	pwfx.nChannels = *(WORD*)(v1 + 382);
	pwfx.nSamplesPerSec = *(DWORD*)(v1 + 384);
	pwfx.nAvgBytesPerSec = *(DWORD*)(v1 + 388);
	pwfx.nBlockAlign = *(WORD*)(v1 + 392);
	pwfx.wBitsPerSample = *(WORD*)(v1 + 394);
	pwfx.cbSize = 0;
	v2 = waveOutOpen((LPHWAVEOUT)(v1 + 12), 0xFFFFFFFF, &pwfx, *(DWORD*)(v1 + 4), 0, 0x10000u);
	if (v2)
	{
		DestroyWindow(*(HWND*)(hMem + 4));
		*(DWORD*)(hMem + 4) = 0;
		return v2;
	}
	if (AllocWaveBlocks(*(HWAVEOUT*)(hMem + 12), (int)& unk_10257E4)
		&& AllocWaveBlocks(*(HWAVEOUT*)(hMem + 12), (int)& unk_1025770))
	{
		*(DWORD*)(hMem + 408) = &unk_10257E4;
		return 0;
	}
	FreeWaveBlocks(*(HWAVEOUT*)(hMem + 12), (int)& unk_10257E4);
	FreeWaveBlocks(*(HWAVEOUT*)(hMem + 12), (int)& unk_1025770);
	waveOutClose(*(HWAVEOUT*)(hMem + 12));
	v4 = *(HWND*)(hMem + 4);
	*(DWORD*)(hMem + 12) = 0;
	DestroyWindow(v4);
	return 1;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (0101D918) --------------------------------------------------------
signed int WaveMixOpenChannel(WORD* a1, signed int a2, unsigned int a3)
{
	WORD* v3; // eax
	signed int v4; // ecx
	int v6; // ecx
	DWORD* v7; // edx
	int v8; // ecx
	DWORD* v9; // edx

	v3 = SessionToGlobalDataPtr(a1);
	hMem = (LPARAM)v3;
	if (!v3)
		return 5;
	if (a3 > 2)
		return 10;
	v4 = a2;
	if (a3)
	{
		if (a3 == 2 && (a2 > 16 || a2 < 1))
			return 11;
	}
	else if (a2 >= 16)
	{
		return 11;
	}
	if (a3)
	{
		if (a3 == 1)
		{
			v4 = 16;
		}
		else if (a3 != 2)
		{
			return 10;
		}
		v6 = v4 - 1;
		if (v6 >= 0)
		{
			v7 = &v3[2 * v6 + 122];
			v8 = v6 + 1;
			do
			{
				if (*v7 == -1)
				{
					*v7 = 0;
					*((WORD*)v7 - 32) = v3[88];
					*((WORD*)v7 - 31) = v3[89];
					++* ((DWORD*)v3 + 77);
				}
				--v7;
				--v8;
			} while (v8);
		}
	}
	else
	{
		v9 = &v3[2 * a2 + 122];
		if (*v9 != -1)
			return 4;
		*v9 = 0;
		v3[2 * a2 + 90] = v3[88];
		v3[2 * a2 + 91] = v3[89];
		++* ((DWORD*)v3 + 77);
	}
	return 0;
}

//----- (0101D9E7) --------------------------------------------------------
LPWAVEHDR AddToPlayingQueue(struct wavehdr_tag* a1)
{
	LPWAVEHDR result; // eax

	result = pwh;
	a1[1].dwUser = 0;
	if (result)
	{
		*(DWORD*)(dword_1027BF0 + 44) = a1;
	}
	else
	{
		result = a1;
		pwh = a1;
	}
	dword_1027BF0 = (int)a1;
	return result;
}
// 1027BF0: using guessed type int dword_1027BF0;

//----- (0101DA1D) --------------------------------------------------------
int MixerPlay(LPWAVEHDR pwh, int a2)
{
	LPWAVEHDR v2; // edi
	LPARAM v4; // esi
	DWORD* v5; // ecx
	signed int v6; // ebx
	DWORD* v7; // eax
	int v8; // edx
	unsigned int v9; // ebx
	int v10; // eax
	unsigned int v11; // ecx
	int v12; // edi
	unsigned int v13; // eax
	unsigned int v14; // edx
	unsigned int v15; // ebx
	int v16; // eax
	unsigned int v17; // eax
	int v18; // eax
	int v19; // edx
	int v20; // edi
	unsigned int v21; // edx
	int* v22; // eax
	int v23; // ecx
	bool v24; // zf
	unsigned int v25; // [esp+4h] [ebp-1Ch]
	unsigned int v26; // [esp+8h] [ebp-18h]
	int v27; // [esp+Ch] [ebp-14h]
	LPSTR v28; // [esp+10h] [ebp-10h]
	int v29; // [esp+14h] [ebp-Ch]
	unsigned int v30; // [esp+18h] [ebp-8h]
	unsigned int v31; // [esp+1Ch] [ebp-4h]

	v2 = pwh;
	if (!pwh)
		return 0;
	v30 = -1;
	v31 = 0;
	v4 = hMem;
	v5 = (DWORD*)(hMem + 244);
	v6 = 16;
	do
	{
		v7 = (DWORD*)* v5;
		if (*v5 != -1 && v7)
		{
			do
			{
				if (v7[11] > * (DWORD*)(v4 + 412))
					break;
				v7 = (DWORD*)* v7;
			} while (v7);
			if (v7)
			{
				if (v7[10] < v30)
					v30 = v7[10];
				v8 = v31++;
				dword_1025730[v8] = (int)v7;
			}
		}
		++v5;
		--v6;
	} while (v6);
	if (!v31)
	{
		if (a2)
			pwh[1].lpData = (LPSTR)1;
		return 0;
	}
	v9 = *(DWORD*)(v4 + 412);
	v28 = pwh->lpData;
	LOWORD(v10) = *(WORD*)(v4 + 396);
	v25 = *(DWORD*)(v4 + 412);
	v27 = *(unsigned int*)(v4 + 396);
	while ((WORD)v10)
	{
		if (v9 >= v30)
		{
			v26 = 0;
			v29 = 0;
			v11 = v9 + (unsigned int)v10;
			if (!v31)
				goto LABEL_47;
			do
			{
				v12 = dword_1025730[v26];
				v13 = *(DWORD*)(v12 + 40);
				if (v13 <= v9)
				{
					if (*(DWORD*)(v12 + 44) < v11)
						v11 = *(DWORD*)(v12 + 44);
					v14 = v9 - v13;
					if (*(WORD*)(v12 + 26))
					{
						v15 = *(DWORD*)(v12 + 36);
						v14 %= v15;
						v16 = v15 - v14;
						v9 = v25;
						v17 = v25 + v16;
						if (v17 < v11)
							v11 = v17;
					}
					v18 = v14 + *(DWORD*)(v12 + 48);
					v19 = v29++;
					dword_10257A0[v19] = v18;
					word_1025810[2 * v19] = *(WORD*)(v12 + 56);
					word_1025812[2 * v19] = *(WORD*)(v12 + 58);
				}
				else if (v13 < v11)
				{
					v11 = *(DWORD*)(v12 + 40);
				}
				++v26;
			} while (v26 < v31);
			if (v29)
			{
				v20 = v11 - v9;
				(*(void (**)(LPSTR, int*, int*, int, unsigned int))(v4 + 428))(
					v28,
					dword_10257A0,
					word_1025810,
					v29,
					v11 - v9);
				v28 += v20;
				v27 -= v20;
				v30 = -1;
				v9 += v20;
				v25 = v9;
				v21 = 0;
				v22 = dword_1025730;
				do
				{
					if (!*v22)
						goto LABEL_57;
					do
					{
						if (*(DWORD*)(*v22 + 44) > v9)
							break;
						v23 = *(DWORD*)* v22;
						*v22 = v23;
					} while (v23);
					if (*v22)
					{
						if (*(DWORD*)(*v22 + 40) < v30)
							v30 = *(DWORD*)(*v22 + 40);
						++v21;
						++v22;
					}
					else
					{
					LABEL_57:
						v24 = v31-- == 1;
						*v22 = dword_1025730[v31];
						if (v24)
							break;
					}
				} while (v21 < v31);
				v4 = hMem;
			}
		}
		else
		{
			v10 = (unsigned int)v10;
			if ((unsigned int)v10 + v9 >= v30)
				v10 = v30 - v9;
			memset(v28, 0x80u, (unsigned int)v10);
			v28 += v10;
			v9 += v10;
			v27 -= v10;
			v25 = v9;
		}
		v2 = pwh;
	LABEL_47:
		LOWORD(v10) = v27;
	}
	v2[1].dwBufferLength = *(DWORD*)(v4 + 412);
	*(DWORD*)(v4 + 412) += *(DWORD*)(v4 + 396);
	if (a2)
	{
		AddToPlayingQueue(v2);
		if (waveOutWrite(*(HWAVEOUT*)(v4 + 12), v2, 0x20u))
		{
			if (dword_1027BE4)
				MessageBoxA(0, "Failed to write block to device", "WavMix32", 0x30u);
			v2[1].lpData = (LPSTR)1;
			RemoveFromPlayingQueue(v2);
		}
	}
	return 1;
}
// 1025810: using guessed type int word_1025810[];
// 1027BE4: using guessed type int dword_1027BE4;

//----- (0101DC8C) --------------------------------------------------------
DWORD FreePlayedBlocks()
{
	DWORD result; // eax
	LPARAM v1; // esi
	signed int v2; // ebx
	DWORD* v3; // edi
	HWND v4; // eax
	signed int v5; // edi
	DWORD v6; // [esp+Ch] [ebp-8h]
	WPARAM wParam; // [esp+10h] [ebp-4h]

	result = MyWaveOutGetPosition(*(HWAVEOUT*)(hMem + 12), *(DWORD*)(hMem + 420));
	wParam = 0;
	v1 = hMem;
	v6 = result;
	v2 = 244;
	do
	{
		v3 = *(DWORD * *)(v2 + v1);
		if (v3 && v3 != (DWORD*)-1)
		{
			do
			{
				result = v6;
				if (v6 < v3[11])
					break;
				*(DWORD*)(v2 + v1) = *v3;
				v4 = *(HWND*)((char*)v3 + 18);
				if (v4)
				{
					PostMessageA(v4, 0x3BDu, wParam, v3[8]);
					v1 = hMem;
				}
				result = (DWORD)FreeChannelNode(v3);
				v3 = *(DWORD * *)(v2 + v1);
			} while (v3);
		}
		++wParam;
		v2 += 4;
	} while (v2 < 308);
	if (!*(DWORD*)(v1 + 420) && !pwh)
	{
		v5 = 244;
		do
		{
			result = *(DWORD*)(v5 + v1);
			if (result)
			{
				if (result != -1)
				{
					result = PostMessageA(*(HWND*)(v1 + 4), 0x400u, 0, v1);
					v1 = hMem;
				}
			}
			v5 += 4;
		} while (v5 < 308);
	}
	return result;
}

//----- (0101DD5D) --------------------------------------------------------
int WaveMixPump()
{
	int result; // eax
	LPWAVEHDR i; // esi
	struct wavehdr_tag* v2; // eax

	result = dword_1025798;
	hMem = dword_1025798;
	if (dword_1025798)
	{
	LABEL_5:
		for (i = pwh; i; i = (LPWAVEHDR)i[1].dwUser)
		{
			if (i->dwFlags & 1)
			{
				RemoveFromPlayingQueue(i);
				i[1].lpData = (LPSTR)1;
				goto LABEL_5;
			}
		}
		FreePlayedBlocks();
		do
		{
			v2 = (struct wavehdr_tag*)GetWaveBlock();
			result = MixerPlay(v2, 1);
		} while (result);
	}
	return result;
}
// 1025798: using guessed type int dword_1025798;

//----- (0101DDAD) --------------------------------------------------------
LRESULT WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	if (Msg != 957 && Msg != 1024)
		return DefWindowProcA(hWnd, Msg, wParam, lParam);
	WaveMixPump();
	return 0;
}

//----- (0101DDD8) --------------------------------------------------------
signed int NoResetRemix(int a1, int a2)
{
	WaveMixPump();
	return 1;
}

//----- (0101DDE8) --------------------------------------------------------
signed int ResetRemix(int a1, int a2)
{
	struct wavehdr_tag* v2; // eax
	struct wavehdr_tag* v3; // esi
	int v4; // esi
	LPARAM v5; // eax
	bool v6; // zf
	bool v7; // sf
	LPWAVEHDR i; // esi
	signed int v10; // [esp+Ch] [ebp-8h]
	int v11; // [esp+10h] [ebp-4h]

	v10 = 0;
	v11 = 0;
	*(DWORD*)(hMem + 412) = a1;
	DestroyPlayQueue();
	SwapWaveBlocks();
	while (1)
	{
		v2 = (struct wavehdr_tag*)GetWaveBlock();
		v3 = v2;
		if (!v2)
			break;
		if (!MixerPlay(v2, 0))
		{
			v3[1].lpData = (LPSTR)1;
			break;
		}
		AddToPlayingQueue(v3);
	}
	v4 = *(DWORD*)(hMem + 412);
	MyWaveOutReset(*(HWAVEOUT*)(hMem + 12));
	v5 = hMem;
	v6 = *(DWORD*)(hMem + 404) == 0;
	v7 = *(DWORD*)(hMem + 404) < 0;
	*(DWORD*)(hMem + 412) = v4;
	if (!v7 && !v6)
	{
		waveOutPause(*(HWAVEOUT*)(v5 + 12));
		v5 = hMem;
		v10 = 1;
		v11 = 0;
	}
	for (i = pwh; i; i = (LPWAVEHDR)i[1].dwUser)
	{
		if (waveOutWrite(*(HWAVEOUT*)(v5 + 12), i, 0x20u))
		{
			if (dword_1027BE4)
				MessageBoxA(0, "Failed to write block to device", "WavMix32", 0x30u);
			i[1].lpData = (LPSTR)1;
			RemoveFromPlayingQueue(i);
		}
		v5 = hMem;
		if (v10)
		{
			if (++v11 >= *(DWORD*)(hMem + 404))
			{
				waveOutRestart(*(HWAVEOUT*)(hMem + 12));
				v5 = hMem;
				v10 = 0;
			}
		}
	}
	if (v10)
		waveOutRestart(*(HWAVEOUT*)(v5 + 12));
	return 1;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (0101DF07) --------------------------------------------------------
void ResetWavePosIfNoChannelData()
{
	signed int v0; // edx
	DWORD* v1; // eax

	if (!pwh)
	{
		v0 = 0;
		v1 = (DWORD*)(hMem + 244);
		while (!*v1 || *v1 == -1)
		{
			++v0;
			++v1;
			if (v0 >= 16)
			{
				SetWaveOutPosition(0);
				return;
			}
		}
	}
}

//----- (0101DF3D) --------------------------------------------------------
signed int WaveMixPlay(int a1)
{
	WORD* v1; // ebx
	const void* v2; // edi
	int v3; // eax
	signed int v4; // edx
	signed int v5; // ecx
	DWORD* v6; // eax
	bool v7; // zf
	int v8; // eax
	int v9; // edx
	int v10; // ecx
	int v11; // ecx
	int v12; // esi
	DWORD** v13; // ebx
	LPARAM v14; // esi
	DWORD v15; // eax
	DWORD* v16; // eax
	DWORD* v17; // edi
	int v18; // ecx
	int v19; // eax
	int v20; // bx
	DWORD** v21; // ebx
	DWORD* i; // eax
	DWORD* v23; // ST24_4
	DWORD v24; // eax
	DWORD* v25; // ecx
	DWORD* v26; // eax
	DWORD v27; // eax
	unsigned int v28; // ax
	int v29; // ebx
	signed int v30; // edi
	struct wavehdr_tag* v31; // eax
	int j; // eax
	struct wavehdr_tag* v33; // eax
	const CHAR* v35; // [esp-14h] [ebp-24h]
	signed int v36; // [esp+8h] [ebp-8h]
	signed int v37; // [esp+Ch] [ebp-4h]
	DWORD v38; // [esp+18h] [ebp+8h]

	++dword_1027BF8;
	v37 = 12;
	v36 = 0;
	if (dword_1027BF8 > 1)
		goto LABEL_97;
	if (!a1)
	{
		if (dword_1027BE4)
			MessageBoxA(0, "NULL parameters pointer passed to WaveMixPlay!", "WavMix32", 0x30u);
		v37 = 5;
		goto LABEL_97;
	}
	v1 = SessionToGlobalDataPtr(*(WORD * *)(a1 + 2));
	hMem = (LPARAM)v1;
	if (!v1)
	{
		if (!dword_1027BE4)
		{
		LABEL_10:
			v37 = 5;
			goto LABEL_97;
		}
		v35 = "Invalid session handle passed to WaveMixPlay";
	LABEL_9:
		MessageBoxA(0, v35, "WavMix32", 0x30u);
		goto LABEL_10;
	}
	v2 = *(const void**)(a1 + 10);
	if (!IsValidLPMIXWAVE(*(DWORD*)(a1 + 10)))
	{
		if (dword_1027BE4)
			MessageBoxA(0, "Invalid or NULL wave pointer passed to WaveMixPlay!", "WavMix32", 0x30u);
		goto LABEL_10;
	}
	LOBYTE(v3) = HasCurrentOutputFormat(v2);
	if (!v3)
	{
		_wsprintfA(
			aWavemixV23ByAn,
			"The LPMIXWAVE 0x%lx is not in the current output format, close the wave and reopen it.",
			v2);
		if (dword_1027BE4)
			MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x30u);
		v37 = 8;
		goto LABEL_97;
	}
	if (*((DWORD*)v1 + 4))
	{
		if (!*((DWORD*)v1 + 77))
		{
			if (!dword_1027BE4)
				goto LABEL_10;
			v35 = "You must open a channel before you can play a wave!";
			goto LABEL_9;
		}
		if (*(_BYTE*)(a1 + 18) & 2)
		{
			v4 = 0;
			v5 = 0;
			v6 = v1 + 156;
			do
			{
				if (*(v6 - 17) != -1)
				{
					if (!*(DWORD*)& v1[2 * v4 + 122])
						break;
					if (v5 != v4 && *v6 < *(DWORD*)& v1[2 * v4 + 156])
						v4 = v5;
				}
				++v5;
				++v6;
			} while (v5 < 16);
			*(DWORD*)(a1 + 6) = v4;
		}
		else
		{
			v4 = *(DWORD*)(a1 + 6);
		}
		++* ((DWORD*)v1 + 94);
		v7 = *(DWORD*)& v1[2 * v4 + 122] == -1;
		*(DWORD*)& v1[2 * v4 + 156] = *((DWORD*)v1 + 94);
		if (v7)
			goto LABEL_10;
		v8 = GetChannelNode();
		if (!v8)
			goto LABEL_97;
		qmemcpy((void*)(v8 + 4), (const void*)a1, 0x1Cu);
		v10 = *(DWORD*)(v8 + 14);
		*(DWORD*)(v8 + 32) = v10;
		*(DWORD*)(v8 + 36) = *(DWORD*)(v10 + 20);
		v11 = *(DWORD*)(v10 + 16);
		*(DWORD*)(v8 + 48) = v11;
		v12 = (unsigned int)v1[196];
		v13 = (DWORD * *)(v1 + 220);
		*(DWORD*)(v8 + 52) = *(DWORD*)(v8 + 36) + v11 - v12;
		*(DWORD*)(v8 + 10) = v9;
		if (*v13)
		{
			*(DWORD*)v8 = **v13;
			**v13 = v8;
			*v13 = (DWORD*)v8;
		}
		else
		{
			*v13 = (DWORD*)v8;
			*(DWORD*)v8 = v8;
		}
		if (!(*(_BYTE*)(v8 + 22) & 8))
		{
			ResetWavePosIfNoChannelData();
			v14 = hMem;
			if (*(signed int (**)(int, int))(hMem + 432) == ResetRemix)
			{
				v15 = MyWaveOutGetPosition(*(HWAVEOUT*)(hMem + 12), *(DWORD*)(hMem + 420));
				v14 = hMem;
			}
			else
			{
				v15 = *(DWORD*)(hMem + 412);
			}
			v38 = v15;
			if (!*(DWORD*)(v14 + 440))
				goto LABEL_84;
			do
			{
				v16 = *(DWORD * *)(v14 + 440);
				v17 = (DWORD*)* v16;
				if ((DWORD*)* v16 == v16)
					* (DWORD*)(v14 + 440) = 0;
				else
					*v16 = *v17;
				v18 = *(DWORD*)((char*)v17 + 22);
				v19 = *(DWORD*)((char*)v17 + 10);
				*v17 = 0;
				if (v18 & 0x10)
				{
					*((WORD*)v17 + 28) = *((WORD*)v17 + 14);
					v20 = *((WORD*)v17 + 15);
				}
				else
				{
					*((WORD*)v17 + 28) = *(WORD*)(v14 + 4 * v19 + 180);
					v20 = *(WORD*)(v14 + 4 * v19 + 182);
				}
				*((WORD*)v17 + 29) = v20;
				if (*((WORD*)v17 + 28) > 0xAu)
					* ((WORD*)v17 + 28) = 10;
				if (*((WORD*)v17 + 29) > 0xAu)
					* ((WORD*)v17 + 29) = 10;
				if (v18 & 1)
				{
					v21 = (DWORD * *)(v14 + 4 * v19 + 244);
					for (i = *v21; i; i = v23)
					{
						v23 = (DWORD*)* i;
						FreeChannelNode(i);
					}
					v7 = pwh == 0;
					*v21 = v17;
					if (!v7)
						v36 = 1;
					if (*((_BYTE*)v17 + 22) & 4)
						v24 = v38;
					else
						v24 = *(DWORD*)(v14 + 412);
					v17[10] = v24;
				}
				else
				{
					v25 = (DWORD*)(v14 + 4 * v19 + 244);
					v26 = (DWORD*)* v25;
					if (*v25)
					{
						while (*v26)
							v26 = (DWORD*)* v26;
						*v26 = v17;
						v27 = v26[11];
						if (*((_BYTE*)v17 + 22) & 4)
						{
							if (v27 <= v38)
								v27 = v38;
						}
						else if (*(DWORD*)(v14 + 412) > v27)
						{
							v27 = *(DWORD*)(v14 + 412);
						}
					}
					else
					{
						v27 = v38;
						*v25 = v17;
						if (!(*((_BYTE*)v17 + 22) & 4))
							v27 = *(DWORD*)(v14 + 412);
					}
					v17[10] = v27;
					if (*(DWORD*)(v14 + 412) > v17[10])
						v36 = 1;
				}
				v28 = *((WORD*)v17 + 13);
				if (v28 == -1)
					v17[11] = -1;
				else
					v17[11] = v17[10] + v17[9] * (v28 + 1) - *(unsigned int*)(v14 + 392);
			} while (*(DWORD*)(v14 + 440));
			if (!v36)
				goto LABEL_84;
			if (!(*(int (**)(DWORD, DWORD))(v14 + 432))(v38, 0))
			{
				v14 = hMem;
			LABEL_84:
				v29 = 0;
				if (pwh || *(DWORD*)(v14 + 404) <= 0)
				{
					v30 = 0;
				}
				else
				{
					waveOutPause(*(HWAVEOUT*)(v14 + 12));
					v30 = 1;
				}
				v31 = (struct wavehdr_tag*)GetWaveBlock();
				for (j = MixerPlay(v31, 1); j; j = MixerPlay(v33, 1))
				{
					if (v30)
					{
						if (++v29 >= *(DWORD*)(hMem + 404))
						{
							waveOutRestart(*(HWAVEOUT*)(hMem + 12));
							v30 = 0;
						}
					}
					v33 = (struct wavehdr_tag*)GetWaveBlock();
				}
				if (v30)
					waveOutRestart(*(HWAVEOUT*)(hMem + 12));
				goto LABEL_96;
			}
		}
	LABEL_96:
		v37 = 0;
		goto LABEL_97;
	}
	if (dword_1027BE4)
		MessageBoxA(0, "Wave device not allocated, call WaveMixActivate(hMixSession,TRUE)", "WavMix32", 0x30u);
	v37 = 4;
LABEL_97:
	--dword_1027BF8;
	return v37;
}
// 1027BE4: using guessed type int dword_1027BE4;
// 1027BF8: using guessed type int dword_1027BF8;

//----- (0101E373) --------------------------------------------------------
signed int WaveMixFlushChannel(WORD* a1, signed int a2, char a3)
{
	DWORD* v3; // ebx
	WORD* v4; // eax
	WORD* v5; // esi
	signed int v6; // ecx
	int v7; // eax
	DWORD** v8; // edi
	DWORD* v9; // eax
	DWORD v10; // eax
	signed int v13; // [esp+8h] [ebp-4h]
	int v14; // [esp+14h] [ebp+8h]

	v3 = 0;
	v13 = 0;
	v4 = SessionToGlobalDataPtr(a1);
	v5 = v4;
	hMem = (LPARAM)v4;
	if (v4)
	{
		if (a3 & 1)
		{
			v6 = 0;
			v7 = 16;
			goto LABEL_9;
		}
		v6 = a2;
		if (a2 < 0 || a2 >= 16)
			return 11;
		if (*(DWORD*)& v4[2 * a2 + 122] != -1)
		{
			v7 = a2 + 1;
			if (!(__OFSUB__(a2, a2 + 1) ^ 1))
				return 0;
		LABEL_9:
			v8 = (DWORD * *)& v5[2 * v6 + 122];
			v14 = v7 - v6;
			do
			{
				v9 = *v8;
				if (*v8 != (DWORD*)-1)
				{
					*v8 = v3;
					if (v9 != v3)
					{
						v13 = 1;
						do
						{
							v3 = (DWORD*)* v9;
							FreeChannelNode(v9);
							v9 = v3;
						} while (v3);
					}
				}
				++v8;
				--v14;
			} while (v14);
			if ((DWORD*)v13 != v3 && !(a3 & 2) && *((DWORD * *)v5 + 4) != v3)
			{
				v10 = MyWaveOutGetPosition(*((HWAVEOUT*)v5 + 3), *((DWORD*)v5 + 105));
				(*((void (**)(DWORD, DWORD*))v5 + 108))(v10, v3);
			}
			return 0;
		}
	}
	return 5;
}

//----- (0101E434) --------------------------------------------------------
signed int WaveMixCloseChannel(WORD* a1, signed int a2, char a3)
{
	signed int result; // eax
	signed int v4; // esi
	int v5; // ecx
	LPARAM v6; // eax
	DWORD* v7; // edx
	int v8; // ecx

	hMem = (LPARAM)SessionToGlobalDataPtr(a1);
	if (!hMem)
		return 5;
	v4 = a2;
	result = WaveMixFlushChannel(a1, a2, a3 | 2);
	if (!result)
	{
		if (a3 & 1)
		{
			v4 = 0;
			v5 = 16;
		}
		else
		{
			v5 = a2 + 1;
			if (!(__OFSUB__(a2, a2 + 1) ^ 1))
				return 0;
		}
		v6 = hMem;
		v7 = (DWORD*)(hMem + 4 * v4 + 244);
		v8 = v5 - v4;
		do
		{
			if (*v7 != -1)
			{
				*v7 = -1;
				--* (DWORD*)(v6 + 308);
			}
			++v7;
			--v8;
		} while (v8);
		return 0;
	}
	return result;
}

//----- (0101E4A9) --------------------------------------------------------
int WaveMixFreeWave(int a1, LPCVOID pMem)
{
	WORD* v2; // ebx
	LPCVOID* v4; // edi
	DWORD** v5; // ebx
	DWORD* v6; // esi
	HGLOBAL v7; // eax
	HGLOBAL v8; // eax
	HGLOBAL v9; // eax
	HGLOBAL v10; // eax
	DWORD* v11; // [esp+Ch] [ebp+8h]
	char* pMema; // [esp+10h] [ebp+Ch]

	v2 = SessionToGlobalDataPtr((WORD*)a1);
	if (!v2)
		return 5;
	v4 = (LPCVOID*)pMem;
	if (!IsValidLPMIXWAVE((int)pMem))
		return 5;
	v5 = (DWORD * *)(v2 + 122);
	pMema = (char*)16;
	do
	{
		v6 = *v5;
		if (*v5 != (DWORD*)-1)
		{
			v11 = 0;
			while (v6)
			{
				if ((LPCVOID*)v6[8] == v4)
				{
					if (v11)
					{
						*v11 = *v6;
						FreeChannelNode(v6);
						v6 = (DWORD*)* v11;
					}
					else
					{
						v6 = (DWORD*)* v6;
						FreeChannelNode(*v5);
						*v5 = v6;
					}
				}
				else
				{
					v11 = v6;
					v6 = (DWORD*)* v6;
				}
			}
		}
		++v5;
		--pMema;
	} while (pMema);
	if (v4[4])
	{
		v7 = GlobalHandle(v4[4]);
		GlobalUnlock(v7);
		v8 = GlobalHandle(v4[4]);
		GlobalFree(v8);
	}
	*((WORD*)v4 + 32) = 0;
	v9 = GlobalHandle(v4);
	GlobalUnlock(v9);
	v10 = GlobalHandle(v4);
	GlobalFree(v10);
	return 0;
}

//----- (0101E579) --------------------------------------------------------
WORD* BitsPerSampleAlign(int a1, LPCVOID pMem, int a3, int a4, int a5)
{
	WORD* v6; // edi
	int v7; // edi
	unsigned int v8; // esi
	SIZE_T v9; // eax
	HGLOBAL v10; // eax
	WORD* v11; // eax
	WORD* v12; // ecx
	WORD* v13; // ebx
	_BYTE* v14; // edi
	char* i; // edx
	HGLOBAL v16; // eax
	HGLOBAL v17; // eax
	int v18; // [esp+Ch] [ebp+Ch]

	if ((WORD)a3 == a4)
		return pMem;
	if (((WORD)a3 == 8 || (WORD)a3 == 16) && (a4 == 8 || a4 == 16))
	{
		LOWORD(a1) = (unsigned int)a3 >> 3;
		v7 = a1;
		v8 = *(DWORD*)a5 / (unsigned int)((unsigned int)a3 >> 3);
		v9 = v8 * ((unsigned int)a4 >> 3);
		*(DWORD*)a5 = v9;
		v10 = GlobalAlloc(0x2002u, v9);
		v11 = GlobalLock(v10);
		v12 = v11;
		if (v11)
		{
			if ((unsigned int)v7 <= (unsigned int)((unsigned int)a4 >> 3))
			{
				for (i = (char*)pMem; v8; --v8)
				{
					LOWORD(v7) = *i;
					v7 = (v7 - 128) << 8;
					*v11 = v7;
					++v11;
					++i;
				}
			}
			else
			{
				v13 = pMem;
				v14 = v11;
				if (v8)
				{
					v18 = v8;
					do
					{
						*v14++ = *v13 / 256 + -128;
						++v13;
						--v18;
					} while (v18);
				}
			}
			v6 = v12;
		}
		else
		{
			if (dword_1027BE4)
				MessageBoxA(
					0,
					"Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.",
					"WavMix32",
					0x40u);
			v6 = 0;
		}
	}
	else
	{
		v6 = 0;
	}
	v16 = GlobalHandle(pMem);
	GlobalUnlock(v16);
	v17 = GlobalHandle(pMem);
	GlobalFree(v17);
	return v6;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (0101E686) --------------------------------------------------------
_BYTE* ChannelAlign(LPCVOID pMem, int a2, int a3, int a4, int a5)
{
	unsigned int v6; // edi
	SIZE_T v7; // eax
	HGLOBAL v8; // eax
	_BYTE* v9; // eax
	_BYTE* v10; // ebx
	unsigned __int8* v11; // ecx
	_BYTE* v12; // eax
	WORD* v13; // eax
	WORD* v14; // esi
	HGLOBAL v15; // eax
	HGLOBAL v16; // eax

	if (a2 == a3)
		return pMem;
	v6 = *(DWORD*)a5 / (unsigned int)(unsigned int)a4 / (unsigned int)a2;
	v7 = v6 * (unsigned int)a4 * (unsigned int)a3;
	*(DWORD*)a5 = v7;
	v8 = GlobalAlloc(0x2002u, v7);
	v9 = GlobalLock(v8);
	v10 = v9;
	if (v9)
	{
		v11 = (unsigned __int8*)pMem;
		if ((unsigned int)a2 >= (unsigned int)a3)
		{
			v14 = v9;
			if (a4 == 1)
			{
				for (; v6; --v6)
				{
					*(_BYTE*)v14 = (*v11 + v11[1]) / 2;
					v14 = (WORD*)((char*)v14 + 1);
					v11 += 2;
				}
			}
			else
			{
				for (; v6; --v6)
				{
					*v14 = (*(signed int*)v11 + *((signed int*)v11 + 1)) / 2;
					++v14;
					v11 += 4;
				}
			}
		}
		else if (a4 == 1)
		{
			for (; v6; --v6)
			{
				*v9 = *v11;
				v12 = v9 + 1;
				*v12 = *v11;
				v9 = v12 + 1;
				++v11;
			}
		}
		else
		{
			for (; v6; --v6)
			{
				*(WORD*)v9 = *(WORD*)v11;
				v13 = v9 + 2;
				*v13 = *(WORD*)v11;
				v9 = v13 + 1;
				v11 += 2;
			}
		}
	}
	else
	{
		if (dword_1027BE4)
			MessageBoxA(
				0,
				"Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.",
				"WavMix32",
				0x40u);
		v10 = 0;
	}
	v15 = GlobalHandle(pMem);
	GlobalUnlock(v15);
	v16 = GlobalHandle(pMem);
	GlobalFree(v16);
	return v10;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (0101E7B0) --------------------------------------------------------
void AvgSample(WORD* a1, unsigned __int8* a2, int a3, int a4, int a5)
{
	int v5; // edi
	_BYTE* v6; // esi
	unsigned __int8* v7; // ecx
	int v8; // eax
	int v9; // edx
	int v10; // ebx
	int v11; // edx
	signed int* v12; // edi
	signed int* v13; // ecx
	int v14; // eax
	int v15; // esi
	int v16; // edx
	bool v17; // zf
	int v18; // [esp+18h] [ebp+Ch]

	if (a4 == 1)
	{
		v5 = a5;
		if (a5 > 0)
		{
			v6 = a1;
			do
			{
				v7 = a2++;
				v8 = 0;
				if (a3 > 0)
				{
					v9 = a3;
					do
					{
						v10 = *v7;
						v7 += a5;
						--v9;
						v8 = v8 + v10 - 128;
					} while (v9);
				}
				*v6++ = (unsigned int)(v8 / a3) + -128;
				--v5;
			} while (v5);
		}
	}
	else
	{
		v11 = a5;
		v12 = (signed int*)a2;
		if (a5 > 0)
		{
			v18 = a5;
			while (1)
			{
				v13 = v12;
				v14 = 0;
				++v12;
				if (a3 > 0)
				{
					v15 = a3;
					v16 = 2 * v11;
					do
					{
						v14 += *v13;
						v13 = (signed int*)((char*)v13 + v16);
						--v15;
					} while (v15);
				}
				v17 = v18-- == 1;
				*a1 = v14 / a3;
				if (v17)
					break;
				v11 = a5;
			}
		}
	}
}

//----- (0101E83A) --------------------------------------------------------
int RepSample(_BYTE* a1, unsigned __int8* a2, signed int a3, int a4, int a5)
{
	int v5; // ebx
	int result; // eax
	unsigned __int8* v7; // edi
	char v8; // cl
	_BYTE* v9; // esi
	_BYTE* v10; // esi
	int v11; // edx
	int v12; // ebx
	WORD* v13; // esi
	WORD* v14; // edi
	int v15; // ecx
	int v16; // edx
	int v17; // [esp+14h] [ebp+8h]
	WORD* v18; // [esp+18h] [ebp+Ch]
	unsigned __int8* v19; // [esp+20h] [ebp+14h]

	if (a4 == 1)
	{
		v5 = a5;
		result = (int)a1;
		if (a5 > 0)
		{
			v7 = a2;
			do
			{
				v8 = *v7;
				v9 = a1++;
				result = (v7[v5] - *v7) / a3;
				*v9 = *v7;
				v10 = &v9[v5];
				if (a3 > 1)
				{
					v11 = a3 - 1;
					do
					{
						v8 += result;
						*v10 = v8;
						v10 += v5;
						--v11;
					} while (v11);
				}
				++v7;
				--a5;
			} while (a5);
		}
	}
	else
	{
		v19 = a2;
		v18 = a1;
		result = a5;
		if (a5 > 0)
		{
			v12 = a5;
			v17 = a5;
			do
			{
				v13 = v18;
				LOWORD(v15) = *(WORD*)v19;
				++v18;
				v14 = &v13[v12];
				result = ((signed int)v13[v12] - *(signed int*)v19) / a3;
				*v13 = *(WORD*)v19;
				v15 = (signed int)v15;
				if (a3 > 1)
				{
					v16 = a3 - 1;
					do
					{
						v15 += result;
						*v14 = v15;
						v14 = (WORD*)((char*)v14 + v12 * 2);
						--v16;
					} while (v16);
				}
				v19 += 2;
				--v17;
			} while (v17);
		}
	}
	return result;
}

//----- (0101E8F5) --------------------------------------------------------
LPCVOID SamplesPerSecAlign(LPCVOID pMem, int a2, int a3, int a4, int a5, int a6)
{
	LPCVOID result; // eax
	DWORD* v7; // ecx
	int v8; // edi
	unsigned int v9; // eax
	int v10; // esi
	unsigned int v11; // eax
	HGLOBAL v12; // eax
	_BYTE* v13; // ebx
	HGLOBAL v14; // eax
	HGLOBAL v15; // eax
	int v16; // ecx
	_BYTE* v17; // eax
	int v18; // esi
	_BYTE* v19; // eax
	HGLOBAL v20; // eax
	HGLOBAL v21; // eax
	int v22; // [esp+8h] [ebp-8h]
	LPCVOID v23; // [esp+Ch] [ebp-4h]
	int v24; // [esp+1Ch] [ebp+Ch]
	int v25; // [esp+1Ch] [ebp+Ch]
	int v26; // [esp+20h] [ebp+10h]
	int v27; // [esp+20h] [ebp+10h]
	unsigned int v28; // [esp+2Ch] [ebp+1Ch]

	if (a2 == a3)
		return pMem;
	v7 = (DWORD*)a6;
	v8 = (unsigned int)a4 * (unsigned int)a5;
	v28 = *(DWORD*)a6 / (unsigned int)v8;
	if (a3 <= (unsigned int)a2)
	{
		v11 = a2 / (unsigned int)a3;
		v24 = 0;
		v26 = v11;
		v10 = v28 / v11;
	}
	else
	{
		v9 = a3 / (unsigned int)a2;
		v26 = 0;
		v24 = v9;
		v10 = v28 * v9;
	}
	*v7 = v8 * v10;
	v12 = GlobalAlloc(0x2002u, v8 * v10);
	v13 = GlobalLock(v12);
	if (v13)
	{
		v23 = pMem;
		v22 = (int)v13;
		if (v24 <= 0)
		{
			if (v10 != 1)
			{
				v25 = v10 - 1;
				do
				{
					AvgSample(v13, (unsigned __int8*)pMem, v26, (unsigned int)a4, (unsigned int)a5);
					pMem = (char*)pMem + v8 * v26;
					v13 += v8;
					--v25;
				} while (v25);
			}
			if (v8 > 0)
			{
				v19 = pMem;
				do
				{
					*v13++ = *v19++;
					--v8;
				} while (v8);
			}
		}
		else
		{
			if (v28 != 1)
			{
				v27 = v28 - 1;
				do
				{
					RepSample(v13, (unsigned __int8*)pMem, v24, (unsigned int)a4, (unsigned int)a5);
					pMem = (char*)pMem + v8;
					v13 += v8 * v24;
					--v27;
				} while (v27);
			}
			v16 = v24;
			if (v24 > 0)
			{
				do
				{
					v17 = pMem;
					if (v8 > 0)
					{
						v18 = (unsigned int)a4 * (unsigned int)a5;
						do
						{
							*v13++ = *v17++;
							--v18;
						} while (v18);
					}
					--v16;
				} while (v16);
			}
		}
		v20 = GlobalHandle(v23);
		GlobalUnlock(v20);
		v21 = GlobalHandle(v23);
		GlobalFree(v21);
		result = (LPCVOID)v22;
	}
	else
	{
		if (dword_1027BE4)
			MessageBoxA(
				0,
				"Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.",
				"WavMix32",
				0x40u);
		v14 = GlobalHandle(pMem);
		GlobalUnlock(v14);
		v15 = GlobalHandle(pMem);
		GlobalFree(v15);
		result = 0;
	}
	return result;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (0101EA82) --------------------------------------------------------
LPCVOID WaveFormatConvert(int a1, int a2, LPCVOID pMem, int a4)
{
	LPCVOID result; // eax
	WORD* v5; // eax
	_BYTE* v6; // eax

	if (*(WORD*)(a2 + 2) == *(WORD*)(a1 + 2)
		&& *(DWORD*)(a2 + 4) == *(DWORD*)(a1 + 4)
		&& *(WORD*)(a2 + 14) == *(WORD*)(a1 + 14))
	{
		return pMem;
	}
	v5 = BitsPerSampleAlign(*(unsigned int*)(a2 + 14), pMem, *(unsigned int*)(a2 + 14), *(WORD*)(a1 + 14), a4);
	if (v5 && (v6 = ChannelAlign(v5, *(WORD*)(a2 + 2), *(WORD*)(a1 + 2), *(WORD*)(a1 + 14) >> 3, a4)) != 0)
		result = SamplesPerSecAlign(
			v6,
			*(DWORD*)(a2 + 4),
			*(DWORD*)(a1 + 4),
			*(WORD*)(a1 + 14) >> 3,
			*(WORD*)(a1 + 2),
			a4);
	else
		result = 0;
	return result;
}

//----- (0101EB23) --------------------------------------------------------
CHAR* WaveMixOpenWave(LPCVOID pMem, LPCSTR lpName, HMODULE hModule, LONG cch)
{
	WORD* v4; // eax
	WORD v5; // cx
	HGLOBAL v7; // eax
	CHAR* v8; // edi
	HRSRC v9; // eax
	HRSRC v10; // esi
	HGLOBAL v11; // eax
	HGLOBAL v12; // eax
	HGLOBAL v13; // eax
	HGLOBAL v14; // eax
	HGLOBAL v15; // eax
	void* v16; // eax
	const void* v17; // esi
	LONG v18; // eax
	LPCVOID v19; // esi
	const void* v20; // ST08_4
	int v21; // eax
	int v22; // eax
	const CHAR* v23; // [esp-10h] [ebp-A4h]
	UINT v24; // [esp-Ch] [ebp-A0h]
	struct _MMIOINFO pmmioinfo; // [esp+4h] [ebp-90h]
	struct _MMCKINFO pmmcki; // [esp+4Ch] [ebp-48h]
	HWAVEOUT phwo; // [esp+60h] [ebp-34h]
	struct _MMCKINFO v28; // [esp+64h] [ebp-30h]
	WAVEFORMATEX pwfx; // [esp+78h] [ebp-1Ch]
	LPCVOID v30; // [esp+8Ch] [ebp-8h]
	HGLOBAL hResData; // [esp+90h] [ebp-4h]
	HMMIO hModulea; // [esp+A4h] [ebp+10h]

	hResData = 0;
	v30 = 0;
	v4 = SessionToGlobalDataPtr(pMem);
	pwfx.wFormatTag = v4[190];
	pwfx.nChannels = v4[191];
	pwfx.nSamplesPerSec = *((DWORD*)v4 + 96);
	pwfx.nAvgBytesPerSec = *((DWORD*)v4 + 97);
	v5 = v4[196];
	hMem = (LPARAM)v4;
	pwfx.nBlockAlign = v5;
	pwfx.wBitsPerSample = v4[197];
	pwfx.cbSize = 0;
	if (waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0, 0, 1u))
	{
		if (dword_1027BE4)
			MessageBoxA(0, "The waveform device can't play this format.", "WavMix32", 0x30u);
		return 0;
	}
	v7 = GlobalAlloc(0x2040u, 0x42u);
	v8 = (CHAR*)GlobalLock(v7);
	if (!v8)
	{
		if (dword_1027BE4)
			MessageBoxA(
				0,
				"Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.",
				"WavMix32",
				0x40u);
		return 0;
	}
	if (cch & 2)
	{
		v9 = FindResourceA(hModule, lpName, "WAVE");
		v10 = v9;
		if (!v9 || (hResData = LoadResource(hModule, v9)) == 0)
		{
			if (HIWORD(lpName))
				_wsprintfA(aWavemixV23ByAn, "Failed to open 'WAVE' resource '%s'.", lpName);
			else
				_wsprintfA(aWavemixV23ByAn, "Failed to open 'WAVE' resource %u.", (unsigned int)lpName);
			if (dword_1027BE4)
				MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x30u);
			goto LABEL_31;
		}
		memset(&pmmioinfo, 0, sizeof(pmmioinfo));
		pmmioinfo.pchBuffer = (HPSTR)LockResource(hResData);
		if (!pmmioinfo.pchBuffer)
		{
			if (dword_1027BE4)
				MessageBoxA(0, "Failed to lock 'WAVE' resource", "WavMix32", 0x30u);
			FreeResource(hResData);
			hResData = 0;
		LABEL_31:
			v11 = GlobalHandle(v8);
			GlobalUnlock(v11);
			v12 = GlobalHandle(v8);
			GlobalFree(v12);
			if (v30)
			{
				v13 = GlobalHandle(v30);
				GlobalUnlock(v13);
				v14 = GlobalHandle(v30);
				GlobalFree(v14);
			}
			if (hResData)
				FreeResource(hResData);
			return 0;
		}
		pmmioinfo.cchBuffer = SizeofResource(hModule, v10);
		pmmioinfo.fccIOProc = 541934925;
		pmmioinfo.adwInfo[0] = 0;
		hModulea = mmioOpenA(0, &pmmioinfo, 0);
		if (!hModulea)
		{
			if (!dword_1027BE4)
				goto LABEL_29;
			v24 = pmmioinfo.wErrorRet;
			v23 = "Failed to open resource, mmioOpen error=%u.\nMay need to make sure resource is marked read-write";
			goto LABEL_28;
		}
	}
	else if (cch & 4)
	{
		qmemcpy(&pmmioinfo, lpName, sizeof(pmmioinfo));
		hModulea = mmioOpenA(0, &pmmioinfo, 0);
		if (!hModulea)
		{
			if (!dword_1027BE4)
				goto LABEL_29;
			v24 = pmmioinfo.wErrorRet;
			v23 = "Failed to open memory file, mmioOpen error=%u.\nMay need to make sure memory is read-write";
		LABEL_28:
			_wsprintfA(aWavemixV23ByAn, v23, v24);
			MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x30u);
		LABEL_29:
			if (hModulea)
				mmioClose(hModulea, 0);
			goto LABEL_31;
		}
	}
	else
	{
		hModulea = mmioOpenA((LPSTR)lpName, 0, 0x10000u);
		if (!hModulea)
		{
			if (dword_1027BE4)
			{
				_wsprintfA(aWavemixV23ByAn, "Failed to open wave file %s.", lpName);
				MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x30u);
			}
			goto LABEL_29;
		}
	}
	pmmcki.fccType = 1163280727;
	if (mmioDescend(hModulea, &pmmcki, 0, 0x20u))
	{
		if (dword_1027BE4)
			MessageBoxA(0, "This is not a WAVE file.", "WavMix32", 0x30u);
		goto LABEL_29;
	}
	v28.ckid = 544501094;
	if (mmioDescend(hModulea, &v28, &pmmcki, 0x10u))
	{
		if (dword_1027BE4)
			MessageBoxA(0, "WAVE file is corrupted.", "WavMix32", 0x30u);
		goto LABEL_29;
	}
	if (mmioRead(hModulea, v8, 16) != 16)
	{
		if (dword_1027BE4)
			MessageBoxA(0, "Failed to read format chunk.", "WavMix32", 0x30u);
		goto LABEL_29;
	}
	if (*(WORD*)v8 != 1)
	{
		if (dword_1027BE4)
			MessageBoxA(0, "The file is not a PCM file.", "WavMix32", 0x30u);
		goto LABEL_29;
	}
	mmioAscend(hModulea, &v28, 0);
	v28.ckid = 1635017060;
	if (mmioDescend(hModulea, &v28, &pmmcki, 0x10u))
	{
		if (dword_1027BE4)
			MessageBoxA(0, "WAVE file has no data chunk.", "WavMix32", 0x30u);
		goto LABEL_29;
	}
	cch = v28.cksize;
	if (!v28.cksize)
	{
		if (dword_1027BE4)
			MessageBoxA(0, "The data chunk has no data.", "WavMix32", 0x30u);
		goto LABEL_29;
	}
	v15 = GlobalAlloc(0x2002u, v28.cksize);
	v16 = GlobalLock(v15);
	v17 = v16;
	v30 = v16;
	if (!v16)
	{
		if (dword_1027BE4)
			MessageBoxA(
				0,
				"Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.",
				"WavMix32",
				0x40u);
		goto LABEL_29;
	}
	v18 = mmioRead(hModulea, (HPSTR)v16, cch);
	if (v18 != cch)
	{
		if (dword_1027BE4)
			MessageBoxA(0, "Failed to read data chunk.", "WavMix32", 0x30u);
		goto LABEL_29;
	}
	v19 = WaveFormatConvert(hMem + 380, (int)v8, v17, (int)& cch);
	v30 = v19;
	if (!v19)
	{
		if (dword_1027BE4)
			MessageBoxA(0, "Failed to convert wave format.", "WavMix32", 0x30u);
		goto LABEL_29;
	}
	mmioClose(hModulea, 0);
	if (hResData)
		FreeResource(hResData);
	*((DWORD*)v8 + 5) = cch;
	v20 = (const void*)(hMem + 380);
	*((DWORD*)v8 + 4) = v19;
	*((DWORD*)v8 + 8) = 0;
	*((DWORD*)v8 + 9) = 0;
	*((DWORD*)v8 + 7) = 0;
	*((WORD*)v8 + 32) = 21554;
	_memmove(v8, v20, 0x10u);
	if (HIWORD(lpName))
	{
		v21 = lstrlenA(lpName);
		if (v21 > 15)
			v22 = v21 - 15;
		else
			v22 = 0;
		lstrcpyA(v8 + 48, &lpName[v22]);
	}
	else
	{
		_wsprintfA(v8 + 48, "res#%u", (unsigned int)lpName);
	}
	return v8;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (0101F093) --------------------------------------------------------
unsigned int FigureOutDMABufferSize(unsigned int a1, int a2)
{
	unsigned int result; // eax
	signed int v3; // ecx

	result = a1;
	if (!a1)
		result = *(DWORD*)(a2 + 4) * *(unsigned int*)(a2 + 2) * ((unsigned int) * (unsigned int*)(a2 + 14) >> 3) >> 4;
	v3 = 344;
	if (result < 0x158 || (v3 = 11025, result > 0x2B11))
		result = v3;
	return result;
}

//----- (0101F0D4) --------------------------------------------------------
int RemoveInvalidIniNameCharacters(LPCSTR lpString)
{
	CHAR* v1; // esi

	v1 = (CHAR*)lpString;
	if (!lpString || !*lpString)
		return 0;
	do
	{
		if (!_isalnum(*v1) && !_isspace(*v1))
			break;
		++v1;
	} while (*v1);
	do
		*v1-- = 0;
	while (v1 >= lpString && _isspace(*v1));
	return lstrlenA(lpString);
}

//----- (0101F13D) --------------------------------------------------------
UINT ShowWaveOutDevices()
{
	UINT result; // eax
	signed int v1; // [esp+0h] [ebp-40h]
	signed int uDeviceID; // [esp+4h] [ebp-3Ch]
	struct tagWAVEOUTCAPSA pwoc; // [esp+8h] [ebp-38h]

	result = waveOutGetNumDevs();
	v1 = result;
	if (result)
	{
		_wsprintfA(aWavemixV23ByAn, "%d waveOut Devices have been detected on your system.", result);
		result = MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x40u);
		for (uDeviceID = 0; uDeviceID < v1; result = uDeviceID)
		{
			if (!waveOutGetDevCapsA(uDeviceID, &pwoc, 0x34u) && RemoveInvalidIniNameCharacters(pwoc.szPname))
				_wsprintfA(
					aWavemixV23ByAn,
					"Device %i: %s\n\tVersion %u.%u",
					uDeviceID,
					pwoc.szPname,
					BYTE1(pwoc.vDriverVersion),
					LOBYTE(pwoc.vDriverVersion));
			else
				_wsprintfA(aWavemixV23ByAn, "waveOutGetDevCaps failed (err %u) for device %d", 1, uDeviceID);
			MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x40u);
			++uDeviceID;
		}
	}
	return result;
}

//----- (0101F20F) --------------------------------------------------------
const char* GetOperatingSystemPrefix()
{
	const char* result; // eax
	bool v1; // cf

	if (GetVersion() < 0x80000000)
		return "WinNT:";
	if (GetVersion() >= 0x80000000 && (unsigned __int8)GetVersion() >= 4u)
		return "Win95:";
	if (GetVersion() < 0x80000000 || (v1 = (unsigned __int8)GetVersion() < 4u, result = "Win31:", !v1))
		result = "OS_X:";
	return result;
}

//----- (0101F25C) --------------------------------------------------------
int ReadRegistryToGetMachineSpecificInfSection(int a1, LPSTR lpString1, int a3)
{
	const char* v3; // eax
	int v4; // esi
	const char* v6; // eax
	LONG cbData; // [esp+Ch] [ebp-44h]
	int v8; // [esp+10h] [ebp-40h]
	HKEY phkResult; // [esp+14h] [ebp-3Ch]
	CHAR SubKey; // [esp+18h] [ebp-38h]

	v8 = 0;
	v3 = GetOperatingSystemPrefix();
	v4 = lstrlenA(v3);
	if (a3 < v4 + 10)
		return 0;
	_wsprintfA(&SubKey, "Device%u", a1);
	if (RegOpenKeyA(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\WaveMix", &phkResult))
		return 0;
	v6 = GetOperatingSystemPrefix();
	lstrcpyA(lpString1, v6);
	cbData = a3 - v4;
	if (!RegQueryValueA(phkResult, &SubKey, &lpString1[v4], &cbData) && cbData > 0)
		v8 = 1;
	RegCloseKey(phkResult);
	return v8;
}

//----- (0101F315) --------------------------------------------------------
int ReadRegistryInt(HKEY hKey, LPCSTR lpSubKey, int a3)
{
	int result; // eax
	LONG cbData; // [esp+0h] [ebp-14h]
	CHAR Data; // [esp+4h] [ebp-10h]

	if (!hKey || (cbData = 10, RegQueryValueA(hKey, lpSubKey, &Data, &cbData)))
		result = a3;
	else
		result = _atol(&Data);
	return result;
}

//----- (0101F36B) --------------------------------------------------------
signed int ReadRegistryForAppSpecificConfigs(int a1)
{
	int v1; // ebx
	int v3; // eax
	int v4; // eax
	struct tagWAVEOUTCAPSA* v5; // ST04_4
	UINT_PTR v6; // ST00_4
	HKEY phkResult; // [esp+8h] [ebp-3Ch]
	CHAR SubKey; // [esp+Ch] [ebp-38h]

	v1 = *(DWORD*)(a1 + 2);
	if (!(v1 & 0x400) || !*(DWORD*)(a1 + 26))
		return 0;
	if ((v1 & 0x80u) == 0)
	{
		*(WORD*)(a1 + 20) = *(WORD*)(hMem + 24);
	}
	else if (*(unsigned int*)(a1 + 20) >= waveOutGetNumDevs())
	{
		*(WORD*)(a1 + 20) = 0;
	}
	_wsprintfA(&SubKey, "WaveMix\\Device%u", *(unsigned int*)(a1 + 20));
	if (RegOpenKeyA(*(HKEY*)(a1 + 26), &SubKey, &phkResult))
		return 0;
	if (!(v1 & 1))
		* (WORD*)(a1 + 6) = ReadRegistryInt(phkResult, "Channels", 1);
	if (!(v1 & 2))
		* (WORD*)(a1 + 8) = ReadRegistryInt(phkResult, "SamplesPerSec", 11);
	if (!(v1 & 4))
		* (WORD*)(a1 + 10) = ReadRegistryInt(phkResult, "WaveBlocks", 3);
	if (!(v1 & 8))
		* (WORD*)(a1 + 12) = ReadRegistryInt(phkResult, "WaveBlockLen", 0);
	*(WORD*)(a1 + 14) = 1;
	if (!(v1 & 0x20))
		* (WORD*)(a1 + 16) = (unsigned int)ReadRegistryInt(phkResult, "Remix", 1) != 2;
	if (!(v1 & 0x40))
	{
		v3 = DefaultGoodWavePos(*(unsigned int*)(a1 + 20));
		*(WORD*)(a1 + 18) = (unsigned int)ReadRegistryInt(phkResult, "GoodWavePos", v3) != 0;
	}
	if (!(v1 & 0x100))
		* (WORD*)(a1 + 24) = ReadRegistryInt(phkResult, "ShowDebugDialogs", 0);
	if (!(v1 & 0x200))
	{
		v4 = DefaultPauseBlocks(*(unsigned int*)(a1 + 10));
		*(WORD*)(a1 + 22) = ReadRegistryInt(phkResult, "PauseBlocks", v4);
	}
	v5 = (struct tagWAVEOUTCAPSA*)(hMem + 124);
	v6 = *(unsigned int*)(a1 + 20);
	*(DWORD*)(a1 + 2) = 1023;
	waveOutGetDevCapsA(v6, v5, 0x34u);
	RegCloseKey(phkResult);
	return 1;
}

//----- (0101F50B) --------------------------------------------------------
int ShowCurrentSettings()
{
	const char* v0; // esi
	const char* v1; // edx
	const char* v2; // ecx
	struct tagWAVEOUTCAPSA pwoc; // [esp+0h] [ebp-38h]

	if (waveOutGetDevCapsA(*(DWORD*)(hMem + 24), &pwoc, 0x34u) || !RemoveInvalidIniNameCharacters(pwoc.szPname))
		lstrcpyA(pwoc.szPname, "Unknown Device");
	v0 = "cmixit";
	if (*(int (**)(_BYTE*, char*, char*, int, unsigned int))(hMem + 428) != cmixit)
		v0 = "386 mixit";
	v1 = "TRUE";
	if (!*(DWORD*)(hMem + 420))
		v1 = "FALSE";
	v2 = "Reset";
	if (*(signed int (**)(int, int))(hMem + 432) != ResetRemix)
		v2 = "NoReset";
	_wsprintfA(
		aWavemixV23ByAn,
		"Using:\t%s.\n"
		"\tRemix = %s\n"
		"\tGoodGetPos=%s\n"
		"\t%d ping pong wave blocks\n"
		"\tWave block len = %lu bytes\n"
		"\tpfnMixit=%s\n"
		"\tSamplesPerSec=%lu,\n"
		"\tChannels=%d\n"
		"\tPauseBlocks=%d",
		pwoc.szPname,
		v2,
		v1,
		*(DWORD*)(hMem + 400),
		*(DWORD*)(hMem + 396),
		v0,
		*(DWORD*)(hMem + 384),
		*(unsigned int*)(hMem + 382),
		*(DWORD*)(hMem + 404));
	return MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x40u);
}

//----- (0101F5F1) --------------------------------------------------------
int Settings_OnInitDialog(HWND hWnd, int a2, int a3)
{
	BOOL v3; // ST0C_4
	HWND v4; // eax
	BOOL v5; // ST0C_4
	HWND v6; // eax
	BOOL v7; // ST0C_4
	HWND v8; // eax
	BOOL v9; // ST0C_4
	HWND v10; // eax
	BOOL v11; // ST0C_4
	HWND v12; // eax
	HWND v13; // eax
	HWND v14; // eax
	HWND v15; // eax
	HWND v16; // eax
	HWND v17; // eax
	HWND v18; // eax
	HWND v19; // eax
	HWND v20; // eax
	HWND v21; // eax
	HWND v22; // eax
	HWND v23; // eax
	HWND v24; // eax
	HWND v25; // eax
	HWND v26; // eax
	HWND v27; // eax
	HWND v28; // eax
	HWND v29; // eax
	MMRESULT v30; // eax
	HWND v31; // eax
	WPARAM v32; // ST0C_4
	HWND v33; // eax
	signed int v35; // [esp+Ch] [ebp-148h]
	signed int uDeviceID; // [esp+10h] [ebp-144h]
	struct tagWAVEOUTCAPSA pwoc; // [esp+1Ch] [ebp-138h]
	CHAR String; // [esp+50h] [ebp-104h]

	GetWindowTextA(hWnd, &String, 256);
	_wsprintfA(aWavemixV23ByAn, &String, 2, 81);
	SetWindowTextA(hWnd, aWavemixV23ByAn);
	SetWindowLongA(hWnd, -21, a3);
	v3 = *(WORD*)(a3 + 6) > 1u;
	v4 = GetDlgItem(hWnd, 1000);
	SendMessageA(v4, 0xF1u, v3, 0);
	v5 = *(WORD*)(a3 + 16) != 0;
	v6 = GetDlgItem(hWnd, 1001);
	SendMessageA(v6, 0xF1u, v5, 0);
	v7 = *(WORD*)(a3 + 18) != 0;
	v8 = GetDlgItem(hWnd, 1004);
	SendMessageA(v8, 0xF1u, v7, 0);
	v9 = *(WORD*)(a3 + 14) != 0;
	v10 = GetDlgItem(hWnd, 1005);
	SendMessageA(v10, 0xF1u, v9, 0);
	v11 = *(WORD*)(a3 + 24) != 0;
	v12 = GetDlgItem(hWnd, 1010);
	SendMessageA(v12, 0xF1u, v11, 0);
	v13 = GetDlgItem(hWnd, 1005);
	EnableWindow(v13, 0);
	v14 = GetDlgItem(hWnd, 1003);
	SendMessageA(v14, 0xC5u, 2u, 0);
	v15 = GetDlgItem(hWnd, 1007);
	SendMessageA(v15, 0xC5u, 4u, 0);
	v16 = GetDlgItem(hWnd, 1008);
	SendMessageA(v16, 0xC5u, 2u, 0);
	v17 = GetDlgItem(hWnd, 1011);
	SendMessageA(v17, 0xC5u, 2u, 0);
	v18 = GetDlgItem(hWnd, 1012);
	GetWindowTextA(v18, &String, 100);
	_wsprintfA(aWavemixV23ByAn, &String, 2, 10);
	v19 = GetDlgItem(hWnd, 1012);
	SetWindowTextA(v19, aWavemixV23ByAn);
	v20 = GetDlgItem(hWnd, 1013);
	GetWindowTextA(v20, &String, 100);
	_wsprintfA(aWavemixV23ByAn, &String, 344, 11025);
	v21 = GetDlgItem(hWnd, 1013);
	SetWindowTextA(v21, aWavemixV23ByAn);
	v22 = GetDlgItem(hWnd, 1014);
	GetWindowTextA(v22, &String, 100);
	_wsprintfA(aWavemixV23ByAn, &String, 0, 10);
	v23 = GetDlgItem(hWnd, 1014);
	SetWindowTextA(v23, aWavemixV23ByAn);
	v24 = GetDlgItem(hWnd, 1015);
	GetWindowTextA(v24, &String, 100);
	_wsprintfA(aWavemixV23ByAn, &String, 16);
	v25 = GetDlgItem(hWnd, 1015);
	SetWindowTextA(v25, aWavemixV23ByAn);
	_wsprintfA(aWavemixV23ByAn, "%d", *(unsigned int*)(a3 + 10));
	v26 = GetDlgItem(hWnd, 1003);
	SetWindowTextA(v26, aWavemixV23ByAn);
	_wsprintfA(aWavemixV23ByAn, "%d", *(unsigned int*)(a3 + 12));
	v27 = GetDlgItem(hWnd, 1007);
	SetWindowTextA(v27, aWavemixV23ByAn);
	_wsprintfA(aWavemixV23ByAn, "%d", *(unsigned int*)(a3 + 8));
	v28 = GetDlgItem(hWnd, 1008);
	SetWindowTextA(v28, aWavemixV23ByAn);
	_wsprintfA(aWavemixV23ByAn, "%d", *(unsigned int*)(a3 + 22));
	v29 = GetDlgItem(hWnd, 1011);
	SetWindowTextA(v29, aWavemixV23ByAn);
	uDeviceID = 0;
	v35 = waveOutGetNumDevs();
	if (v35 > 0)
	{
		do
		{
			v30 = waveOutGetDevCapsA(uDeviceID, &pwoc, 0x34u);
			if (v30)
			{
				_wsprintfA(aWavemixV23ByAn, "waveOutGetDevCaps failed (err %u) for device %d", v30, uDeviceID);
				MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x40u);
			}
			else
			{
				_wsprintfA(aWavemixV23ByAn, "%d: %s", uDeviceID, pwoc.szPname);
				v31 = GetDlgItem(hWnd, 1009);
				SendMessageA(v31, 0x143u, 0, (LPARAM)aWavemixV23ByAn);
			}
			++uDeviceID;
		} while (uDeviceID < v35);
	}
	v32 = *(unsigned int*)(a3 + 20);
	v33 = GetDlgItem(hWnd, 1009);
	SendMessageA(v33, 0x14Eu, v32, 0);
	return 1;
}

//----- (0101FA63) --------------------------------------------------------
int Settings_OnCommand(HWND hWnd, int a2, int a3, int a4)
{
	WORD* v4; // ebx
	HWND v6; // eax
	HWND v7; // eax
	HWND v8; // eax
	HWND v9; // eax
	HWND v10; // eax
	HWND v11; // eax
	HWND v12; // eax
	HWND v13; // eax
	HWND v14; // eax
	HWND v15; // eax
	int v16; // ax

	v4 = (WORD*)GetWindowLongA(hWnd, -21);
	if (a2 == 1)
	{
		if (v4)
		{
			v6 = GetDlgItem(hWnd, 1000);
			v4[3] = (SendMessageA(v6, 0xF0u, 0, 0) != 0) + 1;
			v7 = GetDlgItem(hWnd, 1001);
			v4[8] = SendMessageA(v7, 0xF0u, 0, 0) != 0;
			v8 = GetDlgItem(hWnd, 1004);
			v4[9] = SendMessageA(v8, 0xF0u, 0, 0) != 0;
			v9 = GetDlgItem(hWnd, 1010);
			v4[12] = SendMessageA(v9, 0xF0u, 0, 0) != 0;
			v10 = GetDlgItem(hWnd, 1005);
			v4[7] = SendMessageA(v10, 0xF0u, 0, 0) != 0;
			v11 = GetDlgItem(hWnd, 1003);
			GetWindowTextA(v11, aWavemixV23ByAn, 10);
			v4[5] = _atoi(aWavemixV23ByAn);
			v12 = GetDlgItem(hWnd, 1007);
			GetWindowTextA(v12, aWavemixV23ByAn, 10);
			v4[6] = _atoi(aWavemixV23ByAn);
			v13 = GetDlgItem(hWnd, 1008);
			GetWindowTextA(v13, aWavemixV23ByAn, 10);
			v4[4] = _atoi(aWavemixV23ByAn);
			v14 = GetDlgItem(hWnd, 1011);
			GetWindowTextA(v14, aWavemixV23ByAn, 10);
			v4[11] = _atoi(aWavemixV23ByAn);
			v15 = GetDlgItem(hWnd, 1009);
			GetWindowTextA(v15, aWavemixV23ByAn, 10);
			if (_isdigit(aWavemixV23ByAn[0]))
				v16 = _atoi(aWavemixV23ByAn);
			else
				v16 = 0;
			v4[10] = v16;
			EndDialog(hWnd, 1);
		}
	}
	else
	{
		if (a2 != 2)
			return 0;
		EndDialog(hWnd, 0);
	}
	return 1;
}

//----- (0101FC24) --------------------------------------------------------
BOOL SettingsDlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
	if (a2 == 272)
		return Settings_OnInitDialog(hWnd, a3, a4);
	if (a2 != 273)
		return 0;
	Settings_OnCommand(hWnd, (unsigned int)a3, a4, a3 >> 16);
	return 1;
}

//----- (0101FC6D) --------------------------------------------------------
DWORD* MakeDlgTemplate(int a1, int a2, int a3, int a4, int a5, int a6, wchar_t* Str)
{
	size_t v7; // eax
	HGLOBAL v8; // eax
	DWORD* v9; // ebx

	v7 = 2 * _wcslen(Str) + 24;
	*(DWORD*)a1 = v7;
	if (v7 & 3)
		* (DWORD*)a1 = v7 - (v7 & 3) + 4;
	v8 = GlobalAlloc(0x42u, *(DWORD*)a1);
	v9 = GlobalLock(v8);
	if (v9)
	{
		v9[1] = 0;
		*((WORD*)v9 + 4) = 0;
		*v9 = a2 | 0x10000000;
		*((WORD*)v9 + 5) = a3;
		*((WORD*)v9 + 6) = a4;
		*((WORD*)v9 + 7) = a5;
		*((WORD*)v9 + 8) = a6;
		qmemcpy((char*)v9 + 22, Str, 2 * _wcslen(Str) + 2);
	}
	return v9;
}

//----- (0101FD0E) --------------------------------------------------------
WORD* AddDlgControl(int a1, LPCVOID pMem, int a3, int a4, int a5, int a6, int a7, int a8, int a9, wchar_t* Str)
{
	const void* v10; // edi
	HGLOBAL v11; // eax
	SIZE_T v12; // ST04_4
	HGLOBAL v13; // eax
	HGLOBAL v14; // eax
	int v15; // eax
	char* pMema; // [esp+10h] [ebp+Ch]

	v10 = pMem;
	if (pMem)
	{
		pMema = *(char**)a1;
		*(DWORD*)a1 += 2 * _wcslen(Str) + 25;
		if (*(DWORD*)a1 & 3)
			* (DWORD*)a1 = *(DWORD*)a1 - (*(DWORD*)a1 & 3) + 4;
		v11 = GlobalHandle(v10);
		GlobalUnlock(v11);
		v12 = *(DWORD*)a1;
		v13 = GlobalHandle(v10);
		v14 = GlobalReAlloc(v13, v12, 0x42u);
		v10 = GlobalLock(v14);
		if (v10)
		{
			v15 = (int)& pMema[(DWORD)v10];
			*(DWORD*)(v15 + 4) = 0;
			*(DWORD*)v15 = a4 | 0x50000000;
			*(WORD*)(v15 + 8) = a6;
			*(WORD*)(v15 + 10) = a7;
			*(WORD*)(v15 + 12) = a8;
			*(WORD*)(v15 + 14) = a9;
			*(WORD*)(v15 + 16) = a5;
			*(DWORD*)(v15 + 18) = ((unsigned int)a3 << 16) | 0xFFFF;
			_wcscpy((wchar_t*)& pMema[(DWORD)v10 + 22], Str);
			++* ((WORD*)v10 + 4);
		}
	}
	return v10;
}

//----- (0101FDE1) --------------------------------------------------------
WORD* MakeSettingsDlgTemplate()
{
	DWORD* v0; // eax
	WORD* v1; // eax
	WORD* v2; // eax
	WORD* v3; // eax
	WORD* v4; // eax
	WORD* v5; // eax
	WORD* v6; // eax
	WORD* v7; // eax
	WORD* v8; // eax
	WORD* v9; // eax
	WORD* v10; // eax
	WORD* v11; // eax
	WORD* v12; // eax
	WORD* v13; // eax
	WORD* v14; // eax
	WORD* v15; // eax
	WORD* v16; // eax
	WORD* v17; // eax
	int v19; // [esp+Ch] [ebp-4h]

	v19 = 0;
	v0 = MakeDlgTemplate((int)& v19, -2134376320, 0, 0, 212, 132, L"WavMix32 Settings (Ver %X.%X Static)");
	v1 = AddDlgControl((int)& v19, v0, 128, 65537, 1, 155, 5, 50, 14, L"&Ok");
	v2 = AddDlgControl((int)& v19, v1, 128, 0x10000, 2, 155, 25, 50, 14, L"&Cancel");
	v3 = AddDlgControl((int)& v19, v2, 130, 0, 1012, 5, 5, 115, 8, L"Number of WaveBlocks (%d-%d):");
	v4 = AddDlgControl((int)& v19, v3, 130, 0, 1013, 5, 20, 115, 8, L"Size of WaveBlocks (%d-%d):");
	v5 = AddDlgControl((int)& v19, v4, 130, 0, 0xFFFF, 5, 35, 102, 8, L"Playback Frequency (11,22,44):");
	v6 = AddDlgControl((int)& v19, v5, 130, 0, 0xFFFF, 5, 80, 57, 8, L"Playback Device:");
	v7 = AddDlgControl((int)& v19, v6, 130, 0, 1014, 5, 50, 115, 8, L"Number of Pause Blocks (%d-%d):");
	v8 = AddDlgControl((int)& v19, v7, 130, 0, 1015, 5, 65, 63, 8, L"Max Channels = %d");
	v9 = AddDlgControl((int)& v19, v8, 129, 8454272, 1003, 125, 5, 25, 12, L"-1");
	v10 = AddDlgControl((int)& v19, v9, 129, 8454272, 1007, 125, 20, 25, 12, L"-1");
	v11 = AddDlgControl((int)& v19, v10, 129, 8454272, 1008, 125, 35, 25, 12, L"-1");
	v12 = AddDlgControl((int)& v19, v11, 129, 8454272, 1011, 125, 50, 25, 12, L"-1");
	v13 = AddDlgControl((int)& v19, v12, 133, 2162946, 1009, 65, 80, 140, 60, L"No Devices");
	v14 = AddDlgControl((int)& v19, v13, 128, 65539, 1000, 5, 101, 40, 10, L"Stereo");
	v15 = AddDlgControl((int)& v19, v14, 128, 65539, 1001, 55, 101, 60, 10, L"Reset Remix");
	v16 = AddDlgControl((int)& v19, v15, 128, 65539, 1010, 125, 101, 78, 10, L"Show Debug Dialogs");
	v17 = AddDlgControl((int)& v19, v16, 128, 65539, 1005, 5, 117, 40, 10, L"CMixit");
	return AddDlgControl((int)& v19, v17, 128, 65539, 1004, 55, 117, 75, 10, L"Good Get Position");
}

//----- (01020059) --------------------------------------------------------
void DestroySettingsDlgTemplate(LPCVOID pMem)
{
	HGLOBAL v1; // eax
	HGLOBAL v2; // eax

	if (pMem)
	{
		v1 = GlobalHandle(pMem);
		GlobalUnlock(v1);
		v2 = GlobalHandle(pMem);
		GlobalFree(v2);
	}
}

//----- (0102008D) --------------------------------------------------------
signed int WaveMixGetConfig(WORD* a1, int a2)
{
	WORD* v2; // eax
	int v4; // ebx

	v2 = SessionToGlobalDataPtr(a1);
	hMem = (LPARAM)v2;
	if (!v2)
		return 5;
	if (!a2)
		return 11;
	v4 = *(DWORD*)(a2 + 2);
	if (v4 & 1)
		* (WORD*)(a2 + 6) = v2[191];
	if (v4 & 2)
		* (WORD*)(a2 + 8) = 11 * (*((DWORD*)v2 + 96) / 0x2B11u);
	if (v4 & 4)
		* (WORD*)(a2 + 10) = v2[200];
	if (v4 & 8)
		* (WORD*)(a2 + 12) = v2[198];
	if (v4 & 0x10)
		* (WORD*)(a2 + 14) = *((DWORD*)v2 + 107) == (DWORD)cmixit;
	if (v4 & 0x20)
		* (WORD*)(a2 + 16) = *((DWORD*)v2 + 108) == (DWORD)ResetRemix;
	if (v4 & 0x40)
		* (WORD*)(a2 + 18) = v2[210];
	if ((v4 & 0x80u) != 0)
		* (WORD*)(a2 + 20) = v2[12];
	if (v4 & 0x100)
		* (WORD*)(a2 + 24) = dword_1027BE4 != 0;
	if (v4 & 0x200)
		* (WORD*)(a2 + 22) = v2[202];
	return 0;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (0102018C) --------------------------------------------------------
BOOL SaveConfigSettings(int a1)
{
	BOOL result; // eax

	if ((a1 & 0x80u) != 0)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", *(DWORD*)(hMem + 24));
		result = WritePrivateProfileStringA("general", "WaveOutDevice", aWavemixV23ByAn, FileName);
	}
	if (a1 & 1)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", *(unsigned int*)(hMem + 382));
		result = WritePrivateProfileStringA((LPCSTR)(hMem + 28), "Channels", aWavemixV23ByAn, FileName);
	}
	if (a1 & 2)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", (unsigned int)(11 * (*(DWORD*)(hMem + 384) / 0x2B11u)));
		result = WritePrivateProfileStringA((LPCSTR)(hMem + 28), "SamplesPerSec", aWavemixV23ByAn, FileName);
	}
	if (a1 & 4)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", *(DWORD*)(hMem + 400));
		result = WritePrivateProfileStringA((LPCSTR)(hMem + 28), "WaveBlocks", aWavemixV23ByAn, FileName);
	}
	if (a1 & 8)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", *(unsigned int*)(hMem + 396));
		result = WritePrivateProfileStringA((LPCSTR)(hMem + 28), "WaveBlockLen", aWavemixV23ByAn, FileName);
	}
	if (a1 & 0x10)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", *(DWORD*)(hMem + 428) == (DWORD)cmixit);
		result = WritePrivateProfileStringA((LPCSTR)(hMem + 28), "CMixit", aWavemixV23ByAn, FileName);
	}
	if (a1 & 0x20)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", (*(DWORD*)(hMem + 432) != (DWORD)ResetRemix) + 1);
		result = WritePrivateProfileStringA((LPCSTR)(hMem + 28), "Remix", aWavemixV23ByAn, FileName);
	}
	if (a1 & 0x40)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", *(DWORD*)(hMem + 420) == 0);
		result = WritePrivateProfileStringA((LPCSTR)(hMem + 28), "GoodWavePos", aWavemixV23ByAn, FileName);
	}
	if (a1 & 0x100)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", dword_1027BE4 != 0);
		result = WritePrivateProfileStringA("general", "ShowDebugDialogs", aWavemixV23ByAn, FileName);
	}
	if (a1 & 0x200)
	{
		_wsprintfA(aWavemixV23ByAn, "%d", *(DWORD*)(hMem + 404));
		result = WritePrivateProfileStringA((LPCSTR)(hMem + 28), "PauseBlocks", aWavemixV23ByAn, FileName);
	}
	return result;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (010203CD) --------------------------------------------------------
DWORD SetIniFileName(HMODULE hModule)
{
	DWORD result; // eax
	CHAR* i; // eax

	result = GetModuleFileNameA(hModule, FileName, 0x104u);
	if (result)
	{
		for (i = &FileName[result]; *i != 92; --i)
			;
		*i = 0;
		lstrcpyA(i, "\\WAVEMIX.INF");
		result = 1;
	}
	return result;
}

//----- (01020412) --------------------------------------------------------
int InitVolumeTable()
{
	char* v0; // edi
	signed int v1; // esi
	int result; // eax
	int v3; // [esp+Ch] [ebp-Ch]
	int v4; // [esp+10h] [ebp-8h]
	int v5; // [esp+14h] [ebp-4h]

	v4 = 0;
	v3 = 0;
	v0 = (char*)& unk_10259F0;
	do
	{
		v1 = -128;
		v5 = v3;
		do
		{
			v0[v1] = v5 / 10 + -128;
			result = v4;
			v5 += v4;
			++v1;
		} while (v1 < 128);
		++v4;
		v3 -= 128;
		v0 += 256;
	} while ((signed int)v0 <= (signed int)& unk_10263F0);
	return result;
}

//----- (0102046F) --------------------------------------------------------
int WaveMixStartup(HMODULE hModule)
{
	WNDCLASSA WndClass; // [esp+4h] [ebp-28h]

	if (dword_1027BF4)
		return 1;
	if (!SetIniFileName(hModule))
		return 0;
	InitVolumeTable();
	dword_1027BE8 = GetPrivateProfileIntA("general", "debug", 0, FileName);
	dword_1025968 = (int)cmixit;
	dword_10257E0 = hModule;
	WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
	WndClass.hIcon = 0;
	WndClass.lpszMenuName = 0;
	WndClass.lpszClassName = "WavMix32";
	WndClass.hbrBackground = (HBRUSH)GetStockObject(1);
	WndClass.hInstance = dword_10257E0;
	WndClass.style = 0;
	WndClass.lpfnWndProc = WndProc;
	WndClass.cbWndExtra = 0;
	WndClass.cbClsExtra = 0;
	if (!RegisterClassA(&WndClass))
		return 0;
	InitChannelNodes();
	dword_1027BF4 = 1;
	return 1;
}
// 1025968: using guessed type int dword_1025968;
// 1027BE8: using guessed type int dword_1027BE8;
// 1027BF4: using guessed type int dword_1027BF4;

//----- (0102053B) --------------------------------------------------------
signed int WaveMixActivate(WORD* a1, int a2)
{
	WORD* v2; // eax
	int v3; // ecx
	signed int result; // eax
	unsigned int v5; // ST04_4
	struct wavehdr_tag* v6; // eax
	DWORD v7; // eax
	bool v8; // zf

	v2 = SessionToGlobalDataPtr(a1);
	v3 = (int)v2;
	hMem = (LPARAM)v2;
	if (!v2)
		return 5;
	if (a2)
	{
		if (dword_1025798)
			return dword_1025798 != (DWORD)v2 ? 4 : 0;
		if (*((DWORD*)v2 + 5))
			return 12;
		dword_1025798 = (int)v2;
		sndPlaySoundA(0, 0);
		result = GetWaveDevice();
		if (result)
		{
			dword_1025798 = 0;
			return result;
		}
		v5 = *(DWORD*)(hMem + 412);
		*(DWORD*)(hMem + 16) = 1;
		SetWaveOutPosition(v5);
		do
			v6 = (struct wavehdr_tag*)GetWaveBlock();
		while (MixerPlay(v6, 1));
	}
	else
	{
		if (*((DWORD*)v2 + 4))
		{
			v7 = MyWaveOutGetPosition(*((HWAVEOUT*)v2 + 3), *((DWORD*)v2 + 105));
			v3 = hMem;
			*(DWORD*)(hMem + 412) = v7;
		}
		ReleaseWaveDevice(v3);
		v8 = hMem == dword_1025798;
		*(DWORD*)(hMem + 16) = 0;
		if (v8)
			dword_1025798 = 0;
	}
	return 0;
}
// 1025798: using guessed type int dword_1025798;

//----- (01020615) --------------------------------------------------------
MMRESULT WaveMixConfigure(int a1, HWND hWndParent, int a3, int a4, int a5)
{
	WORD* v5; // esi
	WORD* v6; // eax
	const DLGTEMPLATE* v7; // esi
	INT_PTR v8; // edi
	LPARAM v9; // eax
	MMRESULT result; // eax
	WORD* v11; // esi
	LPARAM* v12; // edi
	UINT_PTR v13; // eax
	LPARAM v14; // eax
	bool v15; // zf
	int v16; // ecx
	const char* v17; // eax
	int v18; // eax
	int v19; // eax
	int v20; // eax
	DWORD* v21; // eax
	int v22; // eax
	signed int v23; // eax
	signed int v24; // ecx
	DWORD* v25; // eax
	int v26; // ecx
	int v27; // edx
	unsigned int v28; // ax
	unsigned int v29; // edx
	signed int v30; // ecx
	int v31; // cx
	signed int (*v32)(int, int); // eax
	int v33; // ecx
	DWORD* v34; // eax
	int v35; // esi
	LPARAM dwInitParam; // [esp+Ch] [ebp-6Ch]
	unsigned int v38; // [esp+18h] [ebp-60h]
	DWORD* v39; // [esp+2Ch] [ebp-4Ch]
	WORD* v40; // [esp+30h] [ebp-48h]
	int v41; // [esp+34h] [ebp-44h]
	LPARAM* v42; // [esp+38h] [ebp-40h]
	int v43; // [esp+3Ch] [ebp-3Ch]
	struct tagWAVEOUTCAPSA pwoc; // [esp+40h] [ebp-38h]

	v5 = (WORD*)a1;
	v42 = (LPARAM*)a3;
	v40 = (WORD*)a1;
	v39 = (DWORD*)a4;
	v43 = 0;
	v6 = SessionToGlobalDataPtr((WORD*)a1);
	hMem = (LPARAM)v6;
	if (!v6)
		return 5;
	if (*((DWORD*)v6 + 4))
		return 4;
	if (*((DWORD*)v6 + 5))
		return 12;
	WaveMixFlushChannel((WORD*)a1, -1, 1);
	if (!v42)
	{
		LOWORD(dwInitParam) = 30;
		*(LPARAM*)((char*)& dwInitParam + 2) = 1023;
		WaveMixGetConfig((WORD*)a1, (int)& dwInitParam);
		v7 = (const DLGTEMPLATE*)MakeSettingsDlgTemplate();
		if (!v7)
			return 1;
		*(DWORD*)(hMem + 20) = 1;
		v8 = DialogBoxIndirectParamA(dword_10257E0, v7, hWndParent, SettingsDlgProc, (LPARAM)& dwInitParam);
		DestroySettingsDlgTemplate(v7);
		v9 = hMem;
		*(DWORD*)(hMem + 20) = 0;
		if (v8 != 1)
			return 1;
		if (*(DWORD*)(v9 + 396) == v38)
			* (LPARAM*)((char*)& dwInitParam + 2) &= 0xFFFFFFF7;
		v5 = v40;
		v42 = &dwInitParam;
	}
	if (!*(LPARAM*)((char*)v42 + 2))
		return 1;
	v11 = SessionToGlobalDataPtr(v5);
	hMem = (LPARAM)v11;
	if (!v11)
		return 5;
	v12 = v42;
	v41 = *(LPARAM*)((char*)v42 + 2);
	if (v41 & 0x100)
		dword_1027BE4 = *((WORD*)v42 + 12) != 0;
	if ((v41 & 0x80u) != 0)
	{
		v13 = *((unsigned int*)v42 + 10);
		if (v13 != *((DWORD*)v11 + 6))
		{
			result = waveOutGetDevCapsA(v13, &pwoc, 0x34u);
			if (result)
				return result;
			v14 = hMem;
			qmemcpy((void*)(hMem + 124), &pwoc, 0x34u);
			v15 = *(WORD*)(v14 + 168) == 1;
			*(DWORD*)(v14 + 24) = *((unsigned int*)v42 + 10);
			if (v15 && *(WORD*)(v14 + 382) == 2)
			{
				*(WORD*)(v14 + 382) = 1;
				v16 = *(DWORD*)(v14 + 384);
				v43 = 1;
				*(WORD*)(v14 + 392) = 1;
				*(DWORD*)(v14 + 388) = v16;
			}
			lstrcpyA((LPSTR)(v14 + 28), pwoc.szPname);
			if (!RemoveInvalidIniNameCharacters((LPCSTR)(hMem + 28)))
				lstrcpyA((LPSTR)(hMem + 28), "Unkown Device");
			if (!ReadRegistryToGetMachineSpecificInfSection(*(DWORD*)(hMem + 24), (LPSTR)(hMem + 28), 96))
			{
				v17 = GetOperatingSystemPrefix();
				lstrcpyA((LPSTR)(hMem + 28), v17);
				lstrcatA((LPSTR)(hMem + 28), (LPCSTR)(hMem + 132));
			}
			v11 = (WORD*)hMem;
			v12 = v42;
		}
	}
	if (v41 & 1)
	{
		if (*((WORD*)v12 + 3) <= 1u)
		{
			if (v11[191] == 2)
				v43 = 1;
			v11[191] = 1;
			v19 = *((DWORD*)v11 + 96);
			v11[196] = 1;
			goto LABEL_39;
		}
		if (v11[84] > 1u)
		{
			if (v11[191] == 1)
				v43 = 1;
			v11[191] = 2;
			v18 = *((DWORD*)v11 + 96);
			v11[196] = 2;
			v19 = 2 * v18;
		LABEL_39:
			*((DWORD*)v11 + 97) = v19;
			goto LABEL_40;
		}
	}
LABEL_40:
	if (v41 & 2)
	{
		v20 = *((unsigned int*)v12 + 4);
		if (v20 == 22)
		{
			if (*((DWORD*)v11 + 96) != 22050)
				v43 = 1;
			*((DWORD*)v11 + 96) = 22050;
			v22 = 22050 * (unsigned int)v11[191];
		}
		else
		{
			v15 = v20 == 44;
			v21 = v11 + 192;
			if (v15)
			{
				if (*v21 != 44100)
					v43 = 1;
				*v21 = 44100;
				v22 = 44100 * (unsigned int)v11[191];
			}
			else
			{
				if (*v21 != 11025)
					v43 = 1;
				*v21 = 11025;
				v22 = 11025 * (unsigned int)v11[191];
			}
		}
		*((DWORD*)v11 + 97) = v22;
	}
	if (v41 & 4)
	{
		v23 = *((unsigned int*)v12 + 5);
		v24 = 2;
		*((DWORD*)v11 + 100) = v23;
		if (v23 < 2 || (v24 = 10, v23 > 10))
			* ((DWORD*)v11 + 100) = v24;
		v25 = v11 + 202;
		v26 = *((DWORD*)v11 + 101);
		if (v26 >= 0)
		{
			v27 = *((DWORD*)v11 + 100);
			if (v26 > v27)
				* v25 = v27;
		}
		else
		{
			*v25 = 0;
		}
	}
	if (v43)
		* ((DWORD*)v11 + 99) = FigureOutDMABufferSize(0, (int)(v11 + 190));
	if (v41 & 8)
	{
		v28 = *((WORD*)v12 + 6);
		if (v28)
			* ((DWORD*)v11 + 99) = v28;
	}
	v29 = *((DWORD*)v11 + 99);
	v30 = 344;
	if (v29 < 0x158 || (v30 = 11025, v29 > 0x2B11))
		* ((DWORD*)v11 + 99) = v30;
	v31 = v41;
	if (v41 & 0x10)
		* ((DWORD*)v11 + 107) = cmixit;
	if (v31 & 0x20)
	{
		v32 = ResetRemix;
		if (!*((WORD*)v12 + 8))
			v32 = NoResetRemix;
		*((DWORD*)v11 + 108) = v32;
	}
	if (v31 & 0x40)
		* ((DWORD*)v11 + 105) = *((WORD*)v12 + 9) != 0;
	if (v31 & 0x200)
	{
		v33 = *((unsigned int*)v12 + 11);
		v34 = v11 + 202;
		*((DWORD*)v11 + 101) = v33;
		if (v33 >= 0)
		{
			v35 = *((DWORD*)v11 + 100);
			if (v33 > v35)
				* v34 = v35;
		}
		else
		{
			*v34 = 0;
		}
	}
	WaveMixGetConfig(v40, (int)v12);
	if (v39)
		* v39 = v43;
	if (a5)
		SaveConfigSettings(v41);
	if (dword_1027BE4)
		ShowCurrentSettings();
	return 0;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (01020A36) --------------------------------------------------------
signed int ReadConfigSettings(int a1)
{
	UINT v2; // eax
	UINT_PTR* v3; // ebx
	const char* v4; // eax
	unsigned int v5; // eax
	UINT v6; // eax
	signed int (*v7)(int, int); // ecx
	LPARAM v8; // eax
	UINT v9; // ecx
	LPARAM v10; // eax
	signed int v11; // eax
	LPARAM v12; // ecx
	signed int v13; // edx
	int v14; // eax
	signed int v15; // eax
	LPARAM v16; // ecx
	signed int v17; // edx
	unsigned int v18; // ax
	LPARAM v19; // ecx
	int v20; // eax
	int v21; // eax
	unsigned int v22; // eax
	int v23; // esi
	const CHAR* v24; // [esp-10h] [ebp-24h]
	int v25; // [esp-Ch] [ebp-20h]
	UINT v26; // [esp+4h] [ebp-10h]
	UINT v27; // [esp+8h] [ebp-Ch]
	UINT v28; // [esp+Ch] [ebp-8h]
	unsigned int nDefault; // [esp+10h] [ebp-4h]
	UINT nDefaulta; // [esp+10h] [ebp-4h]
	INT nDefaultb; // [esp+10h] [ebp-4h]

	nDefault = waveOutGetNumDevs();
	if (!nDefault)
		return 0;
	if (*(_BYTE*)(a1 + 3) & 4 && ReadRegistryForAppSpecificConfigs(a1))
	{
		WaveMixConfigure(hMem, 0, a1, 0, 0);
		return 1;
	}
	if (*(_BYTE*)(a1 + 2) >= 0)
	{
		v3 = (UINT_PTR*)(hMem + 24);
		v2 = GetPrivateProfileIntA("general", "WaveOutDevice", 0, FileName);
	}
	else
	{
		v2 = *(unsigned int*)(a1 + 20);
		v3 = (UINT_PTR*)(hMem + 24);
	}
	*v3 = v2;
	if (*v3 >= nDefault)
		* v3 = 0;
	if (waveOutGetDevCapsA(*v3, (LPWAVEOUTCAPSA)(hMem + 124), 0x34u)
		|| !RemoveInvalidIniNameCharacters((LPCSTR)(hMem + 132)))
	{
		lstrcpyA((LPSTR)(hMem + 132), "Unkown Device");
	}
	if (!ReadRegistryToGetMachineSpecificInfSection(*(DWORD*)(hMem + 24), (LPSTR)(hMem + 28), 96))
	{
		v4 = GetOperatingSystemPrefix();
		lstrcpyA((LPSTR)(hMem + 28), v4);
		lstrcatA((LPSTR)(hMem + 28), (LPCSTR)(hMem + 132));
	}
	nDefaulta = GetPrivateProfileIntA("default", "Remix", 1, FileName);
	v5 = DefaultGoodWavePos(*(DWORD*)(hMem + 24));
	v28 = GetPrivateProfileIntA("default", "GoodWavePos", v5, FileName);
	v27 = GetPrivateProfileIntA("default", "WaveBlocks", 3, FileName);
	v26 = GetPrivateProfileIntA("default", "SamplesPerSec", 11, FileName);
	if (*(_BYTE*)(hMem + 172) & 0x10)
	{
		if (!dword_1027BE4)
			return 0;
		v25 = hMem + 132;
		v24 = "%s is a syncronous (blocking) wave output device.  This will not permit audio to play while other applications are running.";
	LABEL_19:
		_wsprintfA(aWavemixV23ByAn, v24, v25);
		MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x40u);
		return 0;
	}
	if (GetPrivateProfileIntA("not compatible", (LPCSTR)(hMem + 28), 0, FileName))
	{
		if (!dword_1027BE4)
			return 0;
		v25 = hMem + 28;
		v24 = "%s is not compatible with the realtime wavemixer.";
		goto LABEL_19;
	}
	v6 = GetPrivateProfileIntA((LPCSTR)(hMem + 28), "Remix", nDefaulta, FileName);
	v7 = NoResetRemix;
	if (v6 != 2)
		v7 = ResetRemix;
	v8 = hMem;
	*(DWORD*)(hMem + 432) = v7;
	v9 = GetPrivateProfileIntA((LPCSTR)(v8 + 28), "GoodWavePos", v28, FileName);
	v10 = hMem;
	*(DWORD*)(hMem + 420) = v9 != 0;
	v11 = GetPrivateProfileIntA((LPCSTR)(v10 + 28), "WaveBlocks", v27, FileName);
	v12 = hMem;
	v13 = 2;
	*(DWORD*)(hMem + 400) = v11;
	if (v11 < 2 || (v13 = 10, v11 > 10))
		* (DWORD*)(v12 + 400) = v13;
	v14 = DefaultPauseBlocks(*(DWORD*)(v12 + 400));
	v15 = GetPrivateProfileIntA((LPCSTR)(hMem + 28), "PauseBlocks", v14, FileName);
	v16 = hMem;
	*(DWORD*)(hMem + 404) = v15;
	if (v15 >= 0)
	{
		v17 = *(DWORD*)(v16 + 400);
		if (v15 > v17)
			* (DWORD*)(v16 + 404) = v17;
	}
	else
	{
		*(DWORD*)(v16 + 404) = 0;
	}
	nDefaultb = GetPrivateProfileIntA((LPCSTR)(v16 + 28), "SamplesPerSec", v26, FileName);
	v18 = GetPrivateProfileIntA((LPCSTR)(hMem + 28), "Channels", 1, FileName);
	v19 = hMem;
	*(WORD*)(hMem + 382) = v18;
	if (v18 >= 1u)
	{
		if (v18 > 2u)
			* (WORD*)(v19 + 382) = 2;
	}
	else
	{
		*(WORD*)(v19 + 382) = 1;
	}
	v20 = *(unsigned int*)(v19 + 382);
	if (nDefaultb == 22)
	{
		*(DWORD*)(v19 + 384) = 22050;
		v21 = 22050 * v20;
	}
	else if (nDefaultb == 44)
	{
		*(DWORD*)(v19 + 384) = 44100;
		v21 = 44100 * v20;
	}
	else
	{
		v21 = 11025 * v20;
	}
	*(DWORD*)(v19 + 388) = v21;
	v22 = GetPrivateProfileIntA("default", "WaveBlockLen", 0, FileName);
	v23 = hMem;
	*(DWORD*)(v23 + 396) = FigureOutDMABufferSize(v22, hMem + 380);
	WaveMixConfigure(v23, 0, a1, 0, 0);
	return 1;
}
// 1027BE4: using guessed type int dword_1027BE4;

//----- (01020D99) --------------------------------------------------------
int WaveMixConfigureInit(WORD* a1)
{
	unsigned int v1; // ecx
	HMODULE v2; // eax
	int result; // eax
	BOOL v4; // eax
	DWORD* v5; // eax
	WORD* v6; // eax
	void* v7; // ST0C_4
	int v8; // [esp+8h] [ebp-20h]
	char v9; // [esp+Bh] [ebp-1Dh]
	int v10; // [esp+20h] [ebp-8h]
	int v11; // [esp+24h] [ebp-4h]

	memset(&v8, 0, 0x1Cu);
	v1 = 30;
	v11 = 0;
	v8 = 30;
	if (a1)
	{
		if (*a1 < 0x1Eu)
			v1 = (unsigned int)* a1;
		qmemcpy(&v8, a1, v1);
	}
	if (dword_1027BF4 || (v2 = GetModuleHandleA(0), (result = WaveMixStartup(v2)) != 0))
	{
		if (v9 & 1)
			v4 = v10 != 0;
		else
			v4 = GetPrivateProfileIntA("general", "ShowDebugDialogs", 0, FileName) != 0;
		dword_1027BE4 = v4;
		if (!waveOutGetNumDevs())
		{
			if (dword_1027BE4)
			{
				_wsprintfA(aWavemixV23ByAn, "This system does not have a valid wave output device.");
				MessageBoxA(0, aWavemixV23ByAn, "WavMix32", 0x40u);
			}
			return 0;
		}
		if (GetPrivateProfileIntA("general", "ShowDevices", 0, FileName))
			ShowWaveOutDevices();
		v5 = LocalAlloc(0x40u, 0x1C0u);
		hMem = (LPARAM)v5;
		if (!v5)
			return 0;
		v5[107] = dword_1025968;
		*((WORD*)v5 + 222) = 21554;
		*(WORD*)v5 = 21554;
		v5[102] = 0;
		v5[5] = 0;
		*((WORD*)v5 + 88) = 10;
		*((WORD*)v5 + 89) = 10;
		memset(v5 + 61, 0xFFu, 0x40u);
		_memmove(v5 + 95, gpFormat, 0x10u);
		if (!ReadConfigSettings((int)& v8))
		{
			v6 = (WORD*)hMem;
			v7 = (void*)hMem;
			*(WORD*)(hMem + 444) = 0;
			*v6 = 0;
			LocalFree(v7);
			hMem = 0;
		}
		result = hMem;
	}
	return result;
}
// 10028C0: using guessed type int gpFormat[4];
// 1025968: using guessed type int dword_1025968;
// 1027BE4: using guessed type int dword_1027BE4;
// 1027BF4: using guessed type int dword_1027BF4;

//----- (01020F2D) --------------------------------------------------------
int WaveMixInit()
{
	return WaveMixConfigureInit(0);
}

//----- (01020F3A) --------------------------------------------------------
HLOCAL WaveMixCloseSession(HLOCAL hMem)
{
	void* v1; // edi
	HLOCAL result; // eax

	::hMem = (LPARAM)SessionToGlobalDataPtr(hMem);
	if (!::hMem
		|| (WaveMixActivate(hMem, 0),
			WaveMixCloseChannel(hMem, 0, 1),
			v1 = (void*)::hMem,
			::hMem = 0,
			memset(v1, 0, 0x1C0u),
			!hMem)
		|| (result = LocalFree(hMem)) != 0)
	{
		result = (HLOCAL)5;
	}
	return result;
}
