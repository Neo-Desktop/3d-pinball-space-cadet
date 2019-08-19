#include "TComponentGroup.h"

//----- (010159DC) --------------------------------------------------------
void TComponentGroup::NotifyTimerExpired(int a1, struct TPinballComponent* a2)
{
	*(DWORD*)((char*)a2 + 50) = 0;
	control_handler(61, a2);
}

//----- (010159F9) --------------------------------------------------------
int __thiscall TComponentGroup::Message(TComponentGroup* this, int a2, float a3)
{
	TComponentGroup* v3; // esi
	int v4; // eax
	int v5; // edi
	int v6; // ebx

	v3 = this;
	if (a2 == 48)
	{
		if (*(DWORD*)((char*)this + 50))
		{
			timer_kill(*(DWORD*)((char*)this + 50));
			*(DWORD*)((char*)v3 + 50) = 0;
		}
		if (a3 > 0.0)
			* (DWORD*)((char*)v3 + 50) = timer_set(a3, (int)v3, (int)TComponentGroup::NotifyTimerExpired);
	}
	else if (a2 <= 1007 || a2 > 1011 && a2 != 1020 && a2 != 1022)
	{
		v4 = *(DWORD*)(*(DWORD*)((char*)this + 46) + 4) - 1;
		if (v4 >= 0)
		{
			v5 = 4 * v4 + 8;
			v6 = *(DWORD*)(*(DWORD*)((char*)this + 46) + 4);
			do
			{
				(***(void (****)(int, DWORD))(v5 + *(DWORD*)((char*)v3 + 46)))(a2, LODWORD(a3));
				v5 -= 4;
				--v6;
			} while (v6);
		}
	}
	return 0;
}

//----- (0101AA81) --------------------------------------------------------
TComponentGroup* __thiscall TComponentGroup::destroy(TComponentGroup* this, char a2)
{
	TComponentGroup* v2; // esi

	v2 = this;
	TComponentGroup::~TComponentGroup(this);
	if (a2 & 1)
		component_delete((void*)v2);
	return v2;
}

//----- (01018FFD) --------------------------------------------------------
TComponentGroup* __thiscall TComponentGroup::TComponentGroup(TComponentGroup* this, struct TPinballTable* a2, int a3)
{
	TComponentGroup* v3; // esi
	int v4; // eax
	signed int* i; // edi
	struct TPinballComponent* v6; // eax
	int v8; // [esp+Ch] [ebp-4h]
	int v9; // [esp+1Ch] [ebp+Ch]

	v3 = this;
	TPinballComponent::TPinballComponent(this, a2, a3, 0);
	*(DWORD*)v3 = &TComponentGroup::vftable;
	objlist_class::objlist_class((TComponentGroup*)((char*)v3 + 42), 4, 4);
	*(DWORD*)((char*)v3 + 50) = 0;
	if (a3 > 0)
	{
		v4 = loader_query_iattribute(a3, 1027, &v8);
		v9 = 0;
		for (i = (signed int*)v4; v9 < v8; ++i)
		{
			v6 = TPinballTable::find_component(a2, *i);
			if (v6)
				objlist_class::Add((TComponentGroup*)((char*)v3 + 42), (void*)v6);
			++v9;
		}
	}
	return v3;
}
// 10024D8: using guessed type void *TComponentGroup::vftable;

//----- (01019082) --------------------------------------------------------
TZmapList* __thiscall TComponentGroup::~TComponentGroup(TComponentGroup* this)
{
	TComponentGroup* v1; // esi
	int v2; // eax

	v1 = this;
	v2 = *(DWORD*)((char*)this + 50);
	*(DWORD*)this = &TComponentGroup::vftable;
	if (v2)
	{
		timer_kill(v2);
		*(DWORD*)((char*)v1 + 50) = 0;
	}
	objlist_destroy(*(DWORD*)((char*)v1 + 46));
	return TPinballComponent::~TPinballComponent(v1);
}
// 10024D8: using guessed type void *TComponentGroup::vftable;

