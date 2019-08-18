//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TTABLELAYER_H
#define PINBALL_TTABLELAYER_H

/* 116 */
struct TTableLayer;

int __thiscall TTableLayer::FieldEffect(TTableLayer* this, struct TBall*, struct vector_type*); // idb
TTableLayer* __thiscall TTableLayer::TTableLayer(TTableLayer* this, struct TPinballTable* a2);
TZmapList* __thiscall TTableLayer::~TTableLayer(TTableLayer* this);
TTableLayer* __thiscall TTableLayer::`scalar deleting destructor`(TTableLayer* this, char a2);

void* TTableLayer::vftable = &TPinballComponent::Message; // weak

#endif //PINBALL_TTABLELAYER_H
