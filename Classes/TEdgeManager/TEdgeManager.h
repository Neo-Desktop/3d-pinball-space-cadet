//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TEDGEMANAGER_H
#define PINBALL_TEDGEMANAGER_H

/* 96 */
struct TEdgeManager;

signed __int64 __thiscall TEdgeManager::box_x(TEdgeManager* this, float a2);
signed __int64 __thiscall TEdgeManager::box_y(TEdgeManager* this, float a2);
int __thiscall TEdgeManager::increment_box_x(TEdgeManager* this, int); // idb
int __thiscall TEdgeManager::increment_box_y(TEdgeManager* this, int); // idb
void __thiscall TEdgeManager::FieldEffects(TEdgeManager* this, struct TBall*, struct vector_type*); // idb
// int __userpurge TEdgeManager::TestGridBox@<eax>(TEdgeManager *this@<ecx>, double a2@<st0>, int a3, int a4, float *a5, struct TEdgeSegment **a6, struct ray_type *a7, struct TBall *a8, int a9);
double __thiscall TEdgeManager::FindCollisionDistance(TEdgeManager* this, struct ray_type* a2, struct TBall* a3, struct TEdgeSegment** a4);
TEdgeManager* __thiscall TEdgeManager::TEdgeManager(TEdgeManager* this, float a2, float a3, float a4, float a5);
void __thiscall TEdgeManager::add_edge_to_box(TEdgeManager* this, int, int, struct TEdgeSegment*); // idb
void __thiscall TEdgeManager::add_field_to_box(TEdgeManager* this, int, int, struct field_effect_type*); // idb
TEdgeBox* __thiscall TEdgeManager::~TEdgeManager(TEdgeManager* this);
TEdgeManager* __thiscall TEdgeManager::`scalar deleting destructor`(TEdgeManager* this, char a2);

#endif //PINBALL_TEDGEMANAGER_H
