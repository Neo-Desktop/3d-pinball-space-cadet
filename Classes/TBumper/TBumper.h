//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TBUMPER_H
#define PINBALL_TBUMPER_H

/* 104 */
struct TBumper;

void __stdcall TBumper::TimerExpired(int, void*); // idb
void __thiscall TBumper::Fire(TBumper* this); // idb
int __thiscall TBumper::Message(TBumper* this, int, float); // idb
int __thiscall TBumper::get_scoring(TBumper* this, int); // idb
void __thiscall TBumper::put_scoring(TBumper* this, int, int); // idb
void __thiscall TBumper::Collision(TBumper* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TBumper* __thiscall TBumper::TBumper(TBumper* this, struct TPinballTable* a2, int a3);

void* TBumper::`vftable` = &TBumper::Message; // weak

#endif //PINBALL_TBUMPER_H
