#include "pinball.h"


int FUN_01012e51(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] < *param_1) {
    param_1[param_1[1] + 2] = param_2;
    param_1[1] = param_1[1] + 1;
    iVar1 = param_1[1];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 FUN_01012e7a(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(param_1 + 8 + iVar1 * 4);
    do {
      if (*piVar2 == param_2) {
        *(undefined4 *)(param_1 + 8 + iVar1 * 4) =
             *(undefined4 *)(param_1 + 4 + *(int *)(param_1 + 4) * 4);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        return 1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}



void FUN_01012ebe(int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_010054c2(param_1 * 4 + 0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 0;
    *piVar1 = param_1;
  }
  return;
}



uint * FUN_01012ee8(uint *param_1,int param_2)

{
  uint *puVar1;
  
  if (((param_1 != (uint *)0x0) && ((int)*param_1 < (int)(param_1[1] + param_2))) &&
     (puVar1 = FUN_01005579((int)param_1,(param_1[1] + param_2) * 4 + 0xc), puVar1 != (uint *)0x0))
  {
    *puVar1 = puVar1[1] + param_2;
    param_1 = puVar1;
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01012f2a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  _DAT_01024f04 = _DAT_01024f04 + 1;
  local_8 = (int *)0x0;
  local_14 = DAT_01025084;
  local_18 = 0;
  if (0 < DAT_010250b4) {
    do {
      iVar1 = *local_14;
      if (*(int *)(iVar1 + 0x44) != 0) {
        FUN_01005541(*(int *)(iVar1 + 0x44));
        *(undefined4 *)(iVar1 + 0x44) = 0;
        *(undefined4 *)(iVar1 + 0x48) = 0;
      }
      if ((*(char *)(iVar1 + 0x18) == '\0') && (*(int *)(iVar1 + 0x54) != -1)) {
        if (local_8 == (int *)0x0) {
          local_8 = FUN_010054c2(4000);
        }
        iVar5 = 0;
        local_c = DAT_01025084;
        local_10 = 0;
        if (0 < DAT_010250b4) {
          do {
            iVar2 = *local_c;
            if ((((*(char *)(iVar2 + 0x18) == '\0') && (*(int *)(iVar2 + 0x54) != -1)) &&
                (iVar3 = FUN_0100400b((int *)(iVar1 + 0x4c),(int *)(iVar2 + 0x4c),(int *)0x0),
                iVar3 != 0)) && (local_8 != (int *)0x0)) {
              local_8[iVar5] = iVar2;
              iVar5 = iVar5 + 1;
            }
            local_10 = local_10 + 1;
            local_c = local_c + 1;
          } while (local_10 < DAT_010250b4);
        }
        if (((*(char *)(iVar1 + 0x18) == '\0') && (*(int *)(iVar1 + 0x10) != 0)) && (iVar5 < 2)) {
          iVar5 = 0;
        }
        if (iVar5 != 0) {
          puVar4 = FUN_01005579((int)local_8,iVar5 << 2);
          *(uint **)(iVar1 + 0x44) = puVar4;
          *(int *)(iVar1 + 0x48) = iVar5;
          local_8 = (int *)0x0;
        }
      }
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    } while (local_18 < DAT_010250b4);
    if (local_8 != (int *)0x0) {
      FUN_01005541((int)local_8);
    }
  }
  _DAT_01024f04 = _DAT_01024f04 + -1;
  return;
}



void FUN_0101304d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x44) != 0) &&
     (piVar1 = (int *)(param_1 + 0x48), param_1 = 0, 0 < *piVar1)) {
    do {
      piVar1 = *(int **)(*(int *)(iVar2 + 0x44) + param_1 * 4);
      if ((*(char *)(piVar1 + 6) == '\0') &&
         ((piVar1[4] != 0 &&
          (iVar3 = FUN_0100400b(piVar1,(int *)(iVar2 + 0x34),&local_14), iVar3 != 0)))) {
        FUN_01004a76(local_c,local_8,(int)&DAT_01025088,local_14,local_10,(int)&DAT_01025058,
                     local_14,local_10,piVar1[4],(undefined *)(local_14 - *piVar1),
                     (undefined *)(local_10 - piVar1[1]),piVar1[5],
                     (piVar1[0xb] - *piVar1) + local_14,(piVar1[0xc] - piVar1[1]) + local_10);
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar2 + 0x48));
  }
  return;
}



void FUN_010130f3(void)

{
  ushort *puVar1;
  int **ppiVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int **local_10;
  undefined *local_c;
  
  iVar4 = DAT_01025070;
  if ((1 < DAT_01025070) && (iVar6 = 0, iVar4 = DAT_01025070, 0 < DAT_01025070)) {
    do {
      iVar5 = iVar6;
      if (iVar6 < iVar4 / 2) {
        do {
          ppiVar2 = DAT_0102506c + iVar6;
          puVar1 = (ushort *)((int)DAT_0102506c[iVar5] + 0x1a);
          if (*puVar1 <= *(ushort *)((int)*ppiVar2 + 0x1a) &&
              *(ushort *)((int)*ppiVar2 + 0x1a) != *puVar1) {
            piVar3 = *ppiVar2;
            *ppiVar2 = DAT_0102506c[iVar5];
            DAT_0102506c[iVar5] = piVar3;
            iVar4 = DAT_01025070;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4 / 2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  local_14 = 0;
  local_10 = DAT_0102506c;
  if (0 < iVar4) {
    local_c = &DAT_010250c8;
    do {
      piVar3 = *local_10;
      if (piVar3[4] == 0) {
LAB_010131e5:
        piVar3[0xf] = -1;
      }
      else {
        iVar4 = FUN_0100400b(piVar3,(int *)&DAT_01025074,piVar3 + 0xd);
        if (iVar4 == 0) goto LAB_010131e5;
        iVar4 = piVar3[0xe];
        iVar6 = piVar3[0xd];
        FUN_01004870((int)local_c,piVar3[0xf],piVar3[0x10],0,0,(int)&DAT_01025088,iVar6,iVar4);
        FUN_01004b75(piVar3[0xf],piVar3[0x10],&DAT_01025088,iVar6,iVar4,(int)&DAT_01025058,iVar6,
                     iVar4,(char *)piVar3[4],iVar6 - *piVar3,iVar4 - piVar3[1],
                     *(ushort *)((int)piVar3 + 0x1a));
      }
      local_14 = local_14 + 1;
      local_c = local_c + 0x25;
      local_10 = local_10 + 1;
    } while (local_14 < DAT_01025070);
  }
  return;
}



void FUN_0101320d(void)

{
  int iVar1;
  undefined *puVar2;
  int local_c;
  int *local_8;
  
  local_8 = (int *)(DAT_0102506c + -4 + DAT_01025070 * 4);
  if (-1 < DAT_01025070 + -1) {
    puVar2 = &DAT_010250c8 + (DAT_01025070 + -1) * 0x25;
    local_c = DAT_01025070;
    do {
      iVar1 = *local_8;
      if (0 < *(int *)(iVar1 + 0x3c)) {
        FUN_01004870((int)&DAT_01025088,*(int *)(iVar1 + 0x3c),*(int *)(iVar1 + 0x40),
                     *(int *)(iVar1 + 0x34),*(int *)(iVar1 + 0x38),(int)puVar2,0,0);
      }
      local_8 = local_8 + -1;
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x34);
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x38);
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x3c);
      puVar2 = puVar2 + -0x25;
      local_c = local_c + -1;
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x40);
    } while (local_c != 0);
  }
  return;
}



undefined4 FUN_01013283(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_010250b4) {
    do {
      if (*(int *)(DAT_01025084 + iVar2 * 4) == param_1) {
        while (iVar2 < DAT_010250b4) {
          puVar1 = (undefined4 *)(DAT_01025084 + iVar2 * 4);
          *puVar1 = puVar1[1];
          iVar2 = iVar2 + 1;
        }
        DAT_010250b4 = DAT_010250b4 + -1;
        if (*(int *)(param_1 + 0x44) != 0) {
          FUN_01005541(*(int *)(param_1 + 0x44));
        }
        FUN_01005541(param_1);
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_010250b4);
  }
  return 0;
}



undefined4 FUN_010132e8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_01025070) {
    do {
      if (*(int *)(DAT_0102506c + iVar2 * 4) == param_1) {
        while (iVar2 < DAT_01025070) {
          puVar1 = (undefined4 *)(DAT_0102506c + iVar2 * 4);
          *puVar1 = puVar1[1];
          iVar2 = iVar2 + 1;
        }
        DAT_01025070 = DAT_01025070 + -1;
        FUN_01005541(param_1);
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_01025070);
  }
  return 0;
}



undefined4 FUN_01013340(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 < *param_2) {
    *param_3 = *param_1;
    iVar2 = param_2[2] - *param_1;
    iVar3 = *param_2;
  }
  else {
    *param_3 = *param_2;
    iVar2 = param_1[2] - *param_2;
    iVar3 = *param_1;
  }
  param_3[2] = iVar2 + 1 + iVar3;
  if (param_1[1] < param_2[1]) {
    param_3[1] = param_1[1];
    iVar2 = param_2[3] - param_1[1];
    iVar3 = param_2[1];
  }
  else {
    param_3[1] = param_2[1];
    iVar2 = param_1[3] - param_2[1];
    iVar3 = param_1[1];
  }
  param_3[3] = iVar2 + 1 + iVar3;
  if ((param_3[2] == param_1[2] + param_2[2] || param_3[2] < param_1[2] + param_2[2]) &&
     (param_3[3] == param_1[3] + param_2[3] || param_3[3] < param_1[3] + param_2[3])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010133c7(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  int iVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  int local_c;
  int **local_8;
  
  local_c = 0;
  local_8 = DAT_01025068;
  if (0 < DAT_010250c0) {
    do {
      piVar2 = *local_8;
      if (*(char *)((int)piVar2 + 0x19) == '\0') {
        iVar3 = FUN_0100400b(piVar2,(int *)&DAT_01025074,piVar2 + 0xd);
        if (iVar3 == 0) {
LAB_0101342c:
          piVar2[0xf] = -1;
        }
        else {
          if (piVar2[4] == 0) goto LAB_0101359d;
        }
      }
      else {
        if (*(char *)((int)piVar2 + 0x19) == '\x01') {
          if (0 < piVar2[9]) {
            FUN_010040c2(piVar2 + 7,piVar2,piVar2 + 0xd);
          }
          iVar3 = FUN_0100400b(piVar2 + 0xd,(int *)&DAT_01025074,piVar2 + 0xd);
          if (iVar3 == 0) goto LAB_0101342c;
LAB_0101359d:
          local_10 = piVar2[0xe];
          local_14 = piVar2[0xf];
          iVar3 = piVar2[0xd];
          iVar8 = piVar2[0x10];
          FUN_01004a08((int)&DAT_01025058,local_14,iVar8,iVar3,local_10,0xffff);
          if (DAT_010253b4 == 0) {
            FUN_010047fa((undefined4 *)&DAT_01025088,local_14,iVar8,iVar3,local_10,0);
          }
          else {
            FUN_01004870((int)&DAT_01025088,local_14,iVar8,iVar3,local_10,DAT_010253b4,iVar3,
                         local_10);
          }
        }
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_c < DAT_010250c0);
  }
  iVar3 = 0;
  ppiVar7 = DAT_01025068;
  if (0 < DAT_010250c0) {
    do {
      piVar2 = *ppiVar7;
      if ((0 < piVar2[0xf]) &&
         ((*(char *)((int)piVar2 + 0x19) == '\0' || (*(char *)((int)piVar2 + 0x19) == '\x01')))) {
        FUN_0101304d((int)piVar2);
      }
      iVar3 = iVar3 + 1;
      ppiVar7 = ppiVar7 + 1;
    } while (iVar3 < DAT_010250c0);
  }
  FUN_010130f3();
  if (_DAT_01024754 != 0) {
    FUN_01004664();
    local_10 = DAT_010253ac + DAT_010250a5;
    local_14 = DAT_010253b0 + DAT_010250a9;
    local_c = 0;
    local_8 = DAT_01025068;
    if (0 < DAT_010250c0) {
      do {
        piVar2 = *local_8;
        local_18 = piVar2;
        if (0 < piVar2[0xf]) {
          iVar3 = piVar2[0xd];
          local_18 = piVar2;
          FUN_0100469c((BITMAPINFO **)&DAT_01025088,iVar3,piVar2[0xe],local_10 + iVar3,
                       local_14 + piVar2[0xe],piVar2[0xf],piVar2[0x10]);
        }
        cVar1 = *(char *)(local_18 + 6);
        piVar2[7] = piVar2[0xd];
        piVar2[8] = piVar2[0xe];
        piVar2[9] = piVar2[0xf];
        piVar2[10] = piVar2[0x10];
        if (cVar1 != '\0') {
          FUN_01013283((int)local_18);
        }
        local_c = local_c + 1;
        local_8 = local_8 + 1;
      } while (local_c < DAT_010250c0);
    }
    local_c = 0;
    local_8 = DAT_0102506c;
    if (0 < DAT_01025070) {
      do {
        piVar2 = *local_8;
        iVar3 = FUN_01013340(piVar2 + 0xd,piVar2 + 7,&local_28);
        if ((iVar3 == 0) || ((*local_8)[0xf] < 1)) {
          if (0 < piVar2[0xf]) {
            iVar3 = piVar2[0xd];
            FUN_0100469c((BITMAPINFO **)&DAT_01025088,iVar3,piVar2[0xe],local_10 + iVar3,
                         local_14 + piVar2[0xe],piVar2[0xf],piVar2[0x10]);
          }
          iVar3 = piVar2[9];
          if (0 < iVar3) {
            iVar8 = piVar2[10];
            iVar4 = piVar2[8];
            iVar6 = piVar2[7];
            iVar5 = local_14 + iVar4;
            goto LAB_01013631;
          }
        }
        else {
          if (0 < local_20) {
            iVar5 = local_14 + local_24;
            iVar4 = local_24;
            iVar6 = local_28;
            iVar3 = local_20;
            iVar8 = local_1c;
LAB_01013631:
            FUN_0100469c((BITMAPINFO **)&DAT_01025088,iVar6,iVar4,local_10 + iVar6,iVar5,iVar3,iVar8
                        );
          }
        }
        local_c = local_c + 1;
        local_8 = local_8 + 1;
      } while (local_c < DAT_01025070);
    }
    FUN_010046ed();
  }
  DAT_010250c0 = 0;
  FUN_0101320d();
  return;
}



void FUN_01013670(void)

{
  int iVar1;
  
  FUN_0100460c((LPCVOID *)&DAT_01025088);
  FUN_010049d6((undefined4 *)&DAT_01025058);
  iVar1 = 0;
  if (0 < DAT_010250b4) {
    do {
      FUN_01013283(*(int *)(DAT_01025084 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_010250b4);
  }
  iVar1 = 0;
  if (0 < DAT_01025070) {
    do {
      FUN_010132e8(*(int *)(DAT_0102506c + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_01025070);
  }
  FUN_01005541(DAT_0102506c);
  FUN_01005541(DAT_01025068);
  FUN_01005541(DAT_01025084);
  DAT_01025070 = 0;
  DAT_010250b4 = 0;
  DAT_010250c0 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01013705(int param_1,float param_2,float param_3,int *param_4,int *param_5)

{
  int *piVar1;
  
  piVar1 = param_5;
  _DAT_01024f04 = _DAT_01024f04 + 1;
  _DAT_010250b0 = param_3;
  _DAT_010250bc = param_2;
  _DAT_010250b8 = 4294967296.00000000 / param_3 + param_2;
  DAT_01025084 = FUN_010054c2(4000);
  DAT_01025068 = FUN_010054c2(4000);
  DAT_0102506c = FUN_010054c2(0x50);
  FUN_0100459a((int **)&DAT_01025088,param_4,param_5);
  FUN_01004989(&DAT_01025058,(uint)param_4,(int)param_5);
  FUN_01004a08((int)&DAT_01025058,(int)DAT_01025058,(int)DAT_0102505a,0,0,0xffff);
  _DAT_01025078 = 0;
  _DAT_01025074 = 0;
  _DAT_0102507c = param_4;
  _DAT_01025080 = param_5;
  DAT_010250a9 = 0;
  DAT_010250a5 = 0;
  param_5 = (int *)&DAT_010250c8;
  do {
    FUN_010045aa(param_5,0x40,0x40,1);
    param_5 = (int *)((int)param_5 + 0x25);
  } while ((int)param_5 < 0x10253ac);
  DAT_010253b4 = param_1;
  if (param_1 == 0) {
    FUN_010047fa((undefined4 *)&DAT_01025088,DAT_01025094,DAT_01025098,0,0,0);
  }
  else {
    FUN_01004870((int)&DAT_01025088,(int)param_4,(int)piVar1,0,0,param_1,0,0);
  }
  _DAT_01024f04 = _DAT_01024f04 + -1;
  return;
}



void FUN_0101382a(int param_1)

{
  if ((*(char *)(param_1 + 0x19) != '\x02') && (DAT_010250c0 < 999)) {
    *(int *)(DAT_01025068 + DAT_010250c0 * 4) = param_1;
    DAT_010250c0 = DAT_010250c0 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_0101385c(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_010054c2(0x5c);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar1[1] = param_5;
    piVar1[4] = param_2;
    *piVar1 = param_4;
    *(undefined *)((int)piVar1 + 0x19) = (char)param_1;
    *(undefined *)(piVar1 + 6) = 0;
    piVar1[0x11] = 0;
    piVar1[0x12] = 0;
    if (param_6 == (int *)0x0) {
      piVar1[0x15] = -1;
      piVar1[0x16] = -1;
      piVar1[0x13] = 0;
      piVar1[0x14] = 0;
    }
    else {
      piVar1[0x13] = *param_6;
      piVar1[0x14] = param_6[1];
      piVar1[0x15] = param_6[2];
      piVar1[0x16] = param_6[3];
    }
    if (param_2 == 0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
    }
    else {
      piVar1[2] = *(int *)(param_2 + 0xc);
      piVar1[3] = *(int *)(param_2 + 0x10);
    }
    piVar1[5] = param_3;
    piVar1[0xc] = 0;
    piVar1[0xb] = 0;
    if ((param_3 == 0) && (param_1 != 2)) {
      piVar1[5] = DAT_010253b8;
      piVar1[0xb] = param_4 - _DAT_010253bc;
      piVar1[0xc] = param_5 - _DAT_010253c0;
    }
    piVar1[7] = *piVar1;
    piVar1[8] = piVar1[1];
    piVar1[9] = piVar1[2];
    piVar1[10] = piVar1[3];
    if (param_1 == 2) {
      *(int **)(DAT_0102506c + DAT_01025070 * 4) = piVar1;
      DAT_01025070 = DAT_01025070 + 1;
      piVar2 = piVar1;
    }
    else {
      *(int **)(DAT_01025084 + DAT_010250b4 * 4) = piVar1;
      DAT_010250b4 = DAT_010250b4 + 1;
      FUN_0101382a((int)piVar1);
      piVar2 = piVar1;
    }
  }
  return piVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0101394e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_010253b8 = param_1;
  _DAT_010253bc = param_2;
  _DAT_010253c0 = param_3;
  return;
}



void FUN_01013974(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[4] = param_2;
    if (param_2 != 0) {
      param_1[2] = *(undefined4 *)(param_2 + 0xc);
      param_1[3] = *(undefined4 *)(param_2 + 0x10);
    }
    param_1[5] = param_3;
    FUN_0101382a((int)param_1);
  }
  return;
}



void FUN_010139b6(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != param_2)) {
    *(int *)(param_1 + 0x10) = param_2;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
    }
    FUN_0101382a(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010139ec(undefined4 *param_1,int param_2,float param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float fVar1;
  undefined2 uVar2;
  bool in_PF;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[4] = param_2;
    if (param_2 != 0) {
      *param_1 = param_4;
      param_1[1] = param_5;
      param_1[2] = *(undefined4 *)(param_2 + 0xc);
      param_1[3] = *(undefined4 *)(param_2 + 0x10);
    }
    if (in_PF) {
      fVar1 = (param_3 - _DAT_010250bc) * _DAT_010250b0;
      if ((ushort)((ushort)(fVar1 < _DAT_010250b8) << 8 | (ushort)(fVar1 == _DAT_010250b8) << 0xe)
          == 0) {
        *(undefined2 *)((int)param_1 + 0x1a) = 0xffff;
      }
      else {
        uVar2 = _ftol();
        *(undefined2 *)((int)param_1 + 0x1a) = uVar2;
      }
    }
    else {
      *(undefined2 *)((int)param_1 + 0x1a) = 0;
    }
  }
  return;
}



void FUN_01013a6a(void)

{
  FUN_010130f3();
  FUN_01004787((BITMAPINFO **)&DAT_01025088,DAT_010250a5,DAT_010250a9);
  FUN_0101320d();
  return;
}



void FUN_01013a8f(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  DAT_010253ac = DAT_010253ac + param_1;
  DAT_010253b0 = DAT_010253b0 + param_2;
  FUN_010130f3();
  FUN_01004705((BITMAPINFO **)&DAT_01025088,param_3,param_4,DAT_010250a5 + DAT_010253ac + param_3,
               DAT_010250a9 + DAT_010253b0 + param_4,param_5,param_6);
  FUN_0101320d();
  return;
}



undefined4 * __thiscall FUN_01013af1(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  iVar2 = _ftol();
  *(int *)((int)this + 0xc) = DAT_01024f84 - iVar2;
  if (param_1 == (char *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    piVar4 = FUN_010054c2((uint)(pcVar3 + (1 - (int)(param_1 + 1))));
    *(int **)((int)this + 4) = piVar4;
  }
  pcVar3 = *(char **)((int)this + 4);
  if (pcVar3 != (char *)0x0) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return (undefined4 *)this;
}



float10 __fastcall FUN_01013b60(int param_1)

{
  return (float10)(*(int *)(param_1 + 0xc) - DAT_01024f84) * (float10)0.00100000;
}



void __thiscall FUN_01013b82(void *this,undefined4 param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 8) = param_1;
  iVar1 = _ftol();
  *(int *)((int)this + 0xc) = DAT_01024f84 - iVar1;
  return;
}



int * FUN_01013bb3(LPCSTR param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar2 = FUN_010054c2(0x44);
  if (piVar2 != (int *)0x0) {
    *piVar2 = -9999;
    piVar2[2] = param_2;
    psVar3 = (short *)FUN_010063db(DAT_01027c0c,param_1,10);
    if (psVar3 != (short *)0x0) {
      sVar1 = *psVar3;
      piVar2[3] = (int)psVar3[1];
      piVar2[4] = (int)psVar3[2];
      piVar2[5] = (int)psVar3[3];
      piVar2[6] = (int)psVar3[4];
      iVar5 = (int)sVar1;
      piVar6 = piVar2 + 7;
      param_2 = 10;
      do {
        iVar4 = FUN_01006270((int)DAT_01027c0c,iVar5,1);
        *piVar6 = iVar4;
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return piVar2;
    }
    FUN_01005541((int)piVar2);
  }
  return (int *)0x0;
}



void FUN_01013c48(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_010054c2(0x44);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0x11;
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *piVar1 = *param_1;
      param_1 = param_1 + 1;
      piVar1 = piVar1 + 1;
    }
  }
  return;
}



void FUN_01013c6f(int param_1)

{
  if (param_1 != 0) {
    FUN_01005541(param_1);
    return;
  }
  return;
}



void FUN_01013c89(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1[1] = 1;
  }
  return;
}



void FUN_01013caa(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_010047fa((undefined4 *)&DAT_01025088,*(uint *)(param_1 + 0x14),*(int *)(param_1 + 0x18),
                   *(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10),0);
    }
    else {
      FUN_01004870((int)&DAT_01025088,*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),
                   *(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10),*(int *)(param_1 + 8),
                   *(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    }
    if (param_2 != 0) {
      FUN_01004705((BITMAPINFO **)&DAT_01025088,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10),
                   DAT_010250a5 + *(int *)(param_1 + 0xc),DAT_010250a9 + *(int *)(param_1 + 0x10),
                   *(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18));
    }
  }
  return;
}



void FUN_01013d2d(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char local_14 [12];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (((param_1 != (int *)0x0) && (param_1[1] != 0)) && (*param_1 < 0x3b9aca01)) {
    iVar3 = param_1[4];
    iVar7 = param_1[3] + param_1[5];
    param_1[1] = 0;
    FUN_01013caa((int)param_1,0);
    if (-1 < *param_1) {
      _ltoa(*param_1,local_14,10);
      pcVar6 = local_14;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      pcVar6 = pcVar6 + (-1 - (int)(local_14 + 1));
      while (-1 < (int)pcVar6) {
        pcVar1 = local_14 + (int)pcVar6;
        *pcVar1 = *pcVar1 + -0x30;
        iVar4 = param_1[(int)*pcVar1 + 7];
        iVar5 = *(int *)(iVar4 + 0xc);
        iVar7 = iVar7 - iVar5;
        if (DAT_010253b4 == 0) {
          FUN_01004870((int)&DAT_01025088,iVar5,*(int *)(iVar4 + 0x10),iVar7,iVar3,iVar4,0,0);
        }
        else {
          FUN_010048ec((int)&DAT_01025088,iVar5,*(int *)(iVar4 + 0x10),iVar7,iVar3,iVar4,0,0);
        }
        pcVar6 = pcVar6 + -1;
      }
    }
    FUN_01004705((BITMAPINFO **)&DAT_01025088,param_1[3],param_1[4],DAT_010250a5 + param_1[3],
                 DAT_010250a9 + param_1[4],param_1[5],param_1[6]);
  }
  FUN_0101cd9e();
  return;
}



undefined4 FUN_01013e25(void)

{
  return 1;
}



void FUN_01013e2e(void)

{
  int iVar1;
  
  if (DAT_010253c4 != 0) {
    iVar1 = 8;
    do {
      if (*(LPCVOID **)(iVar1 + DAT_010253c4) != (LPCVOID *)0x0) {
        FUN_0100460c(*(LPCVOID **)(iVar1 + DAT_010253c4));
        FUN_01005541(*(int *)(iVar1 + DAT_010253c4));
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x208);
    DAT_010253c4 = 0;
  }
  return;
}



void FUN_01013e73(LPCSTR param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  short *psVar3;
  short *psVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  hResInfo = FindResourceA(DAT_01028204,param_1,(LPCSTR)0xa);
  if ((hResInfo != (HRSRC)0x0) &&
     (hResData = LoadResource(DAT_01028204,hResInfo), hResData != (HGLOBAL)0x0)) {
    psVar3 = (short *)LockResource(hResData);
    local_c = (undefined4 *)(psVar3 + 0x43);
    DAT_010253c4 = FUN_010054c2(0x208);
    if (DAT_010253c4 == (int *)0x0) {
      FreeResource(hResData);
    }
    else {
      iVar10 = 0x80;
      iVar8 = 0x80;
      piVar5 = DAT_010253c4 + 2;
      while (iVar8 != 0) {
        iVar8 = iVar8 + -1;
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      iVar8 = 0;
      psVar4 = psVar3 + 3;
      do {
        if (iVar8 < (int)*(char *)psVar4) {
          iVar8 = (int)*(char *)psVar4;
        }
        psVar4 = (short *)((int)psVar4 + 1);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      piVar5 = FUN_010054c2((int)psVar3[2] * iVar8 + 4);
      if (piVar5 == (int *)0x0) {
        FUN_01005541((int)DAT_010253c4);
        DAT_010253c4 = (int *)0x0;
      }
      else {
        local_8 = 0;
        *DAT_010253c4 = (int)*psVar3;
        DAT_010253c4[1] = (int)psVar3[2];
        param_1 = (LPCSTR)0x8;
        do {
          pcVar1 = (char *)((int)psVar3 + local_8 + 6);
          if (*pcVar1 != '\0') {
            piVar6 = FUN_010054c2(0x25);
            *(int **)(param_1 + (int)DAT_010253c4) = piVar6;
            if (*(undefined4 **)(param_1 + (int)DAT_010253c4) == (undefined4 *)0x0) break;
            iVar8 = FUN_010045aa(*(undefined4 **)(param_1 + (int)DAT_010253c4),(int)*pcVar1,
                                 (int)psVar3[2],0);
            if (iVar8 != 0) {
              FUN_01005541(DAT_010253c4[local_8 + 2]);
              DAT_010253c4[local_8 + 2] = 0;
              break;
            }
            uVar7 = (int)*pcVar1 * (int)psVar3[2] + 1;
            puVar2 = (undefined4 *)((int)local_c + uVar7);
            uVar9 = uVar7 >> 2;
            puVar12 = (undefined4 *)((int)piVar5 + 3);
            while (uVar9 != 0) {
              uVar9 = uVar9 - 1;
              *puVar12 = *local_c;
              local_c = local_c + 1;
              puVar12 = puVar12 + 1;
            }
            local_14 = 0;
            uVar7 = uVar7 & 3;
            while (uVar7 != 0) {
              uVar7 = uVar7 - 1;
              *(undefined *)puVar12 = *(undefined *)local_c;
              local_c = (undefined4 *)((int)local_c + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            uVar7 = SEXT14(*pcVar1);
            local_10 = piVar5 + 1;
            iVar8 = *(int *)(param_1 + (int)DAT_010253c4);
            iVar10 = *(int *)(iVar8 + 0x14);
            piVar6 = (int *)(*(int *)(iVar8 + 8) - (*(int *)(iVar8 + 0x10) + -1) * -iVar10);
            local_c = puVar2;
            if (0 < psVar3[2]) {
              do {
                uVar9 = uVar7 >> 2;
                piVar11 = local_10;
                piVar13 = piVar6;
                while (uVar9 != 0) {
                  uVar9 = uVar9 - 1;
                  *piVar13 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar13 = piVar13 + 1;
                }
                uVar9 = uVar7 & 3;
                local_14 = local_14 + 1;
                while (uVar9 != 0) {
                  uVar9 = uVar9 - 1;
                  *(undefined *)piVar13 = *(undefined *)piVar11;
                  piVar11 = (int *)((int)piVar11 + 1);
                  piVar13 = (int *)((int)piVar13 + 1);
                }
                local_10 = (int *)((int)local_10 + uVar7);
                piVar6 = (int *)((int)piVar6 + -iVar10);
                local_c = puVar2;
              } while (local_14 < (int)psVar3[2]);
            }
          }
          param_1 = param_1 + 4;
          local_8 = local_8 + 1;
        } while ((int)param_1 < 0x208);
        if (local_8 != 0x80) {
          FUN_01013e2e();
        }
      }
      FreeResource(hResData);
    }
  }
  return;
}



undefined4 * __thiscall FUN_01014092(void *this,int param_1,int param_2)

{
  short *psVar1;
  
  FUN_01017c6d(this,param_1,param_2,1);
  *(undefined4 *)this = 0x10023b4;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x3e) = DAT_010253b4;
  *(undefined4 *)((int)this + 0x42) = DAT_010253c4;
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x3a) = 0;
  if (0 < param_2) {
    psVar1 = FUN_0100981a(param_2,0x5dc,&param_1);
    *(int *)((int)this + 0x2a) = (int)*psVar1;
    *(int *)((int)this + 0x2e) = (int)psVar1[1];
    *(int *)((int)this + 0x32) = (int)psVar1[2];
    *(int *)((int)this + 0x36) = (int)psVar1[3];
  }
  return (undefined4 *)this;
}



void * __thiscall FUN_01014115(void *this,byte param_1)

{
  if (*(int *)((int)this + 4) != 0) {
    FUN_01005541(*(int *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



void __fastcall FUN_01014143(int param_1)

{
  int iVar1;
  undefined4 *this;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x3e) == 0) {
    FUN_010047fa((undefined4 *)&DAT_01025088,*(uint *)(param_1 + 0x32),*(int *)(param_1 + 0x36),
                 *(int *)(param_1 + 0x2a),*(int *)(param_1 + 0x2e),0);
  }
  else {
    FUN_01004870((int)&DAT_01025088,*(int *)(param_1 + 0x32),*(int *)(param_1 + 0x36),
                 *(int *)(param_1 + 0x2a),*(int *)(param_1 + 0x2e),*(int *)(param_1 + 0x3e),
                 *(int *)(param_1 + 0x2a),*(int *)(param_1 + 0x2e));
  }
  FUN_01004705((BITMAPINFO **)&DAT_01025088,*(int *)(param_1 + 0x2a),*(int *)(param_1 + 0x2e),
               DAT_010250a5 + *(int *)(param_1 + 0x2a),DAT_010250a9 + *(int *)(param_1 + 0x2e),
               *(int *)(param_1 + 0x32),*(int *)(param_1 + 0x36));
  iVar1 = *(int *)(param_1 + 0x3a);
  if (iVar1 != 0) {
    if (iVar1 != -1) {
      FUN_01007659(iVar1);
    }
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  while (*(int *)(param_1 + 0x46) != 0) {
    this = *(undefined4 **)(param_1 + 0x46);
    uVar2 = *this;
    if (this != (undefined4 *)0x0) {
      FUN_01014115(this,1);
    }
    *(undefined4 *)(param_1 + 0x46) = uVar2;
  }
  return;
}



void FUN_010141e1(undefined4 param_1,undefined **param_2)

{
  undefined4 *this;
  undefined4 uVar1;
  
  this = *(undefined4 **)((int)param_2 + 0x46);
  *(undefined4 *)((int)param_2 + 0x3a) = 0;
  if (this != (undefined4 *)0x0) {
    uVar1 = *this;
    FUN_01014115(this,1);
    *(undefined4 *)((int)param_2 + 0x46) = uVar1;
    FUN_01014269();
    FUN_01011ec9(0x3c,param_2);
  }
  return;
}



void __fastcall FUN_0101421c(undefined4 *param_1)

{
  int iVar1;
  int *this;
  
  iVar1 = *(int *)((int)param_1 + 0x3a);
  *param_1 = 0x10023b4;
  if (iVar1 != 0) {
    if (iVar1 != -1) {
      FUN_01007659(iVar1);
    }
    *(undefined4 *)((int)param_1 + 0x3a) = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x46);
  while (iVar1 != 0) {
    this = *(int **)((int)param_1 + 0x46);
    iVar1 = *this;
    if (this != (int *)0x0) {
      FUN_01014115(this,1);
    }
    *(int *)((int)param_1 + 0x46) = iVar1;
  }
  FUN_01018fbc(param_1);
  return;
}



void __fastcall FUN_01014269(int iParm1)

{
  byte bVar1;
  int *this;
  byte *pbVar2;
  int iVar3;
  bool in_PF;
  float10 fVar4;
  float local_28;
  byte *local_10;
  int local_c;
  byte *local_8;
  
  if (*(int *)(iParm1 + 0x3e) == 0) {
    FUN_010047fa((undefined4 *)&DAT_01025088,*(uint *)(iParm1 + 0x32),*(int *)(iParm1 + 0x36),
                 *(int *)(iParm1 + 0x2a),*(int *)(iParm1 + 0x2e),0);
  }
  else {
    FUN_01004870((int)&DAT_01025088,*(int *)(iParm1 + 0x32),*(int *)(iParm1 + 0x36),
                 *(int *)(iParm1 + 0x2a),*(int *)(iParm1 + 0x2e),*(int *)(iParm1 + 0x3e),
                 *(int *)(iParm1 + 0x2a),*(int *)(iParm1 + 0x2e));
  }
  while (*(int *)(iParm1 + 0x46) != 0) {
    this = *(int **)(iParm1 + 0x46);
    if (in_PF) {
      fVar4 = FUN_01013b60((int)this);
      if (in_PF) {
        if (in_PF) {
          local_28 = (float)fVar4;
        }
        else {
          local_28 = 0.25000000;
        }
        iVar3 = FUN_010074b7(local_28,iParm1,(int)FUN_010141e1);
        *(int *)(iParm1 + 0x3a) = iVar3;
        goto LAB_01014334;
      }
      iVar3 = *this;
    }
    else {
      iVar3 = *this;
      if (iVar3 == 0) {
        *(undefined4 *)(iParm1 + 0x3a) = 0xffffffff;
LAB_01014334:
        this = *(int **)(iParm1 + 0x42);
        if (this == (int *)0x0) {
          FUN_01004705((BITMAPINFO **)&DAT_01025088,*(int *)(iParm1 + 0x2a),*(int *)(iParm1 + 0x2e),
                       DAT_010250a5 + *(int *)(iParm1 + 0x2a),DAT_010250a9 + *(int *)(iParm1 + 0x2e)
                       ,*(int *)(iParm1 + 0x32),*(int *)(iParm1 + 0x36));
          FUN_01003803(*(LPCSTR *)(*(int *)(iParm1 + 0x46) + 4),
                       *(int *)(iParm1 + 0x2a) + DAT_010250a5,*(int *)(iParm1 + 0x2e) + DAT_010250a9
                       ,*(int *)(iParm1 + 0x32),*(int *)(iParm1 + 0x36));
          return;
        }
        pbVar2 = *(byte **)(*(int *)(iParm1 + 0x46) + 4);
        local_c = *(int *)(iParm1 + 0x2e);
        goto LAB_01014479;
      }
    }
    if (this != (int *)0x0) {
      FUN_01014115(this,1);
    }
    *(int *)(iParm1 + 0x46) = iVar3;
  }
LAB_01014483:
  FUN_01004705((BITMAPINFO **)&DAT_01025088,*(int *)(iParm1 + 0x2a),*(int *)(iParm1 + 0x2e),
               DAT_010250a5 + *(int *)(iParm1 + 0x2a),DAT_010250a9 + *(int *)(iParm1 + 0x2e),
               *(int *)(iParm1 + 0x32),*(int *)(iParm1 + 0x36));
  return;
LAB_01014479:
  bVar1 = *pbVar2;
  if ((bVar1 == 0) || (*(int *)(iParm1 + 0x36) + *(int *)(iParm1 + 0x2e) < this[1] + local_c))
  goto LAB_01014483;
  iVar3 = 0;
  local_10 = (byte *)0x0;
  local_8 = pbVar2;
LAB_010143f9:
  if (((bVar1 & 0x7f) == 0) || (((uint)bVar1 & 0x7f) == 10)) goto LAB_0101440a;
  if (this[((uint)bVar1 & 0x7f) + 2] == 0) {
LAB_010143f5:
    bVar1 = *local_8;
    goto LAB_010143f9;
  }
  iVar3 = *this + *(int *)(this[((uint)bVar1 & 0x7f) + 2] + 0xc) + iVar3;
  if (iVar3 <= *(int *)(iParm1 + 0x32)) {
    if (*local_8 == 0x20) {
      local_10 = local_8;
    }
    local_8 = local_8 + 1;
    goto LAB_010143f5;
  }
  if (local_10 != (byte *)0x0) {
    local_8 = local_10;
  }
LAB_0101440a:
  local_10 = *(byte **)(iParm1 + 0x2a);
  while (pbVar2 < local_8) {
    iVar3 = this[((uint)*pbVar2 & 0x7f) + 2];
    pbVar2 = pbVar2 + 1;
    if (iVar3 != 0) {
      if (DAT_010253b4 == 0) {
        FUN_01004870((int)&DAT_01025088,*(int *)(iVar3 + 0xc),*(int *)(iVar3 + 0x10),(int)local_10,
                     local_c,iVar3,0,0);
      }
      else {
        FUN_010048ec((int)&DAT_01025088,*(int *)(iVar3 + 0xc),*(int *)(iVar3 + 0x10),(int)local_10,
                     local_c,iVar3,0,0);
      }
      this = *(int **)(iParm1 + 0x42);
      local_10 = (byte *)((int)local_10 + *this + *(int *)(iVar3 + 0xc));
    }
  }
  while ((*pbVar2 & 0x7f) == 0x20) {
    pbVar2 = pbVar2 + 1;
  }
  if ((*pbVar2 & 0x7f) == 10) {
    pbVar2 = pbVar2 + 1;
  }
  this = *(int **)(iParm1 + 0x42);
  local_c = local_c + this[1];
  goto LAB_01014479;
}



void __thiscall FUN_010144b7(int iParm1,byte *param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  void *this;
  undefined4 *this_00;
  byte *pbVar4;
  bool bVar5;
  bool in_PF;
  
  if (param_1 != (byte *)0x0) {
    if (*(int *)(iParm1 + 0x46) != 0) {
      pbVar2 = *(byte **)((int)*(void **)(iParm1 + 0x4a) + 4);
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar5 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_010144fe:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != false);
          goto LAB_01014503;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar5 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_010144fe;
        pbVar4 = pbVar4 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_01014503:
      if (iVar3 == 0) {
        FUN_01013b82(*(void **)(iParm1 + 0x4a),param_2);
        if (*(int *)(iParm1 + 0x4a) != *(int *)(iParm1 + 0x46)) {
          return;
        }
        iVar3 = *(int *)(iParm1 + 0x3a);
        if ((iVar3 != 0) && (iVar3 != -1)) {
          FUN_01007659(iVar3);
        }
        if (in_PF) {
          iVar3 = FUN_010074b7(param_2,iParm1,(int)FUN_010141e1);
          *(int *)(iParm1 + 0x3a) = iVar3;
          return;
        }
        *(undefined4 *)(iParm1 + 0x3a) = 0xffffffff;
        return;
      }
    }
    if (*(int *)(iParm1 + 0x3a) == -1) {
      FUN_01014143(iParm1);
    }
    this = operator_new(0x10);
    if (this == (void *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_01013af1(this,(char *)param_1,param_2);
    }
    if (this_00 != (undefined4 *)0x0) {
      if (this_00[1] == 0) {
        FUN_01014115(this_00,1);
      }
      else {
        if (*(int *)(iParm1 + 0x46) == 0) {
          *(undefined4 **)(iParm1 + 0x46) = this_00;
        }
        else {
          *(undefined4 **)*(undefined4 **)(iParm1 + 0x4a) = this_00;
        }
        *(undefined4 **)(iParm1 + 0x4a) = this_00;
        if (*(int *)(iParm1 + 0x3a) == 0) {
          FUN_01014269();
        }
      }
    }
  }
  return;
}



undefined4 * __thiscall FUN_010145cf(void *this,byte param_1)

{
  FUN_0101421c((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



void FUN_010145f5(size_t param_1)

{
  calloc(1,param_1);
  return;
}



void thunk_FUN_01013a6a(void)

{
  FUN_010130f3();
  FUN_01004787((BITMAPINFO **)&DAT_01025088,DAT_010250a5,DAT_010250a9);
  FUN_0101320d();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0101461a(int param_1)

{
  if (param_1 == 1) {
    if (_DAT_01025570 == 0) {
      FUN_010056a9(0x67,1);
      FUN_010056a9(0x191,1);
      FUN_010056d3(0x194,0);
      if ((DAT_01025658 != 0) && (*(int *)(DAT_01025658 + 0xe6) != 0)) {
        *(undefined *)(*(int *)(DAT_01025658 + 0xe6) + 5) = 0;
      }
    }
    else {
      FUN_010056a9(0x191,0);
      FUN_010056a9(0x67,0);
      FUN_010056d3(0x194,1);
      if ((DAT_01025658 != 0) && (*(int *)(DAT_01025658 + 0xe6) != 0)) {
        *(undefined *)(*(int *)(DAT_01025658 + 0xe6) + 5) = 1;
      }
    }
  }
  else {
    if (param_1 == 2) {
      FUN_010056a9(0x191,0);
      if (_DAT_01025570 == 0) {
        FUN_010056a9(0x67,1);
        FUN_010056d3(0x194,0);
      }
      if ((DAT_01025658 != 0) && (*(code **)(DAT_01025658 + 0x10a) != (code *)0x0)) {
        (**(code **)**(code ***)(code **)(DAT_01025658 + 0x10a))(0x1d,0x3fb33333);
      }
    }
    else {
      if ((param_1 == 3) || (param_1 == 4)) {
        FUN_010056a9(0x191,0);
        FUN_010056a9(0x67,0);
        _DAT_01025574 = 5000;
      }
    }
  }
  DAT_01025568 = param_1;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_01014743(int param_1)

{
  int iVar1;
  
  if ((DAT_01025568 != 0) && (0 < DAT_01025568)) {
    if (DAT_01025568 < 3) {
      return 0;
    }
    if (DAT_01025568 == 3) {
      _DAT_01025574 = _DAT_01025574 - param_1;
      if ((-1 < _DAT_01025574) && (-1 < param_1)) {
        return 1;
      }
      iVar1 = 4;
    }
    else {
      if (DAT_01025568 != 4) {
        return 1;
      }
      _DAT_01025574 = _DAT_01025574 - param_1;
      if ((-1 < _DAT_01025574) && (-1 < param_1)) {
        return 1;
      }
      iVar1 = 1;
    }
    FUN_0101461a(iVar1);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0101479b(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  LPSTR lpString2;
  uint **ppuVar5;
  uint local_fc [4];
  int local_ec [4];
  int local_dc;
  int local_d8;
  int local_d4;
  CHAR local_d0 [200];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  FUN_0101461a(2);
  iVar4 = DAT_01025658;
  local_dc = *(int *)(DAT_01025658 + 0xd6);
  iVar3 = 0;
  if (0 < local_dc) {
    ppuVar5 = (uint **)(DAT_01025658 + 0x66);
    do {
      local_fc[iVar3] = **ppuVar5;
      local_ec[iVar3] = iVar3;
      iVar3 = iVar3 + 1;
      ppuVar5 = ppuVar5 + 7;
    } while (iVar3 < local_dc);
  }
  local_d4 = 0;
  if (0 < local_dc) {
    do {
      local_d8 = local_d4;
      if (local_d4 < local_dc) {
        local_d8 = local_d4;
        do {
          uVar1 = local_fc[local_d4];
          uVar2 = local_fc[local_d8];
          if (uVar1 < uVar2) {
            local_fc[local_d8] = uVar1;
            iVar4 = local_ec[local_d8];
            local_fc[local_d4] = uVar2;
            local_ec[local_d8] = local_ec[local_d4];
            local_ec[local_d4] = iVar4;
            iVar4 = DAT_01025658;
          }
          local_d8 = local_d8 + 1;
        } while (local_d8 < local_dc);
      }
      local_d4 = local_d4 + 1;
    } while (local_d4 < local_dc);
  }
  if (((_DAT_01025570 == 0) && (*(int *)(iVar4 + 0x3e) == 0)) && (local_d4 = 0, 0 < local_dc)) {
    do {
      uVar1 = local_fc[local_d4];
      iVar4 = FUN_01004c60((int)&DAT_01025578,uVar1);
      if (-1 < iVar4) {
        lpString2 = FUN_01003752(*(short *)(local_ec + local_d4) + 0x1a);
        lstrcpyA(local_d0,lpString2);
        FUN_01005452(&DAT_01025578,uVar1,iVar4,local_d0);
      }
      local_d4 = local_d4 + 1;
    } while (local_d4 < local_dc);
  }
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_01014908(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((_DAT_01025570 == 0) && (iVar2 = *(int *)(DAT_01025658 + 0xd6) + -1, -1 < iVar2)) {
    iVar3 = iVar2 * 0x1c;
    do {
      iVar1 = FUN_01004c60((int)&DAT_01025578,**(int **)(iVar3 + 0x66 + DAT_01025658));
      if (-1 < iVar1) {
        return 1;
      }
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + -0x1c;
    } while (-1 < iVar2);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_01014956(code **param_1,float param_2,float param_3)

{
  int iVar1;
  bool in_PF;
  float10 fVar2;
  float local_44;
  undefined4 uStack64;
  undefined4 uStack60;
  undefined4 local_38;
  undefined4 uStack52;
  undefined4 uStack48;
  float local_2c;
  undefined4 local_28;
  code **local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float *local_c;
  float local_8;
  
  iVar1 = (int)param_3;
  if ((*(char *)((int)param_3 + 5) != '\0') && (*(int *)((int)param_3 + 0x6a) == 0)) {
    if (!in_PF) {
      *(undefined4 *)((int)param_3 + 0x42) = _DAT_010253d0;
    }
    local_8 = *(float *)((int)param_3 + 0x42);
    *(float *)((int)param_3 + 0x4a) = param_2;
    local_2c = param_2 * *(float *)((int)param_3 + 0x42);
    local_c = (float *)((int)param_3 + 0x2a);
    local_44 = *local_c;
    *(float *)((int)param_3 + 0x46) = local_2c;
    uStack64 = *(undefined4 *)((int)param_3 + 0x2e);
    *(code ***)((int)param_3 + 0x4e) = param_1;
    uStack60 = *(undefined4 *)((int)param_3 + 0x32);
    local_38 = *(undefined4 *)((int)param_3 + 0x36);
    uStack52 = *(undefined4 *)((int)param_3 + 0x3a);
    local_1c = *(undefined4 *)((int)param_3 + 0x6e);
    uStack48 = *(undefined4 *)((int)param_3 + 0x3e);
    local_24 = param_1;
    local_20 = param_2;
    local_28 = 0x3b03126f;
    fVar2 = (float10)FUN_0100b486(&local_44,param_3,&param_1);
    *(undefined4 *)(iVar1 + 0x86) = 0;
    param_3 = (float)fVar2;
    if (in_PF) {
      local_14 = param_2 * *(float *)(iVar1 + 0x42);
      *(float *)(iVar1 + 0x46) = local_14;
      local_18 = local_14 * *(float *)(iVar1 + 0x36);
      local_14 = local_14 * *(float *)(iVar1 + 0x3a);
      local_10 = 0;
      FUN_0101cb8e(local_c,&local_18);
    }
    else {
      (**(code **)*param_1)(iVar1,param_3);
      if ((ushort)((ushort)(local_8 < 0.00000000) << 8 | (ushort)(local_8 == 0.00000000) << 0xe) ==
          0) {
        return ABS((float10)param_3 / (float10)local_8);
      }
    }
  }
  return (float10)param_2;
}



void FUN_01014a68(float param_1,float param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int iVar6;
  bool in_PF;
  float10 fVar7;
  undefined local_30 [12];
  float local_24;
  float local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  iVar6 = *(int *)(*(int *)(DAT_01025658 + 0x106) + 4);
  piVar4 = (int *)(*(int *)(DAT_01025658 + 0x106) + 8);
  local_18 = iVar6;
  iVar3 = iVar6;
  if (0 < iVar6) {
    do {
      local_14 = iVar3;
      iVar3 = *piVar4;
      local_8 = param_2;
      if (*(char *)(iVar3 + 5) != '\0') {
        if (*(int **)(iVar3 + 0x6a) == (int *)0x0) {
          if (*(char *)(DAT_01025658 + 5) != '\0') {
            local_24 = 0.00000000;
            local_20 = 0.00000000;
            local_1c = 0;
            FUN_0100b316(DAT_0102503c,iVar3,&local_24);
            local_24 = local_24 * param_2;
            pfVar1 = (float *)(iVar3 + 0x36);
            local_20 = local_20 * param_2;
            *pfVar1 = *(float *)(iVar3 + 0x42) * *pfVar1;
            *(float *)(iVar3 + 0x3a) = *(float *)(iVar3 + 0x42) * *(float *)(iVar3 + 0x3a);
            FUN_0101cb8e(pfVar1,&local_24);
            fVar7 = (float10)FUN_01008ae9(pfVar1);
            *(float *)(iVar3 + 0x42) = (float)fVar7;
            if (in_PF) {
              fVar2 = 1.00000000 / *pfVar1;
            }
            else {
              fVar2 = 1000000000.00000000;
            }
            *(float *)(iVar3 + 0x52) = fVar2;
            if (in_PF) {
              fVar2 = 1.00000000 / *(float *)(iVar3 + 0x3a);
            }
            else {
              fVar2 = 1000000000.00000000;
            }
            *(float *)(iVar3 + 0x56) = fVar2;
            iVar6 = local_18;
          }
          local_c = param_1;
          local_10 = 10;
          fVar2 = param_2;
          while (((ushort)((ushort)(fVar2 < 0.00000100) << 8 | (ushort)(fVar2 == 0.00000100) << 0xe)
                  == 0 && (local_10 != 0))) {
            fVar7 = (float10)FUN_01014956(local_c,local_8,iVar3);
            local_10 = local_10 + -1;
            fVar2 = (float)((float10)local_8 - fVar7);
            local_c = (float)(fVar7 + (float10)local_c);
            local_8 = fVar2;
          }
        }
        else {
          *(float *)(iVar3 + 0x4a) = param_2;
          (**(code **)(**(int **)(iVar3 + 0x6a) + 0x18))(iVar3,local_30);
        }
      }
      piVar4 = piVar4 + 1;
      local_14 = local_14 + -1;
      iVar3 = local_14;
    } while (local_14 != 0);
  }
  if ((param_3 != 0) && (ppiVar5 = (int **)(*(int *)(DAT_01025658 + 0x106) + 8), 0 < iVar6)) {
    do {
      if (*(char *)((int)*ppiVar5 + 5) != '\0') {
        (**(code **)(**ppiVar5 + 0x14))();
      }
      ppiVar5 = ppiVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_01014bf9(int param_1)

{
  float fVar1;
  int iVar2;
  LPSTR pCVar3;
  undefined4 local_10;
  
  if (100 < param_1) {
    param_1 = 100;
  }
  fVar1 = (float)param_1 * 0.00100000;
  iVar2 = FUN_01014743(param_1);
  if (iVar2 == 0) {
    DAT_01025634 = _DAT_01025630 + fVar1;
    FUN_01014a68(_DAT_01025630,fVar1,1);
    _DAT_01025630 = DAT_01025634;
    DAT_01024f84 = DAT_01024f84 + param_1;
    if (((_DAT_0102563c == 0) && (_DAT_01025640 == 0)) && (_DAT_01025644 == 0)) {
      _DAT_0102564c = _DAT_0102564c - fVar1;
      if ((ushort)((ushort)(_DAT_0102564c < 0.00000000) << 8 |
                  (ushort)(_DAT_0102564c == 0.00000000) << 0xe) != 0) {
        _DAT_0102564c = 0.00000000;
      }
    }
    else {
      _DAT_0102564c = fVar1 * 4.00000000 + _DAT_0102564c;
    }
    FUN_0100758d();
    FUN_010133c7();
    FUN_01013d2d(*(int **)((int)DAT_01025658 + 0x32));
    if (*(int *)((int)DAT_01025658 + 0x172) == 0) {
      if ((ushort)((ushort)(_DAT_0102564c < 0.50000000) << 8 |
                  (ushort)(_DAT_0102564c == 0.50000000) << 0xe) == 0) {
        local_10 = 0x40000000;
        pCVar3 = FUN_01003752(0x19);
        FUN_010144b7(pCVar3,local_10);
      }
      if ((ushort)((ushort)(_DAT_0102564c < 1.00000000) << 8 |
                  (ushort)(_DAT_0102564c == 1.00000000) << 0xe) == 0) {
        FUN_01017791(DAT_01025658,_DAT_01025630);
      }
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01014d3d(void)

{
  _DAT_01024754 = 0;
  FUN_010133c7();
  _DAT_01024754 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01014d59(void)

{
  if (*(int *)(DAT_01025658 + 0x172) != 0) {
    FUN_01014143(DAT_01025650);
  }
  *(undefined4 *)(DAT_01025658 + 0x172) = 0;
  _DAT_0102564c = 0xc0000000;
  return;
}



void FUN_01014d8e(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_01025658 + 0x106) + 8);
  *(float *)(iVar1 + 0x36) = (float)param_1 * 30.00000000;
  *(float *)(iVar1 + 0x3a) = (float)param_2 * 30.00000000;
  fVar2 = (float10)FUN_01008ae9((float *)(iVar1 + 0x36));
  *(float *)(iVar1 + 0x42) = (float)fVar2;
  return;
}



void FUN_01014dcf(float param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool in_PF;
  float10 fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float local_14;
  float local_10;
  int local_8;
  
  local_14 = param_1 * 0.50000000;
  iVar10 = *(int *)(*(int *)(DAT_01025658 + 0x106) + 4);
  piVar6 = (int *)(*(int *)(DAT_01025658 + 0x106) + 8);
  local_10 = param_2 * 0.50000000;
  iVar3 = DAT_01025658;
  if (0 < iVar10) {
    do {
      local_8 = iVar10;
      iVar10 = *piVar6;
      if ((*(char *)(iVar10 + 5) != '\0') && (*(int *)(iVar10 + 0x6a) == 0)) {
        pfVar1 = (float *)(iVar10 + 0x36);
        *pfVar1 = *pfVar1 * *(float *)(iVar10 + 0x42);
        *(float *)(iVar10 + 0x3a) = *(float *)(iVar10 + 0x3a) * *(float *)(iVar10 + 0x42);
        FUN_0101cb8e(pfVar1,&local_14);
        fVar7 = (float10)FUN_01008ae9(pfVar1);
        *(float *)(iVar10 + 0x42) = (float)fVar7;
        if (in_PF) {
          fVar2 = 1.00000000 / *pfVar1;
        }
        else {
          fVar2 = 1000000000.00000000;
        }
        *(float *)(iVar10 + 0x52) = fVar2;
        if (in_PF) {
          fVar2 = 1.00000000 / *(float *)(iVar10 + 0x3a);
        }
        else {
          fVar2 = 1000000000.00000000;
        }
        *(float *)(iVar10 + 0x56) = fVar2;
        iVar3 = DAT_01025658;
      }
      piVar6 = piVar6 + 1;
      local_8 = local_8 + -1;
      iVar10 = local_8;
    } while (local_8 != 0);
  }
  iVar10 = *(int *)(iVar3 + 0xf6);
  iVar3 = *(int *)(iVar3 + 0xf2);
  iVar9 = 0;
  iVar8 = 0;
  floor((double)(0.50000000 - param_2));
  iVar4 = _ftol();
  floor((double)(param_1 + 0.50000000));
  iVar5 = _ftol();
  FUN_01013a8f(iVar5,iVar4,iVar8,iVar9,iVar3,iVar10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01014eee(void)

{
  if (_DAT_0102563c != 0) {
    FUN_01014dcf(0x40000000,0xbf800000);
  }
  _DAT_0102563c = 0;
  return;
}


