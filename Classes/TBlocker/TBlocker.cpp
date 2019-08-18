#include "TBlocker.h"

//----- (0101631C) --------------------------------------------------------
int __thiscall TBlocker::Message(TBlocker *this, int a2, float a3)
{
TBlocker *v3; // esi
DWORD *v4; // ST04_4
int v6; // ST08_4
double v7; // st7
float v8; // ST00_4

v3 = this;
switch ( a2 )
{
case 51:
LABEL_7:
if ( *(DWORD *)((char *)this + 86) )
{
timer_kill(*(DWORD *)((char *)this + 86));
*(DWORD *)((char *)v3 + 86) = 0;
}
*(DWORD *)((char *)v3 + 6) = 0;
v4 = *(DWORD **)((char *)v3 + 26);
*((_BYTE *)v3 + 5) = 0;
render_sprite_set_bitmap(v4, 0);
if ( a2 == 51 )
loader_play_sound(*(DWORD *)((char *)v3 + 94));
return 0;
case 52:
v6 = *(DWORD *)((char *)this + 90);
*((_BYTE *)this + 5) = 1;
loader_play_sound(v6);
render_sprite_set_bitmap(
*(DWORD **)((char *)v3 + 26),
*(DWORD *)(*(DWORD *)(*(DWORD *)((char *)v3 + 34) + 4) + 8));
break;
case 59:
break;
case 1011:
case 1020:
case 1024:
goto LABEL_7;
default:
return 0;
}
if ( *(DWORD *)((char *)v3 + 86) )
timer_kill(*(DWORD *)((char *)v3 + 86));
if ( a3 <= 0.0 )
v7 = 0.0;
else
v7 = a3;
v8 = v7;
*(DWORD *)((char *)v3 + 86) = timer_set(v8, (int)v3, (int)TBlocker::TimerExpired);
return 0;
}

//----- (010162FF) --------------------------------------------------------
void TBlocker::TimerExpired(int a1, struct TPinballComponent *a2)
{
*(DWORD *)((char *)a2 + 86) = 0;
control_handler(60, a2);
}

//----- (01019677) --------------------------------------------------------
TBlocker *__thiscall TBlocker::TBlocker(TBlocker *this, struct TPinballTable *a2, int a3)
{
TBlocker *v3; // esi
DWORD *v4; // ST04_4
char v6; // [esp+8h] [ebp-48h]
int v7; // [esp+40h] [ebp-10h]
int v8; // [esp+44h] [ebp-Ch]

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 1);
*(DWORD *)v3 = &TBlocker::vftable;
loader_query_visual(a3, 0, &v6);
v4 = *(DWORD **)((char *)v3 + 26);
*(DWORD *)((char *)v3 + 90) = v7;
*(DWORD *)((char *)v3 + 94) = v8;
*(DWORD *)((char *)v3 + 78) = 55;
*(DWORD *)((char *)v3 + 82) = 5;
*(DWORD *)((char *)v3 + 66) = 1315859240;
*(DWORD *)((char *)v3 + 86) = 0;
*(DWORD *)((char *)v3 + 6) = 0;
*((_BYTE *)v3 + 5) = 0;
render_sprite_set_bitmap(v4, 0);
return v3;
}
// 10025DC: using guessed type void *TBlocker::vftable;

