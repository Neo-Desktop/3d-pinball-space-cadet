//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TPINBALLCOMPONENT_H
#define PINBALL_TPINBALLCOMPONENT_H

#include "../../pinball.h"

/* 100 */
struct TPinballComponent;

void* __stdcall TPinballComponent::operator new(size_t SizeOfElements); // idb
int __thiscall TPinballComponent::Message(TPinballComponent* this, int, float); // idb
int __stdcall TPinballComponent::get_scoring(int a2);
struct TPinballComponent* __thiscall TPinballTable::find_component(TPinballTable* this, char*); // idb
struct TPinballComponent* __thiscall TPinballTable::find_component(TPinballTable* this, int); // idb
TPinballComponent* __thiscall TPinballComponent::TPinballComponent(TPinballComponent* this, struct TPinballTable* a2, int a3, int a4);
TZmapList* __thiscall TPinballComponent::~TPinballComponent(TPinballComponent* this);

void* TPinballComponent::`vftable` = &TPinballComponent::Message; // weak

#endif //PINBALL_TPINBALLCOMPONENT_H
