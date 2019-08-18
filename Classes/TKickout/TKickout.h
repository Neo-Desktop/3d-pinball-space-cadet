//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TKICKOUT_H
#define PINBALL_TKICKOUT_H

/* 111 */
struct TKickout;

void __thiscall TKickout::Collision(TKickout* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
void __stdcall TKickout::ResetTimerExpired(int, void*); // idb
void __stdcall TKickout::TimerExpired(int, void*); // idb
int __thiscall TKickout::FieldEffect(TKickout* this, struct TBall*, struct vector_type*); // idb
int __thiscall TKickout::Message(TKickout* this, int, float); // idb
int __thiscall TKickout::get_scoring(TKickout* this, int); // idb
void __thiscall TKickout::put_scoring(TKickout* this, int, int); // idb
TKickout* __thiscall TKickout::TKickout(TKickout* this, struct TPinballTable* a2, int a3, struct vector_type* a4);

void* TKickout::`vftable` = &TKickout::Message; // weak

#endif //PINBALL_TKICKOUT_H
