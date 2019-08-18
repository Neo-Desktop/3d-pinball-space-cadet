//
// Created by neo on 2019-08-15.
//
#include "../../pinball.h"

#ifndef PINBALL_OBJLIST_CLASS_H
#define PINBALL_OBJLIST_CLASS_H

/* 123 */
struct objlist_class;
objlist_class* __thiscall objlist_class::objlist_class(objlist_class* this, int a2, int a3);
void __thiscall objlist_class::Grow(objlist_class* __hidden this); // idb
void __thiscall objlist_class::Add(objlist_class* this, void*); // idb

#endif //PINBALL_OBJLIST_CLASS_H
