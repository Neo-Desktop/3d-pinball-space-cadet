//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TRAMP_H
#define PINBALL_TRAMP_H

#include "../../pinball.h"

/* 113 */
struct TRamp;

int __thiscall TRamp::get_scoring(TRamp* this, int); // idb
void __thiscall TRamp::put_scoring(TRamp* this, int, int); // idb
void __thiscall TRamp::Collision(TRamp* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
int __thiscall TRamp::FieldEffect(TRamp* this, struct TBall*, struct vector_type*); // idb
TRamp* __thiscall TRamp::TRamp(TRamp* this, struct TPinballTable* a2, void* a3);

void* TRamp::`vftable` = &TPinballComponent::Message; // weak

#endif //PINBALL_TRAMP_H
