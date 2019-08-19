//
// Created by neo on 2019-08-15.

#include "TLightBargraph.h"

//----- (0100AA81) --------------------------------------------------------
TZmapList* __thiscall TLightBargraph::~TLightBargraph(TLightBargraph* this)
{
	TLightGroup* v1; // esi
	int v2; // eax

	v1 = this;
	v2 = *(DWORD*)((char*)this + 138);
	*(DWORD*)this = &TLightBargraph::vftable;
	if (v2)
		memoryfree(v2);
	return TLightGroup::~TLightGroup(v1);
}
// 1001A30: using guessed type void *TLightBargraph::vftable;

//----- (0100AAA9) --------------------------------------------------------
void __thiscall TLightBargraph::Reset(TLightBargraph* this)
{
	TLightBargraph* v1; // edi
	DWORD* v2; // esi

	v1 = this;
	v2 = (DWORD*)((char*)this + 142);
	if (*(DWORD*)((char*)this + 142))
	{
		timer_kill(*(DWORD*)((char*)this + 142));
		*v2 = 0;
	}
	*(DWORD*)((char*)v1 + 146) = 0;
	TLightGroup::Reset(v1);
}

//----- (0100AAD9) --------------------------------------------------------
void TLightBargraph::BargraphTimerExpired(int a1, void* a2)
{
	int v2; // eax
	float v3; // ST04_4

	v2 = *(DWORD*)((char*)a2 + 146);
	*(DWORD*)((char*)a2 + 142) = 0;
	if (v2)
	{
		v3 = (double)(v2 - 1);
		(**(void(__thiscall * **)(void*, signed int, DWORD))a2)(a2, 45, LODWORD(v3));
		control_handler(60, (struct TPinballComponent*)a2);
	}
	else
	{
		(**(void(__thiscall * **)(void*, signed int, DWORD))a2)(a2, 20, 0.0);
		control_handler(47, (struct TPinballComponent*)a2);
	}
}

//----- (0100AB28) --------------------------------------------------------
int __thiscall TLightBargraph::Message(TLightBargraph* this, int a2, float a3)
{
	TLightBargraph* v3; // esi
	int v4; // ecx
	DWORD* v5; // eax
	DWORD* v6; // edi
	float v7; // ST0C_4
	int v8; // ebx
	int v9; // eax
	float v10; // ST08_4
	int v11; // eax
	signed int v13; // [esp+20h] [ebp+Ch]

	v3 = this;
	switch (a2)
	{
	case 37:
		return *(DWORD*)((char*)this + 146);
	case 45:
		if (*(DWORD*)((char*)this + 142))
		{
			timer_kill(*(DWORD*)((char*)this + 142));
			*(DWORD*)((char*)v3 + 142) = 0;
		}
		v8 = (signed __int64)_floor(a3);
		v9 = 2 * *(DWORD*)(*(DWORD*)((char*)v3 + 46) + 4);
		if (v8 >= v9)
			v8 = v9 - 1;
		if (v8 >= 0)
		{
			v10 = (double)(v8 / 2);
			TLightGroup::Message(v3, 45, v10);
			if (!(v8 & 1))
				TLightGroup::Message(v3, 46, 0.0);
			v11 = *(DWORD*)((char*)v3 + 138);
			if (v11)
				* (DWORD*)((char*)v3 + 142) = timer_set(
					*(float*)(v11 + 4 * v8),
					(int)v3,
					(int)TLightBargraph::BargraphTimerExpired);
			*(DWORD*)((char*)v3 + 146) = v8;
		}
		else
		{
			TLightGroup::Message(v3, 20, 0.0);
			*(DWORD*)((char*)v3 + 146) = 0;
		}
		break;
	case 1011:
		(*(void (**)(void))(*(DWORD*)this + 20))();
		break;
	case 1020:
		v6 = (DWORD*)((char*)this + 142);
		if (*(DWORD*)((char*)this + 142))
		{
			timer_kill(*(DWORD*)((char*)this + 142));
			*v6 = 0;
		}
		*(DWORD*)((char*)v3 + 4 * *(DWORD*)(*(DWORD*)((char*)v3 + 30) + 218) + 150) = *(DWORD*)((char*)v3 + 146);
		(*(void(__thiscall * *)(TLightBargraph*))(*(DWORD*)v3 + 20))(v3);
		v13 = *(DWORD*)((char*)v3 + 4 * (unsigned __int64)(signed __int64)_floor(a3) + 150);
		*(DWORD*)((char*)v3 + 146) = v13;
		if (v13)
		{
			v7 = (double)v13;
			TLightBargraph::Message(v3, 45, v7);
		}
		break;
	case 1024:
		(*(void (**)(void))(*(DWORD*)this + 20))();
		v4 = 0;
		if (*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 214) > 0)
		{
			v5 = (DWORD*)((char*)v3 + 150);
			do
			{
				*v5 = *(DWORD*)((char*)v3 + 146);
				++v4;
				++v5;
			} while (v4 < *(DWORD*)(*(DWORD*)((char*)v3 + 30) + 214));
		}
		TLightGroup::Message(v3, 1024, a3);
		break;
	default:
		TLightGroup::Message(this, a2, a3);
		break;
	}
	return 0;
}

//----- (0100AE72) --------------------------------------------------------
TLightBargraph* __thiscall TLightBargraph::TLightBargraph(TLightBargraph* this, struct TPinballTable* a2, int a3)
{
	TLightBargraph* v3; // esi
	float* v4; // ebx
	int v5; // edi
	int v6; // eax
	int i; // eax

	v3 = this;
	TLightGroup::TLightGroup(this, a2, a3);
	*(DWORD*)v3 = &TLightBargraph::vftable;
	*(DWORD*)((char*)v3 + 138) = 0;
	TLightBargraph::Reset(v3);
	if (a3 > 0)
	{
		v4 = (float*)loader_query_float_attribute(a3, 0, 904);
		if (v4)
		{
			v5 = 2 * *(DWORD*)(*(DWORD*)((char*)v3 + 46) + 4);
			v6 = memoryallocate(8 * *(DWORD*)(*(DWORD*)((char*)v3 + 46) + 4));
			*(DWORD*)((char*)v3 + 138) = v6;
			if (v6)
			{
				for (i = 0; i < v5; ++v4)
					* (float*)(*(DWORD*)((char*)v3 + 138) + 4 * i++) = *v4;
			}
		}
	}
	return v3;
}
// 1001A30: using guessed type void *TLightBargraph::vftable;

//----- (0100AEF9) --------------------------------------------------------
TLightBargraph* __thiscall TLightBargraph::destroy(TLightBargraph* this, char a2)
{
	TLightBargraph* v2; // esi

	v2 = this;
	TLightBargraph::~TLightBargraph(this);
	if (a2 & 1)
		component_delete((void*)v2);
	return v2;
}

