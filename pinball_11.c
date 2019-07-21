#include "pinball.h"


undefined4 __thiscall FUN_0101c178(undefined **ppuParm1,int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  bool in_PF;
  double dVar3;
  
  if (param_1 == 1) {
    FUN_01011ec9(1,ppuParm1);
    *(undefined4 *)((int)ppuParm1 + 0x62) = *(undefined4 *)((int)ppuParm1 + 0x5a);
    iVar2 = *(int *)((int)ppuParm1 + 0x4a);
LAB_0101c217:
    if (iVar2 != 0) {
      FUN_01009895(iVar2);
    }
  }
  else {
    if (param_1 == 2) {
      *(undefined4 *)((int)ppuParm1 + 0x62) = *(undefined4 *)((int)ppuParm1 + 0x5e);
      iVar2 = *(int *)((int)ppuParm1 + 0x46);
      goto LAB_0101c217;
    }
    if (param_1 < 0x3f1) {
      return 0;
    }
    if (0x3f3 < param_1) {
      if (param_1 != 0x3fc) {
        if (param_1 == 0x3fe) goto LAB_0101c1f0;
        if (param_1 != 0x400) {
          return 0;
        }
      }
      if (*(int *)((int)ppuParm1 + 6) == 0) {
        return 0;
      }
      if (*(int *)((int)ppuParm1 + 0x56) != 0) {
        FUN_01007659(*(int *)((int)ppuParm1 + 0x56));
      }
      *(undefined4 *)((int)ppuParm1 + 0x4e) = 0xffffffff;
      *(undefined4 *)((int)ppuParm1 + 6) = 2;
      FUN_0101c070(*(undefined4 *)((int)ppuParm1 + 0x56),(int)ppuParm1);
      goto LAB_0101c290;
    }
LAB_0101c1f0:
    param_1 = 2;
    *(undefined4 *)((int)ppuParm1 + 0x62) = *(undefined4 *)((int)ppuParm1 + 0x5e);
  }
  if (*(int *)((int)ppuParm1 + 0x56) != 0) {
    FUN_01007659(*(int *)((int)ppuParm1 + 0x56));
    *(undefined4 *)((int)ppuParm1 + 0x56) = 0;
  }
  if (*(int *)((int)ppuParm1 + 6) == 0) {
    fVar1 = *(float *)((int)ppuParm1 + 0x62);
  }
  else {
    fVar1 = param_2 - *(float *)(*(int *)((int)ppuParm1 + 0x52) + 0xc9);
    dVar3 = floor((double)(fVar1 / *(float *)((int)ppuParm1 + 0x62)));
    fVar1 = fVar1 - (float)dVar3 * *(float *)((int)ppuParm1 + 0x62);
    if (!in_PF) {
      fVar1 = 0.00000000;
    }
  }
  *(int *)((int)ppuParm1 + 6) = param_1;
  *(float *)((int)ppuParm1 + 0x66) = param_2;
  iVar2 = FUN_010074b7(fVar1,(int)ppuParm1,(int)FUN_0101c070);
  *(int *)((int)ppuParm1 + 0x56) = iVar2;
LAB_0101c290:
  FUN_0101bf98(*(void **)((int)ppuParm1 + 0x52),param_1,param_2);
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 * __thiscall
FUN_0101c2ba(undefined4 *puParm1,undefined4 param_1,undefined4 param_2,undefined4 param_3,
            int param_4,float *param_5,float *param_6,float *param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *extraout_ECX;
  bool in_PF;
  float10 fVar4;
  float local_58;
  float fStack84;
  float local_50;
  float local_4c;
  float local_48;
  float fStack68;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined8 local_c;
  
  FUN_01015866(puParm1,param_1,param_2,param_3);
  *(undefined4 *)((int)puParm1 + 0x19) = param_11;
  *(undefined4 *)((int)puParm1 + 0x1d) = param_12;
  *puParm1 = 0x1002854;
  local_1c = *param_5;
  local_18 = param_5[1];
  local_14 = param_5[2];
  local_10 = *param_6;
  local_24 = param_6[1];
  fVar1 = param_6[2];
  local_c = *(double *)(param_6 + 1);
  local_4c = *param_7;
  local_48 = param_7[1];
  fStack68 = param_7[2];
  *(undefined4 *)((int)puParm1 + 0xd5) = param_8;
  *(undefined4 *)((int)puParm1 + 0xd9) = param_9;
  *(undefined4 *)((int)puParm1 + 0x95) = param_10;
  *(float *)((int)puParm1 + 0x31) = fVar1 + *(float *)(param_4 + 0x11a);
  fVar2 = local_14 + *(float *)(param_4 + 0x11a);
  *(float *)((int)puParm1 + 0x99) = local_10;
  *(float *)((int)puParm1 + 0x9d) = local_24;
  *(float *)((int)puParm1 + 0x2d) = fVar2;
  fVar3 = *(float *)((int)puParm1 + 0x31) * 1.00999999;
  *(float *)((int)puParm1 + 0xa1) = fVar1;
  fVar2 = fVar2 * 1.00999999;
  *(float *)((int)puParm1 + 0x41) = fVar3 * fVar3;
  *(float *)((int)puParm1 + 0xa5) = local_4c;
  *(float *)((int)puParm1 + 0xa9) = local_48;
  *(float *)((int)puParm1 + 0x3d) = fVar2 * fVar2;
  *(float *)((int)puParm1 + 0x21) = local_1c;
  *(float *)((int)puParm1 + 0xad) = fStack68;
  *(float *)((int)puParm1 + 0x25) = local_18;
  *(float *)((int)puParm1 + 0x39) =
       *(float *)((int)puParm1 + 0x31) * *(float *)((int)puParm1 + 0x31);
  *(float *)((int)puParm1 + 0x35) =
       *(float *)((int)puParm1 + 0x2d) * *(float *)((int)puParm1 + 0x2d);
  local_28 = local_10 - local_1c;
  local_24 = local_24 - local_18;
  local_40 = local_28;
  local_3c = local_24;
  FUN_01008ae9(&local_40);
  local_34 = local_4c - local_1c;
  local_30 = local_48 - local_18;
  FUN_01008ae9(&local_34);
  local_2c = 0;
  local_38 = 0.00000000;
  FUN_0101cc4b(&local_40,&local_34);
  fVar4 = (float10)_CIacos();
  *(float *)((int)puParm1 + 0x45) = (float)fVar4;
  FUN_01008db8(&local_40,&local_34,&local_58);
  if (!in_PF) {
    *(float *)((int)puParm1 + 0x45) = -*(float *)((int)puParm1 + 0x45);
  }
  *(undefined4 *)((int)puParm1 + 0x15) = 0;
  *(undefined4 *)((int)puParm1 + 0x4d) = 0;
  FUN_01008ae9(&local_28);
  fVar1 = -local_24;
  *(float *)((int)puParm1 + 0x71) = fVar1 * *(float *)((int)puParm1 + 0x2d) + local_1c;
  *(float *)((int)puParm1 + 0x75) = local_28 * *(float *)((int)puParm1 + 0x2d) + local_18;
  *(float *)((int)puParm1 + 0x65) = fVar1 * *(float *)((int)puParm1 + 0x31) + local_10;
  *(float *)((int)puParm1 + 0x69) = local_28 * *(float *)((int)puParm1 + 0x31) + (float)local_c;
  local_24 = -local_28;
  local_28 = -fVar1;
  *(float *)((int)puParm1 + 0x7d) = local_28 * *(float *)((int)puParm1 + 0x2d) + local_1c;
  *(float *)((int)puParm1 + 0x81) = local_24 * *(float *)((int)puParm1 + 0x2d) + local_18;
  *(float *)((int)puParm1 + 0x89) = local_28 * *(float *)((int)puParm1 + 0x31) + local_10;
  *(float *)((int)puParm1 + 0x8d) = local_24 * *(float *)((int)puParm1 + 0x31) + (float)local_c;
  if (!in_PF) {
    FUN_0101b0a4((float *)((int)puParm1 + 0x65),(float *)((int)puParm1 + 0x7d));
    FUN_0101b0a4(extraout_ECX,(float *)((int)puParm1 + 0x89));
  }
  fVar1 = local_10 - *(float *)((int)puParm1 + 0x21);
  fVar2 = (float)local_c - *(float *)((int)puParm1 + 0x25);
  local_40 = local_10;
  local_3c = (float)local_c;
  local_38 = local_c._4_4_;
  local_58 = local_4c;
  fStack84 = local_48;
  local_50 = fStack68;
  local_c._4_4_ = SQRT(fVar1 * fVar1 + fVar2 * fVar2) + *(float *)(param_4 + 0x11a) + local_c._4_4_;
  *(float *)((int)puParm1 + 0xb1) = local_c._4_4_ * local_c._4_4_;
  if (in_PF) {
    fVar1 = *(float *)((int)puParm1 + 0xd9);
  }
  else {
    fVar1 = *(float *)((int)puParm1 + 0xd5);
  }
  local_c = (double)fVar1;
  fVar4 = FUN_0101cbf5(&local_40,&local_58);
  fVar4 = fVar4 / (float10)*(float *)((int)puParm1 + 0x31);
  *(float *)((int)puParm1 + 0xb5) = (float)((float10)local_c / (fVar4 + fVar4));
  FUN_0101b0d4();
  *(undefined4 *)((int)puParm1 + 0xc5) = 0;
  *(undefined4 *)((int)puParm1 + 0xc9) = 0;
  *(undefined4 *)((int)puParm1 + 0x51) = 0;
  *(undefined4 *)((int)puParm1 + 0xcd) = 0;
  *(undefined4 *)((int)puParm1 + 0xd1) = 0;
  return puParm1;
}



undefined4 * __thiscall FUN_0101c59d(void *this,int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_c;
  float *local_8;
  
  FUN_010190b3(this,param_1,param_2,0);
  *(undefined4 *)this = 0x1002838;
  FUN_0100950a(param_2,0,&local_54);
  *(undefined4 *)((int)this + 0x4a) = local_1c;
  *(undefined4 *)((int)this + 0x46) = local_18;
  *(undefined4 *)((int)this + 0x36) = local_50;
  *(undefined4 *)((int)this + 0x56) = 0;
  *(undefined4 *)((int)this + 0x3a) = local_54;
  local_c = operator_new(0xe9);
  if (local_c == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    pfVar1 = FUN_0100978e(param_2,0,0x323);
    local_8 = FUN_0100978e(param_2,0,0x325);
    pfVar2 = FUN_0100978e(param_2,0,0x324);
    local_64 = *(undefined4 *)((int)this + 0x3a);
    local_68 = *(undefined4 *)((int)this + 0x36);
    local_6c = *pfVar1;
    local_70 = *local_8;
    local_74 = *pfVar2;
    pfVar1 = FUN_0100978e(param_2,0,0x322);
    pfVar2 = FUN_0100978e(param_2,0,0x321);
    pfVar3 = FUN_0100978e(param_2,0,800);
    iVar4 = FUN_0101c2ba(this,(int)this + 5,local_20,param_1,pfVar3,pfVar2,pfVar1,local_74,local_70,
                         local_6c,local_68,local_64);
  }
  *(int *)((int)this + 0x52) = iVar4;
  if (iVar4 != 0) {
    *(float *)((int)this + 0x5a) =
         *(float *)(iVar4 + 0xd5) /
         (float)(*(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 4) + -1);
    *(float *)((int)this + 0x5e) =
         *(float *)(iVar4 + 0xd9) /
         (float)(*(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 4) + -1);
  }
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101c6d7(void *this,byte param_1)

{
  FUN_0101c047((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_0101c6fd(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_01015866(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x45) = param_4;
  *(undefined4 *)((int)this + 0x49) = param_5;
  *(undefined4 *)((int)this + 0x4d) = param_6;
  *(undefined4 *)((int)this + 0x51) = param_7;
  *(undefined4 *)this = 0x1002864;
  FUN_01008beb((int)this + 0x15,param_4,param_5,param_6,param_7);
  return (undefined4 *)this;
}



void __thiscall FUN_0101c764(void *this,undefined4 param_1)

{
  FUN_01008c8f(param_1,(int)this + 0x15);
  return;
}



undefined4 * __thiscall
FUN_0101c77e(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined4 *param_5)

{
  undefined4 uVar1;
  
  FUN_01015866(this,param_1,param_2,param_3);
  *(undefined4 *)this = 0x1002864;
  *(undefined4 *)((int)this + 0x45) = *param_4;
  *(undefined4 *)((int)this + 0x49) = param_4[1];
  *(undefined4 *)((int)this + 0x4d) = *param_5;
  uVar1 = param_5[1];
  *(undefined4 *)((int)this + 0x51) = uVar1;
  FUN_01008beb((int)this + 0x15,*(undefined4 *)((int)this + 0x45),*(undefined4 *)((int)this + 0x49),
               *(undefined4 *)((int)this + 0x4d),uVar1);
  return (undefined4 *)this;
}



void __thiscall FUN_0101c7e6(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 4) + 0x14))
            (param_1,(int)this + 0x39,(int)this + 0x15,param_2,this);
  return;
}



void __thiscall FUN_0101c813(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1 * *(float *)((int)this + 0x15);
  param_1 = param_1 * *(float *)((int)this + 0x19);
  fVar2 = fVar1 + *(float *)((int)this + 0x45);
  *(float *)((int)this + 0x45) = fVar2;
  fVar3 = param_1 + *(float *)((int)this + 0x49);
  *(float *)((int)this + 0x49) = fVar3;
  fVar1 = fVar1 + *(float *)((int)this + 0x4d);
  *(float *)((int)this + 0x4d) = fVar1;
  param_1 = param_1 + *(float *)((int)this + 0x51);
  *(float *)((int)this + 0x51) = param_1;
  FUN_01008beb((float *)((int)this + 0x15),fVar2,fVar3,fVar1,param_1);
  return;
}



uint __fastcall FUN_0101c87b(int iParm1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool in_PF;
  bool bVar8;
  int local_1c;
  int local_18;
  int local_c;
  uint local_8;
  
  local_c = FUN_0100b0f4(*(undefined4 *)(iParm1 + 0x45));
  local_8 = FUN_0100b1ae(*(undefined4 *)(iParm1 + 0x49));
  iVar5 = FUN_0100b0f4(*(undefined4 *)(iParm1 + 0x4d));
  uVar6 = FUN_0100b1ae(*(undefined4 *)(iParm1 + 0x51));
  if (in_PF) {
    local_18 = -1;
  }
  else {
    local_18 = 1;
  }
  uVar7 = uVar6 & 0xffff0000 |
          (uint)(ushort)((ushort)(*(float *)(iParm1 + 0x49) < *(float *)(iParm1 + 0x51)) << 8 |
                        (ushort)(*(float *)(iParm1 + 0x49) == *(float *)(iParm1 + 0x51)) << 0xe);
  if (in_PF) {
    local_1c = -1;
  }
  else {
    local_1c = 1;
  }
  if (local_8 == uVar6) {
    if (local_18 == 1) {
      while (local_c <= iVar5) {
        uVar7 = FUN_0100b961(DAT_0102503c,local_c,local_8,iParm1);
        local_c = local_c + 1;
      }
    }
    else {
      while (iVar5 <= local_c) {
        uVar7 = FUN_0100b961(DAT_0102503c,local_c,local_8,iParm1);
        local_c = local_c + -1;
      }
    }
  }
  else {
    if (local_c == iVar5) {
      if (local_1c == 1) {
        while ((int)local_8 <= (int)uVar6) {
          uVar7 = FUN_0100b961(DAT_0102503c,local_c,local_8,iParm1);
          local_8 = local_8 + 1;
        }
      }
      else {
        while ((int)uVar6 <= (int)local_8) {
          uVar7 = FUN_0100b961(DAT_0102503c,local_c,local_8,iParm1);
          local_8 = local_8 - 1;
        }
      }
    }
    else {
      fVar1 = (*(float *)(iParm1 + 0x49) - *(float *)(iParm1 + 0x51)) /
              (*(float *)(iParm1 + 0x45) - *(float *)(iParm1 + 0x4d));
      fVar2 = *(float *)(iParm1 + 0x49) - fVar1 * *(float *)(iParm1 + 0x45);
      FUN_0100b961(DAT_0102503c,local_c,local_8,iParm1);
      if (local_18 == 1) {
        bVar8 = local_1c == 1;
        local_1c = local_c + 1;
        if (bVar8) {
          do {
            if (in_PF) {
              if (!in_PF) {
                local_c = local_c + 1;
              }
              local_8 = local_8 + 1;
            }
            else {
              local_c = local_c + 1;
            }
            uVar7 = FUN_0100b961(DAT_0102503c,local_c,local_8,iParm1);
          } while ((local_c != iVar5) || (local_8 != uVar6));
        }
        else {
          do {
            fVar3 = (float)local_8 * DAT_0102503c[1] + DAT_0102503c[7];
            fVar4 = ((float)local_1c * *DAT_0102503c + DAT_0102503c[6]) * fVar1 + fVar2;
            if ((ushort)((ushort)(fVar4 < fVar3) << 8 | (ushort)(fVar4 == fVar3) << 0xe) == 0) {
              local_c = local_c + 1;
              local_1c = local_1c + 1;
            }
            else {
              if (!in_PF) {
                local_c = local_c + 1;
                local_1c = local_1c + 1;
              }
              local_8 = local_8 - 1;
            }
            uVar7 = FUN_0100b961(DAT_0102503c,local_c,local_8,iParm1);
          } while ((local_c != iVar5) || (local_8 != uVar6));
        }
      }
      else {
        if (local_1c == 1) {
          do {
            if (in_PF) {
              if (!in_PF) {
                local_c = local_c + -1;
              }
              local_8 = local_8 + 1;
            }
            else {
              local_c = local_c + -1;
            }
            uVar7 = FUN_0100b961(DAT_0102503c,local_c,local_8,iParm1);
          } while ((local_c != iVar5) || (local_8 != uVar6));
        }
        else {
          do {
            fVar3 = (float)local_8 * DAT_0102503c[1] + DAT_0102503c[7];
            fVar4 = ((float)local_c * *DAT_0102503c + DAT_0102503c[6]) * fVar1 + fVar2;
            if ((ushort)((ushort)(fVar4 < fVar3) << 8 | (ushort)(fVar4 == fVar3) << 0xe) == 0) {
              local_c = local_c + -1;
            }
            else {
              if (!in_PF) {
                local_c = local_c + -1;
              }
              local_8 = local_8 - 1;
            }
            uVar7 = FUN_0100b961(DAT_0102503c,local_c,local_8,iParm1);
          } while ((local_c != iVar5) || (local_8 != uVar6));
        }
      }
    }
  }
  return uVar7;
}



void FUN_0101cb8e(float *param_1,float *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_2[1] + param_1[1];
  return;
}



void FUN_0101cbb1(float *param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  *param_1 = ((fVar1 - fVar2) * param_3 - (param_1[1] - fVar3) * param_2) + *param_4;
  param_1[1] = (param_1[1] - fVar3) * param_3 + (fVar1 - fVar2) * param_2 + param_4[1];
  return;
}



float10 FUN_0101cbf5(float *param_1,float *param_2)

{
  return SQRT(((float10)*param_1 - (float10)*param_2) * ((float10)*param_1 - (float10)*param_2) +
              ((float10)param_1[1] - (float10)param_2[1]) *
              ((float10)param_1[1] - (float10)param_2[1]));
}



float10 FUN_0101cc23(float param_1,float param_2,undefined4 param_3,float param_4,float param_5)

{
  return ((float10)param_1 - (float10)param_4) * ((float10)param_1 - (float10)param_4) +
         ((float10)param_2 - (float10)param_5) * ((float10)param_2 - (float10)param_5);
}



float10 FUN_0101cc4b(float *param_1,float *param_2)

{
  return (float10)*param_1 * (float10)*param_2 + (float10)param_1[1] * (float10)param_2[1];
}



void FUN_0101cc6b(float param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)param_1);
  *param_2 = (float)fVar1;
  fVar1 = (float10)fcos((float10)param_1);
  *param_3 = (float)fVar1;
  return;
}



void __thiscall FUN_0101cc8d(void *this,int param_1,float param_2)

{
  undefined4 extraout_EDX;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  
  local_10 = param_2 * *(float *)(param_1 + 0x36) + *(float *)(param_1 + 0x2a);
  local_c = param_2 * *(float *)(param_1 + 0x3a) + *(float *)(param_1 + 0x2e);
  local_1c = local_10 - *(float *)((int)this + 0x15);
  local_18 = local_c - *(float *)((int)this + 0x19);
  FUN_01008ae9(&local_1c);
  (**(code **)(**(int **)((int)this + 4) + 0x14))(extraout_EDX,&local_10,&local_1c,param_2,this);
  return;
}



void FUN_0101ccf3(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)fsin((float10)param_2);
  fVar2 = (float10)fcos((float10)param_2);
  fVar3 = fVar2 * (float10)*param_1 - fVar1 * (float10)param_1[1];
  *param_1 = (float)fVar3;
  param_1[1] = (float)(fVar2 * (float10)param_1[1] + fVar3 * fVar1);
  return;
}



// Library Function - Single Match
// Name: ___security_init_cookie
// Library: Visual Studio 2005 Release

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint local_14;
  uint local_10;
  _FILETIME local_c;
  
  if ((DAT_01024778 == 0) || (DAT_01024778 == 0xbb40)) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_c);
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter((LARGE_INTEGER *)&local_14);
    DAT_01024778 = (local_10 ^ local_14 ^
                   local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3) & 0xffff;
    if (DAT_01024778 == 0) {
      DAT_01024778 = 0xbb40;
    }
  }
  DAT_01024774 = ~DAT_01024778;
  return;
}



void __fastcall FUN_0101cd9e(uint uParm1,undefined4 uParm2)

{
  HANDLE hProcess;
  int iVar1;
  EXCEPTION_RECORD *pEVar2;
  byte in_PF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  UINT uExitCode;
  EXCEPTION_RECORD local_334;
  uint local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc [39];
  undefined4 local_234;
  uint local_230;
  uint local_21c;
  _EXCEPTION_POINTERS local_c;
  
  if ((uParm1 == DAT_01024778) && ((uParm1 & 0xffff0000) == 0)) {
    return;
  }
  local_21c = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x330) * 0x800 |
              (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
              (uint)((int)&local_334 < 0) * 0x80 |
              (uint)((undefined *)register0x00000010 == (undefined *)0x334) * 0x40 |
              (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 |
              (uint)(&stack0xfffffffc < (undefined *)0x330) | (uint)(in_ID & 1) * 0x200000 |
              (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
              (uint)(in_AC & 1) * 0x40000;
  local_2dc[0] = 0x10001;
  iVar1 = 0x14;
  pEVar2 = &local_334;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    pEVar2->ExceptionCode = 0;
    pEVar2 = (EXCEPTION_RECORD *)&pEVar2->ExceptionFlags;
  }
  local_334.ExceptionCode = 0xc0000409;
  local_c.ExceptionRecord = &local_334;
  local_c.ContextRecord = (PCONTEXT)local_2dc;
  local_2e4 = DAT_01024778;
  local_2e0 = DAT_01024774;
  local_234 = uParm2;
  local_230 = uParm1;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(&local_c);
  uExitCode = 0x502;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// Library Function - Single Match
// Name: ?GetRegisteredLocation@@YGHPAD@Z
// Library: Visual Studio 2005 Release
// int __stdcall GetRegisteredLocation(char *)

int GetRegisteredLocation(char *param_1)

{
  LSTATUS LVar1;
  uint uVar2;
  DWORD local_c;
  HKEY local_8;
  
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,
                        "CLSID\\{ADB880A6-D8FF-11CF-9377-00AA003B7A11}\\InprocServer32",0,0x20019,
                        (PHKEY)&local_8);
  if (LVar1 == 0) {
    local_c = 0x104;
    LVar1 = RegQueryValueExA(local_8,"",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)param_1,&local_c);
    uVar2 = (uint)(LVar1 == 0);
    RegCloseKey(local_8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: _HtmlHelpA@16
// Library: Visual Studio 2005 Release

void _HtmlHelpA_16(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char local_10c [260];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if ((DAT_0102572c == (HMODULE)0x0) && (_DAT_01025728 == 0)) {
    iVar1 = GetRegisteredLocation(local_10c);
    if (iVar1 != 0) {
      DAT_0102572c = LoadLibraryA(local_10c);
    }
    if (DAT_0102572c != (HMODULE)0x0) goto LAB_0101cf89;
    DAT_0102572c = LoadLibraryA("hhctrl.ocx");
    if (DAT_0102572c != (HMODULE)0x0) goto LAB_0101cf89;
LAB_0101cfa4:
    _DAT_01025728 = 1;
  }
  else {
LAB_0101cf89:
    if (DAT_01025720 == (FARPROC)0x0) {
      DAT_01025720 = GetProcAddress(DAT_0102572c,(LPCSTR)0xe);
      if (DAT_01025720 == (FARPROC)0x0) goto LAB_0101cfa4;
    }
    (*DAT_01025720)(param_1,param_2,param_3,param_4);
  }
  FUN_0101cd9e();
  return;
}



short * FUN_0101cfd0(short *param_1)

{
  if (((param_1 == (short *)0x0) || (*param_1 != 0x5432)) || (param_1[0xde] != 0x5432)) {
    MessageBeep(0xffffffff);
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
              "Invalid session handle 0x%04X passed to WaveMix API",param_1);
    MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x30);
    param_1 = (short *)0x0;
  }
  return param_1;
}



uint FUN_0101d02c(uint param_1)

{
  if (param_1 != 0) {
    param_1 = (uint)(*(short *)(param_1 + 0x40) == 0x5432);
  }
  return param_1;
}



uint FUN_0101d04e(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = 4;
  bVar3 = true;
  piVar2 = (int *)(DAT_01027be0 + 0x17c);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_1 == *piVar2;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
  } while (bVar3);
  return (uint)bVar3;
}



undefined4 FUN_0101d079(undefined4 param_1)

{
  DWORD DVar1;
  
  DVar1 = GetVersion();
  if ((0x7fffffff < DVar1) && (DVar1 = GetVersion(), 3 < (byte)DVar1)) {
    param_1 = 0;
  }
  return param_1;
}



void FUN_0101d0a5(UINT_PTR param_1)

{
  UINT UVar1;
  tagWAVEOUTCAPSA local_3c;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  UVar1 = waveOutGetNumDevs();
  if ((((int)param_1 <= (int)UVar1) && (-1 < (int)param_1)) && (UVar1 != 0)) {
    waveOutGetDevCapsA(param_1,(LPWAVEOUTCAPSA)&local_3c,0x34);
  }
  FUN_0101cd9e();
  return;
}



void FUN_0101d0fc(HWAVEOUT param_1,int param_2)

{
  UINT local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_2 == 0) {
    timeGetTime();
  }
  else {
    local_14 = 4;
    waveOutGetPosition(param_1,(LPMMTIME)&local_14,0xc);
    (**(code **)(DAT_01027be0 + 0x1b4))(local_10,*(undefined4 *)(DAT_01027be0 + 0x1a8));
  }
  FUN_0101cd9e();
  return;
}



int FUN_0101d178(int param_1,int param_2)

{
  return param_2 + param_1;
}



int FUN_0101d18e(int param_1,int param_2)

{
  return param_1 - param_2;
}



void FUN_0101d1a2(uint param_1)

{
  uint *puVar1;
  int iVar2;
  DWORD DVar3;
  UINT local_14;
  uint local_10;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  local_14 = 4;
  if (*(HWAVEOUT *)(DAT_01027be0 + 0xc) == (HWAVEOUT)0x0) {
    local_10 = 0;
  }
  else {
    waveOutGetPosition(*(HWAVEOUT *)(DAT_01027be0 + 0xc),(LPMMTIME)&local_14,0xc);
  }
  iVar2 = DAT_01027be0;
  if (local_10 < param_1) {
    *(int *)(DAT_01027be0 + 0x1a8) = param_1 - local_10;
    *(undefined4 *)(iVar2 + 0x1b4) = 0x101d178;
  }
  else {
    *(int *)(DAT_01027be0 + 0x1a8) = local_10 - param_1;
    *(undefined4 *)(iVar2 + 0x1b4) = 0x101d18e;
  }
  DVar3 = timeGetTime();
  iVar2 = DAT_01027be0;
  puVar1 = (uint *)(DAT_01027be0 + 0x184);
  *(uint *)(DAT_01027be0 + 0x19c) = param_1;
  *(int *)(iVar2 + 0x1a0) = DVar3 - (param_1 * 1000) / *puVar1;
  FUN_0101cd9e();
  return;
}



void FUN_0101d251(HWAVEOUT param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0101d0fc(param_1,*(int *)(DAT_01027be0 + 0x1a4));
  waveOutReset(param_1);
  FUN_0101d1a2(uVar1);
  return;
}



void FUN_0101d285(undefined *param_1,byte **param_2,ushort *param_3,int param_4,ushort param_5)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined uVar6;
  uint uVar7;
  undefined uVar8;
  byte *pbVar9;
  uint local_c;
  
  if (*(short *)(DAT_01027be0 + 0x17e) == 2) {
    if (param_4 == 1) {
      pbVar9 = *param_2;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      if (param_5 != 0) {
        uVar7 = (uint)(ushort)((param_5 - 1 >> 1) + 1);
        do {
          *param_1 = (&DAT_01025970)[(uint)uVar3 * 0x100 + (uint)*pbVar9];
          param_1[1] = (&DAT_01025970)[(uint)uVar4 * 0x100 + (uint)pbVar9[1]];
          param_1 = param_1 + 2;
          pbVar9 = pbVar9 + 2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      uVar3 = 0;
      if (param_5 != 0) {
        local_c = (uint)(ushort)((param_5 - 1 >> 1) + 1);
        do {
          _uVar6 = 0x80;
          uVar6 = 0x80;
          _uVar8 = 0x80;
          uVar8 = 0x80;
          if (0 < param_4) {
            _param_5 = param_4;
            puVar5 = param_3;
            do {
              pbVar9 = (byte *)((uint)uVar3 +
                               *(int *)((int)((int)param_2 - (int)param_3) + (int)puVar5));
              _uVar8 = _uVar8 + -0x80 +
                       (uint)(byte)(&DAT_01025970)[(uint)*pbVar9 + (uint)*puVar5 * 0x100];
              uVar8 = (undefined)_uVar8;
              puVar1 = puVar5 + 1;
              puVar5 = puVar5 + 2;
              _param_5 = _param_5 + -1;
              _uVar6 = _uVar6 + -0x80 +
                       (uint)(byte)(&DAT_01025970)[(uint)pbVar9[1] + (uint)*puVar1 * 0x100];
              uVar6 = (undefined)_uVar6;
            } while (_param_5 != 0);
            if (_uVar8 < 0) {
              uVar8 = 0;
            }
            else {
              if (0xff < _uVar8) {
                uVar8 = 0xff;
              }
            }
            if (_uVar6 < 0) {
              uVar6 = 0;
            }
            else {
              if (0xff < _uVar6) {
                uVar6 = 0xff;
              }
            }
          }
          uVar3 = uVar3 + 2;
          *param_1 = uVar8;
          param_1[1] = uVar6;
          param_1 = param_1 + 2;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
    }
  }
  else {
    if (param_4 == 1) {
      pbVar9 = *param_2;
      uVar3 = param_3[1];
      uVar4 = *param_3;
      if (param_5 != 0) {
        uVar7 = (uint)param_5;
        do {
          *param_1 = (&DAT_01025970)
                     [((int)((uint)uVar3 + (uint)uVar4) / 2 & 0xffffU) * 0x100 + (uint)*pbVar9];
          param_1 = param_1 + 1;
          pbVar9 = pbVar9 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      uVar3 = 0;
      if (param_5 != 0) {
        local_c = (uint)param_5;
        do {
          _uVar8 = 0x80;
          uVar8 = 0x80;
          if (0 < param_4) {
            _param_5 = param_4;
            puVar5 = param_3;
            do {
              uVar4 = *puVar5;
              puVar1 = puVar5 + 1;
              piVar2 = (int *)((int)puVar5 + (int)((int)param_2 - (int)param_3));
              puVar5 = puVar5 + 2;
              _param_5 = _param_5 + -1;
              _uVar8 = _uVar8 + -0x80 +
                       (uint)(byte)(&DAT_01025970)
                                   [(uint)*(byte *)(*piVar2 + (uint)uVar3) +
                                    ((int)((uint)*puVar1 + (uint)uVar4) / 2 & 0xffffU) * 0x100];
              uVar8 = (undefined)_uVar8;
            } while (_param_5 != 0);
            if (_uVar8 < 0) {
              uVar8 = 0;
            }
            else {
              if (0xff < _uVar8) {
                uVar8 = 0xff;
              }
            }
          }
          uVar3 = uVar3 + 1;
          local_c = local_c - 1;
          *param_1 = uVar8;
          param_1 = param_1 + 1;
        } while (local_c != 0);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0101d491(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_01026470;
  do {
    puVar1 = puVar2 + 0xf;
    *(undefined4 **)puVar2 = puVar1;
    puVar2 = puVar1;
  } while ((int)puVar1 < 0x1027b68);
  DAT_01025964 = &DAT_01026470;
  _DAT_01027ba4 = 0;
  return;
}



void FUN_0101d4b9(void)

{
  undefined4 uVar1;
  
  if (DAT_01025964 == (undefined4 *)0x0) {
    return;
  }
  uVar1 = *DAT_01025964;
  *DAT_01025964 = 0;
  DAT_01025964 = (undefined4 *)uVar1;
  return;
}



void FUN_0101d4d4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 **)param_1 = DAT_01025964;
    DAT_01025964 = param_1;
  }
  return;
}



void FUN_0101d4f6(HWAVEOUT param_1,int param_2)

{
  LPWAVEHDR *ppwVar1;
  HGLOBAL hMem;
  int iVar2;
  
  iVar2 = 0;
  do {
    ppwVar1 = (LPWAVEHDR *)(param_2 + iVar2 * 4);
    if (*ppwVar1 != (LPWAVEHDR)0x0) {
      waveOutUnprepareHeader(param_1,*ppwVar1,0x20);
      hMem = GlobalHandle(*ppwVar1);
      GlobalUnlock(hMem);
      hMem = GlobalHandle(*ppwVar1);
      GlobalFree(hMem);
      *ppwVar1 = (LPWAVEHDR)0x0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0101d549(HWAVEOUT param_1,int param_2)

{
  uint *puVar1;
  int **ppiVar2;
  HGLOBAL hMem;
  int *piVar3;
  MMRESULT MVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    hMem = GlobalAlloc(0x2000,0x2b41);
    piVar3 = (int *)GlobalLock(hMem);
    ppiVar2 = (int **)(param_2 + iVar5 * 4);
    *ppiVar2 = piVar3;
    if (piVar3 == (int *)0x0) {
      if (_DAT_01027be4 != 0) {
        MessageBoxA((HWND)0x0,
                                        
                    "Unable to allocate memory for waveform data.  Try making more memory available by closing other applications."
                    ,"WavMix32",0x30);
      }
      while (iVar5 = iVar5 + -1, -1 < iVar5) {
        hMem = GlobalHandle(*(LPCVOID *)(param_2 + iVar5 * 4));
        GlobalUnlock(hMem);
        hMem = GlobalHandle(*(LPCVOID *)(param_2 + iVar5 * 4));
        GlobalFree(hMem);
        *(undefined4 *)(param_2 + iVar5 * 4) = 0;
      }
      return 0;
    }
    *(int **)piVar3 = piVar3 + 0xc;
    (*ppiVar2)[1] = *(int *)(DAT_01027be0 + 0x18c);
    (*ppiVar2)[4] = 0;
    (*ppiVar2)[5] = 0;
    (*ppiVar2)[8] = 1;
    iVar5 = iVar5 + 1;
    (*ppiVar2)[9] = 0;
  } while (iVar5 < 10);
  iVar5 = 0;
  do {
    MVar4 = waveOutPrepareHeader(param_1,*(LPWAVEHDR *)(param_2 + iVar5 * 4),0x20);
    if (MVar4 != 0) {
      if (_DAT_01027be4 != 0) {
        MessageBoxA((HWND)0x0,"Unable to prepare wave header.","WavMix32",0x30);
      }
      FUN_0101d4f6(param_1,param_2);
      return 0;
    }
    puVar1 = (uint *)(*(int *)(param_2 + iVar5 * 4) + 0x10);
    *puVar1 = *puVar1 | 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  return 1;
}



void FUN_0101d649(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(DAT_01027be0 + 0x198);
  if ((undefined *)*puVar1 == &DAT_010257e4) {
    *puVar1 = 0x1025770;
    return;
  }
  *puVar1 = 0x10257e4;
  return;
}



int * FUN_0101d66b(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(DAT_01027be0 + 400);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(DAT_01027be0 + 0x198);
    do {
      if (*(int *)(*piVar3 + 0x20) != 0) break;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  if (iVar2 < iVar1) {
    iVar1 = *(int *)(DAT_01027be0 + 0x18c);
    piVar3 = *(int **)(*(int *)(DAT_01027be0 + 0x198) + iVar2 * 4);
    piVar3[8] = 0;
    piVar3[1] = iVar1;
    *(int **)piVar3 = piVar3 + 0xc;
    piVar3[10] = DAT_01025798;
    return piVar3;
  }
  return (int *)0x0;
}



int FUN_0101d6c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (DAT_01027bec != 0) {
    if (param_1 == DAT_01027bec) {
      DAT_01027bec = *(int *)(param_1 + 0x2c);
      if (DAT_01027bec == 0) {
        DAT_01027bf0 = 0;
      }
LAB_0101d727:
      *(undefined4 *)(param_1 + 0x2c) = 0;
      return param_1;
    }
    iVar2 = *(int *)(DAT_01027bec + 0x2c);
    iVar3 = DAT_01027bec;
    if (*(int *)(DAT_01027bec + 0x2c) != 0) {
      do {
        iVar1 = iVar2;
        iVar2 = iVar1;
        if (iVar1 == param_1) break;
        iVar2 = *(int *)(iVar1 + 0x2c);
        iVar3 = iVar1;
      } while (iVar2 != 0);
      if (iVar2 != 0) {
        bVar4 = iVar2 == DAT_01027bf0;
        *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
        if (bVar4) {
          DAT_01027bf0 = iVar3;
        }
        goto LAB_0101d727;
      }
    }
  }
  return 0;
}



void thunk_FUN_0101d743(void)

{
  int iVar1;
  
  while (iVar1 = DAT_01027bec, DAT_01027bec != 0) {
    *(undefined4 *)(DAT_01027bec + 0x20) = 1;
    FUN_0101d6c8(iVar1);
  }
  return;
}



void FUN_0101d743(void)

{
  int iVar1;
  
  while (iVar1 = DAT_01027bec, DAT_01027bec != 0) {
    *(undefined4 *)(DAT_01027bec + 0x20) = 1;
    FUN_0101d6c8(iVar1);
  }
  return;
}



void FUN_0101d752(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(HWAVEOUT *)(param_1 + 0xc) != (HWAVEOUT)0x0)) {
    FUN_0101d251(*(HWAVEOUT *)(param_1 + 0xc));
    thunk_FUN_0101d743();
    FUN_0101d4f6(*(HWAVEOUT *)(param_1 + 0xc),(int)&DAT_010257e4);
    FUN_0101d4f6(*(HWAVEOUT *)(param_1 + 0xc),(int)&DAT_01025770);
    waveOutClose(*(HWAVEOUT *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    DestroyWindow(*(HWND *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

MMRESULT FUN_0101d7b1(void)

{
  HWND *ppHVar1;
  HWND pHVar2;
  int iVar3;
  MMRESULT MVar4;
  WAVEFORMATEX local_18;
  
  if (*(int *)(DAT_01027be0 + 0xc) == 0) {
    pHVar2 = CreateWindowExA(0,"WavMix32","",0x8000000,0,0,0,0,(HWND)0x0,(HMENU)0x0,DAT_010257e0,
                             (LPVOID)0x0);
    iVar3 = DAT_01027be0;
    *(HWND *)(DAT_01027be0 + 4) = pHVar2;
    if (pHVar2 == (HWND)0x0) {
      if (_DAT_01027be4 != 0) {
        MessageBoxA((HWND)0x0,"Failed to create callback window.","WavMix32",0x30);
      }
    }
    else {
      local_18.wFormatTag = *(WORD *)(iVar3 + 0x17c);
      local_18.nChannels = *(WORD *)(iVar3 + 0x17e);
      local_18.nSamplesPerSec = *(DWORD *)(iVar3 + 0x180);
      local_18.nAvgBytesPerSec = *(DWORD *)(iVar3 + 0x184);
      local_18.nBlockAlign = *(WORD *)(iVar3 + 0x188);
      local_18.wBitsPerSample = *(WORD *)(iVar3 + 0x18a);
      local_18.cbSize = 0;
      MVar4 = waveOutOpen((LPHWAVEOUT)(iVar3 + 0xc),0xffffffff,(LPCWAVEFORMATEX)&local_18,
                          *(DWORD_PTR *)(iVar3 + 4),0,0x10000);
      if (MVar4 != 0) {
        DestroyWindow(*(HWND *)(DAT_01027be0 + 4));
        *(undefined4 *)(DAT_01027be0 + 4) = 0;
        return MVar4;
      }
      iVar3 = FUN_0101d549(*(HWAVEOUT *)(DAT_01027be0 + 0xc),(int)&DAT_010257e4);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_0101d549(*(HWAVEOUT *)(DAT_01027be0 + 0xc),(int)&DAT_01025770), iVar3 != 0)) {
        *(undefined4 *)(DAT_01027be0 + 0x198) = 0x10257e4;
        goto LAB_0101d8cc;
      }
      FUN_0101d4f6(*(HWAVEOUT *)(DAT_01027be0 + 0xc),(int)&DAT_010257e4);
      FUN_0101d4f6(*(HWAVEOUT *)(DAT_01027be0 + 0xc),(int)&DAT_01025770);
      waveOutClose(*(HWAVEOUT *)(DAT_01027be0 + 0xc));
      ppHVar1 = (HWND *)(DAT_01027be0 + 4);
      *(undefined4 *)(DAT_01027be0 + 0xc) = 0;
      DestroyWindow(*ppHVar1);
    }
    MVar4 = 1;
  }
  else {
LAB_0101d8cc:
    MVar4 = 0;
  }
  return MVar4;
}



undefined4 FUN_0101d918(short *param_1,int param_2,uint param_3)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  
  psVar1 = FUN_0101cfd0(param_1);
  if (psVar1 == (short *)0x0) {
    DAT_01027be0 = psVar1;
    return 5;
  }
  if (param_3 < 3) {
    if (param_3 == 0) {
      if (param_2 < 0x10) {
LAB_0101d959:
        if (param_3 == 0) {
          if (*(int *)(psVar1 + param_2 * 2 + 0x7a) == -1) {
            DAT_01027be0 = psVar1;
            *(int *)(psVar1 + param_2 * 2 + 0x7a) = 0;
            psVar1[param_2 * 2 + 0x5a] = psVar1[0x58];
            psVar1[param_2 * 2 + 0x5b] = psVar1[0x59];
            *(int *)(psVar1 + 0x9a) = *(int *)(psVar1 + 0x9a) + 1;
            return 0;
          }
          DAT_01027be0 = psVar1;
          return 4;
        }
        if (param_3 == 1) {
          param_2 = 0x10;
LAB_0101d96c:
          DAT_01027be0 = psVar1;
          if (-1 < param_2 + -1) {
            piVar2 = (int *)(psVar1 + (param_2 + -1) * 2 + 0x7a);
            DAT_01027be0 = psVar1;
            do {
              if (*piVar2 == -1) {
                *piVar2 = 0;
                *(short *)(piVar2 + -0x10) = psVar1[0x58];
                *(short *)((int)piVar2 + -0x3e) = psVar1[0x59];
                *(int *)(psVar1 + 0x9a) = *(int *)(psVar1 + 0x9a) + 1;
              }
              piVar2 = piVar2 + -1;
              param_2 = param_2 + -1;
            } while (param_2 != 0);
          }
          return 0;
        }
        if (param_3 == 2) goto LAB_0101d96c;
        goto LAB_0101d964;
      }
    }
    else {
      if ((param_3 != 2) || ((param_2 < 0x11 && (0 < param_2)))) goto LAB_0101d959;
    }
    uVar3 = 0xb;
  }
  else {
LAB_0101d964:
    uVar3 = 10;
  }
  DAT_01027be0 = psVar1;
  return uVar3;
}



void FUN_0101d9e7(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_01027bec;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (iVar1 == 0) {
    DAT_01027bec = param_1;
  }
  else {
    *(int *)(DAT_01027bf0 + 0x2c) = param_1;
  }
  DAT_01027bf0 = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0101da1d(LPWAVEHDR param_1,int param_2)

{
  uint *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int **ppiVar7;
  MMRESULT MVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  iVar12 = DAT_01027be0;
  if (param_1 == (LPWAVEHDR)0x0) {
    uVar3 = 0;
  }
  else {
    local_c = 0xffffffff;
    local_8 = 0;
    ppiVar7 = (int **)(DAT_01027be0 + 0xf4);
    iVar10 = 0x10;
    do {
      piVar4 = *ppiVar7;
      if ((piVar4 != (int *)0xffffffff) && (piVar4 != (int *)0x0)) {
        do {
          if (*(uint *)(iVar12 + 0x19c) <= (uint)piVar4[0xb] &&
              piVar4[0xb] != *(uint *)(iVar12 + 0x19c)) break;
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)0x0);
        if (piVar4 != (int *)0x0) {
          if ((uint)piVar4[10] < local_c) {
            local_c = piVar4[10];
          }
          *(int **)(&DAT_01025730 + local_8) = piVar4;
          local_8 = local_8 + 1;
        }
      }
      ppiVar7 = ppiVar7 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (local_8 == 0) {
      if (param_2 != 0) {
        param_1[1].lpData = (LPSTR)0x1;
      }
      uVar3 = 0;
    }
    else {
      local_14 = (undefined4 *)param_1->lpData;
      uVar11 = *(undefined4 *)(iVar12 + 0x19c);
      local_18 = (uint)*(ushort *)(iVar12 + 0x18c);
      local_20 = uVar11;
LAB_0101dc1d:
      if ((short)local_18 != 0) {
        if (uVar11 < local_c) {
          uVar5 = local_18 & 0xffff;
          if (local_c <= uVar5 + uVar11) {
            uVar5 = local_c - uVar11;
          }
          uVar9 = (uVar5 & 0xffff) >> 2;
          puVar13 = local_14;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar13 = 0x80808080;
            puVar13 = puVar13 + 1;
          }
          uVar9 = uVar5 & 3;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *(undefined *)puVar13 = 0x80;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          local_14 = (undefined4 *)((int)local_14 + uVar5);
          uVar11 = uVar11 + uVar5;
          local_18 = local_18 - uVar5;
          local_20 = uVar11;
        }
        else {
          local_1c = 0;
          local_10 = 0;
          uVar5 = (local_18 & 0xffff) + uVar11;
          if (local_8 != 0) {
            do {
              iVar10 = (&DAT_01025730)[local_1c];
              uVar9 = *(uint *)(iVar10 + 0x28);
              if (uVar11 < uVar9) {
                if (uVar9 < uVar5) {
                  uVar5 = uVar9;
                }
              }
              else {
                if (*(uint *)(iVar10 + 0x2c) < uVar5) {
                  uVar5 = *(uint *)(iVar10 + 0x2c);
                }
                uVar9 = uVar11 - uVar9;
                if (*(short *)(iVar10 + 0x1a) != 0) {
                  uVar9 = uVar9 % *(uint *)(iVar10 + 0x24);
                  uVar6 = (*(uint *)(iVar10 + 0x24) - uVar9) + local_20;
                  uVar11 = local_20;
                  if (uVar6 < uVar5) {
                    uVar5 = uVar6;
                    uVar11 = local_20;
                  }
                }
                *(uint *)(&DAT_010257a0 + local_10 * 4) = *(int *)(iVar10 + 0x30) + uVar9;
                *(undefined2 *)(&DAT_01025810 + local_10 * 4) = *(undefined2 *)(iVar10 + 0x38);
                *(undefined2 *)(&DAT_01025812 + local_10 * 4) = *(undefined2 *)(iVar10 + 0x3a);
                local_10 = local_10 + 1;
              }
              local_1c = local_1c + 1;
            } while (local_1c < local_8);
            if (local_10 != 0) {
              iVar10 = uVar5 - uVar11;
              (**(code **)(iVar12 + 0x1ac))(local_14,&DAT_010257a0,&DAT_01025810,local_10,iVar10);
              local_14 = (undefined4 *)((int)local_14 + iVar10);
              local_18 = local_18 - iVar10;
              local_c = 0xffffffff;
              uVar11 = uVar11 + iVar10;
              uVar5 = 0;
              ppiVar7 = (int **)&DAT_01025730;
              do {
                if (*ppiVar7 == (int *)0x0) {
LAB_0101dbea:
                  local_8 = local_8 - 1;
                  *ppiVar7 = (int *)(&DAT_01025730)[local_8];
                  iVar12 = DAT_01027be0;
                  local_20 = uVar11;
                  if (local_8 == 0) break;
                }
                else {
                  do {
                    puVar1 = (uint *)(*ppiVar7 + 0xb);
                    if (uVar11 <= *puVar1 && *puVar1 != uVar11) break;
                    piVar4 = (int *)**ppiVar7;
                    *ppiVar7 = piVar4;
                  } while (piVar4 != (int *)0x0);
                  if (*ppiVar7 == (int *)0x0) goto LAB_0101dbea;
                  uVar9 = (*ppiVar7)[10];
                  if (uVar9 < local_c) {
                    local_c = uVar9;
                  }
                  uVar5 = uVar5 + 1;
                  ppiVar7 = ppiVar7 + 1;
                }
                iVar12 = DAT_01027be0;
                local_20 = uVar11;
              } while (uVar5 < local_8);
            }
          }
        }
        goto LAB_0101dc1d;
      }
      pDVar2 = (DWORD *)(iVar12 + 0x19c);
      param_1[1].dwBufferLength = *pDVar2;
      *pDVar2 = *pDVar2 + *(int *)(iVar12 + 0x18c);
      uVar3 = 1;
      if (param_2 != 0) {
        FUN_0101d9e7((int)param_1);
        MVar8 = waveOutWrite(*(HWAVEOUT *)(iVar12 + 0xc),param_1,0x20);
        if (MVar8 != 0) {
          if (_DAT_01027be4 != 0) {
            MessageBoxA((HWND)0x0,"Failed to write block to device","WavMix32",0x30);
          }
          param_1[1].lpData = (LPSTR)0x1;
          FUN_0101d6c8((int)param_1);
        }
      }
    }
  }
  return uVar3;
}



void FUN_0101dc8c(void)

{
  uint uVar1;
  int iVar2;
  int lParam;
  undefined4 *puVar3;
  WPARAM local_8;
  
  uVar1 = FUN_0101d0fc(*(HWAVEOUT *)(DAT_01027be0 + 0xc),*(int *)(DAT_01027be0 + 0x1a4));
  local_8 = 0;
  iVar2 = 0xf4;
  lParam = DAT_01027be0;
  do {
    puVar3 = *(undefined4 **)(iVar2 + lParam);
    if ((puVar3 != (undefined4 *)0x0) && (puVar3 != (undefined4 *)0xffffffff)) {
      do {
        if (uVar1 < (uint)puVar3[0xb]) break;
        *(undefined4 *)(iVar2 + lParam) = *puVar3;
        if (*(HWND *)((int)puVar3 + 0x12) != (HWND)0x0) {
          PostMessageA(*(HWND *)((int)puVar3 + 0x12),0x3bd,local_8,puVar3[8]);
          lParam = DAT_01027be0;
        }
        FUN_0101d4d4(puVar3);
        puVar3 = *(undefined4 **)(iVar2 + lParam);
      } while (puVar3 != (undefined4 *)0x0);
    }
    local_8 = local_8 + 1;
    iVar2 = iVar2 + 4;
    if (0x133 < iVar2) {
      if ((*(int *)(lParam + 0x1a4) == 0) && (DAT_01027bec == 0)) {
        iVar2 = 0xf4;
        do {
          if ((*(int *)(iVar2 + lParam) != 0) && (*(int *)(iVar2 + lParam) != -1)) {
            PostMessageA(*(HWND *)(lParam + 4),0x400,0,lParam);
            lParam = DAT_01027be0;
          }
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0x134);
      }
      return;
    }
  } while( true );
}



void FUN_0101dd5d(void)

{
  LPWAVEHDR pwVar1;
  int iVar2;
  
  DAT_01027be0 = DAT_01025798;
  iVar2 = DAT_01027bec;
  if (DAT_01025798 != 0) {
    while (iVar2 != 0) {
      if ((*(byte *)(iVar2 + 0x10) & 1) == 0) {
        iVar2 = *(int *)(iVar2 + 0x2c);
      }
      else {
        FUN_0101d6c8(iVar2);
        *(undefined4 *)(iVar2 + 0x20) = 1;
        iVar2 = DAT_01027bec;
      }
    }
    FUN_0101dc8c();
    do {
      iVar2 = 1;
      pwVar1 = (LPWAVEHDR)FUN_0101d66b();
      iVar2 = FUN_0101da1d(pwVar1,iVar2);
    } while (iVar2 != 0);
  }
  return;
}



LRESULT FUN_0101ddad(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  if ((param_2 != 0x3bd) && (param_2 != 0x400)) {
                    // WARNING: Could not recover jumptable at 0x0101ddc2. Too many branches
                    // WARNING: Treating indirect jump as call
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar1;
  }
  FUN_0101dd5d();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0101dde8(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  LPWAVEHDR pwh;
  MMRESULT MVar5;
  int local_8;
  
  *(undefined4 *)(DAT_01027be0 + 0x19c) = param_1;
  thunk_FUN_0101d743();
  FUN_0101d649();
  do {
    pwh = (LPWAVEHDR)FUN_0101d66b();
    if (pwh == (LPWAVEHDR)0x0) {
LAB_0101de3a:
      uVar2 = *(undefined4 *)(DAT_01027be0 + 0x19c);
      FUN_0101d251(*(HWAVEOUT *)(DAT_01027be0 + 0xc));
      iVar4 = DAT_01027be0;
      piVar1 = (int *)(DAT_01027be0 + 0x194);
      *(undefined4 *)(DAT_01027be0 + 0x19c) = uVar2;
      bVar3 = 0 < *piVar1;
      if (bVar3) {
        waveOutPause(*(HWAVEOUT *)(iVar4 + 0xc));
        iVar4 = DAT_01027be0;
      }
      local_8 = 0;
      pwh = DAT_01027bec;
      while (pwh != (LPWAVEHDR)0x0) {
        MVar5 = waveOutWrite(*(HWAVEOUT *)(iVar4 + 0xc),pwh,0x20);
        if (MVar5 != 0) {
          if (_DAT_01027be4 != 0) {
            MessageBoxA((HWND)0x0,"Failed to write block to device","WavMix32",0x30);
          }
          pwh[1].lpData = (LPSTR)0x1;
          FUN_0101d6c8((int)pwh);
        }
        if ((bVar3) && (local_8 = local_8 + 1, *(int *)(DAT_01027be0 + 0x194) <= local_8)) {
          waveOutRestart(*(HWAVEOUT *)(DAT_01027be0 + 0xc));
          bVar3 = false;
        }
        pwh = (LPWAVEHDR)pwh[1].dwUser;
        iVar4 = DAT_01027be0;
      }
      if (bVar3) {
        waveOutRestart(*(HWAVEOUT *)(iVar4 + 0xc));
      }
      return 1;
    }
    iVar4 = FUN_0101da1d(pwh,0);
    if (iVar4 == 0) {
      pwh[1].lpData = (LPSTR)0x1;
      goto LAB_0101de3a;
    }
    FUN_0101d9e7((int)pwh);
  } while( true );
}



void FUN_0101df07(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_01027bec == 0) {
    iVar2 = 0;
    piVar1 = (int *)(DAT_01027be0 + 0xf4);
    do {
      if ((*piVar1 != 0) && (*piVar1 != -1)) {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 0x10);
    FUN_0101d1a2(0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0101df3d(undefined4 *param_1)

{
  bool bVar1;
  short *psVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LPWAVEHDR pwVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int *piVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  HWND hWnd;
  char *lpText;
  undefined4 local_8;
  
  iVar10 = _DAT_01027bf8;
  _DAT_01027bf8 = _DAT_01027bf8 + 1;
  local_8 = 0xc;
  bVar1 = false;
  if (iVar10 != 0 && 0 < _DAT_01027bf8) goto LAB_0101e360;
  if (param_1 == (undefined4 *)0x0) {
    if (_DAT_01027be4 != 0) {
      MessageBoxA((HWND)0x0,"NULL parameters pointer passed to WaveMixPlay!","WavMix32",0x30);
    }
    local_8 = 5;
    goto LAB_0101e360;
  }
  psVar2 = FUN_0101cfd0(*(short **)((int)param_1 + 2));
  if (psVar2 == (short *)0x0) {
    DAT_01027be0 = psVar2;
    if (_DAT_01027be4 != 0) {
      lpText = "Invalid session handle passed to WaveMixPlay";
      DAT_01027be0 = psVar2;
LAB_0101dfc0:
      hWnd = (HWND)0x0;
LAB_0101dfc1:
      MessageBoxA(hWnd,lpText,"WavMix32",0x30);
    }
  }
  else {
    piVar12 = *(int **)((int)param_1 + 10);
    DAT_01027be0 = psVar2;
    hWnd = (HWND)FUN_0101d02c((uint)piVar12);
    if (hWnd == (HWND)0x0) {
      if (_DAT_01027be4 != 0) {
        lpText = "Invalid or NULL wave pointer passed to WaveMixPlay!";
        goto LAB_0101dfc1;
      }
    }
    else {
      uVar3 = FUN_0101d04e(piVar12);
      if (uVar3 == 0) {
        wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
                                    
                  "The LPMIXWAVE 0x%lx is not in the current output format, close the wave and reopen it."
                  ,piVar12);
        if (_DAT_01027be4 != 0) {
          MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x30);
        }
        local_8 = 8;
        goto LAB_0101e360;
      }
      if (*(int *)(psVar2 + 8) == 0) {
        if (_DAT_01027be4 != 0) {
          MessageBoxA((HWND)0x0,"Wave device not allocated, call WaveMixActivate(hMixSession,TRUE)",
                      "WavMix32",0x30);
        }
        local_8 = 4;
        goto LAB_0101e360;
      }
      if (*(int *)(psVar2 + 0x9a) == 0) {
        if (_DAT_01027be4 != 0) {
          lpText = "You must open a channel before you can play a wave!";
          goto LAB_0101dfc0;
        }
      }
      else {
        if ((*(byte *)((int)param_1 + 0x12) & 2) == 0) {
          iVar10 = *(int *)((int)param_1 + 6);
        }
        else {
          iVar10 = 0;
          iVar9 = 0;
          puVar4 = (uint *)(psVar2 + 0x9c);
          do {
            if (puVar4[-0x11] != 0xffffffff) {
              if (*(int *)(psVar2 + iVar10 * 2 + 0x7a) == 0) break;
              if ((iVar9 != iVar10) && (*puVar4 < *(uint *)(psVar2 + iVar10 * 2 + 0x9c))) {
                iVar10 = iVar9;
              }
            }
            iVar9 = iVar9 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar9 < 0x10);
          *(int *)((int)param_1 + 6) = iVar10;
        }
        piVar12 = (int *)(psVar2 + 0xbc);
        *piVar12 = *piVar12 + 1;
        *(int *)(psVar2 + iVar10 * 2 + 0x9c) = *piVar12;
        if (*(int *)(psVar2 + iVar10 * 2 + 0x7a) != -1) {
          uVar15 = FUN_0101d4b9();
          puVar5 = (undefined4 *)uVar15;
          if (puVar5 == (undefined4 *)0x0) goto LAB_0101e360;
          iVar10 = 7;
          puVar13 = puVar5;
          while (puVar13 = puVar13 + 1, iVar10 != 0) {
            iVar10 = iVar10 + -1;
            *puVar13 = *param_1;
            param_1 = param_1 + 1;
          }
          iVar10 = *(int *)((int)puVar5 + 0xe);
          puVar5[8] = iVar10;
          puVar5[9] = *(undefined4 *)(iVar10 + 0x14);
          iVar10 = *(int *)(iVar10 + 0x10);
          puVar5[0xc] = iVar10;
          piVar12 = (int *)(psVar2 + 0xdc);
          puVar5[0xd] = (iVar10 - (uint)(ushort)psVar2[0xc4]) + puVar5[9];
          *(undefined4 *)((int)puVar5 + 10) = (int)((ulonglong)uVar15 >> 0x20);
          if ((undefined4 *)*piVar12 == (undefined4 *)0x0) {
            *(undefined4 **)piVar12 = puVar5;
            *(undefined4 **)puVar5 = puVar5;
          }
          else {
            *puVar5 = *(undefined4 *)*piVar12;
            *(undefined4 **)*piVar12 = puVar5;
            *(undefined4 **)piVar12 = puVar5;
          }
          if ((*(byte *)((int)puVar5 + 0x16) & 8) == 0) {
            FUN_0101df07();
            if (*(code **)(DAT_01027be0 + 0xd8) == FUN_0101dde8) {
              uVar3 = FUN_0101d0fc(*(HWAVEOUT *)(DAT_01027be0 + 6),*(int *)(DAT_01027be0 + 0xd2));
            }
            else {
              uVar3 = *(uint *)(DAT_01027be0 + 0xce);
            }
            psVar2 = DAT_01027be0;
            if (*(int *)(DAT_01027be0 + 0xdc) != 0) {
              do {
                puVar5 = *(undefined4 **)(psVar2 + 0xdc);
                puVar13 = (undefined4 *)*puVar5;
                if (puVar13 == puVar5) {
                  *(undefined4 *)(psVar2 + 0xdc) = 0;
                }
                else {
                  *puVar5 = *puVar13;
                }
                iVar10 = *(int *)((int)puVar13 + 10);
                *puVar13 = 0;
                if ((*(uint *)((int)puVar13 + 0x16) & 0x10) == 0) {
                  *(short *)(puVar13 + 0xe) = psVar2[iVar10 * 2 + 0x5a];
                  sVar11 = psVar2[iVar10 * 2 + 0x5b];
                }
                else {
                  *(undefined2 *)(puVar13 + 0xe) = *(undefined2 *)(puVar13 + 7);
                  sVar11 = *(short *)((int)puVar13 + 0x1e);
                }
                *(short *)((int)puVar13 + 0x3a) = sVar11;
                if (10 < *(ushort *)(puVar13 + 0xe)) {
                  *(undefined2 *)(puVar13 + 0xe) = 10;
                }
                if (10 < *(ushort *)((int)puVar13 + 0x3a)) {
                  *(undefined2 *)((int)puVar13 + 0x3a) = 10;
                }
                if ((*(uint *)((int)puVar13 + 0x16) & 1) == 0) {
                  puVar5 = *(undefined4 **)(psVar2 + iVar10 * 2 + 0x7a);
                  if (puVar5 == (undefined4 *)0x0) {
                    *(undefined4 **)(psVar2 + iVar10 * 2 + 0x7a) = puVar13;
                    uVar6 = uVar3;
                    if ((*(byte *)((int)puVar13 + 0x16) & 4) == 0) {
                      uVar6 = *(uint *)(psVar2 + 0xce);
                    }
                  }
                  else {
                    do {
                      puVar7 = puVar5;
                      puVar5 = (undefined4 *)*puVar7;
                    } while ((undefined4 *)*puVar7 != (undefined4 *)0x0);
                    *(undefined4 **)puVar7 = puVar13;
                    uVar6 = puVar7[0xb];
                    if ((*(byte *)((int)puVar13 + 0x16) & 4) == 0) {
                      if (uVar6 < *(uint *)(psVar2 + 0xce)) {
                        uVar6 = *(uint *)(psVar2 + 0xce);
                      }
                    }
                    else {
                      if (uVar6 <= uVar3) {
                        uVar6 = uVar3;
                      }
                    }
                  }
                  puVar13[10] = uVar6;
                  if ((uint)puVar13[10] <= *(uint *)(psVar2 + 0xce) &&
                      *(uint *)(psVar2 + 0xce) != puVar13[10]) {
                    bVar1 = true;
                  }
                }
                else {
                  puVar5 = *(undefined4 **)(psVar2 + iVar10 * 2 + 0x7a);
                  while (puVar5 != (undefined4 *)0x0) {
                    puVar7 = (undefined4 *)*puVar5;
                    FUN_0101d4d4(puVar5);
                    puVar5 = puVar7;
                  }
                  bVar14 = DAT_01027bec != 0;
                  *(undefined4 **)(psVar2 + iVar10 * 2 + 0x7a) = puVar13;
                  if (bVar14) {
                    bVar1 = true;
                  }
                  uVar6 = uVar3;
                  if ((*(byte *)((int)puVar13 + 0x16) & 4) == 0) {
                    uVar6 = *(uint *)(psVar2 + 0xce);
                  }
                  puVar13[10] = uVar6;
                }
                if (*(ushort *)((int)puVar13 + 0x1a) == 0xffff) {
                  puVar13[0xb] = 0xffffffff;
                }
                else {
                  puVar13[0xb] = (((uint)*(ushort *)((int)puVar13 + 0x1a) + 1) * puVar13[9] -
                                 (uint)(ushort)psVar2[0xc4]) + puVar13[10];
                }
              } while (*(int *)(psVar2 + 0xdc) != 0);
              if ((bVar1) &&
                 (iVar10 = (**(code **)(psVar2 + 0xd8))(uVar3,0), psVar2 = DAT_01027be0, iVar10 != 0
                 )) goto LAB_0101e35a;
            }
            iVar10 = 0;
            if ((DAT_01027bec == 0) && (0 < *(int *)(psVar2 + 0xca))) {
              waveOutPause(*(HWAVEOUT *)(psVar2 + 6));
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            iVar9 = 1;
            pwVar8 = (LPWAVEHDR)FUN_0101d66b();
            iVar9 = FUN_0101da1d(pwVar8,iVar9);
            while (iVar9 != 0) {
              if ((bVar1) && (iVar10 = iVar10 + 1, *(int *)(DAT_01027be0 + 0xca) <= iVar10)) {
                waveOutRestart(*(HWAVEOUT *)(DAT_01027be0 + 6));
                bVar1 = false;
              }
              iVar9 = 1;
              pwVar8 = (LPWAVEHDR)FUN_0101d66b();
              iVar9 = FUN_0101da1d(pwVar8,iVar9);
            }
            if (bVar1) {
              waveOutRestart(*(HWAVEOUT *)(DAT_01027be0 + 6));
            }
          }
LAB_0101e35a:
          local_8 = 0;
          goto LAB_0101e360;
        }
      }
    }
  }
  local_8 = 5;
LAB_0101e360:
  _DAT_01027bf8 = _DAT_01027bf8 + -1;
  return local_8;
}


