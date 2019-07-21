#include "pinball.h"


void __fastcall FUN_01009fd1(undefined4 *param_1)

{
  FUN_01013c6f(*(int *)((int)param_1 + 0x2e));
  FUN_01018fbc(param_1);
  return;
}



void __fastcall FUN_01009feb(int param_1)

{
  if (*(int *)(param_1 + 0x46) != 0) {
    FUN_01007659(*(int *)(param_1 + 0x46));
  }
  *(undefined4 *)(param_1 + 0x46) = 0;
  if (*(int *)(param_1 + 0x42) != 0) {
    FUN_01007659(*(int *)(param_1 + 0x42));
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_1 + 0x36);
  return;
}



void FUN_0100a027(undefined4 param_1,undefined **param_2)

{
  *(undefined4 *)((int)param_2 + 0x46) = 0;
  (**(code **)*param_2)(*(undefined4 *)((int)param_2 + 0x3a),*(undefined4 *)((int)param_2 + 0x32));
  return;
}



int __thiscall FUN_0100a04a(int iParm1,float param_1)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = *(int *)(iParm1 + 0x46);
  iVar1._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
  if (iVar1 != 0) {
    iVar1 = FUN_01007659(iVar1);
    iVar1._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
  }
  *(undefined4 *)(iParm1 + 0x46) = 0;
  if ((ushort)((ushort)(param_1 < 0.00000000) << 8 | (ushort)(param_1 == 0.00000000) << 0xe) == 0) {
    *(float *)(iParm1 + 0x32) = param_1;
  }
  else {
    if (in_PF) {
      *(undefined4 *)(iParm1 + 0x3a) = 0;
      *(undefined4 *)(iParm1 + 0x3e) = 0;
      return CONCAT22(iVar1._2_2_,
                      (ushort)(param_1 < 0.00000000) << 8 | (ushort)(param_1 == 0.00000000) << 0xe);
    }
    *(undefined4 *)(iParm1 + 0x32) = *(undefined4 *)(iParm1 + 0x36);
  }
  iVar1 = FUN_010074b7(*(undefined4 *)(iParm1 + 0x32),iParm1,(int)FUN_0100a027);
  *(int *)(iParm1 + 0x46) = iVar1;
  return iVar1;
}



int __fastcall FUN_0100a0b4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2e) + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)(*(int *)(param_1 + 0x2e) + 8);
    do {
      if (*(int *)(*piVar3 + 0x4e) == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return -1;
}



int __fastcall FUN_0100a0de(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2e) + 4) + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x2e) + 8 + iVar1 * 4);
    do {
      if (*(int *)(*piVar2 + 0x4e) != 0) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar1);
  }
  return -1;
}



void __fastcall FUN_0100a104(int param_1)

{
  code **ppcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x2e) + 4);
  if (-1 < iVar2 + -1) {
    iVar3 = (iVar2 + -1) * 4 + 8;
    do {
      ppcVar1 = *(code ***)(iVar3 + *(int *)(param_1 + 0x2e));
      if (*(int *)((int)ppcVar1 + 0x4e) == 0) {
        uVar4 = 8;
      }
      else {
        uVar4 = 9;
      }
      (**(code **)*ppcVar1)(uVar4,0);
      iVar3 = iVar3 + -4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



void FUN_0100a149(undefined4 param_1,undefined **param_2)

{
  *(undefined4 *)((int)param_2 + 0x42) = 0;
  FUN_01011ec9(0x3d,param_2);
  return;
}



int __thiscall FUN_0100a166(undefined **ppuParm1,int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  code **ppcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool in_PF;
  undefined8 local_2c;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar6 = param_1;
  if (0x3f1 < param_1) {
    if (param_1 == 0x3f3) {
      return 0;
    }
    if (param_1 == 0x3fc) {
      ppuVar3 = ppuParm1 + *(int *)(*(int *)((int)ppuParm1 + 0x1e) + 0xda) * 4;
      *(undefined4 *)((int)ppuVar3 + 0x4a) = *(undefined4 *)((int)ppuParm1 + 6);
      *(undefined4 *)((int)ppuVar3 + 0x4e) = *(undefined4 *)((int)ppuParm1 + 0x3a);
      *(undefined4 *)((int)ppuVar3 + 0x52) = *(undefined4 *)((int)ppuParm1 + 0x32);
      (**(code **)(*ppuParm1 + 0x14))();
      floor((double)(float)param_2);
      iVar6 = _ftol();
      ppuVar3 = ppuParm1 + iVar6 * 4;
      *(undefined4 *)((int)ppuParm1 + 6) = *(undefined4 *)((int)ppuVar3 + 0x4a);
      *(undefined4 *)((int)ppuParm1 + 0x3a) = *(undefined4 *)((int)ppuVar3 + 0x4e);
      *(undefined4 *)((int)ppuParm1 + 0x32) = *(undefined4 *)((int)ppuVar3 + 0x52);
      if (*(int *)((int)ppuParm1 + 6) == 0) {
        return 0;
      }
      FUN_0100a027(0,ppuParm1);
      return 0;
    }
    if (param_1 == 0x3fe) {
      return 0;
    }
    if (param_1 == 0x400) {
      (**(code **)(*ppuParm1 + 0x14))();
      iVar6 = 0;
      if (*(int *)(*(int *)((int)ppuParm1 + 0x1e) + 0xd6) < 1) {
        return 0;
      }
      puVar2 = (undefined4 *)((int)ppuParm1 + 0x4e);
      do {
        puVar2[-1] = *(undefined4 *)((int)ppuParm1 + 6);
        *puVar2 = *(undefined4 *)((int)ppuParm1 + 0x3a);
        puVar2[1] = *(undefined4 *)((int)ppuParm1 + 0x32);
        iVar6 = iVar6 + 1;
        puVar2 = puVar2 + 4;
      } while (iVar6 < *(int *)(*(int *)((int)ppuParm1 + 0x1e) + 0xd6));
      return 0;
    }
switchD_0100a19a_caseD_17:
    param_1 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
    if (param_1 + -1 < 0) {
      return 0;
    }
    iVar8 = (param_1 + -1) * 4 + 8;
    do {
      (**(code **)**(code ***)(iVar8 + *(int *)((int)ppuParm1 + 0x2e)))(iVar6,param_2);
      iVar8 = iVar8 + -4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    return 0;
  }
  if (0x3ef < param_1) {
    return 0;
  }
  switch(param_1) {
  case 0x18:
    iVar6 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
    iVar8 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4 + iVar6 * 4);
    if (*(int *)(iVar8 + 0x52) != 0) {
      return 0;
    }
    if (*(int *)(iVar8 + 0x5a) != 0) {
      return 0;
    }
    if (*(int *)(iVar8 + 0x56) != 0) {
      return 0;
    }
    if (*(int *)((int)ppuParm1 + 0x3a) != 0) {
      FUN_0100a166(0x22,0);
    }
    *(undefined4 *)((int)ppuParm1 + 0x3e) = 1;
    *(int *)((int)ppuParm1 + 0x3a) = param_1;
    param_1 = *(int *)(iVar8 + 0x4e);
    local_c = *(undefined4 *)(iVar8 + 6);
    while (iVar6 = iVar6 + -1, 0 < iVar6) {
      ppcVar4 = *(code ***)(iVar6 * 4 + 8 + *(int *)((int)ppuParm1 + 0x2e));
      iVar8 = *(int *)(iVar6 * 4 + 4 + *(int *)((int)ppuParm1 + 0x2e));
      (**(code **)*ppcVar4)((uint)(*(int *)(iVar8 + 0x4e) != 0),0);
      *(undefined4 *)((int)ppcVar4 + 6) = *(undefined4 *)(iVar8 + 6);
    }
    ppcVar4 = *(code ***)(*(int *)((int)ppuParm1 + 0x2e) + 8);
    goto LAB_0100a27c;
  case 0x19:
    local_10 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
    iVar8 = local_10 * 4;
    iVar6 = *(int *)(iVar8 + 4 + *(int *)((int)ppuParm1 + 0x2e));
    if (*(int *)(iVar6 + 0x52) != 0) {
      return 0;
    }
    if (*(int *)(iVar6 + 0x5a) != 0) {
      return 0;
    }
    if (*(int *)(iVar6 + 0x56) != 0) {
      return 0;
    }
    if (*(int *)((int)ppuParm1 + 0x3a) != 0) {
      FUN_0100a166(0x22,0);
    }
    iVar6 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 8);
    *(undefined4 *)((int)ppuParm1 + 0x3e) = 1;
    *(int *)((int)ppuParm1 + 0x3a) = param_1;
    param_1 = *(int *)(iVar6 + 0x4e);
    local_c = *(undefined4 *)(iVar6 + 6);
    local_10 = local_10 + -1;
    if (0 < local_10) {
      local_8 = 0xc;
      do {
        ppcVar4 = *(code ***)(local_8 + -4 + *(int *)((int)ppuParm1 + 0x2e));
        iVar6 = *(int *)(local_8 + *(int *)((int)ppuParm1 + 0x2e));
        (**(code **)*ppcVar4)((uint)(*(int *)(iVar6 + 0x4e) != 0),0);
        local_8 = local_8 + 4;
        local_10 = local_10 + -1;
        *(undefined4 *)((int)ppcVar4 + 6) = *(undefined4 *)(iVar6 + 6);
      } while (local_10 != 0);
    }
    ppcVar4 = *(code ***)(iVar8 + 4 + *(int *)((int)ppuParm1 + 0x2e));
LAB_0100a27c:
    (**(code **)*ppcVar4)((uint)(param_1 != 0),0);
    *(undefined4 *)((int)ppcVar4 + 6) = local_c;
    goto LAB_0100a297;
  case 0x1a:
    if ((*(int *)((int)ppuParm1 + 0x3e) != 0) || (*(int *)((int)ppuParm1 + 0x3a) == 0)) {
      FUN_0100a104((int)ppuParm1);
    }
    *(int *)((int)ppuParm1 + 0x3a) = param_1;
    *(undefined4 *)((int)ppuParm1 + 0x3e) = 0;
    iVar6 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
    param_1 = *(int *)(*(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4 + iVar6 * 4) + 0x5a);
    while( true ) {
      iVar6 = iVar6 + -1;
      iVar8 = *(int *)((int)ppuParm1 + 0x2e);
      if (iVar6 < 1) break;
      (**(code **)**(code ***)(iVar8 + 8 + iVar6 * 4))
                ((uint)(*(int *)(*(int *)(iVar8 + 4 + iVar6 * 4) + 0x5a) != 0) + 8,0);
    }
    ppcVar4 = *(code ***)(iVar8 + 8);
    goto LAB_0100a437;
  case 0x1b:
    if ((*(int *)((int)ppuParm1 + 0x3e) != 0) || (*(int *)((int)ppuParm1 + 0x3a) == 0)) {
      FUN_0100a104((int)ppuParm1);
    }
    *(int *)((int)ppuParm1 + 0x3a) = param_1;
    *(undefined4 *)((int)ppuParm1 + 0x3e) = 0;
    iVar6 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
    param_1 = *(int *)(*(int *)(*(int *)((int)ppuParm1 + 0x2e) + 8) + 0x5a);
    local_10 = iVar6 + -1;
    if (0 < local_10) {
      iVar8 = 0xc;
      do {
        (**(code **)**(code ***)(iVar8 + -4 + *(int *)((int)ppuParm1 + 0x2e)))
                  ((uint)(*(int *)(*(int *)(iVar8 + *(int *)((int)ppuParm1 + 0x2e)) + 0x5a) != 0) +
                   8,0);
        iVar8 = iVar8 + 4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    ppcVar4 = *(code ***)(*(int *)((int)ppuParm1 + 0x2e) + 4 + iVar6 * 4);
LAB_0100a437:
    (**(code **)*ppcVar4)((uint)(param_1 != 0) + 8,0);
    goto LAB_0100a297;
  case 0x1c:
    if ((*(int *)((int)ppuParm1 + 0x3e) != 0) || (*(int *)((int)ppuParm1 + 0x3a) == 0)) {
      FUN_0100a104((int)ppuParm1);
    }
    *(int *)((int)ppuParm1 + 0x3a) = param_1;
    *(undefined4 *)((int)ppuParm1 + 0x3e) = 0;
    local_10 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4) + -1;
    if (0 < local_10) {
      param_1 = 8;
      do {
        iVar6 = rand();
        if (0x46 < iVar6 % 100) {
          ppcVar4 = (code **)**(code ***)(param_1 + *(int *)((int)ppuParm1 + 0x2e));
          rand();
          (**ppcVar4)();
        }
        param_1 = param_1 + 4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    goto LAB_0100a297;
  case 0x1d:
    if ((*(int *)((int)ppuParm1 + 0x3e) != 0) || (*(int *)((int)ppuParm1 + 0x3a) == 0)) {
      FUN_0100a104((int)ppuParm1);
    }
    *(int *)((int)ppuParm1 + 0x3a) = param_1;
    *(undefined4 *)((int)ppuParm1 + 0x3e) = 0;
    local_10 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4) + -1;
    if (0 < local_10) {
      param_1 = 8;
      do {
        ppcVar4 = (code **)**(code ***)(param_1 + *(int *)((int)ppuParm1 + 0x2e));
        iVar6 = rand();
        (**ppcVar4)(0x12,(float)(uint)(0x46 < iVar6 % 100));
        param_1 = param_1 + 4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
LAB_0100a297:
    FUN_0100a04a();
    break;
  case 0x1e:
    iVar6 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
    iVar7 = 0;
    if (iVar6 + -1 < 0) {
      return 0;
    }
    piVar5 = (int *)(*(int *)((int)ppuParm1 + 0x2e) + 8 + (iVar6 + -1) * 4);
    do {
      if (*(int *)(*piVar5 + 0x4e) == 0) {
        iVar7 = iVar7 + 1;
      }
      piVar5 = piVar5 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (iVar7 == 0) {
      return 0;
    }
    iVar1 = rand();
    iVar6 = *(int *)((int)ppuParm1 + 0x2e);
    iVar8 = *(int *)(iVar6 + 4) + -1;
    if (-1 < iVar8) {
      param_2 = (int *)(iVar6 + 8 + iVar8 * 4);
      iVar7 = iVar1 % iVar7;
      do {
        iVar1 = iVar7;
        if ((*(int *)(*param_2 + 0x4e) == 0) && (iVar1 = iVar7 + -1, iVar7 == 0)) goto LAB_0100a5ab;
        param_2 = param_2 + -1;
        iVar8 = iVar8 + -1;
        iVar7 = iVar1;
      } while (-1 < iVar8);
    }
    goto LAB_0100a5bb;
  case 0x1f:
    iVar6 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
    iVar7 = 0;
    if (iVar6 + -1 < 0) {
      return 0;
    }
    piVar5 = (int *)(*(int *)((int)ppuParm1 + 0x2e) + 8 + (iVar6 + -1) * 4);
    do {
      if (*(int *)(*piVar5 + 0x4e) != 0) {
        iVar7 = iVar7 + 1;
      }
      piVar5 = piVar5 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (iVar7 == 0) {
      return 0;
    }
    iVar1 = rand();
    iVar6 = *(int *)((int)ppuParm1 + 0x2e);
    iVar8 = *(int *)(iVar6 + 4) + -1;
    if (-1 < iVar8) {
      param_2 = (int *)(iVar6 + 8 + iVar8 * 4);
      iVar7 = iVar1 % iVar7;
      do {
        iVar1 = iVar7;
        if ((*(int *)(*param_2 + 0x4e) != 0) && (iVar1 = iVar7 + -1, iVar7 == 0)) goto LAB_0100a7ae;
        param_2 = param_2 + -1;
        iVar8 = iVar8 + -1;
        iVar7 = iVar1;
      } while (-1 < iVar8);
    }
    goto LAB_0100a5bb;
  case 0x20:
    iVar6 = FUN_0100a0b4((int)ppuParm1);
    if (iVar6 < 0) {
      return 0;
    }
    ppcVar4 = *(code ***)(*(int *)((int)ppuParm1 + 0x2e) + 8 + iVar6 * 4);
    local_2c = 1;
    goto LAB_0100a655;
  case 0x21:
    iVar6 = FUN_0100a0de((int)ppuParm1);
    if (iVar6 < 0) {
      return 0;
    }
    ppcVar4 = *(code ***)(*(int *)((int)ppuParm1 + 0x2e) + 8 + iVar6 * 4);
    local_2c = 0;
LAB_0100a655:
    (**(code **)*ppcVar4)(local_2c);
    if (*(int *)((int)ppuParm1 + 0x3a) != 0) {
      FUN_0100a104((int)ppuParm1);
    }
    return 1;
  case 0x22:
    if (*(int *)((int)ppuParm1 + 0x46) != 0) {
      FUN_01007659(*(int *)((int)ppuParm1 + 0x46));
    }
    iVar6 = *(int *)((int)ppuParm1 + 0x3a);
    *(undefined4 *)((int)ppuParm1 + 0x46) = 0;
    if (((iVar6 == 0x1a) || (iVar6 == 0x1b)) || (iVar6 == 0x1c)) {
      FUN_0100a166(0xe,0);
    }
    *(undefined4 *)((int)ppuParm1 + 0x3a) = 0;
    *(undefined4 *)((int)ppuParm1 + 0x3e) = 0;
    break;
  case 0x23:
    floor((double)(float)param_2);
    iVar8 = _ftol();
    iVar6 = *(int *)((int)ppuParm1 + 0x2e);
    if (*(int *)(iVar6 + 4) <= iVar8) {
      return 0;
    }
    if (iVar8 < 0) {
      return 0;
    }
LAB_0100a5ab:
    ppcVar4 = *(code ***)(iVar6 + 8 + iVar8 * 4);
    local_2c = 1;
    goto LAB_0100a5b7;
  case 0x24:
    floor((double)(float)param_2);
    iVar8 = _ftol();
    iVar6 = *(int *)((int)ppuParm1 + 0x2e);
    if (*(int *)(iVar6 + 4) <= iVar8) {
      return 0;
    }
    if (iVar8 < 0) {
      return 0;
    }
LAB_0100a7ae:
    ppcVar4 = *(code ***)(iVar6 + 8 + iVar8 * 4);
    local_2c = 0;
LAB_0100a5b7:
    (**(code **)*ppcVar4)(local_2c);
LAB_0100a5bb:
    if (*(int *)((int)ppuParm1 + 0x3a) != 0) {
      FUN_0100a104((int)ppuParm1);
    }
    break;
  case 0x25:
    iVar6 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
    iVar8 = 0;
    if (-1 < iVar6 + -1) {
      piVar5 = (int *)(*(int *)((int)ppuParm1 + 0x2e) + 8 + (iVar6 + -1) * 4);
      do {
        if (*(int *)(*piVar5 + 0x4e) != 0) {
          iVar8 = iVar8 + 1;
        }
        piVar5 = piVar5 + -1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return iVar8;
    }
    return 0;
  case 0x26:
    return *(undefined4 *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
  case 0x27:
    return *(undefined4 *)((int)ppuParm1 + 0x3a);
  case 0x28:
    return *(undefined4 *)((int)ppuParm1 + 0x3e);
  case 0x29:
    iVar6 = FUN_0100a0b4((int)ppuParm1);
    if (iVar6 < 0) {
      return 0;
    }
    if ((*(int *)((int)ppuParm1 + 0x3a) != 0) || (*(int *)((int)ppuParm1 + 0x3e) != 0)) {
      FUN_0100a166(0x22,0);
    }
    ppcVar4 = *(code ***)(*(int *)((int)ppuParm1 + 0x2e) + 8 + iVar6 * 4);
    local_2c = CONCAT44(param_2,0xf);
    goto LAB_0100a709;
  case 0x2a:
    iVar6 = FUN_0100a0de((int)ppuParm1);
    if (iVar6 < 0) {
      return 0;
    }
    if ((*(int *)((int)ppuParm1 + 0x3a) != 0) || (*(int *)((int)ppuParm1 + 0x3e) != 0)) {
      FUN_0100a166(0x22,0);
    }
    ppcVar4 = *(code ***)(*(int *)((int)ppuParm1 + 0x2e) + 8 + iVar6 * 4);
    local_2c = CONCAT44(param_2,0x10);
LAB_0100a709:
    (**(code **)*ppcVar4)(local_2c);
    return 1;
  case 0x2b:
    if (*(int *)((int)ppuParm1 + 0x42) != 0) {
      FUN_01007659(*(int *)((int)ppuParm1 + 0x42));
    }
    *(undefined4 *)((int)ppuParm1 + 0x42) = 0;
    if (in_PF) {
      iVar6 = FUN_010074b7(param_2,(int)ppuParm1,(int)FUN_0100a149);
      *(int *)((int)ppuParm1 + 0x42) = iVar6;
    }
    break;
  case 0x2c:
    param_1 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4);
    if (-1 < param_1 + -1) {
      iVar6 = (param_1 + -1) * 4 + 8;
      do {
        ppcVar4 = *(code ***)(iVar6 + *(int *)((int)ppuParm1 + 0x2e));
        if (*(int *)((int)ppcVar4 + 0x4e) != 0) {
          (**(code **)*ppcVar4)(0,0);
          (**(code **)**(code ***)(iVar6 + *(int *)((int)ppuParm1 + 0x2e)))(0x10,param_2);
        }
        iVar6 = iVar6 + -4;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    break;
  case 0x2d:
    FUN_01011ec9(param_1,ppuParm1);
    floor((double)(float)param_2);
    param_1 = _ftol();
    if ((-1 < param_1) && (iVar6 = *(int *)(*(int *)((int)ppuParm1 + 0x2e) + 4), param_1 <= iVar6))
    {
      iVar6 = iVar6 + -1;
      if (param_1 < iVar6) {
        param_2 = (int *)(iVar6 * 4 + 8);
        param_1 = iVar6 - param_1;
        iVar6 = iVar6 - param_1;
        do {
          (**(code **)**(code ***)((int)param_2 + *(int *)((int)ppuParm1 + 0x2e)))(0x14,0);
          param_2 = (int *)((int)param_2 + -4);
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      if (-1 < iVar6) {
        iVar8 = iVar6 * 4 + 8;
        iVar6 = iVar6 + 1;
        do {
          (**(code **)**(code ***)(iVar8 + *(int *)((int)ppuParm1 + 0x2e)))(0x13,0);
          iVar8 = iVar8 + -4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    break;
  case 0x2e:
    iVar6 = FUN_0100a0de((int)ppuParm1);
    if (-1 < iVar6) {
      (**(code **)**(code ***)(*(int *)((int)ppuParm1 + 0x2e) + 8 + iVar6 * 4))(4,0);
    }
    break;
  default:
    goto switchD_0100a19a_caseD_17;
  }
  return 0;
}



void __fastcall FUN_0100aa81(undefined4 *param_1)

{
  *param_1 = 0x1001a30;
  if (*(int *)((int)param_1 + 0x8a) != 0) {
    FUN_01005541(*(int *)((int)param_1 + 0x8a));
  }
  FUN_01009fd1(param_1);
  return;
}



void __fastcall FUN_0100aaa9(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8e);
  if (iVar1 != 0) {
    FUN_01007659(iVar1);
    *(int *)(param_1 + 0x8e) = 0;
  }
  *(undefined4 *)(param_1 + 0x92) = 0;
  FUN_01009feb(param_1);
  return;
}



void FUN_0100aad9(undefined4 param_1,undefined **param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)param_2 + 0x8e) = 0;
  if (*(int *)((int)param_2 + 0x92) == 0) {
    (**(code **)*param_2)(0x14,0);
    iVar1 = 0x2f;
  }
  else {
    (**(code **)*param_2)(0x2d,(float)(*(int *)((int)param_2 + 0x92) + -1));
    iVar1 = 0x3c;
  }
  FUN_01011ec9(iVar1,param_2);
  return;
}



undefined4 __thiscall FUN_0100ab28(void *this,int param_1,float param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == 0x25) {
    uVar4 = *(undefined4 *)((int)this + 0x92);
  }
  else {
    if (param_1 == 0x2d) {
      if (*(int *)((int)this + 0x8e) != 0) {
        FUN_01007659(*(int *)((int)this + 0x8e));
        *(undefined4 *)((int)this + 0x8e) = 0;
      }
      floor((double)param_2);
      uVar2 = _ftol();
      iVar5 = *(int *)(*(int *)((int)this + 0x2e) + 4);
      iVar3 = iVar5 * 2;
      if (SBORROW4(uVar2,iVar3) == (int)(uVar2 + iVar5 * -2) < 0) {
        uVar2 = iVar3 - 1;
      }
      if ((int)uVar2 < 0) {
        FUN_0100a166(0x14,0);
        *(undefined4 *)((int)this + 0x92) = 0;
      }
      else {
        FUN_0100a166(0x2d,(float)((int)uVar2 / 2));
        if ((uVar2 & 1) == 0) {
          FUN_0100a166(0x2e,0);
        }
        if (*(int *)((int)this + 0x8a) != 0) {
          iVar5 = FUN_010074b7(*(undefined4 *)(*(int *)((int)this + 0x8a) + uVar2 * 4),(int)this,
                               (int)FUN_0100aad9);
          *(int *)((int)this + 0x8e) = iVar5;
        }
        *(uint *)((int)this + 0x92) = uVar2;
      }
    }
    else {
      if (param_1 == 0x3f3) {
        (**(code **)(*(int *)this + 0x14))();
      }
      else {
        if (param_1 == 0x3fc) {
          iVar5 = *(int *)((int)this + 0x8e);
          if (iVar5 != 0) {
            FUN_01007659(iVar5);
            *(int *)((int)this + 0x8e) = 0;
          }
          *(undefined4 *)((int)this + *(int *)(*(int *)((int)this + 0x1e) + 0xda) * 4 + 0x96) =
               *(undefined4 *)((int)this + 0x92);
          (**(code **)(*(int *)this + 0x14))();
          floor((double)param_2);
          iVar5 = _ftol();
          iVar5 = *(int *)((int)this + iVar5 * 4 + 0x96);
          *(int *)((int)this + 0x92) = iVar5;
          if (iVar5 != 0) {
            FUN_0100ab28(this,0x2d,(float)iVar5);
          }
        }
        else {
          if (param_1 == 0x400) {
            (**(code **)(*(int *)this + 0x14))();
            iVar5 = 0;
            if (0 < *(int *)(*(int *)((int)this + 0x1e) + 0xd6)) {
              puVar1 = (undefined4 *)((int)this + 0x96);
              do {
                *puVar1 = *(undefined4 *)((int)this + 0x92);
                iVar5 = iVar5 + 1;
                puVar1 = puVar1 + 1;
              } while (iVar5 < *(int *)(*(int *)((int)this + 0x1e) + 0xd6));
            }
          }
          FUN_0100a166();
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



void __thiscall FUN_0100acf3(void *this,int param_1)

{
  if ((*(int **)((int)this + 4))[1] == **(int **)((int)this + 4)) {
    FUN_010098f7((int *)this);
  }
  FUN_01012e51(*(int **)((int)this + 4),param_1);
  return;
}



undefined4 * __thiscall FUN_0100ad21(void *this,int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  
  FUN_01017c6d(this,param_1,param_2,1);
  *(undefined4 *)this = 0x1001a48;
  *(undefined4 *)((int)this + 0x6e) = 0;
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x72) = 0;
  *(undefined4 *)((int)this + 0x46) = 0;
  FUN_010099a8((int)this);
  pfVar2 = FUN_0100978e(param_2,0,900);
  fVar1 = *pfVar2;
  *(float *)((int)this + 0x3e) = fVar1;
  *(float *)((int)this + 0x66) = fVar1;
  pfVar2 = FUN_0100978e(param_2,0,0x385);
  fVar1 = *pfVar2;
  *(float *)((int)this + 0x42) = fVar1;
  *(float *)((int)this + 0x6a) = fVar1;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0100ad8b(void *this,byte param_1)

{
  FUN_01018fbc((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0100adb1(void *this,void *param_1,int param_2)

{
  float *pfVar1;
  short *psVar2;
  int iVar3;
  void *local_8;
  
  local_8 = this;
  FUN_01017c6d(this,(int)param_1,param_2,0);
  *(undefined4 *)this = 0x1001a60;
  FUN_010098d3((void *)((int)this + 0x2a),4,4);
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x42) = 0;
  FUN_01009feb((int)this);
  if (0 < param_2) {
    pfVar1 = FUN_0100978e(param_2,0,0x387);
    *(float *)((int)this + 0x36) = *pfVar1;
    psVar2 = FUN_0100981a(param_2,0x403,(int *)&local_8);
    param_2 = 0;
    if (0 < (int)local_8) {
      do {
        iVar3 = FUN_010176be(param_1,(int)*psVar2);
        if (iVar3 != 0) {
          FUN_0100acf3((void *)((int)this + 0x2a),iVar3);
        }
        param_2 = param_2 + 1;
        psVar2 = psVar2 + 1;
      } while (param_2 < (int)local_8);
    }
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0100ae4c(void *this,byte param_1)

{
  FUN_01009fd1((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0100ae72(void *this,void *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  
  FUN_0100adb1(this,param_1,param_2);
  *(undefined4 *)this = 0x1001a30;
  *(undefined4 *)((int)this + 0x8a) = 0;
  FUN_0100aaa9((int)this);
  if ((0 < param_2) && (pfVar2 = FUN_0100978e(param_2,0,0x388), pfVar2 != (float *)0x0)) {
    iVar1 = *(int *)(*(int *)((int)this + 0x2e) + 4);
    piVar3 = FUN_010054c2(iVar1 << 3);
    *(int **)((int)this + 0x8a) = piVar3;
    if ((piVar3 != (int *)0x0) && (iVar4 = 0, 0 < iVar1 * 2)) {
      do {
        *(float *)(*(int *)((int)this + 0x8a) + iVar4 * 4) = *pfVar2;
        iVar4 = iVar4 + 1;
        pfVar2 = pfVar2 + 1;
      } while (SBORROW4(iVar4,iVar1 * 2) != iVar4 + iVar1 * -2 < 0);
    }
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0100aef9(void *this,byte param_1)

{
  FUN_0100aa81((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0100af1f(undefined4 param_1)

{
  LPSTR lpString2;
  MCIERROR MVar1;
  
  DAT_01025010 = 0;
  DAT_01025008 = param_1;
  lpString2 = FUN_01003752(0x9c);
  lstrcpyA(&DAT_01025020,lpString2);
  _DAT_01025018 = 0;
  _DAT_01025014 = &DAT_01025020;
  MVar1 = mciSendCommandA(0,0x803,0x2002,(DWORD_PTR)&DAT_0102500c);
  if (MVar1 == 0) {
    DAT_01025000 = 1;
  }
  return DAT_01025000;
}



void FUN_0100af8e(void)

{
  if (DAT_01025000 != 0) {
    mciSendCommandA(DAT_01025010,0x804,0,0);
  }
  DAT_01025000 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100afb9(void)

{
  if (_DAT_01025004 != 0) {
    mciSendCommandA(DAT_01025010,0x808,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

MCIERROR FUN_0100afdc(int param_1)

{
  MCIERROR MVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  MVar1 = 0;
  FUN_0100afb9();
  local_c = 0;
  local_10 = DAT_01025008;
  if ((param_1 == 0) && (DAT_01025000 != 0)) {
    MVar1 = mciSendCommandA(DAT_01025010,0x806,5,(DWORD_PTR)&local_10);
    _DAT_01025004 = (uint)(MVar1 == 0);
  }
  return MVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100b035(void)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = DAT_01025008;
  if (_DAT_01025004 != 0) {
    mciSendCommandA(DAT_01025010,0x806,5,(DWORD_PTR)&local_10);
  }
  return;
}



uint __thiscall FUN_0100b072(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x86);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x72) == param_1) {
      return 1;
    }
    if (iVar1 != 1) {
      if (*(int *)((int)this + 0x76) == param_1) {
        return 1;
      }
      if (iVar1 != 2) {
        if (*(int *)((int)this + 0x7a) == param_1) {
          return 1;
        }
        if (iVar1 != 3) {
          if (*(int *)((int)this + 0x7e) == param_1) {
            return 1;
          }
          if (iVar1 != 4) {
            if (*(int *)((int)this + 0x82) == param_1) {
              return 1;
            }
            if (iVar1 == 5) {
              return 0;
            }
            return (uint)(iVar1 == param_1);
          }
        }
      }
    }
  }
  return 0;
}



void __thiscall FUN_0100b0f4(int iParm1,float param_1)

{
  bool in_PF;
  double dVar1;
  
  dVar1 = (double)(*(int *)(iParm1 + 0x10) + -1);
  floor((double)((param_1 - *(float *)(iParm1 + 0x18)) * *(float *)(iParm1 + 8)));
  if (!in_PF) {
    dVar1 = floor((double)((param_1 - *(float *)(iParm1 + 0x18)) * *(float *)(iParm1 + 8)));
  }
  if (((ushort)((ushort)(dVar1 < 0.00000000) << 8 | (ushort)(dVar1 == 0.00000000) << 0xe) == 0) &&
     (floor((double)((param_1 - *(float *)(iParm1 + 0x18)) * *(float *)(iParm1 + 8))), !in_PF)) {
    floor((double)((param_1 - *(float *)(iParm1 + 0x18)) * *(float *)(iParm1 + 8)));
  }
  _ftol();
  return;
}



void __thiscall FUN_0100b1ae(int iParm1,float param_1)

{
  bool in_PF;
  double dVar1;
  
  dVar1 = (double)(*(int *)(iParm1 + 0x14) + -1);
  floor((double)((param_1 - *(float *)(iParm1 + 0x1c)) * *(float *)(iParm1 + 0xc)));
  if (!in_PF) {
    dVar1 = floor((double)((param_1 - *(float *)(iParm1 + 0x1c)) * *(float *)(iParm1 + 0xc)));
  }
  if (((ushort)((ushort)(dVar1 < 0.00000000) << 8 | (ushort)(dVar1 == 0.00000000) << 0xe) == 0) &&
     (floor((double)((param_1 - *(float *)(iParm1 + 0x1c)) * *(float *)(iParm1 + 0xc))), !in_PF)) {
    floor((double)((param_1 - *(float *)(iParm1 + 0x1c)) * *(float *)(iParm1 + 0xc)));
  }
  _ftol();
  return;
}



int __thiscall FUN_0100b268(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10) + -1;
  if (param_1 + 1 < iVar1) {
    iVar1 = param_1 + 1;
  }
  return iVar1;
}



int __thiscall FUN_0100b284(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14) + -1;
  if (param_1 + 1 < iVar1) {
    iVar1 = param_1 + 1;
  }
  return iVar1;
}



void FUN_0100b2a0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void __fastcall FUN_0100b2c9(int param_1)

{
  FUN_01013c6f(*(int *)(param_1 + 0xc));
  FUN_01013c6f(*(int *)(param_1 + 4));
  return;
}



void FUN_0100b2e5(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void __thiscall FUN_0100b316(void *this,int param_1,float *param_2)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_10 [3];
  
  iVar2 = param_1;
  iVar3 = FUN_0100b0f4(*(undefined4 *)(param_1 + 0x2a));
  iVar4 = FUN_0100b1ae(*(undefined4 *)(param_1 + 0x2e));
  iVar3 = (*(int *)((int)this + 0x10) * iVar4 + iVar3) * 0x10 + *(int *)((int)this + 0x20);
  param_1 = *(int *)(*(int *)(iVar3 + 0xc) + 4);
  if (-1 < param_1 + -1) {
    iVar4 = (param_1 + -1) * 4 + 8;
    do {
      ppcVar1 = *(char ***)(iVar4 + *(int *)(iVar3 + 0xc));
      if ((**ppcVar1 != '\0') && (((uint)ppcVar1[1] & *(uint *)(iVar2 + 0x6e)) != 0)) {
        iVar5 = (**(code **)(*(int *)ppcVar1[2] + 0x18))(iVar2,local_10);
        if (iVar5 != 0) {
          FUN_0101cb8e(param_2,local_10);
        }
      }
      iVar4 = iVar4 + -4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



int __thiscall
FUN_0100b3ae(int iParm1,int param_1,int param_2,float *param_3,int **param_4,int param_5,
            void *param_6,int param_7)

{
  int *piVar1;
  uint uVar2;
  int **ppiVar3;
  int iVar4;
  bool in_PF;
  float10 fVar5;
  
  if ((((-1 < param_1) && (param_1 < 10)) && (-1 < param_2)) && (param_2 < 0xf)) {
    iVar4 = (*(int *)(iParm1 + 0x10) * param_2 + param_1) * 0x10 + *(int *)(iParm1 + 0x20);
    param_1 = *(int *)(*(int *)(iVar4 + 4) + 4);
    if (-1 < param_1 + -1) {
      param_2 = (param_1 + -1) * 4 + 8;
      ppiVar3 = (int **)(iParm1 + 0x24 + param_7 * 4);
      do {
        piVar1 = *(int **)(param_2 + *(int *)(iVar4 + 4));
        if (((*(char *)(piVar1 + 3) == '\0') && (*(char *)piVar1[2] != '\0')) &&
           (((*(uint *)(param_5 + 0x28) & *(uint *)((int)piVar1 + 0x11)) != 0 &&
            (uVar2 = FUN_0100b072(param_6,(int)piVar1), uVar2 == 0)))) {
          param_7 = param_7 + 1;
          *ppiVar3 = piVar1;
          ppiVar3 = ppiVar3 + 1;
          *(undefined *)(piVar1 + 3) = 1;
          fVar5 = (float10)(**(code **)(*piVar1 + 0xc))(param_5);
          if (!in_PF) {
            *param_3 = (float)fVar5;
            *param_4 = piVar1;
          }
        }
        param_2 = param_2 + -4;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return param_7;
}



float10 __thiscall FUN_0100b486(float *pfParm1,float *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool in_PF;
  int local_2c;
  int local_24;
  int local_1c;
  float local_c;
  float local_8;
  
  pfVar5 = param_1;
  fVar1 = *param_1;
  local_c = 1000000000.00000000;
  iVar10 = 0;
  iVar6 = FUN_0100b0f4(fVar1);
  local_8 = param_1[1];
  iVar7 = FUN_0100b1ae(local_8);
  fVar2 = param_1[3] * param_1[6] + *param_1;
  iVar8 = FUN_0100b0f4(fVar2);
  fVar3 = param_1[4] * param_1[6] + param_1[1];
  iVar9 = FUN_0100b1ae(fVar3);
  if (in_PF) {
    local_2c = -1;
    local_24 = -1;
  }
  else {
    local_2c = 1;
    local_24 = 1;
  }
  if (iVar7 == iVar9) {
    if (local_2c == 1) {
      while (iVar6 <= iVar8) {
        iVar10 = FUN_0100b3ae(iVar6,iVar7,&local_c,param_3,param_1,param_2,iVar10);
        iVar6 = iVar6 + 1;
      }
    }
    else {
      while (iVar8 <= iVar6) {
        iVar10 = FUN_0100b3ae(iVar6,iVar7,&local_c,param_3,param_1,param_2,iVar10);
        iVar6 = iVar6 + -1;
      }
    }
  }
  else {
    if (iVar6 == iVar8) {
      if (local_24 == 1) {
        while (iVar7 <= iVar9) {
          iVar10 = FUN_0100b3ae(iVar6,iVar7,&local_c,param_3,param_1,param_2,iVar10);
          iVar7 = iVar7 + 1;
        }
      }
      else {
        while (iVar9 <= iVar7) {
          iVar10 = FUN_0100b3ae(iVar6,iVar7,&local_c,param_3,param_1,param_2,iVar10);
          iVar7 = iVar7 + -1;
        }
      }
    }
    else {
      fVar2 = (local_8 - fVar3) / (fVar1 - fVar2);
      fVar1 = local_8 - fVar2 * fVar1;
      local_8 = (float)iVar7;
      iVar10 = FUN_0100b3ae(iVar6,iVar7,&local_c,param_3,param_1,param_2,0);
      if (local_2c == 1) {
        local_1c = iVar6 + 1;
        param_1 = (float *)iVar6;
        if (local_24 == 1) {
          do {
            if (in_PF) {
              if (!in_PF) {
                param_1 = (float *)((int)param_1 + 1);
              }
              local_8 = (float)((int)local_8 + 1);
            }
            else {
              param_1 = (float *)((int)param_1 + 1);
            }
            iVar10 = FUN_0100b3ae(param_1,local_8,&local_c,param_3,pfVar5,param_2,iVar10);
          } while (((int)param_1 < iVar8) || ((int)local_8 < iVar9));
        }
        else {
          do {
            fVar3 = (float)(int)local_8 * pfParm1[1] + pfParm1[7];
            fVar4 = ((float)local_1c * *pfParm1 + pfParm1[6]) * fVar2 + fVar1;
            if ((ushort)((ushort)(fVar4 < fVar3) << 8 | (ushort)(fVar4 == fVar3) << 0xe) == 0) {
              param_1 = (float *)((int)param_1 + 1);
              local_1c = local_1c + 1;
            }
            else {
              if (!in_PF) {
                param_1 = (float *)((int)param_1 + 1);
                local_1c = local_1c + 1;
              }
              local_8 = (float)((int)local_8 + -1);
            }
            iVar10 = FUN_0100b3ae(param_1,local_8,&local_c,param_3,pfVar5,param_2,iVar10);
          } while (((int)param_1 < iVar8) || (iVar9 < (int)local_8));
        }
      }
      else {
        param_1 = (float *)iVar6;
        if (local_24 == 1) {
          do {
            if (in_PF) {
              if (!in_PF) {
                param_1 = (float *)((int)param_1 + -1);
              }
              local_8 = (float)((int)local_8 + 1);
            }
            else {
              param_1 = (float *)((int)param_1 + -1);
            }
            iVar10 = FUN_0100b3ae(param_1,local_8,&local_c,param_3,pfVar5,param_2,iVar10);
          } while ((iVar8 < (int)param_1) || ((int)local_8 < iVar9));
        }
        else {
          do {
            fVar3 = (float)(int)local_8 * pfParm1[1] + pfParm1[7];
            fVar4 = ((float)(int)param_1 * *pfParm1 + pfParm1[6]) * fVar2 + fVar1;
            if ((ushort)((ushort)(fVar4 < fVar3) << 8 | (ushort)(fVar4 == fVar3) << 0xe) == 0) {
              param_1 = (float *)((int)param_1 + -1);
            }
            else {
              if (!in_PF) {
                param_1 = (float *)((int)param_1 + -1);
              }
              local_8 = (float)((int)local_8 + -1);
            }
            iVar10 = FUN_0100b3ae(param_1,local_8,&local_c,param_3,pfVar5,param_2,iVar10);
          } while ((iVar8 < (int)param_1) || (iVar9 < (int)local_8));
        }
      }
    }
  }
  if (0 < iVar10) {
    pfParm1 = pfParm1 + 9;
    do {
      fVar1 = *pfParm1;
      pfParm1 = pfParm1 + 1;
      iVar10 = iVar10 + -1;
      *(undefined *)((int)fVar1 + 0xc) = 0;
    } while (iVar10 != 0);
  }
  return (float10)local_c;
}



float * __thiscall FUN_0100b883(void *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(float *)((int)this + 0x18) = param_1;
  *(float *)this = param_3 * 0.10000000;
  *(float *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x10) = 10;
  *(float *)((int)this + 4) = param_4 * 0.06666667;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(float *)((int)this + 8) = 1.00000000 / (param_3 * 0.10000000);
  *(float *)((int)this + 0xc) = 1.00000000 / (param_4 * 0.06666667);
  puVar1 = (undefined4 *)operator_new(0x964);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x96;
    FUN_0100b2a0(puVar2,0x10,0x96,&LAB_0100b0d1);
  }
  *(undefined4 **)((int)this + 0x20) = puVar2;
  return (float *)this;
}



int * __thiscall FUN_0100b90e(void *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    FUN_0100b2c9((int)this);
    piVar1 = (int *)this;
    if ((param_1 & 1) != 0) {
      operator_delete(this);
      piVar1 = (int *)this;
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    FUN_0100b2e5(this,0x10,*piVar1,FUN_0100b2c9);
    if ((param_1 & 1) != 0) {
      operator_delete(piVar1);
    }
  }
  return piVar1;
}



void __thiscall FUN_0100b961(void *this,int param_1,int param_2,int param_3)

{
  FUN_0100acf3((void *)((*(int *)((int)this + 0x10) * param_2 + param_1) * 0x10 +
                       *(int *)((int)this + 0x20)),param_3);
  return;
}



void __thiscall FUN_0100b989(void *this,int param_1,int param_2,int param_3)

{
  FUN_0100acf3((void *)((*(int *)((int)this + 0x10) * param_2 + param_1) * 0x10 + 8 +
                       *(int *)((int)this + 0x20)),param_3);
  return;
}



void __fastcall FUN_0100b9b3(int param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    FUN_0100b90e(*(void **)(param_1 + 0x20),3);
  }
  return;
}



void FUN_0100b9c7(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *this;
  bool in_PF;
  float local_74;
  float local_70;
  undefined4 uStack108;
  undefined4 local_68;
  undefined4 local_64;
  float local_5c;
  float local_48;
  float local_44;
  undefined4 uStack64;
  float local_3c;
  float local_38;
  undefined4 uStack52;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  int local_8;
  
  pfVar2 = param_1;
  local_24 = *DAT_0102503c * 0.00100000 + SQRT(param_1[3]);
  local_c = local_24 * local_24;
  local_20 = *param_1 - local_24;
  local_28 = param_1[1] - local_24;
  local_1c = local_24 + *param_1;
  local_24 = local_24 + param_1[1];
  iVar3 = FUN_0100b0f4(local_20);
  local_18 = FUN_0100b1ae(local_28);
  local_14 = FUN_0100b0f4(local_1c);
  local_10 = FUN_0100b1ae(local_24);
  this = DAT_0102503c;
  param_1 = (float *)(iVar3 + -1);
  if ((int)param_1 < 1) {
    param_1 = (float *)0x0;
  }
  local_18 = local_18 + -1;
  if (local_18 < 1) {
    local_18 = 0;
  }
  local_14 = FUN_0100b268(DAT_0102503c,local_14);
  local_10 = FUN_0100b284(this,local_10);
  local_3c = (float)(int)param_1 * *this + this[6];
  local_30 = (float)local_18 * this[1] + this[7];
  local_8 = (int)param_1;
  do {
    if (local_14 < local_8) {
      return;
    }
    param_1 = (float *)local_18;
    local_38 = local_30;
    while ((int)param_1 <= local_10) {
      if ((((in_PF) &&
           (local_2c = local_3c + *this,
           (ushort)((ushort)(local_20 < local_2c) << 8 | (ushort)(local_20 == local_2c) << 0xe) != 0
           )) && (in_PF)) &&
         (fVar1 = local_38 + this[1],
         (ushort)((ushort)(local_28 < fVar1) << 8 | (ushort)(local_28 == fVar1) << 0xe) != 0)) {
        if (((in_PF) || (*pfVar2 < local_3c)) || ((fVar1 < pfVar2[1] || (pfVar2[1] < local_38)))) {
          local_48 = local_3c;
          local_44 = local_38;
          uStack64 = uStack52;
          FUN_0101cc23(local_3c,local_38,uStack52,*pfVar2,pfVar2[1]);
          this = DAT_0102503c;
          if (in_PF) {
            local_48 = local_48 + *DAT_0102503c;
            FUN_0101cc23(local_48,local_44,uStack64,*pfVar2,pfVar2[1]);
            this = DAT_0102503c;
            if (in_PF) {
              local_44 = local_44 + DAT_0102503c[1];
              FUN_0101cc23(local_48,local_44,uStack64,*pfVar2,pfVar2[1]);
              this = DAT_0102503c;
              if (in_PF) {
                local_48 = local_48 - *DAT_0102503c;
                FUN_0101cc23(local_48,local_44,uStack64,*pfVar2,pfVar2[1]);
                this = DAT_0102503c;
                if (in_PF) {
                  local_74 = local_3c;
                  local_70 = local_38;
                  uStack108 = uStack52;
                  local_68 = 0x3f800000;
                  local_64 = 0;
                  local_5c = *DAT_0102503c;
                  FUN_01008b34(&local_74,pfVar2);
                  this = DAT_0102503c;
                  if (in_PF) {
                    local_68 = 0xbf800000;
                    local_74 = local_74 + *DAT_0102503c;
                    FUN_01008b34(&local_74,pfVar2);
                    this = DAT_0102503c;
                    if (in_PF) {
                      local_68 = 0;
                      local_64 = 0x3f800000;
                      local_5c = DAT_0102503c[1];
                      FUN_01008b34(&local_74,pfVar2);
                      this = DAT_0102503c;
                      if (in_PF) {
                        local_64 = 0xbf800000;
                        local_70 = local_70 + DAT_0102503c[1];
                        FUN_01008b34(&local_74,pfVar2);
                        this = DAT_0102503c;
                        if (in_PF) {
                          local_64 = 0;
                          local_68 = 0xbf800000;
                          local_5c = *DAT_0102503c;
                          FUN_01008b34(&local_74,pfVar2);
                          this = DAT_0102503c;
                          if (in_PF) {
                            local_68 = 0x3f800000;
                            local_74 = local_74 - *DAT_0102503c;
                            FUN_01008b34(&local_74,pfVar2);
                            this = DAT_0102503c;
                            if (in_PF) {
                              local_68 = 0;
                              local_64 = 0xbf800000;
                              local_5c = DAT_0102503c[1];
                              FUN_01008b34(&local_74,pfVar2);
                              this = DAT_0102503c;
                              if (in_PF) {
                                local_64 = 0x3f800000;
                                local_70 = local_70 - DAT_0102503c[1];
                                FUN_01008b34(&local_74,pfVar2);
                                this = DAT_0102503c;
                                if (in_PF) goto LAB_0100bde0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (param_2 != 0) {
          FUN_0100b961(this,local_8,(int)param_1,param_2);
          this = DAT_0102503c;
        }
        if (param_3 != 0) {
          FUN_0100b989(this,local_8,(int)param_1,param_3);
          this = DAT_0102503c;
        }
      }
LAB_0100bde0:
      param_1 = (float *)((int)param_1 + 1);
      local_38 = local_38 + this[1];
    }
    local_3c = local_3c + *this;
    local_8 = local_8 + 1;
  } while( true );
}



unkbyte10 FUN_0100be21(float param_1,float param_2,float param_3,float param_4,int param_5,
                      int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *this;
  bool in_PF;
  unkbyte10 extraout_ST0;
  unkbyte10 Var6;
  
  iVar2 = _ftol();
  iVar3 = _ftol();
  iVar4 = FUN_0100b0f4(param_2 - (float)iVar2);
  iVar5 = FUN_0100b1ae(param_1 - (float)iVar3);
  iVar2 = FUN_0100b0f4((float)iVar2 + param_4);
  iVar3 = FUN_0100b1ae((float)iVar3 + param_3);
  this = DAT_0102503c;
  Var6 = extraout_ST0;
  while (iVar1 = iVar5, iVar4 <= iVar2) {
    while (iVar1 <= iVar3) {
      if ((((in_PF) && (in_PF)) && (in_PF)) && (in_PF)) {
        if (param_5 != 0) {
          Var6 = FUN_0100b961(this,iVar4,iVar1,param_5);
          this = DAT_0102503c;
        }
        if (param_6 != 0) {
          Var6 = FUN_0100b989(this,iVar4,iVar1,param_6);
          this = DAT_0102503c;
        }
      }
      iVar1 = iVar1 + 1;
    }
    iVar4 = iVar4 + 1;
  }
  return Var6;
}



byte * FUN_0100bf8e(byte **param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte **ppbVar6;
  byte *pbVar7;
  bool bVar8;
  int local_8;
  
  pbVar3 = param_1[1];
  if (pbVar3 == (byte *)0x0) {
    iVar2 = *(int *)(*(int *)(DAT_01025040 + 0xfe) + 4);
    local_8 = 0;
    if (0 < iVar2) {
      ppbVar6 = (byte **)(*(int *)(DAT_01025040 + 0xfe) + 8);
      do {
        pbVar3 = *ppbVar6;
        pbVar7 = *(byte **)(pbVar3 + 10);
        if (pbVar7 != (byte *)0x0) {
          pbVar4 = *param_1;
          do {
            bVar1 = *pbVar7;
            bVar8 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
LAB_0100bfee:
              iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != false);
              goto LAB_0100bff3;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar8 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) goto LAB_0100bfee;
            pbVar7 = pbVar7 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_0100bff3:
          if (iVar5 == 0) {
            param_1[1] = pbVar3;
            return pbVar3;
          }
        }
        local_8 = local_8 + 1;
        ppbVar6 = ppbVar6 + 1;
      } while (local_8 < iVar2);
    }
    pbVar3 = (byte *)0x0;
  }
  return pbVar3;
}



void FUN_0100c01d(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  DAT_01025040 = param_1;
  piVar3 = &DAT_01023ef8;
  param_1 = 0x58;
  do {
    piVar1 = (int *)FUN_0100bf8e((byte **)piVar3[-2]);
    iVar2 = 0;
    if ((piVar1 != (int *)0x0) && (*(int **)((int)piVar1 + 0x12) = piVar3 + -1, 0 < *piVar3)) {
      do {
        (**(code **)(*piVar1 + 0xc))(iVar2,*(undefined4 *)(piVar3[1] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *piVar3);
    }
    piVar3 = piVar3 + 4;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  uVar4 = 0;
  do {
    FUN_0100bf8e(*(byte ***)((int)&PTR_PTR_s_lite8_01024470 + uVar4));
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x238);
  return;
}



undefined4 FUN_0100c092(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(int *)(iVar1 + 0x4e) == 0) && (*(int *)(iVar1 + 0x5a) == 0)) &&
     (*(int *)(iVar1 + 0x52) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100c0be(int param_1)

{
  if (param_1 == 0x3f3) {
    _DAT_01025044 = 0;
    (**(code **)*DAT_01023cec)(7,0);
  }
  return;
}



void FUN_0100c0ee(undefined4 param_1)

{
  LPSTR pCVar1;
  
  (**(code **)*DAT_01023d0c)(0x13,0);
  pCVar1 = FUN_01003752(0);
  FUN_010144b7(pCVar1,param_1);
  return;
}



void FUN_0100c12a(void)

{
  LPSTR pCVar1;
  undefined4 local_4;
  
  local_4 = 0x40000000;
  pCVar1 = FUN_01003752(0x10);
  FUN_010144b7(pCVar1,local_4);
  return;
}



void FUN_0100c14f(void)

{
  LPSTR pCVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(DAT_01025040 + 0x13e) = 1;
  (**(code **)*DAT_01023abc)(9,0x42700000);
  uVar2 = 0x40000000;
  pCVar1 = FUN_01003752(0xf);
  FUN_010144b7(pCVar1,uVar2);
  return;
}



void FUN_0100c199(void)

{
  LPSTR pCVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(DAT_01025040 + 0x136) = 1;
  (**(code **)*DAT_01023ac4)(9,0x42700000);
  uVar2 = 0x40000000;
  pCVar1 = FUN_01003752(4);
  FUN_010144b7(pCVar1,uVar2);
  return;
}



void FUN_0100c1e3(void)

{
  LPSTR pCVar1;
  undefined4 uVar2;
  
  (**(code **)*DAT_01023940)(9,0x42700000);
  (**(code **)*DAT_010239d0)(9,0x42700000);
  (**(code **)*DAT_01023ab4)(9,0x42700000);
  uVar2 = 0x40000000;
  pCVar1 = FUN_01003752(0x33);
  FUN_010144b7(pCVar1,uVar2);
  return;
}



void FUN_0100c24a(void)

{
  LPSTR pCVar1;
  undefined4 uVar2;
  
  (**(code **)*DAT_01023acc)(0x13,0);
  uVar2 = 0x40000000;
  pCVar1 = FUN_01003752(0x34);
  FUN_010144b7(pCVar1,uVar2);
  return;
}



void FUN_0100c281(void)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(DAT_01025040 + 0x156);
  if (iVar1 == 2) {
    FUN_0100c12a();
    *(undefined4 *)(DAT_01025040 + 0x156) = 0;
    return;
  }
  *(int *)(DAT_01025040 + 0x156) = iVar1 + 1;
  (**(code **)(*DAT_01023dac + 0x14))();
  uVar3 = 0x40000000;
  pCVar2 = FUN_01003752(1);
  FUN_010144b7(pCVar2,uVar3);
  (**(code **)**(code ***)(DAT_01025040 + 0xde))(0x3f8,0);
  return;
}



void FUN_0100c2f3(undefined4 param_1)

{
  LPSTR pCVar1;
  
  *(int *)(DAT_01025040 + 0x14e) = *(int *)(DAT_01025040 + 0x14e) + 1;
  (**(code **)(*DAT_01023d44 + 0x14))();
  pCVar1 = FUN_01003752(9);
  FUN_010144b7(pCVar1,param_1);
  return;
}



void FUN_0100c335(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *this;
  
  this = DAT_01025040;
  uVar1 = *(undefined4 *)((int)DAT_01025040 + 0x13e);
  *(undefined4 *)((int)DAT_01025040 + 0x13e) = 0;
  uVar2 = *(undefined4 *)((int)this + 0x136);
  *(undefined4 *)((int)this + 0x136) = 0;
  uVar3 = *(undefined4 *)((int)this + 0x126);
  *(undefined4 *)((int)this + 0x126) = 0;
  FUN_01017526(this,param_1);
  this = DAT_01025040;
  *(undefined4 *)((int)DAT_01025040 + 0x136) = uVar2;
  *(undefined4 *)((int)this + 0x126) = uVar3;
  *(undefined4 *)((int)this + 0x13e) = uVar1;
  return;
}



void FUN_0100c397(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01023bbc + 6);
  if ((((iVar1 != 0x10) && (iVar1 != 0x16)) && (iVar1 != 0x17)) &&
     ((param_1 != 0 || (*(int *)(DAT_01023a24 + 6) != 0)))) {
    param_1 = *(int *)(DAT_01023a24 + 6) + 1;
    if (param_1 == 4) {
      param_1 = 1;
    }
    (**(code **)*DAT_01023a3c)(0x17,(float)param_1);
    (**(code **)*DAT_01023a3c)(0xb,(float)(3 - param_1));
    iVar1 = FUN_0100c092((int)&PTR_s_lite4_01023a20);
    if (iVar1 == 0) {
      (**(code **)*DAT_01023a1c)(0x13,0);
      (**(code **)*DAT_01023a3c)(0x13,0);
    }
  }
  return;
}



void FUN_0100c44b(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    (**(code **)*DAT_010237d4)(9,0x3dcccccd);
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100c48b(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    (**(code **)*DAT_010237dc)(9,0x3dcccccd);
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100c4cb(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100c4f5(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0x3f) {
    iVar1 = (**(code **)(*param_2 + 8))(*(undefined4 *)((int)param_2 + 0x4e));
    FUN_01017526(DAT_01025040,iVar1);
  }
  return;
}



void FUN_0100c520(int param_1)

{
  if (param_1 == 0x3c) {
    (**(code **)*DAT_01023808)(0x36,0);
  }
  return;
}



void FUN_0100c546(int param_1)

{
  if (param_1 == 0x3c) {
    (**(code **)*DAT_01023810)(0x36,0);
  }
  return;
}


