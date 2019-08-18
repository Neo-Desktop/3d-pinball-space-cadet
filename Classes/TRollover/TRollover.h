//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TROLLOVER_H
#define PINBALL_TROLLOVER_H

/* 108 */
struct TRollover;

void __stdcall TRollover::TimerExpired(int, void*); // idb
int __thiscall TRollover::Message(TRollover* this, int, float); // idb
int __thiscall TRollover::get_scoring(TRollover* this, int); // idb
void __thiscall TRollover::put_scoring(TRollover* this, int, int); // idb
void __thiscall TRollover::build_walls(TRollover* this, int); // idb
void __thiscall TRollover::Collision(TRollover* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TRollover* __thiscall TRollover::TRollover(TRollover* this, struct TPinballTable* a2, int a3, int a4);
TRollover* __thiscall TRollover::TRollover(TRollover* this, struct TPinballTable* a2, int a3);

void* TRollover::vftable = &TRollover::Message; // weak

#endif //PINBALL_TROLLOVER_H
