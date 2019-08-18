//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TDRAIN_H
#define PINBALL_TDRAIN_H

/* 115 */
struct TDrain

int __thiscall TDrain::Message(TDrain* this, int, float); // idb
void TDrain::TimerCallback(int, struct TPinballComponent*); // idb
void __thiscall TDrain::Collision(TDrain* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TDrain* __thiscall TDrain::TDrain(TDrain* this, struct TPinballTable* a2, int a3);

void* TDrain::vftable = &TDrain::Message; // weak

#endif //PINBALL_TDRAIN_H
