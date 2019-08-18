#include "pinball.h"


//----- (0100C0EE) --------------------------------------------------------
void table_set_replay(int a1, float a2)
{
char *v2; // eax

(**(void (***)(signed int, DWORD))dword_1023D0C)(19, 0.0);
v2 = get_rc_string(0, 0);
TTextBox::Display(dword_1023E1C, a1, v2, a2);
}
// 1023D0C: using guessed type int dword_1023D0C;

//----- (0100C12A) --------------------------------------------------------
void table_set_multiball(int a1)
{
char *v1; // eax

v1 = get_rc_string(16, 0);
TTextBox::Display(dword_1023E1C, a1, v1, 2.0);
}

//----- (0100C14F) --------------------------------------------------------
void table_set_jackpot(int a1)
{
char *v1; // eax

*(DWORD *)((char *)dword_1025040 + 318) = 1;
(**(void (***)(signed int, DWORD))dword_1023ABC)(9, 60.0);
v1 = get_rc_string(15, 0);
TTextBox::Display(dword_1023E1C, a1, v1, 2.0);
}
// 1023ABC: using guessed type int dword_1023ABC;

//----- (0100C199) --------------------------------------------------------
void table_set_bonus(int a1)
{
char *v1; // eax

*(DWORD *)((char *)dword_1025040 + 310) = 1;
(**(void (***)(signed int, DWORD))dword_1023AC4)(9, 60.0);
v1 = get_rc_string(4, 0);
TTextBox::Display(dword_1023E1C, a1, v1, 2.0);
}
// 1023AC4: using guessed type int dword_1023AC4;

//----- (0100C1E3) --------------------------------------------------------
void table_set_flag_lights(int a1)
{
char *v1; // eax

(**(void (***)(signed int, DWORD))dword_1023940)(9, 60.0);
(**(void (***)(signed int, DWORD))dword_10239D0)(9, 60.0);
(**(void (***)(signed int, DWORD))dword_1023AB4)(9, 60.0);
v1 = get_rc_string(51, 0);
TTextBox::Display(dword_1023E1C, a1, v1, 2.0);
}
// 1023940: using guessed type int dword_1023940;
// 10239D0: using guessed type int dword_10239D0;
// 1023AB4: using guessed type int dword_1023AB4;

//----- (0100C24A) --------------------------------------------------------
void table_set_bonus_hold(int a1)
{
char *v1; // eax

(**(void (***)(signed int, DWORD))dword_1023ACC)(19, 0.0);
v1 = get_rc_string(52, 0);
TTextBox::Display(dword_1023E1C, a1, v1, 2.0);
}
// 1023ACC: using guessed type int dword_1023ACC;

//----- (0100C281) --------------------------------------------------------
void table_bump_ball_sink_lock(int a1)
{
int v1; // ecx
char *v2; // eax

v1 = *(DWORD *)((char *)dword_1025040 + 342);
if ( v1 == 2 )
{
table_set_multiball(a1);
*(DWORD *)((char *)dword_1025040 + 342) = 0;
}
else
{
*(DWORD *)((char *)dword_1025040 + 342) = v1 + 1;
(*(void (**)(void))(*(DWORD *)dword_1023DAC + 20))();
v2 = get_rc_string(1, 0);
TTextBox::Display(dword_1023E1C, a1, v2, 2.0);
(***(void (****)(signed int, DWORD))((char *)dword_1025040 + 222))(1016, 0.0);
}
}
// 1023DAC: using guessed type int dword_1023DAC;

//----- (0100C2F3) --------------------------------------------------------
void table_add_extra_ball(int a1, float a2)
{
char *v2; // eax

++*(DWORD *)((char *)dword_1025040 + 334);
(*(void (**)(void))(*(DWORD *)dword_1023D44 + 20))();
v2 = get_rc_string(9, 0);
TTextBox::Display(dword_1023E1C, a1, v2, a2);
}
// 1023D44: using guessed type int dword_1023D44;