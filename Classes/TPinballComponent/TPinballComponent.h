//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TPINBALLCOMPONENT_H
#define PINBALL_TPINBALLCOMPONENT_H

/* 100 */
struct TPinballComponent {

	char v19; // [esp+Ch] [ebp-6Ch]
	void* v20; // [esp+4Ch] [ebp-2Ch]
	void* v21; // [esp+50h] [ebp-28h]
	int v22; // [esp+54h] [ebp-24h]
	int v23; // [esp+58h] [ebp-20h]
	int v24; // [esp+5Ch] [ebp-1Ch]
	int v25; // [esp+60h] [ebp-18h]
	int v26; // [esp+64h] [ebp-14h]
	int v27; // [esp+68h] [ebp-10h]
	int v28; // [esp+6Ch] [ebp-Ch]
	int v29; // [esp+70h] [ebp-8h]
	int v30; // [esp+74h] [ebp-4h]
	struct TPinballTable* v31; // [esp+80h] [ebp+8h]
	struct TPinballTable* v32; // [esp+80h] [ebp+8h]
	signed int v33; // [esp+88h] [ebp+10h]

	void* operator new(size_t SizeOfElements); // idb
	int Message(int, float); // idb
	int TPinballComponent::get_scoring(int a2);
	TPinballComponent* TPinballComponent::TPinballComponent(TPinballTable* a2, int a3, int a4);
	TZmapList* TPinballComponent::~TPinballComponent();

	void* TPinballComponent::vftable = &TPinballComponent::Message; // weak
}

#endif //PINBALL_TPINBALLCOMPONENT_H
