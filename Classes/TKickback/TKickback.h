//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TKICKBACK_H
#define PINBALL_TKICKBACK_H

/* 110 */
struct TKickback;

void __stdcall TKickback::TimerExpired(int, struct TPinballComponent*); // idb
int __thiscall TKickback::Message(TKickback* this, int, float); // idb
void __thiscall TKickback::Collision(TKickback* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TKickback* __thiscall TKickback::TKickback(TKickback* this, struct TPinballTable* a2, int a3);

void* TKickback::vftable = &TKickback::Message; // weak

#endif //PINBALL_TKICKBACK_H
