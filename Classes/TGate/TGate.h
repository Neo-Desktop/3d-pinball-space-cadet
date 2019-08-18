//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TGATE_H
#define PINBALL_TGATE_H

/* 133 */
struct TGate;

int __thiscall TGate::Message(TGate* this, int, float); // idb
TGate* __thiscall TGate::TGate(TGate* this, struct TPinballTable* a2, int a3);

void* TGate::vftable = &TGate::Message; // weak

#endif //PINBALL_TGATE_H
