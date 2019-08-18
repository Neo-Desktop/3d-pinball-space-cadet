#include "TDemo.h"

//----- (01016D62) --------------------------------------------------------
void TDemo::PlungerRelease(int a1, void *a2)
{
void (***v2)(signed int, DWORD); // ecx

v2 = *(void (****)(signed int, DWORD))((char *)a2 + 30);
*(DWORD *)((char *)a2 + 110) = 0;
(**v2)(1005, LODWORD(time_next));
}
// 1025634: using guessed type float time_next;

//----- (01016D8D) --------------------------------------------------------
void TDemo::UnFlipRight(int a1, void *a2)
{
if ( *(DWORD *)((char *)a2 + 98) )
(***(void (****)(signed int, DWORD))((char *)a2 + 30))(1003, LODWORD(time_next));
*(DWORD *)((char *)a2 + 98) = 0;
}
// 1025634: using guessed type float time_next;

//----- (01016DC0) --------------------------------------------------------
void TDemo::UnFlipLeft(int a1, void *a2)
{
if ( *(DWORD *)((char *)a2 + 94) )
(***(void (****)(signed int, DWORD))((char *)a2 + 30))(1001, LODWORD(time_next));
*(DWORD *)((char *)a2 + 94) = 0;
}
// 1025634: using guessed type float time_next;

//----- (01016DF3) --------------------------------------------------------
void TDemo::FlipRight(int a1, void *a2)
{
double v2; // st7
float v3; // ST08_4

if ( !*(DWORD *)((char *)a2 + 98) )
{
if ( *(DWORD *)((char *)a2 + 106) )
{
timer_kill(*(DWORD *)((char *)a2 + 106));
*(DWORD *)((char *)a2 + 106) = 0;
}
(***(void (****)(signed int, DWORD))((char *)a2 + 30))(1002, LODWORD(time_next));
v2 = *(float *)((char *)a2 + 86) + *(float *)((char *)a2 + 90);
*(DWORD *)((char *)a2 + 98) = 1;
v3 = v2 - (double)_rand() * 0.00003051850947599719 * (*(float *)((char *)a2 + 90) + *(float *)((char *)a2 + 90));
timer_set(v3, (int)a2, (int)TDemo::UnFlipRight);
}
}
// 1025634: using guessed type float time_next;

//----- (01016E70) --------------------------------------------------------
void TDemo::FlipLeft(int a1, void *a2)
{
double v2; // st7
float v3; // ST08_4

if ( !*(DWORD *)((char *)a2 + 94) )
{
if ( *(DWORD *)((char *)a2 + 102) )
{
timer_kill(*(DWORD *)((char *)a2 + 102));
*(DWORD *)((char *)a2 + 102) = 0;
}
(***(void (****)(signed int, DWORD))((char *)a2 + 30))(1000, LODWORD(time_next));
v2 = *(float *)((char *)a2 + 86) + *(float *)((char *)a2 + 90);
*(DWORD *)((char *)a2 + 94) = 1;
v3 = v2 - (double)_rand() * 0.00003051850947599719 * (*(float *)((char *)a2 + 90) + *(float *)((char *)a2 + 90));
timer_set(v3, (int)a2, (int)TDemo::UnFlipLeft);
}
}
// 1025634: using guessed type float time_next;

//----- (01016EED) --------------------------------------------------------
void TDemo::NewGameRestartTimer(int a1, void *a2)
{
int v2; // ecx
float v3; // ST04_4

pb_replay_level(1);
v2 = *(DWORD *)((char *)a2 + 30);
v3 = (double)*(signed int *)(v2 + 214);
(**(void (***)(signed int, DWORD))v2)(1014, LODWORD(v3));
*(DWORD *)((char *)a2 + 114) = 0;
}

//----- (01016F21) --------------------------------------------------------
void __thiscall TDemo::Collision(TDemo *this, struct TBall *a2, struct vector_type *a3, struct vector_type *a4, float a5, struct TEdgeSegment *a6)
{
int v6; // ebx
TDemo *v7; // edi
int v8; // ebx
double v9; // st7
int v10; // eax
int v11; // ebx
int v12; // ebx
int v13; // ebx
float v14; // ST08_4
double v15; // ST20_8
float v16; // ST08_4
double v17; // ST20_8
float v18; // ST08_4

v6 = *(DWORD *)((char *)a6 + 13);
v7 = this;
TBall::not_again(a2, a6);
v8 = v6 - 1400;
v9 = *(float *)((char *)a2 + 70) - a5;
*(DWORD *)((char *)a2 + 42) = *(DWORD *)a3;
v10 = *((DWORD *)a3 + 1);
*(float *)((char *)a2 + 70) = v9;
*(DWORD *)((char *)a2 + 46) = v10;
if ( v8 )
{
v11 = v8 - 1;
if ( v11 )
{
v12 = v11 - 1;
if ( v12 )
{
v13 = v12 - 1;
if ( v13 )
{
if ( v13 == 1 && !*(DWORD *)((char *)v7 + 110) )
{
(***(void (****)(signed int, DWORD))((char *)v7 + 30))(1004, *(float *)((char *)a2 + 78));
v14 = (double)_rand() * 0.00003051850947599719 + 2.0;
*(DWORD *)((char *)v7 + 110) = timer_set(v14, (int)v7, (int)TDemo::PlungerRelease);
}
}
else
{
TDemo::FlipRight(0, (void *)v7);
}
}
else if ( !*(DWORD *)((char *)v7 + 106) && !*(DWORD *)((char *)v7 + 98) )
{
v15 = *(float *)((char *)v7 + 78) + *(float *)((char *)v7 + 82);
v16 = v15
- (double)_rand() * 0.00003051850947599719 * (*(float *)((char *)v7 + 82) + *(float *)((char *)v7 + 82));
*(DWORD *)((char *)v7 + 106) = timer_set(v16, (int)v7, (int)TDemo::FlipRight);
}
}
else
{
TDemo::FlipLeft(0, (void *)v7);
}
}
else if ( !*(DWORD *)((char *)v7 + 102) && !*(DWORD *)((char *)v7 + 94) )
{
v17 = *(float *)((char *)v7 + 78) + *(float *)((char *)v7 + 82);
v18 = v17 - (double)_rand() * 0.00003051850947599719 * (*(float *)((char *)v7 + 82) + *(float *)((char *)v7 + 82));
*(DWORD *)((char *)v7 + 102) = timer_set(v18, (int)v7, (int)TDemo::FlipLeft);
}
}

//----- (01017074) --------------------------------------------------------
int __thiscall TDemo::Message(TDemo *this, int a2, float a3)
{
TDemo *v3; // esi
int v4; // eax
bool v5; // zf

v3 = this;
switch ( a2 )
{
case 1014:
if ( *(DWORD *)((char *)this + 114) )
timer_kill(*(DWORD *)((char *)this + 114));
*(DWORD *)((char *)v3 + 114) = 0;
break;
case 1022:
if ( *(DWORD *)((char *)this + 114) )
timer_kill(*(DWORD *)((char *)this + 114));
v5 = *((_BYTE *)v3 + 5) == 0;
*(DWORD *)((char *)v3 + 114) = 0;
if ( !v5 )
*(DWORD *)((char *)v3 + 114) = timer_set(5.0, (int)v3, (int)TDemo::NewGameRestartTimer);
break;
case 1024:
if ( *(DWORD *)((char *)this + 102) )
timer_kill(*(DWORD *)((char *)this + 102));
v4 = *(DWORD *)((char *)v3 + 106);
*(DWORD *)((char *)v3 + 102) = 0;
if ( v4 )
timer_kill(v4);
v5 = *(DWORD *)((char *)v3 + 94) == 0;
*(DWORD *)((char *)v3 + 106) = 0;
if ( !v5 )
TDemo::UnFlipLeft(0, (void *)v3);
if ( *(DWORD *)((char *)v3 + 98) )
TDemo::UnFlipRight(0, (void *)v3);
if ( *(DWORD *)((char *)v3 + 110) )
TDemo::PlungerRelease(0, (void *)v3);
break;
}
return 0;
}

//----- (0101A2B5) --------------------------------------------------------
TDemo *__thiscall TDemo::TDemo(TDemo *this, struct TPinballTable *a2, int a3)
{
TDemo *v3; // esi
DWORD *v4; // eax
float *v5; // eax
float *v6; // eax
float *v7; // eax
float *v8; // eax
float *v9; // eax
char v11; // [esp+14h] [ebp-48h]
unsigned int v12; // [esp+48h] [ebp-14h]

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 0);
*(DWORD *)v3 = &TDemo::vftable;
*(DWORD *)((char *)v3 + 114) = 0;
*(DWORD *)((char *)v3 + 110) = 0;
*(DWORD *)((char *)v3 + 102) = 0;
*(DWORD *)((char *)v3 + 106) = 0;
*(DWORD *)((char *)v3 + 6) = 0;
*((_BYTE *)v3 + 4) = 0;
*((_BYTE *)v3 + 5) = 0;
*(DWORD *)((char *)v3 + 98) = 0;
*(DWORD *)((char *)v3 + 94) = 0;
*(DWORD *)((char *)a2 + 230) = v3;
v4 = (DWORD *)loader_query_float_attribute(a3, 0, 407);
if ( v4 )
{
*(DWORD *)((char *)v3 + 78) = *v4;
*(DWORD *)((char *)v3 + 82) = v4[1];
*(DWORD *)((char *)v3 + 86) = v4[2];
*(DWORD *)((char *)v3 + 90) = v4[3];
}
else
{
*(float *)((char *)v3 + 78) = 0.2;
*(float *)((char *)v3 + 82) = 0.1;
*(float *)((char *)v3 + 86) = 0.2;
*(float *)((char *)v3 + 90) = 0.1;
}
loader_query_visual(a3, 0, &v11);
v5 = (float *)loader_query_float_attribute(a3, 0, 1400);
*(DWORD *)((char *)v3 + 118) = install_wall(v5, v3, (char *)v3 + 5, v12, 0.0, (void *)0x578);
v6 = (float *)loader_query_float_attribute(a3, 0, 1401);
install_wall(v6, v3, (char *)v3 + 5, v12, 0.0, (void *)0x579);
v7 = (float *)loader_query_float_attribute(a3, 0, 1402);
*(DWORD *)((char *)v3 + 122) = install_wall(v7, v3, (char *)v3 + 5, v12, 0.0, (void *)0x57A);
v8 = (float *)loader_query_float_attribute(a3, 0, 1403);
install_wall(v8, v3, (char *)v3 + 5, v12, 0.0, (void *)0x57B);
v9 = (float *)loader_query_float_attribute(a3, 0, 1404);
*(DWORD *)((char *)v3 + 126) = install_wall(v9, v3, (char *)v3 + 5, v12, *(float *)((char *)a2 + 282), (void *)0x57C);
return v3;
}
// 10026E8: using guessed type void *TDemo::vftable;
