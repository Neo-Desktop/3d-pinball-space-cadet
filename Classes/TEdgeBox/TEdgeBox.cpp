//
// Created by neo on 2019-08-15.
//

#include "TEdgeBox.h"

//----- (0100B0D1) --------------------------------------------------------
TEdgeBox* __thiscall TEdgeBox::TEdgeBox(TEdgeBox* this)
{
	TEdgeBox* v1; // esi

	v1 = this;
	objlist_class::objlist_class(this, 0, 4);
	objlist_class::objlist_class((TEdgeBox*)((char*)v1 + 8), 0, 1);
	return v1;
}

//----- (0100B2C9) --------------------------------------------------------
void __thiscall TEdgeBox::~TEdgeBox(TEdgeBox* this)
{
	TEdgeBox* v1; // esi

	v1 = this;
	objlist_destroy(*((DWORD*)this + 3));
	objlist_destroy(*((DWORD*)v1 + 1));
}

//----- (0100B90E) --------------------------------------------------------
TEdgeBox* __thiscall TEdgeBox::destroy(TEdgeBox* this, char a2)
{
	TEdgeBox* v2; // edi
	TEdgeBox* result; // eax

	v2 = this;
	if (a2 & 2)
	{
		destroy(
			(void*)this,
			0x10u,
			*((DWORD*)this - 1),
			(void(__thiscall*)(void*))TEdgeBox::~TEdgeBox);
		if (a2 & 1)
			component_delete((char*)v2 - 4);
		result = (TEdgeBox*)((char*)v2 - 4);
	}
	else
	{
		TEdgeBox::~TEdgeBox(this);
		if (a2 & 1)
			component_delete((void*)v2);
		result = v2;
	}
	return result;
}
