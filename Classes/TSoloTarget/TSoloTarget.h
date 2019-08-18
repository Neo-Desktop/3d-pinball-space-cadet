//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TSOLOTARGET_H
#define PINBALL_TSOLOTARGET_H

/* 107 */
struct TSoloTarget;

void TSoloTarget::TimerExpired(int, void*); // idb
int __thiscall TSoloTarget::Message(TSoloTarget* this, int, float); // idb
int __thiscall TSoloTarget::get_scoring(TSoloTarget* this, int); // idb
void __thiscall TSoloTarget::put_scoring(TSoloTarget* this, int, int); // idb
void __thiscall TSoloTarget::Collision(TSoloTarget* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TSoloTarget* __thiscall TSoloTarget::TSoloTarget(TSoloTarget* this, struct TPinballTable* a2, int a3);

void* TSoloTarget::vftable = &TSoloTarget::Message; // weak

#endif //PINBALL_TSOLOTARGET_H
