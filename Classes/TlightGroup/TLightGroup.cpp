//
// Created by neo on 2019-08-15.
//

#include "TLightGroup.h"

//----- (01009FD1) --------------------------------------------------------
TZmapList *__thiscall TLightGroup::~TLightGroup(TLightGroup *this)
{
    TLightGroup *v1; // esi

    v1 = this;
    objlist_destroy(*(_DWORD *)((char *)this + 46));
    return TPinballComponent::~TPinballComponent(v1);
}

//----- (01009FEB) --------------------------------------------------------
void __thiscall TLightGroup::Reset(TLightGroup *this)
{
    TLightGroup *v1; // esi
    int v2; // eax
    int v3; // eax

    v1 = this;
    if ( *(_DWORD *)((char *)this + 70) )
        timer_kill(*(_DWORD *)((char *)this + 70));
    v2 = *(_DWORD *)((char *)v1 + 66);
    *(_DWORD *)((char *)v1 + 70) = 0;
    if ( v2 )
        timer_kill(v2);
    v3 = *(_DWORD *)((char *)v1 + 54);
    *(_DWORD *)((char *)v1 + 66) = 0;
    *(_DWORD *)((char *)v1 + 58) = 0;
    *(_DWORD *)((char *)v1 + 62) = 0;
    *(_DWORD *)((char *)v1 + 50) = v3;
}

//----- (0100A027) --------------------------------------------------------
void __stdcall TLightGroup::TimerExpired(int a1, void *a2)
{
    double v2; // st7
    void (__stdcall **v3)(_DWORD, _DWORD); // eax
    float v4; // ST04_4

    v2 = *(float *)((char *)a2 + 50);
    v3 = *(void (__stdcall ***)(_DWORD, _DWORD))a2;
    *(_DWORD *)((char *)a2 + 70) = 0;
    v4 = v2;
    (*v3)(*(_DWORD *)((char *)a2 + 58), LODWORD(v4));
}

//----- (0100A04A) --------------------------------------------------------
void __thiscall TLightGroup::reschedule_animation(TLightGroup *this, float a2)
{
TLightGroup *v2; // esi

v2 = this;
if ( *(_DWORD *)((char *)this + 70) )
timer_kill(*(_DWORD *)((char *)this + 70));
*(_DWORD *)((char *)v2 + 70) = 0;
if ( a2 > 0.0 )
{
*(float *)((char *)v2 + 50) = a2;
LABEL_7:
*(_DWORD *)((char *)v2 + 70) = timer_set(*(float *)((char *)v2 + 50), (int)v2, (int)TLightGroup::TimerExpired);
return;
}
if ( a2 < 0.0 )
{
*(_DWORD *)((char *)v2 + 50) = *(_DWORD *)((char *)v2 + 54);
goto LABEL_7;
}
*(_DWORD *)((char *)v2 + 58) = 0;
*(_DWORD *)((char *)v2 + 62) = 0;
}

//----- (0100A0B4) --------------------------------------------------------
int __thiscall TLightGroup::next_light_up(TLightGroup *this)
{
    int v1; // ecx
    int v2; // edx
    int result; // eax
    int v4; // ecx

    v1 = *(_DWORD *)((char *)this + 46);
    v2 = *(_DWORD *)(v1 + 4);
    result = 0;
    if ( v2 <= 0 )
        return -1;
    v4 = v1 + 8;
    while ( *(_DWORD *)(*(_DWORD *)v4 + 78) )
    {
        ++result;
        v4 += 4;
        if ( result >= v2 )
            return -1;
    }
    return result;
}

//----- (0100A0DE) --------------------------------------------------------
int __thiscall TLightGroup::next_light_down(TLightGroup *this)
{
    int v1; // ecx
    int result; // eax
    int v3; // ecx

    v1 = *(_DWORD *)((char *)this + 46);
    result = *(_DWORD *)(v1 + 4) - 1;
    if ( result < 0 )
        return -1;
    v3 = v1 + 4 * result + 8;
    while ( !*(_DWORD *)(*(_DWORD *)v3 + 78) )
    {
        --result;
        v3 -= 4;
        if ( result < 0 )
            return -1;
    }
    return result;
}

//----- (0100A104) --------------------------------------------------------
void __thiscall TLightGroup::start_animation(TLightGroup *this)
{
    TLightGroup *v1; // edi
    int v2; // eax
    int v3; // esi
    int v4; // ebx
    int v5; // ecx
    void (__stdcall **v6)(signed int, float); // eax
    float v7; // [esp+0h] [ebp-10h]

    v1 = this;
    v2 = *(_DWORD *)(*(_DWORD *)((char *)this + 46) + 4) - 1;
    if ( v2 >= 0 )
    {
        v3 = 4 * v2 + 8;
        v4 = *(_DWORD *)(*(_DWORD *)((char *)this + 46) + 4);
        do
        {
            v5 = *(_DWORD *)(v3 + *(_DWORD *)((char *)v1 + 46));
            v6 = *(void (__stdcall ***)(signed int, float))v5;
            v7 = 0.0;
            if ( *(_DWORD *)(v5 + 78) )
                (*v6)(9, COERCE_FLOAT(LODWORD(v7)));
            else
                (*v6)(8, COERCE_FLOAT(LODWORD(v7)));
            v3 -= 4;
            --v4;
        }
        while ( v4 );
    }
}

//----- (0100A149) --------------------------------------------------------
void __stdcall TLightGroup::NotifyTimerExpired(int a1, void *a2)
{
    *(_DWORD *)((char *)a2 + 66) = 0;
    control_handler(61, (struct TPinballComponent *)a2);
}

//----- (0100A166) --------------------------------------------------------
int __thiscall TLightGroup::Message(TLightGroup *this, int a2, float a3)
{
int v3; // ebx
TLightGroup *v4; // esi
int v5; // esi
int result; // eax
int v7; // ecx
int v8; // edx
int v9; // ecx
int v10; // eax
int v11; // ecx
int v12; // eax
int v13; // eax
int v14; // ebx
int v15; // ST28_4
int v16; // ebx
int v17; // eax
int v18; // ecx
int v19; // edx
int v20; // eax
int v21; // eax
int v22; // eax
int v23; // ebx
int v24; // ST24_4
bool v25; // zf
int v26; // eax
int v27; // ecx
int j; // ebx
double v29; // st7
int v30; // eax
void (__stdcall ***v31)(int, _DWORD); // ecx
int v32; // eax
int v33; // ecx
signed int v34; // ebx
float v35; // ST10_4
int v36; // eax
int v37; // eax
void (__thiscall ***v38)(_DWORD, signed int, _DWORD); // edi
void (__thiscall **v39)(_DWORD, signed int, _DWORD); // ST24_4
float v40; // ST10_4
int v41; // eax
int v42; // eax
void (__thiscall ***v43)(_DWORD, signed int, _DWORD); // edi
void (__thiscall **v44)(_DWORD, signed int, _DWORD); // ebx
float v45; // ST10_4
int v46; // ecx
int v47; // ebx
int v48; // eax
int v49; // ecx
int v50; // eax
int v51; // eax
int v52; // ecx
signed __int64 v53; // rax
int v54; // ebx
int v55; // ecx
int v56; // ebx
int v57; // eax
int v58; // ecx
int v59; // eax
int v60; // eax
int v61; // ecx
signed __int64 v62; // rax
int v63; // ebx
int v64; // eax
int v65; // ebx
int v66; // eax
int v67; // ebx
int v68; // eax
int v69; // eax
int v70; // ebx
int v71; // ecx
signed __int64 v72; // rax
signed int v73; // ecx
int v74; // ebx
int v75; // edi
int v76; // ebx
int v77; // eax
int v78; // eax
int v79; // edi
int v80; // ecx
_DWORD *v81; // eax
char *v82; // eax
char *v83; // eax
int v84; // [esp+20h] [ebp-14h]
int v85; // [esp+28h] [ebp-Ch]
int v86; // [esp+28h] [ebp-Ch]
int v87; // [esp+28h] [ebp-Ch]
int v88; // [esp+28h] [ebp-Ch]
int v89; // [esp+2Ch] [ebp-8h]
int v90; // [esp+30h] [ebp-4h]
int i; // [esp+30h] [ebp-4h]
int v92; // [esp+30h] [ebp-4h]
signed int v93; // [esp+30h] [ebp-4h]
int v94; // [esp+30h] [ebp-4h]
int v95; // [esp+3Ch] [ebp+8h]
int v96; // [esp+3Ch] [ebp+8h]
int v97; // [esp+3Ch] [ebp+8h]
int v98; // [esp+3Ch] [ebp+8h]
int v99; // [esp+3Ch] [ebp+8h]
int v100; // [esp+3Ch] [ebp+8h]
int v101; // [esp+3Ch] [ebp+8h]
int v102; // [esp+3Ch] [ebp+8h]
int v103; // [esp+40h] [ebp+Ch]
int v104; // [esp+40h] [ebp+Ch]
int v105; // [esp+40h] [ebp+Ch]

v3 = a2;
v4 = this;
if ( a2 > 1009 )
{
if ( a2 != 1011 )
{
if ( a2 == 1020 )
{
v82 = (char *)this + 16 * *(_DWORD *)(*(_DWORD *)((char *)this + 30) + 218);
*(_DWORD *)(v82 + 74) = *(_DWORD *)((char *)this + 6);
*(_DWORD *)(v82 + 78) = *(_DWORD *)((char *)this + 58);
*(_DWORD *)(v82 + 82) = *(_DWORD *)((char *)this + 50);
(*(void (**)(void))(*(_DWORD *)this + 20))();
v83 = (char *)v4 + 16 * (unsigned __int64)(signed __int64)_floor(a3);
*(_DWORD *)((char *)v4 + 6) = *(_DWORD *)(v83 + 74);
*(_DWORD *)((char *)v4 + 58) = *(_DWORD *)(v83 + 78);
v25 = *(_DWORD *)((char *)v4 + 6) == 0;
*(_DWORD *)((char *)v4 + 50) = *(_DWORD *)(v83 + 82);
if ( !v25 )
TLightGroup::TimerExpired(0, (void *)v4);
}
else if ( a2 != 1022 )
{
if ( a2 == 1024 )
{
(*(void (**)(void))(*(_DWORD *)this + 20))();
v80 = 0;
if ( *(_DWORD *)(*(_DWORD *)((char *)v4 + 30) + 214) > 0 )
{
v81 = (_DWORD *)((char *)v4 + 78);
do
{
*(v81 - 1) = *(_DWORD *)((char *)v4 + 6);
*v81 = *(_DWORD *)((char *)v4 + 58);
v81[1] = *(_DWORD *)((char *)v4 + 50);
++v80;
v81 += 4;
}
while ( v80 < *(_DWORD *)(*(_DWORD *)((char *)v4 + 30) + 214) );
}
}
else
{
LABEL_145:
        v78 = *(_DWORD *)(*(_DWORD *)((char *)this + 46) + 4) - 1;
if ( v78 >= 0 )
{
v79 = 4 * v78 + 8;
v102 = *(_DWORD *)(*(_DWORD *)((char *)this + 46) + 4);
do
{
(***(void (__stdcall ****)(int, _DWORD))(v79 + *(_DWORD *)((char *)v4 + 46)))(v3, LODWORD(a3));
v79 -= 4;
--v102;
}
while ( v102 );
}
}
}
}
}
else if ( a2 < 1008 )
{
switch ( a2 )
{
case 24:
v10 = *(_DWORD *)((char *)this + 46);
v11 = *(_DWORD *)(v10 + 4);
v12 = *(_DWORD *)(v10 + 4 * v11 + 4);
v90 = v11;
v95 = v12;
if ( *(_DWORD *)(v12 + 82) || *(_DWORD *)(v12 + 90) || *(_DWORD *)(v12 + 86) )
return 0;
if ( *(_DWORD *)((char *)v4 + 58) )
{
TLightGroup::Message(v4, 34, 0.0);
v12 = v95;
v11 = v90;
}
*(_DWORD *)((char *)v4 + 62) = 1;
*(_DWORD *)((char *)v4 + 58) = v3;
v89 = *(_DWORD *)(v12 + 6);
v96 = *(_DWORD *)(v12 + 78);
for ( i = v11 - 1; i > 0; *(_DWORD *)(v14 + 6) = *(_DWORD *)(v15 + 6) )
{
v13 = *(_DWORD *)((char *)v4 + 46);
v14 = *(_DWORD *)(4 * i + v13 + 8);
v15 = *(_DWORD *)(4 * i + v13 + 4);
(**(void (__thiscall ***)(int, bool, _DWORD))v14)(v14, *(_DWORD *)(v15 + 78) != 0, 0.0);
--i;
}
v16 = *(_DWORD *)(*(_DWORD *)((char *)v4 + 46) + 8);
goto LABEL_19;
case 25:
v17 = *(_DWORD *)((char *)this + 46);
v18 = *(_DWORD *)(v17 + 4);
v19 = 4 * *(_DWORD *)(v17 + 4);
v20 = *(_DWORD *)(v19 + v17 + 4);
v92 = v18;
v84 = v19;
if ( *(_DWORD *)(v20 + 82) || *(_DWORD *)(v20 + 90) || *(_DWORD *)(v20 + 86) )
return 0;
if ( *(_DWORD *)((char *)v4 + 58) )
{
TLightGroup::Message(v4, 34, 0.0);
v18 = v92;
}
v21 = *(_DWORD *)(*(_DWORD *)((char *)v4 + 46) + 8);
*(_DWORD *)((char *)v4 + 62) = 1;
*(_DWORD *)((char *)v4 + 58) = a2;
v89 = *(_DWORD *)(v21 + 6);
v96 = *(_DWORD *)(v21 + 78);
if ( v18 - 1 > 0 )
{
v93 = 12;
v85 = v18 - 1;
do
{
v22 = *(_DWORD *)((char *)v4 + 46);
v23 = *(_DWORD *)(v93 + v22 - 4);
v24 = *(_DWORD *)(v93 + v22);
(**(void (__thiscall ***)(int, bool, _DWORD))v23)(v23, *(_DWORD *)(v24 + 78) != 0, 0.0);
v93 += 4;
v25 = v85-- == 1;
*(_DWORD *)(v23 + 6) = *(_DWORD *)(v24 + 6);
}
while ( !v25 );
}
v16 = *(_DWORD *)(v84 + *(_DWORD *)((char *)v4 + 46) + 4);
LABEL_19:
        (**(void (__thiscall ***)(int, bool, _DWORD))v16)(v16, v96 != 0, 0.0);
*(_DWORD *)(v16 + 6) = v89;
goto LABEL_20;
case 26:
if ( *(_DWORD *)((char *)this + 62) || !*(_DWORD *)((char *)this + 58) )
TLightGroup::start_animation(this);
v26 = *(_DWORD *)((char *)v4 + 46);
*(_DWORD *)((char *)v4 + 58) = a2;
*(_DWORD *)((char *)v4 + 62) = 0;
v27 = *(_DWORD *)(v26 + 4);
v97 = *(_DWORD *)(*(_DWORD *)(v26 + 4 * v27 + 4) + 90);
for ( j = v27 - 1; ; --j )
{
v29 = 0.0;
v30 = *(_DWORD *)((char *)v4 + 46);
if ( j <= 0 )
break;
(***(void (__thiscall ****)(_DWORD, int, _DWORD))(v30 + 4 * j + 8))(
*(_DWORD *)(v30 + 4 * j + 8),
(*(_DWORD *)(*(_DWORD *)(v30 + 4 * j + 4) + 90) != 0) + 8,
0.0);
}
v31 = *(void (__stdcall ****)(int, _DWORD))(v30 + 8);
goto LABEL_44;
case 27:
if ( *(_DWORD *)((char *)this + 62) || !*(_DWORD *)((char *)this + 58) )
TLightGroup::start_animation(this);
v32 = *(_DWORD *)((char *)v4 + 46);
*(_DWORD *)((char *)v4 + 58) = a2;
*(_DWORD *)((char *)v4 + 62) = 0;
v33 = *(_DWORD *)(v32 + 4);
v97 = *(_DWORD *)(*(_DWORD *)(v32 + 8) + 90);
v94 = *(_DWORD *)(v32 + 4);
if ( v33 - 1 > 0 )
{
v34 = 12;
v86 = v33 - 1;
do
{
(***(void (__thiscall ****)(_DWORD, int, _DWORD))(v34 + *(_DWORD *)((char *)v4 + 46) - 4))(
*(_DWORD *)(v34 + *(_DWORD *)((char *)v4 + 46) - 4),
(*(_DWORD *)(*(_DWORD *)(v34 + *(_DWORD *)((char *)v4 + 46)) + 90) != 0) + 8,
0.0);
v34 += 4;
--v86;
}
while ( v86 );
}
v29 = 0.0;
v31 = *(void (__stdcall ****)(int, _DWORD))(*(_DWORD *)((char *)v4 + 46) + 4 * v94 + 4);
LABEL_44:
        v35 = v29;
(**v31)((v97 != 0) + 8, LODWORD(v35));
goto LABEL_20;
case 28:
if ( *(_DWORD *)((char *)this + 62) || !*(_DWORD *)((char *)this + 58) )
TLightGroup::start_animation(this);
v36 = *(_DWORD *)((char *)v4 + 46);
*(_DWORD *)((char *)v4 + 58) = a2;
*(_DWORD *)((char *)v4 + 62) = 0;
v37 = *(_DWORD *)(v36 + 4) - 1;
if ( v37 > 0 )
{
v98 = 8;
v87 = v37;
do
{
if ( _rand() % 100 > 70 )
{
v38 = *(void (__thiscall ****)(_DWORD, signed int, _DWORD))(v98 + *(_DWORD *)((char *)v4 + 46));
v39 = *v38;
v40 = (double)_rand() * 0.00003051850947599719 * a3 * 3.0 + 0.1;
(*v39)(v38, 9, LODWORD(v40));
}
v98 += 4;
--v87;
}
while ( v87 );
}
goto LABEL_20;
case 29:
if ( *(_DWORD *)((char *)this + 62) || !*(_DWORD *)((char *)this + 58) )
TLightGroup::start_animation(this);
v41 = *(_DWORD *)((char *)v4 + 46);
*(_DWORD *)((char *)v4 + 58) = a2;
*(_DWORD *)((char *)v4 + 62) = 0;
v42 = *(_DWORD *)(v41 + 4) - 1;
if ( v42 > 0 )
{
v99 = 8;
v88 = v42;
do
{
v43 = *(void (__thiscall ****)(_DWORD, signed int, _DWORD))(v99 + *(_DWORD *)((char *)v4 + 46));
v44 = *v43;
v45 = (double)(_rand() % 100 > 70);
(*v44)(v43, 18, LODWORD(v45));
v99 += 4;
--v88;
}
while ( v88 );
}
LABEL_20:
        TLightGroup::reschedule_animation(v4, a3);
return 0;
case 30:
v46 = *(_DWORD *)((char *)this + 46);
v47 = 0;
v48 = *(_DWORD *)(v46 + 4) - 1;
if ( v48 < 0 )
return 0;
v49 = v46 + 4 * v48 + 8;
v50 = v48 + 1;
do
{
if ( !*(_DWORD *)(*(_DWORD *)v49 + 78) )
++v47;
v49 -= 4;
--v50;
}
while ( v50 );
if ( !v47 )
return 0;
v51 = _rand();
v52 = *(_DWORD *)((char *)v4 + 46);
HIDWORD(v53) = v51 % v47;
LODWORD(v53) = *(_DWORD *)(v52 + 4) - 1;
if ( (signed int)v53 < 0 )
goto LABEL_74;
v103 = v52 + 4 * v53 + 8;
while ( 1 )
{
if ( !*(_DWORD *)(*(_DWORD *)v103 + 78) )
{
v54 = HIDWORD(v53)--;
if ( !v54 )
break;
}
v103 -= 4;
LODWORD(v53) = v53 - 1;
if ( (signed int)v53 < 0 )
goto LABEL_74;
}
LABEL_73:
        (***(void (__fastcall ****)(_DWORD, _DWORD, signed int, _DWORD))(v52 + 4 * v53 + 8))(
*(_DWORD *)(v52 + 4 * v53 + 8),
HIDWORD(v53),
1,
0.0);
goto LABEL_74;
case 31:
v55 = *(_DWORD *)((char *)this + 46);
v56 = 0;
v57 = *(_DWORD *)(v55 + 4) - 1;
if ( v57 < 0 )
return 0;
v58 = v55 + 4 * v57 + 8;
v59 = v57 + 1;
do
{
if ( *(_DWORD *)(*(_DWORD *)v58 + 78) )
++v56;
v58 -= 4;
--v59;
}
while ( v59 );
if ( !v56 )
return 0;
v60 = _rand();
v61 = *(_DWORD *)((char *)v4 + 46);
HIDWORD(v62) = v60 % v56;
LODWORD(v62) = *(_DWORD *)(v61 + 4) - 1;
if ( (signed int)v62 < 0 )
goto LABEL_74;
v104 = v61 + 4 * v62 + 8;
break;
case 32:
v64 = TLightGroup::next_light_up(this);
if ( v64 < 0 )
return 0;
(***(void (__stdcall ****)(signed int, _DWORD))(*(_DWORD *)((char *)v4 + 46) + 4 * v64 + 8))(1, 0.0);
goto LABEL_90;
case 33:
v66 = TLightGroup::next_light_down(this);
if ( v66 < 0 )
return 0;
(***(void (__stdcall ****)(_DWORD, _DWORD))(*(_DWORD *)((char *)v4 + 46) + 4 * v66 + 8))(0, 0.0);
LABEL_90:
if ( *(_DWORD *)((char *)v4 + 58) )
TLightGroup::start_animation(v4);
return 1;
case 34:
if ( *(_DWORD *)((char *)this + 70) )
timer_kill(*(_DWORD *)((char *)this + 70));
v68 = *(_DWORD *)((char *)v4 + 58);
*(_DWORD *)((char *)v4 + 70) = 0;
if ( v68 == 26 || v68 == 27 || v68 == 28 )
TLightGroup::Message(v4, 14, 0.0);
*(_DWORD *)((char *)v4 + 58) = 0;
*(_DWORD *)((char *)v4 + 62) = 0;
return 0;
case 35:
v53 = (signed __int64)_floor(a3);
v52 = *(_DWORD *)((char *)v4 + 46);
if ( (signed int)v53 < *(_DWORD *)(v52 + 4) && (signed int)v53 >= 0 )
goto LABEL_73;
return 0;
case 36:
v62 = (signed __int64)_floor(a3);
v61 = *(_DWORD *)((char *)v4 + 46);
if ( (signed int)v62 < *(_DWORD *)(v61 + 4) && (signed int)v62 >= 0 )
goto LABEL_117;
return 0;
case 37:
v5 = *(_DWORD *)((char *)this + 46);
result = 0;
v7 = *(_DWORD *)(v5 + 4) - 1;
if ( v7 >= 0 )
{
v8 = v5 + 4 * v7 + 8;
v9 = *(_DWORD *)(v5 + 4);
do
{
if ( *(_DWORD *)(*(_DWORD *)v8 + 78) )
++result;
v8 -= 4;
--v9;
}
while ( v9 );
}
return result;
case 38:
return *(_DWORD *)(*(_DWORD *)((char *)this + 46) + 4);
case 39:
return *(_DWORD *)((char *)this + 58);
case 40:
return *(_DWORD *)((char *)this + 62);
case 41:
v65 = TLightGroup::next_light_up(this);
if ( v65 < 0 )
return 0;
if ( *(_DWORD *)((char *)v4 + 58) || *(_DWORD *)((char *)v4 + 62) )
TLightGroup::Message(v4, 34, 0.0);
(***(void (__stdcall ****)(signed int, _DWORD))(*(_DWORD *)((char *)v4 + 46) + 4 * v65 + 8))(15, LODWORD(a3));
return 1;
case 42:
v67 = TLightGroup::next_light_down(this);
if ( v67 < 0 )
return 0;
if ( *(_DWORD *)((char *)v4 + 58) || *(_DWORD *)((char *)v4 + 62) )
TLightGroup::Message(v4, 34, 0.0);
(***(void (__stdcall ****)(signed int, _DWORD))(*(_DWORD *)((char *)v4 + 46) + 4 * v67 + 8))(16, LODWORD(a3));
return 1;
case 43:
if ( *(_DWORD *)((char *)this + 66) )
timer_kill(*(_DWORD *)((char *)this + 66));
*(_DWORD *)((char *)v4 + 66) = 0;
if ( a3 > 0.0 )
*(_DWORD *)((char *)v4 + 66) = timer_set(a3, (int)v4, (int)TLightGroup::NotifyTimerExpired);
return 0;
case 44:
v69 = *(_DWORD *)(*(_DWORD *)((char *)this + 46) + 4) - 1;
if ( v69 >= 0 )
{
v70 = 4 * v69 + 8;
v100 = *(_DWORD *)(*(_DWORD *)((char *)this + 46) + 4);
do
{
v71 = *(_DWORD *)(v70 + *(_DWORD *)((char *)v4 + 46));
if ( *(_DWORD *)(v71 + 78) )
{
(**(void (__stdcall ***)(_DWORD, _DWORD))v71)(0, 0.0);
(***(void (__stdcall ****)(signed int, _DWORD))(v70 + *(_DWORD *)((char *)v4 + 46)))(16, LODWORD(a3));
}
v70 -= 4;
--v100;
}
while ( v100 );
}
return 0;
case 45:
control_handler(a2, this);
v72 = (signed __int64)_floor(a3);
if ( (signed int)v72 >= 0 )
{
v73 = *(_DWORD *)(*(_DWORD *)((char *)v4 + 46) + 4);
if ( (signed int)v72 <= v73 )
{
v74 = v73 - 1;
if ( v73 - 1 > (signed int)v72 )
{
v105 = 4 * v74 + 8;
v101 = v74 - v72;
v74 = v72;
do
{
(***(void (__fastcall ****)(_DWORD, _DWORD, signed int, _DWORD))(v105 + *(_DWORD *)((char *)v4 + 46)))(
*(_DWORD *)(v105 + *(_DWORD *)((char *)v4 + 46)),
HIDWORD(v72),
20,
0.0);
v105 -= 4;
--v101;
}
while ( v101 );
}
if ( v74 >= 0 )
{
v75 = 4 * v74 + 8;
v76 = v74 + 1;
do
{
(***(void (__fastcall ****)(_DWORD, _DWORD, signed int, _DWORD))(v75 + *(_DWORD *)((char *)v4 + 46)))(
*(_DWORD *)(v75 + *(_DWORD *)((char *)v4 + 46)),
HIDWORD(v72),
19,
0.0);
v75 -= 4;
--v76;
}
while ( v76 );
}
}
}
return 0;
case 46:
v77 = TLightGroup::next_light_down(this);
if ( v77 >= 0 )
(***(void (__stdcall ****)(signed int, _DWORD))(*(_DWORD *)((char *)v4 + 46) + 4 * v77 + 8))(4, 0.0);
return 0;
default:
goto LABEL_145;
}
while ( 1 )
{
if ( *(_DWORD *)(*(_DWORD *)v104 + 78) )
{
v63 = HIDWORD(v62)--;
if ( !v63 )
break;
}
v104 -= 4;
LODWORD(v62) = v62 - 1;
if ( (signed int)v62 < 0 )
goto LABEL_74;
}
LABEL_117:
        (***(void (__fastcall ****)(_DWORD, _DWORD, _DWORD, _DWORD))(v61 + 4 * v62 + 8))(
*(_DWORD *)(v61 + 4 * v62 + 8),
HIDWORD(v62),
0,
0.0);
LABEL_74:
if ( *(_DWORD *)((char *)v4 + 58) )
TLightGroup::start_animation(v4);
}
return 0;
}

//----- (0100ADB1) --------------------------------------------------------
TLightGroup *__thiscall TLightGroup::TLightGroup(TLightGroup *this, struct TPinballTable *a2, int a3)
{
TLightGroup *v3; // esi
signed __int16 *v4; // ebx
struct TPinballComponent *v5; // eax
int v7; // [esp+Ch] [ebp-4h]
int i; // [esp+1Ch] [ebp+Ch]

v3 = this;
TPinballComponent::TPinballComponent(this, a2, a3, 0);
*(_DWORD *)v3 = &TLightGroup::`vftable`;
objlist_class::objlist_class((TLightGroup *)((char *)v3 + 42), 4, 4);
*(_DWORD *)((char *)v3 + 70) = 0;
*(_DWORD *)((char *)v3 + 66) = 0;
TLightGroup::Reset(v3);
if ( a3 > 0 )
{
*(_DWORD *)((char *)v3 + 54) = *(_DWORD *)loader_query_float_attribute(a3, 0, 903);
v4 = (signed __int16 *)loader_query_iattribute(a3, 1027, &v7);
for ( i = 0; i < v7; ++v4 )
{
v5 = TPinballTable::find_component(a2, *v4);
if ( v5 )
objlist_class::Add((TLightGroup *)((char *)v3 + 42), (void *)v5);
++i;
}
}
return v3;
}
// 1001A60: using guessed type void *TLightGroup::`vftable`;

//----- (0100AE4C) --------------------------------------------------------
TLightGroup *__thiscall TLightGroup::`vector deleting destructor'(TLightGroup *this, char a2)
{
TLightGroup *v2; // esi

v2 = this;
TLightGroup::~TLightGroup(this);
if ( a2 & 1 )
operator delete((void *)v2);
return v2;
}

