//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TTRIPWIRE_H
#define PINBALL_TTRIPWIRE_H

/* 131 */
struct TTripwire;

void __thiscall TTripwire::Collision(TTripwire* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TTripwire* __thiscall TTripwire::TTripwire(TTripwire* this, struct TPinballTable* a2, int a3);

void* TTripwire::`vftable` = &TRollover::Message; // weak

#endif //PINBALL_TTRIPWIRE_H
