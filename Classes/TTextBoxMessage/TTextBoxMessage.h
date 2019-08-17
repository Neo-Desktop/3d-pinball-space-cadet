//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TTEXTBOXMESSAGE_H
#define PINBALL_TTEXTBOXMESSAGE_H

#include "../../pinball.h"

/* 97 */
struct TTextBoxMessage;

TTextBoxMessage* __thiscall TTextBoxMessage::TTextBoxMessage(TTextBoxMessage* this, char* a2, float a3);
double __thiscall TTextBoxMessage::TimeLeft(TTextBoxMessage* this);
void __thiscall TTextBoxMessage::Refresh(TTextBoxMessage* this, float); // idb
TTextBoxMessage* __thiscall TTextBoxMessage::`scalar deleting destructor`(TTextBoxMessage* this, char a2);


#endif //PINBALL_TTEXTBOXMESSAGE_H
