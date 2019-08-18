//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TLIGHTGROUP_H
#define PINBALL_TLIGHTGROUP_H

/* 93 */
struct TLightGroup;

TZmapList* __thiscall TLightGroup::~TLightGroup(TLightGroup* this);
void __thiscall TLightGroup::Reset(TLightGroup* __hidden this); // idb
void __stdcall TLightGroup::TimerExpired(int, void*); // idb
void __thiscall TLightGroup::reschedule_animation(TLightGroup* this, float); // idb
int __thiscall TLightGroup::next_light_up(TLightGroup* __hidden this); // idb
int __thiscall TLightGroup::next_light_down(TLightGroup* __hidden this); // idb
void __thiscall TLightGroup::start_animation(TLightGroup* __hidden this); // idb
void __stdcall TLightGroup::NotifyTimerExpired(int, void*); // idb
int __thiscall TLightGroup::Message(TLightGroup* this, int, float); // idb
TLightGroup* __thiscall TLightGroup::TLightGroup(TLightGroup* this, struct TPinballTable* a2, int a3);
TLightGroup* __thiscall TLightGroup::`vector deleting destructor`(TLightGroup *this, char a2);

void* TLightGroup::`vftable` = &TLightGroup::Message; // weak

#endif //PINBALL_TLIGHTGROUP_H
