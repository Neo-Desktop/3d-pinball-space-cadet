//
// Created by neo on 2019-08-15.
//

#include "TPinballComponent.h"

//----- (010145F5) --------------------------------------------------------
void* __stdcall TPinballComponent::operator new(size_t SizeOfElements)
{
	return _calloc(1u, SizeOfElements);
}

//----- (010159A9) --------------------------------------------------------
int __thiscall TPinballComponent::Message(TPinballComponent* this, int a2, float a3)
{
	*(_DWORD*)((char*)this + 6) = a2;
	if (a2 == 1024)
		* (_DWORD*)((char*)this + 6) = 0;
	return 0;
}

//----- (010159CA) --------------------------------------------------------
int __stdcall TPinballComponent::get_scoring(int a2)
{
	return 0;
}

//----- (01017C6D) --------------------------------------------------------
TPinballComponent* __thiscall TPinballComponent::TPinballComponent(TPinballComponent* this, struct TPinballTable* a2, int a3, int a4)
{
	TPinballComponent* v4; // esi
	struct TPinballTable* v5; // edi
	TZmapList* v6; // eax
	TZmapList* v7; // eax
	objlist_class* v8; // ecx
	TZmapList* v9; // eax
	TZmapList* v10; // eax
	objlist_class* v11; // ecx
	int v12; // eax
	int v13; // ecx
	_DWORD* v14; // eax
	signed int v15; // ebx
	_DWORD* v16; // eax
	int v17; // eax
	char v19; // [esp+Ch] [ebp-6Ch]
	void* v20; // [esp+4Ch] [ebp-2Ch]
	void* v21; // [esp+50h] [ebp-28h]
	int v22; // [esp+54h] [ebp-24h]
	int v23; // [esp+58h] [ebp-20h]
	int v24; // [esp+5Ch] [ebp-1Ch]
	int v25; // [esp+60h] [ebp-18h]
	int v26; // [esp+64h] [ebp-14h]
	int v27; // [esp+68h] [ebp-10h]
	int v28; // [esp+6Ch] [ebp-Ch]
	int v29; // [esp+70h] [ebp-8h]
	int v30; // [esp+74h] [ebp-4h]
	struct TPinballTable* v31; // [esp+80h] [ebp+8h]
	struct TPinballTable* v32; // [esp+80h] [ebp+8h]
	signed int v33; // [esp+88h] [ebp+10h]

	v4 = this;
	v5 = a2;
	*(_DWORD*)this = &TPinballComponent::`vftable`;
		* (_DWORD*)((char*)this + 6) = 0;
	*((_BYTE*)this + 4) = 0;
	*((_BYTE*)this + 5) = 0;
	*(_DWORD*)((char*)this + 30) = a2;
	*(_DWORD*)((char*)this + 26) = 0;
	if (a2)
		objlist_class::Add((struct TPinballTable*)((char*)a2 + 250), (void*)this);
	if (a3 >= 0)
		* (_DWORD*)((char*)v4 + 10) = loader_query_name(a3);
	if (a4 && a3 >= 0)
	{
		v33 = loader_query_visual_states(a3);
		v31 = 0;
		if (v33 > 0)
		{
			do
			{
				loader_query_visual(a3, (signed int)v31, &v19);
				if (v20)
				{
					if (!*(_DWORD*)((char*)v4 + 34))
					{
						v6 = (TZmapList*)operator new(8u);
						if (v6)
							v7 = TZmapList::TZmapList(v6, v33, 4);
						else
							v7 = 0;
						*(_DWORD*)((char*)v4 + 34) = v7;
					}
					v8 = *(objlist_class * *)((char*)v4 + 34);
					if (v8)
						objlist_class::Add(v8, v20);
				}
				if (v21)
				{
					if (!*(_DWORD*)((char*)v4 + 38))
					{
						v9 = (TZmapList*)operator new(8u);
						if (v9)
							v10 = TZmapList::TZmapList(v9, v33, 4);
						else
							v10 = 0;
						*(_DWORD*)((char*)v4 + 38) = v10;
					}
					v11 = *(objlist_class * *)((char*)v4 + 38);
					if (v11)
						objlist_class::Add(v11, v21);
				}
				v31 = (struct TPinballTable*)((char*)v31 + 1);
			} while ((signed int)v31 < v33);
		}
		v12 = *(_DWORD*)((char*)v4 + 38);
		if (v12)
			v30 = *(_DWORD*)(*(_DWORD*)(v12 + 4) + 8);
		v13 = *(_DWORD*)((char*)v4 + 34);
		if (v13)
		{
			v14 = *(_DWORD * *)(*(_DWORD*)(v13 + 4) + 8);
			v26 = *(_DWORD*)((char*)v14 + 29) - *(_DWORD*)((char*)v5 + 234);
			v15 = 1;
			v27 = *(_DWORD*)((char*)v14 + 33) - *(_DWORD*)((char*)v5 + 238);
			v28 = v14[3];
			v29 = v14[4];
			if (*(_DWORD*)(*(_DWORD*)(v13 + 4) + 4) > 1)
			{
				v32 = (struct TPinballTable*)12;
				do
				{
					v16 = *(_DWORD * *)((char*)v32 + *(_DWORD*)(*(_DWORD*)((char*)v4 + 34) + 4));
					v22 = *(_DWORD*)((char*)v16 + 29) - *(_DWORD*)((char*)v5 + 234);
					v23 = *(_DWORD*)((char*)v16 + 33) - *(_DWORD*)((char*)v5 + 238);
					v24 = v16[3];
					v25 = v16[4];
					enclosing_box(&v26, &v22, &v26);
					v32 = (struct TPinballTable*)((char*)v32 + 4);
					++v15;
				} while (v15 < *(_DWORD*)(*(_DWORD*)(*(_DWORD*)((char*)v4 + 34) + 4) + 4));
			}
			v17 = *(_DWORD*)(*(_DWORD*)(*(_DWORD*)((char*)v4 + 34) + 4) + 8);
			*(_DWORD*)((char*)v4 + 26) = render_create_sprite(
				v33 > 0,
				*(_DWORD*)(*(_DWORD*)(*(_DWORD*)((char*)v4 + 34) + 4) + 8),
				v30,
				*(_DWORD*)(v17 + 29) - *(_DWORD*)((char*)v5 + 234),
				*(_DWORD*)(v17 + 33) - *(_DWORD*)((char*)v5 + 238),
				&v26);
		}
	}
	*(_DWORD*)((char*)v4 + 22) = a3;
	return v4;
}
// 10024A8: using guessed type void *TPinballComponent::`vftable`;

//----- (01018FBC) --------------------------------------------------------
TZmapList* __thiscall TPinballComponent::~TPinballComponent(TPinballComponent* this)
{
	TPinballComponent* v1; // esi
	TZmapList* result; // eax
	TZmapList* v3; // ecx
	TZmapList* v4; // ecx

	v1 = this;
	result = *(TZmapList * *)((char*)this + 30);
	*(_DWORD*)this = &TPinballComponent::`vftable`;
		if (result)
			result = (TZmapList*)objlist_delete_object(*(_DWORD*)((char*)result + 254), (int)this);
	v3 = *(TZmapList * *)((char*)v1 + 34);
	if (v3)
		result = TZmapList::`scalar deleting destructor`(v3, 1);
		v4 = *(TZmapList * *)((char*)v1 + 38);
		if (v4)
			result = TZmapList::`scalar deleting destructor`(v4, 1);
			return result;
}
// 10024A8: using guessed type void *TPinballComponent::`vftable`;

//----- (01018FFD) --------------------------------------------------------
TComponentGroup* __thiscall TComponentGroup::TComponentGroup(TComponentGroup* this, struct TPinballTable* a2, int a3)
{
	TComponentGroup* v3; // esi
	int v4; // eax
	signed __int16* i; // edi
	struct TPinballComponent* v6; // eax
	int v8; // [esp+Ch] [ebp-4h]
	int v9; // [esp+1Ch] [ebp+Ch]

	v3 = this;
	TPinballComponent::TPinballComponent(this, a2, a3, 0);
	*(_DWORD*)v3 = &TComponentGroup::`vftable`;
		objlist_class::objlist_class((TComponentGroup*)((char*)v3 + 42), 4, 4);
	*(_DWORD*)((char*)v3 + 50) = 0;
	if (a3 > 0)
	{
		v4 = loader_query_iattribute(a3, 1027, &v8);
		v9 = 0;
		for (i = (signed __int16*)v4; v9 < v8; ++i)
		{
			v6 = TPinballTable::find_component(a2, *i);
			if (v6)
				objlist_class::Add((TComponentGroup*)((char*)v3 + 42), (void*)v6);
			++v9;
		}
	}
	return v3;
}
// 10024D8: using guessed type void *TComponentGroup::`vftable`;

//----- (01019082) --------------------------------------------------------
TZmapList* __thiscall TComponentGroup::~TComponentGroup(TComponentGroup* this)
{
	TComponentGroup* v1; // esi
	int v2; // eax

	v1 = this;
	v2 = *(_DWORD*)((char*)this + 50);
	*(_DWORD*)this = &TComponentGroup::`vftable`;
		if (v2)
		{
			timer_kill(v2);
			*(_DWORD*)((char*)v1 + 50) = 0;
		}
	objlist_destroy(*(_DWORD*)((char*)v1 + 46));
	return TPinballComponent::~TPinballComponent(v1);
}
// 10024D8: using guessed type void *TComponentGroup::`vftable`;

