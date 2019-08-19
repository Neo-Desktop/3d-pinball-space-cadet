
#include "pinball.h"

//----- (0100C01D) --------------------------------------------------------
void control_make_links(struct TPinballTable *a1)
{
DWORD *v1; // esi
struct TPinballComponent *v2; // edi
int v3; // ebx
unsigned int v4; // esi
struct TPinballTable *v5; // [esp+Ch] [ebp+8h]

dword_1025040 = a1;
v1 = &unk_1023EF8;
v5 = (struct TPinballTable *)88;
do
{
v2 = make_component_link((struct component_tag *)*(v1 - 2));
v3 = 0;
if ( v2 )
{
*(DWORD *)((char *)v2 + 18) = v1 - 1;
if ( *v1 > 0 )
{
do
{
(*(void (__thiscall **)(struct TPinballComponent *, int, DWORD))(*(DWORD *)v2 + 12))(
v2,
v3,
*(DWORD *)(v1[1] + 4 * v3));
++v3;
}
while ( v3 < *v1 );
}
}
v1 += 4;
v5 = (struct TPinballTable *)((char *)v5 - 1);
}
while ( v5 );
v4 = 0;
do
{
make_component_link((struct component_tag *)off_1024470[v4]);
++v4;
}
while ( v4 < 142 );
}
// 1024470: using guessed type char **off_1024470[142];

//----- (0100C0BE) --------------------------------------------------------
void table_control_handler(int a1)
{
void (**v1)(signed int, DWORD); // eax

if ( a1 == 1011 )
{
v1 = *(void (***)(signed int, DWORD))dword_1023CEC;
dword_1025044 = 0;
(*v1)(7, 0.0);
}
}
// 1023CEC: using guessed type int dword_1023CEC;
// 1025044: using guessed type int dword_1025044;

//----- (0100C397) --------------------------------------------------------
void AdvanceWormHoleDestination(int a1)
{
int v1; // eax
int v2; // esi
int v3; // esi
float v4; // ST18_4
float v5; // ST18_4
int v6; // [esp+28h] [ebp+8h]

v1 = *(DWORD *)(dword_1023BBC + 6);
if ( v1 != 16 && v1 != 22 && v1 != 23 )
{
v2 = *(DWORD *)(dword_1023A24 + 6);
if ( a1 || v2 )
{
v3 = v2 + 1;
v6 = v3;
if ( v3 == 4 )
{
v3 = 1;
v6 = 1;
}
v4 = (double)v6;
(**(void (***)(signed int, DWORD))dword_1023A3C)(23, LODWORD(v4));
v5 = (double)(3 - v3);
(**(void (***)(signed int, DWORD))dword_1023A3C)(11, LODWORD(v5));
if ( !light_on((struct component_tag *)&lite4) )
{
(**(void (***)(signed int, DWORD))dword_1023A1C)(19, 0.0);
(**(void (***)(signed int, DWORD))dword_1023A3C)(19, 0.0);
}
}
}
}
// 1023A1C: using guessed type int dword_1023A1C;
// 1023A20: using guessed type char *lite4;
// 1023A24: using guessed type int dword_1023A24;
// 1023A3C: using guessed type int dword_1023A3C;
// 1023BBC: using guessed type int dword_1023BBC;

//----- (0100C44B) --------------------------------------------------------
void FlipperRebounderControl1(int a1, struct TPinballComponent *a2)
{
int v2; // eax

if ( a1 == 63 )
{
(**(void (***)(signed int, DWORD))dword_10237D4)(9, 0.1);
v2 = (*(int (**)(DWORD))(*(DWORD *)a2 + 8))(0);
TPinballTable::AddScore(dword_1025040, v2);
}
}
// 10237D4: using guessed type int dword_10237D4;

//----- (0100C48B) --------------------------------------------------------
void FlipperRebounderControl2(int a1, struct TPinballComponent *a2)
{
int v2; // eax

if ( a1 == 63 )
{
(**(void (***)(signed int, DWORD))dword_10237DC)(9, 0.1);
v2 = (*(int (**)(DWORD))(*(DWORD *)a2 + 8))(0);
TPinballTable::AddScore(dword_1025040, v2);
}
}
// 10237DC: using guessed type int dword_10237DC;

//----- (0100C4CB) --------------------------------------------------------
void RebounderControl(int a1, struct TPinballComponent *a2)
{
int v2; // eax

if ( a1 == 63 )
{
v2 = (*(int (**)(DWORD))(*(DWORD *)a2 + 8))(0);
TPinballTable::AddScore(dword_1025040, v2);
}
}

//----- (0100C4F5) --------------------------------------------------------
void BumperControl(int a1, struct TPinballComponent *a2)
{
int v2; // eax

if ( a1 == 63 )
{
v2 = (*(int (**)(DWORD))(*(DWORD *)a2 + 8))(*(DWORD *)((char *)a2 + 78));
TPinballTable::AddScore(dword_1025040, v2);
}
}

//----- (0100C520) --------------------------------------------------------
void LeftKickerControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 60 )
(**(void (***)(signed int, DWORD))dword_1023808)(54, 0.0);
}
// 1023808: using guessed type int dword_1023808;

//----- (0100C546) --------------------------------------------------------
void RightKickerControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 60 )
(**(void (***)(signed int, DWORD))dword_1023810)(54, 0.0);
}
// 1023810: using guessed type int dword_1023810;

//----- (0100C56C) --------------------------------------------------------
void LeftKickerGateControl(int a1, struct TPinballComponent *a2)
{
float vars0; // [esp+Ch] [ebp+0h]

if ( a1 == 53 )
{
(**(void (***)(signed int, DWORD, DWORD))dword_1023818)(15, 5.0, LODWORD(vars0));
vars0 = 5.0;
(**(void (***)(signed int))dword_1023828)(7);
}
else if ( a1 == 54 )
{
(**(void (***)(signed int, DWORD, DWORD))dword_1023818)(20, 0.0, LODWORD(vars0));
vars0 = 0.0;
(**(void (***)(signed int))dword_1023828)(20);
}
}
// 1023818: using guessed type int dword_1023818;
// 1023828: using guessed type int dword_1023828;

//----- (0100C5D3) --------------------------------------------------------
void RightKickerGateControl(int a1, struct TPinballComponent *a2)
{
float vars0; // [esp+Ch] [ebp+0h]

if ( a1 == 53 )
{
(**(void (***)(signed int, DWORD, DWORD))dword_1023820)(15, 5.0, LODWORD(vars0));
vars0 = 5.0;
(**(void (***)(signed int))dword_1023830)(7);
}
else if ( a1 == 54 )
{
(**(void (***)(signed int, DWORD, DWORD))dword_1023820)(20, 0.0, LODWORD(vars0));
vars0 = 0.0;
(**(void (***)(signed int))dword_1023830)(20);
}
}
// 1023820: using guessed type int dword_1023820;
// 1023830: using guessed type int dword_1023830;

//----- (0100C63A) --------------------------------------------------------
void DeploymentChuteToEscapeChuteOneWayControl(int a1, int a2, int a3, struct TPinballComponent *a4)
{
int v4; // esi
int v5; // eax
int v6; // ST30_4
CHAR *v7; // eax
void (__thiscall ***v8)(DWORD, signed int, DWORD); // esi
void (__thiscall ***v9)(DWORD, signed int, DWORD); // esi
int v10; // [esp+30h] [ebp-4Ch]
char Dest; // [esp+38h] [ebp-44h]

if ( a3 == 63 )
{
v10 = a2;
v4 = (**(int (***)(signed int, DWORD))dword_1023CE4)(37, 0.0);
if ( v4 )
{
(*(void (**)(int))(*(DWORD *)dword_1023DFC + 20))(v10);
v5 = (*(int (__thiscall **)(struct TPinballComponent *, int))(*(DWORD *)a4 + 8))(a4, v4 - 1);
v6 = TPinballTable::AddScore(dword_1025040, v5);
v7 = get_rc_string(21, 0);
_sprintf(&Dest, v7, v6);
TTextBox::Display(dword_1023E1C, a1, &Dest, 2.0);
if ( !light_on((struct component_tag *)&lite56) )
{
v8 = (void (__thiscall ***)(DWORD, signed int, DWORD))dword_1023A8C;
(**(void (***)(signed int, DWORD))dword_1023A8C)(34, 0.0);
(**v8)(v8, 20, 0.0);
v9 = (void (__thiscall ***)(DWORD, signed int, DWORD))dword_1023A94;
(**(void (***)(signed int, DWORD))dword_1023A94)(34, 0.0);
(**v9)(v9, 20, 0.0);
}
(**(void (***)(signed int))dword_1023CE4)(44);
}
}
}
// 100C63A: could not find valid save-restore pair for esi
// 1023884: using guessed type char *lite56;
// 1023A8C: using guessed type int dword_1023A8C;
// 1023A94: using guessed type int dword_1023A94;
// 1023CE4: using guessed type int dword_1023CE4;
// 1023DFC: using guessed type int dword_1023DFC;

//----- (0100C73E) --------------------------------------------------------
void DeploymentChuteToTableOneWayControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 63 )
(**(void (***)(signed int, DWORD))dword_1023CE4)(20, 0.0);
}
// 1023CE4: using guessed type int dword_1023CE4;

//----- (0100C764) --------------------------------------------------------
void DrainBallBlockerControl(int a1, struct TPinballComponent *a2)
{
void (__thiscall **v2)(struct TPinballComponent *, signed int, DWORD); // eax
double v3; // st7
float v4; // ST08_4
void (__thiscall ***v5)(DWORD, signed int, float); // ecx
void (__thiscall **v6)(struct TPinballComponent *, signed int, DWORD); // eax
float v7; // ST08_4
signed int v8; // [esp+4h] [ebp-Ch]
float v9; // [esp+8h] [ebp-8h]

if ( a1 == 52 )
{
v6 = *(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a2;
v7 = (double)*(signed int *)((char *)a2 + 78);
*(DWORD *)((char *)a2 + 6) = 1;
(*v6)(a2, 52, LODWORD(v7));
v5 = (void (__thiscall ***)(DWORD, signed int, float))dword_1023868;
v9 = (double)*(signed int *)((char *)a2 + 78);
v8 = 9;
}
else
{
if ( a1 != 60 )
return;
v2 = *(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a2;
if ( *(DWORD *)((char *)a2 + 6) != 1 )
{
*(DWORD *)((char *)a2 + 6) = 0;
(*v2)(a2, 51, 0.0);
return;
}
v3 = (double)*(signed int *)((char *)a2 + 82);
*(DWORD *)((char *)a2 + 6) = 2;
v4 = v3;
(*v2)(a2, 59, LODWORD(v4));
v5 = (void (__thiscall ***)(DWORD, signed int, float))dword_1023868;
v9 = (double)*(signed int *)((char *)a2 + 82);
v8 = 7;
}
(**v5)(v5, v8, COERCE_FLOAT(LODWORD(v9)));
}
// 1023868: using guessed type int dword_1023868;

//----- (0100C7E9) --------------------------------------------------------
void LaunchRampControl(int a1, int a2, struct TPinballComponent *a3)
{
signed int v3; // esi
int v4; // ST08_4
CHAR *v5; // eax
int v6; // eax
int v7; // ecx
char Dest; // [esp+Ch] [ebp-44h]

if ( a2 == 63 )
{
v3 = 0;
if ( light_on((struct component_tag *)&lite54) )
{
v3 = 1;
v4 = SpecialAddScore(*(DWORD *)((char *)dword_1025040 + 302));
v5 = get_rc_string(10, 0);
_sprintf(&Dest, v5, v4);
TTextBox::Display(dword_1023E1C, a1, &Dest, 2.0);
}
if ( light_on((struct component_tag *)&lite55) )
v3 |= 2u;
if ( light_on((struct component_tag *)&lite56) )
v3 |= 4u;
if ( v3 )
{
if ( v3 == 1 )
{
v7 = dword_1023D24;
}
else if ( v3 <= 1 || v3 > 3 )
{
v7 = dword_1023D34;
}
else
{
v7 = dword_1023D2C;
}
}
else
{
v6 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a3 + 8))(a3, 0);
TPinballTable::AddScore(dword_1025040, v6);
v7 = dword_1023D3C;
}
(*(void (**)(void))(*(DWORD *)v7 + 20))();
}
}
// 1023874: using guessed type char *lite54;
// 102387C: using guessed type char *lite55;
// 1023884: using guessed type char *lite56;
// 1023D24: using guessed type int dword_1023D24;
// 1023D2C: using guessed type int dword_1023D2C;
// 1023D34: using guessed type int dword_1023D34;
// 1023D3C: using guessed type int dword_1023D3C;

//----- (0100C8D7) --------------------------------------------------------
void LaunchRampHoleControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 58 )
(**(void (***)(signed int, DWORD))dword_1023878)(7, 5.0);
}
// 1023878: using guessed type int dword_1023878;

//----- (0100C901) --------------------------------------------------------
void SpaceWarpRolloverControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 63 )
{
(**(void (***)(signed int, DWORD))dword_10238D0)(19, 0.0);
(**(void (***)(signed int, DWORD))dword_10238D8)(19, 0.0);
}
}
// 10238D0: using guessed type int dword_10238D0;
// 10238D8: using guessed type int dword_10238D8;

//----- (0100C939) --------------------------------------------------------
void ReentryLanesRolloverControl(int a1, int a2, int a3, int a4, struct TPinballComponent *a5)
{
void (__thiscall ***v5)(DWORD, signed int, DWORD); // esi
void (__thiscall ***v6)(DWORD, signed int, DWORD); // esi
struct TPinballComponent *v7; // esi
int v8; // ecx
void (**v9)(signed int, DWORD); // eax
int v10; // ST58_4
void (__thiscall ***v11)(DWORD, signed int, DWORD, int, int); // esi
int v12; // ebx
bool v13; // zf
int v14; // ebx
char *v15; // eax
int v16; // eax
int v17; // [esp+60h] [ebp-4h]

if ( a4 == 63 )
{
v17 = a3;
v5 = (void (__thiscall ***)(DWORD, signed int, DWORD))dword_1023A8C;
if ( !light_on((struct component_tag *)&lite56)
&& ((int (__thiscall *)(DWORD, signed int, DWORD))**v5)(v5, 39, 0.0) )
{
(**v5)(v5, 34, 0.0);
(**v5)(v5, 20, 0.0);
v6 = (void (__thiscall ***)(DWORD, signed int, DWORD))dword_1023A94;
(**(void (***)(signed int, DWORD))dword_1023A94)(34, 0.0);
(**v6)(v6, 20, 0.0);
}
v7 = a5;
if ( (struct TPinballComponent *)dword_102372C == a5 )
{
v8 = dword_102370C;
}
else
{
v8 = dword_1023714;
if ( (struct TPinballComponent *)dword_1023734 != a5 )
v8 = dword_102371C;
}
if ( !*(DWORD *)(v8 + 82) )
{
v9 = *(void (***)(signed int, DWORD))v8;
if ( *(DWORD *)(v8 + 78) )
{
(*v9)(20, 0.0);
}
else
{
v10 = a1;
(*v9)(19, 0.0);
v11 = (void (__thiscall ***)(DWORD, signed int, DWORD, int, int))dword_1023724;
v12 = (**(int (__thiscall ***)(int, signed int, DWORD))dword_1023724)(dword_1023724, 37, 0.0);
v13 = v12 == (**(int (***)(signed int, DWORD))dword_1023724)(38, 0.0);
v14 = v10;
if ( v13 )
{
(**v11)(v11, 7, 5.0, a2, v17);
((void (__thiscall *)(void (__thiscall ***)(DWORD, signed int, DWORD, int, int), DWORD, DWORD))**v11)(
v11,
0,
0.0);
if ( *(DWORD *)(dword_10236E4 + 78) < 3 )
{
(**(void (***)(signed int, DWORD))dword_1023704)(12, 0.0);
v15 = get_rc_string(5, 0);
TTextBox::Display(dword_1023E1C, v14, v15, 2.0);
}
(**(void (__cdecl ***)(signed int, DWORD))dword_1023704)(48, 60.0);
}
v7 = a5;
}
}
v16 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)v7 + 8))(v7, 0);
TPinballTable::AddScore(dword_1025040, v16);
}
}
// 100C939: could not find valid save-restore pair for ebx
// 100C939: could not find valid save-restore pair for edi
// 100C939: could not find valid save-restore pair for esi
// 10236E4: using guessed type int dword_10236E4;
// 1023704: using guessed type int dword_1023704;
// 102370C: using guessed type int dword_102370C;
// 1023714: using guessed type int dword_1023714;
// 102371C: using guessed type int dword_102371C;
// 1023724: using guessed type int dword_1023724;
// 102372C: using guessed type int dword_102372C;
// 1023734: using guessed type int dword_1023734;
// 1023884: using guessed type char *lite56;
// 1023A8C: using guessed type int dword_1023A8C;
// 1023A94: using guessed type int dword_1023A94;

//----- (0100CABF) --------------------------------------------------------
void BumperGroupControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 61 )
{
if ( *(DWORD *)((char *)a2 + 78) )
{
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a2)(a2, 48, 60.0);
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a2)(a2, 13, 0.0);
}
}
}

//----- (0100CAFE) --------------------------------------------------------
void LaunchLanesRolloverControl(int a1, int a2, int a3, int a4, struct TPinballComponent *a5)
{
struct TPinballComponent *v5; // esi
int v6; // ecx
void (**v7)(signed int, DWORD); // eax
int v8; // ST30_4
void (__thiscall ***v9)(DWORD, signed int, DWORD, int, int); // esi
int v10; // ebx
bool v11; // zf
int v12; // ebx
char *v13; // eax
int v14; // eax
int v15; // [esp+38h] [ebp-4h]

if ( a4 == 63 )
{
v15 = a3;
v5 = a5;
if ( (struct TPinballComponent *)dword_1023798 == a5 )
{
v6 = dword_1023778;
}
else
{
v6 = dword_1023780;
if ( (struct TPinballComponent *)dword_10237A0 != a5 )
v6 = dword_1023788;
}
if ( !*(DWORD *)(v6 + 82) )
{
v7 = *(void (***)(signed int, DWORD))v6;
if ( *(DWORD *)(v6 + 78) )
{
(*v7)(20, 0.0);
}
else
{
v8 = a1;
(*v7)(19, 0.0);
v9 = (void (__thiscall ***)(DWORD, signed int, DWORD, int, int))dword_1023790;
v10 = (**(int (__thiscall ***)(int, signed int, DWORD))dword_1023790)(dword_1023790, 37, 0.0);
v11 = v10 == (**(int (***)(signed int, DWORD))dword_1023790)(38, 0.0);
v12 = v8;
if ( v11 )
{
(**v9)(v9, 7, 5.0, a2, v15);
((void (__thiscall *)(void (__thiscall ***)(DWORD, signed int, DWORD, int, int), DWORD, DWORD))**v9)(
v9,
0,
0.0);
if ( *(DWORD *)(dword_1023758 + 78) < 3 )
{
(**(void (***)(signed int, DWORD))dword_1023770)(12, 0.0);
v13 = get_rc_string(6, 0);
TTextBox::Display(dword_1023E1C, v12, v13, 2.0);
}
(**(void (__cdecl ***)(signed int, DWORD))dword_1023770)(48, 60.0);
}
v5 = a5;
}
}
v14 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)v5 + 8))(v5, 0);
TPinballTable::AddScore(dword_1025040, v14);
}
}
// 100CAFE: could not find valid save-restore pair for ebx
// 100CAFE: could not find valid save-restore pair for edi
// 100CAFE: could not find valid save-restore pair for esi
// 1023758: using guessed type int dword_1023758;
// 1023770: using guessed type int dword_1023770;
// 1023778: using guessed type int dword_1023778;
// 1023780: using guessed type int dword_1023780;
// 1023788: using guessed type int dword_1023788;
// 1023790: using guessed type int dword_1023790;
// 1023798: using guessed type int dword_1023798;
// 10237A0: using guessed type int dword_10237A0;

//----- (0100CC20) --------------------------------------------------------
void OutLaneRolloverControl(int a1, int a2, int a3, struct TPinballComponent *a4)
{
void (***v4)(signed int); // ecx
int v5; // eax

if ( a3 == 63 )
{
if ( light_on((struct component_tag *)&lite17) || light_on((struct component_tag *)&lite18) )
{
table_add_extra_ball(a1, 2.0);
(**(void (***)(signed int, DWORD))dword_10238AC)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10238B4)(20, 0.0);
}
else
{
(*(void (**)(void))(*(DWORD *)dword_1023E04 + 20))();
}
if ( (struct TPinballComponent *)dword_102389C == a4 )
{
if ( light_on((struct component_tag *)&lite30) )
{
(**(void (***)(signed int, DWORD, int))dword_1023818)(4, 0.0, a2);
v4 = (void (***)(signed int))dword_1023828;
LABEL_11:
(**v4)(4);
goto LABEL_12;
}
}
else if ( light_on((struct component_tag *)&lite29) )
{
(**(void (***)(signed int, DWORD, int))dword_1023820)(4, 0.0, a2);
v4 = (void (***)(signed int))dword_1023830;
goto LABEL_11;
}
LABEL_12:
v5 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a4 + 8))(a4, 0);
TPinballTable::AddScore(dword_1025040, v5);
}
}
// 100CC20: could not find valid save-restore pair for esi
// 1023814: using guessed type char *lite30;
// 1023818: using guessed type int dword_1023818;
// 102381C: using guessed type char *lite29;
// 1023820: using guessed type int dword_1023820;
// 1023828: using guessed type int dword_1023828;
// 1023830: using guessed type int dword_1023830;
// 102389C: using guessed type int dword_102389C;
// 10238A8: using guessed type char *lite17;
// 10238AC: using guessed type int dword_10238AC;
// 10238B0: using guessed type char *lite18;
// 10238B4: using guessed type int dword_10238B4;
// 1023E04: using guessed type int dword_1023E04;

//----- (0100CD12) --------------------------------------------------------
void ExtraBallLightControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 19 )
{
(**(void (***)(signed int, DWORD))dword_10238AC)(9, 55.0);
(**(void (***)(signed int, DWORD))dword_10238B4)(9, 55.0);
dword_102504C = 1;
}
else if ( a1 == 60 )
{
if ( dword_102504C )
{
(**(void (***)(signed int, DWORD))dword_10238AC)(7, 5.0);
(**(void (***)(signed int, DWORD))dword_10238B4)(7, 5.0);
dword_102504C = 0;
}
}
}
// 10238AC: using guessed type int dword_10238AC;
// 10238B4: using guessed type int dword_10238B4;
// 102504C: using guessed type int dword_102504C;

//----- (0100CDA0) --------------------------------------------------------
void ReturnLaneRolloverControl(int a1, int a2, struct TPinballComponent *a3)
{
void (***v3)(signed int); // ecx
int v4; // eax

if ( a2 == 63 )
{
if ( (struct TPinballComponent *)dword_10238C0 == a3 )
{
if ( light_on((struct component_tag *)&lite27) )
{
(**(void (***)(signed int, DWORD, int))dword_1023AC4)(20, 0.0, a1);
v3 = (void (***)(signed int))dword_10238D0;
LABEL_8:
(**v3)(20);
v4 = (*(int (__thiscall **)(struct TPinballComponent *, signed int))(*(DWORD *)a3 + 8))(a3, 1);
LABEL_10:
TPinballTable::AddScore(dword_1025040, v4);
return;
}
}
else
{
if ( (struct TPinballComponent *)dword_10238C8 != a3 )
return;
if ( light_on((struct component_tag *)&lite28) )
{
(**(void (***)(signed int, DWORD, int))dword_1023AC4)(20, 0.0, a1);
v3 = (void (***)(signed int))dword_10238D8;
goto LABEL_8;
}
}
v4 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a3 + 8))(a3, 0);
goto LABEL_10;
}
}
// 100CDA0: could not find valid save-restore pair for esi
// 10238C0: using guessed type int dword_10238C0;
// 10238C8: using guessed type int dword_10238C8;
// 10238CC: using guessed type char *lite27;
// 10238D0: using guessed type int dword_10238D0;
// 10238D4: using guessed type char *lite28;
// 10238D8: using guessed type int dword_10238D8;
// 1023AC4: using guessed type int dword_1023AC4;

//----- (0100CE40) --------------------------------------------------------
void BonusLaneRolloverControl(int a1, int a2, struct TPinballComponent *a3)
{
int v3; // ST08_4
CHAR *v4; // eax
int v5; // eax
char *v6; // eax
char Dest; // [esp+Ch] [ebp-44h]

if ( a2 == 63 )
{
if ( light_on((struct component_tag *)&lite16) )
{
v3 = SpecialAddScore(*(DWORD *)((char *)dword_1025040 + 306));
v4 = get_rc_string(3, 0);
_sprintf(&Dest, v4, v3);
TTextBox::Display(dword_1023E1C, a1, &Dest, 2.0);
(**(void (***)(signed int, DWORD))dword_10238F0)(20, 0.0);
(*(void (**)(void))(*(DWORD *)dword_1023D4C + 20))();
}
else
{
v5 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a3 + 8))(a3, 0);
TPinballTable::AddScore(dword_1025040, v5);
(*(void (**)(void))(*(DWORD *)dword_1023D54 + 20))();
v6 = get_rc_string(44, 0);
TTextBox::Display(dword_1023E1C, a1, v6, 2.0);
}
(**(void (***)(signed int, DWORD))dword_1023978)(45, 11.0);
}
}
// 10238EC: using guessed type char *lite16;
// 10238F0: using guessed type int dword_10238F0;
// 1023978: using guessed type int dword_1023978;
// 1023D4C: using guessed type int dword_1023D4C;
// 1023D54: using guessed type int dword_1023D54;

//----- (0100CF36) --------------------------------------------------------
void FuelRollover1Control(int a1, int a2, struct TPinballComponent *a3)
{
char *v3; // eax
int v4; // eax

if ( a2 == 63 )
{
if ( (**(int (***)(signed int, DWORD))dword_1023978)(37, 0.0) > 1 )
{
(**(void (***)(signed int, DWORD))dword_1023948)(8, 0.050000001);
}
else
{
(**(void (***)(signed int, DWORD))dword_1023978)(45, 1.0);
v3 = get_rc_string(44, 0);
TTextBox::Display(dword_1023E1C, a1, v3, 2.0);
}
v4 = (*(int (**)(DWORD))(*(DWORD *)a3 + 8))(0);
TPinballTable::AddScore(dword_1025040, v4);
}
}
// 1023948: using guessed type int dword_1023948;
// 1023978: using guessed type int dword_1023978;

//----- (0100CFC0) --------------------------------------------------------
void FuelRollover2Control(int a1, int a2, struct TPinballComponent *a3)
{
char *v3; // eax
int v4; // eax

if ( a2 == 63 )
{
if ( (**(int (***)(signed int, DWORD))dword_1023978)(37, 0.0) > 3 )
{
(**(void (***)(signed int, DWORD))dword_1023950)(8, 0.050000001);
}
else
{
(**(void (***)(signed int, DWORD))dword_1023978)(45, 3.0);
v3 = get_rc_string(44, 0);
TTextBox::Display(dword_1023E1C, a1, v3, 2.0);
}
v4 = (*(int (**)(DWORD))(*(DWORD *)a3 + 8))(0);
TPinballTable::AddScore(dword_1025040, v4);
}
}
// 1023950: using guessed type int dword_1023950;
// 1023978: using guessed type int dword_1023978;

//----- (0100D04E) --------------------------------------------------------
void FuelRollover3Control(int a1, int a2, struct TPinballComponent *a3)
{
char *v3; // eax
int v4; // eax

if ( a2 == 63 )
{
if ( (**(int (***)(signed int, DWORD))dword_1023978)(37, 0.0) > 5 )
{
(**(void (***)(signed int, DWORD))dword_1023958)(8, 0.050000001);
}
else
{
(**(void (***)(signed int, DWORD))dword_1023978)(45, 5.0);
v3 = get_rc_string(44, 0);
TTextBox::Display(dword_1023E1C, a1, v3, 2.0);
}
v4 = (*(int (**)(DWORD))(*(DWORD *)a3 + 8))(0);
TPinballTable::AddScore(dword_1025040, v4);
}
}
// 1023958: using guessed type int dword_1023958;
// 1023978: using guessed type int dword_1023978;

//----- (0100D0DC) --------------------------------------------------------
void FuelRollover4Control(int a1, int a2, struct TPinballComponent *a3)
{
char *v3; // eax
int v4; // eax

if ( a2 == 63 )
{
if ( (**(int (***)(signed int, DWORD))dword_1023978)(37, 0.0) > 7 )
{
(**(void (***)(signed int, DWORD))dword_1023960)(8, 0.050000001);
}
else
{
(**(void (***)(signed int, DWORD))dword_1023978)(45, 7.0);
v3 = get_rc_string(44, 0);
TTextBox::Display(dword_1023E1C, a1, v3, 2.0);
}
v4 = (*(int (**)(DWORD))(*(DWORD *)a3 + 8))(0);
TPinballTable::AddScore(dword_1025040, v4);
}
}
// 1023960: using guessed type int dword_1023960;
// 1023978: using guessed type int dword_1023978;

//----- (0100D16A) --------------------------------------------------------
void FuelRollover5Control(int a1, int a2, struct TPinballComponent *a3)
{
char *v3; // eax
int v4; // eax

if ( a2 == 63 )
{
if ( (**(int (***)(signed int, DWORD))dword_1023978)(37, 0.0) > 9 )
{
(**(void (***)(signed int, DWORD))dword_1023968)(8, 0.050000001);
}
else
{
(**(void (***)(signed int, DWORD))dword_1023978)(45, 9.0);
v3 = get_rc_string(44, 0);
TTextBox::Display(dword_1023E1C, a1, v3, 2.0);
}
v4 = (*(int (**)(DWORD))(*(DWORD *)a3 + 8))(0);
TPinballTable::AddScore(dword_1025040, v4);
}
}
// 1023968: using guessed type int dword_1023968;
// 1023978: using guessed type int dword_1023978;

//----- (0100D1F8) --------------------------------------------------------
void FuelRollover6Control(int a1, int a2, struct TPinballComponent *a3)
{
char *v3; // eax
int v4; // eax

if ( a2 == 63 )
{
if ( (**(int (***)(signed int, DWORD))dword_1023978)(37, 0.0) > 11 )
{
(**(void (***)(signed int, DWORD))dword_1023970)(8, 0.050000001);
}
else
{
(**(void (***)(signed int, DWORD))dword_1023978)(45, 11.0);
v3 = get_rc_string(44, 0);
TTextBox::Display(dword_1023E1C, a1, v3, 2.0);
}
v4 = (*(int (**)(DWORD))(*(DWORD *)a3 + 8))(0);
TPinballTable::AddScore(dword_1025040, v4);
}
}
// 1023970: using guessed type int dword_1023970;
// 1023978: using guessed type int dword_1023978;

//----- (0100D286) --------------------------------------------------------
void HyperspaceLightGroupControl(int a1, struct TPinballComponent *a2)
{
struct TPinballComponent *v2; // esi

if ( a1 )
{
if ( a1 == 41 )
{
v2 = a2;
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a2)(a2, 41, 2.0);
LABEL_7:
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))v2)(v2, 43, 60.0);
return;
}
if ( a1 == 61 )
{
v2 = a2;
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a2)(a2, 33, 0.0);
if ( (**(int (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))v2)(v2, 37, 0.0) )
goto LABEL_7;
}
}
else
{
(**(void (__thiscall ***)(struct TPinballComponent *, DWORD, DWORD))a2)(a2, 0, 0.0);
}
}

//----- (0100D303) --------------------------------------------------------
void WormHoleControl(int a1, int a2, int a3, int a4, struct TPinballComponent *a5)
{
int v5; // ebx
int v6; // edi
int v7; // ebx
int v8; // eax
int v9; // ebx
int v10; // edi
char *v11; // eax
int v12; // eax
int v13; // ebx
float v14; // ST3C_4
int v15; // eax
char *v16; // eax
int v17; // [esp+40h] [ebp-Ch]
int v18; // [esp+48h] [ebp-4h]

if ( a4 == 63 )
{
v18 = a1;
v5 = 0;
if ( (struct TPinballComponent *)dword_10239EC != a5 )
{
LOBYTE(v5) = dword_10239F4 != (DWORD)a5;
++v5;
}
v17 = a2;
v6 = *(DWORD *)(dword_1023A24 + 6);
v7 = v5 + 1;
if ( v6 )
{
*(DWORD *)(dword_1023A24 + 6) = 0;
(**(void (***)(signed int, DWORD))dword_1023A1C)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023A3C)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023C44)(20, 0.0);
if ( v6 == v7 )
{
if ( *(DWORD *)((char *)dword_1025040 + 346) )
{
table_bump_ball_sink_lock(v7);
TPinballTable::AddScore(dword_1025040, 10000);
}
else
{
v11 = get_rc_string(49, 0);
TTextBox::Display(dword_1023E1C, v7, v11, 2.0);
table_set_replay(v7, 4.0);
v12 = (*(int (__thiscall **)(struct TPinballComponent *, signed int))(*(DWORD *)a5 + 8))(a5, 1);
TPinballTable::AddScore(dword_1025040, v12);
v13 = v7 - 1;
(**(void (***)(signed int, DWORD))off_1023A4C[v13][1])(16, *(float *)((char *)a5 + 82));
v14 = (double)(2 - v13);
(**(void (***)(signed int, DWORD))off_1023A58[v13][1])(11, LODWORD(v14));
(**(void (***)(signed int, DWORD))off_1023A58[v13][1])(16, *(float *)((char *)a5 + 82));
(**(void (***)(signed int, DWORD))off_1023A40[v13][1])(56, *(float *)((char *)a5 + 82));
}
return;
}
v15 = (*(int (__thiscall **)(struct TPinballComponent *, signed int, int, int, int))(*(DWORD *)a5 + 8))(
a5,
2,
v17,
a3,
v18);
TPinballTable::AddScore(dword_1025040, v15);
v9 = v6 - 1;
v10 = v6 - 1;
(**(void (***)(signed int, DWORD))off_1023A4C[v10][1])(16, *(float *)((char *)a5 + 82));
}
else
{
v8 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD, int, int, int))(*(DWORD *)a5 + 8))(
a5,
0,
v17,
a3,
v18);
TPinballTable::AddScore(dword_1025040, v8);
v9 = v7 - 1;
v10 = v9;
(**(void (***)(signed int, DWORD))off_1023A4C[v9][1])(16, *(float *)((char *)a5 + 82));
}
(**(void (***)(signed int))off_1023A58[v10][1])(11);
(**(void (__cdecl ***)(signed int, DWORD))off_1023A58[v10][1])(16, *(float *)((char *)a5 + 82));
(**(void (***)(signed int, DWORD))off_1023A40[v10][1])(56, *(float *)((char *)a5 + 82));
v16 = get_rc_string(49, 0);
TTextBox::Display(dword_1023E1C, v9, v16, 2.0);
}
}
// 100D303: could not find valid save-restore pair for ebx
// 100D303: could not find valid save-restore pair for edi
// 100D303: could not find valid save-restore pair for esi
// 10239EC: using guessed type int dword_10239EC;
// 10239F4: using guessed type int dword_10239F4;
// 1023A1C: using guessed type int dword_1023A1C;
// 1023A24: using guessed type int dword_1023A24;
// 1023A3C: using guessed type int dword_1023A3C;
// 1023A40: using guessed type char **off_1023A40[9];
// 1023A4C: using guessed type char **off_1023A4C[6];
// 1023A58: using guessed type char **off_1023A58[3];
// 1023C44: using guessed type int dword_1023C44;

//----- (0100D53A) --------------------------------------------------------
void LeftFlipperControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 1 )
{
(**(void (***)(signed int, DWORD))dword_1023724)(24, 0.0);
(**(void (***)(signed int, DWORD))dword_1023790)(24, 0.0);
}
}
// 1023724: using guessed type int dword_1023724;
// 1023790: using guessed type int dword_1023790;

//----- (0100D572) --------------------------------------------------------
void RightFlipperControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 1 )
{
(**(void (***)(signed int, DWORD))dword_1023724)(25, 0.0);
(**(void (***)(signed int, DWORD))dword_1023790)(25, 0.0);
}
}
// 1023724: using guessed type int dword_1023724;
// 1023790: using guessed type int dword_1023790;

//----- (0100D5AA) --------------------------------------------------------
void JackpotLightControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 60 )
*(DWORD *)((char *)dword_1025040 + 318) = 0;
}

//----- (0100D5CA) --------------------------------------------------------
void BonusLightControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 60 )
*(DWORD *)((char *)dword_1025040 + 310) = 0;
}

//----- (0100D5EA) --------------------------------------------------------
void BoosterTargetControl(int a1, struct TPinballComponent *a2)
{
int v2; // eax
int v3; // ecx
int v4; // eax
int v5; // eax

if ( a1 == 63 && !*(DWORD *)((char *)a2 + 6) )
{
*(DWORD *)((char *)a2 + 6) = 1;
if ( *(DWORD *)(dword_1023A9C + 6) + *(DWORD *)(dword_1023AA4 + 6) + *(DWORD *)(dword_1023AAC + 6) != 3 )
{
v5 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a2 + 8))(a2, 0);
goto LABEL_19;
}
if ( light_on((struct component_tag *)&lite61) )
{
if ( light_on((struct component_tag *)&lite60) )
{
if ( light_on((struct component_tag *)&lite59) )
{
if ( light_on((struct component_tag *)&lite58) )
{
v4 = (*(int (__thiscall **)(struct TPinballComponent *, signed int))(*(DWORD *)a2 + 8))(a2, 1);
TPinballTable::AddScore(dword_1025040, v4);
}
else
{
table_set_bonus_hold(0);
}
v3 = dword_1023DCC;
}
else
{
table_set_bonus(0);
v3 = dword_1023DBC;
}
}
else
{
table_set_jackpot(0);
v3 = dword_1023DB4;
}
}
else
{
v2 = *(DWORD *)(dword_1023BBC + 6);
if ( v2 == 15 || v2 == 29 )
goto LABEL_17;
table_set_flag_lights(0);
v3 = dword_1023DC4;
}
(*(void (**)(void))(*(DWORD *)v3 + 20))();
LABEL_17:
*(DWORD *)(dword_1023A9C + 6) = 0;
(**(void (***)(signed int, DWORD))dword_1023A9C)(50, 0.0);
*(DWORD *)(dword_1023AA4 + 6) = 0;
(**(void (***)(signed int, DWORD))dword_1023AA4)(50, 0.0);
*(DWORD *)(dword_1023AAC + 6) = 0;
(**(void (***)(signed int, DWORD))dword_1023AAC)(50, 0.0);
v5 = (*(int (__thiscall **)(struct TPinballComponent *, signed int))(*(DWORD *)a2 + 8))(a2, 1);
LABEL_19:
TPinballTable::AddScore(dword_1025040, v5);
}
}
// 1023A9C: using guessed type int dword_1023A9C;
// 1023AA4: using guessed type int dword_1023AA4;
// 1023AAC: using guessed type int dword_1023AAC;
// 1023AB0: using guessed type char *lite61;
// 1023AB8: using guessed type char *lite60;
// 1023AC0: using guessed type char *lite59;
// 1023AC8: using guessed type char *lite58;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023DB4: using guessed type int dword_1023DB4;
// 1023DBC: using guessed type int dword_1023DBC;
// 1023DC4: using guessed type int dword_1023DC4;
// 1023DCC: using guessed type int dword_1023DCC;

//----- (0100D73E) --------------------------------------------------------
void MedalLightGroupControl(int a1, struct TPinballComponent *a2)
{
struct TPinballComponent *v2; // esi

if ( a1 )
{
if ( a1 == 41 )
{
v2 = a2;
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a2)(a2, 41, 2.0);
LABEL_7:
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))v2)(v2, 43, 30.0);
return;
}
if ( a1 == 61 )
{
v2 = a2;
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a2)(a2, 33, 0.0);
if ( (**(int (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))v2)(v2, 37, 0.0) )
goto LABEL_7;
}
}
else
{
(**(void (__thiscall ***)(struct TPinballComponent *, DWORD, DWORD))a2)(a2, 0, 0.0);
}
}

//----- (0100D7BB) --------------------------------------------------------
void MultiplierLightGroupControl(int a1, int a2, struct TPinballComponent *a3)
{
struct TPinballComponent *v3; // esi
double v4; // st7
char *v5; // eax
int v6; // ecx
float v7; // ST10_4

if ( a2 )
{
if ( a2 == 41 )
{
v3 = a3;
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a3)(a3, 41, 2.0);
goto LABEL_13;
}
if ( a2 != 61 )
{
if ( a2 == 64 )
{
*(DWORD *)((char *)dword_1025040 + 294) = 4;
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a3)(a3, 19, 0.0);
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a3)(a3, 43, 30.0);
v5 = get_rc_string(59, 0);
TTextBox::Display(dword_1023E1C, a1, v5, 2.0);
return;
}
if ( a2 != 65 )
return;
v3 = a3;
*(DWORD *)((char *)dword_1025040 + 294) = 0;
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a3)(a3, 20, 0.0);
v4 = -1.0;
goto LABEL_14;
}
v6 = *(DWORD *)((char *)dword_1025040 + 294);
if ( v6 )
*(DWORD *)((char *)dword_1025040 + 294) = v6 - 1;
v3 = a3;
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a3)(a3, 33, 0.0);
if ( (**(int (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))v3)(v3, 37, 0.0) )
{
LABEL_13:
v4 = 30.0;
LABEL_14:
v7 = v4;
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))v3)(v3, 43, LODWORD(v7));
return;
}
}
else
{
(**(void (__thiscall ***)(struct TPinballComponent *, DWORD, DWORD))a3)(a3, 0, 0.0);
}
}

//----- (0100D8DE) --------------------------------------------------------
void FuelSpotTargetControl(int a1, int a2, struct TPinballComponent *a3)
{
void (***v3)(signed int, DWORD); // ecx
int v4; // eax
char *v5; // eax

if ( a2 == 63 )
{
if ( (struct TPinballComponent *)dword_1023B48 == a3 )
{
v3 = (void (***)(signed int, DWORD))dword_1023B60;
}
else
{
v3 = (void (***)(signed int, DWORD))dword_1023B68;
if ( (struct TPinballComponent *)dword_1023B50 != a3 )
v3 = (void (***)(signed int, DWORD))dword_1023B70;
}
(**v3)(15, 2.0);
v4 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a3 + 8))(a3, 0);
TPinballTable::AddScore(dword_1025040, v4);
if ( (**(int (***)(signed int, DWORD))dword_1023B78)(37, 0.0) == 3 )
{
(**(void (***)(signed int, DWORD))dword_1023B78)(16, 2.0);
(**(void (***)(signed int, DWORD))dword_1023978)(45, 11.0);
(*(void (**)(void))(*(DWORD *)dword_1023D54 + 20))();
v5 = get_rc_string(44, 0);
TTextBox::Display(dword_1023E1C, a1, v5, 2.0);
}
else
{
(*(void (**)(void))(*(DWORD *)dword_1023E0C + 20))();
}
}
}
// 1023978: using guessed type int dword_1023978;
// 1023B48: using guessed type int dword_1023B48;
// 1023B50: using guessed type int dword_1023B50;
// 1023B60: using guessed type int dword_1023B60;
// 1023B68: using guessed type int dword_1023B68;
// 1023B70: using guessed type int dword_1023B70;
// 1023B78: using guessed type int dword_1023B78;
// 1023D54: using guessed type int dword_1023D54;
// 1023E0C: using guessed type int dword_1023E0C;

//----- (0100D9C2) --------------------------------------------------------
void MissionSpotTargetControl(int a1, int a2, struct TPinballComponent *a3)
{
void (***v3)(signed int, DWORD, int); // ecx
int v4; // ecx
int v5; // eax

if ( a2 == 63 )
{
if ( (struct TPinballComponent *)dword_1023B84 == a3 )
{
*(DWORD *)(dword_1023B9C + 6) |= 1u;
v3 = (void (***)(signed int, DWORD, int))dword_1023B9C;
}
else if ( (struct TPinballComponent *)dword_1023B8C == a3 )
{
*(DWORD *)(dword_1023B9C + 6) |= 2u;
v3 = (void (***)(signed int, DWORD, int))dword_1023BA4;
}
else
{
*(DWORD *)(dword_1023B9C + 6) |= 4u;
v3 = (void (***)(signed int, DWORD, int))dword_1023BAC;
}
(**v3)(15, 2.0, a1);
if ( !light_on((struct component_tag *)&lite198) || (v4 = dword_1023E0C, *(DWORD *)(dword_1023BBC + 82)) )
v4 = dword_1023DD4;
(*(void (**)(void))(*(DWORD *)v4 + 20))();
v5 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a3 + 8))(a3, 0);
TPinballTable::AddScore(dword_1025040, v5);
if ( (**(int (***)(signed int, DWORD))dword_1023BB4)(37, 0.0) == 3 )
(**(void (***)(signed int, DWORD))dword_1023BB4)(16, 2.0);
}
}
// 100D9C2: could not find valid save-restore pair for esi
// 1023B84: using guessed type int dword_1023B84;
// 1023B8C: using guessed type int dword_1023B8C;
// 1023B9C: using guessed type int dword_1023B9C;
// 1023BA4: using guessed type int dword_1023BA4;
// 1023BAC: using guessed type int dword_1023BAC;
// 1023BB4: using guessed type int dword_1023BB4;
// 1023BB8: using guessed type char *lite198;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023DD4: using guessed type int dword_1023DD4;
// 1023E0C: using guessed type int dword_1023E0C;

//----- (0100DA94) --------------------------------------------------------
void LeftHazardSpotTargetControl(int a1, struct TPinballComponent *a2)
{
void (***v2)(signed int, DWORD); // ecx
int v3; // eax

if ( a1 == 63 )
{
if ( (struct TPinballComponent *)dword_1023BC8 == a2 )
{
*(DWORD *)(dword_1023BF8 + 6) |= 1u;
v2 = (void (***)(signed int, DWORD))dword_1023BF8;
}
else if ( (struct TPinballComponent *)dword_1023BD0 == a2 )
{
*(DWORD *)(dword_1023BF8 + 6) |= 2u;
v2 = (void (***)(signed int, DWORD))dword_1023C00;
}
else
{
*(DWORD *)(dword_1023BF8 + 6) |= 4u;
v2 = (void (***)(signed int, DWORD))dword_1023C08;
}
(**v2)(15, 2.0);
v3 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a2 + 8))(a2, 0);
TPinballTable::AddScore(dword_1025040, v3);
if ( (**(int (***)(signed int, DWORD))dword_1023C28)(37, 0.0) == 3 )
{
(*(void (**)(void))(*(DWORD *)dword_1023DDC + 20))();
(**(void (***)(signed int, DWORD))dword_1023808)(53, 0.0);
(**(void (***)(signed int, DWORD))dword_1023C28)(16, 2.0);
}
else
{
(*(void (**)(void))(*(DWORD *)dword_1023E0C + 20))();
}
}
}
// 1023808: using guessed type int dword_1023808;
// 1023BC8: using guessed type int dword_1023BC8;
// 1023BD0: using guessed type int dword_1023BD0;
// 1023BF8: using guessed type int dword_1023BF8;
// 1023C00: using guessed type int dword_1023C00;
// 1023C08: using guessed type int dword_1023C08;
// 1023C28: using guessed type int dword_1023C28;
// 1023DDC: using guessed type int dword_1023DDC;
// 1023E0C: using guessed type int dword_1023E0C;

//----- (0100DB68) --------------------------------------------------------
void RightHazardSpotTargetControl(int a1, struct TPinballComponent *a2)
{
void (***v2)(signed int, DWORD); // ecx
int v3; // eax

if ( a1 == 63 )
{
if ( (struct TPinballComponent *)dword_1023BE0 == a2 )
{
*(DWORD *)(dword_1023C10 + 6) |= 1u;
v2 = (void (***)(signed int, DWORD))dword_1023C10;
}
else if ( (struct TPinballComponent *)dword_1023BE8 == a2 )
{
*(DWORD *)(dword_1023C10 + 6) |= 2u;
v2 = (void (***)(signed int, DWORD))dword_1023C18;
}
else
{
*(DWORD *)(dword_1023C10 + 6) |= 4u;
v2 = (void (***)(signed int, DWORD))dword_1023C20;
}
(**v2)(15, 2.0);
v3 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a2 + 8))(a2, 0);
TPinballTable::AddScore(dword_1025040, v3);
if ( (**(int (***)(signed int, DWORD))dword_1023C30)(37, 0.0) == 3 )
{
(*(void (**)(void))(*(DWORD *)dword_1023DDC + 20))();
(**(void (***)(signed int, DWORD))dword_1023810)(53, 0.0);
(**(void (***)(signed int, DWORD))dword_1023C30)(16, 2.0);
}
else
{
(*(void (**)(void))(*(DWORD *)dword_1023E0C + 20))();
}
}
}
// 1023810: using guessed type int dword_1023810;
// 1023BE0: using guessed type int dword_1023BE0;
// 1023BE8: using guessed type int dword_1023BE8;
// 1023C10: using guessed type int dword_1023C10;
// 1023C18: using guessed type int dword_1023C18;
// 1023C20: using guessed type int dword_1023C20;
// 1023C30: using guessed type int dword_1023C30;
// 1023DDC: using guessed type int dword_1023DDC;
// 1023E0C: using guessed type int dword_1023E0C;

//----- (0100DC3C) --------------------------------------------------------
void WormHoleDestinationControl(int a1, int a2, struct TPinballComponent *a3)
{
char *v3; // eax
int v4; // eax

if ( a2 == 63 )
{
if ( !light_on((struct component_tag *)&lite110) )
{
(**(void (***)(signed int, DWORD))dword_1023C44)(15, 3.0);
v3 = get_rc_string(93, 0);
TTextBox::Display(dword_1023E1C, a1, v3, 2.0);
}
v4 = (*(int (**)(DWORD))(*(DWORD *)a3 + 8))(0);
TPinballTable::AddScore(dword_1025040, v4);
AdvanceWormHoleDestination(1);
}
}
// 1023C40: using guessed type char *lite110;
// 1023C44: using guessed type int dword_1023C44;

//----- (0100DCB0) --------------------------------------------------------
void BlackHoleKickoutControl(int a1, int a2, struct TPinballComponent *a3)
{
int v3; // eax
int v4; // ST08_4
CHAR *v5; // eax
char Dest; // [esp+Ch] [ebp-44h]

if ( a2 == 63 )
{
v3 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a3 + 8))(a3, 0);
v4 = TPinballTable::AddScore(dword_1025040, v3);
v5 = get_rc_string(80, 0);
_sprintf(&Dest, v5, v4);
TTextBox::Display(dword_1023E1C, a1, &Dest, 2.0);
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a3)(a3, 55, -1.0);
}
}

//----- (0100DD33) --------------------------------------------------------
void FlagControl(int a1, struct TPinballComponent *a2)
{
int v2; // edi
BOOL v3; // eax
int v4; // eax

if ( a1 == 62 )
{
AdvanceWormHoleDestination(0);
}
else if ( a1 == 63 )
{
v2 = *(DWORD *)a2;
v3 = light_on((struct component_tag *)&lite20);
v4 = (*(int (__thiscall **)(struct TPinballComponent *, BOOL))(v2 + 8))(a2, v3);
TPinballTable::AddScore(dword_1025040, v4);
}
}
// 102393C: using guessed type char *lite20;

//----- (0100DD7A) --------------------------------------------------------
void GravityWellKickoutControl(int a1, int a2, struct TPinballComponent *a3)
{
CHAR *v3; // eax
CHAR *v4; // eax
int v5; // eax
int v6; // ST0C_4
CHAR *v7; // eax
void (__thiscall **v8)(struct TPinballComponent *, signed int, DWORD); // edi
char Dest; // [esp+18h] [ebp-44h]

switch ( a2 )
{
case 63:
v5 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a3 + 8))(a3, 0);
v6 = TPinballTable::AddScore(dword_1025040, v5);
v7 = get_rc_string(81, 0);
_sprintf(&Dest, v7, v6);
TTextBox::Display(dword_1023E1C, a1, &Dest, 2.0);
(**(void (***)(signed int, DWORD))dword_1023C70)(20, 0.0);
v8 = *(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a3;
*((_BYTE *)a3 + 5) = 0;
(*(void (**)(void))(*(DWORD *)dword_1023E14 + 20))();
(*v8)(a3, 55, 0.0);
break;
case 64:
if ( a3 )
{
v4 = get_rc_string(82, 0);
_sprintf(&Dest, v4, a3);
}
else
{
v3 = get_rc_string(45, 0);
_sprintf(&Dest, v3);
}
TTextBox::Display(dword_1023E1C, a1, &Dest, 2.0);
(**(void (***)(signed int, DWORD))dword_1023C70)(4, 0.0);
*(_BYTE *)(dword_1023C68 + 5) = 1;
break;
case 1024:
*(_BYTE *)(dword_1023C68 + 5) = 0;
break;
}
}
// 1023C68: using guessed type int dword_1023C68;
// 1023C70: using guessed type int dword_1023C70;
// 1023E14: using guessed type int dword_1023E14;

//----- (0100DEA5) --------------------------------------------------------
void SkillShotGate1Control(int a1, struct TPinballComponent *a2)
{
if ( a1 == 63 )
{
(**(void (***)(signed int, DWORD))dword_1023D04)(9, 5.0);
if ( light_on((struct component_tag *)&lite67) )
{
(**(void (***)(signed int, DWORD))dword_1023CE4)(34, 0.0);
(**(void (***)(signed int, DWORD))dword_1023CE4)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023CB4)(19, 0.0);
(**(void (***)(signed int, DWORD))dword_1023878)(7, 5.0);
(**(void (***)(signed int, DWORD))dword_10239B0)(7, 5.0);
(**(void (***)(signed int, DWORD))dword_1023978)(45, 11.0);
(*(void (**)(void))(*(DWORD *)dword_1023DF4 + 20))();
}
}
}
// 1023878: using guessed type int dword_1023878;
// 1023978: using guessed type int dword_1023978;
// 10239B0: using guessed type int dword_10239B0;
// 1023CB0: using guessed type char *lite67;
// 1023CB4: using guessed type int dword_1023CB4;
// 1023CE4: using guessed type int dword_1023CE4;
// 1023D04: using guessed type int dword_1023D04;
// 1023DF4: using guessed type int dword_1023DF4;

//----- (0100DF6A) --------------------------------------------------------
void SkillShotGate2Control(int a1, struct TPinballComponent *a2)
{
if ( a1 == 63 )
{
if ( light_on((struct component_tag *)&lite67) )
{
(**(void (***)(signed int, DWORD))dword_1023CBC)(19, 0.0);
(*(void (**)(void))(*(DWORD *)dword_1023DF4 + 20))();
}
}
}
// 1023CB0: using guessed type char *lite67;
// 1023CBC: using guessed type int dword_1023CBC;
// 1023DF4: using guessed type int dword_1023DF4;

//----- (0100DFAB) --------------------------------------------------------
void SkillShotGate3Control(int a1, struct TPinballComponent *a2)
{
if ( a1 == 63 )
{
if ( light_on((struct component_tag *)&lite67) )
{
(**(void (***)(signed int, DWORD))dword_1023CC4)(19, 0.0);
(*(void (**)(void))(*(DWORD *)dword_1023DF4 + 20))();
}
}
}
// 1023CB0: using guessed type char *lite67;
// 1023CC4: using guessed type int dword_1023CC4;
// 1023DF4: using guessed type int dword_1023DF4;

//----- (0100DFEC) --------------------------------------------------------
void SkillShotGate4Control(int a1, struct TPinballComponent *a2)
{
if ( a1 == 63 )
{
if ( light_on((struct component_tag *)&lite67) )
{
(**(void (***)(signed int, DWORD))dword_1023CCC)(19, 0.0);
(*(void (**)(void))(*(DWORD *)dword_1023DF4 + 20))();
}
}
}
// 1023CB0: using guessed type char *lite67;
// 1023CCC: using guessed type int dword_1023CCC;
// 1023DF4: using guessed type int dword_1023DF4;

//----- (0100E02D) --------------------------------------------------------
void SkillShotGate5Control(int a1, struct TPinballComponent *a2)
{
if ( a1 == 63 )
{
if ( light_on((struct component_tag *)&lite67) )
{
(**(void (***)(signed int, DWORD))dword_1023CD4)(19, 0.0);
(*(void (**)(void))(*(DWORD *)dword_1023DF4 + 20))();
}
}
}
// 1023CB0: using guessed type char *lite67;
// 1023CD4: using guessed type int dword_1023CD4;
// 1023DF4: using guessed type int dword_1023DF4;

//----- (0100E06E) --------------------------------------------------------
void SkillShotGate6Control(int a1, struct TPinballComponent *a2)
{
if ( a1 == 63 )
{
if ( light_on((struct component_tag *)&lite67) )
{
(**(void (***)(signed int, DWORD))dword_1023CDC)(19, 0.0);
(*(void (**)(void))(*(DWORD *)dword_1023DF4 + 20))();
}
}
}
// 1023CB0: using guessed type char *lite67;
// 1023CDC: using guessed type int dword_1023CDC;
// 1023DF4: using guessed type int dword_1023DF4;

//----- (0100E0AF) --------------------------------------------------------
void ShootAgainLightControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 60 )
{
if ( *(DWORD *)((char *)a2 + 6) )
{
*(DWORD *)((char *)a2 + 6) = 0;
}
else
{
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, DWORD))a2)(a2, 16, 5.0);
*(DWORD *)((char *)a2 + 6) = 1;
}
}
}

//----- (0100E0ED) --------------------------------------------------------
void EscapeChuteSinkControl(int a1, struct TPinballComponent *a2)
{
if ( a1 == 63 )
(**(void (***)(signed int, DWORD))a2)(56, *(float *)((char *)a2 + 82));
}

//----- (0100E111) --------------------------------------------------------
int cheat_bump_rank(int a1)
{
void (__thiscall ***v1)(DWORD, signed int, DWORD); // esi
int result; // eax
int v3; // edi
CHAR *v4; // ST10_4
CHAR *v5; // eax
char Dest; // [esp+1Ch] [ebp-44h]

v1 = (void (__thiscall ***)(DWORD, signed int, DWORD))dword_1023CF4;
result = (**(int (***)(signed int, DWORD))dword_1023CF4)(37, 0.0);
v3 = result;
if ( result < 9 )
{
(**v1)(v1, 41, 2.0);
v4 = get_rc_string(word_10246EC[2 * v3], 1);
v5 = get_rc_string(83, 0);
_sprintf(&Dest, v5, v4);
TTextBox::Display(tTextBox, a1, &Dest, 8.0);
result = (*(int (**)(void))(*(DWORD *)dword_1023D1C + 20))();
}
return result;
}
// 1023CF4: using guessed type int dword_1023CF4;
// 1023D1C: using guessed type int dword_1023D1C;
// 10246EC: using guessed type int word_10246EC[];

//----- (0100E1B0) --------------------------------------------------------
void pbctrl_bdoor_controller(int a1, int a2)
{
signed int v2; // eax
int v3; // eax
bool v4; // zf

if ( !*(DWORD *)(dword_1023BBC + 6) )
{
if ( a2 <= 77 )
{
if ( a2 == 77 )
{
v3 = dword_1025050;
if ( dword_1025050 == 4 || dword_1025050 == 61 || dword_1025050 == 81 || dword_1025050 == 101 )
goto LABEL_87;
v4 = dword_1025050 == 121;
}
else
{
if ( a2 <= 68 )
{
if ( a2 != 68 )
{
if ( a2 == 32 )
{
if ( dword_1025050 == 26 )
{
dword_1025050 = 27;
return;
}
goto LABEL_77;
}
if ( a2 != 49 )
{
if ( a2 != 65 )
{
if ( a2 != 66 )
{
if ( a2 == 67 )
{
if ( !dword_1025050 )
{
dword_1025050 = 1;
return;
}
if ( dword_1025050 == 11 )
{
dword_1025050 = 12;
return;
}
}
goto LABEL_77;
}
v2 = dword_1025050 != 0 ? 0 : 81;
goto LABEL_88;
}
v3 = dword_1025050;
if ( dword_1025050 == 5 || dword_1025050 == 62 || dword_1025050 == 82 || dword_1025050 == 102 )
goto LABEL_87;
v4 = dword_1025050 == 122;
goto LABEL_86;
}
v2 = dword_1025050 != 0 ? 0 : 61;
LABEL_88:
dword_1025050 = v2;
return;
}
if ( dword_1025050 != 22 && dword_1025050 != 23 )
goto LABEL_77;
LABEL_58:
++dword_1025050;
return;
}
if ( a2 != 69 )
{
switch ( a2 )
{
case 71:
v2 = dword_1025050 != 0 ? 0 : 101;
break;
case 72:
v2 = dword_1025050 != 0 ? 0 : 21;
break;
case 73:
v3 = dword_1025050;
if ( dword_1025050 == 1 || dword_1025050 == 10 )
goto LABEL_87;
v4 = dword_1025050 == 21;
goto LABEL_86;
default:
goto LABEL_77;
}
goto LABEL_88;
}
v3 = dword_1025050;
if ( dword_1025050 == 3 || dword_1025050 == 24 || dword_1025050 == 28 )
goto LABEL_87;
v4 = dword_1025050 == 44;
}
goto LABEL_86;
}
if ( a2 <= 83 )
{
if ( a2 == 83 )
{
v3 = dword_1025050;
if ( dword_1025050 == 12 || dword_1025050 == 29 )
goto LABEL_87;
v4 = dword_1025050 == 45;
}
else
{
if ( a2 != 78 )
{
if ( a2 != 79 )
{
if ( a2 != 81 )
{
if ( a2 == 82 )
{
if ( !dword_1025050 )
{
dword_1025050 = 121;
return;
}
if ( dword_1025050 == 7 )
{
dword_1025050 = 8;
return;
}
}
goto LABEL_77;
}
v2 = dword_1025050 != 0 ? 0 : 41;
goto LABEL_88;
}
if ( dword_1025050 != 8 && dword_1025050 != 42 )
goto LABEL_77;
goto LABEL_58;
}
v3 = dword_1025050;
if ( dword_1025050 == 2 || dword_1025050 == 9 )
goto LABEL_87;
v4 = dword_1025050 == 25;
}
LABEL_86:
if ( v4 )
{
LABEL_87:
v2 = v3 + 1;
goto LABEL_88;
}
LABEL_77:
dword_1025050 = 0;
return;
}
switch ( a2 )
{
case 84:
v3 = dword_1025050;
if ( dword_1025050 != 30 )
{
if ( dword_1025050 == 27 || dword_1025050 == 6 )
goto LABEL_87;
v4 = dword_1025050 == 43;
goto LABEL_86;
}
cheat_mode = 1;
break;
case 85:
if ( dword_1025050 == 41 )
{
dword_1025050 = 42;
return;
}
goto LABEL_77;
case 88:
if ( dword_1025050 == 63 )
{
table_add_extra_ball(a1, 2.0);
goto LABEL_76;
}
if ( dword_1025050 != 83 )
{
if ( dword_1025050 == 103 )
{
GravityWellKickoutControl(a1, 64, 0);
}
else
{
if ( dword_1025050 != 123 )
goto LABEL_77;
cheat_bump_rank(a1);
}
LABEL_76:
*(DWORD *)((char *)dword_1025040 + 62) = 1;
goto LABEL_77;
}
dword_1025044 = 1;
break;
default:
goto LABEL_77;
}
*(DWORD *)((char *)dword_1025040 + 62) = 1;
goto LABEL_77;
}
}
// 1023BBC: using guessed type int dword_1023BBC;
// 1024FF8: using guessed type int cheat_mode;
// 1025044: using guessed type int dword_1025044;
// 1025050: using guessed type int dword_1025050;


//----- (01011EC9) --------------------------------------------------------
void control_handler(int a1, struct TPinballComponent *a2)
{
int v2; // esi
int v3; // edi

v2 = *(DWORD *)((char *)a2 + 18);
v3 = 0;
if ( v2 )
{
if ( a1 == 1019 && *(DWORD *)(v2 + 4) > 0 )
{
do
{
(*(void (__thiscall **)(struct TPinballComponent *, int, DWORD))(*(DWORD *)a2 + 12))(
a2,
v3,
*(DWORD *)(*(DWORD *)(v2 + 8) + 4 * v3));
++v3;
}
while ( v3 < *(DWORD *)(v2 + 4) );
}
(*(void (**)(int, struct TPinballComponent *))v2)(a1, a2);
}
MissionControl(a1, a2);
}

//----- (01011F1A) --------------------------------------------------------
void HyperspaceKickOutControl(int a1, struct TPinballComponent *a2)
{
double v2; // st7
int v3; // eax
struct TPinballComponent *v4; // eax
int v5; // eax
CHAR *v6; // eax
int v7; // eax
int v8; // ST30_4
CHAR *v9; // eax
int v10; // eax
int v11; // ST30_4
CHAR *v12; // eax
TPinballTable *v13; // eax
DWORD *v14; // eax
int v15; // ecx
int v16; // [esp+30h] [ebp-5Ch]
int v17; // [esp+40h] [ebp-4Ch]
signed int v18; // [esp+44h] [ebp-48h]
float v19; // [esp+44h] [ebp-48h]
char Dest; // [esp+48h] [ebp-44h]

v18 = 0;
if ( a1 == 63 )
{
v2 = 0.0;
v17 = (**(int (***)(signed int, DWORD))dword_10239A8)(37, 0.0);
HyperspaceLightGroupControl(41, dword_10239A8);
if ( v17 )
{
if ( v17 == 1 )
{
v8 = SpecialAddScore(*(DWORD *)((char *)dword_1025040 + 314));
v9 = get_rc_string(14, 0);
_sprintf(&Dest, v9, v8);
v2 = 2.0;
TTextBox::Display(dword_1023E1C, (int)a2, &Dest, 2.0);
*(DWORD *)((char *)dword_1025040 + 314) = 20000;
goto LABEL_13;
}
if ( v17 == 2 )
{
DrainBallBlockerControl(52, dword_1023860);
v7 = (*(int (__thiscall **)(struct TPinballComponent *, signed int))(*(DWORD *)a2 + 8))(a2, 2);
v16 = TPinballTable::AddScore(dword_1025040, v7);
v6 = get_rc_string(2, 0);
}
else
{
if ( v17 != 3 )
{
if ( v17 == 4 )
{
v2 = 0.0;
(**(void (***)(DWORD, DWORD))dword_10239A8)(0, 0.0);
v3 = (*(int (__thiscall **)(struct TPinballComponent *, signed int))(*(DWORD *)a2 + 8))(a2, 4);
v4 = (struct TPinballComponent *)TPinballTable::AddScore(dword_1025040, v3);
GravityWellKickoutControl((int)a2, 64, v4);
}
LABEL_13:
if ( light_on((struct component_tag *)&lite25) )
{
v18 = 1;
v11 = SpecialAddScore(*(DWORD *)((char *)dword_1025040 + 302));
v12 = get_rc_string(10, 0);
_sprintf(&Dest, v12, v11);
v2 = 2.0;
TTextBox::Display(dword_1023E1C, (int)a2, &Dest, 2.0);
}
if ( light_on((struct component_tag *)&lite26) )
v18 |= 2u;
if ( light_on((struct component_tag *)&lite130) )
{
v18 |= 4u;
(**(void (***)(signed int, DWORD))dword_10239C0)(20, 0.0);
MultiplierLightGroupControl((int)a2, 64, dword_1023B38);
(**(void (***)(signed int, DWORD))dword_1023B0C)(19, 0.0);
table_set_jackpot((int)a2);
table_set_bonus((int)a2);
table_set_flag_lights((int)a2);
table_set_bonus_hold((int)a2);
(**(void (***)(signed int, DWORD))dword_10238D0)(19, 0.0);
v2 = 0.0;
(**(void (***)(signed int, DWORD))dword_10238D8)(19, 0.0);
ExtraBallLightControl(19, 0);
DrainBallBlockerControl(52, dword_1023860);
v13 = dword_1025040;
if ( *(DWORD *)((char *)dword_1025040 + 346) )
{
table_set_multiball((int)a2);
v13 = dword_1025040;
}
if ( *(DWORD *)((char *)v13 + 314) < 100000 )
*(DWORD *)((char *)v13 + 314) = 100000;
v14 = (DWORD *)((char *)v13 + 306);
if ( *v14 < 100000 )
*v14 = 100000;
GravityWellKickoutControl((int)a2, 64, 0);
}
if ( v18 )
{
if ( v18 == 1 )
{
v15 = dword_1023D24;
}
else
{
if ( v18 <= 1 || v18 > 3 )
{
(*(void (**)(void))(*(DWORD *)dword_1023D6C + 20))();
v19 = v2;
(*(void (**)(void))(*(DWORD *)dword_1023D74 + 20))();
(*(void (**)(void))(*(DWORD *)dword_1023D7C + 20))();
LABEL_42:
(**(void (***)(signed int, DWORD))dword_10239B0)(7, 5.0);
(**(void (__thiscall ***)(struct TPinballComponent *, signed int, float))a2)(
a2,
55,
COERCE_FLOAT(LODWORD(v19)));
return;
}
v15 = dword_1023D64;
}
}
else
{
switch ( v17 )
{
case 1:
v15 = dword_1023D8C;
break;
case 2:
v15 = dword_1023D94;
break;
case 3:
v15 = dword_1023D9C;
break;
case 4:
v15 = dword_1023DA4;
break;
default:
v15 = dword_1023D84;
break;
}
}
(*(void (**)(void))(*(DWORD *)v15 + 20))();
v19 = v2;
goto LABEL_42;
}
ExtraBallLightControl(19, 0);
v5 = (*(int (__thiscall **)(struct TPinballComponent *, signed int))(*(DWORD *)a2 + 8))(a2, 3);
v16 = TPinballTable::AddScore(dword_1025040, v5);
v6 = get_rc_string(8, 0);
}
}
else
{
v10 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a2 + 8))(a2, 0);
v16 = TPinballTable::AddScore(dword_1025040, v10);
v6 = get_rc_string(12, 0);
}
_sprintf(&Dest, v6, v16);
v2 = 2.0;
TTextBox::Display(dword_1023E1C, (int)a2, &Dest, 2.0);
goto LABEL_13;
}
}
// 10238D0: using guessed type int dword_10238D0;
// 10238D8: using guessed type int dword_10238D8;
// 10239AC: using guessed type char *lite25;
// 10239B0: using guessed type int dword_10239B0;
// 10239B4: using guessed type char *lite26;
// 10239BC: using guessed type char *lite130;
// 10239C0: using guessed type int dword_10239C0;
// 1023D24: using guessed type int dword_1023D24;
// 1023D64: using guessed type int dword_1023D64;
// 1023D6C: using guessed type int dword_1023D6C;
// 1023D74: using guessed type int dword_1023D74;
// 1023D7C: using guessed type int dword_1023D7C;
// 1023D84: using guessed type int dword_1023D84;
// 1023D8C: using guessed type int dword_1023D8C;
// 1023D94: using guessed type int dword_1023D94;
// 1023D9C: using guessed type int dword_1023D9C;
// 1023DA4: using guessed type int dword_1023DA4;

//----- (01012285) --------------------------------------------------------
void PlungerControl(int a1, int a2, struct TPinballComponent *a3)
{
int (**v3)(signed int, DWORD); // eax
void (__thiscall ***v4)(DWORD, signed int, DWORD); // esi
void (__thiscall ***v5)(DWORD, signed int, DWORD); // esi

if ( a2 == 1015 )
{
MissionControl(67, 0);
}
else if ( a2 == 1016 )
{
v3 = *(int (***)(signed int, DWORD))dword_1023CF4;
dword_1025044 = 0;
if ( !(*v3)(37, 0.0) )
(**(void (***)(signed int, DWORD))dword_1023CF4)(32, 0.0);
if ( !light_on((struct component_tag *)&lite200) )
{
(**(void (***)(signed int, DWORD))dword_1023CE4)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023CB4)(19, 0.0);
(**(void (***)(signed int, DWORD))dword_1023CE4)(26, 0.25);
v4 = (void (__thiscall ***)(DWORD, signed int, DWORD))dword_1023A8C;
(**(void (***)(signed int, DWORD))dword_1023A8C)(20, 0.0);
(**v4)(v4, 32, 0.2);
(**v4)(v4, 26, 0.2);
v5 = (void (__thiscall ***)(DWORD, signed int, DWORD))dword_1023A94;
(**(void (***)(signed int, DWORD))dword_1023A94)(20, 0.0);
(**v5)(v5, 32, 0.2);
(**v5)(v5, 26, 0.2);
*(DWORD *)((char *)dword_1025040 + 302) = 25000;
MultiplierLightGroupControl(a1, 65, dword_1023B38);
(**(void (***)(signed int, DWORD))dword_1023978)(19, 0.0);
(**(void (***)(signed int, DWORD))dword_1023D04)(19, 0.0);
(**(void (***)(signed int, DWORD))dword_1023808)(53, 0.0);
(**(void (***)(signed int, DWORD))dword_1023810)(53, 0.0);
}
*(DWORD *)(dword_1023D04 + 6) = 0;
}
}
// 1023808: using guessed type int dword_1023808;
// 1023810: using guessed type int dword_1023810;
// 1023978: using guessed type int dword_1023978;
// 1023A8C: using guessed type int dword_1023A8C;
// 1023A94: using guessed type int dword_1023A94;
// 1023CB4: using guessed type int dword_1023CB4;
// 1023CE4: using guessed type int dword_1023CE4;
// 1023CF4: using guessed type int dword_1023CF4;
// 1023D00: using guessed type char *lite200;
// 1023D04: using guessed type int dword_1023D04;
// 1025044: using guessed type int dword_1025044;

//----- (0101240D) --------------------------------------------------------
void MedalTargetControl(int a1, int a2, int a3, int a4, struct TPinballComponent *a5)
{
int v5; // eax
char *v6; // eax
int v7; // eax
char *v8; // eax
int v9; // eax
int v10; // eax
float v11; // [esp+24h] [ebp-4h]

if ( a4 == 63 && !*(DWORD *)((char *)a5 + 6) )
{
*(DWORD *)((char *)a5 + 6) = 1;
if ( *(DWORD *)(dword_1023ADC + 6) + *(DWORD *)(dword_1023AE4 + 6) + *(DWORD *)(dword_1023AEC + 6) == 3 )
{
MedalLightGroupControl(41, dword_1023B0C);
v5 = (**(int (***)(signed int, DWORD, int, int))dword_1023B0C)(37, 0.0, a2, a3) - 1;
if ( v5 )
{
if ( v5 != 1 )
{
v6 = get_rc_string(55, 0);
TTextBox::Display(dword_1023E1C, a1, v6, 2.0);
table_add_extra_ball(a1, 4.0);
LABEL_10:
*(DWORD *)(dword_1023ADC + 6) = 0;
(**(void (__cdecl ***)(signed int, DWORD))dword_1023ADC)(50, 0.0);
*(DWORD *)(dword_1023AE4 + 6) = 0;
(**(void (***)(signed int, DWORD))dword_1023AE4)(50, 0.0);
*(DWORD *)(dword_1023AEC + 6) = 0;
(**(void (***)(signed int, DWORD))dword_1023AEC)(50, 0.0);
return;
}
v7 = (*(int (__thiscall **)(struct TPinballComponent *, signed int))(*(DWORD *)a5 + 8))(a5, 2);
TPinballTable::AddScore(dword_1025040, v7);
v11 = 2.0;
v8 = get_rc_string(54, 0);
}
else
{
v9 = (*(int (__thiscall **)(struct TPinballComponent *, signed int))(*(DWORD *)a5 + 8))(a5, 1);
TPinballTable::AddScore(dword_1025040, v9);
v11 = 2.0;
v8 = get_rc_string(53, 0);
}
TTextBox::Display(dword_1023E1C, a1, v8, v11);
goto LABEL_10;
}
v10 = (*(int (__thiscall **)(struct TPinballComponent *, DWORD))(*(DWORD *)a5 + 8))(a5, 0);
TPinballTable::AddScore(dword_1025040, v10);
}
}
// 101240D: could not find valid save-restore pair for edi
// 101240D: could not find valid save-restore pair for esi
// 1023ADC: using guessed type int dword_1023ADC;
// 1023AE4: using guessed type int dword_1023AE4;
// 1023AEC: using guessed type int dword_1023AEC;

//----- (01012570) --------------------------------------------------------
void MultiplierTargetControl(int a1, int a2, int a3, int a4, struct TPinballComponent *a5)
{
int v5; // eax
int v6; // eax
int (**v7)(signed int, DWORD); // eax
int v8; // eax
int v9; // eax
char *v10; // eax
void (**v11)(signed int); // eax
int v12; // eax
float vars0; // [esp+28h] [ebp+0h]

if ( a4 == 63 && !*(DWORD *)((char *)a5 + 6) )
{
*(DWORD *)((char *)a5 + 6) = 1;
v5 = *(DWORD *)a5;
if ( *(DWORD *)(dword_1023B20 + 6) + *(DWORD *)(dword_1023B28 + 6) + *(DWORD *)(dword_1023B30 + 6) == 3 )
{
v6 = (*(int (**)(signed int, int, int, DWORD))(v5 + 8))(1, a3, a2, LODWORD(vars0));
TPinballTable::AddScore(dword_1025040, v6);
MultiplierLightGroupControl(a1, 41, dword_1023B38);
v7 = *(int (***)(signed int, DWORD))dword_1023B38;
vars0 = 0.0;
v8 = (*v7)(37, 0.0) - 1;
vars0 = 2.0;
if ( v8 )
{
v9 = v8 - 1;
if ( v9 )
{
if ( v9 == 1 )
{
*(DWORD *)((char *)dword_1025040 + 294) = 3;
v10 = get_rc_string(58, 0);
}
else
{
*(DWORD *)((char *)dword_1025040 + 294) = 4;
v10 = get_rc_string(59, 0);
}
}
else
{
*(DWORD *)((char *)dword_1025040 + 294) = 2;
v10 = get_rc_string(57, 0);
}
}
else
{
*(DWORD *)((char *)dword_1025040 + 294) = 1;
v10 = get_rc_string(56, 0);
}
TTextBox::Display(dword_1023E1C, a1, v10, vars0);
*(DWORD *)(dword_1023B20 + 6) = 0;
v11 = *(void (***)(signed int))dword_1023B20;
vars0 = 0.0;
(*v11)(50);
*(DWORD *)(dword_1023B28 + 6) = 0;
(**(void (__cdecl ***)(signed int, DWORD))dword_1023B28)(50, 0.0);
*(DWORD *)(dword_1023B30 + 6) = 0;
(**(void (***)(signed int, DWORD))dword_1023B30)(50, 0.0);
}
else
{
v12 = (*(int (**)(DWORD))(v5 + 8))(0);
TPinballTable::AddScore(dword_1025040, v12);
}
}
}
// 1012570: could not find valid save-restore pair for edi
// 1012570: could not find valid save-restore pair for esi
// 1023B20: using guessed type int dword_1023B20;
// 1023B28: using guessed type int dword_1023B28;
// 1023B30: using guessed type int dword_1023B30;

//----- (010126BA) --------------------------------------------------------
void BallDrainControl(int a1, struct TPinballComponent *a2)
{
TPinballTable *v2; // esi
char *v3; // eax
char *v4; // eax
int v5; // ST1E8_4
CHAR *v6; // eax
int v7; // ecx
int v8; // eax
int v9; // eax
char *v10; // eax
char *v11; // eax
int v12; // [esp+1ECh] [ebp-50h]
int v13; // [esp+1F0h] [ebp-4Ch]
char Dest; // [esp+1F8h] [ebp-44h]

if ( a1 == 60 )
{
if ( *(DWORD *)(dword_1023D0C + 6) )
{
(**(void (***)(signed int, DWORD))dword_1025040)(1022, 0.0);
if ( pb_chk_highscore() )
{
(*(void (**)(void))(*(DWORD *)dword_1023DFC + 20))();
(***(void (****)(signed int, DWORD))((char *)dword_1025040 + 266))(16, 3.0);
v11 = get_rc_string(177, 0);
TTextBox::Display(tTextBox, 0, v11, -1.0);
}
}
else
{
(**(void (***)(signed int, DWORD))dword_1023A84)(1016, 0.0);
}
}
else if ( a1 == 63 )
{
if ( dword_1025044 )
{
(**(void (***)(signed int, DWORD))dword_1023C7C)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_10239FC)(56, 0.0);
}
else
{
v2 = dword_1025040;
if ( *(DWORD *)((char *)dword_1025040 + 370) )
{
(**(void (***)(signed int, DWORD))dword_1023D04)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023D0C)(20, 0.0);
v2 = dword_1025040;
}
if ( light_on((struct component_tag *)&lite200) )
{
(*(void (**)(void))(*(DWORD *)dword_1023DEC + 20))();
(**(void (***)(signed int, DWORD))dword_1023D04)(19, 0.0);
v3 = get_rc_string(96, 0);
TTextBox::Display(dword_1023E1C, 0, v3, -1.0);
(*(void (**)(void))(*(DWORD *)dword_1023DE4 + 20))();
}
else if ( light_on((struct component_tag *)&lite199) )
{
(*(void (**)(void))(*(DWORD *)dword_1023DEC + 20))();
(**(void (***)(signed int, DWORD))dword_1023D0C)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023D04)(19, 0.0);
v4 = get_rc_string(95, 0);
TTextBox::Display(dword_1023E1C, 0, v4, 2.0);
(*(void (**)(void))(*(DWORD *)dword_1023DE4 + 20))();
--*(DWORD *)((char *)dword_1025040 + 350);
}
else if ( *(DWORD *)((char *)v2 + 338) )
{
(*(void (**)(void))(*(DWORD *)dword_1023DEC + 20))();
--*(DWORD *)((char *)dword_1025040 + 338);
}
else
{
if ( !*(DWORD *)((char *)v2 + 370) )
{
v5 = SpecialAddScore(*(DWORD *)((char *)v2 + 306));
v6 = get_rc_string(94, 0);
_sprintf(&Dest, v6, v5);
TTextBox::Display(dword_1023E1C, 0, &Dest, 2.0);
v2 = dword_1025040;
}
v7 = *(DWORD *)((char *)v2 + 334);
if ( v7 )
{
*(DWORD *)((char *)v2 + 334) = v7 - 1;
(*(void (**)(void))(*(DWORD *)dword_1023DE4 + 20))();
v8 = *(DWORD *)((char *)dword_1025040 + 218);
if ( v8 )
{
v9 = v8 - 1;
if ( v9 )
{
if ( v9 == 1 )
v10 = get_rc_string(99, 0);
else
v10 = get_rc_string(100, 0);
}
else
{
v10 = get_rc_string(98, 0);
}
}
else
{
v10 = get_rc_string(97, 0);
}
TTextBox::Display(dword_1023E1C, 0, v10, -1.0);
}
else
{
TPinballTable::ChangeBallCount(v2, 0, *(DWORD *)((char *)v2 + 326) - 1);
if ( *(DWORD *)((char *)dword_1025040 + 218) + 1 != *(DWORD *)((char *)dword_1025040 + 214)
|| *(DWORD *)((char *)dword_1025040 + 326) )
{
(**(void (***)(signed int, DWORD))dword_1025040)(1021, 0.0);
*(DWORD *)(dword_1023D0C + 6) = 0;
}
else
{
*(DWORD *)(dword_1023D0C + 6) = 1;
}
(*(void (**)(void))(*(DWORD *)dword_1023DEC + 20))();
}
(**(void (***)(signed int, DWORD, int, int))dword_1023724)(20, 0.0, v12, v13);
(**(void (***)(signed int, DWORD))dword_1023790)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023818)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023820)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023868)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023878)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023880)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023888)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10238AC)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10238B4)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10238D0)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10238D8)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10238F0)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023940)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10239A8)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10239B0)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10239B8)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10239C0)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_10239D0)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023A1C)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023A3C)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023A8C)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023A94)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023ABC)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023AC4)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023AB4)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023B0C)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023B38)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023B78)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023BB4)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023C28)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023C30)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023C44)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023CE4)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023CEC)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023BBC)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023828)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023830)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023978)(20, 0.0);
(**(void (***)(signed int, DWORD))dword_1023978)(1024, 0.0);
GravityWellKickoutControl(0, 1024, 0);
(**(void (***)(signed int, DWORD))dword_1023C70)(20, 0.0);
*(DWORD *)(dword_1023A24 + 6) = 0;
*(DWORD *)(dword_1023B9C + 6) = 0;
*(DWORD *)(dword_1023BA4 + 6) = 0;
*(DWORD *)(dword_1023BAC + 6) = 0;
*(DWORD *)(dword_1023BB4 + 6) = 0;
(**(void (***)(signed int, DWORD))dword_1023CFC)(34, 0.0);
(**(void (***)(signed int, DWORD))dword_1023CF4)(34, 0.0);
(**(void (***)(signed int, DWORD))dword_1023704)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023770)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023808)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023810)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023860)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023A9C)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023AA4)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023AAC)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023ADC)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023AE4)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023AEC)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023B20)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023B28)(1024, 0.0);
(**(void (***)(signed int, DWORD))dword_1023B30)(1024, 0.0);
if ( *(DWORD *)(dword_1023D0C + 6) )
*(DWORD *)(dword_1023BBC + 6) = 32;
else
*(DWORD *)(dword_1023BBC + 6) = 0;
MissionControl(66, 0);
(**(void (__cdecl ***)(signed int, DWORD))dword_1025040)(1012, 0.0);
if ( light_on((struct component_tag *)&lite58) )
(**(void (***)(signed int, DWORD))dword_1023ACC)(20, 0.0);
else
*(DWORD *)((char *)dword_1025040 + 306) = 25000;
}
}
}
}
// 1023704: using guessed type int dword_1023704;
// 1023724: using guessed type int dword_1023724;
// 1023770: using guessed type int dword_1023770;
// 1023790: using guessed type int dword_1023790;
// 1023808: using guessed type int dword_1023808;
// 1023810: using guessed type int dword_1023810;
// 1023818: using guessed type int dword_1023818;
// 1023820: using guessed type int dword_1023820;
// 1023828: using guessed type int dword_1023828;
// 1023830: using guessed type int dword_1023830;
// 1023868: using guessed type int dword_1023868;
// 1023878: using guessed type int dword_1023878;
// 1023880: using guessed type int dword_1023880;
// 1023888: using guessed type int dword_1023888;
// 10238AC: using guessed type int dword_10238AC;
// 10238B4: using guessed type int dword_10238B4;
// 10238D0: using guessed type int dword_10238D0;
// 10238D8: using guessed type int dword_10238D8;
// 10238F0: using guessed type int dword_10238F0;
// 1023940: using guessed type int dword_1023940;
// 1023978: using guessed type int dword_1023978;
// 10239B0: using guessed type int dword_10239B0;
// 10239B8: using guessed type int dword_10239B8;
// 10239C0: using guessed type int dword_10239C0;
// 10239D0: using guessed type int dword_10239D0;
// 10239FC: using guessed type int dword_10239FC;
// 1023A1C: using guessed type int dword_1023A1C;
// 1023A24: using guessed type int dword_1023A24;
// 1023A3C: using guessed type int dword_1023A3C;
// 1023A84: using guessed type int dword_1023A84;
// 1023A8C: using guessed type int dword_1023A8C;
// 1023A94: using guessed type int dword_1023A94;
// 1023A9C: using guessed type int dword_1023A9C;
// 1023AA4: using guessed type int dword_1023AA4;
// 1023AAC: using guessed type int dword_1023AAC;
// 1023AB4: using guessed type int dword_1023AB4;
// 1023ABC: using guessed type int dword_1023ABC;
// 1023AC4: using guessed type int dword_1023AC4;
// 1023AC8: using guessed type char *lite58;
// 1023ACC: using guessed type int dword_1023ACC;
// 1023ADC: using guessed type int dword_1023ADC;
// 1023AE4: using guessed type int dword_1023AE4;
// 1023AEC: using guessed type int dword_1023AEC;
// 1023B20: using guessed type int dword_1023B20;
// 1023B28: using guessed type int dword_1023B28;
// 1023B30: using guessed type int dword_1023B30;
// 1023B78: using guessed type int dword_1023B78;
// 1023B9C: using guessed type int dword_1023B9C;
// 1023BA4: using guessed type int dword_1023BA4;
// 1023BAC: using guessed type int dword_1023BAC;
// 1023BB4: using guessed type int dword_1023BB4;
// 1023BBC: using guessed type int dword_1023BBC;
// 1023C28: using guessed type int dword_1023C28;
// 1023C30: using guessed type int dword_1023C30;
// 1023C44: using guessed type int dword_1023C44;
// 1023C70: using guessed type int dword_1023C70;
// 1023C7C: using guessed type int dword_1023C7C;
// 1023CE4: using guessed type int dword_1023CE4;
// 1023CEC: using guessed type int dword_1023CEC;
// 1023CF4: using guessed type int dword_1023CF4;
// 1023CFC: using guessed type int dword_1023CFC;
// 1023D00: using guessed type char *lite200;
// 1023D04: using guessed type int dword_1023D04;
// 1023D08: using guessed type char *lite199;
// 1023D0C: using guessed type int dword_1023D0C;
// 1023DE4: using guessed type int dword_1023DE4;
// 1023DEC: using guessed type int dword_1023DEC;
// 1023DFC: using guessed type int dword_1023DFC;
// 1025044: using guessed type int dword_1025044;
