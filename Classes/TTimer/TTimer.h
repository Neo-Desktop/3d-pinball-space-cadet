//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TTIMER_H
#define PINBALL_TTIMER_H

#include "../../pinball.h"

/* 129 */
struct TTimer;

void __stdcall TTimer::TimerExpired(int, struct TPinballComponent*); // idb
int __thiscall TTimer::Message(TTimer* this, int, float); // idb
TTimer* __thiscall TTimer::TTimer(TTimer* this, struct TPinballTable* a2, int a3);

void* TTimer::`vftable` = &TTimer::Message; // weak

#endif //PINBALL_TTIMER_H
