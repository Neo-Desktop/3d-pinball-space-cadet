//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TPINBALLTABLE_H
#define PINBALL_TPINBALLTABLE_H

#include "../../pinball.h"

/* 117 */
struct TPinballTable;

void __stdcall TPinballTable::LightShow_timeout(int, void*); // idb
void __stdcall TPinballTable::EndGame_timeout(int, void*); // idb
int __thiscall TPinballTable::AddScore(TPinballTable* this, int); // idb
// void __userpurge TPinballTable::ChangeBallCount(TPinballTable *this@<ecx>, int a2@<ebx>, int a3);
void __stdcall TPinballTable::replay_timer_callback(int, void*); // idb
void __thiscall TPinballTable::port_draw(TPinballTable* __hidden this); // idb
void __stdcall TPinballTable::tilt_timeout(int, void*); // idb
// void __userpurge TPinballTable::tilt(TPinballTable *this@<ecx>, int a2@<ebx>, float a3);
// int __userpurge TPinballTable::Message@<eax>(TPinballTable *this@<ecx>, int a2@<ebx>, int a3, float a4);
TZmapList* __thiscall TPinballTable::~TPinballTable(TPinballTable* this);
TPinballTable* __thiscall TPinballTable::`vector deleting destructor'(TPinballTable *this, char a2);
TPinballTable* __thiscall TPinballTable::TPinballTable(TPinballTable* this);

void* TPinballTable::`vftable` = &TPinballTable::Message; // weak

#endif //PINBALL_TPINBALLTABLE_H
