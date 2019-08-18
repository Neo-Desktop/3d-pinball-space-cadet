//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TTEXTBOX_H
#define PINBALL_TTEXTBOX_H

/* 119 */
struct TTextBox;

TTextBox* __thiscall TTextBox::TTextBox(TTextBox* this, struct TPinballTable* a2, int a3);
// void __usercall TTextBox::Clear(TTextBox *this@<ecx>, int a2@<ebx>);
// void __userpurge TTextBox::TimerExpired(int a1@<ebx>, int a2, TTextBox *a3);
TZmapList* __thiscall TTextBox::~TTextBox(TTextBox* this);
// void __usercall TTextBox::Draw(TTextBox *this@<ecx>, int a2@<ebx>);
// void __userpurge TTextBox::Display(TTextBox *this@<ecx>, int a2@<ebx>, char *a3, float a4);
TTextBox* __thiscall TTextBox::`scalar deleting destructor`(TTextBox *this, char a2);
int __stdcall TTextBox::Message(int a2, float a3);

void* TTextBox::vftable = &TTextBox::Message; // weak

#endif //PINBALL_TTEXTBOX_H
