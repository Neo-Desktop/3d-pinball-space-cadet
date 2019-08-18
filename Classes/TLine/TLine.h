//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TLINE_H
#define PINBALL_TLINE_H

/* 122 */
struct TLine;

TLine* __thiscall TLine::TLine(TLine* this, struct TCollisionComponent* a2, char* a3, unsigned int a4, float a5, float a6, float a7, float a8);
double __thiscall TLine::FindCollisionDistance(TLine* this, struct ray_type* a2);
TLine* __thiscall TLine::TLine(TLine* this, struct TCollisionComponent* a2, char* a3, unsigned int a4, struct vector_type* a5, struct vector_type* a6);
void __thiscall TLine::EdgeCollision(TLine* this, struct TBall*, float); // idb
void __thiscall TLine::Offset(TLine* this, float); // idb
void __thiscall TLine::place_in_grid(TLine* this); // idb

void* TLine::`vftable` = &TLine::EdgeCollision; // weak

#endif //PINBALL_TLINE_H
