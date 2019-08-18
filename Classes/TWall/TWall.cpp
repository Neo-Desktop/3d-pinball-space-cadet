#include "TWall.h"

//----- (01015ACE) --------------------------------------------------------
void TWall::TimerExpired(int a1, void *a2)
{
render_sprite_set_bitmap(*(DWORD **)((char *)a2 + 26), 0);
*(DWORD *)((char *)a2 + 78) = 0;
*(DWORD *)((char *)a2 + 6) = 0;
}

//----- (01015AF3) --------------------------------------------------------
int __thiscall TWall::Message(TWall *this, int a2, float a3)
{
TWall *v3; // esi

v3 = this;
if ( a2 == 1024 && *(DWORD *)((char *)this + 78) )
{
timer_kill(*(DWORD *)((char *)this + 78));
TWall::TimerExpired(*(DWORD *)((char *)v3 + 78), (void *)v3);
}
return 0;
}

//----- (01015B26) --------------------------------------------------------
int __thiscall TWall::get_scoring(TWall *this, int a2)
{
int result; // eax

if ( a2 >= 1 )
result = 0;
else
result = *(DWORD *)((char *)this + 4 * a2 + 86);
return result;
}

//----- (01015B44) --------------------------------------------------------
void __thiscall TWall::put_scoring(TWall *this, int a2, int a3)
{
if ( a2 < 1 )
*(DWORD *)((char *)this + 4 * a2 + 86) = a3;
}

//----- (01017FDE) --------------------------------------------------------
void __thiscall TWall::Collision(TWall *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TWall *v6; // esi

v6 = this;
if ( TCollisionComponent::DefaultCollision(this, a2, a3, a4) )
{
if ( *(DWORD *)((char *)v6 + 82) )
{
render_sprite_set_bitmap(*(DWORD **)((char *)v6 + 26), *(DWORD *)((char *)v6 + 82));
*(DWORD *)((char *)v6 + 78) = timer_set(0.1, (int)v6, (int)TWall::TimerExpired);
}
control_handler(63, v6);
}
}

//----- (010191BA) --------------------------------------------------------
TWall *__thiscall TWall::TWall(TWall *this, struct TPinballTable *a2, int a3)
{
TWall *v3; // esi
DWORD *v4; // eax
int v5; // eax

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 1);
v4 = *(DWORD **)((char *)v3 + 26);
*(DWORD *)v3 = &TWall::vftable;
if ( v4 )
render_sprite_set_bitmap(v4, 0);
v5 = *(DWORD *)((char *)v3 + 34);
if ( v5 )
*(DWORD *)((char *)v3 + 82) = *(DWORD *)(*(DWORD *)(v5 + 4) + 8);
*(DWORD *)((char *)v3 + 78) = 0;
return v3;
}
// 1002508: using guessed type void *TWall::vftable;

