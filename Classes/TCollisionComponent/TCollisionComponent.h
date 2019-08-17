//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TCOLLISIONCOMPONENT_H
#define PINBALL_TCOLLISIONCOMPONENT_H

#include "../../pinball.h"

/* 101 */
struct TCollisionComponent;

void __thiscall TCollisionComponent::port_draw(TCollisionComponent* __hidden this); // idb
void __thiscall TCollisionComponent::Collision(TCollisionComponent* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
int __thiscall TCollisionComponent::DefaultCollision(TCollisionComponent* this, struct TBall*, struct vector_type*, struct vector_type*); // idb
TCollisionComponent* __thiscall TCollisionComponent::TCollisionComponent(TCollisionComponent* this, struct TPinballTable* a2, int a3, int a4);
TZmapList* __thiscall TCollisionComponent::~TCollisionComponent(TCollisionComponent* this);

void* TCollisionComponent::`vftable` = &TPinballComponent::Message; // weak

#endif //PINBALL_TCOLLISIONCOMPONENT_H
