//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TDEMO_H
#define PINBALL_TDEMO_H

#include "../../pinball.h"

/* 128 */
struct TDemo;

void __stdcall TDemo::PlungerRelease(int, void*); // idb
void __stdcall TDemo::UnFlipRight(int, void*); // idb
void __stdcall TDemo::UnFlipLeft(int, void*); // idb
void __stdcall TDemo::FlipRight(int, void*); // idb
void __stdcall TDemo::FlipLeft(int, void*); // idb
void __stdcall TDemo::NewGameRestartTimer(int, void*); // idb
void __thiscall TDemo::Collision(TDemo* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
int __thiscall TDemo::Message(TDemo* this, int, float); // idb
TDemo* __thiscall TDemo::TDemo(TDemo* this, struct TPinballTable* a2, int a3);

void* TDemo::`vftable` = &TDemo::Message; // weak

#endif //PINBALL_TDEMO_H
