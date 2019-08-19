#include "pinball.h"

//----- (0100E657) --------------------------------------------------------
void WaitingDeploymentController(int a1, int a2, TPinballComponent* a3)
{
	char* v3; // eax

	switch (a2)
	{
	case 63:
		if ((struct TPinballComponent*)dword_1023838 == a3 || (TPinballComponent*)dword_1023840 == a3)
		{
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
		}
		break;
	case 66:
		TTextBox::Clear(tTextBox, a1);
		dword_1025048 = 0;
		break;
	case 67:
		v3 = get_rc_string(50, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		break;
	}
}
// 1023838: using guessed type int dword_1023838;
// 1023840: using guessed type int dword_1023840;
// 1023BBC: using guessed type int dword_1023BBC;
// 1025048: using guessed type int dword_1025048;

//----- (0100E6D2) --------------------------------------------------------
void SelectMissionController(int a1, struct TPinballComponent* a2)
{
	signed int v2; // esi
	void(__thiscall * **v3)(DWORD, signed int, DWORD); // edi
	void(__thiscall * **v4)(DWORD, signed int, DWORD); // edi
	char* v5; // eax
	void(* **v6)(signed int, DWORD); // ecx
	char* v7; // eax
	CHAR* v8; // ST58_4
	CHAR* v9; // eax
	int v10; // esi
	int v11; // ST58_4
	CHAR* v12; // eax
	signed int v13; // [esp+58h] [ebp-54h]
	char Dest; // [esp+68h] [ebp-44h]

	v2 = 0;
	if (a1 == 45 || a1 == 47)
	{
		if ((struct TPinballComponent*)dword_1023978 == a2)
			LABEL_83:
		MissionControl(67, a2);
	}
	else if (a1 == 63)
	{
		if ((struct TPinballComponent*)dword_1023B84 == a2)
			v2 = 1;
		if ((struct TPinballComponent*)dword_1023B8C == a2)
			v2 = 2;
		if ((struct TPinballComponent*)dword_1023B94 == a2)
			v2 = 3;
		if (v2)
		{
			if (*(DWORD*)(dword_1023B9C + 6) == 7)
			{
				*(DWORD*)(dword_1023B9C + 6) = 0;
				v2 = 4;
			}
			switch ((**(int(* **)(signed int, DWORD))dword_1023CF4)(37, 0.0))
			{
			case 1:
				switch (v2)
				{
				case 1:
					v13 = 3;
					break;
				case 2:
					v13 = 4;
					break;
				case 3:
					v13 = 2;
					break;
				default:
					v13 = 5;
					break;
				}
				goto LABEL_71;
			case 2:
			case 3:
				switch (v2)
				{
				case 1:
					v13 = 9;
					break;
				case 2:
					v13 = 11;
					break;
				case 3:
					v13 = 10;
					break;
				default:
				LABEL_69:
					v13 = 16;
					break;
				}
				goto LABEL_71;
			case 4:
			case 5:
				switch (v2)
				{
				case 1:
					v13 = 6;
					break;
				case 2:
					v13 = 8;
					break;
				case 3:
					v13 = 7;
					break;
				default:
				LABEL_70:
					v13 = 15;
					break;
				}
				goto LABEL_71;
			case 6:
			case 7:
				switch (v2)
				{
				case 1:
					v13 = 12;
					break;
				case 2:
					v13 = 13;
					break;
				case 3:
					v13 = 14;
					break;
				default:
				LABEL_68:
					v13 = 17;
					break;
				}
				goto LABEL_71;
			case 8:
			case 9:
				switch (v2)
				{
				case 1:
					goto LABEL_70;
				case 2:
					goto LABEL_69;
				case 3:
					goto LABEL_68;
				}
				v13 = 18;
			LABEL_71:
				*(DWORD*)(dword_1023888 + 6) = v13;
				(**(void(* **)(signed int, DWORD))dword_1023888)(15, 2.0);
				(**(void(* **)(signed int, DWORD))dword_1023BBC)(4, 0.0);
				goto LABEL_83;
			default:
				return;
			}
		}
		else if ((struct TPinballComponent*)dword_1023870 == a2
			&& light_on((struct component_tag*) & lite56)
			&& (**(int(* **)(signed int, DWORD))dword_1023978)(37, 0.0))
		{
			(**(void(* **)(signed int, DWORD))dword_1023888)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023BBC)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023CFC)(26, -1.0);
			if (light_on((struct component_tag*) & lite317))
				(**(void(* **)(signed int, DWORD))dword_1023EBC)(20, 0.0);
			if (light_on((struct component_tag*) & lite318))
				(**(void(* **)(signed int, DWORD))dword_1023EC4)(20, 0.0);
			if (light_on((struct component_tag*) & lite319))
				(**(void(* **)(signed int, DWORD))dword_1023ECC)(20, 0.0);
			v10 = *(DWORD*)(dword_1023888 + 6);
			*(DWORD*)(dword_1023BBC + 6) = v10;
			MissionControl(66, 0);
			v11 = SpecialAddScore(*(&off_10246A0 + v10));
			v12 = get_rc_string(77, 0);
			_sprintf(&Dest, v12, v11);
			TTextBox::Display(tTextBox, 0, &Dest, 4.0);
		}
	}
	else
	{
		if (a1 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023BBC)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023CFC)(34, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023BB4)(20, 0.0);
			*(DWORD*)(dword_1023888 + 6) = 0;
			*(DWORD*)(dword_1023B9C + 6) = 0;
			v3 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A8C;
			(**(void(* **)(signed int, DWORD))dword_1023A8C)(34, 0.0);
			(**v3)(v3, 20, 0.0);
			v4 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A94;
			(**(void(* **)(signed int, DWORD))dword_1023A94)(34, 0.0);
			(**v4)(v4, 20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EEC)(20, 0.0);
		}
		else if (a1 != 67)
		{
			return;
		}
		if ((**(int(* **)(signed int, DWORD))dword_1023978)(37, 0.0))
		{
			if (light_on((struct component_tag*) & lite56))
			{
				v8 = get_rc_string(word_1024708[2 * *(DWORD*)(dword_1023888 + 6)], 1);
				v9 = get_rc_string(106, 0);
				_sprintf(&Dest, v9, v8);
				TTextBox::Display(tTextBox, 0, &Dest, -1.0);
				if (light_on((struct component_tag*) & lite318))
					(**(void(* **)(signed int, DWORD))dword_1023EC4)(20, 0.0);
				if (light_on((struct component_tag*) & lite319))
					(**(void(* **)(signed int, DWORD))dword_1023ECC)(20, 0.0);
				if (!light_on((struct component_tag*) & lite317))
				{
					v6 = (void(* **)(signed int, DWORD))dword_1023EBC;
					goto LABEL_28;
				}
			}
			else
			{
				v7 = get_rc_string(104, 0);
				TTextBox::Display(tTextBox, 0, v7, -1.0);
				if (light_on((struct component_tag*) & lite317))
					(**(void(* **)(signed int, DWORD))dword_1023EBC)(20, 0.0);
				if (light_on((struct component_tag*) & lite318))
					(**(void(* **)(signed int, DWORD))dword_1023EC4)(20, 0.0);
				if (!light_on((struct component_tag*) & lite319))
				{
					v6 = (void(* **)(signed int, DWORD))dword_1023ECC;
					goto LABEL_28;
				}
			}
		}
		else
		{
			v5 = get_rc_string(105, 0);
			TTextBox::Display(tTextBox, 0, v5, -1.0);
			if (light_on((struct component_tag*) & lite317))
				(**(void(* **)(signed int, DWORD))dword_1023EBC)(20, 0.0);
			if (light_on((struct component_tag*) & lite319))
				(**(void(* **)(signed int, DWORD))dword_1023ECC)(20, 0.0);
			if (!light_on((struct component_tag*) & lite318))
			{
				v6 = (void(* **)(signed int, DWORD))dword_1023EC4;
			LABEL_28:
				(**v6)(7, 0.0);
				return;
			}
		}
	}
}
// 1023870: using guessed type int dword_1023870;
// 1023884: using guessed type char *lite56;
// 1023888: using guessed type int dword_1023888;
// 1023978: using guessed type int dword_1023978;
// 1023A8C: using guessed type int dword_1023A8C;
// 1023A94: using guessed type int dword_1023A94;
// 1023B84: using guessed type int dword_1023B84;
// 1023B8C: using guessed type int dword_1023B8C;
// 1023B94: using guessed type int dword_1023B94;
// 1023B9C: using guessed type int dword_1023B9C;
// 1023BB4: using guessed type int dword_1023BB4;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023CF4: using guessed type int dword_1023CF4;
// 1023CFC: using guessed type int dword_1023CFC;
// 1023EB8: using guessed type char *lite317;
// 1023EBC: using guessed type int dword_1023EBC;
// 1023EC0: using guessed type char *lite318;
// 1023EC4: using guessed type int dword_1023EC4;
// 1023EC8: using guessed type char *lite319;
// 1023ECC: using guessed type int dword_1023ECC;
// 1023EEC: using guessed type int dword_1023EEC;
// 1024708: using guessed type int word_1024708[];

//----- (0100EBF3) --------------------------------------------------------
void PracticeMissionController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST10_4
	CHAR* v4; // eax
	int v5; // ecx
	char* v6; // eax
	int v7; // ST10_4
	CHAR* v8; // eax
	char Dest; // [esp+14h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E74)(
				dword_1023E74,
				a3,
				7,
				0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E8C)(7, 0.0);
			*(DWORD*)(dword_1023888 + 6) = 8;
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(107, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_10236E4 == a3
		|| (struct TPinballComponent*)dword_10236EC == a3
		|| (struct TPinballComponent*)dword_10236F4 == a3
		|| (struct TPinballComponent*)dword_10236FC == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E74)(
				dword_1023E74,
				a3,
				20,
				0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E8C)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v6 = get_rc_string(108, 0);
			TTextBox::Display(tTextBox, a1, v6, 4.0);
			v7 = SpecialAddScore(500000);
			v8 = get_rc_string(78, 0);
			_sprintf(&Dest, v8, v7);
			if (!AddRankProgress(6))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
}
// 10236E4: using guessed type int dword_10236E4;
// 10236EC: using guessed type int dword_10236EC;
// 10236F4: using guessed type int dword_10236F4;
// 10236FC: using guessed type int dword_10236FC;
// 1023888: using guessed type int dword_1023888;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023E74: using guessed type int dword_1023E74;
// 1023E8C: using guessed type int dword_1023E8C;

//----- (0100ED83) --------------------------------------------------------
void LaunchTrainingController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST08_4
	CHAR* v4; // eax
	int v5; // ecx
	char* v6; // eax
	int v7; // ST08_4
	CHAR* v8; // eax
	char Dest; // [esp+Ch] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023EBC)(
				dword_1023EBC,
				a3,
				7,
				0.0);
			*(DWORD*)(dword_1023888 + 6) = 3;
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(110, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023870 == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023EBC)(
				dword_1023EBC,
				a3,
				20,
				0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v6 = get_rc_string(111, 0);
			TTextBox::Display(tTextBox, a1, v6, 4.0);
			v7 = SpecialAddScore(500000);
			v8 = get_rc_string(78, 0);
			_sprintf(&Dest, v8, v7);
			if (!AddRankProgress(6))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
}
// 1023870: using guessed type int dword_1023870;
// 1023888: using guessed type int dword_1023888;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023EBC: using guessed type int dword_1023EBC;

//----- (0100EED7) --------------------------------------------------------
void ReentryTrainingController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	void(__thiscall * **v3)(DWORD, signed int, DWORD); // esi
	void(__thiscall * **v4)(DWORD, signed int, DWORD); // esi
	int v5; // ST38_4
	CHAR* v6; // eax
	int v7; // ecx
	char* v8; // eax
	int v9; // ST38_4
	CHAR* v10; // eax
	char Dest; // [esp+40h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 3;
			v3 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A8C;
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023A8C)(
				dword_1023A8C,
				a3,
				20,
				0.0);
			(**v3)(v3, 32, 0.2);
			(**v3)(v3, 26, 0.2);
			v4 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A94;
			(**(void(* **)(signed int, DWORD))dword_1023A94)(20, 0.0);
			(**v4)(v4, 32, 0.2);
			(**v4)(v4, 26, 0.2);
			(**(void(* **)(signed int, DWORD))dword_1023E6C)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v5 = *(DWORD*)(dword_1023888 + 6);
		v6 = get_rc_string(112, 0);
		_sprintf(&Dest, v6, v5);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_102372C == a3
		|| (struct TPinballComponent*)dword_1023734 == a3
		|| (struct TPinballComponent*)dword_102373C == a3)
	{
		v7 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v7;
		if (v7)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E6C)(
				dword_1023E6C,
				a3,
				20,
				0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v8 = get_rc_string(113, 0);
			TTextBox::Display(tTextBox, a1, v8, 4.0);
			v9 = SpecialAddScore(500000);
			v10 = get_rc_string(78, 0);
			_sprintf(&Dest, v10, v9);
			if (!AddRankProgress(6))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
}
// 102372C: using guessed type int dword_102372C;
// 1023734: using guessed type int dword_1023734;
// 102373C: using guessed type int dword_102373C;
// 1023888: using guessed type int dword_1023888;
// 1023A8C: using guessed type int dword_1023A8C;
// 1023A94: using guessed type int dword_1023A94;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023E6C: using guessed type int dword_1023E6C;

//----- (0100F0B3) --------------------------------------------------------
void ScienceMissionController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST60_4
	CHAR* v4; // eax
	int v5; // edx
	char* v6; // eax
	int v7; // ST60_4
	CHAR* v8; // eax
	char Dest; // [esp+68h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 9;
			*(DWORD*)(dword_1023A9C + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023A9C)(50, 0.0);
			*(DWORD*)(dword_1023AA4 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023AA4)(50, 0.0);
			*(DWORD*)(dword_1023AAC + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023AAC)(50, 0.0);
			*(DWORD*)(dword_1023ADC + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023ADC)(50, 0.0);
			*(DWORD*)(dword_1023AE4 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023AE4)(50, 0.0);
			*(DWORD*)(dword_1023AEC + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023AEC)(50, 0.0);
			*(DWORD*)(dword_1023B20 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023B20)(50, 0.0);
			*(DWORD*)(dword_1023B28 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023B28)(50, 0.0);
			*(DWORD*)(dword_1023B30 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023B30)(50, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E4C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E7C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EAC)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(114, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023A9C == a3
		|| (struct TPinballComponent*)dword_1023AA4 == a3
		|| (struct TPinballComponent*)dword_1023AAC == a3
		|| (struct TPinballComponent*)dword_1023ADC == a3
		|| (struct TPinballComponent*)dword_1023AE4 == a3
		|| (struct TPinballComponent*)dword_1023AEC == a3
		|| (struct TPinballComponent*)dword_1023B20 == a3
		|| (struct TPinballComponent*)dword_1023B28 == a3
		|| (struct TPinballComponent*)dword_1023B30 == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(* **)(signed int, DWORD))dword_1023E4C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E7C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EAC)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v6 = get_rc_string(115, 0);
			TTextBox::Display(tTextBox, a1, v6, 4.0);
			v7 = SpecialAddScore(750000);
			v8 = get_rc_string(78, 0);
			_sprintf(&Dest, v8, v7);
			if (!AddRankProgress(9))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
}
// 1023888: using guessed type int dword_1023888;
// 1023A9C: using guessed type int dword_1023A9C;
// 1023AA4: using guessed type int dword_1023AA4;
// 1023AAC: using guessed type int dword_1023AAC;
// 1023ADC: using guessed type int dword_1023ADC;
// 1023AE4: using guessed type int dword_1023AE4;
// 1023AEC: using guessed type int dword_1023AEC;
// 1023B20: using guessed type int dword_1023B20;
// 1023B28: using guessed type int dword_1023B28;
// 1023B30: using guessed type int dword_1023B30;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023E4C: using guessed type int dword_1023E4C;
// 1023E7C: using guessed type int dword_1023E7C;
// 1023EAC: using guessed type int dword_1023EAC;

//----- (0100F381) --------------------------------------------------------
void StrayCometController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax
	char* v4; // eax
	int v5; // ST10_4
	CHAR* v6; // eax
	char Dest; // [esp+18h] [ebp-44h]

	if (a2 == 63)
	{
		if ((struct TPinballComponent*)dword_1023BE0 == a3
			|| (struct TPinballComponent*)dword_1023BE8 == a3
			|| (struct TPinballComponent*)dword_1023BF0 == a3)
		{
			if (*(DWORD*)(dword_1023C10 + 6) == 7)
			{
				(**(void(* **)(signed int, DWORD))dword_1023E64)(20, 0.0);
				(**(void(* **)(signed int, DWORD))dword_1023E54)(7, 0.0);
				*(DWORD*)(dword_1023C10 + 6) = 15;
				MissionControl(67, a3);
			}
		}
		else if ((struct TPinballComponent*)dword_1023980 == a3 && *(DWORD*)(dword_1023C10 + 6) == 15)
		{
			(**(void(* **)(signed int, DWORD))dword_1023E54)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v4 = get_rc_string(119, 0);
			TTextBox::Display(tTextBox, a1, v4, 4.0);
			v5 = SpecialAddScore(1000000);
			v6 = get_rc_string(78, 0);
			_sprintf(&Dest, v6, v5);
			if (!AddRankProgress(8))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
	else
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023C30)(20, 0.0);
			*(DWORD*)(dword_1023C10 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023E64)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		if (*(DWORD*)(dword_1023C10 + 6) == 15)
			v3 = get_rc_string(118, 0);
		else
			v3 = get_rc_string(117, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
	}
}
// 1023980: using guessed type int dword_1023980;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023BE0: using guessed type int dword_1023BE0;
// 1023BE8: using guessed type int dword_1023BE8;
// 1023BF0: using guessed type int dword_1023BF0;
// 1023C10: using guessed type int dword_1023C10;
// 1023C30: using guessed type int dword_1023C30;
// 1023D14: using guessed type int dword_1023D14;
// 1023E54: using guessed type int dword_1023E54;
// 1023E64: using guessed type int dword_1023E64;

//----- (0100F539) --------------------------------------------------------
void SpaceRadiationController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax
	char* v4; // eax
	int v5; // ST10_4
	CHAR* v6; // eax
	char Dest; // [esp+18h] [ebp-44h]

	if (a2 == 63)
	{
		if ((struct TPinballComponent*)dword_1023BC8 == a3
			|| (struct TPinballComponent*)dword_1023BD0 == a3
			|| (struct TPinballComponent*)dword_1023BD8 == a3)
		{
			if (*(DWORD*)(dword_1023BF8 + 6) == 7)
			{
				*(DWORD*)(dword_1023BF8 + 6) = 15;
				(**(void(* **)(signed int, DWORD))dword_1023A3C)(7, 0.0);
				(**(void(* **)(signed int, DWORD))dword_1023E9C)(20, 0.0);
				MissionControl(67, a3);
				AdvanceWormHoleDestination(1);
			}
		}
		else if (((struct TPinballComponent*)dword_10239EC == a3
			|| (struct TPinballComponent*)dword_10239F4 == a3
			|| (struct TPinballComponent*)dword_10239FC == a3)
			&& *(DWORD*)(dword_1023BF8 + 6) == 15)
		{
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v4 = get_rc_string(121, 0);
			TTextBox::Display(tTextBox, a1, v4, 4.0);
			v5 = SpecialAddScore(1000000);
			v6 = get_rc_string(78, 0);
			_sprintf(&Dest, v6, v5);
			if (!AddRankProgress(8))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
	else
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023C28)(20, 0.0);
			*(DWORD*)(dword_1023BF8 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023E9C)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		if (*(DWORD*)(dword_1023BF8 + 6) == 15)
			v3 = get_rc_string(120, 0);
		else
			v3 = get_rc_string(176, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
	}
}
// 10239EC: using guessed type int dword_10239EC;
// 10239F4: using guessed type int dword_10239F4;
// 10239FC: using guessed type int dword_10239FC;
// 1023A3C: using guessed type int dword_1023A3C;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023BC8: using guessed type int dword_1023BC8;
// 1023BD0: using guessed type int dword_1023BD0;
// 1023BD8: using guessed type int dword_1023BD8;
// 1023BF8: using guessed type int dword_1023BF8;
// 1023C28: using guessed type int dword_1023C28;
// 1023D14: using guessed type int dword_1023D14;
// 1023E9C: using guessed type int dword_1023E9C;

//----- (0100F6F4) --------------------------------------------------------
void BlackHoleThreatController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax
	void(* **v4)(signed int, DWORD); // ecx
	char* v5; // eax
	char* v6; // eax
	int v7; // ST10_4
	CHAR* v8; // eax
	float v9; // [esp+10h] [ebp-4Ch]
	char Dest; // [esp+18h] [ebp-44h]

	if (a2 == 11)
	{
		if ((struct TPinballComponent*)dword_1023758 == a3)
			MissionControl(67, a3);
	}
	else if (a2 == 63)
	{
		if ((struct TPinballComponent*)dword_1023C5C == a3 && *(DWORD*)(dword_1023758 + 78))
		{
			if (light_on((struct component_tag*) & lite316))
				(**(void(* **)(signed int, DWORD))dword_1023EB4)(20, 0.0);
			if (light_on((struct component_tag*) & lite314))
				(**(void(* **)(signed int, DWORD))dword_1023EA4)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v6 = get_rc_string(124, 0);
			TTextBox::Display(tTextBox, a1, v6, 4.0);
			v7 = SpecialAddScore(1000000);
			v8 = get_rc_string(78, 0);
			_sprintf(&Dest, v8, v7);
			if (!AddRankProgress(8))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
	else
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023770)(11, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v9 = -1.0;
		if (*(DWORD*)(dword_1023758 + 78))
		{
			v5 = get_rc_string(123, 0);
			TTextBox::Display(tTextBox, a1, v5, v9);
			if (light_on((struct component_tag*) & lite316))
				(**(void(* **)(signed int, DWORD))dword_1023EB4)(20, 0.0);
			if (!light_on((struct component_tag*) & lite314))
			{
				v4 = (void(* **)(signed int, DWORD))dword_1023EA4;
				goto LABEL_12;
			}
		}
		else
		{
			v3 = get_rc_string(122, 0);
			TTextBox::Display(tTextBox, a1, v3, v9);
			if (light_on((struct component_tag*) & lite314))
				(**(void(* **)(signed int, DWORD))dword_1023EA4)(20, 0.0);
			if (!light_on((struct component_tag*) & lite316))
			{
				v4 = (void(* **)(signed int, DWORD))dword_1023EB4;
			LABEL_12:
				(**v4)(7, 0.0);
				return;
			}
		}
	}
}
// 1023758: using guessed type int dword_1023758;
// 1023770: using guessed type int dword_1023770;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023C5C: using guessed type int dword_1023C5C;
// 1023D14: using guessed type int dword_1023D14;
// 1023EA0: using guessed type char *lite314;
// 1023EA4: using guessed type int dword_1023EA4;
// 1023EB0: using guessed type char *lite316;
// 1023EB4: using guessed type int dword_1023EB4;

//----- (0100F900) --------------------------------------------------------
void BugHuntController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST90_4
	CHAR* v4; // eax
	int v5; // edx
	char* v6; // eax
	int v7; // ST90_4
	CHAR* v8; // eax
	char Dest; // [esp+9Ch] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 15;
			*(DWORD*)(dword_1023A9C + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023A9C)(50, 0.0);
			*(DWORD*)(dword_1023AA4 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023AA4)(50, 0.0);
			*(DWORD*)(dword_1023AAC + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023AAC)(50, 0.0);
			*(DWORD*)(dword_1023ADC + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023ADC)(50, 0.0);
			*(DWORD*)(dword_1023AE4 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023AE4)(50, 0.0);
			*(DWORD*)(dword_1023AEC + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023AEC)(50, 0.0);
			*(DWORD*)(dword_1023B20 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023B20)(50, 0.0);
			*(DWORD*)(dword_1023B28 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023B28)(50, 0.0);
			*(DWORD*)(dword_1023B30 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023B30)(50, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023B78)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023BB4)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023C28)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023C30)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E64)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E74)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E84)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E9C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ECC)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(125, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023A9C == a3
		|| (struct TPinballComponent*)dword_1023AA4 == a3
		|| (struct TPinballComponent*)dword_1023AAC == a3
		|| (struct TPinballComponent*)dword_1023ADC == a3
		|| (struct TPinballComponent*)dword_1023AE4 == a3
		|| (struct TPinballComponent*)dword_1023AEC == a3
		|| (struct TPinballComponent*)dword_1023B20 == a3
		|| (struct TPinballComponent*)dword_1023B28 == a3
		|| (struct TPinballComponent*)dword_1023B30 == a3
		|| (struct TPinballComponent*)dword_1023B48 == a3
		|| (struct TPinballComponent*)dword_1023B50 == a3
		|| (struct TPinballComponent*)dword_1023B58 == a3
		|| (struct TPinballComponent*)dword_1023B84 == a3
		|| (struct TPinballComponent*)dword_1023B8C == a3
		|| (struct TPinballComponent*)dword_1023B94 == a3
		|| (struct TPinballComponent*)dword_1023BC8 == a3
		|| (struct TPinballComponent*)dword_1023BD0 == a3
		|| (struct TPinballComponent*)dword_1023BD8 == a3
		|| (struct TPinballComponent*)dword_1023BE0 == a3
		|| (struct TPinballComponent*)dword_1023BE8 == a3
		|| (struct TPinballComponent*)dword_1023BF0 == a3
		|| (struct TPinballComponent*)dword_1023C3C == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(* **)(signed int, DWORD))dword_1023E64)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E74)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E84)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E9C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ECC)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v6 = get_rc_string(126, 0);
			TTextBox::Display(tTextBox, a1, v6, 4.0);
			v7 = SpecialAddScore(750000);
			v8 = get_rc_string(78, 0);
			_sprintf(&Dest, v8, v7);
			if (!AddRankProgress(7))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
}
// 1023888: using guessed type int dword_1023888;
// 1023A9C: using guessed type int dword_1023A9C;
// 1023AA4: using guessed type int dword_1023AA4;
// 1023AAC: using guessed type int dword_1023AAC;
// 1023ADC: using guessed type int dword_1023ADC;
// 1023AE4: using guessed type int dword_1023AE4;
// 1023AEC: using guessed type int dword_1023AEC;
// 1023B20: using guessed type int dword_1023B20;
// 1023B28: using guessed type int dword_1023B28;
// 1023B30: using guessed type int dword_1023B30;
// 1023B48: using guessed type int dword_1023B48;
// 1023B50: using guessed type int dword_1023B50;
// 1023B58: using guessed type int dword_1023B58;
// 1023B78: using guessed type int dword_1023B78;
// 1023B84: using guessed type int dword_1023B84;
// 1023B8C: using guessed type int dword_1023B8C;
// 1023B94: using guessed type int dword_1023B94;
// 1023BB4: using guessed type int dword_1023BB4;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023BC8: using guessed type int dword_1023BC8;
// 1023BD0: using guessed type int dword_1023BD0;
// 1023BD8: using guessed type int dword_1023BD8;
// 1023BE0: using guessed type int dword_1023BE0;
// 1023BE8: using guessed type int dword_1023BE8;
// 1023BF0: using guessed type int dword_1023BF0;
// 1023C28: using guessed type int dword_1023C28;
// 1023C30: using guessed type int dword_1023C30;
// 1023C3C: using guessed type int dword_1023C3C;
// 1023D14: using guessed type int dword_1023D14;
// 1023E64: using guessed type int dword_1023E64;
// 1023E74: using guessed type int dword_1023E74;
// 1023E84: using guessed type int dword_1023E84;
// 1023E9C: using guessed type int dword_1023E9C;
// 1023ECC: using guessed type int dword_1023ECC;

//----- (0100FCD9) --------------------------------------------------------
void RescueMissionController(int a1, int a2, struct TPinballComponent* a3)
{
	BOOL v3; // eax
	char* v4; // eax
	void(* **v5)(signed int, DWORD); // ecx
	char* v6; // eax
	int v7; // ecx
	char* v8; // eax
	int v9; // ST18_4
	CHAR* v10; // eax
	float v11; // [esp+18h] [ebp-4Ch]
	char Dest; // [esp+20h] [ebp-44h]

	if (a2 == 63)
	{
		if ((struct TPinballComponent*)dword_1023A9C == a3
			|| (struct TPinballComponent*)dword_1023AA4 == a3
			|| (struct TPinballComponent*)dword_1023AAC == a3)
		{
			MissionControl(67, a3);
			return;
		}
		if ((struct TPinballComponent*)dword_1023980 != a3 || !light_on((struct component_tag*) & lite20))
			return;
		v7 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v7;
		if (v7)
		{
			MissionControl(67, a3);
			return;
		}
		if (light_on((struct component_tag*) & lite303))
			(**(void(* **)(signed int, DWORD))dword_1023E4C)(20, 0.0);
		if (light_on((struct component_tag*) & lite304))
			(**(void(* **)(signed int, DWORD))dword_1023E54)(20, 0.0);
		*(DWORD*)(dword_1023BBC + 6) = 1;
		MissionControl(66, 0);
		v8 = get_rc_string(129, 0);
		TTextBox::Display(tTextBox, a1, v8, 4.0);
		v9 = SpecialAddScore(750000);
		v10 = get_rc_string(78, 0);
		_sprintf(&Dest, v10, v9);
		if (!AddRankProgress(7))
		{
			TTextBox::Display(tTextBox, a1, &Dest, 8.0);
			(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
		}
	}
	else
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023940)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_10239D0)(20, 0.0);
			*(DWORD*)(dword_1023888 + 6) = 1;
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = light_on((struct component_tag*) & lite20);
		v11 = -1.0;
		if (v3)
		{
			v6 = get_rc_string(128, 0);
			TTextBox::Display(tTextBox, a1, v6, v11);
			if (light_on((struct component_tag*) & lite303))
				(**(void(* **)(signed int, DWORD))dword_1023E4C)(20, 0.0);
			if (!light_on((struct component_tag*) & lite304))
			{
				v5 = (void(* **)(signed int, DWORD))dword_1023E54;
				goto LABEL_11;
			}
		}
		else
		{
			v4 = get_rc_string(127, 0);
			TTextBox::Display(tTextBox, a1, v4, v11);
			if (light_on((struct component_tag*) & lite304))
				(**(void(* **)(signed int, DWORD))dword_1023E54)(20, 0.0);
			if (!light_on((struct component_tag*) & lite303))
			{
				v5 = (void(* **)(signed int, DWORD))dword_1023E4C;
			LABEL_11:
				(**v5)(7, 0.0);
				return;
			}
		}
	}
}
// 1023888: using guessed type int dword_1023888;
// 102393C: using guessed type char *lite20;
// 1023940: using guessed type int dword_1023940;
// 1023980: using guessed type int dword_1023980;
// 10239D0: using guessed type int dword_10239D0;
// 1023A9C: using guessed type int dword_1023A9C;
// 1023AA4: using guessed type int dword_1023AA4;
// 1023AAC: using guessed type int dword_1023AAC;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023E48: using guessed type char *lite303;
// 1023E4C: using guessed type int dword_1023E4C;
// 1023E50: using guessed type char *lite304;
// 1023E54: using guessed type int dword_1023E54;

//----- (0100FF35) --------------------------------------------------------
void AlienMenaceController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	void(__thiscall * **v3)(DWORD, signed int, DWORD); // esi
	void(__thiscall * **v4)(DWORD, signed int, DWORD); // esi
	char* v5; // eax

	if (a2 != 11)
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023704)(11, 0.0);
			v3 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A8C;
			(**(void(* **)(signed int, DWORD))dword_1023A8C)(20, 0.0);
			(**v3)(v3, 32, 0.2);
			(**v3)(v3, 26, 0.2);
			v4 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A94;
			(**(void(* **)(signed int, DWORD))dword_1023A94)(20, 0.0);
			(**v4)(v4, 32, 0.2);
			(**v4)(v4, 26, 0.2);
			(**(void(* **)(signed int, DWORD))dword_1023E6C)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v5 = get_rc_string(175, 0);
		TTextBox::Display(tTextBox, a1, v5, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_10236E4 == a3)
	{
		if (*(DWORD*)(dword_10236E4 + 78))
		{
			(**(void(* **)(signed int, DWORD))dword_1023E6C)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 20;
			MissionControl(66, 0);
		}
	}
}
// 10236E4: using guessed type int dword_10236E4;
// 1023704: using guessed type int dword_1023704;
// 1023A8C: using guessed type int dword_1023A8C;
// 1023A94: using guessed type int dword_1023A94;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023E6C: using guessed type int dword_1023E6C;

//----- (01010051) --------------------------------------------------------
void AlienMenacePartTwoController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	void(__thiscall * **v3)(DWORD, signed int, DWORD); // esi
	void(__thiscall * **v4)(DWORD, signed int, DWORD); // esi
	int v5; // ST30_4
	CHAR* v6; // eax
	int v7; // ecx
	char* v8; // eax
	int v9; // ST30_4
	CHAR* v10; // eax
	char Dest; // [esp+38h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 8;
			v3 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A8C;
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023A8C)(
				dword_1023A8C,
				a3,
				34,
				0.0);
			(**v3)(v3, 20, 0.0);
			v4 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A94;
			(**(void(* **)(signed int, DWORD))dword_1023A94)(34, 0.0);
			(**v4)(v4, 20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E74)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E8C)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v5 = *(DWORD*)(dword_1023888 + 6);
		v6 = get_rc_string(107, 0);
		_sprintf(&Dest, v6, v5);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_10236E4 == a3
		|| (struct TPinballComponent*)dword_10236EC == a3
		|| (struct TPinballComponent*)dword_10236F4 == a3
		|| (struct TPinballComponent*)dword_10236FC == a3)
	{
		v7 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v7;
		if (v7)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E74)(
				dword_1023E74,
				a3,
				20,
				0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E8C)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v8 = get_rc_string(130, 0);
			TTextBox::Display(tTextBox, a1, v8, 4.0);
			v9 = SpecialAddScore(750000);
			v10 = get_rc_string(78, 0);
			_sprintf(&Dest, v10, v9);
			if (!AddRankProgress(7))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
}
// 10236E4: using guessed type int dword_10236E4;
// 10236EC: using guessed type int dword_10236EC;
// 10236F4: using guessed type int dword_10236F4;
// 10236FC: using guessed type int dword_10236FC;
// 1023888: using guessed type int dword_1023888;
// 1023A8C: using guessed type int dword_1023A8C;
// 1023A94: using guessed type int dword_1023A94;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023E74: using guessed type int dword_1023E74;
// 1023E8C: using guessed type int dword_1023E8C;

//----- (0101022D) --------------------------------------------------------
void SatelliteController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST08_4
	CHAR* v4; // eax
	int v5; // ecx
	char* v6; // eax
	int v7; // ST08_4
	CHAR* v8; // eax
	char Dest; // [esp+Ch] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 3;
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E74)(
				dword_1023E74,
				a3,
				7,
				0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(132, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_10236FC == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E74)(
				dword_1023E74,
				a3,
				20,
				0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v6 = get_rc_string(133, 0);
			TTextBox::Display(tTextBox, a1, v6, 4.0);
			v7 = SpecialAddScore(1250000);
			v8 = get_rc_string(78, 0);
			_sprintf(&Dest, v8, v7);
			if (!AddRankProgress(9))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
}
// 10236FC: using guessed type int dword_10236FC;
// 1023888: using guessed type int dword_1023888;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023E74: using guessed type int dword_1023E74;

//----- (01010385) --------------------------------------------------------
void ReconnaissanceController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST30_4
	CHAR* v4; // eax
	int v5; // ecx
	char* v6; // eax
	int v7; // ST30_4
	CHAR* v8; // eax
	char Dest; // [esp+38h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 15;
			(**(void(* **)(signed int, DWORD))dword_1023E3C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E44)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E6C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EB4)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ED4)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EDC)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(134, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_102372C == a3
		|| (struct TPinballComponent*)dword_1023734 == a3
		|| (struct TPinballComponent*)dword_102373C == a3
		|| (struct TPinballComponent*)dword_1023798 == a3
		|| (struct TPinballComponent*)dword_10237A0 == a3
		|| (struct TPinballComponent*)dword_10237A8 == a3
		|| (struct TPinballComponent*)dword_102389C == a3
		|| (struct TPinballComponent*)dword_10238A4 == a3
		|| (struct TPinballComponent*)dword_10238C0 == a3
		|| (struct TPinballComponent*)dword_10238C8 == a3
		|| (struct TPinballComponent*)dword_10238E8 == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, 0);
		}
		else
		{
			(**(void(* **)(signed int, DWORD))dword_1023E3C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E44)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E6C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EB4)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ED4)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EDC)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v6 = get_rc_string(136, 0);
			TTextBox::Display(tTextBox, a1, v6, 4.0);
			v7 = SpecialAddScore(1250000);
			v8 = get_rc_string(78, 0);
			_sprintf(&Dest, v8, v7);
			if (!AddRankProgress(9))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
}
// 102372C: using guessed type int dword_102372C;
// 1023734: using guessed type int dword_1023734;
// 102373C: using guessed type int dword_102373C;
// 1023798: using guessed type int dword_1023798;
// 10237A0: using guessed type int dword_10237A0;
// 10237A8: using guessed type int dword_10237A8;
// 1023888: using guessed type int dword_1023888;
// 102389C: using guessed type int dword_102389C;
// 10238A4: using guessed type int dword_10238A4;
// 10238C0: using guessed type int dword_10238C0;
// 10238C8: using guessed type int dword_10238C8;
// 10238E8: using guessed type int dword_10238E8;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023E3C: using guessed type int dword_1023E3C;
// 1023E44: using guessed type int dword_1023E44;
// 1023E6C: using guessed type int dword_1023E6C;
// 1023EB4: using guessed type int dword_1023EB4;
// 1023ED4: using guessed type int dword_1023ED4;
// 1023EDC: using guessed type int dword_1023EDC;

//----- (010105E3) --------------------------------------------------------
void DoomsdayMachineController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST10_4
	CHAR* v4; // eax
	int v5; // ecx
	char* v6; // eax
	int v7; // ST10_4
	CHAR* v8; // eax
	char Dest; // [esp+14h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 3;
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E3C)(
				dword_1023E3C,
				a3,
				7,
				0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ED4)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(137, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_102389C == a3 || (struct TPinballComponent*)dword_10238A4 == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E3C)(
				dword_1023E3C,
				a3,
				20,
				0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ED4)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 1;
			MissionControl(66, 0);
			v6 = get_rc_string(138, 0);
			TTextBox::Display(tTextBox, a1, v6, 4.0);
			v7 = SpecialAddScore(1250000);
			v8 = get_rc_string(78, 0);
			_sprintf(&Dest, v8, v7);
			if (!AddRankProgress(9))
			{
				TTextBox::Display(tTextBox, a1, &Dest, 8.0);
				(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
			}
		}
	}
}
// 1023888: using guessed type int dword_1023888;
// 102389C: using guessed type int dword_102389C;
// 10238A4: using guessed type int dword_10238A4;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023E3C: using guessed type int dword_1023E3C;
// 1023ED4: using guessed type int dword_1023ED4;

//----- (01010767) --------------------------------------------------------
void CosmicPlagueController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST20_4
	CHAR* v4; // eax
	int v5; // ecx
	char Dest; // [esp+24h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 75;
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023940)(
				dword_1023940,
				a3,
				19,
				0.0);
			(**(void(* **)(signed int, DWORD))dword_10239D0)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E5C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E94)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(139, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023930 == a3 || (struct TPinballComponent*)dword_10239C8 == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E5C)(
				dword_1023E5C,
				a3,
				20,
				0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E94)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 21;
			MissionControl(66, 0);
			(**(void(* **)(signed int, DWORD))dword_1023940)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_10239D0)(20, 0.0);
		}
	}
}
// 1023888: using guessed type int dword_1023888;
// 1023930: using guessed type int dword_1023930;
// 1023940: using guessed type int dword_1023940;
// 10239C8: using guessed type int dword_10239C8;
// 10239D0: using guessed type int dword_10239D0;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023E5C: using guessed type int dword_1023E5C;
// 1023E94: using guessed type int dword_1023E94;

//----- (010108BC) --------------------------------------------------------
void CosmicPlaguePartTwoController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax
	char* v4; // eax
	int v5; // ST08_4
	CHAR* v6; // eax
	char Dest; // [esp+Ch] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023E84)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(140, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023C50 == a3)
	{
		(**(void(* **)(signed int, DWORD))dword_1023E84)(20, 0.0);
		*(DWORD*)(dword_1023BBC + 6) = 1;
		MissionControl(66, 0);
		v4 = get_rc_string(141, 0);
		TTextBox::Display(tTextBox, a1, v4, 4.0);
		v5 = SpecialAddScore(1750000);
		v6 = get_rc_string(78, 0);
		_sprintf(&Dest, v6, v5);
		if (!AddRankProgress(11))
		{
			TTextBox::Display(tTextBox, a1, &Dest, 8.0);
			(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
		}
	}
}
// 1023BBC: using guessed type int dword_1023BBC;
// 1023C50: using guessed type int dword_1023C50;
// 1023D14: using guessed type int dword_1023D14;
// 1023E84: using guessed type int dword_1023E84;

//----- (010109D5) --------------------------------------------------------
void SecretMissionYellowController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023A1C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A3C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A3C)(23, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023C44)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A14)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A34)(11, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A34)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A34)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(142, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_10239FC == a3)
	{
		*(DWORD*)(dword_1023BBC + 6) = 22;
		MissionControl(66, 0);
	}
}
// 10239FC: using guessed type int dword_10239FC;
// 1023A14: using guessed type int dword_1023A14;
// 1023A1C: using guessed type int dword_1023A1C;
// 1023A34: using guessed type int dword_1023A34;
// 1023A3C: using guessed type int dword_1023A3C;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023C44: using guessed type int dword_1023C44;

//----- (01010AD3) --------------------------------------------------------
void SecretMissionRedController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023A04)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A24)(11, 2.0);
			(**(void(* **)(signed int, DWORD))dword_1023A24)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A24)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(143, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_10239EC == a3)
	{
		*(DWORD*)(dword_1023BBC + 6) = 23;
		MissionControl(66, 0);
	}
}
// 10239EC: using guessed type int dword_10239EC;
// 1023A04: using guessed type int dword_1023A04;
// 1023A24: using guessed type int dword_1023A24;
// 1023BBC: using guessed type int dword_1023BBC;

//----- (01010B85) --------------------------------------------------------
void SecretMissionGreenController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax
	char* v4; // eax
	int v5; // ST20_4
	CHAR* v6; // eax
	char Dest; // [esp+24h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023A0C)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A2C)(11, 1.0);
			(**(void(* **)(signed int, DWORD))dword_1023A2C)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023A2C)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(144, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_10239F4 == a3)
	{
		*(DWORD*)(dword_1023BBC + 6) = 1;
		MissionControl(66, 0);
		v4 = get_rc_string(145, 0);
		TTextBox::Display(tTextBox, a1, v4, 4.0);
		v5 = SpecialAddScore(1500000);
		v6 = get_rc_string(78, 0);
		_sprintf(&Dest, v6, v5);
		if (!AddRankProgress(10))
		{
			TTextBox::Display(tTextBox, a1, &Dest, 8.0);
			(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
		}
	}
}
// 10239F4: using guessed type int dword_10239F4;
// 1023A0C: using guessed type int dword_1023A0C;
// 1023A2C: using guessed type int dword_1023A2C;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;

//----- (01010CC2) --------------------------------------------------------
void TimeWarpController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST10_4
	CHAR* v4; // eax
	int v5; // ecx
	char Dest; // [esp+14h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 25;
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E34)(
				dword_1023E34,
				a3,
				7,
				0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EE4)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(146, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_10237C4 == a3
		|| (struct TPinballComponent*)dword_10237CC == a3
		|| (struct TPinballComponent*)dword_10237E8 == a3
		|| (struct TPinballComponent*)dword_10237F0 == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(__fastcall * **)(int, struct TPinballComponent*, signed int, DWORD))dword_1023E34)(
				dword_1023E34,
				a3,
				20,
				0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EE4)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 24;
			MissionControl(66, 0);
		}
	}
}
// 10237C4: using guessed type int dword_10237C4;
// 10237CC: using guessed type int dword_10237CC;
// 10237E8: using guessed type int dword_10237E8;
// 10237F0: using guessed type int dword_10237F0;
// 1023888: using guessed type int dword_1023888;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023E34: using guessed type int dword_1023E34;
// 1023EE4: using guessed type int dword_1023EE4;

//----- (01010DD3) --------------------------------------------------------
void TimeWarpPartTwoController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax
	char* v4; // eax
	int v5; // eax
	CHAR* v6; // ST30_4
	CHAR* v7; // eax
	char* v8; // eax
	int v9; // esi
	CHAR* v10; // ST30_4
	CHAR* v11; // eax
	char Dest; // [esp+38h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023880)(7, -1.0);
			(**(void(* **)(signed int, DWORD))dword_10239B8)(7, -1.0);
			(**(void(* **)(signed int, DWORD))dword_1023E54)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EBC)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(147, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023980 == a3)
	{
		v4 = get_rc_string(47, 0);
		TTextBox::Display(tTextBox, a1, v4, 4.0);
		if ((**(int(* **)(signed int, DWORD))dword_1023CF4)(37, 0.0) > 1)
		{
			(**(void(* **)(signed int, DWORD))dword_1023CF4)(33, 5.0);
			v5 = (**(int(* **)(signed int, DWORD))dword_1023CF4)(37, 0.0);
			v6 = get_rc_string(word_10246EC[2 * (v5 - 1)], 1);
			v7 = get_rc_string(174, 0);
			_sprintf(&Dest, v7, v6);
			TTextBox::Display(tTextBox, a1, &Dest, 8.0);
		}
	}
	else
	{
		if ((struct TPinballComponent*)dword_1023870 != a3)
			return;
		v8 = get_rc_string(46, 0);
		TTextBox::Display(tTextBox, a1, v8, 4.0);
		if ((**(int(* **)(signed int, DWORD))dword_1023CF4)(37, 0.0) < 9)
		{
			v9 = (**(int(* **)(signed int, DWORD))dword_1023CF4)(37, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023CF4)(41, 5.0);
			v10 = get_rc_string(word_10246EC[2 * v9], 1);
			v11 = get_rc_string(173, 0);
			_sprintf(&Dest, v11, v10);
		}
		if (!AddRankProgress(12))
		{
			TTextBox::Display(tTextBox, a1, &Dest, 8.0);
			(*(void (**)(void))(*(DWORD*)dword_1023D1C + 20))();
		}
	}
	SpecialAddScore(2000000);
	(**(void(* **)(signed int, DWORD))dword_1023880)(20, 0.0);
	(**(void(* **)(signed int, DWORD))dword_10239B8)(20, 0.0);
	(**(void(* **)(signed int, DWORD))dword_1023E54)(20, 0.0);
	(**(void(* **)(signed int, DWORD))dword_1023EBC)(20, 0.0);
	*(DWORD*)(dword_1023BBC + 6) = 1;
	MissionControl(66, 0);
}
// 1023870: using guessed type int dword_1023870;
// 1023880: using guessed type int dword_1023880;
// 1023980: using guessed type int dword_1023980;
// 10239B8: using guessed type int dword_10239B8;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023CF4: using guessed type int dword_1023CF4;
// 1023D1C: using guessed type int dword_1023D1C;
// 1023E54: using guessed type int dword_1023E54;
// 1023EBC: using guessed type int dword_1023EBC;
// 10246EC: using guessed type int word_10246EC[];

//----- (0101106F) --------------------------------------------------------
void MaelstromController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST18_4
	CHAR* v4; // eax
	int v5; // edx
	char Dest; // [esp+1Ch] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 3;
			(**(void(* **)(signed int, DWORD))dword_1023E4C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E7C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EAC)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(148, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023A9C == a3
		|| (struct TPinballComponent*)dword_1023AA4 == a3
		|| (struct TPinballComponent*)dword_1023AAC == a3
		|| (struct TPinballComponent*)dword_1023ADC == a3
		|| (struct TPinballComponent*)dword_1023AE4 == a3
		|| (struct TPinballComponent*)dword_1023AEC == a3
		|| (struct TPinballComponent*)dword_1023B20 == a3
		|| (struct TPinballComponent*)dword_1023B28 == a3
		|| (struct TPinballComponent*)dword_1023B30 == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(* **)(signed int, DWORD))dword_1023E4C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E7C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EAC)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 25;
			MissionControl(66, 0);
		}
	}
}
// 1023888: using guessed type int dword_1023888;
// 1023A9C: using guessed type int dword_1023A9C;
// 1023AA4: using guessed type int dword_1023AA4;
// 1023AAC: using guessed type int dword_1023AAC;
// 1023ADC: using guessed type int dword_1023ADC;
// 1023AE4: using guessed type int dword_1023AE4;
// 1023AEC: using guessed type int dword_1023AEC;
// 1023B20: using guessed type int dword_1023B20;
// 1023B28: using guessed type int dword_1023B28;
// 1023B30: using guessed type int dword_1023B30;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023E4C: using guessed type int dword_1023E4C;
// 1023E7C: using guessed type int dword_1023E7C;
// 1023EAC: using guessed type int dword_1023EAC;

//----- (010111D3) --------------------------------------------------------
void MaelstromPartTwoController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST28_4
	CHAR* v4; // eax
	int v5; // edx
	char Dest; // [esp+30h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 3;
			(**(void(* **)(signed int, DWORD))dword_1023E64)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E74)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E84)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E9C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ECC)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(149, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023B48 == a3
		|| (struct TPinballComponent*)dword_1023B50 == a3
		|| (struct TPinballComponent*)dword_1023B58 == a3
		|| (struct TPinballComponent*)dword_1023B84 == a3
		|| (struct TPinballComponent*)dword_1023B8C == a3
		|| (struct TPinballComponent*)dword_1023B94 == a3
		|| (struct TPinballComponent*)dword_1023BC8 == a3
		|| (struct TPinballComponent*)dword_1023BD0 == a3
		|| (struct TPinballComponent*)dword_1023BD8 == a3
		|| (struct TPinballComponent*)dword_1023BE0 == a3
		|| (struct TPinballComponent*)dword_1023BE8 == a3
		|| (struct TPinballComponent*)dword_1023BF0 == a3
		|| (struct TPinballComponent*)dword_1023C3C == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(* **)(signed int, DWORD))dword_1023E64)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E74)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E84)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E9C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ECC)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 26;
			MissionControl(66, 0);
		}
	}
}
// 1023888: using guessed type int dword_1023888;
// 1023B48: using guessed type int dword_1023B48;
// 1023B50: using guessed type int dword_1023B50;
// 1023B58: using guessed type int dword_1023B58;
// 1023B84: using guessed type int dword_1023B84;
// 1023B8C: using guessed type int dword_1023B8C;
// 1023B94: using guessed type int dword_1023B94;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023BC8: using guessed type int dword_1023BC8;
// 1023BD0: using guessed type int dword_1023BD0;
// 1023BD8: using guessed type int dword_1023BD8;
// 1023BE0: using guessed type int dword_1023BE0;
// 1023BE8: using guessed type int dword_1023BE8;
// 1023BF0: using guessed type int dword_1023BF0;
// 1023C3C: using guessed type int dword_1023C3C;
// 1023E64: using guessed type int dword_1023E64;
// 1023E74: using guessed type int dword_1023E74;
// 1023E84: using guessed type int dword_1023E84;
// 1023E9C: using guessed type int dword_1023E9C;
// 1023ECC: using guessed type int dword_1023ECC;

//----- (010113A1) --------------------------------------------------------
void MaelstromPartThreeController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	int v3; // ST30_4
	CHAR* v4; // eax
	int v5; // edx
	char Dest; // [esp+38h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 5;
			(**(void(* **)(signed int, DWORD))dword_1023E3C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E44)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E6C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EB4)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ED4)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EDC)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = *(DWORD*)(dword_1023888 + 6);
		v4 = get_rc_string(150, 0);
		_sprintf(&Dest, v4, v3);
		TTextBox::Display(tTextBox, a1, &Dest, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_102372C == a3
		|| (struct TPinballComponent*)dword_1023734 == a3
		|| (struct TPinballComponent*)dword_102373C == a3
		|| (struct TPinballComponent*)dword_1023798 == a3
		|| (struct TPinballComponent*)dword_10237A0 == a3
		|| (struct TPinballComponent*)dword_10237A8 == a3
		|| (struct TPinballComponent*)dword_102389C == a3
		|| (struct TPinballComponent*)dword_10238A4 == a3
		|| (struct TPinballComponent*)dword_10238C0 == a3
		|| (struct TPinballComponent*)dword_10238C8 == a3
		|| (struct TPinballComponent*)dword_10238E8 == a3)
	{
		v5 = *(DWORD*)(dword_1023888 + 6) - 1;
		*(DWORD*)(dword_1023888 + 6) = v5;
		if (v5)
		{
			MissionControl(67, a3);
		}
		else
		{
			(**(void(* **)(signed int, DWORD))dword_1023E3C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E44)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E6C)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EB4)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023ED4)(20, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023EDC)(20, 0.0);
			*(DWORD*)(dword_1023BBC + 6) = 27;
			MissionControl(66, 0);
		}
	}
}
// 102372C: using guessed type int dword_102372C;
// 1023734: using guessed type int dword_1023734;
// 102373C: using guessed type int dword_102373C;
// 1023798: using guessed type int dword_1023798;
// 10237A0: using guessed type int dword_10237A0;
// 10237A8: using guessed type int dword_10237A8;
// 1023888: using guessed type int dword_1023888;
// 102389C: using guessed type int dword_102389C;
// 10238A4: using guessed type int dword_10238A4;
// 10238C0: using guessed type int dword_10238C0;
// 10238C8: using guessed type int dword_10238C8;
// 10238E8: using guessed type int dword_10238E8;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023E3C: using guessed type int dword_1023E3C;
// 1023E44: using guessed type int dword_1023E44;
// 1023E6C: using guessed type int dword_1023E6C;
// 1023EB4: using guessed type int dword_1023EB4;
// 1023ED4: using guessed type int dword_1023ED4;
// 1023EDC: using guessed type int dword_1023EDC;

//----- (01011582) --------------------------------------------------------
void MaelstromPartFourController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			*(DWORD*)(dword_1023888 + 6) = 0;
			(**(void(* **)(signed int, DWORD))dword_1023EC4)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(151, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023924 == a3)
	{
		(**(void(* **)(signed int, DWORD))dword_1023EC4)(20, 0.0);
		*(DWORD*)(dword_1023BBC + 6) = 28;
		MissionControl(66, 0);
	}
}
// 1023888: using guessed type int dword_1023888;
// 1023924: using guessed type int dword_1023924;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023EC4: using guessed type int dword_1023EC4;

//----- (01011612) --------------------------------------------------------
void MaelstromPartFiveController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023EBC)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(152, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023870 == a3)
	{
		(**(void(* **)(signed int, DWORD))dword_1023EBC)(20, 0.0);
		*(DWORD*)(dword_1023BBC + 6) = 29;
		MissionControl(66, 0);
	}
}
// 1023870: using guessed type int dword_1023870;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023EBC: using guessed type int dword_1023EBC;

//----- (01011699) --------------------------------------------------------
void MaelstromPartSixController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_1023940)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_10239D0)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E5C)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E94)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(153, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023930 == a3 || (struct TPinballComponent*)dword_10239C8 == a3)
	{
		(**(void(* **)(signed int, DWORD))dword_1023E5C)(20, 0.0);
		(**(void(* **)(signed int, DWORD))dword_1023E94)(20, 0.0);
		*(DWORD*)(dword_1023BBC + 6) = 30;
		MissionControl(66, 0);
		(**(void(* **)(signed int, DWORD))dword_1023940)(20, 0.0);
		(**(void(* **)(signed int, DWORD))dword_10239D0)(20, 0.0);
	}
}
// 1023930: using guessed type int dword_1023930;
// 1023940: using guessed type int dword_1023940;
// 10239C8: using guessed type int dword_10239C8;
// 10239D0: using guessed type int dword_10239D0;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023E5C: using guessed type int dword_1023E5C;
// 1023E94: using guessed type int dword_1023E94;

//----- (01011798) --------------------------------------------------------
void MaelstromPartSevenController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			AdvanceWormHoleDestination(1);
			(**(void(* **)(signed int, DWORD))dword_10239EC)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_10239F4)(7, 0.0);
			(**(void(* **)(signed int, DWORD))dword_10239FC)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(154, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_10239EC == a3
		|| (struct TPinballComponent*)dword_10239F4 == a3
		|| (struct TPinballComponent*)dword_10239FC == a3)
	{
		*(DWORD*)(dword_1023BBC + 6) = 31;
		MissionControl(66, 0);
	}
}
// 10239EC: using guessed type int dword_10239EC;
// 10239F4: using guessed type int dword_10239F4;
// 10239FC: using guessed type int dword_10239FC;
// 1023BBC: using guessed type int dword_1023BBC;

//----- (0101184C) --------------------------------------------------------
void MaelstromPartEightController(int a1@<ebx > , int a2, struct TPinballComponent* a3)
{
	char* v3; // eax
	int v4; // ST10_4
	CHAR* v5; // eax
	char* v6; // eax
	char Dest; // [esp+14h] [ebp-44h]

	if (a2 != 63)
	{
		if (a2 == 66)
		{
			(**(void(* **)(signed int, DWORD))dword_10239C0)(19, 0.0);
			(**(void(* **)(signed int, DWORD))dword_1023E54)(7, 0.0);
		}
		else if (a2 != 67)
		{
			return;
		}
		v3 = get_rc_string(155, 0);
		TTextBox::Display(tTextBox, a1, v3, -1.0);
		return;
	}
	if ((struct TPinballComponent*)dword_1023980 == a3)
	{
		(**(void(* **)(signed int, DWORD))dword_1023E54)(20, 0.0);
		(**(void(* **)(signed int, DWORD))dword_10239C0)(20, 0.0);
		*(DWORD*)(dword_1023BBC + 6) = 1;
		MissionControl(66, 0);
		v4 = SpecialAddScore(5000000);
		v5 = get_rc_string(78, 0);
		_sprintf(&Dest, v5, v4);
		v6 = get_rc_string(48, 0);
		TTextBox::Display(dword_1023E1C, a1, v6, 4.0);
		if (!AddRankProgress(18))
		{
			TTextBox::Display(tTextBox, a1, &Dest, 8.0);
			(*(void (**)(void))(*(DWORD*)dword_1023D14 + 20))();
		}
	}
}
// 1023980: using guessed type int dword_1023980;
// 10239C0: using guessed type int dword_10239C0;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023D14: using guessed type int dword_1023D14;
// 1023E54: using guessed type int dword_1023E54;

//----- (01011985) --------------------------------------------------------
void GameoverController(int a1, struct TPinballComponent* a2)
{
	TTextBox* v2; // eax
	int v3; // esi
	int v4; // esi
	int v5; // ecx
	CHAR* v6; // eax
	int v7; // esi
	int v8; // esi
	int v9; // ecx
	int v10; // esi
	CHAR* v11; // eax
	char* v12; // eax
	int v13; // [esp+10h] [ebp-94h]
	int v14; // [esp+10h] [ebp-94h]
	char Dest; // [esp+20h] [ebp-84h]

	if (a1 != 66)
	{
		if (a1 != 67)
			return;
		v2 = tTextBox;
		v3 = *(DWORD*)((char*)tTextBox + 6);
		if (!(v3 & 0x100))
		{
			if (!(v3 & 0x200))
				goto LABEL_33;
			goto LABEL_18;
		}
		v4 = *(DWORD*)((_BYTE*)tTextBox + 6) & 0xF;
		v5 = **(DWORD * *)((char*)dword_1025040 + 28 * v4 + 102);
		v3 = v4 + 1;
		if (v5 >= 0)
		{
			switch (v3)
			{
			case 1:
				v13 = v5;
				v6 = get_rc_string(180, 0);
				break;
			case 2:
				v13 = v5;
				v6 = get_rc_string(181, 0);
				break;
			case 3:
				v13 = v5;
				v6 = get_rc_string(182, 0);
				break;
			case 4:
				v13 = v5;
				v6 = get_rc_string(183, 0);
				break;
			default:
				goto LABEL_9;
			}
			_sprintf(&Dest, v6, v13);
			TTextBox::Display(tTextBox, 256, &Dest, 3.0);
			if (v3 == *(DWORD*)((char*)dword_1025040 + 214))
				v7 = 512;
			else
				v7 = v3 | 0x100;
			goto LABEL_32;
		}
	LABEL_9:
		*(DWORD*)((char*)tTextBox + 6) = 512;
		v2 = tTextBox;
	LABEL_18:
		v8 = v3 & 0xF;
		v9 = dword_1025598[9 * v8];
		v10 = v8 + 1;
		if (v9 > 0)
		{
			switch (v10)
			{
			case 1:
				v14 = v9;
				v11 = get_rc_string(184, 0);
				break;
			case 2:
				v14 = v9;
				v11 = get_rc_string(185, 0);
				break;
			case 3:
				v14 = v9;
				v11 = get_rc_string(186, 0);
				break;
			case 4:
				v14 = v9;
				v11 = get_rc_string(187, 0);
				break;
			case 5:
				v14 = v9;
				v11 = get_rc_string(188, 0);
				break;
			default:
				goto LABEL_33;
			}
			_sprintf(&Dest, v11, v14);
			TTextBox::Display(tTextBox, 256, &Dest, 3.0);
			if (v10 == 5)
				v7 = 0;
			else
				v7 = v10 | 0x200;
		LABEL_32:
			*(DWORD*)((char*)tTextBox + 6) = v7;
			return;
		}
	LABEL_33:
		*(DWORD*)((char*)v2 + 6) = 256;
		v12 = get_rc_string(172, 0);
		TTextBox::Display(tTextBox, 256, v12, 10.0);
		return;
	}
	(**(void(* **)(signed int, DWORD))dword_1023EEC)(20, 0.0);
	pb_mode_change(2);
	(**(void(* **)(signed int, DWORD))dword_1023A74)(1022, 0.0);
	(**(void(* **)(signed int, DWORD))dword_1023A7C)(1022, 0.0);
	*(DWORD*)((char*)tTextBox + 6) = 0;
}
// 1023A74: using guessed type int dword_1023A74;
// 1023A7C: using guessed type int dword_1023A7C;
// 1023EEC: using guessed type int dword_1023EEC;

//----- (01011B98) --------------------------------------------------------
void UnselectMissionController(int a1, struct TPinballComponent* a2)
{
	*(DWORD*)(dword_1023BBC + 6) = 1;
	MissionControl(66, 0);
}
// 1023BBC: using guessed type int dword_1023BBC;

//----- (01011BB5) --------------------------------------------------------
void MissionControl(int a1, struct TPinballComponent* a2)
{
	int v2; // ebx
	signed int v3; // edi
	void(__thiscall * **v4)(DWORD, signed int, DWORD); // ebx
	void(__thiscall * **v5)(DWORD, signed int, DWORD); // ebx
	char* v6; // eax
	char* v7; // eax
	int v8; // [esp+30h] [ebp-4h]

	if (dword_1023BBC)
	{
		v2 = *(DWORD*)(dword_1023BBC + 6);
		v3 = a1;
		v8 = *(DWORD*)(dword_1023BBC + 6);
		switch (a1)
		{
		case 47:
			if ((struct TPinballComponent*)dword_1023978 == a2 && v2 > 1)
			{
				v4 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A8C;
				(**(void(* **)(signed int, DWORD))dword_1023A8C)(34, 0.0);
				(**v4)(v4, 20, 0.0);
				v5 = (void(__thiscall * **)(DWORD, signed int, DWORD))dword_1023A94;
				(**(void(* **)(signed int, DWORD))dword_1023A94)(34, 0.0);
				(**v5)(v5, 20, 0.0);
				v6 = get_rc_string(109, 0);
				TTextBox::Display(tTextBox, (int)v5, v6, 4.0);
				*(DWORD*)(dword_1023BBC + 6) = 1;
				MissionControl(66, 0);
				v2 = v8;
			}
			break;
		case 60:
			if ((struct TPinballComponent*)dword_1023978 == a2 && v2)
			{
				if ((**(int(* **)(signed int, DWORD))dword_1023978)(37, 0.0) == 1)
				{
					v7 = get_rc_string(116, 0);
					TTextBox::Display(tTextBox, v2, v7, 4.0);
				}
				break;
			}
			if (tTextBox == a2)
				goto LABEL_14;
			break;
		case 1009:
		LABEL_14:
			v3 = 67;
			break;
		}
		switch (v2)
		{
		case 0:
			WaitingDeploymentController(v2, v3, a2);
			break;
		case 1:
			SelectMissionController(v3, a2);
			break;
		case 2:
			PracticeMissionController(v2, v3, a2);
			break;
		case 3:
			LaunchTrainingController(v2, v3, a2);
			break;
		case 4:
			ReentryTrainingController(v2, v3, a2);
			break;
		case 5:
			ScienceMissionController(v2, v3, a2);
			break;
		case 6:
			StrayCometController(v2, v3, a2);
			break;
		case 7:
			BlackHoleThreatController(v2, v3, a2);
			break;
		case 8:
			SpaceRadiationController(v2, v3, a2);
			break;
		case 9:
			BugHuntController(v2, v3, a2);
			break;
		case 10:
			AlienMenaceController(v2, v3, a2);
			break;
		case 11:
			RescueMissionController(v2, v3, a2);
			break;
		case 12:
			SatelliteController(v2, v3, a2);
			break;
		case 13:
			ReconnaissanceController(v2, v3, a2);
			break;
		case 14:
			DoomsdayMachineController(v2, v3, a2);
			break;
		case 15:
			CosmicPlagueController(v2, v3, a2);
			break;
		case 16:
			SecretMissionYellowController(v2, v3, a2);
			break;
		case 17:
			TimeWarpController(v2, v3, a2);
			break;
		case 18:
			MaelstromController(v2, v3, a2);
			break;
		case 20:
			AlienMenacePartTwoController(v2, v3, a2);
			break;
		case 21:
			CosmicPlaguePartTwoController(v2, v3, a2);
			break;
		case 22:
			SecretMissionRedController(v2, v3, a2);
			break;
		case 23:
			SecretMissionGreenController(v2, v3, a2);
			break;
		case 24:
			TimeWarpPartTwoController(v2, v3, a2);
			break;
		case 25:
			MaelstromPartTwoController(v2, v3, a2);
			break;
		case 26:
			MaelstromPartThreeController(v2, v3, a2);
			break;
		case 27:
			MaelstromPartFourController(v2, v3, a2);
			break;
		case 28:
			MaelstromPartFiveController(v2, v3, a2);
			break;
		case 29:
			MaelstromPartSixController(v2, v3, a2);
			break;
		case 30:
			MaelstromPartSevenController(v2, v3, a2);
			break;
		case 31:
			MaelstromPartEightController(v2, v3, a2);
			break;
		case 32:
			GameoverController(v3, a2);
			break;
		default:
			UnselectMissionController(v3, a2);
			break;
		}
	}
}
// 1023978: using guessed type int dword_1023978;
// 1023A8C: using guessed type int dword_1023A8C;
// 1023A94: using guessed type int dword_1023A94;
// 1023BBC: using guessed type int dword_1023BBC;
