//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TLIGHTBARGRAPH_H
#define PINBALL_TLIGHTBARGRAPH_H

/* 94 */
struct TLightBargraph;

TZmapList* __thiscall TLightBargraph::~TLightBargraph(TLightBargraph* this);
void __thiscall TLightBargraph::Reset(TLightBargraph* this); // idb
void __stdcall TLightBargraph::BargraphTimerExpired(int, void*); // idb
int __thiscall TLightBargraph::Message(TLightBargraph* this, int, float); // idb
TLightBargraph* __thiscall TLightBargraph::TLightBargraph(TLightBargraph* this, struct TPinballTable* a2, int a3);
TLightBargraph* __thiscall TLightBargraph::`vector deleting destructor'(TLightBargraph *this, char a2);

void* TLightBargraph::`vftable` = &TLightBargraph::Message; // weak

#endif //PINBALL_TLIGHTBARGRAPH_H
