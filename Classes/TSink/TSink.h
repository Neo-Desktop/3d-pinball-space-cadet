//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TSINK_H
#define PINBALL_TSINK_H

/* 114 */
struct TSink;

void __stdcall TSink::TimerExpired(int, void*); // idb
int __thiscall TSink::Message(TSink* this, int, float); // idb
int __thiscall TSink::get_scoring(TSink* this, int); // idb
void __thiscall TSink::put_scoring(TSink* this, int, int); // idb
void __thiscall TSink::Collision(TSink* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TSink* __thiscall TSink::TSink(TSink* this, struct TPinballTable* a2, int a3);

void* TSink::`vftable` = &TSink::Message; // weak

#endif //PINBALL_TSINK_H
