//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TONEWAY_H
#define PINBALL_TONEWAY_H

/* 103 */
struct TOneway;

int __thiscall TOneway::get_scoring(TOneway* this, int); // idb
void __thiscall TOneway::put_scoring(TOneway* this, int, int); // idb
void __thiscall TOneway::Collision(TOneway* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TOneway* __thiscall TOneway::TOneway(TOneway* this, struct TPinballTable* a2, int a3);
TOneway* __thiscall TOneway::`scalar deleting destructor`(TOneway* this, char a2);

void* TOneway::vftable = &TPinballComponent::Message; // weak

#endif //PINBALL_TONEWAY_H
