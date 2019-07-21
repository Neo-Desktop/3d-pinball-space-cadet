#include "pinball.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01014f20(void)

{
  if (_DAT_01025640 != 0) {
    FUN_01014dcf(0xc0000000,0xbf800000);
  }
  _DAT_01025640 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01014f52(void)

{
  FUN_01014dcf(0xc0000000,0x3f800000);
  if (DAT_01025648 != 0) {
    FUN_01007659(DAT_01025648);
  }
  DAT_01025648 = FUN_010074b7(0x3ecccccd,0,(int)FUN_01014eee);
  _DAT_0102563c = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01014fa4(void)

{
  FUN_01014dcf(0x40000000,0x3f800000);
  if (DAT_01025648 != 0) {
    FUN_01007659(DAT_01025648);
  }
  DAT_01025648 = FUN_010074b7(0x3ecccccd,0,(int)FUN_01014f20);
  _DAT_01025640 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01014ff6(void)

{
  if (_DAT_01025644 != 0) {
    FUN_01014dcf(0,0xbf800000);
  }
  _DAT_01025644 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01015024(void)

{
  FUN_01014dcf(0,0x3f800000);
  if (DAT_01025648 != 0) {
    FUN_01007659(DAT_01025648);
  }
  DAT_01025648 = FUN_010074b7(0x3ecccccd,0,(int)FUN_01014ff6);
  _DAT_01025644 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01015072(int param_1)

{
  int iVar1;
  LPSTR lpString2;
  void *this;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  CHAR local_e4 [200];
  char local_1c [20];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if ((_DAT_01024fd8 != 0) || (_DAT_01025570 != 0)) goto LAB_010152d2;
  if (DAT_01025568 != 1) {
    FUN_01014743(-1);
    goto LAB_010152d2;
  }
  FUN_0100e1b0(param_1);
  if (param_1 == DAT_01028238) {
    uVar5 = 1000;
LAB_010150dc:
    (**(code **)*DAT_01025658)(uVar5,_DAT_01025630);
  }
  else {
    if (param_1 == DAT_0102823c) {
      (**(code **)*DAT_01025658)(0x3ea,_DAT_01025630);
    }
    else {
      if (param_1 == DAT_01028240) {
        uVar5 = 0x3ec;
        goto LAB_010150dc;
      }
      if (param_1 == DAT_01028244) {
        if (*(int *)((int)DAT_01025658 + 0x172) == 0) {
          FUN_01014fa4();
        }
        goto LAB_010152d2;
      }
      if (param_1 == DAT_01028248) {
        if (*(int *)((int)DAT_01025658 + 0x172) == 0) {
          FUN_01014f52();
        }
        goto LAB_010152d2;
      }
      if (param_1 == DAT_0102824c) {
        if (*(int *)((int)DAT_01025658 + 0x172) == 0) {
          FUN_01015024();
        }
        goto LAB_010152d2;
      }
    }
    if (_DAT_01024ff8 != 0) {
      if (param_1 == 0x42) {
        iVar1 = *(int *)(*(int *)((int)DAT_01025658 + 0x106) + 4);
        iVar4 = 0;
        piVar3 = (int *)(*(int *)((int)DAT_01025658 + 0x106) + 8);
        if (0 < iVar1) {
          do {
            puVar2 = (undefined4 *)*piVar3;
            if (*(char *)((int)puVar2 + 5) == '\0') goto LAB_010152ab;
            iVar4 = iVar4 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar4 < iVar1);
        }
        this = (void *)FUN_010145f5(0x16a);
        if (this == (void *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = FUN_01019309(this,(int)DAT_01025658);
        }
LAB_010152ab:
        *(undefined4 *)((int)puVar2 + 0x2a) = 0x3f800000;
        *(undefined *)((int)puVar2 + 5) = 1;
        *(undefined4 *)((int)puVar2 + 0x32) = *(undefined4 *)((int)puVar2 + 0x9a);
        *(undefined4 *)((int)puVar2 + 0x2e) = 0x3f800000;
        *(undefined4 *)((int)puVar2 + 0x3e) = 0;
        *(undefined4 *)((int)puVar2 + 0x3a) = 0;
        *(undefined4 *)((int)puVar2 + 0x36) = 0;
      }
      else {
        if (param_1 == 0x48) {
          lpString2 = FUN_01003752(0x1a);
          lstrcpyA(local_e4,lpString2);
          FUN_01005452(&DAT_01025578,1000000000,1,local_e4);
        }
        else {
          if (param_1 == 0x4d) {
            sprintf(local_1c,"%ld",DAT_01024f00);
            MessageBoxA(DAT_010281fc,local_1c,"Mem:",0x2000);
          }
          else {
            if (param_1 == 0x52) {
              FUN_0100e111();
            }
            else {
              if (param_1 == 0x7a) {
                FUN_01015892();
              }
              else {
                if (param_1 == 0x7b) {
                  (**(code **)(*DAT_01025658 + 4))();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_010152d2:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010152e4(int param_1)

{
  undefined4 uVar1;
  
  if (((DAT_01025568 == 1) && (_DAT_01024fd8 == 0)) && (_DAT_01025570 == 0)) {
    if (param_1 == DAT_01028238) {
      uVar1 = 0x3e9;
    }
    else {
      if (param_1 == DAT_0102823c) {
        uVar1 = 0x3eb;
      }
      else {
        if (param_1 != DAT_01028240) {
          if (param_1 == DAT_01028244) {
            FUN_01014f20();
            return;
          }
          if (param_1 == DAT_01028248) {
            FUN_01014eee();
            return;
          }
          if (param_1 != DAT_0102824c) {
            return;
          }
          FUN_01014ff6();
          return;
        }
        uVar1 = 0x3ed;
      }
    }
    (**(code **)*DAT_01025658)(uVar1,_DAT_01025630);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010153ae(undefined4 param_1)

{
  _DAT_01025570 = param_1;
  FUN_0101461a(1);
  if (DAT_01028224 != 0) {
    FUN_0100afdc(0);
  }
  (**(code **)*DAT_01025658)(0x3f6,(float)DAT_01028234);
  return;
}



void FUN_010153f4(void)

{
  FUN_01005412(&DAT_01025578);
  return;
}



void FUN_01015404(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 600;
  *param_2 = 0x1a0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01015424(void)

{
  int local_2a8;
  short *psVar1;
  LPCVOID *ppvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_298 [12];
  float local_268;
  float local_264;
  CHAR local_260 [300];
  CHAR local_134 [300];
  undefined4 local_8;
  
  _DAT_01024f04 = _DAT_01024f04 + 1;
  local_8 = DAT_01024778;
  lstrcpyA(local_260,&DAT_0102543c);
  FUN_010076bf(local_134,local_260,300);
  DAT_01025638 = (short *)FUN_010064e2(local_134);
  local_264 = 0.00000000;
  FUN_010037a6(0x9e,(int *)&local_264);
  if (local_264 != 0.00000000) {
    FUN_01013e73("pbmsg_ft");
  }
  if (DAT_01025638 != (short *)0x0) {
    local_2a8 = FUN_010063db(DAT_01025638,"background",5);
    FUN_010043b9(local_2a8);
    psVar1 = (short *)FUN_010063db(DAT_01025638,"table_size",10);
    ppvVar2 = (LPCVOID *)FUN_010063db(DAT_01025638,"background",1);
    puVar4 = (undefined4 *)FUN_010063db(DAT_01025638,"camera_info",0xb);
    if (puVar4 != (undefined4 *)0x0) {
      puVar3 = local_298;
      local_264 = 0.00000000;
      do {
        local_2a8 = 4;
        do {
          puVar5 = puVar4;
          *puVar3 = *puVar5;
          puVar4 = puVar5 + 1;
          puVar3 = puVar3 + 1;
          local_2a8 = local_2a8 + -1;
        } while (local_2a8 != 0);
        local_264 = (float)((int)local_264 + -1);
      } while (local_264 != 0.00000000);
      local_264 = (float)(int)*psVar1;
      FUN_01008e4b((int)local_298,*puVar4,(float)(int)local_264 * 0.50000000,
                   (float)(int)psVar1[1] * 0.50000000);
      local_268 = (float)puVar5[2];
      local_264 = (float)puVar5[3];
    }
    FUN_01013705(0,local_268,local_264,(int *)(int)*psVar1,(int *)(int)psVar1[1]);
    FUN_01004870((int)&DAT_01025088,(int)ppvVar2[3],(int)ppvVar2[4],*(int *)((int)ppvVar2 + 0x1d),
                 *(int *)((int)ppvVar2 + 0x21),(int)ppvVar2,0,0);
    FUN_0100460c(ppvVar2);
    FUN_0100916a(DAT_01025638);
    if (_DAT_0102556c == 0) {
      local_2a8 = 3;
    }
    else {
      local_2a8 = 1;
    }
    FUN_0101461a(local_2a8);
    DAT_01024f84 = 0;
    FUN_0100742f(0x96);
    FUN_01013e25();
    puVar4 = (undefined4 *)FUN_010145f5(0x176);
    if (puVar4 == (undefined4 *)0x0) {
      DAT_01025658 = (undefined4 *)0x0;
    }
    else {
      DAT_01025658 = FUN_0101aaf3(puVar4);
    }
    FUN_01004d18(&DAT_01025578);
    _DAT_01024f04 = _DAT_01024f04 + -1;
    _DAT_010253d0 =
         *(float *)(*(int *)(*(int *)((int)DAT_01025658 + 0x106) + 8) + 0x9a) * 200.00000000;
  }
  FUN_0101cd9e();
  return;
}



undefined4 FUN_0101566e(void)

{
  FUN_01013e2e();
  FUN_0100911d();
  FUN_01006408(DAT_01025638);
  FUN_01004e87(&DAT_01025578);
  if (DAT_01025658 != (int *)0x0) {
    (**(code **)(*DAT_01025658 + 0x10))(1);
  }
  DAT_01025658 = (int *)0x0;
  FUN_01015892();
  FUN_0100749b();
  FUN_01013670();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010156c1(void)

{
  if (DAT_01025658 != (code **)0x0) {
    (**(code **)*DAT_01025658)(0x3f2,_DAT_01025630);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010156e4(void)

{
  LPSTR pCVar1;
  short sVar2;
  undefined4 local_8;
  
  _DAT_01024fd8 = (uint)(_DAT_01024fd8 == 0);
  FUN_01014143(DAT_01025650);
  FUN_01014143(DAT_01025654);
  if (_DAT_01024fd8 != 0) {
    if (DAT_01025658 != (code **)0x0) {
      (**(code **)*DAT_01025658)(0x3f0,_DAT_01025630);
    }
    local_8 = 0xbf800000;
    pCVar1 = FUN_01003752(0x16);
    FUN_010144b7(pCVar1,local_8);
    FUN_0100afb9();
    return;
  }
  if (DAT_01025658 != (code **)0x0) {
    (**(code **)*DAT_01025658)(0x3f1,0);
  }
  if (_DAT_01025570 == 0) {
    if (DAT_01025568 == 2) {
      local_8 = 0xbf800000;
      sVar2 = 0x18;
    }
    else {
      local_8 = 0x40a00000;
      sVar2 = 0x17;
    }
    pCVar1 = FUN_01003752(sVar2);
    FUN_010144b7(pCVar1,local_8);
  }
  if ((DAT_01028224 != 0) && (_DAT_01024fd8 == 0)) {
    FUN_0100afdc(0);
  }
  return;
}



void FUN_010157c3(void)

{
  (**(code **)**(code ***)(DAT_01025658 + 0xde))(0x3f9,0);
  return;
}



void FUN_010157e3(void)

{
  if (DAT_01025658 != (code **)0x0) {
    (**(code **)*DAT_01025658)(0x400,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01015802(void)

{
  LPSTR pCVar1;
  undefined4 uVar2;
  
  if (_DAT_01025570 != 0) {
    _DAT_01025570 = 0;
    (**(code **)*DAT_01025658)(0x400,0);
    FUN_0101461a(2);
    FUN_01014143(DAT_01025654);
    uVar2 = 0xbf800000;
    pCVar1 = FUN_01003752(0x18);
    FUN_010144b7(pCVar1,uVar2);
    return;
  }
  FUN_010153ae(1);
  return;
}



void __thiscall FUN_01015866(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)this = 0x1002444;
  *(undefined4 *)((int)this + 0x11) = param_3;
  *(undefined *)((int)this + 0xc) = 0;
  return;
}



void FUN_01015892(void)

{
  return;
}



undefined4 * __thiscall
FUN_01015898(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,float param_5)

{
  FUN_01015866(this,param_1,param_2,param_3);
  *(undefined4 *)this = 0x1002454;
  *(float *)((int)this + 0x21) = param_5 * param_5;
  *(undefined4 *)((int)this + 0x15) = *param_4;
  *(undefined4 *)((int)this + 0x19) = param_4[1];
  *(undefined4 *)((int)this + 0x1d) = param_4[2];
  return (undefined4 *)this;
}



void __thiscall FUN_010158d6(void *this,undefined4 param_1)

{
  FUN_01008b34(param_1,(int)this + 0x15);
  return;
}



void * __thiscall FUN_010158f0(void *this,int param_1,undefined4 param_2)

{
  FUN_010098d3(this,param_1,param_2);
  return this;
}



void __thiscall FUN_0101590f(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + 0x86);
  if (*piVar1 < 5) {
    *(undefined4 *)((int)this + *piVar1 * 4 + 0x72) = param_1;
    *piVar1 = *piVar1 + 1;
  }
  return;
}



void FUN_01015935(int param_1,undefined4 *param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x36) = *param_2;
  *(undefined4 *)(param_1 + 0x3a) = param_2[1];
  *(undefined4 *)(param_1 + 0x3e) = param_2[2];
  iVar1 = rand();
  FUN_0101ccf3((float *)(param_1 + 0x36),
               (1.00000000 - ((float)iVar1 * 0.00003052 + (float)iVar1 * 0.00003052)) * param_3);
  iVar1 = rand();
  *(float *)(param_1 + 0x42) =
       param_4 * param_5 * (1.00000000 - ((float)iVar1 * 0.00003052 + (float)iVar1 * 0.00003052)) +
       param_4;
  return;
}



undefined4 __thiscall FUN_010159a9(void *this,int param_1)

{
  *(int *)((int)this + 6) = param_1;
  if (param_1 == 0x400) {
    *(undefined4 *)((int)this + 6) = 0;
  }
  return 0;
}



void FUN_010159dc(undefined4 param_1,undefined **param_2)

{
  *(undefined4 *)((int)param_2 + 0x32) = 0;
  FUN_01011ec9(0x3d,param_2);
  return;
}



undefined4 __thiscall FUN_010159f9(void *this,int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0x30) {
    if (*(int *)((int)this + 0x32) != 0) {
      FUN_01007659(*(int *)((int)this + 0x32));
      *(undefined4 *)((int)this + 0x32) = 0;
    }
    if ((ushort)((ushort)(param_2 < 0.00000000) << 8 | (ushort)(param_2 == 0.00000000) << 0xe) == 0)
    {
      iVar1 = FUN_010074b7(param_2,(int)this,(int)FUN_010159dc);
      *(int *)((int)this + 0x32) = iVar1;
    }
  }
  else {
    if ((param_1 < 0x3f0) || (((0x3f3 < param_1 && (param_1 != 0x3fc)) && (param_1 != 0x3fe)))) {
      iVar1 = *(int *)(*(int *)((int)this + 0x2e) + 4);
      if (-1 < iVar1 + -1) {
        iVar2 = (iVar1 + -1) * 4 + 8;
        do {
          (**(code **)**(code ***)(iVar2 + *(int *)((int)this + 0x2e)))(param_1,param_2);
          iVar2 = iVar2 + -4;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return 0;
}



void FUN_01015ace(undefined4 param_1,int param_2)

{
  FUN_010139b6(*(int *)(param_2 + 0x1a),0);
  *(undefined4 *)(param_2 + 0x4e) = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  return;
}



undefined4 __thiscall FUN_01015af3(void *this,int param_1)

{
  if ((param_1 == 0x400) && (*(int *)((int)this + 0x4e) != 0)) {
    FUN_01007659(*(int *)((int)this + 0x4e));
    FUN_01015ace(*(undefined4 *)((int)this + 0x4e),(int)this);
  }
  return 0;
}



undefined4 __thiscall FUN_01015b26(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 1) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x56);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_01015b44(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 1) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x56) = param_2;
  }
  return;
}



undefined4 __thiscall FUN_01015b61(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 6) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x56);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_01015b7f(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 6) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x56) = param_2;
  }
  return;
}



undefined4 __thiscall FUN_01015b9c(void *this,int param_1)

{
  if (param_1 == 0x400) {
    FUN_010139ec(*(undefined4 *)((int)this + 0x1a),0,0,0,0);
    *(undefined4 *)((int)this + 0x2a) = 0;
    *(undefined4 *)((int)this + 0x6a) = 0;
    *(undefined4 *)((int)this + 0x2e) = 0;
    *(undefined *)((int)this + 5) = 0;
    *(undefined4 *)((int)this + 0x96) = 0;
    *(undefined4 *)((int)this + 0x6e) = 1;
    *(undefined4 *)((int)this + 0x3a) = 0;
    *(undefined4 *)((int)this + 0x32) = *(undefined4 *)((int)this + 0x9a);
    *(undefined4 *)((int)this + 0x36) = 0;
    *(undefined4 *)((int)this + 0x42) = 0;
    *(undefined4 *)((int)this + 0x46) = 0;
  }
  return 0;
}



void __fastcall FUN_01015c08(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x96) != 0) {
    *(float *)(param_1 + 0x32) =
         *(float *)(param_1 + 0x8a) * *(float *)(param_1 + 0x2a) +
         *(float *)(param_1 + 0x8e) * *(float *)(param_1 + 0x2e) + *(float *)(param_1 + 0x9a) +
         *(float *)(param_1 + 0x92);
  }
  local_c = param_1;
  local_8 = param_1;
  FUN_01008f03((float *)(param_1 + 0x2a),&local_c);
  fVar5 = (float10)FUN_01008ed8((float *)(param_1 + 0x2a));
  iVar1 = *(int *)(*(int *)(param_1 + 0x22) + 4);
  iVar2 = *(int *)(iVar1 + 4) + -1;
  iVar4 = 0;
  if (0 < iVar2) {
    pfVar3 = (float *)(param_1 + 0xa2);
    do {
      if ((float10)*pfVar3 <= fVar5) break;
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar4 < iVar2);
  }
  iVar1 = *(int *)(iVar1 + 8 + iVar4 * 4);
  local_c = local_c + *(int *)(iVar1 + 0xc) / -2;
  local_8 = local_8 + *(int *)(iVar1 + 0x10) / -2;
  FUN_010139ec(*(undefined4 *)(param_1 + 0x1a),iVar1,(float)fVar5,local_c,local_8);
  return;
}



void FUN_01015cb2(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x4e) * 8 + 8;
  iVar2 = *(int *)(iVar1 + *(int *)(*(int *)(param_2 + 0x22) + 4));
  *(undefined4 *)(param_2 + 0x52) = 0;
  FUN_01013974(*(undefined4 **)(param_2 + 0x1a),iVar2,
               *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x26) + 4) + iVar1),
               *(int *)(iVar2 + 0x1d) - *(int *)(*(int *)(param_2 + 0x1e) + 0xea),
               *(int *)(iVar2 + 0x21) - *(int *)(*(int *)(param_2 + 0x1e) + 0xee));
  *(undefined4 *)(param_2 + 0x42) = *(undefined4 *)(param_2 + 0x5a);
  return;
}



void __fastcall FUN_01015d0f(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x42) = 0x4e6e6b28;
  iVar2 = (*(int *)(param_1 + 0x4e) * 2 + 1) * 4 + 8;
  iVar1 = *(int *)(iVar2 + *(int *)(*(int *)(param_1 + 0x22) + 4));
  FUN_01013974(*(undefined4 **)(param_1 + 0x1a),iVar1,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x26) + 4) + iVar2),
               *(int *)(iVar1 + 0x1d) - *(int *)(*(int *)(param_1 + 0x1e) + 0xea),
               *(int *)(iVar1 + 0x21) - *(int *)(*(int *)(param_1 + 0x1e) + 0xee));
  iVar2 = FUN_010074b7(*(undefined4 *)(param_1 + 0x56),param_1,(int)FUN_01015cb2);
  *(int *)(param_1 + 0x52) = iVar2;
  return;
}



undefined4 __thiscall FUN_01015d79(void *this,int param_1,float param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0xb) {
    floor((double)param_2);
    iVar4 = _ftol();
    iVar3 = *(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 4) + -1;
    if (iVar3 < iVar4 * 2) {
      iVar4 = iVar3 / 2;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (iVar4 != *(int *)((int)this + 0x4e)) {
      if (*(int *)((int)this + 0x4e) <= iVar4) {
        FUN_01009895(*(int *)((int)this + 0x5e));
      }
      if (iVar4 < *(int *)((int)this + 0x4e)) {
        FUN_01009895(*(int *)((int)this + 0x62));
      }
      *(int *)((int)this + 0x4e) = iVar4;
      FUN_01015d0f((int)this);
      FUN_01011ec9(0xb,(undefined **)this);
    }
  }
  else {
    if (param_1 == 0xc) {
      param_2 = (float)(*(int *)((int)this + 0x4e) + 1);
      iVar4 = *(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 4) + -1;
      if (iVar4 < (int)param_2 * 2) {
        param_2 = (float)(iVar4 / 2);
      }
    }
    else {
      if (param_1 == 0xd) {
        param_2 = (float)(*(int *)((int)this + 0x4e) + -1);
        if ((int)param_2 < 0) {
          param_2 = 0.00000000;
        }
      }
      else {
        if (param_1 != 0x3fc) {
          if (param_1 != 0x400) {
            return 0;
          }
          if (*(int *)((int)this + 0x52) != 0) {
            FUN_01007659(*(int *)((int)this + 0x52));
            FUN_01015cb2(*(undefined4 *)((int)this + 0x52),(int)this);
          }
          *(undefined4 *)((int)this + 0x4e) = 0;
          *(undefined4 *)((int)this + 6) = 0;
          iVar4 = 0;
          if (0 < *(int *)(*(int *)((int)this + 0x1e) + 0xd6)) {
            puVar2 = (undefined4 *)((int)this + 0x76);
            do {
              puVar2[1] = 0;
              *puVar2 = 0;
              iVar4 = iVar4 + 1;
              puVar2 = puVar2 + 2;
            } while (iVar4 < *(int *)(*(int *)((int)this + 0x1e) + 0xd6));
          }
          FUN_01015cb2(0,(int)this);
          return 0;
        }
        pvVar1 = (void *)((int)this + *(int *)(*(int *)((int)this + 0x1e) + 0xda) * 8);
        *(undefined4 *)((int)pvVar1 + 0x7a) = *(undefined4 *)((int)this + 0x4e);
        *(undefined4 *)((int)pvVar1 + 0x76) = *(undefined4 *)((int)this + 6);
        floor((double)param_2);
        iVar4 = _ftol();
        pvVar1 = (void *)((int)this + iVar4 * 8);
        *(undefined4 *)((int)this + 0x4e) = *(undefined4 *)((int)pvVar1 + 0x7a);
        param_2 = *(float *)((int)this + 0x4e);
        *(undefined4 *)((int)this + 6) = *(undefined4 *)((int)pvVar1 + 0x76);
      }
    }
    FUN_01015d79(this,0xb,(float)(int)param_2);
  }
  return 0;
}



undefined4 __thiscall FUN_01015ef9(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x66);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_01015f17(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 4) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x66) = param_2;
  }
  return;
}



void __fastcall
FUN_01015f34(undefined4 param_1,undefined **param_2,undefined4 param_3,undefined1 (*param_4) [10])

{
  *(undefined4 *)(param_4 + 10 + 2) = 0;
  FUN_01015f4e(param_4,param_2);
  return;
}



undefined1 (*) [10] __fastcall
FUN_01015f4e(undefined1 (*__return_storage_ptr__) [10],undefined **param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined2 extraout_var;
  undefined1 (*pauVar5) [10];
  
  *(int *)(__return_storage_ptr__ + 9 + 8) =
       *(int *)(__return_storage_ptr__ + 9 + 8) + *(int *)(__return_storage_ptr__ + 9 + 4);
  iVar2 = *(int *)(__return_storage_ptr__ + 3 + 4);
  iVar3 = *(int *)(*(int *)(iVar2 + 4) + 4);
  if (*(int *)(__return_storage_ptr__ + 9 + 8) < iVar3) {
    if (*(int *)(__return_storage_ptr__ + 9 + 8) < 0) {
      *(int *)(__return_storage_ptr__ + 9 + 8) = iVar3 + -1;
    }
  }
  else {
    *(undefined4 *)(__return_storage_ptr__ + 9 + 8) = 0;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 8 + *(int *)(__return_storage_ptr__ + 9 + 8) * 4);
  if (*(int *)(*(int *)(__return_storage_ptr__ + 3) + 0x172) == 0) {
    FUN_01011ec9(0x3f,(undefined **)__return_storage_ptr__);
    if (*(int *)(__return_storage_ptr__ + 7) != 0) {
      FUN_01009895(*(int *)(__return_storage_ptr__ + 7));
    }
    if (*(int *)(__return_storage_ptr__ + 9 + 8) == 0) {
      FUN_01011ec9(0x3e,(undefined **)__return_storage_ptr__);
    }
  }
  FUN_01013974(*(undefined4 **)(__return_storage_ptr__ + 2 + 6),iVar2,
               *(undefined4 *)
                (*(int *)(*(int *)(__return_storage_ptr__ + 3 + 8) + 4) + 8 +
                *(int *)(__return_storage_ptr__ + 9 + 8) * 4),
               *(int *)(iVar2 + 0x1d) - *(int *)(*(int *)(__return_storage_ptr__ + 3) + 0xea),
               *(int *)(iVar2 + 0x21) - *(int *)(*(int *)(__return_storage_ptr__ + 3) + 0xee));
  fVar4 = *(float *)(__return_storage_ptr__ + 9) * *(float *)(__return_storage_ptr__ + 7 + 8);
  fVar1 = *(float *)(__return_storage_ptr__ + 8 + 6);
  *(float *)(__return_storage_ptr__ + 7 + 8) = fVar4;
  if (fVar4 >= fVar1) {
    pauVar5 = (undefined1 (*) [10])
              FUN_010074b7(1.00000000 / fVar4,(int)__return_storage_ptr__,(int)FUN_01015f34);
    return pauVar5;
  }
  return (undefined1 (*) [10])
         CONCAT22(extraout_var,(ushort)(fVar4 < fVar1) << 8 | (ushort)(fVar4 == fVar1) << 0xe);
}



undefined4 __thiscall FUN_01016014(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x400) {
    if (*(int *)((int)this + 0x66) != 0) {
      FUN_01007659(*(int *)((int)this + 0x66));
      *(undefined4 *)((int)this + 0x66) = 0;
    }
    *(undefined4 *)((int)this + 0x62) = 0;
    iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8);
    FUN_01013974(*(undefined4 **)((int)this + 0x1a),iVar1,
                 *(undefined4 *)(*(int *)(*(int *)((int)this + 0x26) + 4) + 8),
                 *(int *)(iVar1 + 0x1d) - *(int *)(*(int *)((int)this + 0x1e) + 0xea),
                 *(int *)(iVar1 + 0x21) - *(int *)(*(int *)((int)this + 0x1e) + 0xee));
  }
  return 0;
}



undefined4 __thiscall FUN_01016078(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x6e);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_01016096(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 2) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x6e) = param_2;
  }
  return;
}



void FUN_010160b3(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x4e) = 0;
  *(undefined *)(param_2 + 5) = 1;
  FUN_010139b6(*(int *)(param_2 + 0x1a),*(int *)(*(int *)(*(int *)(param_2 + 0x22) + 4) + 8));
  if ((param_1 != 0) && (*(int *)(param_2 + 0x46) != 0)) {
    FUN_01009895(*(int *)(param_2 + 0x46));
  }
  return;
}



undefined4 __thiscall FUN_010160f4(void *this,int param_1,float param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == 0x31) {
    *(undefined *)((int)this + 5) = 0;
    FUN_010139b6(*(int *)((int)this + 0x1a),0);
  }
  else {
    if (param_1 == 0x32) {
      iVar2 = FUN_010074b7(*(undefined4 *)((int)this + 0x52),(int)this,(int)FUN_010160b3);
      *(int *)((int)this + 0x4e) = iVar2;
    }
    else {
      if (param_1 == 0x3fc) {
        *(undefined4 *)((int)this + *(int *)(*(int *)((int)this + 0x1e) + 0xda) * 4 + 0x62) =
             *(undefined4 *)((int)this + 6);
        floor((double)param_2);
        iVar2 = _ftol();
        iVar2 = *(int *)((int)this + iVar2 * 4 + 0x62);
        *(int *)((int)this + 6) = iVar2;
        FUN_010160f4(this,0x32 - (uint)(iVar2 != 0),0.00000000);
      }
      else {
        if (param_1 == 0x400) {
          *(undefined4 *)((int)this + 6) = 0;
          iVar2 = 0;
          if (0 < *(int *)(*(int *)((int)this + 0x1e) + 0xd6)) {
            puVar1 = (undefined4 *)((int)this + 0x62);
            do {
              *puVar1 = 0;
              iVar2 = iVar2 + 1;
              puVar1 = puVar1 + 1;
            } while (iVar2 < *(int *)(*(int *)((int)this + 0x1e) + 0xd6));
          }
          if (*(int *)((int)this + 0x4e) != 0) {
            FUN_01007659(*(int *)((int)this + 0x4e));
          }
          FUN_010160b3(0,(int)this);
        }
      }
    }
  }
  return 0;
}



undefined4 __thiscall FUN_010161d0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x56);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_010161ee(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 3) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x56) = param_2;
  }
  return;
}



void FUN_0101620b(undefined4 param_1,undefined **param_2)

{
  (**(code **)*param_2)(0x32,0);
  *(undefined4 *)((int)param_2 + 0x52) = 0;
  return;
}



undefined4 __thiscall FUN_01016230(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (0x30 < param_1) {
    if (0x32 < param_1) {
      if (param_1 != 0x400) {
        return 0;
      }
      if (*(int *)((int)this + 0x52) != 0) {
        FUN_01007659(*(int *)((int)this + 0x52));
      }
      *(undefined4 *)((int)this + 0x52) = 0;
    }
    if ((param_1 == 0x32) || (param_1 == 0x400)) {
      *(undefined *)((int)this + 5) = 1;
    }
    else {
      *(undefined *)((int)this + 5) = 0;
    }
    if (*(int *)((int)this + 0x22) != 0) {
      iVar2 = (3 - (int)*(char *)((int)this + 5)) * 4;
      iVar1 = *(int *)(iVar2 + *(int *)(*(int *)((int)this + 0x22) + 4));
      FUN_01013974(*(undefined4 **)((int)this + 0x1a),iVar1,
                   *(undefined4 *)(*(int *)(*(int *)((int)this + 0x26) + 4) + iVar2),
                   *(int *)(iVar1 + 0x1d) - *(int *)(*(int *)((int)this + 0x1e) + 0xea),
                   *(int *)(iVar1 + 0x21) - *(int *)(*(int *)((int)this + 0x1e) + 0xee));
    }
  }
  return 0;
}



undefined4 __thiscall FUN_010162c4(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 1) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x5e);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_010162e2(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 1) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x5e) = param_2;
  }
  return;
}



void FUN_010162ff(undefined4 param_1,undefined **param_2)

{
  *(undefined4 *)((int)param_2 + 0x56) = 0;
  FUN_01011ec9(0x3c,param_2);
  return;
}



undefined4 __thiscall FUN_0101631c(void *this,int param_1,float param_2)

{
  int iVar1;
  
  if (param_1 == 0x33) {
LAB_01016345:
    if (*(int *)((int)this + 0x56) != 0) {
      FUN_01007659(*(int *)((int)this + 0x56));
      *(undefined4 *)((int)this + 0x56) = 0;
    }
    *(undefined4 *)((int)this + 6) = 0;
    *(undefined *)((int)this + 5) = 0;
    FUN_010139b6(*(int *)((int)this + 0x1a),0);
    if (param_1 == 0x33) {
      FUN_01009895(*(int *)((int)this + 0x5e));
    }
  }
  else {
    if (param_1 == 0x34) {
      *(undefined *)((int)this + 5) = 1;
      FUN_01009895(*(int *)((int)this + 0x5a));
      FUN_010139b6(*(int *)((int)this + 0x1a),*(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8)
                  );
    }
    else {
      if (param_1 != 0x3b) {
        if (((param_1 != 0x3f3) && (param_1 != 0x3fc)) && (param_1 != 0x400)) {
          return 0;
        }
        goto LAB_01016345;
      }
    }
    if (*(int *)((int)this + 0x56) != 0) {
      FUN_01007659(*(int *)((int)this + 0x56));
    }
    if ((ushort)((ushort)(param_2 < 0.00000000) << 8 | (ushort)(param_2 == 0.00000000) << 0xe) != 0)
    {
      param_2 = 0.00000000;
    }
    iVar1 = FUN_010074b7(param_2,(int)this,(int)FUN_010162ff);
    *(int *)((int)this + 0x56) = iVar1;
  }
  return 0;
}



undefined4 __thiscall FUN_010163db(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3fc) {
    return 0;
  }
  if (param_1 == 0x35) {
    *(undefined *)((int)this + 5) = 0;
    FUN_010139b6(*(int *)((int)this + 0x1a),0);
    iVar1 = *(int *)((int)this + 0x52);
  }
  else {
    if ((param_1 != 0x36) && (param_1 != 0x400)) goto LAB_01016437;
    *(undefined *)((int)this + 5) = 1;
    FUN_010139b6(*(int *)((int)this + 0x1a),*(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8));
    if (param_1 != 0x36) goto LAB_01016437;
    iVar1 = *(int *)((int)this + 0x4e);
  }
  FUN_01009895(iVar1);
LAB_01016437:
  FUN_01011ec9(param_1,(undefined **)this);
  return 0;
}



void FUN_0101644b(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 5) = 1;
  return;
}



undefined4 __thiscall FUN_01016460(void *this,int param_1)

{
  if (param_1 == 0x400) {
    *(undefined *)((int)this + 5) = 1;
    *(undefined *)((int)this + 0x4e) = 0;
    if (*(int *)((int)this + 0x22) != 0) {
      FUN_010139b6(*(int *)((int)this + 0x1a),*(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8)
                  );
    }
  }
  return 0;
}



undefined4 __thiscall FUN_01016496(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x4f);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_010164b4(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 2) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x4f) = param_2;
  }
  return;
}



void FUN_010164d1(undefined4 param_1,int param_2)

{
  FUN_010139b6(*(int *)(param_2 + 0x1a),0);
  *(undefined4 *)(param_2 + 0x5b) = 0;
  return;
}



void __thiscall
FUN_010164f2(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,float param_4,
            undefined4 param_5)

{
  int iVar1;
  
  *(undefined4 *)((int)param_1 + 0x2a) = *param_2;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2[1];
  *(float *)((int)param_1 + 0x46) = *(float *)((int)param_1 + 0x46) - param_4;
  FUN_0101590f(param_1,param_5);
  if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
    if (*(char *)((int)this + 0x4e) == '\0') {
      FUN_01009895(*(int *)((int)this + 0x46));
      FUN_01011ec9(0x3f,(undefined **)this);
      *(bool *)((int)this + 0x4e) = *(char *)((int)this + 0x4e) == '\0';
      if (*(int *)((int)this + 0x22) != 0) {
        FUN_010139b6(*(int *)((int)this + 0x1a),
                     *(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 8));
      }
    }
    else {
      FUN_010074b7(0x3dcccccd,(int)this,(int)FUN_0101644b);
      *(undefined *)((int)this + 5) = 0;
      *(bool *)((int)this + 0x4e) = *(char *)((int)this + 0x4e) == '\0';
      if (*(int *)((int)this + 0x5b) == 0) {
        iVar1 = FUN_010074b7(*(undefined4 *)((int)this + 0x57),(int)this,(int)FUN_010164d1);
        *(int *)((int)this + 0x5b) = iVar1;
      }
    }
  }
  return;
}



undefined4 __thiscall FUN_010165a7(void *this,int param_1)

{
  if (param_1 == 0x400) {
    *(undefined *)((int)this + 5) = 1;
    *(undefined *)((int)this + 0x4e) = 0;
    if (*(int *)((int)this + 0x5b) != 0) {
      FUN_01007659(*(int *)((int)this + 0x5b));
    }
    *(undefined4 *)((int)this + 0x5b) = 0;
    if (*(int *)((int)this + 0x22) != 0) {
      FUN_010139b6(*(int *)((int)this + 0x1a),0);
    }
  }
  return 0;
}



void __thiscall
FUN_010165ed(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,float param_4,
            undefined4 param_5)

{
  *(undefined4 *)((int)param_1 + 0x2a) = *param_2;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2[1];
  *(float *)((int)param_1 + 0x46) = *(float *)((int)param_1 + 0x46) - param_4;
  FUN_0101590f(param_1,param_5);
  if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
    FUN_01009895(*(int *)((int)this + 0x46));
    FUN_01011ec9(0x3f,(undefined **)this);
  }
  return;
}



void FUN_0101663f(undefined4 param_1,undefined **param_2)

{
  int iVar1;
  
  if (*(int *)((int)param_2 + 0x5a) == 0) {
    if (*(int *)((int)param_2 + 0x22) != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)((int)param_2 + 0x22) + 4) + 8);
      FUN_01013974(*(undefined4 **)((int)param_2 + 0x1a),iVar1,
                   *(undefined4 *)(*(int *)(*(int *)((int)param_2 + 0x26) + 4) + 8),
                   *(int *)(iVar1 + 0x1d) - *(int *)(*(int *)((int)param_2 + 0x1e) + 0xea),
                   *(int *)(iVar1 + 0x21) - *(int *)(*(int *)((int)param_2 + 0x1e) + 0xee));
    }
    *(undefined4 *)((int)param_2 + 0x56) = 0;
    FUN_01011ec9(0x3c,param_2);
  }
  else {
    *(undefined4 *)((int)param_2 + 0x42) = 0;
    iVar1 = FUN_010074b7(*(undefined4 *)((int)param_2 + 0x52),(int)param_2,(int)FUN_0101663f);
    *(int *)((int)param_2 + 0x56) = iVar1;
    FUN_01009895(*(int *)((int)param_2 + 0x4a));
    if (*(int *)((int)param_2 + 0x22) != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)((int)param_2 + 0x22) + 4) + 0xc);
      FUN_01013974(*(undefined4 **)((int)param_2 + 0x1a),iVar1,
                   *(undefined4 *)(*(int *)(*(int *)((int)param_2 + 0x26) + 4) + 0xc),
                   *(int *)(iVar1 + 0x1d) - *(int *)(*(int *)((int)param_2 + 0x1e) + 0xea),
                   *(int *)(iVar1 + 0x21) - *(int *)(*(int *)((int)param_2 + 0x1e) + 0xee));
    }
  }
  return;
}



undefined4 __thiscall FUN_010166f6(void *this,int param_1)

{
  if (((param_1 == 0x3f3) || (param_1 == 0x400)) && (*(int *)((int)this + 0x56) != 0)) {
    FUN_01007659(*(int *)((int)this + 0x56));
    if (*(int *)((int)this + 0x22) != 0) {
      FUN_010139b6(*(int *)((int)this + 0x1a),0);
    }
    *(undefined4 *)((int)this + 0x56) = 0;
    *(undefined4 *)((int)this + 0x5a) = 0;
    *(undefined4 *)((int)this + 0x42) = 0x4e6e6b28;
  }
  return 0;
}



void __thiscall FUN_01016745(void *this,int param_1)

{
  if (*(int *)((int)this + 0x4e) == 0) {
    *(int *)((int)this + 0x66) = param_1;
    *(undefined4 *)((int)this + 0x42) = 0x4e6e6b28;
    *(undefined4 *)((int)this + 0x4e) = 1;
    *(void **)(param_1 + 0x6a) = this;
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)this + 0x6e);
    *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)((int)this + 0x72);
    *(undefined4 *)((int)this + 0x7e) = *(undefined4 *)(param_1 + 0x32);
    *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)((int)this + 0x62);
    if (*(int *)(*(int *)((int)this + 0x1e) + 0x172) == 0) {
      FUN_01009895(*(int *)((int)this + 0x46));
      FUN_01011ec9(0x3f,(undefined **)this);
    }
    else {
      (***(code ***)this)(0x37,0x3dcccccd);
    }
  }
  return;
}



void FUN_010167be(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x52) == 0) {
    *(undefined *)(param_2 + 5) = 1;
  }
  *(undefined4 *)(param_2 + 0x56) = 0;
  return;
}



void FUN_010167dd(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x4e) != 0) {
    *(undefined4 *)(param_2 + 0x4e) = 0;
    iVar1 = FUN_010074b7(*(undefined4 *)(param_2 + 0x5e),param_2,(int)FUN_010167be);
    *(int *)(param_2 + 0x56) = iVar1;
    iVar1 = *(int *)(param_2 + 0x66);
    if (iVar1 != 0) {
      *(undefined4 *)(param_2 + 0x66) = 0;
      *(undefined4 *)(iVar1 + 0x32) = *(undefined4 *)(param_2 + 0x7e);
      FUN_01015935(iVar1,(undefined4 *)(param_2 + 0x82),*(float *)(param_2 + 0x8e),
                   *(float *)(param_2 + 0x92),*(float *)(param_2 + 0x96));
      *(undefined *)(param_2 + 5) = 0;
      FUN_01009895(*(int *)(param_2 + 0x4a));
    }
  }
  return;
}



uint __thiscall FUN_0101685b(void *this,int param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  float local_10;
  float local_c;
  
  if (*(int *)((int)this + 0x4e) == 0) {
    local_10 = *(float *)((int)this + 0x6e) - *(float *)(param_1 + 0x2a);
    local_c = *(float *)((int)this + 0x72) - *(float *)(param_1 + 0x2e);
    fVar1 = local_10 * local_10 + local_c * local_c;
    bVar3 = (ushort)((ushort)(fVar1 < *(float *)((int)this + 0x7a)) << 8 |
                    (ushort)(fVar1 == *(float *)((int)this + 0x7a)) << 0xe) != 0;
    if (bVar3) {
      FUN_01008ae9(&local_10);
      *param_2 = local_10 * *(float *)((int)this + 0x6a) +
                 -(*(float *)(param_1 + 0x36) * *(float *)(param_1 + 0x42));
      param_2[1] = local_c * *(float *)((int)this + 0x6a) +
                   -(*(float *)(param_1 + 0x3a) * *(float *)(param_1 + 0x42));
    }
    uVar2 = (uint)bVar3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 __thiscall FUN_010168e3(int iParm1,int param_1,undefined4 param_2)

{
  int iVar1;
  bool in_PF;
  
  if (param_1 == 0x37) {
    if (*(int *)(iParm1 + 0x4e) != 0) {
      if (!in_PF) {
        param_2 = *(undefined4 *)(iParm1 + 0x5a);
      }
      iVar1 = FUN_010074b7(param_2,iParm1,(int)FUN_010167dd);
      *(int *)(iParm1 + 0x56) = iVar1;
    }
  }
  else {
    if (param_1 != 0x3f3) {
      if (param_1 != 0x400) {
        return 0;
      }
      if (*(int *)(iParm1 + 0x4e) != 0) {
        if (*(int *)(iParm1 + 0x56) != 0) {
          FUN_01007659(*(int *)(iParm1 + 0x56));
        }
        FUN_010167dd(0,iParm1);
      }
    }
    if (*(int *)(iParm1 + 0x52) != 0) {
      *(undefined *)(iParm1 + 5) = 0;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_01016963(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 5) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0xa6);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_01016984(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 5) {
    *(undefined4 *)((int)this + param_1 * 4 + 0xa6) = param_2;
  }
  return;
}



void FUN_010169a4(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x56) = 0;
  *(undefined4 *)(param_2 + 0x52) = 1;
  return;
}



uint __thiscall FUN_010169c0(undefined **ppuParm1,int param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  bool in_PF;
  bool bVar4;
  float local_10;
  float local_c;
  
  if (*(int *)((int)ppuParm1 + 0x4e) == 0) {
    local_10 = *(float *)((int)ppuParm1 + 0x72) - *(float *)(param_1 + 0x2a);
    local_c = *(float *)((int)ppuParm1 + 0x76) - *(float *)(param_1 + 0x2e);
    fVar2 = local_10 * local_10 + local_c * local_c;
    bVar4 = (ushort)((ushort)(fVar2 < *(float *)((int)ppuParm1 + 0x7e)) << 8 |
                    (ushort)(fVar2 == *(float *)((int)ppuParm1 + 0x7e)) << 0xe) != 0;
    if (bVar4) {
      FUN_01008ae9(&local_10);
      *param_2 = local_10 * *(float *)((int)ppuParm1 + 0x6e) +
                 -(*(float *)(param_1 + 0x36) * *(float *)(param_1 + 0x42));
      param_2[1] = local_c * *(float *)((int)ppuParm1 + 0x6e) +
                   -(*(float *)(param_1 + 0x3a) * *(float *)(param_1 + 0x42));
    }
    uVar3 = (uint)bVar4;
  }
  else {
    if (*(int *)((int)ppuParm1 + 0x52) != 0) {
      fVar2 = *(float *)(param_1 + 0x3e) -
              *(float *)(*(int *)((int)ppuParm1 + 0x1e) + 0x10e) * *(float *)(param_1 + 0x4a) *
              *(float *)((int)ppuParm1 + 0x62);
      *(float *)(param_1 + 0x3e) = fVar2;
      *(float *)(param_1 + 0x32) = fVar2 + *(float *)(param_1 + 0x32);
      if (!in_PF) {
        *(undefined4 *)((int)ppuParm1 + 0x4e) = 0;
        *(undefined4 *)((int)ppuParm1 + 0x52) = 0;
        *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)((int)ppuParm1 + 0x66);
        uVar1 = *(undefined4 *)((int)ppuParm1 + 0x6a);
        *(undefined4 *)(param_1 + 0x3e) = 0;
        *(undefined4 *)(param_1 + 0x6e) = uVar1;
        *(undefined4 *)(param_1 + 0x3a) = 0;
        *(undefined4 *)(param_1 + 0x6a) = 0;
        *(undefined4 *)(param_1 + 0x36) = 0;
        *(undefined4 *)(param_1 + 0x42) = 0;
        FUN_01009895(*(int *)((int)ppuParm1 + 0x46));
        FUN_01011ec9(0x3a,ppuParm1);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 __thiscall FUN_01016ab1(void *this,int param_1)

{
  if ((param_1 == 0x400) && (*(int *)((int)this + 0x4e) != 0)) {
    if (*(int *)((int)this + 0x56) != 0) {
      FUN_01007659(*(int *)((int)this + 0x56));
    }
    *(undefined4 *)((int)this + 0x56) = 0;
    *(undefined4 *)((int)this + 0x52) = 1;
  }
  return 0;
}



undefined4 __thiscall FUN_01016aec(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x4e);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_01016b0a(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 4) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x4e) = param_2;
  }
  return;
}



float ** FUN_01016b27(int param_1,float **param_2,float **param_3,float **param_4,float **param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined2 extraout_var;
  float *pfVar3;
  bool in_PF;
  float10 fVar4;
  float10 fVar5;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_8;
  
  local_14 = (float)*param_3;
  local_10 = ((float *)param_3)[1];
  local_20 = ((float *)param_3)[2];
  local_1c = ((float *)param_3)[3];
  local_8 = 1000000000.00000000;
  if (0 < (int)param_2) {
    pfVar3 = (float *)(param_1 + 0x14);
    param_3 = param_2;
    do {
      pfVar1 = pfVar3 + -2;
      fVar4 = FUN_0101cbf5(&local_14,pfVar1);
      fVar5 = FUN_0101cbf5(&local_20,pfVar3);
      if (!in_PF) {
        local_8 = (float)(fVar5 + (float10)(float)fVar4);
        *param_4 = pfVar1;
        *param_5 = pfVar3;
      }
      pfVar2 = pfVar3 + 2;
      fVar4 = FUN_0101cbf5(&local_20,pfVar2);
      fVar5 = FUN_0101cbf5(&local_14,pfVar3);
      if (!in_PF) {
        local_8 = (float)(fVar5 + (float10)(float)fVar4);
        *param_4 = pfVar3;
        *param_5 = pfVar2;
      }
      fVar4 = FUN_0101cbf5(&local_14,pfVar2);
      fVar5 = FUN_0101cbf5(&local_20,pfVar1);
      fVar5 = fVar5 + (float10)(float)fVar4;
      param_2 = (float **)
                CONCAT22(extraout_var,
                         (ushort)(fVar5 < (float10)local_8) << 8 |
                         (ushort)(fVar5 == (float10)local_8) << 0xe);
      if (!in_PF) {
        local_8 = (float)fVar5;
        *param_4 = pfVar2;
        *param_5 = pfVar1;
        param_2 = param_5;
      }
      pfVar3 = pfVar3 + 0xd;
      param_3 = (float **)((int)param_3 + -1);
    } while (param_3 != (float **)0x0);
  }
  return param_2;
}



undefined1 (*) [10] __thiscall
FUN_01016c24(void *this,undefined1 (*__return_storage_ptr__) [10],void *param_1,undefined4 *param_2,
            float param_3,float param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [10];
  
  FUN_0101590f(__return_storage_ptr__,param_4);
  fVar1 = *(float *)(__return_storage_ptr__ + 7);
  *(undefined4 *)(__return_storage_ptr__ + 4 + 2) = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)((int)param_1 + 4);
  *(float *)(__return_storage_ptr__ + 7) = fVar1 - param_3;
  *(undefined4 *)(__return_storage_ptr__ + 4 + 6) = uVar5;
  puVar6 = *(undefined4 **)((int)param_4 + 0xd);
  if (puVar6 == (undefined4 *)0x0) {
    if (param_4 == *(float *)((int)this + 0x86)) {
      pauVar7 = *(undefined1 (**) [10])((int)this + 0x1e);
      if (*(int *)(pauVar7 + 0x25) == 0) {
        FUN_01009895(*(int *)((int)this + 0x46));
        pauVar7 = (undefined1 (*) [10])FUN_01011ec9(0x3f,(undefined **)this);
      }
    }
    else {
      *(undefined4 *)(__return_storage_ptr__ + 0xf) = 0;
      if (param_4 == *(float *)((int)this + 0x7e)) {
        pauVar7 = *(undefined1 (**) [10])((int)this + 0x8a);
        *(undefined1 (**) [10])(__return_storage_ptr__ + 0xb) = pauVar7;
        if (*(int *)((int)this + 0x6e) == 0) {
          return pauVar7;
        }
        fVar1 = *(float *)(__return_storage_ptr__ + 0xf + 4) + *(float *)((int)this + 0x92);
      }
      else {
        pauVar7 = *(undefined1 (**) [10])((int)this + 0x8e);
        *(undefined1 (**) [10])(__return_storage_ptr__ + 0xb) = pauVar7;
        if (*(int *)((int)this + 0x6e) == 0) {
          return pauVar7;
        }
        fVar1 = *(float *)(__return_storage_ptr__ + 0xf + 4) + *(float *)((int)this + 0x96);
      }
      *(float *)(__return_storage_ptr__ + 5) = fVar1;
    }
  }
  else {
    *(undefined4 *)(__return_storage_ptr__ + 0xf) = 1;
    *(undefined4 *)(__return_storage_ptr__ + 0xd + 8) = *puVar6;
    fVar1 = *(float *)(__return_storage_ptr__ + 0xd + 8);
    fVar2 = *(float *)(__return_storage_ptr__ + 4 + 2);
    fVar3 = *(float *)(__return_storage_ptr__ + 4 + 6);
    *(undefined4 *)(__return_storage_ptr__ + 0xe + 2) = puVar6[1];
    fVar4 = *(float *)(__return_storage_ptr__ + 0xe + 2);
    *(undefined4 *)(__return_storage_ptr__ + 0xe + 6) = puVar6[2];
    *(undefined4 *)(__return_storage_ptr__ + 9 + 4) = puVar6[0xb];
    *(undefined4 *)(__return_storage_ptr__ + 9 + 8) = puVar6[0xc];
    *(float *)(__return_storage_ptr__ + 5) =
         fVar3 * fVar4 + fVar1 * fVar2 + *(float *)(__return_storage_ptr__ + 0xf + 4) +
         *(float *)(__return_storage_ptr__ + 0xe + 6);
    pauVar7 = *(undefined1 (**) [10])((int)this + 0x6a);
    *(undefined1 (**) [10])(__return_storage_ptr__ + 0xb) = pauVar7;
  }
  return pauVar7;
}



undefined4 __thiscall FUN_01016d2e(void *this,int param_1,float *param_2)

{
  *param_2 = *(float *)(param_1 + 0x5e) -
             *(float *)(param_1 + 0x36) * *(float *)(param_1 + 0x42) * *(float *)((int)this + 0x76);
  param_2[1] = *(float *)(param_1 + 0x62) -
               *(float *)(param_1 + 0x3a) * *(float *)(param_1 + 0x42) *
               *(float *)((int)this + 0x76);
  return 1;
}



void FUN_01016d62(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x6e) = 0;
  (**(code **)**(code ***)(param_2 + 0x1e))(0x3ed,DAT_01025634);
  return;
}



void FUN_01016d8d(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x62) != 0) {
    (**(code **)**(code ***)(param_2 + 0x1e))(0x3eb,DAT_01025634);
  }
  *(undefined4 *)(param_2 + 0x62) = 0;
  return;
}



void FUN_01016dc0(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x5e) != 0) {
    (**(code **)**(code ***)(param_2 + 0x1e))(0x3e9,DAT_01025634);
  }
  *(undefined4 *)(param_2 + 0x5e) = 0;
  return;
}



void FUN_01016df3(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  if (*(int *)(param_2 + 0x62) == 0) {
    if (*(int *)(param_2 + 0x6a) != 0) {
      FUN_01007659(*(int *)(param_2 + 0x6a));
      *(undefined4 *)(param_2 + 0x6a) = 0;
    }
    (**(code **)**(code ***)(param_2 + 0x1e))(0x3ea,DAT_01025634);
    fVar1 = *(float *)(param_2 + 0x56);
    fVar2 = *(float *)(param_2 + 0x5a);
    pcVar5 = FUN_01016d8d;
    *(undefined4 *)(param_2 + 0x62) = 1;
    iVar4 = param_2;
    iVar3 = rand();
    FUN_010074b7((fVar1 + fVar2) -
                 (*(float *)(param_2 + 0x5a) + *(float *)(param_2 + 0x5a)) *
                 (float)iVar3 * 0.00003052,iVar4,(int)pcVar5);
  }
  return;
}



void FUN_01016e70(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  if (*(int *)(param_2 + 0x5e) == 0) {
    if (*(int *)(param_2 + 0x66) != 0) {
      FUN_01007659(*(int *)(param_2 + 0x66));
      *(undefined4 *)(param_2 + 0x66) = 0;
    }
    (**(code **)**(code ***)(param_2 + 0x1e))(1000,DAT_01025634);
    fVar1 = *(float *)(param_2 + 0x56);
    fVar2 = *(float *)(param_2 + 0x5a);
    pcVar5 = FUN_01016dc0;
    *(undefined4 *)(param_2 + 0x5e) = 1;
    iVar4 = param_2;
    iVar3 = rand();
    FUN_010074b7((fVar1 + fVar2) -
                 (*(float *)(param_2 + 0x5a) + *(float *)(param_2 + 0x5a)) *
                 (float)iVar3 * 0.00003052,iVar4,(int)pcVar5);
  }
  return;
}



void FUN_01016eed(undefined4 param_1,int param_2)

{
  FUN_010153ae(1);
  (**(code **)**(code ***)(param_2 + 0x1e))
            (0x3f6,(float)*(int *)((int)*(code ***)(param_2 + 0x1e) + 0xd6));
  *(undefined4 *)(param_2 + 0x72) = 0;
  return;
}



void __thiscall
FUN_01016f21(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,float param_4,
            int param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  code *local_1c;
  
  iVar4 = *(int *)(param_5 + 0xd);
  FUN_0101590f(param_1,param_5);
  *(undefined4 *)((int)param_1 + 0x2a) = *param_2;
  uVar3 = param_2[1];
  *(float *)((int)param_1 + 0x46) = *(float *)((int)param_1 + 0x46) - param_4;
  *(undefined4 *)((int)param_1 + 0x2e) = uVar3;
  if (iVar4 == 0x578) {
    if ((*(int *)((int)this + 0x66) == 0) && (*(int *)((int)this + 0x5e) == 0)) {
      fVar1 = *(float *)((int)this + 0x4e);
      local_1c = FUN_01016e70;
      fVar2 = *(float *)((int)this + 0x52);
      pvVar5 = this;
      iVar4 = rand();
      iVar4 = FUN_010074b7((fVar1 + fVar2) -
                           (*(float *)((int)this + 0x52) + *(float *)((int)this + 0x52)) *
                           (float)iVar4 * 0.00003052,(int)pvVar5,(int)local_1c);
      *(int *)((int)this + 0x66) = iVar4;
    }
  }
  else {
    if (iVar4 == 0x579) {
      FUN_01016e70(0,(int)this);
    }
    else {
      if (iVar4 == 0x57a) {
        if ((*(int *)((int)this + 0x6a) == 0) && (*(int *)((int)this + 0x62) == 0)) {
          fVar1 = *(float *)((int)this + 0x4e);
          local_1c = FUN_01016df3;
          fVar2 = *(float *)((int)this + 0x52);
          pvVar5 = this;
          iVar4 = rand();
          iVar4 = FUN_010074b7((fVar1 + fVar2) -
                               (*(float *)((int)this + 0x52) + *(float *)((int)this + 0x52)) *
                               (float)iVar4 * 0.00003052,(int)pvVar5,(int)local_1c);
          *(int *)((int)this + 0x6a) = iVar4;
        }
      }
      else {
        if (iVar4 == 0x57b) {
          FUN_01016df3(0,(int)this);
        }
        else {
          if ((iVar4 == 0x57c) && (*(int *)((int)this + 0x6e) == 0)) {
            (**(code **)**(code ***)((int)this + 0x1e))(0x3ec,*(undefined4 *)((int)param_1 + 0x4e));
            local_1c = FUN_01016d62;
            pvVar5 = this;
            iVar4 = rand();
            iVar4 = FUN_010074b7((float)iVar4 * 0.00003052 + 2.00000000,(int)pvVar5,(int)local_1c);
            *(int *)((int)this + 0x6e) = iVar4;
          }
        }
      }
    }
  }
  return;
}


