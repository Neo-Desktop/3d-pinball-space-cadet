#include "pinball.h"


undefined4 __thiscall FUN_01017074(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3f6) {
    if (*(int *)((int)this + 0x72) != 0) {
      FUN_01007659(*(int *)((int)this + 0x72));
    }
    *(undefined4 *)((int)this + 0x72) = 0;
  }
  else {
    if (param_1 == 0x3fe) {
      if (*(int *)((int)this + 0x72) != 0) {
        FUN_01007659(*(int *)((int)this + 0x72));
      }
      *(undefined4 *)((int)this + 0x72) = 0;
      if (*(char *)((int)this + 5) != '\0') {
        iVar1 = FUN_010074b7(0x40a00000,(int)this,(int)FUN_01016eed);
        *(int *)((int)this + 0x72) = iVar1;
      }
    }
    else {
      if (param_1 == 0x400) {
        if (*(int *)((int)this + 0x66) != 0) {
          FUN_01007659(*(int *)((int)this + 0x66));
        }
        *(undefined4 *)((int)this + 0x66) = 0;
        if (*(int *)((int)this + 0x6a) != 0) {
          FUN_01007659(*(int *)((int)this + 0x6a));
        }
        *(undefined4 *)((int)this + 0x6a) = 0;
        if (*(int *)((int)this + 0x5e) != 0) {
          FUN_01016dc0(0,(int)this);
        }
        if (*(int *)((int)this + 0x62) != 0) {
          FUN_01016d8d(0,(int)this);
        }
        if (*(int *)((int)this + 0x6e) != 0) {
          FUN_01016d62(0,(int)this);
        }
      }
    }
  }
  return 0;
}



void FUN_01017130(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x1e) + 0x106) + 8);
  *(undefined4 *)(iVar1 + 0x6a) = 0;
  *(undefined *)(iVar1 + 5) = 1;
  *(undefined4 *)(iVar1 + 0x2a) = *(undefined4 *)(param_2 + 0x56);
  *(undefined4 *)(iVar1 + 0x2e) = *(undefined4 *)(param_2 + 0x5a);
  FUN_01015935(iVar1,(undefined4 *)(param_2 + 0x62),*(float *)(param_2 + 0x6e),
               *(float *)(param_2 + 0x72),*(float *)(param_2 + 0x76));
  if (*(int *)(param_2 + 0x7e) != 0) {
    FUN_01009895(*(int *)(param_2 + 0x7e));
  }
  *(undefined4 *)(param_2 + 0x4e) = 0;
  return;
}



undefined4 __thiscall FUN_01017197(int iParm1,int param_1,float param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool in_PF;
  
  if (param_1 == 0x38) {
    if (!in_PF) {
      param_2 = *(float *)(iParm1 + 0x52);
    }
    iVar2 = FUN_010074b7(param_2,iParm1,(int)FUN_01017130);
    *(int *)(iParm1 + 0x4e) = iVar2;
  }
  else {
    if (param_1 == 0x3fc) {
      *(undefined4 *)(iParm1 + 0x8e + *(int *)(*(int *)(iParm1 + 0x1e) + 0xda) * 4) =
           *(undefined4 *)(iParm1 + 6);
      floor((double)param_2);
      iVar2 = _ftol();
      *(undefined4 *)(iParm1 + 6) = *(undefined4 *)(iParm1 + 0x8e + iVar2 * 4);
    }
    else {
      if (param_1 == 0x400) {
        if (*(int *)(iParm1 + 0x4e) != 0) {
          FUN_01007659(*(int *)(iParm1 + 0x4e));
        }
        *(undefined4 *)(iParm1 + 0x4e) = 0;
        *(undefined4 *)(iParm1 + 6) = 0;
        iVar2 = 0;
        if (0 < *(int *)(*(int *)(iParm1 + 0x1e) + 0xd6)) {
          puVar1 = (undefined4 *)(iParm1 + 0x8e);
          do {
            *puVar1 = 0;
            iVar2 = iVar2 + 1;
            puVar1 = puVar1 + 1;
          } while (iVar2 < *(int *)(*(int *)(iParm1 + 0x1e) + 0xd6));
        }
      }
    }
  }
  return 0;
}



undefined4 __thiscall FUN_01017262(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x82);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_01017283(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 3) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x82) = param_2;
  }
  return;
}



undefined4 __thiscall FUN_010172a3(void *this,int param_1)

{
  if (param_1 == 0x400) {
    if (*(int *)((int)this + 0x56) != 0) {
      FUN_01007659(*(int *)((int)this + 0x56));
      *(undefined4 *)((int)this + 0x56) = 0;
    }
    *(undefined4 *)(*(int *)((int)this + 0x1e) + 0x4e) = 0;
  }
  return 0;
}



void FUN_010172d8(undefined4 param_1,undefined **param_2)

{
  FUN_01011ec9(0x3c,param_2);
  return;
}



void FUN_010172f0(undefined4 param_1,undefined **param_2)

{
  *(undefined4 *)((int)param_2 + 0x4e) = 0;
  (**(code **)*param_2)(0x3f7,0);
  return;
}



void FUN_01017314(undefined4 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar2 = (float)*(int *)(param_2 + 0x5a) + *(float *)(param_2 + 0x3e);
  *(float *)(param_2 + 0x3e) = fVar2;
  fVar3 = (float)*(int *)(param_2 + 0x56);
  if ((ushort)((ushort)(fVar2 < fVar3) << 8 | (ushort)(fVar2 == fVar3) << 0xe) == 0) {
    *(undefined4 *)(param_2 + 0x4e) = 0;
    *(float *)(param_2 + 0x3e) = fVar3;
  }
  else {
    iVar4 = FUN_010074b7(*(undefined4 *)(param_2 + 0x5e),param_2,(int)FUN_01017314);
    *(int *)(param_2 + 0x4e) = iVar4;
  }
  floor((double)((float)(*(int *)(*(int *)(*(int *)(param_2 + 0x22) + 4) + 4) + -1) *
                (*(float *)(param_2 + 0x3e) / (float)*(int *)(param_2 + 0x56))));
  iVar4 = _ftol();
  iVar4 = iVar4 * 4 + 8;
  iVar1 = *(int *)(iVar4 + *(int *)(*(int *)(param_2 + 0x22) + 4));
  FUN_01013974(*(undefined4 **)(param_2 + 0x1a),iVar1,
               *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x26) + 4) + iVar4),
               *(int *)(iVar1 + 0x1d) - *(int *)(*(int *)(param_2 + 0x1e) + 0xea),
               *(int *)(iVar1 + 0x21) - *(int *)(*(int *)(param_2 + 0x1e) + 0xee));
  return;
}



void FUN_010173c8(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x42) = 0x4e6e6b28;
  *(undefined4 *)(param_2 + 0x3e) = 0;
  return;
}



undefined4 __thiscall FUN_010173e7(void *this,int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)((int)this + 0x62);
  iVar2 = rand();
  *param_2 = fVar1 - ((0.50000000 - (float)iVar2 * 0.00003052) + *(float *)(param_1 + 0x36)) *
                     *(float *)(param_1 + 0x42) * *(float *)((int)this + 0x6e);
  param_2[1] = *(float *)((int)this + 0x66) -
               *(float *)(param_1 + 0x3a) * *(float *)(param_1 + 0x42) *
               *(float *)((int)this + 0x6e);
  return 1;
}



void * __thiscall FUN_01017441(void *this,byte param_1)

{
  FUN_0100b9b3((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



void FUN_01017467(undefined4 param_1,undefined **param_2)

{
  *(undefined4 *)((int)param_2 + 0x5a) = 0;
  (**(code **)*param_2)(0x3f5,0);
  return;
}



void FUN_0101748b(undefined4 param_1,int param_2)

{
  code **ppcVar1;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  undefined4 local_10;
  
  iVar2 = param_2;
  *(undefined4 *)(param_2 + 0x5e) = 0;
  FUN_0101479b();
  param_2 = *(int *)(*(int *)(param_2 + 0xfe) + 4);
  if (-1 < param_2 + -1) {
    iVar4 = (param_2 + -1) * 4 + 8;
    do {
      (**(code **)**(code ***)(iVar4 + *(int *)(iVar2 + 0xfe)))(0x3fe,0);
      iVar4 = iVar4 + -4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ppcVar1 = *(code ***)(iVar2 + 0xe6);
  if (ppcVar1 != (code **)0x0) {
    (**(code **)*ppcVar1)(0x3fe,0);
  }
  FUN_01011ec9(0x43,DAT_01025654);
  local_10 = 0xbf800000;
  pCVar3 = FUN_01003752(0x18);
  FUN_010144b7(pCVar3,local_10);
  return;
}



int __thiscall FUN_01017526(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x13e) != 0) {
    piVar1 = (int *)((int)this + 0x13a);
    *piVar1 = *piVar1 + param_1;
    if (5000000 < *piVar1) {
      *piVar1 = 5000000;
    }
  }
  if (*(int *)((int)this + 0x136) != 0) {
    piVar1 = (int *)((int)this + 0x132);
    *piVar1 = *piVar1 + param_1;
    if (5000000 < *piVar1) {
      *piVar1 = 5000000;
    }
  }
  iVar2 = *(int *)(&DAT_01024758 + *(int *)((int)this + 0x126) * 4) * param_1 +
          *(int *)((int)this + 0x12a);
  piVar1 = (int *)((int)this + 0x52);
  *piVar1 = *piVar1 + iVar2;
  if (1000000000 < *piVar1) {
    *(int *)((int)this + 0x56) = *(int *)((int)this + 0x56) + 1;
    *piVar1 = *piVar1 + -1000000000;
  }
  FUN_01013c89(*(undefined4 **)((int)this + 0x32),*piVar1);
  return iVar2;
}



void __thiscall FUN_010175aa(void *this,int param_1)

{
  *(int *)((int)this + 0x146) = param_1;
  if (param_1 < 1) {
    FUN_01013caa(*(int *)((int)this + 0x36),1);
  }
  else {
    FUN_01013c89(*(undefined4 **)((int)this + 0x36),(*(int *)((int)this + 0x14a) - param_1) + 1);
    FUN_01013d2d(*(int **)((int)this + 0x36));
  }
  return;
}



void FUN_010175ef(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x162) = 0;
  *(undefined4 *)(param_2 + 0x166) = 0;
  return;
}



int __thiscall FUN_01017648(void *this,LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  LPCSTR lpString1;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(*(int *)((int)this + 0xfe) + 4);
  if (0 < iVar1) {
    iVar4 = 8;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)((int)this + 0xfe));
      lpString1 = *(LPCSTR *)(iVar2 + 10);
      if ((lpString1 != (LPCSTR)0x0) && (iVar3 = lstrcmpA(lpString1,param_1), iVar3 == 0)) {
        return iVar2;
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 4;
    } while (local_8 < iVar1);
  }
  MessageBoxA((HWND)0x0,"Table cant find:",param_1,0x2000);
  return 0;
}



void __thiscall FUN_010176be(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char local_d0 [200];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  iVar1 = *(int *)(*(int *)((int)this + 0xfe) + 4);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = (int *)(*(int *)((int)this + 0xfe) + 8);
    do {
      if (param_1 == *(int *)(*piVar2 + 0x16)) goto LAB_01017725;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  _itoa(param_1,local_d0,10);
  MessageBoxA((HWND)0x0,"Table cant find (lh):",local_d0,0x2000);
LAB_01017725:
  FUN_0101cd9e();
  return;
}



void FUN_01017738(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined local_10 [12];
  
  *(undefined4 *)(param_2 + 0x62) = 0;
  if (*(int *)(param_2 + 0x172) != 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x106) + 4);
    puVar2 = (undefined4 *)(*(int *)(param_2 + 0x106) + 8);
    if (0 < iVar1) {
      do {
        (**(code **)(**(int **)(param_2 + 0xe2) + 0x14))(*puVar2,local_10,local_10,0,0);
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}



void __thiscall FUN_01017791(void *this,undefined4 param_1)

{
  LPSTR pCVar1;
  int iVar2;
  undefined4 local_18;
  int local_8;
  
  if ((*(int *)((int)this + 0x172) == 0) && (*(int *)((int)this + 0x4e) == 0)) {
    FUN_01014143(DAT_01025650);
    FUN_01014143(DAT_01025654);
    local_18 = 0xbf800000;
    pCVar1 = FUN_01003752(0x23);
    FUN_010144b7(pCVar1,local_18);
    FUN_01009895(*(int *)((int)this + 0x4a));
    iVar2 = FUN_010074b7(0x41f00000,(int)this,(int)FUN_01017738);
    *(int *)((int)this + 0x62) = iVar2;
    local_8 = *(int *)(*(int *)((int)this + 0xfe) + 4);
    (***(code ***)this)(0x3f3,0xbf800000);
    if (0 < local_8) {
      iVar2 = 8;
      do {
        (**(code **)**(code ***)(iVar2 + *(int *)((int)this + 0xfe)))(0x3f3,param_1);
        iVar2 = iVar2 + 4;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    (**(code **)**(code ***)((int)this + 0x10a))(8,0);
    *(undefined4 *)((int)this + 0x172) = 1;
    FUN_0100c0be(0x3f3);
  }
  return;
}



float10 FUN_01017883(int param_1,undefined4 *param_2,float *param_3,float param_4,float param_5,
                    float param_6,float param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  
  *(undefined4 *)(param_1 + 0x2a) = *param_2;
  *(undefined4 *)(param_1 + 0x2e) = param_2[1];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  pfVar1 = (float *)(param_1 + 0x36);
  param_2 = (undefined4 *)-(fVar2 * *pfVar1 + fVar3 * *(float *)(param_1 + 0x3a));
  if ((ushort)((ushort)((float)param_2 < 0.00000000) << 8 |
              (ushort)((float)param_2 == 0.00000000) << 0xe) == 0) {
    *pfVar1 = ((float)param_2 * fVar2 + *pfVar1) * param_5 + (float)param_2 * fVar2 * param_4;
    *(float *)(param_1 + 0x3a) =
         (fVar3 * (float)param_2 + *(float *)(param_1 + 0x3a)) * param_5 +
         fVar3 * (float)param_2 * param_4;
    FUN_01008ae9(pfVar1);
  }
  else {
    param_2 = (undefined4 *)-(float)param_2;
  }
  fVar4 = (float)param_2 * *(float *)(param_1 + 0x42);
  fVar5 = *(float *)(param_1 + 0x42) - (1.00000000 - param_4) * fVar4;
  *(float *)(param_1 + 0x42) = fVar5;
  if (param_6 <= fVar4) {
    *pfVar1 = fVar2 * param_7 + fVar5 * *pfVar1;
    *(float *)(param_1 + 0x3a) = fVar3 * param_7 + fVar5 * *(float *)(param_1 + 0x3a);
    fVar6 = (float10)FUN_01008ae9(pfVar1);
    *(float *)(param_1 + 0x42) = (float)fVar6;
  }
  return (float10)fVar4;
}



void FUN_0101798c(undefined4 param_1,undefined **param_2)

{
  *(undefined4 *)((int)param_2 + 0x2a) = 0;
  FUN_01011ec9(0x3c,param_2);
  return;
}



int * FUN_010179a9(float *param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5,
                  undefined4 param_6)

{
  float fVar1;
  void *this;
  int *this_00;
  float *pfVar2;
  bool in_PF;
  float local_70 [2];
  float local_68;
  float local_60;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float *local_10;
  int local_c;
  int *local_8;
  
  pfVar2 = param_1;
  floor((double)*param_1);
  local_c = _ftol();
  local_10 = param_1 + 1;
  if (local_c == 0) {
    local_1c = *local_10;
    local_18 = param_1[2];
    this = operator_new(0x25);
    if (this == (void *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = FUN_01015898(this,param_2,param_3,param_4,&local_1c,param_5 + param_1[3]);
    }
    local_8 = this_00;
    if (this_00 == (int *)0x0) goto LAB_01017a97;
    *(undefined4 *)((int)this_00 + 0xd) = param_6;
    local_8 = this_00;
  }
  else {
    if (local_c != 1) {
      local_40 = param_1[local_c * 2 + -1];
      param_1 = (float *)0x0;
      local_44 = 0;
      local_50 = 0;
      local_3c = pfVar2[local_c * 2];
      pfVar2 = local_10;
      if (local_c < 1) {
        return local_8;
      }
      do {
        if ((int)param_1 < local_c + -1) {
          fVar1 = pfVar2[2];
          local_60 = pfVar2[3];
        }
        else {
          fVar1 = *local_10;
          local_60 = local_10[1];
        }
        local_1c = *pfVar2;
        local_18 = pfVar2[1];
        if (in_PF) {
          local_58 = local_1c - local_40;
          local_54 = local_18 - local_3c;
          local_4c = fVar1 - local_1c;
          local_48 = local_60 - local_18;
          FUN_01008db8(&local_58,&local_4c,local_70);
          if ((((ushort)((ushort)(local_68 < 0.00000000) << 8 |
                        (ushort)(local_68 == 0.00000000) << 0xe) == 0) &&
              ((ushort)((ushort)(param_5 < 0.00000000) << 8 | (ushort)(param_5 == 0.00000000) << 0xe
                       ) == 0)) || ((!in_PF && (!in_PF)))) {
            this = operator_new(0x25);
            if (this == (void *)0x0) {
              this_00 = (int *)0x0;
            }
            else {
              this_00 = FUN_01015898(this,param_2,param_3,param_4,&local_1c,param_5 * 1.00099993);
            }
            if (this_00 != (int *)0x0) {
              *(undefined4 *)((int)this_00 + 0xd) = param_6;
              (**(code **)(*this_00 + 8))();
              FUN_0100acf3((void *)(param_2 + 0x2a),(int)this_00);
            }
          }
        }
        local_34 = *pfVar2;
        local_30 = pfVar2[1];
        local_28 = pfVar2[2];
        local_24 = pfVar2[3];
        this = operator_new(0x55);
        if (this == (void *)0x0) {
          this_00 = (int *)0x0;
        }
        else {
          this_00 = FUN_0101c77e(this,param_2,param_3,param_4,&local_34,&local_28);
        }
        local_8 = this_00;
        if (this_00 != (int *)0x0) {
          *(undefined4 *)((int)this_00 + 0xd) = param_6;
          local_8 = this_00;
          FUN_0101c813(this_00,param_5);
          (**(code **)(*this_00 + 8))();
          FUN_0100acf3((void *)(param_2 + 0x2a),(int)this_00);
        }
        param_1 = (float *)((int)param_1 + 1);
        local_40 = local_1c;
        local_3c = local_18;
        pfVar2 = pfVar2 + 2;
      } while ((int)param_1 < local_c);
      return local_8;
    }
    local_34 = *local_10;
    local_30 = param_1[2];
    local_28 = param_1[3];
    local_24 = param_1[4];
    this = operator_new(0x55);
    if (this == (void *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = FUN_0101c77e(this,param_2,param_3,param_4,&local_34,&local_28);
    }
    if (this_00 == (int *)0x0) {
      return (int *)0;
    }
    *(undefined4 *)((int)this_00 + 0xd) = param_6;
    local_8 = this_00;
    FUN_0101c813(this_00,param_5);
  }
  (**(code **)(*this_00 + 8))();
LAB_01017a97:
  FUN_0100acf3((void *)(param_2 + 0x2a),(int)this_00);
  return local_8;
}



undefined4 * __thiscall FUN_01017c6d(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *this_00;
  int *piVar6;
  int iVar7;
  undefined local_70 [64];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  iVar3 = param_1;
  *(undefined4 *)this = 0x10024a8;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined *)((int)this + 4) = 0;
  *(undefined *)((int)this + 5) = 0;
  *(int *)((int)this + 0x1e) = param_1;
  *(undefined4 *)((int)this + 0x1a) = 0;
  if (param_1 != 0) {
    FUN_0100acf3((void *)(param_1 + 0xfa),(int)this);
  }
  if (-1 < param_2) {
    uVar4 = FUN_0100975d(param_2);
    *(undefined4 *)((int)this + 10) = uVar4;
  }
  if ((param_3 != 0) && (-1 < param_2)) {
    iVar5 = FUN_01009207(param_2);
    param_1 = 0;
    if (0 < iVar5) {
      do {
        FUN_0100950a(param_2,param_1,local_70);
        if (local_30 != 0) {
          if (*(int *)((int)this + 0x22) == 0) {
            this_00 = operator_new(8);
            if (this_00 == (void *)0x0) {
              this_00 = (void *)0x0;
            }
            else {
              this_00 = FUN_010158f0(this_00,iVar5,4);
            }
            *(void **)((int)this + 0x22) = this_00;
          }
          if (*(void **)((int)this + 0x22) != (void *)0x0) {
            FUN_0100acf3(*(void **)((int)this + 0x22),local_30);
          }
        }
        if (local_2c != 0) {
          if (*(int *)((int)this + 0x26) == 0) {
            this_00 = operator_new(8);
            if (this_00 == (void *)0x0) {
              this_00 = (void *)0x0;
            }
            else {
              this_00 = FUN_010158f0(this_00,iVar5,4);
            }
            *(void **)((int)this + 0x26) = this_00;
          }
          if (*(void **)((int)this + 0x26) != (void *)0x0) {
            FUN_0100acf3(*(void **)((int)this + 0x26),local_2c);
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar5);
    }
    if (*(int *)((int)this + 0x26) != 0) {
      local_8 = *(int *)(*(int *)(*(int *)((int)this + 0x26) + 4) + 8);
    }
    iVar1 = *(int *)((int)this + 0x22);
    if (iVar1 != 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 4) + 8);
      local_18 = *(int *)(iVar2 + 0x1d) - *(int *)(iVar3 + 0xea);
      local_14 = *(int *)(iVar2 + 0x21) - *(int *)(iVar3 + 0xee);
      iVar7 = 1;
      local_10 = *(undefined4 *)(iVar2 + 0xc);
      local_c = *(undefined4 *)(iVar2 + 0x10);
      if (1 < *(int *)(*(int *)(iVar1 + 4) + 4)) {
        param_1 = 0xc;
        do {
          iVar1 = *(int *)(param_1 + *(int *)(*(int *)((int)this + 0x22) + 4));
          local_28 = *(int *)(iVar1 + 0x1d) - *(int *)(iVar3 + 0xea);
          local_24 = *(int *)(iVar1 + 0x21) - *(int *)(iVar3 + 0xee);
          local_20 = *(undefined4 *)(iVar1 + 0xc);
          local_1c = *(undefined4 *)(iVar1 + 0x10);
          FUN_010040c2(&local_18,&local_28,&local_18);
          param_1 = param_1 + 4;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 4));
      }
      iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8);
      piVar6 = FUN_0101385c((uint)(0 < iVar5),iVar1,local_8,
                            *(int *)(iVar1 + 0x1d) - *(int *)(iVar3 + 0xea),
                            *(int *)(iVar1 + 0x21) - *(int *)(iVar3 + 0xee),&local_18);
      *(int **)((int)this + 0x1a) = piVar6;
    }
  }
  *(int *)((int)this + 0x16) = param_2;
  return (undefined4 *)this;
}



void * __thiscall FUN_01017e5c(void *this,byte param_1)

{
  FUN_01013c6f(*(int *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



void __thiscall FUN_01017e85(void *this,int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
    fVar2 = FUN_01017883(param_1,param_2,param_3,*(float *)((int)this + 0x36),
                         *(float *)((int)this + 0x3a),*(float *)((int)this + 0x42),
                         *(float *)((int)this + 0x3e));
    if ((ushort)((ushort)(fVar2 < (float10)*(float *)((int)this + 0x42)) << 8 |
                (ushort)(fVar2 == (float10)*(float *)((int)this + 0x42)) << 0xe) == 0) {
      iVar1 = *(int *)((int)this + 0x4a);
    }
    else {
      if ((ushort)((ushort)(fVar2 < (float10)0.20000000) << 8 |
                  (ushort)(fVar2 == (float10)0.20000000) << 0xe) != 0) {
        return;
      }
      iVar1 = *(int *)((int)this + 0x46);
    }
    if (iVar1 != 0) {
      FUN_01009895(iVar1);
    }
  }
  else {
    FUN_01017883(param_1,param_2,param_3,*(float *)((int)this + 0x36),*(float *)((int)this + 0x3a),
                 1000000000.00000000,0.00000000);
  }
  return;
}



undefined4 __thiscall FUN_01017f29(void *this,int param_1,undefined4 *param_2,float *param_3)

{
  float10 fVar1;
  
  if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
    fVar1 = FUN_01017883(param_1,param_2,param_3,*(float *)((int)this + 0x36),
                         *(float *)((int)this + 0x3a),*(float *)((int)this + 0x42),
                         *(float *)((int)this + 0x3e));
    if ((ushort)((ushort)(fVar1 < (float10)*(float *)((int)this + 0x42)) << 8 |
                (ushort)(fVar1 == (float10)*(float *)((int)this + 0x42)) << 0xe) == 0) {
      if (*(int *)((int)this + 0x4a) != 0) {
        FUN_01009895(*(int *)((int)this + 0x4a));
      }
      return 1;
    }
    if (((ushort)((ushort)(fVar1 < (float10)0.20000000) << 8 |
                 (ushort)(fVar1 == (float10)0.20000000) << 0xe) == 0) &&
       (*(int *)((int)this + 0x46) != 0)) {
      FUN_01009895(*(int *)((int)this + 0x46));
    }
  }
  else {
    FUN_01017883(param_1,param_2,param_3,*(float *)((int)this + 0x36),*(float *)((int)this + 0x3a),
                 1000000000.00000000,0.00000000);
  }
  return 0;
}



void __thiscall FUN_01017fde(void *this,int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = FUN_01017f29(this,param_1,param_2,param_3);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x52) != 0) {
      FUN_010139b6(*(int *)((int)this + 0x1a),*(int *)((int)this + 0x52));
      iVar1 = FUN_010074b7(0x3dcccccd,(int)this,(int)FUN_01015ace);
      *(int *)((int)this + 0x4e) = iVar1;
    }
    FUN_01011ec9(0x3f,(undefined **)this);
  }
  return;
}



void __thiscall
FUN_01018032(void *this,void *param_1,undefined4 *param_2,float *param_3,float param_4,int param_5)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (param_5 == *(int *)((int)this + 0x52)) {
    FUN_0101590f(param_1,param_5);
    *(undefined4 *)((int)param_1 + 0x2a) = *param_2;
    uVar1 = param_2[1];
    *(float *)((int)param_1 + 0x46) = *(float *)((int)param_1 + 0x46) - param_4;
    *(undefined4 *)((int)param_1 + 0x2e) = uVar1;
    if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
      if (*(int *)((int)this + 0x4a) != 0) {
        FUN_01009895(*(int *)((int)this + 0x4a));
      }
      FUN_01011ec9(0x3f,(undefined **)this);
    }
  }
  else {
    if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
      fVar2 = FUN_01017883((int)param_1,param_2,param_3,*(float *)((int)this + 0x36),
                           *(float *)((int)this + 0x3a),*(float *)((int)this + 0x42),
                           *(float *)((int)this + 0x3e));
      if (((ushort)((ushort)(fVar2 < (float10)0.20000000) << 8 |
                   (ushort)(fVar2 == (float10)0.20000000) << 0xe) == 0) &&
         (*(int *)((int)this + 0x46) != 0)) {
        FUN_01009895(*(int *)((int)this + 0x46));
      }
    }
    else {
      FUN_01017883((int)param_1,param_2,param_3,*(float *)((int)this + 0x36),
                   *(float *)((int)this + 0x3a),1000000000.00000000,0.00000000);
    }
  }
  return;
}



void __thiscall FUN_0101811d(void *this,int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = FUN_01017f29(this,param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_01015d0f((int)this);
    FUN_01011ec9(0x3f,(undefined **)this);
  }
  return;
}



void __thiscall
FUN_01018150(undefined1 (*pauParm1) [10],void *param_1,undefined4 *param_2,undefined4 param_3,
            float param_4,int param_5)

{
  undefined4 uVar1;
  undefined **extraout_EDX;
  bool in_PF;
  
  *(undefined4 *)((int)param_1 + 0x2a) = *param_2;
  uVar1 = param_2[1];
  *(float *)((int)param_1 + 0x46) = *(float *)((int)param_1 + 0x46) - param_4;
  *(undefined4 *)((int)param_1 + 0x2e) = uVar1;
  FUN_0101590f(param_1,param_5);
  *(uint *)(pauParm1 + 9 + 4) = (uint)(*(int *)(pauParm1 + 10 + 6) != param_5) * 2 + -1;
  if (in_PF) {
    *(float *)(pauParm1 + 7 + 8) = *(float *)((int)param_1 + 0x42) * 20.00000000;
  }
  else {
    *(undefined4 *)(pauParm1 + 7 + 8) = *(undefined4 *)(pauParm1 + 8 + 6);
    *(undefined4 *)(pauParm1 + 7 + 8) = *(undefined4 *)(pauParm1 + 8 + 6);
  }
  if ((ushort)((ushort)(*(float *)(pauParm1 + 7 + 8) < *(float *)(pauParm1 + 8 + 2)) << 8 |
              (ushort)(*(float *)(pauParm1 + 7 + 8) == *(float *)(pauParm1 + 8 + 2)) << 0xe) == 0) {
    *(undefined4 *)(pauParm1 + 7 + 8) = *(undefined4 *)(pauParm1 + 8 + 2);
  }
  FUN_01015f4e(pauParm1,extraout_EDX);
  return;
}



void __thiscall FUN_010181ed(void *this,int param_1,undefined4 *param_2,float *param_3)

{
  float10 fVar1;
  
  if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
    fVar1 = FUN_01017883(param_1,param_2,param_3,*(float *)((int)this + 0x36),
                         *(float *)((int)this + 0x3a),*(float *)((int)this + 0x42),
                         *(float *)((int)this + 0x3e));
    if ((ushort)((ushort)(fVar1 < (float10)*(float *)((int)this + 0x42)) << 8 |
                (ushort)(fVar1 == (float10)*(float *)((int)this + 0x42)) << 0xe) == 0) {
      if (*(int *)((int)this + 0x4a) != 0) {
        FUN_01009895(*(int *)((int)this + 0x4a));
      }
      (***(code ***)this)(0x31,0);
      FUN_01011ec9(0x3f,(undefined **)this);
    }
  }
  else {
    FUN_01017883(param_1,param_2,param_3,*(float *)((int)this + 0x36),*(float *)((int)this + 0x3a),
                 1000000000.00000000,0.00000000);
  }
  return;
}



void __thiscall FUN_01018295(void *this,int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = FUN_01017f29(this,param_1,param_2,param_3);
  if (iVar1 != 0) {
    (***(code ***)this)(0x31,0);
    iVar1 = FUN_010074b7(*(undefined4 *)((int)this + 0x56),(int)this,(int)FUN_0101620b);
    *(int *)((int)this + 0x52) = iVar1;
    FUN_01011ec9(0x3f,(undefined **)this);
  }
  return;
}



void __thiscall FUN_010182e4(void *this,int param_1)

{
  float *pfVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_58;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined local_4c [52];
  undefined4 local_18;
  
  FUN_0100950a(param_1,0,local_4c);
  uVar5 = 600;
  local_58 = 0;
  iVar3 = (int)this + 5;
  pvVar2 = this;
  uVar4 = local_18;
  pfVar1 = FUN_0100978e(param_1,0,600);
  FUN_010179a9(pfVar1,pvVar2,iVar3,uVar4,local_58,uVar5);
  local_58 = 0x25b;
  uVar4 = 0;
  iVar3 = (int)this + 0x4e;
  pfVar1 = FUN_0100978e(param_1,0,0x25b);
  FUN_010179a9(pfVar1,this,iVar3,local_18,uVar4,local_58);
  return;
}



void __thiscall
FUN_01018351(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,float param_4,
            undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  
  *(undefined4 *)((int)param_1 + 0x2a) = *param_2;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2[1];
  *(float *)((int)param_1 + 0x46) = *(float *)((int)param_1 + 0x46) - param_4;
  FUN_0101590f(param_1,param_5);
  iVar1 = 0;
  if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
    if (*(char *)((int)this + 0x4e) == '\0') {
      FUN_01009895(*(int *)((int)this + 0x46));
      FUN_01011ec9(0x3f,(undefined **)this);
    }
    else {
      FUN_010074b7(0x3dcccccd,(int)this,(int)FUN_0101644b);
      *(undefined *)((int)this + 5) = 0;
    }
    bVar2 = *(char *)((int)this + 0x4e) == '\0';
    *(bool *)((int)this + 0x4e) = bVar2;
    if (*(int *)((int)this + 0x22) != 0) {
      if (!bVar2) {
        iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8);
      }
      FUN_010139b6(*(int *)((int)this + 0x1a),iVar1);
    }
  }
  return;
}



void __thiscall FUN_010183e8(void *this,int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
    if (*(int *)((int)this + 0x5a) == 0) {
      *(undefined4 *)((int)this + 0x42) = 0x4e6e6b28;
      *(undefined4 *)((int)this + 0x5a) = 1;
      iVar1 = FUN_010074b7(*(undefined4 *)((int)this + 0x4e),(int)this,(int)FUN_0101663f);
      *(int *)((int)this + 0x56) = iVar1;
    }
    iVar1 = FUN_01017f29(this,param_1,param_2,param_3);
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 0x5a) = 0;
    }
  }
  else {
    FUN_01017883(param_1,param_2,param_3,*(float *)((int)this + 0x36),*(float *)((int)this + 0x3a),
                 0.00000000,*(float *)((int)this + 0x3e));
  }
  return;
}



void __thiscall FUN_01018476(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x4e) == 0) {
    *(undefined4 *)((int)this + 0x52) = 0;
    *(undefined4 *)((int)this + 0x42) = 0x4e6e6b28;
    *(undefined4 *)((int)this + 0x4e) = 1;
    *(void **)(param_1 + 0x6a) = this;
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)this + 0x72);
    uVar1 = *(undefined4 *)((int)this + 0x76);
    *(undefined4 *)(param_1 + 0x3e) = 0;
    *(undefined4 *)(param_1 + 0x2e) = uVar1;
    iVar2 = FUN_010074b7(0x3f000000,(int)this,(int)FUN_010169a4);
    *(int *)((int)this + 0x56) = iVar2;
    if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
      FUN_01009895(*(int *)((int)this + 0x4a));
      FUN_01011ec9(0x39,(undefined **)this);
    }
  }
  return;
}



void __thiscall FUN_010184ed(void *this,int param_1,undefined4 *param_2,float *param_3)

{
  *(undefined4 *)((int)this + 0x4e) = 0;
  if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
    *(undefined *)(param_1 + 5) = 0;
    FUN_010139b6(*(int *)(param_1 + 0x1a),0);
    FUN_01009895(*(int *)((int)this + 0x7a));
    FUN_01011ec9(0x3f,(undefined **)this);
  }
  else {
    FUN_01017883(param_1,param_2,param_3,*(float *)((int)this + 0x36),*(float *)((int)this + 0x3a),
                 1000000000.00000000,0.00000000);
  }
  return;
}



void __thiscall FUN_01018562(void *this,undefined **param_1)

{
  int iVar1;
  
  (**(code **)*param_1)(0x400,0);
  *(undefined4 *)(*(int *)((int)this + 0x1e) + 0x4e) = 1;
  iVar1 = FUN_010074b7(*(undefined4 *)((int)this + 0x4e),(int)this,(int)FUN_010172d8);
  *(int *)((int)this + 0x56) = iVar1;
  FUN_01011ec9(0x3f,(undefined **)this);
  return;
}



undefined4 __thiscall FUN_010185ad(void *this,int param_1)

{
  undefined4 uVar1;
  code **ppcVar2;
  int iVar3;
  
  switch(param_1) {
  case 0x3ec:
    if (*(int *)((int)this + 0x4e) == 0) {
      *(undefined4 *)((int)this + 0x3e) = 0;
      *(undefined4 *)((int)this + 0x42) = 0x4e6e6b28;
      FUN_01009895(*(int *)((int)this + 0x4a));
      FUN_01017314(0,(int)this);
    }
    break;
  case 0x3f7:
    ppcVar2 = *(code ***)(*(int *)(*(int *)((int)this + 0x1e) + 0xfe) + 8);
    (**(code **)*ppcVar2)(0x400,0);
    *(undefined4 *)((int)ppcVar2 + 0x2a) = *(undefined4 *)(*(int *)((int)this + 0x1e) + 0x11e);
    *(undefined4 *)((int)ppcVar2 + 0x2e) = *(undefined4 *)(*(int *)((int)this + 0x1e) + 0x122);
    *(undefined *)((int)ppcVar2 + 5) = 1;
    *(undefined4 *)(*(int *)((int)this + 0x1e) + 0x4e) = 0;
    FUN_01014d59();
    FUN_01011ec9(param_1,(undefined **)this);
    break;
  case 0x3f8:
    if (*(int *)((int)this + 0x52) != 0) {
      FUN_01007659(*(int *)((int)this + 0x52));
    }
    iVar3 = FUN_010074b7(0x3f75c28f,(int)this,(int)FUN_010172f0);
    *(int *)((int)this + 0x52) = iVar3;
    FUN_01009895(*(int *)((int)this + 0x62));
    FUN_01011ec9(param_1,(undefined **)this);
    break;
  case 0x3f9:
    *(undefined4 *)((int)this + 0x42) = 0;
    *(float *)((int)this + 0x3e) = (float)*(int *)((int)this + 0x56);
    uVar1 = 0x3e4ccccd;
LAB_01018712:
    FUN_010074b7(uVar1,(int)this,(int)FUN_010173c8);
    break;
  case 0x400:
    if (*(int *)((int)this + 0x52) != 0) {
      FUN_01007659(*(int *)((int)this + 0x52));
    }
    *(undefined4 *)((int)this + 0x52) = 0;
  case 0x3ed:
  case 0x3f1:
  case 0x3f2:
    *(undefined4 *)((int)this + 0x42) = 0;
    if (*(int *)((int)this + 0x4e) != 0) {
      FUN_01007659(*(int *)((int)this + 0x4e));
    }
    *(undefined4 *)((int)this + 0x4e) = 0;
    if (param_1 == 0x3ed) {
      FUN_01009895(*(int *)((int)this + 0x66));
    }
    iVar3 = *(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8);
    FUN_01013974(*(undefined4 **)((int)this + 0x1a),iVar3,
                 *(undefined4 *)(*(int *)(*(int *)((int)this + 0x26) + 4) + 8),
                 *(int *)(iVar3 + 0x1d) - *(int *)(*(int *)((int)this + 0x1e) + 0xea),
                 *(int *)(iVar3 + 0x21) - *(int *)(*(int *)((int)this + 0x1e) + 0xee));
    uVar1 = *(undefined4 *)((int)this + 0x5e);
    goto LAB_01018712;
  }
  return 0;
}



void __thiscall FUN_0101875f(void *this,int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) != 0) {
    (***(code ***)this)(0x3f9,0);
  }
  iVar1 = rand();
  FUN_01017883(param_1,param_2,param_3,*(float *)((int)this + 0x36),*(float *)((int)this + 0x3a),
               *(float *)((int)this + 0x42),
               (float)iVar1 * 0.00003052 * *(float *)((int)this + 0x3e) * 0.09999999 +
               *(float *)((int)this + 0x3e));
  return;
}



undefined4 __thiscall FUN_010187d6(void *this,int param_1,undefined4 *param_2)

{
  LPSTR pCVar1;
  int iVar2;
  code **ppcVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  double dVar7;
  short sVar8;
  void *pvVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 local_20;
  
  switch(param_1) {
  case 1000:
    if (*(int *)((int)this + 0x172) != 0) break;
    ppcVar3 = *(code ***)((int)this + 0x2a);
    goto LAB_01018e4f;
  case 0x3e9:
    if (*(int *)((int)this + 0x172) != 0) break;
    ppcVar3 = *(code ***)((int)this + 0x2a);
    goto LAB_01018e34;
  case 0x3ea:
    if (*(int *)((int)this + 0x172) != 0) break;
    ppcVar3 = *(code ***)((int)this + 0x2e);
LAB_01018e4f:
    local_20 = CONCAT44(param_2,1);
    goto LAB_01018e68;
  case 0x3eb:
    if (*(int *)((int)this + 0x172) != 0) break;
    ppcVar3 = *(code ***)((int)this + 0x2e);
LAB_01018e34:
    local_20 = CONCAT44(param_2,2);
    goto LAB_01018e68;
  case 0x3ec:
  case 0x3ed:
    ppcVar3 = *(code ***)((int)this + 0xde);
    local_20 = CONCAT44(param_2,param_1);
    goto LAB_01018e68;
  case 0x3f0:
  case 0x3f1:
  case 0x3f2:
    iVar2 = *(int *)(*(int *)((int)this + 0xfe) + 4);
    if (-1 < iVar2 + -1) {
      iVar4 = (iVar2 + -1) * 4 + 8;
      do {
        (**(code **)**(code ***)(iVar4 + *(int *)((int)this + 0xfe)))(param_1,param_2);
        iVar4 = iVar4 + -4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    break;
  case 0x3f4:
    (**(code **)**(code ***)((int)this + 0x10a))();
    if (*(int *)((int)this + 0x172) != 0) {
      *(int *)((int)this + 0x172) = 0;
      if (*(int *)((int)this + 0x62) != 0) {
        FUN_01007659(*(int *)((int)this + 0x62));
      }
      *(undefined4 *)((int)this + 0x62) = 0;
    }
    break;
  case 0x3f5:
    (**(code **)**(code ***)(code **)((int)this + 0x10a))(0x22,0);
    (**(code **)**(code ***)(code **)((int)this + 0x10a))();
    (**(code **)**(code ***)((int)this + 0xde))(0x3f8,0);
    uVar11 = 0xbf800000;
    if (*(char *)(*(int *)((int)this + 0xe6) + 5) == '\0') {
      sVar8 = 0x1a;
    }
    else {
      sVar8 = 0x1e;
    }
    pCVar1 = FUN_01003752(sVar8);
    FUN_010144b7(pCVar1,uVar11);
    ppcVar3 = *(code ***)((int)this + 0xe6);
    if (ppcVar3 == (code **)0x0) break;
    local_20 = 0x3f6;
LAB_01018e68:
    (**(code **)*ppcVar3)(local_20);
    break;
  case 0x3f6:
    if (*(int *)((int)this + 0x5e) != 0) {
      FUN_01007659(*(int *)((int)this + 0x5e));
      FUN_0101748b(0,(int)this);
      FUN_0101461a(1);
    }
    if (*(int *)((int)this + 0x5a) == 0) {
      *(undefined4 *)((int)this + 0x3e) = 0;
      FUN_010187d6(this,0x400,(undefined4 *)0x0);
      iVar2 = *(int *)(*(int *)((int)this + 0x106) + 8);
      *(undefined4 *)(iVar2 + 0x2e) = 0;
      *(undefined4 *)(iVar2 + 0x2a) = 0;
      *(undefined4 *)(iVar2 + 0x32) = 0xbf4ccccd;
      floor((double)(float)param_2);
      iVar2 = _ftol();
      *(int *)((int)this + 0xd6) = iVar2;
      if (iVar2 < 1) {
        *(undefined4 *)((int)this + 0xd6) = 1;
      }
      else {
        if (4 < iVar2) {
          *(undefined4 *)((int)this + 0xd6) = 4;
        }
      }
      *(undefined4 *)((int)this + 0xda) = 0;
      *(undefined4 **)((int)this + 0x32) = *(undefined4 **)((int)this + 0x66);
      *(undefined4 *)((int)this + 0x52) = 0;
      FUN_01013c89(*(undefined4 **)((int)this + 0x66),0);
      *(undefined4 *)((int)this + 0x126) = 0;
      param_2 = (undefined4 *)0x1;
      if (1 < *(int *)((int)this + 0xd6)) {
        puVar5 = (undefined4 *)((int)this + 0x86);
        do {
          FUN_01013c89((undefined4 *)puVar5[-1],0);
          param_2 = (undefined4 *)((int)param_2 + 1);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[3] = *(undefined4 *)((int)this + 0x14a);
          puVar5[4] = *(undefined4 *)((int)this + 0x14e);
          puVar5[5] = *(undefined4 *)((int)this + 0x156);
          puVar5[2] = *(undefined4 *)((int)this + 0x13a);
          puVar5 = puVar5 + 7;
        } while ((int)param_2 < *(int *)((int)this + 0xd6));
      }
      *(int *)((int)this + 0x146) = *(int *)((int)this + 0x14a);
      FUN_01006bb8();
      FUN_010175aa(this,*(int *)((int)this + 0x146));
      FUN_01013c89(*(undefined4 **)((int)this + 0x3a),*(int *)((int)this + 0xda) + 1);
      FUN_01013d2d(*(int **)((int)this + 0x3a));
      FUN_01006bb8();
      iVar2 = *(int *)((int)this + 0xd6);
      if (iVar2 < 4) {
        param_2 = (undefined4 *)(iVar2 * 0x1c + 0x66 + (int)this);
        iVar2 = 4 - iVar2;
        do {
          FUN_01013c89((undefined4 *)*param_2,0xffffffff);
          param_2 = param_2 + 7;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_01006bb8();
      *(undefined4 *)((int)this + 0x13e) = 0;
      *(undefined4 *)((int)this + 0x136) = 0;
      *(undefined4 *)((int)this + 0x142) = 0;
      FUN_01014143(DAT_01025650);
      FUN_01006bb8();
      FUN_01014143(DAT_01025654);
      FUN_01006bb8();
      (**(code **)**(code ***)((int)this + 0x10a))();
      pcVar10 = FUN_01017467;
      pvVar9 = this;
      fVar6 = FUN_01009895(*(int *)((int)this + 0x42));
      iVar2 = FUN_010074b7((float)fVar6,(int)pvVar9,(int)pcVar10);
      *(int *)((int)this + 0x5a) = iVar2;
    }
    else {
      FUN_01007659(*(int *)((int)this + 0x5a));
      *(undefined4 *)((int)this + 0x5a) = 0;
      FUN_010187d6(this,0x3f5,(undefined4 *)0x0);
    }
    break;
  case 0x3fa:
    if (*(int *)((int)this + 0x166) != 0) {
      FUN_01007659(*(int *)((int)this + 0x166));
    }
    pcVar10 = FUN_010175ef;
    pvVar9 = this;
    dVar7 = floor((double)(float)param_2);
    iVar2 = FUN_010074b7((float)dVar7,(int)pvVar9,(int)pcVar10);
    *(int *)((int)this + 0x166) = iVar2;
    *(undefined4 *)((int)this + 0x162) = 1;
    break;
  case 0x3fd:
    if (*(int *)((int)this + 0xd6) < 2) {
      uVar11 = 0xbf800000;
      if (*(char *)(*(int *)((int)this + 0xe6) + 5) == '\0') {
        sVar8 = 0x1a;
      }
      else {
        sVar8 = 0x1e;
      }
      pCVar1 = FUN_01003752(sVar8);
      FUN_010144b7(pCVar1,uVar11);
      break;
    }
    iVar2 = (*(int *)((int)this + 0xda) + 1) % *(int *)((int)this + 0xd6);
    pvVar9 = (void *)(iVar2 * 0x1c + (int)this);
    if (*(int *)((int)pvVar9 + 0x76) < 1) break;
    *(undefined4 *)(*(int *)((int)this + 0xda) * 0x1c + 0x6a + (int)this) =
         *(undefined4 *)((int)this + 0x52);
    *(undefined4 *)(*(int *)((int)this + 0xda) * 0x1c + 0x6e + (int)this) =
         *(undefined4 *)((int)this + 0x56);
    *(undefined4 *)(*(int *)((int)this + 0xda) * 0x1c + 0x76 + (int)this) =
         *(undefined4 *)((int)this + 0x146);
    *(undefined4 *)(*(int *)((int)this + 0xda) * 0x1c + 0x7a + (int)this) =
         *(undefined4 *)((int)this + 0x14e);
    *(undefined4 *)(*(int *)((int)this + 0xda) * 0x1c + 0x7e + (int)this) =
         *(undefined4 *)((int)this + 0x156);
    *(undefined4 *)(*(int *)((int)this + 0xda) * 0x1c + 0x72 + (int)this) =
         *(undefined4 *)((int)this + 0x13a);
    *(undefined4 *)((int)this + 0x52) = *(undefined4 *)((int)pvVar9 + 0x6a);
    *(undefined4 *)((int)this + 0x56) = *(undefined4 *)((int)pvVar9 + 0x6e);
    *(undefined4 *)((int)this + 0x146) = *(undefined4 *)((int)pvVar9 + 0x76);
    *(undefined4 *)((int)this + 0x14e) = *(undefined4 *)((int)pvVar9 + 0x7a);
    *(undefined4 *)((int)this + 0x156) = *(undefined4 *)((int)pvVar9 + 0x7e);
    *(undefined4 *)((int)this + 0x13a) = *(undefined4 *)((int)pvVar9 + 0x72);
    puVar5 = *(undefined4 **)((int)pvVar9 + 0x66);
    *(undefined4 **)((int)this + 0x32) = puVar5;
    FUN_01013c89(puVar5,*(undefined4 *)((int)this + 0x52));
    *(undefined4 *)(*(int *)((int)this + 0x32) + 4) = 1;
    FUN_010175aa(this,*(int *)((int)this + 0x146));
    FUN_01013c89(*(undefined4 **)((int)this + 0x3a),iVar2 + 1);
    FUN_01013d2d(*(int **)((int)this + 0x3a));
    iVar4 = 0;
    if (0 < *(int *)(*(int *)((int)this + 0xfe) + 4)) {
      param_2 = (undefined4 *)0x8;
      do {
        (**(code **)**(code ***)((int)param_2 + *(int *)((int)this + 0xfe)))(0x3fc,(float)iVar2);
        param_2 = param_2 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(*(int *)((int)this + 0xfe) + 4));
    }
    if (iVar2 == 0) {
      if (*(char *)(*(int *)((int)this + 0xe6) + 5) == '\0') {
        sVar8 = 0x1a;
      }
      else {
        sVar8 = 0x1e;
      }
LAB_01018d9e:
      uVar11 = 0xbf800000;
      pCVar1 = FUN_01003752(sVar8);
      FUN_010144b7(pCVar1,uVar11);
    }
    else {
      if (iVar2 == 1) {
        if (*(char *)(*(int *)((int)this + 0xe6) + 5) == '\0') {
          sVar8 = 0x1b;
        }
        else {
          sVar8 = 0x1f;
        }
        goto LAB_01018d9e;
      }
      if (iVar2 == 2) {
        if (*(char *)(*(int *)((int)this + 0xe6) + 5) == '\0') {
          sVar8 = 0x1c;
        }
        else {
          sVar8 = 0x20;
        }
        goto LAB_01018d9e;
      }
      if (iVar2 == 3) {
        if (*(char *)(*(int *)((int)this + 0xe6) + 5) == '\0') {
          sVar8 = 0x1d;
        }
        else {
          sVar8 = 0x21;
        }
        goto LAB_01018d9e;
      }
    }
    *(undefined4 *)((int)this + 0x13e) = 0;
    *(undefined4 *)((int)this + 0x136) = 0;
    *(undefined4 *)((int)this + 0x142) = 0;
    *(int *)((int)this + 0xda) = iVar2;
    break;
  case 0x3fe:
    FUN_01009895(*(int *)((int)this + 0x46));
    FUN_01014143(DAT_01025654);
    uVar11 = 0xbf800000;
    pCVar1 = FUN_01003752(0x22);
    FUN_010144b7(pCVar1,uVar11);
    iVar2 = FUN_010074b7(0x40400000,(int)this,(int)FUN_0101748b);
    *(int *)((int)this + 0x5e) = iVar2;
    break;
  case 0x400:
    iVar2 = *(int *)(*(int *)((int)this + 0xfe) + 4);
    if (-1 < iVar2 + -1) {
      iVar4 = (iVar2 + -1) * 4 + 8;
      do {
        (**(code **)**(code ***)(iVar4 + *(int *)((int)this + 0xfe)))();
        iVar4 = iVar4 + -4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*(int *)((int)this + 0x166) != 0) {
      FUN_01007659(*(int *)((int)this + 0x166));
    }
    *(undefined4 *)((int)this + 0x166) = 0;
    if (*(int *)((int)this + 0x5a) != 0) {
      FUN_01007659(*(int *)((int)this + 0x5a));
      (**(code **)**(code ***)((int)this + 0x10a))(0x22,0);
    }
    *(undefined4 *)((int)this + 0x5a) = 0;
    *(undefined4 *)((int)this + 0x126) = 0;
    *(undefined4 *)((int)this + 0x12a) = 0;
    *(undefined4 *)((int)this + 0x12e) = 0;
    *(undefined4 *)((int)this + 0x132) = 10000;
    *(undefined4 *)((int)this + 0x136) = 0;
    *(undefined4 *)((int)this + 0x13a) = 20000;
    *(undefined4 *)((int)this + 0x13e) = 0;
    *(undefined4 *)((int)this + 0x142) = 0;
    *(undefined4 *)((int)this + 0x14e) = 0;
    *(undefined4 *)((int)this + 0x152) = 0;
    *(undefined4 *)((int)this + 0x156) = 0;
    *(undefined4 *)((int)this + 0x15a) = 0;
    *(undefined4 *)((int)this + 0x15e) = 0;
    *(undefined4 *)((int)this + 0x162) = 0;
    *(undefined4 *)((int)this + 0x166) = 0;
    *(undefined4 *)((int)this + 0x172) = 0;
  }
  FUN_0100c0be(param_1);
  return 0;
}



undefined4 __thiscall FUN_01018f5b(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0x3b) {
    if (*(int *)((int)this + 0x2a) != 0) {
      FUN_01007659(*(int *)((int)this + 0x2a));
    }
    iVar1 = FUN_010074b7(param_2,(int)this,(int)FUN_0101798c);
    *(int *)((int)this + 0x2a) = iVar1;
  }
  else {
    if ((((param_1 == 0x3f3) || (param_1 == 0x3fe)) || (param_1 == 0x400)) &&
       (*(int *)((int)this + 0x2a) != 0)) {
      FUN_01007659(*(int *)((int)this + 0x2a));
      *(undefined4 *)((int)this + 0x2a) = 0;
    }
  }
  return 0;
}



void __fastcall FUN_01018fbc(undefined4 *param_1)

{
  *param_1 = 0x10024a8;
  if (*(int *)((int)param_1 + 0x1e) != 0) {
    FUN_01012e7a(*(int *)(*(int *)((int)param_1 + 0x1e) + 0xfe),(int)param_1);
  }
  if (*(void **)((int)param_1 + 0x22) != (void *)0x0) {
    FUN_01017e5c(*(void **)((int)param_1 + 0x22),1);
  }
  if (*(void **)((int)param_1 + 0x26) != (void *)0x0) {
    FUN_01017e5c(*(void **)((int)param_1 + 0x26),1);
  }
  return;
}



undefined4 * __thiscall FUN_01018ffd(void *this,void *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  void *local_8;
  
  local_8 = this;
  FUN_01017c6d(this,(int)param_1,param_2,0);
  *(undefined4 *)this = 0x10024d8;
  FUN_010098d3((void *)((int)this + 0x2a),4,4);
  *(undefined4 *)((int)this + 0x32) = 0;
  if (0 < param_2) {
    psVar1 = FUN_0100981a(param_2,0x403,(int *)&local_8);
    param_2 = 0;
    if (0 < (int)local_8) {
      do {
        iVar2 = FUN_010176be(param_1,(int)*psVar1);
        if (iVar2 != 0) {
          FUN_0100acf3((void *)((int)this + 0x2a),iVar2);
        }
        param_2 = param_2 + 1;
        psVar1 = psVar1 + 1;
      } while (param_2 < (int)local_8);
    }
  }
  return (undefined4 *)this;
}



void __fastcall FUN_01019082(undefined4 *param_1)

{
  *param_1 = 0x10024d8;
  if (*(int *)((int)param_1 + 0x32) != 0) {
    FUN_01007659(*(int *)((int)param_1 + 0x32));
    *(undefined4 *)((int)param_1 + 0x32) = 0;
  }
  FUN_01013c6f(*(int *)((int)param_1 + 0x2e));
  FUN_01018fbc(param_1);
  return;
}



undefined4 * __thiscall FUN_010190b3(void *this,int param_1,int param_2,int param_3)

{
  float *pfVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined4 local_60;
  undefined4 uVar4;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_01017c6d(this,param_1,param_2,1);
  *(undefined4 *)this = 0x10024ec;
  FUN_010098d3((void *)((int)this + 0x2a),4,4);
  puVar3 = (undefined *)((int)this + 5);
  *puVar3 = 1;
  if (*(int *)((int)this + 10) != 0) {
    *(undefined *)((int)this + 4) = 1;
  }
  if (param_2 < 1) {
    FUN_01008fe0(&local_4c);
  }
  else {
    FUN_0100950a(param_2,0,&local_4c);
    if (param_3 != 0) {
      local_60 = *(undefined4 *)(param_1 + 0x11a);
      uVar4 = 0;
      pvVar2 = this;
      pfVar1 = FUN_0100978e(param_2,0,600);
      FUN_010179a9(pfVar1,pvVar2,puVar3,local_18,local_60,uVar4);
    }
  }
  *(undefined4 *)((int)this + 0x42) = local_38;
  *(undefined4 *)((int)this + 0x36) = local_48;
  *(undefined4 *)((int)this + 0x3a) = local_4c;
  *(undefined4 *)((int)this + 0x3e) = local_34;
  *(undefined4 *)((int)this + 0x4a) = local_1c;
  *(undefined4 *)((int)this + 0x46) = local_3c;
  *(int *)((int)this + 0x16) = param_2;
  return (undefined4 *)this;
}



void __fastcall FUN_01019172(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  
  *param_1 = 0x10024ec;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x2e) + 4);
  while (iVar2 != 0) {
    pvVar1 = *(void **)(*(int *)((int)param_1 + 0x2e) + 8);
    FUN_01012e7a(*(int *)((int)param_1 + 0x2e),(int)pvVar1);
    operator_delete(pvVar1);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0x2e) + 4);
  }
  FUN_01013c6f(*(int *)((int)param_1 + 0x2e));
  FUN_01018fbc(param_1);
  return;
}



undefined4 * __thiscall FUN_010191ba(void *this,int param_1,int param_2)

{
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)this = 0x1002508;
  if (*(int *)((int)this + 0x1a) != 0) {
    FUN_010139b6(*(int *)((int)this + 0x1a),0);
  }
  if (*(int *)((int)this + 0x22) != 0) {
    *(undefined4 *)((int)this + 0x52) =
         *(undefined4 *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8);
  }
  *(undefined4 *)((int)this + 0x4e) = 0;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_01019204(void *this,int param_1,int param_2)

{
  void *this_00;
  undefined4 *this_01;
  int *this_02;
  undefined local_64 [8];
  int local_5c;
  undefined4 *local_58;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  this_02 = (int *)0x0;
  FUN_010190b3(this,param_1,param_2,0);
  *(undefined4 *)this = 0x1002530;
  FUN_0100950a(param_2,0,local_64);
  if (local_5c == 2) {
    local_10 = *local_58;
    local_c = local_58[1];
    local_1c = local_58[2];
    local_18 = local_58[3];
    this_00 = operator_new(0x55);
    if (this_00 != (void *)0x0) {
      this_02 = FUN_0101c77e(this_00,this,(int)this + 5,local_30,&local_10,&local_1c);
    }
    if (this_02 != (int *)0x0) {
      FUN_0101c813(this_02,*(float *)(param_1 + 0x11a));
      (**(code **)(*this_02 + 8))();
      FUN_0100acf3((void *)((int)this + 0x2a),(int)this_02);
    }
    this_00 = operator_new(0x55);
    if (this_00 == (void *)0x0) {
      this_01 = (undefined4 *)0x0;
    }
    else {
      this_01 = FUN_0101c77e(this_00,this,(int)this + 5,local_30,&local_1c,&local_10);
    }
    *(undefined4 **)((int)this + 0x52) = this_01;
    if (this_01 != (undefined4 *)0x0) {
      FUN_0101c813(this_01,-(*(float *)(param_1 + 0x11a) * 0.79999995));
      (**(code **)(**(int **)((int)this + 0x52) + 8))();
      FUN_0100acf3((void *)((int)this + 0x2a),*(int *)((int)this + 0x52));
    }
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_01019309(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  float *pfVar2;
  int *piVar3;
  float10 fVar4;
  undefined local_54 [64];
  int local_14;
  int local_c;
  float *local_8;
  
  FUN_01017c6d(this,param_1,-1,0);
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)this = 0x1002554;
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined *)((int)this + 5) = 1;
  *(undefined4 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x86) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x6e) = 1;
  *(undefined4 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x56) = 0x4e6e6b28;
  *(undefined4 *)((int)this + 0x52) = 0x4e6e6b28;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  this_00 = operator_new(8);
  if (this_00 == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    FUN_010098d3(this_00,0,4);
  }
  *(void **)((int)this + 0x22) = this_00;
  iVar1 = FUN_010091eb("ball");
  pfVar2 = FUN_0100978e(iVar1,0,500);
  *(float *)((int)this + 0x9a) = *pfVar2;
  local_c = FUN_01009207(iVar1);
  param_1 = 0;
  if (0 < local_c) {
    local_8 = (float *)((int)this + 0xa2);
    do {
      FUN_0100950a(iVar1,param_1,local_54);
      if (*(void **)((int)this + 0x22) != (void *)0x0) {
        FUN_0100acf3(*(void **)((int)this + 0x22),local_14);
      }
      pfVar2 = FUN_0100978e(iVar1,param_1,0x1f5);
      fVar4 = (float10)FUN_01008ed8(pfVar2);
      param_1 = param_1 + 1;
      *local_8 = (float)fVar4;
      local_8 = local_8 + 1;
    } while (param_1 < local_c);
  }
  piVar3 = FUN_0101385c(2,0,0,0,0,(int *)0x0);
  *(int **)((int)this + 0x1a) = piVar3;
  *(undefined4 *)(*(int *)((int)this + 0x1e) + 0x11a) = *(undefined4 *)((int)this + 0x9a);
  *(undefined4 *)((int)this + 0x32) = *(undefined4 *)((int)this + 0x9a);
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101944a(void *this,int param_1,int param_2)

{
  float *pfVar1;
  undefined local_4c [56];
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)this = 0x100256c;
  pfVar1 = FUN_0100978e(param_2,0,0x197);
  *(float *)((int)this + 0x56) = *pfVar1;
  FUN_0100950a(param_2,0,local_4c);
  *(undefined4 *)((int)this + 0x5e) = local_14;
  *(undefined4 *)((int)this + 0x62) = local_10;
  *(undefined4 *)((int)this + 0x5a) = *(undefined4 *)((int)this + 0x42);
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_010194b0(void *this,int param_1,int param_2)

{
  void *this_00;
  int *piVar1;
  float *pfVar2;
  undefined local_64 [12];
  undefined4 *local_58;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_010190b3(this,param_1,param_2,0);
  *(undefined4 *)this = 0x1002588;
  *(undefined4 *)((int)this + 0x66) = 0;
  FUN_0100950a(param_2,0,local_64);
  local_1c = *local_58;
  local_18 = local_58[1];
  local_10 = local_58[2];
  local_c = local_58[3];
  this_00 = operator_new(0x55);
  if (this_00 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_0101c77e(this_00,this,(int)this + 5,local_30,&local_10,&local_1c);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    FUN_0100acf3((void *)((int)this + 0x2a),(int)piVar1);
  }
  this_00 = operator_new(0x55);
  if (this_00 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_0101c77e(this_00,this,(int)this + 5,local_30,&local_1c,&local_10);
  }
  *(int **)((int)this + 0x6a) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    FUN_0100acf3((void *)((int)this + 0x2a),*(int *)((int)this + 0x6a));
  }
  *(undefined4 *)((int)this + 0x5a) = 0x3f266666;
  *(undefined4 *)((int)this + 0x52) = 0x47435000;
  *(undefined4 *)((int)this + 0x56) = 0x40a00000;
  pfVar2 = FUN_0100978e(param_2,0,0x4b2);
  if (pfVar2 != (float *)0x0) {
    *(float *)((int)this + 0x5a) = *pfVar2;
  }
  pfVar2 = FUN_0100978e(param_2,0,0x4b0);
  if (pfVar2 != (float *)0x0) {
    *(float *)((int)this + 0x52) = *pfVar2;
  }
  pfVar2 = FUN_0100978e(param_2,0,0x4b1);
  if (pfVar2 != (float *)0x0) {
    *(float *)((int)this + 0x56) = *pfVar2;
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_010195e0(void *this,int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)this = 0x10025a4;
  pfVar2 = FUN_0100978e(param_2,0,0x197);
  fVar1 = *pfVar2;
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(float *)((int)this + 0x52) = fVar1;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0101961f(void *this,int param_1,int param_2)

{
  undefined local_4c [56];
  undefined4 local_14;
  
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)this = 0x10025c0;
  *(undefined4 *)((int)this + 0x56) = 0x3dcccccd;
  FUN_0100950a(param_2,0,local_4c);
  *(undefined4 *)((int)this + 0x5a) = local_14;
  FUN_01016230(this,0x32);
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_01019677(void *this,int param_1,int param_2)

{
  undefined local_4c [56];
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)this = 0x10025dc;
  FUN_0100950a(param_2,0,local_4c);
  *(undefined4 *)((int)this + 0x5a) = local_14;
  *(undefined4 *)((int)this + 0x5e) = local_10;
  *(undefined4 *)((int)this + 0x4e) = 0x37;
  *(undefined4 *)((int)this + 0x52) = 5;
  *(undefined4 *)((int)this + 0x42) = 0x4e6e6b28;
  *(undefined4 *)((int)this + 0x56) = 0;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined *)((int)this + 5) = 0;
  FUN_010139b6(*(int *)((int)this + 0x1a),0);
  return (undefined4 *)this;
}



undefined ** __thiscall FUN_010196e5(void *this,int param_1,int param_2)

{
  undefined local_4c [56];
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_010190b3(this,param_1,param_2,1);
  *(undefined4 *)this = 0x10025f8;
  FUN_0100950a(param_2,0,local_4c);
  *(undefined4 *)((int)this + 0x4e) = local_14;
  *(undefined4 *)((int)this + 0x52) = local_10;
  *(undefined *)((int)this + 5) = 1;
  FUN_010139b6(*(int *)((int)this + 0x1a),*(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8));
  FUN_01011ec9(0x400,(undefined **)this);
  return (undefined **)this;
}


