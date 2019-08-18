//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TWALL_H
#define PINBALL_TWALL_H

/* 102 */
struct TWall;

void TWall::TimerExpired(int, void*); // idb
int __thiscall TWall::Message(TWall* this, int, float); // idb
int __thiscall TWall::get_scoring(TWall* this, int); // idb
void __thiscall TWall::put_scoring(TWall* this, int, int); // idb
void __thiscall TWall::Collision(TWall* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TWall* __thiscall TWall::TWall(TWall* this, struct TPinballTable* a2, int a3);

void* TWall::vftable = &TWall::Message; // weak

#endif //PINBALL_TWALL_H
