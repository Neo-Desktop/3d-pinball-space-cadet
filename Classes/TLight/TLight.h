//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TLIGHT_H
#define PINBALL_TLIGHT_H

/* 124 */
struct TLight;

void __thiscall TLight::Reset(TLight* __hidden this); // idb
void TLight::TimerExpired(int, void*); // idb
void __thiscall TLight::schedule_timeout(TLight* this, float); // idb
int __thiscall TLight::Message(TLight* this, int, float); // idb
TLight* __thiscall TLight::TLight(TLight* this, struct TPinballTable* a2, int a3);

void* TLight::vftable = &TLight::Message; // weak

#endif //PINBALL_TLIGHT_H
