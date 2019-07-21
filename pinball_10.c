#include "pinball.h"


undefined4 * __thiscall FUN_01019749(void *this,int param_1,int param_2,int param_3)

{
  FUN_010190b3(this,param_1,param_2,param_3);
  *(undefined4 *)this = 0x1002614;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_01019771(void *this,int param_1,int param_2)

{
  FUN_010190b3(this,param_1,param_2,0);
  *(undefined4 *)this = 0x1002614;
  *(undefined *)((int)this + 0x4e) = 0;
  if (*(int *)((int)this + 0x22) != 0) {
    FUN_010139b6(*(int *)((int)this + 0x1a),*(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8));
  }
  FUN_010182e4(this,param_2);
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_010197bb(void *this,int param_1,int param_2)

{
  float *pfVar1;
  
  FUN_01019749(this,param_1,param_2,0);
  *(undefined4 *)this = 0x1002630;
  *(undefined *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x5b) = 0;
  if (*(int *)((int)this + 0x22) != 0) {
    FUN_010139b6(*(int *)((int)this + 0x1a),0);
  }
  FUN_010182e4(this,param_2);
  pfVar1 = FUN_0100978e(param_2,0,0x197);
  *(float *)((int)this + 0x57) = *pfVar1;
  return (undefined4 *)this;
}



// Library Function - Multiple Matches With Same Base Name
// Name: moneypunct<>
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

undefined4 * __thiscall moneypunct__(void *this,int param_1,int param_2)

{
  FUN_01019749(this,param_1,param_2,1);
  *(undefined4 *)this = 0x100264c;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101983d(void *this,int param_1,int param_2)

{
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 0x56) = 0;
  *(undefined4 *)((int)this + 0x5a) = 0;
  *(undefined4 *)this = 0x1002668;
  *(undefined4 *)((int)this + 0x4e) = 0x3f333333;
  *(undefined4 *)((int)this + 0x52) = 0x3dcccccd;
  *(undefined4 *)((int)this + 0x42) = 0x4e6e6b28;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_01019884(undefined4 *puParm1,int *param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  void *this;
  bool in_PF;
  undefined local_5c [12];
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 uStack16;
  undefined4 uStack12;
  undefined4 local_8;
  
  FUN_010190b3(puParm1,(int)param_1,param_2,0);
  *puParm1 = 0x1002690;
  *(uint *)((int)puParm1 + 0x52) = (uint)(param_3 == 0);
  if (param_3 == 0) {
    *(undefined *)((int)puParm1 + 5) = 0;
  }
  *(undefined4 *)((int)puParm1 + 0x5a) = 0x3fc00000;
  *(undefined4 *)((int)puParm1 + 0x5e) = 0x3d4ccccd;
  *(undefined4 *)((int)puParm1 + 6) = 0;
  *(undefined4 *)((int)puParm1 + 0x56) = 0;
  *(undefined4 *)((int)puParm1 + 0x4e) = 0;
  pfVar2 = FUN_0100978e(param_2,0,0x132);
  fVar1 = *pfVar2;
  pfVar2 = FUN_0100978e(param_2,0,0x131);
  *(float *)((int)puParm1 + 0x6a) = *pfVar2;
  FUN_0100950a(param_2,0,local_5c);
  *(undefined4 *)((int)puParm1 + 0x46) = local_4c;
  *(undefined4 *)((int)puParm1 + 0x4a) = local_2c;
  *(undefined4 *)((int)puParm1 + 0x6e) = *local_50;
  *(undefined4 *)((int)puParm1 + 0x72) = local_50[1];
  *(float *)((int)puParm1 + 0x7a) = fVar1 * (float)local_50[2];
  if (!in_PF) {
    *(undefined4 *)((int)puParm1 + 0x7a) = 0x3a83126f;
  }
  this = operator_new(0x25);
  if (this == (void *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = FUN_01015898(this,puParm1,(int)puParm1 + 5,local_28,local_50,
                           *(float *)((int)puParm1 + 0x7a));
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    FUN_0100acf3((void *)((int)puParm1 + 0x2a),(int)param_1);
  }
  fVar1 = (float)local_50[2];
  *(float *)((int)puParm1 + 0x7a) = fVar1 * fVar1;
  pfVar2 = FUN_0100978e(param_2,0,0x198);
  *(float *)((int)puParm1 + 0x62) = pfVar2[2];
  *(float *)((int)puParm1 + 0x96) = local_40 * 0.01000000;
  *(undefined4 *)((int)puParm1 + 0x82) = local_3c;
  *(undefined4 *)((int)puParm1 + 0x86) = uStack56;
  *(undefined4 *)((int)puParm1 + 0x8e) = local_30;
  *(undefined4 *)((int)puParm1 + 0x8a) = uStack52;
  *(undefined4 *)((int)puParm1 + 0x92) = local_44;
  local_8 = *(undefined4 *)((int)puParm1 + 0x7a);
  local_14 = *(undefined4 *)((int)puParm1 + 0x6e);
  uStack16 = *(undefined4 *)((int)puParm1 + 0x72);
  *(int *)((int)puParm1 + 0x9a) = (int)puParm1 + 5;
  uStack12 = *(undefined4 *)((int)puParm1 + 0x76);
  *(undefined4 **)((int)puParm1 + 0xa2) = puParm1;
  *(undefined4 *)((int)puParm1 + 0x9e) = local_28;
  FUN_0100b9c7(&local_14,0,(int *)((int)puParm1 + 0x9a));
  return puParm1;
}



undefined4 * __thiscall FUN_01019a1c(undefined4 *puParm1,int *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  void *this;
  undefined4 uVar3;
  bool in_PF;
  undefined local_60 [12];
  undefined4 *local_54;
  undefined4 local_2c;
  undefined4 local_18;
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 local_c;
  undefined4 *local_8;
  
  FUN_010190b3(puParm1,(int)param_1,param_2,0);
  *puParm1 = 0x10026ac;
  *(undefined4 *)((int)puParm1 + 0x5e) = 0x3d4ccccd;
  *(undefined4 *)((int)puParm1 + 6) = 0;
  *(undefined4 *)((int)puParm1 + 0x56) = 0;
  *(undefined4 *)((int)puParm1 + 0x4e) = 0;
  pfVar2 = FUN_0100978e(param_2,0,0x197);
  if (pfVar2 == (float *)0x0) {
    *(undefined4 *)((int)puParm1 + 0x5a) = 0x3e800000;
  }
  else {
    *(float *)((int)puParm1 + 0x5a) = *pfVar2;
  }
  pfVar2 = FUN_0100978e(param_2,0,0x2bd);
  if (pfVar2 == (float *)0x0) {
    *(undefined4 *)((int)puParm1 + 0x62) = 0x3f000000;
  }
  else {
    *(float *)((int)puParm1 + 0x62) = *pfVar2;
  }
  pfVar2 = FUN_0100978e(param_2,0,0x132);
  fVar1 = *pfVar2;
  pfVar2 = FUN_0100978e(param_2,0,0x131);
  *(float *)((int)puParm1 + 0x6e) = *pfVar2;
  FUN_0100950a(param_2,0,local_60);
  *(undefined4 *)((int)puParm1 + 0x72) = *local_54;
  *(undefined4 *)((int)puParm1 + 0x76) = local_54[1];
  local_8 = local_54;
  *(float *)((int)puParm1 + 0x7e) = fVar1 * (float)local_54[2];
  if (!in_PF) {
    *(undefined4 *)((int)puParm1 + 0x7e) = 0x3a83126f;
  }
  this = operator_new(0x25);
  if (this == (void *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = FUN_01015898(this,puParm1,(int)puParm1 + 5,local_2c,local_8,
                           *(float *)((int)puParm1 + 0x7e));
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    FUN_0100acf3((void *)((int)puParm1 + 0x2a),(int)param_1);
  }
  fVar1 = (float)local_54[2];
  *(float *)((int)puParm1 + 0x7e) = fVar1 * fVar1;
  pfVar2 = FUN_0100978e(param_2,0,0x198);
  *(float *)((int)puParm1 + 0x66) = pfVar2[2];
  pfVar2 = FUN_0100978e(param_2,0,0x518);
  floor((double)*pfVar2);
  uVar3 = _ftol();
  *(undefined4 *)((int)puParm1 + 0x6a) = uVar3;
  local_c = *(undefined4 *)((int)puParm1 + 0x7e);
  local_18 = *(undefined4 *)((int)puParm1 + 0x72);
  uStack20 = *(undefined4 *)((int)puParm1 + 0x76);
  *(int *)((int)puParm1 + 0x82) = (int)puParm1 + 5;
  uStack16 = *(undefined4 *)((int)puParm1 + 0x7a);
  *(undefined4 **)((int)puParm1 + 0x8a) = puParm1;
  *(undefined4 *)((int)puParm1 + 0x86) = local_2c;
  FUN_0100b9c7(&local_18,0,(int *)((int)puParm1 + 0x82));
  return puParm1;
}



undefined4 * __thiscall FUN_01019bb8(undefined4 *puParm1,float *param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  undefined4 uVar5;
  void *this;
  int *piVar6;
  int iVar7;
  bool in_PF;
  float10 fVar8;
  float10 fVar9;
  undefined local_88 [52];
  int local_54;
  float local_40;
  float local_3c;
  int local_34;
  int local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  int local_20;
  int local_1c;
  float *local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar7 = (int)param_2;
  FUN_010190b3(puParm1,(int)param_1,(int)param_2,0);
  *puParm1 = 0x10026cc;
  *(undefined4 *)((int)puParm1 + 6) = 0;
  *(undefined *)(puParm1 + 1) = 1;
  FUN_0100950a(iVar7,0,local_88);
  *(int *)((int)puParm1 + 0x6a) = local_54;
  pfVar4 = FUN_0100978e(iVar7,0,0x2bd);
  if (pfVar4 == (float *)0x0) {
    *(undefined4 *)((int)puParm1 + 0x76) = 0x3e4ccccd;
  }
  else {
    *(float *)((int)puParm1 + 0x76) = *pfVar4;
  }
  pfVar4 = FUN_0100978e(iVar7,0,0x519);
  if (pfVar4 == (float *)0x0) {
    *(undefined4 *)((int)puParm1 + 0x6e) = 0;
  }
  else {
    floor((double)*pfVar4);
    uVar5 = _ftol();
    *(undefined4 *)((int)puParm1 + 0x6e) = uVar5;
  }
  pfVar4 = FUN_0100978e((int)param_2,0,0x514);
  floor((double)*pfVar4);
  uVar5 = _ftol();
  *(undefined4 *)((int)puParm1 + 0x72) = uVar5;
  *(float **)((int)puParm1 + 0x7a) = pfVar4 + 1;
  pfVar4 = FUN_0100978e((int)param_2,0,0x517);
  floor((double)*pfVar4);
  bVar3 = _ftol();
  local_40 = pfVar4[2];
  local_3c = pfVar4[3];
  local_10 = pfVar4[4];
  local_c = pfVar4[5];
  this = operator_new(0x55);
  if (this == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = FUN_0101c77e(this,puParm1,(int)puParm1 + 5,1 << (bVar3 & 0x1f),&local_10,&local_40);
  }
  *(int **)((int)puParm1 + 0x86) = piVar6;
  FUN_0100acf3((void *)((int)puParm1 + 0x2a),(int)piVar6);
  if (piVar6 != (int *)0x0) {
    *(undefined4 *)((int)piVar6 + 0xd) = 0;
    (**(code **)(*piVar6 + 8))();
  }
  pfVar4 = FUN_0100978e((int)param_2,0,0x515);
  floor((double)*pfVar4);
  uVar5 = _ftol();
  *(undefined4 *)((int)puParm1 + 0x8a) = uVar5;
  floor((double)pfVar4[1]);
  local_30 = _ftol();
  *(int *)((int)puParm1 + 0x8a) = 1 << ((byte)*(undefined4 *)((int)puParm1 + 0x8a) & 0x1f);
  *(float *)((int)puParm1 + 0x92) = pfVar4[7];
  FUN_01016b27(*(undefined4 *)((int)puParm1 + 0x7a),*(undefined4 *)((int)puParm1 + 0x72),pfVar4 + 3,
               &param_1,&local_28);
  this = operator_new(0x55);
  if (this == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = FUN_0101c77e(this,puParm1,(int)puParm1 + 5,*(undefined4 *)((int)puParm1 + 0x6a),
                          local_28,param_1);
  }
  *(int **)((int)puParm1 + 0x7e) = piVar6;
  FUN_0100acf3((void *)((int)puParm1 + 0x2a),(int)piVar6);
  if (piVar6 != (int *)0x0) {
    *(undefined4 *)((int)piVar6 + 0xd) = 0;
    (**(code **)(*piVar6 + 8))();
  }
  pfVar4 = FUN_0100978e((int)param_2,0,0x516);
  floor((double)*pfVar4);
  uVar5 = _ftol();
  *(undefined4 *)((int)puParm1 + 0x8e) = uVar5;
  floor((double)pfVar4[1]);
  local_34 = _ftol();
  *(int *)((int)puParm1 + 0x8e) = 1 << ((byte)*(undefined4 *)((int)puParm1 + 0x8e) & 0x1f);
  *(float *)((int)puParm1 + 0x96) = pfVar4[7];
  FUN_01016b27(*(undefined4 *)((int)puParm1 + 0x7a),*(undefined4 *)((int)puParm1 + 0x72),pfVar4 + 3,
               &local_24,&local_18);
  this = operator_new(0x55);
  if (this == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = FUN_0101c77e(this,puParm1,(int)puParm1 + 5,*(undefined4 *)((int)puParm1 + 0x6a),
                          local_18,local_24);
  }
  *(int **)((int)puParm1 + 0x82) = piVar6;
  FUN_0100acf3((void *)((int)puParm1 + 0x2a),(int)piVar6);
  if (piVar6 != (int *)0x0) {
    *(undefined4 *)((int)piVar6 + 0xd) = 0;
    (**(code **)(*piVar6 + 8))();
  }
  local_10 = 1000000000.00000000;
  local_20 = 0;
  local_14 = 1000000000.00000000;
  local_8 = -1000000000.00000000;
  local_c = -1000000000.00000000;
  if (0 < *(int *)((int)puParm1 + 0x72)) {
    do {
      local_1c = local_20 * 0x34;
      iVar7 = local_1c + *(int *)((int)puParm1 + 0x7a);
      pfVar4 = (float *)(iVar7 + 0x1c);
      pfVar1 = (float *)(iVar7 + 0xc);
      local_2c = (float *)(iVar7 + 0x14);
      if (in_PF) {
        if (in_PF) {
          fVar2 = *pfVar1;
        }
        else {
          fVar2 = *pfVar4;
        }
        if ((ushort)((ushort)(fVar2 < *local_2c) << 8 | (ushort)(fVar2 == *local_2c) << 0xe) == 0) {
          local_14 = *local_2c;
        }
        else {
          if (in_PF) {
            local_14 = *pfVar1;
          }
          else {
            local_14 = *pfVar4;
          }
        }
      }
      local_10 = local_14;
      if (in_PF) {
        if (in_PF) {
          fVar2 = *(float *)(iVar7 + 0x10);
        }
        else {
          fVar2 = *(float *)(iVar7 + 0x20);
        }
        if ((ushort)((ushort)(fVar2 < *(float *)(iVar7 + 0x18)) << 8 |
                    (ushort)(fVar2 == *(float *)(iVar7 + 0x18)) << 0xe) == 0) {
          local_10 = *(float *)(iVar7 + 0x18);
        }
        else {
          if (in_PF) {
            local_10 = *(float *)(iVar7 + 0x10);
          }
          else {
            local_10 = *(float *)(iVar7 + 0x20);
          }
        }
      }
      if (in_PF) {
        if ((ushort)((ushort)(*pfVar4 < *pfVar1) << 8 | (ushort)(*pfVar4 == *pfVar1) << 0xe) == 0) {
          fVar2 = *pfVar4;
        }
        else {
          fVar2 = *pfVar1;
        }
      }
      else {
        fVar2 = *local_2c;
      }
      local_c = local_14;
      if ((ushort)((ushort)(local_14 < fVar2) << 8 | (ushort)(local_14 == fVar2) << 0xe) != 0) {
        if (in_PF) {
          if ((ushort)((ushort)(*pfVar4 < *pfVar1) << 8 | (ushort)(*pfVar4 == *pfVar1) << 0xe) == 0)
          {
            local_c = *pfVar4;
          }
          else {
            local_c = *pfVar1;
          }
        }
        else {
          local_c = *local_2c;
        }
      }
      if (in_PF) {
        if ((ushort)((ushort)(*(float *)(iVar7 + 0x20) < *(float *)(iVar7 + 0x10)) << 8 |
                    (ushort)(*(float *)(iVar7 + 0x20) == *(float *)(iVar7 + 0x10)) << 0xe) == 0) {
          fVar2 = *(float *)(iVar7 + 0x20);
        }
        else {
          fVar2 = *(float *)(iVar7 + 0x10);
        }
      }
      else {
        fVar2 = *(float *)(iVar7 + 0x18);
      }
      local_8 = local_14;
      if ((ushort)((ushort)(local_14 < fVar2) << 8 | (ushort)(local_14 == fVar2) << 0xe) != 0) {
        if (in_PF) {
          if ((ushort)((ushort)(*(float *)(iVar7 + 0x20) < *(float *)(iVar7 + 0x10)) << 8 |
                      (ushort)(*(float *)(iVar7 + 0x20) == *(float *)(iVar7 + 0x10)) << 0xe) == 0) {
            local_8 = *(float *)(iVar7 + 0x20);
          }
          else {
            local_8 = *(float *)(iVar7 + 0x10);
          }
        }
        else {
          local_8 = *(float *)(iVar7 + 0x18);
        }
      }
      if ((pfVar1 == param_1) && (local_2c == local_28)) {
        if (local_30 == 0) {
LAB_0101a09f:
          param_2 = (int *)0x0;
        }
        else {
          param_2 = *(int **)((int)puParm1 + 0x8a);
        }
      }
      else {
        param_2 = (int *)local_54;
        if ((pfVar1 == local_24) && (param_2 = (int *)local_54, local_2c == local_18)) {
          if (local_34 == 0) goto LAB_0101a09f;
          param_2 = *(int **)((int)puParm1 + 0x8e);
        }
      }
      if (param_2 != (int *)0x0) {
        this = operator_new(0x55);
        if (this == (void *)0x0) {
          param_2 = (int *)0x0;
        }
        else {
          param_2 = FUN_0101c77e(this,puParm1,(int)puParm1 + 5,param_2,pfVar1,local_2c);
        }
        FUN_0100acf3((void *)((int)puParm1 + 0x2a),(int)param_2);
        if (param_2 != (int *)0x0) {
          *(int *)((int)param_2 + 0xd) = *(int *)((int)puParm1 + 0x7a) + local_1c;
          (**(code **)(*param_2 + 8))();
        }
      }
      if ((local_2c == param_1) && (pfVar4 == local_28)) {
        if (local_30 == 0) {
LAB_0101a12e:
          param_2 = (int *)0x0;
        }
        else {
          param_2 = *(int **)((int)puParm1 + 0x8a);
        }
      }
      else {
        param_2 = (int *)local_54;
        if ((local_2c == local_24) && (param_2 = (int *)local_54, pfVar4 == local_18)) {
          if (local_34 == 0) goto LAB_0101a12e;
          param_2 = *(int **)((int)puParm1 + 0x8e);
        }
      }
      if (param_2 != (int *)0x0) {
        this = operator_new(0x55);
        if (this == (void *)0x0) {
          param_2 = (int *)0x0;
        }
        else {
          param_2 = FUN_0101c77e(this,puParm1,(int)puParm1 + 5,param_2,local_2c,pfVar4);
        }
        FUN_0100acf3((void *)((int)puParm1 + 0x2a),(int)param_2);
        if (param_2 != (int *)0x0) {
          *(int *)((int)param_2 + 0xd) = *(int *)((int)puParm1 + 0x7a) + local_1c;
          (**(code **)(*param_2 + 8))();
        }
      }
      if ((pfVar4 == param_1) && (pfVar1 == local_28)) {
        if (local_30 == 0) {
LAB_0101a1ba:
          param_2 = (int *)0x0;
        }
        else {
          param_2 = *(int **)((int)puParm1 + 0x8a);
        }
      }
      else {
        param_2 = (int *)local_54;
        if ((pfVar4 == local_24) && (param_2 = (int *)local_54, pfVar1 == local_18)) {
          if (local_34 == 0) goto LAB_0101a1ba;
          param_2 = *(int **)((int)puParm1 + 0x8e);
        }
      }
      if (param_2 != (int *)0x0) {
        this = operator_new(0x55);
        if (this == (void *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = FUN_0101c77e(this,puParm1,(int)puParm1 + 5,param_2,pfVar4,pfVar1);
        }
        FUN_0100acf3((void *)((int)puParm1 + 0x2a),(int)piVar6);
        if (piVar6 != (int *)0x0) {
          *(int *)((int)piVar6 + 0xd) = *(int *)((int)puParm1 + 0x7a) + local_1c;
          (**(code **)(*piVar6 + 8))();
        }
      }
      iVar7 = *(int *)((int)puParm1 + 0x7a) + local_1c;
      fVar8 = (float10)fcos((float10)*(float *)(iVar7 + 0x28));
      fVar9 = (float10)fsin((float10)*(float *)(iVar7 + 0x24));
      *(float *)(iVar7 + 0x2c) =
           (float)(fVar9 * fVar8 * (float10)*(float *)(*(int *)((int)puParm1 + 0x1e) + 0x10e));
      iVar7 = *(int *)((int)puParm1 + 0x7a) + local_1c;
      fVar8 = (float10)fsin((float10)*(float *)(iVar7 + 0x28));
      local_20 = local_20 + 1;
      fVar9 = (float10)fsin((float10)*(float *)(iVar7 + 0x24));
      *(float *)(iVar7 + 0x30) =
           (float)(fVar9 * fVar8 * (float10)*(float *)(*(int *)((int)puParm1 + 0x1e) + 0x10e));
    } while (local_20 < *(int *)((int)puParm1 + 0x72));
  }
  *(int *)((int)puParm1 + 0x5e) = (int)puParm1 + 5;
  *(undefined4 **)((int)puParm1 + 0x66) = puParm1;
  *(int *)((int)puParm1 + 0x62) = local_54;
  FUN_0100be21(local_10,local_14,local_8,local_c,0,(int *)((int)puParm1 + 0x5e));
  return puParm1;
}



undefined4 * __thiscall FUN_0101a2b5(void *this,int param_1,int param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined local_4c [52];
  undefined4 local_18;
  
  FUN_010190b3(this,param_1,param_2,0);
  *(undefined4 *)this = 0x10026e8;
  *(undefined4 *)((int)this + 0x72) = 0;
  *(undefined4 *)((int)this + 0x6e) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  *(undefined4 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined *)((int)this + 4) = 0;
  *(undefined *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 0x62) = 0;
  *(undefined4 *)((int)this + 0x5e) = 0;
  *(void **)(param_1 + 0xe6) = this;
  pfVar1 = FUN_0100978e(param_2,0,0x197);
  if (pfVar1 == (float *)0x0) {
    *(undefined4 *)((int)this + 0x4e) = 0x3e4ccccd;
    *(undefined4 *)((int)this + 0x52) = 0x3dcccccd;
    *(undefined4 *)((int)this + 0x56) = 0x3e4ccccd;
    *(undefined4 *)((int)this + 0x5a) = 0x3dcccccd;
  }
  else {
    *(float *)((int)this + 0x4e) = *pfVar1;
    *(float *)((int)this + 0x52) = pfVar1[1];
    *(float *)((int)this + 0x56) = pfVar1[2];
    *(float *)((int)this + 0x5a) = pfVar1[3];
  }
  FUN_0100950a(param_2,0,local_4c);
  pfVar1 = FUN_0100978e(param_2,0,0x578);
  uVar2 = FUN_010179a9(pfVar1,this,(int)this + 5,local_18,0,0x578);
  *(undefined4 *)((int)this + 0x76) = uVar2;
  pfVar1 = FUN_0100978e(param_2,0,0x579);
  FUN_010179a9(pfVar1,this,(int)this + 5,local_18,0,0x579);
  pfVar1 = FUN_0100978e(param_2,0,0x57a);
  uVar2 = FUN_010179a9(pfVar1,this,(int)this + 5,local_18,0,0x57a);
  *(undefined4 *)((int)this + 0x7a) = uVar2;
  pfVar1 = FUN_0100978e(param_2,0,0x57b);
  FUN_010179a9(pfVar1,this,(int)this + 5,local_18,0,0x57b);
  pfVar1 = FUN_0100978e(param_2,0,0x57c);
  uVar2 = FUN_010179a9(pfVar1,this,(int)this + 5,local_18,*(undefined4 *)(param_1 + 0x11a),0x57c);
  *(undefined4 *)((int)this + 0x7e) = uVar2;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101a416(void *this,int param_1,int param_2)

{
  float *pfVar1;
  undefined local_4c [24];
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)this = 0x1002704;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 0x4e) = 0;
  FUN_0100950a(param_2,0,local_4c);
  *(float *)((int)this + 0x76) = local_30 * 0.01000000;
  *(undefined4 *)((int)this + 0x62) = local_2c;
  *(undefined4 *)((int)this + 0x6e) = local_20;
  *(undefined4 *)((int)this + 0x72) = local_34;
  *(undefined4 *)((int)this + 0x66) = uStack40;
  *(undefined4 *)((int)this + 0x7a) = local_14;
  *(undefined4 *)((int)this + 0x6a) = uStack36;
  *(undefined4 *)((int)this + 0x7e) = local_10;
  pfVar1 = FUN_0100978e(param_2,0,0x259);
  *(float *)((int)this + 0x56) = *pfVar1;
  *(float *)((int)this + 0x5a) = pfVar1[1];
  pfVar1 = FUN_0100978e(param_2,0,0x197);
  *(float *)((int)this + 0x52) = *pfVar1;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101a4b4(void *this,int param_1,int param_2)

{
  float *pfVar1;
  
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)((int)this + 0x56) = 0;
  *(undefined4 *)this = 0x1002720;
  pfVar1 = FUN_0100978e(param_2,0,0x197);
  *(float *)((int)this + 0x4e) = *pfVar1;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101a4f3(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined local_4c [48];
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)this = 0x1002750;
  FUN_0100950a(param_2,0,local_4c);
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x62) = local_14;
  *(undefined4 *)((int)this + 0x66) = local_10;
  *(undefined4 *)((int)this + 0x4a) = local_1c;
  *(undefined4 *)((int)this + 0x42) = 0x4e6e6b28;
  *(undefined4 *)((int)this + 0x56) = 100;
  uVar1 = _ftol();
  *(undefined4 *)((int)this + 0x36) = 0x3f000000;
  *(undefined4 *)((int)this + 0x3a) = 0x3f000000;
  *(undefined4 *)((int)this + 0x5a) = uVar1;
  *(undefined4 *)((int)this + 0x5e) = 0x3ccccccd;
  pfVar2 = FUN_0100978e(param_2,0,0x259);
  *(float *)(param_1 + 0x11e) = *pfVar2;
  *(float *)(param_1 + 0x122) = pfVar2[1];
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101a5ab(undefined4 *puParm1,float *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  void *this;
  int *piVar5;
  bool in_PF;
  float10 fVar6;
  float10 fVar7;
  undefined local_60 [8];
  int local_58;
  float *local_54;
  undefined4 local_4c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_010190b3(puParm1,(int)param_1,-1,0);
  *puParm1 = 0x100276c;
  iVar3 = FUN_010091eb("table");
  FUN_0100950a(iVar3,0,local_60);
  pfVar4 = FUN_0100978e(iVar3,0,700);
  FUN_01008eba(*pfVar4,pfVar4[1]);
  FUN_0101394e(local_1c,0,0);
  *(int *)((int)puParm1 + 0x4e) = local_20;
  local_18 = 0;
  local_14 = 0;
  local_10 = *(undefined4 *)(local_20 + 0xc);
  local_c = *(undefined4 *)(local_20 + 0x10);
  FUN_0101385c(0,local_20,local_1c,0,0,&local_18);
  *(undefined4 *)(*(int *)((int)puParm1 + 0x1e) + 0x42) = local_28;
  *(undefined4 *)(*(int *)((int)puParm1 + 0x1e) + 0x46) = local_24;
  *(undefined4 *)(*(int *)((int)puParm1 + 0x1e) + 0x4a) = local_30;
  pfVar4 = FUN_0100978e(iVar3,0,0x131);
  if (pfVar4 == (float *)0x0) {
    *(undefined4 *)(*(int *)((int)puParm1 + 0x1e) + 0x10e) = 0x41c80000;
    *(undefined4 *)(*(int *)((int)puParm1 + 0x1e) + 0x112) = 0x3f000000;
    *(undefined4 *)(*(int *)((int)puParm1 + 0x1e) + 0x116) = 0x3fc90fd8;
  }
  else {
    *(float *)(*(int *)((int)puParm1 + 0x1e) + 0x10e) = *pfVar4;
    *(float *)(*(int *)((int)puParm1 + 0x1e) + 0x112) = pfVar4[1];
    *(float *)(*(int *)((int)puParm1 + 0x1e) + 0x116) = pfVar4[2];
  }
  iVar2 = *(int *)((int)puParm1 + 0x1e);
  fVar6 = (float10)fcos((float10)*(float *)(iVar2 + 0x116));
  fVar7 = (float10)fsin((float10)*(float *)(iVar2 + 0x112));
  *(float *)((int)puParm1 + 0x62) = (float)(fVar7 * fVar6 * (float10)*(float *)(iVar2 + 0x10e));
  fVar6 = (float10)fsin((float10)*(float *)(iVar2 + 0x116));
  fVar7 = (float10)fsin((float10)*(float *)(iVar2 + 0x112));
  *(float *)((int)puParm1 + 0x66) = (float)(fVar7 * fVar6 * (float10)*(float *)(iVar2 + 0x10e));
  pfVar4 = FUN_0100978e(iVar3,0,0x2bd);
  if (pfVar4 == (float *)0x0) {
    *(undefined4 *)((int)puParm1 + 0x6e) = 0x3e4ccccd;
  }
  else {
    *(float *)((int)puParm1 + 0x6e) = *pfVar4;
  }
  *(undefined4 *)((int)param_1 + 0xea) = *(undefined4 *)(local_20 + 0x1d);
  *(undefined4 *)((int)param_1 + 0xee) = *(undefined4 *)(local_20 + 0x21);
  *(undefined4 *)((int)param_1 + 0xf2) = *(undefined4 *)(local_20 + 0xc);
  *(undefined4 *)((int)param_1 + 0xf6) = *(undefined4 *)(local_20 + 0x10);
  local_8 = local_58;
  *(undefined4 *)((int)puParm1 + 0x42) = local_4c;
  *(undefined4 *)((int)puParm1 + 0x3e) = 0x41700000;
  param_1 = local_54;
  if (in_PF) {
    fVar1 = *local_54;
  }
  else {
    if (in_PF) {
      fVar1 = local_54[4];
    }
    else {
      fVar1 = local_54[2];
    }
  }
  *(float *)((int)puParm1 + 0x52) = fVar1;
  if ((ushort)((ushort)(local_54[2] < local_54[4]) << 8 |
              (ushort)(local_54[2] == local_54[4]) << 0xe) == 0) {
    fVar1 = local_54[2];
  }
  else {
    fVar1 = local_54[4];
  }
  if ((ushort)((ushort)(fVar1 < *local_54) << 8 | (ushort)(fVar1 == *local_54) << 0xe) == 0) {
    if ((ushort)((ushort)(local_54[2] < local_54[4]) << 8 |
                (ushort)(local_54[2] == local_54[4]) << 0xe) == 0) {
      fVar1 = local_54[2];
    }
    else {
      fVar1 = local_54[4];
    }
  }
  else {
    fVar1 = *local_54;
  }
  *(float *)((int)puParm1 + 0x5a) = fVar1;
  if (in_PF) {
    fVar1 = local_54[1];
  }
  else {
    if (in_PF) {
      fVar1 = local_54[5];
    }
    else {
      fVar1 = local_54[3];
    }
  }
  *(float *)((int)puParm1 + 0x56) = fVar1;
  if ((ushort)((ushort)(local_54[3] < local_54[5]) << 8 |
              (ushort)(local_54[3] == local_54[5]) << 0xe) == 0) {
    fVar1 = local_54[3];
  }
  else {
    fVar1 = local_54[5];
  }
  if ((ushort)((ushort)(fVar1 < local_54[1]) << 8 | (ushort)(fVar1 == local_54[1]) << 0xe) == 0) {
    if ((ushort)((ushort)(local_54[3] < local_54[5]) << 8 |
                (ushort)(local_54[3] == local_54[5]) << 0xe) == 0) {
      fVar1 = local_54[3];
    }
    else {
      fVar1 = local_54[5];
    }
  }
  else {
    fVar1 = local_54[1];
  }
  *(float *)((int)puParm1 + 0x5e) = fVar1;
  this = operator_new(0xfc4);
  if (this == (void *)0x0) {
    DAT_0102503c = (float *)0x0;
  }
  else {
    DAT_0102503c = FUN_0100b883(this,*(float *)((int)puParm1 + 0x52),*(float *)((int)puParm1 + 0x56)
                                ,*(float *)((int)puParm1 + 0x5a) - *(float *)((int)puParm1 + 0x52),
                                *(float *)((int)puParm1 + 0x5e) - *(float *)((int)puParm1 + 0x56));
  }
  if (0 < local_8) {
    do {
      this = operator_new(0x55);
      if (this == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = FUN_0101c6fd(this,puParm1,(int)puParm1 + 5,local_2c,param_1[2],param_1[3],*param_1,
                              param_1[1]);
      }
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))();
        FUN_0100acf3((void *)((int)puParm1 + 0x2a),(int)piVar5);
      }
      param_1 = param_1 + 2;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *(undefined4 *)((int)puParm1 + 0x76) = 0xffffffff;
  *(int *)((int)puParm1 + 0x72) = (int)puParm1 + 5;
  *(undefined4 **)((int)puParm1 + 0x7a) = puParm1;
  FUN_0100be21(*(undefined4 *)((int)puParm1 + 0x56),*(undefined4 *)((int)puParm1 + 0x52),
               *(undefined4 *)((int)puParm1 + 0x5e),*(undefined4 *)((int)puParm1 + 0x5a),0,
               (int *)((int)puParm1 + 0x72));
  return puParm1;
}



void __fastcall FUN_0101a928(undefined4 *param_1)

{
  *param_1 = 0x100276c;
  if (DAT_0102503c != (void *)0x0) {
    FUN_01017441(DAT_0102503c,1);
  }
  FUN_01019172(param_1);
  return;
}



void __fastcall FUN_0101a951(undefined4 *param_1)

{
  int *piVar1;
  int local_8;
  
  *param_1 = 0x1002790;
  piVar1 = (int *)((int)param_1 + 0x66);
  local_8 = 4;
  do {
    if (*piVar1 != 0) {
      FUN_01013c6f(*piVar1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 7;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (*(int *)((int)param_1 + 0x3a) != 0) {
    FUN_01013c6f(*(int *)((int)param_1 + 0x3a));
    *(undefined4 *)((int)param_1 + 0x3a) = 0;
  }
  if (*(int *)((int)param_1 + 0x36) != 0) {
    FUN_01013c6f(*(int *)((int)param_1 + 0x36));
    *(undefined4 *)((int)param_1 + 0x36) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x10a);
  while( true ) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
    if (*(int *)(*(int *)((int)param_1 + 0xfe) + 4) == 0) break;
    piVar1 = *(int **)(*(int *)((int)param_1 + 0xfe) + 8);
  }
  FUN_01013c6f(*(int *)((int)param_1 + 0x106));
  FUN_01013c6f(*(int *)((int)param_1 + 0xfe));
  FUN_01018fbc(param_1);
  return;
}



undefined4 * __thiscall FUN_0101a9f2(void *this,byte param_1)

{
  FUN_0101a951((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101aa18(void *this,int param_1,int param_2)

{
  undefined local_4c [56];
  undefined4 local_14;
  
  FUN_01017c6d(this,param_1,param_2,1);
  *(undefined4 *)this = 0x10027a4;
  FUN_0100950a(param_2,0,local_4c);
  *(undefined4 *)((int)this + 0x2a) = local_14;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101aa56(void *this,int param_1,int param_2)

{
  FUN_01017c6d(this,param_1,param_2,1);
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)this = 0x10027bc;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101aa81(void *this,byte param_1)

{
  FUN_01019082((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101aaa7(void *this,byte param_1)

{
  FUN_01019172((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101aacd(void *this,byte param_1)

{
  FUN_0101a928((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



undefined4 * __fastcall FUN_0101aaf3(undefined4 *param_1)

{
  short sVar1;
  void *this;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 **ppuVar8;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar6 = (undefined4 *)0x0;
  local_c = param_1;
  local_8 = param_1;
  FUN_01017c6d(param_1,0,-1,0);
  *param_1 = 0x1002790;
  FUN_010098d3((void *)((int)param_1 + 0xfa),0x20,0x10);
  FUN_010098d3((void *)((int)param_1 + 0x102),3,1);
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined *)((int)param_1 + 5) = 1;
  *(undefined4 *)((int)param_1 + 0x172) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x166) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined4 *)((int)param_1 + 0x15a) = 0;
  this = (void *)FUN_010145f5(0x16a);
  if (this != (void *)0x0) {
    puVar6 = FUN_01019309(this,(int)param_1);
  }
  FUN_0100acf3((void *)((int)param_1 + 0x102),(int)puVar6);
  if (puVar6 != (undefined4 *)0x0) {
    *(undefined *)((int)puVar6 + 5) = 0;
  }
  iVar2 = FUN_010145f5(0x7e);
  if (iVar2 != 0) {
    FUN_0101a5ab(param_1);
  }
  this = (void *)FUN_010145f5(0x8a);
  if (this == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_0100adb1(this,param_1,0);
  }
  *(undefined4 **)((int)param_1 + 0x10a) = puVar6;
  piVar3 = FUN_01013bb3("score1",DAT_010253b4);
  *(int **)((int)param_1 + 0x32) = piVar3;
  *(int **)((int)param_1 + 0x66) = piVar3;
  iVar2 = 1;
  puVar6 = (undefined4 *)((int)param_1 + 0x82);
  do {
    uVar4 = FUN_01013c48(*(int **)((int)param_1 + 0x32));
    *puVar6 = uVar4;
    iVar2 = iVar2 + 1;
    puVar6 = puVar6 + 7;
  } while (iVar2 < 4);
  *(undefined4 *)((int)param_1 + 0xda) = 0;
  *(undefined4 *)((int)param_1 + 0x14a) = 3;
  piVar3 = FUN_01013bb3("ballcount1",DAT_010253b4);
  *(int **)((int)param_1 + 0x36) = piVar3;
  piVar3 = FUN_01013bb3("player_number1",DAT_010253b4);
  *(int **)((int)param_1 + 0x3a) = piVar3;
  ppuVar8 = &local_c;
  iVar7 = 0x401;
  iVar2 = FUN_010091eb("table_objects");
  psVar5 = FUN_0100981a(iVar2,iVar7,(int *)ppuVar8);
  if ((0 < (int)local_c) && (local_8 = (undefined4 *)0x0, 0 < (int)local_c / 2)) {
    do {
      sVar1 = *psVar5;
      iVar2 = (int)psVar5[1];
      psVar5 = psVar5 + 2;
      switch(sVar1) {
      case 1000:
      case 0x3f2:
        this = (void *)FUN_010145f5(0x5a);
        if (this != (void *)0x0) {
          FUN_010191ba(this,(int)param_1,iVar2);
        }
        break;
      case 0x3e9:
        this = (void *)FUN_010145f5(0x6a);
        if (this == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_0101a4f3(this,(int)param_1,iVar2);
        }
        *(undefined4 **)((int)param_1 + 0xde) = puVar6;
        break;
      case 0x3ea:
        this = (void *)FUN_010145f5(0xde);
        if (this == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_0100ad21(this,(int)param_1,iVar2);
        }
        FUN_0100acf3((void *)(*(int *)((int)param_1 + 0x10a) + 0x2a),(int)puVar6);
        break;
      case 0x3eb:
        this = (void *)FUN_010145f5(0x6a);
        if (this == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_0101c59d(this,(int)param_1,iVar2);
        }
        *(undefined4 **)((int)param_1 + 0x2a) = puVar6;
        break;
      case 0x3ec:
        this = (void *)FUN_010145f5(0x6a);
        if (this == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_0101c59d(this,(int)param_1,iVar2);
        }
        *(undefined4 **)((int)param_1 + 0x2e) = puVar6;
        break;
      case 0x3ed:
        this = (void *)FUN_010145f5(0x96);
        if (this != (void *)0x0) {
          FUN_0101944a(this,(int)param_1,iVar2);
        }
        break;
      case 0x3ee:
        this = (void *)FUN_010145f5(0x72);
        if (this != (void *)0x0) {
          FUN_010195e0(this,(int)param_1,iVar2);
        }
        break;
      case 0x3ef:
        this = (void *)FUN_010145f5(0x5a);
        if (this == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_0101a4b4(this,(int)param_1,iVar2);
        }
        *(undefined4 **)((int)param_1 + 0xe2) = puVar6;
        break;
      case 0x3f3:
        this = (void *)FUN_010145f5(0x72);
        if (this != (void *)0x0) {
          FUN_01019677(this,(int)param_1,iVar2);
        }
        break;
      case 0x3f4:
        iVar7 = FUN_010145f5(0xea);
        if (iVar7 != 0) {
          uVar4 = 1;
LAB_0101af16:
          FUN_01019884(param_1,iVar2,uVar4);
        }
        break;
      case 0x3f5:
        this = (void *)FUN_010145f5(0x66);
        if (this != (void *)0x0) {
          FUN_010196e5(this,(int)param_1,iVar2);
        }
        break;
      case 0x3f6:
        this = (void *)FUN_010145f5(0x5e);
        if (this != (void *)0x0) {
          FUN_0101983d(this,(int)param_1,iVar2);
        }
        break;
      case 0x3f7:
        this = (void *)FUN_010145f5(0x57);
        if (this != (void *)0x0) {
          FUN_01019771(this,(int)param_1,iVar2);
        }
        break;
      case 0x3f8:
        this = (void *)FUN_010145f5(0x6e);
        if (this != (void *)0x0) {
          FUN_01019204(this,(int)param_1,iVar2);
        }
        break;
      case 0x3f9:
        this = (void *)FUN_010145f5(0x9e);
        if (this != (void *)0x0) {
          FUN_0101a416(this,(int)param_1,iVar2);
        }
        break;
      case 0x3fa:
        this = (void *)FUN_010145f5(0x76);
        if (this != (void *)0x0) {
          FUN_010194b0(this,(int)param_1,iVar2);
        }
        break;
      case 0x3fb:
        this = (void *)FUN_010145f5(0x62);
        if (this != (void *)0x0) {
          FUN_0101961f(this,(int)param_1,iVar2);
        }
        break;
      case 0x3fc:
        this = (void *)FUN_010145f5(0x5f);
        if (this != (void *)0x0) {
          FUN_010197bb(this,(int)param_1,iVar2);
        }
        break;
      case 0x3fd:
        iVar7 = FUN_010145f5(0x9a);
        if (iVar7 != 0) {
          FUN_01019bb8(param_1,iVar2);
        }
        break;
      case 0x3fe:
        iVar7 = FUN_010145f5(0x8e);
        if (iVar7 != 0) {
          FUN_01019a1c(param_1,iVar2);
        }
        break;
      case 0x3ff:
        this = (void *)FUN_010145f5(0x82);
        if (this != (void *)0x0) {
          FUN_0101a2b5(this,(int)param_1,iVar2);
        }
        break;
      case 0x400:
        this = (void *)FUN_010145f5(0x57);
        if (this != (void *)0x0) {
          moneypunct__(this,(int)param_1,iVar2);
        }
        break;
      case 0x402:
        this = (void *)FUN_010145f5(0x8a);
        if (this != (void *)0x0) {
          FUN_0100adb1(this,param_1,iVar2);
        }
        break;
      case 0x404:
        this = (void *)FUN_010145f5(0x36);
        if (this != (void *)0x0) {
          FUN_01018ffd(this,param_1,iVar2);
        }
        break;
      case 0x405:
        iVar7 = FUN_010145f5(0xea);
        if (iVar7 != 0) {
          uVar4 = 0;
          goto LAB_0101af16;
        }
        break;
      case 0x406:
        this = (void *)FUN_010145f5(0xa6);
        if (this != (void *)0x0) {
          FUN_0100ae72(this,param_1,iVar2);
        }
        break;
      case 0x407:
        this = (void *)FUN_010145f5(0x2e);
        if (this != (void *)0x0) {
          FUN_0101aa18(this,(int)param_1,iVar2);
        }
        break;
      case 0x408:
        this = (void *)FUN_010145f5(0x2e);
        if (this != (void *)0x0) {
          FUN_0101aa56(this,(int)param_1,iVar2);
        }
        break;
      case 0x409:
        this = (void *)FUN_010145f5(0x4e);
        if (this != (void *)0x0) {
          FUN_01014092(this,(int)param_1,iVar2);
        }
      }
      local_8 = (undefined4 *)((int)local_8 + 1);
    } while ((int)local_8 < (int)local_c / 2);
  }
  FUN_01012f2a();
  DAT_01025650 = FUN_01017648(param_1,"info_text_box");
  DAT_01025654 = FUN_01017648(param_1,"mission_text_box");
  FUN_0100c01d((int)param_1);
  return param_1;
}



void FUN_0101b0a4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return;
}



void __fastcall FUN_0101b0d4(int iParm1)

{
  float fVar1;
  float fVar2;
  bool in_PF;
  float local_10;
  float local_c;
  float local_8;
  
  local_c = *(float *)(iParm1 + 0x21) - *(float *)(iParm1 + 0x2d);
  local_10 = *(float *)(iParm1 + 0x25) - *(float *)(iParm1 + 0x2d);
  local_8 = *(float *)(iParm1 + 0x2d) + *(float *)(iParm1 + 0x21);
  fVar1 = *(float *)(iParm1 + 0x25) + *(float *)(iParm1 + 0x2d);
  if (!in_PF) {
    local_c = *(float *)(iParm1 + 0x99) - *(float *)(iParm1 + 0x31);
  }
  if (!in_PF) {
    local_10 = *(float *)(iParm1 + 0x9d) - *(float *)(iParm1 + 0x31);
  }
  fVar2 = *(float *)(iParm1 + 0x31) + *(float *)(iParm1 + 0x99);
  if ((ushort)((ushort)(fVar2 < local_8) << 8 | (ushort)(fVar2 == local_8) << 0xe) == 0) {
    local_8 = fVar2;
  }
  fVar2 = *(float *)(iParm1 + 0x9d) + *(float *)(iParm1 + 0x31);
  if ((ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(fVar2 == fVar1) << 0xe) == 0) {
    fVar1 = fVar2;
  }
  if (!in_PF) {
    local_c = *(float *)(iParm1 + 0xa5) - *(float *)(iParm1 + 0x31);
  }
  if (!in_PF) {
    local_10 = *(float *)(iParm1 + 0xa9) - *(float *)(iParm1 + 0x31);
  }
  fVar2 = *(float *)(iParm1 + 0xa5) + *(float *)(iParm1 + 0x31);
  if ((ushort)((ushort)(fVar2 < local_8) << 8 | (ushort)(fVar2 == local_8) << 0xe) == 0) {
    local_8 = fVar2;
  }
  fVar2 = *(float *)(iParm1 + 0x31) + *(float *)(iParm1 + 0xa9);
  if ((ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(fVar2 == fVar1) << 0xe) == 0) {
    fVar1 = fVar2;
  }
  FUN_0100be21(local_10,local_c,fVar1,local_8,iParm1,0);
  return;
}



float10 __thiscall FUN_0101b1f7(int iParm1,float param_1)

{
  bool in_PF;
  float10 fVar1;
  
  if (*(int *)(iParm1 + 0x15) == 0) {
    fVar1 = (float10)*(float *)(iParm1 + 0x4d);
  }
  else {
    if (in_PF) {
      fVar1 = ((float10)param_1 - (float10)*(float *)(iParm1 + 0xc9)) /
              ((((float10)*(float *)(iParm1 + 0x4d) - (float10)*(float *)(iParm1 + 0x49)) /
               (float10)*(float *)(iParm1 + 0x45)) * (float10)*(float *)(iParm1 + 0xd1));
    }
    else {
      fVar1 = (float10)0;
    }
    if ((ushort)((ushort)(fVar1 < (float10)1.00000000) << 8 |
                (ushort)(fVar1 == (float10)1.00000000) << 0xe) == 0) {
      fVar1 = (float10)1;
    }
    if (*(int *)(iParm1 + 0x15) == 2) {
      fVar1 = (float10)1.00000000 - fVar1;
    }
    fVar1 = fVar1 * (float10)*(float *)(iParm1 + 0x45);
  }
  return fVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0101b281(int param_1)

{
  FUN_01008beb(&DAT_01025680,DAT_01025714,DAT_01025718,DAT_010256b4,DAT_010256b8);
  FUN_01008beb(&DAT_010256c0,DAT_010256f0,DAT_010256f4,DAT_010256fc,DAT_01025700);
  _DAT_01025660 = *(undefined4 *)(param_1 + 0x21);
  _DAT_01025664 = *(undefined4 *)(param_1 + 0x25);
  _DAT_0102566c = *(undefined4 *)(param_1 + 0x35);
  _DAT_01025670 = DAT_01025708;
  _DAT_01025674 = DAT_0102570c;
  _DAT_0102567c = *(undefined4 *)(param_1 + 0x39);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_0101b327(void *this,undefined4 param_1)

{
  float10 fVar1;
  float *local_18;
  float *pfVar2;
  
  pfVar2 = (float *)&DAT_010256b0;
  local_18 = (float *)&DAT_0102565c;
  fVar1 = (float10)FUN_0101b1f7(param_1);
  FUN_0101cc6b((float)fVar1,local_18,pfVar2);
  DAT_01025714 = *(undefined4 *)((int)this + 0x65);
  DAT_01025718 = *(undefined4 *)((int)this + 0x69);
  DAT_0102571c = *(undefined4 *)((int)this + 0x6d);
  DAT_010256b4 = *(undefined4 *)((int)this + 0x71);
  DAT_010256b8 = *(undefined4 *)((int)this + 0x75);
  DAT_010256bc = *(undefined4 *)((int)this + 0x79);
  DAT_010256f0 = *(undefined4 *)((int)this + 0x7d);
  DAT_010256f4 = *(undefined4 *)((int)this + 0x81);
  DAT_010256f8 = *(undefined4 *)((int)this + 0x85);
  DAT_010256fc = *(undefined4 *)((int)this + 0x89);
  DAT_01025700 = *(undefined4 *)((int)this + 0x8d);
  DAT_01025704 = *(undefined4 *)((int)this + 0x91);
  DAT_01025708 = *(undefined4 *)((int)this + 0x99);
  DAT_0102570c = *(undefined4 *)((int)this + 0x9d);
  DAT_01025710 = *(undefined4 *)((int)this + 0xa1);
  local_18 = (float *)((int)this + 0x21);
  FUN_0101cbb1((float *)&DAT_01025714,_DAT_0102565c,_DAT_010256b0,local_18);
  FUN_0101cbb1((float *)&DAT_010256b4,_DAT_0102565c,_DAT_010256b0,local_18);
  FUN_0101cbb1((float *)&DAT_01025708,_DAT_0102565c,_DAT_010256b0,local_18);
  FUN_0101cbb1((float *)&DAT_010256f0,_DAT_0102565c,_DAT_010256b0,local_18);
  FUN_0101cbb1((float *)&DAT_010256fc,_DAT_0102565c,_DAT_010256b0,local_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0101b43a(float *param_1,float *param_2)

{
  float fVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  bool in_PF;
  float10 fVar5;
  float local_8;
  
  local_8 = 1000000000.00000000;
  iVar4 = -1;
  fVar5 = (float10)FUN_01008c8f(param_1,&DAT_01025680);
  if (!in_PF) {
    local_8 = (float)fVar5;
    iVar4 = 0;
  }
  fVar5 = (float10)FUN_01008b34(param_1,&DAT_01025660);
  if (!in_PF) {
    local_8 = (float)fVar5;
    iVar4 = 2;
  }
  fVar5 = (float10)FUN_01008b34(param_1,&DAT_01025670);
  if (!in_PF) {
    local_8 = (float)fVar5;
    iVar4 = 3;
  }
  fVar5 = (float10)FUN_01008c8f(param_1,&DAT_010256c0);
  uVar2 = CONCAT22(extraout_var,
                   (ushort)(fVar5 < (float10)local_8) << 8 |
                   (ushort)(fVar5 == (float10)local_8) << 0xe);
  if (!in_PF) {
    local_8 = (float)fVar5;
    iVar4 = 1;
  }
  if (((param_2 != (float *)0x0) &&
      (uVar2 = CONCAT22(extraout_var,
                        (ushort)(local_8 < 1000000000.00000000) << 8 |
                        (ushort)(local_8 == 1000000000.00000000) << 0xe), !in_PF)) && (iVar4 != -1))
  {
    if (iVar4 == 0) {
      param_2[3] = DAT_01025680;
      param_2[4] = DAT_01025684;
      param_2[5] = DAT_01025688;
      pfVar3 = (float *)&DAT_010256a4;
    }
    else {
      if (iVar4 != 1) {
        if (iVar4 == 2) {
          *param_2 = local_8 * param_1[3] + *param_1;
          param_2[1] = local_8 * param_1[4] + param_1[1];
          param_2[3] = *param_2 - _DAT_01025660;
          fVar1 = param_2[1] - _DAT_01025664;
        }
        else {
          if (iVar4 != 3) {
            return uVar2;
          }
          *param_2 = local_8 * param_1[3] + *param_1;
          param_2[1] = local_8 * param_1[4] + param_1[1];
          param_2[3] = *param_2 - _DAT_01025670;
          fVar1 = param_2[1] - _DAT_01025674;
        }
        param_2[4] = fVar1;
        uVar2 = FUN_01008ae9(param_2 + 3);
        return uVar2;
      }
      param_2[3] = DAT_010256c0;
      param_2[4] = DAT_010256c4;
      param_2[5] = DAT_010256c8;
      pfVar3 = (float *)&DAT_010256e4;
    }
    *param_2 = *pfVar3;
    param_2[1] = pfVar3[1];
    param_2[2] = pfVar3[2];
  }
  return uVar2;
}



undefined4 __thiscall FUN_0101b5a8(int iParm1,float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool in_PF;
  undefined4 uStack16;
  
  if ((((((DAT_010256b4 - DAT_01025714) * (param_2 - DAT_01025718) -
          (DAT_010256b8 - DAT_01025718) * (param_1 - DAT_01025714) < 0.00000000) ||
        ((param_2 - DAT_010256b8) * (DAT_010256f0 - DAT_010256b4) -
         (param_1 - DAT_010256b4) * (DAT_010256f4 - DAT_010256b8) < 0.00000000)) ||
       ((param_2 - DAT_010256f4) * (DAT_010256fc - DAT_010256f0) -
        (param_1 - DAT_010256f0) * (DAT_01025700 - DAT_010256f4) < 0.00000000)) ||
      ((param_2 - DAT_01025700) * (DAT_01025714 - DAT_010256fc) -
       (param_1 - DAT_010256fc) * (DAT_01025718 - DAT_01025700) < 0.00000000)) &&
     ((in_PF && (in_PF)))) {
    return 0;
  }
  iVar2 = *(int *)(iParm1 + 0x15);
  if (*(float *)(iParm1 + 0x45) < 0.00000000) {
    if (iVar2 == 1) {
      fVar1 = (param_2 - DAT_010256f4) * (*(float *)(iParm1 + 0x21) - DAT_010256f0) -
              (param_1 - DAT_010256f0) * (*(float *)(iParm1 + 0x25) - DAT_010256f4);
    }
    else {
      if (iVar2 == 2) {
        fVar1 = (param_2 - DAT_010256b8) * (*(float *)(iParm1 + 0x21) - DAT_010256b4);
        fVar3 = *(float *)(iParm1 + 0x25) - DAT_010256b8;
        param_1 = param_1 - DAT_010256b4;
      }
      else {
        fVar1 = (param_2 - DAT_0102570c) * (*(float *)(iParm1 + 0x21) - DAT_01025708);
        fVar3 = *(float *)(iParm1 + 0x25) - DAT_0102570c;
        param_1 = param_1 - DAT_01025708;
      }
      fVar1 = fVar1 - param_1 * fVar3;
    }
    goto joined_r0x0101b7be;
  }
  fVar1 = *(float *)(iParm1 + 0x21);
  if (iVar2 == 1) {
    fVar1 = (param_2 - DAT_01025700) * (fVar1 - DAT_010256fc);
    fVar3 = *(float *)(iParm1 + 0x25) - DAT_01025700;
    param_1 = param_1 - DAT_010256fc;
LAB_0101b72e:
    param_1 = param_1 * fVar3;
  }
  else {
    if (iVar2 != 2) {
      fVar1 = (param_2 - DAT_0102570c) * (fVar1 - DAT_01025708);
      fVar3 = *(float *)(iParm1 + 0x25) - DAT_0102570c;
      param_1 = param_1 - DAT_01025708;
      goto LAB_0101b72e;
    }
    fVar1 = (fVar1 - DAT_01025714) * (param_2 - DAT_01025718);
    param_1 = (*(float *)(iParm1 + 0x25) - DAT_01025718) * (param_1 - DAT_01025714);
  }
  fVar1 = fVar1 - param_1;
joined_r0x0101b7be:
  if (0.00000000 <= fVar1) {
    uStack16 = 4;
  }
  else {
    uStack16 = 5;
  }
  return uStack16;
}



float * __thiscall FUN_0101b825(void *pvParm1,float *param_1)

{
  bool bVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float *pfVar2;
  int iVar3;
  undefined2 extraout_var_01;
  float *pfVar4;
  undefined4 *puVar5;
  float *pfVar6;
  bool in_PF;
  float10 fVar7;
  float10 fVar8;
  ushort uVar9;
  float local_74;
  undefined4 uStack112;
  undefined4 uStack108;
  float local_68;
  undefined4 uStack100;
  undefined4 uStack96;
  float local_48;
  float local_44;
  float fStack64;
  float local_3c;
  float local_38;
  float fStack52;
  float local_30;
  float local_2c;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if ((ushort)((ushort)(param_1[8] < *(float *)((int)pvParm1 + 0xcd)) << 8 |
              (ushort)(param_1[8] == *(float *)((int)pvParm1 + 0xcd)) << 0xe) == 0) {
    *(undefined4 *)((int)pvParm1 + 0x15) = 0;
  }
  pfVar2 = (float *)((int)pvParm1 + 0xc5);
  if (*pfVar2 == 0.00000000) {
    if (*(int *)((int)pvParm1 + 0x15) == 0) {
      *pfVar2 = 0.00000000;
      *(undefined4 *)((int)pvParm1 + 0x51) = 0;
      *(undefined4 *)((int)pvParm1 + 0x55) = 0;
      FUN_0101b327(pvParm1,param_1[8]);
      FUN_0101b281((int)pvParm1);
      local_10 = (float)FUN_0101b5a8(*param_1,param_1[1]);
      local_2c = param_1[7];
      if (local_10 == 0.00000000) {
        local_3c = param_1[3];
        local_38 = param_1[4];
        fStack52 = param_1[5];
        local_30 = param_1[6];
        local_48 = *param_1;
        local_44 = param_1[1];
        fStack64 = param_1[2];
        fVar8 = (float10)FUN_0101b43a(&local_48,&local_74);
        pfVar4 = &local_74;
        pfVar2 = (float *)CONCAT22(extraout_var_00,
                                   (ushort)(fVar8 < (float10)0.00000000) << 8 |
                                   (ushort)(fVar8 == (float10)0.00000000) << 0xe);
        if (in_PF) {
          pfVar6 = (float *)((int)pvParm1 + 0xdd);
LAB_0101bab7:
          *pfVar6 = *pfVar4;
          pfVar6[1] = pfVar4[1];
          pfVar6[2] = pfVar4[2];
        }
        else {
          pfVar2 = (float *)((int)pvParm1 + 0xdd);
          *pfVar2 = local_74;
          *(undefined4 *)((int)pvParm1 + 0xe1) = uStack112;
          *(undefined4 *)((int)pvParm1 + 0xe5) = uStack108;
          *pfVar2 = *pfVar2 - local_3c * 0.00001000;
          pfVar2 = (float *)((int)pvParm1 + 0xe1);
          *pfVar2 = *pfVar2 - local_38 * 0.00001000;
        }
        *(float *)((int)pvParm1 + 0xb9) = local_68;
        *(undefined4 *)((int)pvParm1 + 0xbd) = uStack100;
        *(undefined4 *)((int)pvParm1 + 0xc1) = uStack96;
      }
      else {
        FUN_0101cc23(*param_1,param_1[1],param_1[2],*(float *)((int)pvParm1 + 0x21),
                     *(float *)((int)pvParm1 + 0x25));
        if (in_PF) {
          FUN_0101cc23(*param_1,param_1[1],param_1[2],DAT_01025708,DAT_0102570c);
          if (in_PF) {
            local_38 = DAT_010256c4;
            local_3c = DAT_010256c0;
            if (local_10 == 0.00000000) {
              local_38 = DAT_01025684;
              local_3c = DAT_01025680;
            }
            local_3c = -local_3c;
            local_38 = -local_38;
          }
          else {
            local_3c = DAT_01025708 - *param_1;
            local_38 = DAT_0102570c - param_1[1];
            FUN_01008ae9(&local_3c);
          }
        }
        else {
          local_3c = *(float *)((int)pvParm1 + 0x21) - *param_1;
          local_38 = *(float *)((int)pvParm1 + 0x25) - param_1[1];
          FUN_01008ae9(&local_3c);
        }
        local_48 = *param_1 - local_3c * 5.00000000;
        local_44 = param_1[1] - local_38 * 5.00000000;
        local_30 = param_1[6] + 10.00000000;
        fVar8 = (float10)FUN_0101b43a(&local_48,&local_74);
        if ((float10)1000000000.00000000 <= fVar8) {
          local_3c = *(float *)((int)pvParm1 + 0x21) - *param_1;
          local_38 = *(float *)((int)pvParm1 + 0x25) - param_1[1];
          FUN_01008ae9(&local_3c);
          local_48 = *param_1 - local_3c * 5.00000000;
          local_44 = param_1[1] - local_38 * 5.00000000;
          fVar7 = (float10)FUN_0101b43a(&local_48,&local_74);
          fVar8 = (float10)1000000000.00000000;
          if (fVar7 >= fVar8) {
            return (float *)CONCAT22(extraout_var,
                                     (ushort)(fVar7 < fVar8) << 8 | (ushort)(fVar7 == fVar8) << 0xe)
            ;
          }
        }
LAB_0101ba1a:
        *(float *)((int)pvParm1 + 0xdd) = local_74;
        *(undefined4 *)((int)pvParm1 + 0xe1) = uStack112;
        *(undefined4 *)((int)pvParm1 + 0xe5) = uStack108;
        pfVar6 = (float *)((int)pvParm1 + 0xb9);
        pfVar2 = &local_68;
LAB_0101bc82:
        *pfVar6 = *pfVar2;
        pfVar6[1] = pfVar2[1];
        pfVar6[2] = pfVar2[2];
        *(float *)((int)pvParm1 + 0xdd) = *(float *)((int)pvParm1 + 0xdd) - local_3c * 0.00001000;
        pfVar2 = (float *)((int)pvParm1 + 0xe1);
        *pfVar2 = *pfVar2 - local_38 * 0.00001000;
      }
    }
    else {
      local_8 = *param_1;
      local_14 = *(float *)((int)pvParm1 + 0xb5) * param_1[6];
      local_c = param_1[1];
      local_10 = param_1[8];
      local_18 = *(float *)((int)pvParm1 + 0xb5) * param_1[3];
      local_1c = param_1[4] * *(float *)((int)pvParm1 + 0xb5);
      uVar9 = (ushort)(param_1[9] + param_1[8] < local_10) << 8 |
              (ushort)(param_1[9] + param_1[8] == local_10) << 0xe;
      pfVar2 = (float *)((uint)local_10 & 0xffff0000 | (uint)uVar9);
      while (uVar9 == 0) {
        FUN_0101b327(pvParm1,local_10);
        FUN_0101b281((int)pvParm1);
        iVar3 = FUN_0101b5a8(local_8,local_c);
        if (iVar3 != 0) {
          if ((*(int *)((int)pvParm1 + 0x15) == 1) && (iVar3 != 5)) {
            puVar5 = &DAT_01025680;
            local_38 = DAT_01025684;
            local_3c = DAT_01025680;
          }
          else {
            if ((*(int *)((int)pvParm1 + 0x15) != 2) || (iVar3 == 4)) {
              local_3c = *(float *)((int)pvParm1 + 0x21) - local_8;
              *(undefined4 *)((int)pvParm1 + 0x51) = 0;
              *(undefined4 *)((int)pvParm1 + 0x55) = 1;
              local_38 = *(float *)((int)pvParm1 + 0x25) - local_c;
              FUN_01008ae9(&local_3c);
              local_48 = local_8 - local_3c * 5.00000000;
              local_44 = local_c - local_38 * 5.00000000;
              local_30 = param_1[6] + 10.00000000;
              fVar8 = (float10)FUN_0101b43a(&local_48,&local_74);
              if ((float10)1000000000.00000000 <= fVar8) {
                *(float *)((int)pvParm1 + 0xdd) = local_8;
                *(float *)((int)pvParm1 + 0xb9) = -local_3c;
                *(float *)((int)pvParm1 + 0xe1) = local_c;
                *(float *)((int)pvParm1 + 0xbd) = -local_38;
                return (float *)local_c;
              }
              goto LAB_0101ba1a;
            }
            puVar5 = &DAT_010256c0;
            local_38 = DAT_010256c4;
            local_3c = DAT_010256c0;
          }
          local_3c = -local_3c;
          local_38 = -local_38;
          *(undefined4 *)((int)pvParm1 + 0x59) = *puVar5;
          *(undefined4 *)((int)pvParm1 + 0x5d) = puVar5[1];
          *(undefined4 *)((int)pvParm1 + 0x61) = puVar5[2];
          *(undefined4 *)((int)pvParm1 + 0x55) = 0;
          *(undefined4 *)((int)pvParm1 + 0x51) = 1;
          local_2c = 0.00200000;
          local_48 = *param_1 - local_3c * 5.00000000;
          local_44 = param_1[1] - local_38 * 5.00000000;
          local_30 = param_1[6] + 10.00000000;
          fVar7 = (float10)FUN_0101b43a(&local_48,&local_74);
          fVar8 = (float10)1000000000.00000000;
          *(float *)((int)pvParm1 + 0xb9) = local_68;
          *(undefined4 *)((int)pvParm1 + 0xbd) = uStack100;
          *(undefined4 *)((int)pvParm1 + 0xc1) = uStack96;
          if (fVar7 >= fVar8) {
            return (float *)CONCAT22(extraout_var_01,
                                     (ushort)(fVar7 < fVar8) << 8 | (ushort)(fVar7 == fVar8) << 0xe)
            ;
          }
          pfVar6 = (float *)((int)pvParm1 + 0xdd);
          pfVar2 = &local_74;
          goto LAB_0101bc82;
        }
        local_3c = param_1[3];
        local_38 = param_1[4];
        fStack52 = param_1[5];
        local_2c = param_1[7];
        local_48 = *param_1;
        local_44 = param_1[1];
        fStack64 = param_1[2];
        local_30 = local_14;
        FUN_0101b43a(&local_48,&local_74);
        if (!in_PF) {
          pfVar2 = (float *)((int)pvParm1 + 0xdd);
          *pfVar2 = local_74;
          *(undefined4 *)((int)pvParm1 + 0xe1) = uStack112;
          *(undefined4 *)((int)pvParm1 + 0xe5) = uStack108;
          *pfVar2 = *pfVar2 - local_3c * 0.00001000;
          *(float *)((int)pvParm1 + 0xe1) = *(float *)((int)pvParm1 + 0xe1) - local_38 * 0.00001000;
          bVar1 = (ushort)((ushort)(*(float *)((int)pvParm1 + 0x45) < 0.00000000) << 8 |
                          (ushort)(*(float *)((int)pvParm1 + 0x45) == 0.00000000) << 0xe) == 0;
          pfVar2 = (float *)(uint)bVar1;
          pfVar6 = (float *)((int)pvParm1 + 0x59);
          if (*(int *)((int)pvParm1 + 0x15) == 2) {
            pfVar4 = (float *)&DAT_010256c0;
            *(uint *)((int)pvParm1 + 0x51) = (uint)!bVar1;
          }
          else {
            *(float **)((int)pvParm1 + 0x51) = pfVar2;
            pfVar4 = (float *)&DAT_01025680;
          }
          goto LAB_0101bab7;
        }
        local_10 = local_10 + *(float *)((int)pvParm1 + 0xb5);
        local_8 = local_8 + local_18;
        local_c = local_c + local_1c;
        uVar9 = (ushort)(param_1[9] + param_1[8] < local_10) << 8 |
                (ushort)(param_1[9] + param_1[8] == local_10) << 0xe;
        pfVar2 = (float *)((uint)param_1 & 0xffff0000 | (uint)uVar9);
      }
    }
  }
  else {
    *pfVar2 = 0.00000000;
  }
  return pfVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_0101be06(int iParm1,int param_1)

{
  bool in_PF;
  float10 fVar1;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  *(undefined4 *)(iParm1 + 0xc5) = 1;
  if (*(int *)(iParm1 + 0x15) == 0) {
LAB_0101be63:
    fVar1 = (float10)0;
  }
  else {
    if (*(int *)(iParm1 + 0x51) == 0) {
      if ((*(int *)(iParm1 + 0x15) != 0) && (*(int *)(iParm1 + 0x55) != 0)) {
        local_1c = *(float *)(iParm1 + 0xdd) - *(float *)(iParm1 + 0x21);
        local_10 = *(float *)(iParm1 + 0xe1) - *(float *)(iParm1 + 0x25);
        local_1c = local_1c * local_1c + local_10 * local_10;
        if (_DAT_0102566c * 1.00999999 < local_1c) {
          local_1c = (1.00000000 - SQRT(local_1c / *(float *)(iParm1 + 0xb1))) *
                     *(float *)(iParm1 + 0x19);
        }
        else {
          local_1c = *(float *)(iParm1 + 0x19);
        }
        local_10 = 0.00000000;
        local_14 = 1000000000.00000000;
        local_18 = *(float *)(iParm1 + 0x1d);
        goto LAB_0101bf84;
      }
      goto LAB_0101be63;
    }
    local_1c = *(float *)(iParm1 + 0xdd) - *(float *)(iParm1 + 0x21);
    local_10 = *(float *)(iParm1 + 0xe1) - *(float *)(iParm1 + 0x25);
    local_1c = local_1c * local_1c + local_10 * local_10;
    if (local_1c <= _DAT_0102566c * 1.00999999) goto LAB_0101be63;
    local_10 = *(float *)(iParm1 + 0xb1);
    local_14 = *(float *)(iParm1 + 0x45);
    local_18 = *(float *)(iParm1 + 0xd1);
    fVar1 = FUN_0101cc4b((float *)(iParm1 + 0x59),(float *)(iParm1 + 0xb9));
    if (in_PF) {
      fVar1 = fVar1 * (float10)((ABS(local_14) / local_18) * SQRT(local_1c / local_10));
    }
    else {
      fVar1 = (float10)0;
    }
    fVar1 = fVar1 * (float10)*(float *)(iParm1 + 0x95);
  }
  local_10 = (float)fVar1;
  local_14 = (float)fVar1;
  local_18 = *(float *)(iParm1 + 0x1d);
  local_1c = *(float *)(iParm1 + 0x19);
LAB_0101bf84:
  FUN_01017883(param_1,(undefined4 *)(iParm1 + 0xdd),(float *)(iParm1 + 0xb9),local_1c,local_18,
               local_14,local_10);
  return;
}



void __thiscall FUN_0101bf98(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  float10 fVar2;
  
  if (param_1 == 1) {
    fVar2 = (float10)FUN_0101b1f7(param_2);
    *(float *)((int)extraout_ECX_00 + 0x49) = (float)fVar2;
    *(undefined4 *)((int)extraout_ECX_00 + 0x4d) = *(undefined4 *)((int)extraout_ECX_00 + 0x45);
    uVar1 = *(undefined4 *)((int)extraout_ECX_00 + 0xd5);
    this = extraout_ECX_00;
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 0x400) {
        *(undefined4 *)((int)this + 0x15) = 0;
        *(undefined4 *)((int)this + 0x4d) = 0;
        return;
      }
      goto LAB_0101bff8;
    }
    fVar2 = (float10)FUN_0101b1f7(param_2);
    uVar1 = *(undefined4 *)((int)extraout_ECX + 0xd9);
    *(float *)((int)extraout_ECX + 0x49) = (float)fVar2;
    *(undefined4 *)((int)extraout_ECX + 0x4d) = 0;
    this = extraout_ECX;
  }
  *(undefined4 *)((int)this + 0xd1) = uVar1;
LAB_0101bff8:
  if (*(int *)((int)this + 0x15) == 0) {
    *(undefined4 *)((int)this + 0xc9) = param_2;
  }
  *(int *)((int)this + 0x15) = param_1;
  *(float *)((int)this + 0xcd) = *(float *)((int)this + 0xd1) + *(float *)((int)this + 0xc9);
  return;
}



void __fastcall FUN_0101c047(undefined4 *param_1)

{
  *param_1 = 0x1002838;
  operator_delete(*(void **)((int)param_1 + 0x52));
  FUN_01019172(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0101c070(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  floor((double)((_DAT_01025630 - *(float *)(param_2 + 0x66)) / *(float *)(param_2 + 0x62) +
                0.50000000));
  iVar3 = *(int *)(param_2 + 0x22);
  iVar2 = _ftol();
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  iVar1 = *(int *)(param_2 + 6);
  if (iVar1 == 1) {
    *(int *)(param_2 + 0x4e) = *(int *)(param_2 + 0x4e) + iVar2;
    iVar3 = *(int *)(*(int *)(iVar3 + 4) + 4) + -1;
    if (iVar3 <= *(int *)(param_2 + 0x4e)) {
      *(int *)(param_2 + 0x4e) = iVar3;
      local_8 = iVar1;
    }
  }
  if ((iVar1 == 2) &&
     (*(int *)(param_2 + 0x4e) = *(int *)(param_2 + 0x4e) - iVar2, *(int *)(param_2 + 0x4e) < 1)) {
    *(undefined4 *)(param_2 + 0x4e) = 0;
    local_8 = 1;
  }
  iVar3 = 0;
  if (local_8 == 0) {
    iVar3 = FUN_010074b7(*(undefined4 *)(param_2 + 0x62),param_2,(int)FUN_0101c070);
  }
  else {
    *(undefined4 *)(param_2 + 6) = 0;
  }
  *(int *)(param_2 + 0x56) = iVar3;
  iVar3 = *(int *)(param_2 + 0x4e) * 4 + 8;
  iVar2 = *(int *)(iVar3 + *(int *)(*(int *)(param_2 + 0x22) + 4));
  FUN_01013974(*(undefined4 **)(param_2 + 0x1a),iVar2,
               *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x26) + 4) + iVar3),
               *(int *)(iVar2 + 0x1d) - *(int *)(*(int *)(param_2 + 0x1e) + 0xea),
               *(int *)(iVar2 + 0x21) - *(int *)(*(int *)(param_2 + 0x1e) + 0xee));
  return;
}


