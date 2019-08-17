#include "TBumper.h"

//----- (01015CB2) --------------------------------------------------------
void __stdcall TBumper::TimerExpired(int a1, void *a2)
{
int v2; // edx
int v3; // ecx
int v4; // eax

v2 = *(_DWORD *)((char *)a2 + 30);
v3 = 8 * *(_DWORD *)((char *)a2 + 78) + 8;
v4 = *(_DWORD *)(v3 + *(_DWORD *)(*(_DWORD *)((char *)a2 + 34) + 4));
*(_DWORD *)((char *)a2 + 82) = 0;
render_sprite_set(
*(_DWORD **)((char *)a2 + 26),
v4,
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)a2 + 38) + 4) + v3),
*(_DWORD *)(v4 + 29) - *(_DWORD *)(v2 + 234),
*(_DWORD *)(v4 + 33) - *(_DWORD *)(v2 + 238));
*(_DWORD *)((char *)a2 + 66) = *(_DWORD *)((char *)a2 + 90);
}

//----- (01015D0F) --------------------------------------------------------
void __thiscall TBumper::Fire(TBumper *this)
{
TBumper *v1; // esi
int v2; // edx
int v3; // eax
int v4; // ecx
int v5; // eax

v1 = this;
v2 = *(_DWORD *)((char *)this + 30);
v3 = 2 * *(_DWORD *)((char *)this + 78) + 1;
*(_DWORD *)((char *)this + 66) = 1315859240;
v4 = 4 * v3 + 8;
v5 = *(_DWORD *)(v4 + *(_DWORD *)(*(_DWORD *)((char *)v1 + 34) + 4));
render_sprite_set(
*(_DWORD **)((char *)v1 + 26),
*(_DWORD *)(v4 + *(_DWORD *)(*(_DWORD *)((char *)v1 + 34) + 4)),
*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)v1 + 38) + 4) + v4),
*(_DWORD *)(v5 + 29) - *(_DWORD *)(v2 + 234),
*(_DWORD *)(v5 + 33) - *(_DWORD *)(v2 + 238));
*(_DWORD *)((char *)v1 + 82) = timer_set(*(float *)((char *)v1 + 86), (int)v1, (int)TBumper::TimerExpired);
}

//----- (01015D79) --------------------------------------------------------
int __thiscall TBumper::Message(TBumper *this, int a2, float a3)
{
TBumper *v3; // esi
int v4; // eax
int v5; // ecx
_DWORD *v6; // eax
char *v7; // eax
char *v8; // eax
double v9; // st7
float v10; // ST04_4
int v11; // eax
int v12; // edi
int v13; // eax
int v15; // [esp+1Ch] [ebp+Ch]

v3 = this;
if ( a2 != 11 )
{
if ( a2 == 12 )
{
v15 = *(_DWORD *)((char *)this + 78) + 1;
v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)this + 34) + 4) + 4) - 1;
if ( 2 * v15 > v11 )
v15 = v11 / 2;
}
else
{
if ( a2 != 13 )
{
if ( a2 != 1020 )
{
if ( a2 == 1024 )
{
if ( *(_DWORD *)((char *)this + 82) )
{
timer_kill(*(_DWORD *)((char *)this + 82));
TBumper::TimerExpired(*(_DWORD *)((char *)v3 + 82), (void *)v3);
}
v4 = *(_DWORD *)((char *)v3 + 30);
*(_DWORD *)((char *)v3 + 78) = 0;
*(_DWORD *)((char *)v3 + 6) = 0;
v5 = 0;
if ( *(_DWORD *)(v4 + 214) > 0 )
{
v6 = (_DWORD *)((char *)v3 + 118);
do
{
v6[1] = 0;
*v6 = 0;
++v5;
v6 += 2;
}
while ( v5 < *(_DWORD *)(*(_DWORD *)((char *)v3 + 30) + 214) );
}
TBumper::TimerExpired(0, (void *)v3);
}
return 0;
}
v7 = (char *)this + 8 * *(_DWORD *)(*(_DWORD *)((char *)this + 30) + 218);
*(_DWORD *)(v7 + 122) = *(_DWORD *)((char *)this + 78);
*(_DWORD *)(v7 + 118) = *(_DWORD *)((char *)this + 6);
v8 = (char *)this + 8 * (unsigned __int64)(signed __int64)_floor(a3);
*(_DWORD *)((char *)v3 + 78) = *(_DWORD *)(v8 + 122);
v9 = (double)*(signed int *)((char *)v3 + 78);
*(_DWORD *)((char *)v3 + 6) = *(_DWORD *)(v8 + 118);
LABEL_16:
v10 = v9;
TBumper::Message(v3, 11, v10);
return 0;
}
v15 = *(_DWORD *)((char *)this + 78) - 1;
if ( v15 < 0 )
v15 = 0;
}
v9 = (double)v15;
goto LABEL_16;
}
v12 = (signed __int64)_floor(a3);
if ( 2 * v12 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)v3 + 34) + 4) + 4) - 1 )
v12 = (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)v3 + 34) + 4) + 4) - 1) / 2;
if ( v12 < 0 )
v12 = 0;
v13 = *(_DWORD *)((char *)v3 + 78);
if ( v12 != v13 )
{
if ( v12 >= v13 )
loader_play_sound(*(_DWORD *)((char *)v3 + 94));
if ( v12 < *(_DWORD *)((char *)v3 + 78) )
loader_play_sound(*(_DWORD *)((char *)v3 + 98));
*(_DWORD *)((char *)v3 + 78) = v12;
TBumper::Fire(v3);
control_handler(11, v3);
}
return 0;
}

//----- (01015EF9) --------------------------------------------------------
int __thiscall TBumper::get_scoring(TBumper *this, int a2)
{
int result; // eax

if ( a2 >= 4 )
result = 0;
else
result = *(_DWORD *)((char *)this + 4 * a2 + 102);
return result;
}

//----- (01015F17) --------------------------------------------------------
void __thiscall TBumper::put_scoring(TBumper *this, int a2, int a3)
{
if ( a2 < 4 )
*(_DWORD *)((char *)this + 4 * a2 + 102) = a3;
}

//----- (0101811D) --------------------------------------------------------
void __thiscall TBumper::Collision(TBumper *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
TBumper *v6; // esi

v6 = this;
if ( TCollisionComponent::DefaultCollision(this, a2, a3, a4) )
{
TBumper::Fire(v6);
control_handler(63, v6);
}
}

//----- (0101944A) --------------------------------------------------------
TBumper *__thiscall TBumper::TBumper(TBumper *this, struct TPinballTable *a2, int a3)
{
TBumper *v3; // esi
char v5; // [esp+4h] [ebp-48h]
int v6; // [esp+3Ch] [ebp-10h]
int v7; // [esp+40h] [ebp-Ch]

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 1);
*(_DWORD *)((char *)v3 + 78) = 0;
*(_DWORD *)((char *)v3 + 82) = 0;
*(_DWORD *)v3 = &TBumper::`vftable`;
*(_DWORD *)((char *)v3 + 86) = *(_DWORD *)loader_query_float_attribute(a3, 0, 407);
loader_query_visual(a3, 0, &v5);
*(_DWORD *)((char *)v3 + 94) = v6;
*(_DWORD *)((char *)v3 + 98) = v7;
*(_DWORD *)((char *)v3 + 90) = *(_DWORD *)((char *)v3 + 66);
return v3;
}
// 100256C: using guessed type void *TBumper::`vftable`;
