#include "TTextbox.h"

//----- (01014092) --------------------------------------------------------
TTextBox *__thiscall TTextBox::TTextBox(TTextBox *this, struct TPinballTable *a2, int a3)
{
TTextBox *v3; // esi
bool v4; // zf
bool v5; // sf
signed __int16 *v6; // eax
int v7; // ecx
int v8; // ecx

v3 = this;
TPinballComponent::TPinballComponent(this, a2, a3, 1);
v4 = a3 == 0;
v5 = a3 < 0;
*(_DWORD *)v3 = &TTextBox::`vftable`;
*(_DWORD *)((char *)v3 + 42) = 0;
*(_DWORD *)((char *)v3 + 46) = 0;
*(_DWORD *)((char *)v3 + 50) = 0;
*(_DWORD *)((char *)v3 + 54) = 0;
*(_DWORD *)((char *)v3 + 62) = render_background_bitmap;
*(_DWORD *)((char *)v3 + 66) = score_msg_fontp;
*(_DWORD *)((char *)v3 + 70) = 0;
*(_DWORD *)((char *)v3 + 74) = 0;
*(_DWORD *)((char *)v3 + 58) = 0;
if ( !v5 && !v4 )
{
v6 = (signed __int16 *)loader_query_iattribute(a3, 1500, &a2);
v7 = *v6;
++v6;
*(_DWORD *)((char *)v3 + 42) = v7;
v8 = *v6;
++v6;
*(_DWORD *)((char *)v3 + 46) = v8;
*(_DWORD *)((char *)v3 + 50) = *v6;
*(_DWORD *)((char *)v3 + 54) = v6[1];
}
return v3;
}
// 10023B4: using guessed type void *TTextBox::`vftable`;
// 10253C4: using guessed type struct score_msg_font_type *score_msg_fontp;

//----- (01014143) --------------------------------------------------------
void __usercall TTextBox::Clear(TTextBox *this@<ecx>, int a2@<ebx>)
{
TTextBox *v2; // esi
_DWORD *v3; // edx
int v4; // eax
TTextBoxMessage *v5; // ecx
int v6; // edi

v2 = this;
v3 = *(_DWORD **)((char *)this + 62);
if ( v3 )
gdrv_copy_bitmap(
&vscreen,
*(_DWORD *)((char *)this + 50),
*(_DWORD *)((char *)this + 54),
*(_DWORD *)((char *)this + 42),
*(_DWORD *)((char *)this + 46),
v3,
*(_DWORD *)((char *)this + 42),
*(_DWORD *)((char *)this + 46));
else
gdrv_fill_bitmap(
a2,
&vscreen,
*(_DWORD *)((char *)this + 50),
*(_DWORD *)((char *)this + 54),
*(_DWORD *)((char *)this + 42),
*(_DWORD *)((char *)this + 46),
0);
gdrv_blit(
(int)&vscreen,
*(_DWORD *)((char *)v2 + 42),
*(_DWORD *)((char *)v2 + 46),
*(_DWORD *)((char *)v2 + 42) + xDest,
*(_DWORD *)((char *)v2 + 46) + yDest,
*(_DWORD *)((char *)v2 + 50),
*(_DWORD *)((char *)v2 + 54));
v4 = *(_DWORD *)((char *)v2 + 58);
if ( v4 )
{
if ( v4 != -1 )
timer_kill(*(_DWORD *)((char *)v2 + 58));
*(_DWORD *)((char *)v2 + 58) = 0;
}
while ( *(_DWORD *)((char *)v2 + 70) )
{
v5 = *(TTextBoxMessage **)((char *)v2 + 70);
v6 = *(_DWORD *)v5;
if ( v5 )
TTextBoxMessage::`scalar deleting destructor`(v5, 1);
*(_DWORD *)((char *)v2 + 70) = v6;
}
}

//----- (010141E1) --------------------------------------------------------
void __userpurge TTextBox::TimerExpired(int a1@<ebx>, int a2, TTextBox *a3)
{
TTextBoxMessage *v3; // ecx
int v4; // edi

v3 = *(TTextBoxMessage **)((char *)a3 + 70);
*(_DWORD *)((char *)a3 + 58) = 0;
if ( v3 )
{
v4 = *(_DWORD *)v3;
TTextBoxMessage::`scalar deleting destructor`(v3, 1);
*(_DWORD *)((char *)a3 + 70) = v4;
TTextBox::Draw(a3, a1);
control_handler(60, a3);
}
}

//----- (0101421C) --------------------------------------------------------
TZmapList *__thiscall TTextBox::~TTextBox(TTextBox *this)
{
TTextBox *v1; // esi
int v2; // eax
TTextBoxMessage *v3; // ecx
int v4; // edi

v1 = this;
v2 = *(_DWORD *)((char *)this + 58);
*(_DWORD *)this = &TTextBox::`vftable`;
if ( v2 )
{
if ( v2 != -1 )
timer_kill(v2);
*(_DWORD *)((char *)v1 + 58) = 0;
}
if ( *(_DWORD *)((char *)v1 + 70) )
{
do
{
v3 = *(TTextBoxMessage **)((char *)v1 + 70);
v4 = *(_DWORD *)v3;
if ( v3 )
TTextBoxMessage::`scalar deleting destructor`(v3, 1);
*(_DWORD *)((char *)v1 + 70) = v4;
}
while ( v4 );
}
return TPinballComponent::~TPinballComponent(v1);
}
// 10023B4: using guessed type void *TTextBox::`vftable`;

//----- (01014269) --------------------------------------------------------
void __usercall TTextBox::Draw(TTextBox *this@<ecx>, int a2@<ebx>)
{
TTextBox *v2; // esi
_DWORD *v3; // edx
float *v4; // edi
int v5; // ebx
double v6; // st7
int v7; // eax
float v8; // ST14_4
_DWORD *v9; // ecx
_BYTE *v10; // ebx
int v11; // edi
int v12; // eax
int v13; // eax
char *v14; // edx
char v15; // al
int v16; // eax
_DWORD *v17; // edi
int v18; // [esp-10h] [ebp-34h]
int v19; // [esp-Ch] [ebp-30h]
_BYTE *v20; // [esp+18h] [ebp-Ch]
int v21; // [esp+18h] [ebp-Ch]
int i; // [esp+1Ch] [ebp-8h]
_BYTE *v23; // [esp+20h] [ebp-4h]

v2 = this;
v3 = *(_DWORD **)((char *)this + 62);
if ( v3 )
gdrv_copy_bitmap(
&vscreen,
*(_DWORD *)((char *)this + 50),
*(_DWORD *)((char *)this + 54),
*(_DWORD *)((char *)this + 42),
*(_DWORD *)((char *)this + 46),
v3,
*(_DWORD *)((char *)this + 42),
*(_DWORD *)((char *)this + 46));
else
gdrv_fill_bitmap(
a2,
&vscreen,
*(_DWORD *)((char *)this + 50),
*(_DWORD *)((char *)this + 54),
*(_DWORD *)((char *)this + 42),
*(_DWORD *)((char *)this + 46),
0);
while ( *(_DWORD *)((char *)v2 + 70) )
{
v4 = *(float **)((char *)v2 + 70);
if ( v4[2] == -1.0 )
{
v5 = *(_DWORD *)v4;
if ( !*(_DWORD *)v4 )
{
*(_DWORD *)((char *)v2 + 58) = -1;
LABEL_18:
v9 = *(_DWORD **)((char *)v2 + 66);
if ( !v9 )
{
gdrv_blit(
(int)&vscreen,
*(_DWORD *)((char *)v2 + 42),
*(_DWORD *)((char *)v2 + 46),
*(_DWORD *)((char *)v2 + 42) + xDest,
*(_DWORD *)((char *)v2 + 46) + yDest,
*(_DWORD *)((char *)v2 + 50),
*(_DWORD *)((char *)v2 + 54));
grtext_draw_ttext_in_box(
*(LPCSTR *)(*(_DWORD *)((char *)v2 + 70) + 4),
xDest + *(_DWORD *)((char *)v2 + 42),
yDest + *(_DWORD *)((char *)v2 + 46),
*(_DWORD *)((char *)v2 + 50),
*(_DWORD *)((char *)v2 + 54),
255);
return;
}
v10 = *(_BYTE **)(*(_DWORD *)((char *)v2 + 70) + 4);
for ( i = *(_DWORD *)((char *)v2 + 46); ; i += v9[1] )
{
v15 = *v10;
if ( !*v10 || i + v9[1] > *(_DWORD *)((char *)v2 + 46) + *(_DWORD *)((char *)v2 + 54) )
break;
v11 = 0;
v20 = 0;
v23 = v10;
while ( 1 )
{
v16 = v15 & 0x7F;
if ( !v16 || v16 == 10 )
break;
v12 = v9[v16 + 2];
if ( v12 )
{
v13 = *(_DWORD *)(v12 + 12) + *v9 + v11;
if ( v13 > *(_DWORD *)((char *)v2 + 50) )
{
if ( v20 )
v23 = v20;
break;
}
if ( *v23 == 32 )
v20 = v23;
v14 = v23 + 1;
v11 = v13;
++v23;
}
else
{
v14 = v23;
}
v15 = *v14;
}
v21 = *(_DWORD *)((char *)v2 + 42);
while ( v10 < v23 )
{
v17 = (_DWORD *)v9[(*v10++ & 0x7F) + 2];
if ( v17 )
{
v19 = v17[4];
v18 = v17[3];
if ( render_background_bitmap )
gdrv_copy_bitmap_w_transparency(&vscreen, v18, v19, v21, i, v17, 0, 0);
else
gdrv_copy_bitmap(&vscreen, v18, v19, v21, i, v17, 0, 0);
v9 = *(_DWORD **)((char *)v2 + 66);
v21 += v17[3] + *v9;
}
}
while ( (*v10 & 0x7F) == 32 )
++v10;
if ( (*v10 & 0x7F) == 10 )
++v10;
v9 = *(_DWORD **)((char *)v2 + 66);
}
break;
}
}
else
{
v6 = TTextBoxMessage::TimeLeft((TTextBoxMessage *)*(_DWORD *)((char *)v2 + 70));
if ( v6 >= -2.0 )
{
if ( v6 >= 0.25 )
{
v8 = v6;
v7 = timer_set(v8, (int)v2, (int)TTextBox::TimerExpired);
}
else
{
v7 = timer_set(0.25, (int)v2, (int)TTextBox::TimerExpired);
}
*(_DWORD *)((char *)v2 + 58) = v7;
goto LABEL_18;
}
v5 = *(_DWORD *)v4;
}
if ( v4 )
TTextBoxMessage::`scalar deleting destructor`((TTextBoxMessage *)v4, 1);
*(_DWORD *)((char *)v2 + 70) = v5;
}
gdrv_blit(
(int)&vscreen,
*(_DWORD *)((char *)v2 + 42),
*(_DWORD *)((char *)v2 + 46),
*(_DWORD *)((char *)v2 + 42) + xDest,
*(_DWORD *)((char *)v2 + 46) + yDest,
*(_DWORD *)((char *)v2 + 50),
*(_DWORD *)((char *)v2 + 54));
}

//----- (010144B7) --------------------------------------------------------
void __userpurge TTextBox::Display(TTextBox *this@<ecx>, int a2@<ebx>, char *a3, float a4)
{
TTextBox *v4; // esi
const char **v5; // ecx
int v6; // ST08_4
int v7; // eax
int v8; // eax
TTextBoxMessage *v9; // eax
TTextBoxMessage *v10; // eax
bool v11; // zf

v4 = this;
if ( a3 )
{
if ( !*(_DWORD *)((char *)this + 70)
|| (v5 = *(const char ***)((char *)this + 74), v6 = a2, v7 = strcmp(a3, v5[1]), a2 = v6, v7) )
{
if ( *(_DWORD *)((char *)v4 + 58) == -1 )
TTextBox::Clear(v4, a2);
v9 = (TTextBoxMessage *)operator new(0x10u);
if ( v9 )
v10 = TTextBoxMessage::TTextBoxMessage(v9, a3, a4);
else
v10 = 0;
if ( v10 )
{
if ( *((_DWORD *)v10 + 1) )
{
if ( *(_DWORD *)((char *)v4 + 70) )
**(_DWORD **)((char *)v4 + 74) = v10;
else
*(_DWORD *)((char *)v4 + 70) = v10;
v11 = *(_DWORD *)((char *)v4 + 58) == 0;
*(_DWORD *)((char *)v4 + 74) = v10;
if ( v11 )
TTextBox::Draw(v4, a2);
}
else
{
TTextBoxMessage::`scalar deleting destructor`(v10, 1);
}
}
}
else
{
TTextBoxMessage::Refresh((TTextBoxMessage *)v5, a4);
if ( *(_DWORD *)((char *)v4 + 74) == *(_DWORD *)((char *)v4 + 70) )
{
v8 = *(_DWORD *)((char *)v4 + 58);
if ( v8 && v8 != -1 )
timer_kill(*(_DWORD *)((char *)v4 + 58));
if ( a4 == -1.0 )
*(_DWORD *)((char *)v4 + 58) = -1;
else
*(_DWORD *)((char *)v4 + 58) = timer_set(a4, (int)v4, (int)TTextBox::TimerExpired);
}
}
}
}

//----- (010145CF) --------------------------------------------------------
TTextBox *__thiscall TTextBox::`scalar deleting destructor`(TTextBox *this, char a2)
{
TTextBox *v2; // esi

v2 = this;
TTextBox::~TTextBox(this);
if ( a2 & 1 )
operator delete((void *)v2);
return v2;
}

//----- (01019168) --------------------------------------------------------
int __stdcall TTextBox::Message(int a2, float a3)
{
return 0;
}

