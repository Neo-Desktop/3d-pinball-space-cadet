//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TFLIPPEREDGE_H
#define PINBALL_TFLIPPEREDGE_H

#include "../../pinball.h"

/* 120 */
struct TFlipperEdge;

void __thiscall TFlipperEdge::place_in_grid(TFlipperEdge* this); // idb
double __thiscall TFlipperEdge::flipper_angle(TFlipperEdge* this, float a2);
void __thiscall TFlipperEdge::build_edges_in_motion(TFlipperEdge* __hidden this); // idb
void __thiscall TFlipperEdge::set_control_points(TFlipperEdge* this, float); // idb
int __thiscall TFlipperEdge::is_ball_inside(TFlipperEdge* this, float, float); // idb
double __thiscall TFlipperEdge::FindCollisionDistance(TFlipperEdge* this, struct ray_type* a2);
void __thiscall TFlipperEdge::EdgeCollision(TFlipperEdge* this, struct TBall*, float); // idb
void __thiscall TFlipperEdge::SetMotion(TFlipperEdge* this, int, float); // idb
void __thiscall TFlipperEdge::port_draw(TFlipperEdge* this); // idb
TFlipperEdge* __thiscall TFlipperEdge::TFlipperEdge(TFlipperEdge* this, struct TCollisionComponent* a2, char* a3, unsigned int a4, struct TPinballTable* a5, struct vector_type* a6, struct vector_type* a7, struct vector_type* a8, float a9, float a10, float a11, float a12, float a13);

void* TFlipperEdge::`vftable` = &TFlipperEdge::EdgeCollision; // weak

#endif //PINBALL_TFLIPPEREDGE_H
