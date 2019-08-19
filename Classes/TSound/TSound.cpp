//
// Created by neo on 2019-08-15.
//

#include "TSound.h"

//----- (0100AD8B) --------------------------------------------------------
TSound* __thiscall TSound::destroy(TSound* this, char a2)
{
	TSound* v2; // esi

	v2 = this;
	TPinballComponent::~TPinballComponent(this);
	if (a2 & 1)
		component_delete((void*)v2);
	return v2;
}

//----- (0101797E) --------------------------------------------------------
double __thiscall TSound::Play(TSound* this)
{
	return loader_play_sound(*(DWORD*)((char*)this + 42));
}

//----- (0101AA18) --------------------------------------------------------
TSound* __thiscall TSound::TSound(TSound* this, struct TPinballTable* a2, int a3)
{
	TSound* v3; // esi
	char v5; // [esp+4h] [ebp-48h]
	int v6; // [esp+3Ch] [ebp-10h]

	v3 = this;
	TPinballComponent::TPinballComponent(this, a2, a3, 1);
	*(DWORD*)v3 = &TSound::vftable;
	loader_query_visual(a3, 0, &v5);
	*(DWORD*)((char*)v3 + 42) = v6;
	return v3;
}
// 10027A4: using guessed type void *TSound::vftable;

