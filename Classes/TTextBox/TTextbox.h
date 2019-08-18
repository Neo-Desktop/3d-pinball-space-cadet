//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TTEXTBOX_H
#define PINBALL_TTEXTBOX_H

/* 119 */
struct TTextBox;

TTextBox* __thiscall TTextBox::TTextBox(TTextBox* this, struct TPinballTable* a2, int a3);
// void TTextBox::Clear(TTextBox *this, int a2);
// void TTextBox::TimerExpired(int a1, int a2, TTextBox *a3);
TZmapList* __thiscall TTextBox::~TTextBox(TTextBox* this);
// void TTextBox::Draw(TTextBox *this, int a2);
// void TTextBox::Display(TTextBox *this, int a2, char *a3, float a4);
TTextBox* __thiscall TTextBox::destroy(TTextBox *this, char a2);
int TTextBox::Message(int a2, float a3);

void* TTextBox::vftable = &TTextBox::Message; // weak

#endif //PINBALL_TTEXTBOX_H
