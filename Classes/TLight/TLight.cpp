//
// Created by neo on 2019-08-15.
//

#include "TLight.h"

//----- (010099A8) --------------------------------------------------------
void __thiscall TLight::Reset(TLight *this)
{
    TLight *v1; // esi
    _DWORD *v2; // ST00_4
    int v3; // eax

    v1 = this;
    if ( *(_DWORD *)((char *)this + 110) )
        timer_kill(*(_DWORD *)((char *)this + 110));
    if ( *(_DWORD *)((char *)v1 + 114) )
        timer_kill(*(_DWORD *)((char *)v1 + 114));
    if ( *(_DWORD *)((char *)v1 + 82) )
        flasher_stop((TLight *)((char *)v1 + 42), -1);
    v2 = *(_DWORD **)((char *)v1 + 26);
    *(float *)((char *)v1 + 122) = 1.0;
    *(_DWORD *)((char *)v1 + 110) = 0;
    *(_DWORD *)((char *)v1 + 114) = 0;
    *(_DWORD *)((char *)v1 + 78) = 0;
    *(_DWORD *)((char *)v1 + 98) = 0;
    *(_DWORD *)((char *)v1 + 86) = 0;
    *(_DWORD *)((char *)v1 + 90) = 0;
    *(_DWORD *)((char *)v1 + 82) = 0;
    *(_DWORD *)((char *)v1 + 94) = 0;
    render_sprite_set_bitmap(v2, 0);
    *(_DWORD *)((char *)v1 + 42) = *(_DWORD *)((char *)v1 + 26);
    v3 = *(_DWORD *)((char *)v1 + 34);
    *(_DWORD *)((char *)v1 + 46) = 0;
    if ( v3 )
        *(_DWORD *)((char *)v1 + 50) = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8);
    *(_DWORD *)((char *)v1 + 58) = 0;
    *(_DWORD *)((char *)v1 + 54) = 0;
    *(_DWORD *)((char *)v1 + 6) = 0;
}

//----- (01009A2A) --------------------------------------------------------
void __stdcall TLight::TimerExpired(int a1, void *a2)
{
    bool v2; // zf
    void (__thiscall **v3)(void *, signed int, _DWORD); // eax

    if ( *(_DWORD *)((char *)a2 + 82) )
        flasher_stop((struct flasher_type *)((char *)a2 + 42), -1);
    render_sprite_set_bitmap(
            *(_DWORD **)((char *)a2 + 26),
            *(_DWORD *)((char *)a2 + 4 * *(_DWORD *)((char *)a2 + 78) + 46));
    v2 = *(_DWORD *)((char *)a2 + 94) == 0;
    *(_DWORD *)((char *)a2 + 86) = 0;
    *(_DWORD *)((char *)a2 + 90) = 0;
    *(_DWORD *)((char *)a2 + 82) = 0;
    *(_DWORD *)((char *)a2 + 110) = 0;
    if ( !v2 )
    {
        v3 = *(void (__thiscall ***)(void *, signed int, _DWORD))a2;
        *(_DWORD *)((char *)a2 + 94) = 0;
        (*v3)(a2, 20, 0.0);
    }
    if ( *(_DWORD *)((char *)a2 + 18) )
        control_handler(60, (struct TPinballComponent *)a2);
}

//----- (01009A8F) --------------------------------------------------------
void __thiscall TLight::schedule_timeout(TLight *this, float a2)
{
TLight *v2; // esi

v2 = this;
*(_DWORD *)((char *)this + 62) = *(_DWORD *)((char *)this + 102);
*(_DWORD *)((char *)this + 66) = *(_DWORD *)((char *)this + 106);
if ( *(_DWORD *)((char *)this + 110) )
timer_kill(*(_DWORD *)((char *)this + 110));
*(_DWORD *)((char *)v2 + 110) = 0;
if ( a2 > 0.0 )
*(_DWORD *)((char *)v2 + 110) = timer_set(a2, (int)v2, (int)TLight::TimerExpired);
}

//----- (01009AE3) --------------------------------------------------------
int __thiscall TLight::Message(TLight *this, int a2, float a3)
{
TLight *v3; // esi
bool v4; // zf
int v5; // ST04_4
float v6; // ST04_4
signed __int64 v7; // rax
int v8; // ecx
signed int v9; // edx
signed int v10; // edi
int v11; // eax
int v12; // eax
int v13; // eax
float v15; // ST04_4
float v16; // ST04_4
signed __int64 v17; // rax
char *v18; // eax
char *v19; // eax
float v20; // ST04_4
int v21; // ecx
_DWORD *v22; // eax
int v23; // [esp+1Ch] [ebp+Ch]

v3 = this;
if ( a2 > 1020 )
{
if ( a2 == 1024 )
{
(*(void (__thiscall **)(TLight *))(*(_DWORD *)this + 20))(this);
v21 = 0;
if ( *(_DWORD *)(*(_DWORD *)((char *)v3 + 30) + 214) > 0 )
{
v22 = (_DWORD *)((char *)v3 + 146);
do
{
*(v22 - 3) = *(_DWORD *)((char *)v3 + 82);
*v22 = *(_DWORD *)((char *)v3 + 98);
*(v22 - 4) = *(_DWORD *)((char *)v3 + 78);
*(v22 - 5) = *(_DWORD *)((char *)v3 + 6);
++v21;
v22 += 6;
}
while ( v21 < *(_DWORD *)(*(_DWORD *)((char *)v3 + 30) + 214) );
}
}
}
else if ( a2 == 1020 )
{
v18 = (char *)this + 24 * *(_DWORD *)(*(_DWORD *)((char *)this + 30) + 218);
*(_DWORD *)(v18 + 134) = *(_DWORD *)((char *)this + 82);
*(_DWORD *)(v18 + 146) = *(_DWORD *)((char *)this + 98);
*(_DWORD *)(v18 + 130) = *(_DWORD *)((char *)this + 78);
*(_DWORD *)(v18 + 126) = *(_DWORD *)((char *)this + 6);
(*(void (__thiscall **)(TLight *))(*(_DWORD *)this + 20))(this);
v19 = (char *)v3 + 24 * (unsigned __int64)(signed __int64)_floor(a3);
*(_DWORD *)((char *)v3 + 82) = *(_DWORD *)(v19 + 134);
*(_DWORD *)((char *)v3 + 98) = *(_DWORD *)(v19 + 146);
*(_DWORD *)((char *)v3 + 78) = *(_DWORD *)(v19 + 130);
*(_DWORD *)((char *)v3 + 6) = *(_DWORD *)(v19 + 126);
if ( *(_DWORD *)((char *)v3 + 98) )
{
v20 = (double)*(signed int *)((char *)v3 + 98);
TLight::Message(v3, 11, v20);
}
if ( *(_DWORD *)((char *)v3 + 78) )
TLight::Message(v3, 1, 0.0);
if ( *(_DWORD *)((char *)v3 + 82) )
TLight::Message(v3, 4, 0.0);
}
else
{
switch ( a2 )
{
case 0:
v4 = *(_DWORD *)((char *)this + 82) == 0;
*(_DWORD *)((char *)this + 78) = 0;
if ( v4 && !*(_DWORD *)((char *)this + 86) && !*(_DWORD *)((char *)this + 90) )
render_sprite_set_bitmap(*(_DWORD **)((char *)this + 26), *(_DWORD *)((char *)this + 46));
return 0;
case 1:
v4 = *(_DWORD *)((char *)this + 82) == 0;
*(_DWORD *)((char *)this + 78) = 1;
if ( v4 && !*(_DWORD *)((char *)this + 86) && !*(_DWORD *)((char *)this + 90) )
render_sprite_set_bitmap(*(_DWORD **)((char *)this + 26), *(_DWORD *)((char *)this + 50));
return 0;
case 2:
return *(_DWORD *)((char *)v3 + 78);
case 3:
return *(_DWORD *)((char *)this + 82);
case 4:
TLight::schedule_timeout(this, 0.0);
if ( !*(_DWORD *)((char *)v3 + 82) || !*(_DWORD *)((char *)v3 + 70) )
{
v5 = *(_DWORD *)((char *)v3 + 78);
*(_DWORD *)((char *)v3 + 82) = 1;
*(_DWORD *)((char *)v3 + 90) = 0;
*(_DWORD *)((char *)v3 + 86) = 0;
*(_DWORD *)((char *)v3 + 94) = 0;
flasher_start((TLight *)((char *)v3 + 42), v5);
}
return 0;
case 5:
*(float *)((char *)this + 62) = a3 * *(float *)((char *)this + 102);
*(float *)((char *)this + 66) = a3 * *(float *)((char *)this + 106);
return 0;
case 6:
*(_DWORD *)((char *)this + 62) = *(_DWORD *)((char *)this + 102);
*(_DWORD *)((char *)this + 66) = *(_DWORD *)((char *)this + 106);
return 0;
case 7:
if ( !*(_DWORD *)((char *)this + 82) )
flasher_start((TLight *)((char *)this + 42), *(_DWORD *)((char *)this + 78));
*(_DWORD *)((char *)v3 + 82) = 1;
*(_DWORD *)((char *)v3 + 90) = 0;
*(_DWORD *)((char *)v3 + 94) = 0;
goto LABEL_28;
case 8:
if ( !*(_DWORD *)((char *)this + 86) )
{
if ( *(_DWORD *)((char *)this + 82) )
{
flasher_stop((TLight *)((char *)this + 42), 0);
*(_DWORD *)((char *)v3 + 82) = 0;
}
else
{
render_sprite_set_bitmap(*(_DWORD **)((char *)this + 26), *(_DWORD *)((char *)this + 46));
}
*(_DWORD *)((char *)v3 + 86) = 1;
*(_DWORD *)((char *)v3 + 90) = 0;
}
goto LABEL_29;
case 9:
if ( !*(_DWORD *)((char *)this + 90) )
{
if ( *(_DWORD *)((char *)this + 82) )
{
flasher_stop((TLight *)((char *)this + 42), 1);
*(_DWORD *)((char *)v3 + 82) = 0;
}
else
{
render_sprite_set_bitmap(*(_DWORD **)((char *)this + 26), *(_DWORD *)((char *)this + 50));
}
*(_DWORD *)((char *)v3 + 90) = 1;
LABEL_28:
*(_DWORD *)((char *)v3 + 86) = 0;
}
LABEL_29:
        TLight::schedule_timeout(v3, a3);
return 0;
case 11:
v7 = (signed __int64)_floor(a3);
v8 = *(_DWORD *)((char *)v3 + 34);
*(_DWORD *)((char *)v3 + 98) = v7;
v9 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4);
if ( (signed int)v7 > v9 )
*(_DWORD *)((char *)v3 + 98) = v9;
v10 = 0;
if ( *(_DWORD *)((char *)v3 + 98) < 0 )
*(_DWORD *)((char *)v3 + 98) = 0;
v4 = *(_DWORD *)((char *)v3 + 82) == 0;
v11 = *(_DWORD *)((char *)v3 + 98);
*(_DWORD *)((char *)v3 + 46) = 0;
*(_DWORD *)((char *)v3 + 50) = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v11 + 8);
if ( v4 )
{
if ( !*(_DWORD *)((char *)v3 + 86) )
{
if ( *(_DWORD *)((char *)v3 + 90) )
v10 = 1;
else
v10 = *(_DWORD *)((char *)v3 + 78);
}
}
else
{
v10 = *(_DWORD *)((char *)v3 + 74);
}
render_sprite_set_bitmap(*(_DWORD **)((char *)v3 + 26), *(_DWORD *)((char *)v3 + 4 * v10 + 46));
return 0;
case 12:
v23 = *(_DWORD *)((char *)this + 98) + 1;
if ( v23 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)this + 34) + 4) + 4) )
v23 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)((char *)this + 34) + 4) + 4);
goto LABEL_32;
case 13:
v23 = *(_DWORD *)((char *)this + 98) - 1;
if ( v23 < 0 )
v23 = 0;
LABEL_32:
        v6 = (double)v23;
TLight::Message(this, 11, v6);
return 0;
case 14:
if ( *(_DWORD *)((char *)this + 110) )
timer_kill(*(_DWORD *)((char *)this + 110));
v4 = *(_DWORD *)((char *)v3 + 82) == 0;
*(_DWORD *)((char *)v3 + 110) = 0;
if ( !v4 )
flasher_stop((TLight *)((char *)v3 + 42), -1);
v12 = *(_DWORD *)((char *)v3 + 78);
*(_DWORD *)((char *)v3 + 82) = 0;
*(_DWORD *)((char *)v3 + 86) = 0;
*(_DWORD *)((char *)v3 + 90) = 0;
render_sprite_set_bitmap(*(_DWORD **)((char *)v3 + 26), *(_DWORD *)((char *)v3 + 4 * v12 + 46));
return 0;
case 15:
v13 = *(_DWORD *)((char *)this + 114);
*(_DWORD *)((char *)this + 94) = 0;
if ( v13 )
timer_kill(v13);
*(_DWORD *)((char *)v3 + 114) = 0;
TLight::Message(v3, 1, 0.0);
TLight::Message(v3, 7, a3);
return 0;
case 16:
if ( *(_DWORD *)((char *)this + 114) )
timer_kill(*(_DWORD *)((char *)this + 114));
*(_DWORD *)((char *)v3 + 114) = 0;
TLight::Message(v3, 7, a3);
*(_DWORD *)((char *)v3 + 94) = 1;
return 0;
case 17:
v17 = (signed __int64)_floor(a3);
TLight::Message(v3, v17 != 0, 0.0);
return *(_DWORD *)((char *)v3 + 78);
case 18:
TLight::Message(this, 17, a3);
TLight::Message(v3, 14, 0.0);
return *(_DWORD *)((char *)v3 + 78);
case 19:
TLight::Message(this, 1, 0.0);
goto LABEL_62;
case 20:
TLight::Message(this, 0, 0.0);
LABEL_62:
        TLight::Message(v3, 14, 0.0);
return 0;
case 21:
v15 = (double)(*(_DWORD *)((char *)this + 78) == 0);
TLight::Message(this, 17, v15);
return *(_DWORD *)((char *)v3 + 78);
case 22:
v16 = (double)(*(_DWORD *)((char *)this + 78) == 0);
TLight::Message(this, 18, v16);
return *(_DWORD *)((char *)v3 + 78);
case 23:
*(_DWORD *)((char *)this + 6) = (signed __int64)_floor(a3);
break;
default:
return 0;
}
}
return 0;
}

//----- (0100AD21) --------------------------------------------------------
TLight *__thiscall TLight::TLight(TLight *this, struct TPinballTable *a2, int a3)
{
TLight *v3; // esi
float *v4; // eax
double v5; // st7
float *v6; // eax
double v7; // st7

v3 = this;
TPinballComponent::TPinballComponent(this, a2, a3, 1);
*(_DWORD *)v3 = &TLight::`vftable';
*(_DWORD *)((char *)v3 + 110) = 0;
*(_DWORD *)((char *)v3 + 82) = 0;
*(_DWORD *)((char *)v3 + 114) = 0;
*(_DWORD *)((char *)v3 + 70) = 0;
TLight::Reset(v3);
v4 = (float *)loader_query_float_attribute(a3, 0, 900);
v5 = *v4;
*(float *)((char *)v3 + 62) = *v4;
*(float *)((char *)v3 + 102) = v5;
v6 = (float *)loader_query_float_attribute(a3, 0, 901);
v7 = *v6;
*(float *)((char *)v3 + 66) = *v6;
*(float *)((char *)v3 + 106) = v7;
return v3;
}
// 1001A48: using guessed type void *TLight::`vftable';
