#include "pinball.h"


void FUN_0100c56c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0x35) {
    (**(code **)*DAT_01023818)(0xf,0x40a00000);
    uVar2 = 0x40a00000;
    uVar1 = 7;
  }
  else {
    if (param_1 != 0x36) {
      return;
    }
    (**(code **)*DAT_01023818)(0x14,0);
    uVar2 = 0;
    uVar1 = 0x14;
  }
  (**(code **)*DAT_01023828)(uVar1,uVar2);
  return;
}



void FUN_0100c5d3(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0x35) {
    (**(code **)*DAT_01023820)(0xf,0x40a00000);
    uVar2 = 0x40a00000;
    uVar1 = 7;
  }
  else {
    if (param_1 != 0x36) {
      return;
    }
    (**(code **)*DAT_01023820)(0x14,0);
    uVar2 = 0;
    uVar1 = 0x14;
  }
  (**(code **)*DAT_01023830)(uVar1,uVar2);
  return;
}



void FUN_0100c63a(int param_1,int *param_2)

{
  code **ppcVar1;
  int iVar2;
  LPSTR _Format;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if ((param_1 == 0x3f) && (iVar2 = (**(code **)*DAT_01023ce4)(0x25,0), iVar2 != 0)) {
    (**(code **)(*DAT_01023dfc + 0x14))();
    iVar2 = (**(code **)(*param_2 + 8))(iVar2 + -1);
    iVar2 = FUN_01017526(DAT_01025040,iVar2);
    _Format = FUN_01003752(0x15);
    sprintf(local_48,_Format,iVar2);
    FUN_010144b7(local_48,0x40000000);
    iVar2 = FUN_0100c092((int)&PTR_s_lite56_01023884);
    ppcVar1 = DAT_01023a8c;
    if (iVar2 == 0) {
      (**(code **)*DAT_01023a8c)(0x22,0);
      (**(code **)*ppcVar1)(0x14,0);
      ppcVar1 = DAT_01023a94;
      (**(code **)*DAT_01023a94)(0x22,0);
      (**(code **)*ppcVar1)(0x14,0);
    }
    (**(code **)*DAT_01023ce4)(0x2c,0x3f800000);
  }
  FUN_0101cd9e();
  return;
}



void FUN_0100c73e(int param_1)

{
  if (param_1 == 0x3f) {
    (**(code **)*DAT_01023ce4)(0x14,0);
  }
  return;
}



void FUN_0100c764(int param_1,undefined **param_2)

{
  int iVar1;
  code **ppcVar2;
  undefined4 uVar3;
  float local_c;
  
  if (param_1 == 0x34) {
    *(undefined4 *)((int)param_2 + 6) = 1;
    (**(code **)*param_2)(0x34,(float)*(int *)((int)param_2 + 0x4e));
    iVar1 = *(int *)((int)param_2 + 0x4e);
    uVar3 = 9;
  }
  else {
    if (param_1 != 0x3c) {
      return;
    }
    ppcVar2 = (code **)*param_2;
    if (*(int *)((int)param_2 + 6) != 1) {
      *(undefined4 *)((int)param_2 + 6) = 0;
      local_c = 0.00000000;
      uVar3 = 0x33;
      goto LAB_0100c7dd;
    }
    *(undefined4 *)((int)param_2 + 6) = 2;
    (**ppcVar2)(0x3b,(float)*(int *)((int)param_2 + 0x52));
    iVar1 = *(int *)((int)param_2 + 0x52);
    uVar3 = 7;
  }
  local_c = (float)iVar1;
  ppcVar2 = (code **)*DAT_01023868;
LAB_0100c7dd:
  (**ppcVar2)(uVar3,local_c);
  return;
}



void FUN_0100c7e9(int param_1,int *param_2)

{
  int iVar1;
  undefined4 local_54;
  LPSTR _Format;
  int *piVar2;
  bool bVar3;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite54_01023874);
    bVar3 = iVar1 != 0;
    if (bVar3) {
      local_54 = FUN_0100c335(*(int *)((int)DAT_01025040 + 0x12e));
      _Format = FUN_01003752(10);
      sprintf(local_48,_Format,local_54);
      FUN_010144b7(local_48,0x40000000);
    }
    iVar1 = FUN_0100c092((int)&PTR_s_lite55_0102387c);
    if (iVar1 != 0) {
      bVar3 = (bool)(bVar3 | 2);
    }
    iVar1 = FUN_0100c092((int)&PTR_s_lite56_01023884);
    if (iVar1 != 0) {
      bVar3 = (bool)(bVar3 | 4);
    }
    if (bVar3 == false) {
      iVar1 = (**(code **)(*param_2 + 8))(0);
      FUN_01017526(DAT_01025040,iVar1);
      piVar2 = DAT_01023d3c;
    }
    else {
      piVar2 = DAT_01023d24;
      if (((bVar3 != true) && (piVar2 = DAT_01023d34, 1 < bVar3)) &&
         (piVar2 = DAT_01023d34, bVar3 < 4)) {
        piVar2 = DAT_01023d2c;
      }
    }
    (**(code **)(*piVar2 + 0x14))();
  }
  FUN_0101cd9e();
  return;
}



void FUN_0100c8d7(int param_1)

{
  if (param_1 == 0x3a) {
    (**(code **)*DAT_01023878)(7,0x40a00000);
  }
  return;
}



void FUN_0100c901(int param_1)

{
  if (param_1 == 0x3f) {
    (**(code **)*DAT_010238d0)(0x13,0);
    (**(code **)*DAT_010238d8)(0x13,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100c939(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  LPSTR pCVar3;
  code **ppcVar4;
  undefined4 uVar5;
  
  ppcVar4 = DAT_01023a8c;
  if (param_1 == 0x3f) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite56_01023884);
    if ((iVar1 == 0) && (iVar1 = (**(code **)*ppcVar4)(0x27,0), iVar1 != 0)) {
      (**(code **)*ppcVar4)(0x22,0);
      (**(code **)*ppcVar4)(0x14,0);
      ppcVar4 = DAT_01023a94;
      (**(code **)*DAT_01023a94)(0x22,0);
      (**(code **)*ppcVar4)(0x14,0);
    }
    ppcVar4 = DAT_0102370c;
    if ((_DAT_0102372c != param_2) && (ppcVar4 = DAT_01023714, _DAT_01023734 != param_2)) {
      ppcVar4 = DAT_0102371c;
    }
    if (*(int *)((int)ppcVar4 + 0x52) == 0) {
      if (*(int *)((int)ppcVar4 + 0x4e) == 0) {
        (**(code **)*ppcVar4)(0x13,0);
        ppcVar4 = DAT_01023724;
        iVar1 = (**(code **)*DAT_01023724)(0x25,0);
        iVar2 = (**(code **)*DAT_01023724)(0x26,0);
        if (iVar1 == iVar2) {
          (**(code **)*ppcVar4)(7,0x40a00000);
          (**(code **)*ppcVar4)(0,0);
          if (*(int *)(DAT_010236e4 + 0x4e) < 3) {
            (**(code **)*DAT_01023704)(0xc,0);
            uVar5 = 0x40000000;
            pCVar3 = FUN_01003752(5);
            FUN_010144b7(pCVar3,uVar5);
          }
          (**(code **)*DAT_01023704)(0x30,0x42700000);
        }
      }
      else {
        (**(code **)*ppcVar4)(0x14,0);
      }
    }
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100cabf(int param_1,undefined **param_2)

{
  if ((param_1 == 0x3d) && (*(int *)((int)param_2 + 0x4e) != 0)) {
    (**(code **)*param_2)(0x30,0x42700000);
    (**(code **)*param_2)(0xd,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100cafe(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  LPSTR pCVar3;
  code **ppcVar4;
  undefined4 uVar5;
  
  if (param_1 == 0x3f) {
    ppcVar4 = DAT_01023778;
    if ((_DAT_01023798 != param_2) && (ppcVar4 = DAT_01023780, _DAT_010237a0 != param_2)) {
      ppcVar4 = DAT_01023788;
    }
    if (*(int *)((int)ppcVar4 + 0x52) == 0) {
      if (*(int *)((int)ppcVar4 + 0x4e) == 0) {
        (**(code **)*ppcVar4)(0x13,0);
        ppcVar4 = DAT_01023790;
        iVar1 = (**(code **)*DAT_01023790)(0x25,0);
        iVar2 = (**(code **)*DAT_01023790)(0x26,0);
        if (iVar1 == iVar2) {
          (**(code **)*ppcVar4)(7,0x40a00000);
          (**(code **)*ppcVar4)(0,0);
          if (*(int *)(DAT_01023758 + 0x4e) < 3) {
            (**(code **)*DAT_01023770)(0xc,0);
            uVar5 = 0x40000000;
            pCVar3 = FUN_01003752(6);
            FUN_010144b7(pCVar3,uVar5);
          }
          (**(code **)*DAT_01023770)(0x30,0x42700000);
        }
      }
      else {
        (**(code **)*ppcVar4)(0x14,0);
      }
    }
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100cc20(int param_1,int *param_2)

{
  int iVar1;
  code **ppcVar2;
  
  if (param_1 != 0x3f) {
    return;
  }
  iVar1 = FUN_0100c092((int)&PTR_s_lite17_010238a8);
  if ((iVar1 == 0) && (iVar1 = FUN_0100c092((int)&PTR_s_lite18_010238b0), iVar1 == 0)) {
    (**(code **)(*DAT_01023e04 + 0x14))();
  }
  else {
    FUN_0100c2f3(0x40000000);
    (**(code **)*DAT_010238ac)(0x14,0);
    (**(code **)*DAT_010238b4)(0x14,0);
  }
  if (_DAT_0102389c == param_2) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite30_01023814);
    if (iVar1 == 0) goto LAB_0100ccf3;
    (**(code **)*DAT_01023818)(4,0);
    ppcVar2 = DAT_01023828;
  }
  else {
    iVar1 = FUN_0100c092((int)&PTR_s_lite29_0102381c);
    if (iVar1 == 0) goto LAB_0100ccf3;
    (**(code **)*DAT_01023820)(4,0);
    ppcVar2 = DAT_01023830;
  }
  (**(code **)*ppcVar2)(4,0);
LAB_0100ccf3:
  iVar1 = (**(code **)(*param_2 + 8))(0);
  FUN_01017526(DAT_01025040,iVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100cd12(int param_1)

{
  if (param_1 == 0x13) {
    (**(code **)*DAT_010238ac)(9,0x425c0000);
    (**(code **)*DAT_010238b4)(9,0x425c0000);
    _DAT_0102504c = 1;
  }
  else {
    if ((param_1 == 0x3c) && (_DAT_0102504c != 0)) {
      (**(code **)*DAT_010238ac)(7,0x40a00000);
      (**(code **)*DAT_010238b4)(7,0x40a00000);
      _DAT_0102504c = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100cda0(int param_1,int *param_2)

{
  int iVar1;
  code **ppcVar2;
  undefined4 local_c;
  
  if (param_1 != 0x3f) {
    return;
  }
  if (_DAT_010238c0 == param_2) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite27_010238cc);
    if (iVar1 != 0) {
      (**(code **)*DAT_01023ac4)(0x14,0);
      ppcVar2 = DAT_010238d0;
LAB_0100ce11:
      (**(code **)*ppcVar2)(0x14,0);
      local_c = 1;
      goto LAB_0100ce23;
    }
  }
  else {
    if (_DAT_010238c8 != param_2) {
      return;
    }
    iVar1 = FUN_0100c092((int)&PTR_s_lite28_010238d4);
    if (iVar1 != 0) {
      (**(code **)*DAT_01023ac4)(0x14,0);
      ppcVar2 = DAT_010238d8;
      goto LAB_0100ce11;
    }
  }
  local_c = 0;
LAB_0100ce23:
  iVar1 = (**(code **)(*param_2 + 8))(local_c);
  FUN_01017526(DAT_01025040,iVar1);
  return;
}



void FUN_0100ce40(int param_1,int *param_2)

{
  int iVar1;
  undefined4 local_50;
  LPSTR _Format;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite16_010238ec);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_2 + 8))(0);
      FUN_01017526(DAT_01025040,iVar1);
      (**(code **)(*DAT_01023d54 + 0x14))();
      local_50 = 0x40000000;
      _Format = FUN_01003752(0x2c);
      FUN_010144b7(_Format,local_50);
    }
    else {
      local_50 = FUN_0100c335(*(int *)((int)DAT_01025040 + 0x132));
      _Format = FUN_01003752(3);
      sprintf(local_48,_Format,local_50);
      FUN_010144b7(local_48,0x40000000);
      (**(code **)*DAT_010238f0)(0x14,0);
      (**(code **)(*DAT_01023d4c + 0x14))();
    }
    (**(code **)*DAT_01023978)(0x2d,0x41300000);
  }
  FUN_0101cd9e();
  return;
}



void FUN_0100cf36(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  
  if (param_1 == 0x3f) {
    iVar1 = (**(code **)*DAT_01023978)(0x25,0);
    if (iVar1 < 2) {
      (**(code **)*DAT_01023978)(0x2d,0x3f800000);
      uVar3 = 0x40000000;
      pCVar2 = FUN_01003752(0x2c);
      FUN_010144b7(pCVar2,uVar3);
    }
    else {
      (**(code **)*DAT_01023948)(8,0x3d4ccccd);
    }
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100cfc0(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  
  if (param_1 == 0x3f) {
    iVar1 = (**(code **)*DAT_01023978)(0x25,0);
    if (iVar1 < 4) {
      (**(code **)*DAT_01023978)(0x2d,0x40400000);
      uVar3 = 0x40000000;
      pCVar2 = FUN_01003752(0x2c);
      FUN_010144b7(pCVar2,uVar3);
    }
    else {
      (**(code **)*DAT_01023950)(8,0x3d4ccccd);
    }
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100d04e(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  
  if (param_1 == 0x3f) {
    iVar1 = (**(code **)*DAT_01023978)(0x25,0);
    if (iVar1 < 6) {
      (**(code **)*DAT_01023978)(0x2d,0x40a00000);
      uVar3 = 0x40000000;
      pCVar2 = FUN_01003752(0x2c);
      FUN_010144b7(pCVar2,uVar3);
    }
    else {
      (**(code **)*DAT_01023958)(8,0x3d4ccccd);
    }
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100d0dc(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  
  if (param_1 == 0x3f) {
    iVar1 = (**(code **)*DAT_01023978)(0x25,0);
    if (iVar1 < 8) {
      (**(code **)*DAT_01023978)(0x2d,0x40e00000);
      uVar3 = 0x40000000;
      pCVar2 = FUN_01003752(0x2c);
      FUN_010144b7(pCVar2,uVar3);
    }
    else {
      (**(code **)*DAT_01023960)(8,0x3d4ccccd);
    }
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100d16a(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  
  if (param_1 == 0x3f) {
    iVar1 = (**(code **)*DAT_01023978)(0x25,0);
    if (iVar1 < 10) {
      (**(code **)*DAT_01023978)(0x2d,0x41100000);
      uVar3 = 0x40000000;
      pCVar2 = FUN_01003752(0x2c);
      FUN_010144b7(pCVar2,uVar3);
    }
    else {
      (**(code **)*DAT_01023968)(8,0x3d4ccccd);
    }
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100d1f8(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  
  if (param_1 == 0x3f) {
    iVar1 = (**(code **)*DAT_01023978)(0x25,0);
    if (iVar1 < 0xc) {
      (**(code **)*DAT_01023978)(0x2d,0x41300000);
      uVar3 = 0x40000000;
      pCVar2 = FUN_01003752(0x2c);
      FUN_010144b7(pCVar2,uVar3);
    }
    else {
      (**(code **)*DAT_01023970)(8,0x3d4ccccd);
    }
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100d286(int param_1,undefined **param_2)

{
  int iVar1;
  code **ppcVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  if (param_1 == 0) {
    ppcVar2 = (code **)*param_2;
    local_c = 0;
    uVar3 = 0;
  }
  else {
    if (param_1 == 0x29) {
      (**(code **)*param_2)(0x29,0x40000000);
    }
    else {
      if (param_1 != 0x3d) {
        return;
      }
      (**(code **)*param_2)(0x21,0);
      iVar1 = (**(code **)*param_2)(0x25,0);
      if (iVar1 == 0) {
        return;
      }
    }
    ppcVar2 = (code **)*param_2;
    local_c = 0x42700000;
    uVar3 = 0x2b;
  }
  (**ppcVar2)(uVar3,local_c);
  return;
}



void FUN_0100d303(int param_1,int *param_2)

{
  LPSTR pCVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 0x3f) {
    iVar3 = 0;
    if (DAT_010239ec != param_2) {
      iVar3 = (uint)(DAT_010239f4 != param_2) + 1;
    }
    iVar2 = *(int *)(DAT_01023a24 + 6);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_2 + 8))(0);
      FUN_01017526(DAT_01025040,iVar2);
      (**(code **)**(code ***)((&PTR_PTR_s_lite5_01023a4c)[iVar3] + 4))
                (0x10,*(undefined4 *)((int)param_2 + 0x52));
    }
    else {
      *(undefined4 *)(DAT_01023a24 + 6) = 0;
      (**(code **)*DAT_01023a1c)(0x14,0);
      (**(code **)*DAT_01023a3c)(0x14,0);
      (**(code **)*DAT_01023c44)(0x14,0);
      if (iVar2 == iVar3 + 1) {
        if (*(int *)((int)DAT_01025040 + 0x15a) != 0) {
          FUN_0100c281();
          FUN_01017526(DAT_01025040,10000);
          return;
        }
        uVar4 = 0x40000000;
        pCVar1 = FUN_01003752(0x31);
        FUN_010144b7(pCVar1,uVar4);
        FUN_0100c0ee(0x40800000);
        iVar2 = (**(code **)(*param_2 + 8))(1);
        FUN_01017526(DAT_01025040,iVar2);
        (**(code **)**(code ***)((&PTR_PTR_s_lite5_01023a4c)[iVar3] + 4))
                  (0x10,*(undefined4 *)((int)param_2 + 0x52));
        (**(code **)**(code ***)((&PTR_PTR_s_lite4_01023a58)[iVar3] + 4))(0xb,(float)(2 - iVar3));
        (**(code **)**(code ***)((&PTR_PTR_s_lite4_01023a58)[iVar3] + 4))
                  (0x10,*(undefined4 *)((int)param_2 + 0x52));
        (**(code **)**(code ***)((&PTR_PTR_s_v_sink1_01023a40)[iVar3] + 4))
                  (0x38,*(undefined4 *)((int)param_2 + 0x52));
        return;
      }
      iVar3 = (**(code **)(*param_2 + 8))(2);
      FUN_01017526(DAT_01025040,iVar3);
      iVar3 = iVar2 + -1;
      (**(code **)**(code ***)((&PTR_PTR_s_lite5_01023a4c)[iVar3] + 4))
                (0x10,*(undefined4 *)((int)param_2 + 0x52));
    }
    (**(code **)**(code ***)((&PTR_PTR_s_lite4_01023a58)[iVar3] + 4))(0xb,(float)(2 - iVar3));
    (**(code **)**(code ***)((&PTR_PTR_s_lite4_01023a58)[iVar3] + 4))
              (0x10,*(undefined4 *)((int)param_2 + 0x52));
    (**(code **)**(code ***)((&PTR_PTR_s_v_sink1_01023a40)[iVar3] + 4))
              (0x38,*(undefined4 *)((int)param_2 + 0x52));
    uVar4 = 0x40000000;
    pCVar1 = FUN_01003752(0x31);
    FUN_010144b7(pCVar1,uVar4);
  }
  return;
}



void FUN_0100d53a(int param_1)

{
  if (param_1 == 1) {
    (**(code **)*DAT_01023724)(0x18,0);
    (**(code **)*DAT_01023790)(0x18,0);
  }
  return;
}



void FUN_0100d572(int param_1)

{
  if (param_1 == 1) {
    (**(code **)*DAT_01023724)(0x19,0);
    (**(code **)*DAT_01023790)(0x19,0);
  }
  return;
}



void FUN_0100d5aa(int param_1)

{
  if (param_1 == 0x3c) {
    *(undefined4 *)(DAT_01025040 + 0x13e) = 0;
  }
  return;
}



void FUN_0100d5ca(int param_1)

{
  if (param_1 == 0x3c) {
    *(undefined4 *)(DAT_01025040 + 0x136) = 0;
  }
  return;
}



void FUN_0100d5ea(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  
  if (param_1 != 0x3f) {
    return;
  }
  if (*(int *)((int)param_2 + 6) != 0) {
    return;
  }
  *(undefined4 *)((int)param_2 + 6) = 1;
  if (*(int *)((int)DAT_01023aac + 6) + *(int *)((int)DAT_01023aa4 + 6) +
      *(int *)((int)DAT_01023a9c + 6) != 3) {
    local_10 = 0;
    goto LAB_0100d720;
  }
  iVar1 = FUN_0100c092((int)&PTR_s_lite61_01023ab0);
  if (iVar1 == 0) {
    if ((*(int *)(DAT_01023bbc + 6) != 0xf) && (*(int *)(DAT_01023bbc + 6) != 0x1d)) {
      FUN_0100c1e3();
      piVar2 = DAT_01023dc4;
      goto LAB_0100d6c6;
    }
  }
  else {
    iVar1 = FUN_0100c092((int)&PTR_s_lite60_01023ab8);
    if (iVar1 == 0) {
      FUN_0100c14f();
      piVar2 = DAT_01023db4;
    }
    else {
      iVar1 = FUN_0100c092((int)&PTR_s_lite59_01023ac0);
      if (iVar1 == 0) {
        FUN_0100c199();
        piVar2 = DAT_01023dbc;
      }
      else {
        iVar1 = FUN_0100c092((int)&PTR_s_lite58_01023ac8);
        if (iVar1 == 0) {
          FUN_0100c24a();
          piVar2 = DAT_01023dcc;
        }
        else {
          iVar1 = (**(code **)(*param_2 + 8))(1);
          FUN_01017526(DAT_01025040,iVar1);
          piVar2 = DAT_01023dcc;
        }
      }
    }
LAB_0100d6c6:
    (**(code **)(*piVar2 + 0x14))();
  }
  *(undefined4 *)((int)DAT_01023a9c + 6) = 0;
  (**(code **)*DAT_01023a9c)(0x32,0);
  *(undefined4 *)((int)DAT_01023aa4 + 6) = 0;
  (**(code **)*DAT_01023aa4)(0x32,0);
  *(undefined4 *)((int)DAT_01023aac + 6) = 0;
  (**(code **)*DAT_01023aac)(0x32,0);
  local_10 = 1;
LAB_0100d720:
  iVar1 = (**(code **)(*param_2 + 8))(local_10);
  FUN_01017526(DAT_01025040,iVar1);
  return;
}



void FUN_0100d73e(int param_1,undefined **param_2)

{
  int iVar1;
  code **ppcVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  if (param_1 == 0) {
    ppcVar2 = (code **)*param_2;
    local_c = 0;
    uVar3 = 0;
  }
  else {
    if (param_1 == 0x29) {
      (**(code **)*param_2)(0x29,0x40000000);
    }
    else {
      if (param_1 != 0x3d) {
        return;
      }
      (**(code **)*param_2)(0x21,0);
      iVar1 = (**(code **)*param_2)(0x25,0);
      if (iVar1 == 0) {
        return;
      }
    }
    ppcVar2 = (code **)*param_2;
    local_c = 0x41f00000;
    uVar3 = 0x2b;
  }
  (**ppcVar2)(uVar3,local_c);
  return;
}



void FUN_0100d7bb(int param_1,undefined **param_2)

{
  LPSTR pCVar1;
  int iVar2;
  code **ppcVar3;
  undefined4 local_c;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    ppcVar3 = (code **)*param_2;
    local_c = 0;
    uVar4 = 0;
    goto LAB_0100d8d2;
  }
  if (param_1 == 0x29) {
    (**(code **)*param_2)(0x29,0x40000000);
LAB_0100d8b3:
    local_c = 0x41f00000;
  }
  else {
    if (param_1 == 0x3d) {
      iVar2 = *(int *)(DAT_01025040 + 0x126);
      if (iVar2 != 0) {
        *(int *)(DAT_01025040 + 0x126) = iVar2 + -1;
      }
      (**(code **)*param_2)(0x21,0);
      iVar2 = (**(code **)*param_2)(0x25,0);
      if (iVar2 == 0) {
        return;
      }
      goto LAB_0100d8b3;
    }
    if (param_1 == 0x40) {
      *(undefined4 *)(DAT_01025040 + 0x126) = 4;
      (**(code **)*param_2)(0x13,0);
      (**(code **)*param_2)(0x2b,0x41f00000);
      local_c = 0x40000000;
      pCVar1 = FUN_01003752(0x3b);
      FUN_010144b7(pCVar1,local_c);
      return;
    }
    if (param_1 != 0x41) {
      return;
    }
    *(undefined4 *)(DAT_01025040 + 0x126) = 0;
    (**(code **)*param_2)(0x14,0);
    local_c = 0xbf800000;
  }
  ppcVar3 = (code **)*param_2;
  uVar4 = 0x2b;
LAB_0100d8d2:
  (**ppcVar3)(uVar4,local_c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100d8de(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  code **ppcVar3;
  undefined4 uVar4;
  
  if (param_1 == 0x3f) {
    ppcVar3 = DAT_01023b60;
    if ((_DAT_01023b48 != param_2) && (ppcVar3 = DAT_01023b68, _DAT_01023b50 != param_2)) {
      ppcVar3 = DAT_01023b70;
    }
    (**(code **)*ppcVar3)(0xf,0x40000000);
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
    iVar1 = (**(code **)*DAT_01023b78)(0x25,0);
    if (iVar1 == 3) {
      (**(code **)*DAT_01023b78)(0x10,0x40000000);
      (**(code **)*DAT_01023978)(0x2d,0x41300000);
      (**(code **)(*DAT_01023d54 + 0x14))();
      uVar4 = 0x40000000;
      pCVar2 = FUN_01003752(0x2c);
      FUN_010144b7(pCVar2,uVar4);
    }
    else {
      (**(code **)(*DAT_01023e0c + 0x14))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100d9c2(int param_1,int *param_2)

{
  int iVar1;
  code **ppcVar2;
  int *piVar3;
  
  if (param_1 == 0x3f) {
    if (_DAT_01023b84 == param_2) {
      *(uint *)((int)DAT_01023b9c + 6) = *(uint *)((int)DAT_01023b9c + 6) | 1;
      ppcVar2 = DAT_01023b9c;
    }
    else {
      if (_DAT_01023b8c == param_2) {
        *(uint *)((int)DAT_01023b9c + 6) = *(uint *)((int)DAT_01023b9c + 6) | 2;
        ppcVar2 = DAT_01023ba4;
      }
      else {
        *(uint *)((int)DAT_01023b9c + 6) = *(uint *)((int)DAT_01023b9c + 6) | 4;
        ppcVar2 = DAT_01023bac;
      }
    }
    (**(code **)*ppcVar2)(0xf,0x40000000);
    iVar1 = FUN_0100c092((int)&PTR_s_lite198_01023bb8);
    if ((iVar1 == 0) || (piVar3 = DAT_01023e0c, *(int *)(DAT_01023bbc + 0x52) != 0)) {
      piVar3 = DAT_01023dd4;
    }
    (**(code **)(*piVar3 + 0x14))();
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
    iVar1 = (**(code **)*DAT_01023bb4)(0x25,0);
    if (iVar1 == 3) {
      (**(code **)*DAT_01023bb4)(0x10,0x40000000);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100da94(int param_1,int *param_2)

{
  int iVar1;
  code **ppcVar2;
  
  if (param_1 == 0x3f) {
    if (_DAT_01023bc8 == param_2) {
      *(uint *)((int)DAT_01023bf8 + 6) = *(uint *)((int)DAT_01023bf8 + 6) | 1;
      ppcVar2 = DAT_01023bf8;
    }
    else {
      if (_DAT_01023bd0 == param_2) {
        *(uint *)((int)DAT_01023bf8 + 6) = *(uint *)((int)DAT_01023bf8 + 6) | 2;
        ppcVar2 = DAT_01023c00;
      }
      else {
        *(uint *)((int)DAT_01023bf8 + 6) = *(uint *)((int)DAT_01023bf8 + 6) | 4;
        ppcVar2 = DAT_01023c08;
      }
    }
    (**(code **)*ppcVar2)(0xf,0x40000000);
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
    iVar1 = (**(code **)*DAT_01023c28)(0x25,0);
    if (iVar1 == 3) {
      (**(code **)(*DAT_01023ddc + 0x14))();
      (**(code **)*DAT_01023808)(0x35,0);
      (**(code **)*DAT_01023c28)(0x10,0x40000000);
    }
    else {
      (**(code **)(*DAT_01023e0c + 0x14))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100db68(int param_1,int *param_2)

{
  int iVar1;
  code **ppcVar2;
  
  if (param_1 == 0x3f) {
    if (_DAT_01023be0 == param_2) {
      *(uint *)((int)DAT_01023c10 + 6) = *(uint *)((int)DAT_01023c10 + 6) | 1;
      ppcVar2 = DAT_01023c10;
    }
    else {
      if (_DAT_01023be8 == param_2) {
        *(uint *)((int)DAT_01023c10 + 6) = *(uint *)((int)DAT_01023c10 + 6) | 2;
        ppcVar2 = DAT_01023c18;
      }
      else {
        *(uint *)((int)DAT_01023c10 + 6) = *(uint *)((int)DAT_01023c10 + 6) | 4;
        ppcVar2 = DAT_01023c20;
      }
    }
    (**(code **)*ppcVar2)(0xf,0x40000000);
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
    iVar1 = (**(code **)*DAT_01023c30)(0x25,0);
    if (iVar1 == 3) {
      (**(code **)(*DAT_01023ddc + 0x14))();
      (**(code **)*DAT_01023810)(0x35,0);
      (**(code **)*DAT_01023c30)(0x10,0x40000000);
    }
    else {
      (**(code **)(*DAT_01023e0c + 0x14))();
    }
  }
  return;
}



void FUN_0100dc3c(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 local_8;
  
  if (param_1 == 0x3f) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite110_01023c40);
    if (iVar1 == 0) {
      (**(code **)*DAT_01023c44)(0xf,0x40400000);
      local_8 = 0x40000000;
      pCVar2 = FUN_01003752(0x5d);
      FUN_010144b7(pCVar2,local_8);
    }
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
    FUN_0100c397(1);
  }
  return;
}



void FUN_0100dcb0(int param_1,undefined **param_2)

{
  int iVar1;
  LPSTR _Format;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    iVar1 = (**(code **)(*param_2 + 8))(0);
    iVar1 = FUN_01017526(DAT_01025040,iVar1);
    _Format = FUN_01003752(0x50);
    sprintf(local_48,_Format,iVar1);
    FUN_010144b7(local_48,0x40000000);
    (**(code **)*param_2)(0x37,0xbf800000);
  }
  FUN_0101cd9e();
  return;
}



void FUN_0100dd33(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x3e) {
    FUN_0100c397(0);
  }
  else {
    if (param_1 == 0x3f) {
      iVar2 = *param_2;
      uVar1 = FUN_0100c092((int)&PTR_s_lite20_0102393c);
      iVar2 = (**(code **)(iVar2 + 8))(uVar1);
      FUN_01017526(DAT_01025040,iVar2);
    }
  }
  return;
}



void FUN_0100dd7a(int param_1,undefined **param_2)

{
  code **ppcVar1;
  LPSTR _Format;
  int iVar2;
  float10 fVar3;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    iVar2 = (**(code **)(*param_2 + 8))(0);
    iVar2 = FUN_01017526(DAT_01025040,iVar2);
    _Format = FUN_01003752(0x51);
    sprintf(local_48,_Format,iVar2);
    FUN_010144b7(local_48,0x40000000);
    (**(code **)*DAT_01023c70)(0x14,0);
    ppcVar1 = (code **)*param_2;
    *(undefined *)((int)param_2 + 5) = 0;
    fVar3 = (float10)(**(code **)(*DAT_01023e14 + 0x14))();
    (**ppcVar1)(0x37,(float)fVar3);
  }
  else {
    if (param_1 == 0x40) {
      if (param_2 == (undefined **)0x0) {
        _Format = FUN_01003752(0x2d);
        sprintf(local_48,_Format);
      }
      else {
        _Format = FUN_01003752(0x52);
        sprintf(local_48,_Format,param_2);
      }
      FUN_010144b7(local_48,0x40000000);
      (**(code **)*DAT_01023c70)(4,0);
      *(undefined *)(DAT_01023c68 + 5) = 1;
    }
    else {
      if (param_1 == 0x400) {
        *(undefined *)(DAT_01023c68 + 5) = 0;
      }
    }
  }
  FUN_0101cd9e();
  return;
}



void FUN_0100dea5(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    (**(code **)*DAT_01023d04)(9,0x40a00000);
    iVar1 = FUN_0100c092((int)&PTR_s_lite67_01023cb0);
    if (iVar1 != 0) {
      (**(code **)*DAT_01023ce4)(0x22,0);
      (**(code **)*DAT_01023ce4)(0x14,0);
      (**(code **)*DAT_01023cb4)(0x13,0);
      (**(code **)*DAT_01023878)(7,0x40a00000);
      (**(code **)*DAT_010239b0)(7,0x40a00000);
      (**(code **)*DAT_01023978)(0x2d,0x41300000);
      (**(code **)(*DAT_01023df4 + 0x14))();
    }
  }
  return;
}



void FUN_0100df6a(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite67_01023cb0);
    if (iVar1 != 0) {
      (**(code **)*DAT_01023cbc)(0x13,0);
      (**(code **)(*DAT_01023df4 + 0x14))();
    }
  }
  return;
}



void FUN_0100dfab(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite67_01023cb0);
    if (iVar1 != 0) {
      (**(code **)*DAT_01023cc4)(0x13,0);
      (**(code **)(*DAT_01023df4 + 0x14))();
    }
  }
  return;
}



void FUN_0100dfec(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite67_01023cb0);
    if (iVar1 != 0) {
      (**(code **)*DAT_01023ccc)(0x13,0);
      (**(code **)(*DAT_01023df4 + 0x14))();
    }
  }
  return;
}



void FUN_0100e02d(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite67_01023cb0);
    if (iVar1 != 0) {
      (**(code **)*DAT_01023cd4)(0x13,0);
      (**(code **)(*DAT_01023df4 + 0x14))();
    }
  }
  return;
}



void FUN_0100e06e(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    iVar1 = FUN_0100c092((int)&PTR_s_lite67_01023cb0);
    if (iVar1 != 0) {
      (**(code **)*DAT_01023cdc)(0x13,0);
      (**(code **)(*DAT_01023df4 + 0x14))();
    }
  }
  return;
}



void FUN_0100e0af(int param_1,undefined **param_2)

{
  if (param_1 == 0x3c) {
    if (*(int *)((int)param_2 + 6) == 0) {
      (**(code **)*param_2)(0x10,0x40a00000);
      *(undefined4 *)((int)param_2 + 6) = 1;
    }
    else {
      *(undefined4 *)((int)param_2 + 6) = 0;
    }
  }
  return;
}



void FUN_0100e0ed(int param_1,undefined **param_2)

{
  if (param_1 == 0x3f) {
    (**(code **)*param_2)(0x38,*(undefined4 *)((int)param_2 + 0x52));
  }
  return;
}



void FUN_0100e111(void)

{
  code **ppcVar1;
  int iVar2;
  LPSTR pCVar3;
  LPSTR _Format;
  char local_48 [64];
  undefined4 local_8;
  
  ppcVar1 = DAT_01023cf4;
  local_8 = DAT_01024778;
  iVar2 = (**(code **)*DAT_01023cf4)(0x25,0);
  if (iVar2 < 9) {
    (**(code **)*ppcVar1)(0x29,0x40000000);
    pCVar3 = FUN_01003752(*(short *)(&DAT_010246ec + iVar2 * 4));
    _Format = FUN_01003752(0x53);
    sprintf(local_48,_Format,pCVar3);
    FUN_010144b7(local_48,0x41000000);
    (**(code **)(*DAT_01023d1c + 0x14))();
  }
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100e1b0(int param_1)

{
  bool bVar1;
  
  if (*(int *)(DAT_01023bbc + 6) != 0) {
    return;
  }
  if (param_1 < 0x4e) {
    if (param_1 == 0x4d) {
      if ((((DAT_01025050 == 4) || (DAT_01025050 == 0x3d)) || (DAT_01025050 == 0x51)) ||
         (DAT_01025050 == 0x65)) goto LAB_0100e4fb;
      bVar1 = DAT_01025050 == 0x79;
    }
    else {
      if (param_1 < 0x45) {
        if (param_1 == 0x44) {
          if ((DAT_01025050 != 0x16) && (DAT_01025050 != 0x17)) {
            DAT_01025050 = 0;
            return;
          }
LAB_0100e3fb:
          DAT_01025050 = DAT_01025050 + 1;
          return;
        }
        if (param_1 == 0x20) {
          if (DAT_01025050 != 0x1a) {
            DAT_01025050 = 0;
            return;
          }
          DAT_01025050 = 0x1b;
          return;
        }
        if (param_1 == 0x31) {
          DAT_01025050 = (-(uint)(DAT_01025050 != 0) & 0xffffffc3) + 0x3d;
          return;
        }
        if (param_1 != 0x41) {
          if (param_1 == 0x42) {
            DAT_01025050 = (-(uint)(DAT_01025050 != 0) & 0xffffffaf) + 0x51;
            return;
          }
          if (param_1 != 0x43) {
            DAT_01025050 = 0;
            return;
          }
          if (DAT_01025050 == 0) {
            DAT_01025050 = 1;
            return;
          }
          if (DAT_01025050 != 0xb) {
            DAT_01025050 = 0;
            return;
          }
          DAT_01025050 = 0xc;
          return;
        }
        if (((DAT_01025050 == 5) || (DAT_01025050 == 0x3e)) ||
           ((DAT_01025050 == 0x52 || (DAT_01025050 == 0x66)))) goto LAB_0100e4fb;
        bVar1 = DAT_01025050 == 0x7a;
      }
      else {
        if (param_1 == 0x45) {
          if (((DAT_01025050 == 3) || (DAT_01025050 == 0x18)) || (DAT_01025050 == 0x1c))
          goto LAB_0100e4fb;
          bVar1 = DAT_01025050 == 0x2c;
        }
        else {
          if (param_1 == 0x47) {
            DAT_01025050 = (-(uint)(DAT_01025050 != 0) & 0xffffff9b) + 0x65;
            return;
          }
          if (param_1 == 0x48) {
            DAT_01025050 = (-(uint)(DAT_01025050 != 0) & 0xffffffeb) + 0x15;
            return;
          }
          if (param_1 != 0x49) {
            DAT_01025050 = 0;
            return;
          }
          if ((DAT_01025050 == 1) || (DAT_01025050 == 10)) goto LAB_0100e4fb;
          bVar1 = DAT_01025050 == 0x15;
        }
      }
    }
  }
  else {
    if (param_1 < 0x54) {
      if (param_1 == 0x53) {
        if ((DAT_01025050 == 0xc) || (DAT_01025050 == 0x1d)) goto LAB_0100e4fb;
        bVar1 = DAT_01025050 == 0x2d;
      }
      else {
        if (param_1 != 0x4e) {
          if (param_1 != 0x4f) {
            if (param_1 == 0x51) {
              DAT_01025050 = (-(uint)(DAT_01025050 != 0) & 0xffffffd7) + 0x29;
              return;
            }
            if (param_1 != 0x52) {
              DAT_01025050 = 0;
              return;
            }
            if (DAT_01025050 == 0) {
              DAT_01025050 = 0x79;
              return;
            }
            if (DAT_01025050 != 7) {
              DAT_01025050 = 0;
              return;
            }
            DAT_01025050 = 8;
            return;
          }
          if ((DAT_01025050 != 8) && (DAT_01025050 != 0x2a)) {
            DAT_01025050 = 0;
            return;
          }
          goto LAB_0100e3fb;
        }
        if ((DAT_01025050 == 2) || (DAT_01025050 == 9)) goto LAB_0100e4fb;
        bVar1 = DAT_01025050 == 0x19;
      }
    }
    else {
      if (param_1 != 0x54) {
        if (param_1 == 0x55) {
          if (DAT_01025050 != 0x29) {
            DAT_01025050 = 0;
            return;
          }
          DAT_01025050 = 0x2a;
          return;
        }
        if (param_1 != 0x58) {
          DAT_01025050 = 0;
          return;
        }
        if (DAT_01025050 == 0x3f) {
          FUN_0100c2f3(0x40000000);
        }
        else {
          if (DAT_01025050 == 0x53) {
            _DAT_01025044 = 1;
            goto LAB_0100e4e1;
          }
          if (DAT_01025050 == 0x67) {
            FUN_0100dd7a(0x40,(undefined **)0x0);
          }
          else {
            if (DAT_01025050 != 0x7b) {
              DAT_01025050 = 0;
              return;
            }
            FUN_0100e111();
          }
        }
        *(undefined4 *)(DAT_01025040 + 0x3e) = 1;
        DAT_01025050 = 0;
        return;
      }
      if (DAT_01025050 == 0x1e) {
        _DAT_01024ff8 = 1;
LAB_0100e4e1:
        *(undefined4 *)(DAT_01025040 + 0x3e) = 1;
        DAT_01025050 = 0;
        return;
      }
      if ((DAT_01025050 == 0x1b) || (DAT_01025050 == 6)) goto LAB_0100e4fb;
      bVar1 = DAT_01025050 == 0x2b;
    }
  }
  if (!bVar1) {
    DAT_01025050 = 0;
    return;
  }
LAB_0100e4fb:
  DAT_01025050 = DAT_01025050 + 1;
  return;
}



void FUN_0100e50b(int param_1)

{
  code **ppcVar1;
  int iVar2;
  int iVar3;
  LPSTR pCVar4;
  LPSTR _Format;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  (**(code **)*DAT_010238f0)(0x13,0);
  ppcVar1 = DAT_01023cfc;
  if (0 < param_1) {
    do {
      (**(code **)*ppcVar1)(0x29,0x40000000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  iVar2 = (**(code **)*ppcVar1)(0x25,0);
  iVar3 = (**(code **)*ppcVar1)(0x26,0);
  if (iVar2 == iVar3) {
    (**(code **)*ppcVar1)(0x10,0x40a00000);
    ppcVar1 = DAT_01023cf4;
    (**(code **)*DAT_01023cf4)(0x22,0);
    iVar2 = (**(code **)*ppcVar1)(0x25,0);
    if (iVar2 < 9) {
      (**(code **)*ppcVar1)(0x29,0x40a00000);
      pCVar4 = FUN_01003752(*(short *)(&DAT_010246ec + iVar2 * 4));
      _Format = FUN_01003752(0x53);
      sprintf(local_48,_Format,pCVar4);
      FUN_010144b7(local_48,0x41000000);
      (**(code **)(*DAT_01023d1c + 0x14))();
    }
  }
  else {
    if ((iVar3 * 3) / 4 <= iVar2) {
      (**(code **)*DAT_01023cf4)(0x1b,0xbf800000);
    }
  }
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100e657(int param_1,int param_2)

{
  LPSTR pCVar1;
  undefined4 local_8;
  
  if (param_1 == 0x3f) {
    if ((_DAT_01023838 == param_2) || (_DAT_01023840 == param_2)) {
      *(undefined4 *)(DAT_01023bbc + 6) = 1;
      FUN_01011bb5(0x42,(undefined **)0x0);
    }
  }
  else {
    if (param_1 == 0x42) {
      FUN_01014143(DAT_01023e24);
      _DAT_01025048 = 0;
    }
    else {
      if (param_1 == 0x43) {
        local_8 = 0xbf800000;
        pCVar1 = FUN_01003752(0x32);
        FUN_010144b7(pCVar1,local_8);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100e6d2(int param_1,undefined **param_2)

{
  code **ppcVar1;
  int iVar2;
  LPSTR _Format;
  LPSTR _Format_00;
  bool bVar3;
  undefined4 local_58;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if ((param_1 == 0x2d) || (param_1 == 0x2f)) {
    if (DAT_01023978 != (code **)param_2) goto switchD_0100e9ce_caseD_9;
  }
  else {
    if (param_1 != 0x3f) {
      if (param_1 == 0x42) {
        (**(code **)*DAT_01023bbc)(0x14,0);
        (**(code **)*DAT_01023cfc)(0x22,0);
        (**(code **)*DAT_01023bb4)(0x14,0);
        *(undefined4 *)((int)DAT_01023888 + 6) = 0;
        *(undefined4 *)(DAT_01023b9c + 6) = 0;
        ppcVar1 = DAT_01023a8c;
        (**(code **)*DAT_01023a8c)(0x22,0);
        (**(code **)*ppcVar1)(0x14,0);
        ppcVar1 = DAT_01023a94;
        (**(code **)*DAT_01023a94)(0x22,0);
        (**(code **)*ppcVar1)(0x14,0);
        (**(code **)*DAT_01023eec)(0x14,0);
      }
      else {
        if (param_1 != 0x43) goto switchD_0100e9ce_caseD_9;
      }
      iVar2 = (**(code **)*DAT_01023978)(0x25,0);
      if (iVar2 == 0) {
        local_58 = 0xbf800000;
        _Format = FUN_01003752(0x69);
        FUN_010144b7(_Format,local_58);
        iVar2 = FUN_0100c092((int)&PTR_s_lite317_01023eb8);
        if (iVar2 != 0) {
          (**(code **)*DAT_01023ebc)(0x14,0);
        }
        iVar2 = FUN_0100c092((int)&PTR_s_lite319_01023ec8);
        if (iVar2 != 0) {
          (**(code **)*DAT_01023ecc)(0x14,0);
        }
        iVar2 = FUN_0100c092((int)&PTR_s_lite318_01023ec0);
        ppcVar1 = DAT_01023ec4;
      }
      else {
        iVar2 = FUN_0100c092((int)&PTR_s_lite56_01023884);
        if (iVar2 == 0) {
          local_58 = 0xbf800000;
          _Format = FUN_01003752(0x68);
          FUN_010144b7(_Format,local_58);
          iVar2 = FUN_0100c092((int)&PTR_s_lite317_01023eb8);
          if (iVar2 != 0) {
            (**(code **)*DAT_01023ebc)(0x14,0);
          }
          iVar2 = FUN_0100c092((int)&PTR_s_lite318_01023ec0);
          if (iVar2 != 0) {
            (**(code **)*DAT_01023ec4)(0x14,0);
          }
          iVar2 = FUN_0100c092((int)&PTR_s_lite319_01023ec8);
          ppcVar1 = DAT_01023ecc;
        }
        else {
          _Format = FUN_01003752(*(short *)(&DAT_01024708 + *(int *)((int)DAT_01023888 + 6) * 4));
          _Format_00 = FUN_01003752(0x6a);
          sprintf(local_48,_Format_00,_Format);
          FUN_010144b7(local_48,0xbf800000);
          iVar2 = FUN_0100c092((int)&PTR_s_lite318_01023ec0);
          if (iVar2 != 0) {
            (**(code **)*DAT_01023ec4)(0x14,0);
          }
          iVar2 = FUN_0100c092((int)&PTR_s_lite319_01023ec8);
          if (iVar2 != 0) {
            (**(code **)*DAT_01023ecc)(0x14,0);
          }
          iVar2 = FUN_0100c092((int)&PTR_s_lite317_01023eb8);
          ppcVar1 = DAT_01023ebc;
        }
      }
      if (iVar2 == 0) {
        (**(code **)*ppcVar1)(7,0);
      }
      goto switchD_0100e9ce_caseD_9;
    }
    bVar3 = _DAT_01023b84 == param_2;
    if (_DAT_01023b8c == param_2) {
      bVar3 = true;
    }
    if (_DAT_01023b94 == param_2) {
      bVar3 = true;
    }
    if (bVar3 == false) {
      if (((DAT_01023870 == param_2) &&
          (iVar2 = FUN_0100c092((int)&PTR_s_lite56_01023884), iVar2 != 0)) &&
         (iVar2 = (**(code **)*DAT_01023978)(0x25,0), iVar2 != 0)) {
        (**(code **)*DAT_01023888)(0x14,0);
        (**(code **)*DAT_01023bbc)(0x13,0);
        (**(code **)*DAT_01023cfc)(0x1a,0xbf800000);
        iVar2 = FUN_0100c092((int)&PTR_s_lite317_01023eb8);
        if (iVar2 != 0) {
          (**(code **)*DAT_01023ebc)(0x14,0);
        }
        iVar2 = FUN_0100c092((int)&PTR_s_lite318_01023ec0);
        if (iVar2 != 0) {
          (**(code **)*DAT_01023ec4)(0x14,0);
        }
        iVar2 = FUN_0100c092((int)&PTR_s_lite319_01023ec8);
        if (iVar2 != 0) {
          (**(code **)*DAT_01023ecc)(0x14,0);
        }
        iVar2 = *(int *)((int)DAT_01023888 + 6);
        *(int *)((int)DAT_01023bbc + 6) = iVar2;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_58 = FUN_0100c335((int)(&PTR_PTR_s_soundwave25_010246a0)[iVar2]);
        _Format = FUN_01003752(0x4d);
        sprintf(local_48,_Format,local_58);
        FUN_010144b7(local_48,0x40800000);
      }
      goto switchD_0100e9ce_caseD_9;
    }
    if (*(int *)(DAT_01023b9c + 6) == 7) {
      *(undefined4 *)(DAT_01023b9c + 6) = 0;
      bVar3 = true;
    }
    local_58 = (**(code **)*DAT_01023cf4)(0x25,0);
    switch(local_58) {
    case 1:
      if (bVar3 == true) {
        local_58 = 3;
      }
      else {
        if (bVar3 == true) {
          local_58 = 4;
        }
        else {
          if (bVar3 == true) {
            local_58 = 2;
          }
          else {
            local_58 = 5;
          }
        }
      }
      break;
    case 2:
    case 3:
      if (bVar3 == true) {
        local_58 = 9;
      }
      else {
        if (bVar3 == true) {
          local_58 = 0xb;
        }
        else {
          if (bVar3 != true) goto LAB_0100ea48;
          local_58 = 10;
        }
      }
      break;
    case 4:
    case 5:
      if (bVar3 == true) {
        local_58 = 6;
      }
      else {
        if (bVar3 == true) {
          local_58 = 8;
        }
        else {
          if (bVar3 != true) goto LAB_0100ea4c;
          local_58 = 7;
        }
      }
      break;
    case 6:
    case 7:
      if (bVar3 == true) {
        local_58 = 0xc;
      }
      else {
        if (bVar3 == true) {
          local_58 = 0xd;
        }
        else {
          if (bVar3 == true) {
            local_58 = 0xe;
          }
          else {
LAB_0100ea44:
            local_58 = 0x11;
          }
        }
      }
      break;
    case 8:
    case 9:
      if (bVar3 == true) {
LAB_0100ea4c:
        local_58 = 0xf;
      }
      else {
        if (bVar3 == true) {
LAB_0100ea48:
          local_58 = 0x10;
        }
        else {
          if (bVar3 == true) goto LAB_0100ea44;
          local_58 = 0x12;
        }
      }
      break;
    default:
      goto switchD_0100e9ce_caseD_9;
    }
    *(undefined4 *)((int)DAT_01023888 + 6) = local_58;
    (**(code **)*DAT_01023888)(0xf,0x40000000);
    (**(code **)*DAT_01023bbc)(4,0);
  }
  FUN_01011bb5(0x43,param_2);
switchD_0100e9ce_caseD_9:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100ebf3(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if ((((DAT_010236e4 == param_2) || (_DAT_010236ec == param_2)) || (_DAT_010236f4 == param_2)) ||
       (_DAT_010236fc == param_2)) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e74)(0x14,0);
        (**(code **)*DAT_01023e8c)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_4c = 0x40800000;
        _Format = FUN_01003752(0x6c);
        FUN_010144b7(_Format,local_4c);
        local_4c = FUN_0100c335(500000);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_4c);
        iVar1 = FUN_0100e50b(6);
        if (iVar1 == 0) {
          FUN_010144b7(local_48,0x41000000);
          (**(code **)(*DAT_01023d14 + 0x14))();
        }
      }
      else {
        FUN_01011bb5(0x43,(undefined **)param_2);
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023e74)(7,0);
      (**(code **)*DAT_01023e8c)(7,0);
      *(undefined4 *)(DAT_01023888 + 6) = 8;
    }
    else {
      if (param_1 != 0x43) goto LAB_0100ed72;
    }
    local_4c = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x6b);
    sprintf(local_48,_Format,local_4c);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_0100ed72:
  FUN_0101cd9e();
  return;
}



void FUN_0100ed83(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (DAT_01023870 == param_2) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023ebc)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_4c = 0x40800000;
        _Format = FUN_01003752(0x6f);
        FUN_010144b7(_Format,local_4c);
        local_4c = FUN_0100c335(500000);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_4c);
        iVar1 = FUN_0100e50b(6);
        if (iVar1 == 0) {
          FUN_010144b7(local_48,0x41000000);
          (**(code **)(*DAT_01023d14 + 0x14))();
        }
      }
      else {
        FUN_01011bb5(0x43,(undefined **)param_2);
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023ebc)(7,0);
      *(undefined4 *)(DAT_01023888 + 6) = 3;
    }
    else {
      if (param_1 != 0x43) goto LAB_0100eec6;
    }
    local_4c = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x6e);
    sprintf(local_48,_Format,local_4c);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_0100eec6:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100eed7(int param_1,int param_2)

{
  code **ppcVar1;
  LPSTR _Format;
  int iVar2;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (((_DAT_0102372c == param_2) || (_DAT_01023734 == param_2)) || (_DAT_0102373c == param_2)) {
      iVar2 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar2;
      if (iVar2 == 0) {
        (**(code **)*DAT_01023e6c)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_50 = 0x40800000;
        _Format = FUN_01003752(0x71);
        FUN_010144b7(_Format,local_50);
        local_50 = FUN_0100c335(500000);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_50);
        iVar2 = FUN_0100e50b(6);
        if (iVar2 == 0) {
          FUN_010144b7(local_48,0x41000000);
          (**(code **)(*DAT_01023d14 + 0x14))();
        }
      }
      else {
        FUN_01011bb5(0x43,(undefined **)param_2);
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      *(undefined4 *)(DAT_01023888 + 6) = 3;
      ppcVar1 = DAT_01023a8c;
      (**(code **)*DAT_01023a8c)(0x14,0);
      (**(code **)*ppcVar1)(0x20,0x3e4ccccd);
      (**(code **)*ppcVar1)(0x1a,0x3e4ccccd);
      ppcVar1 = DAT_01023a94;
      (**(code **)*DAT_01023a94)(0x14,0);
      (**(code **)*ppcVar1)(0x20,0x3e4ccccd);
      (**(code **)*ppcVar1)(0x1a,0x3e4ccccd);
      (**(code **)*DAT_01023e6c)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_0100f0a1;
    }
    local_50 = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x70);
    sprintf(local_48,_Format,local_50);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_0100f0a1:
  FUN_0101cd9e();
  return;
}



void FUN_0100f0b3(int param_1,undefined **param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if ((((((DAT_01023a9c == (code **)param_2) || (DAT_01023aa4 == (code **)param_2)) ||
          (DAT_01023aac == (code **)param_2)) ||
         ((DAT_01023adc == (code **)param_2 || (DAT_01023ae4 == (code **)param_2)))) ||
        ((DAT_01023aec == (code **)param_2 ||
         ((DAT_01023b20 == (code **)param_2 || (DAT_01023b28 == (code **)param_2)))))) ||
       (DAT_01023b30 == (code **)param_2)) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e4c)(0x14,0);
        (**(code **)*DAT_01023e7c)(0x14,0);
        (**(code **)*DAT_01023eac)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_50 = 0x40800000;
        _Format = FUN_01003752(0x73);
        FUN_010144b7(_Format,local_50);
        local_50 = FUN_0100c335(750000);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_50);
        iVar1 = FUN_0100e50b(9);
        if (iVar1 == 0) {
          FUN_010144b7(local_48,0x41000000);
          (**(code **)(*DAT_01023d14 + 0x14))();
        }
      }
      else {
        FUN_01011bb5(0x43,param_2);
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      *(undefined4 *)(DAT_01023888 + 6) = 9;
      *(undefined4 *)((int)DAT_01023a9c + 6) = 0;
      (**(code **)*DAT_01023a9c)(0x32,0);
      *(undefined4 *)((int)DAT_01023aa4 + 6) = 0;
      (**(code **)*DAT_01023aa4)(0x32,0);
      *(undefined4 *)((int)DAT_01023aac + 6) = 0;
      (**(code **)*DAT_01023aac)(0x32,0);
      *(undefined4 *)((int)DAT_01023adc + 6) = 0;
      (**(code **)*DAT_01023adc)(0x32,0);
      *(undefined4 *)((int)DAT_01023ae4 + 6) = 0;
      (**(code **)*DAT_01023ae4)(0x32,0);
      *(undefined4 *)((int)DAT_01023aec + 6) = 0;
      (**(code **)*DAT_01023aec)(0x32,0);
      *(undefined4 *)((int)DAT_01023b20 + 6) = 0;
      (**(code **)*DAT_01023b20)(0x32,0);
      *(undefined4 *)((int)DAT_01023b28 + 6) = 0;
      (**(code **)*DAT_01023b28)(0x32,0);
      *(undefined4 *)((int)DAT_01023b30 + 6) = 0;
      (**(code **)*DAT_01023b30)(0x32,0);
      (**(code **)*DAT_01023e4c)(7,0);
      (**(code **)*DAT_01023e7c)(7,0);
      (**(code **)*DAT_01023eac)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_0100f36f;
    }
    local_50 = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x72);
    sprintf(local_48,_Format,local_50);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_0100f36f:
  FUN_0101cd9e();
  return;
}


