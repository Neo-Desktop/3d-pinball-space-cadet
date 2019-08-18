//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TCOMPONENTGROUP_H
#define PINBALL_TCOMPONENTGROUP_H

/* 127 */
struct TComponentGroup;

void TComponentGroup::NotifyTimerExpired(int, struct TPinballComponent*); // idb
int TComponentGroup::Message(TComponentGroup* this, int, float); // idb
TComponentGroup* TComponentGroup::TComponentGroup(TComponentGroup* this, struct TPinballTable* a2, int a3);
TZmapList* TComponentGroup::~TComponentGroup(TComponentGroup* this);
TComponentGroup* TComponentGroup::destroy(TComponentGroup *this, char a2);

void* TComponentGroup::vftable = &TComponentGroup::Message; // weak

#endif //PINBALL_TCOMPONENTGROUP_H
