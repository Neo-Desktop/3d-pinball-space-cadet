#include "TSoloTarget.h"

//----- (01016230) --------------------------------------------------------
int __thiscall TSoloTarget::Message(TSoloTarget *this, int a2, float a3)
{
TSoloTarget *v3; // esi
bool v4; // zf
int v5; // ecx
int v6; // eax

v3 = this;
if ( a2 >= 49 )
{
v4 = a2 == 50;
if ( a2 > 50 )
{
if ( a2 != 1024 )
return 0;
if ( *(_DWORD *)((char *)this + 82) )
timer_kill(*(_DWORD *)((char *)this + 82));
*(_DWORD *)((char *)v3 + 82) = 0;
v4 = a2 == 50;
}
*((_BYTE *)v3 + 5) = v4 || a2 == 1024;
v5 = *(_DWORD *)((char *)v3 + 34);
if ( v5 )
{
v6 = 4 * (3 - *((char *)v3 + 5));
render_sprite_set(
*(_DWORD **)((char *)v3 + 26),
*(_DWORD *)(v6 + *(_DWORD *)(v5 + 4)),
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)v3 + 38) + 4) + v6),
*(_DWORD *)(*(_DWORD *)(v6 + *(_DWORD *)(v5 + 4)) + 29) - *(_DWORD *)(*(_DWORD *)((char *)v3 + 30) + 234),
*(_DWORD *)(*(_DWORD *)(v6 + *(_DWORD *)(v5 + 4)) + 33) - *(_DWORD *)(*(_DWORD *)((char *)v3 + 30) + 238));
}
}
return 0;
}

//----- (010162C4) --------------------------------------------------------
int __thiscall TSoloTarget::get_scoring(TSoloTarget *this, int a2)
{
int result; // eax

if ( a2 >= 1 )
result = 0;
else
result = *(_DWORD *)((char *)this + 4 * a2 + 94);
return result;
}

//----- (010162E2) --------------------------------------------------------
void __thiscall TSoloTarget::put_scoring(TSoloTarget *this, int a2, int a3)
{
if ( a2 < 1 )
*(_DWORD *)((char *)this + 4 * a2 + 94) = a3;
}

//----- (0101620B) --------------------------------------------------------
void __stdcall TSoloTarget::TimerExpired(int a1, void *a2)
{
(**(void (__thiscall ***)(void *, signed int, _DWORD))a2)(a2, 50, 0.0);
*(_DWORD *)((char *)a2 + 82) = 0;
}

//----- (01018295) --------------------------------------------------------
void __thiscall TSoloTarget::Collision(TSoloTarget *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TSoloTarget *v6; // esi

v6 = this;
if ( TCollisionComponent::DefaultCollision(this, a2, a3, a4) )
{
(**(void (__thiscall ***)(TSoloTarget *, signed int, _DWORD))v6)(v6, 49, 0.0);
*(_DWORD *)((char *)v6 + 82) = timer_set(*(float *)((char *)v6 + 86), (int)v6, (int)TSoloTarget::TimerExpired);
control_handler(63, v6);
}
}

//----- (0101961F) --------------------------------------------------------
TSoloTarget *__thiscall TSoloTarget::TSoloTarget(TSoloTarget *this, struct TPinballTable *a2, int a3)
{
TSoloTarget *v3; // esi
char v5; // [esp+8h] [ebp-48h]
int v6; // [esp+40h] [ebp-10h]

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 1);
*(_DWORD *)((char *)v3 + 82) = 0;
*(_DWORD *)v3 = &TSoloTarget::`vftable`;
*(_DWORD *)((char *)v3 + 86) = 1036831949;
loader_query_visual(a3, 0, &v5);
*(_DWORD *)((char *)v3 + 90) = v6;
TSoloTarget::Message(v3, 50, 0.0);
return v3;
}
// 10025C0: using guessed type void *TSoloTarget::`vftable`;
