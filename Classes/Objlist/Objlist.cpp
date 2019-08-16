//
// Created by neo on 2019-08-15.
//

#include "objlist.h"

//----- (010098D3) --------------------------------------------------------
objlist_class *__thiscall objlist_class::objlist_class(objlist_class *this, int a2, int a3)
{
objlist_class *v3; // esi

v3 = this;
*((_DWORD *)this + 1) = objlist_new(a2);
*(_DWORD *)v3 = a3;
return v3;
}

//----- (010098F7) --------------------------------------------------------
void __thiscall objlist_class::Grow(objlist_class *this)
{
    *((_DWORD *)this + 1) = objlist_grow(*((int **)this + 1), *(_DWORD *)this);
}

//----- (0100ACF3) --------------------------------------------------------
void __thiscall objlist_class::Add(objlist_class *this, void *a2)
{
    objlist_class *v2; // esi

    v2 = this;
    if ( *(_DWORD *)(*((_DWORD *)this + 1) + 4) == **((_DWORD **)this + 1) )
    objlist_class::Grow(this);
    objlist_add_object(*((_DWORD **)v2 + 1), (int)a2);
}
