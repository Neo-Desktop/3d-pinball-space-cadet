#include "../../pinball.h"

//----- (010163DB) --------------------------------------------------------
int __thiscall TGate::Message(TGate *this, int a2, float a3)
{
TGate *v3; // esi
int v4; // eax
DWORD *v5; // ST00_4

v3 = this;
if ( a2 != 1020 )
{
if ( a2 == 53 )
{
v5 = *(DWORD **)((char *)this + 26);
*((_BYTE *)this + 5) = 0;
render_sprite_set_bitmap(v5, 0);
loader_play_sound(*(DWORD *)((char *)v3 + 82));
}
else if ( a2 == 54 || a2 == 1024 )
{
v4 = *(DWORD *)((char *)this + 34);
*((_BYTE *)this + 5) = 1;
render_sprite_set_bitmap(*(DWORD **)((char *)this + 26), *(DWORD *)(*(DWORD *)(v4 + 4) + 8));
if ( a2 == 54 )
loader_play_sound(*(DWORD *)((char *)v3 + 78));
}
control_handler(a2, v3);
}
return 0;
}

//----- (010196E5) --------------------------------------------------------
TGate *__thiscall TGate::TGate(TGate *this, struct TPinballTable *a2, int a3)
{
TGate *v3; // esi
int v4; // eax
char v6; // [esp+4h] [ebp-48h]
int v7; // [esp+3Ch] [ebp-10h]
int v8; // [esp+40h] [ebp-Ch]

v3 = this;
TCollisionComponent::TCollisionComponent(this, a2, a3, 1);
*(DWORD *)v3 = &TGate::vftable;
loader_query_visual(a3, 0, &v6);
*(DWORD *)((char *)v3 + 78) = v7;
*(DWORD *)((char *)v3 + 82) = v8;
v4 = *(DWORD *)((char *)v3 + 34);
*((_BYTE *)v3 + 5) = 1;
render_sprite_set_bitmap(*(DWORD **)((char *)v3 + 26), *(DWORD *)(*(DWORD *)(v4 + 4) + 8));
control_handler(1024, v3);
return v3;
}
// 10025F8: using guessed type void *TGate::vftable;
