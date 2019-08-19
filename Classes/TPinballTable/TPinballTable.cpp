#include "TPinballTable.h"

//----- (01017467) --------------------------------------------------------
void TPinballTable::LightShow_timeout(int a1, void* a2)
{
	void (**v2)(signed int, DWORD); // eax

	v2 = *(void (***)(signed int, DWORD))a2;
	*(DWORD*)((char*)a2 + 90) = 0;
	(*v2)(1013, 0.0);
}

//----- (0101748B) --------------------------------------------------------
void TPinballTable::EndGame_timeout(int a1, void* a2)
{
	char* v2; // esi
	int v3; // eax
	int v4; // edi
	void(__thiscall * **v5)(DWORD, signed int, DWORD); // esi
	char* v6; // eax
	char* v7; // [esp+28h] [ebp+Ch]

	v2 = (char*)a2;
	*(DWORD*)((char*)a2 + 94) = 0;
	pb_end_game();
	v3 = *(DWORD*)(*(DWORD*)((char*)a2 + 254) + 4) - 1;
	if (v3 >= 0)
	{
		v4 = 4 * v3 + 8;
		v7 = *(char**)(*(DWORD*)((char*)a2 + 254) + 4);
		do
		{
			(***(void (****)(signed int, DWORD))(v4 + *(DWORD*)(v2 + 254)))(1022, 0.0);
			v4 -= 4;
			--v7;
		} while (v7);
	}
	v5 = *(void(__thiscall * ***)(DWORD, signed int, DWORD))(v2 + 230);
	if (v5)
		(**v5)(v5, 1022, 0.0);
	control_handler(67, MissTextBox);
	v6 = get_rc_string(24, 0);
	TTextBox::Display(InfoTextBox, 1022, v6, -1.0);
}

//----- (01017526) --------------------------------------------------------
int __thiscall TPinballTable::AddScore(TPinballTable* this, int a2)
{
	DWORD* v2; // eax
	DWORD* v3; // eax
	int v4; // esi
	int* v5; // eax
	signed int v6; // edx

	if (*(DWORD*)((char*)this + 318))
	{
		v2 = (DWORD*)((char*)this + 314);
		*v2 += a2;
		if (*(DWORD*)((char*)this + 314) > 5000000)
			* v2 = 5000000;
	}
	if (*(DWORD*)((char*)this + 310))
	{
		v3 = (DWORD*)((char*)this + 306);
		*v3 += a2;
		if (*(DWORD*)((char*)this + 306) > 5000000)
			* v3 = 5000000;
	}
	v4 = *(DWORD*)((char*)this + 298) + a2 * dword_1024758[*(DWORD*)((char*)this + 294)];
	v5 = (int*)((char*)this + 82);
	*v5 += v4;
	v6 = *(DWORD*)((char*)this + 82);
	if (v6 > 1000000000)
	{
		++* (DWORD*)((char*)this + 86);
		*v5 = v6 - 1000000000;
	}
	score_set(*(DWORD * *)((char*)this + 50), *v5);
	return v4;
}

//----- (010175AA) --------------------------------------------------------
void TPinballTable::ChangeBallCount(TPinballTable* this, int a2, int a3)
{
	TPinballTable* v3; // esi

	v3 = this;
	*(DWORD*)((char*)this + 326) = a3;
	if (a3 <= 0)
	{
		score_erase(a2, *(DWORD * *)((char*)this + 54), 1);
	}
	else
	{
		score_set(*(DWORD * *)((char*)this + 54), *(DWORD*)((char*)this + 330) - a3 + 1);
		score_update(a2, *(int**)((char*)v3 + 54));
	}
}

//----- (010175EF) --------------------------------------------------------
void TPinballTable::replay_timer_callback(int a1, void* a2)
{
	*(DWORD*)((char*)a2 + 354) = 0;
	*(DWORD*)((char*)a2 + 358) = 0;
}

//----- (0101760E) --------------------------------------------------------
void __thiscall TPinballTable::port_draw(TPinballTable* this)
{
	TPinballTable* v1; // edi
	int v2; // eax
	int v3; // esi
	int v4; // ebx

	v1 = this;
	v2 = *(DWORD*)(*(DWORD*)((char*)this + 254) + 4) - 1;
	if (v2 >= 0)
	{
		v3 = 4 * v2 + 8;
		v4 = *(DWORD*)(*(DWORD*)((char*)this + 254) + 4);
		do
		{
			(*(void (**)(void))(**(DWORD * *)(v3 + *(DWORD*)((char*)v1 + 254)) + 4))();
			v3 -= 4;
			--v4;
		} while (v4);
	}
}

//----- (01017648) --------------------------------------------------------
struct TPinballComponent* __thiscall TPinballTable::find_component(TPinballTable* this, char* lpString2)
{
	TPinballTable* v2; // edi
	signed int v3; // ebx
	int v4; // esi
	const CHAR* v5; // eax
	struct TPinballComponent* result; // eax
	int v7; // [esp+Ch] [ebp-8h]
	int v8; // [esp+10h] [ebp-4h]

	v8 = 0;
	v2 = this;
	v7 = *(DWORD*)(*(DWORD*)((char*)this + 254) + 4);
	if (*(DWORD*)(*(DWORD*)((char*)this + 254) + 4) <= 0)
	{
	LABEL_6:
		MessageBoxA(0, "Table cant find:", lpString2, 0x2000u);
		result = 0;
	}
	else
	{
		v3 = 8;
		while (1)
		{
			v4 = *(DWORD*)(v3 + *(DWORD*)((char*)v2 + 254));
			v5 = *(const CHAR * *)(v4 + 10);
			if (v5)
			{
				if (!lstrcmpA(v5, lpString2))
					break;
			}
			++v8;
			v3 += 4;
			if (v8 >= v7)
				goto LABEL_6;
		}
		result = (struct TPinballComponent*)v4;
	}
	return result;
}

//----- (010176BE) --------------------------------------------------------
struct TPinballComponent* __thiscall TPinballTable::find_component(TPinballTable* this, int Val)
{
	int v2; // eax
	int v3; // ecx
	int v4; // esi
	int v5; // edx
	struct TPinballComponent* result; // eax
	char DstBuf; // [esp+8h] [ebp-CCh]

	v2 = *(DWORD*)((char*)this + 254);
	v3 = *(DWORD*)(v2 + 4);
	v4 = 0;
	if (v3 <= 0)
	{
	LABEL_5:
		__itoa(Val, &DstBuf, 10);
		MessageBoxA(0, "Table cant find (lh):", &DstBuf, 0x2000u);
		result = 0;
	}
	else
	{
		v5 = v2 + 8;
		while (1)
		{
			result = *(struct TPinballComponent**)v5;
			if (Val == *(DWORD*)(*(DWORD*)v5 + 22))
				break;
			++v4;
			v5 += 4;
			if (v4 >= v3)
				goto LABEL_5;
		}
	}
	return result;
}

//----- (01017738) --------------------------------------------------------
void TPinballTable::tilt_timeout(int a1, void* a2)
{
	int v2; // eax
	DWORD* v3; // edi
	int v4; // ebx
	char v5; // [esp+14h] [ebp-Ch]

	*(DWORD*)((char*)a2 + 98) = 0;
	if (*(DWORD*)((char*)a2 + 370))
	{
		v2 = *(DWORD*)((char*)a2 + 262);
		v3 = (DWORD*)(v2 + 8);
		if (*(DWORD*)(v2 + 4) > 0)
		{
			v4 = *(DWORD*)(v2 + 4);
			do
			{
				(*(void (**)(DWORD, char*, char*, DWORD, DWORD))(**(DWORD * *)((char*)a2 + 226) + 20))(
					*v3,
					&v5,
					&v5,
					0.0,
					0);
				++v3;
				--v4;
			} while (v4);
		}
	}
}

//----- (01017791) --------------------------------------------------------
void TPinballTable::tilt(TPinballTable* this, int a2, float a3)
{
	TPinballTable* v3; // esi
	int v4; // ST14_4
	char* v5; // eax
	int v6; // ebx
	signed int v7; // ebx
	int v8; // [esp+20h] [ebp-4h]

	v3 = this;
	if (!*(DWORD*)((char*)this + 370) && !*(DWORD*)((char*)this + 78))
	{
		v4 = a2;
		TTextBox::Clear(InfoTextBox, a2);
		TTextBox::Clear(MissTextBox, a2);
		v5 = get_rc_string(35, 0);
		TTextBox::Display(InfoTextBox, a2, v5, -1.0);
		loader_play_sound(*(DWORD*)((char*)v3 + 74));
		*(DWORD*)((char*)v3 + 98) = timer_set(30.0, (int)v3, (int)TPinballTable::tilt_timeout);
		v6 = *(DWORD*)(*(DWORD*)((char*)v3 + 254) + 4);
		v8 = *(DWORD*)(*(DWORD*)((char*)v3 + 254) + 4);
		(**(void(__thiscall * **)(TPinballTable*, signed int, DWORD, int))v3)(v3, 1011, -1.0, v4);
		if (v6 > 0)
		{
			v7 = 8;
			do
			{
				(***(void (****)(signed int, DWORD))(v7 + *(DWORD*)((char*)v3 + 254)))(1011, LODWORD(a3));
				v7 += 4;
				--v8;
			} while (v8);
		}
		(***(void (****)(signed int))((char*)v3 + 266))(8);
		*(DWORD*)((char*)v3 + 370) = 1;
		table_control_handler(1011);
	}
}

//----- (010187D6) --------------------------------------------------------
int TPinballTable::Message(TPinballTable* this, int a2, int a3, float a4)
{
	TPinballTable* v4; // esi
	int v5; // eax
	int v6; // edi
	int v7; // ebx
	int v8; // eax
	int v9; // eax
	signed __int64 v10; // rax
	DWORD* v11; // ST14_4
	bool v12; // zf
	bool v13; // sf
	unsigned __int8 v14; // of
	DWORD* v15; // edi
	signed int v16; // eax
	int v17; // edi
	float v18; // ST10_4
	char* v19; // eax
	void(__thiscall * **v20)(DWORD, signed int, DWORD); // esi
	float v21; // ST10_4
	signed int v22; // ebx
	int v23; // ecx
	int v24; // eax
	int v25; // ST18_4
	DWORD* v26; // ST14_4
	int v27; // edi
	float v28; // ST28_4
	char* v29; // eax
	char* v30; // eax
	void(__thiscall * **v31)(DWORD, signed int, DWORD); // esi
	void(__thiscall * **v32)(DWORD, signed int, DWORD); // esi
	int v33; // eax
	int v34; // edi
	int v35; // ebx
	char* v36; // eax
	float v38; // [esp+18h] [ebp-18h]
	int v39; // [esp+2Ch] [ebp-4h]
	signed int v40; // [esp+3Ch] [ebp+Ch]
	DWORD** v41; // [esp+3Ch] [ebp+Ch]
	signed int v42; // [esp+3Ch] [ebp+Ch]

	v4 = this;
	switch (a3)
	{
	case 1000:
		if (!*(DWORD*)((char*)this + 370))
		{
			v32 = *(void(__thiscall * ***)(DWORD, signed int, DWORD))((char*)this + 42);
			goto LABEL_73;
		}
		goto LABEL_81;
	case 1001:
		if (!*(DWORD*)((char*)this + 370))
		{
			v31 = *(void(__thiscall * ***)(DWORD, signed int, DWORD))((char*)this + 42);
			goto LABEL_70;
		}
		goto LABEL_81;
	case 1002:
		if (!*(DWORD*)((char*)this + 370))
		{
			v32 = *(void(__thiscall * ***)(DWORD, signed int, DWORD))((char*)this + 46);
		LABEL_73:
			(**v32)(v32, 1, LODWORD(a4));
		}
		goto LABEL_81;
	case 1003:
		if (!*(DWORD*)((char*)this + 370))
		{
			v31 = *(void(__thiscall * ***)(DWORD, signed int, DWORD))((char*)this + 46);
		LABEL_70:
			(**v31)(v31, 2, LODWORD(a4));
		}
		goto LABEL_81;
	case 1004:
	case 1005:
		(***(void(__thiscall * ***)(DWORD, int, DWORD))((char*)this + 222))(
			*(DWORD*)((char*)this + 222),
			a3,
			LODWORD(a4));
		goto LABEL_81;
	case 1008:
	case 1009:
	case 1010:
		v33 = *(DWORD*)(*(DWORD*)((char*)this + 254) + 4) - 1;
		if (v33 >= 0)
		{
			v34 = 4 * v33 + 8;
			v35 = *(DWORD*)(*(DWORD*)((char*)this + 254) + 4);
			do
			{
				(***(void (****)(int, DWORD))(v34 + *(DWORD*)((char*)v4 + 254)))(a3, LODWORD(a4));
				v34 -= 4;
				--v35;
			} while (v35);
		}
		goto LABEL_81;
	case 1012:
		(***(void (****)(signed int, DWORD))((char*)this + 266))(14, 0.0);
		if (*(DWORD*)((char*)v4 + 370))
		{
			*(DWORD*)((char*)v4 + 370) = 0;
			if (*(DWORD*)((char*)v4 + 98))
				timer_kill(*(DWORD*)((char*)v4 + 98));
			*(DWORD*)((char*)v4 + 98) = 0;
		}
		goto LABEL_81;
	case 1013:
		(***(void (****)(signed int, DWORD))((char*)this + 266))(34, 0.0);
		(***(void (****)(signed int, DWORD))((char*)v4 + 266))(20, 0.0);
		(***(void (****)(signed int, DWORD))((char*)v4 + 222))(1016, 0.0);
		if (*(_BYTE*)(*(DWORD*)((char*)v4 + 230) + 5))
			v19 = get_rc_string(30, 0);
		else
			v19 = get_rc_string(26, 0);
		TTextBox::Display(InfoTextBox, 0, v19, -1.0);
		v20 = *(void(__thiscall * ***)(DWORD, signed int, DWORD))((char*)v4 + 230);
		if (v20)
			(**v20)(v20, 1014, 0.0);
		goto LABEL_81;
	case 1014:
		if (*(DWORD*)((char*)this + 94))
		{
			timer_kill(*(DWORD*)((char*)this + 94));
			TPinballTable::EndGame_timeout(0, (void*)v4);
			pb_mode_change(1);
		}
		if (*(DWORD*)((char*)v4 + 90))
		{
			timer_kill(*(DWORD*)((char*)v4 + 90));
			*(DWORD*)((char*)v4 + 90) = 0;
			TPinballTable::Message(v4, 1013, 0.0);
		}
		else
		{
			*(DWORD*)((char*)v4 + 62) = 0;
			TPinballTable::Message(v4, 1024, 0.0);
			v9 = *(DWORD*)(*(DWORD*)((char*)v4 + 262) + 8);
			*(float*)(v9 + 46) = 0.0;
			*(float*)(v9 + 42) = 0.0;
			*(DWORD*)(v9 + 50) = -1085485875;
			v10 = (signed __int64)_floor(a4);
			*(DWORD*)((char*)v4 + 214) = v10;
			if ((signed int)v10 >= 1)
			{
				if ((signed int)v10 > 4)
					* (DWORD*)((char*)v4 + 214) = 4;
			}
			else
			{
				*(DWORD*)((char*)v4 + 214) = 1;
			}
			v11 = *(DWORD * *)((char*)v4 + 102);
			*(DWORD*)((char*)v4 + 218) = 0;
			*(DWORD*)((char*)v4 + 50) = v11;
			*(DWORD*)((char*)v4 + 82) = 0;
			score_set(v11, 0);
			v14 = __OFSUB__(*(DWORD*)((char*)v4 + 214), 1);
			v12 = *(DWORD*)((char*)v4 + 214) == 1;
			v13 = *(DWORD*)((char*)v4 + 214) - 1 < 0;
			*(DWORD*)((char*)v4 + 294) = 0;
			v40 = 1;
			if (!((unsigned __int8)(v13 ^ v14) | v12))
			{
				v15 = (DWORD*)((char*)v4 + 134);
				do
				{
					score_set((DWORD*) * (v15 - 1), 0);
					++v40;
					*v15 = 0;
					v15[1] = 0;
					v15[3] = *(DWORD*)((char*)v4 + 330);
					v15[4] = *(DWORD*)((char*)v4 + 334);
					v15[5] = *(DWORD*)((char*)v4 + 342);
					v15[2] = *(DWORD*)((char*)v4 + 314);
					v15 += 7;
				} while (v40 < *(DWORD*)((char*)v4 + 214));
			}
			*(DWORD*)((char*)v4 + 326) = *(DWORD*)((char*)v4 + 330);
			Sound_Idle();
			TPinballTable::ChangeBallCount(v4, 0, *(DWORD*)((char*)v4 + 326));
			score_set(*(DWORD * *)((char*)v4 + 58), *(DWORD*)((char*)v4 + 218) + 1);
			score_update(0, *(int**)((char*)v4 + 58));
			Sound_Idle();
			v16 = *(DWORD*)((char*)v4 + 214);
			if (v16 < 4)
			{
				v41 = (DWORD * *)((char*)v4 + 28 * v16 + 102);
				v17 = 4 - v16;
				do
				{
					score_set(*v41, -1);
					v41 += 7;
					--v17;
				} while (v17);
			}
			Sound_Idle();
			*(DWORD*)((char*)v4 + 318) = 0;
			*(DWORD*)((char*)v4 + 310) = 0;
			*(DWORD*)((char*)v4 + 322) = 0;
			TTextBox::Clear(InfoTextBox, 0);
			Sound_Idle();
			TTextBox::Clear(MissTextBox, 0);
			Sound_Idle();
			(***(void (****)(signed int, DWORD))((char*)v4 + 266))(28, 0.2);
			v18 = loader_play_sound(*(DWORD*)((char*)v4 + 66));
			*(DWORD*)((char*)v4 + 90) = timer_set(v18, (int)v4, (int)TPinballTable::LightShow_timeout);
		}
		goto LABEL_81;
	case 1018:
		if (*(DWORD*)((char*)this + 358))
			timer_kill(*(DWORD*)((char*)this + 358));
		v21 = _floor(a4);
		*(DWORD*)((char*)v4 + 358) = timer_set(v21, (int)v4, (int)TPinballTable::replay_timer_callback);
		*(DWORD*)((char*)v4 + 354) = 1;
		goto LABEL_81;
	case 1021:
		v22 = *(DWORD*)((char*)this + 214);
		if (v22 > 1)
		{
			v23 = *(DWORD*)((char*)this + 218);
			v39 = (v23 + 1) % v22;
			v24 = (int)v4 + 28 * v39;
			if (*(DWORD*)(v24 + 118) <= 0)
				goto LABEL_81;
			*(DWORD*)((char*)v4 + 28 * v23 + 106) = *(DWORD*)((char*)v4 + 82);
			*(DWORD*)((char*)v4 + 28 * *(DWORD*)((char*)v4 + 218) + 110) = *(DWORD*)((char*)v4 + 86);
			*(DWORD*)((char*)v4 + 28 * *(DWORD*)((char*)v4 + 218) + 118) = *(DWORD*)((char*)v4 + 326);
			*(DWORD*)((char*)v4 + 28 * *(DWORD*)((char*)v4 + 218) + 122) = *(DWORD*)((char*)v4 + 334);
			*(DWORD*)((char*)v4 + 28 * *(DWORD*)((char*)v4 + 218) + 126) = *(DWORD*)((char*)v4 + 342);
			*(DWORD*)((char*)v4 + 28 * *(DWORD*)((char*)v4 + 218) + 114) = *(DWORD*)((char*)v4 + 314);
			*(DWORD*)((char*)v4 + 82) = *(DWORD*)(v24 + 106);
			v25 = *(DWORD*)((char*)v4 + 82);
			*(DWORD*)((char*)v4 + 86) = *(DWORD*)(v24 + 110);
			*(DWORD*)((char*)v4 + 326) = *(DWORD*)(v24 + 118);
			*(DWORD*)((char*)v4 + 334) = *(DWORD*)(v24 + 122);
			*(DWORD*)((char*)v4 + 342) = *(DWORD*)(v24 + 126);
			*(DWORD*)((char*)v4 + 314) = *(DWORD*)(v24 + 114);
			v26 = *(DWORD * *)(v24 + 102);
			*(DWORD*)((char*)v4 + 50) = v26;
			score_set(v26, v25);
			*(DWORD*)(*(DWORD*)((char*)v4 + 50) + 4) = 1;
			TPinballTable::ChangeBallCount(v4, 0, *(DWORD*)((char*)v4 + 326));
			score_set(*(DWORD * *)((char*)v4 + 58), v39 + 1);
			score_update(0, *(int**)((char*)v4 + 58));
			v27 = 0;
			if (*(DWORD*)(*(DWORD*)((char*)v4 + 254) + 4) > 0)
			{
				v42 = 8;
				do
				{
					v28 = (double)v39;
					(***(void (****)(signed int, DWORD))(v42 + *(DWORD*)((char*)v4 + 254)))(1020, LODWORD(v28));
					v42 += 4;
					++v27;
				} while (v27 < *(DWORD*)(*(DWORD*)((char*)v4 + 254) + 4));
			}
			if (v39)
			{
				switch (v39)
				{
				case 1:
					v38 = -1.0;
					if (*(_BYTE*)(*(DWORD*)((char*)v4 + 230) + 5))
						v29 = get_rc_string(31, 0);
					else
						v29 = get_rc_string(27, 0);
					break;
				case 2:
					v38 = -1.0;
					if (*(_BYTE*)(*(DWORD*)((char*)v4 + 230) + 5))
						v29 = get_rc_string(32, 0);
					else
						v29 = get_rc_string(28, 0);
					break;
				case 3:
					v38 = -1.0;
					if (*(_BYTE*)(*(DWORD*)((char*)v4 + 230) + 5))
						v29 = get_rc_string(33, 0);
					else
						v29 = get_rc_string(29, 0);
					break;
				default:
				LABEL_59:
					*(DWORD*)((char*)v4 + 318) = 0;
					*(DWORD*)((char*)v4 + 310) = 0;
					*(DWORD*)((char*)v4 + 322) = 0;
					*(DWORD*)((char*)v4 + 218) = v39;
					goto LABEL_81;
				}
			}
			else
			{
				v38 = -1.0;
				if (*(_BYTE*)(*(DWORD*)((char*)v4 + 230) + 5))
					v29 = get_rc_string(30, 0);
				else
					v29 = get_rc_string(26, 0);
			}
			TTextBox::Display(InfoTextBox, 0, v29, v38);
			goto LABEL_59;
		}
		if (*(_BYTE*)(*(DWORD*)((char*)this + 230) + 5))
			v30 = get_rc_string(30, 0);
		else
			v30 = get_rc_string(26, 0);
		TTextBox::Display(InfoTextBox, 0, v30, -1.0);
	LABEL_81:
		table_control_handler(a3);
		return 0;
	case 1022:
		loader_play_sound(*(DWORD*)((char*)this + 70));
		TTextBox::Clear(MissTextBox, a2);
		v36 = get_rc_string(34, 0);
		TTextBox::Display(InfoTextBox, a2, v36, -1.0);
		*(DWORD*)((char*)v4 + 94) = timer_set(3.0, (int)v4, (int)TPinballTable::EndGame_timeout);
		goto LABEL_81;
	case 1024:
		v5 = *(DWORD*)(*(DWORD*)((char*)this + 254) + 4) - 1;
		if (v5 >= 0)
		{
			v6 = 4 * v5 + 8;
			v7 = *(DWORD*)(*(DWORD*)((char*)this + 254) + 4);
			do
			{
				(***(void (****)(signed int, DWORD))(v6 + *(DWORD*)((char*)v4 + 254)))(1024, 0.0);
				v6 -= 4;
				--v7;
			} while (v7);
		}
		if (*(DWORD*)((char*)v4 + 358))
			timer_kill(*(DWORD*)((char*)v4 + 358));
		v8 = *(DWORD*)((char*)v4 + 90);
		*(DWORD*)((char*)v4 + 358) = 0;
		if (v8)
		{
			timer_kill(v8);
			(***(void (****)(signed int, DWORD))((char*)v4 + 266))(34, 0.0);
		}
		*(DWORD*)((char*)v4 + 90) = 0;
		*(DWORD*)((char*)v4 + 294) = 0;
		*(DWORD*)((char*)v4 + 298) = 0;
		*(DWORD*)((char*)v4 + 302) = 0;
		*(DWORD*)((char*)v4 + 306) = 10000;
		*(DWORD*)((char*)v4 + 310) = 0;
		*(DWORD*)((char*)v4 + 314) = 20000;
		*(DWORD*)((char*)v4 + 318) = 0;
		*(DWORD*)((char*)v4 + 322) = 0;
		*(DWORD*)((char*)v4 + 334) = 0;
		*(DWORD*)((char*)v4 + 338) = 0;
		*(DWORD*)((char*)v4 + 342) = 0;
		*(DWORD*)((char*)v4 + 346) = 0;
		*(DWORD*)((char*)v4 + 350) = 0;
		*(DWORD*)((char*)v4 + 354) = 0;
		*(DWORD*)((char*)v4 + 358) = 0;
		*(DWORD*)((char*)v4 + 370) = 0;
		goto LABEL_81;
	default:
		goto LABEL_81;
	}
}

//----- (0101A951) --------------------------------------------------------
TZmapList* __thiscall TPinballTable::~TPinballTable(TPinballTable* this)
{
	TPinballTable* v1; // esi
	int* v2; // edi
	int i; // ecx
	signed int v5; // [esp+Ch] [ebp-4h]

	v1 = this;
	*(DWORD*)this = &TPinballTable::vftable;
	v2 = (int*)((char*)this + 102);
	v5 = 4;
	do
	{
		if (*v2)
		{
			objlist_destroy(*v2);
			*v2 = 0;
		}
		v2 += 7;
		--v5;
	} while (v5);
	if (*(DWORD*)((char*)v1 + 58))
	{
		objlist_destroy(*(DWORD*)((char*)v1 + 58));
		*(DWORD*)((char*)v1 + 58) = 0;
	}
	if (*(DWORD*)((char*)v1 + 54))
	{
		objlist_destroy(*(DWORD*)((char*)v1 + 54));
		*(DWORD*)((char*)v1 + 54) = 0;
	}
	for (i = *(DWORD*)((char*)v1 + 266); ; i = *(DWORD*)(*(DWORD*)((char*)v1 + 254) + 8))
	{
		if (i)
			(*(void (**)(signed int))(*(DWORD*)i + 16))(1);
		if (!*(DWORD*)(*(DWORD*)((char*)v1 + 254) + 4))
			break;
	}
	objlist_destroy(*(DWORD*)((char*)v1 + 262));
	objlist_destroy(*(DWORD*)((char*)v1 + 254));
	return TPinballComponent::~TPinballComponent(v1);
}
// 1002790: using guessed type void *TPinballTable::vftable;

//----- (0101A9F2) --------------------------------------------------------
TPinballTable* __thiscall TPinballTable::destroy(TPinballTable* this, char a2)
{
	TPinballTable* v2; // esi

	v2 = this;
	TPinballTable::~TPinballTable(this);
	if (a2 & 1)
		component_delete((void*)v2);
	return v2;
}

//----- (0101AAF3) --------------------------------------------------------
TPinballTable* __thiscall TPinballTable::TPinballTable(TPinballTable* this)
{
	TBall* v1; // ebx
	TPinballTable* v2; // esi
	TBall* v3; // eax
	TTableLayer* v4; // eax
	TLightGroup* v5; // eax
	TLightGroup* v6; // eax
	DWORD* v7; // eax
	int v8; // ebx
	void** v9; // edi
	int v10; // eax
	int* v11; // ebx
	int v12; // ax
	signed int* v13; // ebx
	int v14; // edi
	TWall* v15; // eax
	TOneway* v16; // eax
	TPlunger* v17; // eax
	TPlunger* v18; // eax
	TLight* v19; // eax
	TLight* v20; // eax
	TLightGroup* v21; // eax
	TComponentGroup* v22; // eax
	TFlipper* v23; // eax
	TFlipper* v24; // eax
	TFlipper* v25; // eax
	TFlipper* v26; // eax
	TBumper* v27; // eax
	TPopupTarget* v28; // eax
	TSoloTarget* v29; // eax
	TBlocker* v30; // eax
	TGate* v31; // eax
	TSink* v32; // eax
	TKickback* v33; // eax
	TTripwire* v34; // eax
	TRollover* v35; // eax
	TLightRollover* v36; // eax
	TDrain* v37; // eax
	TDrain* v38; // eax
	TFlagSpinner* v39; // eax
	TKickout* v40; // eax
	TKickout* v41; // eax
	TRamp* v42; // eax
	THole* v43; // eax
	TDemo* v44; // eax
	TLightBargraph* v45; // eax
	TSound* v46; // eax
	TTimer* v47; // eax
	TTextBox* v48; // eax
	int v50; // [esp+Ch] [ebp-8h]
	int i; // [esp+10h] [ebp-4h]

	v1 = 0;
	v2 = this;
	TPinballComponent::TPinballComponent(this, 0, -1, 0);
	*(DWORD*)v2 = &TPinballTable::vftable;
	objlist_class::objlist_class((TPinballTable*)((char*)v2 + 250), 32, 16);
	objlist_class::objlist_class((TPinballTable*)((char*)v2 + 258), 3, 1);
	*(DWORD*)((char*)v2 + 50) = 0;
	*(DWORD*)((char*)v2 + 54) = 0;
	*(DWORD*)((char*)v2 + 58) = 0;
	*(DWORD*)((char*)v2 + 78) = 0;
	*((_BYTE*)v2 + 5) = 1;
	*(DWORD*)((char*)v2 + 370) = 0;
	*(DWORD*)((char*)v2 + 94) = 0;
	*(DWORD*)((char*)v2 + 90) = 0;
	*(DWORD*)((char*)v2 + 358) = 0;
	*(DWORD*)((char*)v2 + 98) = 0;
	*(DWORD*)((char*)v2 + 346) = 0;
	v3 = (TBall*)TPinballComponent::operator new(0x16Au);
	if (v3)
		v1 = TBall::TBall(v3, v2);
	objlist_class::Add((TPinballTable*)((char*)v2 + 258), (void*)v1);
	if (v1)
		* ((_BYTE*)v1 + 5) = 0;
	v4 = (TTableLayer*)TPinballComponent::operator new(0x7Eu);
	if (v4)
		TTableLayer::TTableLayer(v4, v2);
	v5 = (TLightGroup*)TPinballComponent::operator new(0x8Au);
	if (v5)
		v6 = TLightGroup::TLightGroup(v5, v2, 0);
	else
		v6 = 0;
	*(DWORD*)((char*)v2 + 266) = v6;
	v7 = score_create("score1", render_background_bitmap);
	*(DWORD*)((char*)v2 + 50) = v7;
	*(DWORD*)((char*)v2 + 102) = v7;
	v8 = 1;
	v9 = (void**)((char*)v2 + 130);
	do
	{
		*v9 = score_dup(*(const void**)((char*)v2 + 50), v8++);
		v9 += 7;
	} while (v8 < 4);
	*(DWORD*)((char*)v2 + 218) = 0;
	*(DWORD*)((char*)v2 + 330) = 3;
	*(DWORD*)((char*)v2 + 54) = score_create("ballcount1", render_background_bitmap);
	*(DWORD*)((char*)v2 + 58) = score_create("player_number1", render_background_bitmap);
	v10 = loader_query_handle("table_objects");
	v11 = (int*)loader_query_iattribute(v10, 1025, &v50);
	if (v50 > 0)
	{
		for (i = 0; i < v50 / 2; ++i)
		{
			v12 = *v11;
			v13 = v11 + 1;
			v14 = *v13;
			v11 = v13 + 1;
			switch (v12)
			{
			case 1000:
			case 1010:
				v15 = (TWall*)TPinballComponent::operator new(0x5Au);
				if (v15)
					TWall::TWall(v15, v2, v14);
				break;
			case 1001:
				v17 = (TPlunger*)TPinballComponent::operator new(0x6Au);
				if (v17)
					v18 = TPlunger::TPlunger(v17, v2, v14);
				else
					v18 = 0;
				*(DWORD*)((char*)v2 + 222) = v18;
				break;
			case 1002:
				v19 = (TLight*)TPinballComponent::operator new(0xDEu);
				if (v19)
					v20 = TLight::TLight(v19, v2, v14);
				else
					v20 = 0;
				objlist_class::Add((objlist_class*)(*(DWORD*)((char*)v2 + 266) + 42), (void*)v20);
				break;
			case 1003:
				v23 = (TFlipper*)TPinballComponent::operator new(0x6Au);
				if (v23)
					v24 = TFlipper::TFlipper(v23, v2, v14);
				else
					v24 = 0;
				*(DWORD*)((char*)v2 + 42) = v24;
				break;
			case 1004:
				v25 = (TFlipper*)TPinballComponent::operator new(0x6Au);
				if (v25)
					v26 = TFlipper::TFlipper(v25, v2, v14);
				else
					v26 = 0;
				*(DWORD*)((char*)v2 + 46) = v26;
				break;
			case 1005:
				v27 = (TBumper*)TPinballComponent::operator new(0x96u);
				if (v27)
					TBumper::TBumper(v27, v2, v14);
				break;
			case 1006:
				v28 = (TPopupTarget*)TPinballComponent::operator new(0x72u);
				if (v28)
					TPopupTarget::TPopupTarget(v28, v2, v14);
				break;
			case 1007:
				v37 = (TDrain*)TPinballComponent::operator new(0x5Au);
				if (v37)
					v38 = TDrain::TDrain(v37, v2, v14);
				else
					v38 = 0;
				*(DWORD*)((char*)v2 + 226) = v38;
				break;
			case 1011:
				v30 = (TBlocker*)TPinballComponent::operator new(0x72u);
				if (v30)
					TBlocker::TBlocker(v30, v2, v14);
				break;
			case 1012:
				v40 = (TKickout*)TPinballComponent::operator new(0xEAu);
				if (v40)
					TKickout::TKickout(v40, v2, v14, (struct vector_type*)1);
				break;
			case 1013:
				v31 = (TGate*)TPinballComponent::operator new(0x66u);
				if (v31)
					TGate::TGate(v31, v2, v14);
				break;
			case 1014:
				v33 = (TKickback*)TPinballComponent::operator new(0x5Eu);
				if (v33)
					TKickback::TKickback(v33, v2, v14);
				break;
			case 1015:
				v35 = (TRollover*)TPinballComponent::operator new(0x57u);
				if (v35)
					TRollover::TRollover(v35, v2, v14);
				break;
			case 1016:
				v16 = (TOneway*)TPinballComponent::operator new(0x6Eu);
				if (v16)
					TOneway::TOneway(v16, v2, v14);
				break;
			case 1017:
				v32 = (TSink*)TPinballComponent::operator new(0x9Eu);
				if (v32)
					TSink::TSink(v32, v2, v14);
				break;
			case 1018:
				v39 = (TFlagSpinner*)TPinballComponent::operator new(0x76u);
				if (v39)
					TFlagSpinner::TFlagSpinner(v39, v2, v14);
				break;
			case 1019:
				v29 = (TSoloTarget*)TPinballComponent::operator new(0x62u);
				if (v29)
					TSoloTarget::TSoloTarget(v29, v2, v14);
				break;
			case 1020:
				v36 = (TLightRollover*)TPinballComponent::operator new(0x5Fu);
				if (v36)
					TLightRollover::TLightRollover(v36, v2, v14);
				break;
			case 1021:
				v42 = (TRamp*)TPinballComponent::operator new(0x9Au);
				if (v42)
					TRamp::TRamp(v42, v2, (void*)v14);
				break;
			case 1022:
				v43 = (THole*)TPinballComponent::operator new(0x8Eu);
				if (v43)
					THole::THole(v43, v2, v14);
				break;
			case 1023:
				v44 = (TDemo*)TPinballComponent::operator new(0x82u);
				if (v44)
					TDemo::TDemo(v44, v2, v14);
				break;
			case 1024:
				v34 = (TTripwire*)TPinballComponent::operator new(0x57u);
				if (v34)
					TTripwire::TTripwire(v34, v2, v14);
				break;
			case 1026:
				v21 = (TLightGroup*)TPinballComponent::operator new(0x8Au);
				if (v21)
					TLightGroup::TLightGroup(v21, v2, v14);
				break;
			case 1028:
				v22 = (TComponentGroup*)TPinballComponent::operator new(0x36u);
				if (v22)
					TComponentGroup::TComponentGroup(v22, v2, v14);
				break;
			case 1029:
				v41 = (TKickout*)TPinballComponent::operator new(0xEAu);
				if (v41)
					TKickout::TKickout(v41, v2, v14, 0);
				break;
			case 1030:
				v45 = (TLightBargraph*)TPinballComponent::operator new(0xA6u);
				if (v45)
					TLightBargraph::TLightBargraph(v45, v2, v14);
				break;
			case 1031:
				v46 = (TSound*)TPinballComponent::operator new(0x2Eu);
				if (v46)
					TSound::TSound(v46, v2, v14);
				break;
			case 1032:
				v47 = (TTimer*)TPinballComponent::operator new(0x2Eu);
				if (v47)
					TTimer::TTimer(v47, v2, v14);
				break;
			case 1033:
				v48 = (TTextBox*)TPinballComponent::operator new(0x4Eu);
				if (v48)
					TTextBox::TTextBox(v48, v2, v14);
				break;
			default:
				continue;
			}
		}
	}
	build_occlude_list();
	InfoTextBox = TPinballTable::find_component(v2, "info_text_box");
	MissTextBox = TPinballTable::find_component(v2, "mission_text_box");
	control_make_links(v2);
	return v2;
}
// 1002790: using guessed type void *TPinballTable::vftable;

