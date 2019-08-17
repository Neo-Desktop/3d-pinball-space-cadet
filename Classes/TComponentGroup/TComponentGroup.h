//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TCOMPONENTGROUP_H
#define PINBALL_TCOMPONENTGROUP_H

#include "../../pinball.h"

/* 127 */
struct TComponentGroup;

void __stdcall TComponentGroup::NotifyTimerExpired(int, struct TPinballComponent*); // idb
int __thiscall TComponentGroup::Message(TComponentGroup* this, int, float); // idb
TComponentGroup* __thiscall TComponentGroup::TComponentGroup(TComponentGroup* this, struct TPinballTable* a2, int a3);
TZmapList* __thiscall TComponentGroup::~TComponentGroup(TComponentGroup* this);
TComponentGroup* __thiscall TComponentGroup::`scalar deleting destructor`(TComponentGroup *this, char a2);

void* TComponentGroup::`vftable` = &TComponentGroup::Message; // weak

#endif //PINBALL_TCOMPONENTGROUP_H
