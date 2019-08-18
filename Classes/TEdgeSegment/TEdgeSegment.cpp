#include "TEdgeSegment.h

//----- (01015866) --------------------------------------------------------
TEdgeSegment *__thiscall TEdgeSegment::TEdgeSegment(TEdgeSegment *this, struct TCollisionComponent *a2, char *a3, unsigned int a4)
{
TEdgeSegment *result; // eax

result = this;
*((DWORD *)this + 1) = a2;
*((DWORD *)this + 2) = a3;
*(DWORD *)this = &TEdgeSegment::vftable;
*(DWORD *)((char *)this + 17) = a4;
*((_BYTE *)this + 12) = 0;
return result;
}
// 1002444: using guessed type void *TEdgeSegment::vftable;
