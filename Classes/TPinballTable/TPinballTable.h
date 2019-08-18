//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TPINBALLTABLE_H
#define PINBALL_TPINBALLTABLE_H

/* 117 */
struct TPinballTable;

void TPinballTable::LightShow_timeout(int, void*); // idb
void TPinballTable::EndGame_timeout(int, void*); // idb
int __thiscall TPinballTable::AddScore(TPinballTable* this, int); // idb
// void TPinballTable::ChangeBallCount(TPinballTable *this, int a2, int a3);
void TPinballTable::replay_timer_callback(int, void*); // idb
void __thiscall TPinballTable::port_draw(TPinballTable* __hidden this); // idb
void TPinballTable::tilt_timeout(int, void*); // idb
// void TPinballTable::tilt(TPinballTable *this, int a2, float a3);
// int TPinballTable::Message(TPinballTable *this, int a2, int a3, float a4);
TZmapList* __thiscall TPinballTable::~TPinballTable(TPinballTable* this);
TPinballTable* __thiscall TPinballTable::`vector deleting destructor'(TPinballTable *this, char a2);
TPinballTable* __thiscall TPinballTable::TPinballTable(TPinballTable* this);
TPinballComponent* __thiscall TPinballTable::find_component(TPinballTable* this, char*); // idb
TPinballComponent* __thiscall TPinballTable::find_component(TPinballTable* this, int); // idb

void* TPinballTable::vftable = &TPinballTable::Message; // weak

#endif //PINBALL_TPINBALLTABLE_H
