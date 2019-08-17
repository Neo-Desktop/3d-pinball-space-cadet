//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TPOPUPTARGET_H
#define PINBALL_TPOPUPTARGET_H

#include "../../pinball.h"

/* 106 */
struct TPopupTarget;

void __stdcall TPopupTarget::TimerExpired(int, void*); // idb
int __thiscall TPopupTarget::Message(TPopupTarget* this, int, float); // idb
int __thiscall TPopupTarget::get_scoring(TPopupTarget* this, int); // idb
void __thiscall TPopupTarget::put_scoring(TPopupTarget* this, int, int); // idb
void __thiscall TPopupTarget::Collision(TPopupTarget* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TPopupTarget* __thiscall TPopupTarget::TPopupTarget(TPopupTarget* this, struct TPinballTable* a2, int a3);

void* TPopupTarget::`vftable` = &TPopupTarget::Message; // weak

#endif //PINBALL_TPOPUPTARGET_H
