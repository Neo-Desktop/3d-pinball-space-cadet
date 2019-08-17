#include "TTripwire.h"

//----- (010165ED) --------------------------------------------------------
void __thiscall TTripwire::Collision(TTripwire *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TTripwire *v6; // esi
double v7; // st7

v6 = this;
*(float *)((char *)a2 + 42) = *(float *)a3;
v7 = *(float *)((char *)a2 + 70);
*(_DWORD *)((char *)a2 + 46) = *((_DWORD *)a3 + 1);
*(float *)((char *)a2 + 70) = v7 - a5;
TBall::not_again(a2, a6);
if ( !*(_DWORD *)(*(_DWORD *)((char *)v6 + 30) + 370) )
{
loader_play_sound(*(_DWORD *)((char *)v6 + 70));
control_handler(63, v6);
}
}

//----- (01019816) --------------------------------------------------------
TTripwire *__thiscall TTripwire::TTripwire(TTripwire *this, struct TPinballTable *a2, int a3)
{
TTripwire *v3; // esi

v3 = this;
TRollover::TRollover(this, a2, a3, 1);
*(_DWORD *)v3 = &TTripwire::`vftable';
return v3;
}
// 100264C: using guessed type void *TTripwire::`vftable';
