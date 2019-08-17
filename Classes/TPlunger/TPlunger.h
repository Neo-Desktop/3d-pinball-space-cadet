//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TPLUNGER_H
#define PINBALL_TPLUNGER_H

#include "../../pinball.h"

/* 118 */
struct TPlunger;

void __stdcall TPlunger::BallFeedTimer(int, void*); // idb
void __stdcall TPlunger::PullbackTimer(int, void*); // idb
void __stdcall TPlunger::PlungerReleasedTimer(int, void*); // idb
int __thiscall TPlunger::Message(TPlunger* this, int, float); // idb
void __thiscall TPlunger::Collision(TPlunger* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TPlunger* __thiscall TPlunger::TPlunger(TPlunger* this, struct TPinballTable* a2, int a3);

void* TPlunger::`vftable` = &TPlunger::Message; // weak

#endif //PINBALL_TPLUNGER_H
