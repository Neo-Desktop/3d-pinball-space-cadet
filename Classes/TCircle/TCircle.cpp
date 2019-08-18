#include "TCircle.h"

//----- (01015898) --------------------------------------------------------
TCircle *__thiscall TCircle::TCircle(TCircle *this, struct TCollisionComponent *a2, char *a3, unsigned int a4, struct vector_type *a5, float a6)
{
TCircle *v6; // ebx

v6 = this;
TEdgeSegment::TEdgeSegment(this, a2, a3, a4);
*(DWORD *)v6 = &TCircle::vftable;
*(float *)((char *)v6 + 33) = a6 * a6;
*(DWORD *)((char *)v6 + 21) = *(DWORD *)a5;
*(DWORD *)((char *)v6 + 25) = *((DWORD *)a5 + 1);
*(DWORD *)((char *)v6 + 29) = *((DWORD *)a5 + 2);
return v6;
}
// 1002454: using guessed type void *TCircle::vftable;

//----- (010158D6) --------------------------------------------------------
double __thiscall TCircle::FindCollisionDistance(TCircle *this, struct ray_type *a2)
{
return ray_intersect_circle((float *)a2, (float *)((char *)this + 21));
}

//----- (0101CB7C) --------------------------------------------------------
void __thiscall TCircle::place_in_grid(TCircle *this)
{
edges_insert_circle((TCircle *)((char *)this + 21), this, 0);
}

//----- (0101CC8D) --------------------------------------------------------
void __thiscall TCircle::EdgeCollision(TCircle *this, struct TBall *a2, float a3)
{
TCircle *v3; // esi
int v4; // edx
float v5; // [esp+Ch] [ebp-18h]
float v6; // [esp+10h] [ebp-14h]
float v7; // [esp+18h] [ebp-Ch]
float v8; // [esp+1Ch] [ebp-8h]

v3 = this;
v7 = a3 * *(float *)((char *)a2 + 54) + *(float *)((char *)a2 + 42);
v8 = a3 * *(float *)((char *)a2 + 58) + *(float *)((char *)a2 + 46);
v5 = v7 - *(float *)((char *)this + 21);
v6 = v8 - *(float *)((char *)this + 25);
normalize_2d(&v5);
(*(void (**)(int, float *, float *, DWORD, TCircle *))(**((DWORD **)v3 + 1) + 20))(
v4,
&v7,
&v5,
LODWORD(a3),
v3);
}
