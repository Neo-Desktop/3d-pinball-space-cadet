//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TCIRCLE_H
#define PINBALL_TCIRCLE_H

/* 99 */
struct TCircle;

TCircle* __thiscall TCircle::TCircle(TCircle* this, struct TCollisionComponent* a2, char* a3, unsigned int a4, struct vector_type* a5, float a6);
double __thiscall TCircle::FindCollisionDistance(TCircle* this, struct ray_type* a2);
void __thiscall TCircle::place_in_grid(TCircle* this); // idb
void __thiscall TCircle::EdgeCollision(TCircle* this, struct TBall*, float); // idb

void* TCircle::vftable = &TCircle::EdgeCollision; // weak

#endif //PINBALL_TCIRCLE_H
