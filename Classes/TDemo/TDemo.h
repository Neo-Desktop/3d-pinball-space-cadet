//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TDEMO_H
#define PINBALL_TDEMO_H

/* 128 */
struct TDemo;

void TDemo::PlungerRelease(int, void*); // idb
void TDemo::UnFlipRight(int, void*); // idb
void TDemo::UnFlipLeft(int, void*); // idb
void TDemo::FlipRight(int, void*); // idb
void TDemo::FlipLeft(int, void*); // idb
void TDemo::NewGameRestartTimer(int, void*); // idb
void __thiscall TDemo::Collision(TDemo* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
int __thiscall TDemo::Message(TDemo* this, int, float); // idb
TDemo* __thiscall TDemo::TDemo(TDemo* this, struct TPinballTable* a2, int a3);

void* TDemo::vftable = &TDemo::Message; // weak

#endif //PINBALL_TDEMO_H
