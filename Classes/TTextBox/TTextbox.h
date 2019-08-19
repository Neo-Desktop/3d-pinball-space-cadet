//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TTEXTBOX_H
#define PINBALL_TTEXTBOX_H

/* 119 */
struct TTextBox {
    TTextBox* TTextBox::TTextBox(TPinballTable* a2, int a3);
    void TTextBox::Clear(int a2);
    void TTextBox::TimerExpired(int a1, int a2, TTextBox *a3);
    TZmapList* TTextBox::~TTextBox();
    void TTextBox::Draw(int a2);
    void TTextBox::Display(int a2, char *a3, float a4);
    TTextBox* TTextBox::destroy(char a2);
    int TTextBox::Message(int a2, float a3);

    void* TTextBox::vftable = &TTextBox::Message; // weak

};

#endif //PINBALL_TTEXTBOX_H
