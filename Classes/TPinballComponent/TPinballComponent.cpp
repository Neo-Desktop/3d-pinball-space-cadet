//
// Created by neo on 2019-08-15.
//

#include "TPinballComponent.h"

//----- (010145F5) --------------------------------------------------------
void* TPinballComponent::operator new(size_t SizeOfElements)
{
	return calloc(1u, SizeOfElements);
}

//----- (010159A9) --------------------------------------------------------
int TPinballComponent::Message(int a2, float a3)
{
	*(DWORD*)((char*)this + 6) = a2;
	if (a2 == 1024)
		* (DWORD*)((char*)this + 6) = 0;
	return 0;
}

//----- (010159CA) --------------------------------------------------------
int TPinballComponent::get_scoring(int a2)
{
	return 0;
}

//----- (01017C6D) --------------------------------------------------------
TPinballComponent* TPinballComponent::TPinballComponent(TPinballTable* a2, int a3, int a4)
{
	TPinballComponent* this; // esi
	struct TPinballTable* a2; // edi
	TZmapList* v6; // eax
	TZmapList* v7; // eax
	objlist_class* v8; // ecx
	TZmapList* v9; // eax
	TZmapList* v10; // eax
	objlist_class* v11; // ecx
	int v12; // eax
	int v13; // ecx
	DWORD* v14; // eax
	signed int v15; // ebx
	DWORD* v16; // eax
	int v17; // eax

	* (DWORD*)((char*)this + 6) = 0;
	*((_BYTE*)this + 4) = 0;
	*((_BYTE*)this + 5) = 0;
	*(DWORD*)((char*)this + 30) = a2;
	*(DWORD*)((char*)this + 26) = 0;

	if (a2)
		objlist_class::Add((struct TPinballTable*)((char*)a2 + 250), (void*)this);

	if (a3 >= 0)
		* (DWORD*)((char*)this + 10) = loader_query_name(a3);

	if (a4 && a3 >= 0)
	{
		this.v33 = loader_query_visual_states(a3);
		this.v31 = 0;
		if (v33 > 0)
		{
			do
			{
				loader_query_visual(a3, (signed int)this.v31, &v19);
				if (this.v20)
				{
					if (!*(DWORD*)((char*)this + 34))
					{
						v6 = (TZmapList*)operator new(8u);
						if (v6)
							v7 = TZmapList::TZmapList(v6, this.v33, 4);
						else
							v7 = 0;
						*(DWORD*)((char*)this + 34) = v7;
					}
					v8 = *(objlist_class * *)((char*)this + 34);
					if (v8)
						objlist_class::Add(v8, this.v20);
				}
				if (this.v21)
				{
					if (!*(DWORD*)((char*)this + 38))
					{
						v9 = (TZmapList*)operator new(8u);
						if (v9)
							v10 = TZmapList::TZmapList(v9, v33, 4);
						else
							v10 = 0;
						*(DWORD*)((char*)this + 38) = v10;
					}
					v11 = *(objlist_class * *)((char*)this + 38);
					if (v11)
						objlist_class::Add(v11, this.v21);
				}
				this.v31 = (struct TPinballTable*)((char*)v31 + 1);
			} while (this.v31 < this.v33);
		}
		v12 = *(DWORD*)((char*)this + 38);
		if (v12)
			v30 = *(DWORD*)(*(DWORD*)(v12 + 4) + 8);
		v13 = *(DWORD*)((char*)this + 34);
		if (v13)
		{
			v14 = *(DWORD * *)(*(DWORD*)(v13 + 4) + 8);
			this.v26 = *(DWORD*)((char*)v14 + 29) - *(DWORD*)((char*)a2 + 234);
			v15 = 1;
			this.v27 = *(DWORD*)((char*)v14 + 33) - *(DWORD*)((char*)a2 + 238);
			this.v28 = v14[3];
			this.v29 = v14[4];
			if (*(DWORD*)(*(DWORD*)(v13 + 4) + 4) > 1)
			{
				this.v32 = (struct TPinballTable*)12;
				do
				{
					v16 = *(DWORD * *)((char*)v32 + *(DWORD*)(*(DWORD*)((char*)this + 34) + 4));
					this.v22 = *(DWORD*)((char*)v16 + 29) - *(DWORD*)((char*)a2 + 234);
					this.v23 = *(DWORD*)((char*)v16 + 33) - *(DWORD*)((char*)a2 + 238);
					this.v24 = v16[3];
					this.v25 = v16[4];
					enclosing_box(&v26, &v22, &v26);
					this.v32 = (struct TPinballTable*)((char*)v32 + 4);
					++v15;
				} while (v15 < *(DWORD*)(*(DWORD*)(*(DWORD*)((char*)this + 34) + 4) + 4));
			}
			v17 = *(DWORD*)(*(DWORD*)(*(DWORD*)((char*)this + 34) + 4) + 8);
			*(DWORD*)((char*)this + 26) = render_create_sprite(
				this.v33 > 0,
				*(DWORD*)(*(DWORD*)(*(DWORD*)((char*)this + 34) + 4) + 8),
				this.v30,
				*(DWORD*)(v17 + 29) - *(DWORD*)((char*)a2 + 234),
				*(DWORD*)(v17 + 33) - *(DWORD*)((char*)a2 + 238),
				&this.v26);
		}
	}
	*(DWORD*)((char*)this + 22) = a3;
	return this;
}
// 10024A8: using guessed type void *TPinballComponent::vftable;

//----- (01018FBC) --------------------------------------------------------
TZmapList* TPinballComponent::~TPinballComponent(TPinballComponent* this)
{
	TPinballComponent* v1; // esi
	TZmapList* result; // eax
	TZmapList* v3; // ecx
	TZmapList* v4; // ecx

	v1 = this;
	result = *(TZmapList * *)((char*)this + 30);
	*(DWORD*)this = &TPinballComponent::vftable;
		if (result)
			result = (TZmapList*)objlist_delete_object(*(DWORD*)((char*)result + 254), (int)this);
	v3 = *(TZmapList * *)((char*)v1 + 34);
	if (v3)
		result = TZmapList::destroy(v3, 1);
		v4 = *(TZmapList * *)((char*)v1 + 38);
		if (v4)
			result = TZmapList::destroy(v4, 1);
			return result;
}
// 10024A8: using guessed type void *TPinballComponent::vftable;
