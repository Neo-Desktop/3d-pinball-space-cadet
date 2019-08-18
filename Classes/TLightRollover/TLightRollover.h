//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TLIGHTROLLOVER_H
#define PINBALL_TLIGHTROLLOVER_H

/* 109 */
struct TLightRollover;

void TLightRollover::delay_expired(int, void*); // idb
void __thiscall TLightRollover::Collision(TLightRollover* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
int __thiscall TLightRollover::Message(TLightRollover* this, int, float); // idb
TLightRollover* __thiscall TLightRollover::TLightRollover(TLightRollover* this, struct TPinballTable* a2, int a3);

void* TLightRollover::vftable = &TLightRollover::Message; // weak

#endif //PINBALL_TLIGHTROLLOVER_H
