#include "TTextBoxMessage.h"

//----- (01013AF1) --------------------------------------------------------
TTextBoxMessage* __thiscall TTextBoxMessage::TTextBoxMessage(TTextBoxMessage* this, char* a2, float a3)
{
	TTextBoxMessage* v3; // esi
	char* v4; // edx

	v3 = this;
	*(DWORD*)this = 0;
	*((float*)this + 2) = a3;
	*((DWORD*)this + 3) = time_ticks - (unsigned __int64)(signed __int64)(a3 * -1000.0);
	if (a2)
		* ((DWORD*)this + 1) = memoryallocate(strlen(a2) + 1);
	else
		*((DWORD*)this + 1) = 0;
	v4 = (char*) * ((DWORD*)v3 + 1);
	if (v4)
		strcpy(v4, a2);
	return v3;
}
// 1024F84: using guessed type int time_ticks;

//----- (01013B60) --------------------------------------------------------
double __thiscall TTextBoxMessage::TimeLeft(TTextBoxMessage* this)
{
	return (double)(*((DWORD*)this + 3) - time_ticks) * 0.001;
}
// 1024F84: using guessed type int time_ticks;

//----- (01013B82) --------------------------------------------------------
void __thiscall TTextBoxMessage::Refresh(TTextBoxMessage* this, float a2)
{
	*((float*)this + 2) = a2;
	*((DWORD*)this + 3) = time_ticks - (unsigned __int64)(signed __int64)(a2 * -1000.0);
}
// 1024F84: using guessed type int time_ticks;

//----- (01014115) --------------------------------------------------------
TTextBoxMessage* __thiscall TTextBoxMessage::destroy(TTextBoxMessage* this, char a2)
{
	TTextBoxMessage* v2; // esi

	v2 = this;
	if (*((DWORD*)this + 1))
		memoryfree(*((DWORD*)this + 1));
	if (a2 & 1)
		component_delete((void*)v2);
	return v2;
}
