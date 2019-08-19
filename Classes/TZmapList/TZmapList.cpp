#include "TZmaplist.h"

//----- (010158F0) --------------------------------------------------------
TZmapList* __thiscall TZmapList::TZmapList(TZmapList* this, int a2, int a3)
{
	TZmapList* v3; // esi

	v3 = this;
	objlist_class::objlist_class(this, a2, a3);
	return v3;
}
//----- (01017E5C) --------------------------------------------------------
TZmapList* __thiscall TZmapList::destroy(TZmapList* this, char a2)
{
	TZmapList* v2; // esi

	v2 = this;
	objlist_destroy(*((DWORD*)this + 1));
	if (a2 & 1)
		component_delete((void*)v2);
	return v2;
}
